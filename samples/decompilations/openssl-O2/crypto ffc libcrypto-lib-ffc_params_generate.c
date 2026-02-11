
undefined8
generate_p(BN_CTX *param_1,EVP_MD *param_2,int param_3,int param_4,void *param_5,size_t param_6,
          BIGNUM *param_7,BIGNUM *param_8,int param_9,BN_GENCB *param_10,int *param_11,
          uint *param_12)

{
  int iVar1;
  int iVar2;
  BIGNUM *r;
  BIGNUM *a;
  BIGNUM *rem;
  BIGNUM *r_00;
  BIGNUM *ret;
  BIGNUM *pBVar3;
  char *pcVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long in_FS_OFFSET;
  int local_110;
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
    pBVar3 = BN_value_one();
    iVar1 = BN_lshift(r_00,pBVar3,param_9 + -1);
    if ((iVar1 != 0) && (iVar1 = EVP_MD_get_size(), 0 < iVar1)) {
      if (-1 < param_3) {
        local_110 = (int)param_6;
        local_9c = 0;
        do {
          BN_zero_ex(r);
          if (-1 < param_4) {
            iVar6 = 0;
            iVar7 = 0;
            do {
              pcVar4 = (char *)((long)param_5 + (long)(int)(local_110 - 1U));
              if (0 < local_110) {
                do {
                  *pcVar4 = *pcVar4 + '\x01';
                  if (*pcVar4 != '\0') break;
                  pcVar4 = pcVar4 + -1;
                } while (pcVar4 != (char *)((long)param_5 +
                                           (((long)local_110 + -2) - (ulong)(local_110 - 1U))));
              }
              iVar2 = EVP_Digest(param_5,param_6,local_88,(uint *)0x0,param_2,(ENGINE *)0x0);
              if ((((iVar2 == 0) ||
                   (pBVar3 = BN_bin2bn(local_88,iVar1,ret), pBVar3 == (BIGNUM *)0x0)) ||
                  (iVar2 = BN_lshift(ret,ret,iVar6), iVar2 == 0)) ||
                 (iVar2 = BN_add(r,r,ret), iVar2 == 0)) goto LAB_001000e2;
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + iVar1 * 8;
            } while (iVar7 <= param_4);
          }
          iVar6 = BN_mask_bits(r,param_9 + -1);
          if (((iVar6 == 0) || (pBVar3 = BN_copy(a,r), pBVar3 == (BIGNUM *)0x0)) ||
             ((iVar6 = BN_add(a,a,r_00), iVar6 == 0 ||
              ((iVar6 = BN_lshift1(ret,param_7), iVar6 == 0 ||
               (iVar6 = BN_div((BIGNUM *)0x0,rem,a,ret,param_1), iVar6 == 0)))))) goto LAB_001000e2;
          pBVar3 = BN_value_one();
          iVar6 = BN_sub(ret,rem,pBVar3);
          if ((iVar6 == 0) || (iVar6 = BN_sub(param_8,a,ret), iVar6 == 0)) goto LAB_001000e2;
          iVar6 = BN_cmp(param_8,r_00);
          if (-1 < iVar6) {
            iVar6 = BN_check_prime(param_8,param_1,param_10);
            if (0 < iVar6) {
              uVar5 = 1;
              *param_11 = local_9c;
              goto LAB_001000e7;
            }
            if (iVar6 != 0) goto LAB_001000e2;
          }
          local_9c = local_9c + 1;
          if (param_3 < local_9c) break;
          iVar6 = BN_GENCB_call(param_10,0,local_9c);
          if (iVar6 == 0) goto LAB_001000e2;
        } while( true );
      }
      *param_12 = *param_12 | 1;
      uVar5 = 0;
      goto LAB_001000e7;
    }
  }
LAB_001000e2:
  uVar5 = 0xffffffff;
