
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rsautl_main(undefined8 param_1,undefined8 param_2)

{
  uchar uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  EVP_PKEY *pkey;
  BIO *b;
  BIO *bp;
  uchar *in;
  uchar *out;
  size_t inlen;
  uchar *puVar11;
  uchar *puVar12;
  EVP_PKEY_CTX *ctx;
  X509 *x;
  uchar *puVar13;
  byte bVar14;
  ulong uVar15;
  char cVar16;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_54;
  void *local_50;
  size_t local_48;
  long local_40;
  
  uVar10 = 0;
  bVar2 = false;
  cVar16 = '\x01';
  bVar14 = 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  uVar8 = opt_init(param_1,param_2,rsautl_options);
  bVar3 = false;
  bVar4 = false;
  bVar5 = false;
  local_98 = 1;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_90 = 0;
switchD_001000d3_caseD_0:
  iVar6 = opt_next();
  if (iVar6 != 0) goto LAB_001000b9;
LAB_00100110:
  iVar7 = opt_check_rest_arg(0);
  if (iVar7 == 0) goto switchD_001000d3_caseD_ffffffff;
  iVar7 = app_RAND_load();
  if (iVar7 != 0) {
    if ((cVar16 == '\x01') || (!bVar2)) {
      iVar7 = app_passwd(uVar10,0,&local_50,0);
      if (iVar7 != 0) {
        if (cVar16 == '\x02') {
          pkey = (EVP_PKEY *)load_pubkey(local_80,local_54,0,0);
LAB_00100447:
          if (pkey == (EVP_PKEY *)0x0) goto LAB_001003f6;
          b = (BIO *)bio_open_default(local_78,0x72,2);
          if (b == (BIO *)0x0) {
            out = (uchar *)0x0;
            in = (uchar *)0x0;
            ctx = (EVP_PKEY_CTX *)0x0;
            bp = (BIO *)0x0;
            iVar6 = 1;
          }
          else {
            bp = (BIO *)bio_open_default(local_70,0x77,2);
            if (bp == (BIO *)0x0) {
              out = (uchar *)0x0;
              in = (uchar *)0x0;
              ctx = (EVP_PKEY_CTX *)0x0;
              iVar6 = 1;
            }
            else {
              iVar7 = EVP_PKEY_get_size(pkey);
              in = (uchar *)app_malloc((long)(iVar7 * 2),"hold rsa key");
              out = (uchar *)app_malloc((long)iVar7,"output rsa key");
              local_48 = (long)iVar7;
              iVar7 = BIO_read(b,in,iVar7 * 2);
              if (iVar7 < 0) {
                BIO_printf(_bio_err,"Error reading input Data\n");
                iVar6 = 1;
                ctx = (EVP_PKEY_CTX *)0x0;
              }
              else {
                inlen = (size_t)iVar7;
                if (bVar3) {
                  uVar15 = (ulong)(long)iVar7 >> 1;
                  if (uVar15 != 0) {
                    puVar11 = in;
                    puVar13 = in + ((long)iVar7 - 1);
                    do {
                      uVar1 = *puVar11;
                      puVar12 = puVar11 + 1;
                      *puVar11 = *puVar13;
                      *puVar13 = uVar1;
                      puVar11 = puVar12;
                      puVar13 = puVar13 + -1;
                    } while (puVar12 != in + uVar15);
                  }
                }
                ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(0,pkey,0);
                if (ctx == (EVP_PKEY_CTX *)0x0) {
                  iVar6 = 1;
                }
                else {
                  if (bVar14 == 3) {
                    iVar7 = EVP_PKEY_encrypt_init(ctx);
                    if ((0 < iVar7) &&
                       (iVar7 = EVP_PKEY_CTX_set_rsa_padding(ctx,local_98), 0 < iVar7)) {
                      iVar7 = EVP_PKEY_encrypt(ctx,out,&local_48,in,inlen);
                      goto joined_r0x00100768;
                    }
                  }
                  else if (bVar14 < 4) {
                    if (bVar14 == 1) {
                      iVar7 = EVP_PKEY_sign_init(ctx);
                      if ((0 < iVar7) &&
                         (iVar7 = EVP_PKEY_CTX_set_rsa_padding(ctx,local_98), 0 < iVar7)) {
                        iVar7 = EVP_PKEY_sign(ctx,out,&local_48,in,inlen);
joined_r0x00100768:
                        if (0 < iVar7) goto LAB_001005f1;
                      }
                    }
                    else {
                      if (bVar14 != 2) goto LAB_001006be;
                      iVar7 = EVP_PKEY_verify_recover_init(ctx);
                      if ((0 < iVar7) &&
                         (iVar7 = EVP_PKEY_CTX_set_rsa_padding(ctx,local_98), 0 < iVar7)) {
                        iVar7 = EVP_PKEY_verify_recover(ctx,out,&local_48,in,inlen);
                        goto joined_r0x00100768;
                      }
                    }
                  }
                  else if (bVar14 == 4) {
                    iVar7 = EVP_PKEY_decrypt_init(ctx);
                    if ((0 < iVar7) &&
                       (iVar7 = EVP_PKEY_CTX_set_rsa_padding(ctx,local_98), 0 < iVar7)) {
                      iVar7 = EVP_PKEY_decrypt(ctx,out,&local_48,in,inlen);
                      goto joined_r0x00100768;
                    }
                  }
                  else {
LAB_001006be:
                    if (iVar7 != 0) {
LAB_001005f1:
                      if (bVar4) {
                        iVar7 = ASN1_parse_dump(bp,out,local_48,1,-1);
                        if (iVar7 == 0) {
                          ERR_print_errors(_bio_err);
                        }
                      }
                      else if (bVar5) {
                        BIO_dump(bp,(char *)out,(int)local_48);
                        iVar6 = 0;
                      }
                      else {
                        BIO_write(bp,out,(int)local_48);
                      }
                      goto LAB_001001e1;
                    }
                  }
                  BIO_printf(_bio_err,"RSA operation error\n");
                  ERR_print_errors(_bio_err);
                  iVar6 = 1;
                }
              }
            }
          }
          goto LAB_001001e1;
        }
        if (cVar16 == '\x03') {
          x = (X509 *)load_cert_pass(local_80,0,1,0);
          if (x != (X509 *)0x0) {
            pkey = X509_get_pubkey(x);
            X509_free(x);
            goto LAB_00100447;
          }
        }
        else if (cVar16 == '\x01') {
          pkey = (EVP_PKEY *)load_key(local_80,local_54,0,local_50);
          goto LAB_00100447;
        }
LAB_001003f6:
        iVar6 = 1;
        goto LAB_0010024c;
      }
      BIO_printf(_bio_err,"Error getting password\n");
    }
    else {
      BIO_printf(_bio_err,"A private key is needed for this operation\n");
    }
  }
LAB_00100159:
  iVar6 = 1;
LAB_001001d0:
  out = (uchar *)0x0;
  in = (uchar *)0x0;
  ctx = (EVP_PKEY_CTX *)0x0;
  pkey = (EVP_PKEY *)0x0;
  bp = (BIO *)0x0;
  b = (BIO *)0x0;
LAB_001001e1:
  EVP_PKEY_CTX_free(ctx);
  EVP_PKEY_free(pkey);
  release_engine(local_90);
  BIO_free(b);
  BIO_free_all(bp);
  CRYPTO_free(in);
  CRYPTO_free(out);
  CRYPTO_free(local_50);
LAB_0010024c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001000b9:
  while (0x14 < iVar6) {
    if (iVar6 < 0x5df) {
      if ((iVar6 < 0x5dd) || (iVar6 = opt_rand(iVar6), iVar6 != 0)) goto switchD_001000d3_caseD_0;
      goto LAB_00100159;
    }
    if (3 < iVar6 - 0x641U) goto switchD_001000d3_caseD_0;
    iVar6 = opt_provider(iVar6);
    if (iVar6 == 0) goto LAB_00100159;
    iVar6 = opt_next();
    if (iVar6 == 0) {
      iVar6 = 0;
      goto LAB_00100110;
    }
  }
  if (-2 < iVar6) {
    switch(iVar6) {
    case 1:
      opt_help(rsautl_options);
      iVar6 = 0;
      goto LAB_001001d0;
    case 2:
      uVar9 = opt_arg();
      local_90 = setup_engine_methods(uVar9,0xffffffff,0);
      break;
    case 3:
      local_78 = opt_arg();
      break;
    case 4:
      local_70 = opt_arg();
      break;
    case 5:
      bVar4 = true;
      break;
    case 6:
      bVar5 = true;
      break;
    case 7:
      local_98 = 3;
      break;
    case 8:
      local_98 = 4;
      break;
    case 9:
      local_98 = 1;
      break;
    case 10:
      local_98 = 5;
      break;
    case 0xb:
      bVar2 = true;
      bVar14 = 1;
      break;
    case 0xc:
      bVar14 = 2;
      break;
    case 0xd:
      bVar3 = true;
      break;
    case 0xe:
      bVar14 = 3;
      break;
    case 0xf:
      bVar2 = true;
      bVar14 = 4;
      break;
    case 0x10:
      cVar16 = '\x02';
      break;
    case 0x11:
      cVar16 = '\x03';
      break;
    case 0x12:
      local_80 = opt_arg();
      break;
    case 0x13:
      uVar10 = opt_arg();
      break;
    case 0x14:
      uVar9 = opt_arg();
      iVar6 = opt_format(uVar9,0xffe,&local_54);
      if (iVar6 != 0) break;
    case -1:
switchD_001000d3_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar8);
      iVar6 = 1;
      goto LAB_001001d0;
    }
  }
  goto switchD_001000d3_caseD_0;
}


