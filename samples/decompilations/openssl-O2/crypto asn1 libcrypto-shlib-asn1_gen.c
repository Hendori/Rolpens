
undefined8 append_exp(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 == -1) {
    iVar1 = param_1[0x7e];
    lVar2 = (long)iVar1;
    if (iVar1 != 0x14) {
      param_1[0x7e] = iVar1 + 1;
      param_1[lVar2 * 6 + 6] = param_2;
      param_1[lVar2 * 6 + 7] = param_3;
      goto LAB_0010004e;
    }
  }
  else {
    if (param_6 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn1_gen.c",0x1d5,"append_exp");
      ERR_set_error(0xd,0xb3,0);
      return 0;
    }
    iVar1 = param_1[0x7e];
    lVar2 = (long)iVar1;
    if (iVar1 != 0x14) {
      param_1[0x7e] = iVar1 + 1;
      *(ulong *)(param_1 + lVar2 * 6 + 6) = CONCAT44(param_1[1],*param_1);
      param_1[0] = -1;
      param_1[1] = -1;
LAB_0010004e:
      param_1[lVar2 * 6 + 8] = param_4;
      param_1[lVar2 * 6 + 9] = param_5;
      return 1;
    }
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/asn1_gen.c",0x1da,"append_exp");
  ERR_set_error(0xd,0xae,0);
  return 0;
}



undefined4 asn1_str2tag(char *param_1,dword param_2)

