
void asn1_primitive_clear(undefined8 *param_1,char *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_2 != (char *)0x0) {
    if (*(long *)(param_2 + 0x20) == 0) {
      if ((*param_2 != '\x05') && (*(int *)(param_2 + 8) == 1)) {
        *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
        return;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x20);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
  }
  *param_1 = 0;
  return;
}



ulong asn1_primitive_new(long *param_1,char *param_2,int param_3)

{
  long lVar1;
  int type;
  ASN1_STRING *pAVar2;
  undefined4 *puVar3;
  ASN1_OBJECT *pAVar4;
  ulong uVar5;
  bool bVar6;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  lVar1 = *(long *)(param_2 + 0x20);
  if (lVar1 == 0) {
    if (*param_2 == '\x05') {
      type = -1;
    }
    else {
      type = (int)*(undefined8 *)(param_2 + 8);
      if (type == 5) goto LAB_001001f0;
      if (type < 6) {
        if (type == -4) goto LAB_001001b0;
        if (type == 1) goto LAB_001000c0;
      }
      else if (type == 6) goto LAB_00100209;
    }
    if (param_3 == 0) goto LAB_00100130;
LAB_00100179:
    pAVar2 = (ASN1_STRING *)*param_1;
    pAVar2->length = 0;
    pAVar2->type = 0;
    pAVar2->data = (uchar *)0x0;
    pAVar2->flags = 0x80;
    pAVar2->type = type;
    if (*param_2 != '\x05') {
      bVar6 = *param_1 != 0;
      goto LAB_001001a0;
    }
    uVar5 = 0xc0;
    bVar6 = *param_1 != 0;
  }
  else {
    if (param_3 != 0) {
      if (*(code **)(lVar1 + 0x20) != (code *)0x0) {
        (**(code **)(lVar1 + 0x20))();
        return 1;
      }
      if (*param_2 == '\x05') {
        type = -1;
      }
      else {
        type = (int)*(undefined8 *)(param_2 + 8);
        if (type == 5) {
LAB_001001f0:
          *param_1 = 1;
          return 1;
        }
        if (type < 6) {
          if (type == -4) {
LAB_001001b0:
            puVar3 = (undefined4 *)CRYPTO_malloc(0x10,"crypto/asn1/tasn_new.c",0x12d);
            if (puVar3 == (undefined4 *)0x0) {
              return 0;
            }
            *(undefined8 *)(puVar3 + 2) = 0;
            *puVar3 = 0xffffffff;
            *param_1 = (long)puVar3;
            bVar6 = true;
            goto LAB_001001a0;
          }
          if (type == 1) {
LAB_001000c0:
            *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
            return 1;
          }
        }
        else if (type == 6) {
LAB_00100209:
          pAVar4 = OBJ_nid2obj(0);
          *param_1 = (long)pAVar4;
          return 1;
        }
      }
      goto LAB_00100179;
    }
    if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(lVar1 + 0x10))();
      return uVar5;
    }
    if (*param_2 == '\x05') {
      type = -1;
    }
    else {
      type = (int)*(undefined8 *)(param_2 + 8);
      if (type == 5) goto LAB_001001f0;
      if (type < 6) {
        if (type == -4) goto LAB_001001b0;
        if (type == 1) goto LAB_001000c0;
      }
      else if (type == 6) goto LAB_00100209;
    }
LAB_00100130:
    pAVar2 = ASN1_STRING_type_new(type);
    bVar6 = pAVar2 != (ASN1_STRING *)0x0;
    *param_1 = (long)pAVar2;
    if (*param_2 != '\x05' || !bVar6) goto LAB_001001a0;
    uVar5 = pAVar2->flags | 0x40;
    bVar6 = *param_2 == '\x05' && bVar6;
  }
  pAVar2->flags = uVar5;
LAB_001001a0:
  return (ulong)bVar6;
}



void asn1_item_clear(undefined8 *param_1,byte *param_2)

