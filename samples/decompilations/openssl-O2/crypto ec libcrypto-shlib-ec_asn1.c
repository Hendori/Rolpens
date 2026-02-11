
undefined1 * X9_62_PENTANOMIAL_it(void)

{
  return local_it_21;
}



undefined1 * X9_62_CHARACTERISTIC_TWO_adb(void)

{
  return internal_adb_19;
}



undefined1 * X9_62_CHARACTERISTIC_TWO_it(void)

{
  return local_it_20;
}



undefined1 * X9_62_FIELDID_adb(void)

{
  return internal_adb_15;
}



undefined1 * X9_62_FIELDID_it(void)

{
  return local_it_16;
}



undefined1 * X9_62_CURVE_it(void)

{
  return local_it_17;
}



undefined1 * ECPARAMETERS_it(void)

{
  return local_it_18;
}



undefined1 * ECPKPARAMETERS_it(void)

{
  return local_it_14;
}



void X9_62_PENTANOMIAL_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_21);
  return;
}



void X9_62_PENTANOMIAL_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_21);
  return;
}



void X9_62_CHARACTERISTIC_TWO_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_20);
  return;
}



void X9_62_CHARACTERISTIC_TWO_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_20);
  return;
}



void ECPARAMETERS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPARAMETERS_it();
  ASN1_item_new(it);
  return;
}



void ECPARAMETERS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPARAMETERS_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_ECPKPARAMETERS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPKPARAMETERS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_ECPKPARAMETERS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPKPARAMETERS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void ECPKPARAMETERS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPKPARAMETERS_it();
  ASN1_item_new(it);
  return;
}



void ECPKPARAMETERS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ECPKPARAMETERS_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_EC_PRIVATEKEY(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_item_d2i(param_1,param_2,param_3,(ASN1_ITEM *)local_it_13);
  return;
}



void i2d_EC_PRIVATEKEY(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_item_i2d(param_1,param_2,(ASN1_ITEM *)local_it_13);
  return;
}



void EC_PRIVATEKEY_new(void)

{
  ASN1_item_new((ASN1_ITEM *)local_it_13);
  return;
}



void EC_PRIVATEKEY_free(ASN1_VALUE *param_1)

{
  ASN1_item_free(param_1,(ASN1_ITEM *)local_it_13);
  return;
}



