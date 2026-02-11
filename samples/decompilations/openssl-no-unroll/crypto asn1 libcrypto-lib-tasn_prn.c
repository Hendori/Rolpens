
bool asn1_print_fsname(BIO *param_1,int param_2,char *param_3,char *param_4,ulong *param_5)

{
  ulong uVar1;
  int iVar2;
  
  if (0x14 < param_2) {
    do {
      iVar2 = BIO_write(param_1,spaces_0,0x14);
      if (iVar2 != 0x14) {
        return false;
      }
      param_2 = param_2 + -0x14;
    } while (0x14 < param_2);
  }
  iVar2 = BIO_write(param_1,spaces_0,param_2);
  if (iVar2 != param_2) {
    return false;
  }
  uVar1 = *param_5;
  if ((uVar1 & 0x100) == 0) {
    if ((uVar1 & 0x40) == 0) {
      if (param_3 == (char *)0x0 && param_4 == (char *)0x0) {
        return true;
      }
      if (param_3 != (char *)0x0) {
        iVar2 = BIO_puts(param_1,param_3);
        if (iVar2 < 1) {
          return false;
        }
        if (param_4 == (char *)0x0) goto LAB_0010009d;
        iVar2 = BIO_printf(param_1," (%s)",param_4);
        goto joined_r0x00100132;
      }
      if (param_4 == (char *)0x0) goto LAB_0010009d;
    }
    else if (param_4 == (char *)0x0) {
      return true;
    }
    iVar2 = BIO_puts(param_1,param_4);
  }
  else {
    if ((uVar1 & 0x40) != 0) {
      return true;
    }
    if (param_3 == (char *)0x0) {
      return true;
    }
    iVar2 = BIO_puts(param_1,param_3);
  }
joined_r0x00100132:
  if (iVar2 < 1) {
    return false;
  }
LAB_0010009d:
  iVar2 = BIO_write(param_1,&_LC0,2);
  return iVar2 == 2;
}



