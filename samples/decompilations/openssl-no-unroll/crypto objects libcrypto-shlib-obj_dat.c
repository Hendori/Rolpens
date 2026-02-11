
void lh_ADDED_OBJ_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ADDED_OBJ_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ADDED_OBJ_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ADDED_OBJ_doall_arg_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void cleanup1_doall(long param_1)

{
  uint *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar1 = (uint *)(lVar2 + 0x20);
  *puVar1 = *puVar1 | 0xd;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  return;
}



void cleanup2_doall(long param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x10);
  *piVar1 = *piVar1 + 1;
  return;
}



void cleanup3_doall(void *param_1)

{
  int *piVar1;
  ASN1_OBJECT *a;
  
  a = *(ASN1_OBJECT **)((long)param_1 + 8);
  piVar1 = &a->nid;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    ASN1_OBJECT_free(a);
  }
  CRYPTO_free(param_1);
  return;
}



void obj_lock_initialise_ossl_(void)

{
  ossl_obj_lock = CRYPTO_THREAD_lock_new();
  obj_lock_initialise_ossl_ret_ = (uint)(ossl_obj_lock != 0);
  return;
}



void ln_cmp_BSEARCH_CMP_FN(long *param_1,uint *param_2)

{
  strcmp(*(char **)(*param_1 + 8),*(char **)(nid_objs + (ulong)*param_2 * 0x28 + 8));
  return;
}



void sn_cmp_BSEARCH_CMP_FN(undefined8 *param_1,uint *param_2)

{
  strcmp(*(char **)*param_1,*(char **)(nid_objs + (ulong)*param_2 * 0x28));
  return;
}



int added_obj_cmp(int *param_1,int *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char *__s1;
  char *__s2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = iVar4 - *param_2;
  if (iVar3 == 0) {
    plVar1 = *(long **)(param_1 + 2);
    puVar2 = *(undefined8 **)(param_2 + 2);
    if (iVar4 == 2) {
      __s1 = (char *)plVar1[1];
      if (__s1 == (char *)0x0) {
        return -1;
      }
      __s2 = (char *)puVar2[1];
    }
    else {
      if (2 < iVar4) {
        if (iVar4 == 3) {
          return (int)plVar1[2] - *(int *)(puVar2 + 2);
        }
        return iVar3;
      }
      if (iVar4 == 0) {
        iVar4 = *(int *)((long)plVar1 + 0x14) - *(int *)((long)puVar2 + 0x14);
        if (iVar4 != 0) {
          return iVar4;
        }
        iVar4 = memcmp((void *)plVar1[3],(void *)puVar2[3],(long)*(int *)((long)plVar1 + 0x14));
        return iVar4;
      }
      if (iVar4 != 1) {
        return iVar3;
      }
      __s1 = (char *)*plVar1;
      if (__s1 == (char *)0x0) {
        return -1;
      }
      __s2 = (char *)*puVar2;
    }
    if (__s2 != (char *)0x0) {
      iVar4 = strcmp(__s1,__s2);
      return iVar4;
    }
    iVar3 = 1;
  }
  return iVar3;
}



ulong added_obj_hash(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  
  iVar2 = *param_1;
  lVar5 = (long)iVar2;
  puVar3 = *(undefined8 **)(param_1 + 2);
  if (iVar2 == 2) {
    uVar4 = OPENSSL_LH_strhash(puVar3[1]);
    lVar5 = (long)*param_1;
  }
  else if (iVar2 < 3) {
    if (iVar2 == 0) {
      iVar2 = *(int *)((long)puVar3 + 0x14);
      pbVar6 = (byte *)puVar3[3];
      uVar7 = (long)iVar2 << 0x14;
      uVar4 = (uint)uVar7;
      if (0 < iVar2) {
        pbVar9 = pbVar6 + iVar2;
        uVar8 = 0;
        do {
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          uVar7 = uVar7 ^ (long)(int)((uint)bVar1 <<
                                     ((char)uVar8 + (char)(uVar8 / 0x18) * -0x18 & 0x1fU));
          uVar4 = (uint)uVar7;
          uVar8 = (ulong)((int)uVar8 + 3);
        } while (pbVar9 != pbVar6);
      }
    }
    else {
      if (iVar2 != 1) {
        return 0;
      }
      uVar4 = OPENSSL_LH_strhash(*puVar3);
      lVar5 = (long)*param_1;
    }
  }
  else {
    if (iVar2 != 3) {
      return 0;
    }
    uVar4 = *(uint *)(puVar3 + 2);
  }
  return lVar5 << 0x1e | (ulong)(uVar4 & 0x3fffffff);
}