undefined4 * EC_GROUP_get_ecparameters(EC_GROUP *param_1,undefined4 *param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  point_conversion_form_t pVar4;
  ASN1_OBJECT *pAVar5;
  int *piVar6;
  ASN1_NULL *pAVar7;
  undefined4 *puVar8;
  BIGNUM *pBVar9;
  BIGNUM *a;
  ulong uVar10;
  EC_POINT *pEVar11;
  long lVar12;
  ASN1_INTEGER *pAVar13;
  undefined8 *puVar14;
  ASN1_STRING *str;
  ASN1_INTEGER *pAVar15;
  ASN1_BIT_STRING *a_00;
  undefined8 uVar16;
  long in_FS_OFFSET;
  uchar *local_70;
  uchar *local_68;
  undefined8 local_54;
  uint local_4c;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (void *)0x0;
  puVar8 = param_2;
  if ((param_2 == (undefined4 *)0x0) &&
     (puVar8 = (undefined4 *)ECPARAMETERS_new(), puVar8 == (undefined4 *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_asn1.c",0x18a,"EC_GROUP_get_ecparameters");
    ERR_set_error(0x10,0x8000d,0);
LAB_001003b8:
    ECPARAMETERS_free(puVar8);
  }
  else {
    *puVar8 = 1;
    puVar14 = *(undefined8 **)(puVar8 + 2);
    if ((param_1 == (EC_GROUP *)0x0) || (puVar14 == (undefined8 *)0x0)) {
LAB_0010030f:
      ERR_new();
      uVar16 = 0x195;
LAB_00100320:
      ERR_set_debug("crypto/ec/ec_asn1.c",uVar16,"EC_GROUP_get_ecparameters");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      ASN1_OBJECT_free((ASN1_OBJECT *)*puVar14);
      ASN1_TYPE_free((ASN1_TYPE *)puVar14[1]);
      iVar2 = EC_GROUP_get_field_type(param_1);
      pAVar5 = OBJ_nid2obj(iVar2);
      *puVar14 = pAVar5;
      if (pAVar5 == (ASN1_OBJECT *)0x0) {
        ERR_new();
        uVar16 = 0xcb;
LAB_00100979:
        ERR_set_debug("crypto/ec/ec_asn1.c",uVar16,"ec_asn1_group2fieldid");
        uVar16 = 0x80008;
        goto LAB_001003ef;
      }
      if (iVar2 != 0x196) {
        if (iVar2 == 0x197) {
          piVar6 = (int *)X9_62_CHARACTERISTIC_TWO_new();
          puVar14[1] = piVar6;
          if (piVar6 == (int *)0x0) {
            ERR_new();
            uVar16 = 0xee;
LAB_001009e1:
            ERR_set_debug("crypto/ec/ec_asn1.c",uVar16,"ec_asn1_group2fieldid");
            uVar16 = 0x8000d;
            goto LAB_001003ef;
          }
          iVar2 = EC_GROUP_get_degree(param_1);
          *piVar6 = iVar2;
          iVar2 = EC_GROUP_get_basis_type(param_1);
          if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("crypto/ec/ec_asn1.c",0xf7,"ec_asn1_group2fieldid");
            uVar16 = 0x80010;
            goto LAB_001003ef;
          }
          pAVar5 = OBJ_nid2obj(iVar2);
          *(ASN1_OBJECT **)(piVar6 + 2) = pAVar5;
          if (pAVar5 == (ASN1_OBJECT *)0x0) {
            ERR_new();
            uVar16 = 0xfc;
            goto LAB_00100979;
          }
          if (iVar2 == 0x2aa) {
            iVar2 = EC_GROUP_get_trinomial_basis(param_1,&local_4c);
            if (iVar2 != 0) {
              pAVar15 = ASN1_INTEGER_new();
              *(ASN1_INTEGER **)(piVar6 + 4) = pAVar15;
              if (pAVar15 == (ASN1_INTEGER *)0x0) {
                ERR_new();
                uVar16 = 0x108;
              }
              else {
                iVar2 = ASN1_INTEGER_set(pAVar15,(ulong)local_4c);
                if (iVar2 != 0) goto LAB_001002f7;
                ERR_new();
                uVar16 = 0x10c;
              }
LAB_00100a92:
              ERR_set_debug("crypto/ec/ec_asn1.c",uVar16,"ec_asn1_group2fieldid");
              ERR_set_error(0x10,0x8000d,0);
            }
          }
          else {
            if (iVar2 != 0x2ab) {
              pAVar7 = ASN1_NULL_new();
              *(ASN1_NULL **)(piVar6 + 4) = pAVar7;
              if (pAVar7 != (ASN1_NULL *)0x0) {
LAB_001002f7:
                BN_free((BIGNUM *)0x0);
                goto LAB_0010045a;
              }
              ERR_new();
              uVar16 = 0x124;
              goto LAB_001009e1;
            }
            iVar2 = EC_GROUP_get_pentanomial_basis(param_1,&local_54,(long)&local_54 + 4,&local_4c);
            if (iVar2 != 0) {
              puVar14 = (undefined8 *)X9_62_PENTANOMIAL_new();
              *(undefined8 **)(piVar6 + 4) = puVar14;
              if (puVar14 != (undefined8 *)0x0) {
                *puVar14 = local_54;
                *(uint *)(puVar14 + 1) = local_4c;
                BN_free((BIGNUM *)0x0);
                goto LAB_0010045a;
              }
              ERR_new();
              uVar16 = 0x117;
              goto LAB_00100a92;
            }
          }
        }
        else {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_asn1.c",299,"ec_asn1_group2fieldid");
          uVar16 = 0x83;
LAB_001003ef:
          ERR_set_error(0x10,uVar16,0);
        }
        BN_free((BIGNUM *)0x0);
        goto LAB_0010030f;
      }
      pBVar9 = BN_new();
      if (pBVar9 == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0xd1,"ec_asn1_group2fieldid");
        uVar16 = 0x80003;
        goto LAB_001003ef;
      }
      iVar2 = EC_GROUP_get_curve(param_1,pBVar9,0,0,0);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0xd6,"ec_asn1_group2fieldid");
        uVar16 = 0x80010;
LAB_001006f7:
        ERR_set_error(0x10,uVar16,0);
        BN_free(pBVar9);
        goto LAB_0010030f;
      }
      pAVar15 = BN_to_ASN1_INTEGER(pBVar9,(ASN1_INTEGER *)0x0);
      puVar14[1] = pAVar15;
      if (pAVar15 == (ASN1_INTEGER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0xdc,"ec_asn1_group2fieldid");
        uVar16 = 0x8000d;
        goto LAB_001006f7;
      }
      BN_free(pBVar9);
LAB_0010045a:
      plVar1 = *(long **)(puVar8 + 4);
      if (((plVar1 == (long *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
LAB_00100777:
        ERR_new();
        uVar16 = 0x19b;
        goto LAB_00100320;
      }
      pBVar9 = BN_new();
      if ((pBVar9 == (BIGNUM *)0x0) || (a = BN_new(), a == (BIGNUM *)0x0)) {
        ERR_new();
        a = (BIGNUM *)0x0;
        ERR_set_debug("crypto/ec/ec_asn1.c",0x141,"ec_asn1_group2curve");
        ERR_set_error(0x10,0x80003,0);
        local_68 = (uchar *)0x0;
        local_70 = (uchar *)0x0;
LAB_00100818:
        CRYPTO_free(local_70);
        CRYPTO_free(local_68);
        BN_free(pBVar9);
        BN_free(a);
        goto LAB_00100777;
      }
      iVar2 = EC_GROUP_get_curve(param_1,0,pBVar9,a,0);
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x147,"ec_asn1_group2curve");
        ERR_set_error(0x10,0x80010,0);
        local_68 = (uchar *)0x0;
        local_70 = (uchar *)0x0;
        goto LAB_00100818;
      }
      iVar2 = EC_GROUP_get_degree(param_1);
      uVar10 = (long)iVar2 + 7U >> 3;
      iVar2 = (int)uVar10;
      local_70 = (uchar *)CRYPTO_malloc(iVar2,"crypto/ec/ec_asn1.c",0x151);
      if (local_70 == (uchar *)0x0) {
        local_68 = (uchar *)0x0;
        goto LAB_00100818;
      }
      local_68 = (uchar *)CRYPTO_malloc(iVar2,"crypto/ec/ec_asn1.c",0x152);
      if (local_68 == (uchar *)0x0) goto LAB_00100818;
      iVar3 = BN_bn2binpad(pBVar9,local_70,uVar10 & 0xffffffff);
      if ((iVar3 < 0) || (iVar3 = BN_bn2binpad(a,local_68,uVar10 & 0xffffffff), iVar3 < 0)) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x156,"ec_asn1_group2curve");
        ERR_set_error(0x10,0x80003,0);
        goto LAB_00100818;
      }
      iVar3 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)*plVar1,local_70,iVar2);
      if ((iVar3 == 0) ||
         (iVar2 = ASN1_OCTET_STRING_set((ASN1_OCTET_STRING *)plVar1[1],local_68,iVar2), iVar2 == 0))
      {
        ERR_new();
        uVar16 = 0x15d;
LAB_00100a11:
        ERR_set_debug("crypto/ec/ec_asn1.c",uVar16,"ec_asn1_group2curve");
        ERR_set_error(0x10,0x8000d,0);
        goto LAB_00100818;
      }
      a_00 = (ASN1_BIT_STRING *)plVar1[2];
      if (*(long *)(param_1 + 0x30) == 0) {
        ASN1_BIT_STRING_free(a_00);
        plVar1[2] = 0;
      }
      else {
        if (a_00 == (ASN1_BIT_STRING *)0x0) {
          a_00 = ASN1_BIT_STRING_new();
          plVar1[2] = (long)a_00;
          if (a_00 == (ASN1_BIT_STRING *)0x0) {
            ERR_new(0);
            uVar16 = 0x165;
            goto LAB_00100a11;
          }
        }
        ossl_asn1_string_set_bits_left(a_00,0);
        iVar2 = ASN1_BIT_STRING_set((ASN1_BIT_STRING *)plVar1[2],*(uchar **)(param_1 + 0x30),
                                    *(int *)(param_1 + 0x38));
        if (iVar2 == 0) {
          ERR_new();
          uVar16 = 0x16b;
          goto LAB_00100a11;
        }
      }
      CRYPTO_free(local_70);
      CRYPTO_free(local_68);
      BN_free(pBVar9);
      BN_free(a);
      pEVar11 = EC_GROUP_get0_generator(param_1);
      if (pEVar11 != (EC_POINT *)0x0) {
        pVar4 = EC_GROUP_get_point_conversion_form(param_1);
        lVar12 = EC_POINT_point2buf(param_1,pEVar11,pVar4,&local_48,0);
        if (lVar12 != 0) {
          str = *(ASN1_STRING **)(puVar8 + 6);
          if (str == (ASN1_STRING *)0x0) {
            str = ASN1_OCTET_STRING_new();
            *(ASN1_STRING **)(puVar8 + 6) = str;
            if (str != (ASN1_OCTET_STRING *)0x0) goto LAB_00100633;
            CRYPTO_free(local_48);
            ERR_new();
            uVar16 = 0x1ae;
          }
          else {
LAB_00100633:
            ASN1_STRING_set0(str,local_48,(int)lVar12);
            pBVar9 = (BIGNUM *)EC_GROUP_get0_order(param_1);
            if (pBVar9 == (BIGNUM *)0x0) {
              ERR_new();
              uVar16 = 0x1b6;
              goto LAB_00100320;
            }
            pAVar15 = *(ASN1_INTEGER **)(puVar8 + 8);
            pAVar13 = BN_to_ASN1_INTEGER(pBVar9,pAVar15);
            *(ASN1_INTEGER **)(puVar8 + 8) = pAVar13;
            if (pAVar13 == (ASN1_INTEGER *)0x0) {
              *(ASN1_INTEGER **)(puVar8 + 8) = pAVar15;
              ERR_new();
              uVar16 = 0x1bc;
            }
            else {
              pBVar9 = (BIGNUM *)EC_GROUP_get0_cofactor(param_1);
              if (pBVar9 == (BIGNUM *)0x0) goto LAB_00100342;
              pAVar15 = *(ASN1_INTEGER **)(puVar8 + 10);
              pAVar13 = BN_to_ASN1_INTEGER(pBVar9,pAVar15);
              *(ASN1_INTEGER **)(puVar8 + 10) = pAVar13;
              if (pAVar13 != (ASN1_INTEGER *)0x0) goto LAB_00100342;
              *(ASN1_INTEGER **)(puVar8 + 10) = pAVar15;
              ERR_new();
              uVar16 = 0x1c6;
            }
          }
          ERR_set_debug("crypto/ec/ec_asn1.c",uVar16,"EC_GROUP_get_ecparameters");
          ERR_set_error(0x10,0x8000d,0);
          goto LAB_0010033b;
        }
        ERR_new();
        uVar16 = 0x1a9;
        goto LAB_00100320;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x1a1,"EC_GROUP_get_ecparameters");
      ERR_set_error(0x10,0x71,0);
    }
