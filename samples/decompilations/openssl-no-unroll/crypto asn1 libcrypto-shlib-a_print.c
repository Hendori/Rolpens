
int ASN1_PRINTABLE_type(uchar *s,int max)

{
  uchar *puVar1;
  uchar uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  size_t sVar6;
  
  if (s == (uchar *)0x0) {
    return 0x13;
  }
  if (max < 0) {
    sVar6 = strlen((char *)s);
    max = (int)sVar6;
  }
  if (0 < max) {
    bVar3 = false;
    bVar4 = false;
    puVar1 = s + (uint)max;
    do {
      uVar2 = *s;
      s = s + 1;
      iVar5 = ossl_ctype_check(uVar2,0x800);
      if (iVar5 == 0) {
        bVar4 = true;
      }
      if ((char)uVar2 < '\0') {
        bVar3 = true;
      }
    } while (s != puVar1);
    if (bVar3) {
      return 0x14;
    }
    if (bVar4) {
      return 0x16;
    }
  }
  return 0x13;
}



int ASN1_UNIVERSALSTRING_to_string(ASN1_UNIVERSALSTRING *s)

{
  uchar *puVar1;
  uint uVar2;
  int iVar3;
  uchar *puVar4;
  long lVar5;
  uchar *puVar6;
  int iVar7;
  
  if (s->type != 0x1c) {
    return 0;
  }
  uVar2 = s->length;
  if ((uVar2 & 3) != 0) {
    return 0;
  }
  puVar6 = s->data;
  if (0 < (int)uVar2) {
    iVar3 = 0;
    puVar4 = puVar6;
    do {
      if (((*puVar4 != '\0') || (puVar4[1] != '\0')) || (puVar4[2] != '\0')) {
        if (iVar3 < (int)uVar2) {
          return 0;
        }
        break;
      }
      iVar3 = iVar3 + 4;
      puVar4 = puVar4 + 4;
    } while (iVar3 < (int)uVar2);
    if (3 < (int)uVar2) {
      puVar4 = puVar6 + 1;
      *puVar6 = puVar6[3];
      lVar5 = 7;
      puVar6 = puVar4;
      if (7 < s->length) {
        do {
          puVar6 = puVar4 + 1;
          puVar1 = s->data + lVar5;
          lVar5 = lVar5 + 4;
          *puVar4 = *puVar1;
          puVar4 = puVar6;
        } while ((int)lVar5 < s->length);
      }
    }
  }
  *puVar6 = '\0';
  iVar3 = s->length;
  iVar7 = iVar3 + 3;
  if (-1 < iVar3) {
    iVar7 = iVar3;
  }
  s->length = iVar7 >> 2;
  iVar3 = ASN1_PRINTABLE_type(s->data,iVar7 >> 2);
  s->type = iVar3;
  return 1;
}



int ASN1_STRING_print(BIO *bp,ASN1_STRING *v)

{
  uchar *puVar1;
  uchar uVar2;
  int iVar3;
  uint uVar4;
  int len;
  long lVar5;
  long in_FS_OFFSET;
  uchar local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (v == (ASN1_STRING *)0x0) {
LAB_00100298:
    uVar4 = 0;
  }
  else {
    iVar3 = v->length;
    puVar1 = v->data;
    lVar5 = 0;
    len = 0;
    if (0 < iVar3) {
      do {
        while (uVar2 = puVar1[lVar5], uVar2 != '\x7f') {
          if (((char)uVar2 < ' ' && uVar2 != '\n') && (uVar2 != '\r')) {
            uVar2 = '.';
          }
          local_88[len] = uVar2;
          if (len == 0x4f) goto LAB_00100230;
LAB_0010020c:
          len = len + 1;
          lVar5 = lVar5 + 1;
          if (iVar3 <= (int)lVar5) goto LAB_00100250;
        }
        local_88[len] = '.';
        if (len != 0x4f) goto LAB_0010020c;
LAB_00100230:
        iVar3 = BIO_write(bp,local_88,len + 1);
        if (iVar3 < 1) goto LAB_00100298;
        iVar3 = v->length;
        lVar5 = lVar5 + 1;
        len = 0;
      } while ((int)lVar5 < iVar3);
LAB_00100250:
      if (0 < len) {
        iVar3 = BIO_write(bp,local_88,len);
        uVar4 = (uint)(0 < iVar3);
        goto LAB_00100259;
      }
    }
    uVar4 = 1;
  }
LAB_00100259:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}


