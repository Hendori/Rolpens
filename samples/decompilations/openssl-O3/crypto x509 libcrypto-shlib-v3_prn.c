
void X509V3_EXT_val_prn(BIO *out,stack_st_CONF_VALUE *val,int indent,int ml)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 in_register_00000014;
  
  if (val != (stack_st_CONF_VALUE *)0x0) {
    if (ml == 0) {
      BIO_printf(out,"%*s",CONCAT44(in_register_00000014,indent),&_LC0);
      iVar1 = OPENSSL_sk_num(val);
      if (iVar1 == 0) {
        BIO_puts(out,"<EMPTY>\n");
      }
      iVar2 = OPENSSL_sk_num(val);
      iVar1 = 0;
      if (0 < iVar2) {
        while( true ) {
          lVar3 = OPENSSL_sk_value(val,iVar1);
          if (*(char **)(lVar3 + 8) == (char *)0x0) {
            BIO_puts(out,*(char **)(lVar3 + 0x10));
          }
          else if (*(long *)(lVar3 + 0x10) == 0) {
            BIO_puts(out,*(char **)(lVar3 + 8));
          }
          else {
            BIO_printf(out,"%s:%s");
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(val);
          if (iVar2 <= iVar1) break;
          BIO_printf(out,", ");
        }
      }
    }
    else {
      iVar1 = OPENSSL_sk_num(val);
      if (iVar1 == 0) {
        BIO_printf(out,"%*s",(ulong)(uint)indent,&_LC0);
        iVar1 = OPENSSL_sk_num(val);
        if (iVar1 == 0) {
          BIO_puts(out,"<EMPTY>\n");
        }
      }
      iVar2 = 0;
      iVar1 = OPENSSL_sk_num(val);
      if (0 < iVar1) {
        while( true ) {
          BIO_printf(out,"%*s",(ulong)(uint)indent,&_LC0);
          lVar3 = OPENSSL_sk_value(val,iVar2);
          if (*(char **)(lVar3 + 8) == (char *)0x0) {
            BIO_puts(out,*(char **)(lVar3 + 0x10));
          }
          else if (*(long *)(lVar3 + 0x10) == 0) {
            BIO_puts(out,*(char **)(lVar3 + 8));
          }
          else {
            BIO_printf(out,"%s:%s");
          }
          iVar2 = iVar2 + 1;
          iVar1 = OPENSSL_sk_num(val);
          if (iVar1 <= iVar2) break;
          BIO_printf(out,"\n");
        }
      }
    }
    return;
  }
  return;
}



int X509V3_EXT_print(BIO *out,X509_EXTENSION *ext,ulong flag,int indent)

