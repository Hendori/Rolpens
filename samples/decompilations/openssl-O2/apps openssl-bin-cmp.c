
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_to_bio_err(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  OSSL_CMP_print_to_bio(_bio_err,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_to_bio_out(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  OSSL_CMP_print_to_bio(_bio_out,param_1,param_2,param_3,param_4,param_5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * opt_str(void)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (char *)opt_arg();
  if (*pcVar1 == '\0') {
    if (3 < opt_verbosity) {
      uVar2 = opt_flag();
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: %s option argument is empty string, resetting option%s%s\n",
                 "opt_str","apps/cmp.c",0xae2,"warning",uVar2,&_LC3,&_LC3);
    }
    return (char *)0x0;
  }
  if ((*pcVar1 == '-') && (3 < opt_verbosity)) {
    uVar2 = opt_flag();
    BIO_printf(_bio_out,"%s:%s:%d:CMP %s: %s option argument starts with hyphen%s%s\n","opt_str",
               "apps/cmp.c",0xae6,"warning",uVar2,&_LC3,&_LC3);
  }
  return pcVar1;
}



bool truststore_set_host_etc(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = X509_STORE_get0_param();
  iVar1 = X509_VERIFY_PARAM_set1_host(uVar2,0,0);
  if (((iVar1 != 0) && (iVar1 = X509_VERIFY_PARAM_set1_ip(uVar2,0,0), iVar1 != 0)) &&
     (iVar1 = X509_VERIFY_PARAM_set1_email(uVar2,0,0), iVar1 != 0)) {
    X509_VERIFY_PARAM_set_hostflags(uVar2,5);
    if ((param_2 != 0) && (iVar1 = X509_VERIFY_PARAM_set1_ip_asc(uVar2,param_2), iVar1 != 0)) {
      return true;
    }
    iVar1 = X509_VERIFY_PARAM_set1_host(uVar2,param_2,0);
    return iVar1 != 0;
  }
  return false;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

X509_STORE * load_trusted(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  X509_STORE *ctx;
  
  ctx = (X509_STORE *)load_certstore(param_1,opt_otherpass,param_3,vpm);
  if (ctx != (X509_STORE *)0x0) {
    X509_STORE_set_verify_cb(ctx,(verify_cb *)&X509_STORE_CTX_print_verify_cb);
    iVar1 = X509_STORE_set1_param(ctx,vpm);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        return ctx;
      }
      iVar1 = truststore_set_host_etc(ctx,0);
      if (iVar1 != 0) {
        return ctx;
      }
    }
    BIO_printf(_bio_err,"error setting verification parameters for %s\n",param_3);
    OSSL_CMP_CTX_print_errors(cmp_ctx);
    X509_STORE_free(ctx);
  }
  return (X509_STORE *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 write_PKIMESSAGE(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_1 == 0) {
    if (2 < opt_verbosity) {
      BIO_printf(_bio_err,"%s:%s:%d:CMP %s: NULL arg to write_PKIMESSAGE%s%s%s\n","write_PKIMESSAGE"
                 ,"apps/cmp.c",0x32d,"error",&_LC3,&_LC3,&_LC3);
      return 0;
    }
  }
  else {
    lVar1 = *param_2;
    if (lVar1 == 0) {
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,
                   "%s:%s:%d:CMP %s: not enough file names provided for writing PKIMessage%s%s%s\n",
                   "write_PKIMESSAGE","apps/cmp.c",0x331,"error",&_LC3,&_LC3,&_LC3);
        return 0;
      }
    }
    else {
      lVar3 = next_item(lVar1);
      *param_2 = lVar3;
      iVar2 = OSSL_CMP_MSG_write(lVar1,param_1);
      if (-1 < iVar2) {
        return 1;
      }
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: cannot write PKIMessage to file \'%s\'%s%s\n",
                   "write_PKIMESSAGE","apps/cmp.c",0x338,"error",lVar1,&_LC3,&_LC3);
        return 0;
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long read_PKIMESSAGE(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    if (2 < opt_verbosity) {
      BIO_printf(_bio_err,
                 "%s:%s:%d:CMP %s: not enough file names provided for reading PKIMessage%s%s%s\n",
                 "read_PKIMESSAGE","apps/cmp.c",0x349,"error",&_LC3,&_LC3,&_LC3);
      return 0;
    }
  }
  else {
    lVar2 = next_item(lVar1);
    *param_2 = lVar2;
    uVar3 = app_get0_propq();
    uVar4 = app_get0_libctx();
    lVar2 = OSSL_CMP_MSG_read(lVar1,uVar4,uVar3);
    if (lVar2 != 0) {
      if (opt_verbosity < 6) {
        return lVar2;
      }
      BIO_printf(_bio_out,"%s:%s:%d:CMP %s: %s %s%s\n","read_PKIMESSAGE","apps/cmp.c",0x354,&_LC12,
                 param_1,lVar1,&_LC3);
      return lVar2;
    }
    if (2 < opt_verbosity) {
      BIO_printf(_bio_err,"%s:%s:%d:CMP %s: cannot read PKIMessage from file \'%s\'%s%s\n",
                 "read_PKIMESSAGE","apps/cmp.c",0x352,"error",lVar1,&_LC3,&_LC3);
      return 0;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long read_write_req_resp(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = opt_rspin;
  if (opt_reqout_only != 0) {
    iVar2 = OSSL_CMP_MSG_write();
    if (iVar2 < 0) {
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: cannot write request PKIMessage to file \'%s\'%s%s\n",
                   "read_write_req_resp","apps/cmp.c",0x368,"error",opt_reqout_only,&_LC3,&_LC3);
      }
    }
    else {
      reqout_only_done = 1;
    }
    return 0;
  }
  if (opt_reqout == 0) {
    if (opt_reqin != 0) goto LAB_00100581;
LAB_001005ff:
    lVar7 = opt_reqin;
    if (opt_rspin != 0) goto LAB_0010058d;
LAB_00100604:
    if (opt_use_mock_srv == 0) {
      if (opt_server == 0) {
        lVar6 = 0;
        if (2 < opt_verbosity) {
          BIO_printf(_bio_err,
                     "%s:%s:%d:CMP %s: missing -server or -use_mock_srv option, or too few -rspin filename arguments%s%s%s\n"
                     ,"read_write_req_resp","apps/cmp.c",0x390,"error",&_LC3,&_LC3,&_LC3);
        }
        goto LAB_001005d2;
      }
      if ((rspin_in_use != 0) && (3 < opt_verbosity)) {
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: too few -rspin filename arguments; resorting to contacting server%s%s%s\n"
                   ,"read_write_req_resp","apps/cmp.c",0x394,"warning",&_LC3,&_LC3,&_LC3);
      }
      lVar3 = OSSL_CMP_MSG_http_perform(param_1,param_2);
    }
    else {
      if ((rspin_in_use != 0) && (3 < opt_verbosity)) {
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: too few -rspin filename arguments; resorting to using mock server%s%s%s\n"
                   ,"read_write_req_resp","apps/cmp.c",0x38b,"warning",&_LC3,&_LC3,&_LC3);
      }
      lVar3 = OSSL_CMP_CTX_server_perform(param_1,param_2);
    }
    rspin_in_use = 0;
  }
  else {
    iVar2 = write_PKIMESSAGE(param_2,&opt_reqout);
    if (iVar2 == 0) {
LAB_001006d0:
      lVar6 = 0;
      lVar7 = 0;
      goto LAB_001005d2;
    }
    if (opt_reqin == 0) goto LAB_001005ff;
LAB_00100581:
    lVar7 = 0;
    if (opt_rspin == 0) {
      param_2 = read_PKIMESSAGE("actually sending",&opt_reqin);
      if (param_2 == 0) goto LAB_001006d0;
      lVar6 = 0;
      lVar7 = param_2;
      if (((opt_reqin_new_tid != 0) &&
          (iVar2 = OSSL_CMP_MSG_update_transactionID(param_1,param_2), iVar2 == 0)) ||
         (iVar2 = OSSL_CMP_MSG_update_recipNonce(param_1,param_2), iVar2 == 0)) goto LAB_001005d2;
      if (opt_rspin == 0) goto LAB_00100604;
    }
LAB_0010058d:
    lVar3 = read_PKIMESSAGE("actually using",&opt_rspin);
  }
  lVar6 = lVar3;
  if (lVar3 == 0) goto LAB_001005d2;
  if (lVar1 == 0 && lVar7 == 0) {
LAB_001005b1:
    if ((opt_rspout == 0) || (iVar2 = write_PKIMESSAGE(lVar3,&opt_rspout), iVar2 != 0))
    goto LAB_001005d2;
  }
  else {
    uVar4 = OSSL_CMP_MSG_get0_header(lVar3);
    uVar5 = OSSL_CMP_HDR_get0_recipNonce(uVar4);
    uVar4 = OSSL_CMP_HDR_get0_transactionID(uVar4);
    iVar2 = OSSL_CMP_CTX_set1_senderNonce(param_1,uVar5);
    if ((iVar2 != 0) && (iVar2 = OSSL_CMP_CTX_set1_transactionID(param_1,uVar4), iVar2 != 0))
    goto LAB_001005b1;
  }
  lVar6 = 0;
  OSSL_CMP_MSG_free(lVar3);
LAB_001005d2:
  OSSL_CMP_MSG_free(lVar7);
  return lVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 set_fallback_pubkey(undefined8 param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  ushort **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  EVP_PKEY *pkey;
  ulong uVar9;
  byte *pbVar10;
  
  pbVar2 = opt_reqin;
  uVar9 = (ulong)*opt_reqin;
  pbVar10 = opt_reqin;
  if (*opt_reqin != 0x2c) {
    ppuVar4 = __ctype_b_loc();
    pbVar10 = pbVar2;
    do {
      if (((*(byte *)((long)*ppuVar4 + uVar9 * 2 + 1) & 0x20) != 0) || ((char)uVar9 == '\0')) break;
      pbVar1 = pbVar10 + 1;
      uVar9 = (ulong)*pbVar1;
      pbVar10 = pbVar10 + 1;
    } while (*pbVar1 != 0x2c);
  }
  *pbVar10 = 0;
  uVar5 = app_get0_propq();
  uVar6 = app_get0_libctx();
  lVar7 = OSSL_CMP_MSG_read(pbVar2,uVar6,uVar5);
  *pbVar10 = (byte)uVar9;
  if (lVar7 == 0) {
    if (2 < opt_verbosity) {
      BIO_printf(_bio_err,
                 "%s:%s:%d:CMP %s: failed to load ir/cr/kur file \'%s\' attempting to get fallback public key%s%s\n"
                 ,"set_fallback_pubkey","apps/cmp.c",0x67e,"error",pbVar2,&_LC3,&_LC3);
    }
    return 0;
  }
  lVar8 = OSSL_CMP_MSG_get0_certreq_publickey(lVar7);
  if ((lVar8 == 0) || (lVar8 = X509_PUBKEY_get0(lVar8), lVar8 == 0)) {
    if (2 < opt_verbosity) {
      uVar5 = 0;
      BIO_printf(_bio_err,
                 "%s:%s:%d:CMP %s: failed to get fallback public key from ir/cr/kur file \'%s\'%s%s\n"
                 ,"set_fallback_pubkey","apps/cmp.c",0x684,"error",pbVar2,&_LC3,&_LC3);
      goto LAB_00100994;
    }
  }
  else {
    pkey = (EVP_PKEY *)EVP_PKEY_dup(lVar8);
    uVar5 = 1;
    iVar3 = OSSL_CMP_CTX_set0_newPkey(param_1,0,pkey);
    if (iVar3 != 0) goto LAB_00100994;
    EVP_PKEY_free(pkey);
    if (2 < opt_verbosity) {
      uVar5 = 0;
      BIO_printf(_bio_err,
                 "%s:%s:%d:CMP %s: failed to get fallback public key obtained from ir/cr/kur file \'%s\'%s%s\n"
                 ,"set_fallback_pubkey","apps/cmp.c",0x68b,"error",pbVar2,&_LC3,&_LC3);
      goto LAB_00100994;
    }
  }
  uVar5 = 0;
LAB_00100994:
  OSSL_CMP_MSG_free(lVar7);
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 set_name(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  X509_NAME *a;
  
  if (param_1 == 0) {
    return 1;
  }
  a = (X509_NAME *)parse_name(param_1,0x1001,1);
  if (a != (X509_NAME *)0x0) {
    iVar1 = (*param_2)(param_3,a);
    if (iVar1 != 0) {
      X509_NAME_free(a);
      return 1;
    }
    X509_NAME_free(a);
    if (2 < opt_verbosity) {
      BIO_printf(_bio_err,"%s:%s:%d:CMP %s: out of memory%s%s%s\n","set_name","apps/cmp.c",0x3c4,
                 "error",&_LC3,&_LC3,&_LC3);
      return 0;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_keyspec(long param_1)

{
  int iVar1;
  uint uVar2;
  BIO_METHOD *type;
  BIO *bio;
  char *pcVar3;
  undefined8 uVar4;
  ASN1_OBJECT *o;
  X509_ALGOR *algor;
  ASN1_ITEM *it;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  int local_54;
  ASN1_OBJECT *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (5 < opt_verbosity) {
      BIO_printf(_bio_out,"%s:%s:%d:CMP %s: No %s%s%s\n","print_keyspec","apps/cmp.c",0xceb,&_LC12,
                 "specifications contained in keySpec from genp",&_LC3,&_LC3);
    }
  }
  else {
    type = BIO_s_mem();
    bio = BIO_new(type);
    if (bio == (BIO *)0x0) {
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: Out of memory - cannot dump key %s%s%s\n",
                   "print_keyspec","apps/cmp.c",0xcf1,"error",
                   "specifications contained in keySpec from genp",&_LC3,&_LC3);
      }
    }
    else {
      BIO_printf(bio,"Key %s:\n","specifications contained in keySpec from genp");
      for (iVar6 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar6 < iVar1; iVar6 = iVar6 + 1) {
        uVar4 = OPENSSL_sk_value(param_1,iVar6);
        o = (ASN1_OBJECT *)OSSL_CMP_ATAV_get0_type(uVar4);
        iVar1 = OBJ_obj2nid(o);
        if (iVar1 == 0x4eb) {
          algor = (X509_ALGOR *)OSSL_CMP_ATAV_get0_algId(uVar4);
          X509_ALGOR_get0(&local_50,&local_54,&local_48,algor);
          BIO_printf(bio,"Key algorithm: ");
          i2a_ASN1_OBJECT(bio,local_50);
          if ((local_54 == -1) || (algor->parameter == (ASN1_TYPE *)0x0)) {
            BIO_printf(bio,"\n");
          }
          else {
            BIO_printf(bio," - ");
            it = (ASN1_ITEM *)X509_ALGOR_it();
            ASN1_item_print(bio,(ASN1_VALUE *)algor,0,it,(ASN1_PCTX *)0x0);
          }
        }
        else if (iVar1 == 0x4ec) {
          uVar2 = OSSL_CMP_ATAV_get_rsaKeyLen(uVar4);
          BIO_printf(bio,"Key algorithm: RSA %d\n",(ulong)uVar2);
        }
        else {
          pcVar3 = OBJ_nid2ln(iVar1);
          if ((pcVar3 == (char *)0x0) && (pcVar3 = OBJ_nid2sn(iVar1), pcVar3 == (char *)0x0)) {
            pcVar3 = "<unknown OID>";
          }
          BIO_printf(bio,"Invalid key spec: %s\n",pcVar3);
        }
      }
      BIO_printf(bio,"End of key %s","specifications contained in keySpec from genp");
      lVar5 = BIO_ctrl(bio,3,0,&local_48);
      if (lVar5 < 0x80000000) {
        if (5 < opt_verbosity) {
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: %.*s%s\n","print_keyspec","apps/cmp.c",0xd1e,&_LC12,
                     lVar5,local_48,&_LC3);
        }
      }
      else if (2 < opt_verbosity) {
        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: Info too large - cannot dump key %s%s%s\n",
                   "print_keyspec","apps/cmp.c",0xd1c,"error",
                   "specifications contained in keySpec from genp",&_LC3,&_LC3);
      }
      BIO_free(bio);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong save_free_certs(long param_1,char *param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  BIO_METHOD *type;
  BIO *bp;
  long lVar3;
  X509 *x;
  char *pcVar4;
  ulong uVar5;
  char *format;
  undefined8 uVar6;
  int iVar7;
  char *pcVar8;
  
  uVar5 = 0;
  uVar1 = OPENSSL_sk_num();
  if (-1 < (int)uVar1) {
    uVar5 = (ulong)uVar1;
  }
  if (param_2 == (char *)0x0) {
    bp = (BIO *)0x0;
  }
  else {
    if ((param_1 != 0) && (5 < opt_verbosity)) {
      BIO_printf(_bio_out,"%s:%s:%d:CMP %s: received %d %s certificate(s), saving to file \'%s\'\n",
                 "save_free_certs","apps/cmp.c",0x960,&_LC12,uVar5,param_3,param_2);
    }
    if (((1 < (int)uVar1) && (opt_certform != 0x8005)) && (3 < opt_verbosity)) {
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: saving more than one certificate in non-PEM format%s%s%s\n",
                 "save_free_certs","apps/cmp.c",0x963,"warning",&_LC3,&_LC3,&_LC3);
    }
    type = BIO_s_file();
    bp = BIO_new(type);
    if ((bp == (BIO *)0x0) || (lVar3 = BIO_ctrl(bp,0x6c,5,param_2), (int)lVar3 == 0)) {
      if (opt_verbosity < 3) {
LAB_0010104f:
        uVar5 = 0xffffffff;
      }
      else {
        pcVar4 = "writing";
        uVar6 = 0x967;
        if (param_1 == 0) {
          pcVar4 = "deleting";
        }
        format = "%s:%s:%d:CMP %s: could not open file \'%s\' for %s %s certificate(s)\n";
        pcVar8 = param_2;
LAB_00101154:
        uVar5 = 0xffffffff;
        BIO_printf(_bio_err,format,"save_free_certs","apps/cmp.c",uVar6,"error",pcVar8,pcVar4,
                   param_3);
      }
    }
    else {
      iVar7 = 0;
      if ((int)uVar1 < 1) {
        uVar5 = 0;
      }
      else {
        do {
          x = (X509 *)OPENSSL_sk_value(param_1,iVar7);
          if (((opt_certform != 0x8005) || (iVar2 = PEM_write_bio_X509(bp,x), iVar2 == 0)) &&
             ((opt_certform != 4 || (iVar2 = i2d_X509_bio(bp,x), iVar2 == 0)))) {
            if ((opt_certform != 0x8005) && (opt_certform != 4)) {
              BIO_printf(_bio_err,"error: unsupported type \'%s\' for writing certificates\n",
                         opt_certform_s);
            }
            if (opt_verbosity < 3) goto LAB_0010104f;
            uVar6 = 0x96f;
            format = "%s:%s:%d:CMP %s: cannot write %s certificate to file \'%s\'%s\n";
            pcVar8 = param_3;
            pcVar4 = param_2;
            param_3 = "";
            goto LAB_00101154;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)uVar5);
      }
    }
  }
  BIO_free(bp);
  OSSL_STACK_OF_X509_free(param_1);
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * prev_item_part_0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  ushort **ppuVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *__src;
  ulong uVar6;
  
  pbVar2 = param_2;
  do {
    __src = pbVar2;
    if (__src <= param_1) {
      uVar6 = (long)param_2 - (long)__src;
      if (uVar6 < 0x29) {
        pvVar4 = memcpy(opt_item,__src,uVar6);
        *(undefined1 *)((long)pvVar4 + uVar6) = 0;
        return __src;
      }
      goto LAB_0010127c;
    }
    bVar1 = __src[-1];
  } while ((bVar1 != 0x2c) &&
          (ppuVar3 = __ctype_b_loc(), pbVar2 = __src + -1,
          (*(byte *)((long)*ppuVar3 + (ulong)bVar1 * 2 + 1) & 0x20) == 0));
  uVar6 = (long)param_2 - (long)__src;
  if (uVar6 < 0x29) {
    pvVar4 = memcpy(opt_item,__src,uVar6);
    *(undefined1 *)((long)pvVar4 + uVar6) = 0;
    pbVar2 = __src + -1;
  }
  else {
LAB_0010127c:
    if (3 < opt_verbosity) {
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: using only first %d characters of section name starting with \"%.*s\"\n"
                 ,"prev_item","apps/cmp.c",0xa24,"warning",0x28,0x28,__src);
    }
    opt_item._0_8_ = *(undefined8 *)__src;
    opt_item._8_8_ = *(undefined8 *)(__src + 8);
    opt_item._16_8_ = *(undefined8 *)(__src + 0x10);
    opt_item._24_8_ = *(undefined8 *)(__src + 0x18);
    opt_item._32_8_ = *(undefined8 *)(__src + 0x20);
    opt_item[0x28] = 0;
    if (__src <= param_1) {
      opt_item[0x28] = 0;
      return __src;
    }
    pbVar2 = __src + -1;
  }
  while ((pbVar5 = pbVar2, bVar1 = *pbVar5, bVar1 == 0x2c ||
         (ppuVar3 = __ctype_b_loc(), (*(byte *)((long)*ppuVar3 + (ulong)bVar1 * 2 + 1) & 0x20) != 0)
         )) {
    if (param_1 == pbVar5) {
      return param_1;
    }
    pbVar2 = pbVar5 + -1;
    __src = pbVar5;
  }
  return __src;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 delete_file(char *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
    return 1;
  }
  iVar1 = unlink(param_1);
  if ((iVar1 != 0) && (piVar2 = __errno_location(), *piVar2 != 2)) {
    if (opt_verbosity < 3) {
      return 0;
    }
    BIO_printf(_bio_err,
               "%s:%s:%d:CMP %s: Failed to delete %s, which should be done to indicate there is no %s%s\n"
               ,"delete_file","apps/cmp.c",0x99e,"error",param_1,param_2,&_LC3);
    return 0;
  }
  return 1;
}



uint save_cert_or_delete(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char acStack_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    uVar2 = 1;
  }
  else if (param_1 == 0) {
    BIO_snprintf(acStack_88,0x50,"%s certificate",param_3);
    uVar2 = delete_file(param_2,acStack_88);
  }
  else {
    uVar3 = OPENSSL_sk_new_null();
    iVar1 = X509_add_cert(uVar3,param_1,1);
    if (iVar1 == 0) {
      OPENSSL_sk_free(uVar3);
      uVar2 = 0;
    }
    else {
      uVar2 = save_free_certs(uVar3,param_2,param_3);
      uVar2 = ~uVar2 >> 0x1f;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSL_CTX * read_config(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  size_t sVar8;
  undefined *puVar9;
  SSL_CTX *pSVar10;
  char *pcVar11;
  undefined *puVar12;
  long lVar13;
  SSL_METHOD *meth;
  X509_STORE *pXVar14;
  X509_VERIFY_PARAM *param;
  EVP_PKEY *pkey;
  X509 *x509;
  undefined8 extraout_RDX;
  char *pcVar15;
  long lVar16;
  undefined8 uVar17;
  char *pcVar18;
  ulong uVar19;
  ulong *puVar20;
  long in_FS_OFFSET;
  X509 *pXStack_148;
  void *pvStack_140;
  long lStack_138;
  char *pcStack_128;
  long lStack_120;
  ulong uStack_118;
  char *pcStack_110;
  uint local_e8;
  char *local_e0;
  long local_d8;
  char *local_c0;
  undefined8 local_b8;
  char *local_b0;
  long local_a8;
  char local_98 [88];
  long local_40;
  
  uVar19 = 0xc2;
  lVar16 = 0x1124e8;
  pcVar15 = "verbosity";
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar4 = strcmp(pcVar15,&OPT_SECTION_STR);
    if ((iVar4 == 0) || (iVar4 = strcmp(pcVar15,&OPT_MORE_STR), iVar4 == 0)) {
      uVar19 = (ulong)((int)uVar19 - 1);
    }
    pcVar15 = *(char **)(lVar16 + 0x18);
    lVar16 = lVar16 + 0x18;
  } while (pcVar15 != (char *)0x0);
  if ((int)uVar19 == 0x9d) {
    local_e0 = (char *)0x0;
    puVar20 = (ulong *)(cmp_options + 0x48);
    pcVar15 = "verbosity";
    local_d8 = 0;
    local_e8 = 2;
    do {
      iVar4 = (int)puVar20[1];
      iVar5 = strcmp(pcVar15,&OPT_SECTION_STR);
      if ((iVar5 != 0) &&
         (iVar5 = strcmp(pcVar15,&OPT_MORE_STR), puVar12 = opt_section, uVar17 = conf, iVar5 != 0))
      {
        bVar2 = iVar4 - 2000U < 0x1f;
        bVar3 = iVar4 - 0x640U < 5;
        if ((iVar4 - 0x5dcU < 3) || (bVar2 || bVar3)) {
          uVar1 = *(uint *)((long)puVar20 + 0xc);
          local_e8 = local_e8 - 1;
          if (uVar1 != 0x2d) goto LAB_00101658;
LAB_00101758:
          sVar8 = strlen(opt_section);
          puVar9 = puVar12 + sVar8;
          do {
            if ((puVar12 == puVar9) ||
               (puVar9 = (undefined *)prev_item_part_0(puVar12,puVar9), puVar9 == (undefined *)0x0))
            goto LAB_001017b8;
            pcVar11 = (char *)app_conf_try_string(uVar17,opt_item,pcVar15);
          } while (pcVar11 == (char *)0x0);
          if (((*pcVar11 != '\0') &&
              (lVar16 = strtol(pcVar11,&local_c0,10),
              lVar16 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) && (*local_c0 == '\0')) {
            local_d8 = lVar16;
            if (*(int *)((long)puVar20 + 0xc) == 0x70) {
              if (0 < lVar16) {
                if (!bVar2 && !bVar3) goto LAB_001019a1;
                BIO_snprintf(local_98,0x51,"-%s",*puVar20);
                uVar17 = 2;
                local_b8 = prog;
                local_b0 = local_98;
                if (*(int *)((long)puVar20 + 0xc) == 0x2d) goto LAB_00101aa8;
LAB_00101a30:
                puVar9 = opt_section;
                uVar17 = conf;
                local_b0 = local_98;
                uVar19 = *puVar20;
                local_b8 = prog;
                sVar8 = strlen(opt_section);
                puVar12 = puVar9 + sVar8;
                do {
                  if ((puVar9 == puVar12) ||
                     (puVar12 = (undefined *)prev_item_part_0(puVar9,puVar12),
                     puVar12 == (undefined *)0x0)) {
                    lVar13 = 0;
                    break;
                  }
                  lVar13 = app_conf_try_string(uVar17,opt_item,uVar19);
                } while (lVar13 == 0);
                uVar17 = 3;
                local_a8 = lVar13;
LAB_00101aa8:
                opt_init(uVar17,&local_b8,cmp_options);
                uVar17 = vpm;
                if (iVar4 - 0x640U < 5) {
                  uVar6 = opt_next();
                  iVar4 = opt_provider(uVar6);
                }
                else {
                  uVar6 = opt_next();
                  iVar4 = opt_verify(uVar6,uVar17);
                }
                local_d8 = lVar16;
                if (iVar4 != 0) goto LAB_00101ad5;
                if (opt_verbosity < 3) goto LAB_001017dd;
                uStack_118 = *puVar20;
                lStack_120 = 0x101b6c;
                pcStack_110 = opt_section;
                BIO_printf(_bio_err,
                           "%s:%s:%d:CMP %s: for option \'%s\' in config file section \'%s\'%s\n",
                           "read_config","apps/cmp.c",0xabb,"error");
                pSVar10 = (SSL_CTX *)0x0;
                goto LAB_00101716;
              }
              opt_printf_stderr("Non-positive number \"%ld\" for config option -%s\n",lVar16,
                                *puVar20);
            }
            else {
              if ((*(int *)((long)puVar20 + 0xc) != 0x4e) || (-1 < lVar16)) goto LAB_00101842;
              opt_printf_stderr("Negative number \"%ld\" for config option -%s\n",lVar16,*puVar20);
            }
            pSVar10 = (SSL_CTX *)0xffffffff;
            goto LAB_00101716;
          }
LAB_001017b8:
          ERR_clear_error();
          local_e8 = local_e8 + 1;
        }
        else {
          uVar1 = *(uint *)((long)puVar20 + 0xc);
          if (uVar1 == 0x2d) goto LAB_00101758;
LAB_00101658:
          if (0x35 < uVar1 - 0x3e) {
LAB_001017d0:
            if (opt_verbosity < 3) {
LAB_001017dd:
              pSVar10 = (SSL_CTX *)0x0;
            }
            else {
              lStack_120 = 0x1018f7;
              uStack_118 = (ulong)uVar1;
              pcStack_110 = pcVar15;
              BIO_printf(_bio_err,
                         "%s:%s:%d:CMP %s: internal: unsupported type \'%c\' for option \'%s\'%s\n",
                         "read_config","apps/cmp.c",0xaa0,"error");
              pSVar10 = (SSL_CTX *)0x0;
            }
            goto LAB_00101716;
          }
          uVar19 = 1L << ((byte)(uVar1 - 0x3e) & 0x3f);
          if ((uVar19 & 0x5400000010000) != 0) goto LAB_00101758;
          if ((uVar19 & 0x20000000008001) == 0) goto LAB_001017d0;
          sVar8 = strlen(opt_section);
          puVar9 = puVar12 + sVar8;
          do {
            if ((puVar12 == puVar9) ||
               (puVar9 = (undefined *)prev_item_part_0(puVar12,puVar9), puVar9 == (undefined *)0x0))
            {
              ERR_clear_error();
              local_e8 = local_e8 + 1;
              local_e0 = (char *)0x0;
              goto LAB_00101700;
            }
            local_e0 = (char *)app_conf_try_string(uVar17,opt_item,pcVar15);
          } while (local_e0 == (char *)0x0);
LAB_00101842:
          if (bVar2 || bVar3) {
            BIO_snprintf(local_98,0x51,"-%s",*puVar20);
            local_b8 = prog;
            lVar16 = local_d8;
            if (*(int *)((long)puVar20 + 0xc) != 0x2d) goto LAB_00101a30;
            local_b0 = local_98;
            if (local_d8 != 0) {
              uVar17 = 2;
              goto LAB_00101aa8;
            }
            local_d8 = 0;
LAB_00101ad5:
            local_e8 = local_e8 + 1;
          }
          else {
            iVar4 = *(int *)((long)puVar20 + 0xc);
            if (iVar4 == 0x6c) {
              uVar19 = (ulong)local_e8;
              local_e8 = local_e8 + 1;
              **(long **)(cmp_vars + uVar19 * 8) = local_d8;
            }
            else {
              if (iVar4 < 0x6d) {
                if ((iVar4 == 0x2d) || (iVar4 == 0x4e)) {
LAB_001019a1:
                  if (local_d8 + 0x80000000U >> 0x20 == 0) {
                    uVar19 = (ulong)local_e8;
                    local_e8 = local_e8 + 1;
                    **(undefined4 **)(cmp_vars + uVar19 * 8) = (int)local_d8;
                    goto LAB_00101700;
                  }
                  BIO_printf(_bio_err,"integer value out of range for option \'%s\'\n",*puVar20);
                  pSVar10 = (SSL_CTX *)0x0;
                  goto LAB_00101716;
                }
              }
              else if ((iVar4 - 0x6eU & 0xfffffffd) == 0) goto LAB_001019a1;
              pcVar15 = local_e0;
              if ((local_e0 != (char *)0x0) && (pcVar15 = (char *)0x0, *local_e0 != '\0')) {
                pcVar15 = local_e0;
              }
              local_e0 = pcVar15;
              uVar19 = (ulong)local_e8;
              local_e8 = local_e8 + 1;
              **(undefined8 **)(cmp_vars + uVar19 * 8) = local_e0;
            }
          }
        }
      }
LAB_00101700:
      pcVar15 = (char *)puVar20[3];
      puVar20 = puVar20 + 3;
      if (pcVar15 == (char *)0x0) {
        pSVar10 = (SSL_CTX *)0x1;
LAB_00101716:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return pSVar10;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    } while( true );
  }
  pcVar11 = "apps/cmp.c";
  pcVar18 = 
  "assertion failed: OSSL_NELEM(cmp_vars) == n_options + OPT_PROV__FIRST + 1 - OPT_PROV__LAST + OPT_R__FIRST + 1 - OPT_R__LAST + OPT_V__FIRST + 1 - OPT_V__LAST"
  ;
  OPENSSL_die("assertion failed: OSSL_NELEM(cmp_vars) == n_options + OPT_PROV__FIRST + 1 - OPT_PROV__LAST + OPT_R__FIRST + 1 - OPT_R__LAST + OPT_V__FIRST + 1 - OPT_V__LAST"
              ,"apps/cmp.c",0xa6d);
  pcStack_110 = &OPT_MORE_STR;
  lStack_138 = *(long *)(in_FS_OFFSET + 0x28);
  pcStack_128 = pcVar15;
  lStack_120 = lVar16;
  uStack_118 = uVar19;
  uVar17 = OSSL_CMP_CTX_get0_untrusted();
  meth = (SSL_METHOD *)TLS_client_method();
  pSVar10 = SSL_CTX_new(meth);
  if (pSVar10 != (SSL_CTX *)0x0) {
    if (opt_tls_trusted == 0) {
      pXVar14 = (X509_STORE *)0x0;
      if (3 < opt_verbosity) {
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: -tls_used given without -tls_trusted; will not authenticate the TLS server%s%s%s\n"
                   ,"setup_ssl_ctx","apps/cmp.c",0x571,"warning",&_LC3,&_LC3,&_LC3);
        if ((opt_tls_cert != 0) && (opt_tls_key != 0)) goto LAB_00101caf;
        if (opt_verbosity < 4) goto LAB_00101f7b;
        pXVar14 = (X509_STORE *)0x0;
LAB_00101fe5:
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: -tls_used given without -tls_key; cannot authenticate to the TLS server%s%s%s\n"
                   ,"setup_ssl_ctx","apps/cmp.c",0x5e1,"warning",&_LC3,&_LC3,&_LC3);
LAB_00102015:
        if (pXVar14 == (X509_STORE *)0x0) goto LAB_00101f7b;
        goto LAB_00101f61;
      }
      if ((opt_tls_cert == 0) || (opt_tls_key == 0)) goto LAB_00101f7b;
LAB_00101caf:
      pvStack_140 = (void *)0x0;
      iVar4 = load_cert_certs(opt_tls_cert,&pXStack_148,&pvStack_140,0,opt_tls_keypass,
                              "TLS client certificate (optionally with chain)",vpm);
      if (iVar4 != 0) {
        iVar4 = SSL_CTX_use_certificate(pSVar10,pXStack_148);
        X509_free(pXStack_148);
        if ((iVar4 < 1) || (lVar16 = SSL_CTX_ctrl(pSVar10,0x58,0,pvStack_140), lVar16 == 0)) {
          if (2 < opt_verbosity) {
            BIO_printf(_bio_err,
                       "%s:%s:%d:CMP %s: unable to use client TLS certificate file \'%s\'%s%s\n",
                       "setup_ssl_ctx","apps/cmp.c",0x587,"error",opt_tls_cert,&_LC3,&_LC3);
          }
          OSSL_STACK_OF_X509_free(pvStack_140);
        }
        else {
          for (iVar4 = 0; iVar5 = OPENSSL_sk_num(uVar17), iVar4 < iVar5; iVar4 = iVar4 + 1) {
            pXStack_148 = (X509 *)OPENSSL_sk_value(uVar17,iVar4);
            lVar16 = SSL_CTX_ctrl(pSVar10,0x59,1,pXStack_148);
            if (lVar16 == 0) {
              if (2 < opt_verbosity) {
                BIO_printf(_bio_err,
                           "%s:%s:%d:CMP %s: could not add untrusted cert to TLS client cert chain%s%s%s\n"
                           ,"setup_ssl_ctx","apps/cmp.c",0x58f,"error",&_LC3,&_LC3,&_LC3);
              }
              goto LAB_00101fc0;
            }
          }
          if (pXVar14 == (X509_STORE *)0x0) {
            param = (X509_VERIFY_PARAM *)0x0;
            uVar19 = 0;
          }
          else {
            param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(pXVar14);
            uVar19 = X509_VERIFY_PARAM_get_flags(param);
            X509_VERIFY_PARAM_clear_flags(param,0xffffffffffd7ff7d);
          }
          if (6 < opt_verbosity) {
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: trying to build cert chain for own TLS cert%s%s%s\n",
                       "setup_ssl_ctx","apps/cmp.c",0x5a2,"debug",&_LC3,&_LC3,&_LC3);
          }
          lVar16 = SSL_CTX_ctrl(pSVar10,0x69,3,(void *)0x0);
          if (lVar16 == 0) {
            OSSL_CMP_CTX_print_errors(pcVar18);
            if (3 < opt_verbosity) {
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: could not build cert chain for own TLS cert%s%s%s\n",
                         "setup_ssl_ctx","apps/cmp.c",0x5a9,"warning",&_LC3,&_LC3,&_LC3);
            }
          }
          else if (6 < opt_verbosity) {
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: success building cert chain for own TLS cert%s%s%s\n",
                       "setup_ssl_ctx","apps/cmp.c",0x5a6,"debug",&_LC3,&_LC3,&_LC3);
          }
          if (pXVar14 != (X509_STORE *)0x0) {
            X509_VERIFY_PARAM_set_flags(param,uVar19);
          }
          if (opt_tls_extra == 0) {
LAB_00101e85:
            uVar6 = opt_keyform;
            lVar16 = opt_tls_key;
            uVar17 = get_passwd(opt_tls_keypass,"TLS client private key");
            pkey = (EVP_PKEY *)load_key(lVar16,uVar6,0,uVar17,extraout_RDX,"TLS client private key")
            ;
            clear_free(uVar17);
            cleanse(opt_tls_keypass);
            if (pkey != (EVP_PKEY *)0x0) {
              x509 = (X509 *)SSL_CTX_get0_certificate(pSVar10);
              iVar4 = X509_check_private_key(x509,pkey);
              if (iVar4 == 0) {
                if (2 < opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: TLS private key \'%s\' does not match the TLS certificate \'%s\'\n%s\n"
                             ,"setup_ssl_ctx","apps/cmp.c",0x5d3,"error",opt_tls_key,opt_tls_cert,
                             &_LC3);
                }
              }
              else {
                iVar4 = SSL_CTX_use_PrivateKey(pSVar10,pkey);
                if (0 < iVar4) {
                  EVP_PKEY_free(pkey);
                  goto LAB_00102015;
                }
                if (2 < opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: unable to use TLS client private key \'%s\'%s%s\n",
                             "setup_ssl_ctx","apps/cmp.c",0x5da,"error",opt_tls_key,&_LC3,&_LC3);
                }
              }
              EVP_PKEY_free(pkey);
            }
          }
          else {
            lVar16 = load_certs_multifile
                               (opt_tls_extra,opt_otherpass,"extra certificates for TLS",vpm);
            if (lVar16 != 0) {
              iVar4 = 1;
              for (iVar5 = 0; iVar7 = OPENSSL_sk_num(lVar16), iVar5 < iVar7; iVar5 = iVar5 + 1) {
                pXStack_148 = (X509 *)OPENSSL_sk_value(lVar16,iVar5);
                if (iVar4 == 0) {
LAB_00101e5d:
                  X509_free(pXStack_148);
                  iVar4 = 0;
                }
                else {
                  lVar13 = SSL_CTX_ctrl(pSVar10,0xe,0,pXStack_148);
                  iVar4 = (int)lVar13;
                  if (iVar4 == 0) goto LAB_00101e5d;
                }
              }
              OPENSSL_sk_free(lVar16);
              if (iVar4 != 0) goto LAB_00101e85;
              BIO_printf(_bio_err,"error: unable to add TLS extra certs\n");
            }
          }
        }
      }
    }
    else {
      pXVar14 = (X509_STORE *)load_trusted(opt_tls_trusted,0,"trusted TLS certs");
      if (pXVar14 == (X509_STORE *)0x0) goto LAB_00101fc0;
      SSL_CTX_set_cert_store(pSVar10,pXVar14);
      SSL_CTX_set_verify(pSVar10,1,(callback *)0x0);
      if ((opt_tls_cert != 0) && (opt_tls_key != 0)) goto LAB_00101caf;
      if (3 < opt_verbosity) goto LAB_00101fe5;
LAB_00101f61:
      pcVar15 = opt_tls_host;
      if (opt_tls_host == (char *)0x0) {
        pcVar15 = pcVar11;
      }
      iVar4 = truststore_set_host_etc(pXVar14,pcVar15);
      if (iVar4 != 0) goto LAB_00101f7b;
    }
