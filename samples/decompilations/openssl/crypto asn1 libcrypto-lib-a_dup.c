
void * ASN1_dup(undefined1 *i2d,undefined1 *d2i,void *x)

{
  int iVar1;
  void *ptr;
  void *pvVar2;
  long in_FS_OFFSET;
  void *local_40;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (x != (void *)0x0) {
    iVar1 = (*(code *)i2d)(x,0);
    if (0 < iVar1) {
      ptr = CRYPTO_malloc(iVar1 + 10,"crypto/asn1/a_dup.c",0x1e);
      if (ptr != (void *)0x0) {
        local_40 = ptr;
        iVar1 = (*(code *)i2d)(x,&local_40);
        local_38 = ptr;
        pvVar2 = (void *)(*(code *)d2i)(0,&local_38,(long)iVar1);
        CRYPTO_free(ptr);
        goto LAB_00100093;
      }
    }
  }
  pvVar2 = (void *)0x0;
LAB_00100093:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pvVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void * ASN1_item_dup(ASN1_ITEM *it,void *x)

{
  int iVar1;
  void *pvVar2;
  code *pcVar3;
  long in_FS_OFFSET;
  ASN1_VALUE *local_50;
  uchar *local_48;
  uchar *local_40;
  void *local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  local_30 = 0;
  local_28 = 0;
  local_50 = (ASN1_VALUE *)x;
  if (x != (void *)0x0) {
    if ((((byte)(it->itype - 1U) < 2) || (it->itype == '\x06')) && (it->funcs != (void *)0x0)) {
      pcVar3 = *(code **)((long)it->funcs + 0x18);
      if (pcVar3 == (code *)0x0) goto LAB_001001da;
      iVar1 = (*pcVar3)(0xe,&local_50,it,0);
      if (((iVar1 != 0) && (iVar1 = (*pcVar3)(0x10,&local_50,it,&local_30), iVar1 != 0)) &&
         (iVar1 = (*pcVar3)(0x11,&local_50,it,&local_28), iVar1 != 0)) goto LAB_001001da;
    }
    else {
      pcVar3 = (code *)0x0;
LAB_001001da:
      iVar1 = ASN1_item_i2d(local_50,&local_48,it);
      if (((long)iVar1 < 0) || (local_48 == (uchar *)0x0)) {
        ERR_new();
        ERR_set_debug("crypto/asn1/a_dup.c",0x4f,"ASN1_item_dup");
        ERR_set_error(0xd,0x8000d,0);
        pvVar2 = (void *)0x0;
        goto LAB_00100263;
      }
      local_40 = local_48;
      local_38 = (void *)ASN1_item_d2i_ex(0,&local_40,(long)iVar1,it,local_30,local_28);
      CRYPTO_free(local_48);
      pvVar2 = local_38;
      if ((pcVar3 == (code *)0x0) ||
         (iVar1 = (*pcVar3)(0xf,&local_38,it,local_50), pvVar2 = local_38, iVar1 != 0))
      goto LAB_00100263;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/a_dup.c",0x5d,"ASN1_item_dup");
    ERR_set_error(0xd,100,"Type=%s",it->sname);
  }
  pvVar2 = (void *)0x0;
LAB_00100263:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar2;
}