LAB_0010033b:
    if (param_2 == (undefined4 *)0x0) goto LAB_001003b8;
  }
  puVar8 = (undefined4 *)0x0;
LAB_00100342:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



int * EC_GROUP_get_ecpkparameters(EC_GROUP *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  ASN1_OBJECT *a;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)ECPKPARAMETERS_new();
    if (param_2 == (int *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x1db,"EC_GROUP_get_ecpkparameters");
      ERR_set_error(0x10,0x8000d,0);
      return (int *)0x0;
    }
  }
  else if (*param_2 == 0) {
    ASN1_OBJECT_free(*(ASN1_OBJECT **)(param_2 + 2));
  }
  else if ((*param_2 == 1) && (*(long *)(param_2 + 2) != 0)) {
    ECPARAMETERS_free();
  }
  iVar1 = EC_GROUP_get_asn1_flag(param_1);
  if (iVar1 == 1) {
    iVar1 = EC_GROUP_get_curve_name(param_1);
    if (iVar1 != 0) {
      a = OBJ_nid2obj(iVar1);
      if ((a != (ASN1_OBJECT *)0x0) && (lVar2 = OBJ_length(a), lVar2 != 0)) {
        *param_2 = 0;
        *(ASN1_OBJECT **)(param_2 + 2) = a;
        return param_2;
      }
      ASN1_OBJECT_free(a);
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x1f0,"EC_GROUP_get_ecpkparameters");
      ERR_set_error(0x10,0xa7,0);
    }
  }
  else {
    *param_2 = 1;
    lVar2 = EC_GROUP_get_ecparameters(param_1,0);
    *(long *)(param_2 + 2) = lVar2;
    if (lVar2 != 0) {
      return param_2;
    }
  }
  ECPKPARAMETERS_free(param_2);
  return (int *)0x0;
}



EC_GROUP * EC_GROUP_new_from_ecparameters(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  ASN1_INTEGER *ai;
  int *piVar4;
  int iVar5;
  int iVar6;
  BIGNUM *a;
  BIGNUM *b;
  BIGNUM *a_00;
  EC_GROUP *group;
  void *__dest;
  BIGNUM *pBVar7;
  BN_CTX *c;
  EC_GROUP *group_00;
  size_t sVar8;
  long lVar9;
  EC_GROUP *group_01;
  BIGNUM *pBVar10;
  undefined8 uVar11;
  EC_POINT *local_50;
  
  plVar1 = *(long **)(param_1 + 8);
  if (((plVar1 == (long *)0x0) || (*plVar1 == 0)) || (plVar1[1] == 0)) {
    ERR_new();
    uVar11 = 0x215;
LAB_001010a1:
    ERR_set_debug("crypto/ec/ec_asn1.c",uVar11,"EC_GROUP_new_from_ecparameters");
    ERR_set_error(0x10,0x73,0);
LAB_001010c0:
    local_50 = (EC_POINT *)0x0;
    c = (BN_CTX *)0x0;
    pBVar10 = (BIGNUM *)0x0;
    a = (BIGNUM *)0x0;
    a_00 = (BIGNUM *)0x0;
    group_00 = (EC_GROUP *)0x0;
    group_01 = (EC_GROUP *)0x0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (((puVar2 == (undefined8 *)0x0) || (piVar3 = (int *)*puVar2, piVar3 == (int *)0x0)) ||
       ((*(uchar **)(piVar3 + 2) == (uchar *)0x0 ||
        ((puVar2[1] == 0 || (*(long *)(puVar2[1] + 8) == 0)))))) {
      ERR_new();
      uVar11 = 0x222;
      goto LAB_001010a1;
    }
    a = BN_bin2bn(*(uchar **)(piVar3 + 2),*piVar3,(BIGNUM *)0x0);
    if (a == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x227,"EC_GROUP_new_from_ecparameters");
      ERR_set_error(0x10,0x80003,0);
      goto LAB_001010c0;
    }
    piVar3 = *(int **)(*(long *)(param_1 + 0x10) + 8);
    b = BN_bin2bn(*(uchar **)(piVar3 + 2),*piVar3,(BIGNUM *)0x0);
    pBVar10 = b;
    if (b == (BIGNUM *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x22c,"EC_GROUP_new_from_ecparameters");
      uVar11 = 0x80003;
LAB_001011b0:
      ERR_set_error(0x10,uVar11,0);
LAB_001011bc:
      c = (BN_CTX *)0x0;
      a_00 = (BIGNUM *)0x0;
      group_00 = (EC_GROUP *)0x0;
      group_01 = (EC_GROUP *)0x0;
      local_50 = (EC_POINT *)0x0;
      goto LAB_001010d9;
    }
    iVar5 = OBJ_obj2nid((ASN1_OBJECT *)**(undefined8 **)(param_1 + 8));
    if (iVar5 == 0x197) {
      piVar3 = *(int **)(*(long *)(param_1 + 8) + 8);
      iVar5 = *piVar3;
      if (0x295 < iVar5) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x240,"EC_GROUP_new_from_ecparameters");
        uVar11 = 0x8f;
        goto LAB_001011b0;
      }
      a_00 = BN_new();
      if (a_00 == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x245,"EC_GROUP_new_from_ecparameters");
        uVar11 = 0x80003;