LAB_00101fc0:
    SSL_CTX_free(pSVar10);
  }
  pSVar10 = (SSL_CTX *)0x0;
LAB_00101f7b:
  if (lStack_138 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSL_CTX * setup_ssl_ctx(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  SSL_METHOD *meth;
  SSL_CTX *ctx;
  X509_STORE *pXVar6;
  long lVar7;
  X509_VERIFY_PARAM *param;
  ulong flags;
  long lVar8;
  EVP_PKEY *pkey;
  X509 *x509;
  long in_FS_OFFSET;
  X509 *local_50;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = OSSL_CMP_CTX_get0_untrusted();
  meth = (SSL_METHOD *)TLS_client_method();
  ctx = SSL_CTX_new(meth);
  if (ctx != (SSL_CTX *)0x0) {
    if (opt_tls_trusted == 0) {
      pXVar6 = (X509_STORE *)0x0;
      if (3 < opt_verbosity) {
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: -tls_used given without -tls_trusted; will not authenticate the TLS server%s%s%s\n"
                   ,"setup_ssl_ctx","apps/cmp.c",0x571,"warning",&_LC3,&_LC3,&_LC3);
        if ((opt_tls_cert != 0) && (opt_tls_key != 0)) goto LAB_00101caf;
        if (opt_verbosity < 4) goto LAB_00101f7b;
        pXVar6 = (X509_STORE *)0x0;
LAB_00101fe5:
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: -tls_used given without -tls_key; cannot authenticate to the TLS server%s%s%s\n"
                   ,"setup_ssl_ctx","apps/cmp.c",0x5e1,"warning",&_LC3,&_LC3,&_LC3);
LAB_00102015:
        if (pXVar6 == (X509_STORE *)0x0) goto LAB_00101f7b;
        goto LAB_00101f61;
      }
      if ((opt_tls_cert == 0) || (opt_tls_key == 0)) goto LAB_00101f7b;
LAB_00101caf:
      local_48 = (void *)0x0;
      iVar2 = load_cert_certs(opt_tls_cert,&local_50,&local_48,0,opt_tls_keypass,
                              "TLS client certificate (optionally with chain)",vpm);
      if (iVar2 != 0) {
        iVar2 = SSL_CTX_use_certificate(ctx,local_50);
        X509_free(local_50);
        if ((iVar2 < 1) || (lVar7 = SSL_CTX_ctrl(ctx,0x58,0,local_48), lVar7 == 0)) {
          if (2 < opt_verbosity) {
            BIO_printf(_bio_err,
                       "%s:%s:%d:CMP %s: unable to use client TLS certificate file \'%s\'%s%s\n",
                       "setup_ssl_ctx","apps/cmp.c",0x587,"error",opt_tls_cert,&_LC3,&_LC3);
          }
          OSSL_STACK_OF_X509_free(local_48);
        }
        else {
          for (iVar2 = 0; iVar3 = OPENSSL_sk_num(uVar5), iVar2 < iVar3; iVar2 = iVar2 + 1) {
            local_50 = (X509 *)OPENSSL_sk_value(uVar5,iVar2);
            lVar7 = SSL_CTX_ctrl(ctx,0x59,1,local_50);
            if (lVar7 == 0) {
              if (2 < opt_verbosity) {
                BIO_printf(_bio_err,
                           "%s:%s:%d:CMP %s: could not add untrusted cert to TLS client cert chain%s%s%s\n"
                           ,"setup_ssl_ctx","apps/cmp.c",0x58f,"error",&_LC3,&_LC3,&_LC3);
              }
              goto LAB_00101fc0;
            }
          }
          if (pXVar6 == (X509_STORE *)0x0) {
            param = (X509_VERIFY_PARAM *)0x0;
            flags = 0;
          }
          else {
            param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(pXVar6);
            flags = X509_VERIFY_PARAM_get_flags(param);
            X509_VERIFY_PARAM_clear_flags(param,0xffffffffffd7ff7d);
          }
          if (6 < opt_verbosity) {
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: trying to build cert chain for own TLS cert%s%s%s\n",
                       "setup_ssl_ctx","apps/cmp.c",0x5a2,"debug",&_LC3,&_LC3,&_LC3);
          }
          lVar7 = SSL_CTX_ctrl(ctx,0x69,3,(void *)0x0);
          if (lVar7 == 0) {
            OSSL_CMP_CTX_print_errors(param_1);
            if (3 < opt_verbosity) {
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: could not build cert chain for own TLS cert%s%s%s\n",
                         "setup_ssl_ctx","apps/cmp.c",0x5a9,"warning",&_LC3,&_LC3,&_LC3);
            }
          }
          else if (6 < opt_verbosity) {
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: success building cert chain for own TLS cert%s%s%s\n",
                       "setup_ssl_ctx","apps/cmp.c",0x5a6,"debug",&_LC3,&_LC3,&_LC3);
          }
          if (pXVar6 != (X509_STORE *)0x0) {
            X509_VERIFY_PARAM_set_flags(param,flags);
          }
          if (opt_tls_extra == 0) {
LAB_00101e85:
            uVar1 = opt_keyform;
            lVar7 = opt_tls_key;
            uVar5 = get_passwd(opt_tls_keypass,"TLS client private key");
            pkey = (EVP_PKEY *)load_key(lVar7,uVar1,0,uVar5,param_3,"TLS client private key");
            clear_free(uVar5);
            cleanse(opt_tls_keypass);
            if (pkey != (EVP_PKEY *)0x0) {
              x509 = (X509 *)SSL_CTX_get0_certificate(ctx);
              iVar2 = X509_check_private_key(x509,pkey);
              if (iVar2 == 0) {
                if (2 < opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: TLS private key \'%s\' does not match the TLS certificate \'%s\'\n%s\n"
                             ,"setup_ssl_ctx","apps/cmp.c",0x5d3,"error",opt_tls_key,opt_tls_cert,
                             &_LC3);
                }
              }
              else {
                iVar2 = SSL_CTX_use_PrivateKey(ctx,pkey);
                if (0 < iVar2) {
                  EVP_PKEY_free(pkey);
                  goto LAB_00102015;
                }
                if (2 < opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: unable to use TLS client private key \'%s\'%s%s\n",
                             "setup_ssl_ctx","apps/cmp.c",0x5da,"error",opt_tls_key,&_LC3,&_LC3);
                }
              }
              EVP_PKEY_free(pkey);
            }
          }
          else {
            lVar7 = load_certs_multifile
                              (opt_tls_extra,opt_otherpass,"extra certificates for TLS",vpm);
            if (lVar7 != 0) {
              iVar2 = 1;
              for (iVar3 = 0; iVar4 = OPENSSL_sk_num(lVar7), iVar3 < iVar4; iVar3 = iVar3 + 1) {
                local_50 = (X509 *)OPENSSL_sk_value(lVar7,iVar3);
                if (iVar2 == 0) {
LAB_00101e5d:
                  X509_free(local_50);
                  iVar2 = 0;
                }
                else {
                  lVar8 = SSL_CTX_ctrl(ctx,0xe,0,local_50);
                  iVar2 = (int)lVar8;
                  if (iVar2 == 0) goto LAB_00101e5d;
                }
              }
              OPENSSL_sk_free(lVar7);
              if (iVar2 != 0) goto LAB_00101e85;
              BIO_printf(_bio_err,"error: unable to add TLS extra certs\n");
            }
          }
        }
      }
    }
    else {
      pXVar6 = (X509_STORE *)load_trusted(opt_tls_trusted,0,"trusted TLS certs");
      if (pXVar6 == (X509_STORE *)0x0) goto LAB_00101fc0;
      SSL_CTX_set_cert_store(ctx,pXVar6);
      SSL_CTX_set_verify(ctx,1,(callback *)0x0);
      if ((opt_tls_cert != 0) && (opt_tls_key != 0)) goto LAB_00101caf;
      if (3 < opt_verbosity) goto LAB_00101fe5;
LAB_00101f61:
      lVar7 = opt_tls_host;
      if (opt_tls_host == 0) {
        lVar7 = param_2;
      }
      iVar2 = truststore_set_host_etc(pXVar6,lVar7);
      if (iVar2 != 0) goto LAB_00101f7b;
    }
