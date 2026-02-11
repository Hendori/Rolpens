
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

undefined8 set_pbe(int *param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  iVar1 = strcmp(param_2,"NONE");
  if (iVar1 == 0) {
    *param_1 = -1;
  }
  else {
    iVar1 = OBJ_txt2nid(param_2);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      BIO_printf(_bio_err,"Unknown PBE algorithm %s\n",param_2);
      return 0;
    }
  }
  return 1;
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
              goto LAB_001002c1;
            }
          }
        }
        else {
          if (iVar1 != 0x3cd) {
LAB_001002c1:
            PBE2PARAM_free(a_00);
            goto LAB_0010019d;
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
              goto LAB_001002c1;
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
      goto LAB_0010019d;
    }
  }
  BIO_puts(_bio_err,", <unsupported parameters>");
LAB_0010019d:
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
      } while (pbVar4 != pbVar5);
    }
    goto LAB_001004fa;
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
LAB_001004fa:
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
          if (iVar2 != 0) goto LAB_00100799;
LAB_0010070c:
          BIO_printf(param_1,"<No Values>\n");
        }
        else {
          pcVar4 = OBJ_nid2ln(iVar2);
          BIO_printf(param_1,"%s: ",pcVar4);
          iVar2 = X509_ATTRIBUTE_count(attr);
          if (iVar2 == 0) goto LAB_0010070c;
LAB_00100799:
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
LAB_0010095f:
        iVar8 = PEM_write_bio_PrivateKey(param_1,x,param_7,(uchar *)0x0,0,(undefined1 *)0x0,param_6)
        ;
        EVP_PKEY_free(x);
        goto LAB_0010098e;
      }
LAB_00100c60:
      iVar8 = 0;
      goto LAB_0010098e;
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
          goto LAB_0010095f;
        }
        PKCS8_PRIV_KEY_INFO_free(pPVar5);
      }
      goto LAB_00100c60;
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
            goto LAB_0010098e;
          }
          goto LAB_00100c60;
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
      if (iVar2 == 0) goto LAB_00100c60;
    }
  }
  iVar8 = 1;
