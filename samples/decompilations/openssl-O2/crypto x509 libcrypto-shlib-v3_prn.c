
int unknown_ext_print(BIO *param_1,uchar *param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  
  param_4 = param_4 & 0xf0000;
  if (param_4 == 0x20000) {
    iVar1 = ASN1_parse_dump(param_1,param_2,(long)param_3,param_5,-1);
    return iVar1;
  }
  if (param_4 < 0x20001) {
    iVar1 = 0;
    if (param_4 != 0) {
      if (param_6 == 0) {
        BIO_printf(param_1,"%*s<Not Supported>",(ulong)param_5,&_LC0);
        return 1;
      }
      BIO_printf(param_1,"%*s<Parse Error>",(ulong)param_5,&_LC0);
      return 1;
    }
  }
  else {
    if (param_4 == 0x30000) {
      iVar1 = BIO_dump_indent(param_1,(char *)param_2,param_3,param_5);
      return iVar1;
    }
    iVar1 = 1;
  }
  return iVar1;
}



void X509V3_EXT_val_prn(BIO *out,stack_st_CONF_VALUE *val,int indent,int ml)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  if (val == (stack_st_CONF_VALUE *)0x0) {
    return;
  }
  if ((ml == 0) || (iVar1 = OPENSSL_sk_num(val), iVar1 == 0)) {
    BIO_printf(out,"%*s",(ulong)(uint)indent,&_LC0);
    iVar1 = OPENSSL_sk_num(val);
    if (iVar1 == 0) {
      BIO_puts(out,"<EMPTY>\n");
    }
    iVar1 = OPENSSL_sk_num(val);
    if (0 < iVar1) {
      iVar1 = 0;
      if (ml == 0) goto LAB_0010018e;
      iVar1 = 0;
      goto LAB_00100171;
    }
  }
  else {
    iVar1 = OPENSSL_sk_num(val);
    if (0 < iVar1) {
      iVar1 = 0;
LAB_00100171:
      BIO_printf(out,"%*s",(ulong)(uint)indent,&_LC0);
LAB_0010018e:
      do {
        lVar3 = OPENSSL_sk_value(val,iVar1);
        if (*(char **)(lVar3 + 8) == (char *)0x0) {
          BIO_puts(out,*(char **)(lVar3 + 0x10));
LAB_001001b7:
          iVar2 = OPENSSL_sk_num(val);
          if (iVar2 <= iVar1 + 1) {
            return;
          }
        }
        else {
          if (*(long *)(lVar3 + 0x10) != 0) {
            BIO_printf(out,"%s:%s");
            goto LAB_001001b7;
          }
          BIO_puts(out,*(char **)(lVar3 + 8));
          iVar2 = OPENSSL_sk_num(val);
          if (iVar2 <= iVar1 + 1) {
            return;
          }
        }
        iVar1 = iVar1 + 1;
        if (ml != 0) goto LAB_00100160;
        BIO_printf(out,", ");
      } while( true );
    }
  }
  return;
LAB_00100160:
  BIO_printf(out,"\n");
  goto LAB_00100171;
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
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  x = X509_EXTENSION_get_data(ext);
  local_48 = (uchar *)ASN1_STRING_get0_data(x);
  iVar1 = ASN1_STRING_length(x);
  method = X509V3_EXT_get(ext);
  uVar4 = 0;
  if (method != (X509V3_EXT_METHOD *)0x0) {
    if (method->it == (ASN1_ITEM_EXP *)0x0) {
      val = (ASN1_VALUE *)(*method->d2i)((void *)0x0,&local_48,(long)iVar1);
    }
    else {
      pAVar3 = (ASN1_ITEM *)(*(code *)method->it)();
      val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_48,(long)iVar1,pAVar3);
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
      goto LAB_00100356;
    }
    uVar4 = 1;
  }
  uVar2 = unknown_ext_print(out,local_48,iVar1,flag,indent,uVar4);
LAB_00100356:
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
  X509_EXTENSION *ex;
  ASN1_OBJECT *o;
  ASN1_OCTET_STRING *v;
  ulong uVar3;
  char *pcVar4;
  
  iVar1 = OPENSSL_sk_num(exts);
  if (0 < iVar1) {
    if (title != (char *)0x0) {
      uVar3 = (ulong)(uint)indent;
      indent = indent + 4;
      BIO_printf(out,"%*s%s:\n",uVar3,&_LC0,title);
    }
    for (iVar1 = 0; iVar2 = OPENSSL_sk_num(exts), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      ex = (X509_EXTENSION *)OPENSSL_sk_value(exts,iVar1);
      o = X509_EXTENSION_get_object(ex);
      if ((((flag & 0x2000) == 0) || (iVar2 = OBJ_obj2nid(o), iVar2 == 0x52)) ||
         (iVar2 = OBJ_obj2nid(o), iVar2 == 0x5a)) {
        if ((indent != 0) && (iVar2 = BIO_printf(out,"%*s",(ulong)(uint)indent,&_LC0), iVar2 < 1)) {
          return 0;
        }
        i2a_ASN1_OBJECT(out,o);
        iVar2 = X509_EXTENSION_get_critical(ex);
        pcVar4 = "";
        if (iVar2 != 0) {
          pcVar4 = "critical";
        }
        iVar2 = BIO_printf(out,": %s\n",pcVar4);
        if (iVar2 < 1) {
          return 0;
        }
        iVar2 = X509V3_EXT_print(out,ex,flag,indent + 4U);
        if (iVar2 == 0) {
          BIO_printf(out,"%*s",(ulong)(indent + 4U),&_LC0);
          v = X509_EXTENSION_get_data(ex);
          ASN1_STRING_print(out,v);
        }
        iVar2 = BIO_write(out,&_LC5,1);
        if (iVar2 < 1) {
          return 0;
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