LAB_00101fc0:
    SSL_CTX_free(ctx);
  }
  ctx = (SSL_CTX *)0x0;
LAB_00101f7b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ctx;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 setup_protection_ctx(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  EVP_PKEY *pkey;
  long lVar7;
  X509_STORE *v;
  long in_FS_OFFSET;
  undefined8 uStack_60;
  X509 *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (opt_unprotected_requests == 0) {
    if (opt_secret == 0) {
      if (opt_key != 0) {
        if ((opt_ref == (char *)0x0) && (opt_cert == 0)) goto LAB_00102610;
        goto LAB_001024bd;
      }
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,
                   "%s:%s:%d:CMP %s: must give -key or -secret unless -unprotected_requests is used%s%s%s\n"
                   ,"setup_protection_ctx","apps/cmp.c",0x5fc,"error",&_LC3,&_LC3,&_LC3);
        uVar6 = 0;
        goto LAB_001029e4;
      }
    }
    else {
      if ((opt_ref != (char *)0x0) || (opt_cert != 0)) goto LAB_00102390;
LAB_00102610:
      if (opt_subject != 0) goto LAB_001024a6;
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,
                   "%s:%s:%d:CMP %s: must give -ref if no -cert and no -subject given%s%s%s\n",
                   "setup_protection_ctx","apps/cmp.c",0x602,"error",&_LC3,&_LC3,&_LC3);
        uVar6 = 0;
        goto LAB_001029e4;
      }
    }
  }
  else {
    if (opt_ref == (char *)0x0) {
      if (opt_cert == 0) goto LAB_00102610;
      if (opt_secret == 0) goto LAB_001024bd;
LAB_00102390:
      uStack_60 = 0x10239c;
      pcVar4 = (char *)get_passwd(opt_secret,"PBMAC");
      if (pcVar4 != (char *)0x0) {
        cleanse(opt_secret);
        sVar5 = strlen(pcVar4);
        iVar2 = OSSL_CMP_CTX_set1_secretValue(param_1,pcVar4,sVar5 & 0xffffffff);
        uStack_60 = 0x1023d0;
        clear_free(pcVar4);
        if (iVar2 == 0) goto LAB_0010248a;
      }
      if ((opt_cert != 0) || (opt_key != 0)) {
        if (3 < opt_verbosity) {
          BIO_printf(_bio_out,
                     "%s:%s:%d:CMP %s: -cert and -key not used for protection since -secret is given%s%s%s\n"
                     ,"setup_protection_ctx","apps/cmp.c",0x617,"warning",&_LC3,&_LC3,&_LC3);
        }
        goto LAB_001023f4;
      }
      if (opt_ref != (char *)0x0) goto LAB_00102400;
    }
    else {
LAB_001024a6:
      if (opt_secret != 0) goto LAB_00102390;
LAB_001024bd:
      if ((opt_cert == 0) != (opt_key == 0)) {
        if (2 < opt_verbosity) {
          BIO_printf(_bio_err,
                     "%s:%s:%d:CMP %s: must give both -cert and -key options or neither%s%s%s\n",
                     "setup_protection_ctx","apps/cmp.c",0x606,"error",&_LC3,&_LC3,&_LC3);
          uVar6 = 0;
          goto LAB_001029e4;
        }
        goto LAB_0010248a;
      }
LAB_001023f4:
      if (opt_ref != (char *)0x0) {
LAB_00102400:
        pcVar4 = opt_ref;
        sVar5 = strlen(opt_ref);
        uStack_60 = 0x102415;
        iVar2 = OSSL_CMP_CTX_set1_referenceValue(param_1,pcVar4,sVar5 & 0xffffffff);
        if (iVar2 == 0) goto LAB_0010248a;
      }
      lVar7 = opt_key;
      uVar1 = opt_keyform;
      if (opt_key != 0) {
        uVar6 = get_passwd(opt_keypass,"private key for CMP client certificate");
        pkey = (EVP_PKEY *)
               load_key(lVar7,uVar1,0,uVar6,param_2,"private key for CMP client certificate");
        clear_free(uVar6);
        if ((pkey == (EVP_PKEY *)0x0) || (iVar2 = OSSL_CMP_CTX_set1_pkey(param_1,pkey), iVar2 == 0))
        {
          EVP_PKEY_free(pkey);
          goto LAB_0010248a;
        }
        uStack_60 = 0x102538;
        EVP_PKEY_free(pkey);
      }
    }
    if ((((opt_secret == 0) && (opt_srvcert == 0)) && (opt_trusted == 0)) && (3 < opt_verbosity)) {
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: will not authenticate server due to missing -secret, -trusted, or -srvcert%s%s%s\n"
                 ,"setup_protection_ctx","apps/cmp.c",0x629,"warning",&_LC3,&_LC3,&_LC3);
    }
    if (opt_cert == 0) {
      if ((opt_own_trusted != (X509_STORE *)0x0) && (3 < opt_verbosity)) {
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -own_trusted option is ignored without -cert%s%s%s\n",
                   "setup_protection_ctx","apps/cmp.c",0x647,"warning",&_LC3,&_LC3,&_LC3);
      }
LAB_001026cf:
      if (opt_extracerts == 0) {
LAB_0010272d:
        cleanse(opt_otherpass);
        if (opt_unprotected_requests != 0) {
          OSSL_CMP_CTX_set_option(param_1,0x1e,1);
        }
        if (opt_digest == (char *)0x0) {
LAB_00102860:
          if (opt_mac != (char *)0x0) {
            iVar2 = OBJ_ln2nid(opt_mac);
            if (iVar2 == 0) {
              if (2 < opt_verbosity) {
                BIO_printf(_bio_err,
                           "%s:%s:%d:CMP %s: MAC algorithm name not recognized: \'%s\'%s%s\n",
                           "setup_protection_ctx","apps/cmp.c",0x664,"error",opt_mac,&_LC3,&_LC3);
                uVar6 = 0;
                goto LAB_001029e4;
              }
              goto LAB_0010248a;
            }
            OSSL_CMP_CTX_set_option(param_1,0x21,iVar2);
          }
          uVar6 = 1;
          goto LAB_001029e4;
        }
        iVar2 = OBJ_ln2nid(opt_digest);
        if (iVar2 == 0) {
          if (2 < opt_verbosity) {
            BIO_printf(_bio_err,
                       "%s:%s:%d:CMP %s: digest algorithm name not recognized: \'%s\'%s%s\n",
                       "setup_protection_ctx","apps/cmp.c",0x656,"error",opt_digest,&_LC3,&_LC3);
            uVar6 = 0;
            goto LAB_001029e4;
          }
        }
        else {
          iVar3 = OSSL_CMP_CTX_set_option(param_1,0x22,iVar2);
          if ((iVar3 != 0) && (iVar2 = OSSL_CMP_CTX_set_option(param_1,0x20,iVar2), iVar2 != 0))
          goto LAB_00102860;
          if (2 < opt_verbosity) {
            BIO_printf(_bio_err,"%s:%s:%d:CMP %s: digest algorithm name not supported: \'%s\'%s%s\n"
                       ,"setup_protection_ctx","apps/cmp.c",0x65b,"error",opt_digest,&_LC3,&_LC3);
            uVar6 = 0;
            goto LAB_001029e4;
          }
        }
      }
      else {
        lVar7 = load_certs_multifile(opt_extracerts,opt_otherpass,"extra certificates for CMP",vpm);
        if (lVar7 != 0) {
          iVar2 = OSSL_CMP_CTX_set1_extraCertsOut(param_1,lVar7);
          OSSL_STACK_OF_X509_free(lVar7);
          if (iVar2 != 0) goto LAB_0010272d;
        }
      }
    }
    else {
      local_48 = 0;
      uVar6 = vpm;
      iVar2 = load_cert_certs(opt_cert,&local_50,&local_48,0,opt_keypass,
                              "CMP client certificate (optionally with chain)");
      if (iVar2 != 0) {
        iVar2 = OSSL_CMP_CTX_set1_cert(param_1,local_50,uVar6,uStack_60);
        X509_free(local_50);
        if (iVar2 == 0) {
          if (2 < opt_verbosity) {
            BIO_printf(_bio_err,"%s:%s:%d:CMP %s: out of memory%s%s%s\n","setup_protection_ctx",
                       "apps/cmp.c",0x639,"error",&_LC3,&_LC3,&_LC3);
            X509_STORE_free((X509_STORE *)0x0);
            OSSL_STACK_OF_X509_free(local_48);
            uVar6 = 0;
            goto LAB_001029e4;
          }
LAB_001025c0:
          v = (X509_STORE *)0x0;
        }
        else {
          v = opt_own_trusted;
          if ((opt_own_trusted != (X509_STORE *)0x0) &&
             (v = (X509_STORE *)
                  load_trusted(opt_own_trusted,0,"trusted certs for verifying own CMP signer cert"),
             v == (X509_STORE *)0x0)) goto LAB_001025c0;
          iVar2 = OSSL_CMP_CTX_build_cert_chain(param_1,v,local_48);
          if (iVar2 != 0) {
            X509_STORE_free(v);
            OSSL_STACK_OF_X509_free(local_48);
            goto LAB_001026cf;
          }
        }
        X509_STORE_free(v);
        OSSL_STACK_OF_X509_free(local_48);
        uVar6 = 0;
        goto LAB_001029e4;
      }
    }
  }
LAB_0010248a:
  uVar6 = 0;
LAB_001029e4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong setup_client_ctx(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                      char *param_5,char *param_6)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  ASN1_INTEGER *pAVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  X509 *pXVar8;
  X509_STORE *v;
  undefined8 *puVar9;
  X509_VERIFY_PARAM *param;
  ulong uVar10;
  ASN1_INTEGER *pAVar11;
  EVP_PKEY *pkey;
  long lVar12;
  X509_REQ *req;
  GENERAL_NAME *a;
  POLICYINFO *a_00;
  ushort **ppuVar13;
  char *pcVar14;
  ASN1_OBJECT *pAVar15;
  ASN1_TYPE *a_01;
  ASN1_UTF8STRING *pAVar16;
  size_t sVar17;
  char *pcVar18;
  ushort *puVar19;
  char *pcVar20;
  char *pcVar21;
  BIO *pBVar22;
  undefined8 uVar23;
  BIO *in_R11;
  byte *pbVar24;
  long in_FS_OFFSET;
  undefined *puVar25;
  undefined4 local_2b0;
  int local_2ac;
  char *local_2a8;
  char *local_2a0;
  char *local_298;
  stack_st_X509_EXTENSION *local_290;
  X509V3_CTX local_288;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined4 local_1e8;
  char local_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  long local_40;
  
  pcVar18 = opt_path;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2a8 = (char *)0x0;
  local_1d8 = (char  [8])_LC203._0_8_;
  uStack_1d0 = ram0x00113708;
  local_2a0 = (char *)0x0;
  local_298 = (char *)0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1b8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  puVar9 = (undefined8 *)(ulong)opt_use_mock_srv;
  local_118 = 0;
  local_48 = 0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (opt_use_mock_srv == 0) {
    param_5 = (char *)0x72;
    builtin_strncpy(local_1d8,"no serve",8);
    uStack_1d0 = CONCAT62((int6)((ulong)ram0x00113708 >> 0x10),0x72);
    if (opt_rspin != 0) goto LAB_00102cc7;
    if (opt_server != (char *)0x0) goto LAB_00102cd0;
    if (opt_reqout_only != 0) goto LAB_00102fa0;
    if (opt_verbosity < 3) goto LAB_00102dac;
    uVar23 = 0x870;
    pcVar20 = "setup_client_ctx";
    pcVar14 = "%s:%s:%d:CMP %s: missing -server or -use_mock_srv or -rspin option%s%s%s\n";
    pcVar18 = "";
LAB_001038b0:
    BIO_printf(_bio_err,pcVar14,pcVar20,"apps/cmp.c",uVar23,"error",pcVar18,&_LC3,&_LC3);
    goto LAB_00102dac;
  }
LAB_00102cc7:
  if (opt_server == (char *)0x0) {
LAB_00102fa0:
    if (opt_proxy == 0) {
LAB_00102fff:
      if ((opt_no_proxy != 0) && (3 < opt_verbosity)) {
        param_6 = "warning";
        param_5 = (char *)0x87d;
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: ignoring -no_proxy option since -server is not given%s%s%s\n",
                   "setup_client_ctx","apps/cmp.c",0x87d,"warning",&_LC3,&_LC3,&_LC3);
      }
    }
    else if (3 < opt_verbosity) {
      param_6 = "warning";
      param_5 = (char *)0x87b;
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: ignoring -proxy option since -server is not given%s%s%s\n",
                 "setup_client_ctx","apps/cmp.c",0x87b,"warning",&_LC3,&_LC3,&_LC3);
      goto LAB_00102fff;
    }
    lVar12 = 0;
LAB_00103056:
    iVar6 = OSSL_CMP_CTX_set1_serverPath(param_1,pcVar18);
    pbVar24 = opt_cmd_s;
    if (iVar6 == 0) goto LAB_00102d97;
    if (opt_cmd_s == (byte *)0x0) {
      if (opt_verbosity < 3) goto LAB_00102da4;
      uVar23 = 0x44a;
      pcVar18 = "transform_opts";
      pcVar20 = "%s:%s:%d:CMP %s: no cmp command to execute%s%s%s\n";
      puVar25 = &_LC3;
      pbVar24 = &_LC3;
      goto LAB_001039d4;
    }
    bVar2 = *opt_cmd_s;
    if (((bVar2 != 0x69) || (opt_cmd_s[1] != 0x72)) ||
       (uVar5 = (uint)opt_cmd_s[2], opt_cmd_s[2] != 0)) {
      iVar6 = strcmp((char *)opt_cmd_s,"kur");
      if (iVar6 == 0) {
        uVar5 = 1;
      }
      else if (((bVar2 != 99) || (pbVar24[1] != 0x72)) || (uVar5 = 2, pbVar24[2] != 0)) {
        iVar6 = strcmp((char *)pbVar24,"p10cr");
        if (iVar6 == 0) {
          uVar5 = 3;
        }
        else if (((bVar2 != 0x72) || (pbVar24[1] != 0x72)) || (uVar5 = 4, pbVar24[2] != 0)) {
          iVar6 = strcmp((char *)pbVar24,"genm");
          uVar5 = 5;
          if (iVar6 != 0) {
            if (2 < opt_verbosity) {
              uVar23 = 0x446;
              pcVar18 = "transform_opts";
              pcVar20 = "%s:%s:%d:CMP %s: unknown cmp command \'%s\'%s%s\n";
              puVar25 = &_LC3;
              goto LAB_001039d4;
            }
            goto LAB_00102da4;
          }
        }
      }
    }
    opt_cmd = uVar5;
    if (opt_keyform_s != 0) {
      uVar5 = opt_format(opt_keyform_s,0x56,&opt_keyform);
      puVar9 = (undefined8 *)(ulong)uVar5;
      if (uVar5 == 0) {
        if (opt_verbosity < 3) goto LAB_00102dac;
        uVar23 = 0x456;
        pcVar20 = "transform_opts";
        pcVar14 = "%s:%s:%d:CMP %s: unknown option given for key loading format%s%s%s\n";
        pcVar18 = "";
        goto LAB_001038b0;
      }
    }
    if (opt_certform_s != (undefined *)0x0) {
      uVar5 = opt_format(opt_certform_s,6,&opt_certform);
      puVar9 = (undefined8 *)(ulong)uVar5;
      if (uVar5 == 0) {
        if (opt_verbosity < 3) goto LAB_00102dac;
        uVar23 = 0x45e;
        pcVar20 = "transform_opts";
        pcVar14 = "%s:%s:%d:CMP %s: unknown option given for certificate storing format%s%s%s\n";
        pcVar18 = "";
        goto LAB_001038b0;
      }
    }
    if (opt_crlform_s != (undefined *)0x0) {
      uVar5 = opt_format(opt_crlform_s,6,&opt_crlform);
      puVar9 = (undefined8 *)(ulong)uVar5;
      if (uVar5 == 0) {
        if (opt_verbosity < 3) goto LAB_00102dac;
        uVar23 = 0x463;
        pcVar20 = "transform_opts";
        pcVar14 = "%s:%s:%d:CMP %s: unknown option given for CRL storing format%s%s%s\n";
        pcVar18 = "";
        goto LAB_001038b0;
      }
    }
    if (opt_infotype_s == 0) {
      if (opt_cmd == 5) {
        if (3 < opt_verbosity) {
          param_6 = "warning";
          param_5 = (char *)0x8a9;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: no -infotype option given for genm%s%s%s\n",
                     "setup_client_ctx","apps/cmp.c",0x8a9,"warning",&_LC3,&_LC3,&_LC3);
          goto LAB_00103eb9;
        }
        goto LAB_00103c36;
      }
LAB_0010314a:
      if ((opt_oldwithold != 0) && (3 < opt_verbosity)) {
        param_6 = "warning";
        param_5 = (char *)0x8b9;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -oldwithold %s%s%s\n","setup_client_ctx","apps/cmp.c",
                   0x8b9,"warning",
                   "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given",&_LC3,
                   &_LC3);
      }
      if (opt_newwithnew == 0) {
LAB_00103b07:
        if (opt_newwithold != 0) {
          if (opt_verbosity < 4) goto LAB_0010318a;
          param_6 = "warning";
          param_5 = (char *)0x8bd;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -newwithold %s%s%s\n","setup_client_ctx",
                     "apps/cmp.c",0x8bd,"warning",
                     "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given",
                     &_LC3,&_LC3);
        }
LAB_00103b65:
        if ((opt_oldwithnew != 0) && (3 < opt_verbosity)) {
          param_6 = "warning";
          param_5 = (char *)0x8bf;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -oldwithnew %s%s%s\n","setup_client_ctx",
                     "apps/cmp.c",0x8bf,"warning",
                     "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given",
                     &_LC3,&_LC3);
        }
      }
      else {
        if (3 < opt_verbosity) {
          param_6 = "warning";
          param_5 = (char *)0x8bb;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -newwithnew %s%s%s\n","setup_client_ctx",
                     "apps/cmp.c",0x8bb,"warning",
                     "option is ignored unless -cmd \'genm\' and -infotype rootCaCert is given",
                     &_LC3,&_LC3);
          goto LAB_00103b07;
        }
        if (opt_newwithold == 0) goto LAB_00103b65;
      }
LAB_0010318a:
      if ((opt_cmd != 5) || (opt_infotype != 0x4c9)) goto LAB_00103197;
      if ((opt_template == 0) && (2 < opt_verbosity)) {
        param_5 = (char *)0x8ca;
        param_6 = "error";
        BIO_printf(_bio_err,
                   "%s:%s:%d:CMP %s: missing -template option for genm with infotype certReqTemplate%s%s%s\n"
                   ,"setup_client_ctx","apps/cmp.c",0x8ca,"error",&_LC3,&_LC3,&_LC3);
      }
    }
    else {
      if (opt_cmd == 5) {
        local_240 = 0;
        local_238 = (undefined1  [16])0x0;
        local_228 = (undefined1  [16])0x0;
        local_218 = (undefined1  [16])0x0;
        local_208 = (undefined1  [16])0x0;
        local_1f8 = (undefined1  [16])0x0;
        local_248 = 0x2d74692d6469;
        local_1e8 = 0;
        pcVar18 = (char *)__strncat_chk(&local_248,opt_infotype_s,0x5d,100);
        opt_infotype = OBJ_sn2nid(pcVar18);
        puVar9 = (undefined8 *)(ulong)opt_infotype;
        if (opt_infotype == 0) {
          if (2 < opt_verbosity) {
            BIO_printf(_bio_err,"%s:%s:%d:CMP %s: unknown OID name in -infotype option%s%s%s\n",
                       "setup_client_ctx","apps/cmp.c",0x8b1,"error",&_LC3,&_LC3,&_LC3);
          }
          goto LAB_00102dac;
        }
      }
      else {
        if (opt_verbosity < 4) goto LAB_0010314a;
        param_6 = "warning";
        param_5 = (char *)0x8ab;
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: -infotype option is ignored for commands other than \'genm\'%s%s%s\n"
                   ,"setup_client_ctx","apps/cmp.c",0x8ab,"warning",&_LC3,&_LC3,&_LC3);
      }
LAB_00103eb9:
      if (opt_cmd != 5) goto LAB_0010314a;
LAB_00103c36:
      if (opt_infotype != 0x4e6) goto LAB_0010314a;
LAB_00103197:
      if (opt_template != 0) {
        if (opt_verbosity < 4) goto LAB_001031b2;
        param_6 = "warning";
        param_5 = (char *)0x8c5;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -template %s%s%s\n","setup_client_ctx","apps/cmp.c",
                   0x8c5,"warning",
                   "option is ignored unless -cmd \'genm\' and -infotype \'certReqTemplate\' is given"
                   ,&_LC3,&_LC3);
      }
      if ((opt_keyspec != 0) && (3 < opt_verbosity)) {
        param_6 = "warning";
        param_5 = (char *)0x8c7;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -keyspec %s%s%s\n","setup_client_ctx","apps/cmp.c",
                   0x8c7,"warning",
                   "option is ignored unless -cmd \'genm\' and -infotype \'certReqTemplate\' is given"
                   ,&_LC3,&_LC3);
      }
    }
