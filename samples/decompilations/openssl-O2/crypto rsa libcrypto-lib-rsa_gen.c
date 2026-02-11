
int ossl_rsa_multiprime_derive(long param_1)

{
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
  
  ctx = (BN_CTX *)BN_CTX_new_ex();
  if (ctx != (BN_CTX *)0x0) {
    BN_CTX_start(ctx);
    lVar3 = OPENSSL_sk_new_null();
    if (lVar3 != 0) {
      local_70 = OPENSSL_sk_new_null();
      if (local_70 == 0) {
        local_60 = (BIGNUM *)0x0;
        pBVar9 = (BIGNUM *)0x0;
        pBVar5 = (BIGNUM *)0x0;
        pBVar6 = (BIGNUM *)0x0;
        local_68 = (BIGNUM *)0x0;
        pBVar4 = (BIGNUM *)0x0;
        pBVar7 = (BIGNUM *)0x0;
        iVar1 = 0;
        goto LAB_00100295;
      }
      pBVar4 = BN_CTX_get(ctx);
      pBVar5 = BN_CTX_get(ctx);
      pBVar6 = BN_CTX_get(ctx);
      if (pBVar6 == (BIGNUM *)0x0) {
LAB_001006d8:
        iVar1 = 0;
        pBVar9 = (BIGNUM *)0x0;
        pBVar5 = (BIGNUM *)0x0;
      }
      else {
        BN_set_flags(pBVar4,4);
        BN_set_flags(pBVar5,4);
        BN_set_flags(pBVar6,4);
        pBVar7 = BN_copy(pBVar5,*(BIGNUM **)(param_1 + 0x28));
        if (pBVar7 == (BIGNUM *)0x0) {
LAB_00100318:
          pBVar5 = (BIGNUM *)0x0;
LAB_0010031d:
          pBVar9 = (BIGNUM *)0x0;
          local_60 = (BIGNUM *)0x0;
          pBVar6 = (BIGNUM *)0x0;
          pBVar4 = (BIGNUM *)0x0;
          iVar1 = 0;
          local_68 = (BIGNUM *)0x0;
          goto LAB_00100295;
        }
        pBVar8 = (BIGNUM *)OPENSSL_sk_value(in_R8,0);
        b = (BIGNUM *)OPENSSL_sk_value(in_R8,1);
        iVar1 = OPENSSL_sk_num(in_R8);
        if (iVar1 < 1) {
LAB_0010037a:
          pBVar7 = BN_value_one();
          iVar1 = BN_sub(pBVar5,pBVar8,pBVar7);
          if (iVar1 != 0) {
            pBVar7 = BN_value_one();
            iVar1 = BN_sub(pBVar6,b,pBVar7);
            if ((iVar1 != 0) && (iVar1 = BN_mul(pBVar4,pBVar5,pBVar6,ctx), iVar1 != 0)) {
              for (iVar1 = 2; iVar10 = OPENSSL_sk_num(), iVar1 < iVar10; iVar1 = iVar1 + 1) {
                pBVar9 = (BIGNUM *)OPENSSL_sk_value(in_R8,iVar1);
                pBVar7 = BN_new();
                if (pBVar7 == (BIGNUM *)0x0) goto LAB_001006d8;
                BN_set_flags(pBVar7,4);
                pBVar8 = BN_value_one();
                iVar10 = BN_sub(pBVar7,pBVar9,pBVar8);
                if ((iVar10 == 0) || (iVar10 = BN_mul(pBVar4,pBVar4,pBVar7,ctx), iVar10 == 0)) {
LAB_001006ee:
                  iVar1 = 0;
                  pBVar9 = (BIGNUM *)0x0;
                  local_60 = (BIGNUM *)0x0;
                  pBVar5 = (BIGNUM *)0x0;
                  pBVar6 = (BIGNUM *)0x0;
                  pBVar4 = (BIGNUM *)0x0;
                  local_68 = (BIGNUM *)0x0;
                  goto LAB_00100295;
                }
                uVar2 = OPENSSL_sk_num(local_70);
                iVar10 = OPENSSL_sk_insert(local_70,pBVar7,uVar2);
                if (iVar10 == 0) goto LAB_001006ee;
              }
              local_68 = (BIGNUM *)BN_secure_new();
              if (local_68 != (BIGNUM *)0x0) {
                local_60 = (BIGNUM *)BN_secure_new();
                if (local_60 == (BIGNUM *)0x0) {
                  pBVar9 = (BIGNUM *)0x0;
                  pBVar5 = (BIGNUM *)0x0;
                  pBVar6 = (BIGNUM *)0x0;
                  pBVar4 = (BIGNUM *)0x0;
                  pBVar7 = (BIGNUM *)0x0;
                  iVar1 = 0;
                  goto LAB_00100295;
                }
                iVar1 = BN_div((BIGNUM *)0x0,local_68,*(BIGNUM **)(param_1 + 0x38),pBVar5,ctx);
                if (iVar1 != 0) {
                  uVar2 = OPENSSL_sk_num(in_R9);
                  iVar1 = OPENSSL_sk_insert(in_R9,local_68,uVar2);
                  if (iVar1 != 0) {
                    iVar1 = BN_div((BIGNUM *)0x0,local_60,*(BIGNUM **)(param_1 + 0x38),pBVar6,ctx);
                    if (iVar1 != 0) {
                      uVar2 = OPENSSL_sk_num(in_R9);
                      iVar1 = OPENSSL_sk_insert(in_R9,local_60,uVar2);
                      if (iVar1 != 0) {
                        for (iVar1 = 2; iVar10 = OPENSSL_sk_num(), iVar1 < iVar10; iVar1 = iVar1 + 1
                            ) {
                          pBVar7 = (BIGNUM *)OPENSSL_sk_value(local_70,iVar1 + -2);
                          pBVar4 = BN_new();
                          if (pBVar4 == (BIGNUM *)0x0) {
                            pBVar9 = (BIGNUM *)0x0;
                            pBVar5 = (BIGNUM *)0x0;
                            pBVar6 = (BIGNUM *)0x0;
                            local_60 = (BIGNUM *)0x0;
                            pBVar7 = (BIGNUM *)0x0;
                            iVar1 = 0;
                            local_68 = (BIGNUM *)0x0;
                            goto LAB_00100295;
                          }
                          iVar10 = BN_div((BIGNUM *)0x0,pBVar4,*(BIGNUM **)(param_1 + 0x38),pBVar7,
                                          ctx);
                          if (iVar10 == 0) {
LAB_0010075a:
                            iVar1 = 0;
                            pBVar9 = (BIGNUM *)0x0;
                            pBVar5 = (BIGNUM *)0x0;
                            local_60 = (BIGNUM *)0x0;
                            pBVar7 = (BIGNUM *)0x0;
                            local_68 = (BIGNUM *)0x0;
                            pBVar6 = (BIGNUM *)0x0;
                            goto LAB_00100295;
                          }
                          uVar2 = OPENSSL_sk_num(in_R9);
                          iVar10 = OPENSSL_sk_insert(in_R9,pBVar4,uVar2);
                          if (iVar10 == 0) goto LAB_0010075a;
                        }
                        pBVar5 = BN_new();
                        if (pBVar5 == (BIGNUM *)0x0) goto LAB_001006d8;
                        pBVar7 = (BIGNUM *)OPENSSL_sk_value(in_R8,0);
                        pBVar9 = (BIGNUM *)OPENSSL_sk_value(in_R8,1);
                        pBVar7 = BN_mod_inverse(pBVar5,pBVar9,pBVar7,ctx);
                        if (pBVar7 != (BIGNUM *)0x0) {
                          uVar2 = OPENSSL_sk_num(in_stack_00000008);
                          iVar1 = OPENSSL_sk_insert(in_stack_00000008,pBVar5,uVar2);
                          if (iVar1 == 0) {
                            pBVar9 = (BIGNUM *)0x0;
                            iVar1 = 0;
                          }
                          else {
                            for (iVar1 = 2; iVar10 = OPENSSL_sk_num(), iVar1 < iVar10;
                                iVar1 = iVar1 + 1) {
                              pBVar7 = (BIGNUM *)OPENSSL_sk_value(lVar3,iVar1 + -2);
                              pBVar6 = BN_new();
                              if (pBVar6 == (BIGNUM *)0x0) {
                                pBVar9 = (BIGNUM *)0x0;
                                pBVar5 = (BIGNUM *)0x0;
                                local_60 = (BIGNUM *)0x0;
                                pBVar4 = (BIGNUM *)0x0;
                                pBVar7 = (BIGNUM *)0x0;
                                local_68 = (BIGNUM *)0x0;
                                iVar1 = 0;
                                goto LAB_00100295;
                              }
                              pBVar9 = (BIGNUM *)OPENSSL_sk_value(in_R8,iVar1);
                              pBVar7 = BN_mod_inverse(pBVar6,pBVar7,pBVar9,ctx);
                              if (pBVar7 == (BIGNUM *)0x0) {
LAB_00100794:
                                iVar1 = 0;
                                pBVar9 = (BIGNUM *)0x0;
                                local_60 = (BIGNUM *)0x0;
                                pBVar5 = (BIGNUM *)0x0;
                                pBVar4 = (BIGNUM *)0x0;
                                pBVar7 = (BIGNUM *)0x0;
                                local_68 = (BIGNUM *)0x0;
                                goto LAB_00100295;
                              }
                              uVar2 = OPENSSL_sk_num(in_stack_00000008);
                              iVar10 = OPENSSL_sk_insert(in_stack_00000008,pBVar6,uVar2);
                              if (iVar10 == 0) goto LAB_00100794;
                            }
                            iVar1 = 1;
                            pBVar9 = (BIGNUM *)0x0;
                            pBVar5 = (BIGNUM *)0x0;
                          }
                          goto LAB_00100245;
                        }
                        pBVar7 = (BIGNUM *)0x0;
                        goto LAB_0010031d;
                      }
                    }
                    pBVar9 = (BIGNUM *)0x0;
                    pBVar5 = (BIGNUM *)0x0;
                    pBVar6 = (BIGNUM *)0x0;
                    local_68 = (BIGNUM *)0x0;
                    pBVar4 = (BIGNUM *)0x0;
                    pBVar7 = (BIGNUM *)0x0;
                    goto LAB_00100295;
                  }
                }
                pBVar9 = (BIGNUM *)0x0;
                pBVar5 = (BIGNUM *)0x0;
                pBVar6 = (BIGNUM *)0x0;
                pBVar4 = (BIGNUM *)0x0;
                pBVar7 = (BIGNUM *)0x0;
                goto LAB_00100295;
              }
            }
          }
          goto LAB_001006d8;
        }
        pBVar7 = BN_value_one();
        iVar1 = BN_sub(pBVar6,pBVar8,pBVar7);
        if (iVar1 == 0) {
          pBVar9 = (BIGNUM *)0x0;
          pBVar5 = (BIGNUM *)0x0;
          iVar1 = 0;
        }
        else {
          BN_set_flags(pBVar6,4);
          pBVar7 = BN_mod_inverse(pBVar5,pBVar6,*(BIGNUM **)(param_1 + 0x30),ctx);
          if (pBVar7 == (BIGNUM *)0x0) goto LAB_00100318;
          iVar1 = OPENSSL_sk_num(in_R8);
          if (iVar1 < 2) goto LAB_0010037a;
          iVar1 = BN_mul(pBVar5,pBVar8,b,ctx);
          if ((iVar1 == 0) || (pBVar9 = BN_dup(pBVar5), pBVar9 == (BIGNUM *)0x0)) goto LAB_001006d8;
          uVar2 = OPENSSL_sk_num(lVar3);
          iVar1 = OPENSSL_sk_insert(lVar3,pBVar9,uVar2);
          if (iVar1 != 0) {
            iVar10 = 1;
            do {
              iVar10 = iVar10 + 1;
              iVar1 = OPENSSL_sk_num(in_R8);
              if (iVar1 <= iVar10) goto LAB_0010037a;
              pBVar7 = (BIGNUM *)OPENSSL_sk_value(in_R8,iVar10);
              iVar1 = BN_mul(pBVar5,pBVar5,pBVar7,ctx);
              if ((iVar1 == 0) || (pBVar9 = BN_dup(pBVar5), pBVar9 == (BIGNUM *)0x0))
              goto LAB_001006d8;
              uVar2 = OPENSSL_sk_num(lVar3);
              iVar1 = OPENSSL_sk_insert(lVar3,pBVar9,uVar2);
            } while (iVar1 != 0);
          }
          pBVar5 = (BIGNUM *)0x0;
        }
      }
LAB_00100245:
      local_60 = (BIGNUM *)0x0;
      pBVar6 = (BIGNUM *)0x0;
      pBVar4 = (BIGNUM *)0x0;
      pBVar7 = (BIGNUM *)0x0;
      local_68 = (BIGNUM *)0x0;
      goto LAB_00100295;
    }
  }
  local_60 = (BIGNUM *)0x0;
  iVar1 = 0;
  pBVar9 = (BIGNUM *)0x0;
  pBVar5 = (BIGNUM *)0x0;
  pBVar6 = (BIGNUM *)0x0;
  pBVar4 = (BIGNUM *)0x0;
  pBVar7 = (BIGNUM *)0x0;
  lVar3 = 0;
  local_68 = (BIGNUM *)0x0;
  local_70 = 0;
LAB_00100295:
  BN_free(pBVar6);
  BN_free(pBVar4);
  BN_free(pBVar7);
  BN_free(pBVar9);
  OPENSSL_sk_pop_free(lVar3,BN_free);
  OPENSSL_sk_pop_free(local_70,BN_free);
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  BN_clear_free(local_68);
  BN_clear_free(local_60);
  BN_clear_free(pBVar5);
  return iVar1;
}



