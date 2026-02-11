
undefined1 * X509_NAME_ENTRY_it(void)

{
  return local_it_8;
}



undefined1 * X509_NAME_ENTRIES_it(void)

{
  return local_it_4;
}



void X509_NAME_ENTRY_free(X509_NAME_ENTRY *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_NAME_ENTRY_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



char x509_name_ex_print(BIO *param_1,undefined8 *param_2,int param_3,undefined8 param_4,long param_5
                       )

{
  int iVar1;
  
  iVar1 = X509_NAME_print_ex(param_1,(X509_NAME *)*param_2,param_3,*(ulong *)(param_5 + 8));
  return (0 < iVar1) * '\x02';
}



void local_sk_X509_NAME_ENTRY_free(void)

{
  OPENSSL_sk_free();
  return;
}



int i2d_name_canon(undefined8 param_1,uchar **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  ASN1_VALUE *local_38;
  long local_30;
  
  iVar3 = 0;
  iVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar1 = OPENSSL_sk_num(param_1);
    if (iVar1 <= iVar2) {
LAB_001000f7:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_38 = (ASN1_VALUE *)OPENSSL_sk_value(param_1,iVar2);
    iVar1 = ASN1_item_ex_i2d(&local_38,param_2,(ASN1_ITEM *)local_it_4,-1,-1);
    if ((iVar1 < 0) || (0x7fffffff - iVar1 < iVar3)) {
      iVar3 = -1;
      goto LAB_001000f7;
    }
    iVar3 = iVar3 + iVar1;
    iVar2 = iVar2 + 1;
  } while( true );
}



void local_sk_X509_NAME_ENTRY_pop_free(undefined8 param_1)

{
  OPENSSL_sk_pop_free(param_1,X509_NAME_ENTRY_free);
  return;
}



void x509_name_ex_free(undefined8 *param_1)

{
  undefined8 *ptr;
  
  if (param_1 != (undefined8 *)0x0) {
    ptr = (undefined8 *)*param_1;
    if (ptr != (undefined8 *)0x0) {
      BUF_MEM_free((BUF_MEM *)ptr[2]);
      OPENSSL_sk_pop_free(*ptr,X509_NAME_ENTRY_free);
      CRYPTO_free((void *)ptr[3]);
      CRYPTO_free(ptr);
      *param_1 = 0;
    }
    return;
  }
  return;
}



undefined8 x509_name_ex_new(undefined8 *param_1)

{
  long *ptr;
  long lVar1;
  BUF_MEM *pBVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x28,"crypto/x509/x_name.c",0x5c);
  if (ptr != (long *)0x0) {
    lVar1 = OPENSSL_sk_new_null();
    *ptr = lVar1;
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_name.c",0x61,"x509_name_ex_new");
      ERR_set_error(0xd,0x8000f,0);
    }
    else {
      pBVar2 = BUF_MEM_new();
      ptr[2] = (long)pBVar2;
      if (pBVar2 != (BUF_MEM *)0x0) {
        *(undefined4 *)(ptr + 1) = 1;
        *param_1 = ptr;
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/x_name.c",0x65,"x509_name_ex_new");
      ERR_set_error(0xd,0x80007,0);
    }
    OPENSSL_sk_free(*ptr);
    CRYPTO_free(ptr);
  }
  return 0;
}