LAB_0010130c:
        ERR_set_error(0x10,uVar11,0);
      }
      else {
        iVar6 = OBJ_obj2nid(*(ASN1_OBJECT **)(piVar3 + 2));
        if (iVar6 == 0x2aa) {
          if (*(ASN1_INTEGER **)(piVar3 + 4) == (ASN1_INTEGER *)0x0) {
            ERR_new();
            uVar11 = 0x250;
            goto LAB_00101246;
          }
          lVar9 = ASN1_INTEGER_get(*(ASN1_INTEGER **)(piVar3 + 4));
          if ((0 < lVar9) && (lVar9 < *piVar3)) {
            iVar6 = BN_set_bit(a_00,*piVar3);
            if (iVar6 != 0) {
              iVar6 = BN_set_bit(a_00,(int)lVar9);
joined_r0x001013ec:
              if ((iVar6 != 0) && (iVar6 = BN_set_bit(a_00,0), iVar6 != 0)) {
                group = (EC_GROUP *)EC_GROUP_new_curve_GF2m(a_00,a,b,0);
                goto LAB_00100e7d;
              }
            }
            goto LAB_00101268;
          }
          ERR_new();
          ERR_set_debug("crypto/ec/ec_asn1.c",599,"EC_GROUP_new_from_ecparameters");
          uVar11 = 0x89;
          goto LAB_0010130c;
        }
        if (iVar6 == 0x2ab) {
          piVar4 = *(int **)(piVar3 + 4);
          if (piVar4 == (int *)0x0) {
            ERR_new();
            uVar11 = 0x267;
            goto LAB_00101246;
          }
          if ((((piVar4[2] < *piVar3) && (piVar4[1] < piVar4[2])) && (0 < *piVar4)) &&
             (*piVar4 < piVar4[1])) {
            iVar6 = BN_set_bit(a_00,*piVar3);
            if (((iVar6 != 0) && (iVar6 = BN_set_bit(a_00,*piVar4), iVar6 != 0)) &&
               (iVar6 = BN_set_bit(a_00,piVar4[1]), iVar6 != 0)) {
              iVar6 = BN_set_bit(a_00,piVar4[2]);
              goto joined_r0x001013ec;
            }
          }
          else {
            ERR_new();
            ERR_set_debug("crypto/ec/ec_asn1.c",0x26e,"EC_GROUP_new_from_ecparameters");
            ERR_set_error(0x10,0x84,0);
          }
        }
        else if (iVar6 == 0x2a9) {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_asn1.c",0x27e,"EC_GROUP_new_from_ecparameters");
          ERR_set_error(0x10,0x7e,0);
        }
        else {
          ERR_new();
          uVar11 = 0x282;
LAB_00101246:
          ERR_set_debug("crypto/ec/ec_asn1.c",uVar11,"EC_GROUP_new_from_ecparameters");
          ERR_set_error(0x10,0x73,0);
        }
      }
LAB_00101268:
      local_50 = (EC_POINT *)0x0;
      c = (BN_CTX *)0x0;
      group_00 = (EC_GROUP *)0x0;
      group_01 = (EC_GROUP *)0x0;
    }
    else {
      if (iVar5 != 0x196) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x2a5,"EC_GROUP_new_from_ecparameters");
        ERR_set_error(0x10,0x67,0);
        goto LAB_001011bc;
      }
      ai = *(ASN1_INTEGER **)(*(long *)(param_1 + 8) + 8);
      if (ai == (ASN1_INTEGER *)0x0) {
        ERR_new();
        c = (BN_CTX *)0x0;
        a_00 = (BIGNUM *)0x0;
        ERR_set_debug("crypto/ec/ec_asn1.c",0x28e,"EC_GROUP_new_from_ecparameters");
        ERR_set_error(0x10,0x73,0);
        group_00 = (EC_GROUP *)0x0;
        local_50 = (EC_POINT *)0x0;
        group_01 = (EC_GROUP *)0x0;
        goto LAB_001010d9;
      }
      a_00 = ASN1_INTEGER_to_BN(ai,(BIGNUM *)0x0);
      if (a_00 == (BIGNUM *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x293,"EC_GROUP_new_from_ecparameters");
        uVar11 = 0x8000d;
        goto LAB_001011b0;
      }
      iVar5 = BN_is_negative(a_00);
      if ((iVar5 != 0) || (iVar5 = BN_is_zero(a_00), iVar5 != 0)) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x298,"EC_GROUP_new_from_ecparameters");
        uVar11 = 0x67;
        goto LAB_0010130c;
      }
      iVar5 = BN_num_bits(a_00);
      if (0x295 < iVar5) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x29e,"EC_GROUP_new_from_ecparameters");
        uVar11 = 0x8f;
        goto LAB_0010130c;
      }
      group = EC_GROUP_new_curve_GFp(a_00,a,b,(BN_CTX *)0x0);