ulong asn1_template_print_ctx
                (BIO *param_1,undefined8 ***param_2,uint param_3,ulong *param_4,ulong *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  char *pcVar9;
  long in_FS_OFFSET;
  undefined8 **local_50;
  undefined8 local_48;
  long local_40;
  
  uVar7 = 0;
  uVar6 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *param_5;
  if ((uVar4 & 0x80) != 0) {
    lVar3 = (*(code *)param_4[4])();
    uVar7 = *(undefined8 *)(lVar3 + 0x30);
    uVar4 = *param_5;
  }
  if ((uVar4 & 0x40) == 0) {
    uVar8 = param_4[3];
    if ((uVar6 & 0x1000) != 0) {
      local_50 = param_2;
      param_2 = &local_50;
    }
    if ((uVar6 & 6) == 0) goto LAB_001001d3;
    if (uVar8 == 0) {
LAB_0010027f:
      param_2 = (undefined8 ***)*param_2;
      goto LAB_00100283;
    }
    if ((uVar4 & 4) == 0) {
      iVar1 = BIO_printf(param_1,"%*s%s:\n",(ulong)param_3,&_LC6);
      if (iVar1 < 1) {
        uVar6 = 0;
        goto LAB_001001fb;
      }
      goto LAB_0010027f;
    }
    pcVar9 = "SEQUENCE";
    if ((uVar6 & 2) != 0) {
      pcVar9 = "SET";
    }
    iVar1 = BIO_printf(param_1,"%*s%s OF %s {\n",(ulong)param_3,&_LC6,pcVar9,uVar8);
    if (0 < iVar1) goto LAB_0010027f;
LAB_00100308:
    uVar6 = 0;
  }
  else {
    if ((uVar6 & 0x1000) == 0) {
      if ((uVar6 & 6) != 0) goto LAB_0010027f;
      uVar8 = 0;
    }
    else {
      local_50 = param_2;
      if ((uVar6 & 6) != 0) {
LAB_00100283:
        iVar1 = OPENSSL_sk_num(param_2);
        if (iVar1 < 1) {
          pcVar9 = "ABSENT";
          if (param_2 != (undefined8 ***)0x0) {
            pcVar9 = "EMPTY";
          }
          iVar1 = BIO_printf(param_1,"%*s<%s>\n",(ulong)(param_3 + 2),&_LC6,pcVar9);
          if (0 < iVar1) {
LAB_00100358:
            uVar6 = 1;
            if ((*param_5 & 2) != 0) {
              iVar1 = BIO_printf(param_1,"%*s}\n",(ulong)param_3,&_LC6);
              uVar6 = (ulong)(0 < iVar1);
            }
            goto LAB_001001fb;
          }
        }
        else {
          iVar1 = 0;
          do {
            local_48 = OPENSSL_sk_value(param_2,iVar1);
            uVar7 = (*(code *)param_4[4])();
            uVar5 = 1;
            iVar2 = asn1_item_print_ctx(param_1,&local_48,param_3 + 2,uVar7,0,0,1,param_5);
            if (iVar2 == 0) break;
            iVar1 = iVar1 + 1;
            iVar2 = OPENSSL_sk_num(param_2,uVar5);
            if (iVar2 <= iVar1) goto LAB_00100358;
            iVar2 = BIO_puts(param_1,"\n");
          } while (0 < iVar2);
        }
        goto LAB_00100308;
      }
      uVar8 = 0;
      param_2 = &local_50;
    }
LAB_001001d3:
    uVar5 = (*(code *)param_4[4])();
    uVar6 = asn1_item_print_ctx(param_1,param_2,param_3,uVar5,uVar8,uVar7,0,param_5);
  }
LAB_001001fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool asn1_item_print_ctx(BIO *param_1,uchar **param_2,uint param_3,char *param_4,long param_5,
                        long param_6,int param_7,ulong *param_8)

{
  char cVar1;
  ulong uVar2;
  ASN1_OBJECT *o;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  ASN1_STRING *a;
  long in_FS_OFFSET;
  bool bVar11;
  long local_d0;
  BIO *local_b8;
  uint local_b0;
  ulong *local_a8;
  char local_98 [88];
  long local_40;
  
  pcVar8 = (code *)0x0;
  lVar10 = *(long *)(param_4 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar10 != 0) {
    local_a8 = param_8;
    local_b8 = param_1;
    local_b0 = param_3;
    if ((*(byte *)(lVar10 + 8) & 8) == 0) {
      pcVar8 = *(code **)(lVar10 + 0x18);
    }
    else {
      pcVar8 = *(code **)(lVar10 + 0x28);
    }
  }
  cVar1 = *param_4;
  if (cVar1 != '\0') {
    if (*param_2 == (uchar *)0x0) goto LAB_001004a0;
    switch(cVar1) {
    default:
      BIO_printf(param_1,"Unprocessed type %d\n",(ulong)(uint)(int)cVar1);
      bVar11 = false;
      goto LAB_001004e7;
    case '\x01':
    case '\x06':
      if ((param_7 == 0) &&
         (iVar3 = asn1_print_fsname(param_1,param_3,param_5,param_6,param_8), iVar3 == 0)) {
        bVar11 = false;
        goto LAB_001004e7;
      }
      if (param_6 != 0 || param_5 != 0) {
        if ((*param_8 & 2) == 0) {
          iVar3 = BIO_puts(param_1,"\n");
          if (iVar3 < 1) {
            bVar11 = false;
            goto LAB_001004e7;
          }
        }
        else {
          iVar3 = BIO_puts(param_1," {\n");
          if (iVar3 < 1) goto LAB_001005f0;
        }
      }
      if (pcVar8 != (code *)0x0) {
        iVar3 = (*pcVar8)(8,param_2,param_4,&local_b8);
        if (iVar3 == 0) goto LAB_001005f0;
        if (iVar3 == 2) break;
      }
      local_d0 = *(long *)(param_4 + 0x10);
      lVar10 = 0;
      if (0 < *(long *)(param_4 + 0x18)) {
        do {
          lVar6 = ossl_asn1_do_adb(*param_2,local_d0,1);
          if (lVar6 == 0) goto LAB_001005f0;
          uVar5 = ossl_asn1_get_const_field_ptr(param_2,lVar6);
          iVar3 = asn1_template_print_ctx(param_1,uVar5,param_3 + 2,lVar6,param_8);
          if (iVar3 == 0) goto LAB_001005f0;
          local_d0 = local_d0 + 0x28;
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(long *)(param_4 + 0x18));
      }
      if (((*param_8 & 2) != 0) &&
         (iVar3 = BIO_printf(param_1,"%*s}\n",(ulong)param_3,&_LC6), iVar3 < 0)) {
        bVar11 = false;
        goto LAB_001004e7;
      }
      if (pcVar8 != (code *)0x0) {
        iVar3 = (*pcVar8)(9,param_2,param_4,&local_b8);
        bVar11 = iVar3 != 0;
        goto LAB_001004e7;
      }
      break;
    case '\x02':
      uVar4 = ossl_asn1_get_choice_selector_const(param_2,param_4);
      if (((int)uVar4 < 0) || (*(long *)(param_4 + 0x18) <= (long)(int)uVar4)) {
        iVar3 = BIO_printf(param_1,"ERROR: selector [%d] invalid\n",(ulong)uVar4);
        bVar11 = 0 < iVar3;
        goto LAB_001004e7;
      }
      lVar6 = *(long *)(param_4 + 0x10) + (long)(int)uVar4 * 0x28;
      param_2 = (uchar **)ossl_asn1_get_const_field_ptr(param_2,lVar6);
      goto LAB_0010044f;
    case '\x04':
      if (param_7 == 0) {
        iVar3 = asn1_print_fsname(param_1,param_3,param_5,param_6,param_8);
        if (iVar3 == 0) goto LAB_001005f0;
        lVar10 = *(long *)(param_4 + 0x20);
      }
      if ((lVar10 != 0) && (*(code **)(lVar10 + 0x30) != (code *)0x0)) {
        iVar3 = (**(code **)(lVar10 + 0x30))(param_1,param_2,param_3,&_LC6,param_8);
        if (iVar3 == 0) goto LAB_001005f0;
        if (iVar3 != 2) break;
        goto LAB_001006bc;
      }
      if (param_6 != 0) {
        iVar3 = BIO_printf(param_1,":EXTERNAL TYPE %s\n",param_6);
        bVar11 = 0 < iVar3;
        goto LAB_001004e7;
      }
      break;
    case '\x05':
      goto switchD_00100487_caseD_5;
    }
LAB_00100610:
    bVar11 = true;
    goto LAB_001004e7;
  }
  if ((*(long *)(param_4 + 8) != 1) && (*param_2 == (uchar *)0x0)) {
LAB_001004a0:
    if ((*param_8 & 1) == 0) goto LAB_00100610;
    if ((param_7 == 0) &&
       (iVar3 = asn1_print_fsname(param_1,param_3,param_5,param_6,param_8), iVar3 == 0))
    goto LAB_001005f0;
    pcVar7 = "<ABSENT>\n";
    goto LAB_001004d7;
  }
  lVar6 = *(long *)(param_4 + 0x10);
  if (lVar6 != 0) {
LAB_0010044f:
    iVar3 = asn1_template_print_ctx(param_1,param_2,param_3,lVar6,param_8);
    bVar11 = iVar3 != 0;
    goto LAB_001004e7;
  }
switchD_00100487_caseD_5:
  iVar3 = asn1_print_fsname(param_1,param_3,param_5,param_6);
  if (iVar3 == 0) goto LAB_001005f0;
  if ((lVar10 != 0) && (*(code **)(lVar10 + 0x38) != (code *)0x0)) {
    iVar3 = (**(code **)(lVar10 + 0x38))(param_1,param_2,param_4,param_3,param_8);
    bVar11 = iVar3 != 0;
    goto LAB_001004e7;
  }
  uVar2 = *param_8;
  if (*param_4 != '\x05') {
    uVar9 = *(ulong *)(param_4 + 8);
    if (uVar9 != 1) {
      a = (ASN1_STRING *)*param_2;
      if (uVar9 != 0xfffffffffffffffc) goto LAB_001007fe;
      iVar3 = a->length;
      uVar9 = (ulong)iVar3;
      param_2 = &a->data;
      a = (ASN1_STRING *)a->data;
      if ((uVar2 & 0x10) != 0) goto LAB_0010074f;
      goto LAB_00100809;
    }
    if ((uVar2 & 8) != 0) {
      a = (ASN1_STRING *)0x0;
      pcVar7 = ASN1_tag2str(1);
      if (pcVar7 != (char *)0x0) goto LAB_00100824;
    }
switchD_00100775_caseD_1:
    iVar3 = *(int *)param_2;
    if (iVar3 == -1) {
      pcVar7 = "BOOL ABSENT";
      iVar3 = (int)*(undefined8 *)(param_4 + 0x28);
      if (iVar3 != -1) goto LAB_00100a0c;
    }
    else {
LAB_00100a0c:
      pcVar7 = "FALSE";
      if (iVar3 != 0) {
        pcVar7 = "TRUE";
      }
    }
    iVar3 = BIO_puts(param_1,pcVar7);
    if (iVar3 < 1) {
      bVar11 = false;
      goto LAB_001004e7;
    }
    goto LAB_001006bc;
  }
  a = (ASN1_STRING *)*param_2;
  uVar9 = (long)a->type & 0xfffffffffffffeff;
LAB_001007fe:
  if ((uVar2 & 8) == 0) {
LAB_0010074f:
    if (uVar9 == 5) goto LAB_00100b10;
  }
  else {
    iVar3 = (int)uVar9;
LAB_00100809:
    pcVar7 = ASN1_tag2str(iVar3);
    if (uVar9 == 5) {
LAB_00100b10:
      pcVar7 = "NULL\n";
      goto LAB_001004d7;
    }
    if (pcVar7 != (char *)0x0) {
LAB_00100824:
      iVar3 = BIO_puts(param_1,pcVar7);
      if (iVar3 < 1) goto LAB_001005f0;
      iVar3 = BIO_puts(param_1,":");
      if (iVar3 < 1) {
        bVar11 = false;
        goto LAB_001004e7;
      }
    }
  }
  switch(uVar9) {
  case 1:
    goto switchD_00100775_caseD_1;
  case 2:
  case 10:
    pcVar7 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,a);
    if (pcVar7 != (char *)0x0) {
      iVar3 = BIO_puts(param_1,pcVar7);
      CRYPTO_free(pcVar7);
      if (iVar3 < 1) {
        bVar11 = false;
        goto LAB_001004e7;
      }
      break;
    }
LAB_001005f0:
    bVar11 = false;
    goto LAB_001004e7;
  case 3:
  case 4:
    if (a->type == 3) {
      iVar3 = BIO_printf(param_1," (%ld unused bits)\n",(ulong)((uint)a->flags & 7));
      if (iVar3 < 1) {
        bVar11 = false;
        goto LAB_001004e7;
      }
    }
    else {
      iVar3 = BIO_puts(param_1,"\n");
      if (iVar3 < 1) goto LAB_001005f0;
    }
    if (0 < a->length) {
      iVar3 = BIO_dump_indent(param_1,(char *)a->data,a->length,param_3 + 2);
      bVar11 = 0 < iVar3;
      goto LAB_001004e7;
    }
    goto LAB_00100610;
  case 6:
    o = (ASN1_OBJECT *)*param_2;
    iVar3 = OBJ_obj2nid(o);
    pcVar7 = OBJ_nid2ln(iVar3);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    OBJ_obj2txt(local_98,0x50,o,1);
    iVar3 = BIO_printf(param_1,"%s (%s)",pcVar7,local_98);
    if (iVar3 < 1) {
      bVar11 = false;
      goto LAB_001004e7;
    }
    break;
  case 0x17:
    iVar3 = ASN1_UTCTIME_print(param_1,a);
    if (iVar3 == 0) {
      bVar11 = false;
      goto LAB_001004e7;
    }
    break;
  case 0x18:
    iVar3 = ASN1_GENERALIZEDTIME_print(param_1,a);
    if (iVar3 == 0) {
      bVar11 = false;
      goto LAB_001004e7;
    }
    break;
  case 0xfffffffffffffffd:
  case 0x10:
  case 0x11:
    iVar3 = BIO_puts(param_1,"\n");
    if (0 < iVar3) {
      iVar3 = ASN1_parse_dump(param_1,a->data,(long)a->length,param_3,0);
      bVar11 = 0 < iVar3;
      goto LAB_001004e7;
    }
    goto LAB_001005f0;
  default:
    iVar3 = ASN1_STRING_print_ex(param_1,a,param_8[4]);
    if (iVar3 == 0) {
      bVar11 = false;
      goto LAB_001004e7;
    }
  }
LAB_001006bc:
  pcVar7 = "\n";
LAB_001004d7:
  iVar3 = BIO_puts(param_1,pcVar7);
  bVar11 = 0 < iVar3;
LAB_001004e7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ASN1_PCTX * ASN1_PCTX_new(void)

{
  ASN1_PCTX *pAVar1;
  
  pAVar1 = (ASN1_PCTX *)CRYPTO_zalloc(0x28,"crypto/asn1/tasn_prn.c",0x27);
  return pAVar1;
}



void ASN1_PCTX_free(ASN1_PCTX *p)

{
  CRYPTO_free(p);
  return;
}



ulong ASN1_PCTX_get_flags(ASN1_PCTX *p)

{
  return *(ulong *)p;
}



void ASN1_PCTX_set_flags(ASN1_PCTX *p,ulong flags)

{
  *(ulong *)p = flags;
  return;
}



ulong ASN1_PCTX_get_nm_flags(ASN1_PCTX *p)

{
  return *(ulong *)(p + 8);
}



void ASN1_PCTX_set_nm_flags(ASN1_PCTX *p,ulong flags)

{
  *(ulong *)(p + 8) = flags;
  return;
}



ulong ASN1_PCTX_get_cert_flags(ASN1_PCTX *p)

{
  return *(ulong *)(p + 0x10);
}



void ASN1_PCTX_set_cert_flags(ASN1_PCTX *p,ulong flags)

{
  *(ulong *)(p + 0x10) = flags;
  return;
}



ulong ASN1_PCTX_get_oid_flags(ASN1_PCTX *p)

{
  return *(ulong *)(p + 0x18);
}



void ASN1_PCTX_set_oid_flags(ASN1_PCTX *p,ulong flags)

{
  *(ulong *)(p + 0x18) = flags;
  return;
}



ulong ASN1_PCTX_get_str_flags(ASN1_PCTX *p)

{
  return *(ulong *)(p + 0x20);
}



void ASN1_PCTX_set_str_flags(ASN1_PCTX *p,ulong flags)

{
  *(ulong *)(p + 0x20) = flags;
  return;
}



int ASN1_item_print(BIO *out,ASN1_VALUE *ifld,int indent,ASN1_ITEM *it,ASN1_PCTX *pctx)

{
  int iVar1;
  char *pcVar2;
  ASN1_VALUE *local_10 [2];
  
  if (pctx == (ASN1_PCTX *)0x0) {
    pctx = (ASN1_PCTX *)default_pctx;
  }
  pcVar2 = (char *)0x0;
  if ((*(ulong *)pctx & 0x100) == 0) {
    pcVar2 = it->sname;
  }
  local_10[0] = ifld;
  iVar1 = asn1_item_print_ctx(out,local_10,indent,it,0,pcVar2,0,pctx);
  return iVar1;
}


