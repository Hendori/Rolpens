
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int spkac_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EVP_PKEY *r;
  NETSCAPE_SPKI *spki;
  size_t sVar6;
  char *pcVar7;
  BIO *out;
  undefined8 uVar8;
  CONF *conf;
  undefined *puVar9;
  long in_FS_OFFSET;
  undefined8 local_98;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  char *local_70;
  char *local_68;
  int local_60;
  undefined4 local_54;
  void *local_50;
  EVP_MD *local_48;
  long local_40;
  
  puVar9 = &_LC0;
  uVar8 = 0;
  iVar3 = 0;
  pcVar7 = (char *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_54 = 0;
  local_50 = (void *)0x0;
  local_48 = (EVP_MD *)0x0;
  uVar4 = opt_init(param_1,param_2,spkac_options);
  bVar1 = false;
  local_68 = "default";
  local_60 = 0;
  local_70 = "SPKAC";
  local_78 = 0;
  local_80 = 0;
  local_88 = (char *)0x0;
  local_98 = 0;
switchD_001000da_caseD_0:
  iVar2 = opt_next();
joined_r0x001000b7:
  if (iVar2 == 0) {
    iVar2 = opt_check_rest_arg(0);
    if (iVar2 == 0) goto switchD_001000da_caseD_ffffffff;
    iVar2 = app_passwd(uVar8,0,&local_50,0);
    if (iVar2 == 0) {
      BIO_printf(_bio_err,"Error getting password\n");
    }
    else if (pcVar7 == (char *)0x0) {
      conf = (CONF *)app_load_config_internal(local_80,0);
      if (conf != (CONF *)0x0) {
        pcVar7 = NCONF_get_string(conf,local_68,local_70);
        if (pcVar7 == (char *)0x0) {
          BIO_printf(_bio_err,"Can\'t find SPKAC called \"%s\"\n",local_70);
          ERR_print_errors(_bio_err);
        }
        else {
          spki = NETSCAPE_SPKI_b64_decode(pcVar7,-1);
          if (spki != (NETSCAPE_SPKI *)0x0) {
            out = (BIO *)bio_open_default(local_78,0x77,0x8001);
            if (out == (BIO *)0x0) {
              r = (EVP_PKEY *)0x0;
              local_60 = 1;
            }
            else {
              if (!bVar1) {
                NETSCAPE_SPKI_print(out,spki);
              }
              r = NETSCAPE_SPKI_get_pubkey(spki);
              if (local_60 != 0) {
                iVar2 = NETSCAPE_SPKI_verify(spki,r);
                if (iVar2 < 1) {
                  BIO_printf(_bio_err,"Signature Failure\n");
                  ERR_print_errors(_bio_err);
                  goto LAB_00100131;
                }
                BIO_printf(_bio_err,"Signature OK\n");
              }
              local_60 = iVar3;
              if (iVar3 != 0) {
                local_60 = 0;
                PEM_write_bio_PUBKEY(out,r);
              }
            }
            goto LAB_00100131;
          }
          BIO_printf(_bio_err,"Error loading SPKAC\n");
          ERR_print_errors(_bio_err);
        }
        spki = (NETSCAPE_SPKI *)0x0;
        r = (EVP_PKEY *)0x0;
        local_60 = 1;
        out = (BIO *)0x0;
        goto LAB_00100131;
      }
    }
    else {
      iVar3 = opt_md(puVar9,&local_48);
      if (iVar3 != 0) {
        if ((*pcVar7 == '-') && (pcVar7[1] == '\0')) {
          pcVar7 = (char *)0x0;
        }
        r = (EVP_PKEY *)load_key(pcVar7,local_54,1,local_50,local_98,"private key");
        if (r != (EVP_PKEY *)0x0) {
          spki = NETSCAPE_SPKI_new();
          if (spki == (NETSCAPE_SPKI *)0x0) {
            conf = (CONF *)0x0;
            out = (BIO *)0x0;
            local_60 = 1;
            goto LAB_00100131;
          }
          if (local_88 == (char *)0x0) {
LAB_001002a6:
            iVar3 = NETSCAPE_SPKI_set_pubkey(spki,r);
            if (iVar3 == 0) {
              pcVar7 = "Error setting public key\n";
            }
            else {
              iVar3 = NETSCAPE_SPKI_sign(spki,r,local_48);
              if (0 < iVar3) {
                pcVar7 = NETSCAPE_SPKI_b64_encode(spki);
                if (pcVar7 != (char *)0x0) {
                  out = (BIO *)bio_open_default(local_78,0x77,0x8001);
                  if (out != (BIO *)0x0) {
                    BIO_printf(out,"SPKAC=%s\n",pcVar7);
                    conf = (CONF *)0x0;
                    CRYPTO_free(pcVar7);
                    local_60 = 0;
                    goto LAB_00100131;
                  }
                  CRYPTO_free(pcVar7);
                }
                goto LAB_001004d9;
              }
              pcVar7 = "Error signing SPKAC\n";
            }
            out = (BIO *)0x0;
            conf = (CONF *)0x0;
            BIO_printf(_bio_err,pcVar7);
            local_60 = 1;
          }
          else {
            sVar6 = strlen(local_88);
            iVar3 = ASN1_STRING_set(spki->spkac->challenge,local_88,(int)sVar6);
            if (iVar3 != 0) goto LAB_001002a6;
LAB_001004d9:
            conf = (CONF *)0x0;
            out = (BIO *)0x0;
            local_60 = 1;
          }
          goto LAB_00100131;
        }
      }
    }
LAB_001001be:
    local_60 = 1;
  }
  else {
    if (0xe < iVar2) {
      if ((iVar2 - 0x641U < 4) && (iVar2 = opt_provider(iVar2), iVar2 == 0)) goto LAB_001001be;
      goto switchD_001000da_caseD_0;
    }
    if (iVar2 < -1) goto switchD_001000da_caseD_0;
    switch(iVar2) {
    default:
      goto switchD_001000da_caseD_0;
    case 1:
      local_60 = 0;
      opt_help(spkac_options);
      break;
    case 2:
      bVar1 = true;
      goto switchD_001000da_caseD_0;
    case 3:
      iVar3 = 1;
      goto switchD_001000da_caseD_0;
    case 4:
      local_60 = 1;
      goto switchD_001000da_caseD_0;
    case 5:
      local_80 = opt_arg();
      goto switchD_001000da_caseD_0;
    case 6:
      local_78 = opt_arg();
      goto switchD_001000da_caseD_0;
    case 7:
      uVar5 = opt_arg();
      local_98 = setup_engine_methods(uVar5,0xffffffff,0);
      goto switchD_001000da_caseD_0;
    case 8:
      pcVar7 = (char *)opt_arg();
      goto switchD_001000da_caseD_0;
    case 9:
      local_88 = (char *)opt_arg();
      goto switchD_001000da_caseD_0;
    case 10:
      uVar8 = opt_arg();
      goto switchD_001000da_caseD_0;
    case 0xb:
      local_70 = (char *)opt_arg();
      goto switchD_001000da_caseD_0;
    case 0xc:
      local_68 = (char *)opt_arg();
      goto switchD_001000da_caseD_0;
    case 0xd:
      uVar5 = opt_arg();
      iVar2 = opt_format(uVar5,0xffe,&local_54);
      if (iVar2 != 0) goto switchD_001000da_caseD_0;
switchD_001000da_caseD_ffffffff:
      local_60 = 1;
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar4);
      break;
    case 0xe:
      goto switchD_001000da_caseD_e;
    case -1:
      goto switchD_001000da_caseD_ffffffff;
    }
  }
  spki = (NETSCAPE_SPKI *)0x0;
  r = (EVP_PKEY *)0x0;
  conf = (CONF *)0x0;
  out = (BIO *)0x0;
LAB_00100131:
  EVP_MD_free(local_48);
  NCONF_free(conf);
  NETSCAPE_SPKI_free(spki);
  BIO_free_all(out);
  EVP_PKEY_free(r);
  release_engine(local_98);
  CRYPTO_free(local_50);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_60;
switchD_001000da_caseD_e:
  puVar9 = (undefined *)opt_arg();
  iVar2 = opt_next();
  goto joined_r0x001000b7;
}