{
  undefined8 uVar1;
  int iVar2;
  size_t sVar3;
  undefined **ppuVar4;
  
  if (param_2 == 0xffffffff) {
    sVar3 = strlen(param_1);
    param_2 = (dword)sVar3;
  }
  ppuVar4 = &tnst_4;
  do {
    if (((NoteGnuProperty_4 *)ppuVar4)->type == param_2) {
      uVar1._0_4_ = ((NoteGnuProperty_4 *)ppuVar4)->namesz;
      uVar1._4_4_ = ((NoteGnuProperty_4 *)ppuVar4)->descsz;
      iVar2 = OPENSSL_strncasecmp(uVar1,param_1,(long)(int)param_2);
      if (iVar2 == 0) {
        return *(undefined4 *)((NoteGnuProperty_4 *)ppuVar4)->name;
      }
    }
    ppuVar4 = (undefined **)((long)ppuVar4 + 0x10);
  } while ((NoteGnuProperty_4 *)ppuVar4 != &NoteGnuProperty_4_00101ad0);
  return 0xffffffff;
}



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
LAB_00100220:
        *param_4 = 0x80;
        goto LAB_00100227;
      }
    }
    else {
      if ((*local_38 != '\0') && (param_1 + param_2 < local_38)) goto LAB_00100290;
      if (-1 < (long)uVar2) {
        *param_3 = (int)uVar2;
        if (param_2 == (int)local_38 - (int)param_1) goto LAB_00100220;
        cVar1 = *local_38;
        if (cVar1 == 'P') {
          *param_4 = 0xc0;
        }
        else if (cVar1 < 'Q') {
          if (cVar1 != 'A') {
            if (cVar1 == 'C') goto LAB_00100220;
LAB_001002b8:
            ERR_new();
            ERR_set_debug("crypto/asn1/asn1_gen.c",0x184,"parse_tagging");
            ERR_set_error(0xd,0xba,"Char=%c",(int)*local_38);
            uVar3 = 0;
            goto LAB_0010022c;
          }
          *param_4 = 0x40;
        }
        else {
          if (cVar1 != 'U') goto LAB_001002b8;
          *param_4 = 0;
        }
LAB_00100227:
        uVar3 = 1;
        goto LAB_0010022c;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_gen.c",0x167,"parse_tagging");
    ERR_set_error(0xd,0xbb,0);
  }
LAB_00100290:
  uVar3 = 0;
LAB_0010022c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 asn1_cb(char *param_1,int param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *__s1;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (char *)0x0) goto LAB_00100450;
  if (0 < param_2) {
    pcVar3 = param_1;
    do {
      __s1 = pcVar3 + 1;
      if (*pcVar3 == ':') {
        iVar5 = param_2 - ((int)__s1 - (int)param_1);
        param_2 = (int)pcVar3 - (int)param_1;
        goto LAB_0010038d;
      }
      pcVar3 = __s1;
    } while (param_1 + param_2 != __s1);
  }
  __s1 = (char *)0x0;
  iVar5 = 0;
LAB_0010038d:
  uVar1 = asn1_str2tag(param_1,param_2);
  if (uVar1 == 0xffffffff) {
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_gen.c",0x10b,"asn1_cb");
    ERR_set_error(0xd,0xc2,"tag=%s",param_1);
    goto LAB_00100450;
  }
  if ((uVar1 & 0x10000) == 0) {
    param_3[2] = uVar1;
    *(char **)(param_3 + 4) = __s1;
    uVar2 = 0;
    if ((__s1 != (char *)0x0) || (param_1[param_2] == '\0')) goto LAB_001003ba;
    ERR_new();
    ERR_set_debug("crypto/asn1/asn1_gen.c",0x115,"asn1_cb");
    ERR_set_error(0xd,0xbd,0);
    goto LAB_00100450;
  }
  switch(uVar1) {
  case 0x10001:
    if (*param_3 != -1) {
      ERR_new();
      ERR_set_debug("crypto/asn1/asn1_gen.c",0x120,"asn1_cb");
      ERR_set_error(0xd,0xb5,0);
      goto LAB_00100450;
    }
    iVar5 = parse_tagging(__s1,iVar5,param_3,param_3 + 1);
    break;
  case 0x10002:
    iVar5 = parse_tagging(__s1,iVar5,&local_38,&local_34);
    if (iVar5 == 0) goto LAB_00100450;
    iVar5 = append_exp(param_3,local_38,local_34,1,0,0);
    break;
  default:
    goto switchD_0010040c_caseD_10003;
  case 0x10004:
    iVar5 = append_exp(param_3,3,0,0,1,1);
    break;
  case 0x10005:
    iVar5 = append_exp(param_3,4,0,0,0,1);
    break;
  case 0x10006:
    iVar5 = append_exp(param_3,0x10,0,1,0,1);
    break;
  case 0x10007:
    iVar5 = append_exp(param_3,0x11,0,1,0,1);
    break;
  case 0x10008:
    if (__s1 == (char *)0x0) {
      ERR_new();
      uVar4 = 0x145;
LAB_0010069d:
      ERR_set_debug("crypto/asn1/asn1_gen.c",uVar4,"asn1_cb");
      ERR_set_error(0xd,0xa0,0);
      goto LAB_00100450;
    }
    iVar5 = strncmp(__s1,"ASCII",5);
    if (iVar5 == 0) {
      param_3[3] = 1;
    }
    else {
      iVar5 = strncmp(__s1,"UTF8",4);
      if (iVar5 == 0) {
        param_3[3] = 2;
      }
      else if (((*__s1 == 'H') && (__s1[1] == 'E')) && (__s1[2] == 'X')) {
        param_3[3] = 3;
      }
      else {
        iVar5 = strncmp(__s1,"BITLIST",7);
        if (iVar5 != 0) {
          ERR_new();
          uVar4 = 0x151;
          goto LAB_0010069d;
        }
        param_3[3] = 4;
      }
    }
    goto switchD_0010040c_caseD_10003;
  }
  if (iVar5 == 0) {
LAB_00100450:
    uVar2 = 0xffffffff;
  }
  else {
switchD_0010040c_caseD_10003:
    uVar2 = 1;
  }
LAB_001003ba:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mask_cb(char *param_1,int param_2,ulong *param_3)

{
  uint tag;
  ulong uVar1;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  if ((((param_2 == 3) && (*param_1 == 'D')) && (param_1[1] == 'I')) && (param_1[2] == 'R')) {
    *param_3 = *param_3 | 0x2906;
    return 1;
  }
  tag = asn1_str2tag();
  if ((tag != 0) && ((tag & 0x10000) == 0)) {
    uVar1 = ASN1_tag2bit(tag);
    if (uVar1 != 0) {
      *param_3 = *param_3 | uVar1;
      return 1;
    }
  }
  return 0;
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
      goto LAB_001007c7;
    }
  }
  uVar3 = 0;