LAB_001031b2:
    if (opt_untrusted != 0) {
      lVar7 = load_certs_multifile(opt_untrusted,opt_otherpass,"untrusted certificates",vpm);
      if (lVar7 == 0) goto LAB_00102da4;
      uVar5 = OSSL_CMP_CTX_set1_untrusted(param_1,lVar7);
      puVar9 = (undefined8 *)(ulong)uVar5;
      OSSL_STACK_OF_X509_free(lVar7);
      if (uVar5 == 0) goto LAB_00102dac;
    }
    if (opt_srvcert == 0) {
LAB_001032d6:
      if ((opt_trusted != 0) &&
         ((v = (X509_STORE *)load_trusted(opt_trusted,0,"certs trusted by client"),
          v == (X509_STORE *)0x0 || (iVar6 = OSSL_CMP_CTX_set0_trustedStore(param_1,v), iVar6 == 0))
         )) {
        puVar9 = (undefined8 *)0x0;
        X509_STORE_free(v);
        goto LAB_00102dac;
      }
    }
    else {
      if (opt_trusted == 0) {
        if (opt_recipient != 0) goto LAB_00103249;
LAB_00103274:
        lVar7 = opt_srvcert;
        uVar23 = get_passwd(opt_otherpass,"directly trusted CMP server certificate");
        param_5 = "directly trusted CMP server certificate";
        pXVar8 = (X509 *)load_cert_pass(lVar7,0,0,uVar23);
        clear_free(uVar23);
        if (pXVar8 == (X509 *)0x0) goto LAB_00102da4;
        uVar5 = OSSL_CMP_CTX_set1_srvCert(param_1,pXVar8);
        puVar9 = (undefined8 *)(ulong)uVar5;
        X509_free(pXVar8);
        if (uVar5 == 0) goto LAB_00102dac;
        goto LAB_001032d6;
      }
      if (3 < opt_verbosity) {
        param_6 = "warning";
        param_5 = (char *)0x521;
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: -trusted option is ignored since -srvcert option is present%s%s%s\n"
                   ,"setup_verification_ctx","apps/cmp.c",0x521,"warning",&_LC3,&_LC3,&_LC3);
      }
      opt_trusted = 0;
      if (opt_recipient != 0) {
LAB_00103249:
        if (3 < opt_verbosity) {
          param_6 = "warning";
          param_5 = (char *)0x525;
          BIO_printf(_bio_out,
                     "%s:%s:%d:CMP %s: -recipient option is ignored since -srvcert option is present%s%s%s\n"
                     ,"setup_verification_ctx","apps/cmp.c",0x525,"warning",&_LC3,&_LC3,&_LC3);
        }
        opt_recipient = 0;
        if (opt_srvcert == 0) goto LAB_001032d6;
        goto LAB_00103274;
      }
      if (opt_srvcert != 0) goto LAB_00103274;
    }
    if (opt_unprotected_errors != 0) {
      OSSL_CMP_CTX_set_option(param_1,0x1f,1);
    }
    if (opt_out_trusted != 0) {
      puVar9 = (undefined8 *)
               load_trusted(opt_out_trusted,1,"trusted certs for verifying newly enrolled cert");
      if (puVar9 == (undefined8 *)0x0) goto LAB_00102dac;
      param = (X509_VERIFY_PARAM *)X509_STORE_get0_param(puVar9);
      X509_VERIFY_PARAM_clear_flags(param,2);
      OSSL_CMP_CTX_set_certConf_cb_arg(param_1,puVar9);
    }
    pAVar11 = (ASN1_INTEGER *)(ulong)opt_disable_confirm;
    if (opt_disable_confirm != 0) {
      OSSL_CMP_CTX_set_option(param_1,0x1a,1);
    }
    if (opt_implicit_confirm != 0) {
      OSSL_CMP_CTX_set_option(param_1,0x19,1);
    }
    if (opt_keep_alive != 1) {
      OSSL_CMP_CTX_set_option(param_1,10);
    }
    pbVar24 = (byte *)(ulong)opt_total_timeout;
    puVar25 = (undefined *)(ulong)opt_msg_timeout;
    if ((int)opt_total_timeout < 1) {
      if (-1 < (int)opt_msg_timeout) {
LAB_00103d58:
        OSSL_CMP_CTX_set_option(param_1,0xb,puVar25);
      }
      if (-1 < (int)opt_total_timeout) goto LAB_001033bb;
    }
    else {
      if ((int)opt_total_timeout < (int)opt_msg_timeout) {
        if (2 < opt_verbosity) {
          uVar23 = 0x8d5;
          pcVar20 = 
          "%s:%s:%d:CMP %s: -total_timeout argument = %d must not be < %d (-msg_timeout)%s\n";
          pcVar18 = "setup_client_ctx";
          goto LAB_001039d4;
        }
        goto LAB_00102da4;
      }
      if (-1 < (int)opt_msg_timeout) goto LAB_00103d58;
LAB_001033bb:
      OSSL_CMP_CTX_set_option(param_1,0xc);
    }
    if (opt_rspin == 0) {
LAB_00103cd8:
      in_R11 = (BIO *)(ulong)opt_reqin_new_tid;
      if (opt_reqin_new_tid != 0) {
        if (opt_reqin == 0) {
LAB_00103cf1:
          if (3 < opt_verbosity) {
            param_6 = "warning";
            param_5 = (char *)0x8e6;
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: -reqin_new_tid is ignored since -reqin is not present%s%s%s\n"
                       ,"setup_client_ctx","apps/cmp.c",0x8e6,"warning",&_LC3,&_LC3,&_LC3);
            goto LAB_00103f60;
          }
          goto LAB_00103cfe;
        }
        goto LAB_001033fd;
      }
LAB_00103f60:
      if (opt_reqin != 0) goto LAB_001033fd;
LAB_00103cfe:
      if ((((opt_reqout != 0) || (opt_rspin != 0)) || (opt_rspout != 0)) || (opt_use_mock_srv != 0))
      goto LAB_001033fd;
    }
    else {
      rspin_in_use = 1;
      if (opt_reqin == 0) {
        if (opt_reqin_new_tid != 0) goto LAB_00103cf1;
      }
      else if (3 < opt_verbosity) {
        param_6 = "warning";
        param_5 = (char *)0x8e3;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -reqin is ignored since -rspin is present%s%s%s\n",
                   "setup_client_ctx","apps/cmp.c",0x8e3,"warning",&_LC3,&_LC3,&_LC3);
        goto LAB_00103cd8;
      }
LAB_001033fd:
      OSSL_CMP_CTX_set_transfer_cb(param_1,read_write_req_resp);
    }
    pAVar16 = (ASN1_UTF8STRING *)(ulong)opt_tls_used;
    if (opt_tls_used != 0) {
      if (opt_tls_cert == 0) {
        if (opt_tls_key != 0) {
          if (2 < opt_verbosity) {
            uVar23 = 0x8f5;
            pcVar18 = "setup_client_ctx";
            pcVar20 = "%s:%s:%d:CMP %s: missing -tls_cert option%s%s%s\n";
            puVar25 = &_LC3;
            pbVar24 = &_LC3;
            goto LAB_001039d4;
          }
          goto LAB_00102da4;
        }
        if (opt_tls_keypass != 0) goto LAB_001041b2;
      }
      else if (opt_tls_key == 0) {
LAB_001041b2:
        if (2 < opt_verbosity) {
          uVar23 = 0x8f2;
          pcVar18 = "setup_client_ctx";
          pcVar20 = "%s:%s:%d:CMP %s: missing -tls_key option%s%s%s\n";
          puVar25 = &_LC3;
          pbVar24 = &_LC3;
          goto LAB_001039d4;
        }
        goto LAB_00102da4;
      }
      puVar9 = (undefined8 *)CRYPTO_zalloc(0x28,"apps/cmp.c",0x8fa);
      if (puVar9 == (undefined8 *)0x0) goto LAB_00102dac;
      uVar23 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
      APP_HTTP_TLS_INFO_free(uVar23);
      OSSL_CMP_CTX_set_http_cb_arg(param_1,puVar9);
      uVar23 = setup_ssl_ctx(param_1,local_2a8,param_2);
      pcVar18 = local_2a8;
      puVar9[4] = uVar23;
      local_2a8 = (char *)0x0;
      *puVar9 = pcVar18;
      pcVar18 = CRYPTO_strdup(server_port_21,"apps/cmp.c",0x901);
      puVar9[1] = pcVar18;
      if (pcVar18 != (char *)0x0) {
        *(uint *)(puVar9 + 2) = (uint)(lVar12 != 0);
        iVar6 = OSSL_CMP_CTX_get_option(param_1,0xb);
        puVar9[3] = (long)iVar6;
        if (puVar9[4] != 0) {
          OSSL_CMP_CTX_set_http_cb(param_1,&app_http_tls_cb);
          goto LAB_001034f3;
        }
      }
      goto LAB_00102da4;
    }
LAB_001034f3:
    uVar5 = setup_protection_ctx(param_1,param_2);
    puVar9 = (undefined8 *)(ulong)uVar5;
    if (uVar5 == 0) goto LAB_00102dac;
    local_290 = (stack_st_X509_EXTENSION *)0x0;
    pcVar18 = param_6;
    if ((((opt_subject == 0) && (opt_csr == 0)) &&
        ((opt_oldcert == 0 && ((opt_cert == 0 && (1 < opt_cmd - 4)))))) && (3 < opt_verbosity)) {
      pcVar18 = "warning";
      param_5 = (char *)0x6a4;
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: no -subject given; no -csr or -oldcert or -cert available for fallback%s%s%s\n"
                 ,"setup_request_ctx","apps/cmp.c",0x6a4,"warning",&_LC3,&_LC3,&_LC3,param_6);
    }
    uVar10 = set_name(opt_issuer,&OSSL_CMP_CTX_set1_issuer,param_1);
    puVar9 = (undefined8 *)(uVar10 & 0xffffffff);
    if ((int)uVar10 == 0) goto LAB_00102dac;
    if (2 < opt_cmd) {
      if (opt_subject != 0) {
        if ((opt_ref == 0) && (opt_cert == 0)) {
          uVar5 = set_name(opt_subject,&OSSL_CMP_CTX_set1_subjectName,param_1);
          puVar9 = (undefined8 *)(ulong)uVar5;
          if (uVar5 == 0) goto LAB_00102dac;
        }
        else if (3 < opt_verbosity) {
          pcVar18 = "warning";
          param_5 = (char *)0x6dd;
          BIO_printf(_bio_out,
                     "%s:%s:%d:CMP %s: -subject %s since sender is taken from -ref or -cert%s%s\n",
                     "setup_request_ctx");
        }
      }
      if (((opt_issuer != 0) && (opt_cmd != 4)) && (3 < opt_verbosity)) {
        pcVar18 = "warning";
        param_5 = (char *)0x6e2;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -issuer %s and \'rr\'%s%s\n","setup_request_ctx");
      }
      if ((opt_reqexts != (char *)0x0) && (3 < opt_verbosity)) {
        pcVar18 = "warning";
        param_5 = (char *)0x6e4;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -reqexts %s%s%s\n","setup_request_ctx");
      }
      if ((opt_san_nodefault != 0) && (3 < opt_verbosity)) {
        pcVar18 = "warning";
        param_5 = (char *)0x6e6;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -san_nodefault %s%s%s\n","setup_request_ctx");
      }
      if ((opt_sans != (char *)0x0) && (3 < opt_verbosity)) {
        pcVar18 = "warning";
        param_5 = (char *)0x6e8;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -sans %s%s%s\n","setup_request_ctx");
      }
      if ((opt_policies != (char *)0x0) && (3 < opt_verbosity)) {
        pcVar18 = "warning";
        param_5 = (char *)0x6ea;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -policies %s%s%s\n","setup_request_ctx");
      }
      if ((opt_policy_oids != (char *)0x0) && (3 < opt_verbosity)) {
        pcVar18 = "warning";
        param_5 = (char *)0x6ec;
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -policy_oids %s%s%s\n","setup_request_ctx");
      }
      if (opt_popo == 0xfffffffe) {
LAB_00104983:
        if (opt_centralkeygen != 0) {
          if (opt_verbosity < 4) goto LAB_001043b5;
          pcVar18 = "warning";
          param_5 = (char *)0x6f0;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -popo -1 or -centralkeygen %s%s%s\n",
                     "setup_request_ctx");
        }
LAB_00104360:
        if ((opt_newkeyout != 0) && (3 < opt_verbosity)) {
          param_5 = (char *)0x6f2;
          pcVar18 = "warning";
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -newkeyout %s%s%s\n","setup_request_ctx");
        }
      }
      else {
        if (3 < opt_verbosity) {
          pcVar18 = "warning";
          param_5 = (char *)0x6ee;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -popo %s%s%s\n","setup_request_ctx");
          goto LAB_00104983;
        }
        if (opt_centralkeygen == 0) goto LAB_00104360;
      }
LAB_001043b5:
      if (opt_cmd == 3) {
LAB_00104465:
        if ((opt_serial != (byte *)0x0) && (3 < opt_verbosity)) {
          param_5 = (char *)0x72f;
          pcVar18 = "warning";
          BIO_printf(_bio_out,
                     "%s:%s:%d:CMP %s: Ignoring -serial for command other than \'rr\'%s%s%s\n",
                     "setup_request_ctx");
        }
      }
      else {
        if ((opt_implicit_confirm != 0) && (3 < opt_verbosity)) {
          pcVar18 = "warning";
          param_5 = (char *)0x6f5;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -implicit_confirm %s, and \'p10cr\'%s%s\n",
                     "setup_request_ctx");
        }
        if (opt_disable_confirm == 0) {
LAB_00104b22:
          if (opt_certout != 0) {
            if (opt_verbosity < 4) goto LAB_001035c6;
            pcVar18 = "warning";
            param_5 = (char *)0x6f9;
            BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -certout %s, and \'p10cr\'%s%s\n",
                       "setup_request_ctx");
          }
LAB_00104402:
          if ((opt_chainout != 0) && (3 < opt_verbosity)) {
            pcVar18 = "warning";
            param_5 = (char *)0x6fb;
            BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -chainout %s, and \'p10cr\'%s%s\n",
                       "setup_request_ctx");
          }
        }
        else {
          if (3 < opt_verbosity) {
            pcVar18 = "warning";
            param_5 = (char *)0x6f7;
            BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -disable_confirm %s, and \'p10cr\'%s%s\n",
                       "setup_request_ctx");
            goto LAB_00104b22;
          }
          if (opt_certout == 0) goto LAB_00104402;
        }
LAB_001035c6:
        if (opt_cmd == 1) {
          if (((opt_oldcert == 0) && (opt_cert == 0)) && (opt_csr == 0)) {
            if (2 < opt_verbosity) {
              uVar23 = 0x702;
              pcVar18 = "setup_request_ctx";
              pcVar20 = 
              "%s:%s:%d:CMP %s: missing -oldcert for certificate to be updated and no -csr given%s%s%s\n"
              ;
              puVar25 = &_LC3;
              pbVar24 = &_LC3;
              goto LAB_001039d4;
            }
            goto LAB_00102da4;
          }
          if (opt_subject == 0) goto LAB_00104465;
          if (3 < opt_verbosity) {
            pcVar18 = "warning";
            param_5 = (char *)0x706;
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: given -subject \'%s\' overrides the subject of \'%s\' for KUR%s\n"
                       ,"setup_request_ctx");
            goto LAB_001035d5;
          }
        }
        else {
LAB_001035d5:
          if (opt_cmd != 4) goto LAB_00104465;
          if (opt_issuer == 0) {
            if (opt_serial != (byte *)0x0) goto LAB_00104f1c;
            if (opt_oldcert == 0) {
              if (opt_csr == 0) {
                if (2 < opt_verbosity) {
                  uVar23 = 0x70c;
                  pcVar18 = "setup_request_ctx";
                  pcVar20 = 
                  "%s:%s:%d:CMP %s: missing -oldcert or -issuer and -serial for certificate to be revoked and no -csr given%s%s%s\n"
                  ;
                  puVar25 = &_LC3;
                  pbVar24 = &_LC3;
                  goto LAB_001039d4;
                }
                goto LAB_00102da4;
              }
            }
            else if ((opt_csr != 0) && (3 < opt_verbosity)) {
              pcVar18 = "warning";
              param_5 = (char *)0x710;
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: ignoring -csr since certificate to be revoked is given%s%s%s\n"
                         ,"setup_request_ctx");
              goto LAB_00105278;
            }
          }
          else {
            if (opt_serial == (byte *)0x0) {
LAB_00104f1c:
              if (2 < opt_verbosity) {
                uVar23 = 0x714;
                pcVar18 = "setup_request_ctx";
                pcVar20 = 
                "%s:%s:%d:CMP %s: Must give both -issuer and -serial options or neither%s%s%s\n";
                puVar25 = &_LC3;
                pbVar24 = &_LC3;
                goto LAB_001039d4;
              }
              goto LAB_00102da4;
            }
            if (opt_oldcert == 0) {
              if (opt_csr != 0) goto LAB_00105233;
            }
            else if (3 < opt_verbosity) {
              pcVar18 = "warning";
              param_5 = (char *)0x718;
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: Ignoring -oldcert since -issuer and -serial is given for command \'rr\'%s%s%s\n"
                         ,"setup_request_ctx");
              if (opt_csr == 0) goto LAB_00105278;
LAB_00105233:
              if (3 < opt_verbosity) {
                pcVar18 = "warning";
                param_5 = (char *)0x71a;
                BIO_printf(_bio_out,
                           "%s:%s:%d:CMP %s: Ignoring -csr since -issuer and -serial is given for command \'rr\'%s%s%s\n"
                           ,"setup_request_ctx");
              }
LAB_00105278:
              if (opt_serial == (byte *)0x0) goto LAB_00103648;
            }
            pAVar11 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(char *)opt_serial);
            if (pAVar11 == (ASN1_INTEGER *)0x0) {
              if (2 < opt_verbosity) {
                uVar23 = 0x720;
                pcVar18 = "setup_request_ctx";
                pcVar20 = "%s:%s:%d:CMP %s: cannot read serial number: \'%s\'%s%s\n";
                puVar25 = &_LC3;
                pbVar24 = opt_serial;
                goto LAB_001039d4;
              }
              goto LAB_00102da4;
            }
            uVar5 = OSSL_CMP_CTX_set1_serialNumber(param_1);
            puVar9 = (undefined8 *)(ulong)uVar5;
            if (uVar5 == 0) {
              ASN1_INTEGER_free(pAVar11);
              if (opt_verbosity < 3) goto LAB_00102dac;
              uVar23 = 0x725;
              pcVar20 = "setup_request_ctx";
              pcVar14 = "%s:%s:%d:CMP %s: out of memory%s%s%s\n";
              pcVar18 = "";
              goto LAB_001038b0;
            }
            ASN1_INTEGER_free(pAVar11);
          }
LAB_00103648:
          if (-1 < opt_revreason) {
            OSSL_CMP_CTX_set_option(param_1);
          }
        }
      }
      if (opt_cmd == 3) {
        if (opt_csr == 0) {
          if (2 < opt_verbosity) {
            uVar23 = 0x732;
            pcVar18 = "setup_request_ctx";
            pcVar20 = "%s:%s:%d:CMP %s: missing PKCS#10 CSR for p10cr%s%s%s\n";
            puVar25 = &_LC3;
            pbVar24 = &_LC3;
            goto LAB_001039d4;
          }
          goto LAB_00102da4;
        }
        if ((opt_recipient == 0) && (opt_srvcert == 0)) goto LAB_00104a63;
LAB_0010450f:
        if ((opt_newkeypass != 0) && (3 < opt_verbosity)) {
          pcVar18 = "warning";
          param_5 = (char *)0x73e;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -newkeypass %s%s%s\n","setup_request_ctx");
        }
        if (opt_newkey == (ASN1_INTEGER *)0x0) {
LAB_00104bc6:
          if (opt_days != 0) {
            if (opt_verbosity < 4) goto LAB_00104541;
            pcVar18 = "warning";
            param_5 = (char *)0x742;
            BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -days %s%s%s\n","setup_request_ctx");
          }
          if (opt_popo != 0xfffffffe) {
            if (opt_verbosity < 4) goto LAB_0010371f;
            pcVar18 = "warning";
            param_5 = (char *)0x744;
            BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -popo %s%s%s\n","setup_request_ctx");
          }
        }
        else {
          if (3 < opt_verbosity) {
            pcVar18 = "warning";
            param_5 = (char *)0x740;
            BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -newkey %s%s%s\n","setup_request_ctx");
            goto LAB_00104bc6;
          }
LAB_00104541:
          if (opt_popo != 0xfffffffe) goto LAB_0010371f;
        }
        if ((opt_out_trusted != 0) && (3 < opt_verbosity)) {
          pcVar18 = "warning";
          param_5 = (char *)0x746;
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -out_trusted %s%s%s\n","setup_request_ctx");
        }
      }
      else {
        if ((opt_recipient == 0) && (opt_srvcert == 0)) {
LAB_00104a63:
          if ((((opt_issuer == 0) && (opt_oldcert == 0)) && (opt_cert == 0)) && (3 < opt_verbosity))
          {
            param_5 = (char *)0x738;
            pcVar18 = "warning";
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: missing -recipient, -srvcert, -issuer, -oldcert or -cert; recipient for any requests not covered by -reqin will be set to \"NULL-DN\"%s%s%s\n"
                       ,"setup_request_ctx");
          }
        }
        pBVar22 = _bio_err;
        pAVar4 = opt_newkey;
        uVar3 = opt_keyform;
        if (opt_cmd - 3 < 3) goto LAB_0010450f;
        pAVar11 = pAVar4;
        if (opt_newkey != (ASN1_INTEGER *)0x0) {
          _bio_err = (BIO *)0x0;
          uVar23 = get_passwd(opt_newkeypass,"new private key for cert to be enrolled");
          pcVar18 = "new private key for cert to be enrolled";
          param_5 = param_2;
          pkey = (EVP_PKEY *)load_key(pAVar4,uVar3,0);
          clear_free(uVar23);
          uVar23 = 1;
          in_R11 = pBVar22;
          _bio_err = pBVar22;
          if (pkey == (EVP_PKEY *)0x0) {
            ERR_clear_error();
            pcVar18 = "public key for checking cert resulting from p10cr";
            if (opt_csr == 0) {
              pcVar18 = "fallback public key for cert to be enrolled";
            }
            pkey = (EVP_PKEY *)load_pubkey(pAVar4,uVar3,0);
            if (pkey != (EVP_PKEY *)0x0) {
              uVar23 = 0;
              param_5 = param_2;
              in_R11 = pBVar22;
              goto LAB_0010370c;
            }
          }
          else {
LAB_0010370c:
            iVar6 = OSSL_CMP_CTX_set0_newPkey(param_1,uVar23,pkey);
            if (iVar6 != 0) goto LAB_0010371f;
          }
          puVar9 = (undefined8 *)0x0;
          EVP_PKEY_free(pkey);
          goto LAB_00102dac;
        }
        if ((((opt_reqin != 0) && (opt_key == 0)) && (opt_csr == 0)) &&
           ((opt_oldcert == 0 && (opt_centralkeygen == 0)))) {
          uVar5 = set_fallback_pubkey(param_1);
          puVar9 = (undefined8 *)(ulong)uVar5;
          if (uVar5 == 0) goto LAB_00102dac;
        }
      }