LAB_00100e7d:
      if (group == (EC_GROUP *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/ec/ec_asn1.c",0x2aa,"EC_GROUP_new_from_ecparameters");
        uVar11 = 0x80010;
LAB_0010150d:
        ERR_set_error(0x10,uVar11,0);
LAB_00101519:
        local_50 = (EC_POINT *)0x0;
        c = (BN_CTX *)0x0;
        group_00 = (EC_GROUP *)0x0;
        group_01 = group;
      }
      else {
        piVar3 = *(int **)(*(long *)(param_1 + 0x10) + 0x10);
        if (piVar3 != (int *)0x0) {
          if (*piVar3 != 0) {
            CRYPTO_free(*(void **)(group + 0x30));
            __dest = CRYPTO_malloc(**(int **)(*(long *)(param_1 + 0x10) + 0x10),
                                   "crypto/ec/ec_asn1.c",699);
            *(void **)(group + 0x30) = __dest;
            if (__dest == (void *)0x0) {
              c = (BN_CTX *)0x0;
              local_50 = (EC_POINT *)0x0;
              group_00 = (EC_GROUP *)0x0;
              group_01 = group;
              goto LAB_001010d9;
            }
            lVar9 = *(long *)(param_1 + 0x10);
            piVar3 = *(int **)(lVar9 + 0x10);
            memcpy(__dest,*(void **)(piVar3 + 2),(long)*piVar3);
            *(long *)(group + 0x38) = (long)**(int **)(lVar9 + 0x10);
            goto LAB_00100f0d;
          }
          ERR_new();
          uVar11 = 0x2b7;
LAB_001014fa:
          ERR_set_debug("crypto/ec/ec_asn1.c",uVar11,"EC_GROUP_new_from_ecparameters");
          uVar11 = 0x73;
          goto LAB_0010150d;
        }
LAB_00100f0d:
        if ((((*(long *)(param_1 + 0x20) == 0) ||
             (piVar3 = *(int **)(param_1 + 0x18), piVar3 == (int *)0x0)) ||
            (*(long *)(piVar3 + 2) == 0)) || (*piVar3 == 0)) {
          ERR_new();
          uVar11 = 0x2c6;
          goto LAB_001014fa;
        }
        local_50 = EC_POINT_new(group);
        if (local_50 == (EC_POINT *)0x0) goto LAB_00101519;
        EC_GROUP_set_point_conversion_form
                  (group,**(byte **)(*(long *)(param_1 + 0x18) + 8) & 0xfffffffe);
        iVar6 = EC_POINT_oct2point(group,local_50,*(uchar **)(*(int **)(param_1 + 0x18) + 2),
                                   (long)**(int **)(param_1 + 0x18),(BN_CTX *)0x0);
        if (iVar6 == 0) {
          ERR_new();
          ERR_set_debug("crypto/ec/ec_asn1.c",0x2d4,"EC_GROUP_new_from_ecparameters");
          ERR_set_error(0x10,0x80010,0);
LAB_00101684:
          c = (BN_CTX *)0x0;
          group_00 = (EC_GROUP *)0x0;
          pBVar10 = b;
          group_01 = group;
        }
        else {
          pBVar7 = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(param_1 + 0x20),a);
          if (pBVar7 == (BIGNUM *)0x0) {
            c = (BN_CTX *)0x0;
            ERR_new();
            ERR_set_debug("crypto/ec/ec_asn1.c",0x2da,"EC_GROUP_new_from_ecparameters");
            ERR_set_error(0x10,0x8000d,0);
            group_00 = (EC_GROUP *)0x0;
            group_01 = group;
            goto LAB_001010d9;
          }
          iVar6 = BN_is_negative(a);
          if ((iVar6 != 0) || (iVar6 = BN_is_zero(a), iVar6 != 0)) {
            ERR_new();
            uVar11 = 0x2de;
LAB_00101665:
            ERR_set_debug("crypto/ec/ec_asn1.c",uVar11,"EC_GROUP_new_from_ecparameters");
            uVar11 = 0x7a;
LAB_00101678:
            ERR_set_error(0x10,uVar11,0);
            goto LAB_00101684;
          }
          iVar6 = BN_num_bits(a);
          if (iVar5 + 1 < iVar6) {
            ERR_new();
            uVar11 = 0x2e2;
            goto LAB_00101665;
          }
          if (*(ASN1_INTEGER **)(param_1 + 0x28) == (ASN1_INTEGER *)0x0) {
            pBVar10 = (BIGNUM *)0x0;
            BN_free(b);
          }
          else {
            pBVar7 = ASN1_INTEGER_to_BN(*(ASN1_INTEGER **)(param_1 + 0x28),b);
            if (pBVar7 == (BIGNUM *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/ec/ec_asn1.c",0x2eb,"EC_GROUP_new_from_ecparameters");
              ERR_set_error(0x10,0x8000d,0);
              goto LAB_00101684;
            }
          }
          iVar5 = EC_GROUP_set_generator(group,local_50,a,pBVar10);
          if (iVar5 == 0) {
            ERR_new();
            ERR_set_debug("crypto/ec/ec_asn1.c",0x2f0,"EC_GROUP_new_from_ecparameters");
            uVar11 = 0x80010;
            b = pBVar10;
            goto LAB_00101678;
          }
          c = BN_CTX_new();
          if (c == (BN_CTX *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/ec/ec_asn1.c",0x301,"EC_GROUP_new_from_ecparameters");
            ERR_set_error(0x10,0x80003,0);
            group_00 = (EC_GROUP *)0x0;
            group_01 = group;
          }
          else {
            group_00 = EC_GROUP_dup(group);
            if (((group_00 == (EC_GROUP *)0x0) ||
                (sVar8 = EC_GROUP_set_seed(group_00,(uchar *)0x0,0), sVar8 != 1)) ||
               (iVar5 = EC_GROUP_set_generator(group_00,local_50,a,(BIGNUM *)0x0), iVar5 == 0)) {
              ERR_new();
              uVar11 = 0x307;
            }
            else {
              iVar5 = ossl_ec_curve_nid_from_params(group_00);
              group_01 = group;
              if (iVar5 == 0) goto LAB_001010ee;
              group_01 = EC_GROUP_new_by_curve_name(iVar5);
              if (group_01 != (EC_GROUP *)0x0) {
                EC_GROUP_free(group);
                EC_GROUP_set_asn1_flag(group_01,0);
                if ((*(long *)(*(long *)(param_1 + 0x10) + 0x10) != 0) ||
                   (sVar8 = EC_GROUP_set_seed(group_01,(uchar *)0x0,0), sVar8 == 1))
                goto LAB_001010ee;
                goto LAB_001010d9;
              }
              ERR_new();
              uVar11 = 800;
            }
            ERR_set_debug("crypto/ec/ec_asn1.c",uVar11,"EC_GROUP_new_from_ecparameters");
            ERR_set_error(0x10,0x80010,0);
            group_01 = group;
          }
        }
      }
    }
  }
LAB_001010d9:
  EC_GROUP_free(group_01);
  group_01 = (EC_GROUP *)0x0;
LAB_001010ee:
  EC_GROUP_free(group_00);
  BN_free(a_00);
  BN_free(a);
  BN_free(pBVar10);
  EC_POINT_free(local_50);
  BN_CTX_free(c);
  return group_01;
}



EC_GROUP * EC_GROUP_new_from_ecpkparameters(int *param_1)

{
  int iVar1;
  EC_GROUP *pEVar2;
  
  if (param_1 == (int *)0x0) {
    ERR_new();
    pEVar2 = (EC_GROUP *)0x0;
    ERR_set_debug("crypto/ec/ec_asn1.c",0x354,"EC_GROUP_new_from_ecpkparameters");
    ERR_set_error(0x10,0x7c,0);
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 2));
      pEVar2 = EC_GROUP_new_by_curve_name(iVar1);
      if (pEVar2 != (EC_GROUP *)0x0) {
        EC_GROUP_set_asn1_flag(pEVar2,1);
        return pEVar2;
      }
      ERR_new();
      pEVar2 = (EC_GROUP *)0x0;
      ERR_set_debug("crypto/ec/ec_asn1.c",0x35c,"EC_GROUP_new_from_ecpkparameters");
      ERR_set_error(0x10,0x77,0);
    }
    else if (iVar1 == 1) {
      pEVar2 = (EC_GROUP *)EC_GROUP_new_from_ecparameters(*(undefined8 *)(param_1 + 2));
      if (pEVar2 == (EC_GROUP *)0x0) {
        ERR_new();
        pEVar2 = (EC_GROUP *)0x0;
        ERR_set_debug("crypto/ec/ec_asn1.c",0x364,"EC_GROUP_new_from_ecpkparameters");
        ERR_set_error(0x10,0x80010,0);
      }
      else {
        EC_GROUP_set_asn1_flag(pEVar2,0);
      }
    }
    else if (iVar1 == 2) {
      pEVar2 = (EC_GROUP *)0x0;
    }
    else {
      ERR_new();
      pEVar2 = (EC_GROUP *)0x0;
      ERR_set_debug("crypto/ec/ec_asn1.c",0x36c,"EC_GROUP_new_from_ecpkparameters");
      ERR_set_error(0x10,0x73,0);
    }
  }
  return pEVar2;
}



