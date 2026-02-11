
undefined8
generate_p(BN_CTX *param_1,EVP_MD *param_2,int param_3,int param_4,void *param_5,size_t param_6,
          BIGNUM *param_7,BIGNUM *param_8,int param_9,BN_GENCB *param_10,int *param_11,
          uint *param_12)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *rem;
  BIGNUM *r_00;
  BIGNUM *ret;
  BIGNUM *pBVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_100;
  int local_9c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BN_CTX_start(param_1);
  r = BN_CTX_get(param_1);
  a = BN_CTX_get(param_1);
  rem = BN_CTX_get(param_1);
  r_00 = BN_CTX_get(param_1);
  ret = BN_CTX_get(param_1);
  if (ret != (BIGNUM *)0x0) {
    pBVar4 = BN_value_one();
    iVar2 = BN_lshift(r_00,pBVar4,param_9 + -1);
    if ((iVar2 != 0) && (iVar2 = EVP_MD_get_size(param_2), 0 < iVar2)) {
      if (-1 < param_3) {
        local_100 = (int)param_6;
        local_9c = 0;
        do {
          BN_zero_ex(r);
          if (-1 < param_4) {
            iVar7 = 0;
            iVar8 = 0;
            do {
              if (-1 < (int)(local_100 - 1U)) {
                uVar5 = (ulong)(local_100 - 1U);
                do {
                  pcVar1 = (char *)((long)param_5 + uVar5);
                  *pcVar1 = *pcVar1 + '\x01';
                  if (*pcVar1 != '\0') break;
                  uVar5 = uVar5 - 1;
                } while (-1 < (int)uVar5);
              }
              iVar3 = EVP_Digest(param_5,param_6,local_88,(uint *)0x0,param_2,(ENGINE *)0x0);
              if ((((iVar3 == 0) ||
                   (pBVar4 = BN_bin2bn(local_88,iVar2,ret), pBVar4 == (BIGNUM *)0x0)) ||
                  (iVar3 = BN_lshift(ret,ret,iVar7), iVar3 == 0)) ||
                 (iVar3 = BN_add(r,r,ret), iVar3 == 0)) goto LAB_001000e1;
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + iVar2 * 8;
            } while (iVar8 <= param_4);
          }
          iVar7 = BN_mask_bits(r,param_9 + -1);
          if (((iVar7 == 0) || (pBVar4 = BN_copy(a,r), pBVar4 == (BIGNUM *)0x0)) ||
             ((iVar7 = BN_add(a,a,r_00), iVar7 == 0 ||
              ((iVar7 = BN_lshift1(ret,param_7), iVar7 == 0 ||
               (iVar7 = BN_div((BIGNUM *)0x0,rem,a,ret,param_1), iVar7 == 0)))))) goto LAB_001000e1;
          pBVar4 = BN_value_one();
          iVar7 = BN_sub(ret,rem,pBVar4);
          if ((iVar7 == 0) || (iVar7 = BN_sub(param_8,a,ret), iVar7 == 0)) goto LAB_001000e1;
          iVar7 = BN_cmp(param_8,r_00);
          if (-1 < iVar7) {
            iVar7 = BN_check_prime(param_8,param_1,param_10);
            if (0 < iVar7) {
              uVar6 = 1;
              *param_11 = local_9c;
              goto LAB_001000e6;
            }
            if (iVar7 != 0) goto LAB_001000e1;
          }
          local_9c = local_9c + 1;
          if (param_3 < local_9c) break;
          iVar7 = BN_GENCB_call(param_10,0,local_9c);
          if (iVar7 == 0) goto LAB_001000e1;
        } while( true );
      }
      *param_12 = *param_12 | 1;
      uVar6 = 0;
      goto LAB_001000e6;
    }
  }
LAB_001000e1:
  uVar6 = 0xffffffff;
