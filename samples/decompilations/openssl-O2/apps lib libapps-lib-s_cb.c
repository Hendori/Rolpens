
char * get_sigtype(int param_1)

{
  char *pcVar1;
  
  if (param_1 == 0x390) {
    return "RSA-PSS";
  }
  if (param_1 < 0x391) {
    if (param_1 == 0x198) {
      return "ECDSA";
    }
    if (param_1 < 0x199) {
      if (param_1 == 6) {
        return "RSA";
      }
      if (param_1 == 0x74) {
        return "DSA";
      }
    }
    else if (param_1 == 0x32b) {
      return "gost2001";
    }
  }
  else {
    if (param_1 == 0x43f) {
      return "ed25519";
    }
    if (param_1 < 0x440) {
      if (param_1 == 0x3d3) {
        return "gost2012_256";
      }
      if (param_1 == 0x3d4) {
        return "gost2012_512";
      }
    }
    else if (param_1 == 0x440) {
      return "ed448";
    }
  }
  pcVar1 = OBJ_nid2sn(param_1);
  return pcVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 set_cert_cb(SSL *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  X509_NAME *nm;
  long lVar4;
  char *buf;
  undefined **ppuVar5;
  long lVar6;
  uint local_44;
  
  SSL_certs_clear();
  if (param_2 != 0) {
    do {
      lVar6 = param_2;
      param_2 = *(long *)(lVar6 + 0x48);
    } while (*(long *)(lVar6 + 0x48) != 0);
    local_44 = 0;
    do {
      local_44 = local_44 + 1;
      uVar1 = SSL_check_chain(param_1,*(undefined8 *)(lVar6 + 0x28),*(undefined8 *)(lVar6 + 0x30),
                              *(undefined8 *)(lVar6 + 0x38));
      BIO_printf(_bio_err,"Checking cert chain %d:\nSubject: ",(ulong)local_44);
      uVar3 = get_nameopt();
      nm = X509_get_subject_name(*(X509 **)(lVar6 + 0x28));
      X509_NAME_print_ex(_bio_err,nm,0,uVar3);
      BIO_puts(_bio_err,"\n");
      if (chain_flags != (undefined *)0x0) {
        ppuVar5 = &chain_flags;
        do {
          ppuVar5 = ppuVar5 + 2;
          BIO_printf(_bio_err,"\t%s: %s\n");
        } while (*ppuVar5 != (undefined *)0x0);
      }
      BIO_printf(_bio_err,"\tSuite B: ");
      uVar3 = SSL_ctrl(param_1,99,0,(void *)0x0);
      if ((uVar3 & 0x30000) == 0) {
        BIO_printf(_bio_err,"not tested\n");
      }
      else {
        buf = "NOT OK\n";
        if ((uVar1 & 0x800) != 0) {
          buf = "OK\n";
        }
        BIO_puts(_bio_err,buf);
      }
      if ((uVar1 & 1) != 0) {
        iVar2 = SSL_use_certificate(param_1,*(X509 **)(lVar6 + 0x28));
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = SSL_use_PrivateKey(param_1,*(EVP_PKEY **)(lVar6 + 0x30));
        if (iVar2 == 0) {
          return 0;
        }
        if (*(int *)(lVar6 + 0x40) == 0) {
          if (*(void **)(lVar6 + 0x38) == (void *)0x0) goto LAB_0010021e;
          lVar4 = SSL_ctrl(param_1,0x58,1,*(void **)(lVar6 + 0x38));
        }
        else {
          lVar4 = SSL_ctrl(param_1,0x69,0,(void *)0x0);
        }
        if (lVar4 == 0) {
          return 0;
        }
      }
LAB_0010021e:
      lVar6 = *(long *)(lVar6 + 0x50);
    } while (lVar6 != 0);
  }
  return 1;
}



undefined8 ssl_excert_prepend(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  puVar2 = (undefined8 *)app_malloc(0x58,"prepend cert");
  *puVar2 = 0;
  puVar2[10] = 0;
  puVar4 = (undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)puVar2 - (int)(undefined8 *)((ulong)(puVar2 + 1) & 0xfffffffffffffff8))
                       + 0x58U >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  puVar2[9] = *param_1;
  *param_1 = puVar2;
  puVar1 = (undefined4 *)puVar2[9];
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)puVar2 = *puVar1;
    *(undefined4 *)(puVar2 + 2) = puVar1[4];
    *(undefined8 **)(puVar1 + 0x14) = puVar2;
    return 1;
  }
  *(undefined4 *)puVar2 = 0x8005;
  *(undefined4 *)(puVar2 + 2) = 0x8005;
  return 1;
}



int security_callback_debug
              (undefined8 param_1,undefined8 param_2,uint param_3,uint param_4,int param_5,
              SSL_CIPHER *param_6,undefined8 *param_7)

