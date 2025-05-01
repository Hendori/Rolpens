
undefined8 alg_get(X509_ALGOR *param_1,int *param_2,undefined4 *param_3,int *param_4,int *param_5)

{
  ASN1_INTEGER *pAVar1;
  int iVar2;
  int iVar3;
  PBEPARAM *a;
  ASN1_ITEM *pAVar4;
  PBE2PARAM *a_00;
  PBKDF2PARAM *a_01;
  ASN1_TYPE *pAVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  int local_54;
  ASN1_OBJECT *local_50;
  ASN1_STRING *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  X509_ALGOR_get0(&local_50,&local_54,&local_48,param_1);
  iVar2 = OBJ_obj2nid(local_50);
  if (iVar2 == 0xa1) {
    if (local_54 == 0x10) {
      pAVar4 = (ASN1_ITEM *)PBE2PARAM_it();
      a_00 = (PBE2PARAM *)ASN1_item_unpack(local_48,pAVar4);
      if (a_00 != (PBE2PARAM *)0x0) {
        X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_54,&local_48,a_00->keyfunc);
        X509_ALGOR_get0(&local_50,(int *)0x0,(void **)0x0,a_00->encryption);
        iVar2 = OBJ_obj2nid(local_50);
        if (local_54 == 0x10) {
          pAVar4 = (ASN1_ITEM *)PBKDF2PARAM_it();
          a_01 = (PBKDF2PARAM *)ASN1_item_unpack(local_48,pAVar4);
          if (a_01 == (PBKDF2PARAM *)0x0) goto LAB_0010015e;
          pAVar5 = a_01->salt;
          if (pAVar5->type != 4) {
            PBKDF2PARAM_free(a_01);
            goto LAB_0010015e;
          }
          iVar3 = 0xa3;
          if (a_01->prf != (X509_ALGOR *)0x0) {
            X509_ALGOR_get0(&local_50,(int *)0x0,(void **)0x0,a_01->prf);
            iVar3 = OBJ_obj2nid(local_50);
            pAVar5 = a_01->salt;
          }
          pAVar1 = a_01->iter;
          *param_4 = ((pAVar5->value).asn1_string)->length;
          lVar6 = ASN1_INTEGER_get(pAVar1);
          uVar7 = 1;
          *param_3 = (int)lVar6;
          *param_2 = iVar3;
          *param_5 = iVar2;
          PBKDF2PARAM_free(a_01);
        }
        else {
LAB_0010015e:
          uVar7 = 0;
        }
        PBE2PARAM_free(a_00);
        goto LAB_0010006f;
      }
    }
  }
  else {
    pAVar5 = param_1->parameter;
    uVar7 = PBEPARAM_it();
    a = (PBEPARAM *)ASN1_TYPE_unpack_sequence(uVar7,pAVar5);
    if (a != (PBEPARAM *)0x0) {
      uVar7 = 1;
      iVar2 = OBJ_obj2nid(param_1->algorithm);
      pAVar1 = a->iter;
      *param_2 = iVar2;
      lVar6 = ASN1_INTEGER_get(pAVar1);
      *param_3 = (int)lVar6;
      *param_4 = a->salt->length;
      *param_5 = 0;
      PBEPARAM_free(a);
      goto LAB_0010006f;
    }
  }
  uVar7 = 0;
LAB_0010006f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PKCS12_newpass(PKCS12 *p12,char *oldpass,char *newpass)