LAB_0010371f:
      if (0 < opt_days) {
        uVar5 = OSSL_CMP_CTX_set_option(param_1);
        puVar9 = (undefined8 *)(ulong)uVar5;
        if (uVar5 == 0) {
          if (opt_verbosity < 3) goto LAB_00102dac;
          uVar23 = 0x76a;
          pcVar20 = "setup_request_ctx";
          pcVar14 = "%s:%s:%d:CMP %s: could not set requested cert validity period%s%s%s\n";
          pcVar18 = "";
          goto LAB_001038b0;
        }
      }
      if ((opt_policies == (char *)0x0) || (opt_policy_oids == (char *)0x0)) {
        if (opt_csr == 0) {
LAB_001045d7:
          req = (X509_REQ *)0x0;
LAB_001045da:
          if ((opt_reqexts == (char *)0x0) && (opt_policies == (char *)0x0)) {
LAB_00104684:
            X509_REQ_free(req);
            uVar5 = OSSL_CMP_CTX_reqExtensions_have_SAN(param_1);
            puVar9 = (undefined8 *)(ulong)uVar5;
            if (uVar5 == 0) {
              pcVar20 = opt_sans;
              if (opt_sans == (char *)0x0) goto LAB_00106121;
              do {
                pcVar14 = (char *)next_item(pcVar20);
                iVar6 = strcmp(pcVar20,"critical");
                if (iVar6 == 0) {
                  OSSL_CMP_CTX_set_option(param_1,0x16,1);
                }
                else {
                  ERR_set_mark();
                  pcVar18 = (char *)0x0;
                  param_5 = pcVar20;
                  a = a2i_GENERAL_NAME((GENERAL_NAME *)0x0,(X509V3_EXT_METHOD *)0x0,
                                       (X509V3_CTX *)0x0,7,pcVar20,0);
                  if (a == (GENERAL_NAME *)0x0) {
                    pcVar18 = strchr(pcVar20,0x40);
                    iVar6 = 1;
                    if (pcVar18 == (char *)0x0) {
                      pcVar18 = strchr(pcVar20,0x3a);
                      iVar6 = (-(uint)(pcVar18 == (char *)0x0) & 0xfffffffc) + 6;
                    }
                    pcVar18 = (char *)0x0;
                    param_5 = pcVar20;
                    a = a2i_GENERAL_NAME((GENERAL_NAME *)0x0,(X509V3_EXT_METHOD *)0x0,
                                         (X509V3_CTX *)0x0,iVar6,pcVar20,0);
                    ERR_pop_to_mark();
                    if (a == (GENERAL_NAME *)0x0) {
                      if (2 < opt_verbosity) {
                        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: bad syntax of %s \'%s\'%s\n",
                                   "set_gennames","apps/cmp.c",0x3e6,"error",
                                   "Subject Alternative Name",pcVar20,&_LC3,pcVar18);
                      }
                      goto LAB_00102dac;
                    }
                  }
                  else {
                    ERR_pop_to_mark();
                  }
                  iVar6 = OSSL_CMP_CTX_push1_subjectAltName(param_1);
                  if (iVar6 == 0) {
                    GENERAL_NAME_free(a);
                    if (2 < opt_verbosity) {
                      BIO_printf(_bio_err,"%s:%s:%d:CMP %s: out of memory%s%s%s\n","set_gennames",
                                 "apps/cmp.c",0x3eb,"error",&_LC3,&_LC3,&_LC3,param_5);
                    }
                    goto LAB_00102dac;
                  }
                  GENERAL_NAME_free(a);
                }
                pcVar20 = pcVar14;
              } while (pcVar14 != (char *)0x0);
              if (opt_san_nodefault == 0) goto LAB_001052bf;
              if ((opt_sans != (char *)0x0) && (3 < opt_verbosity)) {
                pcVar18 = "warning";
                param_5 = (char *)0x79d;
                BIO_printf(_bio_out,
                           "%s:%s:%d:CMP %s: -opt_san_nodefault has no effect when -sans is used%s%s%s\n"
                           ,"setup_request_ctx");
              }
            }
            else {
              if (opt_sans != (char *)0x0) {
                if (2 < opt_verbosity) {
                  uVar23 = 0x795;
                  pcVar18 = "setup_request_ctx";
                  pcVar20 = 
                  "%s:%s:%d:CMP %s: cannot have Subject Alternative Names both via -reqexts and via -sans%s%s%s\n"
                  ;
                  puVar25 = &_LC3;
                  pbVar24 = &_LC3;
                  goto LAB_001039d4;
                }
                goto LAB_00102da4;
              }
LAB_00106121:
              if (opt_san_nodefault == 0) goto LAB_001052bf;
            }
            OSSL_CMP_CTX_set_option(param_1,0x15,1);
LAB_001052bf:
            pcVar20 = opt_policy_oids;
            if (opt_policy_oids_critical != 0) {
              if ((opt_policy_oids == (char *)0x0) && (3 < opt_verbosity)) {
                param_5 = (char *)0x7a4;
                pcVar18 = "warning";
                BIO_printf(_bio_out,
                           "%s:%s:%d:CMP %s: -opt_policy_oids_critical has no effect unless -policy_oids is given%s%s%s\n"
                           ,"setup_request_ctx");
              }
              OSSL_CMP_CTX_set_option(param_1,0x17,1);
              pcVar20 = opt_policy_oids;
            }
joined_r0x001052f9:
            opt_policy_oids = pcVar20;
            if (opt_policy_oids != (char *)0x0) {
              pcVar20 = (char *)next_item(opt_policy_oids);
              pAVar15 = OBJ_txt2obj(opt_policy_oids,1);
              if (pAVar15 != (ASN1_OBJECT *)0x0) {
                iVar6 = OBJ_obj2nid(pAVar15);
                if ((iVar6 == 0) && (3 < opt_verbosity)) {
                  pcVar18 = "warning";
                  param_5 = (char *)0x7b2;
                  BIO_printf(_bio_out,"%s:%s:%d:CMP %s: Unknown -policy_oids arg: %.40s%s%s\n",
                             "setup_request_ctx");
                }
                a_00 = POLICYINFO_new();
                if (a_00 != (POLICYINFO *)0x0) goto code_r0x00105311;
                puVar9 = (undefined8 *)0x0;
                ASN1_OBJECT_free(pAVar15);
                goto LAB_00102dac;
              }
              if (opt_verbosity < 3) goto LAB_00102da4;
              uVar23 = 0x7ae;
              pcVar20 = "setup_request_ctx";
              pcVar14 = "%s:%s:%d:CMP %s: Invalid -policy_oids arg \'%s\'%s%s\n";
              puVar9 = (undefined8 *)0x0;
              pcVar18 = opt_policy_oids;
              goto LAB_001038b0;
            }
            if (-2 < (int)opt_popo) {
              OSSL_CMP_CTX_set_option(param_1,0x18);
            }
            lVar12 = opt_oldcert;
            if (opt_oldcert != 0) {
              if (opt_cmd == 5) {
                if (3 < opt_verbosity) {
                  pcVar18 = "warning";
                  param_5 = (char *)0x7c6;
                  BIO_printf(_bio_out,
                             "%s:%s:%d:CMP %s: -oldcert option is ignored for \'genm\' command%s%s%s\n"
                             ,"setup_request_ctx","apps/cmp.c",0x7c6,"warning",&_LC3,&_LC3,&_LC3,0);
                }
              }
              else {
                param_5 = "certificate to be updated";
                if ((opt_cmd != 1) && (param_5 = "reference certificate (oldcert)", opt_cmd == 4)) {
                  param_5 = "certificate to be revoked";
                }
                uVar23 = get_passwd(opt_keypass,param_5);
                pXVar8 = (X509 *)load_cert_pass(lVar12,0,0,uVar23);
                clear_free(uVar23);
                if (pXVar8 == (X509 *)0x0) goto LAB_00102da4;
                iVar6 = OSSL_CMP_CTX_set1_oldCert(param_1,pXVar8);
                X509_free(pXVar8);
                if (iVar6 == 0) goto LAB_00102da4;
              }
            }
            cleanse(opt_keypass);
            uVar5 = set_name(opt_recipient,&OSSL_CMP_CTX_set1_recipient,param_1,"recipient");
            puVar9 = (undefined8 *)(ulong)uVar5;
            if (uVar5 != 0) {
              pcVar20 = "expected sender";
              uVar5 = set_name(opt_expect_sender,&OSSL_CMP_CTX_set1_expected_sender,param_1);
              pbVar24 = opt_geninfo;
              puVar9 = (undefined8 *)(ulong)uVar5;
              if (uVar5 != 0) {
                if (opt_geninfo != (byte *)0x0) {
                  ppuVar13 = __ctype_b_loc();
                  puVar19 = *ppuVar13;
                  do {
                    bVar2 = *(byte *)((long)puVar19 + (ulong)*pbVar24 * 2 + 1);
                    while ((bVar2 & 0x20) == 0) {
                      pcVar14 = strchr((char *)pbVar24,0x3a);
                      if (pcVar14 == (char *)0x0) {
                        puVar9 = (undefined8 *)0x0;
                        if (opt_verbosity < 3) goto LAB_00102dac;
                        uVar23 = 0x80b;
                        pcVar18 = "handle_opt_geninfo";
                        pcVar20 = "%s:%s:%d:CMP %s: Missing \':\' in -geninfo arg %.40s%s%s\n";
                        puVar25 = &_LC3;
                        goto LAB_001039d4;
                      }
                      *pcVar14 = '\0';
                      pcVar1 = pcVar14 + 1;
                      pcVar21 = (char *)0x0;
                      pAVar15 = OBJ_txt2obj((char *)pbVar24,0);
                      if (pAVar15 == (ASN1_OBJECT *)0x0) {
                        if (opt_verbosity < 3) goto LAB_00102da4;
                        uVar23 = 0x810;
                        pcVar18 = "handle_opt_geninfo";
                        pcVar20 = "%s:%s:%d:CMP %s: Invalid OID in -geninfo arg %.40s%s%s\n";
                        puVar25 = &_LC3;
                        goto LAB_001039d4;
                      }
                      iVar6 = OBJ_obj2nid(pAVar15);
                      if ((iVar6 == 0) && (3 < opt_verbosity)) {
                        param_5 = (char *)0x814;
                        pcVar20 = "apps/cmp.c";
                        pcVar18 = "warning";
                        pcVar21 = "%s:%s:%d:CMP %s: Unknown OID in -geninfo arg: %.40s%s%s\n";
                        BIO_printf(_bio_out,
                                   "%s:%s:%d:CMP %s: Unknown OID in -geninfo arg: %.40s%s%s\n",
                                   "handle_opt_geninfo");
                      }
                      a_01 = ASN1_TYPE_new();
                      if (a_01 == (ASN1_TYPE *)0x0) {
LAB_00105d26:
                        pcVar14 = pcVar21;
                        pAVar16 = (ASN1_UTF8STRING *)0x0;
                        pAVar11 = (ASN1_INTEGER *)0x0;
LAB_00105d2c:
                        if (2 < opt_verbosity) {
                          BIO_printf(_bio_err,"%s:%s:%d:CMP %s: out of memory%s%s%s\n",
                                     "handle_opt_geninfo","apps/cmp.c",0x850,"error",&_LC3,&_LC3,
                                     &_LC3,pcVar14);
                        }
LAB_00105d39:
                        ASN1_OBJECT_free(pAVar15);
                        ASN1_TYPE_free(a_01);
                        puVar9 = (undefined8 *)0x0;
                        ASN1_INTEGER_free(pAVar11);
                        ASN1_UTF8STRING_free(pAVar16);
                        goto LAB_00102dac;
                      }
                      iVar6 = OPENSSL_strncasecmp(pcVar1,&_LC195,4);
                      if (iVar6 == 0) {
                        pbVar24 = (byte *)(pcVar14 + 5);
                        pcVar14 = (char *)strtol((char *)pbVar24,(char **)&local_288,10);
                        if (pbVar24 != (byte *)local_288._0_8_) {
                          pbVar24 = (byte *)local_288._0_8_;
                          if (*(byte *)local_288._0_8_ != 0) {
                            if (*(byte *)local_288._0_8_ != 0x2c) {
                              if (2 < opt_verbosity) {
                                BIO_printf(_bio_err,
                                           "%s:%s:%d:CMP %s: Missing \',\' or end of -geninfo arg after int at %.40s%s%s\n"
                                           ,"handle_opt_geninfo","apps/cmp.c",0x821,"error",
                                           local_288._0_8_,&_LC3,&_LC3,pAVar16);
                              }
                              goto LAB_00105db6;
                            }
                            pbVar24 = (byte *)(local_288._0_8_ + 1);
                          }
                          pcVar21 = pcVar14;
                          pAVar11 = ASN1_INTEGER_new();
                          if (pAVar11 == (ASN1_INTEGER *)0x0) goto LAB_00105d26;
                          iVar6 = ASN1_INTEGER_set(pAVar11,(long)pcVar14);
                          if (iVar6 != 0) {
                            ASN1_TYPE_set(a_01,2,pAVar11);
                            goto LAB_00105a8c;
                          }
                          pAVar16 = (ASN1_UTF8STRING *)0x0;
                          goto LAB_00105d2c;
                        }
                        if (2 < opt_verbosity) {
                          BIO_printf(_bio_err,
                                     "%s:%s:%d:CMP %s: Cannot parse int in -geninfo arg %.40s%s%s\n"
                                     ,"handle_opt_geninfo","apps/cmp.c",0x81b,"error",pbVar24,&_LC3,
                                     &_LC3,in_R11);
                        }
LAB_00105db6:
                        pAVar16 = (ASN1_UTF8STRING *)0x0;
                        pAVar11 = (ASN1_INTEGER *)0x0;
                        goto LAB_00105d39;
                      }
                      iVar6 = OPENSSL_strncasecmp(pcVar1,&_LC196,4);
                      if (iVar6 != 0) {
                        if (2 < opt_verbosity) {
                          BIO_printf(_bio_err,
                                     "%s:%s:%d:CMP %s: Missing \'int:\' or \'str:\' in -geninfo arg %.40s%s%s\n"
                                     ,"handle_opt_geninfo","apps/cmp.c",0x83c,"error",pcVar1,&_LC3,
                                     &_LC3,pcVar18);
                        }
                        goto LAB_00105db6;
                      }
                      pcVar14 = pcVar14 + 5;
                      pcVar21 = (char *)0x2c;
                      local_288._0_8_ = strchr(pcVar14,0x2c);
                      if ((byte *)local_288._0_8_ == (byte *)0x0) {
                        sVar17 = strlen(pcVar14);
                        local_288._0_8_ = pcVar14 + sVar17;
                      }
                      else {
                        *(byte *)local_288._0_8_ = 0;
                        local_288._0_8_ = (byte *)(local_288._0_8_ + 1);
                      }
                      pAVar16 = ASN1_UTF8STRING_new();
                      if (pAVar16 == (ASN1_UTF8STRING *)0x0) goto LAB_00105d26;
                      iVar6 = ASN1_STRING_set(pAVar16,pcVar14,-1);
                      pbVar24 = (byte *)local_288._0_8_;
                      if (iVar6 == 0) {
                        pAVar11 = (ASN1_INTEGER *)0x0;
                        goto LAB_00105d2c;
                      }
                      ASN1_TYPE_set(a_01,0xc,pAVar16);
LAB_00105a8c:
                      lVar12 = OSSL_CMP_ITAV_create(pAVar15,a_01);
                      if (lVar12 == 0) {
                        if (2 < opt_verbosity) {
                          BIO_printf(_bio_err,
                                     "%s:%s:%d:CMP %s: Unable to create \'OSSL_CMP_ITAV\' structure%s%s%s\n"
                                     ,"handle_opt_geninfo","apps/cmp.c",0x841,"error",&_LC3,&_LC3,
                                     &_LC3,param_5);
                        }
                        goto LAB_00105db6;
                      }
                      lVar7 = param_1;
                      iVar6 = OSSL_CMP_CTX_push0_geninfo_ITAV(param_1,lVar12);
                      if (iVar6 == 0) {
                        puVar9 = (undefined8 *)0x0;
                        if (2 < opt_verbosity) {
                          BIO_printf(_bio_err,
                                     "%s:%s:%d:CMP %s: Failed to add ITAV for geninfo of the PKI message header%s%s%s\n"
                                     ,"handle_opt_geninfo","apps/cmp.c",0x848,"error",&_LC3,&_LC3,
                                     &_LC3,lVar7);
                        }
                        OSSL_CMP_ITAV_free(lVar12);
                        goto LAB_00102dac;
                      }
                      if (*pbVar24 == 0) goto LAB_00105b75;
                      puVar19 = *ppuVar13;
                      bVar2 = *(byte *)((long)puVar19 + (ulong)*pbVar24 * 2 + 1);
                    }
                    pbVar24 = pbVar24 + 1;
                  } while( true );
                }
LAB_00105b75:
                pcVar18 = opt_profile;
                if (opt_profile == (char *)0x0) {
LAB_00105c20:
                  if ((opt_reqout_only == 0) && (5 < opt_verbosity)) {
                    pcVar18 = " only if -rspin argument gives too few filenames";
                    if (opt_rspin == 0) {
                      pcVar18 = "";
                    }
                    puVar9 = (undefined8 *)0x1;
                    BIO_printf(_bio_out,"%s:%s:%d:CMP %s: will contact %s%s%s \n","setup_client_ctx"
                               ,"apps/cmp.c",0x91f,&_LC12,local_1d8,local_108,pcVar18,pcVar20);
                  }
                  else {
                    puVar9 = (undefined8 *)0x1;
                  }
                  goto LAB_00102dac;
                }
                if ((param_1 != 0) && (lVar12 = OPENSSL_sk_new_reserve(0,1), lVar12 != 0)) {
                  pAVar16 = ASN1_UTF8STRING_new();
                  if (pAVar16 != (ASN1_UTF8STRING *)0x0) {
                    sVar17 = strlen(pcVar18);
                    iVar6 = ASN1_STRING_set(pAVar16,pcVar18,(int)sVar17);
                    if (iVar6 == 0) {
                      ASN1_STRING_free(pAVar16);
                    }
                    else {
                      OPENSSL_sk_push(lVar12,pAVar16);
                      lVar7 = OSSL_CMP_ITAV_new0_certProfile(lVar12);
                      if (lVar7 != 0) {
                        uVar5 = OSSL_CMP_CTX_push0_geninfo_ITAV(param_1,lVar7);
                        puVar9 = (undefined8 *)(ulong)uVar5;
                        if (uVar5 == 0) {
                          OSSL_CMP_ITAV_free(lVar7);
                          goto LAB_00102dac;
                        }
                        goto LAB_00105c20;
                      }
                    }
                  }
                  OPENSSL_sk_pop_free(lVar12,ASN1_UTF8STRING_free);
                }
                goto LAB_00102da4;
              }
            }
            goto LAB_00102dac;
          }
          local_290 = (stack_st_X509_EXTENSION *)OPENSSL_sk_new_null();
          if (local_290 == (stack_st_X509_EXTENSION *)0x0) goto LAB_00104d45;
          pcVar18 = (char *)0x2;
          param_5 = (char *)0x0;
          X509V3_set_ctx(&local_288,(X509 *)0x0,(X509 *)0x0,req,(X509_CRL *)0x0,2);
          X509V3_set_nconf(&local_288,conf);
          if ((opt_reqexts == (char *)0x0) ||
             (iVar6 = X509V3_EXT_add_nconf_sk(conf,&local_288,opt_reqexts,&local_290), iVar6 != 0))
          {
            if ((opt_policies == (char *)0x0) ||
               (iVar6 = X509V3_EXT_add_nconf_sk(conf,&local_288,opt_policies,&local_290), iVar6 != 0
               )) {
              OSSL_CMP_CTX_set0_reqExtensions(param_1);
              goto LAB_00104684;
            }
            if (2 < opt_verbosity) {
              BIO_printf(_bio_err,
                         "%s:%s:%d:CMP %s: cannot load policy cert request extension section \'%s\'%s%s\n"
                         ,"setup_request_ctx","apps/cmp.c",0x78b,"error",opt_policies,&_LC3,&_LC3,
                         in_R11);
            }
          }
          else if (2 < opt_verbosity) {
            BIO_printf(_bio_err,
                       "%s:%s:%d:CMP %s: cannot load certificate request extension section \'%s\'%s%s\n"
                       ,"setup_request_ctx","apps/cmp.c",0x785,"error",opt_reqexts,&_LC3,&_LC3,
                       param_1);
          }
        }
        else {
          if (opt_cmd == 5) {
            if (3 < opt_verbosity) {
              pcVar18 = "warning";
              param_5 = (char *)0x775;
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: -csr option is ignored for \'genm\' command%s%s%s\n",
                         "setup_request_ctx");
            }
            goto LAB_001045d7;
          }
          req = (X509_REQ *)load_csr_autofmt(opt_csr,0,0);
          if (req == (X509_REQ *)0x0) goto LAB_00102da4;
          iVar6 = OSSL_CMP_CTX_set1_p10CSR(param_1);
          if (iVar6 != 0) goto LAB_001045da;
LAB_00104d45:
          if (2 < opt_verbosity) {
            BIO_printf(_bio_err,"%s:%s:%d:CMP %s: out of memory%s%s%s\n","setup_request_ctx",
                       "apps/cmp.c",0x7d6,"error",&_LC3,&_LC3,&_LC3,pAVar11);
          }
        }
        puVar9 = (undefined8 *)0x0;
        OPENSSL_sk_pop_free(local_290,&X509_EXTENSION_free);
        X509_REQ_free(req);
        goto LAB_00102dac;
      }
      if (2 < opt_verbosity) {
        uVar23 = 0x76f;
        pcVar18 = "setup_request_ctx";
        pcVar20 = 
        "%s:%s:%d:CMP %s: cannot have policies both via -policies and via -policy_oids%s%s%s\n";
        puVar25 = &_LC3;
        pbVar24 = &_LC3;
        goto LAB_001039d4;
      }
      goto LAB_00102da4;
    }
    puVar9 = (undefined8 *)(ulong)opt_centralkeygen;
    if ((opt_reqin == 0) && (opt_newkey == (ASN1_INTEGER *)0x0)) {
      if (opt_centralkeygen == 0) {
        if (opt_key == 0) {
          if ((opt_csr == 0) && (opt_oldcert == 0)) {
            if (opt_verbosity < 3) goto LAB_00102dac;
            uVar23 = 0x6ab;
            pcVar20 = "setup_request_ctx";
            pcVar14 = 
            "%s:%s:%d:CMP %s: missing -newkey (or -key) to be certified and no -csr, -oldcert, -cert, or -reqin option given, which could provide fallback public key. Neither central key generation is requested.%s%s%s\n"
            ;
            pcVar18 = "";
            goto LAB_001038b0;
          }
          if (opt_popo != 0xffffffff) goto LAB_00103582;
        }
        else if (opt_popo != 0xffffffff) goto LAB_0010484f;
LAB_001047bd:
        if (5 < opt_verbosity) {
          pcVar18 = "info";
          param_5 = (char *)0x6b0;
          BIO_printf(_bio_out,
                     "%s:%s:%d:CMP %s: POPO is disabled, which implies -centralkeygen%s%s%s\n",
                     "setup_request_ctx");
        }
        opt_centralkeygen = 1;
LAB_001047da:
        pbVar24 = (byte *)(ulong)opt_popo;
        if (-1 < (int)opt_popo) {
          if (opt_verbosity < 3) goto LAB_00102da4;
          uVar23 = 0x6b5;
          pcVar20 = "%s:%s:%d:CMP %s: -popo value %d is inconsistent with -centralkeygen%s%s\n";
          puVar25 = &_LC3;
          pcVar18 = "setup_request_ctx";
          goto LAB_001039d4;
        }
      }
      else if (opt_popo != 0xffffffff) goto LAB_001047da;
LAB_00104924:
      if (opt_newkeyout == 0) {
        if (2 < opt_verbosity) {
          uVar23 = 0x6b9;
          pcVar18 = "setup_request_ctx";
          pcVar20 = 
          "%s:%s:%d:CMP %s: -newkeyout not given, nowhere to save centrally generated key%s%s%s\n";
          puVar25 = &_LC3;
          pbVar24 = &_LC3;
          goto LAB_001039d4;
        }
      }
      else {
        opt_popo = 0xffffffff;
LAB_00103590:
        if ((opt_certout != 0) || (opt_reqout_only != 0)) {
          uVar5 = set_name(opt_subject,&OSSL_CMP_CTX_set1_subjectName,param_1);
          puVar9 = (undefined8 *)(ulong)uVar5;
          if (uVar5 == 0) goto LAB_00102dac;
          goto LAB_001035c6;
        }
        if (2 < opt_verbosity) {
          uVar23 = 0x6cf;
          pcVar18 = "setup_request_ctx";
          pcVar20 = 
          "%s:%s:%d:CMP %s: -certout not given, nowhere to save newly enrolled certificate%s%s%s\n";
          puVar25 = &_LC3;
          pbVar24 = &_LC3;
          goto LAB_001039d4;
        }
      }
      goto LAB_00102da4;
    }
    if (opt_popo == 0xffffffff) {
      if (opt_centralkeygen == 0) goto LAB_001047bd;
      goto LAB_00104924;
    }
    if (opt_centralkeygen != 0) goto LAB_001047da;
LAB_00103582:
    if (opt_newkey != (ASN1_INTEGER *)0x0) goto LAB_00103590;
