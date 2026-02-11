
bool print_bin(BIO *param_1,undefined8 param_2,long param_3,long param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  byte bVar10;
  undefined1 local_d0 [4];
  undefined1 local_cc [3];
  undefined1 uStack_c9;
  undefined1 local_c8 [8];
  undefined8 auStack_c0 [16];
  long local_40;
  
  bVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    bVar3 = true;
    goto LAB_001000b4;
  }
  if ((int)param_5 < 1) {
    local_d0 = (undefined1  [4])0x0;
LAB_001000e8:
    iVar4 = BIO_printf(param_1,"%s",param_2);
    if (0 < iVar4) {
      lVar9 = 0;
      uVar1 = (int)local_d0 + 4;
      _local_cc = uVar1 & 4;
      do {
        if (lVar9 == param_4) {
          iVar4 = BIO_write(param_1,&_LC4,1);
          bVar3 = 0 < iVar4;
          goto LAB_001000b4;
        }
        if ((ulong)(lVar9 * -0x1111111111111111) < 0x1111111111111112) {
          local_c8[0] = 10;
          if (uVar1 < 8) {
            if (_local_cc == 0) {
              if (uVar1 != 0) {
                stack0xffffffffffffff39 = CONCAT71(stack0xffffffffffffff3a,0x20);
                if ((uVar1 & 2) != 0) {
                  *(undefined2 *)(local_c8 + ((ulong)uVar1 - 1)) = 0x2020;
                }
              }
            }
            else {
              stack0xffffffffffffff39 = CONCAT44(stack0xffffffffffffff3d,0x20202020);
              *(undefined4 *)(local_c8 + ((ulong)uVar1 - 3)) = 0x20202020;
            }
          }
          else {
            stack0xffffffffffffff39 = 0x2020202020202020;
            *(undefined8 *)(local_d0 + (ulong)uVar1 + 1) = 0x2020202020202020;
            puVar7 = auStack_c0;
            for (uVar5 = (ulong)(uVar1 + (((int)local_c8 + 1) - (int)auStack_c0) >> 3); uVar5 != 0;
                uVar5 = uVar5 - 1) {
              *puVar7 = 0x2020202020202020;
              puVar7 = puVar7 + (ulong)bVar10 * -2 + 1;
            }
          }
          iVar4 = BIO_write(param_1,local_c8,(int)local_d0 + 5);
          if (iVar4 < 1) break;
          if (lVar9 + 1 != param_4) goto LAB_00100135;
LAB_001001dd:
          bVar2 = *(byte *)(param_3 + lVar9);
          puVar6 = &_LC1;
        }
        else {
          if (lVar9 + 1 == param_4) goto LAB_001001dd;
LAB_00100135:
          bVar2 = *(byte *)(param_3 + lVar9);
          puVar6 = &_LC3;
        }
        lVar9 = lVar9 + 1;
        iVar4 = BIO_printf(param_1,"%02x%s",(ulong)bVar2,puVar6);
      } while (0 < iVar4);
    }
  }
  else {
    local_d0 = (undefined1  [4])0x80;
    if ((int)param_5 < 0x81) {
      local_d0 = (undefined1  [4])param_5;
    }
    puVar7 = (undefined8 *)local_c8;
    if (7 < (uint)local_d0) {
      for (uVar5 = (ulong)((uint)local_d0 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = 0x2020202020202020;
        puVar7 = puVar7 + 1;
      }
    }
    if (((uint)local_d0 & 4) != 0) {
      *(undefined4 *)puVar7 = 0x20202020;
      puVar7 = (undefined8 *)((long)puVar7 + 4);
    }
    puVar8 = puVar7;
    if (((uint)local_d0 & 2) != 0) {
      puVar8 = (undefined8 *)((long)puVar7 + 2);
      *(undefined2 *)puVar7 = 0x2020;
    }
    if (((uint)local_d0 & 1) != 0) {
      *(undefined1 *)puVar8 = 0x20;
    }
    iVar4 = BIO_write(param_1,local_c8,(int)local_d0);
    if (0 < iVar4) goto LAB_001000e8;
  }
  bVar3 = false;
LAB_001000b4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



int EC_KEY_print_fp(FILE *fp,EC_KEY *key,int off)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = EC_KEY_print(bp,key,off);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/eck_prn.c",0x2a,"EC_KEY_print_fp");
  ERR_set_error(0x10,0x80020,0);
  return 0;
}



