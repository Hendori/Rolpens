
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 asn1parse_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint len;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  BIO *pBVar8;
  BIO *bp;
  BIO *b;
  undefined8 uVar9;
  long lVar10;
  BUF_MEM *str;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  CONF *conf;
  undefined4 extraout_var_02;
  char *pcVar11;
  long lVar12;
  ASN1_TYPE *a;
  ASN1_VALUE *ifld;
  BIO_METHOD *type;
  BIO *pBVar13;
  uchar *puVar14;
  char *format;
  size_t sVar15;
  long in_FS_OFFSET;
  ulong local_b8;
  ASN1_TYPE *local_b0;
  undefined8 local_a8;
  long local_a0;
  ASN1_ITEM *local_98;
  int local_8c;
  int local_88;
  uint local_84;
  int local_74;
  uchar *local_70;
  char *local_68;
  char *local_60;
  uchar *local_58;
  size_t local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_74 = 0x8005;
  local_70 = (uchar *)0x0;
  local_68 = (char *)0x0;
  local_60 = (char *)0x0;
  uVar6 = opt_init(param_1,param_2,asn1parse_options);
  lVar7 = OPENSSL_sk_new_null();
  if (lVar7 == 0) {
    BIO_printf(_bio_err,"%s: Memory allocation failure\n",uVar6);
LAB_00100128:
    str = (BUF_MEM *)0x0;
    b = (BIO *)0x0;
    pBVar8 = (BIO *)0x0;
    bp = (BIO *)0x0;
    a = (ASN1_TYPE *)0x0;
LAB_00100136:
    BIO_free(b);
    BIO_free(bp);
    BIO_free(pBVar8);
  }
  else {
    local_98 = (ASN1_ITEM *)0x0;
    b = (BIO *)0x0;
    lVar12 = 0;
    local_84 = 0;
    local_8c = 0;
    local_b8 = 0;
    bVar1 = false;
    local_88 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_b0 = (ASN1_TYPE *)0x0;
switchD_001000e4_caseD_0:
    iVar2 = opt_next();
    if (iVar2 != 0) {
LAB_001000d5:
      switch(iVar2) {
      case 1:
        str = (BUF_MEM *)0x0;
        b = (BIO *)0x0;
        pBVar8 = (BIO *)0x0;
        opt_help(asn1parse_options);
        bp = (BIO *)0x0;
        a = (ASN1_TYPE *)0x0;
        goto LAB_001003b6;
      case 2:
        uVar9 = opt_arg();
        iVar2 = opt_format(uVar9,0xe,&local_74);
        if (iVar2 == 0) goto switchD_001000e4_caseD_ffffffff;
        break;
      case 3:
        local_a8 = opt_arg();
        break;
      case 4:
        b = (BIO *)opt_arg();
        break;
      case 5:
        local_88 = 1;
        break;
      case 6:
        goto switchD_001000e4_caseD_6;
      case 7:
        lVar12 = opt_arg();
        break;
      case 8:
        pcVar11 = (char *)opt_arg();
        lVar10 = strtol(pcVar11,(char **)0x0,0);
        local_8c = (int)lVar10;
        break;
      case 9:
        pcVar11 = (char *)opt_arg();
        lVar10 = strtol(pcVar11,(char **)0x0,0);
        local_84 = (uint)lVar10;
        break;
      case 10:
        local_b8 = 0xffffffff;
        break;
      case 0xb:
        pcVar11 = (char *)opt_arg();
        local_b8 = strtol(pcVar11,(char **)0x0,0);
        local_b8 = local_b8 & 0xffffffff;
        break;
      case 0xc:
        opt_arg();
        iVar2 = OPENSSL_sk_push(lVar7);
        if (iVar2 < 1) goto LAB_001002b4;
        break;
      case 0xd:
        local_b0 = (ASN1_TYPE *)opt_arg();
        break;
      case 0xe:
        local_a0 = opt_arg();
        break;
      case 0xf:
        local_74 = 0x8005;
        break;
      case 0x10:
        uVar9 = opt_arg();
        local_98 = (ASN1_ITEM *)ASN1_ITEM_lookup(uVar9);
        if (local_98 == (ASN1_ITEM *)0x0) {
          uVar6 = opt_arg();
          lVar12 = 0;
          BIO_printf(_bio_err,"Unknown item name %s\n",uVar6);
          BIO_puts(_bio_err,"Supported types:\n");
          while (lVar10 = ASN1_ITEM_get(lVar12), lVar10 != 0) {
            lVar12 = lVar12 + 1;
            BIO_printf(_bio_err,"    %s\n",*(undefined8 *)(lVar10 + 0x30));
          }
LAB_001002b4:
          str = (BUF_MEM *)0x0;
          b = (BIO *)0x0;
          pBVar8 = (BIO *)0x0;
          pBVar13 = (BIO *)0x0;
          goto LAB_001002bf;
        }
        break;
      case -1:
        goto switchD_001000e4_caseD_ffffffff;
      }
      goto switchD_001000e4_caseD_0;
    }
LAB_00100180:
    iVar3 = opt_check_rest_arg(0);
    if (iVar3 == 0) {
switchD_001000e4_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar6);
      goto LAB_00100128;
    }
    if (lVar12 != 0) {
      pBVar8 = (BIO *)bio_open_default(lVar12,0x72,0x8001);
      if (pBVar8 == (BIO *)0x0) goto LAB_00100128;
      OBJ_create_objects(pBVar8);
      BIO_free(pBVar8);
    }
    bp = (BIO *)bio_open_default(local_a8,0x72,local_74);
    if (bp == (BIO *)0x0) goto LAB_00100128;
    if ((b != (BIO *)0x0) && (b = (BIO *)bio_open_default(b,0x77,4), b == (BIO *)0x0)) {
      str = (BUF_MEM *)0x0;
      pBVar8 = (BIO *)0x0;
      a = (ASN1_TYPE *)0x0;
      goto LAB_00100136;
    }
    str = BUF_MEM_new();
    if (str == (BUF_MEM *)0x0) goto LAB_00100596;
    pBVar13 = bp;
    if (local_b0 != (ASN1_TYPE *)0x0 || local_a0 != 0) {
      iVar3 = BUF_MEM_grow(str,0x10000);
      if (CONCAT44(extraout_var_01,iVar3) == 0) goto LAB_00100596;
      if (local_a0 == 0) {
        conf = (CONF *)0x0;
LAB_001005f4:
        local_b0 = ASN1_generate_nconf((char *)local_b0,conf);
        NCONF_free(conf);
        if (local_b0 != (ASN1_TYPE *)0x0) {
          iVar3 = i2d_ASN1_TYPE(local_b0,(uchar **)0x0);
          if ((0 < iVar3) &&
             (iVar4 = BUF_MEM_grow(str,(long)iVar3), CONCAT44(extraout_var_02,iVar4) != 0)) {
            local_48 = (uchar *)str->data;
            i2d_ASN1_TYPE(local_b0,&local_48);
            pBVar8 = (BIO *)0x0;
            ASN1_TYPE_free(local_b0);
            local_50 = (long)iVar3;
LAB_00100674:
            local_70 = (uchar *)str->data;
            bp = pBVar13;
            goto LAB_0010067d;
          }
          conf = (CONF *)0x0;
          goto LAB_001009ca;
        }
      }
      else {
        conf = (CONF *)app_load_config_internal(local_a0,0);
        if (conf == (CONF *)0x0) {
          local_b0 = (ASN1_TYPE *)0x0;
        }
        else {
          if ((local_b0 != (ASN1_TYPE *)0x0) ||
             (local_b0 = (ASN1_TYPE *)NCONF_get_string(conf,"default","asn1"),
             local_b0 != (ASN1_TYPE *)0x0)) goto LAB_001005f4;
          BIO_printf(_bio_err,"Can\'t find \'asn1\' in \'%s\'\n",local_a0);
          local_b0 = (ASN1_TYPE *)0x0;
        }
LAB_001009ca:
        NCONF_free(conf);
        ASN1_TYPE_free(local_b0);
      }
      local_50 = 0xffffffffffffffff;
      ERR_print_errors(_bio_err);
LAB_00100596:
      pBVar8 = (BIO *)0x0;
      a = (ASN1_TYPE *)0x0;
      goto LAB_00100136;
    }
    if (local_74 == 0x8005) {
      iVar3 = PEM_read_bio(bp,&local_68,&local_60,&local_70,(long *)&local_50);
      if (iVar3 == 1) {
        pBVar8 = (BIO *)0x0;
        str->data = (char *)local_70;
        str->max = local_50;
        str->length = local_50;
LAB_0010067d:
        iVar3 = OPENSSL_sk_num();
        sVar15 = local_50;
        puVar14 = local_70;
        if (iVar3 == 0) {
          a = (ASN1_TYPE *)0x0;
        }
        else {
          local_b0 = (ASN1_TYPE *)0x0;
          iVar3 = OPENSSL_sk_num();
          a = local_b0;
          if (iVar2 < iVar3) {
            do {
              pcVar11 = (char *)OPENSSL_sk_value(lVar7);
              lVar12 = strtol(pcVar11,(char **)0x0,0);
              if (((int)lVar12 < 1) || (lVar12 = (long)(int)lVar12, (long)sVar15 <= lVar12)) {
                uVar6 = OPENSSL_sk_value(lVar7,iVar2);
                BIO_printf(_bio_err,"\'%s\' is out of range\n",uVar6);
              }
              else {
                local_58 = puVar14 + lVar12;
                a = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,&local_58,sVar15 - lVar12);
                ASN1_TYPE_free(local_b0);
                if (a == (ASN1_TYPE *)0x0) {
                  pcVar11 = "Error parsing structure\n";
                  goto LAB_001009fd;
                }
                iVar3 = ASN1_TYPE_get(a);
                if (((iVar3 == 5) || (iVar3 == 6)) || (iVar3 == 1)) {
                  pcVar11 = ASN1_tag2str(iVar3);
                  format = "Can\'t parse %s type\n";
                  goto LAB_001008be;
                }
                puVar14 = ((a->value).asn1_string)->data;
                sVar15 = (size_t)((a->value).asn1_string)->length;
                local_b0 = a;
              }
              iVar2 = iVar2 + 1;
              iVar3 = OPENSSL_sk_num();
              a = local_b0;
            } while (iVar2 < iVar3);
          }
        }
        local_50 = sVar15;
        local_70 = puVar14;
        if ((local_8c < 0) || (lVar12 = (long)local_8c, (long)local_50 <= lVar12)) {
          BIO_printf(_bio_err,"Error: offset out of range\n");
          goto LAB_00100136;
        }
        local_50 = local_50 - lVar12;
        len = (uint)local_50;
        uVar5 = len;
        if (local_84 <= len) {
          uVar5 = local_84;
        }
        if (local_84 != 0) {
          len = uVar5;
        }
        if ((b != (BIO *)0x0) && (uVar5 = BIO_write(b,local_70 + lVar12,len), len != uVar5)) {
          pcVar11 = "Error writing output\n";
LAB_001009fd:
          BIO_printf(_bio_err,pcVar11);
          goto LAB_001008cc;
        }
        if (!bVar1) {
          local_48 = local_70 + lVar12;
          if (local_98 == (ASN1_ITEM *)0x0) {
            iVar2 = ASN1_parse_dump(_bio_out,local_48,(ulong)len,local_88,(int)local_b8);
            if (iVar2 == 0) goto LAB_001008cc;
          }
          else {
            ifld = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_48,(ulong)len,local_98);
            if (ifld == (ASN1_VALUE *)0x0) {
              format = "Error parsing item %s\n";
              pcVar11 = local_98->sname;
LAB_001008be:
              BIO_printf(_bio_err,format,pcVar11);
LAB_001008cc:
              ERR_print_errors(_bio_err);
              goto LAB_00100136;
            }
            ASN1_item_print(_bio_out,ifld,0,local_98,(ASN1_PCTX *)0x0);
            ASN1_item_free(ifld,local_98);
          }
        }