LAB_001000e7:
  BN_CTX_end(param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
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
  bool bVar1;
  long lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  EVP_MD *type;
  BN_CTX *ctx;
  BIGNUM *pBVar11;
  BIGNUM *pBVar12;
  BIGNUM *dv;
  BIGNUM *pBVar13;
  BIGNUM *ret;
  size_t count;
  BN_MONT_CTX *mont;
  EVP_MD_CTX *ctx_00;
  BIGNUM *a;
  undefined8 uVar14;
  byte *s;
  char *pcVar15;
  long in_FS_OFFSET;
  long local_180;
  void *local_170;
  uint local_168;
  uint local_164;
  ushort local_140;
  byte local_138;
  void *local_128;
  BIGNUM *local_120;
  void *local_d8;
  BIGNUM *local_d0;
  int local_bc;
  int local_90;
  undefined4 local_8c;
  byte local_88;
  ushort local_87;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = 0;
  local_90 = 0;
  local_8c = 0;
  if (param_3 == 0) {
    local_168 = *(uint *)(param_2 + 8);
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
      goto LAB_00100504;
    }
    if (param_6 == 0xa0) {
      pcVar15 = "SHA1";
      goto LAB_00100504;
    }
    pcVar15 = "SHA-224";
    if (param_6 == 0xe0) goto LAB_00100504;
    if (param_6 == 0x100) {
      pcVar15 = "SHA-256";
      goto LAB_00100504;
    }
    *param_7 = 0x20;
    type = (EVP_MD *)0x0;
    local_180 = 0;
LAB_00100608:
    if (param_2[4] == 0) {
      ctx = (BN_CTX *)0x0;
      CRYPTO_free((void *)0x0);
      iVar4 = 0;
      mont = (BN_MONT_CTX *)0x0;
      goto LAB_00100660;
    }
    ctx = (BN_CTX *)0x0;
    mont = (BN_MONT_CTX *)0x0;
    local_d8 = (void *)0x0;
    iVar4 = 0;
    local_170 = (void *)0x0;
LAB_0010062a:
    CRYPTO_free(local_d8);
    CRYPTO_free(local_170);
    if (ctx == (BN_CTX *)0x0) goto LAB_00100660;
  }
  else {
LAB_00100504:
    type = (EVP_MD *)EVP_MD_fetch(param_1,pcVar15,param_2[10]);
    if (type == (EVP_MD *)0x0) {
      local_180 = 0;
      goto LAB_00100608;
    }
    iVar4 = EVP_MD_get_size();
    if (iVar4 < 1) {
LAB_001005f8:
      local_180 = 0;
      goto LAB_00100608;
    }
    if (param_6 == 0) {
      param_6 = (long)(iVar4 * 8);
    }
    if (param_5 <= param_6) {
LAB_001005f0:
      *param_7 = 0x20000;
      goto LAB_001005f8;
    }
    if (param_4 != 1) {
      if (param_4 == 0) {
        if ((((0xbff < param_5) && (0xff < param_6)) || ((0x7ff < param_5 && (0xdf < param_6)))) ||
           ((0x3ff < param_5 && (0x9f < param_6)))) goto LAB_00100799;
        ERR_new();
        ERR_set_debug("crypto/ffc/ffc_params_generate.c",0x57,"ffc_validate_LN");
        ERR_set_error(10,0x72,0);
      }
      goto LAB_001005f0;
    }
    if (((param_5 != 0x400) || (param_6 != 0xa0)) &&
       ((param_5 != 0x800 || ((param_6 - 0xe0 & 0xffffffffffffffdf) != 0)))) {
      ERR_new();
      ERR_set_debug("crypto/ffc/ffc_params_generate.c",0x4d,"ffc_validate_LN");
      ERR_set_error(5,0x7f,0);
      goto LAB_001005f0;
    }
LAB_00100799:
    local_180 = EVP_MD_CTX_new();
    if (local_180 == 0) goto LAB_001005f8;
    ctx = (BN_CTX *)BN_CTX_new_ex();
    if (ctx == (BN_CTX *)0x0) goto LAB_00100608;
    BN_CTX_start(ctx);
    pBVar11 = BN_CTX_get(ctx);
    pBVar12 = BN_CTX_get(ctx);
    dv = BN_CTX_get(ctx);
    pBVar13 = BN_CTX_get(ctx);
    ret = BN_CTX_get(ctx);
    if (ret == (BIGNUM *)0x0) {
      local_170 = (void *)0x0;
      mont = (BN_MONT_CTX *)0x0;
      iVar4 = 0;
      local_d8 = (void *)0x0;
      goto LAB_001009e8;
    }
    count = (long)iVar4;
    if (param_2[5] != 0) {
      count = param_2[5];
    }
    local_d8 = (void *)param_2[4];
    local_128 = local_d8;
    if (param_3 != 0) {
      local_120 = (BIGNUM *)*param_2;
      if ((local_120 == (BIGNUM *)0x0) != (param_2[1] == 0)) {
        local_128 = (void *)0x0;
        uVar5 = 0x800;
        goto LAB_00100889;
      }
LAB_00100966:
      if ((local_120 != (BIGNUM *)0x0) && ((local_168 & 1) == 0)) {
LAB_00100a3c:
        local_d0 = (BIGNUM *)param_2[1];
        local_170 = (void *)0x0;
LAB_00100a58:
        mont = BN_MONT_CTX_new();
        local_d8 = local_128;
        if (((mont != (BN_MONT_CTX *)0x0) &&
            (iVar4 = BN_MONT_CTX_set(mont,local_120,ctx), iVar4 != 0)) &&
           (((local_168 & 2) == 0 ||
            (iVar4 = ossl_ffc_params_validate_unverifiable_g
                               (ctx,mont,local_120,local_d0,param_2[2],ret,param_7), iVar4 != 0))))
        {
          pBVar13 = BN_value_one();
          iVar4 = BN_sub(pBVar12,local_120,pBVar13);
          if ((iVar4 != 0) && (iVar4 = BN_div(dv,(BIGNUM *)0x0,pBVar12,local_d0,ctx), iVar4 != 0)) {
            if ((local_128 == (void *)0x0) || (lVar2 = param_2[7], (int)lVar2 == -1)) {
              local_164 = param_3;
              if (param_3 == 0) {
LAB_0010128a:
                iVar4 = BN_GENCB_call(param_8,3,1);
                if (iVar4 == 0) goto LAB_001009e8;
LAB_001012b8:
                iVar4 = ((local_164 ^ 1) & local_168 >> 1 & 1) + 1;
                local_d8 = local_128;
                goto LAB_001009e8;
              }
              iVar4 = generate_unverifiable_g(ctx,mont,pBVar11,ret,local_120,dv,pBVar12,&local_8c);
              if (iVar4 != 0) {
                local_164 = 0;
LAB_001013d1:
                iVar4 = BN_GENCB_call(param_8,3,1);
                if (iVar4 != 0) {
                  if ((BIGNUM *)*param_2 != local_120) {
                    BN_free((BIGNUM *)*param_2);
                    pBVar12 = BN_dup(local_120);
                    *param_2 = (long)pBVar12;
                  }
                  if ((BIGNUM *)param_2[1] != local_d0) {
                    BN_free((BIGNUM *)param_2[1]);
                    pBVar12 = BN_dup(local_d0);
                    param_2[1] = (long)pBVar12;
                  }
                  if ((BIGNUM *)param_2[2] != pBVar11) {
                    BN_free((BIGNUM *)param_2[2]);
                    pBVar11 = BN_dup(pBVar11);
                    param_2[2] = (long)pBVar11;
                  }
                  if (((*param_2 != 0) && (param_2[1] != 0)) &&
                     ((param_2[2] != 0 &&
                      (iVar4 = ossl_ffc_params_set_validate_params(param_2,local_128,count,local_90)
                      , iVar4 != 0)))) {
                    *(undefined4 *)((long)param_2 + 0x3c) = local_8c;
                    goto LAB_001012b8;
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
                  local_138 = (byte)(int)lVar2;
                  local_88 = local_138;
                  local_140 = (ushort)iVar7;
                  local_87 = local_140 << 8 | local_140 >> 8;
                  iVar6 = EVP_DigestInit_ex(ctx_00,type,(ENGINE *)0x0);
                  if (((iVar6 == 0) ||
                      (iVar6 = EVP_DigestUpdate(ctx_00,local_128,count), iVar6 == 0)) ||
                     (iVar6 = EVP_DigestUpdate(ctx_00,&ggen_0,4), iVar6 == 0)) break;
                  iVar6 = EVP_DigestUpdate(ctx_00,&local_88,3);
                  if (((iVar6 == 0) ||
                      (iVar6 = EVP_DigestFinal_ex(ctx_00,&local_88,(uint *)0x0), iVar6 == 0)) ||
                     ((pBVar12 = BN_bin2bn(&local_88,iVar4,ret), pBVar12 == (BIGNUM *)0x0 ||
                      (iVar6 = BN_mod_exp_mont(pBVar11,ret,dv,local_120,ctx,mont), iVar6 == 0))))
                  break;
                  pBVar12 = BN_value_one();
                  iVar6 = BN_cmp(pBVar11,pBVar12);
                  if (0 < iVar6) {
                    EVP_MD_CTX_free(ctx_00);
                    if (param_3 != 0) {
                      local_164 = 1;
                      goto LAB_001013d1;
                    }
                    iVar4 = BN_cmp(pBVar11,(BIGNUM *)param_2[2]);
                    local_164 = 1;
                    if (iVar4 == 0) goto LAB_0010128a;
                    *param_7 = 0x8000;
                    goto LAB_00100d00;
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
LAB_00100d00:
        iVar4 = 0;
        goto LAB_001009e8;
      }
LAB_00100979:
      local_120 = BN_CTX_get(ctx);
      local_d0 = BN_CTX_get(ctx);
      if (local_d0 == (BIGNUM *)0x0) {
LAB_001009ce:
        local_170 = (void *)0x0;
        mont = (BN_MONT_CTX *)0x0;
        iVar4 = 0;
      }
      else {
        if (count << 3 < param_6) {
          *param_7 = 0x40000;
          goto LAB_001009ce;
        }
        local_170 = CRYPTO_malloc((int)count,"crypto/ffc/ffc_params_generate.c",0x286);
        if (local_170 == (void *)0x0) goto LAB_001009ce;
        iVar7 = (int)param_5;
        if (local_d8 == (void *)0x0) {
          if (param_3 == 0) {
            *param_7 = 0x200;
          }
          else {
            local_128 = CRYPTO_malloc((int)count,"crypto/ffc/ffc_params_generate.c",0x291);
            if (local_128 != (void *)0x0) {
              local_bc = iVar7 * 4 + -1;
              goto LAB_00100da4;
            }
          }
          mont = (BN_MONT_CTX *)0x0;
          local_d8 = (void *)0x0;
          iVar4 = 0;
        }
        else {
          local_bc = iVar7 * 4 + -1;
          if ((param_3 == 0) &&
             (bVar1 = local_bc < (int)param_2[6], local_bc = (int)param_2[6], bVar1)) {
            *param_7 = 0x1000;
            iVar4 = 0;
            mont = (BN_MONT_CTX *)0x0;
            goto LAB_001009e8;
          }
LAB_00100da4:
          a = BN_value_one();
          iVar7 = BN_lshift(pBVar13,a,iVar7 + -1);
          if (iVar7 != 0) {
            iVar7 = 0;
            iVar6 = (int)(param_6 >> 3);
            local_d8 = (void *)param_2[4];
            do {
              iVar8 = EVP_MD_get_size(type);
              uVar14 = ossl_bn_get_libctx(ctx);
              if (iVar8 < 1) goto LAB_0010114a;
              s = &local_88 + ((long)iVar8 - (long)iVar6);
              if (iVar8 <= iVar6) {
                s = &local_88;
              }
              iVar10 = iVar7;
              while( true ) {
                iVar7 = iVar10 + 1;
                iVar10 = BN_GENCB_call(param_8,0,iVar10);
                if ((iVar10 == 0) ||
                   (((local_d8 != local_128 &&
                     (iVar10 = RAND_bytes_ex(uVar14,local_128,count), iVar10 < 1)) ||
                    (iVar10 = EVP_Digest(local_128,count,&local_88,(uint *)0x0,type,(ENGINE *)0x0),
                    iVar10 == 0)))) goto LAB_00100fda;
                if ((iVar8 <= iVar6) && (iVar8 < iVar6)) {
                  __memset_chk(&local_88 + iVar8,0,(long)(iVar6 - iVar8));
                }
                *s = *s | 0x80;
                s[(long)iVar6 + -1] = s[(long)iVar6 + -1] | 1;
                pBVar13 = BN_bin2bn(s,iVar6,local_d0);
                if (pBVar13 == (BIGNUM *)0x0) goto LAB_00100fda;
                iVar9 = BN_check_prime(local_d0,ctx,param_8);
                if (0 < iVar9) break;
                if (local_d8 == local_128) {
                  mont = (BN_MONT_CTX *)0x0;
                  *param_7 = *param_7 | 0x10;
                  iVar4 = 0;
                  goto LAB_001009e8;
                }
                iVar10 = iVar7;
                if (iVar9 != 0) goto LAB_00100fda;
              }
              if ((param_3 == 0) && (iVar8 = BN_cmp(local_d0,(BIGNUM *)param_2[1]), iVar8 != 0)) {
                *param_7 = 0x4000;
                goto LAB_0010114a;
              }
              iVar8 = BN_GENCB_call(param_8,2,0);
              if ((iVar8 == 0) || (iVar8 = BN_GENCB_call(param_8,3,0), iVar8 == 0)) {
LAB_00100fda:
                pvVar3 = local_170;
                if ((void *)param_2[4] == local_128) goto LAB_0010088d;
                mont = (BN_MONT_CTX *)0x0;
                iVar4 = 0;
                local_d8 = local_128;
                goto LAB_0010062a;
              }
              memcpy(local_170,local_128,count);
              iVar8 = generate_p(ctx,type,local_bc,
                                 (param_5 - 1) / (ulong)(long)(iVar4 << 3) & 0xffffffff,local_170,
                                 count,local_d0,local_120,param_5 & 0xffffffff,param_8,&local_90,
                                 param_7);
              if (0 < iVar8) {
                iVar4 = BN_GENCB_call(param_8,2,1);
                if ((iVar4 == 0) ||
                   ((param_3 == 0 &&
                    ((local_90 != local_bc ||
                     (iVar4 = BN_cmp(local_120,(BIGNUM *)*param_2), iVar4 != 0))))))
                goto LAB_0010114a;
                if ((local_168 & 3) != 1) goto LAB_00100a58;
                mont = (BN_MONT_CTX *)0x0;
                local_164 = 0;
                goto LAB_001012b8;
              }
              local_d8 = (void *)param_2[4];
              if (iVar8 != 0) goto LAB_00100fda;
            } while (local_d8 != local_128);
            uVar5 = 1;
            local_128 = local_170;
            goto LAB_00100889;
          }
LAB_0010114a:
          mont = (BN_MONT_CTX *)0x0;
          iVar4 = 0;
          local_d8 = local_128;
        }
      }
LAB_001009e8:
      if (local_d8 == (void *)param_2[4]) {
        CRYPTO_free(local_170);
        goto LAB_00100658;
      }
      goto LAB_0010062a;
    }
    if ((local_168 & 1) == 0) {
      if ((local_168 & 2) == 0) {
        local_120 = (BIGNUM *)*param_2;
        if (local_120 != (BIGNUM *)0x0) goto LAB_00100a3c;
        goto LAB_00100979;
      }
LAB_00100953:
      if (param_2[2] != 0) {
        local_120 = (BIGNUM *)*param_2;
        goto LAB_00100966;
      }
      local_128 = (void *)0x0;
      uVar5 = 0x400;
    }
    else if (local_d8 == (void *)0x0) {
      uVar5 = 0x200;
      local_128 = (void *)0x0;
    }
    else {
      if (-1 < (int)param_2[6]) {
        if ((local_168 & 2) == 0) goto LAB_00100979;
        goto LAB_00100953;
      }
      local_128 = (void *)0x0;
      uVar5 = 0x200;
    }
LAB_00100889:
    *param_7 = uVar5;
    pvVar3 = local_128;
LAB_0010088d:
    local_128 = pvVar3;
    mont = (BN_MONT_CTX *)0x0;
    iVar4 = 0;
    CRYPTO_free(local_128);
  }
LAB_00100658:
  BN_CTX_end(ctx);
LAB_00100660:
  BN_CTX_free(ctx);
  BN_MONT_CTX_free(mont);
  EVP_MD_CTX_free(local_180);
  EVP_MD_free(type);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint ossl_ffc_params_FIPS186_2_gen_verify
               (undefined8 param_1,long *param_2,int param_3,undefined8 param_4,ulong param_5,
               ulong param_6,undefined4 *param_7,BN_GENCB *param_8)

{
  byte *md;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EVP_MD *type;
  ulong uVar6;
  undefined4 *puVar8;
  BIGNUM *pBVar9;
  BIGNUM *a;
  BIGNUM *pBVar10;
  BIGNUM *pBVar11;
  BIGNUM *r;
  BIGNUM *pBVar12;
  undefined8 uVar13;
  long lVar14;
  BN_MONT_CTX *mont;
  undefined4 *puVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  char *pcVar19;
  long in_FS_OFFSET;
  bool bVar20;
  BN_CTX *local_198;
  BIGNUM *local_190;
  int local_180;
  uint local_17c;
  BIGNUM *local_178;
  int local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100 [5];
  char acStack_ea [34];
  byte local_c8 [63];
  byte abStack_89 [73];
  long local_40;
  ulong uVar7;
  
  lVar14 = param_2[4];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = param_2[5];
  local_17c = 0;
  local_110 = 0;
  local_10c = 0xffffffff;
  if (param_3 == 0) {
    local_17c = *(uint *)(param_2 + 8);
  }
  lVar16 = param_2[9];
  *param_7 = 0;
  if (lVar16 == 0) {
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
          type = (EVP_MD *)0x0;
          uVar2 = 0;
          local_198 = (BN_CTX *)0x0;
          *param_7 = 0x20;
          mont = (BN_MONT_CTX *)0x0;
          goto LAB_001016b6;
        }
        pcVar19 = "SHA-256";
      }
    }
    type = (EVP_MD *)EVP_MD_fetch(param_1,pcVar19,param_2[10]);
  }
  else {
    type = (EVP_MD *)EVP_MD_fetch(param_1,lVar16,param_2[10]);
  }
  if ((type != (EVP_MD *)0x0) && (iVar1 = EVP_MD_get_size(type), 0 < iVar1)) {
    if (param_6 == 0) {
      param_6 = (long)(iVar1 << 3);
    }
    if (param_5 < 0x200) {
      *param_7 = 0x20000;
    }
    else {
      param_6 = param_6 >> 3;
      if (((param_6 & 0xfffffffffffffff7) == 0x14) || (param_6 == 0x20)) {
        if (lVar14 != 0) {
          if (uVar18 < param_6) {
            *param_7 = 0x40000;
            goto LAB_001016a8;
          }
          if (param_6 < uVar18) {
            uVar18 = param_6;
          }
          uVar6 = 0;
          do {
            uVar2 = (int)uVar6 + 8;
            uVar7 = (ulong)uVar2;
            *(undefined8 *)((long)local_100 + (uVar6 - 8)) = *(undefined8 *)(lVar14 + uVar6);
            uVar6 = uVar7;
          } while (uVar2 < ((uint)uVar18 & 0xfffffff8));
          puVar15 = (undefined4 *)((long)local_100 + (uVar7 - 8));
          lVar16 = 0;
          puVar8 = (undefined4 *)(uVar7 + lVar14);
          if ((uVar18 & 4) != 0) {
            *puVar15 = *puVar8;
            lVar16 = 4;
          }
          if ((uVar18 & 2) != 0) {
            *(undefined2 *)((long)puVar15 + lVar16) = *(undefined2 *)((long)puVar8 + lVar16);
            lVar16 = lVar16 + 2;
          }
          if ((uVar18 & 1) != 0) {
            *(undefined1 *)((long)puVar15 + lVar16) = *(undefined1 *)((long)puVar8 + lVar16);
          }
        }
        local_198 = (BN_CTX *)BN_CTX_new_ex(param_1);
        if (local_198 != (BN_CTX *)0x0) {
          BN_CTX_start(local_198);
          pBVar9 = BN_CTX_get(local_198);
          a = BN_CTX_get(local_198);
          local_178 = BN_CTX_get(local_198);
          pBVar10 = BN_CTX_get(local_198);
          pBVar11 = BN_CTX_get(local_198);
          r = BN_CTX_get(local_198);
          if (r == (BIGNUM *)0x0) {
LAB_001018fd:
            mont = (BN_MONT_CTX *)0x0;
LAB_00101900:
            uVar2 = 0;
          }
          else {
            uVar18 = param_5 + 0x3f & 0xffffffffffffffc0;
            pBVar12 = BN_value_one();
            iVar1 = (int)uVar18;
            iVar3 = BN_lshift(r,pBVar12,iVar1 + -1);
            if (iVar3 == 0) goto LAB_001018fd;
            if (param_3 == 0) {
              if ((local_17c & 1) != 0) {
                if ((lVar14 == 0) || ((int)param_2[6] < 0)) {
                  *param_7 = 0x200;
                  goto LAB_001018fd;
                }
                if ((local_17c & 2) == 0) goto LAB_00101985;
LAB_0010195d:
                if (param_2[2] == 0) {
                  *param_7 = 0x400;
                  goto LAB_001018fd;
                }
                local_190 = (BIGNUM *)*param_2;
                goto LAB_00101972;
              }
              if ((local_17c & 2) != 0) goto LAB_0010195d;
              local_190 = (BIGNUM *)*param_2;
              if (local_190 == (BIGNUM *)0x0) goto LAB_00101985;
            }
            else {
              local_190 = (BIGNUM *)*param_2;
              if ((local_190 != (BIGNUM *)0x0) != (param_2[1] != 0)) {
                *param_7 = 0x800;
                goto LAB_001018fd;
              }
LAB_00101972:
              if ((local_190 == (BIGNUM *)0x0) || ((local_17c & 1) != 0)) {
LAB_00101985:
                bVar20 = lVar14 == 0;
                local_180 = 0;
                iVar3 = iVar1 * 4 + -1;
                iVar1 = (int)param_6;
LAB_001019e0:
                pcVar19 = acStack_ea + 2;
                uVar13 = ossl_bn_get_libctx(local_198);
                do {
                  iVar4 = BN_GENCB_call(param_8,0,local_180);
                  if ((iVar4 == 0) ||
                     ((bVar20 && (iVar4 = RAND_bytes_ex(uVar13,&local_108,param_6,0), iVar4 < 1))))
                  goto LAB_00101b30;
                  memcpy(pcVar19,&local_108,param_6);
                  memcpy(local_c8,&local_108,param_6);
                  pcVar17 = pcVar19 + (int)(iVar1 - 1U);
                  do {
                    *pcVar17 = *pcVar17 + '\x01';
                    if (*pcVar17 != '\0') break;
                    pcVar17 = pcVar17 + -1;
                  } while (acStack_ea + (param_6 - (iVar1 - 1U)) != pcVar17);
                  md = abStack_89 + 1;
                  iVar4 = EVP_Digest(&local_108,param_6,md,(uint *)0x0,type,(ENGINE *)0x0);
                  if ((iVar4 == 0) ||
                     (iVar4 = EVP_Digest(pcVar19,param_6,local_c8,(uint *)0x0,type,(ENGINE *)0x0),
                     iVar4 == 0)) goto LAB_00101b30;
                  lVar14 = 0;
                  do {
                    md[lVar14] = md[lVar14] ^ local_c8[lVar14];
                    lVar14 = lVar14 + 1;
                  } while ((int)lVar14 < iVar1);
                  abStack_89[1] = abStack_89[1] | 0x80;
                  abStack_89[param_6] = abStack_89[param_6] | 1;
                  pBVar12 = BN_bin2bn(md,iVar1,local_178);
                  if (pBVar12 == (BIGNUM *)0x0) goto LAB_00101b30;
                  iVar4 = BN_check_prime(local_178,local_198,param_8);
                  if (0 < iVar4) goto LAB_00101b3d;
                  bVar20 = true;
                  local_180 = local_180 + 1;
                  if (iVar4 != 0) goto LAB_00101b30;
                } while( true );
              }
            }
            local_178 = (BIGNUM *)param_2[1];
LAB_00101c21:
            mont = BN_MONT_CTX_new();
            if (mont == (BN_MONT_CTX *)0x0) goto LAB_001018fd;
            iVar1 = BN_MONT_CTX_set(mont,local_190,local_198);
            if (iVar1 == 0) goto LAB_00101900;
            if (param_3 == 0) {
              if ((local_17c & 2) == 0) {
                iVar1 = BN_GENCB_call(param_8,3,1);
                uVar2 = (uint)(iVar1 != 0);
              }
              else {
                iVar1 = ossl_ffc_params_validate_unverifiable_g
                                  (local_198,mont,local_190,local_178,param_2[2],pBVar11,param_7,
                                   iVar1);
                if (iVar1 == 0) goto LAB_00101900;
                iVar1 = BN_GENCB_call(param_8,3,1);
                uVar2 = (uint)(iVar1 != 0) * 2;
              }
            }
            else {
              pBVar10 = BN_value_one();
              iVar1 = BN_sub(r,local_190,pBVar10);
              if (((iVar1 == 0) ||
                  (iVar1 = BN_div(pBVar9,(BIGNUM *)0x0,r,local_178,local_198), iVar1 == 0)) ||
                 (iVar1 = generate_unverifiable_g
                                    (local_198,mont,a,pBVar11,local_190,pBVar9,r,&local_10c),
                 iVar1 == 0)) goto LAB_00101900;
              uVar2 = BN_GENCB_call(param_8,3,1);
              if (uVar2 != 0) {
                if ((BIGNUM *)*param_2 != local_190) {
                  BN_free((BIGNUM *)*param_2);
                  pBVar9 = BN_dup(local_190);
                  *param_2 = (long)pBVar9;
                }
                if ((BIGNUM *)param_2[1] != local_178) {
                  BN_free((BIGNUM *)param_2[1]);
                  pBVar9 = BN_dup(local_178);
                  param_2[1] = (long)pBVar9;
                }
                if ((BIGNUM *)param_2[2] != a) {
                  BN_free((BIGNUM *)param_2[2]);
                  pBVar9 = BN_dup(a);
                  param_2[2] = (long)pBVar9;
                }
                if (((*param_2 == 0) || (param_2[1] == 0)) ||
                   ((param_2[2] == 0 ||
                    (iVar1 = ossl_ffc_params_set_validate_params
                                       (param_2,&local_108,param_6,local_110), iVar1 == 0))))
                goto LAB_00101900;
                *(undefined4 *)((long)param_2 + 0x3c) = local_10c;
LAB_00101ed5:
                uVar2 = 2 - ((local_17c & 2) == 0);
              }
            }
          }
          BN_CTX_end(local_198);
          goto LAB_001016b6;
        }
      }
      else {
        *param_7 = 0x20;
      }
    }
  }
LAB_001016a8:
  local_198 = (BN_CTX *)0x0;
  mont = (BN_MONT_CTX *)0x0;
  uVar2 = 0;
LAB_001016b6:
  BN_CTX_free(local_198);
  BN_MONT_CTX_free(mont);
  EVP_MD_free(type);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
LAB_00101b3d:
  iVar4 = BN_GENCB_call(param_8,2,0);
  if ((iVar4 == 0) || (iVar4 = BN_GENCB_call(param_8,3,0), iVar4 == 0)) goto LAB_00101b30;
  iVar4 = iVar3;
  if ((param_3 == 0) && (iVar4 = (int)param_2[6], iVar3 < (int)param_2[6])) {
    *param_7 = 0x1000;
    goto LAB_001018fd;
  }
  iVar5 = generate_p(local_198,type,iVar4,(int)((uVar18 - 1) / 0xa0),pcVar19,param_6,local_178,
                     pBVar10,param_5 + 0x3f & 0xffffffc0,param_8,&local_110,param_7);
  if (0 < iVar5) {
    iVar1 = BN_GENCB_call(param_8,2,1);
    if (iVar1 == 0) goto LAB_001018fd;
    if (param_3 == 0) {
      if (local_110 != iVar4) {
        *param_7 = 0x10000;
        goto LAB_001018fd;
      }
      iVar1 = BN_cmp(pBVar10,(BIGNUM *)*param_2);
      if (iVar1 != 0) {
        *param_7 = 0x2000;
        goto LAB_001018fd;
      }
    }
    local_190 = pBVar10;
    if ((local_17c & 3) != 1) goto LAB_00101c21;
    mont = (BN_MONT_CTX *)0x0;
    goto LAB_00101ed5;
  }
  bVar20 = true;
  local_180 = local_180 + 1;
  if (iVar5 == -1) goto LAB_00101b30;
  goto LAB_001019e0;
LAB_00101b30:
  mont = (BN_MONT_CTX *)0x0;
  goto LAB_00101900;
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