LAB_0010484f:
    if (opt_popo + 1 < 2) goto LAB_00103590;
    if (opt_csr == 0) {
      if (opt_key != 0) goto LAB_00103590;
      if (2 < opt_verbosity) {
        uVar23 = 0x6ca;
        pcVar18 = "setup_request_ctx";
        pcVar20 = 
        "%s:%s:%d:CMP %s: missing -newkey (or -key) option for key to be certified and for POPO%s%s%s\n"
        ;
        puVar25 = &_LC3;
        pbVar24 = &_LC3;
        goto LAB_001039d4;
      }
      goto LAB_00102da4;
    }
    if (opt_verbosity < 3) goto LAB_00102da4;
    pcVar20 = ", and -key option superseded by -csr";
    if (opt_key == 0) {
      pcVar20 = "";
    }
    pcVar18 = "setup_request_ctx";
    BIO_printf(_bio_err,
               "%s:%s:%d:CMP %s: no -newkey option given with private key for POPO, -csr option provides just public key%s%s%s\n"
               ,"setup_request_ctx","apps/cmp.c",0x6c2,"error",pcVar20,&_LC3,&_LC3,
               (ulong)(opt_popo + 1));
    if ((opt_reqin == 0) || (opt_verbosity < 6)) goto LAB_00102da4;
    pcVar14 = "info";
    uVar23 = 0x6c6;
    pcVar20 = 
    "%s:%s:%d:CMP %s: since -reqin is used, may use -popo -1 or -popo 0 to disable the needless generation of a POPO%s%s%s\n"
    ;
    puVar25 = &_LC3;
    pbVar24 = &_LC3;
    pBVar22 = _bio_out;
  }
  else {
LAB_00102cd0:
    uVar5 = OSSL_HTTP_parse_url(opt_server,&local_2ac,0,&local_2a8,&local_2a0,&local_2b0,&local_298,
                                0,0);
    puVar9 = (undefined8 *)(ulong)uVar5;
    if (uVar5 == 0) {
      if (opt_verbosity < 3) goto LAB_00102dac;
      uVar23 = 0x883;
      pcVar20 = "setup_client_ctx";
      pcVar14 = "%s:%s:%d:CMP %s: cannot parse -server URL: %s%s%s\n";
      pcVar18 = opt_server;
      goto LAB_001038b0;
    }
    if ((local_2ac != 0) && (opt_tls_used == 0)) {
      if (3 < opt_verbosity) {
        BIO_printf(_bio_out,
                   "%s:%s:%d:CMP %s: assuming -tls_used since -server URL indicates HTTPS%s%s%s\n",
                   "setup_client_ctx","apps/cmp.c",0x887,"warning",&_LC3,&_LC3,&_LC3);
      }
      opt_tls_used = 1;
    }
    uVar5 = OSSL_CMP_CTX_set_option(param_1,0xd,opt_tls_used);
    puVar9 = (undefined8 *)(ulong)uVar5;
    if (uVar5 == 0) goto LAB_00102dac;
    BIO_snprintf(server_port_21,0x20,"%s",local_2a0);
    if (opt_path == (char *)0x0) {
      pcVar18 = local_298;
    }
    iVar6 = OSSL_CMP_CTX_set1_server(param_1,local_2a8);
    if ((((iVar6 != 0) && (iVar6 = OSSL_CMP_CTX_set_serverPort(param_1,local_2b0), iVar6 != 0)) &&
        ((opt_proxy == 0 || (iVar6 = OSSL_CMP_CTX_set1_proxy(param_1), iVar6 != 0)))) &&
       ((opt_no_proxy == 0 || (iVar6 = OSSL_CMP_CTX_set1_no_proxy(param_1), iVar6 != 0)))) {
      puVar25 = &_LC3;
      pcVar20 = pcVar18 + 1;
      if (*pcVar18 != '/') {
        pcVar20 = pcVar18;
      }
      if (opt_tls_used != 0) {
        puVar25 = &_LC84;
      }
      param_5 = local_2a8;
      param_6 = local_2a0;
      BIO_snprintf(local_1d8,200,"http%s://%s:%s/%s",puVar25,local_2a8,local_2a0,pcVar20);
      lVar12 = OSSL_HTTP_adapt_proxy(opt_proxy,opt_no_proxy,local_2a8,local_2ac);
      if (lVar12 != 0) {
        BIO_snprintf(local_108,200," via %s",lVar12);
      }
      goto LAB_00103056;
    }
LAB_00102d97:
    if (opt_verbosity < 3) {
LAB_00102da4:
      puVar9 = (undefined8 *)0x0;
      goto LAB_00102dac;
    }
    uVar23 = 0x92b;
    pcVar18 = "setup_client_ctx";
    pcVar20 = "%s:%s:%d:CMP %s: out of memory%s%s%s\n";
    puVar25 = &_LC3;
    pbVar24 = &_LC3;
LAB_001039d4:
    pcVar14 = "error";
    pBVar22 = _bio_err;
  }
  puVar9 = (undefined8 *)0x0;
  BIO_printf(pBVar22,pcVar20,pcVar18,"apps/cmp.c",uVar23,pcVar14,pbVar24,puVar25,&_LC3);
LAB_00102dac:
  CRYPTO_free(local_2a8);
  CRYPTO_free(local_2a0);
  CRYPTO_free(local_298);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)puVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00105311:
  a_00->policyid = pAVar15;
  uVar10 = OSSL_CMP_CTX_push0_policy(param_1,a_00);
  puVar9 = (undefined8 *)(uVar10 & 0xffffffff);
  if ((int)uVar10 == 0) goto LAB_00105eb7;
  goto joined_r0x001052f9;
LAB_00105eb7:
  if (2 < opt_verbosity) {
    BIO_printf(_bio_err,"%s:%s:%d:CMP %s: cannot add policy with OID \'%s\'%s%s\n",
               "setup_request_ctx","apps/cmp.c",0x7bb,"error",opt_policy_oids,&_LC3,&_LC3,uVar10);
  }
  POLICYINFO_free(a_00);
  goto LAB_00102dac;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long setup_srv_ctx(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  char *pcVar7;
  X509 *pXVar8;
  EVP_PKEY *pEVar9;
  X509_STORE *v;
  long lVar10;
  X509_CRL *a;
  
  uVar3 = app_get0_propq();
  uVar4 = app_get0_libctx();
  lVar5 = ossl_cmp_mock_srv_new(uVar4,uVar3);
  if (lVar5 == 0) {
    return 0;
  }
  uVar3 = OSSL_CMP_SRV_CTX_get0_cmp_ctx(lVar5);
  pcVar7 = opt_srv_ref;
  if (opt_srv_ref == (char *)0x0) {
    if (opt_srv_cert == 0) {
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,
                   "%s:%s:%d:CMP %s: must give -srv_ref for mock server if no -srv_cert given%s%s%s\n"
                   ,"setup_srv_ctx","apps/cmp.c",0x477,"error",&_LC3,&_LC3,&_LC3);
      }
      goto LAB_001068a0;
    }
    if (opt_srv_secret != 0) goto LAB_0010624d;
LAB_001068de:
    if (3 < opt_verbosity) {
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: server will not be able to handle PBM-protected requests since -srv_secret is not given%s%s%s\n"
                 ,"setup_srv_ctx","apps/cmp.c",0x490,"warning",&_LC3,&_LC3,&_LC3);
      goto LAB_00106296;
    }