{
  int iVar1;
  uint uVar2;
  ASN1_OCTET_STRING *x;
  X509V3_EXT_METHOD *method;
  ASN1_ITEM *pAVar3;
  ASN1_VALUE *val;
  char *ptr;
  stack_st_CONF_VALUE *val_00;
  long len;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  x = X509_EXTENSION_get_data(ext);
  local_48 = (uchar *)ASN1_STRING_get0_data(x);
  iVar1 = ASN1_STRING_length(x);
  method = X509V3_EXT_get(ext);
  uVar2 = (uint)flag;
  if (method == (X509V3_EXT_METHOD *)0x0) {
    if ((uVar2 & 0xf0000) == 0x20000) {
      uVar2 = ASN1_parse_dump(out,local_48,(long)iVar1,indent,-1);
      goto LAB_00100349;
    }
    if ((uVar2 & 0xf0000) < 0x20001) {
      if ((flag & 0xf0000) == 0) {
LAB_00100500:
        uVar2 = 0;
        goto LAB_00100349;
      }
      BIO_printf(out,"%*s<Not Supported>",(ulong)(uint)indent,&_LC0);
    }
    else {
LAB_0010049b:
      if ((uVar2 & 0xf0000) == 0x30000) {
        uVar2 = BIO_dump_indent(out,(char *)local_48,iVar1,indent);
        goto LAB_00100349;
      }
    }
  }
  else {
    len = (long)iVar1;
    if (method->it == (ASN1_ITEM_EXP *)0x0) {
      val = (ASN1_VALUE *)(*method->d2i)((void *)0x0,&local_48,len);
    }
    else {
      pAVar3 = (ASN1_ITEM *)(*(code *)method->it)();
      val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_48,len,pAVar3);
    }
    if (val != (ASN1_VALUE *)0x0) {
      if (method->i2s == (X509V3_EXT_I2S)0x0) {
        if (method->i2v == (X509V3_EXT_I2V)0x0) {
          if (method->i2r == (X509V3_EXT_I2R)0x0) {
            uVar2 = 0;
            val_00 = (stack_st_CONF_VALUE *)0x0;
            ptr = (char *)0x0;
          }
          else {
            iVar1 = (*method->i2r)(method,val,out,indent);
            uVar2 = (uint)(iVar1 != 0);
            val_00 = (stack_st_CONF_VALUE *)0x0;
            ptr = (char *)0x0;
          }
        }
        else {
          val_00 = (*method->i2v)(method,val,(stack_st_CONF_VALUE *)0x0);
          if (val_00 == (stack_st_CONF_VALUE *)0x0) {
            ptr = (char *)0x0;
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
            ptr = (char *)0x0;
            X509V3_EXT_val_prn(out,val_00,indent,method->ext_flags & 4);
          }
        }
      }
      else {
        ptr = (*method->i2s)(method,val);
        if (ptr == (char *)0x0) {
          val_00 = (stack_st_CONF_VALUE *)0x0;
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
          val_00 = (stack_st_CONF_VALUE *)0x0;
          BIO_printf(out,"%*s%s",(ulong)(uint)indent,&_LC0,ptr);
        }
      }
      OPENSSL_sk_pop_free(val_00,&X509V3_conf_free);
      CRYPTO_free(ptr);
      if (method->it == (ASN1_ITEM_EXP *)0x0) {
        (*method->ext_free)(val);
      }
      else {
        pAVar3 = (ASN1_ITEM *)(*(code *)method->it)();
        ASN1_item_free(val,pAVar3);
      }
      goto LAB_00100349;
    }
    if ((uVar2 & 0xf0000) == 0x20000) {
      uVar2 = ASN1_parse_dump(out,local_48,len,indent,-1);
      goto LAB_00100349;
    }
    if (0x20000 < (uVar2 & 0xf0000)) goto LAB_0010049b;
    if ((flag & 0xf0000) == 0) goto LAB_00100500;
    BIO_printf(out,"%*s<Parse Error>",(ulong)(uint)indent,&_LC0);
  }
  uVar2 = 1;
LAB_00100349:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int X509V3_extensions_print
              (BIO *out,char *title,stack_st_X509_EXTENSION *exts,ulong flag,int indent)

