
undefined8 parse_tagging(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    uVar2 = strtoul(param_1,&local_38,10);
    if (local_38 == (char *)0x0) {
      if (-1 < (long)uVar2) {
        *param_3 = (int)uVar2;
LAB_00100090:
        *param_4 = 0x80;
        goto LAB_00100097;
      }
    }
    else {
      if ((*local_38 != '\0') && (param_1 + param_2 < local_38)) goto LAB_00100100;
      if (-1 < (long)uVar2) {
        *param_3 = (int)uVar2;
        if (param_2 == (int)local_38 - (int)param_1) goto LAB_00100090;
        cVar1 = *local_38;
        if (cVar1 == 'P') {
          *param_4 = 0xc0;
        }
        else if (cVar1 < 'Q') {
          if (cVar1 != 'A') {
            if (cVar1 == 'C') goto LAB_00100090;
LAB_00100128:
            ERR_new();
            ERR_set_debug("crypto/asn1/asn1_gen.c",0x184,"parse_tagging");
            ERR_set_error(0xd,0xba,"Char=%c",(int)*local_38);
            uVar3 = 0;
            goto LAB_0010009c;
          }
          *param_4 = 0x40;
        }
        else {
          if (cVar1 != 'U') goto LAB_00100128;
          *param_4 = 0;
        }
LAB_00100097:
        uVar3 = 1;
        goto LAB_0010009c;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_gen.c",0x167,"parse_tagging");
    ERR_set_error(0xd,0xbb,0);
  }
LAB_00100100:
  uVar3 = 0;
LAB_0010009c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 bitstr_cb(char *param_1,int param_2,ASN1_BIT_STRING *param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    uVar2 = strtoul(param_1,&local_28,10);
    if (((local_28 == (char *)0x0) || (*local_28 == '\0')) || (local_28 == param_1 + param_2)) {
      if ((long)uVar2 < 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x2f2,"bitstr_cb");
        ERR_set_error(0xd,0xbb,0);
        uVar3 = 0;
      }
      else {
        iVar1 = ASN1_BIT_STRING_set_bit(param_3,(int)uVar2,1);
        uVar3 = 1;
        if (iVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/asn1/asn1_gen.c",0x2f6,"bitstr_cb");
          ERR_set_error(0xd,0x8000d,0);
          uVar3 = 0;
        }
      }
      goto LAB_00100207;
    }
  }
  uVar3 = 0;
LAB_00100207:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_TYPE * generate_v3(char *param_1,X509V3_CTX *param_2,int param_3,undefined4 *param_4)

{
  uchar *puVar1;
  ASN1_TIME *t;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint constructed;
  int iVar4;
  int iVar5;
  uint uVar6;
  ASN1_SEQUENCE_ANY *a;
  stack_st_CONF_VALUE *psVar7;
  ASN1_TYPE *a_00;
  ASN1_STRING *pAVar8;
  uchar *puVar9;
  ulong uVar10;
  char **ppcVar11;
  ASN1_INTEGER *pAVar12;
  ASN1_OBJECT *pAVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  int *piVar17;
  long in_FS_OFFSET;
  int local_290;
  int local_28c;
  uchar *local_288;
  uchar *local_280;
  long local_278;
  uchar *local_270;
  undefined1 local_268 [16];
  stack_st_CONF_VALUE *local_258;
  int local_248 [4];
  stack_st_CONF_VALUE *local_238;
  int local_230 [120];
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_248[3] = 1;
  local_288 = (uchar *)0x0;
  local_278 = 0;
  local_248[0] = -1;
  local_248[1] = -1;
  local_50 = 0;
  iVar4 = CONF_parse_list(param_1,0x2c,1,asn1_cb,local_248);
  iVar5 = local_248[3];
  if (iVar4 != 0) {
    *param_4 = 0xc2;
    goto LAB_00100805;
  }
  if (local_248[2] - 0x10U < 2) {
    if (param_2 == (X509V3_CTX *)0x0) {
      *param_4 = 0xc0;
    }
    else if (param_3 < 0x32) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_268._8_8_;
      local_268 = auVar2 << 0x40;
      a = (ASN1_SEQUENCE_ANY *)OPENSSL_sk_new_null();
      if (a == (ASN1_SEQUENCE_ANY *)0x0) {
LAB_001007d0:
        psVar7 = (stack_st_CONF_VALUE *)0x0;
      }
      else {
        psVar7 = local_238;
        if (local_238 != (stack_st_CONF_VALUE *)0x0) {
          psVar7 = X509V3_get_section(param_2,(char *)local_238);
          if (psVar7 == (stack_st_CONF_VALUE *)0x0) goto LAB_001007d0;
          for (iVar5 = 0; iVar4 = OPENSSL_sk_num(psVar7), iVar5 < iVar4; iVar5 = iVar5 + 1) {
            lVar14 = OPENSSL_sk_value(psVar7,iVar5);
            lVar14 = generate_v3(*(undefined8 *)(lVar14 + 0x10),param_2,param_3 + 1,param_4);
            if ((lVar14 == 0) || (iVar4 = OPENSSL_sk_push(a,lVar14), iVar4 == 0)) goto LAB_001007d3;
          }
        }
        if (local_248[2] == 0x11) {
          iVar5 = i2d_ASN1_SET_ANY(a,(uchar **)local_268);
        }
        else {
          iVar5 = i2d_ASN1_SEQUENCE_ANY(a,(uchar **)local_268);
        }
        if ((-1 < iVar5) && (a_00 = ASN1_TYPE_new(), a_00 != (ASN1_TYPE *)0x0)) {
          pAVar8 = ASN1_STRING_type_new(local_248[2]);
          (a_00->value).asn1_string = pAVar8;
          puVar9 = (uchar *)local_268._0_8_;
          if (pAVar8 != (ASN1_STRING *)0x0) {
            a_00->type = local_248[2];
            pAVar8->length = iVar5;
            pAVar8->data = (uchar *)local_268._0_8_;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_268._8_8_;
            local_268 = auVar3 << 0x40;
            puVar9 = (uchar *)0x0;
          }
          CRYPTO_free(puVar9);
          OPENSSL_sk_pop_free(a,ASN1_TYPE_free);
          X509V3_section_free(param_2,psVar7);
LAB_0010046c:
          if ((local_248[0] == -1) && (local_50 == 0)) goto LAB_00100667;
          iVar5 = i2d_ASN1_TYPE(a_00,&local_288);
          ASN1_TYPE_free(a_00);
          local_280 = local_288;
          if (local_248[0] == -1) {
            uVar6 = 0;
            iVar4 = iVar5;
LAB_00100514:
            lVar14 = (long)iVar5;
            if (0 < local_50) {
              iVar5 = 0;
              piVar17 = local_248 + (long)local_50 * 6;
              do {
                iVar5 = iVar5 + 1;
                iVar15 = piVar17[3] + (int)lVar14;
                *(long *)(piVar17 + 4) = (long)iVar15;
                iVar15 = ASN1_object_size(0,iVar15,*piVar17);
                lVar14 = (long)iVar15;
                piVar17 = piVar17 + -6;
              } while (iVar5 < local_50);
            }
            puVar9 = (uchar *)CRYPTO_malloc((int)lVar14,"crypto/asn1/asn1_gen.c",0xc4);
            if (puVar9 == (uchar *)0x0) goto LAB_001008c7;
            piVar17 = local_230;
            iVar5 = 0;
            local_270 = puVar9;
            if (0 < local_50) {
              do {
                while (ASN1_put_object(&local_270,piVar17[2],piVar17[4],*piVar17,piVar17[1]),
                      piVar17[3] == 0) {
                  iVar5 = iVar5 + 1;
                  piVar17 = piVar17 + 6;
                  if (local_50 <= iVar5) goto LAB_001005e4;
                }
                iVar5 = iVar5 + 1;
                piVar17 = piVar17 + 6;
                puVar1 = local_270 + 1;
                *local_270 = '\0';
                local_270 = puVar1;
              } while (iVar5 < local_50);
            }
LAB_001005e4:
            if (local_248[0] != -1) {
              constructed = uVar6;
              if ((local_248[1] == 0) && (constructed = 0x20, 1 < local_248[0] - 0x10U)) {
                constructed = uVar6;
              }
              ASN1_put_object(&local_270,constructed,(int)local_278,local_248[0],local_248[1]);
            }
            memcpy(local_270,local_280,(long)iVar4);
            local_268._0_8_ = puVar9;
            a_00 = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,(uchar **)local_268,lVar14);
          }
          else {
            uVar6 = ASN1_get_object(&local_280,&local_278,&local_290,&local_28c,(long)iVar5);
            if ((uVar6 & 0x80) == 0) {
              iVar4 = iVar5 - ((int)local_280 - (int)local_288);
              if ((uVar6 & 1) == 0) {
                uVar6 = uVar6 & 0x20;
              }
              else {
                local_278 = 0;
                uVar6 = 2;
                local_278._0_4_ = 0;
              }
              iVar5 = ASN1_object_size(0,(int)local_278,local_248[0]);
              goto LAB_00100514;
            }
LAB_001008c7:
            puVar9 = (uchar *)0x0;
            a_00 = (ASN1_TYPE *)0x0;
          }
          CRYPTO_free(local_288);
          CRYPTO_free(puVar9);
          goto LAB_00100667;
        }
      }
LAB_001007d3:
      CRYPTO_free((void *)local_268._0_8_);
      OPENSSL_sk_pop_free(a,ASN1_TYPE_free);
      X509V3_section_free(param_2,psVar7);
    }
    else {
      *param_4 = 0xb5;
    }
  }
  else {
    a_00 = ASN1_TYPE_new();
    if (a_00 == (ASN1_TYPE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn1_gen.c",0x24a,"asn1_str2type");
      ERR_set_error(0xd,0x8000d,0);
      goto LAB_00100805;
    }
    if (local_238 == (stack_st_CONF_VALUE *)0x0) {
      if (local_248[2] < 7) {
        if (0 < local_248[2]) {
          switch(local_248[2]) {
          default:
            psVar7 = (stack_st_CONF_VALUE *)&_LC2;
            goto switchD_001006e6_caseD_1;
          case 2:
            psVar7 = (stack_st_CONF_VALUE *)&_LC2;
            goto switchD_001006e6_caseD_2;
          case 3:
          case 4:
            psVar7 = (stack_st_CONF_VALUE *)&_LC2;
            goto switchD_001006e6_caseD_3;
          case 5:
            goto switchD_0010085e_caseD_5;
          case 6:
            psVar7 = (stack_st_CONF_VALUE *)&_LC2;
            goto switchD_001006e6_caseD_6;
          }
        }
      }
      else if (local_248[2] - 10U < 0x15) {
        psVar7 = (stack_st_CONF_VALUE *)&_LC2;
        uVar10 = 1L << ((byte)local_248[2] & 0x3f);
        if ((uVar10 & 0x5c5c1000) != 0) goto LAB_001009cd;
LAB_00100713:
        if ((uVar10 & 0x1800000) != 0) {
          if (iVar5 != 1) {
            ERR_new();
            ERR_set_debug("crypto/asn1/asn1_gen.c",0x283,"asn1_str2type");
            ERR_set_error(0xd,0xc1,0);
            goto LAB_00100996;
          }
          pAVar8 = ASN1_STRING_new();
          (a_00->value).asn1_string = pAVar8;
          if (pAVar8 == (ASN1_STRING *)0x0) {
            ERR_new();
            uVar16 = 0x287;
          }
          else {
            iVar5 = ASN1_STRING_set(pAVar8,psVar7,-1);
            if (iVar5 != 0) {
              t = (a_00->value).asn1_string;
              t->type = local_248[2];
              iVar5 = ASN1_TIME_check(t);
              if (iVar5 == 0) {
                ERR_new();
                ERR_set_debug("crypto/asn1/asn1_gen.c",0x290,"asn1_str2type");
                ERR_set_error(0xd,0xb8,0);
                goto LAB_00100980;
              }
              goto switchD_0010085e_caseD_5;
            }
            ERR_new();
            uVar16 = 0x28b;
          }
LAB_00100a1f:
          ERR_set_debug("crypto/asn1/asn1_gen.c",uVar16,"asn1_str2type");
          ERR_set_error(0xd,0x8000d,0);
          goto LAB_00100980;
        }
        if (local_248[2] == 10) goto switchD_001006e6_caseD_2;
        goto LAB_00100bcb;
      }
      psVar7 = (stack_st_CONF_VALUE *)&_LC2;
LAB_00100bcb:
      ERR_new();
      ERR_set_debug("crypto/asn1/asn1_gen.c",0x2d8,"asn1_str2type");
      ERR_set_error(0xd,0xc4,0);
LAB_00100980:
      ERR_add_error_data(2,"string=",psVar7);
    }
    else {
      psVar7 = local_238;
      if (6 < local_248[2]) {
        if (local_248[2] - 10U < 0x15) {
          uVar10 = 1L << ((byte)local_248[2] & 0x3f);
          if ((uVar10 & 0x5c5c1000) == 0) goto LAB_00100713;
LAB_001009cd:
          if (iVar5 == 1) {
            iVar4 = 0x1001;
          }
          else {
            iVar4 = 0x1000;
            if (iVar5 != 2) {
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x2a4,"asn1_str2type");
              ERR_set_error(0xd,0xb1,0);
              goto LAB_00100996;
            }
          }
          uVar10 = ASN1_tag2bit(local_248[2]);
          iVar5 = ASN1_mbstring_copy(&(a_00->value).asn1_string,(uchar *)psVar7,-1,iVar4,uVar10);
          if (0 < iVar5) goto switchD_0010085e_caseD_5;
          ERR_new();
          uVar16 = 0x2aa;
          goto LAB_00100a1f;
        }
        goto LAB_00100bcb;
      }
      if (local_248[2] < 1) goto LAB_00100bcb;
      switch(local_248[2]) {
      default:
switchD_001006e6_caseD_1:
        if (iVar5 != 1) {
          ERR_new();
          ERR_set_debug("crypto/asn1/asn1_gen.c",0x25c,"asn1_str2type");
          ERR_set_error(0xd,0xbe,0);
          break;
        }
        local_268 = (undefined1  [16])0x0;
        local_258 = psVar7;
        iVar5 = X509V3_get_value_bool((CONF_VALUE *)local_268,&(a_00->value).boolean);
        if (iVar5 != 0) goto switchD_0010085e_caseD_5;
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x263,"asn1_str2type");
        ERR_set_error(0xd,0xb0,0);
        goto LAB_00100980;
      case 2:
switchD_001006e6_caseD_2:
        if (iVar5 == 1) {
          pAVar12 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(char *)psVar7);
          (a_00->value).integer = pAVar12;
          if (pAVar12 != (ASN1_INTEGER *)0x0) goto switchD_0010085e_caseD_5;
          ERR_new();
          ERR_set_debug("crypto/asn1/asn1_gen.c",0x270,"asn1_str2type");
          ERR_set_error(0xd,0xb4,0);
          goto LAB_00100980;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x26b,"asn1_str2type");
        ERR_set_error(0xd,0xb9,0);
        break;
      case 3:
      case 4:
switchD_001006e6_caseD_3:
        pAVar8 = ASN1_STRING_new();
        (a_00->value).asn1_string = pAVar8;
        if (pAVar8 != (ASN1_STRING *)0x0) {
          if (iVar5 == 3) {
            ppcVar11 = (char **)OPENSSL_hexstr2buf(psVar7,&local_270);
            if (ppcVar11 == (char **)0x0) {
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x2b9,"asn1_str2type");
              ERR_set_error(0xd,0xb2,0);
              goto LAB_00100980;
            }
            pAVar13 = (a_00->value).object;
            pAVar13->ln = ppcVar11;
            pAVar13->sn = (char *)CONCAT44(local_248[2],local_270._0_4_);
          }
          else {
            if (iVar5 != 1) {
              if ((iVar5 == 4) && (local_248[2] == 3)) {
                iVar5 = CONF_parse_list((char *)psVar7,0x2c,1,bitstr_cb,pAVar8);
                if (iVar5 != 0) goto switchD_0010085e_caseD_5;
                ERR_new();
                ERR_set_debug("crypto/asn1/asn1_gen.c",0x2c8,"asn1_str2type");
                ERR_set_error(0xd,0xbc,0);
                goto LAB_00100980;
              }
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x2ce,"asn1_str2type");
              ERR_set_error(0xd,0xaf,0);
              break;
            }
            iVar5 = ASN1_STRING_set(pAVar8,psVar7,-1);
            if (iVar5 == 0) {
              ERR_new();
              uVar16 = 0x2c1;
              goto LAB_00100a1f;
            }
          }
          if (local_248[2] == 3) {
            ossl_asn1_string_set_bits_left((a_00->value).ptr,0);
          }