undefined8
RSA_generate_multi_prime_key
          (long param_1,ulong param_2,int param_3,BIGNUM *param_4,BN_GENCB *param_5)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  BIGNUM *r;
  undefined8 *puVar11;
  BIGNUM *pBVar12;
  undefined8 *puVar13;
  BIGNUM *pBVar14;
  ulong uVar15;
  long lVar16;
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
  int local_58 [6];
  long local_40;
  
  iVar17 = (int)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x70);
  if (UNRECOVERED_JUMPTABLE_00 != (code *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_3);
      return uVar6;
    }
    goto LAB_00100d76;
  }
  UNRECOVERED_JUMPTABLE_00 = *(code **)(*(long *)(param_1 + 0x18) + 0x68);
  if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
    if ((param_3 == 2) && (0x7ff < iVar17)) {
      if ((param_4 == (BIGNUM *)0x0) || (iVar2 = BN_num_bits(param_4), 0x10 < iVar2)) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = ossl_rsa_sp800_56b_generate_key(param_1,param_2 & 0xffffffff,param_4,param_5);
          return uVar6;
        }
        goto LAB_00100d76;
      }
      iVar2 = ossl_rsa_check_public_exponent(param_4);
      if (iVar2 == 0) goto LAB_00100ccb;
LAB_00100933:
      iVar2 = ossl_rsa_multip_cap(iVar17);
      if (iVar2 < param_3) {
LAB_00100c5d:
        ERR_new();
        uVar6 = 0;
        ERR_set_debug("crypto/rsa/rsa_gen.c",0x126,"rsa_multiprime_keygen");
        ERR_set_error(4,0xa5,0);
        goto LAB_00100871;
      }
      local_d0 = OPENSSL_sk_new_null();
      if (local_d0 == 0) goto LAB_00100c29;
      lVar7 = OPENSSL_sk_new_null();
      if (lVar7 == 0) {
        local_c8 = (BN_CTX *)0x0;
        lVar8 = 0;
      }
      else {
        lVar8 = OPENSSL_sk_new_null();
        if (lVar8 == 0) {
          local_c8 = (BN_CTX *)0x0;
        }
        else {
          local_c8 = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 8));
          if (local_c8 != (BN_CTX *)0x0) {
            BN_CTX_start(local_c8);
            pBVar9 = BN_CTX_get(local_c8);
            pBVar10 = BN_CTX_get(local_c8);
            r = BN_CTX_get(local_c8);
            if (r != (BIGNUM *)0x0) {
              lVar16 = 0;
              do {
                local_58[lVar16] = (uint)((int)lVar16 < iVar17 % param_3) + iVar17 / param_3;
                lVar16 = lVar16 + 1;
              } while ((int)lVar16 < param_3);
              *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
              if (*(long *)(param_1 + 0x28) == 0) {
                pBVar12 = BN_new();
                *(BIGNUM **)(param_1 + 0x28) = pBVar12;
                if (pBVar12 == (BIGNUM *)0x0) goto LAB_00100b42;
              }
              lVar16 = *(long *)(param_1 + 0x38);
              if (lVar16 == 0) {
                lVar16 = BN_secure_new();
                *(long *)(param_1 + 0x38) = lVar16;
                if (lVar16 == 0) goto LAB_00100b42;
              }
              BN_set_flags(lVar16,4);
              if (*(long *)(param_1 + 0x30) == 0) {
                pBVar12 = BN_new();
                *(BIGNUM **)(param_1 + 0x30) = pBVar12;
                if (pBVar12 == (BIGNUM *)0x0) goto LAB_00100b42;
              }
              if (*(long *)(param_1 + 0x40) == 0) {
                lVar16 = BN_secure_new();
                *(long *)(param_1 + 0x40) = lVar16;
                if (lVar16 == 0) goto LAB_00100b42;
              }
              BN_set_flags(*(undefined8 *)(param_1 + 0x40),4);
              if (*(long *)(param_1 + 0x48) == 0) {
                lVar16 = BN_secure_new();
                *(long *)(param_1 + 0x48) = lVar16;
                if (lVar16 == 0) goto LAB_00100b42;
              }
              BN_set_flags(*(undefined8 *)(param_1 + 0x48),4);
              if (param_3 == 2) {
                puVar11 = (undefined8 *)0x0;
                local_c0 = 0;
              }
              else {
                *(undefined4 *)(param_1 + 0x10) = 1;
                local_c0 = OPENSSL_sk_new_reserve(0,param_3 + -2);
                if (local_c0 == 0) goto LAB_00100b42;
                if (*(long *)(param_1 + 0x88) != 0) {
                  OPENSSL_sk_pop_free(*(long *)(param_1 + 0x88),&ossl_rsa_multip_info_free);
                }
                iVar17 = 2;
                *(long *)(param_1 + 0x88) = local_c0;
                do {
                  puVar11 = (undefined8 *)ossl_rsa_multip_info_new();
                  if (puVar11 == (undefined8 *)0x0) goto LAB_00100b42;
                  iVar17 = iVar17 + 1;
                  OPENSSL_sk_push(local_c0,puVar11);
                } while (iVar17 < param_3);
              }
              pBVar12 = BN_copy(*(BIGNUM **)(param_1 + 0x30),param_4);
              if (pBVar12 != (BIGNUM *)0x0) {
                iVar17 = 0;
                local_98 = 0;
                local_7c = 0;
LAB_00100de9:
                if (iVar17 == 0) {
                  pBVar12 = *(BIGNUM **)(param_1 + 0x40);
                }
                else if (iVar17 == 1) {
                  pBVar12 = *(BIGNUM **)(param_1 + 0x48);
                }
                else {
                  puVar11 = (undefined8 *)OPENSSL_sk_value(local_c0,iVar17 + -2);
                  pBVar12 = (BIGNUM *)*puVar11;
                }
                BN_set_flags(pBVar12,4);
                iVar1 = local_58[iVar17];
                local_78 = 0;
                iVar2 = 0;
                local_7c = local_7c + iVar1;
                local_94 = iVar1;
LAB_00100e30:
                while( true ) {
                  iVar3 = BN_generate_prime_ex2(pBVar12,local_94,0,0,0,param_5,local_c8);
                  if (iVar3 == 0) goto LAB_00100b42;
                  if (iVar17 < 1) break;
                  iVar4 = BN_cmp(pBVar12,*(BIGNUM **)(param_1 + 0x40));
                  iVar3 = 0;
                  while (iVar4 != 0) {
                    iVar18 = iVar3 + 1;
                    if (iVar18 == iVar17) goto LAB_00100ea7;
                    if (iVar18 == 1) {
                      pBVar14 = *(BIGNUM **)(param_1 + 0x48);
                    }
                    else {
                      puVar13 = (undefined8 *)OPENSSL_sk_value(local_c0,iVar3 + -1);
                      pBVar14 = (BIGNUM *)*puVar13;
                    }
                    iVar4 = BN_cmp(pBVar12,pBVar14);
                    iVar3 = iVar18;
                  }
                }
LAB_00100ea7:
                pBVar14 = BN_value_one();
                iVar3 = BN_sub(r,pBVar12,pBVar14);
                if (iVar3 == 0) goto LAB_00100b42;
                ERR_set_mark();
                BN_set_flags(r,4);
                pBVar14 = BN_mod_inverse(pBVar10,r,*(BIGNUM **)(param_1 + 0x30),local_c8);
                if (pBVar14 == (BIGNUM *)0x0) {
                  uVar15 = ERR_peek_last_error();
                  if ((((uVar15 & 0x80000000) != 0) || ((char)(uVar15 >> 0x17) != '\x03')) ||
                     (((uint)uVar15 & 0x7fffff) != 0x6c)) goto LAB_00100b42;
                  ERR_pop_to_mark();
                  iVar3 = BN_GENCB_call(param_5,2,local_98);
                  local_98 = local_98 + 1;
                  if (iVar3 == 0) goto LAB_00100b42;
                  goto LAB_00100e30;
                }
                if (iVar17 == 1) {
                  iVar3 = BN_mul(pBVar10,*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48),
                                 local_c8);
                }
                else {
                  if (iVar17 == 0) {
                    iVar17 = BN_GENCB_call(param_5,3,0);
                    if ((iVar17 == 0) || (pBVar12 = BN_dup(pBVar12), pBVar12 == (BIGNUM *)0x0))
                    goto LAB_00100b42;
                    uVar5 = OPENSSL_sk_num(local_d0);
                    iVar17 = OPENSSL_sk_insert(local_d0,pBVar12,uVar5);
                    if (iVar17 == 0) goto LAB_00100b42;
                    iVar17 = 0;
                    goto LAB_0010114d;
                  }
                  iVar3 = BN_mul(pBVar10,*(BIGNUM **)(param_1 + 0x28),pBVar12,local_c8);
                }
                if ((iVar3 == 0) || (iVar3 = BN_rshift(r,pBVar10,local_7c + -4), iVar3 == 0))
                goto LAB_00100b42;
                uVar15 = BN_get_word(r);
                if (uVar15 - 9 < 7) {
                  pBVar14 = *(BIGNUM **)(param_1 + 0x28);
                  if (1 < iVar17) {
                    pBVar14 = BN_copy((BIGNUM *)puVar11[3],pBVar14);
                    if (pBVar14 == (BIGNUM *)0x0) goto LAB_00100b42;
                    pBVar14 = *(BIGNUM **)(param_1 + 0x28);
                  }
                  pBVar14 = BN_copy(pBVar14,pBVar10);
                  if (((pBVar14 == (BIGNUM *)0x0) ||
                      (iVar2 = BN_GENCB_call(param_5,3,iVar17), iVar2 == 0)) ||
                     (pBVar12 = BN_dup(pBVar12), pBVar12 == (BIGNUM *)0x0)) goto LAB_00100b42;
                  uVar5 = OPENSSL_sk_num(local_d0);
                  iVar2 = OPENSSL_sk_insert(local_d0,pBVar12,uVar5);
                  if (iVar2 == 0) goto LAB_00100b42;
                  iVar17 = iVar17 + 1;
                  if (iVar17 < param_3) goto LAB_00100de9;
                  iVar17 = BN_cmp(*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_1 + 0x48));
                  if (iVar17 < 0) {
                    uVar6 = *(undefined8 *)(param_1 + 0x40);
                    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x48);
                    *(undefined8 *)(param_1 + 0x48) = uVar6;
                    uVar6 = OPENSSL_sk_delete(local_d0,0);
                    iVar17 = OPENSSL_sk_insert(local_d0,uVar6,1);
                    if (iVar17 == 0) goto LAB_00100b42;
                  }
                  pBVar12 = BN_value_one();
                  iVar17 = BN_sub(pBVar10,*(BIGNUM **)(param_1 + 0x40),pBVar12);
                  if (iVar17 == 0) goto LAB_00100b42;
                  pBVar12 = BN_value_one();
                  iVar17 = BN_sub(r,*(BIGNUM **)(param_1 + 0x48),pBVar12);
                  if ((iVar17 == 0) || (iVar17 = BN_mul(pBVar9,pBVar10,r,local_c8), iVar17 == 0))
                  goto LAB_00100b42;
                  iVar17 = 2;
                  goto LAB_001012e5;
                }
                iVar3 = BN_GENCB_call(param_5,2,local_98);
                if (iVar3 == 0) goto LAB_00100b42;
                if (param_3 == 5) {
                  if (uVar15 < 9) {
                    iVar2 = iVar2 + 1;
                    local_94 = iVar2 + iVar1;
                  }
                  else {
                    iVar2 = iVar2 + -1;
                    local_94 = iVar2 + iVar1;
                  }
                }
                else if (local_78 == 4) goto LAB_00101118;
                local_78 = local_78 + 1;
                local_98 = local_98 + 1;
                goto LAB_00100e30;
              }
            }
          }
        }
      }