{
  int iVar1;
  int iVar2;
  X509_EXTENSION *pXVar3;
  ASN1_OBJECT *pAVar4;
  ASN1_OCTET_STRING *pAVar5;
  char *pcVar6;
  ulong uVar7;
  int iVar8;
  
  iVar1 = OPENSSL_sk_num(exts);
  if (0 < iVar1) {
    uVar7 = (ulong)(uint)indent;
    if (title != (char *)0x0) {
      uVar7 = (ulong)(indent + 4);
      BIO_printf(out,"%*s%s:\n",(ulong)(uint)indent,&_LC0,title);
    }
    iVar1 = (int)uVar7;
    if ((flag & 0x2000) == 0) {
      if (iVar1 == 0) {
        while( true ) {
          iVar1 = OPENSSL_sk_num(exts);
          if (iVar1 <= (int)uVar7) break;
          pXVar3 = (X509_EXTENSION *)OPENSSL_sk_value(exts,uVar7);
          pAVar4 = X509_EXTENSION_get_object(pXVar3);
          i2a_ASN1_OBJECT(out,pAVar4);
          iVar1 = X509_EXTENSION_get_critical(pXVar3);
          pcVar6 = "critical";
          if (iVar1 == 0) {
            pcVar6 = "";
          }
          iVar1 = BIO_printf(out,": %s\n",pcVar6);
          if (iVar1 < 1) {
            return 0;
          }
          iVar1 = X509V3_EXT_print(out,pXVar3,flag,4);
          if (iVar1 == 0) {
            BIO_printf(out,"%*s",4,&_LC0);
            pAVar5 = X509_EXTENSION_get_data(pXVar3);
            ASN1_STRING_print(out,pAVar5);
          }
          iVar1 = BIO_write(out,&_LC5,1);
          if (iVar1 < 1) {
            return 0;
          }
          uVar7 = (ulong)((int)uVar7 + 1);
        }
      }
      else {
        for (iVar8 = 0; iVar2 = OPENSSL_sk_num(exts), iVar8 < iVar2; iVar8 = iVar8 + 1) {
          pXVar3 = (X509_EXTENSION *)OPENSSL_sk_value(exts,iVar8);
          pAVar4 = X509_EXTENSION_get_object(pXVar3);
          iVar2 = BIO_printf(out,"%*s",uVar7,&_LC0);
          if (iVar2 < 1) {
            return 0;
          }
          i2a_ASN1_OBJECT(out,pAVar4);
          iVar2 = X509_EXTENSION_get_critical(pXVar3);
          pcVar6 = "critical";
          if (iVar2 == 0) {
            pcVar6 = "";
          }
          iVar2 = BIO_printf(out,": %s\n",pcVar6);
          if (iVar2 < 1) {
            return 0;
          }
          iVar2 = X509V3_EXT_print(out,pXVar3,flag,iVar1 + 4U);
          if (iVar2 == 0) {
            BIO_printf(out,"%*s",(ulong)(iVar1 + 4U),&_LC0);
            pAVar5 = X509_EXTENSION_get_data(pXVar3);
            ASN1_STRING_print(out,pAVar5);
          }
          iVar2 = BIO_write(out,&_LC5,1);
          if (iVar2 < 1) {
            return 0;
          }
        }
      }
    }
    else {
      for (iVar8 = 0; iVar2 = OPENSSL_sk_num(exts), iVar8 < iVar2; iVar8 = iVar8 + 1) {
        pXVar3 = (X509_EXTENSION *)OPENSSL_sk_value(exts,iVar8);
        pAVar4 = X509_EXTENSION_get_object(pXVar3);
        iVar2 = OBJ_obj2nid(pAVar4);
        if ((iVar2 == 0x52) || (iVar2 = OBJ_obj2nid(pAVar4), iVar2 == 0x5a)) {
          if ((iVar1 != 0) && (iVar2 = BIO_printf(out,"%*s",uVar7,&_LC0), iVar2 < 1)) {
            return 0;
          }
          i2a_ASN1_OBJECT(out,pAVar4);
          iVar2 = X509_EXTENSION_get_critical(pXVar3);
          pcVar6 = "";
          if (iVar2 != 0) {
            pcVar6 = "critical";
          }
          iVar2 = BIO_printf(out,": %s\n",pcVar6);
          if (iVar2 < 1) {
            return 0;
          }
          iVar2 = X509V3_EXT_print(out,pXVar3,flag,iVar1 + 4U);
          if (iVar2 == 0) {
            BIO_printf(out,"%*s",(ulong)(iVar1 + 4U),&_LC0);
            pAVar5 = X509_EXTENSION_get_data(pXVar3);
            ASN1_STRING_print(out,pAVar5);
          }
          iVar2 = BIO_write(out,&_LC5,1);
          if (iVar2 < 1) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



int X509V3_EXT_print_fp(FILE *out,X509_EXTENSION *ext,int flag,int indent)

{
  int iVar1;
  BIO *out_00;
  
  iVar1 = 0;
  out_00 = BIO_new_fp(out,0);
  if (out_00 != (BIO *)0x0) {
    iVar1 = X509V3_EXT_print(out_00,ext,(long)flag,indent);
    BIO_free(out_00);
  }
  return iVar1;
}


