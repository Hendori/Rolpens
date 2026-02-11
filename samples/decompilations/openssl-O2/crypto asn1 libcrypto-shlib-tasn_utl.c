
undefined4 ossl_asn1_get_choice_selector(long *param_1,long param_2)

{
  return *(undefined4 *)(*param_1 + *(long *)(param_2 + 8));
}



undefined4 ossl_asn1_get_choice_selector_const(long *param_1,long param_2)

{
  return *(undefined4 *)(*param_1 + *(long *)(param_2 + 8));
}



undefined4 ossl_asn1_set_choice_selector(long *param_1,undefined4 param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(*(long *)(param_3 + 8) + *param_1);
  uVar1 = *puVar2;
  *puVar2 = param_2;
  return uVar1;
}



uint ossl_asn1_do_lock(long *param_1,undefined8 param_2,char *param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  if ((*param_3 == '\x01') || (uVar4 = 0, *param_3 == '\x06')) {
    lVar3 = *(long *)(param_3 + 0x20);
    if (lVar3 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(lVar3 + 8) & 1;
    if (uVar4 != 0) {
      plVar1 = (long *)(*param_1 + (long)*(int *)(lVar3 + 0x10));
      piVar2 = (int *)((long)*(int *)(lVar3 + 0xc) + *param_1);
      iVar5 = (int)param_2;
      if (iVar5 == 0) {
        LOCK();
        iVar5 = *piVar2;
        *piVar2 = 1;
        UNLOCK();
        lVar3 = CRYPTO_THREAD_lock_new(param_1,param_2,iVar5);
        *plVar1 = lVar3;
        if (lVar3 != 0) {
          return uVar4;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_utl.c",0x5b,"ossl_asn1_do_lock");
        ERR_set_error(0xd,0x8000f,0);
      }
      else {
        if (iVar5 == 1) {
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + 1;
          UNLOCK();
          return iVar5 + 1;
        }
        if (iVar5 == -1) {
          LOCK();
          iVar5 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar5 - 1U != 0) {
            return iVar5 - 1U;
          }
          CRYPTO_THREAD_lock_free(*plVar1);
          *plVar1 = 0;
          return 0;
        }
      }
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}



void ossl_asn1_enc_init(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) &&
      (lVar1 = *(long *)(param_2 + 0x20), lVar1 != 0)) && ((*(byte *)(lVar1 + 8) & 2) != 0)) {
    puVar2 = (undefined8 *)(*param_1 + (long)*(int *)(lVar1 + 0x20));
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined4 *)(puVar2 + 2) = 1;
  }
  return;
}



void ossl_asn1_enc_free(long *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != (long *)0x0) {
    if (((*param_1 != 0) && (lVar1 = *(long *)(param_2 + 0x20), lVar1 != 0)) &&
       ((*(byte *)(lVar1 + 8) & 2) != 0)) {
      puVar2 = (undefined8 *)(*param_1 + (long)*(int *)(lVar1 + 0x20));
      CRYPTO_free((void *)*puVar2);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 1;
    }
    return;
  }
  return;
}



undefined8 ossl_asn1_enc_save(long *param_1,void *param_2,int param_3,long param_4)

{
  long lVar1;
  void *__dest;
  undefined8 *puVar2;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (((*param_1 != 0) && (lVar1 = *(long *)(param_4 + 0x20), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 8) & 2) != 0)) {
    puVar2 = (undefined8 *)(*param_1 + (long)*(int *)(lVar1 + 0x20));
    CRYPTO_free((void *)*puVar2);
    if (0 < param_3) {
      __dest = CRYPTO_malloc(param_3,"crypto/asn1/tasn_utl.c",0xaf);
      *puVar2 = __dest;
      if (__dest != (void *)0x0) {
        memcpy(__dest,param_2,(long)param_3);
        puVar2[1] = (long)param_3;
        *(undefined4 *)(puVar2 + 2) = 0;
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



uint ossl_asn1_enc_restore(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if ((*param_3 != 0) && (lVar1 = *(long *)(param_4 + 0x20), lVar1 != 0)) {
    uVar2 = *(uint *)(lVar1 + 8) & 2;
    if (uVar2 != 0) {
      puVar3 = (undefined8 *)(*param_3 + (long)*(int *)(lVar1 + 0x20));
      uVar2 = 0;
      if (*(int *)(puVar3 + 2) == 0) {
        if (param_2 != (long *)0x0) {
          memcpy((void *)*param_2,(void *)*puVar3,puVar3[1]);
          *param_2 = *param_2 + puVar3[1];
        }
        if (param_1 != (undefined4 *)0x0) {
          *param_1 = (int)puVar3[1];
        }
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  return 0;
}



long ossl_asn1_get_field_ptr(long *param_1,long param_2)

{
  return *(long *)(param_2 + 0x10) + *param_1;
}



long ossl_asn1_get_const_field_ptr(long *param_1,long param_2)

{
  return *(long *)(param_2 + 0x10) + *param_1;
}



ulong * ossl_asn1_do_adb(long param_1,ulong *param_2,int param_3)

{
  ASN1_OBJECT *o;
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_2 & 0x300) == 0) goto LAB_001003f6;
  lVar2 = (*(code *)param_2[4])();
  o = *(ASN1_OBJECT **)(param_1 + *(long *)(lVar2 + 8));
  if (o == (ASN1_OBJECT *)0x0) {
    param_2 = *(ulong **)(lVar2 + 0x30);
joined_r0x00100440:
    if (param_2 != (ulong *)0x0) goto LAB_001003f6;
    if (param_3 == 0) {
      param_2 = (ulong *)0x0;
      goto LAB_001003f6;
    }
    ERR_new();
    uVar5 = 0x11e;
  }
  else {
    if ((*param_2 & 0x100) == 0) {
      local_38 = ASN1_INTEGER_get((ASN1_INTEGER *)o);
    }
    else {
      iVar1 = OBJ_obj2nid(o);
      local_38 = (long)iVar1;
    }
    if ((*(code **)(lVar2 + 0x10) == (code *)0x0) ||
       (iVar1 = (**(code **)(lVar2 + 0x10))(&local_38), iVar1 != 0)) {
      plVar3 = *(long **)(lVar2 + 0x18);
      if (0 < *(long *)(lVar2 + 0x20)) {
        lVar4 = 0;
        do {
          if (*plVar3 == local_38) {
            param_2 = (ulong *)(plVar3 + 1);
            goto LAB_001003f6;
          }
          lVar4 = lVar4 + 1;
          plVar3 = plVar3 + 6;
        } while (*(long *)(lVar2 + 0x20) != lVar4);
      }
      param_2 = *(ulong **)(lVar2 + 0x28);
      goto joined_r0x00100440;
    }
    ERR_new();
    uVar5 = 0x105;
  }
  ERR_set_debug("crypto/asn1/tasn_utl.c",uVar5,"ossl_asn1_do_adb");
  ERR_set_error(0xd,0xa4,0);
  param_2 = (ulong *)0x0;
LAB_001003f6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


