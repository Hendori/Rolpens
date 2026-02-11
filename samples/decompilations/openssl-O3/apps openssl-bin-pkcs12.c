
undefined8 jdk_trust(undefined8 param_1,void *param_2)

{
  X509_ATTRIBUTE *attr;
  long in_FS_OFFSET;
  stack_st_X509_ATTRIBUTE *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (stack_st_X509_ATTRIBUTE *)0x0;
  if (param_2 != (void *)0x0) {
    local_28 = (stack_st_X509_ATTRIBUTE *)PKCS12_SAFEBAG_get0_attrs();
    attr = X509_ATTRIBUTE_create(0x503,6,param_2);
    X509at_add1_attr(&local_28,attr);
    PKCS12_SAFEBAG_set0_attrs(param_1,local_28);
    X509_ATTRIBUTE_free(attr);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void alg_print_isra_0(X509_ALGOR *param_1)

{
  int iVar1;
  int n;
  uint uVar2;
  char *pcVar3;
  ASN1_ITEM *pAVar4;
  PBEPARAM *a;
  long lVar5;
  PBE2PARAM *a_00;
  char *pcVar6;
  PBKDF2PARAM *a_01;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  int local_44;
  ASN1_OBJECT *local_40;
  ASN1_STRING *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  X509_ALGOR_get0(&local_40,&local_44,&local_38,param_1);
  iVar1 = OBJ_obj2nid(local_40);
  pcVar3 = OBJ_nid2ln(iVar1);
  BIO_printf(_bio_err,"%s",pcVar3);
  if (iVar1 == 0xa1) {
    if (local_44 == 0x10) {
      pAVar4 = (ASN1_ITEM *)PBE2PARAM_it();
      a_00 = (PBE2PARAM *)ASN1_item_unpack(local_38,pAVar4);
      if (a_00 != (PBE2PARAM *)0x0) {
        X509_ALGOR_get0(&local_40,&local_44,&local_38,a_00->keyfunc);
        iVar1 = OBJ_obj2nid(local_40);
        X509_ALGOR_get0(&local_40,(int *)0x0,(void **)0x0,a_00->encryption);
        n = OBJ_obj2nid(local_40);
        pcVar3 = OBJ_nid2sn(n);
        pcVar6 = OBJ_nid2ln(iVar1);
        BIO_printf(_bio_err,", %s, %s",pcVar6,pcVar3);
        if (iVar1 == 0x45) {
          if (local_44 == 0x10) {
            pAVar4 = (ASN1_ITEM *)PBKDF2PARAM_it();
            a_01 = (PBKDF2PARAM *)ASN1_item_unpack(local_38,pAVar4);
            if (a_01 != (PBKDF2PARAM *)0x0) {
              iVar1 = 0xa3;
              if (a_01->prf != (X509_ALGOR *)0x0) {
                X509_ALGOR_get0(&local_40,(int *)0x0,(void **)0x0,a_01->prf);
                iVar1 = OBJ_obj2nid(local_40);
              }
              pcVar3 = OBJ_nid2sn(iVar1);
              lVar5 = ASN1_INTEGER_get(a_01->iter);
              BIO_printf(_bio_err,", Iteration %ld, PRF %s",lVar5,pcVar3);
              PBKDF2PARAM_free(a_01);
              goto LAB_00100241;
            }
          }
        }
        else {
          if (iVar1 != 0x3cd) {
LAB_00100241:
            PBE2PARAM_free(a_00);
            goto LAB_0010011d;
          }
          if (local_44 == 0x10) {
            pAVar4 = (ASN1_ITEM *)SCRYPT_PARAMS_it();
            puVar7 = (undefined8 *)ASN1_item_unpack(local_38,pAVar4);
            if (puVar7 != (undefined8 *)0x0) {
              lVar5 = ASN1_INTEGER_get((ASN1_INTEGER *)puVar7[3]);
              lVar8 = ASN1_INTEGER_get((ASN1_INTEGER *)puVar7[2]);
              lVar9 = ASN1_INTEGER_get((ASN1_INTEGER *)puVar7[1]);
              uVar2 = ASN1_STRING_length((ASN1_STRING *)*puVar7);
              BIO_printf(_bio_err,
                         ", Salt length: %d, Cost(N): %ld, Block size(r): %ld, Parallelism(p): %ld",
                         (ulong)uVar2,lVar9,lVar8,lVar5);
              SCRYPT_PARAMS_free(puVar7);
              goto LAB_00100241;
            }
          }
        }
      }
    }
  }
  else if (local_44 == 0x10) {
    pAVar4 = (ASN1_ITEM *)PBEPARAM_it();
    a = (PBEPARAM *)ASN1_item_unpack(local_38,pAVar4);
    if (a != (PBEPARAM *)0x0) {
      lVar5 = ASN1_INTEGER_get(a->iter);
      BIO_printf(_bio_err,", Iteration %ld",lVar5);
      PBEPARAM_free(a);
      goto LAB_0010011d;
    }
  }
  BIO_puts(_bio_err,", <unsupported parameters>");
LAB_0010011d:
  BIO_puts(_bio_err,"\n");
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int cert_load(BIO *param_1,undefined8 param_2)

{
  int iVar1;
  X509 *pXVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    pXVar2 = PEM_read_bio_X509(param_1,(X509 **)0x0,(undefined1 *)0x0,(void *)0x0);
    if (pXVar2 == (X509 *)0x0) {
      if (iVar3 == 0) {
        return 0;
      }
      ERR_clear_error();
      return iVar3;
    }
    iVar3 = 1;
    iVar1 = OPENSSL_sk_push(param_2);
  } while (iVar1 != 0);
  return 0;
}



void print_attribute(BIO *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  long in_FS_OFFSET;
  char acStack_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*param_2) {
  case 3:
    iVar2 = **(int **)(param_2 + 2);
    pbVar4 = *(byte **)(*(int **)(param_2 + 2) + 2);
    if (0 < iVar2) {
      pbVar5 = pbVar4 + iVar2;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        BIO_printf(param_1,"%02X ",(ulong)bVar1);
      } while (pbVar5 != pbVar4);
    }
    goto LAB_0010047a;
  case 4:
    iVar2 = **(int **)(param_2 + 2);
    pbVar4 = *(byte **)(*(int **)(param_2 + 2) + 2);
    if (0 < iVar2) {
      pbVar5 = pbVar4 + iVar2;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
        BIO_printf(param_1,"%02X ",(ulong)bVar1);
      } while (pbVar4 != pbVar5);
    }
LAB_0010047a:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      BIO_printf(param_1,"\n");
      return;
    }
    break;
  default:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      BIO_printf(param_1,"<Unsupported tag %d>\n");
      return;
    }
    break;
  case 6:
    iVar2 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_2 + 2));
    pcVar3 = OBJ_nid2ln(iVar2);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    OBJ_obj2txt(acStack_88,0x50,*(ASN1_OBJECT **)(param_2 + 2),1);
    BIO_printf(param_1,"%s (%s)",pcVar3,acStack_88);
    BIO_printf(param_1,"\n");
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    break;
  case 0xc:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      BIO_printf(param_1,"%.*s\n",(ulong)**(uint **)(param_2 + 2),
                 *(undefined8 *)(*(uint **)(param_2 + 2) + 2));
      return;
    }
    break;
  case 0x1e:
    pcVar3 = OPENSSL_uni2asc(*(uchar **)(*(int **)(param_2 + 2) + 2),**(int **)(param_2 + 2));
    BIO_printf(param_1,"%s\n",pcVar3);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      CRYPTO_free(pcVar3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 print_attribs(BIO *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  X509_ATTRIBUTE *attr;
  ASN1_OBJECT *o;
  char *pcVar4;
  ASN1_TYPE *pAVar5;
  
  if (param_2 == 0) {
    BIO_printf(param_1,"%s: <No Attributes>\n");
  }
  else {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 == 0) {
      BIO_printf(param_1,"%s: <Empty Attributes>\n",param_3);
    }
    else {
      BIO_printf(param_1,"%s\n",param_3);
      for (iVar1 = 0; iVar2 = OPENSSL_sk_num(param_2), iVar1 < iVar2; iVar1 = iVar1 + 1) {
        attr = (X509_ATTRIBUTE *)OPENSSL_sk_value(param_2,iVar1);
        o = X509_ATTRIBUTE_get0_object(attr);
        iVar2 = OBJ_obj2nid(o);
        BIO_printf(param_1,"    ");
        if (iVar2 == 0) {
          i2a_ASN1_OBJECT(param_1,o);
          BIO_printf(param_1,": ");
          iVar2 = X509_ATTRIBUTE_count(attr);
          if (iVar2 != 0) goto LAB_00100719;
LAB_0010068c:
          BIO_printf(param_1,"<No Values>\n");
        }
        else {
          pcVar4 = OBJ_nid2ln(iVar2);
          BIO_printf(param_1,"%s: ",pcVar4);
          iVar2 = X509_ATTRIBUTE_count(attr);
          if (iVar2 == 0) goto LAB_0010068c;
LAB_00100719:
          for (iVar2 = 0; iVar3 = X509_ATTRIBUTE_count(attr), iVar2 < iVar3; iVar2 = iVar2 + 1) {
            pAVar5 = X509_ATTRIBUTE_get0_type(attr,iVar2);
            print_attribute(param_1,pAVar5);
          }
        }
      }
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int dump_certs_pkeys_bag
              (BIO *param_1,PKCS12_SAFEBAG *param_2,char *param_3,int param_4,uint param_5,
              void *param_6,EVP_CIPHER *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  PKCS8_PRIV_KEY_INFO *pPVar5;
  EVP_PKEY *x;
  long lVar6;
  X509 *x_00;
  ASN1_OBJECT *pAVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = PKCS12_SAFEBAG_get0_attrs(param_2);
  uVar1 = PKCS12_SAFEBAG_get_nid(param_2);
  switch(uVar1) {
  case 0x96:
    if ((param_5 & 4) != 0) {
      BIO_printf(_bio_err,"Key bag\n");
    }
    if ((param_5 & 1) == 0) {
      print_attribs(param_1,uVar3,"Bag Attributes");
      pPVar5 = (PKCS8_PRIV_KEY_INFO *)PKCS12_SAFEBAG_get0_p8inf(param_2);
      x = EVP_PKCS82PKEY(pPVar5);
      if (x != (EVP_PKEY *)0x0) {
        uVar3 = PKCS8_pkey_get0_attrs(pPVar5);
        print_attribs(param_1,uVar3,"Key Attributes");
LAB_001008df:
        iVar8 = PEM_write_bio_PrivateKey(param_1,x,param_7,(uchar *)0x0,0,(undefined1 *)0x0,param_6)
        ;
        EVP_PKEY_free(x);
        goto LAB_0010090e;
      }
LAB_00100be0:
      iVar8 = 0;
      goto LAB_0010090e;
    }
    break;
  case 0x97:
    if ((param_5 & 4) != 0) {
      BIO_printf(_bio_err,"Shrouded Keybag: ");
      uVar4 = PKCS12_SAFEBAG_get0_pkcs8(param_2);
      X509_SIG_get0(uVar4,&local_48,0);
      alg_print_isra_0(local_48);
    }
    if ((param_5 & 1) == 0) {
      print_attribs(param_1,uVar3,"Bag Attributes");
      pPVar5 = PKCS12_decrypt_skey(param_2,param_3,param_4);
      if (pPVar5 != (PKCS8_PRIV_KEY_INFO *)0x0) {
        x = EVP_PKCS82PKEY(pPVar5);
        if (x != (EVP_PKEY *)0x0) {
          uVar3 = PKCS8_pkey_get0_attrs();
          print_attribs(param_1,uVar3,"Key Attributes");
          PKCS8_PRIV_KEY_INFO_free(pPVar5);
          goto LAB_001008df;
        }
        PKCS8_PRIV_KEY_INFO_free(pPVar5);
      }
      goto LAB_00100be0;
    }
    break;
  case 0x98:
    if ((param_5 & 4) != 0) {
      BIO_printf(_bio_err,"Certificate bag\n");
    }
    if ((param_5 & 2) == 0) {
      lVar6 = PKCS12_SAFEBAG_get0_attr(param_2,0x9d);
      if (lVar6 == 0) {
        param_5 = param_5 & 8;
      }
      else {
        param_5 = param_5 & 0x10;
      }
      if (param_5 == 0) {
        print_attribs(param_1,uVar3,"Bag Attributes");
        iVar8 = PKCS12_SAFEBAG_get_bag_nid(param_2);
        if (iVar8 == 0x9e) {
          x_00 = (X509 *)PKCS12_SAFEBAG_get1_cert(param_2);
          if (x_00 != (X509 *)0x0) {
            dump_cert_text(param_1,x_00);
            iVar8 = PEM_write_bio_X509(param_1,x_00);
            X509_free(x_00);
            goto LAB_0010090e;
          }
          goto LAB_00100be0;
        }
      }
    }
    break;
  default:
    BIO_printf(_bio_err,"Warning unsupported bag type: ");
    pAVar7 = (ASN1_OBJECT *)PKCS12_SAFEBAG_get0_type(param_2);
    i2a_ASN1_OBJECT(_bio_err,pAVar7);
    BIO_printf(_bio_err,"\n");
    break;
  case 0x9a:
    if ((param_5 & 4) != 0) {
      BIO_printf(_bio_err,"Secret bag\n");
    }
    print_attribs(param_1,uVar3,"Bag Attributes");
    BIO_printf(_bio_err,"Bag Type: ");
    pAVar7 = (ASN1_OBJECT *)PKCS12_SAFEBAG_get0_bag_type(param_2);
    i2a_ASN1_OBJECT(_bio_err,pAVar7);
    BIO_printf(_bio_err,"\nBag Value: ");
    uVar3 = PKCS12_SAFEBAG_get0_bag_obj(param_2);
    print_attribute(param_1,uVar3);
    break;
  case 0x9b:
    if ((param_5 & 4) != 0) {
      BIO_printf(_bio_err,"Safe Contents bag\n");
    }
    print_attribs(param_1,uVar3,"Bag Attributes");
    uVar3 = PKCS12_SAFEBAG_get0_safes(param_2);
    for (iVar8 = 0; iVar2 = OPENSSL_sk_num(uVar3), iVar8 < iVar2; iVar8 = iVar8 + 1) {
      uVar4 = OPENSSL_sk_value(uVar3,iVar8);
      iVar2 = dump_certs_pkeys_bag(param_1,uVar4,param_3,param_4,param_5,param_6,param_7);
      if (iVar2 == 0) goto LAB_00100be0;
    }
  }
  iVar8 = 1;
LAB_0010090e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
dump_certs_pkeys_bags
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
          undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar3) {
      return 1;
    }
    uVar2 = OPENSSL_sk_value(param_2,iVar3);
    uVar2 = dump_certs_pkeys_bag(param_1,uVar2,param_3,param_4,param_5,param_6,param_7);
    if ((int)uVar2 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
dump_certs_keys_p12(undefined8 param_1,PKCS12 *param_2,char *param_3,int param_4,uint param_5,
                   undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  stack_st_PKCS7 *psVar3;
  PKCS7 *p7;
  stack_st_PKCS12_SAFEBAG *psVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_40;
  
  psVar3 = PKCS12_unpack_authsafes(param_2);
  if (psVar3 == (stack_st_PKCS7 *)0x0) {
    uVar5 = 0;
  }
  else {
    local_40 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(psVar3);
      if (iVar1 <= local_40) break;
      p7 = (PKCS7 *)OPENSSL_sk_value(psVar3,local_40);
      iVar1 = OBJ_obj2nid(p7->type);
      if (iVar1 == 0x15) {
        psVar4 = PKCS12_unpack_p7data(p7);
        if ((param_5 & 4) == 0) goto LAB_00100d51;
        BIO_printf(_bio_err,"PKCS7 Data\n");
        if (psVar4 == (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_00100df5;
LAB_00100d5a:
        iVar1 = 0;
        while( true ) {
          iVar2 = OPENSSL_sk_num(psVar4);
          if (iVar2 <= iVar1) break;
          uVar5 = OPENSSL_sk_value(psVar4,iVar1);
          uVar6 = param_7;
          iVar2 = dump_certs_pkeys_bag(param_1,uVar5,param_3,param_4,param_5,param_6,param_7);
          if (iVar2 == 0) {
            uVar5 = 0;
            OPENSSL_sk_pop_free(psVar4,&PKCS12_SAFEBAG_free,uVar6,0x100d6a);
            goto LAB_00100e4d;
          }
          iVar1 = iVar1 + 1;
        }
        OPENSSL_sk_pop_free(psVar4,&PKCS12_SAFEBAG_free);
      }
      else if (iVar1 == 0x1a) {
        if ((param_5 & 4) != 0) {
          BIO_printf(_bio_err,"PKCS7 Encrypted data: ");
          if ((p7->d).digest == (PKCS7_DIGEST *)0x0) {
            BIO_printf(_bio_err,"<no data>\n");
          }
          else {
            alg_print_isra_0(((p7->d).digest)->md->parameter);
          }
        }
        psVar4 = PKCS12_unpack_p7encdata(p7,param_3,param_4);
LAB_00100d51:
        if (psVar4 != (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_00100d5a;
LAB_00100df5:
        uVar5 = 0;
        goto LAB_00100e4d;
      }
      local_40 = local_40 + 1;
    }
    uVar5 = 1;
LAB_00100e4d:
    OPENSSL_sk_pop_free(psVar3,&PKCS7_free);
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pkcs12_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  uint iter;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ASN1_STRING *chain;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  EVP_CIPHER *pEVar12;
  undefined8 uVar13;
  BIO *bp;
  EVP_PKEY *key;
  X509_STORE *store;
  X509_STORE_CTX *ctx;
  stack_st_X509 *psVar14;
  uchar *puVar15;
  X509 *pXVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  BIO *bp_00;
  ulong uVar19;
  uchar *ptr;
  PBKDF2PARAM *a;
  char *pcVar20;
  long lVar21;
  undefined8 extraout_RDX;
  uint uVar22;
  long lVar23;
  long in_FS_OFFSET;
  long local_11b0;
  undefined8 local_11a8;
  uchar *local_11a0;
  uchar *local_1198;
  X509 *local_1190;
  uint local_1188;
  int local_1184;
  long local_1180;
  ASN1_OBJECT *local_1178;
  int local_1164;
  uchar *local_1158;
  long local_1150;
  undefined *local_1148;
  long local_1140;
  long local_1138;
  long local_1130;
  undefined8 local_1128;
  int local_1120;
  int local_111c;
  long local_1118;
  long local_1110;
  uchar *local_1108;
  long local_1100;
  undefined8 local_10f8;
  undefined8 local_10f0;
  long local_10e8;
  long local_10e0;
  int local_10d4;
  int local_10d0;
  int local_10cc;
  undefined8 local_10c8;
  void *local_10a0;
  uchar *local_1098;
  uchar *local_1090;
  PKCS12 *local_1088;
  EVP_CIPHER *local_1080;
  ASN1_INTEGER *local_1078;
  X509_ALGOR *local_1070;
  ASN1_OBJECT *local_1068;
  ASN1_STRING *local_1060;
  ASN1_STRING *local_1058;
  EVP_MD *local_1050;
  uchar local_1048 [2048];
  uchar local_848 [2056];
  long local_40;
  
  uVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10a0 = (void *)0x0;
  local_1098 = (uchar *)0x0;
  local_1090 = (uchar *)0x0;
  local_1088 = (PKCS12 *)0x0;
  puVar15 = local_1048;
  for (lVar21 = 0x100; lVar21 != 0; lVar21 = lVar21 + -1) {
    puVar15[0] = '\0';
    puVar15[1] = '\0';
    puVar15[2] = '\0';
    puVar15[3] = '\0';
    puVar15[4] = '\0';
    puVar15[5] = '\0';
    puVar15[6] = '\0';
    puVar15[7] = '\0';
    puVar15 = puVar15 + 8;
  }
  puVar15 = local_848;
  for (lVar21 = 0x100; lVar21 != 0; lVar21 = lVar21 + -1) {
    puVar15[0] = '\0';
    puVar15[1] = '\0';
    puVar15[2] = '\0';
    puVar15[3] = '\0';
    puVar15[4] = '\0';
    puVar15[5] = '\0';
    puVar15[6] = '\0';
    puVar15[7] = '\0';
    puVar15 = puVar15 + 8;
  }
  pEVar12 = EVP_aes_256_cbc();
  local_1080 = pEVar12;
  opt_set_unknown_name("cipher");
  uVar22 = 0;
  uVar13 = opt_init(param_1,param_2,pkcs12_options);
  local_1164 = 0;
  local_11b0 = 0;
  local_11a8 = 0;
  local_10cc = 0;
  local_10d0 = 0;
  local_10d4 = 0;
  local_10e0 = 0;
  local_10e8 = 0;
  local_1110 = 0;
  local_10c8 = 0;
  local_1148 = (undefined *)0x0;
  local_1138 = 0;
  local_10f0 = 0;
  local_10f8 = 0;
  bVar1 = false;
  local_1120 = 1;
  local_111c = 8;
  bVar4 = false;
  local_1188 = 0;
  bVar2 = false;
  local_1178 = (ASN1_OBJECT *)0x0;
  local_1184 = 0;
  bVar3 = false;
  bVar6 = false;
  bVar5 = false;
  local_1108 = (uchar *)0x0;
  local_1100 = 0;
  local_1130 = 0;
  local_1180 = 0;
  local_1198 = (uchar *)0x0;
  local_1190 = (X509 *)0x0;
  local_1118 = 0;
  local_1140 = 0;
  local_1128 = 0;
  local_1150 = 0;
  iter = 0;
switchD_00101107_caseD_0:
  do {
    iVar8 = opt_next();
    if (iVar8 == 0) {
LAB_00101130:
      iVar9 = opt_check_rest_arg(0);
      if (iVar9 == 0) goto switchD_00101107_caseD_ffffffff;
      iVar9 = app_RAND_load();
      if (iVar9 == 0) goto LAB_0010115c;
      iVar9 = opt_cipher_any(local_1198,&local_1080);
      if (iVar9 == 0) goto switchD_00101107_caseD_ffffffff;
      if (bVar5) {
        if ((uVar22 & 4) != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n",&_LC40);
        }
        if (local_1120 == 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n","nomacver");
        }
        if ((uVar22 & 8) != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n","clcerts");
        }
        if ((uVar22 & 0x10) != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n","cacerts");
        }
        if (local_1080 != pEVar12) {
          BIO_printf(_bio_err,"Warning: output encryption option -%s ignored with -export\n",
                     local_1180);
        }
      }
      else {
        if (local_1140 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","inkey");
        }
        if (local_1118 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","certfile");
        }
        if (local_1130 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","passcerts");
        }
        if (bVar6) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","chain");
        }
        if (local_1190 != (X509 *)0x0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","untrusted");
        }
        if (local_10e8 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","CAfile");
        }
        if (local_1110 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","CApath");
        }
        if (local_10e0 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","CAstore");
        }
        if (local_10d0 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","no-CAfile");
        }
        if (local_10d4 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","no-CApath");
        }
        if (local_10cc != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","no-CAstore");
        }
        if (local_1100 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n",&_LC58);
        }
        if (local_11b0 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","caname");
        }
        if (local_1108 != (uchar *)0x0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n",&_LC60);
        }
        if (bVar1) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n",&_LC61);
        }
        if (local_1184 == 0x10) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","keyex");
        }
        else if (local_1184 == 0x80) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","keysig");
        }
        if (local_1164 != 0) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","keypbe");
        }
        if (uVar11 + 1 < 2) {
          if (local_1148 != (undefined *)0x0) {
LAB_0010194b:
            BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","macalg");
          }
          if (local_1188 != 0) {
LAB_00101eb9:
            BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","iter and -noiter");
          }
          if (iter == 1) {
LAB_00101e6d:
            BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","nomaciter");
          }
          else if ((iter & uVar11) == 0xffffffff) {
            BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","nomac");
          }
        }
        else {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","certpbe and -descert"
                    );
          if (local_1148 != (undefined *)0x0) goto LAB_0010194b;
          if (local_1188 != 0) goto LAB_00101eb9;
          if (iter == 1) goto LAB_00101e6d;
        }
        if (local_111c != 8) {
          BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","macsaltlen");
        }
      }
      puVar7 = local_1148;
      if (bVar2) {
        uVar17 = app_get0_libctx();
        iVar9 = OSSL_PROVIDER_available(uVar17,"legacy");
        if (iVar9 == 0) {
          uVar17 = app_get0_libctx();
          iVar9 = app_provider_load(uVar17,"legacy");
          if (iVar9 == 0) goto LAB_0010115c;
          uVar17 = app_get0_libctx();
          iVar9 = app_provider_load(uVar17,"default");
          if (iVar9 == 0) goto LAB_0010115c;
        }
        if (uVar11 == 0) {
          uVar11 = 0x95;
        }
        iVar9 = 0x92;
        if (local_1164 != 0) {
          iVar9 = local_1164;
        }
        if (local_1080 == pEVar12) {
          local_1080 = EVP_des_ede3_cbc();
        }
        local_1164 = iVar9;
        puVar7 = &_LC33;
        if (local_1148 != (undefined *)0x0) {
          puVar7 = local_1148;
        }
      }
      local_1148 = puVar7;
      iVar9 = app_passwd(local_1130,0,&local_10a0,0);
      if (iVar9 == 0) {
        BIO_printf(_bio_err,"Error getting certificate file password\n");
        goto LAB_0010115c;
      }
      if (local_1138 == 0) {
        iVar9 = app_passwd(local_10f8,local_10f0,&local_1098);
        if (iVar9 != 0) {
          if (!bVar5) goto LAB_00101c8c;
LAB_00101a39:
          local_1198 = local_1090;
          if (local_1090 == (uchar *)0x0) {
            if ((bVar3) &&
               (iVar9 = EVP_read_pw_string((char *)local_848,0x800,"Enter MAC Password:",1),
               iVar9 != 0)) {
LAB_001024dc:
              BIO_printf(_bio_err,"Can\'t read Password\n");
              goto LAB_0010115c;
            }
            bVar2 = false;
            local_1198 = local_848;
            local_1158 = local_1048;
          }
          else {
            if (bVar3) {
              BIO_printf(_bio_err,"Option -twopass cannot be used with -passout or -password\n");
              goto LAB_0010115c;
            }
            local_1158 = local_1090;
            bVar2 = true;
          }
          local_1060 = (ASN1_STRING *)0x0;
          local_1058 = (ASN1_STRING *)0x0;
          local_1050 = (EVP_MD *)0x0;
          if ((~uVar22 & 3) == 0) {
            BIO_printf(_bio_err,"Nothing to export due to -noout or -nocerts and -nokeys\n");
LAB_0010261e:
            local_1178 = (ASN1_OBJECT *)0x0;
            key = (EVP_PKEY *)0x0;
            bp_00 = (BIO *)0x0;
            iVar8 = 1;
            local_1190 = (X509 *)0x0;
            goto LAB_0010242b;
          }
          if ((uVar22 & 2) == 0) {
            if ((uVar22 & 1) == 0) {
LAB_00102042:
              pcVar20 = "private key from -inkey file";
              if (local_1140 == 0) {
                local_1140 = local_1150;
                pcVar20 = "private key from -in file";
              }
              key = (EVP_PKEY *)load_key(local_1140,0x8005,1,local_1098,local_11a8,pcVar20);
              if (key == (EVP_PKEY *)0x0) goto LAB_0010261e;
              if ((uVar22 & 2) != 0) {
                pXVar16 = (X509 *)0x0;
                if (local_1190 != (X509 *)0x0) goto LAB_00102098;
                if (bVar6) goto LAB_001025e1;
                goto LAB_001021d9;
              }
            }
            else {
              key = (EVP_PKEY *)0x0;
            }
            iVar9 = load_certs(local_1150,1,&local_1060,local_1098,"certificates from -in file");
            if (iVar9 == 0) goto LAB_00101b56;
            iVar9 = OPENSSL_sk_num(local_1060);
            if (iVar9 < 1) {
              bp_00 = (BIO *)0x0;
              iVar8 = 1;
              BIO_printf(_bio_err,"No certificate in -in file %s\n",local_1150);
              local_1178 = (ASN1_OBJECT *)0x0;
              local_1190 = (X509 *)0x0;
              goto LAB_0010242b;
            }
            iVar9 = 0;
            if (key != (EVP_PKEY *)0x0) break;
            pXVar16 = (X509 *)0x0;
            if (local_1190 != (X509 *)0x0) goto LAB_00102098;
            if (bVar6) goto LAB_001025e1;
          }
          else {
            BIO_printf(_bio_err,"Warning: -chain option ignored with -nocerts\n");
            if ((uVar22 & 1) == 0) {
              bVar6 = false;
              goto LAB_00102042;
            }
            if ((local_1190 != (X509 *)0x0) &&
               (iVar9 = load_certs(local_1190,0,&local_1058,local_10a0,"untrusted certificates"),
               iVar9 == 0)) goto LAB_0010261e;
          }
          local_1190 = (X509 *)0x0;
          key = (EVP_PKEY *)0x0;
          goto LAB_001021d9;
        }
      }
      else if (bVar5) {
        iVar9 = app_passwd(local_10f8,local_1138,&local_1098);
        if (iVar9 != 0) goto LAB_00101a39;
      }
      else {
        iVar9 = app_passwd(local_1138,local_10f0,&local_1098);
        if (iVar9 != 0) {
LAB_00101c8c:
          if (local_1098 == (uchar *)0x0) {
            if ((bVar3) &&
               (iVar9 = EVP_read_pw_string((char *)local_848,0x800,"Enter MAC Password:",0),
               iVar9 != 0)) goto LAB_001024dc;
            bVar1 = false;
            puVar15 = local_848;
            local_11a0 = local_1048;
          }
          else {
            if (bVar3) {
              BIO_printf(_bio_err,"Option -twopass cannot be used with -passin or -password\n");
              goto LAB_0010115c;
            }
            local_11a0 = local_1098;
            bVar1 = true;
            puVar15 = local_1098;
          }
          bp = (BIO *)bio_open_default(local_1150,0x72,6);
          if (bp != (BIO *)0x0) {
            uVar13 = app_get0_propq();
            uVar17 = app_get0_libctx();
            local_1088 = (PKCS12 *)PKCS12_init_ex(0x15,uVar17,uVar13);
            if ((local_1088 == (PKCS12 *)0x0) ||
               (local_1088 = d2i_PKCS12_bio(bp,&local_1088), local_1088 == (PKCS12 *)0x0)) {
              ERR_print_errors(_bio_err);
            }
            else {
              if ((bVar1) ||
                 (iVar9 = EVP_read_pw_string((char *)local_1048,0x800,"Enter Import Password:",0),
                 iVar9 == 0)) {
                if (!bVar3) {
                  OPENSSL_strlcpy(local_848,local_1048,0x800);
                }
                if (((uVar22 & 4) != 0) && (iVar9 = PKCS12_mac_present(local_1088), iVar9 != 0)) {
                  PKCS12_get0_mac(&local_1060,&local_1070,&local_1058,&local_1078,local_1088);
                  X509_ALGOR_get0(&local_1068,(int *)0x0,(void **)0x0,local_1070);
                  BIO_puts(_bio_err,"MAC: ");
                  i2a_ASN1_OBJECT(_bio_err,local_1068);
                  iVar9 = OBJ_obj2nid(local_1068);
                  if (iVar9 == 0xa2) {
                    a = (PBKDF2PARAM *)PBMAC1_get1_pbkdf2_param(local_1070);
                    if (a == (PBKDF2PARAM *)0x0) {
                      BIO_printf(_bio_err,", Unsupported KDF or params for PBMAC1\n");
                    }
                    else {
                      lVar21 = ASN1_INTEGER_get(a->iter);
                      BIO_printf(_bio_err," using PBKDF2, Iteration %ld\n",lVar21);
                      uVar11 = ASN1_STRING_length((a->salt->value).asn1_string);
                      lVar21 = ASN1_INTEGER_get(a->keylength);
                      BIO_printf(_bio_err,"Key length: %ld, Salt length: %d\n",lVar21,(ulong)uVar11)
                      ;
                      iVar9 = 0xa3;
                      if (a->prf != (X509_ALGOR *)0x0) {
                        X509_ALGOR_get0((ASN1_OBJECT **)&local_1050,(int *)0x0,(void **)0x0,a->prf);
                        iVar9 = OBJ_obj2nid((ASN1_OBJECT *)local_1050);
                      }
                      pcVar20 = OBJ_nid2sn(iVar9);
                      BIO_printf(_bio_err,"PBKDF2 PRF: %s\n",pcVar20);
                    }
                    PBKDF2PARAM_free(a);
                  }
                  else {
                    lVar21 = 1;
                    if (local_1078 != (ASN1_INTEGER *)0x0) {
                      lVar21 = ASN1_INTEGER_get(local_1078);
                    }
                    lVar23 = 0;
                    BIO_printf(_bio_err,", Iteration %ld\n",lVar21);
                    if (local_1058 != (ASN1_STRING *)0x0) {
                      iVar9 = ASN1_STRING_length(local_1058);
                      lVar23 = (long)iVar9;
                    }
                    lVar21 = 0;
                    if (local_1060 != (ASN1_STRING *)0x0) {
                      iVar9 = ASN1_STRING_length(local_1060);
                      lVar21 = (long)iVar9;
                    }
                    BIO_printf(_bio_err,"MAC length: %ld, salt length: %ld\n",lVar21,lVar23);
                  }
                }
                if (local_1120 == 0) {
LAB_00101d54:
                  puVar15 = (uchar *)0x0;
                }
                else {
                  PKCS12_get0_mac(0,&local_1058,0,0,local_1088);
                  if (local_1058 == (ASN1_STRING *)0x0) {
LAB_00102c51:
                    BIO_printf(_bio_err,"Warning: MAC is absent!\n");
                    goto LAB_00101d54;
                  }
                  X509_ALGOR_get0((ASN1_OBJECT **)&local_1050,(int *)0x0,(void **)0x0,
                                  (X509_ALGOR *)local_1058);
                  iVar9 = OBJ_obj2nid((ASN1_OBJECT *)local_1050);
                  if (iVar9 != 0xa2) {
                    uVar13 = app_get0_propq();
                    uVar17 = app_get0_libctx();
                    lVar21 = EVP_KDF_fetch(uVar17,"PKCS12KDF",uVar13);
                    if (lVar21 != 0) {
                      EVP_KDF_free(lVar21);
                      goto LAB_001027f9;
                    }
                    BIO_printf(_bio_err,"Error verifying PKCS12 MAC; no PKCS12KDF support.\n");
                    BIO_printf(_bio_err,"Use -nomacver if MAC verification is not required.\n");
                    puVar15 = (uchar *)0x0;
LAB_00102c9c:
                    bp_00 = (BIO *)0x0;
                    goto LAB_00101172;
                  }
LAB_001027f9:
                  if ((*puVar15 != '\0') ||
                     (iVar9 = PKCS12_verify_mac(local_1088,(char *)0x0,0), iVar9 == 0)) {
                    iVar9 = PKCS12_verify_mac(local_1088,(char *)puVar15,-1);
                    if (iVar9 == 0) {
                      uVar19 = ERR_peek_error();
                      if ((((uVar19 & 0x80000000) == 0) && ((char)(uVar19 >> 0x17) == '#')) &&
                         (((uint)uVar19 & 0x7fffff) == 0x6c)) goto LAB_00102c51;
                      ptr = OPENSSL_asc2uni((char *)puVar15,-1,(uchar **)0x0,(int *)&local_1060);
                      puVar15 = ptr;
                      if (ptr != (uchar *)0x0) {
                        puVar15 = (uchar *)OPENSSL_uni2utf8(ptr,(ulong)local_1060 & 0xffffffff);
                        CRYPTO_free(ptr);
                        iVar9 = PKCS12_verify_mac(local_1088,(char *)puVar15,-1);
                        if (iVar9 != 0) {
                          BIO_printf(_bio_err,"Warning: using broken algorithm\n");
                          if (!bVar3) {
                            local_11a0 = puVar15;
                          }
                          goto LAB_00101d5e;
                        }
                        BIO_printf(_bio_err,"Mac verify error: invalid password?\n");
                        ERR_print_errors(_bio_err);
                      }
                      goto LAB_00102c9c;
                    }
                    goto LAB_00101d54;
                  }
                  if (bVar3) goto LAB_00101d54;
                  puVar15 = (uchar *)0x0;
                  local_11a0 = (uchar *)0x0;
                }
LAB_00101d5e:
                bp_00 = (BIO *)bio_open_owner(local_1128,0x8005,1);
                if (bp_00 == (BIO *)0x0) {
                  local_1120 = 1;
                }
                else {
                  pEVar12 = local_1080;
                  iVar9 = dump_certs_keys_p12(bp_00,local_1088,local_11a0,0xffffffff,uVar22,
                                              local_1090);
                  local_1120 = iVar8;
                  if (iVar9 == 0) {
                    local_1120 = 1;
                    BIO_printf(_bio_err,"Error outputting keys and certificates\n",extraout_RDX,
                               pEVar12);
                    ERR_print_errors(_bio_err);
                  }
                }
                goto LAB_00101172;
              }
              BIO_printf(_bio_err,"Can\'t read Password\n");
            }
            bp_00 = (BIO *)0x0;
            puVar15 = (uchar *)0x0;
            local_1120 = 1;
            goto LAB_00101172;
          }
          goto LAB_0010115c;
        }
      }
      BIO_printf(_bio_err,"Error getting passwords\n");
      goto LAB_0010115c;
    }
    while (iVar8 < 0x2f) {
      if (iVar8 < -1) goto switchD_00101107_caseD_0;
      switch(iVar8) {
      default:
        goto switchD_00101107_caseD_0;
      case 1:
        bp_00 = (BIO *)0x0;
        bp = (BIO *)0x0;
        puVar15 = (uchar *)0x0;
        opt_help(pkcs12_options);
        local_1120 = 0;
        goto LAB_00101172;
      case 2:
        local_1198 = (uchar *)opt_unknown();
        local_1180 = (long)local_1198;
        goto switchD_00101107_caseD_0;
      case 3:
switchD_00101107_caseD_3:
        uVar22 = uVar22 | 1;
        iVar8 = opt_next();
        if (iVar8 == 0) {
          iVar8 = 0;
          goto LAB_00101130;
        }
        break;
      case 4:
        local_1184 = 0x10;
        goto switchD_00101107_caseD_0;
      case 5:
        local_1184 = 0x80;
        goto switchD_00101107_caseD_0;
      case 6:
        uVar22 = uVar22 | 2;
        goto switchD_00101107_caseD_0;
      case 7:
        uVar22 = uVar22 | 8;
        goto switchD_00101107_caseD_0;
      case 8:
        uVar22 = uVar22 | 0x10;
        goto switchD_00101107_caseD_0;
      case 9:
        uVar22 = uVar22 | 3;
        goto switchD_00101107_caseD_0;
      case 10:
        uVar22 = uVar22 | 4;
        goto switchD_00101107_caseD_0;
      case 0xb:
        bVar6 = true;
        goto switchD_00101107_caseD_0;
      case 0xc:
        bVar3 = true;
        goto switchD_00101107_caseD_0;
      case 0xd:
        local_1120 = 0;
        goto switchD_00101107_caseD_0;
      case 0xe:
        uVar11 = 0x92;
        goto switchD_00101107_caseD_0;
      case 0xf:
        bVar5 = true;
        goto switchD_00101107_caseD_0;
      case 0x10:
        local_1188 = opt_int_arg();
        iter = local_1188;
        goto switchD_00101107_caseD_0;
      case 0x11:
        local_1188 = 1;
        goto switchD_00101107_caseD_0;
      case 0x13:
        iter = 1;
        goto switchD_00101107_caseD_0;
      case 0x14:
        local_111c = opt_int_arg();
        goto switchD_00101107_caseD_0;
      case 0x15:
        uVar11 = 0xffffffff;
        iter = 0xffffffff;
        goto switchD_00101107_caseD_0;
      case 0x16:
        bVar1 = true;
        goto switchD_00101107_caseD_0;
      case 0x17:
      case 0x18:
        local_1180 = opt_flag();
        local_1080 = (EVP_CIPHER *)0x0;
        local_1198 = (uchar *)0x0;
        local_1180 = local_1180 + 1;
        goto switchD_00101107_caseD_0;
      case 0x19:
        local_1148 = (undefined *)opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x1a:
        pcVar20 = (char *)opt_arg();
        if (pcVar20 == (char *)0x0) goto switchD_00101107_caseD_ffffffff;
        uVar11 = 0xffffffff;
        iVar8 = strcmp(pcVar20,"NONE");
        if ((iVar8 != 0) && (uVar11 = OBJ_txt2nid(pcVar20), uVar11 == 0)) {
          BIO_printf(_bio_err,"Unknown PBE algorithm %s\n",pcVar20);
          goto switchD_00101107_caseD_ffffffff;
        }
        goto switchD_00101107_caseD_0;
      case 0x1b:
        pcVar20 = (char *)opt_arg();
        if (pcVar20 == (char *)0x0) goto switchD_00101107_caseD_ffffffff;
        iVar8 = strcmp(pcVar20,"NONE");
        local_1164 = -1;
        if ((iVar8 != 0) && (local_1164 = OBJ_txt2nid(pcVar20), local_1164 == 0)) {
          BIO_printf(_bio_err,"Unknown PBE algorithm %s\n",pcVar20);
          goto switchD_00101107_caseD_ffffffff;
        }
        goto switchD_00101107_caseD_0;
      case 0x1c:
        local_1140 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x1d:
        local_1118 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x1e:
        local_1190 = (X509 *)opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x1f:
        local_1130 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x20:
        local_1100 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x21:
        local_1108 = (uchar *)opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x22:
        if ((local_11b0 == 0) && (local_11b0 = OPENSSL_sk_new_null(), local_11b0 == 0))
        goto LAB_0010115c;
        uVar17 = opt_arg();
        iVar8 = OPENSSL_sk_push(local_11b0,uVar17);
        if (iVar8 < 1) goto LAB_0010115c;
        goto switchD_00101107_caseD_0;
      case 0x23:
        local_1150 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x24:
        local_1128 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x25:
        local_10f8 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x26:
        local_10f0 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x27:
        local_1138 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x28:
        local_1110 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x29:
        local_10e8 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x2a:
        local_10e0 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x2b:
        local_10d4 = 1;
        goto switchD_00101107_caseD_0;
      case 0x2c:
        local_10d0 = 1;
        goto switchD_00101107_caseD_0;
      case 0x2d:
        local_10cc = 1;
        goto switchD_00101107_caseD_0;
      case 0x2e:
        uVar17 = opt_arg();
        local_11a8 = setup_engine_methods(uVar17,0xffffffff,0);
        goto switchD_00101107_caseD_0;
      case -1:
        goto switchD_00101107_caseD_ffffffff;
      }
    }
    if (iVar8 < 0x5df) {
      if (iVar8 < 0x5dd) goto switchD_00101107_caseD_0;
      iVar8 = opt_rand(iVar8);
    }
    else {
      switch(iVar8) {
      case 0x641:
      case 0x642:
      case 0x643:
      case 0x644:
        iVar8 = opt_provider(iVar8);
        break;
      default:
        goto switchD_00101107_caseD_0;
      case 0x646:
        local_1178 = (ASN1_OBJECT *)opt_arg();
        goto switchD_00101107_caseD_3;
      case 0x647:
        bVar4 = true;
        goto switchD_00101107_caseD_0;
      case 0x648:
        local_10c8 = opt_arg();
        goto switchD_00101107_caseD_0;
      case 0x649:
        bVar2 = true;
        goto switchD_00101107_caseD_0;
      }
    }
    if (iVar8 == 0) goto LAB_0010115c;
  } while( true );
LAB_00101b2a:
  iVar10 = OPENSSL_sk_num(local_1060);
  if (iVar10 <= iVar9) goto LAB_00101b3c;
  pXVar16 = (X509 *)OPENSSL_sk_value(local_1060,iVar9);
  iVar10 = cert_matches_key(pXVar16);
  if (iVar10 != 0) {
    X509_keyid_set1(pXVar16,(uchar *)0x0,0);
    X509_alias_set1(pXVar16,(uchar *)0x0,0);
    OPENSSL_sk_delete(local_1060);
    if (pXVar16 != (X509 *)0x0) {
      if (local_1190 != (X509 *)0x0) goto LAB_00102098;
      local_1190 = pXVar16;
      if (bVar6) goto LAB_001020dd;
      goto LAB_001021d9;
    }
    goto LAB_00101b3c;
  }
  iVar9 = iVar9 + 1;
  goto LAB_00101b2a;
LAB_00101b3c:
  BIO_printf(_bio_err,"No cert in -in file \'%s\' matches private key\n",local_1150);
LAB_00101b56:
  local_1178 = (ASN1_OBJECT *)0x0;
  bp_00 = (BIO *)0x0;
  iVar8 = 1;
  local_1190 = (X509 *)0x0;
LAB_0010242b:
  EVP_PKEY_free(key);
  EVP_MD_free(local_1050);
  OSSL_STACK_OF_X509_free(local_1060);
  OSSL_STACK_OF_X509_free(local_1058);
  X509_free(local_1190);
  ASN1_OBJECT_free(local_1178);
  ERR_print_errors(_bio_err);
  goto LAB_0010247a;
LAB_00102098:
  iVar9 = load_certs(local_1190,0,&local_1058,local_10a0,"untrusted certificates");
  local_1190 = pXVar16;
  if (iVar9 == 0) goto LAB_001026c7;
  if (bVar6) {
    if (pXVar16 == (X509 *)0x0) {
LAB_001025e1:
      if ((local_1060 == (ASN1_STRING *)0x0) ||
         (pXVar16 = (X509 *)OPENSSL_sk_value(local_1060,0), pXVar16 == (X509 *)0x0)) {
        BIO_printf(_bio_err,"No end entity certificate to check with -chain\n");
        goto LAB_00101b56;
      }
      local_1190 = (X509 *)0x0;
    }
LAB_001020dd:
    store = (X509_STORE *)
            setup_verify(local_10e8,local_10d0,local_1110,local_10d4,local_10e0,local_10cc);
    chain = local_1058;
    if (store == (X509_STORE *)0x0) {
      local_1178 = (ASN1_OBJECT *)0x0;
      iVar8 = 1;
      bp_00 = (BIO *)0x0;
      goto LAB_0010242b;
    }
    uVar17 = app_get0_propq();
    uVar18 = app_get0_libctx();
    ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(uVar18,uVar17);
    if ((ctx == (X509_STORE_CTX *)0x0) ||
       (iVar9 = X509_STORE_CTX_init(ctx,store,pXVar16,(stack_st_X509 *)chain), iVar9 == 0)) {
LAB_001026e9:
      X509_STORE_CTX_free(ctx);
      X509_STORE_free(store);
    }
    else {
      iVar9 = X509_verify_cert(ctx);
      if (iVar9 < 1) {
        iVar8 = X509_STORE_CTX_get_error(ctx);
        if (iVar8 == 0) goto LAB_001026e9;
        X509_STORE_CTX_free(ctx);
        X509_STORE_free(store);
        if (iVar8 != 1) {
          pcVar20 = X509_verify_cert_error_string((long)iVar8);
          BIO_printf(_bio_err,"Error getting chain: %s\n",pcVar20);
        }
      }
      else {
        psVar14 = X509_STORE_CTX_get1_chain(ctx);
        X509_STORE_CTX_free(ctx);
        X509_STORE_free(store);
        pXVar16 = (X509 *)OPENSSL_sk_shift(psVar14);
        X509_free(pXVar16);
        iVar9 = X509_add_certs(local_1060,psVar14,5);
        OSSL_STACK_OF_X509_free(psVar14);
        if (iVar9 != 0) goto LAB_001021d9;
      }
    }
LAB_001026c7:
    local_1178 = (ASN1_OBJECT *)0x0;
LAB_001026d0:
    bp_00 = (BIO *)0x0;
    iVar8 = 1;
    goto LAB_0010242b;
  }
LAB_001021d9:
  if ((local_1118 != 0) &&
     (iVar9 = load_certs(local_1118,0,&local_1060,local_10a0,"extra certificates from -certfile"),
     iVar9 == 0)) goto LAB_001026c7;
  for (iVar9 = 0; iVar10 = OPENSSL_sk_num(local_11b0), iVar9 < iVar10; iVar9 = iVar9 + 1) {
    puVar15 = (uchar *)OPENSSL_sk_value(local_11b0,iVar9);
    pXVar16 = (X509 *)OPENSSL_sk_value(local_1060,iVar9);
    X509_alias_set1(pXVar16,puVar15,-1);
  }
  if ((local_1108 != (uchar *)0x0) && (key != (EVP_PKEY *)0x0)) {
    EVP_PKEY_add1_attr_by_NID(key,0x1a1,0x1001,local_1108,-1);
  }
  if ((bVar1) && (key != (EVP_PKEY *)0x0)) {
    EVP_PKEY_add1_attr_by_NID(key,0x358,0,(uchar *)0x0,-1);
  }
  if ((!bVar2) &&
     (((local_1080 != (EVP_CIPHER *)0x0 || (iter != 0xffffffff)) &&
      (iVar9 = EVP_read_pw_string((char *)local_1048,0x800,"Enter Export Password:",1), iVar9 != 0))
     )) {
    BIO_printf(_bio_err,"Can\'t read Password\n");
    goto LAB_001026c7;
  }
  if (!bVar3) {
    OPENSSL_strlcpy(local_848,local_1048,0x800);
  }
  if (local_1178 != (ASN1_OBJECT *)0x0) {
    local_1178 = OBJ_txt2obj((char *)local_1178,0);
  }
  uVar17 = app_get0_propq();
  uVar18 = app_get0_libctx();
  local_1088 = (PKCS12 *)
               PKCS12_create_ex2(local_1158,local_1100,key,local_1190,local_1060,local_1164,uVar11,
                                 local_1188,0xffffffffffffffff,local_1184,uVar18,uVar17,0x100000,
                                 local_1178);
  if (local_1088 == (PKCS12 *)0x0) {
    BIO_printf(_bio_err,"Error creating PKCS12 structure for %s\n",local_1128);
    goto LAB_001026d0;
  }
  if ((local_1148 != (undefined *)0x0) && (iVar9 = opt_md(local_1148,&local_1050), iVar9 == 0)) {
switchD_00101107_caseD_ffffffff:
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar13);
LAB_0010115c:
    bp_00 = (BIO *)0x0;
    bp = (BIO *)0x0;
    puVar15 = (uchar *)0x0;
    local_1120 = 1;
    goto LAB_00101172;
  }
  if (iter != 0xffffffff) {
    if (bVar4) {
      iVar9 = PKCS12_set_pbmac1_pbkdf2
                        (local_1088,local_1198,0xffffffff,0,local_111c,iter,local_1050,local_10c8);
      if (iVar9 == 0) {
        BIO_printf(_bio_err,"Error creating PBMAC1\n");
        goto LAB_001026d0;
      }
      goto LAB_001023f8;
    }
    iVar9 = PKCS12_set_mac(local_1088,(char *)local_1198,-1,(uchar *)0x0,local_111c,iter,local_1050)
    ;
    if (iVar9 != 0) goto LAB_001023f8;
    BIO_printf(_bio_err,"Error creating PKCS12 MAC; no PKCS12KDF support?\n");
    BIO_printf(_bio_err,"Use -nomac or -pbmac1_pbkdf2 if PKCS12KDF support not available\n");
    goto LAB_001026d0;
  }
LAB_001023f8:
  bp_00 = (BIO *)bio_open_owner(local_1128,6,1);
  if (bp_00 != (BIO *)0x0) {
    i2d_PKCS12_bio(bp_00,local_1088);
    goto LAB_0010242b;
  }
  iVar8 = 1;
LAB_0010247a:
  bp = (BIO *)0x0;
  puVar15 = (uchar *)0x0;
  local_1120 = iVar8;
LAB_00101172:
  PKCS12_free(local_1088);
  release_engine(local_11a8);
  BIO_free(bp);
  BIO_free_all(bp_00);
  OPENSSL_sk_free(local_11b0);
  CRYPTO_free(puVar15);
  CRYPTO_free(local_10a0);
  CRYPTO_free(local_1098);
  CRYPTO_free(local_1090);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1120;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void hex_prin(BIO *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  if (0 < param_3) {
    pbVar1 = param_2 + param_3;
    do {
      bVar2 = *param_2;
      param_2 = param_2 + 1;
      BIO_printf(param_1,"%02X ",(ulong)bVar2);
    } while (param_2 != pbVar1);
    return;
  }
  return;
}