LAB_001007c7:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_TYPE * generate_v3(char *param_1,X509V3_CTX *param_2,int param_3,undefined4 *param_4)

{
  ASN1_TIME *t;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint constructed;
  int iVar3;
  int iVar4;
  uint uVar5;
  ASN1_SEQUENCE_ANY *a;
  stack_st_CONF_VALUE *psVar6;
  ASN1_TYPE *a_00;
  ASN1_STRING *pAVar7;
  uchar *puVar8;
  ulong uVar9;
  char **ppcVar10;
  ASN1_INTEGER *pAVar11;
  ASN1_OBJECT *pAVar12;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  int *piVar16;
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
  iVar3 = CONF_parse_list(param_1,0x2c,1,asn1_cb,local_248);
  iVar4 = local_248[3];
  if (iVar3 != 0) {
    *param_4 = 0xc2;
    goto LAB_00100da5;
  }
  if (local_248[2] - 0x10U < 2) {
    if (param_2 == (X509V3_CTX *)0x0) {
      *param_4 = 0xc0;
    }
    else if (param_3 < 0x32) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_268._8_8_;
      local_268 = auVar1 << 0x40;
      a = (ASN1_SEQUENCE_ANY *)OPENSSL_sk_new_null();
      if (a == (ASN1_SEQUENCE_ANY *)0x0) {
LAB_00100d70:
        psVar6 = (stack_st_CONF_VALUE *)0x0;
      }
      else {
        psVar6 = local_238;
        if (local_238 != (stack_st_CONF_VALUE *)0x0) {
          psVar6 = X509V3_get_section(param_2,(char *)local_238);
          if (psVar6 == (stack_st_CONF_VALUE *)0x0) goto LAB_00100d70;
          for (iVar4 = 0; iVar3 = OPENSSL_sk_num(psVar6), iVar4 < iVar3; iVar4 = iVar4 + 1) {
            lVar13 = OPENSSL_sk_value(psVar6,iVar4);
            lVar13 = generate_v3(*(undefined8 *)(lVar13 + 0x10),param_2,param_3 + 1,param_4);
            if ((lVar13 == 0) || (iVar3 = OPENSSL_sk_push(a,lVar13), iVar3 == 0)) goto LAB_00100d73;
          }
        }
        if (local_248[2] == 0x11) {
          iVar4 = i2d_ASN1_SET_ANY(a,(uchar **)local_268);
        }
        else {
          iVar4 = i2d_ASN1_SEQUENCE_ANY(a,(uchar **)local_268);
        }
        if ((-1 < iVar4) && (a_00 = ASN1_TYPE_new(), a_00 != (ASN1_TYPE *)0x0)) {
          pAVar7 = ASN1_STRING_type_new(local_248[2]);
          (a_00->value).asn1_string = pAVar7;
          puVar8 = (uchar *)local_268._0_8_;
          if (pAVar7 != (ASN1_STRING *)0x0) {
            a_00->type = local_248[2];
            pAVar7->length = iVar4;
            pAVar7->data = (uchar *)local_268._0_8_;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_268._8_8_;
            local_268 = auVar2 << 0x40;
            puVar8 = (uchar *)0x0;
          }
          CRYPTO_free(puVar8);
          OPENSSL_sk_pop_free(a,ASN1_TYPE_free);
          X509V3_section_free(param_2,psVar6);
LAB_00100a2c:
          if ((local_248[0] == -1) && (local_50 == 0)) goto LAB_00100c23;
          iVar4 = i2d_ASN1_TYPE(a_00,&local_288);
          ASN1_TYPE_free(a_00);
          local_280 = local_288;
          if (local_248[0] == -1) {
            uVar5 = 0;
            iVar3 = iVar4;
LAB_00100ad4:
            lVar13 = (long)iVar4;
            if (0 < local_50) {
              iVar4 = 0;
              piVar16 = local_248 + (long)local_50 * 6;
              do {
                iVar4 = iVar4 + 1;
                iVar14 = piVar16[3] + (int)lVar13;
                *(long *)(piVar16 + 4) = (long)iVar14;
                iVar14 = ASN1_object_size(0,iVar14,*piVar16);
                lVar13 = (long)iVar14;
                piVar16 = piVar16 + -6;
              } while (iVar4 < local_50);
            }
            puVar8 = (uchar *)CRYPTO_malloc((int)lVar13,"crypto/asn1/asn1_gen.c",0xc4);
            if (puVar8 == (uchar *)0x0) goto LAB_00100e67;
            piVar16 = local_230;
            iVar4 = 0;
            local_270 = puVar8;
            if (0 < local_50) {
              do {
                ASN1_put_object(&local_270,piVar16[2],piVar16[4],*piVar16,piVar16[1]);
                if (piVar16[3] != 0) {
                  *local_270 = '\0';
                  local_270 = local_270 + 1;
                }
                iVar4 = iVar4 + 1;
                piVar16 = piVar16 + 6;
              } while (iVar4 < local_50);
            }
            if (local_248[0] != -1) {
              constructed = uVar5;
              if ((local_248[1] == 0) && (constructed = 0x20, 1 < local_248[0] - 0x10U)) {
                constructed = uVar5;
              }
              ASN1_put_object(&local_270,constructed,(int)local_278,local_248[0],local_248[1]);
            }
            memcpy(local_270,local_280,(long)iVar3);
            local_268._0_8_ = puVar8;
            a_00 = d2i_ASN1_TYPE((ASN1_TYPE **)0x0,(uchar **)local_268,lVar13);
          }
          else {
            uVar5 = ASN1_get_object(&local_280,&local_278,&local_290,&local_28c,(long)iVar4);
            if ((uVar5 & 0x80) == 0) {
              iVar3 = iVar4 - ((int)local_280 - (int)local_288);
              if ((uVar5 & 1) == 0) {
                uVar5 = uVar5 & 0x20;
              }
              else {
                local_278 = 0;
                uVar5 = 2;
                local_278._0_4_ = 0;
              }
              iVar4 = ASN1_object_size(0,(int)local_278,local_248[0]);
              goto LAB_00100ad4;
            }
LAB_00100e67:
            puVar8 = (uchar *)0x0;
            a_00 = (ASN1_TYPE *)0x0;
          }
          CRYPTO_free(local_288);
          CRYPTO_free(puVar8);
          goto LAB_00100c23;
        }
      }
LAB_00100d73:
      CRYPTO_free((void *)local_268._0_8_);
      OPENSSL_sk_pop_free(a,ASN1_TYPE_free);
      X509V3_section_free(param_2,psVar6);
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
      goto LAB_00100da5;
    }
    if (local_238 == (stack_st_CONF_VALUE *)0x0) {
      if (local_248[2] < 7) {
        if (0 < local_248[2]) {
          switch(local_248[2]) {
          default:
            psVar6 = (stack_st_CONF_VALUE *)&_LC7;
            goto switchD_00100c9e_caseD_1;
          case 2:
            psVar6 = (stack_st_CONF_VALUE *)&_LC7;
            goto switchD_00100c9e_caseD_2;
          case 3:
          case 4:
            psVar6 = (stack_st_CONF_VALUE *)&_LC7;
            goto switchD_00100c9e_caseD_3;
          case 5:
            goto switchD_00100dfe_caseD_5;
          case 6:
            psVar6 = (stack_st_CONF_VALUE *)&_LC7;
            goto switchD_00100c9e_caseD_6;
          }
        }
      }
      else if (local_248[2] - 10U < 0x15) {
        psVar6 = (stack_st_CONF_VALUE *)&_LC7;
        uVar9 = 1L << ((byte)local_248[2] & 0x3f);
        if ((uVar9 & 0x5c5c1000) != 0) goto LAB_00100f6d;
LAB_00100ccb:
        if ((uVar9 & 0x1800000) != 0) {
          if (iVar4 != 1) {
            ERR_new();
            ERR_set_debug("crypto/asn1/asn1_gen.c",0x283,"asn1_str2type");
            ERR_set_error(0xd,0xc1,0);
            goto LAB_00100f36;
          }
          pAVar7 = ASN1_STRING_new();
          (a_00->value).asn1_string = pAVar7;
          if (pAVar7 == (ASN1_STRING *)0x0) {
            ERR_new();
            uVar15 = 0x287;
          }
          else {
            iVar4 = ASN1_STRING_set(pAVar7,psVar6,-1);
            if (iVar4 != 0) {
              t = (a_00->value).asn1_string;
              t->type = local_248[2];
              iVar4 = ASN1_TIME_check(t);
              if (iVar4 == 0) {
                ERR_new();
                ERR_set_debug("crypto/asn1/asn1_gen.c",0x290,"asn1_str2type");
                ERR_set_error(0xd,0xb8,0);
                goto LAB_00100f20;
              }
              goto switchD_00100dfe_caseD_5;
            }
            ERR_new();
            uVar15 = 0x28b;
          }
LAB_00100fbf:
          ERR_set_debug("crypto/asn1/asn1_gen.c",uVar15,"asn1_str2type");
          ERR_set_error(0xd,0x8000d,0);
          goto LAB_00100f20;
        }
        if (local_248[2] == 10) goto switchD_00100c9e_caseD_2;
        goto LAB_0010116b;
      }
      psVar6 = (stack_st_CONF_VALUE *)&_LC7;
LAB_0010116b:
      ERR_new();
      ERR_set_debug("crypto/asn1/asn1_gen.c",0x2d8,"asn1_str2type");
      ERR_set_error(0xd,0xc4,0);
LAB_00100f20:
      ERR_add_error_data(2,"string=",psVar6);
    }
    else {
      psVar6 = local_238;
      if (6 < local_248[2]) {
        if (local_248[2] - 10U < 0x15) {
          uVar9 = 1L << ((byte)local_248[2] & 0x3f);
          if ((uVar9 & 0x5c5c1000) == 0) goto LAB_00100ccb;
LAB_00100f6d:
          if (iVar4 == 1) {
            iVar3 = 0x1001;
          }
          else {
            iVar3 = 0x1000;
            if (iVar4 != 2) {
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x2a4,"asn1_str2type");
              ERR_set_error(0xd,0xb1,0);
              goto LAB_00100f36;
            }
          }
          uVar9 = ASN1_tag2bit(local_248[2]);
          iVar4 = ASN1_mbstring_copy(&(a_00->value).asn1_string,(uchar *)psVar6,-1,iVar3,uVar9);
          if (0 < iVar4) goto switchD_00100dfe_caseD_5;
          ERR_new();
          uVar15 = 0x2aa;
          goto LAB_00100fbf;
        }
        goto LAB_0010116b;
      }
      if (local_248[2] < 1) goto LAB_0010116b;
      switch(local_248[2]) {
      default:
switchD_00100c9e_caseD_1:
        if (iVar4 != 1) {
          ERR_new();
          ERR_set_debug("crypto/asn1/asn1_gen.c",0x25c,"asn1_str2type");
          ERR_set_error(0xd,0xbe,0);
          break;
        }
        local_268 = (undefined1  [16])0x0;
        local_258 = psVar6;
        iVar4 = X509V3_get_value_bool((CONF_VALUE *)local_268,&(a_00->value).boolean);
        if (iVar4 != 0) goto switchD_00100dfe_caseD_5;
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x263,"asn1_str2type");
        ERR_set_error(0xd,0xb0,0);
        goto LAB_00100f20;
      case 2:
switchD_00100c9e_caseD_2:
        if (iVar4 == 1) {
          pAVar11 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,(char *)psVar6);
          (a_00->value).integer = pAVar11;
          if (pAVar11 != (ASN1_INTEGER *)0x0) goto switchD_00100dfe_caseD_5;
          ERR_new();
          ERR_set_debug("crypto/asn1/asn1_gen.c",0x270,"asn1_str2type");
          ERR_set_error(0xd,0xb4,0);
          goto LAB_00100f20;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x26b,"asn1_str2type");
        ERR_set_error(0xd,0xb9,0);
        break;
      case 3:
      case 4:
switchD_00100c9e_caseD_3:
        pAVar7 = ASN1_STRING_new();
        (a_00->value).asn1_string = pAVar7;
        if (pAVar7 != (ASN1_STRING *)0x0) {
          if (iVar4 == 3) {
            ppcVar10 = (char **)OPENSSL_hexstr2buf(psVar6,&local_270);
            if (ppcVar10 == (char **)0x0) {
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x2b9,"asn1_str2type");
              ERR_set_error(0xd,0xb2,0);
              goto LAB_00100f20;
            }
            pAVar12 = (a_00->value).object;
            pAVar12->ln = ppcVar10;
            pAVar12->sn = (char *)CONCAT44(local_248[2],local_270._0_4_);
          }
          else {
            if (iVar4 != 1) {
              if ((iVar4 == 4) && (local_248[2] == 3)) {
                iVar4 = CONF_parse_list((char *)psVar6,0x2c,1,bitstr_cb,pAVar7);
                if (iVar4 != 0) goto switchD_00100dfe_caseD_5;
                ERR_new();
                ERR_set_debug("crypto/asn1/asn1_gen.c",0x2c8,"asn1_str2type");
                ERR_set_error(0xd,0xbc,0);
                goto LAB_00100f20;
              }
              ERR_new();
              ERR_set_debug("crypto/asn1/asn1_gen.c",0x2ce,"asn1_str2type");
              ERR_set_error(0xd,0xaf,0);
              break;
            }
            iVar4 = ASN1_STRING_set(pAVar7,psVar6,-1);
            if (iVar4 == 0) {
              ERR_new();
              uVar15 = 0x2c1;
              goto LAB_00100fbf;
            }
          }
          if (local_248[2] == 3) {
            ossl_asn1_string_set_bits_left((a_00->value).ptr,0);
          }