LAB_00100b42:
      uVar6 = 0;
      OPENSSL_sk_free(local_d0);
      OPENSSL_sk_free(lVar7);
      OPENSSL_sk_free(lVar8);
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_gen.c",600,"rsa_multiprime_keygen");
      ERR_set_error(4,0x80003,0);
      goto LAB_00100b90;
    }
    if (iVar17 < 0x200) {
      ERR_new();
      ERR_set_debug("crypto/rsa/rsa_gen.c",0x118,"rsa_multiprime_keygen");
      ERR_set_error(4,0x78,0);
LAB_00100c29:
      uVar6 = 0;
    }
    else if (param_4 == (BIGNUM *)0x0) {
      ERR_new();
      uVar6 = 0;
      ERR_set_debug("crypto/rsa/rsa_gen.c",0x11c,"rsa_multiprime_keygen");
      ERR_set_error(4,0x65,0);
    }
    else {
      iVar2 = ossl_rsa_check_public_exponent(param_4);
      if (iVar2 != 0) {
        if (1 < param_3) goto LAB_00100933;
        goto LAB_00100c5d;
      }
LAB_00100ccb:
      ERR_new();
      uVar6 = 0;
      ERR_set_debug("crypto/rsa/rsa_gen.c",0x121,"rsa_multiprime_keygen");
      ERR_set_error(4,0xb2,0);
    }
  }
  else {
    uVar6 = 0;
    if (param_3 == 2) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001008ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2,param_4,param_5);
        return uVar6;
      }
      goto LAB_00100d76;
    }
  }
  goto LAB_00100871;
