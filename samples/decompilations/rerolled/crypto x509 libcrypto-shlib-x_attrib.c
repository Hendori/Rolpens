undefined1 *X509_ATTRIBUTE_it(void) {
   return local_it_0;
}X509_ATTRIBUTE *d2i_X509_ATTRIBUTE(X509_ATTRIBUTE **a, uchar **in, long len) {
   ASN1_ITEM *it;
   X509_ATTRIBUTE *pXVar1;
   it = (ASN1_ITEM*)X509_ATTRIBUTE_it();
   pXVar1 = (X509_ATTRIBUTE*)ASN1_item_d2i((ASN1_VALUE**)a, in, len, it);
   return pXVar1;
}int i2d_X509_ATTRIBUTE(X509_ATTRIBUTE *a, uchar **out) {
   ASN1_ITEM *it;
   int iVar1;
   it = (ASN1_ITEM*)X509_ATTRIBUTE_it();
   iVar1 = ASN1_item_i2d((ASN1_VALUE*)a, out, it);
   return iVar1;
}/* WARNING: Unknown calling convention -- yet parameter storage is locked */X509_ATTRIBUTE *X509_ATTRIBUTE_new(void) {
   ASN1_ITEM *it;
   X509_ATTRIBUTE *pXVar1;
   it = (ASN1_ITEM*)X509_ATTRIBUTE_it();
   pXVar1 = (X509_ATTRIBUTE*)ASN1_item_new(it);
   return pXVar1;
}void X509_ATTRIBUTE_free(X509_ATTRIBUTE *a) {
   ASN1_ITEM *it;
   it = (ASN1_ITEM*)X509_ATTRIBUTE_it();
   ASN1_item_free((ASN1_VALUE*)a, it);
   return;
}X509_ATTRIBUTE *X509_ATTRIBUTE_dup(X509_ATTRIBUTE *xa) {
   ASN1_ITEM *it;
   X509_ATTRIBUTE *pXVar1;
   it = (ASN1_ITEM*)X509_ATTRIBUTE_it();
   pXVar1 = (X509_ATTRIBUTE*)ASN1_item_dup(it, xa);
   return pXVar1;
}X509_ATTRIBUTE *X509_ATTRIBUTE_create(int nid, int atrtype, void *value) {
   int iVar1;
   ASN1_OBJECT *pAVar2;
   X509_ATTRIBUTE *a;
   ASN1_TYPE *a_00;
   pAVar2 = OBJ_nid2obj(nid);
   if (pAVar2 != (ASN1_OBJECT*)0x0) {
      a = X509_ATTRIBUTE_new();
      if (a != (X509_ATTRIBUTE*)0x0) {
         a->object = pAVar2;
         a_00 = ASN1_TYPE_new();
         if (a_00 != (ASN1_TYPE*)0x0) {
            iVar1 = OPENSSL_sk_push(*(undefined8*)&a->single, a_00);
            if (iVar1 != 0) {
               ASN1_TYPE_set(a_00, atrtype, value);
               return a;
            }
         }
         X509_ATTRIBUTE_free(a);
         ASN1_TYPE_free(a_00);
      }
   }
   return (X509_ATTRIBUTE*)0x0;
}ulong ossl_print_attribute_value(BIO *param_1, int param_2, undefined4 *param_3, uint param_4) {
   ASN1_OBJECT *a;
   int iVar1;
   uint uVar2;
   ulong uVar3;
   X509_NAME *nm;
   long len;
   char *pcVar4;
   uchar *pp;
   long in_FS_OFFSET;
   uchar *local_80;
   char local_78[88];
   long local_20;
   uVar3 = (ulong)param_4;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (*param_3) {
      default:
    uVar2 = BIO_printf(param_1,"%*s<Unsupported tag %d>",uVar3,&_LC0);
LAB_0010026b:
    uVar3 = (ulong)(~uVar2 >> 0x1f);
    break;
      case 1:
    pcVar4 = "%*sTRUE";
    if (param_3[2] != 0) goto LAB_001002d9;
    iVar1 = BIO_printf(param_1,"%*sFALSE",uVar3,&_LC0);
    uVar3 = (ulong)(4 < iVar1);
    break;
      case 2:
      case 10:
    iVar1 = BIO_printf(param_1,"%*s",uVar3,&_LC0);
    if (iVar1 < 0) goto LAB_001004a0;
    iVar1 = ASN1_ENUMERATED_get_int64(&local_80,*(undefined8 *)(param_3 + 2));
    if (iVar1 < 1) {
      uVar3 = ossl_bio_print_hex(param_1,*(undefined8 *)(*(undefined4 **)(param_3 + 2) + 2),
                                 **(undefined4 **)(param_3 + 2));
    }
    else {
      iVar1 = BIO_printf(param_1,"%lld",local_80);
      uVar3 = (ulong)(0 < iVar1);
    }
    break;
      case 3:
      case 4:
      case 0x15:
    iVar1 = BIO_printf(param_1,"%*s",uVar3,&_LC0);
    if (-1 < iVar1) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = ossl_bio_print_hex(param_1,*(undefined8 *)(*(undefined4 **)(param_3 + 2) + 2),
                                   **(undefined4 **)(param_3 + 2));
        return uVar3;
      }
      goto LAB_00100509;
    }
