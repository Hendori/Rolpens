
int NETSCAPE_SPKI_print(BIO *out,NETSCAPE_SPKI *spki)

{
  ASN1_IA5STRING *pAVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *pkey;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_printf(out,"Netscape SPKI:\n");
  X509_PUBKEY_get0_param(&local_48,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,spki->spkac->pubkey);
  iVar2 = OBJ_obj2nid(local_48);
  pcVar4 = "UNKNOWN";
  if (iVar2 != 0) {
    pcVar4 = OBJ_nid2ln(iVar2);
  }
  BIO_printf(out,"  Public Key Algorithm: %s\n",pcVar4);
  pkey = X509_PUBKEY_get(spki->spkac->pubkey);
  if (pkey == (EVP_PKEY *)0x0) {
    BIO_printf(out,"  Unable to load public key\n");
  }
  else {
    EVP_PKEY_print_public(out,pkey,4,(ASN1_PCTX *)0x0);
    EVP_PKEY_free(pkey);
  }
  pAVar1 = spki->spkac->challenge;
  uVar3 = pAVar1->length;
  if (uVar3 != 0) {
    BIO_printf(out,"  Challenge String: %.*s\n",(ulong)uVar3,pAVar1->data);
  }
  iVar2 = OBJ_obj2nid((ASN1_OBJECT *)spki->sig_algor);
  pcVar4 = "UNKNOWN";
  if (iVar2 != 0) {
    pcVar4 = OBJ_nid2ln(iVar2);
  }
  BIO_printf(out,"  Signature Algorithm: %s",pcVar4);
  iVar2 = *(int *)&(spki[1].spkac)->pubkey;
  pAVar1 = (spki[1].spkac)->challenge;
  if (0 < iVar2) {
    uVar6 = 0;
    do {
      uVar3 = (int)uVar6 * 0x38e38e39;
      if (0xe38e38e < (uVar3 >> 1 | (uint)((uVar3 & 1) != 0) << 0x1f)) {
        uVar5 = (ulong)*(byte *)((long)&pAVar1->length + uVar6);
        if (iVar2 - 1 != uVar6) goto LAB_0010010b;
LAB_00100157:
        BIO_printf(out,"%02x%s",uVar5,&_LC10);
        break;
      }
      BIO_write(out,"\n      ",7);
      uVar5 = (ulong)*(byte *)((long)&pAVar1->length + uVar6);
      if (iVar2 - 1 == uVar6) goto LAB_00100157;
LAB_0010010b:
      BIO_printf(out,"%02x%s",uVar5,&_LC7);
      uVar6 = uVar6 + 1;
    } while ((long)iVar2 != uVar6);
  }
  BIO_write(out,&_LC9,1);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