int obj_cmp_BSEARCH_CMP_FN(long *param_1,uint *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x14);
  if ((iVar1 - *(int *)(nid_objs + (ulong)*param_2 * 0x28 + 0x14) == 0) && (iVar1 != 0)) {
    iVar1 = memcmp(*(void **)(*param_1 + 0x18),*(void **)(nid_objs + (ulong)*param_2 * 0x28 + 0x18),
                   (long)iVar1);
    return iVar1;
  }
  return iVar1 - *(int *)(nid_objs + (ulong)*param_2 * 0x28 + 0x14);
}



int ossl_obj_add_object(ASN1_OBJECT *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ASN1_OBJECT *a;
  void *pvVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  long local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  a = OBJ_dup(param_1);
  if (a != (ASN1_OBJECT *)0x0) {
    pvVar5 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0x10f);
    local_78._8_8_ = pvVar5;
    if (pvVar5 == (void *)0x0) {
LAB_001004df:
      plVar8 = (long *)local_88;
    }
    else {
      if ((a->length != 0) && (param_1->data != (uchar *)0x0)) {
        pvVar5 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0x112);
        local_88._0_8_ = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001004df;
      }
      if (a->sn != (char *)0x0) {
        pvVar5 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0x114);
        local_88._8_8_ = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001004df;
      }
      if (a->ln != (char **)0x0) {
        pvVar5 = CRYPTO_malloc(0x10,"crypto/objects/obj_dat.c",0x116);
        local_78._0_8_ = pvVar5;
        if (pvVar5 == (void *)0x0) goto LAB_001004df;
      }
      if (param_2 != 0) {
        OPENSSL_init_crypto(0x40,0);
        iVar4 = CRYPTO_THREAD_run_once(&ossl_obj_lock_init,obj_lock_initialise_ossl_);
        if ((iVar4 != 0) && (obj_lock_initialise_ossl_ret_ != 0)) {
          iVar4 = CRYPTO_THREAD_write_lock(ossl_obj_lock);
          if (iVar4 != 0) {
            if (added == 0) goto LAB_00100540;
            goto LAB_001003dc;
          }
        }
        ERR_new();
        ERR_set_debug("crypto/objects/obj_dat.c",0x11a,"ossl_obj_add_object");
        ERR_set_error(8,0xc0110,0);
        goto LAB_001004df;
      }
      if (added != 0) {
LAB_001003dc:
        lVar9 = 0;
        do {
          piVar1 = *(int **)(local_88 + lVar9 * 8);
          if (piVar1 != (int *)0x0) {
            iVar4 = (int)lVar9;
            *piVar1 = iVar4;
            lVar2 = added;
            *(ASN1_OBJECT **)(piVar1 + 2) = a;
            piVar6 = (int *)OPENSSL_LH_retrieve(lVar2);
            local_68[lVar9] = (long)piVar6;
            if (piVar6 != (int *)0x0) {
              *piVar6 = -1;
            }
            OPENSSL_LH_insert(added,piVar1);
            iVar3 = OPENSSL_LH_error(added);
            if (iVar3 == 0) goto LAB_0010044d;
            if (piVar6 != (int *)0x0) {
              *piVar6 = iVar4;
            }
            if (iVar4 != 0) {
              lVar9 = (long)(iVar4 + -1);
              do {
                OPENSSL_LH_delete(added,*(undefined8 *)(local_88 + lVar9 * 8));
                if ((undefined4 *)local_68[lVar9] != (undefined4 *)0x0) {
                  *(undefined4 *)local_68[lVar9] = (int)lVar9;
                }
                lVar9 = lVar9 + -1;
              } while (lVar9 != ((long)iVar4 + -2) - (ulong)(iVar4 - 1));
            }
            ERR_new();
            ERR_set_debug("crypto/objects/obj_dat.c",0x135,"ossl_obj_add_object");
            ERR_set_error(8,0x8000f,0);
            goto LAB_00100660;
          }
LAB_0010044d:
          lVar9 = lVar9 + 1;
        } while (lVar9 != 4);
        a->flags = a->flags & 0xfffffff2;
        if (param_2 != 0) {
          CRYPTO_THREAD_unlock(ossl_obj_lock);
        }
        iVar4 = a->nid;
        goto LAB_00100467;
      }