{
  ulong *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (6 < *param_2) {
    return;
  }
  do {
    switch((long)&switchD_0010029e::switchdataD_001008b0 +
           (long)(int)(&switchD_0010029e::switchdataD_001008b0)[*param_2]) {
    case 0x1002a8:
      if ((*(long *)(param_2 + 0x20) != 0) &&
         (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_2 + 0x20) + 0x18),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010030d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    case 0x1002b8:
switchD_0010029e_caseD_1002b8:
      *param_1 = 0;
      return;
    case 0x1002bf:
      goto switchD_0010029e_caseD_1002bf;
    case 0x1002d1:
LAB_001002d1:
      asn1_primitive_clear();
      return;
    }
    puVar1 = *(ulong **)(param_2 + 0x10);
    if (puVar1 == (ulong *)0x0) goto LAB_001002d1;
    if ((*puVar1 & 0x306) != 0) goto switchD_0010029e_caseD_1002b8;
    param_2 = (byte *)(*(code *)puVar1[4])();
  } while (*param_2 < 7);
switchD_0010029e_caseD_1002bf:
  return;
}



undefined8 asn1_template_new(long *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long **pplVar4;
  long in_FS_OFFSET;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = (*(code *)param_2[4])();
  uVar1 = *param_2;
  pplVar4 = (long **)param_1;
  if ((uVar1 & 0x1000) != 0) {
    pplVar4 = &local_38;
    local_38 = param_1;
  }
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 0x300) == 0) {
      if ((uVar1 & 6) == 0) {
        uVar2 = asn1_item_embed_new(pplVar4,uVar2,(uint)uVar1 & 0x1000,param_3,param_4);
        goto LAB_0010039b;
      }
      lVar3 = OPENSSL_sk_new_null();
      if (lVar3 == 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_new.c",0xe9,"asn1_template_new");
        ERR_set_error(0xd,0x8000f,0);
        uVar2 = 0;
        goto LAB_0010039b;
      }
      *pplVar4 = (long *)lVar3;
    }
    else {
LAB_001003c8:
      *pplVar4 = (long *)0x0;
    }
  }
  else {
    if ((uVar1 & 0x306) != 0) goto LAB_001003c8;
    uVar2 = (*(code *)param_2[4])();
    asn1_item_clear(pplVar4,uVar2);
  }
  uVar2 = 1;