LAB_001003b6:
        BIO_free(b);
        uVar6 = 0;
        BIO_free(bp);
        BIO_free(pBVar8);
        goto LAB_001003d1;
      }
      BIO_printf(_bio_err,"Error reading PEM file\n");
      ERR_print_errors(_bio_err);
      goto LAB_00100596;
    }
    iVar3 = BUF_MEM_grow(str,0x10000);
    if (CONCAT44(extraout_var,iVar3) == 0) goto LAB_00100596;
    pBVar8 = (BIO *)0x0;
    if (local_74 == 0x8003) {
      type = BIO_f_base64();
      pBVar13 = BIO_new(type);
      if (pBVar13 == (BIO *)0x0) goto LAB_00100596;
      BIO_push(pBVar13,bp);
      pBVar8 = bp;
    }
    local_50 = 0;
    while (iVar3 = BUF_MEM_grow(str,local_50 + 0x2000), CONCAT44(extraout_var_00,iVar3) != 0) {
      iVar3 = BIO_read(pBVar13,str->data + local_50,0x2000);
      if (iVar3 < 1) goto LAB_00100674;
      if ((long)(0x7fffffffffffffff - local_50) < (long)iVar3) break;
      local_50 = (long)iVar3 + local_50;
    }
LAB_001002bf:
    a = (ASN1_TYPE *)0x0;
    BIO_free(b);
    BIO_free(pBVar13);
    BIO_free(pBVar8);
  }
  uVar6 = 1;
  ERR_print_errors(_bio_err);
LAB_001003d1:
  BUF_MEM_free(str);
  CRYPTO_free(local_68);
  CRYPTO_free(local_60);
  ASN1_TYPE_free(a);
  OPENSSL_sk_free(lVar7);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_001000e4_caseD_6:
  bVar1 = true;
  iVar2 = opt_next();
  if (iVar2 == 0) goto LAB_00100180;
  goto LAB_001000d5;
}