LAB_001012e5:
  if (param_3 <= iVar17) goto code_r0x001012ea;
  puVar11 = (undefined8 *)OPENSSL_sk_value(local_c0,iVar17 + -2);
  pBVar10 = BN_value_one();
  iVar2 = BN_sub((BIGNUM *)puVar11[1],(BIGNUM *)*puVar11,pBVar10);
  if ((iVar2 == 0) || (iVar2 = BN_mul(pBVar9,pBVar9,(BIGNUM *)puVar11[1],local_c8), iVar2 == 0))
  goto LAB_00100b42;
  iVar17 = iVar17 + 1;
  goto LAB_001012e5;
LAB_00101118:
  OPENSSL_sk_pop_free(local_d0);
  local_d0 = OPENSSL_sk_new_null();
  if (local_d0 == 0) goto LAB_00100b42;
  iVar17 = -1;
  local_7c = 0;
  local_98 = local_98 + 1;
LAB_0010114d:
  iVar17 = iVar17 + 1;
  goto LAB_00100de9;
code_r0x001012ea:
  BN_set_flags(pBVar9,4);
  pBVar9 = BN_mod_inverse(*(BIGNUM **)(param_1 + 0x38),*(BIGNUM **)(param_1 + 0x30),pBVar9,local_c8)
  ;
  if ((pBVar9 == (BIGNUM *)0x0) ||
     (lVar16 = lVar8,
     iVar17 = ossl_rsa_multiprime_derive
                        (param_1,param_2 & 0xffffffff,param_3,param_4,local_d0,lVar7), iVar17 == 0))
  goto LAB_00100b42;
  pBVar9 = (BIGNUM *)OPENSSL_sk_delete(local_d0,0,lVar16,pBVar9);
  BN_clear_free(pBVar9);
  pBVar9 = (BIGNUM *)OPENSSL_sk_delete(local_d0,0);
  BN_clear_free(pBVar9);
  uVar6 = OPENSSL_sk_delete(lVar7,0);
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  uVar6 = OPENSSL_sk_delete(lVar7,0);
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  uVar6 = OPENSSL_sk_delete(lVar8,0);
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  for (iVar17 = 2; iVar17 < param_3; iVar17 = iVar17 + 1) {
    puVar11 = (undefined8 *)OPENSSL_sk_value(local_c0,iVar17 + -2);
    pBVar9 = (BIGNUM *)OPENSSL_sk_delete(local_d0,0);
    BN_copy((BIGNUM *)*puVar11,pBVar9);
    BN_clear_free(pBVar9);
    pBVar9 = (BIGNUM *)OPENSSL_sk_delete(lVar7,0);
    pBVar10 = BN_copy((BIGNUM *)puVar11[1],pBVar9);
    BN_clear_free(pBVar9);
    if (pBVar10 == (BIGNUM *)0x0) goto LAB_00100b42;
    pBVar9 = (BIGNUM *)OPENSSL_sk_delete(lVar8,0);
    pBVar10 = BN_copy((BIGNUM *)puVar11[2],pBVar9);
    BN_clear_free(pBVar9);
    if (pBVar10 == (BIGNUM *)0x0) goto LAB_00100b42;
  }
  uVar6 = 1;
  OPENSSL_sk_free(local_d0);
  OPENSSL_sk_free(lVar7);
  OPENSSL_sk_free(lVar8);
LAB_00100b90:
  BN_CTX_end(local_c8);
  BN_CTX_free(local_c8);
LAB_00100871:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00100d76:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int RSA_generate_key_ex(RSA *rsa,int bits,BIGNUM *e,BN_GENCB *cb)

{
  int iVar1;
  
  if (*(code **)(rsa->engine + 0x68) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(rsa->engine + 0x68))();
    return iVar1;
  }
  iVar1 = RSA_generate_multi_prime_key(rsa,bits,2,e,cb);
  return iVar1;
}