LAB_001004a0:
    uVar3 = 0;
    break;
      case 5:
    pcVar4 = "%*sNULL";
    goto LAB_001002d9;
      case 6:
    iVar1 = BIO_printf(param_1,"%*s",uVar3,&_LC0);
    if (iVar1 < 0) goto LAB_001004a0;
    a = *(ASN1_OBJECT **)(param_3 + 2);
    iVar1 = OBJ_obj2txt(local_78,0x50,a,1);
    uVar3 = 0;
    if (0 < iVar1) {
      iVar1 = OBJ_obj2nid(a);
      pcVar4 = OBJ_nid2ln(iVar1);
      if (pcVar4 == (char *)0x0) {
        uVar2 = BIO_printf(param_1,"%s",local_78,0);
      }
      else {
        uVar2 = BIO_printf(param_1,"%s (%s)",local_78,pcVar4);
      }
      goto LAB_0010026b;
    }
    break;
      case 7:
      case 0xc:
      case 0x12:
      case 0x13:
      case 0x14:
      for (int i_4 = 0; i_4 < 5; i_4++) {
         case 0x16:
      }
      case 0x1b:
    uVar2 = BIO_printf(param_1,"%*s%.*s",uVar3,&_LC0,(ulong)**(uint **)(param_3 + 2),
                       *(undefined8 *)(*(uint **)(param_3 + 2) + 2));
    uVar3 = (ulong)(~uVar2 >> 0x1f);
    break;
      case 9:
    pcVar4 = "%*sREAL";
LAB_001002d9:
    iVar1 = BIO_printf(param_1,pcVar4,uVar3,&_LC0);
    uVar3 = (ulong)(3 < iVar1);
    break;
      case 0x10:
    len = (long)**(int **)(param_3 + 2);
    pp = *(uchar **)(*(int **)(param_3 + 2) + 2);
    if (param_2 < 0x1f5) {
      if ((param_2 < 0x1d3) || ((0x200040091U >> ((ulong)(param_2 - 0x1d3) & 0x3f) & 1) == 0))
      goto LAB_00100309;
    }
    else if (3 < param_2 - 0x36bU) goto LAB_00100309;
    local_80 = pp;
    nm = d2i_X509_NAME((X509_NAME **)0x0,&local_80,len);
    if (nm == (X509_NAME *)0x0) {
      BIO_puts(param_1,"(COULD NOT DECODE DISTINGUISHED NAME)\n");
      goto LAB_001004a0;
    }
    iVar1 = X509_NAME_print_ex(param_1,nm,param_4,0x20000);
    X509_NAME_free(nm);
    uVar3 = (ulong)(0 < iVar1);
    break;
      case 0x11:
    len = (long)**(int **)(param_3 + 2);
    pp = *(uchar **)(*(int **)(param_3 + 2) + 2);
LAB_00100309:
    iVar1 = ASN1_parse_dump(param_1,pp,len,param_4,1);
    uVar3 = (ulong)(0 < iVar1);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   LAB_00100509:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
