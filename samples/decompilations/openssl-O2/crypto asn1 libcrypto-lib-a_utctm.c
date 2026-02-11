
void ASN1_UTCTIME_dup(void *param_1)

{
  ASN1_ITEM *it;
  
  it = (ASN1_ITEM *)ASN1_UTCTIME_it();
  ASN1_item_dup(it,param_1);
  return;
}



undefined8 ossl_asn1_utctime_to_tm(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 4) != 0x17) {
    return 0;
  }
  uVar1 = ossl_asn1_time_to_tm();
  return uVar1;
}



int ASN1_UTCTIME_check(ASN1_UTCTIME *a)

{
  int iVar1;
  
  iVar1 = ossl_asn1_utctime_to_tm(0,a);
  return iVar1;
}



int ASN1_UTCTIME_set_string(ASN1_UTCTIME *s,char *str)

{
  uint uVar1;
  int iVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  ASN1_UTCTIME local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38.type = 0x17;
  sVar3 = strlen(str);
  local_38.length = (int)sVar3;
  local_38.flags = 0;
  local_38.data = (uchar *)str;
  uVar1 = ASN1_UTCTIME_check(&local_38);
  if ((uVar1 != 0) && (uVar1 = 1, s != (ASN1_UTCTIME *)0x0)) {
    iVar2 = ASN1_STRING_copy(s,&local_38);
    uVar1 = (uint)(iVar2 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_UTCTIME * ASN1_UTCTIME_adj(ASN1_UTCTIME *s,time_t t,int offset_day,long offset_sec)

{
  int iVar1;
  long lVar2;
  ASN1_UTCTIME *pAVar3;
  long in_FS_OFFSET;
  time_t local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = t;
  lVar2 = OPENSSL_gmtime(&local_70,local_68);
  if (lVar2 == 0) {
LAB_00100171:
    pAVar3 = (ASN1_UTCTIME *)0x0;
  }
  else {
    if ((offset_day != 0) || (offset_sec != 0)) {
      iVar1 = OPENSSL_gmtime_adj(lVar2,offset_day,offset_sec);
      if (iVar1 == 0) goto LAB_00100171;
    }
    pAVar3 = (ASN1_UTCTIME *)ossl_asn1_time_from_tm(s,lVar2,0x17);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_UTCTIME * ASN1_UTCTIME_set(ASN1_UTCTIME *s,time_t t)

{
  ASN1_UTCTIME *pAVar1;
  
  pAVar1 = ASN1_UTCTIME_adj(s,t,0,0);
  return pAVar1;
}



int ASN1_UTCTIME_cmp_time_t(ASN1_UTCTIME *s,time_t t)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  time_t local_b0 [2];
  int local_a0;
  int local_9c;
  undefined1 local_98 [64];
  undefined1 local_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0[0] = t;
  iVar1 = ossl_asn1_utctime_to_tm(local_98,s);
  if (iVar1 != 0) {
    lVar2 = OPENSSL_gmtime(local_b0,local_58);
    if (lVar2 != 0) {
      iVar1 = OPENSSL_gmtime_diff(&local_a0,&local_9c,local_58,local_98);
      if (iVar1 != 0) {
        iVar1 = 1;
        if ((local_a0 < 1) && (local_9c < 1)) {
          iVar1 = -(uint)(local_a0 != 0 || local_9c != 0);
        }
        goto LAB_00100217;
      }
    }
  }
  iVar1 = -2;
LAB_00100217:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_UTCTIME_print(BIO *fp,ASN1_UTCTIME *a)

{
  int iVar1;
  
  if (a->type != 0x17) {
    return 0;
  }
  iVar1 = ASN1_TIME_print(fp,a);
  return iVar1;
}


