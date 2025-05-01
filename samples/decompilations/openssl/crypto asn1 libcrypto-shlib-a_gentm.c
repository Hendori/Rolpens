
void ASN1_GENERALIZEDTIME_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_GENERALIZEDTIME_it();
  ASN1_item_dup(it,param_1);
  return;
}



int ASN1_GENERALIZEDTIME_check(ASN1_GENERALIZEDTIME *a)

{
  int iVar1;
  
  if (a->type != 0x18) {
    return 0;
  }
  iVar1 = ossl_asn1_time_to_tm(0,a);
  return iVar1;
}



int ASN1_GENERALIZEDTIME_set_string(ASN1_GENERALIZEDTIME *s,char *str)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ASN1_GENERALIZEDTIME local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38.type = 0x18;
  sVar3 = strlen(str);
  local_38.length = (int)sVar3;
  local_38.flags = 0;
  local_38.data = (uchar *)str;
  uVar1 = ASN1_GENERALIZEDTIME_check(&local_38);
  if ((uVar1 != 0) && (uVar1 = 1, s != (ASN1_GENERALIZEDTIME *)0x0)) {
    iVar2 = ASN1_STRING_copy(s,&local_38);
    uVar1 = (uint)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_GENERALIZEDTIME *
ASN1_GENERALIZEDTIME_adj(ASN1_GENERALIZEDTIME *s,time_t t,int offset_day,long offset_sec)

{
  int iVar1;
  long lVar2;
  ASN1_GENERALIZEDTIME *pAVar3;
  long in_FS_OFFSET;
  time_t local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = t;
  lVar2 = OPENSSL_gmtime(&local_70,local_68);
  if (lVar2 == 0) {
LAB_00100161:
    pAVar3 = (ASN1_GENERALIZEDTIME *)0x0;
  }
  else {
    if ((offset_day != 0) || (offset_sec != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,offset_day,offset_sec);
      if (iVar1 == 0) goto LAB_00100161;
    }
    pAVar3 = (ASN1_GENERALIZEDTIME *)ossl_asn1_time_from_tm(s,lVar2,0x18);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_GENERALIZEDTIME * ASN1_GENERALIZEDTIME_set(ASN1_GENERALIZEDTIME *s,time_t t)

{
  ASN1_GENERALIZEDTIME *pAVar1;
  
  pAVar1 = ASN1_GENERALIZEDTIME_adj(s,t,0,0);
  return pAVar1;
}



int ASN1_GENERALIZEDTIME_print(BIO *fp,ASN1_GENERALIZEDTIME *a)

{
  int iVar1;
  
  if (a->type != 0x18) {
    return 0;
  }
  iVar1 = ASN1_TIME_print(fp,a);
  return iVar1;
}