EC_GROUP * d2i_ECPKParameters(EC_GROUP **param_1,uchar **in,long len)

{
  int *piVar1;
  EC_GROUP *pEVar2;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *in;
  piVar1 = (int *)d2i_ECPKPARAMETERS(0,&local_38);
  if (piVar1 == (int *)0x0) {
    pEVar2 = (EC_GROUP *)0x0;
    ECPKPARAMETERS_free(0);
  }
  else {
    pEVar2 = (EC_GROUP *)EC_GROUP_new_from_ecpkparameters(piVar1);
    if (pEVar2 == (EC_GROUP *)0x0) {
      pEVar2 = (EC_GROUP *)0x0;
      ECPKPARAMETERS_free(piVar1);
    }
    else {
      if (*piVar1 == 1) {
        *(undefined4 *)(pEVar2 + 0x28) = 1;
      }
      if (param_1 != (EC_GROUP **)0x0) {
        EC_GROUP_free(*param_1);
        *param_1 = pEVar2;
      }
      ECPKPARAMETERS_free(piVar1);
      *in = local_38;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pEVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2d_ECPKParameters(EC_GROUP *param_1,uchar **out)

{
  int iVar1;
  long lVar2;
  
  lVar2 = EC_GROUP_get_ecpkparameters(param_1,0);
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_asn1.c",0x397,"i2d_ECPKParameters");
    ERR_set_error(0x10,0x78,0);
  }
  else {
    iVar1 = i2d_ECPKPARAMETERS(lVar2,out);
    if (iVar1 != 0) {
      ECPKPARAMETERS_free(lVar2);
      return iVar1;
    }
    ERR_new();
    ERR_set_debug("crypto/ec/ec_asn1.c",0x39b,"i2d_ECPKParameters");
    ERR_set_error(0x10,0x79,0);
    ECPKPARAMETERS_free(lVar2);
  }
  return 0;
}



EC_KEY * d2i_ECPrivateKey(EC_KEY **key,uchar **in,long len)

{
  ASN1_STRING *x;
  int iVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 uVar4;
  EC_POINT *pEVar5;
  EC_KEY *key_00;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *in;
  puVar2 = (undefined4 *)d2i_EC_PRIVATEKEY(0,&local_48);
  if (puVar2 != (undefined4 *)0x0) {
    if ((key == (EC_KEY **)0x0) || (key_00 = *key, key_00 == (EC_KEY *)0x0)) {
      key_00 = EC_KEY_new();
      if (key_00 != (EC_KEY *)0x0) goto LAB_00101be9;
      ERR_new();
      uVar4 = 0x3b0;
      goto LAB_00101d51;
    }
LAB_00101be9:
    if (*(long *)(puVar2 + 4) == 0) {
      if (*(EC_GROUP **)(key_00 + 0x18) == (EC_GROUP *)0x0) goto LAB_00101d40;
    }
    else {
      EC_GROUP_free(*(EC_GROUP **)(key_00 + 0x18));
      lVar3 = EC_GROUP_new_from_ecpkparameters(*(undefined8 *)(puVar2 + 4));
      *(long *)(key_00 + 0x18) = lVar3;
      if (lVar3 == 0) {
LAB_00101d40:
        ERR_new();
        uVar4 = 0x3bf;
        goto LAB_00101d51;
      }
      if (**(int **)(puVar2 + 4) == 1) {
        *(undefined4 *)(lVar3 + 0x28) = 1;
      }
    }
    x = *(ASN1_STRING **)(puVar2 + 2);
    *(undefined4 *)(key_00 + 0x10) = *puVar2;
    if (x == (ASN1_STRING *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x3cb,"d2i_ECPrivateKey");
      ERR_set_error(0x10,0x7d,0);
    }
    else {
      iVar1 = ASN1_STRING_length(x);
      uVar4 = ASN1_STRING_get0_data(x);
      iVar1 = EC_KEY_oct2priv(key_00,uVar4,(long)iVar1);
      if (iVar1 != 0) {
        iVar1 = EC_GROUP_get_curve_name(*(EC_GROUP **)(key_00 + 0x18));
        if (iVar1 == 0x494) {
          EC_KEY_set_flags(key_00,4);
        }
        EC_POINT_clear_free(*(EC_POINT **)(key_00 + 0x20));
        pEVar5 = EC_POINT_new(*(EC_GROUP **)(key_00 + 0x18));
        *(EC_POINT **)(key_00 + 0x20) = pEVar5;
        if (pEVar5 == (EC_POINT *)0x0) {
          ERR_new();
          uVar4 = 0x3d5;
        }
        else {
          if (*(long *)(puVar2 + 6) == 0) {
            if (*(code **)(**(long **)(key_00 + 0x18) + 0x158) != (code *)0x0) {
              iVar1 = (**(code **)(**(long **)(key_00 + 0x18) + 0x158))(key_00);
              if (iVar1 != 0) {
                *(uint *)(key_00 + 0x30) = *(uint *)(key_00 + 0x30) | 2;
                goto LAB_00101cd2;
              }
            }
            goto LAB_00101d70;
          }
          uVar4 = ASN1_STRING_get0_data();
          iVar1 = ASN1_STRING_length(*(ASN1_STRING **)(puVar2 + 6));
          iVar1 = EC_KEY_oct2key(key_00,uVar4,(long)iVar1,0);
          if (iVar1 != 0) {
LAB_00101cd2:
            if (key != (EC_KEY **)0x0) {
              *key = key_00;
            }
            EC_PRIVATEKEY_free(puVar2);
            *in = local_48;
            *(long *)(key_00 + 0x60) = *(long *)(key_00 + 0x60) + 1;
            goto LAB_00101cef;
          }
          ERR_new();
          uVar4 = 0x3e0;
        }
LAB_00101d51:
        ERR_set_debug("crypto/ec/ec_asn1.c",uVar4,"d2i_ECPrivateKey");
        ERR_set_error(0x10,0x80010,0);
      }
    }
LAB_00101d70:
    if ((key == (EC_KEY **)0x0) || (*key != key_00)) {
      EC_KEY_free(key_00);
    }
    EC_PRIVATEKEY_free(puVar2);
  }
  key_00 = (EC_KEY *)0x0;
LAB_00101cef:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return key_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2d_ECPrivateKey(EC_KEY *key,uchar **out)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  ASN1_BIT_STRING *pAVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  void *local_40;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (void *)0x0;
  local_38 = (void *)0x0;
  if (((key == (EC_KEY *)0x0) || (*(long *)(key + 0x18) == 0)) ||
     ((((byte)key[0x30] & 2) == 0 && (*(long *)(key + 0x20) == 0)))) {
    puVar3 = (undefined4 *)0x0;
    lVar4 = 0;
    ERR_new();
    ERR_set_debug("crypto/ec/ec_asn1.c",0x403,"i2d_ECPrivateKey");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    puVar3 = (undefined4 *)EC_PRIVATEKEY_new();
    if (puVar3 == (undefined4 *)0x0) {
      ERR_new();
      lVar4 = 0;
      ERR_set_debug("crypto/ec/ec_asn1.c",0x408,"i2d_ECPrivateKey");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      *puVar3 = *(undefined4 *)(key + 0x10);
      lVar4 = EC_KEY_priv2buf(key,&local_40);
      if (lVar4 == 0) {
        ERR_new();
        uVar7 = 0x411;
      }
      else {
        ASN1_STRING_set0(*(ASN1_STRING **)(puVar3 + 2),local_40,(int)lVar4);
        uVar1 = *(uint *)(key + 0x30);
        local_40 = (void *)0x0;
        if ((uVar1 & 1) == 0) {
          lVar6 = EC_GROUP_get_ecpkparameters
                            (*(undefined8 *)(key + 0x18),*(undefined8 *)(puVar3 + 4));
          *(long *)(puVar3 + 4) = lVar6;
          if (lVar6 == 0) {
            ERR_new();
            uVar7 = 0x41c;
            goto LAB_00102001;
          }
          uVar1 = *(uint *)(key + 0x30);
        }
        if ((uVar1 & 2) == 0) {
          pAVar5 = ASN1_BIT_STRING_new();
          *(ASN1_BIT_STRING **)(puVar3 + 6) = pAVar5;
          if (pAVar5 == (ASN1_BIT_STRING *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/ec/ec_asn1.c",0x424,"i2d_ECPrivateKey");
            ERR_set_error(0x10,0x8000d,0);
            goto LAB_00101fb8;
          }
          lVar6 = EC_KEY_key2buf(key,*(undefined4 *)(key + 0x34),&local_38,0);
          if (lVar6 == 0) {
            ERR_new();
            uVar7 = 0x42b;
            goto LAB_00102001;
          }
          ossl_asn1_string_set_bits_left(*(undefined8 *)(puVar3 + 6),0);
          ASN1_STRING_set0(*(ASN1_STRING **)(puVar3 + 6),local_38,(int)lVar6);
          local_38 = (void *)0x0;
        }
        iVar2 = i2d_EC_PRIVATEKEY(puVar3,out);
        if (iVar2 != 0) {
          CRYPTO_clear_free(local_40,lVar4,"crypto/ec/ec_asn1.c",0x43a);
          CRYPTO_free(local_38);
          EC_PRIVATEKEY_free(puVar3);
          goto LAB_00101f58;
        }
        ERR_new();
        uVar7 = 0x435;
      }
LAB_00102001:
      ERR_set_debug("crypto/ec/ec_asn1.c",uVar7,"i2d_ECPrivateKey");
      ERR_set_error(0x10,0x80010,0);
    }
  }
LAB_00101fb8:
  CRYPTO_clear_free(local_40,lVar4,"crypto/ec/ec_asn1.c",0x43a);
  CRYPTO_free(local_38);
  EC_PRIVATEKEY_free(puVar3);
  iVar2 = 0;
LAB_00101f58:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int i2d_ECParameters(EC_KEY *key,uchar **out)

{
  int iVar1;
  
  if (key != (EC_KEY *)0x0) {
    iVar1 = i2d_ECPKParameters(*(EC_GROUP **)(key + 0x18),out);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ec_asn1.c",0x443,"i2d_ECParameters");
  ERR_set_error(0x10,0xc0102,0);
  return 0;
}



EC_KEY * d2i_ECParameters(EC_KEY **key,uchar **in,long len)

{
  int iVar1;
  EC_GROUP *pEVar2;
  EC_KEY *key_00;
  
  if ((in == (uchar **)0x0) || (*in == (uchar *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_asn1.c",0x44e,"d2i_ECParameters");
    ERR_set_error(0x10,0xc0102,0);
    return (EC_KEY *)0x0;
  }
  if ((key == (EC_KEY **)0x0) || (key_00 = *key, key_00 == (EC_KEY *)0x0)) {
    key_00 = EC_KEY_new();
    if (key_00 == (EC_KEY *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x454,"d2i_ECParameters");
      ERR_set_error(0x10,0x80010,0);
      return (EC_KEY *)0x0;
    }
    pEVar2 = d2i_ECPKParameters((EC_GROUP **)(key_00 + 0x18),in,len);
    if (pEVar2 != (EC_GROUP *)0x0) {
      iVar1 = EC_GROUP_get_curve_name(*(EC_GROUP **)(key_00 + 0x18));
      if (iVar1 == 0x494) {
        EC_KEY_set_flags(key_00,4);
      }
      *(long *)(key_00 + 0x60) = *(long *)(key_00 + 0x60) + 1;
      if (key == (EC_KEY **)0x0) {
        return key_00;
      }
      goto LAB_00102249;
    }
    if (key == (EC_KEY **)0x0) goto LAB_001022cf;
  }
  else {
    pEVar2 = d2i_ECPKParameters((EC_GROUP **)(key_00 + 0x18),in,len);
    if (pEVar2 != (EC_GROUP *)0x0) {
      iVar1 = EC_GROUP_get_curve_name(*(EC_GROUP **)(key_00 + 0x18));
      if (iVar1 == 0x494) {
        EC_KEY_set_flags(key_00,4);
      }
      *(long *)(key_00 + 0x60) = *(long *)(key_00 + 0x60) + 1;
LAB_00102249:
      *key = key_00;
      return key_00;
    }
  }
  if (*key == key_00) {
    *(long *)(key_00 + 0x60) = *(long *)(key_00 + 0x60) + 1;
    return (EC_KEY *)0x0;
  }
LAB_001022cf:
  EC_KEY_free(key_00);
  return (EC_KEY *)0x0;
}



EC_KEY * o2i_ECPublicKey(EC_KEY **key,uchar **in,long len)

{
  int iVar1;
  EC_KEY *pEVar2;
  
  if (((key == (EC_KEY **)0x0) || (pEVar2 = *key, pEVar2 == (EC_KEY *)0x0)) ||
     (*(long *)(pEVar2 + 0x18) == 0)) {
    ERR_new();
    pEVar2 = (EC_KEY *)0x0;
    ERR_set_debug("crypto/ec/ec_asn1.c",0x475,"o2i_ECPublicKey");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    iVar1 = EC_KEY_oct2key(pEVar2,*in,len,0);
    if (iVar1 == 0) {
      ERR_new();
      pEVar2 = (EC_KEY *)0x0;
      ERR_set_debug("crypto/ec/ec_asn1.c",0x47b,"o2i_ECPublicKey");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      *in = *in + len;
    }
  }
  return pEVar2;
}



int i2o_ECPublicKey(EC_KEY *key,uchar **out)

{
  size_t sVar1;
  size_t sVar2;
  uchar *buf;
  int num;
  
  if ((key == (EC_KEY *)0x0) || (*(EC_POINT **)(key + 0x20) == (EC_POINT *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/ec/ec_asn1.c",0x488,"i2o_ECPublicKey");
    ERR_set_error(0x10,0xc0102,0);
  }
  else {
    sVar1 = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                               *(point_conversion_form_t *)(key + 0x34),(uchar *)0x0,0,(BN_CTX *)0x0
                              );
    num = (int)sVar1;
    if (out == (uchar **)0x0) {
      return num;
    }
    if (sVar1 == 0) {
      return num;
    }
    if (*out != (uchar *)0x0) {
      sVar2 = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                                 *(point_conversion_form_t *)(key + 0x34),*out,sVar1,(BN_CTX *)0x0);
      if (sVar2 != 0) {
        *out = *out + sVar1;
        return num;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x49a,"i2o_ECPublicKey");
      ERR_set_error(0x10,0x80010,0);
      return 0;
    }
    buf = (uchar *)CRYPTO_malloc(num,"crypto/ec/ec_asn1.c",0x494);
    *out = buf;
    if (buf != (uchar *)0x0) {
      sVar1 = EC_POINT_point2oct(*(EC_GROUP **)(key + 0x18),*(EC_POINT **)(key + 0x20),
                                 *(point_conversion_form_t *)(key + 0x34),buf,sVar1,(BN_CTX *)0x0);
      if (sVar1 != 0) {
        return num;
      }
      ERR_new();
      ERR_set_debug("crypto/ec/ec_asn1.c",0x49a,"i2o_ECPublicKey");
      ERR_set_error(0x10,0x80010,0);
      CRYPTO_free(*out);
      *out = (uchar *)0x0;
      return 0;
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ECDSA_SIG * ECDSA_SIG_new(void)

{
  ECDSA_SIG *pEVar1;
  
  pEVar1 = (ECDSA_SIG *)CRYPTO_zalloc(0x10,"crypto/ec/ec_asn1.c",0x4ad);
  return pEVar1;
}



void ECDSA_SIG_free(ECDSA_SIG *sig)

{
  if (sig != (ECDSA_SIG *)0x0) {
    BN_clear_free(sig->r);
    BN_clear_free(sig->s);
    CRYPTO_free(sig);
    return;
  }
  return;
}



ECDSA_SIG * d2i_ECDSA_SIG(ECDSA_SIG **sig,uchar **pp,long len)

{
  long lVar1;
  ECDSA_SIG *sig_00;
  BIGNUM *pBVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  
  if (len < 0) {
    return (ECDSA_SIG *)0x0;
  }
  if (((sig == (ECDSA_SIG **)0x0) || (sig_00 = *sig, sig_00 == (ECDSA_SIG *)0x0)) &&
     (sig_00 = ECDSA_SIG_new(), sig_00 == (ECDSA_SIG *)0x0)) {
    return (ECDSA_SIG *)0x0;
  }
  if (sig_00->r == (BIGNUM *)0x0) {
    pBVar3 = BN_new();
    pBVar2 = sig_00->s;
    sig_00->r = pBVar3;
    pBVar4 = pBVar3;
    if (pBVar2 == (BIGNUM *)0x0) goto LAB_001026c0;
joined_r0x00102727:
    if (pBVar4 == (BIGNUM *)0x0) goto LAB_001026d9;
  }
  else {
    pBVar2 = sig_00->s;
    if (pBVar2 == (BIGNUM *)0x0) {
LAB_001026c0:
      pBVar2 = BN_new();
      pBVar3 = sig_00->r;
      sig_00->s = pBVar2;
      pBVar4 = pBVar2;
      if (pBVar3 == (BIGNUM *)0x0) goto LAB_001026d9;
      goto joined_r0x00102727;
    }
    pBVar3 = sig_00->r;
  }
  lVar1 = ossl_decode_der_dsa_sig(pBVar3,pBVar2,pp,len);
  if (lVar1 != 0) {
    if ((sig != (ECDSA_SIG **)0x0) && (*sig == (ECDSA_SIG *)0x0)) {
      *sig = sig_00;
      return sig_00;
    }
    return sig_00;
  }
LAB_001026d9:
  if ((sig == (ECDSA_SIG **)0x0) || (*sig == (ECDSA_SIG *)0x0)) {
    ECDSA_SIG_free(sig_00);
  }
  return (ECDSA_SIG *)0x0;
}



int i2d_ECDSA_SIG(ECDSA_SIG *sig,uchar **pp)

{
  int iVar1;
  BUF_MEM *a;
  long in_FS_OFFSET;
  long local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pp == (uchar **)0x0) {
    iVar1 = WPACKET_init_null(local_68,0);
joined_r0x00102871:
    if (iVar1 != 0) {
      a = (BUF_MEM *)0x0;
LAB_0010278a:
      iVar1 = ossl_encode_der_dsa_sig(local_68,sig->r,sig->s);
      if (((iVar1 != 0) && (iVar1 = WPACKET_get_total_written(local_68,&local_70), iVar1 != 0)) &&
         (iVar1 = WPACKET_finish(local_68), iVar1 != 0)) {
        if (pp != (uchar **)0x0) {
          if (*pp == (uchar *)0x0) {
            *pp = (uchar *)a->data;
            a->data = (char *)0x0;
            BUF_MEM_free(a);
          }
          else {
            *pp = *pp + local_70;
          }
        }
        goto LAB_001027df;
      }
      BUF_MEM_free(a);
      WPACKET_cleanup(local_68);
    }
  }
  else {
    if (*pp != (uchar *)0x0) {
      iVar1 = WPACKET_init_static_len(local_68,*pp,0xffffffffffffffff,0);
      goto joined_r0x00102871;
    }
    a = BUF_MEM_new();
    if ((a != (BUF_MEM *)0x0) && (iVar1 = WPACKET_init_len(local_68,a,0), iVar1 != 0))
    goto LAB_0010278a;
    BUF_MEM_free(a);
  }
  local_70 = 0xffffffff;
LAB_001027df:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)local_70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ECDSA_SIG_get0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_1;
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1[1];
  }
  return;
}



undefined8 ECDSA_SIG_get0_r(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ECDSA_SIG_get0_s(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



bool ECDSA_SIG_set0(long *param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    if (param_3 != 0) {
      BN_clear_free((BIGNUM *)*param_1);
      BN_clear_free((BIGNUM *)param_1[1]);
      *param_1 = param_2;
      param_1[1] = param_3;
    }
    return param_3 != 0;
  }
  return false;
}



int ECDSA_size(EC_KEY *eckey)

{
  int iVar1;
  EC_GROUP *pEVar2;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  ECDSA_SIG local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((eckey == (EC_KEY *)0x0) || (pEVar2 = EC_KEY_get0_group(eckey), pEVar2 == (EC_GROUP *)0x0))
     || (pBVar3 = (BIGNUM *)EC_GROUP_get0_order(pEVar2), pBVar3 == (BIGNUM *)0x0)) {
    iVar1 = 0;
  }
  else {
    local_28.r = pBVar3;
    local_28.s = pBVar3;
    iVar1 = i2d_ECDSA_SIG(&local_28,(uchar **)0x0);
    if (iVar1 < 0) {
      iVar1 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