switchD_00100dfe_caseD_5:
          a_00->type = local_248[2];
          goto LAB_00100a2c;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x2b3,"asn1_str2type");
        ERR_set_error(0xd,0x8000d,0);
        break;
      case 5:
        if ((uchar)(local_238->stack).num == '\0') goto switchD_00100dfe_caseD_5;
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x255,"asn1_str2type");
        ERR_set_error(0xd,0xb6,0);
        break;
      case 6:
switchD_00100c9e_caseD_6:
        if (iVar4 == 1) {
          pAVar12 = OBJ_txt2obj((char *)psVar6,0);
          (a_00->value).object = pAVar12;
          if (pAVar12 != (ASN1_OBJECT *)0x0) goto switchD_00100dfe_caseD_5;
          ERR_new();
          ERR_set_debug("crypto/asn1/asn1_gen.c",0x27b,"asn1_str2type");
          ERR_set_error(0xd,0xb7,0);
          goto LAB_00100f20;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/asn1_gen.c",0x277,"asn1_str2type");
        ERR_set_error(0xd,0xbf,0);
      }
    }
LAB_00100f36:
    ASN1_TYPE_free(a_00);
  }
LAB_00100da5:
  a_00 = (ASN1_TYPE *)0x0;
LAB_00100c23:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a_00;
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