LAB_001000e6:
  BN_CTX_end(param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined8
generate_unverifiable_g
          (BN_CTX *param_1,BN_MONT_CTX *param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          BIGNUM *param_6,BIGNUM *param_7,int *param_8)

{
  int iVar1;
  BIGNUM *b;
  int iVar2;
  
  iVar2 = 2;
  iVar1 = BN_set_word(param_4,2);
  if (iVar1 != 0) {
    while (iVar1 = BN_mod_exp_mont(param_3,param_4,param_6,param_5,param_1,param_2), iVar1 != 0) {
      b = BN_value_one();
      iVar1 = BN_cmp(param_3,b);
      if (0 < iVar1) {
        *param_8 = iVar2;
        return 1;
      }
      iVar1 = BN_add_word(param_4,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = BN_cmp(param_4,param_7);
      if (-1 < iVar1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}



int ossl_ffc_params_FIPS186_4_gen_verify
              (undefined8 param_1,long *param_2,uint param_3,int param_4,ulong param_5,ulong param_6
              ,uint *param_7,BN_GENCB *param_8)

{
  long lVar1;
  byte *pbVar2;
  byte *s;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  EVP_MD *type;
  BN_CTX *ctx;
  BIGNUM *pBVar10;
  BIGNUM *pBVar11;
  BIGNUM *dv;
  BIGNUM *pBVar12;
  BIGNUM *ret;
  size_t count;
  BN_MONT_CTX *mont;
  EVP_MD_CTX *ctx_00;
  BIGNUM *a;
  undefined8 uVar13;
  int iVar14;
  char *pcVar15;
  void *pvVar16;
  long in_FS_OFFSET;
  long local_170;
  uint local_15c;
  void *local_158;
  ushort local_130;
  byte local_128;
  void *local_118;
  BIGNUM *local_110;
  BIGNUM *local_e0;
  uint local_d0;
  int local_cc;
  int local_90;
  undefined4 local_8c;
  byte local_88;
  ushort local_87;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_15c = 0;
  local_90 = 0;
  local_8c = 0;
  if (param_3 == 0) {
    local_15c = *(uint *)(param_2 + 8);
  }
  pcVar15 = (char *)param_2[9];
  *param_7 = 0;
  if (pcVar15 == (char *)0x0) {
    if (param_6 == 0) {
      pcVar15 = "SHA-256";
      if (param_5 < 0x800) {
        pcVar15 = "SHA1";
      }
      param_6 = (-(ulong)(param_5 < 0x800) & 0xffffffffffffffa0) + 0x100;
      goto LAB_001004d6;
    }
    if (param_6 == 0xa0) {
      pcVar15 = "SHA1";
      goto LAB_001004d6;
    }
    pcVar15 = "SHA-224";
    if (param_6 == 0xe0) goto LAB_001004d6;
    if (param_6 == 0x100) {
      pcVar15 = "SHA-256";
      goto LAB_001004d6;
    }
    *param_7 = 0x20;
    type = (EVP_MD *)0x0;
    local_170 = 0;
LAB_001005d0:
    if (param_2[4] == 0) {
      ctx = (BN_CTX *)0x0;
      CRYPTO_free((void *)0x0);
      iVar4 = 0;
      mont = (BN_MONT_CTX *)0x0;
      goto LAB_00100628;
    }
    ctx = (BN_CTX *)0x0;
    mont = (BN_MONT_CTX *)0x0;
    local_118 = (void *)0x0;
    iVar4 = 0;
    local_158 = (void *)0x0;
LAB_001005f2:
    CRYPTO_free(local_118);
    CRYPTO_free(local_158);
    if (ctx == (BN_CTX *)0x0) goto LAB_00100628;
  }
  else {
LAB_001004d6:
    type = (EVP_MD *)EVP_MD_fetch(param_1,pcVar15,param_2[10]);
    if (type == (EVP_MD *)0x0) {
      local_170 = 0;
      goto LAB_001005d0;
    }
    iVar4 = EVP_MD_get_size();
    if (iVar4 < 1) {
LAB_001005c7:
      local_170 = 0;
      goto LAB_001005d0;
    }
    if (param_6 == 0) {
      param_6 = (long)(iVar4 * 8);
    }
    if (param_5 <= param_6) {
LAB_001005c0:
      *param_7 = 0x20000;
      goto LAB_001005c7;
    }
    if (param_4 != 1) {
      if (param_4 == 0) {
        if ((((0xbff < param_5) && (0xff < param_6)) || ((0x7ff < param_5 && (0xdf < param_6)))) ||
           ((0x3ff < param_5 && (0x9f < param_6)))) goto LAB_00100769;
        ERR_new();
        ERR_set_debug("crypto/ffc/ffc_params_generate.c",0x57,"ffc_validate_LN");
        ERR_set_error(10,0x72,0);
      }
      goto LAB_001005c0;
    }
    if (((param_5 != 0x400) || (param_6 != 0xa0)) &&
       ((param_5 != 0x800 || ((param_6 - 0xe0 & 0xffffffffffffffdf) != 0)))) {
      ERR_new();
      ERR_set_debug("crypto/ffc/ffc_params_generate.c",0x4d,"ffc_validate_LN");
      ERR_set_error(5,0x7f,0);
      goto LAB_001005c0;
    }
LAB_00100769:
    local_170 = EVP_MD_CTX_new();
    if (local_170 == 0) goto LAB_001005c7;
    ctx = (BN_CTX *)BN_CTX_new_ex();
    if (ctx == (BN_CTX *)0x0) goto LAB_001005d0;
    BN_CTX_start(ctx);
    pBVar10 = BN_CTX_get(ctx);
    pBVar11 = BN_CTX_get(ctx);
    dv = BN_CTX_get(ctx);
    pBVar12 = BN_CTX_get(ctx);
    ret = BN_CTX_get(ctx);
    if (ret == (BIGNUM *)0x0) {
      local_158 = (void *)0x0;
      mont = (BN_MONT_CTX *)0x0;
      iVar4 = 0;
      local_118 = (void *)0x0;
      goto LAB_001009b8;
    }
    count = (long)iVar4;
    if (param_2[5] != 0) {
      count = param_2[5];
    }
    local_118 = (void *)param_2[4];
    if (param_3 != 0) {
      local_110 = (BIGNUM *)*param_2;
      if ((local_110 == (BIGNUM *)0x0) != (param_2[1] == 0)) {
        local_118 = (void *)0x0;
        uVar5 = 0x800;
        goto LAB_00100859;
      }
LAB_00100936:
      if ((local_110 != (BIGNUM *)0x0) && ((local_15c & 1) == 0)) {
LAB_00100a0c:
        local_e0 = (BIGNUM *)param_2[1];
        local_158 = (void *)0x0;
LAB_00100a28:
        mont = BN_MONT_CTX_new();
        if (((mont != (BN_MONT_CTX *)0x0) &&
            (iVar4 = BN_MONT_CTX_set(mont,local_110,ctx), iVar4 != 0)) &&
           (((local_15c & 2) == 0 ||
            (iVar4 = ossl_ffc_params_validate_unverifiable_g
                               (ctx,mont,local_110,local_e0,param_2[2],ret,param_7), iVar4 != 0))))
        {
          pBVar12 = BN_value_one();
          iVar4 = BN_sub(pBVar11,local_110,pBVar12);
          if ((iVar4 != 0) && (iVar4 = BN_div(dv,(BIGNUM *)0x0,pBVar11,local_e0,ctx), iVar4 != 0)) {
            if ((local_118 == (void *)0x0) || (lVar1 = param_2[7], (int)lVar1 == -1)) {
              local_d0 = param_3;
              if (param_3 == 0) {
LAB_00101300:
                iVar4 = BN_GENCB_call(param_8,3,1);
                if (iVar4 == 0) goto LAB_001009b8;
LAB_0010132e:
                iVar4 = ((local_d0 ^ 1) & local_15c >> 1 & 1) + 1;
                goto LAB_001009b8;
              }
              iVar4 = generate_unverifiable_g(ctx,mont,pBVar10,ret,local_110,dv,pBVar11,&local_8c);
              if (iVar4 != 0) {
                local_d0 = 0;
LAB_00101453:
                iVar4 = BN_GENCB_call(param_8,3,1);
                if (iVar4 != 0) {
                  if ((BIGNUM *)*param_2 != local_110) {
                    BN_free((BIGNUM *)*param_2);
                    pBVar11 = BN_dup(local_110);
                    *param_2 = (long)pBVar11;
                  }
                  if ((BIGNUM *)param_2[1] != local_e0) {
                    BN_free((BIGNUM *)param_2[1]);
                    pBVar11 = BN_dup(local_e0);
                    param_2[1] = (long)pBVar11;
                  }
                  if ((BIGNUM *)param_2[2] != pBVar10) {
                    BN_free((BIGNUM *)param_2[2]);
                    pBVar10 = BN_dup(pBVar10);
                    param_2[2] = (long)pBVar10;
                  }
                  if (((*param_2 != 0) && (param_2[1] != 0)) &&
                     ((param_2[2] != 0 &&
                      (iVar4 = ossl_ffc_params_set_validate_params(param_2,local_118,count,local_90)
                      , iVar4 != 0)))) {
                    *(undefined4 *)((long)param_2 + 0x3c) = local_8c;
                    goto LAB_0010132e;
                  }
                }
              }
            }
            else {
              iVar4 = EVP_MD_get_size(type);
              if ((0 < iVar4) &&
                 (ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new(), ctx_00 != (EVP_MD_CTX *)0x0)) {
                iVar7 = 1;
                while( true ) {
                  local_128 = (byte)(int)lVar1;
                  local_88 = local_128;
                  local_130 = (ushort)iVar7;
                  local_87 = local_130 << 8 | local_130 >> 8;
                  iVar6 = EVP_DigestInit_ex(ctx_00,type,(ENGINE *)0x0);
                  if (((iVar6 == 0) ||
                      (iVar6 = EVP_DigestUpdate(ctx_00,local_118,count), iVar6 == 0)) ||
                     (iVar6 = EVP_DigestUpdate(ctx_00,&ggen_0,4), iVar6 == 0)) break;
                  iVar6 = EVP_DigestUpdate(ctx_00,&local_88,3);
                  if (((iVar6 == 0) ||
                      (iVar6 = EVP_DigestFinal_ex(ctx_00,&local_88,(uint *)0x0), iVar6 == 0)) ||
                     ((pBVar11 = BN_bin2bn(&local_88,iVar4,ret), pBVar11 == (BIGNUM *)0x0 ||
                      (iVar6 = BN_mod_exp_mont(pBVar10,ret,dv,local_110,ctx,mont), iVar6 == 0))))
                  break;
                  pBVar11 = BN_value_one();
                  iVar6 = BN_cmp(pBVar10,pBVar11);
                  if (0 < iVar6) {
                    EVP_MD_CTX_free(ctx_00);
                    if (param_3 != 0) {
                      local_d0 = 1;
                      goto LAB_00101453;
                    }
                    iVar4 = BN_cmp(pBVar10,(BIGNUM *)param_2[2]);
                    local_d0 = 1;
                    if (iVar4 == 0) goto LAB_00101300;
                    *param_7 = 0x8000;
                    goto LAB_00100ccc;
                  }
                  iVar7 = iVar7 + 1;
                  if (iVar7 == 0x10000) break;
                }
                EVP_MD_CTX_free(ctx_00);
              }
              *param_7 = 0x400;
            }
          }
        }
LAB_00100ccc:
        iVar4 = 0;
        goto LAB_001009b8;
      }
LAB_00100949:
      local_110 = BN_CTX_get(ctx);
      local_e0 = BN_CTX_get(ctx);
      if (local_e0 == (BIGNUM *)0x0) {
LAB_0010099d:
        local_158 = (void *)0x0;
        mont = (BN_MONT_CTX *)0x0;
        iVar4 = 0;
      }
      else {
        if (count << 3 < param_6) {
          *param_7 = 0x40000;
          goto LAB_0010099d;
        }
        local_158 = CRYPTO_malloc((int)count,"crypto/ffc/ffc_params_generate.c",0x286);
        if (local_158 == (void *)0x0) goto LAB_0010099d;
        iVar7 = (int)param_5;
        if (local_118 == (void *)0x0) {
          if (param_3 == 0) {
            *param_7 = 0x200;
          }
          else {
            local_118 = CRYPTO_malloc((int)count,"crypto/ffc/ffc_params_generate.c",0x291);
            if (local_118 != (void *)0x0) {
              local_cc = iVar7 * 4 + -1;
              goto LAB_00100d73;
            }
          }
          mont = (BN_MONT_CTX *)0x0;
          local_118 = (void *)0x0;
          iVar4 = 0;
        }
        else {
          local_cc = iVar7 * 4 + -1;
          if ((param_3 == 0) &&
             (bVar3 = local_cc < (int)param_2[6], local_cc = (int)param_2[6], bVar3)) {
            *param_7 = 0x1000;
            iVar4 = 0;
            mont = (BN_MONT_CTX *)0x0;
            goto LAB_001009b8;
          }
LAB_00100d73:
          a = BN_value_one();
          iVar7 = BN_lshift(pBVar12,a,iVar7 + -1);
          if (iVar7 != 0) {
            iVar6 = (int)(param_6 >> 3);
            pvVar16 = (void *)param_2[4];
            lVar1 = (long)iVar6 + -1;
            pbVar2 = &local_88 + lVar1;
            iVar7 = 0;
            do {
              iVar8 = EVP_MD_get_size(type);
              uVar13 = ossl_bn_get_libctx(ctx);
              if (iVar8 < 1) goto LAB_001010b5;
              if (iVar6 < iVar8) {
                while( true ) {
                  iVar14 = iVar7 + 1;
                  iVar7 = BN_GENCB_call(param_8,0,iVar7);
                  if (((iVar7 == 0) ||
                      ((pvVar16 != local_118 &&
                       (iVar7 = RAND_bytes_ex(uVar13,local_118,count), iVar7 < 1)))) ||
                     (iVar7 = EVP_Digest(local_118,count,&local_88,(uint *)0x0,type,(ENGINE *)0x0),
                     iVar7 == 0)) goto LAB_00100f60;
                  s = &local_88 + ((long)iVar8 - (long)iVar6);
                  *s = *s | 0x80;
                  s[lVar1] = s[lVar1] | 1;
                  pBVar12 = BN_bin2bn(s,iVar6,local_e0);
                  if (pBVar12 == (BIGNUM *)0x0) goto LAB_00100f60;
                  iVar9 = BN_check_prime(local_e0,ctx,param_8);
                  if (0 < iVar9) break;
                  if (pvVar16 == local_118) goto LAB_001010c8;
                  iVar7 = iVar14;
                  if (iVar9 != 0) goto LAB_00100f60;
                }
              }
              else {
                while( true ) {
                  iVar14 = iVar7 + 1;
                  iVar7 = BN_GENCB_call(param_8,0,iVar7);
                  if ((iVar7 == 0) ||
                     (((pvVar16 != local_118 &&
                       (iVar7 = RAND_bytes_ex(uVar13,local_118,count), iVar7 < 1)) ||
                      (iVar7 = EVP_Digest(local_118,count,&local_88,(uint *)0x0,type,(ENGINE *)0x0),
                      iVar7 == 0)))) goto LAB_00100f60;
                  if (iVar8 < iVar6) {
                    __memset_chk(&local_88 + iVar8,0,(long)(iVar6 - iVar8));
                  }
                  local_88 = local_88 | 0x80;
                  *pbVar2 = *pbVar2 | 1;
                  pBVar12 = BN_bin2bn(&local_88,iVar6,local_e0);
                  if (pBVar12 == (BIGNUM *)0x0) goto LAB_00100f60;
                  iVar9 = BN_check_prime(local_e0,ctx,param_8);
                  if (0 < iVar9) break;
                  if (pvVar16 == local_118) goto LAB_001010c8;
                  iVar7 = iVar14;
                  if (iVar9 != 0) goto LAB_00100f60;
                }
              }
              if ((param_3 == 0) && (iVar7 = BN_cmp(local_e0,(BIGNUM *)param_2[1]), iVar7 != 0)) {
                *param_7 = 0x4000;
                goto LAB_001010b5;
              }
              iVar7 = BN_GENCB_call(param_8,2,0);
              if ((iVar7 == 0) || (iVar7 = BN_GENCB_call(param_8,3,0), iVar7 == 0)) {
LAB_00100f60:
                pvVar16 = local_158;
                if ((void *)param_2[4] == local_118) goto LAB_0010085c;
                mont = (BN_MONT_CTX *)0x0;
                iVar4 = 0;
                goto LAB_001005f2;
              }
              memcpy(local_158,local_118,count);
              iVar7 = generate_p(ctx,type,local_cc,
                                 (param_5 - 1) / (ulong)(long)(iVar4 << 3) & 0xffffffff,local_158,
                                 count,local_e0,local_110,param_5 & 0xffffffff,param_8,&local_90,
                                 param_7);
              if (0 < iVar7) {
                iVar4 = BN_GENCB_call(param_8,2,1);
                if ((iVar4 == 0) ||
                   ((param_3 == 0 &&
                    ((local_90 != local_cc ||
                     (iVar4 = BN_cmp(local_110,(BIGNUM *)*param_2), iVar4 != 0))))))
                goto LAB_001010b5;
                if ((local_15c & 3) != 1) goto LAB_00100a28;
                mont = (BN_MONT_CTX *)0x0;
                local_d0 = 0;
                goto LAB_0010132e;
              }
              pvVar16 = (void *)param_2[4];
              if (iVar7 != 0) goto LAB_00100f60;
              iVar7 = iVar14;
            } while (local_118 != pvVar16);
            uVar5 = 1;
            local_118 = local_158;
            goto LAB_00100859;
          }
LAB_001010b5:
          mont = (BN_MONT_CTX *)0x0;
          iVar4 = 0;
        }
      }
LAB_001009b8:
      if (local_118 == (void *)param_2[4]) {
        CRYPTO_free(local_158);
        goto LAB_00100620;
      }
      goto LAB_001005f2;
    }
    if ((local_15c & 1) == 0) {
      if ((local_15c & 2) == 0) {
        local_110 = (BIGNUM *)*param_2;
        if (local_110 != (BIGNUM *)0x0) goto LAB_00100a0c;
        goto LAB_00100949;
      }
LAB_00100923:
      if (param_2[2] != 0) {
        local_110 = (BIGNUM *)*param_2;
        goto LAB_00100936;
      }
      local_118 = (void *)0x0;
      uVar5 = 0x400;
    }
    else if (local_118 == (void *)0x0) {
      uVar5 = 0x200;
      local_118 = (void *)0x0;
    }
    else {
      if (-1 < (int)param_2[6]) {
        if ((local_15c & 2) == 0) goto LAB_00100949;
        goto LAB_00100923;
      }
      local_118 = (void *)0x0;
      uVar5 = 0x200;
    }
LAB_00100859:
    *param_7 = uVar5;
    pvVar16 = local_118;
LAB_0010085c:
    local_118 = pvVar16;
    mont = (BN_MONT_CTX *)0x0;
    iVar4 = 0;
    CRYPTO_free(local_118);
  }
LAB_00100620:
  BN_CTX_end(ctx);
LAB_00100628:
  BN_CTX_free(ctx);
  BN_MONT_CTX_free(mont);
  EVP_MD_CTX_free(local_170);
  EVP_MD_free(type);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001010c8:
  mont = (BN_MONT_CTX *)0x0;
  *param_7 = *param_7 | 0x10;
  iVar4 = 0;
  goto LAB_001009b8;
}



uint ossl_ffc_params_FIPS186_2_gen_verify
               (undefined8 param_1,long *param_2,int param_3,undefined8 param_4,ulong param_5,
               ulong param_6,undefined4 *param_7,BN_GENCB *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  EVP_MD *type;
  ulong uVar7;
  undefined4 *puVar9;
  BIGNUM *pBVar10;
  BIGNUM *a;
  BIGNUM *a_00;
  BIGNUM *pBVar11;
  BIGNUM *r;
  BIGNUM *pBVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  BN_MONT_CTX *mont;
  undefined4 *puVar16;
  long lVar17;
  ulong __n;
  ulong uVar18;
  char *pcVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  BN_CTX *local_1b0;
  BIGNUM *local_198;
  uint local_178;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100 [5];
  char acStack_ea [34];
  ulong local_c8;
  ulong uStack_c0;
  ushort local_b8;
  byte bStack_b6;
  undefined1 uStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  byte bStack_b2;
  undefined1 uStack_b1;
  byte bStack_b0;
  byte bStack_af;
  byte bStack_ae;
  undefined5 uStack_ad;
  byte bStack_89;
  ulong local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_40;
  ulong uVar8;
  
  lVar15 = param_2[4];
  uVar18 = param_2[5];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_178 = 0;
  local_110 = 0;
  local_10c = 0xffffffff;
  if (param_3 == 0) {
    local_178 = *(uint *)(param_2 + 8);
  }
  lVar17 = param_2[9];
  *param_7 = 0;
  if (lVar17 == 0) {
    if (param_6 == 0) {
      pcVar19 = "SHA-256";
      if (param_5 < 0x800) {
        pcVar19 = "SHA1";
      }
      param_6 = (-(ulong)(param_5 < 0x800) & 0xffffffffffffffa0) + 0x100;
    }
    else if (param_6 == 0xa0) {
      pcVar19 = "SHA1";
    }
    else {
      pcVar19 = "SHA-224";
      if (param_6 != 0xe0) {
        if (param_6 != 0x100) {
          *param_7 = 0x20;
          type = (EVP_MD *)0x0;
          uVar3 = 0;
          local_1b0 = (BN_CTX *)0x0;
          mont = (BN_MONT_CTX *)0x0;
          goto LAB_0010173e;
        }
        pcVar19 = "SHA-256";
      }
    }
    type = (EVP_MD *)EVP_MD_fetch(param_1,pcVar19,param_2[10]);
  }
  else {
    type = (EVP_MD *)EVP_MD_fetch(param_1,lVar17,param_2[10]);
  }
  if ((type != (EVP_MD *)0x0) && (iVar2 = EVP_MD_get_size(type), 0 < iVar2)) {
    if (param_6 == 0) {
      param_6 = (long)(iVar2 << 3);
    }
    if (param_5 < 0x200) {
      *param_7 = 0x20000;
    }
    else {
      __n = param_6 >> 3;
      if (((__n & 0xfffffffffffffff7) == 0x14) || (__n == 0x20)) {
        if (lVar15 != 0) {
          if (uVar18 < __n) {
            *param_7 = 0x40000;
            goto LAB_00101730;
          }
          if (__n < uVar18) {
            uVar18 = __n;
          }
          uVar7 = 0;
          do {
            uVar3 = (int)uVar7 + 8;
            uVar8 = (ulong)uVar3;
            *(undefined8 *)((long)local_100 + (uVar7 - 8)) = *(undefined8 *)(lVar15 + uVar7);
            uVar7 = uVar8;
          } while (uVar3 < ((uint)uVar18 & 0xfffffff8));
          puVar16 = (undefined4 *)((long)local_100 + (uVar8 - 8));
          lVar17 = 0;
          puVar9 = (undefined4 *)(uVar8 + lVar15);
          if ((uVar18 & 4) != 0) {
            *puVar16 = *puVar9;
            lVar17 = 4;
          }
          if ((uVar18 & 2) != 0) {
            *(undefined2 *)((long)puVar16 + lVar17) = *(undefined2 *)((long)puVar9 + lVar17);
            lVar17 = lVar17 + 2;
          }
          if ((uVar18 & 1) != 0) {
            *(undefined1 *)((long)puVar16 + lVar17) = *(undefined1 *)((long)puVar9 + lVar17);
          }
        }
        local_1b0 = (BN_CTX *)BN_CTX_new_ex(param_1);
        if (local_1b0 != (BN_CTX *)0x0) {
          BN_CTX_start(local_1b0);
          pBVar10 = BN_CTX_get(local_1b0);
          a = BN_CTX_get(local_1b0);
          local_198 = BN_CTX_get(local_1b0);
          a_00 = BN_CTX_get(local_1b0);
          pBVar11 = BN_CTX_get(local_1b0);
          r = BN_CTX_get(local_1b0);
          if (r == (BIGNUM *)0x0) {
LAB_00101988:
            mont = (BN_MONT_CTX *)0x0;
LAB_00101990:
            uVar3 = 0;
          }
          else {
            uVar18 = param_5 + 0x3f & 0xffffffffffffffc0;
            pBVar12 = BN_value_one();
            iVar2 = (int)uVar18;
            iVar4 = BN_lshift(r,pBVar12,iVar2 + -1);
            if (iVar4 == 0) goto LAB_00101988;
            if (param_3 == 0) {
              if ((local_178 & 1) != 0) {
                if ((lVar15 == 0) || ((int)param_2[6] < 0)) {
                  *param_7 = 0x200;
                  goto LAB_00101988;
                }
                if ((local_178 & 2) == 0) goto LAB_00101a0a;
LAB_001019ec:
                if (param_2[2] == 0) {
                  *param_7 = 0x400;
                  goto LAB_00101988;
                }
                pBVar12 = (BIGNUM *)*param_2;
                goto LAB_001019fa;
              }
              if ((local_178 & 2) != 0) goto LAB_001019ec;
              pBVar12 = (BIGNUM *)*param_2;
              if ((BIGNUM *)*param_2 == (BIGNUM *)0x0) goto LAB_00101a0a;
            }
            else {
              pBVar12 = (BIGNUM *)*param_2;
              if ((pBVar12 != (BIGNUM *)0x0) != (param_2[1] != 0)) {
                *param_7 = 0x800;
                goto LAB_00101988;
              }
LAB_001019fa:
              if ((pBVar12 == (BIGNUM *)0x0) || ((local_178 & 1) != 0)) {
LAB_00101a0a:
                bVar21 = lVar15 == 0;
                iVar4 = (int)__n;
                iVar20 = 0;
                iVar2 = iVar2 * 4 + -1;
LAB_00101a80:
                uVar13 = ossl_bn_get_libctx(local_1b0);
                iVar5 = iVar20;
                do {
                  iVar20 = iVar5 + 1;
                  iVar5 = BN_GENCB_call(param_8,0,iVar5);
                  if ((iVar5 == 0) ||
                     ((bVar21 && (iVar5 = RAND_bytes_ex(uVar13,&local_108,__n), iVar5 < 1))))
                  goto LAB_00101c10;
                  pcVar19 = acStack_ea + 2;
                  memcpy(pcVar19,&local_108,__n);
                  memcpy(&local_c8,&local_108,__n);
                  pcVar14 = pcVar19 + (iVar4 + -1);
                  do {
                    *pcVar14 = *pcVar14 + '\x01';
                    if (*pcVar14 != '\0') break;
                    pcVar14 = pcVar14 + -1;
                  } while (pcVar14 != acStack_ea + (__n - (iVar4 - 1)));
                  iVar5 = EVP_Digest(&local_108,__n,(uchar *)&local_88,(uint *)0x0,type,
                                     (ENGINE *)0x0);
                  if ((iVar5 == 0) ||
                     (iVar5 = EVP_Digest(pcVar19,__n,(uchar *)&local_c8,(uint *)0x0,type,
                                         (ENGINE *)0x0), uVar7 = uStack_70, iVar5 == 0))
                  goto LAB_00101c10;
                  local_88 = local_88 ^ local_c8;
                  uStack_80 = uStack_80 ^ uStack_c0;
                  if (((uint)(param_6 >> 7) & 0xfffffff) == 2) {
                    local_78 = local_78 ^
                               CONCAT17(uStack_b1,
                                        CONCAT16(bStack_b2,
                                                 CONCAT15(bStack_b3,
                                                          CONCAT14(bStack_b4,
                                                                   CONCAT13(uStack_b5,
                                                                            CONCAT12(bStack_b6,
                                                                                     local_b8))))));
                    uStack_70 = uStack_70 ^
                                CONCAT53(uStack_ad,CONCAT12(bStack_ae,CONCAT11(bStack_af,bStack_b0))
                                        );
                  }
                  else if (iVar4 - 0x11U < 7) {
                    bVar1 = local_78._2_1_ ^ bStack_b6;
                    local_78._0_3_ = CONCAT12(bVar1,(ushort)local_78);
                    lVar15 = 0x13;
                    local_78 = CONCAT62(local_78._2_6_,(ushort)local_78 ^ local_b8);
                    iVar5 = 0x10;
LAB_00101caf:
                    uVar7 = local_78;
                    *(byte *)((long)&local_88 + lVar15) =
                         *(byte *)((long)&local_88 + lVar15) ^ *(byte *)((long)&local_c8 + lVar15);
                    if (iVar5 + 4 < iVar4) {
                      local_78._0_5_ = CONCAT14(local_78._4_1_ ^ bStack_b4,(undefined4)local_78);
                      if (iVar4 != 0x15) {
                        local_78._5_1_ = SUB81(uVar7,5);
                        local_78._6_2_ = SUB82(uVar7,6);
                        local_78._0_6_ = CONCAT15(local_78._5_1_ ^ bStack_b3,(undefined5)local_78);
                        if (iVar4 != 0x16) {
                          local_78._6_1_ = SUB81(uVar7,6);
                          local_78._6_1_ = local_78._6_1_ ^ bStack_b2;
                          local_78._7_1_ = SUB81(uVar7,7);
                        }
                      }
                    }
                  }
                  else {
                    local_78 = local_78 ^
                               CONCAT17(uStack_b1,
                                        CONCAT16(bStack_b2,
                                                 CONCAT15(bStack_b3,
                                                          CONCAT14(bStack_b4,
                                                                   CONCAT13(uStack_b5,
                                                                            CONCAT12(bStack_b6,
                                                                                     local_b8))))));
                    if (iVar4 != 0x18) {
                      bVar1 = (byte)uStack_70 ^ bStack_b0;
                      uStack_70 = CONCAT71(uStack_70._1_7_,bVar1);
                      if (iVar4 != 0x19) {
                        uStack_70._1_1_ = SUB81(uVar7,1);
                        uStack_70._2_6_ = SUB86(uVar7,2);
                        uStack_70._0_2_ = CONCAT11(uStack_70._1_1_ ^ bStack_af,bVar1);
                        if (iVar4 != 0x1a) {
                          uStack_70._2_1_ = SUB81(uVar7,2);
                          uStack_70._2_1_ = uStack_70._2_1_ ^ bStack_ae;
                          uStack_70._3_5_ = SUB85(uVar7,3);
                          if (iVar4 == 0x1c) {
                            lVar15 = 0x1b;
                            iVar5 = 0x18;
                            goto LAB_00101caf;
                          }
                        }
                      }
                    }
                  }
                  local_88 = local_88 | 0x80;
                  (&bStack_89)[__n] = (&bStack_89)[__n] | 1;
                  pBVar12 = BN_bin2bn((uchar *)&local_88,iVar4,local_198);
                  if (pBVar12 == (BIGNUM *)0x0) goto LAB_00101c10;
                  iVar6 = BN_check_prime(local_198,local_1b0,param_8);
                  if (0 < iVar6) goto LAB_00101d10;
                  bVar21 = true;
                  iVar5 = iVar20;
                  if (iVar6 != 0) goto LAB_00101c10;
                } while( true );
              }
            }
            a_00 = pBVar12;
            local_198 = (BIGNUM *)param_2[1];
LAB_00101e3a:
            mont = BN_MONT_CTX_new();
            if (mont == (BN_MONT_CTX *)0x0) goto LAB_00101988;
            iVar2 = BN_MONT_CTX_set(mont,a_00,local_1b0);
            if (iVar2 == 0) goto LAB_00101990;
            if (param_3 == 0) {
              if ((local_178 & 2) == 0) {
                iVar2 = BN_GENCB_call(param_8,3,1);
                uVar3 = (uint)(iVar2 != 0);
              }
              else {
                iVar2 = ossl_ffc_params_validate_unverifiable_g
                                  (local_1b0,mont,a_00,local_198,param_2[2],pBVar11,param_7,iVar2);
                if (iVar2 == 0) goto LAB_00101990;
                iVar2 = BN_GENCB_call(param_8,3,1);
                uVar3 = (uint)(iVar2 != 0) * 2;
              }
            }
            else {
              pBVar12 = BN_value_one();
              iVar2 = BN_sub(r,a_00,pBVar12);
              if (((iVar2 == 0) ||
                  (iVar2 = BN_div(pBVar10,(BIGNUM *)0x0,r,local_198,local_1b0), iVar2 == 0)) ||
                 (iVar2 = generate_unverifiable_g
                                    (local_1b0,mont,a,pBVar11,a_00,pBVar10,r,&local_10c), iVar2 == 0
                 )) goto LAB_00101990;
              uVar3 = BN_GENCB_call(param_8,3,1);
              if (uVar3 != 0) {
                if ((BIGNUM *)*param_2 != a_00) {
                  BN_free((BIGNUM *)*param_2);
                  pBVar10 = BN_dup(a_00);
                  *param_2 = (long)pBVar10;
                }
                if ((BIGNUM *)param_2[1] != local_198) {
                  BN_free((BIGNUM *)param_2[1]);
                  pBVar10 = BN_dup(local_198);
                  param_2[1] = (long)pBVar10;
                }
                if ((BIGNUM *)param_2[2] != a) {
                  BN_free((BIGNUM *)param_2[2]);
                  pBVar10 = BN_dup(a);
                  param_2[2] = (long)pBVar10;
                }
                if (((*param_2 == 0) || (param_2[1] == 0)) ||
                   ((param_2[2] == 0 ||
                    (iVar2 = ossl_ffc_params_set_validate_params(param_2,&local_108,__n,local_110),
                    iVar2 == 0)))) goto LAB_00101990;
                *(undefined4 *)((long)param_2 + 0x3c) = local_10c;
LAB_00102122:
                uVar3 = 2 - ((local_178 & 2) == 0);
              }
            }
          }
          BN_CTX_end(local_1b0);
          goto LAB_0010173e;
        }
      }
      else {
        *param_7 = 0x20;
      }
    }
  }
LAB_00101730:
  local_1b0 = (BN_CTX *)0x0;
  mont = (BN_MONT_CTX *)0x0;
  uVar3 = 0;
LAB_0010173e:
  BN_CTX_free(local_1b0);
  BN_MONT_CTX_free(mont);
  EVP_MD_free(type);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_00101d10:
  iVar5 = BN_GENCB_call(param_8,2,0);
  if ((iVar5 == 0) || (iVar5 = BN_GENCB_call(param_8,3,0), iVar5 == 0)) goto LAB_00101c10;
  iVar5 = iVar2;
  if ((param_3 == 0) && (iVar5 = (int)param_2[6], iVar2 < (int)param_2[6])) {
    *param_7 = 0x1000;
    goto LAB_00101988;
  }
  iVar6 = generate_p(local_1b0,type,iVar5,(int)((uVar18 - 1) / 0xa0),pcVar19,__n,local_198,a_00,
                     param_5 + 0x3f & 0xffffffc0,param_8,&local_110,param_7);
  if (0 < iVar6) {
    iVar2 = BN_GENCB_call(param_8,2,1);
    if (iVar2 == 0) goto LAB_00101988;
    if (param_3 == 0) {
      if (local_110 != iVar5) {
        *param_7 = 0x10000;
        goto LAB_00101988;
      }
      iVar2 = BN_cmp(a_00,(BIGNUM *)*param_2);
      if (iVar2 != 0) {
        *param_7 = 0x2000;
        goto LAB_00101988;
      }
    }
    if ((local_178 & 3) != 1) goto LAB_00101e3a;
    mont = (BN_MONT_CTX *)0x0;
    goto LAB_00102122;
  }
  bVar21 = true;
  if (iVar6 == -1) goto LAB_00101c10;
  goto LAB_00101a80;
LAB_00101c10:
  mont = (BN_MONT_CTX *)0x0;
  goto LAB_00101990;
}



void ossl_ffc_params_FIPS186_4_generate
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ossl_ffc_params_FIPS186_4_gen_verify(param_1,param_2,1,param_3,param_4,param_5,param_6,param_7);
  return;
}



undefined1  [16]
ossl_ffc_params_FIPS186_2_generate
          (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 extraout_RDX;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = ossl_ffc_params_FIPS186_2_gen_verify(param_1,param_2,1,param_3,param_4,param_5);
  if ((int)auVar1._0_8_ == 0) {
    auVar1._8_8_ = param_6;
    return auVar1;
  }
  ossl_ffc_params_enable_flags(param_2,4,1,param_7);
  auVar2._8_8_ = extraout_RDX;
  auVar2._0_8_ = 1;
  return auVar2;
}