LAB_00100540:
      uVar7 = OPENSSL_LH_new(added_obj_hash,added_obj_cmp);
      added = OPENSSL_LH_set_thunks
                        (uVar7,0x100000,lh_ADDED_OBJ_cfn_thunk,lh_ADDED_OBJ_doall_thunk,
                         lh_ADDED_OBJ_doall_arg_thunk);
      if (added != 0) goto LAB_001003dc;
      ERR_new();
      ERR_set_debug("crypto/objects/obj_dat.c",0x120,"ossl_obj_add_object");
      ERR_set_error(8,0x8000f,0);
LAB_00100660:
      plVar8 = (long *)local_88;
      if (param_2 != 0) {
        CRYPTO_THREAD_unlock(ossl_obj_lock);
      }
    }
    do {
      pvVar5 = (void *)*plVar8;
      plVar8 = plVar8 + 1;
      CRYPTO_free(pvVar5);
    } while (local_68 != plVar8);
    ASN1_OBJECT_free(a);
  }
  iVar4 = 0;
LAB_00100467:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_obj_cleanup_int(void)

{
  if (added != 0) {
    OPENSSL_LH_set_down_load(added,0);
    OPENSSL_LH_doall(added,cleanup1_doall);
    OPENSSL_LH_doall(added,cleanup2_doall);
    OPENSSL_LH_doall(added,cleanup3_doall);
    OPENSSL_LH_free(added);
    added = 0;
  }
  CRYPTO_THREAD_lock_free(ossl_obj_lock);
  ossl_obj_lock = 0;
  return;
}



int OBJ_new_nid(int num)

{
  int iVar1;
  
  iVar1 = new_nid_7;
  LOCK();
  new_nid_7 = new_nid_7 + num;
  UNLOCK();
  return iVar1;
}



ASN1_OBJECT * OBJ_nid2obj(int n)

