
int sk_table_cmp(undefined8 *param_1,undefined8 *param_2)

{
  return *(int *)*param_1 - *(int *)*param_2;
}



int table_cmp_BSEARCH_CMP_FN(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



void st_free(void *param_1)

{
  if ((*(byte *)((long)param_1 + 0x20) & 1) == 0) {
    return;
  }
  CRYPTO_free(param_1);
  return;
}



void ASN1_STRING_set_default_mask(ulong mask)

{
  global_mask = mask;
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ulong ASN1_STRING_get_default_mask(void)

{
  return global_mask;
}



int ASN1_STRING_set_default_mask_asc(char *p)

{
  int iVar1;
  ulong mask;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = strncmp(p,"MASK:",5);
  if (iVar1 == 0) {
    if ((p[5] == '\0') || (mask = strtoul(p + 5,&local_18,0), *local_18 != '\0')) {
LAB_001000ab:
      iVar1 = 0;
      goto LAB_001000ad;
    }
  }
  else {
    iVar1 = strcmp(p,"nombstr");
    if (iVar1 == 0) {
      mask = 0xffffffffffffd7ff;
    }
    else {
      iVar1 = strcmp(p,"pkix");
      if (iVar1 == 0) {
        mask = 0xfffffffffffffffb;
      }
      else {
        iVar1 = strcmp(p,"utf8only");
        if (iVar1 == 0) {
          mask = 0x2000;
        }
        else {
          iVar1 = strcmp(p,"default");
          mask = 0xffffffff;
          if (iVar1 != 0) goto LAB_001000ab;
        }
      }
    }
  }
  ASN1_STRING_set_default_mask(mask);
  iVar1 = 1;
LAB_001000ad:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



ASN1_STRING_TABLE * ASN1_STRING_TABLE_get(int nid)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  long in_FS_OFFSET;
  int local_38 [10];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  OPENSSL_init_crypto(0x40,0);
  local_38[0] = nid;
  if (stable != 0) {
    OPENSSL_sk_sort();
    iVar1 = OPENSSL_sk_find(stable,local_38);
    if (-1 < iVar1) {
      pAVar2 = (ASN1_STRING_TABLE *)OPENSSL_sk_value(stable,iVar1);
      goto LAB_00100204;
    }
  }
  pAVar2 = (ASN1_STRING_TABLE *)
           OBJ_bsearch_(local_38,tbl_standard,0x1c,0x28,table_cmp_BSEARCH_CMP_FN);
LAB_00100204:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_STRING * ASN1_STRING_set_by_NID(ASN1_STRING **out,uchar *in,int inlen,int inform,int nid)

{
  int iVar1;
  ASN1_STRING_TABLE *pAVar2;
  ASN1_STRING *pAVar3;
  ulong mask;
  long in_FS_OFFSET;
  ASN1_STRING *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (ASN1_STRING *)0x0;
  if (out == (ASN1_STRING **)0x0) {
    out = &local_38;
  }
  pAVar2 = ASN1_STRING_TABLE_get(nid);
  if (pAVar2 == (ASN1_STRING_TABLE *)0x0) {
    iVar1 = ASN1_mbstring_copy(out,in,inlen,inform,(ulong)((uint)global_mask & 0x2806));
  }
  else {
    mask = pAVar2->mask;
    if ((pAVar2->flags & 2) == 0) {
      mask = mask & global_mask;
    }
    iVar1 = ASN1_mbstring_ncopy(out,in,inlen,inform,mask,pAVar2->minsize,pAVar2->maxsize);
  }
  if (iVar1 < 1) {
    pAVar3 = (ASN1_STRING *)0x0;
  }
  else {
    pAVar3 = *out;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_STRING_TABLE_add(int param_1,long param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ASN1_STRING_TABLE *pAVar5;
  ASN1_STRING_TABLE *ptr;
  
  if ((stable != 0) || (stable = OPENSSL_sk_new(0x100000), stable != 0)) {
    pAVar5 = ASN1_STRING_TABLE_get(param_1);
    if ((pAVar5 != (ASN1_STRING_TABLE *)0x0) && (ptr = pAVar5, (pAVar5->flags & 1) != 0)) {
LAB_001003e4:
      if (-1 < param_2) {
        ptr->minsize = param_2;
      }
      if (-1 < param_3) {
        ptr->maxsize = param_3;
      }
      if (param_4 != 0) {
        ptr->mask = param_4;
      }
      if (param_5 != 0) {
        ptr->flags = param_5 | 1;
      }
      return 1;
    }
    ptr = (ASN1_STRING_TABLE *)CRYPTO_zalloc(0x28,"crypto/asn1/a_strnid.c",0xa6);
    if (ptr != (ASN1_STRING_TABLE *)0x0) {
      iVar4 = OPENSSL_sk_push(stable,ptr);
      if (iVar4 != 0) {
        if (pAVar5 == (ASN1_STRING_TABLE *)0x0) {
          ptr->nid = param_1;
          ptr->flags = 1;
          *(undefined4 *)&ptr->minsize = 0xffffffff;
          *(undefined4 *)((long)&ptr->minsize + 4) = 0xffffffff;
          *(undefined4 *)&ptr->maxsize = 0xffffffff;
          *(undefined4 *)((long)&ptr->maxsize + 4) = 0xffffffff;
        }
        else {
          lVar2 = pAVar5->minsize;
          lVar3 = pAVar5->maxsize;
          ptr->nid = pAVar5->nid;
          ptr->minsize = lVar2;
          ptr->maxsize = lVar3;
          uVar1 = pAVar5->flags;
          ptr->mask = pAVar5->mask;
          ptr->flags = uVar1 | 1;
        }
        goto LAB_001003e4;
      }
      CRYPTO_free(ptr);
    }
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/a_strnid.c",0xc3,"ASN1_STRING_TABLE_add");
  ERR_set_error(0xd,0x8000d,0);
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ASN1_STRING_TABLE_cleanup(void)

{
  long lVar1;
  
  lVar1 = stable;
  if (stable != 0) {
    stable = 0;
    OPENSSL_sk_pop_free(lVar1,st_free);
    return;
  }
  return;
}