LAB_001068f2:
    if ((opt_srv_cert == 0) != (opt_srv_key == 0)) {
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,
                   "%s:%s:%d:CMP %s: must give both -srv_cert and -srv_key options or neither%s%s%s\n"
                   ,"setup_srv_ctx","apps/cmp.c",0x495,"error",&_LC3,&_LC3,&_LC3);
      }
      goto LAB_001068a0;
    }
  }
  else {
    sVar6 = strlen(opt_srv_ref);
    iVar2 = OSSL_CMP_CTX_set1_referenceValue(uVar3,pcVar7,sVar6 & 0xffffffff);
    if (iVar2 == 0) goto LAB_001068a0;
    if (opt_srv_secret == 0) {
      if (opt_srv_cert == 0) {
        if (2 < opt_verbosity) {
          BIO_printf(_bio_err,
                     "%s:%s:%d:CMP %s: server credentials (-srv_secret or -srv_cert) must be given if -use_mock_srv or -port is used%s%s%s\n"
                     ,"setup_srv_ctx","apps/cmp.c",0x48d,"error",&_LC3,&_LC3,&_LC3);
        }
        goto LAB_001068a0;
      }
      goto LAB_001068de;
    }
LAB_0010624d:
    pcVar7 = (char *)get_passwd(opt_srv_secret,"PBMAC secret of mock server");
    if (pcVar7 != (char *)0x0) {
      cleanse(opt_srv_secret);
      sVar6 = strlen(pcVar7);
      iVar2 = OSSL_CMP_CTX_set1_secretValue(uVar3,pcVar7,sVar6 & 0xffffffff);
      clear_free(pcVar7);
      if (iVar2 == 0) goto LAB_001068a0;
    }
LAB_00106296:
    if (opt_srv_secret == 0) goto LAB_001068f2;
  }
  lVar10 = opt_srv_cert;
  if (opt_srv_cert != 0) {
    uVar4 = get_passwd(opt_srv_keypass,"signer certificate of the mock server");
    pXVar8 = (X509 *)load_cert_pass(lVar10,0,0,uVar4,"signer certificate of the mock server");
    clear_free(uVar4);
    if (pXVar8 == (X509 *)0x0) goto LAB_001068a0;
    iVar2 = OSSL_CMP_CTX_set1_cert(uVar3,pXVar8);
    X509_free(pXVar8);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  uVar1 = opt_keyform;
  lVar10 = opt_srv_key;
  if (opt_srv_key != 0) {
    uVar4 = get_passwd(opt_srv_keypass,"private key for mock server cert");
    pEVar9 = (EVP_PKEY *)load_key(lVar10,uVar1,0,uVar4,param_1,"private key for mock server cert");
    clear_free(uVar4);
    if ((pEVar9 == (EVP_PKEY *)0x0) || (iVar2 = OSSL_CMP_CTX_set1_pkey(uVar3,pEVar9), iVar2 == 0)) {
      EVP_PKEY_free(pEVar9);
      goto LAB_001068a0;
    }
    EVP_PKEY_free(pEVar9);
  }
  cleanse(opt_srv_keypass);
  if (opt_srv_trusted == 0) {
    if (3 < opt_verbosity) {
      BIO_printf(_bio_out,
                 "%s:%s:%d:CMP %s: mock server will not be able to handle signature-protected requests since -srv_trusted is not given%s%s%s\n"
                 ,"setup_srv_ctx","apps/cmp.c",0x4b2,"warning",&_LC3,&_LC3,&_LC3);
    }
  }
  else {
    v = (X509_STORE *)load_trusted(opt_srv_trusted,0,"certs trusted by mock server");
    if ((v == (X509_STORE *)0x0) || (iVar2 = OSSL_CMP_CTX_set0_trustedStore(uVar3,v), iVar2 == 0)) {
      X509_STORE_free(v);
      goto LAB_001068a0;
    }
  }
  if (opt_srv_untrusted != 0) {
    lVar10 = load_certs_multifile
                       (opt_srv_untrusted,opt_otherpass,"untrusted certificates for mock server",vpm
                       );
    if (lVar10 == 0) goto LAB_001068a0;
    iVar2 = OSSL_CMP_CTX_set1_untrusted(uVar3,lVar10);
    OSSL_STACK_OF_X509_free(lVar10);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  lVar10 = opt_ref_cert;
  if (opt_ref_cert != 0) {
    uVar4 = get_passwd(opt_otherpass,"reference cert to be expected by the mock server");
    pXVar8 = (X509 *)load_cert_pass(lVar10,0,0,uVar4,
                                    "reference cert to be expected by the mock server");
    clear_free(uVar4);
    if (pXVar8 == (X509 *)0x0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_refCert(lVar5,pXVar8);
    X509_free(pXVar8);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  lVar10 = opt_rsp_cert;
  if (opt_rsp_cert == 0) {
    if (3 < opt_verbosity) {
      BIO_printf(_bio_out,"%s:%s:%d:CMP %s: no -rsp_cert given for mock server%s%s%s\n",
                 "setup_srv_ctx","apps/cmp.c",0x4be,"warning",&_LC3,&_LC3,&_LC3);
    }
  }
  else {
    uVar4 = get_passwd(opt_rsp_keypass,"cert the mock server returns on certificate requests");
    pXVar8 = (X509 *)load_cert_pass(lVar10,0,0,uVar4,
                                    "cert the mock server returns on certificate requests");
    clear_free(uVar4);
    if (pXVar8 == (X509 *)0x0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_certOut(lVar5,pXVar8);
    X509_free(pXVar8);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  uVar1 = opt_keyform;
  lVar10 = opt_rsp_key;
  if (opt_rsp_key != 0) {
    uVar4 = get_passwd(opt_rsp_keypass,"private key for enrollment cert");
    pEVar9 = (EVP_PKEY *)load_key(lVar10,uVar1,0,uVar4,param_1,"private key for enrollment cert");
    clear_free(uVar4);
    if ((pEVar9 == (EVP_PKEY *)0x0) ||
       (iVar2 = ossl_cmp_mock_srv_set1_keyOut(lVar5,pEVar9), iVar2 == 0)) {
      EVP_PKEY_free(pEVar9);
      goto LAB_001068a0;
    }
    EVP_PKEY_free(pEVar9);
  }
  cleanse(opt_rsp_keypass);
  if (opt_rsp_crl != 0) {
    a = (X509_CRL *)load_crl(opt_rsp_crl,0,0,"CRL to be returned by the mock server");
    if (a == (X509_CRL *)0x0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_crlOut(lVar5,a);
    X509_CRL_free(a);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  if (opt_rsp_extracerts != 0) {
    lVar10 = load_certs_multifile
                       (opt_rsp_extracerts,opt_otherpass,"CMP extra certificates for mock server",
                        vpm);
    if (lVar10 == 0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_chainOut(lVar5,lVar10);
    OSSL_STACK_OF_X509_free(lVar10);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  if (opt_rsp_capubs != 0) {
    lVar10 = load_certs_multifile(opt_rsp_capubs,opt_otherpass,"caPubs for mock server",vpm);
    if (lVar10 == 0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_caPubsOut(lVar5,lVar10);
    OSSL_STACK_OF_X509_free(lVar10);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  lVar10 = opt_rsp_newwithnew;
  if (opt_rsp_newwithnew != 0) {
    uVar4 = get_passwd(opt_otherpass,"NewWithNew cert the mock server returns in rootCaKeyUpdate");
    pXVar8 = (X509 *)load_cert_pass(lVar10,0,0,uVar4,
                                    "NewWithNew cert the mock server returns in rootCaKeyUpdate");
    clear_free(uVar4);
    if (pXVar8 == (X509 *)0x0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_newWithNew(lVar5,pXVar8);
    X509_free(pXVar8);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  lVar10 = opt_rsp_newwithold;
  if (opt_rsp_newwithold != 0) {
    uVar4 = get_passwd(opt_otherpass,"NewWithOld cert the mock server returns in rootCaKeyUpdate");
    pXVar8 = (X509 *)load_cert_pass(lVar10,0,0,uVar4,
                                    "NewWithOld cert the mock server returns in rootCaKeyUpdate");
    clear_free(uVar4);
    if (pXVar8 == (X509 *)0x0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_newWithOld(lVar5,pXVar8);
    X509_free(pXVar8);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  lVar10 = opt_rsp_oldwithnew;
  if (opt_rsp_oldwithnew != 0) {
    uVar4 = get_passwd(opt_otherpass,"OldWithNew cert the mock server returns in rootCaKeyUpdate");
    pXVar8 = (X509 *)load_cert_pass(lVar10,0,0,uVar4,
                                    "OldWithNew cert the mock server returns in rootCaKeyUpdate");
    clear_free(uVar4);
    if (pXVar8 == (X509 *)0x0) goto LAB_001068a0;
    iVar2 = ossl_cmp_mock_srv_set1_oldWithNew(lVar5,pXVar8);
    X509_free(pXVar8);
    if (iVar2 == 0) goto LAB_001068a0;
  }
  ossl_cmp_mock_srv_set_pollCount(lVar5,opt_poll_count);
  ossl_cmp_mock_srv_set_checkAfterTime(lVar5,opt_check_after);
  if (opt_grant_implicitconf != 0) {
    OSSL_CMP_SRV_CTX_set_grant_implicit_confirm(lVar5,1);
  }
  if (opt_failure == 0x80000000) {
LAB_00106b90:
    if (0x7ffffff < opt_failurebits) {
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: -failurebits out of range%s%s%s\n","setup_srv_ctx",
                   "apps/cmp.c",0x4f8,"error",&_LC3,&_LC3,&_LC3);
      }
      goto LAB_001068a0;
    }
  }
  else {
    if (0x1a < opt_failure) {
      if (2 < opt_verbosity) {
        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: -failure out of range, should be >= 0 and <= %d%s%s\n"
                   ,"setup_srv_ctx","apps/cmp.c",0x4ee,"error",0x1a,&_LC3,&_LC3);
      }
      goto LAB_001068a0;
    }
    if (opt_failurebits != 0) {
      if (3 < opt_verbosity) {
        BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -failurebits overrides -failure%s%s%s\n",
                   "setup_srv_ctx","apps/cmp.c",0x4f3,"warning",&_LC3,&_LC3,&_LC3);
      }
      goto LAB_00106b90;
    }
    opt_failurebits = 1 << ((byte)opt_failure & 0x1f);
  }
  iVar2 = ossl_cmp_mock_srv_set_statusInfo(lVar5,opt_pkistatus,opt_failurebits,opt_statusstring);
  if (iVar2 != 0) {
    if (opt_send_error != 0) {
      ossl_cmp_mock_srv_set_sendError(lVar5,1);
    }
    if (opt_send_unprotected != 0) {
      OSSL_CMP_CTX_set_option(uVar3,0x1e,1);
    }
    if (opt_send_unprot_err != 0) {
      OSSL_CMP_SRV_CTX_set_send_unprotected_errors(lVar5,1);
    }
    if (opt_accept_unprotected != 0) {
      OSSL_CMP_SRV_CTX_set_accept_unprotected(lVar5,1);
    }
    if (opt_accept_unprot_err != 0) {
      OSSL_CMP_CTX_set_option(uVar3,0x1f,1);
    }
    if (opt_accept_raverified != 0) {
      OSSL_CMP_SRV_CTX_set_accept_raverified(lVar5,1);
      return lVar5;
    }
    return lVar5;
  }
LAB_001068a0:
  ossl_cmp_mock_srv_free(lVar5);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool cmp_main(int param_1,undefined8 *param_2)

{
  X509 *x;
  int iVar1;
  uint uVar2;
  int iVar3;
  CONF *conf;
  size_t sVar4;
  undefined *puVar5;
  stack_st_CONF_VALUE *psVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  X509_STORE *v;
  long lVar11;
  void *pvVar12;
  long lVar13;
  ASN1_OBJECT *pAVar14;
  long lVar15;
  BIO *pBVar16;
  EVP_CIPHER *enc;
  undefined8 uVar17;
  long lVar18;
  X509_CRL *a;
  X509_NAME *b;
  X509_NAME *a_00;
  BIO_METHOD *type;
  X509 *pXVar19;
  int iVar20;
  undefined *puVar21;
  char *in_R9;
  char *pcVar22;
  EVP_PKEY *x_00;
  int iVar23;
  char *pcVar24;
  long in_FS_OFFSET;
  bool bVar25;
  int local_b4;
  X509 *local_b0;
  X509 *local_a8;
  X509 *local_a0;
  char local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prog = opt_appname(*param_2);
  if (param_1 < 2) {
    opt_help(cmp_options);
  }
  else {
    iVar23 = 1;
    pcVar22 = "config";
    if (param_1 != 2) {
      do {
        while( true ) {
          if (*(char *)param_2[iVar23] != '-') break;
          pcVar24 = (char *)param_2[iVar23] + 1;
          iVar1 = strcmp(pcVar24,"config");
          if (iVar1 == 0) {
            opt_config = (char *)param_2[(long)iVar23 + 1];
            uVar2 = opt_verbosity;
          }
          else {
            iVar1 = strcmp(pcVar24,"section");
            if (iVar1 == 0) {
              opt_section = (undefined *)param_2[(long)iVar23 + 1];
              uVar2 = opt_verbosity;
            }
            else {
              iVar1 = strcmp(pcVar24,"verbosity");
              if (iVar1 != 0) break;
              lVar11 = strtol((char *)param_2[(long)iVar23 + 1],(char **)0x0,10);
              uVar2 = (uint)lVar11;
              if (8 < (uint)lVar11) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: Logging verbosity level %d out of range (0 .. 8)%s%s\n"
                             ,"set_verbosity","apps/cmp.c",0x2fb,"error",lVar11,&_LC3,&_LC3);
                }
                goto LAB_00107050;
              }
            }
          }
          opt_verbosity = uVar2;
          iVar23 = iVar23 + 2;
          if (param_1 + -1 <= iVar23) goto LAB_00106da4;
        }
        iVar23 = iVar23 + 1;
      } while (iVar23 < param_1 + -1);
    }
LAB_00106da4:
    if (*opt_section == '\0') {
      opt_section = _LC233;
    }
    vpm = X509_VERIFY_PARAM_new();
    if (vpm == (X509_VERIFY_PARAM *)0x0) {
      if (2 < (int)opt_verbosity) {
        x_00 = (EVP_PKEY *)0x0;
        bVar25 = true;
        BIO_printf(_bio_err,"%s:%s:%d:CMP %s: out of memory%s%s%s\n","cmp_main","apps/cmp.c",0xe20,
                   "error",&_LC3,&_LC3,&_LC3);
        lVar11 = 0;
        goto LAB_0010705b;
      }
    }
    else {
      if (opt_config == (char *)0x0) {
        pcVar24 = _default_config_file;
        if ((_default_config_file != (char *)0x0) && (*_default_config_file != '\0')) {
LAB_0010798e:
          iVar23 = access(pcVar24,0);
          if (iVar23 != -1) goto LAB_00106df3;
        }
LAB_00106f5b:
        x_00 = (EVP_PKEY *)0x0;
      }
      else {
        pcVar24 = opt_config;
        if (*opt_config == '\0') goto LAB_00106f5b;
        if (opt_config == _default_config_file) goto LAB_0010798e;
LAB_00106df3:
        if (5 < (int)opt_verbosity) {
          in_R9 = "info";
          BIO_printf(_bio_out,
                     "%s:%s:%d:CMP %s: using section(s) \'%s\' of OpenSSL configuration file \'%s\'%s\n"
                     ,"cmp_main");
        }
        conf = (CONF *)app_load_config_internal(pcVar24,0);
        pcVar22 = opt_section;
        ::conf = conf;
        if (conf == (CONF *)0x0) goto LAB_00107050;
        iVar23 = strcmp(opt_section,"cmp");
        if (iVar23 != 0) {
          sVar4 = strlen(pcVar22);
          puVar5 = pcVar22 + sVar4;
          puVar21 = pcVar22;
          do {
            if ((puVar5 == puVar21) ||
               (puVar5 = (undefined *)prev_item_part_0(puVar21,puVar5), puVar5 == (undefined *)0x0))
            goto LAB_00106e8c;
            psVar6 = NCONF_get_section(::conf,opt_item);
            puVar21 = opt_section;
          } while (psVar6 != (stack_st_CONF_VALUE *)0x0);
          if (2 < (int)opt_verbosity) {
            BIO_printf(_bio_err,"%s:%s:%d:CMP %s: no [%s] section found in config file \'%s\'%s\n",
                       "cmp_main","apps/cmp.c",0xe39,"error",opt_item,pcVar24,&_LC3);
          }
          goto LAB_00107050;
        }
        psVar6 = NCONF_get_section(conf,pcVar22);
        if ((psVar6 == (stack_st_CONF_VALUE *)0x0) && (5 < (int)opt_verbosity)) {
          in_R9 = "info";
          BIO_printf(_bio_out,
                     "%s:%s:%d:CMP %s: no [%s] section found in config file \'%s\'; will thus use just [default] and unnamed section if present%s\n"
                     ,"cmp_main");
        }
LAB_00106e8c:
        uVar2 = read_config();
        x_00 = (EVP_PKEY *)(ulong)uVar2;
        if (8 < opt_verbosity) {
          if (2 < (int)opt_verbosity) {
            BIO_printf(_bio_err,
                       "%s:%s:%d:CMP %s: Logging verbosity level %d out of range (0 .. 8)%s%s\n",
                       "set_verbosity","apps/cmp.c",0x2fb,"error",(ulong)opt_verbosity,&_LC3,&_LC3);
          }
LAB_00107e34:
          bVar25 = false;
          lVar11 = 0;
          x_00 = (EVP_PKEY *)0xffffffff;
          BIO_printf(_bio_err,"Use -help for summary.\n");
          goto LAB_0010705b;
        }
        if ((int)uVar2 < 1) {
          if (uVar2 != 0xffffffff) {
            bVar25 = uVar2 == 0;
            lVar11 = 0;
            goto LAB_0010705b;
          }
          goto LAB_00107e34;
        }
      }
      BIO_ctrl(_bio_err,0xb,0,(void *)0x0);
      uVar10 = app_get0_propq();
      uVar7 = app_get0_libctx();
      cmp_ctx = OSSL_CMP_CTX_new(uVar7,uVar10);
      if (cmp_ctx == 0) {
        bVar25 = (int)x_00 == 0;
        lVar11 = 0;
        goto LAB_0010705b;
      }
      prog = opt_init(param_1,param_2,cmp_options);
      uVar2 = opt_verbosity;
switchD_00106ff7_caseD_0:
      do {
        opt_verbosity = uVar2;
        uVar8 = opt_next();
        iVar23 = (int)uVar8;
        if (iVar23 == 0) {
          x_00 = (EVP_PKEY *)(uVar8 & 0xffffffff);
          iVar23 = opt_check_rest_arg(0);
          if (iVar23 != 0) {
            iVar23 = app_RAND_load();
            if (iVar23 == 0) goto LAB_00107050;
            if (opt_batch != 0) {
              uVar10 = UI_null();
              set_base_ui_method(uVar10);
            }
            lVar11 = opt_engine;
            if ((opt_engine != 0) && (lVar11 = setup_engine_methods(opt_engine,0,0), lVar11 == 0)) {
              if (2 < (int)opt_verbosity) {
                BIO_printf(_bio_err,"%s:%s:%d:CMP %s: cannot load engine %s%s%s\n","cmp_main",
                           "apps/cmp.c",0xe5e,"error",opt_engine,&_LC3,&_LC3);
              }
              goto LAB_00107050;
            }
            OSSL_CMP_CTX_set_option(cmp_ctx,0,opt_verbosity);
            iVar23 = OSSL_CMP_CTX_set_log_cb(cmp_ctx,print_to_bio_out);
            if (iVar23 == 0) {
              if (2 < (int)opt_verbosity) {
                uVar10 = 0xe65;
LAB_001079d3:
                BIO_printf(_bio_err,
                           "%s:%s:%d:CMP %s: cannot set up error reporting and logging for %s%s%s\n"
                           ,"cmp_main","apps/cmp.c",uVar10,"error",prog,&_LC3,&_LC3);
              }
              goto LAB_001072db;
            }
            if (((((opt_tls_cert == 0) && (opt_tls_key == 0)) && (opt_tls_keypass == 0)) &&
                ((opt_tls_extra == 0 && (opt_tls_trusted == 0)))) && (opt_tls_host == 0)) {
              if (opt_tls_used == 0) {
LAB_001072b2:
                if (opt_port == 0) goto LAB_00107e79;
              }
              else {
                if ((int)opt_verbosity < 4) goto LAB_00107e6b;
                in_R9 = "warning";
                BIO_printf(_bio_out,
                           "%s:%s:%d:CMP %s: -tls_used given without any other TLS options%s%s%s\n",
                           "cmp_main");
LAB_001084d5:
                if (opt_port == 0) goto LAB_00107e79;
                if (opt_tls_used != 0) goto LAB_001084f3;
              }
              if ((opt_server != 0) || (opt_use_mock_srv != 0)) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: The -port option excludes -server and -use_mock_srv%s%s%s\n"
                             ,"cmp_main","apps/cmp.c",0xe78,"error",&_LC3,&_LC3,&_LC3);
                }
                goto LAB_001072db;
              }
              if ((opt_reqin != 0) || (opt_reqout != 0)) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: The -port option does not support -reqin and -reqout%s%s%s\n"
                             ,"cmp_main","apps/cmp.c",0xe7c,"error",&_LC3,&_LC3,&_LC3);
                }
                goto LAB_001072db;
              }
              if ((opt_rspin != 0) || (opt_rspout != 0)) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: The -port option does not support -rspin and -rspout%s%s%s\n"
                             ,"cmp_main","apps/cmp.c",0xe80,"error",&_LC3,&_LC3,&_LC3,in_R9);
                }
                goto LAB_001072db;
              }
            }
            else {
              if (opt_tls_used == 0) {
                if (3 < (int)opt_verbosity) {
                  in_R9 = "warning";
                  BIO_printf(_bio_out,
                             "%s:%s:%d:CMP %s: ignoring TLS options(s) since -tls_used is not given%s%s%s\n"
                             ,"cmp_main");
                  goto LAB_001084d5;
                }
                goto LAB_001072b2;
              }
LAB_00107e6b:
              if (opt_port != 0) {
LAB_001084f3:
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: -tls_used option not supported with -port option%s%s%s\n"
                             ,"cmp_main","apps/cmp.c",0xe74,"error",&_LC3,&_LC3,&_LC3);
                }
                goto LAB_001072db;
              }
LAB_00107e79:
              if ((opt_server != 0) && (opt_use_mock_srv != 0)) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: cannot use both -server and -use_mock_srv options%s%s%s\n"
                             ,"cmp_main","apps/cmp.c",0xe85,"error",&_LC3,&_LC3,&_LC3);
                }
                goto LAB_001072db;
              }
            }
            if (opt_ignore_keyusage != 0) {
              OSSL_CMP_CTX_set_option(cmp_ctx,0x23,1);
            }
            if (opt_no_cache_extracerts != 0) {
              OSSL_CMP_CTX_set_option(cmp_ctx,0x25,1);
            }
            uVar10 = 0;
            if (opt_reqout_only == 0) {
              if ((opt_use_mock_srv != 0) || (opt_port != 0)) {
                lVar18 = setup_srv_ctx(lVar11);
                if (lVar18 != 0) {
                  uVar10 = OSSL_CMP_SRV_CTX_get0_cmp_ctx(lVar18);
                  OSSL_CMP_CTX_set_transfer_cb_arg(cmp_ctx,lVar18);
                  iVar23 = OSSL_CMP_CTX_set_log_cb(uVar10,0x100000);
                  if (iVar23 != 0) {
                    OSSL_CMP_CTX_set_option(uVar10,0,opt_verbosity);
                    goto LAB_00107ebf;
                  }
                  if (2 < (int)opt_verbosity) {
                    uVar10 = 0xe9c;
                    goto LAB_001079d3;
                  }
                }
                goto LAB_001072db;
              }
              if ((opt_tls_used != 0) && (opt_server == 0)) {
                uVar10 = 0;
                goto LAB_00107ed7;
              }
            }
            else {
LAB_00107ebf:
              if ((opt_tls_used != 0) && ((opt_use_mock_srv != 0 || (opt_server == 0)))) {
LAB_00107ed7:
                if (3 < (int)opt_verbosity) {
                  in_R9 = "warning";
                  BIO_printf(_bio_out,
                             "%s:%s:%d:CMP %s: ignoring -tls_used option since -use_mock_srv is given or -server is not given%s%s%s\n"
                             ,"cmp_main");
                }
                opt_tls_used = 0;
              }
              if (opt_port != 0) {
                local_b0 = (X509 *)0x0;
                local_b4 = 0;
                pBVar16 = (BIO *)http_server_init(prog,opt_port,opt_verbosity);
                if (pBVar16 == (BIO *)0x0) goto LAB_001072db;
                bVar25 = true;
                iVar23 = 0;
                goto LAB_00108a39;
              }
            }
            if (opt_reqout_only == 0) {
LAB_001088e4:
              if (opt_rspin != 0) {
                if (opt_server != 0) {
                  if ((int)opt_verbosity < 4) goto LAB_00107f86;
                  in_R9 = "warning";
                  BIO_printf(_bio_out,
                             "%s:%s:%d:CMP %s: -server option is not used if enough filenames given for -rspin%s%s%s\n"
                             ,"cmp_main");
                }
LAB_00108943:
                if ((opt_use_mock_srv != 0) && (3 < (int)opt_verbosity)) {
                  in_R9 = "warning";
                  BIO_printf(_bio_out,
                             "%s:%s:%d:CMP %s: -use_mock_srv option is not used if enough filenames given for -rspin%s%s%s\n"
                             ,"cmp_main");
                }
              }
            }
            else {
              if ((opt_server != 0) && (3 < (int)opt_verbosity)) {
                in_R9 = "warning";
                BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -server %s%s%s\n","cmp_main");
              }
              if ((opt_use_mock_srv != 0) && (3 < (int)opt_verbosity)) {
                in_R9 = "warning";
                BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -use_mock_srv %s%s%s\n","cmp_main");
              }
              if (opt_reqout == 0) {
LAB_0010880f:
                if (opt_rspin != 0) {
                  if ((int)opt_verbosity < 4) goto LAB_00107f6a;
                  in_R9 = "warning";
                  BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -rspin %s%s%s\n","cmp_main");
                }
LAB_0010886d:
                if ((opt_rspout != 0) && (3 < (int)opt_verbosity)) {
                  in_R9 = "warning";
                  BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -rspout %s%s%s\n","cmp_main");
                }
                opt_reqout = opt_reqout_only;
                goto LAB_001088e4;
              }
              if (3 < (int)opt_verbosity) {
                in_R9 = "warning";
                BIO_printf(_bio_out,"%s:%s:%d:CMP %s: -reqout %s%s%s\n","cmp_main");
                goto LAB_0010880f;
              }
              if (opt_rspin == 0) goto LAB_0010886d;
LAB_00107f6a:
              opt_reqout = opt_reqout_only;
              if (opt_server == 0) goto LAB_00108943;
            }
LAB_00107f86:
            uVar10 = setup_client_ctx(cmp_ctx,lVar11);
            if ((int)uVar10 == 0) {
              if (2 < (int)opt_verbosity) {
                BIO_printf(_bio_err,"%s:%s:%d:CMP %s: cannot set up CMP context%s%s%s\n","cmp_main",
                           "apps/cmp.c",0xec9,"error",&_LC3,&_LC3,&_LC3,uVar10);
              }
              goto LAB_001072db;
            }
            if (opt_repeat < 1) goto LAB_0010822f;
            iVar23 = 0;
            lVar18 = 0;
            goto LAB_00107fc1;
          }
          break;
        }
        uVar2 = opt_verbosity;
        if (iVar23 < 0x4a) {
          if (-2 < iVar23) {
            switch(iVar23) {
            case 1:
              bVar25 = false;
              x_00 = (EVP_PKEY *)0xffffffff;
              lVar11 = 0;
              opt_help(cmp_options);
              goto LAB_0010705b;
            case 4:
              uVar10 = opt_int_arg();
              uVar2 = (uint)uVar10;
              if (8 < (uint)uVar10) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: Logging verbosity level %d out of range (0 .. 8)%s%s\n"
                             ,"set_verbosity","apps/cmp.c",0x2fb,"error",uVar10,&_LC3,&_LC3);
                }
                goto LAB_00107039;
              }
              break;
            case 5:
              opt_cmd_s = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 6:
              opt_infotype_s = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 7:
              opt_profile = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 8:
              opt_geninfo = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 9:
              opt_template = (char *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 10:
              opt_keyspec = (char *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0xb:
              opt_newkey = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0xc:
              opt_newkeypass = (EVP_CIPHER *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0xd:
              opt_centralkeygen = 1;
              break;
            case 0xe:
              opt_newkeyout = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0xf:
              opt_subject = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x10:
              opt_days = opt_int_arg();
              uVar2 = opt_verbosity;
              break;
            case 0x11:
              opt_reqexts = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x12:
              opt_sans = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x13:
              opt_san_nodefault = 1;
              break;
            case 0x14:
              opt_policies = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x15:
              opt_policy_oids = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x16:
              opt_policy_oids_critical = 1;
              break;
            case 0x17:
              opt_popo = opt_int_arg();
              uVar2 = opt_verbosity;
              if (3 < opt_popo + 1U) {
                if ((int)opt_verbosity < 3) goto LAB_00107039;
                BIO_printf(_bio_err,
                           "%s:%s:%d:CMP %s: invalid popo spec. Valid values are -1 .. 2%s%s%s\n",
                           "get_opts","apps/cmp.c",0xbca,"error",&_LC3,&_LC3,&_LC3,x_00);
                goto switchD_00106ff7_caseD_ffffffff;
              }
              break;
            case 0x18:
              opt_csr = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x19:
              opt_out_trusted = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x1a:
              opt_implicit_confirm = 1;
              break;
            case 0x1b:
              opt_disable_confirm = 1;
              break;
            case 0x1c:
              opt_certout = (char *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x1d:
              opt_chainout = (char *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x1e:
              opt_oldcert = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x1f:
              opt_issuer = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x20:
              opt_serial = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x21:
              opt_revreason = opt_int_arg();
              if ((0xb < opt_revreason + 1U) || (uVar2 = opt_verbosity, opt_revreason == 7)) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: invalid revreason. Valid values are -1 .. 6, 8 .. 10%s%s%s\n"
                             ,"get_opts","apps/cmp.c",0xbe8,"error",&_LC3,&_LC3,&_LC3,pcVar22);
                }
                goto LAB_00107039;
              }
              break;
            case 0x22:
              opt_server = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x23:
              opt_proxy = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x24:
              opt_no_proxy = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x25:
              opt_recipient = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x26:
              opt_path = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x27:
              opt_keep_alive = opt_int_arg();
              uVar2 = opt_verbosity;
              if (2 < opt_keep_alive) {
                if (2 < (int)opt_verbosity) {
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: -keep_alive argument must be 0, 1, or 2%s%s%s\n",
                             "get_opts","apps/cmp.c",0xb17,"error",&_LC3,&_LC3,&_LC3,pcVar24);
                }
                goto LAB_00107039;
              }
              break;
            case 0x28:
              opt_msg_timeout = opt_int_arg();
              uVar2 = opt_verbosity;
              break;
            case 0x29:
              opt_total_timeout = opt_int_arg();
              uVar2 = opt_verbosity;
              break;
            case 0x2a:
              opt_trusted = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x2b:
              opt_untrusted = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x2c:
              opt_srvcert = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x2d:
              opt_expect_sender = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x2e:
              opt_ignore_keyusage = 1;
              break;
            case 0x2f:
              opt_unprotected_errors = 1;
              break;
            case 0x30:
              opt_no_cache_extracerts = 1;
              break;
            case 0x31:
              opt_srvcertout = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x32:
              opt_extracertsout = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x33:
              opt_cacertsout = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x34:
              opt_oldwithold = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x35:
              opt_newwithnew = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x36:
              opt_newwithold = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x37:
              opt_oldwithnew = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x38:
              opt_crlcert = (X509 *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x39:
              opt_oldcrl = (X509_CRL *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x3a:
              opt_crlout = (void *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x3b:
              opt_ref = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x3c:
              opt_secret = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x3d:
              opt_cert = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x3e:
              opt_own_trusted = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x3f:
              opt_key = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x40:
              opt_keypass = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x41:
              opt_digest = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x42:
              opt_mac = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x43:
              opt_extracerts = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x44:
              opt_unprotected_requests = 1;
              break;
            case 0x45:
              opt_certform_s = (undefined *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x46:
              opt_crlform_s = (undefined *)opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x47:
              opt_keyform_s = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x48:
              opt_otherpass = opt_str();
              uVar2 = opt_verbosity;
              break;
            case 0x49:
              opt_engine = opt_str();
              uVar2 = opt_verbosity;
              break;
            case -1:
              goto switchD_00106ff7_caseD_ffffffff;
            }
          }
          goto switchD_00106ff7_caseD_0;
        }
        if (iVar23 < 0x645) {
          if (iVar23 < 0x5dd) goto switchD_00106ff7_caseD_0;
          switch(iVar23) {
          case 0x5dd:
          case 0x5de:
            iVar23 = opt_rand();
            uVar2 = opt_verbosity;
            if (iVar23 == 0) goto switchD_00106ff7_caseD_ffffffff;
          default:
            goto switchD_00106ff7_caseD_0;
          case 0x5e0:
            opt_tls_used = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x5e1:
            opt_tls_cert = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5e2:
            opt_tls_key = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5e3:
            opt_tls_keypass = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5e4:
            opt_tls_extra = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5e5:
            opt_tls_trusted = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5e6:
            opt_tls_host = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5e7:
            opt_batch = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x5e8:
            opt_repeat = opt_int_arg();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5e9:
            opt_reqin = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5ea:
            opt_reqin_new_tid = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x5eb:
            opt_reqout = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5ec:
            opt_reqout_only = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5ed:
            opt_rspin = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5ee:
            opt_rspout = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5ef:
            opt_use_mock_srv = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x5f0:
            opt_port = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f1:
            opt_max_msgs = opt_int_arg();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f2:
            opt_srv_ref = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f3:
            opt_srv_secret = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f4:
            opt_srv_cert = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f5:
            opt_srv_key = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f6:
            opt_srv_keypass = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f7:
            opt_srv_trusted = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f8:
            opt_srv_untrusted = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5f9:
            opt_ref_cert = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5fa:
            opt_rsp_cert = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5fb:
            opt_rsp_key = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5fc:
            opt_rsp_keypass = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5fd:
            opt_rsp_crl = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5fe:
            opt_rsp_extracerts = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x5ff:
            opt_rsp_capubs = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x600:
            opt_rsp_newwithnew = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x601:
            opt_rsp_newwithold = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x602:
            opt_rsp_oldwithnew = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x603:
            opt_poll_count = opt_int_arg();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x604:
            opt_check_after = opt_int_arg();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x605:
            opt_grant_implicitconf = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x606:
            opt_pkistatus = opt_int_arg();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x607:
            opt_failure = opt_int_arg();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x608:
            opt_failurebits = opt_int_arg();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x609:
            opt_statusstring = opt_str();
            uVar2 = opt_verbosity;
            goto switchD_00106ff7_caseD_0;
          case 0x60a:
            opt_send_error = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x60b:
            opt_send_unprotected = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x60c:
            opt_send_unprot_err = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x60d:
            opt_accept_unprotected = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x60e:
            opt_accept_unprot_err = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x60f:
            opt_accept_raverified = 1;
            goto switchD_00106ff7_caseD_0;
          case 0x641:
          case 0x642:
          case 0x643:
          case 0x644:
            iVar23 = opt_provider();
          }
        }
        else {
          if (0x1d < iVar23 - 0x7d1U) goto switchD_00106ff7_caseD_0;
          iVar23 = opt_verify();
        }
        uVar2 = opt_verbosity;
      } while (iVar23 != 0);
switchD_00106ff7_caseD_ffffffff:
LAB_00107039:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",prog);
    }
  }
LAB_00107050:
  bVar25 = true;
  x_00 = (EVP_PKEY *)0x0;
  lVar11 = 0;
  goto LAB_0010705b;
LAB_00108a39:
  do {
    uVar7 = prog;
    local_a8 = (X509 *)0x0;
    local_a0 = (X509 *)0x0;
    uVar17 = OSSL_CMP_MSG_it();
    iVar1 = http_server_get_asn1_req
                      (uVar17,&local_a0,&local_a8,&local_b0,pBVar16,&local_b4,uVar7,0,0);
    pXVar19 = local_a8;
    if (iVar1 == 0) {
      if (!bVar25) goto LAB_00108a97;
      OSSL_sleep(1000);
      bVar25 = false;
      uVar2 = 0;
    }
    else {
      if (iVar1 == -1) goto LAB_001090df;
      iVar23 = iVar23 + 1;
      if (local_a0 == (X509 *)0x0) {
LAB_00108a97:
        uVar2 = 0;
        OSSL_CMP_CTX_set1_transactionID(uVar10,0);
        OSSL_CMP_CTX_set1_senderNonce(uVar10,0);
      }
      else {
        if ((*(char *)&local_a8->cert_info != '\0') &&
           (iVar1 = strcmp((char *)local_a8,"pkix/"), iVar1 != 0)) {
          uVar7 = http_server_send_status(prog,local_b0,0x194,"Not Found");
          if (2 < (int)opt_verbosity) {
            BIO_printf(_bio_err,
                       "%s:%s:%d:CMP %s: expecting empty path or \'pkix/\' but got \'%s\'%s%s\n",
                       "cmp_server","apps/cmp.c",0xcb9,"error",local_a8,&_LC3,&_LC3,uVar7);
          }
          CRYPTO_free(local_a8);
          OSSL_CMP_MSG_free(local_a0);
          goto LAB_00108a97;
        }
        CRYPTO_free(pXVar19);
        lVar18 = OSSL_CMP_CTX_server_perform(cmp_ctx,local_a0);
        OSSL_CMP_MSG_free(local_a0);
        if (lVar18 == 0) {
          http_server_send_status(prog,local_b0,500,"Internal Server Error");
LAB_001090df:
          bVar25 = true;
          goto LAB_00108ae5;
        }
        uVar7 = OSSL_CMP_MSG_it();
        uVar2 = http_server_send_asn1_resp
                          (prog,local_b0,local_b4,"application/pkixcmp",uVar7,lVar18);
        OSSL_CMP_MSG_free(lVar18);
        if (uVar2 == 0) goto LAB_001090df;
        if ((local_b4 != 0) && (iVar1 = OSSL_CMP_CTX_get_status(uVar10), iVar1 == -2))
        goto LAB_00108ac1;
      }
      BIO_free_all((BIO *)local_b0);
      local_b0 = (X509 *)0x0;
    }
LAB_00108ac1:
  } while ((iVar23 < opt_max_msgs) || (opt_max_msgs < 1));
  bVar25 = uVar2 == 0;
  x_00 = (EVP_PKEY *)(ulong)uVar2;
LAB_00108ae5:
  BIO_free_all((BIO *)local_b0);
  BIO_free_all(pBVar16);
  goto LAB_0010705b;