{
  int iVar1;
  long lVar2;
  ASN1_OBJECT *pAVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [16];
  int local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  if ((n == 0) ||
     ((n - 1U < 0x5ce && (lVar2 = (long)n, *(int *)(nid_objs + lVar2 * 0x28 + 0x10) != 0)))) {
    pAVar3 = (ASN1_OBJECT *)(nid_objs + lVar2 * 0x28);
  }
  else {
    local_40 = local_38;
    local_48[0] = 3;
    local_28 = n;
    OPENSSL_init_crypto(0x40,0);
    iVar1 = CRYPTO_THREAD_run_once(&ossl_obj_lock_init,obj_lock_initialise_ossl_);
    if ((iVar1 != 0) && (obj_lock_initialise_ossl_ret_ != 0)) {
      iVar1 = CRYPTO_THREAD_read_lock(ossl_obj_lock);
      if (iVar1 != 0) {
        if (added == 0) {
          CRYPTO_THREAD_unlock(ossl_obj_lock);
        }
        else {
          lVar2 = OPENSSL_LH_retrieve(added,local_48);
          CRYPTO_THREAD_unlock(ossl_obj_lock);
          if (lVar2 != 0) {
            pAVar3 = *(ASN1_OBJECT **)(lVar2 + 8);
            goto LAB_00100830;
          }
        }
        ERR_new();
        ERR_set_debug("crypto/objects/obj_dat.c",0x160,__func___6);
        ERR_set_error(8,0x65,0);
        pAVar3 = (ASN1_OBJECT *)0x0;
        goto LAB_00100830;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/objects/obj_dat.c",0x157,__func___6);
    ERR_set_error(8,0xc010f,0);
    pAVar3 = (ASN1_OBJECT *)0x0;
  }
LAB_00100830:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * OBJ_nid2sn(int n)

{
  ASN1_OBJECT *pAVar1;
  
  pAVar1 = OBJ_nid2obj(n);
  if (pAVar1 != (ASN1_OBJECT *)0x0) {
    pAVar1 = (ASN1_OBJECT *)pAVar1->sn;
  }
  return (char *)pAVar1;
}



char * OBJ_nid2ln(int n)

{
  ASN1_OBJECT *pAVar1;
  
  pAVar1 = OBJ_nid2obj(n);
  if (pAVar1 != (ASN1_OBJECT *)0x0) {
    pAVar1 = (ASN1_OBJECT *)pAVar1->ln;
  }
  return (char *)pAVar1;
}



void OBJ_bsearch_ex_(void)

{
  ossl_bsearch();
  return;
}



void * OBJ_bsearch_(void *key,void *base,int num,int size,cmp *cmp)

{
  void *pvVar1;
  
  pvVar1 = (void *)OBJ_bsearch_ex_();
  return pvVar1;
}



int OBJ_ln2nid(char *s)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 *local_50;
  undefined4 local_48 [2];
  undefined1 *local_40;
  undefined1 local_38 [8];
  char *local_30;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = local_38;
  local_30 = s;
  puVar2 = (uint *)OBJ_bsearch_(&local_50,ln_objs,0x5c6,4,ln_cmp_BSEARCH_CMP_FN);
  if (puVar2 != (uint *)0x0) {
    iVar1 = *(int *)(nid_objs + (ulong)*puVar2 * 0x28 + 0x10);
    goto LAB_00100960;
  }
  OPENSSL_init_crypto(0x40,0);
  iVar1 = CRYPTO_THREAD_run_once(&ossl_obj_lock_init,obj_lock_initialise_ossl_);
  if ((iVar1 != 0) && (obj_lock_initialise_ossl_ret_ != 0)) {
    iVar1 = CRYPTO_THREAD_read_lock(ossl_obj_lock);
    if (iVar1 != 0) {
      if (added == 0) {
LAB_00100a30:
        iVar1 = 0;
      }
      else {
        local_48[0] = 2;
        local_40 = local_38;
        lVar3 = OPENSSL_LH_retrieve(added,local_48);
        if (lVar3 == 0) goto LAB_00100a30;
        iVar1 = *(int *)(*(long *)(lVar3 + 8) + 0x10);
      }
      CRYPTO_THREAD_unlock(ossl_obj_lock);
      goto LAB_00100960;
    }
  }
  ERR_new();
  iVar1 = 0;
  ERR_set_debug("crypto/objects/obj_dat.c",0x289,__func___4);
  ERR_set_error(8,0xc010f,0);
LAB_00100960:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OBJ_sn2nid(char *s)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  long in_FS_OFFSET;
  char **local_50;
  undefined4 local_48 [2];
  char **local_40;
  char *local_38 [5];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = local_38;
  local_38[0] = s;
  puVar2 = (uint *)OBJ_bsearch_(&local_50,sn_objs,0x5c6,4,sn_cmp_BSEARCH_CMP_FN);
  if (puVar2 != (uint *)0x0) {
    iVar1 = *(int *)(nid_objs + (ulong)*puVar2 * 0x28 + 0x10);
    goto LAB_00100ab0;
  }
  OPENSSL_init_crypto(0x40,0);
  iVar1 = CRYPTO_THREAD_run_once(&ossl_obj_lock_init,obj_lock_initialise_ossl_);
  if ((iVar1 != 0) && (obj_lock_initialise_ossl_ret_ != 0)) {
    iVar1 = CRYPTO_THREAD_read_lock(ossl_obj_lock);
    if (iVar1 != 0) {
      if (added == 0) {
LAB_00100b80:
        iVar1 = 0;
      }
      else {
        local_48[0] = 1;
        local_40 = local_38;
        lVar3 = OPENSSL_LH_retrieve(added,local_48);
        if (lVar3 == 0) goto LAB_00100b80;
        iVar1 = *(int *)(*(long *)(lVar3 + 8) + 0x10);
      }
      CRYPTO_THREAD_unlock(ossl_obj_lock);
      goto LAB_00100ab0;
    }
  }
  ERR_new();
  iVar1 = 0;
  ERR_set_debug("crypto/objects/obj_dat.c",0x2a4,__func___3);
  ERR_set_error(8,0xc010f,0);
LAB_00100ab0:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_OBJECT * OBJ_txt2obj(char *s,int no_name)

{
  int iVar1;
  int num;
  ASN1_OBJECT *pAVar2;
  uchar *ptr;
  long in_FS_OFFSET;
  uchar *local_40;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (no_name == 0) {
    iVar1 = OBJ_sn2nid(s);
    if (iVar1 == 0) {
      iVar1 = OBJ_ln2nid(s);
      if (iVar1 == 0) {
        iVar1 = ossl_isdigit();
        if (iVar1 != 0) goto LAB_00100c18;
        ERR_new();
        ERR_set_debug("crypto/objects/obj_dat.c",0x1b6,__func___5);
        ERR_set_error(8,0x67,0);
        goto LAB_00100d20;
      }
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      pAVar2 = OBJ_nid2obj(iVar1);
      return pAVar2;
    }
    goto LAB_00100d24;
  }
LAB_00100c18:
  iVar1 = a2d_ASN1_OBJECT((uchar *)0x0,0,s,-1);
  if (iVar1 < 1) {
LAB_00100d20:
    pAVar2 = (ASN1_OBJECT *)0x0;
  }
  else {
    num = ASN1_object_size(0,iVar1,6);
    if (num < 0) goto LAB_00100d20;
    ptr = (uchar *)CRYPTO_malloc(num,"crypto/objects/obj_dat.c",0x1c5);
    if (ptr == (uchar *)0x0) goto LAB_00100d20;
    local_40 = ptr;
    ASN1_put_object(&local_40,0,iVar1,6,0);
    a2d_ASN1_OBJECT(local_40,iVar1,s,-1);
    local_38 = ptr;
    pAVar2 = d2i_ASN1_OBJECT((ASN1_OBJECT **)0x0,&local_38,(long)num);
    CRYPTO_free(ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
LAB_00100d24:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OBJ_create(char *oid,char *sn,char *ln)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *a;
  uint *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_50;
  undefined4 local_48 [2];
  ASN1_OBJECT *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (sn == (char *)0x0 && oid == (char *)0x0) {
    if (ln == (char *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/objects/obj_dat.c",0x312,"OBJ_create");
      ERR_set_error(8,0x80106,0);
    }
    else {
      iVar2 = OBJ_ln2nid(ln);
      if (iVar2 != 0) goto LAB_00100d76;
LAB_00100f08:
      a = ASN1_OBJECT_new();
      if (a != (ASN1_OBJECT *)0x0) goto LAB_00100e08;
      ERR_new();
      ERR_set_debug("crypto/objects/obj_dat.c",0x326,"OBJ_create");
      ERR_set_error(8,0x8000d,0);
    }
  }
  else if (((sn == (char *)0x0) || (iVar2 = OBJ_sn2nid(sn), iVar2 == 0)) &&
          ((ln == (char *)0x0 || (iVar2 = OBJ_ln2nid(ln), iVar2 == 0)))) {
    if (oid == (char *)0x0) goto LAB_00100f08;
    a = OBJ_txt2obj(oid,1);
    if (a == (ASN1_OBJECT *)0x0) goto LAB_00100da6;
LAB_00100e08:
    OPENSSL_init_crypto(0x40,0);
    iVar2 = CRYPTO_THREAD_run_once(&ossl_obj_lock_init,obj_lock_initialise_ossl_);
    if (((iVar2 != 0) && (obj_lock_initialise_ossl_ret_ != 0)) &&
       (iVar2 = CRYPTO_THREAD_write_lock(ossl_obj_lock), iVar2 != 0)) {
      if (oid == (char *)0x0) {
LAB_00100e67:
        iVar2 = new_nid_7;
        LOCK();
        UNLOCK();
        iVar1 = new_nid_7 + 1;
        a->nid = new_nid_7;
        new_nid_7 = iVar1;
        if (iVar2 == 0) goto LAB_00100e7c;
        a->sn = sn;
        a->ln = (char **)ln;
        iVar2 = ossl_obj_add_object(a,0);
        a->sn = (char *)0x0;
        a->ln = (char **)0x0;
      }
      else {
        local_50 = a;
        if (a->nid == 0) {
          if (a->length != 0) {
            puVar3 = (uint *)OBJ_bsearch_(&local_50,obj_objs,0x540,4,obj_cmp_BSEARCH_CMP_FN);
            if (puVar3 == (uint *)0x0) {
              if (added != 0) {
                local_48[0] = 0;
                local_40 = local_50;
                lVar4 = OPENSSL_LH_retrieve(added,local_48);
                if (lVar4 != 0) {
                  iVar2 = *(int *)(*(long *)(lVar4 + 8) + 0x10);
                  goto LAB_00100fc0;
                }
              }
            }
            else {
              iVar2 = *(int *)(nid_objs + (ulong)*puVar3 * 0x28 + 0x10);
LAB_00100fc0:
              if (iVar2 != 0) goto LAB_00100fd0;
            }
          }
          goto LAB_00100e67;
        }
LAB_00100fd0:
        ERR_new();
        ERR_set_debug("crypto/objects/obj_dat.c",0x334,"OBJ_create");
        ERR_set_error(8,0x66,0);
LAB_00100e7c:
        iVar2 = 0;
      }
      CRYPTO_THREAD_unlock(ossl_obj_lock);
      ASN1_OBJECT_free(a);
      goto LAB_00100da8;
    }
    ERR_new();
    ERR_set_debug("crypto/objects/obj_dat.c",0x32c,"OBJ_create");
    ERR_set_error(8,0xc0110,0);
    ASN1_OBJECT_free(a);
  }
  else {
LAB_00100d76:
    ERR_new();
    ERR_set_debug("crypto/objects/obj_dat.c",0x319,"OBJ_create");
    ERR_set_error(8,0x66,0);
  }
LAB_00100da6:
  iVar2 = 0;
LAB_00100da8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int OBJ_create_objects(BIO *in)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *ln;
  char *sn;
  long in_FS_OFFSET;
  char local_248 [520];
  long local_40;
  
  ln = (char *)0x0;
  iVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00101098:
  iVar2 = BIO_gets(in,local_248,0x200);
  if (0 < iVar2) {
    local_248[iVar2 + -1] = '\0';
    iVar2 = ossl_ctype_check((int)local_248[0],7);
    sn = local_248;
    if (iVar2 != 0) {
      for (; (iVar2 = ossl_isdigit((int)*sn), iVar2 != 0 || (*sn == '.')); sn = sn + 1) {
      }
      if (*sn != '\0') {
        *sn = '\0';
        do {
          sn = sn + 1;
          iVar2 = ossl_ctype_check((int)*sn,8);
        } while (iVar2 != 0);
        cVar1 = *sn;
        pcVar3 = sn;
        if (cVar1 != '\0') {
LAB_00101165:
          iVar2 = ossl_ctype_check((int)cVar1,8);
          if (iVar2 == 0) goto LAB_00101158;
          if (*pcVar3 != '\0') {
            *pcVar3 = '\0';
            ln = pcVar3;
            do {
              ln = ln + 1;
              iVar2 = ossl_ctype_check((int)*ln,8);
            } while (iVar2 != 0);
            if (*ln != '\0') goto LAB_001010f6;
          }
          goto LAB_001011a3;
        }
      }
      sn = (char *)0x0;
      goto LAB_001010f6;
    }
  }
LAB_001011b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
LAB_00101158:
  cVar1 = pcVar3[1];
  pcVar3 = pcVar3 + 1;
  if (cVar1 == '\0') goto LAB_001011a3;
  goto LAB_00101165;
LAB_001011a3:
  ln = (char *)0x0;
LAB_001010f6:
  if ((local_248[0] == '\0') || (iVar2 = OBJ_create(local_248,sn,ln), iVar2 == 0))
  goto LAB_001011b0;
  iVar4 = iVar4 + 1;
  goto LAB_00101098;
}



long OBJ_length(long param_1)

{
  if (param_1 != 0) {
    return (long)*(int *)(param_1 + 0x14);
  }
  return 0;
}



undefined8 OBJ_get0_data(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0;
}



int OBJ_add_object(ASN1_OBJECT *obj)

{
  int iVar1;
  
  iVar1 = ossl_obj_add_object(obj,1);
  return iVar1;
}



int OBJ_obj2nid(ASN1_OBJECT *o)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_30;
  undefined4 local_28 [2];
  ASN1_OBJECT *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = o;
  if (o != (ASN1_OBJECT *)0x0) {
    iVar4 = o->nid;
    if (iVar4 != 0) goto LAB_00101268;
    if (o->length != 0) {
      puVar2 = (uint *)OBJ_bsearch_(&local_30,obj_objs,0x540,4,obj_cmp_BSEARCH_CMP_FN);
      if (puVar2 == (uint *)0x0) {
        OPENSSL_init_crypto(0x40,0);
        iVar1 = CRYPTO_THREAD_run_once(&ossl_obj_lock_init,obj_lock_initialise_ossl_);
        if ((iVar1 != 0) && (obj_lock_initialise_ossl_ret_ != 0)) {
          iVar1 = CRYPTO_THREAD_read_lock(ossl_obj_lock);
          if (iVar1 != 0) {
            if (added != 0) {
              local_28[0] = 0;
              local_20 = local_30;
              lVar3 = OPENSSL_LH_retrieve(added,local_28);
              if (lVar3 != 0) {
                iVar4 = *(int *)(*(long *)(lVar3 + 8) + 0x10);
              }
            }
            CRYPTO_THREAD_unlock(ossl_obj_lock);
            goto LAB_00101268;
          }
        }
        ERR_new();
        iVar4 = 0;
        ERR_set_debug("crypto/objects/obj_dat.c",0x193,"ossl_obj_obj2nid");
        ERR_set_error(8,0xc010f,0);
      }
      else {
        iVar4 = *(int *)(nid_objs + (ulong)*puVar2 * 0x28 + 0x10);
      }
      goto LAB_00101268;
    }
  }
  iVar4 = 0;
LAB_00101268:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int OBJ_obj2txt(char *buf,int buf_len,ASN1_OBJECT *a,int no_name)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  BIGNUM *a_00;
  char *pcVar4;
  size_t sVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  ulong w;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  long in_FS_OFFSET;
  int local_80;
  int local_7c;
  char *local_78;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((buf != (char *)0x0) && (0 < buf_len)) {
    *buf = '\0';
  }
  if ((a == (ASN1_OBJECT *)0x0) || (pbVar3 = a->data, pbVar3 == (byte *)0x0)) {
    local_80 = 0;
  }
  else {
    if (no_name == 0) {
      iVar9 = OBJ_obj2nid(a);
      if ((iVar9 != 0) &&
         ((pcVar4 = OBJ_nid2ln(iVar9), pcVar4 != (char *)0x0 ||
          (pcVar4 = OBJ_nid2sn(iVar9), pcVar4 != (char *)0x0)))) {
        if (buf != (char *)0x0) {
          OPENSSL_strlcpy(buf,pcVar4,(long)buf_len);
        }
        sVar5 = strlen(pcVar4);
        local_80 = (int)sVar5;
        goto LAB_001014af;
      }
      pbVar3 = a->data;
    }
    iVar9 = a->length;
    if (iVar9 < 0x24b) {
      a_00 = (BIGNUM *)0x0;
      if (0 < iVar9) {
        bVar7 = true;
        local_80 = 0;
        local_7c = buf_len;
        local_78 = buf;
LAB_0010141b:
        uVar12 = (uint)*pbVar3;
        iVar9 = iVar9 + -1;
        if ((iVar9 != 0) || (-1 < (char)*pbVar3)) {
          w = 0;
          bVar6 = false;
          pbVar3 = pbVar3 + 1;
LAB_00101438:
          if (bVar6) {
            iVar2 = BN_add_word(a_00,(ulong)(uVar12 & 0x7f));
            if (iVar2 == 0) goto LAB_0010149f;
            if (-1 < (char)uVar12) goto code_r0x001014f1;
LAB_00101473:
            iVar2 = BN_lshift(a_00,a_00,7);
            if (iVar2 == 0) goto LAB_0010149f;
            bVar6 = true;
          }
          else {
            w = w | uVar12 & 0x7f;
            if (-1 < (char)uVar12) {
              if (!bVar7) goto LAB_001016df;
              bVar7 = false;
              if (w < 0x50) goto LAB_001015e6;
              w = w - 0x50;
              cVar8 = '\x02';
              goto LAB_00101601;
            }
            if (0x1ffffffffffffff < w) {
              if ((a_00 != (BIGNUM *)0x0) || (a_00 = BN_new(), a_00 != (BIGNUM *)0x0)) {
                iVar2 = BN_set_word(a_00,w);
                if (iVar2 != 0) goto LAB_00101473;
                goto LAB_0010149f;
              }
              goto LAB_00101551;
            }
            w = w << 7;
          }
          pbVar11 = pbVar3 + 1;
          bVar1 = *pbVar3;
          uVar12 = (uint)bVar1;
          iVar9 = iVar9 + -1;
          pbVar3 = pbVar11;
          if ((iVar9 == 0) && ((char)bVar1 < '\0')) goto LAB_0010149f;
          goto LAB_00101438;
        }
        goto LAB_0010149f;
      }
      local_80 = 0;
LAB_001017c8:
      BN_free(a_00);
    }
    else {
LAB_00101551:
      a_00 = (BIGNUM *)0x0;
LAB_0010149f:
      BN_free(a_00);
      local_80 = -1;
    }
  }
LAB_001014af:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_80;
code_r0x001014f1:
  if (bVar7) {
    if (w < 0x50) {
LAB_001015e6:
      cVar8 = (char)(w / 0x28);
      w = w - (-(int)(w / 0x28) & 0x28);
    }
    else {
      iVar2 = BN_sub_word(a_00,0x50);
      if (iVar2 == 0) goto LAB_0010149f;
      cVar8 = '\x02';
    }
LAB_00101601:
    if ((local_78 != (char *)0x0) && (1 < local_7c)) {
      local_7c = local_7c + -1;
      local_78[1] = '\0';
      *local_78 = cVar8 + '0';
      local_78 = local_78 + 1;
    }
    local_80 = local_80 + 1;
    if (!bVar7) {
LAB_001016df:
      BIO_snprintf(local_68,0x25,".%lu",w);
      sVar5 = strlen(local_68);
      iVar2 = (int)sVar5;
      if ((local_78 != (char *)0x0) && (0 < local_7c)) {
        lVar10 = (long)local_7c;
        OPENSSL_strlcpy(local_78,local_68,lVar10);
        if (local_7c < iVar2) {
          local_7c = 0;
          local_78 = local_78 + lVar10;
        }
        else {
          local_78 = local_78 + sVar5;
          local_7c = local_7c - iVar2;
        }
      }
      local_80 = local_80 + iVar2;
      goto LAB_0010171e;
    }
  }
  pcVar4 = BN_bn2dec(a_00);
  if (pcVar4 == (char *)0x0) goto LAB_0010149f;
  sVar5 = strlen(pcVar4);
  iVar2 = (int)sVar5;
  if (local_78 != (char *)0x0) {
    if (1 < local_7c) {
      local_7c = local_7c + -1;
      local_78[0] = '.';
      local_78[1] = '\0';
      local_78 = local_78 + 1;
    }
    OPENSSL_strlcpy(local_78,pcVar4);
    if (local_7c < iVar2) {
      local_78 = local_78 + local_7c;
      local_7c = 0;
    }
    else {
      local_7c = local_7c - iVar2;
      local_78 = local_78 + iVar2;
    }
  }
  local_80 = local_80 + 1 + iVar2;
  CRYPTO_free(pcVar4);
LAB_0010171e:
  bVar7 = false;
  if (iVar9 < 1) goto LAB_001017c8;
  goto LAB_0010141b;
}



int OBJ_txt2nid(char *s)

{
  int iVar1;
  ASN1_OBJECT *o;
  
  iVar1 = 0;
  o = OBJ_txt2obj(s,0);
  if (o != (ASN1_OBJECT *)0x0) {
    iVar1 = OBJ_obj2nid(o);
    ASN1_OBJECT_free(o);
  }
  return iVar1;
}


