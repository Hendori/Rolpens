
ASN1_BIT_STRING * ossl_cmp_calc_protection(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ASN1_BIT_STRING *a;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  int local_dc;
  ASN1_OBJECT *local_d8;
  int *local_d0;
  void *local_c8;
  int local_c0 [2];
  uchar *local_b8;
  undefined8 local_b0;
  long local_a8;
  long lStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_dc = 0;
  local_d8 = (ASN1_OBJECT *)0x0;
  local_d0 = (int *)0x0;
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (long *)0x0)) {
    local_a8 = *param_2;
    lStack_a0 = param_2[1];
    if (*(X509_ALGOR **)(local_a8 + 0x20) == (X509_ALGOR *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/cmp/cmp_protect.c",0x32,"ossl_cmp_calc_protection");
      ERR_set_error(0x3a,0x86,0);
    }
    else {
      X509_ALGOR_get0(&local_d8,&local_dc,&local_d0,*(X509_ALGOR **)(local_a8 + 0x20));
      iVar5 = OBJ_obj2nid(local_d8);
      if (iVar5 == 0x30e) {
        local_c8 = (void *)0x0;
        local_b8 = (uchar *)0x0;
        local_b0 = 0;
        if (param_1[0x1d] == 0) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_protect.c",0x42,"ossl_cmp_calc_protection");
          ERR_set_error(0x3a,0xa6,0);
        }
        else {
          if (local_d0 != (int *)0x0) {
            iVar5 = i2d_OSSL_CMP_PROTECTEDPART(&local_a8,&local_c8);
            if ((iVar5 < 0) || (local_c8 == (void *)0x0)) {
              lVar7 = 0;
              a = (ASN1_BIT_STRING *)0x0;
              ERR_new();
              ERR_set_debug("crypto/cmp/cmp_protect.c",0x4c,"ossl_cmp_calc_protection");
              ERR_set_error(0x3a,0x73,0);
            }
            else {
              local_b0 = *(undefined8 *)(local_d0 + 2);
              lVar7 = d2i_OSSL_CRMF_PBMPARAMETER(0,&local_b0,(long)*local_d0);
              if (lVar7 == 0) {
                ERR_new();
                a = (ASN1_BIT_STRING *)0x0;
                ERR_set_debug("crypto/cmp/cmp_protect.c",0x55,"ossl_cmp_calc_protection");
                ERR_set_error(0x3a,0x8a,0);
              }
              else {
                iVar5 = OSSL_CRMF_pbm_new(*param_1,param_1[1],lVar7,local_c8,(long)iVar5,
                                          *(undefined8 *)((int *)param_1[0x1d] + 2),
                                          (long)*(int *)param_1[0x1d],&local_b8,local_c0);
                if (iVar5 != 0) {
                  a = ASN1_BIT_STRING_new();
                  if (a != (ASN1_BIT_STRING *)0x0) {
                    ossl_asn1_string_set_bits_left(a,0);
                    iVar5 = ASN1_BIT_STRING_set(a,local_b8,local_c0[0]);
                    if (iVar5 != 0) goto LAB_00100361;
                    ASN1_BIT_STRING_free(a);
                  }
                }
                a = (ASN1_BIT_STRING *)0x0;
              }
            }
LAB_00100361:
            OSSL_CRMF_PBMPARAMETER_free(lVar7);
            CRYPTO_free(local_b8);
            CRYPTO_free(local_c8);
            goto LAB_00100168;
          }
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_protect.c",0x46,"ossl_cmp_calc_protection");
          ERR_set_error(0x3a,0x73,0);
        }
      }
      else {
        uVar8 = param_1[0x22];
        local_98 = (undefined1  [16])0x0;
        local_88 = (undefined1  [16])0x0;
        local_78 = (undefined1  [16])0x0;
        local_68 = (undefined1  [16])0x0;
        local_58 = (undefined1  [16])0x0;
        if (param_1[0x1b] == 0) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_protect.c",0x71,"ossl_cmp_calc_protection");
          ERR_set_error(0x3a,0x82,0);
        }
        else {
          iVar5 = EVP_PKEY_get_default_digest_name(param_1[0x1b],local_98,0x50);
          if (0 < iVar5) {
            iVar5 = strcmp(local_98,"UNDEF");
            if (iVar5 == 0) {
              uVar8 = 0;
            }
          }
          a = ASN1_BIT_STRING_new();
          if (a != (ASN1_BIT_STRING *)0x0) {
            uVar1 = param_1[1];
            uVar2 = *param_1;
            uVar3 = param_1[0x1b];
            uVar4 = *(undefined8 *)(*param_2 + 0x20);
            uVar6 = OSSL_CMP_PROTECTEDPART_it();
            iVar5 = ASN1_item_sign_ex(uVar6,uVar4,0,a,&local_a8,0,uVar3,uVar8,uVar2,uVar1);
            if (iVar5 != 0) goto LAB_00100168;
            ASN1_BIT_STRING_free(a);
          }
        }
      }
    }
  }
  a = (ASN1_BIT_STRING *)0x0;
