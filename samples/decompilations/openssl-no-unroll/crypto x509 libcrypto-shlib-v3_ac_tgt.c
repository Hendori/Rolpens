
undefined1 * OSSL_ISSUER_SERIAL_it(void)

{
  return local_it_3;
}



undefined1 * OSSL_OBJECT_DIGEST_INFO_it(void)

{
  return local_it_4;
}



undefined1 * OSSL_TARGET_CERT_it(void)

{
  return local_it_5;
}



undefined1 * OSSL_TARGET_it(void)

{
  return local_it_6;
}



undefined1 * OSSL_TARGETS_it(void)

{
  return local_it_2;
}



undefined1 * OSSL_TARGETING_INFORMATION_it(void)

{
  return local_it_1;
}



undefined8
i2r_TARGETING_INFORMATION(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  EVP_PKEY_ASN1_METHOD *pEVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  char *format;
  long in_FS_OFFSET;
  int local_64;
  int local_50;
  int local_4c;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_64 = 0;
  do {
    iVar4 = OPENSSL_sk_num(param_2);
    if (iVar4 <= local_64) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 1;
    }
    BIO_printf(param_3,"%*sTargets:\n",(ulong)param_4,&_LC0);
    uVar6 = OPENSSL_sk_value(param_2,local_64);
    for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar6), iVar4 < iVar5; iVar4 = iVar4 + 1) {
      BIO_printf(param_3,"%*sTarget:\n",(ulong)(param_4 + 2),&_LC0);
      piVar7 = (int *)OPENSSL_sk_value(uVar6,iVar4);
      iVar5 = *piVar7;
      if (iVar5 == 1) {
        format = "%*sTarget Group: ";
LAB_00100109:
        BIO_printf(param_3,format,(ulong)(param_4 + 4),&_LC0);
        GENERAL_NAME_print(param_3,*(GENERAL_NAME **)(piVar7 + 2));
        BIO_puts(param_3,"\n");
      }
      else if (iVar5 == 2) {
        BIO_printf(param_3,"%*sTarget Cert:\n",(ulong)(param_4 + 4),&_LC0);
        plVar1 = *(long **)(piVar7 + 2);
        uVar9 = param_4 + 6;
        BIO_printf(param_3,"%*s",(ulong)uVar9,&_LC0);
        if (*plVar1 != 0) {
          BIO_puts(param_3,"Target Certificate:\n");
          plVar2 = (long *)*plVar1;
          uVar10 = param_4 + 8;
          if (*plVar2 == 0) {
            BIO_printf(param_3,"%*sIssuer Names: <none>\n",(ulong)uVar10,&_LC0);
          }
          else {
            BIO_printf(param_3,"%*sIssuer Names:\n",(ulong)uVar10,&_LC0);
            OSSL_GENERAL_NAMES_print(param_3,*plVar2,uVar10);
            BIO_puts(param_3,"\n");
          }
          BIO_printf(param_3,"%*sIssuer Serial: ",uVar10,&_LC0);
          iVar5 = i2a_ASN1_INTEGER(param_3,(ASN1_INTEGER *)(plVar2 + 1));
          if (0 < iVar5) {
            BIO_puts(param_3,"\n");
            if (plVar2[4] == 0) {
              BIO_printf(param_3,"%*sIssuer UID: <none>\n",uVar10,&_LC0);
            }
            else {
              BIO_printf(param_3,"%*sIssuer UID: ",uVar10,&_LC0);
              iVar5 = i2a_ASN1_STRING(param_3,(ASN1_STRING *)plVar2[4],3);
              if (0 < iVar5) {
                BIO_puts(param_3,"\n");
              }
            }
          }
        }
        if (plVar1[1] != 0) {
          BIO_printf(param_3,"%*sTarget Name: ",(ulong)uVar9,&_LC0);
          GENERAL_NAME_print(param_3,(GENERAL_NAME *)plVar1[1]);
          BIO_puts(param_3,"\n");
        }
        if (plVar1[2] != 0) {
          BIO_printf(param_3,"%*sCertificate Digest Info:\n",(ulong)uVar9,&_LC0);
          lVar3 = plVar1[2];
          local_48 = 0;
          if (lVar3 == 0) {
            ERR_new();
            ERR_set_debug("crypto/x509/v3_ac_tgt.c",0x6f,"i2r_OBJECT_DIGEST_INFO");
            ERR_set_error(0xd,0xc0102,0);
          }
          else {
            iVar5 = ASN1_ENUMERATED_get_int64(&local_48,lVar3);
            if (iVar5 != 0) {
              uVar9 = param_4 + 8;
              uVar11 = (ulong)uVar9;
              if (local_48 == 1) {
                BIO_printf(param_3,"%*sDigest Type: Public Key Certificate\n",uVar11,&_LC0);
              }
              else if (local_48 == 2) {
                BIO_printf(param_3,"%*sDigest Type: Other\n",uVar11,&_LC0);
              }
              else if (local_48 == 0) {
                BIO_printf(param_3,"%*sDigest Type: Public Key\n",uVar11,&_LC0);
              }
              if (*(long *)(lVar3 + 0x18) != 0) {
                BIO_printf(param_3,"%*sDigest Type Identifier: ",uVar9,&_LC0);
                i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)(lVar3 + 0x18));
                BIO_puts(param_3,"\n");
              }
              iVar5 = BIO_printf(param_3,"%*sSignature Algorithm: ",uVar9,&_LC0);
              if ((0 < iVar5) &&
                 (iVar5 = i2a_ASN1_OBJECT(param_3,*(ASN1_OBJECT **)(lVar3 + 0x20)), 0 < iVar5)) {
                BIO_puts(param_3,"\n");
                iVar5 = BIO_printf(param_3,"\n%*sSignature Value: ",uVar9,&_LC0);
                if (0 < iVar5) {
                  iVar5 = OBJ_obj2nid(*(ASN1_OBJECT **)(lVar3 + 0x20));
                  if ((((iVar5 == 0) ||
                       (iVar5 = OBJ_find_sigid_algs(iVar5,&local_4c,&local_50), iVar5 == 0)) ||
                      (pEVar8 = EVP_PKEY_asn1_find((ENGINE **)0x0,local_50),
                      pEVar8 == (EVP_PKEY_ASN1_METHOD *)0x0)) ||
                     (*(code **)(pEVar8 + 0xa0) == (code *)0x0)) {
                    iVar5 = BIO_write(param_3,&_LC4,1);
                    if (iVar5 == 1) {
                      X509_signature_dump(param_3,(ASN1_STRING *)(lVar3 + 0x30),param_4 + 0xc);
                    }
                  }
                  else {
                    (**(code **)(pEVar8 + 0xa0))
                              (param_3,lVar3 + 0x20,(ASN1_STRING *)(lVar3 + 0x30),param_4 + 0xc,0);
                  }
                }
              }
            }
          }
        }
        BIO_puts(param_3,"\n");
      }
      else if (iVar5 == 0) {
        format = "%*sTarget Name: ";
        goto LAB_00100109;
      }
    }
    local_64 = local_64 + 1;
  } while( true );
}



void d2i_OSSL_TARGET(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGET_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TARGET(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGET_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TARGET_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGET_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TARGET_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGET_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TARGETS(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETS_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TARGETS(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETS_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TARGETS_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETS_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TARGETS_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETS_it();
  ASN1_item_free(param_1,it);
  return;
}



void d2i_OSSL_TARGETING_INFORMATION(ASN1_VALUE **param_1,uchar **param_2,long param_3)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETING_INFORMATION_it();
  ASN1_item_d2i(param_1,param_2,param_3,it);
  return;
}



void i2d_OSSL_TARGETING_INFORMATION(ASN1_VALUE *param_1,uchar **param_2)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETING_INFORMATION_it();
  ASN1_item_i2d(param_1,param_2,it);
  return;
}



void OSSL_TARGETING_INFORMATION_new(void)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETING_INFORMATION_it();
  ASN1_item_new(it);
  return;
}



void OSSL_TARGETING_INFORMATION_free(ASN1_VALUE *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)OSSL_TARGETING_INFORMATION_it();
  ASN1_item_free(param_1,it);
  return;
}