{
  undefined **ppuVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int n;
  uint uVar5;
  undefined **ppuVar6;
  char *pcVar7;
  EVP_PKEY *pkey;
  EVP_PKEY_ASN1_METHOD *ameth;
  undefined *puVar8;
  BIO *bio;
  ulong uVar9;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = (*(code *)param_7[2])();
  if ((iVar4 == 1) && (*(int *)(param_7 + 1) < 2)) goto LAB_0010048d;
  BIO_puts((BIO *)*param_7,"Security callback: ");
  puVar8 = callback_types;
  if (callback_types == (undefined *)0x0) {
    if ((int)param_3 < 0x5000f) {
      if ((int)param_3 < 0x5000b) {
        if ((param_3 == 10) || (param_3 == 0xf)) goto LAB_00100468;
        if (param_3 == 9) goto LAB_00100425;
        bVar3 = false;
        goto LAB_00100561;
      }
      uVar2 = (ushort)param_6->valid;
      bio = (BIO *)*param_7;
      uVar9 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
LAB_001005e6:
      BIO_printf(bio,"s_cb.c:security_callback_debug op=0x%x",(ulong)param_3);
LAB_001004e3:
      if (signature_tls13_scheme_list != (undefined *)0x0) {
        ppuVar6 = &signature_tls13_scheme_list;
        do {
          if ((int)uVar9 == *(int *)(ppuVar6 + 1)) {
            BIO_printf((BIO *)*param_7," scheme=%s");
            goto LAB_00100591;
          }
          ppuVar1 = ppuVar6 + 2;
          ppuVar6 = ppuVar6 + 2;
        } while (*ppuVar1 != (undefined *)0x0);
      }
      puVar8 = signature_tls12_alg_list;
      if (signature_tls12_alg_list != (undefined *)0x0) {
        ppuVar6 = &signature_tls12_alg_list;
        do {
          if ((uint)*(byte *)((long)&param_6->valid + 1) == *(uint *)(ppuVar6 + 1)) break;
          puVar8 = ppuVar6[2];
          ppuVar6 = ppuVar6 + 2;
        } while (puVar8 != (undefined *)0x0);
      }
      if (signature_tls12_hash_list != (undefined *)0x0) {
        ppuVar6 = &signature_tls12_hash_list;
        do {
          if ((uint)(byte)param_6->valid == *(uint *)(ppuVar6 + 1)) {
            if (puVar8 != (undefined *)0x0) {
              BIO_printf((BIO *)*param_7," digest=%s, algorithm=%s");
              goto LAB_00100591;
            }
            break;
          }
          ppuVar1 = ppuVar6 + 2;
          ppuVar6 = ppuVar6 + 2;
        } while (*ppuVar1 != (undefined *)0x0);
      }
      BIO_printf((BIO *)*param_7," scheme=unknown(0x%04x)",uVar9);
    }
    else if ((param_3 & 0xffffefff) == 0x60012) {
LAB_001005b9:
      n = X509_get_signature_nid(param_6);
      pcVar7 = OBJ_nid2sn(n);
      BIO_puts((BIO *)*param_7,pcVar7);
    }
    else {
LAB_001007c4:
      if ((param_3 & 0xffff0000) == 0x50000) goto LAB_001004b8;
      if ((param_3 & 0xffff0000) == 0x60000) {
LAB_00100752:
        pkey = (EVP_PKEY *)X509_get0_pubkey(param_6);
        if (pkey == (EVP_PKEY *)0x0) {
          BIO_printf((BIO *)*param_7,"Public key missing");
        }
        else {
          local_48 = "";
          ameth = EVP_PKEY_get0_asn1(pkey);
          EVP_PKEY_asn1_get0_info((int *)0x0,(int *)0x0,(int *)0x0,(char **)0x0,&local_48,ameth);
          uVar5 = EVP_PKEY_get_bits(pkey);
          BIO_printf((BIO *)*param_7,"%s, bits=%d",local_48,(ulong)uVar5);
        }
      }
    }
LAB_00100591:
    BIO_printf((BIO *)*param_7,", security bits=%d",(ulong)param_4);
  }
  else {
    ppuVar6 = &callback_types;
    do {
      if (param_3 == *(uint *)(ppuVar6 + 1)) break;
      puVar8 = ppuVar6[2];
      ppuVar6 = ppuVar6 + 2;
    } while (puVar8 != (undefined *)0x0);
    if (0x5000e < (int)param_3) {
      if ((param_3 & 0xffffefff) == 0x60012) {
        if (puVar8 == (undefined *)0x0) goto LAB_001005b9;
        bVar3 = true;
      }
      else {
        bVar3 = false;
        if (puVar8 == (undefined *)0x0) goto LAB_001007c4;
      }
LAB_0010054d:
      BIO_printf((BIO *)*param_7,"%s=",puVar8);
LAB_00100561:
      uVar5 = param_3 & 0xffff0000;
      if (uVar5 == 0x20000) {
        pcVar7 = (char *)EC_curve_nid2nist(param_5);
        if (pcVar7 == (char *)0x0) {
          pcVar7 = OBJ_nid2sn(param_5);
        }
        BIO_puts((BIO *)*param_7,pcVar7);
      }
      else if ((int)uVar5 < 0x20001) {
        if (uVar5 == 0x10000) {
          pcVar7 = SSL_CIPHER_get_name(param_6);
          BIO_puts((BIO *)*param_7,pcVar7);
        }
      }
      else {
        if (uVar5 == 0x50000) goto LAB_001004b8;
        if (uVar5 == 0x60000) {
          if (!bVar3) goto LAB_00100752;
          goto LAB_001005b9;
        }
      }
      goto LAB_00100591;
    }
    if (0x5000a < (int)param_3) {
LAB_001004b8:
      uVar2 = (ushort)param_6->valid;
      bio = (BIO *)*param_7;
      uVar9 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
      if (puVar8 == (undefined *)0x0) goto LAB_001005e6;
      BIO_printf(bio,"%s",puVar8);
      goto LAB_001004e3;
    }
    if ((param_3 != 10) && (param_3 != 0xf)) {
      if (param_3 != 9) {
        bVar3 = false;
        if (puVar8 == (undefined *)0x0) goto LAB_00100561;
        goto LAB_0010054d;
      }
LAB_00100425:
      if (ssl_versions != (undefined *)0x0) {
        ppuVar6 = &ssl_versions;
        puVar8 = ssl_versions;
        do {
          if (param_5 == *(int *)(ppuVar6 + 1)) goto LAB_00100457;
          puVar8 = ppuVar6[2];
          ppuVar6 = ppuVar6 + 2;
        } while (puVar8 != (undefined *)0x0);
      }
      puVar8 = &_LC19;
LAB_00100457:
      BIO_printf((BIO *)*param_7,"Version=%s",puVar8);
    }
  }
LAB_00100468:
  puVar8 = &_LC21;
  if (iVar4 != 0) {
    puVar8 = &_LC20;
  }
  BIO_printf((BIO *)*param_7,": %s\n",puVar8);
LAB_0010048d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void keylog_callback(undefined8 param_1,undefined8 param_2)

{
  if (bio_keylog != (BIO *)0x0) {
    BIO_printf(bio_keylog,"%s\n",param_2);
    BIO_ctrl(bio_keylog,0xb,0,(void *)0x0);
    return;
  }
  BIO_printf(_bio_err,"Keylog callback is invoked without valid file!\n");
  return;
}



void do_print_sigalgs_isra_0(BIO *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  byte local_4a;
  byte local_49;
  int local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = SSL_is_server(param_2);
  if (param_3 == 0) {
    iVar2 = SSL_get_sigalgs(param_2,0xffffffff,0,0,0,0,0);
    if (iVar2 == 0) goto LAB_00100af3;
  }
  else {
    iVar2 = SSL_get_shared_sigalgs(param_2,0,0,0,0,0,0);
    if (iVar2 == 0) {
LAB_00100af3:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00100bc3;
    }
    BIO_puts(param_1,"Shared ");
  }
  if (iVar1 == 0) {
    BIO_puts(param_1,"Requested ");
  }
  BIO_puts(param_1,"Signature Algorithms: ");
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      if (param_3 == 0) {
        SSL_get_sigalgs(param_2,iVar1,&local_44,&local_48,0,&local_49,&local_4a);
      }
      else {
        SSL_get_shared_sigalgs(param_2,iVar1,&local_44,&local_48,0,&local_49,&local_4a);
      }
      if (iVar1 != 0) {
        BIO_puts(param_1,":");
      }
      switch(CONCAT11(local_4a,local_49)) {
      case 0x809:
        BIO_puts(param_1,"rsa_pss_pss_sha256");
        break;
      case 0x80a:
        BIO_puts(param_1,"rsa_pss_pss_sha384");
        break;
      case 0x80b:
        BIO_puts(param_1,"rsa_pss_pss_sha512");
        break;
      default:
        lVar3 = get_sigtype(local_44);
        if (lVar3 == 0) {
          BIO_printf(param_1,"0x%02X",(ulong)local_49);
          if (local_48 != 0) goto LAB_00100b6e;
          BIO_printf(param_1,"+0x%02X",(ulong)local_4a);
        }
        else {
          BIO_printf(param_1,"%s",lVar3);
          if (local_48 != 0) {
LAB_00100b6e:
            pcVar4 = OBJ_nid2sn(local_48);
            BIO_printf(param_1,"+%s",pcVar4);
          }
        }
        break;
      case 0x81a:
        BIO_puts(param_1,"ecdsa_brainpoolP256r1_sha256");
        break;
      case 0x81b:
        BIO_puts(param_1,"ecdsa_brainpoolP384r1_sha384");
        break;
      case 0x81c:
        BIO_puts(param_1,"ecdsa_brainpoolP512r1_sha512");
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != iVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    BIO_puts(param_1,"\n");
    return;
  }
LAB_00100bc3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong verify_callback(uint param_1,X509_STORE_CTX *param_2)

{
  uint uVar1;
  uint uVar2;
  X509 *a;
  ulong uVar3;
  X509_NAME *pXVar4;
  char *pcVar5;
  ASN1_TIME *a_00;
  int iVar6;
  ulong uVar7;
  
  uVar7 = (ulong)param_1;
  a = X509_STORE_CTX_get_current_cert(param_2);
  uVar1 = X509_STORE_CTX_get_error(param_2);
  uVar2 = X509_STORE_CTX_get_error_depth(param_2);
  if ((DAT_001035d4 == 0) || (param_1 == 0)) {
    BIO_printf(_bio_err,"depth=%d ",(ulong)uVar2);
    if (a == (X509 *)0x0) {
      BIO_puts(_bio_err,"<no cert>\n");
    }
    else {
      uVar3 = get_nameopt();
      pXVar4 = X509_get_subject_name(a);
      X509_NAME_print_ex(_bio_err,pXVar4,0,uVar3);
      BIO_puts(_bio_err,"\n");
    }
    if (param_1 != 0) goto LAB_00100c1c;
    pcVar5 = X509_verify_cert_error_string((long)(int)uVar1);
    BIO_printf(_bio_err,"verify error:num=%d:%s\n",(ulong)uVar1,pcVar5);
    if ((verify_args < (int)uVar2) && (-1 < verify_args)) {
      DAT_001035d8 = 0x16;
      switch(uVar1) {
      default:
        DAT_001035d8 = 0x16;
        return 0;
      case 2:
        if (a == (X509 *)0x0) {
          DAT_001035d8 = 0x16;
          return 0;
        }
        break;
      case 9:
      case 0xd:
        if (a == (X509 *)0x0) {
          DAT_001035d8 = 0x16;
          return 0;
        }
        goto LAB_00100dac;
      case 10:
      case 0xe:
        if (a == (X509 *)0x0) {
          DAT_001035d8 = 0x16;
          return 0;
        }
        goto LAB_00100d59;
      case 0x2b:
        if (DAT_001035d4 != 0) {
          DAT_001035d8 = 0x16;
          return 0;
        }
        policies_print(param_2);
        return 0;
      }
      goto LAB_00100dcc;
    }
    uVar7 = (ulong)(DAT_001035dc == 0);
    DAT_001035d8 = uVar1;
    switch(uVar1) {
    case 2:
      if (a != (X509 *)0x0) goto LAB_00100dcc;
      break;
    case 9:
    case 0xd:
      if (a != (X509 *)0x0) goto LAB_00100dac;
      break;
    case 10:
    case 0xe:
      if (a != (X509 *)0x0) goto LAB_00100d59;
      break;
    case 0x2b:
      if (DAT_001035d4 == 0) {
        policies_print(param_2);
      }
    }
    goto switchD_00100d02_caseD_0;
  }
LAB_00100c1c:
  switch(uVar1) {
  default:
    if ((uVar1 != 0) || (param_1 != 2)) goto LAB_00100e48;
    if (DAT_001035d4 != 0) {
      return 2;
    }
    break;
  case 2:
    if (a == (X509 *)0x0) goto LAB_00100e48;
LAB_00100dcc:
    BIO_puts(_bio_err,"issuer= ");
    uVar3 = get_nameopt();
    pXVar4 = X509_get_issuer_name(a);
    X509_NAME_print_ex(_bio_err,pXVar4,0,uVar3);
    BIO_puts(_bio_err,"\n");
    iVar6 = (int)uVar7;
    goto joined_r0x00100d90;
  case 9:
  case 0xd:
    if (a == (X509 *)0x0) goto LAB_00100e48;
LAB_00100dac:
    BIO_printf(_bio_err,"notBefore=");
    a_00 = (ASN1_TIME *)X509_get0_notBefore(a);
    goto LAB_00100d72;
  case 10:
  case 0xe:
    if (a == (X509 *)0x0) goto LAB_00100e48;
LAB_00100d59:
    BIO_printf(_bio_err,"notAfter=");
    a_00 = (ASN1_TIME *)X509_get0_notAfter(a);
LAB_00100d72:
    ASN1_TIME_print(_bio_err,a_00);
    BIO_printf(_bio_err,"\n");
switchD_00100d02_caseD_0:
    iVar6 = (int)uVar7;
joined_r0x00100d90:
    if (iVar6 == 0) {
      return 0;
    }
    goto LAB_00100e48;
  case 0x2b:
    if (DAT_001035d4 != 0) goto LAB_00100e48;
  }
  policies_print(param_2);
LAB_00100e48:
  if (DAT_001035d4 == 0) {
    BIO_printf(_bio_err,"verify return:%d\n",uVar7);
  }
  return uVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 set_cert_stuff(SSL_CTX *param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  if (param_2 == (char *)0x0) {
    return 1;
  }
  iVar1 = SSL_CTX_use_certificate_file(param_1,param_2,1);
  if (iVar1 < 1) {
    BIO_printf(_bio_err,"unable to get certificate from \'%s\'\n",param_2);
    ERR_print_errors(_bio_err);
  }
  else {
    if (param_3 == (char *)0x0) {
      param_3 = param_2;
    }
    iVar1 = SSL_CTX_use_PrivateKey_file(param_1,param_3,1);
    if (iVar1 < 1) {
      BIO_printf(_bio_err,"unable to get private key from \'%s\'\n",param_3);
      ERR_print_errors(_bio_err);
    }
    else {
      iVar1 = SSL_CTX_check_private_key(param_1);
      if (iVar1 != 0) {
        return 1;
      }
      BIO_printf(_bio_err,"Private key does not match the certificate public key\n");
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
set_cert_key_stuff(SSL_CTX *param_1,X509 *param_2,EVP_PKEY *param_3,void *param_4,int param_5)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == (X509 *)0x0) {
    return 1;
  }
  iVar1 = SSL_CTX_use_certificate(param_1,param_2);
  if (iVar1 < 1) {
    BIO_printf(_bio_err,"error setting certificate\n");
    ERR_print_errors(_bio_err);
    uVar3 = 0;
  }
  else {
    iVar1 = SSL_CTX_use_PrivateKey(param_1,param_3);
    if (iVar1 < 1) {
      BIO_printf(_bio_err,"error setting private key\n");
      ERR_print_errors(_bio_err);
      uVar3 = 0;
    }
    else {
      iVar1 = SSL_CTX_check_private_key(param_1);
      if (iVar1 == 0) {
        BIO_printf(_bio_err,"Private key does not match the certificate public key\n");
        uVar3 = 0;
      }
      else {
        if ((param_4 != (void *)0x0) && (lVar2 = SSL_CTX_ctrl(param_1,0x58,1,param_4), lVar2 == 0))
        {
          BIO_printf(_bio_err,"error setting certificate chain\n");
          ERR_print_errors(_bio_err);
          return 0;
        }
        if ((param_5 != 0) &&
           (lVar2 = SSL_CTX_ctrl(param_1,0x69,(ulong)(param_4 != (void *)0x0) * 4,(void *)0x0),
           lVar2 == 0)) {
          BIO_printf(_bio_err,"error building certificate chain\n");
          ERR_print_errors(_bio_err);
          return 0;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



undefined8 ssl_print_sigalgs(BIO *param_1,SSL *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  long in_FS_OFFSET;
  int local_4c;
  byte *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = SSL_is_server(param_2);
  if (iVar2 == 0) {
    lVar3 = SSL_ctrl(param_2,0x67,0,&local_48);
    iVar2 = (int)lVar3;
    if (iVar2 != 0) {
      BIO_puts(param_1,"Client Certificate Types: ");
      if (0 < iVar2) {
        uVar8 = (uint)*local_48;
        if (cert_type_list == (undefined *)0x0) {
          uVar7 = 0;
          goto LAB_001013b2;
        }
        uVar7 = 0;
        do {
          ppuVar5 = &cert_type_list;
          pcVar6 = cert_type_list;
          while (*(uint *)(ppuVar5 + 1) != uVar8) {
            pcVar6 = ppuVar5[2];
            ppuVar5 = ppuVar5 + 2;
            if (pcVar6 == (char *)0x0) {
              if (uVar7 == 0) goto LAB_001013b2;
              goto LAB_001013a0;
            }
          }
          if (uVar7 != 0) {
            BIO_puts(param_1,", ");
          }
          BIO_puts(param_1,pcVar6);
          uVar1 = uVar7;
          while( true ) {
            if (iVar2 - 1 == uVar1) goto LAB_001013d1;
            uVar7 = uVar1 + 1;
            uVar8 = (uint)local_48[uVar1 + 1];
            if (cert_type_list != (undefined *)0x0) break;
LAB_001013a0:
            BIO_puts(param_1,", ");
LAB_001013b2:
            BIO_printf(param_1,"UNKNOWN (%d),",(ulong)uVar8);
            uVar1 = uVar7;
          }
        } while( true );
      }
LAB_001013d1:
      BIO_puts(param_1,"\n");
    }
  }
  do_print_sigalgs_isra_0(param_1,param_2,0);
  do_print_sigalgs_isra_0(param_1,param_2,1);
  lVar3 = SSL_ctrl(param_2,0x6c,0,&local_4c);
  if ((lVar3 != 0) && (local_4c != 0)) {
    pcVar6 = OBJ_nid2sn(local_4c);
    BIO_printf(param_1,"Peer signing digest: %s\n",pcVar6);
  }
  lVar3 = SSL_ctrl(param_2,0x8d,0,&local_48);
  if (lVar3 == 0) {
    iVar2 = SSL_get_peer_signature_type_nid(param_2,&local_4c);
    if (iVar2 != 0) {
      uVar4 = get_sigtype(local_4c);
      BIO_printf(param_1,"Peer signature type: %s\n",uVar4);
    }
  }
  else {
    BIO_printf(param_1,"Peer signature type: %s\n",local_48);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl_print_point_formats(BIO *param_1,SSL *param_2)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = SSL_ctrl(param_2,0x6f,0,&local_48);
  if (0 < (int)lVar2) {
    iVar3 = 0;
    BIO_puts(param_1,"Supported Elliptic Curve Point Formats: ");
    while( true ) {
      cVar1 = *local_48;
      if (cVar1 == '\x01') {
        BIO_puts(param_1,"ansiX962_compressed_prime");
      }
      else if (cVar1 == '\x02') {
        BIO_puts(param_1,"ansiX962_compressed_char2");
      }
      else if (cVar1 == '\0') {
        BIO_puts(param_1,"uncompressed");
      }
      else {
        BIO_printf(param_1,"unknown(%d)");
      }
      local_48 = local_48 + 1;
      if ((int)lVar2 == iVar3 + 1) break;
      iVar3 = iVar3 + 1;
      BIO_puts(param_1,":");
    }
    BIO_puts(param_1,"\n");
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl_print_groups(BIO *param_1,SSL *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  void *parg;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  bool bVar6;
  
  lVar2 = SSL_ctrl(param_2,0x5a,0,(void *)0x0);
  iVar1 = (int)lVar2;
  if (0 < iVar1) {
    parg = (void *)app_malloc((long)iVar1 << 2,"groups to print");
    SSL_ctrl(param_2,0x5a,0,parg);
    BIO_puts(param_1,"Supported groups: ");
    uVar5 = 0;
    do {
      if (uVar5 != 0) {
        BIO_puts(param_1,":");
      }
      uVar3 = SSL_group_to_name(param_2,*(undefined4 *)((long)parg + uVar5 * 4));
      BIO_printf(param_1,"%s",uVar3);
      bVar6 = uVar5 != iVar1 - 1;
      uVar5 = uVar5 + 1;
    } while (bVar6);
    CRYPTO_free(parg);
    if (param_3 == 0) {
      BIO_puts(param_1,"\nShared groups: ");
      lVar2 = SSL_ctrl(param_2,0x5d,-1,(void *)0x0);
      iVar1 = (int)lVar2;
      if (iVar1 < 1) {
        if (iVar1 == 0) {
          BIO_puts(param_1,"NONE");
        }
      }
      else {
        uVar5 = 0;
        do {
          if (uVar5 != 0) {
            BIO_puts(param_1,":");
          }
          uVar4 = SSL_ctrl(param_2,0x5d,uVar5,(void *)0x0);
          uVar3 = SSL_group_to_name(param_2,uVar4 & 0xffffffff);
          BIO_printf(param_1,"%s",uVar3);
          bVar6 = uVar5 != iVar1 - 1;
          uVar5 = uVar5 + 1;
        } while (bVar6);
      }
    }
    BIO_puts(param_1,"\n");
  }
  return 1;
}



undefined8 ssl_print_tmp_key(BIO *param_1,SSL *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  EVP_PKEY *local_88;
  undefined1 local_80 [8];
  undefined2 local_78 [44];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = SSL_ctrl(param_2,0x6d,0,&local_88);
  if (lVar3 == 0) {
    iVar1 = SSL_version(param_2);
    if (iVar1 == 0x304) {
      uVar6 = SSL_ctrl(param_2,0x86,0,(void *)0x0);
      uVar7 = SSL_group_to_name(param_2,uVar6 & 0xffffffff);
      BIO_printf(param_1,"Negotiated TLS1.3 group: %s\n",uVar7);
    }
    goto LAB_0010179b;
  }
  BIO_puts(param_1,"Peer Temp Key: ");
  iVar1 = EVP_PKEY_get_id(local_88);
  if (iVar1 == 0x1c) {
    uVar2 = EVP_PKEY_get_bits(local_88);
    BIO_printf(param_1,"DH, %d bits\n",(ulong)uVar2);
  }
  else if (iVar1 < 0x1d) {
    if (iVar1 == -1) {
      puVar4 = (undefined *)EVP_PKEY_get0_type_name(local_88);
      if (puVar4 == (undefined *)0x0) {
        puVar4 = &_LC79;
      }
      BIO_printf(param_1,"%s\n",puVar4);
    }
    else {
      if (iVar1 != 6) goto LAB_00101878;
      uVar2 = EVP_PKEY_get_bits(local_88);
      BIO_printf(param_1,"RSA, %d bits\n",(ulong)uVar2);
    }
  }
  else if (iVar1 == 0x198) {
    iVar1 = EVP_PKEY_get_utf8_string_param(local_88,"group",local_78,0x50,local_80);
    if (iVar1 == 0) {
      local_78[0] = 0x3f;
    }
    uVar2 = EVP_PKEY_get_bits(local_88);
    BIO_printf(param_1,"ECDH, %s, %d bits\n",local_78,(ulong)uVar2);
  }
  else {
LAB_00101878:
    uVar2 = EVP_PKEY_get_bits(local_88);
    iVar1 = EVP_PKEY_get_id(local_88);
    pcVar5 = OBJ_nid2sn(iVar1);
    BIO_printf(param_1,"%s, %d bits\n",pcVar5,(ulong)uVar2);
  }
  EVP_PKEY_free(local_88);
LAB_0010179b:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long bio_dump_callback(BIO *param_1,int param_2,long *param_3,undefined8 param_4,undefined8 param_5,
                      undefined8 param_6,uint param_7,int *param_8)

{
  BIO *bio;
  char *format;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  
  bio = (BIO *)BIO_get_callback_arg(param_1);
  lVar3 = (long)(int)param_7;
  if (bio == (BIO *)0x0) {
    return lVar3;
  }
  if (param_2 == 0x87) {
    if (0 < (int)param_7) {
      uVar4 = 0;
      if (*(long *)param_3[4] == 0) {
        return lVar3;
      }
      do {
        puVar2 = (undefined8 *)(param_3[1] * uVar4 + *param_3);
        uVar4 = uVar4 + 1;
        uVar1 = puVar2[1];
        BIO_printf(bio,"read from %p [%p] (%zu bytes => %zu (0x%zX))\n",param_1,*puVar2,uVar1,uVar1,
                   uVar1);
        BIO_dump(bio,(char *)*puVar2,*(int *)(puVar2 + 1));
      } while (uVar4 < *(ulong *)param_3[4]);
      return lVar3;
    }
    if (param_3[2] == 0) {
      return lVar3;
    }
    puVar2 = (undefined8 *)*param_3;
    param_3 = (long *)*puVar2;
    param_4 = puVar2[1];
LAB_00101b3b:
    BIO_printf(bio,"read from %p [%p] (%zu bytes => %d)\n",param_1,param_3,param_4,(ulong)param_7);
  }
  else {
    if (0x87 < param_2) {
      if (param_2 != 0x88) {
        return lVar3;
      }
      if (0 < (int)param_7) {
        if (*(long *)param_3[4] == 0) {
          return lVar3;
        }
        uVar4 = 0;
        do {
          puVar2 = (undefined8 *)(param_3[1] * uVar4 + *param_3);
          uVar4 = uVar4 + 1;
          uVar1 = puVar2[1];
          BIO_printf(bio,"write to %p [%p] (%zu bytes => %zu (0x%zX))\n",param_1,*puVar2,uVar1,uVar1
                     ,uVar1);
          BIO_dump(bio,(char *)*puVar2,*(int *)(puVar2 + 1));
        } while (uVar4 < *(ulong *)param_3[4]);
        return lVar3;
      }
      if (param_3[2] == 0) {
        return lVar3;
      }
      puVar2 = (undefined8 *)*param_3;
      param_3 = (long *)*puVar2;
      param_4 = puVar2[1];
LAB_00101b13:
      BIO_printf(bio,"write to %p [%p] (%zu bytes => %d)\n",param_1,param_3,param_4,(ulong)param_7);
      return lVar3;
    }
    if (param_2 == 0x82) {
      if (((int)param_7 < 1) || (param_8 == (int *)0x0)) goto LAB_00101b3b;
      format = "read from %p [%p] (%zu bytes => %zu (0x%zX))\n";
      uVar1 = *(undefined8 *)param_8;
    }
    else {
      if (param_2 != 0x83) {
        return lVar3;
      }
      if (((int)param_7 < 1) || (param_8 == (int *)0x0)) goto LAB_00101b13;
      format = "write to %p [%p] (%zu bytes => %zu (0x%zX))\n";
      uVar1 = *(undefined8 *)param_8;
    }
    BIO_printf(bio,format,param_1,param_3,param_4,uVar1,uVar1);
    BIO_dump(bio,(char *)param_3,*param_8);
  }
  return lVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void apps_ssl_info_callback(SSL *param_1,ulong param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = "SSL_connect";
  if (((param_2 & 0x1000) == 0) && (pcVar3 = "undefined", (param_2 & 0x2000) != 0)) {
    pcVar3 = "SSL_accept";
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 & 0x4000) != 0) {
      pcVar3 = "write";
      if ((param_2 & 4) != 0) {
        pcVar3 = "read";
      }
      pcVar1 = SSL_alert_desc_string_long(param_3);
      pcVar2 = SSL_alert_type_string_long(param_3);
      BIO_printf(_bio_err,"SSL3 alert %s:%s:%s\n",pcVar3,pcVar2,pcVar1);
      return;
    }
    if ((param_2 & 2) == 0) {
      return;
    }
    if (param_3 == 0) {
      pcVar1 = SSL_state_string_long(param_1);
      pcVar2 = "%s:failed in %s\n";
    }
    else {
      if (-1 < param_3) {
        return;
      }
      pcVar1 = SSL_state_string_long(param_1);
      pcVar2 = "%s:error in %s\n";
    }
  }
  else {
    pcVar1 = SSL_state_string_long(param_1);
    pcVar2 = "%s:%s\n";
  }
  BIO_printf(_bio_err,pcVar2,pcVar3,pcVar1);
  return;
}



void msg_cb(int param_1,uint param_2,uint param_3,byte *param_4,ulong param_5,undefined8 param_6,
           BIO *param_7)

{
  undefined **ppuVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  char *pcVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  long in_FS_OFFSET;
  char acStack_c8 [136];
  long local_40;
  
  puVar8 = &_LC101;
  pcVar5 = acStack_c8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    puVar8 = &_LC100;
  }
  if ((param_2 == 0xfeff || param_2 == 0x100) || (param_2 - 0x300 < 5)) {
    if (ssl_versions != (undefined *)0x0) {
      ppuVar3 = &ssl_versions;
      pcVar5 = ssl_versions;
      do {
        if (param_2 == *(uint *)(ppuVar3 + 1)) goto joined_r0x00101d59;
        pcVar5 = ppuVar3[2];
        ppuVar3 = ppuVar3 + 2;
      } while (pcVar5 != (undefined *)0x0);
    }
    pcVar5 = &_LC19;
joined_r0x00101d59:
    if (param_3 == 0x17) {
      pcVar4 = "";
      pcVar7 = ", ApplicationData";
      goto LAB_00101e13;
    }
    if (0x17 < (int)param_3) {
      pcVar7 = ", RecordHeader";
      pcVar4 = "";
      if ((param_3 != 0x100) && (pcVar7 = ", InnerContent", param_3 != 0x101)) {
LAB_00101db8:
        BIO_snprintf(acStack_c8,0x7f,", Unknown (content_type=%d)",(ulong)param_3,pcVar7);
        pcVar4 = "";
        pcVar7 = acStack_c8;
      }
      goto LAB_00101e13;
    }
    if (param_3 == 0x15) {
      pcVar4 = ", ???";
      pcVar7 = ", Alert";
      if (param_5 == 2) {
        pcVar7 = ", warning";
        if ((*param_4 != 1) && (pcVar7 = ", fatal", *param_4 != 2)) {
          pcVar7 = ", ???";
        }
        if (alert_types == (undefined *)0x0) {
          pcVar4 = ", Alert";
        }
        else {
          ppuVar3 = &alert_types;
          do {
            if ((uint)param_4[1] == *(uint *)(ppuVar3 + 1)) {
              pcVar4 = ", Alert";
              goto LAB_00101ef5;
            }
            ppuVar1 = ppuVar3 + 2;
            ppuVar3 = ppuVar3 + 2;
          } while (*ppuVar1 != (undefined *)0x0);
          pcVar4 = ", Alert";
        }
        goto LAB_00101ef5;
      }
      goto LAB_00101e13;
    }
    if (param_3 != 0x16) {
      pcVar7 = ", ChangeCipherSpec";
      pcVar4 = "";
      if (param_3 != 0x14) goto LAB_00101db8;
      goto LAB_00101e13;
    }
    if (param_5 == 0) {
      BIO_printf(param_7,"%s %s%s [length %04lx]%s%s\n",puVar8,pcVar5,", Handshake",0,&_LC19,&_LC26)
      ;
      goto LAB_00101e3b;
    }
    if (handshakes == (undefined *)0x0) {
      pcVar7 = "???";
      pcVar4 = ", Handshake";
    }
    else {
      ppuVar3 = &handshakes;
      pcVar7 = handshakes;
      do {
        if ((uint)*param_4 == *(uint *)(ppuVar3 + 1)) {
          pcVar4 = ", Handshake";
          goto LAB_00101ef5;
        }
        pcVar7 = ppuVar3[2];
        ppuVar3 = ppuVar3 + 2;
      } while (pcVar7 != (char *)0x0);
      pcVar7 = "???";
      pcVar4 = ", Handshake";
    }
LAB_00101ef5:
    BIO_printf(param_7,"%s %s%s [length %04lx]%s%s\n",puVar8,pcVar5,pcVar4,param_5,pcVar7);
  }
  else {
    BIO_snprintf(acStack_c8,0x7f,"Not TLS data or unknown version (version=%d, content_type=%d)",
                 (ulong)param_2,(ulong)param_3);
    pcVar4 = "";
    pcVar7 = "";
LAB_00101e13:
    BIO_printf(param_7,"%s %s%s [length %04lx]%s%s\n",puVar8,pcVar5,pcVar7,param_5,pcVar4,&_LC26);
    if (param_5 == 0) goto LAB_00101e3b;
  }
  uVar6 = 0;
  BIO_printf(param_7,"   ");
  do {
    if (((uVar6 & 0xf) == 0) && (uVar6 != 0)) {
      BIO_printf(param_7,"\n   ");
    }
    pbVar2 = param_4 + uVar6;
    uVar6 = uVar6 + 1;
    BIO_printf(param_7," %02x",(ulong)*pbVar2);
  } while (uVar6 < param_5);
  BIO_printf(param_7,"\n");
LAB_00101e3b:
  BIO_ctrl(param_7,0xb,0,(void *)0x0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void tlsext_cb(undefined8 param_1,int param_2,uint param_3,char *param_4,uint param_5,BIO *param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  puVar1 = tlsext_types;
  pcVar2 = "server name";
  do {
    if (param_3 == *(uint *)(puVar1 + 8)) goto LAB_001020da;
    pcVar2 = *(char **)(puVar1 + 0x10);
    puVar1 = puVar1 + 0x10;
  } while (pcVar2 != (char *)0x0);
  pcVar2 = "unknown";
LAB_001020da:
  pcVar3 = "client";
  if (param_2 != 0) {
    pcVar3 = "server";
  }
  BIO_printf(param_6,"TLS %s extension \"%s\" (id=%d), len=%d\n",pcVar3,pcVar2,(ulong)param_3,
             (ulong)param_5);
  BIO_dump(param_6,param_4,param_5);
  BIO_ctrl(param_6,0xb,0,(void *)0x0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool generate_stateless_cookie_callback(SSL *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *ptr;
  long lVar3;
  void *parg;
  BIO *bp;
  size_t extraout_RDX;
  char *__s2;
  void *pvVar4;
  long in_FS_OFFSET;
  bool bVar5;
  size_t sStack_b8;
  undefined1 auStack_b0 [48];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 *puStack_70;
  long lStack_68;
  SSL *pSStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (cookie_initialized == 0) {
    uStack_50 = 0x10218e;
    iVar2 = RAND_bytes(cookie_secret,0x10);
    if (iVar2 < 1) {
      bVar5 = false;
      uStack_50 = 0x1022f2;
      BIO_printf(_bio_err,"error setting random cookie secret\n");
      goto LAB_00102273;
    }
    cookie_initialized = 1;
  }
  uStack_50 = 0x1021a8;
  iVar2 = SSL_is_dtls(param_1);
  if (iVar2 == 0) {
    parg = (void *)0x0;
    pvVar4 = _ourpeer;
  }
  else {
    uStack_50 = 0x1022a5;
    parg = (void *)BIO_ADDR_new();
    if (parg == (void *)0x0) {
      bVar5 = false;
      uStack_50 = 0x10236a;
      BIO_printf(_bio_err,"memory full\n");
      goto LAB_00102273;
    }
    uStack_50 = 0x1022bc;
    bp = SSL_get_rbio(param_1);
    uStack_50 = 0x1022ce;
    BIO_ctrl(bp,0x2e,0,parg);
    pvVar4 = parg;
  }
  uStack_50 = 0x1021ca;
  iVar2 = BIO_ADDR_rawaddress(pvVar4,0,&local_48);
  if (iVar2 == 0) {
    bVar5 = false;
    uStack_50 = 0x10231a;
    BIO_printf(_bio_err,"Failed getting peer address\n");
    uStack_50 = 0x102322;
    BIO_ADDR_free(parg);
LAB_00102273:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return bVar5;
    }
                    /* WARNING: Subroutine does not return */
    uStack_50 = 0x102374;
    __stack_chk_fail();
  }
  if (local_48 != 0) {
    uStack_50 = 0x1021e5;
    uVar1 = BIO_ADDR_rawport(pvVar4);
    local_48 = local_48 + 2;
    uStack_50 = 0x102200;
    ptr = (undefined2 *)app_malloc(local_48,"cookie generate buffer");
    *ptr = uVar1;
    uStack_50 = 0x102215;
    BIO_ADDR_rawaddress(pvVar4,ptr + 1,0);
    uStack_58 = 0xff;
    lStack_68 = local_48;
    uStack_78 = 0x10;
    uStack_80 = 0x10224a;
    puStack_70 = ptr;
    pSStack_60 = (SSL *)param_2;
    uStack_50 = param_3;
    lVar3 = EVP_Q_mac(0,&_LC129,0,&_LC128,0,cookie_secret);
    if (lVar3 == 0) {
      uStack_50 = 0x10234a;
      BIO_printf(_bio_err,"Error calculating HMAC-SHA1 of buffer with secret\n");
    }
    bVar5 = lVar3 != 0;
    uStack_50 = 0x10226b;
    CRYPTO_free(ptr);
    uStack_50 = 0x102273;
    BIO_ADDR_free(parg);
    goto LAB_00102273;
  }
  __s2 = "apps/lib/s_cb.c";
  uStack_50 = 0x10238c;
  OPENSSL_die("assertion failed: length != 0","apps/lib/s_cb.c",0x375);
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  pSStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  if (cookie_initialized != 0) {
    iVar2 = generate_stateless_cookie_callback();
    if ((iVar2 != 0) && (sStack_b8 == extraout_RDX)) {
      iVar2 = memcmp(auStack_b0,__s2,sStack_b8);
      bVar5 = iVar2 == 0;
      goto LAB_001023b8;
    }
  }
  bVar5 = false;
LAB_001023b8:
  if (lStack_68 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool verify_stateless_cookie_callback(undefined8 param_1,void *param_2,size_t param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  size_t local_70;
  undefined1 local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (cookie_initialized != 0) {
    iVar1 = generate_stateless_cookie_callback(param_1,local_68,&local_70);
    if ((iVar1 != 0) && (local_70 == param_3)) {
      iVar1 = memcmp(local_68,param_2,local_70);
      bVar2 = iVar1 == 0;
      goto LAB_001023b8;
    }
  }
  bVar2 = false;
LAB_001023b8:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void generate_cookie_callback(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  iVar1 = generate_stateless_cookie_callback(param_1,param_2,&local_18);
  if (iVar1 != 0) {
    *param_3 = (int)local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void verify_cookie_callback(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  verify_stateless_cookie_callback(param_1,param_2,param_3);
  return;
}



void ssl_ctx_set_excert(undefined8 param_1,undefined8 param_2)

{
  SSL_CTX_set_cert_cb(param_1,set_cert_cb,param_2);
  return;
}



void ssl_excert_free(void *param_1)

{
  void *pvVar1;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  do {
    X509_free(*(X509 **)((long)param_1 + 0x28));
    EVP_PKEY_free(*(EVP_PKEY **)((long)param_1 + 0x30));
    OSSL_STACK_OF_X509_free(*(undefined8 *)((long)param_1 + 0x38));
    pvVar1 = *(void **)((long)param_1 + 0x48);
    CRYPTO_free(param_1);
    param_1 = pvVar1;
  } while (pvVar1 != (void *)0x0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 load_excert(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*param_1;
  if (puVar5 == (undefined4 *)0x0) {
LAB_00102610:
    uVar4 = 1;
  }
  else {
    lVar3 = *(long *)(puVar5 + 2);
    if (lVar3 == 0) {
      if (*(long *)(puVar5 + 0x12) == 0) {
        ssl_excert_free(puVar5);
        *param_1 = 0;
        goto LAB_00102610;
      }
    }
    else {
      do {
        lVar3 = load_cert_pass(lVar3,*puVar5,1,0,"Server Certificate");
        *(long *)(puVar5 + 10) = lVar3;
        if (lVar3 == 0) goto LAB_001025f7;
        lVar3 = *(long *)(puVar5 + 6);
        if (lVar3 == 0) {
          uVar1 = *puVar5;
          lVar3 = *(long *)(puVar5 + 2);
        }
        else {
          uVar1 = puVar5[4];
        }
        lVar3 = load_key(lVar3,uVar1,0,0,0,"server key");
        *(long *)(puVar5 + 0xc) = lVar3;
        if (lVar3 == 0) goto LAB_001025f7;
        if (*(long *)(puVar5 + 8) != 0) {
          iVar2 = load_certs(*(long *)(puVar5 + 8),0,puVar5 + 0xe,0,"server chain");
          if (iVar2 == 0) goto LAB_001025f7;
        }
        puVar5 = *(undefined4 **)(puVar5 + 0x12);
        if (puVar5 == (undefined4 *)0x0) goto LAB_00102610;
        lVar3 = *(long *)(puVar5 + 2);
      } while (lVar3 != 0);
    }
    BIO_printf(_bio_err,"Missing filename\n");
LAB_001025f7:
    uVar4 = 0;
  }
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool args_excert(undefined4 param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = *param_2;
  if (local_28 == 0) {
    iVar1 = ssl_excert_prepend(&local_28);
    if (iVar1 != 0) {
      *param_2 = local_28;
      goto LAB_0010264f;
    }
    uVar2 = opt_getprog();
    BIO_printf(_bio_err," %s: Error initialising xcert\n",uVar2);
    lVar3 = local_28;
LAB_001026a0:
    ERR_print_errors(_bio_err);
    ssl_excert_free(lVar3);
    *param_2 = 0;
switchD_0010266c_caseD_3e8:
    bVar4 = false;
    goto LAB_001026bb;
  }
LAB_0010264f:
  lVar3 = local_28;
  switch(param_1) {
  case 1000:
  case 0x3ef:
    goto switchD_0010266c_caseD_3e8;
  case 0x3e9:
    if (*(long *)(local_28 + 0x18) != 0) {
      uVar2 = opt_getprog();
      BIO_printf(_bio_err,"%s: Key already specified\n",uVar2);
      goto LAB_001026a0;
    }
    uVar2 = opt_arg();
    *(undefined8 *)(lVar3 + 0x18) = uVar2;
    break;
  case 0x3ea:
    if ((*(long *)(local_28 + 8) != 0) && (iVar1 = ssl_excert_prepend(&local_28), iVar1 == 0)) {
      uVar2 = opt_getprog();
      BIO_printf(_bio_err,"%s: Error adding xcert\n",uVar2);
      lVar3 = local_28;
      goto LAB_001026a0;
    }
    lVar3 = local_28;
    *param_2 = local_28;
    uVar2 = opt_arg();
    *(undefined8 *)(lVar3 + 8) = uVar2;
    break;
  case 0x3eb:
    if (*(long *)(local_28 + 0x20) != 0) {
      uVar2 = opt_getprog();
      BIO_printf(_bio_err,"%s: Chain already specified\n",uVar2);
      goto LAB_001026a0;
    }
    uVar2 = opt_arg();
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    break;
  case 0x3ec:
    *(undefined4 *)(local_28 + 0x40) = 1;
    break;
  case 0x3ed:
    goto LAB_00102764;
  case 0x3ee:
    lVar3 = local_28 + 0x10;
LAB_00102764:
    uVar2 = opt_arg();
    iVar1 = opt_format(uVar2,0xffe,lVar3);
    bVar4 = iVar1 != 0;
    goto LAB_001026bb;
  }
  bVar4 = true;
LAB_001026bb:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_verify_detail(SSL *param_1,BIO *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  char *ptr;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  long in_FS_OFFSET;
  undefined8 uStack_80;
  byte local_5b;
  byte local_5a;
  byte local_59;
  long local_58;
  byte *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  lVar5 = SSL_get_verify_result(param_1);
  if (lVar5 == 0) {
    lVar5 = SSL_get0_peername(param_1);
    BIO_printf(param_2,"Verification: OK\n");
    if (lVar5 != 0) {
      BIO_printf(param_2,"Verified peername: %s\n",lVar5);
    }
  }
  else {
    pcVar8 = X509_verify_cert_error_string(lVar5);
    BIO_printf(param_2,"Verification error: %s\n",pcVar8);
  }
  iVar3 = SSL_get0_dane_authority(param_1,0,&local_58);
  if (-1 < iVar3) {
    local_50 = (byte *)0x0;
    local_48 = 0;
    uVar4 = SSL_get0_dane_tlsa(param_1,&local_5b,&local_5a,&local_59,&local_50,&local_48);
    uVar2 = local_48;
    pbVar10 = local_50;
    if (local_48 < 0xd) {
      lVar5 = local_48 * 2;
      uVar1 = lVar5 + 1;
      if (uVar1 < local_48) {
        uVar6 = opt_getprog();
        BIO_printf(_bio_err,"%s: %zu-byte buffer too large to hexencode\n",uVar6,uVar2);
                    /* WARNING: Subroutine does not return */
        exit(1);
      }
      uStack_80 = 0x102a67;
      ptr = (char *)app_malloc(uVar1,"TLSA hex data buffer");
      pcVar8 = ptr;
      if (uVar2 != 0) {
        pbVar11 = pbVar10;
        do {
          pbVar12 = pbVar11 + 1;
          *pcVar8 = "0123456789abcdef"[*pbVar11 >> 4];
          pcVar8[1] = "0123456789abcdef"[*pbVar11 & 0xf];
          pcVar8 = pcVar8 + 2;
          pbVar11 = pbVar12;
        } while (pbVar10 + uVar2 != pbVar12);
        pcVar8 = ptr + lVar5;
      }
      *pcVar8 = '\0';
    }
    else {
      pbVar10 = local_50 + (local_48 - 0xc);
      uStack_80 = 0x102970;
      ptr = (char *)app_malloc(0x19,"TLSA hex data buffer");
      pcVar8 = ptr;
      do {
        pcVar7 = pcVar8 + 2;
        *pcVar8 = "0123456789abcdef"[*pbVar10 >> 4];
        pcVar8[1] = "0123456789abcdef"[*pbVar10 & 0xf];
        pcVar8 = pcVar7;
        pbVar10 = pbVar10 + 1;
      } while (ptr + 0x18 != pcVar7);
      ptr[0x18] = '\0';
    }
    puVar9 = &_LC26;
    if (0xc < local_48) {
      puVar9 = &_LC139;
    }
    BIO_printf(param_2,"DANE TLSA %d %d %d %s%s ",(ulong)local_5b,(ulong)local_5a,(ulong)local_59,
               puVar9);
    lVar5 = SSL_get0_peer_rpk(param_1);
    if (lVar5 == 0) {
      pcVar8 = "signed the peer";
      if ((local_58 == 0) && (pcVar8 = "matched the EE", uVar4 != 0)) {
        pcVar8 = "matched the TA";
      }
      BIO_printf(param_2,"%s certificate at depth %d\n",pcVar8,(ulong)uVar4);
    }
    else {
      BIO_printf(param_2,"matched the peer raw public key\n",ptr,uStack_80);
    }
    CRYPTO_free(ptr);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 print_ssl_summary(SSL *param_1)

{
  int iVar1;
  int iVar2;
  X509 *a;
  long lVar3;
  char *pcVar4;
  SSL_CIPHER *pSVar5;
  ulong uVar6;
  X509_NAME *nm;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  int local_4c;
  byte *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  a = (X509 *)SSL_get0_peer_certificate();
  lVar3 = SSL_get0_peer_rpk(param_1);
  pcVar4 = SSL_get_version(param_1);
  BIO_printf(_bio_err,"Protocol version: %s\n",pcVar4);
  iVar1 = SSL_is_server(param_1);
  if (iVar1 != 0) {
    lVar7 = SSL_ctrl(param_1,0x6e,0,(void *)0x0);
    if (lVar7 != 2) {
      pcVar4 = "apps/lib/s_cb.c";
      pcVar10 = "assertion failed: num == 2";
      OPENSSL_die("assertion failed: num == 2","apps/lib/s_cb.c",0x4bc);
      iVar1 = 0;
      SSL_CONF_CTX_set_ssl_ctx();
      while( true ) {
        iVar2 = OPENSSL_sk_num(pcVar4);
        if (iVar2 <= iVar1) {
          iVar1 = SSL_CONF_CTX_finish(pcVar10);
          if (iVar1 == 0) {
            BIO_puts(_bio_err,"Error finishing context\n");
            ERR_print_errors(_bio_err);
            return 0;
          }
          return 1;
        }
        uVar8 = OPENSSL_sk_value(pcVar4,iVar1);
        pcVar9 = (char *)OPENSSL_sk_value(pcVar4,iVar1 + 1);
        iVar2 = SSL_CONF_cmd(pcVar10,uVar8,pcVar9);
        if (iVar2 < 1) break;
        iVar1 = iVar1 + 2;
      }
      if (pcVar9 == (char *)0x0) {
        pcVar9 = "<NULL>";
      }
      BIO_printf(_bio_err,"Call to SSL_CONF_cmd(%s, %s) failed\n",uVar8,pcVar9);
      ERR_print_errors(_bio_err);
      return 0;
    }
    uVar6 = SSL_ctrl(param_1,0x6e,0,&local_48);
    BIO_puts(_bio_err,"Client cipher list: ");
    if (uVar6 != 0) {
      uVar11 = 0;
      do {
        pSVar5 = (SSL_CIPHER *)SSL_CIPHER_find(param_1,local_48);
        if (uVar11 != 0) {
          BIO_puts(_bio_err,":");
        }
        if (pSVar5 == (SSL_CIPHER *)0x0) {
          if (*(short *)local_48 == -0x100) {
            BIO_puts(_bio_err,"SCSV");
          }
          else {
            BIO_puts(_bio_err,"0x");
            BIO_printf(_bio_err,"%02X",(ulong)*local_48);
            BIO_printf(_bio_err,"%02X",(ulong)local_48[1]);
          }
        }
        else {
          pcVar4 = SSL_CIPHER_get_name(pSVar5);
          BIO_puts(_bio_err,pcVar4);
        }
        uVar11 = uVar11 + 2;
        local_48 = local_48 + 2;
      } while (uVar11 < uVar6);
    }
    BIO_puts(_bio_err,"\n");
  }
  pSVar5 = SSL_get_current_cipher(param_1);
  pcVar4 = SSL_CIPHER_get_name(pSVar5);
  BIO_printf(_bio_err,"Ciphersuite: %s\n",pcVar4);
  do_print_sigalgs_isra_0(_bio_err,param_1,0);
  if (a == (X509 *)0x0) {
    if (lVar3 == 0) {
      BIO_puts(_bio_err,"No peer certificate or raw public key\n");
      goto LAB_00102c91;
    }
    BIO_printf(_bio_err,"Peer used raw public key\n");
  }
  else {
    BIO_puts(_bio_err,"Peer certificate: ");
    uVar6 = get_nameopt();
    nm = X509_get_subject_name(a);
    X509_NAME_print_ex(_bio_err,nm,0,uVar6);
    BIO_puts(_bio_err,"\n");
    lVar3 = SSL_ctrl(param_1,0x6c,0,&local_4c);
    if (lVar3 != 0) {
      pcVar4 = OBJ_nid2sn(local_4c);
      BIO_printf(_bio_err,"Hash used: %s\n",pcVar4);
    }
  }
  lVar3 = SSL_ctrl(param_1,0x8d,0,&local_48);
  if (lVar3 != 0) {
    BIO_printf(_bio_err,"Signature type: %s\n",local_48);
  }
  print_verify_detail(param_1,_bio_err);
LAB_00102c91:
  ssl_print_point_formats(_bio_err,param_1);
  iVar1 = SSL_is_server(param_1);
  if (iVar1 != 0) {
    ssl_print_groups(_bio_err,param_1,1);
  }
  ssl_print_tmp_key(_bio_err,param_1);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 config_ctx(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar2 = 0;
  SSL_CONF_CTX_set_ssl_ctx(param_1,param_3);
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar2) {
      iVar2 = SSL_CONF_CTX_finish(param_1);
      if (iVar2 == 0) {
        BIO_puts(_bio_err,"Error finishing context\n");
        ERR_print_errors(_bio_err);
        return 0;
      }
      return 1;
    }
    uVar3 = OPENSSL_sk_value(param_2,iVar2);
    pcVar4 = (char *)OPENSSL_sk_value(param_2,iVar2 + 1);
    iVar1 = SSL_CONF_cmd(param_1,uVar3,pcVar4);
    if (iVar1 < 1) break;
    iVar2 = iVar2 + 2;
  }
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "<NULL>";
  }
  BIO_printf(_bio_err,"Call to SSL_CONF_cmd(%s, %s) failed\n",uVar3,pcVar4);
  ERR_print_errors(_bio_err);
  return 0;
}



undefined8 ssl_ctx_add_crls(SSL_CTX *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  X509_STORE *ctx;
  X509_CRL *x;
  int iVar2;
  
  ctx = SSL_CTX_get_cert_store(param_1);
  iVar2 = 0;
  while( true ) {
    iVar1 = OPENSSL_sk_num(param_2);
    if (iVar1 <= iVar2) break;
    x = (X509_CRL *)OPENSSL_sk_value(param_2,iVar2);
    X509_STORE_add_crl(ctx,x);
    iVar2 = iVar2 + 1;
  }
  if (param_3 == 0) {
    return 1;
  }
  store_setup_crl_download(ctx);
  return 1;
}



uint ssl_load_stores(SSL_CTX *param_1,long param_2,long param_3,X509_STORE *param_4,long param_5,
                    long param_6,long param_7,undefined8 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  X509_STORE *pXVar4;
  X509_CRL *x;
  long lVar5;
  X509_STORE *v;
  
  if (param_3 != 0 || param_2 != 0) {
    pXVar4 = X509_STORE_new();
    if (pXVar4 == (X509_STORE *)0x0) {
LAB_00103210:
      uVar3 = 0;
      v = (X509_STORE *)0x0;
      pXVar4 = (X509_STORE *)0x0;
      goto LAB_001031b7;
    }
    if (param_3 == 0) {
LAB_0010318f:
      iVar1 = X509_STORE_load_path(pXVar4,param_2);
      if (iVar1 != 0) {
LAB_0010319e:
        if (param_4 != (X509_STORE *)0x0) goto LAB_00103086;
        goto LAB_00103099;
      }
    }
    else {
      iVar1 = X509_STORE_load_file(pXVar4,param_3);
      if (iVar1 != 0) {
        if (param_2 != 0) goto LAB_0010318f;
        goto LAB_0010319e;
      }
    }
LAB_001031b0:
    uVar3 = 0;
    v = (X509_STORE *)0x0;
    goto LAB_001031b7;
  }
  if (param_4 != (X509_STORE *)0x0) {
    pXVar4 = X509_STORE_new();
    if (pXVar4 == (X509_STORE *)0x0) goto LAB_00103210;
LAB_00103086:
    iVar1 = X509_STORE_load_store(pXVar4,param_4);
    if (iVar1 == 0) {
      v = (X509_STORE *)0x0;
      uVar3 = 0;
      goto LAB_001031b7;
    }
LAB_00103099:
    param_4 = pXVar4;
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(param_8), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      x = (X509_CRL *)OPENSSL_sk_value(param_8,iVar1);
      X509_STORE_add_crl(param_4,x);
    }
    lVar5 = SSL_CTX_ctrl(param_1,0x6a,1,param_4);
    pXVar4 = param_4;
    if (lVar5 == 0) goto LAB_001031b0;
    if (param_9 != 0) {
      store_setup_crl_download(param_4);
    }
  }
  pXVar4 = param_4;
  if (param_5 == 0 && param_6 == 0) {
    if (param_7 == 0) {
      v = (X509_STORE *)0x0;
      uVar3 = 1;
      goto LAB_001031b7;
    }
    v = X509_STORE_new();
    if (v == (X509_STORE *)0x0) goto LAB_00103278;
LAB_0010311b:
    uVar3 = X509_STORE_load_store(v,param_7);
    if (uVar3 == 0) goto LAB_001031b7;
  }
  else {
    v = X509_STORE_new();
    if (v == (X509_STORE *)0x0) {
LAB_00103278:
      uVar3 = 0;
      goto LAB_001031b7;
    }
    if (param_6 == 0) {
LAB_00103260:
      iVar1 = X509_STORE_load_path(v,param_5);
      if (iVar1 == 0) {
        uVar3 = 0;
        goto LAB_001031b7;
      }
    }
    else {
      uVar3 = X509_STORE_load_file(v,param_6);
      if (uVar3 == 0) goto LAB_001031b7;
      if (param_5 != 0) goto LAB_00103260;
    }
    if (param_7 != 0) goto LAB_0010311b;
  }
  lVar5 = SSL_CTX_ctrl(param_1,0x6b,1,v);
  uVar3 = (uint)(lVar5 != 0);
LAB_001031b7:
  X509_STORE_free(pXVar4);
  X509_STORE_free(v);
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ssl_ctx_security_debug(undefined8 param_1,undefined4 param_2)

{
  sdb_1._0_8_ = _bio_err;
  sdb_1._8_4_ = param_2;
  sdb_1._16_8_ = SSL_CTX_get_security_callback();
  SSL_CTX_set_security_callback(param_1,security_callback_debug);
  SSL_CTX_set0_security_ex_data(param_1,sdb_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 set_keylog_file(long param_1,char *param_2)

{
  long lVar1;
  
  BIO_free_all(bio_keylog);
  bio_keylog = (BIO *)0x0;
  if ((param_1 != 0) && (param_2 != (char *)0x0)) {
    bio_keylog = BIO_new_file(param_2,"a");
    if (bio_keylog == (BIO *)0x0) {
      BIO_printf(_bio_err,"Error writing keylog file %s\n",param_2);
      return 1;
    }
    lVar1 = BIO_ctrl(bio_keylog,0x85,0,(void *)0x0);
    if ((int)lVar1 == 0) {
      BIO_puts(bio_keylog,"# SSL/TLS secrets log file, generated by OpenSSL\n");
      BIO_ctrl(bio_keylog,0xb,0,(void *)0x0);
    }
    SSL_CTX_set_keylog_callback(param_1,keylog_callback);
  }
  return 0;
}



void print_ca_names(BIO *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong flags;
  X509_NAME *nm;
  
  iVar1 = SSL_is_server(param_2);
  pcVar3 = "server";
  if (iVar1 == 0) {
    pcVar3 = "client";
  }
  lVar4 = SSL_get0_peer_CA_list(param_2);
  if (lVar4 != 0) {
    iVar1 = OPENSSL_sk_num(lVar4);
    if (iVar1 != 0) {
      BIO_printf(param_1,"---\nAcceptable %s certificate CA names\n",pcVar3);
      iVar1 = 0;
      while( true ) {
        iVar2 = OPENSSL_sk_num(lVar4);
        if (iVar2 <= iVar1) break;
        flags = get_nameopt();
        nm = (X509_NAME *)OPENSSL_sk_value(lVar4,iVar1);
        X509_NAME_print_ex(param_1,nm,0,flags);
        BIO_write(param_1,&_LC14,1);
        iVar1 = iVar1 + 1;
      }
      return;
    }
  }
  iVar1 = SSL_is_server(param_2);
  if (iVar1 != 0) {
    return;
  }
  BIO_printf(param_1,"---\nNo %s certificate CA names sent\n",pcVar3);
  return;
}



void ssl_print_secure_renegotiation_notes(BIO *param_1,SSL *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  
  iVar1 = SSL_is_dtls(param_2);
  if (iVar1 == 0) {
    iVar1 = SSL_version(param_2);
    if (0x303 < iVar1) {
      BIO_printf(param_1,"This TLS version forbids renegotiation.\n");
      return;
    }
  }
  lVar2 = SSL_ctrl(param_2,0x4c,0,(void *)0x0);
  puVar3 = &_LC26;
  if (lVar2 == 0) {
    puVar3 = &_LC172;
  }
  BIO_printf(param_1,"Secure Renegotiation IS%s supported\n",puVar3);
  return;
}



undefined8 progress_cb(EVP_PKEY_CTX *param_1)

{
  uint uVar1;
  BIO *b;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  b = (BIO *)EVP_PKEY_CTX_get_app_data(param_1);
  uVar1 = EVP_PKEY_CTX_get_keygen_info(param_1,0);
  local_21 = 0x3f;
  if (uVar1 < 5) {
    local_21 = *(undefined1 *)((long)&symbols_0 + (long)(int)uVar1);
  }
  BIO_write(b,&local_21,1);
  BIO_ctrl(b,0xb,0,(void *)0x0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