LAB_00100168:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_cmp_set_own_chain(undefined8 *param_1)

{
  long lVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_1[0x1a] == 0) {
    ossl_cmp_print_log(7,param_1,"ossl_cmp_set_own_chain","crypto/cmp/cmp_protect.c",0x8b,"DEBUG",
                       &_LC4);
    lVar1 = X509_build_chain(param_1[0x19],param_1[0x16],0,0,*param_1,param_1[1]);
    param_1[0x1a] = lVar1;
    if (lVar1 != 0) {
      ossl_cmp_print_log(7,param_1,"ossl_cmp_set_own_chain","crypto/cmp/cmp_protect.c",0x8f,"DEBUG",
                         &_LC4,"success building chain for own CMP signer cert");
      return;
    }
    OSSL_CMP_CTX_print_errors(param_1);
    ossl_cmp_print_log(4,param_1,"ossl_cmp_set_own_chain","crypto/cmp/cmp_protect.c",0x93,&_LC6,
                       &_LC4,"could not build chain for own CMP signer cert");
  }
  return;
}



undefined8 ossl_cmp_msg_add_extraCerts(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = param_2 + 0x18;
  if ((((*(int *)(param_1 + 0xc0) == 0) && (*(long *)(param_1 + 0xe8) == 0)) &&
      (*(long *)(param_1 + 200) != 0)) && (*(long *)(param_1 + 0xd8) != 0)) {
    ossl_cmp_set_own_chain();
    if (*(long *)(param_1 + 0xd0) == 0) {
      iVar2 = ossl_x509_add_cert_new(lVar1,*(undefined8 *)(param_1 + 200),0xf);
      if (iVar2 == 0) {
        return 0;
      }
      ossl_cmp_print_log(7,param_1,"ossl_cmp_msg_add_extraCerts","crypto/cmp/cmp_protect.c",0xac,
                         "DEBUG",&_LC4,"fallback: adding just own CMP signer cert");
    }
    else {
      iVar2 = ossl_x509_add_certs_new(lVar1,*(long *)(param_1 + 0xd0),0xf);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  iVar2 = ossl_x509_add_certs_new(lVar1,*(undefined8 *)(param_1 + 0x150),5);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 0x18));
  if (iVar2 == 0) {
    OPENSSL_sk_free(*(undefined8 *)(param_2 + 0x18));
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return 1;
}



undefined8 ossl_cmp_msg_protect(undefined8 *param_1,long *param_2)

{
  undefined4 uVar1;
  ASN1_BIT_STRING *a;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  ASN1_STRING *str;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  X509_ALGOR *pXVar8;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (undefined8 *)0x0) && (param_2 != (long *)0x0)) {
    X509_ALGOR_free(*(X509_ALGOR **)(*param_2 + 0x20));
    a = (ASN1_BIT_STRING *)param_2[2];
    *(undefined8 *)(*param_2 + 0x20) = 0;
    ASN1_BIT_STRING_free(a);
    iVar2 = *(int *)(param_1 + 0x18);
    param_2[2] = 0;
    if (iVar2 == 0) {
      if (param_1[0x1d] == 0) {
        if (((X509 *)param_1[0x19] == (X509 *)0x0) || ((EVP_PKEY *)param_1[0x1b] == (EVP_PKEY *)0x0)
           ) {
          ERR_new();
          ERR_set_debug("crypto/cmp/cmp_protect.c",0x11a,"ossl_cmp_msg_protect");
          ERR_set_error(0x3a,0x82,0);
        }
        else {
          iVar2 = X509_check_private_key((X509 *)param_1[0x19],(EVP_PKEY *)param_1[0x1b]);
          if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("crypto/cmp/cmp_protect.c",0x10b,"ossl_cmp_msg_protect");
            ERR_set_error(0x3a,0x72,0);
          }
          else {
            lVar6 = *param_2;
            pXVar8 = X509_ALGOR_new();
            *(X509_ALGOR **)(lVar6 + 0x20) = pXVar8;
            if (pXVar8 != (X509_ALGOR *)0x0) {
              lVar6 = X509_get0_subject_key_id(param_1[0x19]);
              if ((lVar6 != 0) || (lVar6 = param_1[0x1c], lVar6 != 0)) goto LAB_00100740;
              goto LAB_001008d2;
            }
          }
        }
      }
      else {
        uVar1 = *(undefined4 *)((long)param_1 + 0x104);
        local_48 = (void *)0x0;
        iVar2 = *(int *)(param_1 + 0x20);
        lVar6 = *param_2;
        uVar3 = EVP_MD_get_type(param_1[0x1f]);
        lVar4 = OSSL_CRMF_pbmp_new(*param_1,param_1[0x1e],uVar3,(long)iVar2,uVar1);
        str = ASN1_STRING_new();
        if ((((lVar4 == 0) || (str == (ASN1_STRING *)0x0)) ||
            (iVar2 = i2d_OSSL_CRMF_PBMPARAMETER(lVar4,&local_48), iVar2 < 0)) ||
           ((iVar2 = ASN1_STRING_set(str,local_48,iVar2), iVar2 == 0 ||
            (lVar5 = ossl_X509_ALGOR_from_nid(0x30e,0x10,str), lVar5 == 0)))) {
          ASN1_STRING_free(str);
          CRYPTO_free(local_48);
          OSSL_CRMF_PBMPARAMETER_free(lVar4);
          *(undefined8 *)(lVar6 + 0x20) = 0;
        }
        else {
          CRYPTO_free(local_48);
          OSSL_CRMF_PBMPARAMETER_free(lVar4);
          lVar4 = param_1[0x1c];
          *(long *)(lVar6 + 0x20) = lVar5;
          if ((lVar4 == 0) || (iVar2 = ossl_cmp_hdr_set1_senderKID(*param_2), iVar2 != 0))
          goto LAB_001008d2;
        }
      }
    }
    else {
      lVar6 = param_1[0x1c];
      if (lVar6 != 0) {
LAB_00100740:
        iVar2 = ossl_cmp_hdr_set1_senderKID(*param_2,lVar6);
        if (iVar2 == 0) goto LAB_0010075e;
LAB_001008d2:
        if (*(int *)(param_1 + 0x18) == 0) {
          lVar6 = ossl_cmp_calc_protection(param_1,param_2);
          param_2[2] = lVar6;
          if (lVar6 == 0) goto LAB_0010075e;
        }
      }
      iVar2 = ossl_cmp_msg_add_extraCerts(param_1,param_2);
      if (iVar2 != 0) {
        iVar2 = ossl_cmp_general_name_is_NULL_DN(*(undefined8 *)(*param_2 + 8));
        uVar7 = 1;
        if ((iVar2 == 0) || (*(long *)(*param_2 + 0x28) != 0)) goto LAB_00100788;
        ERR_new();
        ERR_set_debug("crypto/cmp/cmp_protect.c",0x134,"ossl_cmp_msg_protect");
        ERR_set_error(0x3a,0x6f,0);
      }
    }
LAB_0010075e:
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_protect.c",0x137,"ossl_cmp_msg_protect");
    ERR_set_error(0x3a,0x7f,0);
  }
  uVar7 = 0;
LAB_00100788:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