LAB_0010039b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
asn1_item_embed_new(long *param_1,undefined1 *param_2,int param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 == 0) {
    switch(*param_2) {
    case 0:
      goto switchD_00100474_caseD_0;
    case 1:
    case 6:
      pcVar5 = (code *)0x0;
      goto LAB_00100553;
    case 2:
      pcVar5 = (code *)0x0;
      goto LAB_0010061f;
    default:
      goto LAB_00100498;
    case 5:
      goto switchD_00100474_caseD_5;
    }
  }
  pcVar5 = *(code **)(lVar4 + 0x18);
  switch(*param_2) {
  case 0:
switchD_00100474_caseD_0:
    if (*(long *)(param_2 + 0x10) == 0) goto switchD_00100474_caseD_5;
    iVar1 = asn1_template_new(param_1,*(long *)(param_2 + 0x10),param_4,param_5);
    break;
  case 1:
  case 6:
    if (pcVar5 != (code *)0x0) {
      iVar1 = (*pcVar5)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_0010067c;
      if (iVar1 == 2) {
        return 1;
      }
    }
LAB_00100553:
    if (param_3 == 0) {
      lVar4 = CRYPTO_zalloc(*(size_t *)(param_2 + 0x28),"crypto/asn1/tasn_new.c",0x88);
      *param_1 = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
      iVar1 = ossl_asn1_do_lock(param_1,0,param_2);
      if (iVar1 < 0) {
        CRYPTO_free((void *)*param_1);
        *param_1 = 0;
        goto LAB_001004d7;
      }
    }
    else {
      memset((void *)*param_1,0,*(size_t *)(param_2 + 0x28));
      iVar1 = ossl_asn1_do_lock(param_1,0,param_2);
      if (iVar1 < 0) goto LAB_001004d7;
    }
    ossl_asn1_enc_init(param_1,param_2);
    lVar3 = 0;
    lVar4 = *(long *)(param_2 + 0x10);
    if (0 < *(long *)(param_2 + 0x18)) {
      do {
        uVar2 = ossl_asn1_get_field_ptr(param_1,lVar4);
        iVar1 = asn1_template_new(uVar2,lVar4,param_4,param_5);
        if (iVar1 == 0) {
          ossl_asn1_item_embed_free(param_1,param_2,param_3);
          goto LAB_001004d7;
        }
        lVar4 = lVar4 + 0x28;
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(long *)(param_2 + 0x18));
    }
    goto joined_r0x0010064f;
  case 2:
    if (pcVar5 != (code *)0x0) {
      iVar1 = (*pcVar5)(0,param_1,param_2,0);
      if (iVar1 == 0) goto LAB_0010067c;
      if (iVar1 == 2) {
        return 1;
      }
    }
LAB_0010061f:
    if (param_3 == 0) {
      lVar4 = CRYPTO_zalloc(*(size_t *)(param_2 + 0x28),"crypto/asn1/tasn_new.c",0x72);
      *param_1 = lVar4;
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      memset((void *)*param_1,0,*(size_t *)(param_2 + 0x28));
    }
    ossl_asn1_set_choice_selector(param_1,0xffffffff,param_2);
joined_r0x0010064f:
    if (pcVar5 == (code *)0x0) {
      return 1;
    }
    iVar1 = (*pcVar5)(1,param_1,param_2,0);
    if (iVar1 != 0) {
      return 1;
    }
    ossl_asn1_item_embed_free(param_1,param_2,param_3);
LAB_0010067c:
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_new.c",0xa9,"asn1_item_embed_new");
    ERR_set_error(0xd,100,0);
    return 0;
  default:
    goto LAB_00100498;
  case 4:
    if (*(code **)(lVar4 + 0x38) == (code *)0x0) {
      if (*(code **)(lVar4 + 8) == (code *)0x0) {
        return 1;
      }
      iVar1 = (**(code **)(lVar4 + 8))();
    }
    else {
      iVar1 = (**(code **)(lVar4 + 0x38))(param_1,param_2,param_4,param_5);
    }
    break;
  case 5:
    goto switchD_00100474_caseD_5;
  }
joined_r0x001006cf:
  if (iVar1 != 0) {
LAB_00100498:
    return 1;
  }
LAB_001004d7:
  ERR_new();
  ERR_set_debug("crypto/asn1/tasn_new.c",0xa3,"asn1_item_embed_new");
  ERR_set_error(0xd,0x8000d,0);
  return 0;
switchD_00100474_caseD_5:
  iVar1 = asn1_primitive_new(param_1,param_2,param_3);
  goto joined_r0x001006cf;
}



undefined8 ASN1_item_new_ex(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  iVar1 = asn1_item_embed_new(&local_18,param_1,0,param_2,param_3);
  uVar2 = local_18;
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_asn1_item_ex_new_intern
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  asn1_item_embed_new(param_1,param_2,0,param_3,param_4);
  return;
}



int ASN1_item_ex_new(ASN1_VALUE **pval,ASN1_ITEM *it)

{
  int iVar1;
  
  iVar1 = asn1_item_embed_new(pval,it,0,0,0);
  return iVar1;
}



ASN1_VALUE * ASN1_item_new(ASN1_ITEM *it)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  ASN1_VALUE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (ASN1_VALUE *)0x0;
  iVar1 = ASN1_item_ex_new(&local_18,it);
  pAVar2 = local_18;
  if (iVar1 < 1) {
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