switchD_0010085e_caseD_5:
          a_00->type = local_248[2];
          goto LAB_0010046c;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x2b3,"asn1_str2type");
        ERR_set_error(0xd,0x8000d,0);
        break;
      case 5:
        if ((uchar)(local_238->stack).num == '\0') goto switchD_0010085e_caseD_5;
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x255,"asn1_str2type");
        ERR_set_error(0xd,0xb6,0);
        break;
      case 6:
switchD_001006e6_caseD_6:
        if (iVar5 == 1) {
          pAVar13 = OBJ_txt2obj((char *)psVar7,0);
          (a_00->value).object = pAVar13;
          if (pAVar13 != (ASN1_OBJECT *)0x0) goto switchD_0010085e_caseD_5;
          ERR_new();
          ERR_set_debug("crypto/asn1/asn1_gen.c",0x27b,"asn1_str2type");
          ERR_set_error(0xd,0xb7,0);
          goto LAB_00100980;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x277,"asn1_str2type");
        ERR_set_error(0xd,0xbf,0);
      }
    }
LAB_00100996:
    ASN1_TYPE_free(a_00);
  }
LAB_00100805:
  a_00 = (ASN1_TYPE *)0x0;
LAB_00100667:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mask_cb(char *param_1,int param_2,ulong *param_3)

