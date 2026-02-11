
EC_GROUP * EC_GROUP_new_by_curve_name_ex(undefined8 param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  BN_CTX *ctx;
  undefined8 uVar7;
  EC_GROUP *pEVar8;
  char *pcVar9;
  BIGNUM *b;
  BIGNUM *order;
  size_t sVar10;
  ASN1_OBJECT *a;
  long lVar11;
  EC_GROUP *group;
  int *piVar12;
  uchar *puVar13;
  BIGNUM *local_78;
  BIGNUM *local_70;
  BIGNUM *local_68;
  EC_POINT *local_60;
  BIGNUM *local_58;
  
  if (0 < param_3) {
    lVar11 = 0;
    piVar12 = &curve_list;
    do {
      iVar3 = *piVar12;
      if (param_3 == iVar3) {
        piVar12 = (int *)(&PTR__EC_SECG_PRIME_112R1_001056e8)[lVar11 * 4];
        pcVar2 = (code *)(&DAT_001056f0)[lVar11 * 4];
        if (piVar12 == (int *)0x0) {
          uVar7 = 0;
          if (pcVar2 != (code *)0x0) {
            uVar7 = (*pcVar2)();
          }
          group = (EC_GROUP *)ossl_ec_group_new_ex(param_1,param_2,uVar7);
        }
        else {
          ctx = (BN_CTX *)BN_CTX_new_ex(param_1);
          if (ctx == (BN_CTX *)0x0) {
            ERR_new();
            order = (BIGNUM *)0x0;
            b = (BIGNUM *)0x0;
            pEVar8 = (EC_GROUP *)0x0;
            ERR_set_debug("crypto/ec/ec_curve.c",0xc63,"ec_group_new_from_data");
            ERR_set_error(0x10,0x80003,0);
            local_58 = (BIGNUM *)0x0;
            local_68 = (BIGNUM *)0x0;
            local_78 = (BIGNUM *)0x0;
            local_70 = (BIGNUM *)0x0;
            local_60 = (EC_POINT *)0x0;
LAB_0010013f:
            group = (EC_GROUP *)0x0;
            EC_GROUP_free(pEVar8);
          }
          else {
            iVar6 = piVar12[1];
            iVar5 = piVar12[2];
            piVar1 = piVar12 + 4;
            if (pcVar2 != (code *)0x0) {
              uVar7 = (*pcVar2)();
              pEVar8 = (EC_GROUP *)ossl_ec_group_new_ex(param_1,param_2,uVar7);
              if (pEVar8 == (EC_GROUP *)0x0) {
                ERR_new();
                uVar7 = 0xc6f;
              }
              else {
                if (*(code **)(*(long *)pEVar8 + 0x1b8) == (code *)0x0) goto LAB_00100234;
                iVar3 = (**(code **)(*(long *)pEVar8 + 0x1b8))(pEVar8,piVar1);
                if (iVar3 != 0) {
                  EC_GROUP_set_curve_name(pEVar8,param_3);
                  BN_CTX_free(ctx);
                  return pEVar8;
                }
                ERR_new();
                uVar7 = 0xc74;
              }
              order = (BIGNUM *)0x0;
              b = (BIGNUM *)0x0;
              ERR_set_debug("crypto/ec/ec_curve.c",uVar7,"ec_group_new_from_data");
              ERR_set_error(0x10,0x80010,0);
              local_58 = (BIGNUM *)0x0;
              local_68 = (BIGNUM *)0x0;
              local_78 = (BIGNUM *)0x0;
              local_70 = (BIGNUM *)0x0;
              local_60 = (EC_POINT *)0x0;
              goto LAB_0010013f;
            }
            pEVar8 = (EC_GROUP *)0x0;
LAB_00100234:
            puVar13 = (uchar *)((long)piVar1 + (long)iVar6);
            local_70 = BN_bin2bn(puVar13,iVar5,(BIGNUM *)0x0);
            if (local_70 == (BIGNUM *)0x0) {
LAB_00100420:
              local_78 = (BIGNUM *)0x0;
LAB_00100429:
              ERR_new();
              order = (BIGNUM *)0x0;
              b = (BIGNUM *)0x0;
              ERR_set_debug("crypto/ec/ec_curve.c",0xc82,"ec_group_new_from_data");
              ERR_set_error(0x10,0x80003,0);
              local_58 = (BIGNUM *)0x0;
              local_68 = (BIGNUM *)0x0;
              local_60 = (EC_POINT *)0x0;
              goto LAB_0010013f;
            }
            puVar13 = puVar13 + iVar5;
            local_78 = BN_bin2bn(puVar13,iVar5,(BIGNUM *)0x0);
            if (local_78 == (BIGNUM *)0x0) goto LAB_00100420;
            puVar13 = puVar13 + iVar5;
            b = BN_bin2bn(puVar13,iVar5,(BIGNUM *)0x0);
            if (b == (BIGNUM *)0x0) goto LAB_00100429;
            if (pEVar8 == (EC_GROUP *)0x0) {
              if (*piVar12 == 0x196) {
                group = EC_GROUP_new_curve_GFp(local_70,local_78,b,ctx);
                if (group == (EC_GROUP *)0x0) {
                  ERR_new();
                  uVar7 = 0xc8d;
                  goto LAB_0010069f;
                }
              }
              else {
                group = (EC_GROUP *)EC_GROUP_new_curve_GF2m();
                if (group == (EC_GROUP *)0x0) {
                  ERR_new();
                  uVar7 = 0xc96;
LAB_0010069f:
                  order = (BIGNUM *)0x0;
                  ERR_set_debug("crypto/ec/ec_curve.c",uVar7,"ec_group_new_from_data");
                  ERR_set_error(0x10,0x80010,0);
                  local_58 = (BIGNUM *)0x0;
                  local_68 = (BIGNUM *)0x0;
                  local_60 = (EC_POINT *)0x0;
                  goto LAB_0010013f;
                }
              }
            }
            else {
              iVar4 = (**(code **)(*(long *)pEVar8 + 0x28))(pEVar8,local_70,local_78,b,ctx);
              group = pEVar8;
              if (iVar4 == 0) {
                ERR_new();
                order = (BIGNUM *)0x0;
                ERR_set_debug("crypto/ec/ec_curve.c",0xc88,"ec_group_new_from_data");
                ERR_set_error(0x10,0x80010,0);
                local_58 = (BIGNUM *)0x0;
                local_68 = (BIGNUM *)0x0;
                local_60 = (EC_POINT *)0x0;
                goto LAB_0010013f;
              }
            }
            EC_GROUP_set_curve_name(group,iVar3);
            local_60 = EC_POINT_new(group);
            pEVar8 = group;
            if (local_60 == (EC_POINT *)0x0) {
              ERR_new();
              order = (BIGNUM *)0x0;
              ERR_set_debug("crypto/ec/ec_curve.c",0xc9f,"ec_group_new_from_data");
              ERR_set_error(0x10,0x80010,0);
              local_58 = (BIGNUM *)0x0;
              local_68 = (BIGNUM *)0x0;
              goto LAB_0010013f;
            }
            puVar13 = puVar13 + iVar5;
            local_68 = BN_bin2bn(puVar13,iVar5,(BIGNUM *)0x0);
            if (local_68 == (BIGNUM *)0x0) {
LAB_00100535:
              ERR_new();
              order = (BIGNUM *)0x0;
              ERR_set_debug("crypto/ec/ec_curve.c",0xca5,"ec_group_new_from_data");
              ERR_set_error(0x10,0x80003,0);
              local_58 = (BIGNUM *)0x0;
              goto LAB_0010013f;
            }
            local_58 = BN_bin2bn(puVar13 + iVar5,iVar5,(BIGNUM *)0x0);
            if (local_58 == (BIGNUM *)0x0) goto LAB_00100535;
            iVar4 = EC_POINT_set_affine_coordinates(group,local_60,local_68,local_58,ctx);
            if (iVar4 == 0) {
              ERR_new();
              order = (BIGNUM *)0x0;
              ERR_set_debug("crypto/ec/ec_curve.c",0xca9,"ec_group_new_from_data");
              ERR_set_error(0x10,0x80010,0);
              goto LAB_0010013f;
            }
            order = BN_bin2bn(puVar13 + iVar5 + iVar5,iVar5,(BIGNUM *)0x0);
            if ((order == (BIGNUM *)0x0) ||
               (iVar5 = BN_set_word(local_68,(ulong)(uint)piVar12[3]), iVar5 == 0)) {
              ERR_new();
              ERR_set_debug("crypto/ec/ec_curve.c",0xcae,"ec_group_new_from_data");
              ERR_set_error(0x10,0x80003,0);
              goto LAB_0010013f;
            }
            iVar5 = EC_GROUP_set_generator(group,local_60,order,local_68);
            if (iVar5 == 0) {
              ERR_new();
              uVar7 = 0xcb2;
LAB_001006fb:
              ERR_set_debug("crypto/ec/ec_curve.c",uVar7,"ec_group_new_from_data");
              ERR_set_error(0x10,0x80010,0);
              goto LAB_0010013f;
            }
            if ((iVar6 != 0) &&
               (sVar10 = EC_GROUP_set_seed(group,(uchar *)piVar1,(long)iVar6), sVar10 == 0)) {
              ERR_new();
              uVar7 = 0xcb7;
              goto LAB_001006fb;
            }
            iVar6 = EC_GROUP_get_asn1_flag(group);
            if (iVar6 == 1) {
              a = OBJ_nid2obj(iVar3);
              if (a == (ASN1_OBJECT *)0x0) {
                ERR_new();
                ERR_set_debug("crypto/ec/ec_curve.c",0xccd,"ec_group_new_from_data");
                ERR_set_error(0x10,0x80008,0);
                goto LAB_0010013f;
              }
              lVar11 = OBJ_length(a);
              if (lVar11 == 0) {
                EC_GROUP_set_asn1_flag(group,0);
              }
              ASN1_OBJECT_free(a);
            }
          }
          EC_POINT_free(local_60);
          BN_CTX_free(ctx);
          BN_free(local_70);
          BN_free(local_78);
          BN_free(b);
          BN_free(order);
          BN_free(local_68);
          BN_free(local_58);
        }
        if (group != (EC_GROUP *)0x0) {
          return group;
        }
        break;
      }
      lVar11 = lVar11 + 1;
      piVar12 = piVar12 + 8;
    } while (lVar11 != 0x52);
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_curve.c",0xcfa,"EC_GROUP_new_by_curve_name_ex");
  pcVar9 = OBJ_nid2sn(param_3);
  ERR_set_error(0x10,0x81,"name=%s",pcVar9);
  return (EC_GROUP *)0x0;
}



EC_GROUP * EC_GROUP_new_by_curve_name(int nid)

{
  EC_GROUP *pEVar1;
  
  pEVar1 = (EC_GROUP *)EC_GROUP_new_by_curve_name_ex(0,0,nid);
  return pEVar1;
}



size_t EC_get_builtin_curves(EC_builtin_curve *r,size_t nitems)

{
  undefined **ppuVar1;
  EC_builtin_curve *pEVar2;
  EC_builtin_curve *pEVar3;
  
  if ((r != (EC_builtin_curve *)0x0) && (nitems != 0)) {
    if (0x52 < nitems) {
      nitems = 0x52;
    }
    ppuVar1 = &PTR_s_SECG_WTLS_curve_over_a_112_bit_p_001056f8;
    pEVar2 = r;
    do {
      pEVar3 = pEVar2 + 1;
      pEVar2->nid = *(int *)(ppuVar1 + -3);
      pEVar2->comment = *ppuVar1;
      ppuVar1 = ppuVar1 + 4;
      pEVar2 = pEVar3;
    } while (pEVar3 != r + nitems);
  }
  return 0x52;
}



void EC_curve_nid2nist(void)

{
  ossl_ec_curve_nid2nist_int();
  return;
}



void EC_curve_nist2nid(void)

{
  ossl_ec_curve_nist2nid_int();
  return;
}



int ossl_ec_curve_nid_from_params(EC_GROUP *param_1,BN_CTX *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t __n;
  uchar *__s2;
  undefined8 uVar7;
  void *__s1;
  BIGNUM *pBVar8;
  EC_POINT *pEVar9;
  undefined8 *puVar10;
  int *piVar11;
  void *pvVar12;
  int iVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar2 = EC_GROUP_get_curve_name(param_1);
  iVar3 = EC_GROUP_get_field_type(param_1);
  __n = EC_GROUP_get_seed_len(param_1);
  __s2 = EC_GROUP_get0_seed(param_1);
  uVar7 = EC_GROUP_get0_cofactor(param_1);
  BN_CTX_start(param_2);
  iVar4 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
  iVar5 = BN_num_bits(*(BIGNUM **)(param_1 + 0x40));
  iVar6 = iVar4 + 7;
  if (iVar4 + 7 < 0) {
    iVar6 = iVar4 + 0xe;
  }
  iVar4 = iVar5 + 7;
  if (iVar5 + 7 < 0) {
    iVar4 = iVar5 + 0xe;
  }
  iVar5 = iVar6 >> 3;
  if (iVar6 >> 3 < iVar4 >> 3) {
    iVar5 = iVar4 >> 3;
  }
  __s1 = CRYPTO_malloc(iVar5 * 6,"crypto/ec/ec_curve.c",0xd51);
  if (__s1 != (void *)0x0) {
    puVar14 = (undefined8 *)local_78;
    puVar10 = puVar14;
    do {
      pBVar8 = BN_CTX_get(param_2);
      *puVar10 = pBVar8;
      if (pBVar8 == (BIGNUM *)0x0) goto LAB_00100ac0;
      puVar10 = puVar10 + 1;
    } while (puVar10 != &local_48);
    iVar6 = EC_GROUP_get_curve(param_1,local_78._0_8_,local_78._8_8_,local_68._0_8_,param_2);
    if ((iVar6 != 0) && (pEVar9 = EC_GROUP_get0_generator(param_1), pEVar9 != (EC_POINT *)0x0)) {
      iVar6 = EC_POINT_get_affine_coordinates(param_1,pEVar9,local_68._8_8_,local_58._0_8_,param_2);
      if (iVar6 != 0) {
        iVar6 = EC_GROUP_get_order(param_1,(BIGNUM *)local_58._8_8_,param_2);
        if (iVar6 != 0) {
          pvVar12 = __s1;
          do {
            iVar6 = BN_bn2binpad(*puVar14,pvVar12,iVar5);
            if (iVar6 < 1) goto LAB_00100ac0;
            puVar14 = puVar14 + 1;
            pvVar12 = (void *)((long)pvVar12 + (long)iVar5);
          } while (puVar14 != &local_48);
          iVar4 = 0x196;
          iVar6 = 0x14;
          piVar11 = &curve_list;
          while( true ) {
            iVar13 = *piVar11;
            lVar1 = *(long *)(piVar11 + 2);
            if ((((iVar3 == iVar4) && (*(int *)(lVar1 + 8) == iVar5)) &&
                ((iVar13 == iVar2 || (iVar2 < 1)))) &&
               ((iVar4 = BN_is_zero(uVar7), iVar4 != 0 ||
                (iVar4 = BN_is_word(uVar7,*(undefined4 *)(lVar1 + 0xc)), iVar4 != 0)))) {
              if (((__n == 0) ||
                  ((*(int *)(lVar1 + 4) == 0 ||
                   (((long)*(int *)(lVar1 + 4) == __n &&
                    (iVar4 = memcmp((void *)(lVar1 + 0x10),__s2,__n), iVar4 == 0)))))) &&
                 (iVar6 = memcmp(__s1,(void *)(lVar1 + 0x10 + (long)iVar6),(long)(iVar5 * 6)),
                 iVar6 == 0)) goto LAB_00100ac6;
            }
            if (piVar11 == (int *)0x106100) break;
            iVar6 = (*(int **)(piVar11 + 10))[1];
            iVar4 = **(int **)(piVar11 + 10);
            piVar11 = piVar11 + 8;
          }
          iVar13 = 0;
          goto LAB_00100ac6;
        }
      }
    }
  }
LAB_00100ac0:
  iVar13 = -1;
LAB_00100ac6:
  CRYPTO_free(__s1);
  BN_CTX_end(param_2);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar13;
}