{
  long lVar1;
  uchar *puVar2;
  ASN1_OCTET_STRING *a;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  stack_st_PKCS7 *psVar7;
  PKCS7 *pPVar8;
  stack_st_PKCS12_SAFEBAG *sk;
  long lVar9;
  PKCS8_PRIV_KEY_INFO *a_00;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ASN1_OCTET_STRING *pAVar13;
  long in_FS_OFFSET;
  stack_st_PKCS7 *local_d0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  ASN1_OCTET_STRING *local_98;
  uint local_90;
  undefined4 uStack_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (p12 == (PKCS12 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_npas.c",0x27,"PKCS12_newpass");
    ERR_set_error(0x23,0x69,0);
  }
  else {
    if (p12->mac != (PKCS12_MAC_DATA *)0x0) {
      iVar3 = PKCS12_verify_mac(p12,oldpass,-1);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("crypto/pkcs12/p12_npas.c",0x2e,"PKCS12_newpass");
        ERR_set_error(0x23,0x71,0);
        goto LAB_0010056e;
      }
    }
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_98 = (ASN1_OCTET_STRING *)0x0;
    psVar7 = PKCS12_unpack_authsafes(p12);
    if (psVar7 == (stack_st_PKCS7 *)0x0) {
LAB_001004f0:
      sk = (stack_st_PKCS12_SAFEBAG *)0x0;
      local_d0 = (stack_st_PKCS7 *)0x0;
    }
    else {
      local_d0 = (stack_st_PKCS7 *)OPENSSL_sk_new_null();
      if (local_d0 == (stack_st_PKCS7 *)0x0) goto LAB_001004f0;
      iVar3 = 0;
      while( true ) {
        iVar4 = OPENSSL_sk_num(psVar7);
        if (iVar4 <= iVar3) break;
        pPVar8 = (PKCS7 *)OPENSSL_sk_value(psVar7,iVar3);
        iVar4 = OBJ_obj2nid(pPVar8->type);
        if (iVar4 == 0x15) {
          sk = PKCS12_unpack_p7data(pPVar8);
LAB_00100392:
          if (sk == (stack_st_PKCS12_SAFEBAG *)0x0) goto LAB_00100510;
          lVar1 = pPVar8[1].length;
          puVar2 = pPVar8[1].asn1;
          iVar5 = 0;
          while( true ) {
            iVar6 = OPENSSL_sk_num(sk);
            if (iVar6 <= iVar5) break;
            lVar9 = OPENSSL_sk_value(sk,iVar5);
            local_9c = 0;
            iVar6 = PKCS12_SAFEBAG_get_nid(lVar9);
            if (iVar6 == 0x97) {
              a_00 = (PKCS8_PRIV_KEY_INFO *)
                     PKCS8_decrypt_ex(*(undefined8 *)(lVar9 + 8),oldpass,0xffffffff,puVar2,lVar1);
              if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_00100510;
              X509_SIG_get0(*(undefined8 *)(lVar9 + 8),&local_90,0);
              iVar6 = alg_get(CONCAT44(uStack_8c,local_90),&local_a8,&local_a0,&local_a4,&local_9c);
              if (iVar6 == 0) {
LAB_00100630:
                PKCS8_PRIV_KEY_INFO_free(a_00);
                goto LAB_00100510;
              }
              if (local_9c == 0) {
                lVar11 = 0;
              }
              else {
                pcVar10 = OBJ_nid2sn(local_9c);
                lVar11 = EVP_CIPHER_fetch(puVar2,pcVar10,lVar1);
                if (lVar11 == 0) goto LAB_00100630;
              }
              lVar12 = PKCS8_encrypt_ex(local_a8,lVar11,newpass,0xffffffff,0,local_a4,local_a0,a_00,
                                        puVar2,lVar1);
              PKCS8_PRIV_KEY_INFO_free(a_00);
              EVP_CIPHER_free(lVar11);
              if (lVar12 == 0) goto LAB_00100510;
              X509_SIG_free(*(X509_SIG **)(lVar9 + 8));
              *(long *)(lVar9 + 8) = lVar12;
            }
            iVar5 = iVar5 + 1;
          }
          if (iVar4 == 0x15) {
            pPVar8 = PKCS12_pack_p7data(sk);
          }
          else {
            pPVar8 = (PKCS7 *)PKCS12_pack_p7encdata_ex
                                        (local_b8,newpass,0xffffffff,0,local_b0,local_b4,sk,
                                         pPVar8[1].asn1,pPVar8[1].length);
          }
          if (pPVar8 == (PKCS7 *)0x0) goto LAB_00100510;
          iVar4 = OPENSSL_sk_push(local_d0);
          if (iVar4 == 0) goto LAB_00100510;
          OPENSSL_sk_pop_free(sk,&PKCS12_SAFEBAG_free);
        }
        else if (iVar4 == 0x1a) {
          sk = PKCS12_unpack_p7encdata(pPVar8,oldpass,-1);
          if ((pPVar8->d).digest != (PKCS7_DIGEST *)0x0) {
            iVar5 = alg_get(((pPVar8->d).digest)->md->parameter,&local_b8,&local_b4,&local_b0,
                            &local_ac);
            if (iVar5 != 0) goto LAB_00100392;
          }
          goto LAB_00100510;
        }
        iVar3 = iVar3 + 1;
      }
      pPVar8 = p12->authsafes;
      a = (pPVar8->d).data;
      pAVar13 = ASN1_OCTET_STRING_new();
      (pPVar8->d).data = pAVar13;
      if (pAVar13 != (ASN1_OCTET_STRING *)0x0) {
        iVar3 = PKCS12_pack_authsafes(p12,local_d0);
        if (iVar3 != 0) {
          if (p12->mac == (PKCS12_MAC_DATA *)0x0) {
LAB_00100702:
            ASN1_OCTET_STRING_free(a);
            OPENSSL_sk_pop_free(0,&PKCS12_SAFEBAG_free);
            OPENSSL_sk_pop_free(psVar7,&PKCS7_free);
            OPENSSL_sk_pop_free(local_d0,&PKCS7_free);
            iVar3 = 1;
            goto LAB_00100570;
          }
          iVar3 = PKCS12_gen_mac(p12,newpass,-1,local_88,&local_90);
          if (iVar3 != 0) {
            X509_SIG_getm(p12->mac->dinfo,0,&local_98);
            iVar3 = ASN1_OCTET_STRING_set(local_98,local_88,local_90);
            if (iVar3 != 0) goto LAB_00100702;
          }
        }
      }
      if (a != (ASN1_OCTET_STRING *)0x0) {
        ASN1_OCTET_STRING_free((p12->authsafes->d).data);
        (p12->authsafes->d).data = a;
      }
      sk = (stack_st_PKCS12_SAFEBAG *)0x0;
    }
LAB_00100510:
    OPENSSL_sk_pop_free(sk,&PKCS12_SAFEBAG_free);
    OPENSSL_sk_pop_free(psVar7,&PKCS7_free);
    OPENSSL_sk_pop_free(local_d0,&PKCS7_free);
    ERR_new();
    ERR_set_debug("crypto/pkcs12/p12_npas.c",0x33,"PKCS12_newpass");
    ERR_set_error(0x23,0x72,0);
  }
LAB_0010056e:
  iVar3 = 0;
LAB_00100570:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