LAB_001072db:
  x_00 = (EVP_PKEY *)(uVar8 & 0xffffffff);
  bVar25 = true;
  goto LAB_0010705b;
  while( true ) {
    iVar1 = OSSL_CMP_CTX_get_status(cmp_ctx);
    pvVar12 = (void *)app_malloc(0x400,"PKIStatusInfo buf");
    OSSL_CMP_CTX_snprint_PKIStatus(cmp_ctx,pvVar12,0x400);
    if (((iVar1 != 0) && (1 < iVar1 - 2U)) && (3 < (int)opt_verbosity)) {
      in_R9 = "warning";
      BIO_printf(_bio_err,"%s:%s:%d:CMP %s: received%s%s %s\n","print_status");
    }
    CRYPTO_free(pvVar12);
    uVar10 = opt_srvcertout;
    uVar7 = OSSL_CMP_CTX_get0_validatedSrvCert(cmp_ctx);
    iVar1 = save_cert_or_delete(uVar7,uVar10,"validated server");
    uVar10 = opt_extracertsout;
    if (((int)x_00 == 0) || (iVar1 == 0)) goto LAB_001072db;
    uVar7 = OSSL_CMP_CTX_get1_extraCertsIn(cmp_ctx);
    iVar1 = save_free_certs(uVar7,uVar10,"extra");
    if (iVar1 < 0) goto LAB_001072db;
    if ((lVar18 != 0) && (opt_cmd < 4)) {
      lVar13 = OSSL_CMP_CTX_get1_newChain(cmp_ctx);
      pcVar22 = opt_chainout;
      if ((lVar13 == 0) ||
         (((opt_certout == (char *)0x0 || (opt_chainout == (char *)0x0)) ||
          (iVar1 = strcmp(opt_certout,opt_chainout), iVar1 != 0)))) {
        iVar1 = save_free_certs(lVar13,pcVar22,"chain");
        if (iVar1 < 0) goto LAB_001072db;
        iVar1 = save_cert_or_delete(lVar18,opt_certout,"newly enrolled");
        lVar13 = opt_cacertsout;
      }
      else {
        iVar1 = X509_add_cert(lVar13,lVar18,3);
        if (iVar1 == 0) {
          OPENSSL_sk_pop_free(lVar13,X509_free);
          goto LAB_001072db;
        }
        iVar1 = save_free_certs(lVar13,opt_chainout,"newly enrolled cert and chain");
        lVar13 = opt_cacertsout;
      }
      opt_cacertsout = lVar13;
      if (iVar1 == 0) goto LAB_001072db;
      uVar10 = OSSL_CMP_CTX_get1_caPubs(cmp_ctx);
      iVar1 = save_free_certs(uVar10,lVar13,&_LC269);
      if (iVar1 < 0) goto LAB_001072db;
      if (opt_centralkeygen != 0) {
        x_00 = (EVP_PKEY *)OSSL_CMP_CTX_get0_newPkey(cmp_ctx,1);
        if ((x_00 == (EVP_PKEY *)0x0) ||
           (pBVar16 = (BIO *)bio_open_owner(opt_newkeyout,0x8005,1), pBVar16 == (BIO *)0x0))
        goto LAB_001072db;
        pvVar12 = (void *)0x0;
        enc = opt_newkeypass;
        if (opt_newkeypass != (EVP_CIPHER *)0x0) {
          pvVar12 = (void *)get_passwd(opt_newkeypass,"Centrally generated private key password");
          uVar10 = app_get0_propq();
          uVar7 = app_get0_libctx();
          enc = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar7,"AES-256-CBC",uVar10);
        }
        if (5 < (int)opt_verbosity) {
          BIO_printf(_bio_out,"%s:%s:%d:CMP %s: saving centrally generated key to file \'%s\'%s%s\n"
                     ,"cmp_main");
        }
        in_R9 = (char *)0x0;
        iVar1 = PEM_write_bio_PrivateKey(pBVar16,x_00,enc,(uchar *)0x0,0,(undefined1 *)0x0,pvVar12);
        if (iVar1 < 1) {
          BIO_free(pBVar16);
          clear_free(pvVar12);
          EVP_CIPHER_free(enc);
          goto LAB_001072db;
        }
        BIO_free(pBVar16);
        clear_free(pvVar12);
        EVP_CIPHER_free(enc);
      }
    }
    iVar1 = OSSL_CMP_CTX_reinit(cmp_ctx);
    if (iVar1 == 0) goto LAB_001072db;
    iVar23 = iVar23 + 1;
    if (opt_repeat <= iVar23) break;
LAB_00107fc1:
    lVar15 = cmp_ctx;
    lVar13 = opt_oldwithold;
    pXVar19 = opt_crlcert;
    switch(opt_cmd) {
    case 0:
      uVar10 = 0;
      break;
    case 1:
      uVar10 = 7;
      break;
    case 2:
      uVar10 = 2;
      break;
    case 3:
      uVar10 = 4;
      break;
    case 4:
      uVar2 = OSSL_CMP_exec_RR_ses(cmp_ctx);
      x_00 = (EVP_PKEY *)(ulong)uVar2;
      goto LAB_00107ffe;
    case 5:
      if (opt_infotype == 0x4c7) {
        local_a0 = (X509 *)0x0;
        if (opt_cacertsout == 0) {
          if (2 < (int)opt_verbosity) {
            pcVar22 = "%s:%s:%d:CMP %s: Missing -cacertsout option for -infotype caCerts%s%s%s\n";
LAB_001090a1:
            in_R9 = "error";
            BIO_printf(_bio_err,pcVar22,"do_genm");
          }
        }
        else {
          iVar1 = OSSL_CMP_get1_caCerts(cmp_ctx,&local_a0);
          if (iVar1 != 0) {
            if (local_a0 == (X509 *)0x0) {
              if (3 < (int)opt_verbosity) {
                in_R9 = "warning";
                BIO_printf(_bio_out,"%s:%s:%d:CMP %s: no CA certificates provided by server%s%s%s\n"
                           ,"do_genm");
              }
            }
            else {
              iVar1 = save_free_certs(local_a0,opt_cacertsout,&_LC269);
              if (iVar1 < 0) {
                if (2 < (int)opt_verbosity) {
                  pcVar22 = "%s:%s:%d:CMP %s: Failed to store CA certificates from genp in %s%s%s\n"
                  ;
                  goto LAB_001090a1;
                }
                goto LAB_001090ba;
              }
            }
LAB_0010905f:
            x_00 = (EVP_PKEY *)0x1;
            goto LAB_00107ffe;
          }
        }
LAB_001090ba:
        x_00 = (EVP_PKEY *)0x0;
      }
      else if (opt_infotype == 0x4e6) {
        local_b0 = (X509 *)0x0;
        local_a8 = (X509 *)0x0;
        local_a0 = (X509 *)0x0;
        if (opt_newwithnew == 0) {
          if (2 < (int)opt_verbosity) {
            pcVar22 = "%s:%s:%d:CMP %s: Missing -newwithnew option for -infotype rootCaCert%s%s%s\n"
            ;
            goto LAB_001090a1;
          }
          goto LAB_001090ba;
        }
        if (opt_oldwithold == 0) {
          pXVar19 = (X509 *)0x0;
          if (3 < (int)opt_verbosity) {
            in_R9 = "warning";
            BIO_printf(_bio_out,
                       "%s:%s:%d:CMP %s: No -oldwithold given, will use all certs given with -trusted as trust anchors for verifying the newWithNew cert%s%s%s\n"
                       ,"do_genm","apps/cmp.c",0xd62,"warning",&_LC3,&_LC3,&_LC3,x_00);
          }
LAB_00108f83:
          uVar2 = OSSL_CMP_get1_rootCaKeyUpdate(lVar15,pXVar19,&local_b0);
          x_00 = (EVP_PKEY *)(ulong)uVar2;
          if (uVar2 != 0) {
            if (local_b0 == (X509 *)0x0) {
              if (5 < (int)opt_verbosity) {
                in_R9 = "info";
                BIO_printf(_bio_out,
                           "%s:%s:%d:CMP %s: no root CA certificate update available%s%s%s\n",
                           "do_genm");
              }
            }
            else if (((pXVar19 == (X509 *)0x0) && (local_a0 != (X509 *)0x0)) &&
                    (3 < (int)opt_verbosity)) {
              in_R9 = "warning";
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: oldWithNew certificate received in genp for verifying oldWithOld, but oldWithOld was not provided%s%s%s\n"
                         ,"do_genm");
            }
            iVar1 = save_cert_or_delete(local_b0,opt_newwithnew,"NewWithNew cert from genp");
            if ((iVar1 == 0) ||
               (iVar1 = save_cert_or_delete(local_a8,opt_newwithold,"NewWithOld cert from genp"),
               iVar1 == 0)) {
              x_00 = (EVP_PKEY *)0x0;
            }
            else {
              iVar1 = save_cert_or_delete(local_a0,opt_oldwithnew,"OldWithNew cert from genp");
              x_00 = (EVP_PKEY *)(ulong)(iVar1 != 0);
            }
            X509_free(local_b0);
            X509_free(local_a8);
            X509_free(local_a0);
          }
        }
        else {
          uVar10 = get_passwd(opt_otherpass,"OldWithOld cert for genm with -infotype rootCaCert");
          pXVar19 = (X509 *)load_cert_pass(lVar13,0,0);
          clear_free(uVar10);
          if (pXVar19 != (X509 *)0x0) goto LAB_00108f83;
          x_00 = (EVP_PKEY *)0x0;
        }
        X509_free(pXVar19);
      }
      else {
        if (opt_infotype == 0x4e8) {
          local_a0 = (X509 *)0x0;
          if (opt_oldcrl == (X509_CRL *)0x0) {
            if (opt_crlcert == (X509 *)0x0) {
              if (2 < (int)opt_verbosity) {
                pcVar22 = 
                "%s:%s:%d:CMP %s: Missing -oldcrl and no -crlcert given for -infotype crlStatusList%s%s%s\n"
                ;
                goto LAB_001090a1;
              }
              goto LAB_001090ba;
            }
            if (opt_crlout != (void *)0x0) goto LAB_00109b97;
          }
          else if (opt_crlout != (void *)0x0) {
            pcVar22 = in_R9;
            if (opt_crlcert == (X509 *)0x0) {
LAB_00109a1f:
              a = (X509_CRL *)load_crl(opt_oldcrl,0,0);
              in_R9 = pcVar22;
              if (a == (X509_CRL *)0x0) {
                x_00 = (EVP_PKEY *)0x0;
              }
              else {
                if ((opt_oldcrl != (X509_CRL *)0x0) && (opt_crlcert != (X509 *)0x0)) {
                  b = X509_get_issuer_name(pXVar19);
                  a_00 = (X509_NAME *)X509_CRL_get_issuer(a);
                  iVar1 = X509_NAME_cmp(a_00,b);
                  in_R9 = pcVar22;
                  if ((iVar1 != 0) && (3 < (int)opt_verbosity)) {
                    in_R9 = "warning";
                    BIO_printf(_bio_out,
                               "%s:%s:%d:CMP %s: -oldcrl and -crlcert have different issuer%s%s%s\n"
                               ,"do_genm","apps/cmp.c",0xda2,"warning",&_LC3,&_LC3,&_LC3,pcVar22);
                  }
                }
LAB_00109a81:
                uVar2 = OSSL_CMP_get1_crlUpdate(lVar15,pXVar19,a);
                x_00 = (EVP_PKEY *)(ulong)uVar2;
                if (uVar2 != 0) {
                  if (local_a0 == (X509 *)0x0) {
                    if ((int)opt_verbosity < 6) {
                      if (opt_crlout != (void *)0x0) {
LAB_00109ebc:
                        iVar1 = delete_file(opt_crlout,"CRL from genp of type \'crls\'");
                        goto LAB_00109b4d;
                      }
                    }
                    else {
                      in_R9 = "info";
                      BIO_printf(_bio_out,"%s:%s:%d:CMP %s: no CRL update available%s%s%s\n",
                                 "do_genm");
                      if (opt_crlout != (void *)0x0) {
                        if (local_a0 != (X509 *)0x0) goto LAB_00109ac2;
                        goto LAB_00109ebc;
                      }
                    }
LAB_00109e9c:
                    x_00 = (EVP_PKEY *)0x1;
                  }
                  else {
                    if (opt_crlout == (void *)0x0) goto LAB_00109e9c;
LAB_00109ac2:
                    x = local_a0;
                    pvVar12 = opt_crlout;
                    if (5 < (int)opt_verbosity) {
                      in_R9 = "info";
                      BIO_printf(_bio_out,"%s:%s:%d:CMP %s: received %s, saving to file \'%s\'%s\n",
                                 "save_crl");
                    }
                    type = BIO_s_file();
                    pBVar16 = BIO_new(type);
                    if ((pBVar16 == (BIO *)0x0) ||
                       (lVar13 = BIO_ctrl(pBVar16,0x6c,5,pvVar12), (int)lVar13 == 0)) {
                      if (2 < (int)opt_verbosity) {
                        in_R9 = "error";
                        BIO_printf(_bio_err,
                                   "%s:%s:%d:CMP %s: could not open file \'%s\' for writing %s%s\n",
                                   "save_crl");
                      }
LAB_00109d8f:
                      iVar1 = 0;
                    }
                    else {
                      if (opt_crlform != 0x8005) {
                        if (opt_crlform == 4) {
                          iVar20 = i2d_X509_CRL_bio(pBVar16,(X509_CRL *)x);
                          goto LAB_00109b37;
                        }
                        BIO_printf(_bio_err,"error: unsupported type \'%s\' for writing CRLs\n",
                                   opt_crlform_s);
LAB_00109d86:
                        if (2 < (int)opt_verbosity) {
                          in_R9 = "error";
                          BIO_printf(_bio_err,"%s:%s:%d:CMP %s: cannot write %s to file \'%s\'%s\n",
                                     "save_crl");
                        }
                        goto LAB_00109d8f;
                      }
                      iVar20 = PEM_write_bio_X509_CRL(pBVar16,(X509_CRL *)x);
LAB_00109b37:
                      iVar1 = 1;
                      if (iVar20 == 0) goto LAB_00109d86;
                    }
                    BIO_free(pBVar16);
LAB_00109b4d:
                    x_00 = (EVP_PKEY *)(ulong)(iVar1 != 0);
                  }
                }
              }
            }
            else {
LAB_00109b97:
              uVar10 = get_passwd(opt_otherpass,"Cert for genm with -infotype crlStatusList");
              pXVar19 = (X509 *)load_cert_pass(pXVar19,0,0);
              clear_free(uVar10);
              if (pXVar19 != (X509 *)0x0) {
                pcVar22 = in_R9;
                a = opt_oldcrl;
                if (opt_oldcrl != (X509_CRL *)0x0) goto LAB_00109a1f;
                goto LAB_00109a81;
              }
              x_00 = (EVP_PKEY *)0x0;
              a = (X509_CRL *)0x0;
            }
            X509_free(pXVar19);
            X509_CRL_free(a);
            X509_CRL_free((X509_CRL *)local_a0);
            goto LAB_00107ffe;
          }
          if (2 < (int)opt_verbosity) {
            pcVar22 = "%s:%s:%d:CMP %s: Missing -crlout for -infotype crlStatusList%s%s%s\n";
            goto LAB_001090a1;
          }
          goto LAB_001090ba;
        }
        if (opt_infotype == 0x4c9) {
          iVar1 = OSSL_CMP_get1_certReqTemplate(cmp_ctx,&local_a8,&local_a0);
          pXVar19 = local_a8;
          if (iVar1 != 0) {
            if (local_a8 != (X509 *)0x0) {
              pBVar16 = BIO_new_file(opt_template,"wb");
              if (pBVar16 == (BIO *)0x0) {
                if (2 < (int)opt_verbosity) {
                  in_R9 = "error";
                  BIO_printf(_bio_err,
                             "%s:%s:%d:CMP %s: error saving certTemplate from genp: cannot open file %s%s%s\n"
                             ,"save_template");
                }
LAB_001095d0:
                x_00 = (EVP_PKEY *)0x0;
              }
              else {
                iVar1 = ASN1_i2d_bio(&i2d_OSSL_CRMF_CERTTEMPLATE,pBVar16,(uchar *)pXVar19);
                if (iVar1 == 0) {
                  if (2 < (int)opt_verbosity) {
                    in_R9 = "error";
                    BIO_printf(_bio_err,
                               "%s:%s:%d:CMP %s: error saving certTemplate from genp: cannot write file %s%s%s\n"
                               ,"save_template");
                  }
                  goto LAB_001095d0;
                }
                if (5 < (int)opt_verbosity) {
                  in_R9 = "info";
                  BIO_printf(_bio_out,
                             "%s:%s:%d:CMP %s: stored certTemplate from genp to file \'%s\'%s%s\n",
                             "save_template");
                }
                BIO_free(pBVar16);
                print_keyspec(local_a0);
                pXVar19 = local_a0;
                if (opt_keyspec == (char *)0x0) {
LAB_00109552:
                  x_00 = (EVP_PKEY *)0x1;
                }
                else {
                  if (local_a0 != (X509 *)0x0) {
                    pBVar16 = BIO_new_file(opt_keyspec,"wb");
                    if (pBVar16 == (BIO *)0x0) {
                      if (2 < (int)opt_verbosity) {
                        in_R9 = "error";
                        BIO_printf(_bio_err,
                                   "%s:%s:%d:CMP %s: error saving keySpec from genp: cannot open file %s%s%s\n"
                                   ,"save_keyspec");
                      }
                    }
                    else {
                      iVar1 = ASN1_i2d_bio(&i2d_OSSL_CMP_ATAVS,pBVar16,(uchar *)pXVar19);
                      if (iVar1 != 0) {
                        if (5 < (int)opt_verbosity) {
                          in_R9 = "info";
                          BIO_printf(_bio_out,
                                     "%s:%s:%d:CMP %s: stored keySpec from genp to file \'%s\'%s%s\n"
                                     ,"save_keyspec");
                        }
                        BIO_free(pBVar16);
                        goto LAB_00109552;
                      }
                      if (2 < (int)opt_verbosity) {
                        in_R9 = "error";
                        BIO_printf(_bio_err,
                                   "%s:%s:%d:CMP %s: error saving keySpec from genp: cannot write file %s%s%s\n"
                                   ,"save_keyspec");
                      }
                    }
                    goto LAB_001095d0;
                  }
                  if (3 < (int)opt_verbosity) {
                    in_R9 = "warning";
                    BIO_printf(_bio_out,"%s:%s:%d:CMP %s: no key specifications available%s%s%s\n",
                               "do_genm");
                  }
                  iVar1 = delete_file(opt_keyspec,"keySpec from genp");
                  x_00 = (EVP_PKEY *)(ulong)(iVar1 != 0);
                }
              }
              OSSL_CRMF_CERTTEMPLATE_free(local_a8);
              OPENSSL_sk_pop_free(local_a0,&OSSL_CRMF_ATTRIBUTETYPEANDVALUE_free);
              goto LAB_00107ffe;
            }
            if (3 < (int)opt_verbosity) {
              in_R9 = "warning";
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: no certificate request template available%s%s%s\n",
                         "do_genm");
            }
            iVar1 = delete_file(opt_template,"certTemplate from genp");
            if (iVar1 != 0) {
              if (opt_keyspec == (char *)0x0) goto LAB_0010905f;
              iVar1 = delete_file(opt_keyspec,"keySpec from genp");
              x_00 = (EVP_PKEY *)(ulong)(iVar1 != 0);
              goto LAB_00107ffe;
            }
          }
        }
        else {
          if (opt_infotype != 0) {
            if (3 < (int)opt_verbosity) {
              in_R9 = "warning";
              BIO_printf(_bio_out,
                         "%s:%s:%d:CMP %s: No specific support for -infotype %s available%s%s\n",
                         "do_genm");
            }
            pAVar14 = OBJ_nid2obj(opt_infotype);
            lVar13 = OSSL_CMP_ITAV_create(pAVar14,0);
            if ((lVar13 == 0) || (iVar1 = OSSL_CMP_CTX_push0_genm_ITAV(lVar15,lVar13), iVar1 == 0))
            {
              if (2 < (int)opt_verbosity) {
                pcVar22 = "%s:%s:%d:CMP %s: Failed to create genm for -infotype %s%s%s\n";
                goto LAB_001090a1;
              }
              goto LAB_001090ba;
            }
          }
          lVar13 = OSSL_CMP_exec_GENM_ses(lVar15);
          if (lVar13 != 0) {
            iVar1 = OPENSSL_sk_num(lVar13);
            if (iVar1 < 1) {
              if (5 < (int)opt_verbosity) {
                in_R9 = "info";
                BIO_printf(_bio_out,"%s:%s:%d:CMP %s: genp does not contain any ITAV%s%s%s\n",
                           "print_itavs");
              }
              x_00 = (EVP_PKEY *)0x1;
            }
            else {
              x_00 = (EVP_PKEY *)0x1;
              iVar20 = 1;
              do {
                lVar15 = OPENSSL_sk_value(lVar13,iVar20 + -1);
                pAVar14 = (ASN1_OBJECT *)OSSL_CMP_ITAV_get0_type(lVar15);
                if (lVar15 == 0) {
                  if (2 < (int)opt_verbosity) {
                    in_R9 = "error";
                    BIO_printf(_bio_err,"%s:%s:%d:CMP %s: could not get ITAV #%d from genp%s%s\n",
                               "print_itavs");
                  }
LAB_001091b2:
                  x_00 = (EVP_PKEY *)0x0;
                }
                else {
                  iVar3 = i2t_ASN1_OBJECT(local_98,0x50,pAVar14);
                  if (iVar3 < 1) {
                    if (2 < (int)opt_verbosity) {
                      in_R9 = "error";
                      BIO_printf(_bio_err,
                                 "%s:%s:%d:CMP %s: error parsing type of ITAV #%d from genp%s%s\n",
                                 "print_itavs");
                    }
                    goto LAB_001091b2;
                  }
                  if (5 < (int)opt_verbosity) {
                    in_R9 = "info";
                    BIO_printf(_bio_out,"%s:%s:%d:CMP %s: ITAV #%d from genp infoType=%s%s\n",
                               "print_itavs");
                  }
                }
                iVar20 = iVar20 + 1;
              } while (iVar20 <= iVar1);
            }
            OPENSSL_sk_pop_free(lVar13,OSSL_CMP_ITAV_free);
            goto LAB_00107ffe;
          }
          iVar1 = OSSL_CMP_CTX_get_status();
          if (iVar1 == -3) goto LAB_001090ba;
          if (2 < (int)opt_verbosity) {
            pcVar22 = 
            "%s:%s:%d:CMP %s: Did not receive response on genm or genp is not valid%s%s%s\n";
            goto LAB_001090a1;
          }
        }
        x_00 = (EVP_PKEY *)0x0;
      }
      goto LAB_00107ffe;
    default:
      goto LAB_001090ba;
    }
    lVar18 = OSSL_CMP_exec_certreq(cmp_ctx,uVar10,0);
    x_00 = (EVP_PKEY *)(ulong)(lVar18 != 0);
LAB_00107ffe:
    iVar1 = OSSL_CMP_CTX_get_status(cmp_ctx);
    if (iVar1 < 0) {
      if (reqout_only_done == 0) goto LAB_001072db;
      ERR_clear_error();
      break;
    }
  }
LAB_0010822f:
  bVar25 = false;
  x_00 = (EVP_PKEY *)0x1;
LAB_0010705b:
  cleanse(opt_keypass);
  cleanse(opt_newkeypass);
  cleanse(opt_otherpass);
  cleanse(opt_tls_keypass);
  cleanse(opt_secret);
  cleanse(opt_srv_keypass);
  cleanse(opt_srv_secret);
  if ((int)x_00 != 1) {
    OSSL_CMP_CTX_print_errors(cmp_ctx);
  }
  if (cmp_ctx != 0) {
    puVar9 = (undefined8 *)OSSL_CMP_CTX_get_http_cb_arg();
    OSSL_CMP_CTX_set_http_cb_arg(cmp_ctx,0);
    uVar10 = OSSL_CMP_CTX_get_transfer_cb_arg(cmp_ctx);
    ossl_cmp_mock_srv_free(uVar10);
    v = (X509_STORE *)OSSL_CMP_CTX_get_certConf_cb_arg(cmp_ctx);
    X509_STORE_free(v);
    OSSL_CMP_CTX_free(cmp_ctx);
    if (puVar9 != (undefined8 *)0x0) {
      CRYPTO_free((void *)*puVar9);
      CRYPTO_free((void *)puVar9[1]);
      APP_HTTP_TLS_INFO_free(puVar9);
    }
  }
  X509_VERIFY_PARAM_free(vpm);
  release_engine(lVar11);
  NCONF_free(::conf);
  OSSL_CMP_log_close();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar25;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// This is taking way too long.