{
  uint tag;
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  undefined **ppuVar4;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if (param_2 == 3) {
    if (((*param_1 == 'D') && (param_1[1] == 'I')) && (param_1[2] == 'R')) {
      uVar2 = *param_3 | 0x2906;
      goto LAB_00100e9c;
    }
  }
  else if (param_2 == -1) {
    sVar3 = strlen(param_1);
    param_2 = (int)sVar3;
  }
  ppuVar4 = &tnst_4;
  while ((*(int *)(ppuVar4 + 1) != param_2 ||
         (iVar1 = OPENSSL_strncasecmp(*ppuVar4,param_1,(long)param_2), iVar1 != 0))) {
    ppuVar4 = ppuVar4 + 2;
    if (ppuVar4 == (undefined **)&_LC6) {
      return 0;
    }
  }
  tag = *(uint *)((long)ppuVar4 + 0xc);
  if (tag == 0) {
    return 0;
  }
  if ((tag & 0x10000) != 0) {
    return 0;
  }
  uVar2 = ASN1_tag2bit(tag);
  if (uVar2 == 0) {
    return 0;
  }
  uVar2 = uVar2 | *param_3;
LAB_00100e9c:
  *param_3 = uVar2;
  return 1;
}



undefined4 asn1_cb(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  long lVar5;
  undefined4 uVar6;
  undefined **ppuVar7;
  char *pcVar8;
  char *__s1;
  undefined8 uVar9;
  long in_FS_OFFSET;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    if (param_2 < 1) {
      local_4c = 0;
      __s1 = (char *)0x0;
LAB_00100f99:
      iVar3 = param_2;
      if (param_2 == -1) {
        sVar4 = strlen(param_1);
        iVar3 = (int)sVar4;
      }
    }
    else {
      pcVar8 = param_1;
      do {
        __s1 = pcVar8 + 1;
        if (*pcVar8 == ':') {
          local_4c = param_2 - ((int)__s1 - (int)param_1);
          param_2 = (int)pcVar8 - (int)param_1;
          goto LAB_00100f99;
        }
        pcVar8 = __s1;
      } while (param_1 + param_2 != __s1);
      local_4c = 0;
      __s1 = (char *)0x0;
      iVar3 = param_2;
    }
    ppuVar7 = &tnst_4;
    do {
      if ((*(int *)(ppuVar7 + 1) == iVar3) &&
         (iVar2 = OPENSSL_strncasecmp(*ppuVar7,param_1,(long)iVar3), iVar2 == 0)) {
        uVar1 = *(uint *)((long)ppuVar7 + 0xc);
        if (uVar1 != 0xffffffff) {
          if ((uVar1 & 0x10000) == 0) {
            param_3[2] = uVar1;
            *(char **)(param_3 + 4) = __s1;
            uVar6 = 0;
            if ((__s1 != (char *)0x0) || (param_1[param_2] == '\0')) goto LAB_0010100b;
            ERR_new();
            ERR_set_debug("crypto/asn1/asn1_gen.c",0x115,"asn1_cb");
            ERR_set_error(0xd,0xbd,0);
            goto LAB_001010a8;
          }
          switch(uVar1) {
          case 0x10001:
            if (*param_3 != -1) {
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x120,"asn1_cb");
              ERR_set_error(0xd,0xb5,0);
              goto LAB_001010a8;
            }
            iVar3 = parse_tagging(__s1,local_4c,param_3,param_3 + 1);
            if (iVar3 == 0) goto LAB_001010a8;
            break;
          case 0x10002:
            iVar3 = parse_tagging(__s1,local_4c,&local_48,&local_44);
            if (iVar3 == 0) goto LAB_001010a8;
            if (*param_3 != -1) {
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x1d5,"append_exp");
              ERR_set_error(0xd,0xb3,0);
              goto LAB_001010a8;
            }
            iVar3 = param_3[0x7e];
            if (iVar3 == 0x14) goto LAB_00101397;
            param_3[0x7e] = iVar3 + 1;
            (param_3 + (long)iVar3 * 6 + 8)[0] = 1;
            (param_3 + (long)iVar3 * 6 + 8)[1] = 0;
            *(ulong *)(param_3 + (long)iVar3 * 6 + 6) = CONCAT44(local_44,local_48);
            break;
          case 0x10004:
            iVar3 = param_3[0x7e];
            if (iVar3 == 0x14) goto LAB_00101397;
            param_3[0x7e] = iVar3 + 1;
            uVar9 = _LC8;
            if (*param_3 != -1) {
              iVar2 = param_3[1];
              param_3[0] = -1;
              param_3[1] = -1;
              uVar9 = CONCAT44(iVar2,*param_3);
            }
            *(undefined8 *)(param_3 + (long)iVar3 * 6 + 8) = _LC12;
            *(undefined8 *)(param_3 + (long)iVar3 * 6 + 6) = uVar9;
            break;
          case 0x10005:
            iVar3 = param_3[0x7e];
            if (iVar3 == 0x14) goto LAB_00101397;
            param_3[0x7e] = iVar3 + 1;
            uVar9 = _LC9;
            if (*param_3 != -1) {
              iVar2 = param_3[1];
              param_3[0] = -1;
              param_3[1] = -1;
              uVar9 = CONCAT44(iVar2,*param_3);
            }
            (param_3 + (long)iVar3 * 6 + 8)[0] = 0;
            (param_3 + (long)iVar3 * 6 + 8)[1] = 0;
            *(undefined8 *)(param_3 + (long)iVar3 * 6 + 6) = uVar9;
            break;
          case 0x10006:
            iVar3 = param_3[0x7e];
            lVar5 = (long)iVar3;
            if (iVar3 == 0x14) goto LAB_00101397;
            param_3[0x7e] = iVar3 + 1;
            uVar9 = _LC6;
            if (*param_3 != -1) {
              iVar3 = param_3[1];
              param_3[0] = -1;
              param_3[1] = -1;
              uVar9 = CONCAT44(iVar3,*param_3);
            }
LAB_00101291:
            (param_3 + lVar5 * 6 + 8)[0] = 1;
            (param_3 + lVar5 * 6 + 8)[1] = 0;
            *(undefined8 *)(param_3 + lVar5 * 6 + 6) = uVar9;
            break;
          case 0x10007:
            iVar3 = param_3[0x7e];
            lVar5 = (long)iVar3;
            if (iVar3 != 0x14) {
              param_3[0x7e] = iVar3 + 1;
              uVar9 = _LC7;
              if (*param_3 != -1) {
                iVar3 = param_3[1];
                param_3[0] = -1;
                param_3[1] = -1;
                uVar9 = CONCAT44(iVar3,*param_3);
              }
              goto LAB_00101291;
            }
LAB_00101397:
            ERR_new();
            ERR_set_debug("crypto/asn1/asn1_gen.c",0x1da,"append_exp");
            ERR_set_error(0xd,0xae,0);
            goto LAB_001010a8;
          case 0x10008:
            if (__s1 == (char *)0x0) {
              ERR_new();
              uVar9 = 0x145;
LAB_001014a8:
              ERR_set_debug("crypto/asn1/asn1_gen.c",uVar9,"asn1_cb");
              ERR_set_error(0xd,0xa0,0);
              goto LAB_001010a8;
            }
            iVar3 = strncmp(__s1,"ASCII",5);
            if (iVar3 == 0) {
              param_3[3] = 1;
            }
            else {
              iVar3 = strncmp(__s1,"UTF8",4);
              if (iVar3 == 0) {
                param_3[3] = 2;
              }
              else if (((*__s1 == 'H') && (__s1[1] == 'E')) && (__s1[2] == 'X')) {
                param_3[3] = 3;
              }
              else {
                iVar3 = strncmp(__s1,"BITLIST",7);
                if (iVar3 != 0) {
                  ERR_new();
                  uVar9 = 0x151;
                  goto LAB_001014a8;
                }
                param_3[3] = 4;
              }
            }
          }
          uVar6 = 1;
          goto LAB_0010100b;
        }
        break;
      }
      ppuVar7 = ppuVar7 + 2;
    } while (ppuVar7 != (undefined **)&_LC6);
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_gen.c",0x10b,"asn1_cb");
    ERR_set_error(0xd,0xc2,"tag=%s",param_1);
  }
LAB_001010a8:
  uVar6 = 0xffffffff;
LAB_0010100b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_TYPE * ASN1_generate_v3(char *str,X509V3_CTX *cnf)

{
  ASN1_TYPE *pAVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  pAVar1 = (ASN1_TYPE *)generate_v3(str,cnf,0,&local_14);
  if (local_14 != 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_gen.c",0x5f,"ASN1_generate_v3");
    ERR_set_error(0xd,local_14,0);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_TYPE * ASN1_generate_nconf(char *str,CONF *nconf)

{
  ASN1_TYPE *pAVar1;
  long in_FS_OFFSET;
  X509V3_CTX XStack_68;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (nconf == (CONF *)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      pAVar1 = ASN1_generate_v3(str,(X509V3_CTX *)0x0);
      return pAVar1;
    }
  }
  else {
    X509V3_set_nconf(&XStack_68,nconf);
    pAVar1 = ASN1_generate_v3(str,&XStack_68);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pAVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ASN1_str2mask(char *param_1,undefined8 *param_2)

{
  *param_2 = 0;
  CONF_parse_list(param_1,0x7c,1,mask_cb,param_2);
  return;
}


