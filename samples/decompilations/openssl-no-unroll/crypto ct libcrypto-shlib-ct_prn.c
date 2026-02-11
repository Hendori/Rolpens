
char * SCT_validation_status_string(void)

{
  undefined4 uVar1;
  
  uVar1 = SCT_get_validation_status();
  switch(uVar1) {
  case 0:
    return "not set";
  case 1:
    return "unknown log";
  case 2:
    return "valid";
  case 3:
    return "invalid";
  case 4:
    return "unverified";
  case 5:
    return "unknown version";
  default:
    return "unknown status";
  }
}



void SCT_print(int *param_1,BIO *param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ASN1_GENERALIZEDTIME *s;
  char *pcVar6;
  uint uVar7;
  long in_FS_OFFSET;
  char local_58 [24];
  long local_40;
  
  iVar2 = (int)param_3;
  uVar7 = iVar2 + 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    BIO_printf(param_2,"%*sSigned Certificate Timestamp:",param_3,&_LC7);
    BIO_printf(param_2,"\n%*sVersion   : ",(ulong)uVar7,&_LC7);
    if (*param_1 != 0) goto LAB_00100338;
    BIO_printf(param_2,"v1 (0x0)");
  }
  else {
    lVar4 = CTLOG_STORE_get0_log_by_id
                      (param_4,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 8));
    BIO_printf(param_2,"%*sSigned Certificate Timestamp:",param_3 & 0xffffffff,&_LC7);
    BIO_printf(param_2,"\n%*sVersion   : ",(ulong)uVar7,&_LC7);
    if (*param_1 != 0) {
LAB_00100338:
      BIO_printf(param_2,"unknown\n%*s",(ulong)(iVar2 + 0x10),&_LC7);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100430;
      uVar5 = *(undefined8 *)(param_1 + 2);
      iVar3 = param_1[4];
      goto LAB_0010031e;
    }
    BIO_printf(param_2,"v1 (0x0)");
    if (lVar4 != 0) {
      uVar5 = CTLOG_get0_name(lVar4);
      BIO_printf(param_2,"\n%*sLog       : %s",(ulong)uVar7,&_LC7,uVar5);
    }
  }
  BIO_printf(param_2,"\n%*sLog ID    : ",(ulong)uVar7,&_LC7);
  BIO_hex_string(param_2,iVar2 + 0x10,0x10,*(undefined8 *)(param_1 + 6),param_1[8]);
  BIO_printf(param_2,"\n%*sTimestamp : ",(ulong)uVar7,&_LC7);
  uVar1 = *(ulong *)(param_1 + 10);
  s = ASN1_GENERALIZEDTIME_new();
  if (s != (ASN1_GENERALIZEDTIME *)0x0) {
    ASN1_GENERALIZEDTIME_adj(s,0,(int)(uVar1 / 86400000),(uVar1 % 86400000) / 1000);
    uVar5 = ASN1_STRING_get0_data(s);
    BIO_snprintf(local_58,0x14,"%.14s.%03dZ",uVar5,
                 (ulong)(uint)((int)uVar1 + (int)(uVar1 / 1000) * -1000));
    iVar3 = ASN1_GENERALIZEDTIME_set_string(s,local_58);
    if (iVar3 != 0) {
      ASN1_GENERALIZEDTIME_print(param_2,s);
    }
    ASN1_GENERALIZEDTIME_free(s);
  }
  BIO_printf(param_2,"\n%*sExtensions: ",(ulong)uVar7,&_LC7);
  if (*(long *)(param_1 + 0xe) == 0) {
    BIO_printf(param_2,"none");
  }
  else {
    BIO_hex_string(param_2,iVar2 + 0x10,0x10,*(undefined8 *)(param_1 + 0xc));
  }
  BIO_printf(param_2,"\n%*sSignature : ",(ulong)uVar7,&_LC7);
  iVar3 = SCT_get_signature_nid(param_1);
  if (iVar3 == 0) {
    BIO_printf(param_2,"%02X%02X",(ulong)*(byte *)(param_1 + 0x10),
               (ulong)*(byte *)((long)param_1 + 0x41));
  }
  else {
    pcVar6 = OBJ_nid2ln(iVar3);
    BIO_printf(param_2,"%s",pcVar6);
  }
  BIO_printf(param_2,"\n%*s            ",(ulong)uVar7,&_LC7);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100430:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x12);
  iVar3 = param_1[0x14];
LAB_0010031e:
  BIO_hex_string(param_2,iVar2 + 0x10,0x10,uVar5,iVar3);
  return;
}



void SCT_LIST_print(undefined8 param_1,BIO *param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      while( true ) {
        uVar3 = OPENSSL_sk_value(param_1,iVar4);
        SCT_print(uVar3,param_2,param_3,param_5);
        iVar2 = OPENSSL_sk_num(param_1);
        if (iVar2 + -1 <= iVar4) break;
        iVar4 = iVar4 + 1;
        BIO_printf(param_2,"%s",param_4);
        if (iVar1 == iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}


