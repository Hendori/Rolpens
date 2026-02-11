
ASN1_OBJECT * OBJ_dup(ASN1_OBJECT *o)

{
  ASN1_OBJECT *a;
  char **ppcVar1;
  char *pcVar2;
  uchar *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (o == (ASN1_OBJECT *)0x0) {
    return (ASN1_OBJECT *)0x0;
  }
  if ((o->flags & 1) == 0) {
    return o;
  }
  a = ASN1_OBJECT_new();
  if (a == (ASN1_OBJECT *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/objects/obj_lib.c",0x1c,"OBJ_dup");
    ERR_set_error(8,0x8000d,0);
    return (ASN1_OBJECT *)0x0;
  }
  iVar4 = o->length;
  a->flags = o->flags | 0xd;
  if (0 < iVar4) {
    puVar3 = (uchar *)CRYPTO_memdup(o->data,(long)iVar4,"crypto/objects/obj_lib.c",0x26);
    a->data = puVar3;
    if (puVar3 == (uchar *)0x0) goto LAB_001000ad;
    iVar4 = o->length;
  }
  ppcVar1 = o->ln;
  uVar5 = CONCAT44(iVar4,o->nid);
  a->nid = (int)uVar5;
  a->length = (int)((ulong)uVar5 >> 0x20);
  if (ppcVar1 != (char **)0x0) {
    ppcVar1 = (char **)CRYPTO_strdup((char *)ppcVar1,"crypto/objects/obj_lib.c",0x2c);
    a->ln = ppcVar1;
    if (ppcVar1 == (char **)0x0) goto LAB_001000ad;
  }
  if (o->sn == (char *)0x0) {
    return a;
  }
  pcVar2 = CRYPTO_strdup(o->sn,"crypto/objects/obj_lib.c",0x2f);
  a->sn = pcVar2;
  if (pcVar2 != (char *)0x0) {
    return a;
  }
LAB_001000ad:
  ASN1_OBJECT_free(a);
  return (ASN1_OBJECT *)0x0;
}



int OBJ_cmp(ASN1_OBJECT *a,ASN1_OBJECT *b)

{
  int iVar1;
  
  iVar1 = a->length - b->length;
  if (iVar1 == 0) {
    iVar1 = memcmp(a->data,b->data,(long)a->length);
    return iVar1;
  }
  return iVar1;
}