int ECParameters_print_fp(FILE *fp,EC_KEY *key)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = ECParameters_print(bp,key);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/eck_prn.c",0x39,"ECParameters_print_fp");
  ERR_set_error(0x10,0x80020,0);
  return 0;
}



int ECPKParameters_print(BIO *bp,EC_GROUP *x,int off)

{
  int iVar1;
  int iVar2;
  point_conversion_form_t pVar3;
  BN_CTX *c;
  BIGNUM *num;
  BIGNUM *num_00;
  BIGNUM *num_01;
  char *pcVar4;
  long lVar5;
  EC_POINT *pEVar6;
  BIGNUM *num_02;
  BIGNUM *num_03;
  uchar *puVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  long local_80;
  size_t local_58;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (x == (EC_GROUP *)0x0) {
    num_01 = (BIGNUM *)0x0;
    num_00 = (BIGNUM *)0x0;
    c = (BN_CTX *)0x0;
    uVar8 = 0xc0102;
    local_80 = 0;
    num = (BIGNUM *)0x0;
  }
  else {
    c = BN_CTX_new();
    if (c == (BN_CTX *)0x0) {
      num_01 = (BIGNUM *)0x0;
      num_00 = (BIGNUM *)0x0;
      num = (BIGNUM *)0x0;
      uVar8 = 0x80003;
      local_80 = 0;
    }
    else {
      iVar1 = EC_GROUP_get_asn1_flag(x);
      if (iVar1 == 0) {
        iVar1 = EC_GROUP_get_field_type(x);
        num = BN_new();
        if (num == (BIGNUM *)0x0) {
          local_80 = 0;
          num_00 = (BIGNUM *)0x0;
          num = (BIGNUM *)0x0;
          uVar8 = 0x80003;
          num_01 = (BIGNUM *)0x0;
        }
        else {
          num_00 = BN_new();
          if ((num_00 == (BIGNUM *)0x0) || (num_01 = BN_new(), num_01 == (BIGNUM *)0x0)) {
            uVar8 = 0x80003;
            num_01 = (BIGNUM *)0x0;
            local_80 = 0;
          }
          else {
            iVar2 = EC_GROUP_get_curve(x,num,num_00,num_01,c);
            if ((iVar2 != 0) && (pEVar6 = EC_GROUP_get0_generator(x), pEVar6 != (EC_POINT *)0x0)) {
              num_02 = (BIGNUM *)EC_GROUP_get0_order(x);
              num_03 = (BIGNUM *)EC_GROUP_get0_cofactor(x);
              if (num_02 != (BIGNUM *)0x0) {
                pVar3 = EC_GROUP_get_point_conversion_form(x);
                local_80 = EC_POINT_point2buf(x,pEVar6,pVar3,&local_48,c);
                if (local_80 != 0) {
                  puVar7 = EC_GROUP_get0_seed(x);
                  local_58 = 0;
                  if (puVar7 != (uchar *)0x0) {
                    local_58 = EC_GROUP_get_seed_len(x);
                  }
                  iVar2 = BIO_indent(bp,off,0x80);
                  if (iVar2 != 0) {
                    pcVar4 = OBJ_nid2sn(iVar1);
                    iVar2 = BIO_printf(bp,"Field Type: %s\n",pcVar4);
                    if (0 < iVar2) {
                      if (iVar1 == 0x197) {
                        iVar1 = EC_GROUP_get_basis_type(x);
                        if ((iVar1 != 0) && (iVar2 = BIO_indent(bp,off,0x80), iVar2 != 0)) {
                          pcVar4 = OBJ_nid2sn(iVar1);
                          iVar1 = BIO_printf(bp,"Basis Type: %s\n",pcVar4);
                          if (0 < iVar1) {
                            iVar1 = ASN1_bn_print(bp,"Polynomial:",num,(uchar *)0x0,off);
                            goto joined_r0x00100959;
                          }
                        }
                      }
                      else {
                        iVar1 = ASN1_bn_print(bp,"Prime:",num,(uchar *)0x0,off);
joined_r0x00100959:
                        if (((iVar1 != 0) &&
                            (iVar1 = ASN1_bn_print(bp,"A:   ",num_00,(uchar *)0x0,off), iVar1 != 0))
                           && (iVar1 = ASN1_bn_print(bp,"B:   ",num_01,(uchar *)0x0,off), iVar1 != 0
                              )) {
                          pcVar4 = "Generator (compressed):";
                          if ((pVar3 != POINT_CONVERSION_COMPRESSED) &&
                             (pcVar4 = "Generator (hybrid):", pVar3 == POINT_CONVERSION_UNCOMPRESSED
                             )) {
                            pcVar4 = "Generator (uncompressed):";
                          }
                          if ((((local_48 == 0) ||
                               (iVar1 = print_bin(bp,pcVar4,local_48,local_80,off), iVar1 != 0)) &&
                              ((iVar1 = ASN1_bn_print(bp,"Order: ",num_02,(uchar *)0x0,off),
                               iVar1 != 0 &&
                               ((num_03 == (BIGNUM *)0x0 ||
                                (iVar1 = ASN1_bn_print(bp,"Cofactor: ",num_03,(uchar *)0x0,off),
                                iVar1 != 0)))))) &&
                             ((puVar7 == (uchar *)0x0 ||
                              (iVar1 = print_bin(bp,"Seed:",puVar7,local_58,off), iVar1 != 0)))) {
                            iVar1 = 1;
                            goto LAB_001004ab;
                          }
                        }
                      }
                    }
                  }
                  uVar8 = 0x80020;
                  goto LAB_00100477;
                }
              }
            }
            uVar8 = 0x80010;
            local_80 = 0;
          }
        }
      }
      else {
        iVar1 = BIO_indent(bp,off,0x80);
        if ((iVar1 != 0) && (iVar1 = EC_GROUP_get_curve_name(x), iVar1 != 0)) {
          pcVar4 = OBJ_nid2sn(iVar1);
          iVar2 = BIO_printf(bp,"ASN1 OID: %s",pcVar4);
          if ((0 < iVar2) && (iVar2 = BIO_printf(bp,"\n"), 0 < iVar2)) {
            lVar5 = EC_curve_nid2nist(iVar1);
            if (lVar5 == 0) {
              local_80 = 0;
              num_01 = (BIGNUM *)0x0;
              num_00 = (BIGNUM *)0x0;
              iVar1 = 1;
              num = (BIGNUM *)0x0;
              goto LAB_001004ab;
            }
            iVar1 = BIO_indent(bp,off,0x80);
            if ((iVar1 != 0) && (iVar1 = BIO_printf(bp,"NIST CURVE: %s\n",lVar5), 0 < iVar1)) {
              num_01 = (BIGNUM *)0x0;
              num_00 = (BIGNUM *)0x0;
              num = (BIGNUM *)0x0;
              iVar1 = 1;
              local_80 = 0;
              goto LAB_001004ab;
            }
          }
        }
        num_01 = (BIGNUM *)0x0;
        num_00 = (BIGNUM *)0x0;
        num = (BIGNUM *)0x0;
        uVar8 = 0x80020;
        local_80 = 0;
      }
    }
  }
LAB_00100477:
  ERR_new();
  ERR_set_debug("crypto/ec/eck_prn.c",0xd8,"ECPKParameters_print");
  iVar1 = 0;
  ERR_set_error(0x10,uVar8,0);
LAB_001004ab:
  BN_free(num);
  BN_free(num_00);
  BN_free(num_01);
  CRYPTO_clear_free(local_48,local_80,"crypto/ec/eck_prn.c",0xdc);
  BN_CTX_free(c);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ECPKParameters_print_fp(FILE *fp,EC_GROUP *x,int off)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = ECPKParameters_print(bp,x,off);
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/eck_prn.c",0x1b,"ECPKParameters_print_fp");
  ERR_set_error(0x10,0x80007,0);
  return 0;
}


