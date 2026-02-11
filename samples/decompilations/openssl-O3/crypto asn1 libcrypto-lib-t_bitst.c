
int ASN1_BIT_STRING_name_print(BIO *out,ASN1_BIT_STRING *bs,BIT_STRING_BITNAME *tbl,int indent)

{
  bool bVar1;
  BIT_STRING_BITNAME *pBVar2;
  int iVar3;
  
  BIO_printf(out,"%*s",(ulong)(uint)indent,&_LC0);
  if (tbl->lname != (char *)0x0) {
    bVar1 = true;
    do {
      iVar3 = ASN1_BIT_STRING_get_bit(bs,tbl->bitnum);
      if (iVar3 != 0) {
        if (!bVar1) {
          BIO_puts(out,", ");
        }
        bVar1 = false;
        BIO_puts(out,tbl->lname);
      }
      pBVar2 = tbl + 1;
      tbl = tbl + 1;
    } while (pBVar2->lname != (char *)0x0);
  }
  BIO_puts(out,"\n");
  return 1;
}



int ASN1_BIT_STRING_num_asc(char *name,BIT_STRING_BITNAME *tbl)

{
  char *__s1;
  int iVar1;
  
  __s1 = tbl->lname;
  while( true ) {
    if (__s1 == (char *)0x0) {
      return -1;
    }
    iVar1 = strcmp(tbl->sname,name);
    if ((iVar1 == 0) || (iVar1 = strcmp(__s1,name), iVar1 == 0)) break;
    __s1 = tbl[1].lname;
    tbl = tbl + 1;
  }
  return tbl->bitnum;
}



int ASN1_BIT_STRING_set_asc(ASN1_BIT_STRING *bs,char *name,int value,BIT_STRING_BITNAME *tbl)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = ASN1_BIT_STRING_num_asc(name,tbl);
  uVar2 = 0;
  if ((-1 < iVar1) && (uVar2 = 1, bs != (ASN1_BIT_STRING *)0x0)) {
    iVar1 = ASN1_BIT_STRING_set_bit(bs,iVar1,value);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}