X509_NAME_ENTRY * d2i_X509_NAME_ENTRY(X509_NAME_ENTRY **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_NAME_ENTRY *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_ENTRY_it();
  pXVar1 = (X509_NAME_ENTRY *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_NAME_ENTRY(X509_NAME_ENTRY *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_NAME_ENTRY_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_NAME_ENTRY * X509_NAME_ENTRY_new(void)

{
  ASN1_ITEM *it;
  X509_NAME_ENTRY *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_ENTRY_it();
  pXVar1 = (X509_NAME_ENTRY *)ASN1_item_new(it);
  return pXVar1;
}



undefined8 x509_name_canon_part_0(undefined8 *param_1)

{
  uchar *puVar1;
  ASN1_STRING *in;
  ASN1_STRING *dst;
  uchar uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  X509_NAME_ENTRY *a;
  ASN1_OBJECT *pAVar8;
  ulong uVar9;
  undefined8 uVar10;
  uchar *puVar11;
  uchar *puVar12;
  uchar *puVar13;
  long in_FS_OFFSET;
  long local_68;
  int local_58;
  int local_54;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = OPENSSL_sk_new_null();
  local_54 = -1;
  local_58 = 0;
  local_68 = 0;
  if (lVar6 == 0) {
    ERR_new();
    uVar10 = 0x147;
LAB_0010056b:
    ERR_set_debug("crypto/x509/x_name.c",uVar10,"x509_name_canon");
    ERR_set_error(0xb,0x8000f,0);
  }
  else {
LAB_00100360:
    iVar3 = OPENSSL_sk_num(*param_1);
    if (local_58 < iVar3) {
      puVar7 = (undefined8 *)OPENSSL_sk_value(*param_1,local_58);
      if (*(int *)(puVar7 + 2) != local_54) {
        local_68 = OPENSSL_sk_new_null();
        if (local_68 == 0) goto LAB_0010058a;
        iVar3 = OPENSSL_sk_push(lVar6,local_68);
        if (iVar3 == 0) {
          OPENSSL_sk_free(local_68);
          ERR_new();
          uVar10 = 0x152;
          goto LAB_0010056b;
        }
        local_54 = *(int *)(puVar7 + 2);
      }
      a = X509_NAME_ENTRY_new();
      if (a == (X509_NAME_ENTRY *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/x509/x_name.c",0x159,"x509_name_canon");
        ERR_set_error(0xb,0x8000d,0);
        goto LAB_0010058a;
      }
      pAVar8 = OBJ_dup((ASN1_OBJECT *)*puVar7);
      a->object = pAVar8;
      if (pAVar8 != (ASN1_OBJECT *)0x0) {
        in = (ASN1_STRING *)puVar7[1];
        dst = a->value;
        uVar9 = ASN1_tag2bit(in->type);
        if ((uVar9 & 0x2956) != 0) {
          dst->type = 0xc;
          iVar3 = ASN1_STRING_to_UTF8(&dst->data,in);
          dst->length = iVar3;
          if (iVar3 == -1) goto LAB_00100600;
          puVar11 = dst->data;
          if (0 < iVar3) {
            do {
              iVar4 = ossl_ctype_check(*puVar11,8);
              if (iVar4 == 0) {
                puVar12 = puVar11 + iVar3;
                goto LAB_001004ad;
              }
              puVar11 = puVar11 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          goto LAB_001006d8;
        }
        iVar3 = ASN1_STRING_copy(dst,in);
        if (iVar3 == 0) goto LAB_00100600;
        goto LAB_00100419;
      }
      ERR_new();
      ERR_set_debug("crypto/x509/x_name.c",0x15e,"x509_name_canon");
      ERR_set_error(0xb,0x80008,0);
LAB_00100600:
      uVar10 = 0;
      goto LAB_0010058f;
    }
    iVar3 = i2d_name_canon(lVar6,0);
    if (-1 < iVar3) {
      *(int *)(param_1 + 4) = iVar3;
      local_48 = CRYPTO_malloc(iVar3,"crypto/x509/x_name.c",0x170);
      if (local_48 != (void *)0x0) {
        param_1[3] = local_48;
        a = (X509_NAME_ENTRY *)0x0;
        uVar10 = 1;
        i2d_name_canon(lVar6,&local_48);
        goto LAB_0010058f;
      }
    }
  }
LAB_0010058a:
  uVar10 = 0;
  a = (X509_NAME_ENTRY *)0x0;
LAB_0010058f:
  X509_NAME_ENTRY_free(a);
  OPENSSL_sk_pop_free(lVar6,local_sk_X509_NAME_ENTRY_pop_free);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    puVar12 = puVar12 + -1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) break;
LAB_001004ad:
    iVar4 = ossl_ctype_check(puVar12[-1],8);
    if (iVar4 == 0) {
      iVar4 = 0;
      puVar12 = dst->data;
      goto LAB_001004df;
    }
  }
LAB_001006d8:
  iVar3 = 0;
LAB_0010054d:
  dst->length = iVar3;
LAB_00100419:
  iVar3 = OPENSSL_sk_push(local_68);
  if (iVar3 == 0) {
    ERR_new();
    uVar10 = 0;
    ERR_set_debug("crypto/x509/x_name.c",0x164,"x509_name_canon");
    ERR_set_error(0xb,0x8000f,0);
    goto LAB_0010058f;
  }
  local_58 = local_58 + 1;
  goto LAB_00100360;
LAB_001004df:
  do {
    uVar2 = *puVar11;
    puVar13 = puVar12 + 1;
    if ((char)uVar2 < '\0') {
LAB_001004d0:
      iVar4 = iVar4 + 1;
      *puVar12 = uVar2;
      puVar11 = puVar11 + 1;
    }
    else {
      iVar5 = ossl_ctype_check(uVar2,8);
      if (iVar5 == 0) {
        uVar2 = ossl_tolower(*puVar11);
        goto LAB_001004d0;
      }
      *puVar12 = ' ';
      puVar12 = puVar11;
      do {
        puVar1 = puVar12 + 1;
        puVar12 = puVar12 + 1;
        iVar5 = ossl_ctype_check(*puVar1,8);
      } while (iVar5 != 0);
      iVar4 = (iVar4 + (int)puVar12) - (int)puVar11;
      puVar11 = puVar12;
    }
    puVar12 = puVar13;
  } while (iVar4 < iVar3);
  iVar3 = (int)puVar13 - *(int *)&dst->data;
  goto LAB_0010054d;
}



ulong x509_name_ex_i2d(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined4 extraout_var;
  size_t __n;
  ulong len;
  long in_FS_OFFSET;
  ASN1_VALUE *local_50;
  uchar *local_48;
  long local_40;
  
  puVar1 = (undefined8 *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(puVar1 + 1) == 0) goto LAB_00100740;
  local_50 = (ASN1_VALUE *)0x0;
  local_50 = (ASN1_VALUE *)OPENSSL_sk_new_null();
  if (local_50 == (ASN1_VALUE *)0x0) {
LAB_001008e8:
    ERR_new();
    ERR_set_debug("crypto/x509/x_name.c",0x11a,"x509_name_encode");
    ERR_set_error(0xd,0x8000f,0);
LAB_00100918:
    OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_free);
  }
  else {
    iVar4 = -1;
    lVar7 = 0;
    for (iVar5 = 0; iVar3 = OPENSSL_sk_num(*puVar1), iVar5 < iVar3; iVar5 = iVar5 + 1) {
      lVar6 = OPENSSL_sk_value(*puVar1,iVar5);
      if (*(int *)(lVar6 + 0x10) != iVar4) {
        lVar7 = OPENSSL_sk_new_null();
        if (lVar7 == 0) goto LAB_001008e8;
        iVar4 = OPENSSL_sk_push(local_50,lVar7);
        if (iVar4 == 0) {
          OPENSSL_sk_free(lVar7);
          goto LAB_001008e8;
        }
        iVar4 = *(int *)(lVar6 + 0x10);
      }
      iVar3 = OPENSSL_sk_push(lVar7);
      if (iVar3 == 0) goto LAB_001008e8;
    }
    iVar4 = ASN1_item_ex_i2d(&local_50,(uchar **)0x0,(ASN1_ITEM *)local_it_5,-1,-1);
    len = (ulong)iVar4;
    iVar5 = BUF_MEM_grow((BUF_MEM *)puVar1[2],len);
    if (CONCAT44(extraout_var,iVar5) == 0) {
      ERR_new();
      ERR_set_debug("crypto/x509/x_name.c",0x10f,"x509_name_encode");
      ERR_set_error(0xd,0x80007,0);
      goto LAB_00100918;
    }
    local_48 = *(uchar **)(puVar1[2] + 8);
    ASN1_item_ex_i2d(&local_50,&local_48,(ASN1_ITEM *)local_it_5,-1,-1);
    OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_free);
    *(undefined4 *)(puVar1 + 1) = 0;
    if (iVar4 < 0) goto LAB_00100763;
    CRYPTO_free((void *)puVar1[3]);
    puVar1[3] = 0;
    iVar4 = OPENSSL_sk_num(*puVar1);
    if (iVar4 == 0) {
      *(undefined4 *)(puVar1 + 4) = 0;
LAB_00100740:
      uVar2 = *(ulong *)puVar1[2];
      len = uVar2 & 0xffffffff;
      if (param_2 != (long *)0x0) {
        __n = (size_t)(int)uVar2;
        memcpy((void *)*param_2,(void *)((ulong *)puVar1[2])[1],__n);
        *param_2 = *param_2 + __n;
      }
      goto LAB_00100763;
    }
    iVar4 = x509_name_canon_part_0(puVar1);
    if (iVar4 != 0) goto LAB_00100740;
  }
  len = 0xffffffff;
LAB_00100763:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return len & 0xffffffff;
}



X509_NAME_ENTRY * X509_NAME_ENTRY_dup(X509_NAME_ENTRY *ne)

{
  ASN1_ITEM *it;
  X509_NAME_ENTRY *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_ENTRY_it();
  pXVar1 = (X509_NAME_ENTRY *)ASN1_item_dup(it,ne);
  return pXVar1;
}



undefined1 * X509_NAME_it(void)

{
  return local_it_7;
}



X509_NAME * d2i_X509_NAME(X509_NAME **a,uchar **in,long len)

{
  ASN1_ITEM *it;
  X509_NAME *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  pXVar1 = (X509_NAME *)ASN1_item_d2i((ASN1_VALUE **)a,in,len,it);
  return pXVar1;
}



int i2d_X509_NAME(X509_NAME *a,uchar **out)

{
  ASN1_ITEM *it;
  int iVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,it);
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_NAME * X509_NAME_new(void)

{
  ASN1_ITEM *it;
  X509_NAME *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  pXVar1 = (X509_NAME *)ASN1_item_new(it);
  return pXVar1;
}



void X509_NAME_free(X509_NAME *a)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  ASN1_item_free((ASN1_VALUE *)a,it);
  return;
}



int x509_name_ex_d2i(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,int param_5,
                    int param_6,char param_7,ASN1_TLC *param_8)

{
  uchar *__src;
  stack_st_X509_NAME_ENTRY *psVar1;
  X509_NAME *a;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined4 extraout_var;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  uchar *local_58;
  ASN1_VALUE *local_50;
  X509_NAME *local_48;
  long local_40;
  
  __src = (uchar *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (ASN1_VALUE *)0x0;
  if (0x100000 < param_3) {
    param_3 = 0x100000;
  }
  local_48 = (X509_NAME *)0x0;
  uVar5 = (ulong)(uint)(int)param_7;
  local_58 = __src;
  iVar2 = ASN1_item_ex_d2i(&local_50,&local_58,param_3,(ASN1_ITEM *)local_it_5,param_5,param_6,
                           param_7,param_8);
  if (iVar2 < 1) goto LAB_00100b46;
  if (*param_1 != 0) {
    x509_name_ex_free(param_1,0,uVar5,param_8);
  }
  iVar2 = x509_name_ex_new(&local_48,0);
  a = local_48;
  if (iVar2 == 0) {
    if (local_48 != (X509_NAME *)0x0) goto LAB_00100b8d;
  }
  else {
    iVar2 = BUF_MEM_grow(local_48->bytes,(long)local_58 - (long)__src);
    if (CONCAT44(extraout_var,iVar2) != 0) {
      memcpy(a->bytes->data,__src,(long)local_58 - (long)__src);
      for (iVar2 = 0; iVar3 = OPENSSL_sk_num(local_50), iVar2 < iVar3; iVar2 = iVar2 + 1) {
        uVar6 = OPENSSL_sk_value(local_50,iVar2);
        for (iVar3 = 0; iVar4 = OPENSSL_sk_num(uVar6), iVar3 < iVar4; iVar3 = iVar3 + 1) {
          lVar7 = OPENSSL_sk_value(uVar6,iVar3);
          psVar1 = a->entries;
          *(int *)(lVar7 + 0x10) = iVar2;
          iVar4 = OPENSSL_sk_push(psVar1,lVar7);
          if (iVar4 == 0) goto LAB_00100b8d;
          OPENSSL_sk_set(uVar6,iVar3,0);
        }
      }
      CRYPTO_free(a->canon_enc);
      a->canon_enc = (uchar *)0x0;
      iVar2 = OPENSSL_sk_num(a->entries);
      if (iVar2 == 0) {
        a->canon_enclen = 0;
      }
      else {
        iVar2 = x509_name_canon_part_0(a);
        if (iVar2 == 0) goto LAB_00100b8d;
      }
      OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_free);
      a->modified = 0;
      *param_1 = (long)a;
      *param_2 = local_58;
      iVar2 = 1;
      goto LAB_00100b46;
    }
LAB_00100b8d:
    X509_NAME_free(a);
  }
  OPENSSL_sk_pop_free(local_50,local_sk_X509_NAME_ENTRY_pop_free);
  ERR_new();
  ERR_set_debug("crypto/x509/x_name.c",0xd2,"x509_name_ex_d2i");
  ERR_set_error(0xd,0x8010a,0);
  iVar2 = 0;
LAB_00100b46:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



X509_NAME * X509_NAME_dup(X509_NAME *xn)

{
  ASN1_ITEM *it;
  X509_NAME *pXVar1;
  
  it = (ASN1_ITEM *)X509_NAME_it();
  pXVar1 = (X509_NAME *)ASN1_item_dup(it,xn);
  return pXVar1;
}



int X509_NAME_set(X509_NAME **xn,X509_NAME *name)

{
  X509_NAME *pXVar1;
  
  if (*xn != name) {
    pXVar1 = X509_NAME_dup(name);
    if (pXVar1 != (X509_NAME *)0x0) {
      X509_NAME_free(*xn);
      *xn = pXVar1;
    }
    return (uint)(pXVar1 != (X509_NAME *)0x0);
  }
  return (int)(name != (X509_NAME *)0x0);
}



int X509_NAME_print(BIO *bp,X509_NAME *name,int obase)

{
  char cVar1;
  int iVar2;
  char *ptr;
  char *pcVar3;
  int len;
  char *data;
  
  ptr = X509_NAME_oneline(name,(char *)0x0,0);
  if (ptr == (char *)0x0) {
    return 0;
  }
  data = ptr + 1;
  pcVar3 = ptr + 2;
  if (*ptr == '\0') {
    CRYPTO_free(ptr);
    return 1;
  }
  cVar1 = ptr[1];
  if (cVar1 == '/') goto LAB_00100dd9;
LAB_00100d60:
  do {
    if (cVar1 != '\0') goto LAB_00100dce;
    do {
      len = ((int)pcVar3 + -1) - (int)data;
      iVar2 = BIO_write(bp,data,len);
      if (iVar2 != len) {
LAB_00100e20:
        ERR_new();
        ERR_set_debug("crypto/x509/x_name.c",0x21d,"X509_NAME_print");
        ERR_set_error(0xb,0x80007,0);
        CRYPTO_free(ptr);
        return 0;
      }
      if (pcVar3[-1] == '\0') {
LAB_00100d86:
        CRYPTO_free(ptr);
        return 1;
      }
      iVar2 = BIO_write(bp,&_LC1,2);
      if (iVar2 != 2) goto LAB_00100e20;
      data = pcVar3;
      if (pcVar3[-1] == '\0') goto LAB_00100d86;
LAB_00100dce:
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      if (cVar1 != '/') goto LAB_00100d60;
LAB_00100dd9:
      iVar2 = ossl_isupper((int)*pcVar3);
    } while ((iVar2 != 0) &&
            ((pcVar3[1] == '=' || ((iVar2 = ossl_isupper(), iVar2 != 0 && (pcVar3[2] == '='))))));
    cVar1 = pcVar3[-1];
  } while( true );
}



undefined8 X509_NAME_get0_der(X509_NAME *param_1,undefined8 *param_2,size_t *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = i2d_X509_NAME(param_1,(uchar **)0x0);
  uVar2 = 0;
  if (0 < iVar1) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_1->bytes->data;
    }
    if (param_3 != (size_t *)0x0) {
      *param_3 = param_1->bytes->length;
    }
    uVar2 = 1;
  }
  return uVar2;
}