LAB_0010098e:
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
  int local_44;
  
  psVar3 = PKCS12_unpack_authsafes(param_2);
  if (psVar3 == (stack_st_PKCS7 *)0x0) {
    uVar5 = 0;
  }
  else {
    local_44 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(psVar3);
      if (iVar1 <= local_44) break;
      p7 = (PKCS7 *)OPENSSL_sk_value(psVar3,local_44);
      iVar1 = OBJ_obj2nid(p7->type);
      if (iVar1 == 0x15) {
        psVar4 = PKCS12_unpack_p7data(p7);
        if ((param_5 & 4) == 0) goto LAB_00100dd2;
        BIO_printf(_bio_err,"PKCS7 Data\n");
        if (psVar4 == (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_00100e74;
LAB_00100ddb:
        iVar1 = 0;
        while( true ) {
          iVar2 = OPENSSL_sk_num(psVar4);
          if (iVar2 <= iVar1) break;
          uVar5 = OPENSSL_sk_value(psVar4,iVar1);
          uVar6 = param_7;
          iVar2 = dump_certs_pkeys_bag(param_1,uVar5,param_3,param_4,param_5,param_6,param_7);
          if (iVar2 == 0) {
            uVar5 = 0;
            OPENSSL_sk_pop_free(psVar4,&PKCS12_SAFEBAG_free,uVar6,0x100dea);
            goto LAB_00100ecd;
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
LAB_00100dd2:
        if (psVar4 != (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_00100ddb;
LAB_00100e74:
        uVar5 = 0;
        goto LAB_00100ecd;
      }
      local_44 = local_44 + 1;
    }
    uVar5 = 1;
LAB_00100ecd:
    OPENSSL_sk_pop_free(psVar3,&PKCS7_free);
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int pkcs12_main(undefined4 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ASN1_STRING *chain;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  EVP_CIPHER *pEVar13;
  undefined8 uVar14;
  BIO *bp;
  EVP_PKEY *key;
  X509_STORE *store;
  X509_STORE_CTX *ctx;
  stack_st_X509 *psVar15;
  uchar *puVar16;
  X509 *pXVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  BIO *bp_00;
  X509 *pXVar20;
  ulong uVar21;
  uchar *ptr;
  char *pcVar22;
  PBKDF2PARAM *a;
  long lVar23;
  undefined8 extraout_RDX;
  uint uVar24;
  long lVar25;
  long in_FS_OFFSET;
  long local_11a0;
  undefined8 local_1198;
  uchar *local_1190;
  uint local_1188;
  int local_1184;
  uchar *local_1180;
  ASN1_OBJECT *local_1178;
  long local_1168;
  long local_1158;
  undefined *local_1150;
  long local_1140;
  long local_1138;
  undefined8 local_1130;
  long local_1128;
  long local_1120;
  int local_1118;
  int local_1114;
  int local_1110;
  long local_1108;
  long local_1100;
  long local_10f8;
  long local_10f0;
  uchar *local_10e8;
  undefined8 local_10e0;
  undefined8 local_10d8;
  int local_10d0;
  int local_10cc;
  undefined8 local_10c8;
  uint local_10a8;
  int local_10a4;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_10a0 = (void *)0x0;
  local_10a8 = 0;
  local_10a4 = 0;
  local_1098 = (uchar *)0x0;
  puVar16 = local_1048;
  for (lVar23 = 0x100; lVar23 != 0; lVar23 = lVar23 + -1) {
    puVar16[0] = '\0';
    puVar16[1] = '\0';
    puVar16[2] = '\0';
    puVar16[3] = '\0';
    puVar16[4] = '\0';
    puVar16[5] = '\0';
    puVar16[6] = '\0';
    puVar16[7] = '\0';
    puVar16 = puVar16 + 8;
  }
  local_1090 = (uchar *)0x0;
  local_1088 = (PKCS12 *)0x0;
  puVar16 = local_848;
  for (lVar23 = 0x100; lVar23 != 0; lVar23 = lVar23 + -1) {
    puVar16[0] = '\0';
    puVar16[1] = '\0';
    puVar16[2] = '\0';
    puVar16[3] = '\0';
    puVar16[4] = '\0';
    puVar16[5] = '\0';
    puVar16[6] = '\0';
    puVar16[7] = '\0';
    puVar16 = puVar16 + 8;
  }
  pEVar13 = EVP_aes_256_cbc();
  local_1080 = pEVar13;
  opt_set_unknown_name("cipher");
  uVar24 = 0;
  uVar14 = opt_init(param_1,param_2,pkcs12_options);
  local_1188 = 0;
  local_11a0 = 0;
  local_1198 = 0;
  local_10cc = 0;
  local_1110 = 0;
  local_10d0 = 0;
  local_1108 = 0;
  local_1100 = 0;
  local_10f8 = 0;
  local_10c8 = 0;
  local_1150 = (undefined *)0x0;
  local_1138 = 0;
  local_10d8 = 0;
  local_10e0 = 0;
  bVar2 = false;
  local_1114 = 1;
  local_1118 = 8;
  bVar5 = false;
  bVar3 = false;
  local_1178 = (ASN1_OBJECT *)0x0;
  local_1184 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar1 = false;
  local_10e8 = (uchar *)0x0;
  local_10f0 = 0;
  local_1120 = 0;
  local_1180 = (uchar *)0x0;
  local_1190 = (uchar *)0x0;
  local_1168 = 0;
  local_1128 = 0;
  local_1140 = 0;
  local_1130 = 0;
  local_1158 = 0;
  uVar12 = 0;
switchD_00101187_caseD_0:
  iVar9 = opt_next();
  if (iVar9 != 0) {
LAB_00101169:
    if (iVar9 < 0x2f) {
      if (iVar9 < -1) goto switchD_00101187_caseD_0;
      switch(iVar9) {
      default:
        goto switchD_00101187_caseD_0;
      case 1:
        bp_00 = (BIO *)0x0;
        bp = (BIO *)0x0;
        puVar16 = (uchar *)0x0;
        opt_help(pkcs12_options);
        local_1114 = 0;
        goto LAB_001011f2;
      case 2:
        local_1190 = (uchar *)opt_unknown();
        local_1180 = local_1190;
        goto switchD_00101187_caseD_0;
      case 3:
        goto switchD_00101187_caseD_3;
      case 4:
        local_1184 = 0x10;
        goto switchD_00101187_caseD_0;
      case 5:
        local_1184 = 0x80;
        goto switchD_00101187_caseD_0;
      case 6:
        uVar24 = uVar24 | 2;
        goto switchD_00101187_caseD_0;
      case 7:
        uVar24 = uVar24 | 8;
        goto switchD_00101187_caseD_0;
      case 8:
        uVar24 = uVar24 | 0x10;
        goto switchD_00101187_caseD_0;
      case 9:
        uVar24 = uVar24 | 3;
        goto switchD_00101187_caseD_0;
      case 10:
        uVar24 = uVar24 | 4;
        goto switchD_00101187_caseD_0;
      case 0xb:
        bVar6 = true;
        goto switchD_00101187_caseD_0;
      case 0xc:
        bVar4 = true;
        goto switchD_00101187_caseD_0;
      case 0xd:
        local_1114 = 0;
        goto switchD_00101187_caseD_0;
      case 0xe:
        local_10a8 = 0x92;
        goto switchD_00101187_caseD_0;
      case 0xf:
        bVar1 = true;
        goto switchD_00101187_caseD_0;
      case 0x10:
        local_1188 = opt_int_arg();
        uVar12 = local_1188;
        goto switchD_00101187_caseD_0;
      case 0x11:
        local_1188 = 1;
        goto switchD_00101187_caseD_0;
      case 0x13:
        uVar12 = 1;
        goto switchD_00101187_caseD_0;
      case 0x14:
        local_1118 = opt_int_arg();
        goto switchD_00101187_caseD_0;
      case 0x15:
        local_10a8 = 0xffffffff;
        uVar12 = 0xffffffff;
        goto switchD_00101187_caseD_0;
      case 0x16:
        bVar2 = true;
        goto switchD_00101187_caseD_0;
      case 0x17:
      case 0x18:
        lVar23 = opt_flag();
        local_1080 = (EVP_CIPHER *)0x0;
        local_1190 = (uchar *)0x0;
        local_1180 = (uchar *)(lVar23 + 1);
        goto switchD_00101187_caseD_0;
      case 0x19:
        local_1150 = (undefined *)opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x1a:
        uVar18 = opt_arg();
        iVar9 = set_pbe(&local_10a8,uVar18);
        break;
      case 0x1b:
        uVar18 = opt_arg();
        iVar9 = set_pbe(&local_10a4,uVar18);
        break;
      case 0x1c:
        local_1140 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x1d:
        local_1128 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x1e:
        local_1168 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x1f:
        local_1120 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x20:
        local_10f0 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x21:
        local_10e8 = (uchar *)opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x22:
        if ((local_11a0 == 0) && (local_11a0 = OPENSSL_sk_new_null(), local_11a0 == 0))
        goto LAB_001011dc;
        uVar18 = opt_arg();
        iVar9 = OPENSSL_sk_push(local_11a0,uVar18);
        if (iVar9 < 1) goto LAB_001011dc;
        goto switchD_00101187_caseD_0;
      case 0x23:
        local_1158 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x24:
        local_1130 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x25:
        local_10e0 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x26:
        local_10d8 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x27:
        local_1138 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x28:
        local_10f8 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x29:
        local_1100 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x2a:
        local_1108 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x2b:
        local_10d0 = 1;
        goto switchD_00101187_caseD_0;
      case 0x2c:
        local_1110 = 1;
        goto switchD_00101187_caseD_0;
      case 0x2d:
        local_10cc = 1;
        goto switchD_00101187_caseD_0;
      case 0x2e:
        uVar18 = opt_arg();
        local_1198 = setup_engine_methods(uVar18,0xffffffff,0);
        goto switchD_00101187_caseD_0;
      case -1:
        goto switchD_00101187_caseD_ffffffff;
      }
      if (iVar9 == 0) goto switchD_00101187_caseD_ffffffff;
      goto switchD_00101187_caseD_0;
    }
    if (iVar9 < 0x5df) {
      if (iVar9 < 0x5dd) goto switchD_00101187_caseD_0;
      iVar9 = opt_rand(iVar9);
    }
    else {
      switch(iVar9) {
      case 0x641:
      case 0x642:
      case 0x643:
      case 0x644:
        iVar9 = opt_provider(iVar9);
        break;
      default:
        goto switchD_00101187_caseD_0;
      case 0x646:
        local_1178 = (ASN1_OBJECT *)opt_arg();
        goto switchD_00101187_caseD_3;
      case 0x647:
        bVar5 = true;
        goto switchD_00101187_caseD_0;
      case 0x648:
        local_10c8 = opt_arg();
        goto switchD_00101187_caseD_0;
      case 0x649:
        bVar3 = true;
        goto switchD_00101187_caseD_0;
      }
    }
    if (iVar9 == 0) goto LAB_001011dc;
    goto switchD_00101187_caseD_0;
  }
LAB_001011b0:
  iVar10 = opt_check_rest_arg(0);
  if (iVar10 == 0) {
switchD_00101187_caseD_ffffffff:
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar14);
    goto LAB_001011dc;
  }
  iVar10 = app_RAND_load();
  if (iVar10 == 0) goto LAB_001011dc;
  iVar10 = opt_cipher_any(local_1190,&local_1080);
  if (iVar10 == 0) goto switchD_00101187_caseD_ffffffff;
  if (bVar1) {
    if ((uVar24 & 4) != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n",&_LC40);
    }
    if (local_1114 == 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n","nomacver");
    }
    if ((uVar24 & 8) != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n","clcerts");
    }
    if ((uVar24 & 0x10) != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored with -export\n","cacerts");
    }
    if (local_1080 != pEVar13) {
      BIO_printf(_bio_err,"Warning: output encryption option -%s ignored with -export\n",local_1180)
      ;
    }
  }
  else {
    if (local_1140 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","inkey");
    }
    if (local_1128 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","certfile");
    }
    if (local_1120 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","passcerts");
    }
    if (bVar6) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","chain");
    }
    if (local_1168 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","untrusted");
    }
    if (local_1100 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","CAfile");
    }
    if (local_10f8 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","CApath");
    }
    if (local_1108 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","CAstore");
    }
    if (local_1110 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","no-CAfile");
    }
    if (local_10d0 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","no-CApath");
    }
    if (local_10cc != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","no-CAstore");
    }
    if (local_10f0 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n",&_LC58);
    }
    if (local_11a0 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","caname");
    }
    if (local_10e8 != (uchar *)0x0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n",&_LC60);
    }
    if (bVar2) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n",&_LC61);
    }
    if (local_1184 == 0x10) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","keyex");
    }
    else if (local_1184 == 0x80) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","keysig");
    }
    if (local_10a4 != 0) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","keypbe");
    }
    uVar7 = local_10a8;
    if (local_10a8 + 1 < 2) {
      if (local_1150 != (undefined *)0x0) {
LAB_00101942:
        BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","macalg");
      }
      if (local_1188 != 0) {
LAB_00101ead:
        BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","iter and -noiter");
      }
      if (uVar12 == 1) {
LAB_00101e20:
        BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","nomaciter");
      }
      else if ((uVar7 & uVar12) == 0xffffffff) {
        BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","nomac");
      }
    }
    else {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","certpbe and -descert");
      if (local_1150 != (undefined *)0x0) goto LAB_00101942;
      if (local_1188 != 0) goto LAB_00101ead;
      if (uVar12 == 1) goto LAB_00101e20;
    }
    if (local_1118 != 8) {
      BIO_printf(_bio_err,"Warning: -%s option ignored without -export\n","macsaltlen");
    }
  }
  puVar8 = local_1150;
  if (bVar3) {
    uVar18 = app_get0_libctx();
    iVar10 = OSSL_PROVIDER_available(uVar18,"legacy");
    if (iVar10 != 0) {
LAB_00101bf6:
      if (local_10a8 == 0) {
        local_10a8 = 0x95;
      }
      if (local_10a4 == 0) {
        local_10a4 = 0x92;
      }
      if (local_1080 == pEVar13) {
        local_1080 = EVP_des_ede3_cbc();
      }
      puVar8 = &_LC35;
      if (local_1150 != (undefined *)0x0) {
        puVar8 = local_1150;
      }
      goto LAB_001019c0;
    }
    uVar18 = app_get0_libctx();
    iVar10 = app_provider_load(uVar18,"legacy");
    if (iVar10 != 0) {
      uVar18 = app_get0_libctx();
      iVar10 = app_provider_load(uVar18,"default");
      if (iVar10 != 0) goto LAB_00101bf6;
    }
  }
  else {
LAB_001019c0:
    local_1150 = puVar8;
    iVar10 = app_passwd(local_1120,0,&local_10a0,0);
    if (iVar10 == 0) {
      BIO_printf(_bio_err,"Error getting certificate file password\n");
    }
    else if (local_1138 == 0) {
      iVar10 = app_passwd(local_10e0,local_10d8,&local_1098);
      if (iVar10 == 0) goto LAB_00101ec7;
      if (!bVar1) goto LAB_00101c7b;
LAB_00101a25:
      local_1180 = local_1090;
      if (local_1090 == (uchar *)0x0) {
        if ((!bVar4) ||
           (iVar10 = EVP_read_pw_string((char *)local_848,0x800,"Enter MAC Password:",1),
           iVar10 == 0)) {
          bVar1 = false;
          local_1190 = local_848;
          local_1180 = local_1048;
          goto LAB_00101a54;
        }
LAB_001024f0:
        BIO_printf(_bio_err,"Can\'t read Password\n");
      }
      else {
        if (!bVar4) {
          local_1190 = local_1090;
          bVar1 = true;
LAB_00101a54:
          local_1060 = (ASN1_STRING *)0x0;
          local_1058 = (ASN1_STRING *)0x0;
          local_1050 = (EVP_MD *)0x0;
          if ((~uVar24 & 3) == 0) {
            BIO_printf(_bio_err,"Nothing to export due to -noout or -nocerts and -nokeys\n");
LAB_001025fd:
            pXVar17 = (X509 *)0x0;
            key = (EVP_PKEY *)0x0;
            bp_00 = (BIO *)0x0;
            iVar9 = 1;
            local_1178 = (ASN1_OBJECT *)0x0;
LAB_00102411:
            EVP_PKEY_free(key);
            EVP_MD_free(local_1050);
            OSSL_STACK_OF_X509_free(local_1060);
            OSSL_STACK_OF_X509_free(local_1058);
            X509_free(pXVar17);
            ASN1_OBJECT_free(local_1178);
            ERR_print_errors(_bio_err);
          }
          else {
            if ((uVar24 & 2) != 0) {
              BIO_printf(_bio_err,"Warning: -chain option ignored with -nocerts\n");
              if ((uVar24 & 1) == 0) {
                bVar6 = false;
                goto LAB_0010202f;
              }
              if ((local_1168 != 0) &&
                 (iVar10 = load_certs(local_1168,0,&local_1058,local_10a0,"untrusted certificates"),
                 iVar10 == 0)) goto LAB_001025fd;
LAB_001026ba:
              key = (EVP_PKEY *)0x0;
              pXVar20 = (X509 *)0x0;
              goto LAB_001021c8;
            }
            if ((uVar24 & 1) != 0) {
              key = (EVP_PKEY *)0x0;
LAB_00101a9d:
              iVar10 = load_certs(local_1158,1,&local_1060,local_1098,"certificates from -in file");
              if (iVar10 != 0) {
                iVar10 = OPENSSL_sk_num(local_1060);
                if (iVar10 < 1) {
                  pXVar17 = (X509 *)0x0;
                  bp_00 = (BIO *)0x0;
                  iVar9 = 1;
                  BIO_printf(_bio_err,"No certificate in -in file %s\n",local_1158);
                  local_1178 = (ASN1_OBJECT *)0x0;
                  goto LAB_00102411;
                }
                iVar10 = 0;
                if (key == (EVP_PKEY *)0x0) {
                  pXVar20 = (X509 *)0x0;
                  if (local_1168 != 0) goto LAB_00102085;
                  if (bVar6) goto LAB_001025c5;
                  goto LAB_001026ba;
                }
                for (; iVar11 = OPENSSL_sk_num(local_1060), iVar10 < iVar11; iVar10 = iVar10 + 1) {
                  pXVar20 = (X509 *)OPENSSL_sk_value(local_1060,iVar10);
                  iVar11 = cert_matches_key(pXVar20);
                  if (iVar11 != 0) {
                    X509_keyid_set1(pXVar20,(uchar *)0x0,0);
                    X509_alias_set1(pXVar20,(uchar *)0x0,0);
                    OPENSSL_sk_delete(local_1060);
                    if (pXVar20 != (X509 *)0x0) {
                      if (local_1168 != 0) goto LAB_00102085;
                      pXVar17 = pXVar20;
                      if (!bVar6) goto LAB_001021c8;
                      goto LAB_001020c8;
                    }
                    break;
                  }
                }
                BIO_printf(_bio_err,"No cert in -in file \'%s\' matches private key\n",local_1158);
              }
LAB_00101b43:
              local_1178 = (ASN1_OBJECT *)0x0;
              pXVar17 = (X509 *)0x0;
              bp_00 = (BIO *)0x0;
              iVar9 = 1;
              goto LAB_00102411;
            }
LAB_0010202f:
            pcVar22 = "private key from -inkey file";
            if (local_1140 == 0) {
              local_1140 = local_1158;
              pcVar22 = "private key from -in file";
            }
            key = (EVP_PKEY *)load_key(local_1140,0x8005,1,local_1098,local_1198,pcVar22);
            if (key == (EVP_PKEY *)0x0) goto LAB_001025fd;
            if ((uVar24 & 2) == 0) goto LAB_00101a9d;
            pXVar20 = (X509 *)0x0;
            if (local_1168 == 0) {
              if (!bVar6) goto LAB_001021c8;
LAB_001025c5:
              if ((local_1060 == (ASN1_STRING *)0x0) ||
                 (pXVar20 = (X509 *)OPENSSL_sk_value(local_1060,0), pXVar20 == (X509 *)0x0)) {
                BIO_printf(_bio_err,"No end entity certificate to check with -chain\n");
                goto LAB_00101b43;
              }
              pXVar17 = (X509 *)0x0;
LAB_001020c8:
              store = (X509_STORE *)
                      setup_verify(local_1100,local_1110,local_10f8,local_10d0,local_1108,local_10cc
                                  );
              chain = local_1058;
              if (store == (X509_STORE *)0x0) {
                local_1178 = (ASN1_OBJECT *)0x0;
                iVar9 = 1;
                bp_00 = (BIO *)0x0;
                goto LAB_00102411;
              }
              uVar18 = app_get0_propq();
              uVar19 = app_get0_libctx();
              ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(uVar19,uVar18);
              if ((ctx == (X509_STORE_CTX *)0x0) ||
                 (iVar10 = X509_STORE_CTX_init(ctx,store,pXVar20,(stack_st_X509 *)chain),
                 iVar10 == 0)) {
LAB_001029da:
                X509_STORE_CTX_free(ctx);
                X509_STORE_free(store);
                pXVar20 = pXVar17;
              }
              else {
                iVar10 = X509_verify_cert(ctx);
                if (iVar10 < 1) {
                  iVar9 = X509_STORE_CTX_get_error(ctx);
                  if (iVar9 == 0) goto LAB_001029da;
                  X509_STORE_CTX_free(ctx);
                  X509_STORE_free(store);
                  pXVar20 = pXVar17;
                  if (iVar9 != 1) {
                    pcVar22 = X509_verify_cert_error_string((long)iVar9);
                    BIO_printf(_bio_err,"Error getting chain: %s\n",pcVar22);
                  }
                }
                else {
                  psVar15 = X509_STORE_CTX_get1_chain(ctx);
                  X509_STORE_CTX_free(ctx);
                  X509_STORE_free(store);
                  pXVar20 = (X509 *)OPENSSL_sk_shift(psVar15);
                  X509_free(pXVar20);
                  iVar10 = X509_add_certs(local_1060,psVar15,5);
                  OSSL_STACK_OF_X509_free(psVar15);
                  pXVar20 = pXVar17;
                  if (iVar10 != 0) goto LAB_001021c8;
                }
              }
LAB_001029e7:
              local_1178 = (ASN1_OBJECT *)0x0;
              pXVar17 = pXVar20;
LAB_001029f0:
              bp_00 = (BIO *)0x0;
              iVar9 = 1;
              goto LAB_00102411;
            }
LAB_00102085:
            iVar10 = load_certs(local_1168,0,&local_1058,local_10a0,"untrusted certificates");
            if (iVar10 == 0) goto LAB_001029e7;
            if (bVar6) {
              pXVar17 = pXVar20;
              if (pXVar20 == (X509 *)0x0) goto LAB_001025c5;
              goto LAB_001020c8;
            }
LAB_001021c8:
            if ((local_1128 != 0) &&
               (iVar10 = load_certs(local_1128,0,&local_1060,local_10a0,
                                    "extra certificates from -certfile"), iVar10 == 0))
            goto LAB_001029e7;
            for (iVar10 = 0; iVar11 = OPENSSL_sk_num(local_11a0), iVar10 < iVar11;
                iVar10 = iVar10 + 1) {
              puVar16 = (uchar *)OPENSSL_sk_value(local_11a0,iVar10);
              pXVar17 = (X509 *)OPENSSL_sk_value(local_1060,iVar10);
              X509_alias_set1(pXVar17,puVar16,-1);
            }
            if ((local_10e8 != (uchar *)0x0) && (key != (EVP_PKEY *)0x0)) {
              EVP_PKEY_add1_attr_by_NID(key,0x1a1,0x1001,local_10e8,-1);
            }
            if ((bVar2) && (key != (EVP_PKEY *)0x0)) {
              EVP_PKEY_add1_attr_by_NID(key,0x358,0,(uchar *)0x0,-1);
            }
            if ((!bVar1) &&
               (((local_1080 != (EVP_CIPHER *)0x0 || (uVar12 != 0xffffffff)) &&
                (iVar10 = EVP_read_pw_string((char *)local_1048,0x800,"Enter Export Password:",1),
                iVar10 != 0)))) {
              BIO_printf(_bio_err,"Can\'t read Password\n");
              goto LAB_001029e7;
            }
            if (!bVar4) {
              OPENSSL_strlcpy(local_848,local_1048,0x800);
            }
            if (local_1178 != (ASN1_OBJECT *)0x0) {
              local_1178 = OBJ_txt2obj((char *)local_1178,0);
            }
            uVar18 = app_get0_propq();
            uVar19 = app_get0_libctx();
            local_1088 = (PKCS12 *)
                         PKCS12_create_ex2(local_1180,local_10f0,key,pXVar20,local_1060,local_10a4,
                                           local_10a8,local_1188,0xffffffffffffffff,local_1184,
                                           uVar19,uVar18,0x100000,local_1178);
            pXVar17 = pXVar20;
            if (local_1088 == (PKCS12 *)0x0) {
              BIO_printf(_bio_err,"Error creating PKCS12 structure for %s\n",local_1130);
              goto LAB_001029f0;
            }
            if ((local_1150 != (undefined *)0x0) &&
               (iVar10 = opt_md(local_1150,&local_1050), iVar10 == 0))
            goto switchD_00101187_caseD_ffffffff;
            if (uVar12 != 0xffffffff) {
              if (bVar5) {
                iVar10 = PKCS12_set_pbmac1_pbkdf2
                                   (local_1088,local_1190,0xffffffff,0,local_1118,uVar12,local_1050,
                                    local_10c8);
                if (iVar10 == 0) {
                  BIO_printf(_bio_err,"Error creating PBMAC1\n");
                  goto LAB_001029f0;
                }
                goto LAB_001023e1;
              }
              iVar10 = PKCS12_set_mac(local_1088,(char *)local_1190,-1,(uchar *)0x0,local_1118,
                                      uVar12,local_1050);
              if (iVar10 != 0) goto LAB_001023e1;
              BIO_printf(_bio_err,"Error creating PKCS12 MAC; no PKCS12KDF support?\n");
              BIO_printf(_bio_err,
                         "Use -nomac or -pbmac1_pbkdf2 if PKCS12KDF support not available\n");
              goto LAB_001029f0;
            }
LAB_001023e1:
            bp_00 = (BIO *)bio_open_owner(local_1130,6,1);
            if (bp_00 != (BIO *)0x0) {
              i2d_PKCS12_bio(bp_00,local_1088);
              goto LAB_00102411;
            }
            iVar9 = 1;
          }
          bp = (BIO *)0x0;
          puVar16 = (uchar *)0x0;
          local_1114 = iVar9;
          goto LAB_001011f2;
        }
        BIO_printf(_bio_err,"Option -twopass cannot be used with -passout or -password\n");
      }
    }
    else {
      if (bVar1) {
        iVar10 = app_passwd(local_10e0,local_1138,&local_1098);
        if (iVar10 != 0) goto LAB_00101a25;
      }
      else {
        iVar10 = app_passwd(local_1138,local_10d8,&local_1098);
        if (iVar10 != 0) {
LAB_00101c7b:
          if (local_1098 == (uchar *)0x0) {
            if ((bVar4) &&
               (iVar10 = EVP_read_pw_string((char *)local_848,0x800,"Enter MAC Password:",0),
               iVar10 != 0)) goto LAB_001024f0;
            bVar1 = false;
            puVar16 = local_848;
            local_1190 = local_1048;
          }
          else {
            if (bVar4) {
              BIO_printf(_bio_err,"Option -twopass cannot be used with -passin or -password\n");
              goto LAB_001011dc;
            }
            local_1190 = local_1098;
            bVar1 = true;
            puVar16 = local_1098;
          }
          bp = (BIO *)bio_open_default(local_1158,0x72,6);
          if (bp == (BIO *)0x0) goto LAB_001011dc;
          uVar14 = app_get0_propq();
          uVar18 = app_get0_libctx();
          local_1088 = (PKCS12 *)PKCS12_init_ex(0x15,uVar18,uVar14);
          if ((local_1088 == (PKCS12 *)0x0) ||
             (local_1088 = d2i_PKCS12_bio(bp,&local_1088), local_1088 == (PKCS12 *)0x0)) {
            ERR_print_errors(_bio_err);
          }
          else {
            if ((bVar1) ||
               (iVar10 = EVP_read_pw_string((char *)local_1048,0x800,"Enter Import Password:",0),
               iVar10 == 0)) {
              if (!bVar4) {
                OPENSSL_strlcpy(local_848,local_1048,0x800);
              }
              if (((uVar24 & 4) != 0) && (iVar10 = PKCS12_mac_present(local_1088), iVar10 != 0)) {
                PKCS12_get0_mac(&local_1060,&local_1070,&local_1058,&local_1078,local_1088);
                X509_ALGOR_get0(&local_1068,(int *)0x0,(void **)0x0,local_1070);
                BIO_puts(_bio_err,"MAC: ");
                i2a_ASN1_OBJECT(_bio_err,local_1068);
                iVar10 = OBJ_obj2nid(local_1068);
                if (iVar10 == 0xa2) {
                  a = (PBKDF2PARAM *)PBMAC1_get1_pbkdf2_param(local_1070);
                  if (a == (PBKDF2PARAM *)0x0) {
                    BIO_printf(_bio_err,", Unsupported KDF or params for PBMAC1\n");
                  }
                  else {
                    lVar23 = ASN1_INTEGER_get(a->iter);
                    BIO_printf(_bio_err," using PBKDF2, Iteration %ld\n",lVar23);
                    uVar12 = ASN1_STRING_length((a->salt->value).asn1_string);
                    lVar23 = ASN1_INTEGER_get(a->keylength);
                    BIO_printf(_bio_err,"Key length: %ld, Salt length: %d\n",lVar23,(ulong)uVar12);
                    iVar10 = 0xa3;
                    if (a->prf != (X509_ALGOR *)0x0) {
                      X509_ALGOR_get0((ASN1_OBJECT **)&local_1050,(int *)0x0,(void **)0x0,a->prf);
                      iVar10 = OBJ_obj2nid((ASN1_OBJECT *)local_1050);
                    }
                    pcVar22 = OBJ_nid2sn(iVar10);
                    BIO_printf(_bio_err,"PBKDF2 PRF: %s\n",pcVar22);
                  }
                  PBKDF2PARAM_free(a);
                }
                else {
                  lVar23 = 1;
                  if (local_1078 != (ASN1_INTEGER *)0x0) {
                    lVar23 = ASN1_INTEGER_get(local_1078);
                  }
                  lVar25 = 0;
                  BIO_printf(_bio_err,", Iteration %ld\n",lVar23);
                  if (local_1058 != (ASN1_STRING *)0x0) {
                    iVar10 = ASN1_STRING_length(local_1058);
                    lVar25 = (long)iVar10;
                  }
                  lVar23 = 0;
                  if (local_1060 != (ASN1_STRING *)0x0) {
                    iVar10 = ASN1_STRING_length(local_1060);
                    lVar23 = (long)iVar10;
                  }
                  BIO_printf(_bio_err,"MAC length: %ld, salt length: %ld\n",lVar23,lVar25);
                }
              }
              if (local_1114 == 0) {
LAB_00101d43:
                puVar16 = (uchar *)0x0;
              }
              else {
                PKCS12_get0_mac(0,&local_1058,0,0,local_1088);
                if (local_1058 == (ASN1_STRING *)0x0) {
LAB_00102c8d:
                  BIO_printf(_bio_err,"Warning: MAC is absent!\n");
                  goto LAB_00101d43;
                }
                X509_ALGOR_get0((ASN1_OBJECT **)&local_1050,(int *)0x0,(void **)0x0,
                                (X509_ALGOR *)local_1058);
                iVar10 = OBJ_obj2nid((ASN1_OBJECT *)local_1050);
                if (iVar10 != 0xa2) {
                  uVar14 = app_get0_propq();
                  uVar18 = app_get0_libctx();
                  lVar23 = EVP_KDF_fetch(uVar18,"PKCS12KDF",uVar14);
                  if (lVar23 != 0) {
                    EVP_KDF_free(lVar23);
                    goto LAB_00102753;
                  }
                  BIO_printf(_bio_err,"Error verifying PKCS12 MAC; no PKCS12KDF support.\n");
                  BIO_printf(_bio_err,"Use -nomacver if MAC verification is not required.\n");
                  puVar16 = (uchar *)0x0;
LAB_00102cd8:
                  bp_00 = (BIO *)0x0;
                  goto LAB_001011f2;
                }
LAB_00102753:
                if ((*puVar16 != '\0') ||
                   (iVar10 = PKCS12_verify_mac(local_1088,(char *)0x0,0), iVar10 == 0)) {
                  iVar10 = PKCS12_verify_mac(local_1088,(char *)puVar16,-1);
                  if (iVar10 == 0) {
                    uVar21 = ERR_peek_error();
                    if ((((uVar21 & 0x80000000) == 0) && ((char)(uVar21 >> 0x17) == '#')) &&
                       (((uint)uVar21 & 0x7fffff) == 0x6c)) goto LAB_00102c8d;
                    ptr = OPENSSL_asc2uni((char *)puVar16,-1,(uchar **)0x0,(int *)&local_1060);
                    puVar16 = ptr;
                    if (ptr != (uchar *)0x0) {
                      puVar16 = (uchar *)OPENSSL_uni2utf8(ptr,(ulong)local_1060 & 0xffffffff);
                      CRYPTO_free(ptr);
                      iVar10 = PKCS12_verify_mac(local_1088,(char *)puVar16,-1);
                      if (iVar10 != 0) {
                        BIO_printf(_bio_err,"Warning: using broken algorithm\n");
                        if (!bVar4) {
                          local_1190 = puVar16;
                        }
                        goto LAB_00101d4d;
                      }
                      BIO_printf(_bio_err,"Mac verify error: invalid password?\n");
                      ERR_print_errors(_bio_err);
                    }
                    goto LAB_00102cd8;
                  }
                  goto LAB_00101d43;
                }
                if (bVar4) goto LAB_00101d43;
                puVar16 = (uchar *)0x0;
                local_1190 = (uchar *)0x0;
              }
LAB_00101d4d:
              bp_00 = (BIO *)bio_open_owner(local_1130,0x8005,1);
              if (bp_00 == (BIO *)0x0) {
                local_1114 = 1;
              }
              else {
                pEVar13 = local_1080;
                iVar10 = dump_certs_keys_p12(bp_00,local_1088,local_1190,0xffffffff,uVar24,
                                             local_1090);
                local_1114 = iVar9;
                if (iVar10 == 0) {
                  local_1114 = 1;
                  BIO_printf(_bio_err,"Error outputting keys and certificates\n",extraout_RDX,
                             pEVar13);
                  ERR_print_errors(_bio_err);
                }
              }
              goto LAB_001011f2;
            }
            BIO_printf(_bio_err,"Can\'t read Password\n");
          }
          bp_00 = (BIO *)0x0;
          puVar16 = (uchar *)0x0;
          local_1114 = 1;
          goto LAB_001011f2;
        }
      }
LAB_00101ec7:
      BIO_printf(_bio_err,"Error getting passwords\n");
    }
  }
LAB_001011dc:
  bp_00 = (BIO *)0x0;
  bp = (BIO *)0x0;
  puVar16 = (uchar *)0x0;
  local_1114 = 1;
LAB_001011f2:
  PKCS12_free(local_1088);
  release_engine(local_1198);
  BIO_free(bp);
  BIO_free_all(bp_00);
  OPENSSL_sk_free(local_11a0);
  CRYPTO_free(puVar16);
  CRYPTO_free(local_10a0);
  CRYPTO_free(local_1098);
  CRYPTO_free(local_1090);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_1114;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00101187_caseD_3:
  uVar24 = uVar24 | 1;
  iVar9 = opt_next();
  if (iVar9 == 0) {
    iVar9 = 0;
    goto LAB_001011b0;
  }
  goto LAB_00101169;
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


