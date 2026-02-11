
void lh_QUIC_LCID_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_LCID_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_LCID_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_LCID_doall_arg_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



undefined8 lcidm_conn_hash(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



bool lcidm_conn_comp(long param_1,long param_2)

{
  return *(long *)(param_1 + 0x10) != *(long *)(param_2 + 0x10);
}



void retire_for_conn(long param_1,long *param_2)

{
  ulong uVar1;
  
  if ((((*(byte *)(param_1 + 0x30) & 3) != 0) &&
      (uVar1 = *(ulong *)(param_1 + 0x18), uVar1 < (ulong)param_2[2])) &&
     (uVar1 < (ulong)param_2[1])) {
    param_2[1] = uVar1;
    *param_2 = param_1;
  }
  return;
}



undefined8 lcid_hash(undefined1 *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_70 = 0;
  local_48 = (undefined1  [16])0x0;
  local_38 = (undefined1  [16])0x0;
  iVar1 = SipHash_set_hash_size(local_68,8);
  if (iVar1 != 0) {
    iVar1 = SipHash_Init(local_68,*(undefined8 *)(param_1 + 0x20),0,0);
    if (iVar1 != 0) {
      SipHash_Update(local_68,param_1 + 1,*param_1);
      SipHash_Final(local_68,&local_70,8);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_70;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void lcidm_delete_conn(long param_1,void *param_2)

{
  OPENSSL_LH_set_down_load(*(undefined8 *)((long)param_2 + 8),0);
  OPENSSL_LH_doall_arg(*(undefined8 *)((long)param_2 + 8),lcidm_delete_conn_lcid_,param_1);
  OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x20),param_2);
  OPENSSL_LH_free(*(undefined8 *)((long)param_2 + 8));
  CRYPTO_free(param_2);
  return;
}



void lcidm_delete_conn_(undefined8 param_1,undefined8 param_2)

{
  lcidm_delete_conn(param_2,param_1);
  return;
}



undefined8 * lcidm_conn_new_lcid(long param_1,long *param_2,byte *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *ptr;
  
  if (*param_3 < 0x15) {
    ptr = (undefined8 *)CRYPTO_zalloc(0x38,"ssl/quic/quic_lcidm.c",0x105);
    if (ptr != (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(param_3 + 8);
      lVar1 = param_2[1];
      *ptr = *(undefined8 *)param_3;
      ptr[1] = uVar2;
      uVar2 = *(undefined8 *)(param_3 + 0xd);
      ptr[5] = param_2;
      *(undefined8 *)((long)ptr + 0xd) = uVar2;
      ptr[4] = param_1 + 8;
      OPENSSL_LH_insert(lVar1,ptr);
      iVar3 = OPENSSL_LH_error(param_2[1]);
      if (iVar3 == 0) {
        OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x18),ptr);
        iVar3 = OPENSSL_LH_error(*(undefined8 *)(param_1 + 0x18));
        if (iVar3 == 0) {
          *param_2 = *param_2 + 1;
          return ptr;
        }
        OPENSSL_LH_delete(param_2[1],ptr);
      }
    }
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void lh_QUIC_LCIDM_CONN_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_LCIDM_CONN_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x001002a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



bool lcid_comp(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if ((*param_2 == bVar1) && (bVar1 < 0x15)) {
    iVar2 = memcmp(param_1 + 1,param_2 + 1,(ulong)bVar1);
    return iVar2 != 0;
  }
  return true;
}



void lh_QUIC_LCIDM_CONN_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x001002f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_QUIC_LCIDM_CONN_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void * lcidm_upsert_conn(long param_1,undefined8 param_2)

{
  int iVar1;
  void *pvVar2;
  void *ptr;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  undefined1 auStack_68 [16];
  undefined8 local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_2;
  pvVar2 = (void *)OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x20),auStack_68);
  pvVar5 = pvVar2;
  if ((pvVar2 == (void *)0x0) &&
     (ptr = (void *)CRYPTO_zalloc(0x30,"ssl/quic/quic_lcidm.c",0xcd), ptr != (void *)0x0)) {
    uVar3 = OPENSSL_LH_new(lcid_hash,lcid_comp);
    lVar4 = OPENSSL_LH_set_thunks
                      (uVar3,0x100000,lh_QUIC_LCID_cfn_thunk,lh_QUIC_LCID_doall_thunk,
                       lh_QUIC_LCID_doall_arg_thunk);
    *(long *)((long)ptr + 8) = lVar4;
    if (lVar4 != 0) {
      *(undefined8 *)((long)ptr + 0x10) = param_2;
      OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x20),ptr);
      iVar1 = OPENSSL_LH_error(*(undefined8 *)(param_1 + 0x20));
      pvVar5 = ptr;
      if (iVar1 == 0) goto LAB_0010034b;
      lVar4 = *(long *)((long)ptr + 8);
    }
    OPENSSL_LH_free(lVar4);
    CRYPTO_free(ptr);
    pvVar5 = pvVar2;
  }
LAB_0010034b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pvVar5;
}



undefined8
lcidm_generate(undefined8 *param_1,undefined8 param_2,int param_3,undefined8 *param_4,long *param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined5 uStack_70;
  undefined3 uStack_6b;
  undefined5 uStack_68;
  undefined8 *local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = lcidm_upsert_conn();
  if (lVar2 != 0) {
    uVar3 = *(ulong *)(lVar2 + 0x20);
    if (param_3 != 1) {
      uVar3 = uVar3 >> 0x3e;
    }
    if (uVar3 == 0) {
      lVar6 = 9;
      do {
        lVar6 = lVar6 + -1;
        if ((lVar6 == 0) ||
           (iVar1 = ossl_quic_gen_rand_conn_id(*param_1,param_1[5],param_4), iVar1 == 0))
        goto LAB_00100479;
        local_78 = *param_4;
        uStack_70 = (undefined5)param_4[1];
        uStack_6b = (undefined3)*(undefined8 *)((long)param_4 + 0xd);
        uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 0xd) >> 0x18);
        local_58 = param_1 + 1;
        lVar4 = OPENSSL_LH_retrieve(param_1[3],&local_78);
      } while (lVar4 != 0);
      lVar6 = lcidm_conn_new_lcid(param_1,lVar2,param_4);
      if (lVar6 != 0) {
        lVar4 = *(long *)(lVar2 + 0x20);
        *(long *)(lVar6 + 0x18) = lVar4;
        *(byte *)(lVar6 + 0x30) = *(byte *)(lVar6 + 0x30) & 0xfc | (byte)param_3 & 3;
        if (param_5 != (long *)0x0) {
          *param_5 = lVar4;
          lVar4 = *(long *)(lVar2 + 0x20);
        }
        uVar5 = 1;
        *(long *)(lVar2 + 0x20) = lVar4 + 1;
        goto LAB_0010047b;
      }
    }
  }
LAB_00100479:
  uVar5 = 0;
LAB_0010047b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void lcidm_delete_conn_lcid_(void *param_1,long param_2)

{
  OPENSSL_LH_delete(*(undefined8 *)(param_2 + 0x18),param_1);
  OPENSSL_LH_delete(*(undefined8 *)(*(long *)((long)param_1 + 0x28) + 8),param_1);
  **(long **)((long)param_1 + 0x28) = **(long **)((long)param_1 + 0x28) + -1;
  CRYPTO_free(param_1);
  return;
}



undefined8 * ossl_quic_lcidm_new(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  long lVar3;
  
  if (0x14 < param_2) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0x30,"ssl/quic/quic_lcidm.c",0x6e);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  iVar1 = RAND_bytes_ex(param_1,ptr + 1,0x10,0);
  if (iVar1 != 0) {
    uVar2 = OPENSSL_LH_new(lcid_hash,lcid_comp);
    lVar3 = OPENSSL_LH_set_thunks
                      (uVar2,0x100000,lh_QUIC_LCID_cfn_thunk,lh_QUIC_LCID_doall_thunk,
                       lh_QUIC_LCID_doall_arg_thunk);
    ptr[3] = lVar3;
    if (lVar3 == 0) goto LAB_001006ac;
    uVar2 = OPENSSL_LH_new(lcidm_conn_hash,lcidm_conn_comp);
    lVar3 = OPENSSL_LH_set_thunks
                      (uVar2,lh_QUIC_LCIDM_CONN_hfn_thunk,lh_QUIC_LCIDM_CONN_cfn_thunk,
                       lh_QUIC_LCIDM_CONN_doall_thunk,lh_QUIC_LCIDM_CONN_doall_arg_thunk);
    ptr[4] = lVar3;
    if (lVar3 != 0) {
      *ptr = param_1;
      ptr[5] = param_2;
      return ptr;
    }
  }
  lVar3 = ptr[3];
LAB_001006ac:
  OPENSSL_LH_free(lVar3);
  OPENSSL_LH_free(ptr[4]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



void ossl_quic_lcidm_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OPENSSL_LH_set_down_load(*(undefined8 *)((long)param_1 + 0x20),0);
    OPENSSL_LH_doall_arg(*(undefined8 *)((long)param_1 + 0x20),lcidm_delete_conn_,param_1);
    OPENSSL_LH_free(*(undefined8 *)((long)param_1 + 0x18));
    OPENSSL_LH_free(*(undefined8 *)((long)param_1 + 0x20));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_quic_lcidm_get_lcid_len(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



undefined8 ossl_quic_lcidm_get_num_active_lcid(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  puVar1 = (undefined8 *)OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x20),auStack_48);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_lcidm_enrol_odcid(long param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  long local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != (char *)0x0) && ((byte)(*param_3 - 8U) < 0xd)) {
    lVar1 = lcidm_upsert_conn();
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 1) == 0)) {
      local_58 = *(undefined8 *)param_3;
      uStack_50 = (undefined5)*(undefined8 *)(param_3 + 8);
      uStack_4b = (undefined3)*(undefined8 *)(param_3 + 0xd);
      uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0xd) >> 0x18);
      local_38 = param_1 + 8;
      lVar2 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x18),&local_58);
      if (lVar2 == 0) {
        lVar2 = lcidm_conn_new_lcid(param_1,lVar1,param_3);
        if (lVar2 != 0) {
          *(byte *)(lVar2 + 0x30) = *(byte *)(lVar2 + 0x30) & 0xfc;
          *(undefined8 *)(lVar2 + 0x18) = 0xffffffffffffffff;
          *(long *)(lVar1 + 0x18) = lVar2;
          uVar3 = 1;
          *(byte *)(lVar1 + 0x28) = *(byte *)(lVar1 + 0x28) | 1;
          goto LAB_001007e0;
        }
      }
    }
  }
  uVar3 = 0;
LAB_001007e0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_lcidm_generate_initial(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  lcidm_generate(param_1,param_2,1,param_3,0);
  return;
}



void ossl_quic_lcidm_generate(undefined8 param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  *param_3 = (undefined1  [16])0x0;
  lcidm_generate(param_1,param_2,2,param_3 + 1,param_3);
  return;
}



bool ossl_quic_lcidm_retire_odcid(long param_1)

{
  void *ptr;
  long lVar1;
  
  lVar1 = lcidm_upsert_conn();
  if (lVar1 != 0) {
    ptr = *(void **)(lVar1 + 0x18);
    if (ptr != (void *)0x0) {
      OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x18),ptr);
      OPENSSL_LH_delete(*(undefined8 *)(*(long *)((long)ptr + 0x28) + 8),ptr);
      **(long **)((long)ptr + 0x28) = **(long **)((long)ptr + 0x28) + -1;
      CRYPTO_free(ptr);
      *(undefined8 *)(lVar1 + 0x18) = 0;
    }
    return ptr != (void *)0x0;
  }
  return false;
}



undefined8
ossl_quic_lcidm_retire
          (long param_1,undefined8 param_2,undefined8 param_3,byte *param_4,undefined8 *param_5,
          undefined8 *param_6,undefined4 *param_7)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_98 = (undefined1  [16])0x0;
  local_68 = param_2;
  if (param_7 == (undefined4 *)0x0) {
LAB_00100a04:
    uVar5 = 0;
  }
  else {
    *param_7 = 0;
    lVar4 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x20),local_78);
    if (lVar4 != 0) {
      local_98._8_8_ = 0xffffffffffffffff;
      local_88 = param_3;
      OPENSSL_LH_doall_arg(*(undefined8 *)(lVar4 + 8),retire_for_conn,local_98);
      uVar5 = local_98._0_8_;
      if ((byte *)local_98._0_8_ != (byte *)0x0) {
        if (param_4 != (byte *)0x0) {
          bVar1 = *(byte *)local_98._0_8_;
          if ((*param_4 == bVar1) && (bVar1 < 0x15)) {
            iVar3 = memcmp((byte *)(local_98._0_8_ + 1),param_4 + 1,(ulong)bVar1);
            if (iVar3 == 0) goto LAB_00100a04;
          }
        }
        *param_7 = 1;
        if (param_5 != (undefined8 *)0x0) {
          uVar2 = *(undefined8 *)(uVar5 + 8);
          *param_5 = *(undefined8 *)uVar5;
          param_5[1] = uVar2;
          *(undefined8 *)((long)param_5 + 0xd) = *(undefined8 *)(uVar5 + 0xd);
        }
        if (param_6 != (undefined8 *)0x0) {
          *param_6 = *(undefined8 *)(uVar5 + 0x18);
        }
        OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x18),uVar5);
        OPENSSL_LH_delete(*(undefined8 *)(*(long *)(uVar5 + 0x28) + 8),uVar5);
        **(long **)(uVar5 + 0x28) = **(long **)(uVar5 + 0x28) + -1;
        CRYPTO_free((void *)uVar5);
      }
    }
    uVar5 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_quic_lcidm_cull(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auStack_48 [16];
  undefined8 local_38;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x20),auStack_48);
  if (lVar1 != 0) {
    lcidm_delete_conn(param_1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_quic_lcidm_lookup(long param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  long local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (byte *)0x0) {
    local_58 = *(undefined8 *)param_2;
    uStack_50 = (undefined5)*(undefined8 *)(param_2 + 8);
    uStack_4b = (undefined3)*(undefined8 *)(param_2 + 0xd);
    uStack_48 = (undefined5)((ulong)*(undefined8 *)(param_2 + 0xd) >> 0x18);
    local_38 = param_1 + 8;
    if (*param_2 < 0x15) {
      lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x18),&local_58);
      if (lVar1 != 0) {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = *(undefined8 *)(lVar1 + 0x18);
        }
        if (param_4 != (undefined8 *)0x0) {
          *param_4 = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 0x10);
        }
        uVar2 = 1;
        goto LAB_00100b82;
      }
    }
  }
  uVar2 = 0;
LAB_00100b82:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_lcidm_bind_channel(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = ossl_quic_lcidm_lookup(param_1,param_3,0,0);
  if ((iVar2 == 0) && (lVar3 = lcidm_upsert_conn(param_1,param_2), lVar3 != 0)) {
    lVar4 = lcidm_conn_new_lcid(param_1,lVar3,param_3);
    if (lVar4 != 0) {
      lVar1 = *(long *)(lVar3 + 0x20);
      *(long *)(lVar4 + 0x18) = lVar1;
      *(byte *)(lVar4 + 0x30) = *(byte *)(lVar4 + 0x30) & 0xfc | 1;
      *(long *)(lVar3 + 0x20) = lVar1 + 1;
      return 1;
    }
    lcidm_delete_conn(param_1,lVar3);
    return 0;
  }
  return 0;
}



bool ossl_quic_lcidm_debug_remove(long param_1,undefined8 *param_2)

{
  void *ptr;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  long local_38;
  long local_20;
  
  local_58 = *param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_50 = (undefined5)param_2[1];
  uStack_4b = (undefined3)*(undefined8 *)((long)param_2 + 0xd);
  uStack_48 = (undefined5)((ulong)*(undefined8 *)((long)param_2 + 0xd) >> 0x18);
  local_38 = param_1 + 8;
  ptr = (void *)OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x18),&local_58);
  if (ptr != (void *)0x0) {
    OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x18),ptr);
    OPENSSL_LH_delete(*(undefined8 *)(*(long *)((long)ptr + 0x28) + 8),ptr);
    **(long **)((long)ptr + 0x28) = **(long **)((long)ptr + 0x28) + -1;
    CRYPTO_free(ptr);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ptr != (void *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_quic_lcidm_debug_add(long param_1,undefined8 param_2,byte *param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  long local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != (byte *)0x0) && (*param_3 < 0x15)) {
    lVar1 = lcidm_upsert_conn();
    if (lVar1 != 0) {
      local_68 = *(undefined8 *)param_3;
      uStack_60 = (undefined5)*(undefined8 *)(param_3 + 8);
      uStack_5b = (undefined3)*(undefined8 *)(param_3 + 0xd);
      uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_3 + 0xd) >> 0x18);
      local_48 = param_1 + 8;
      lVar2 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x18),&local_68);
      if (lVar2 == 0) {
        lVar1 = lcidm_conn_new_lcid(param_1,lVar1,param_3);
        if (lVar1 != 0) {
          *(undefined8 *)(lVar1 + 0x18) = param_4;
          *(byte *)(lVar1 + 0x30) = *(byte *)(lVar1 + 0x30) & 0xfc | 2;
          uVar3 = 1;
          goto LAB_00100d0d;
        }
      }
    }
  }
  uVar3 = 0;
LAB_00100d0d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_lcidm_get_unused_cid(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  undefined8 *local_48;
  long local_30;
  
  iVar4 = 10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar1 = ossl_quic_gen_rand_conn_id(*param_1,param_1[5],param_2);
    if (iVar1 != 0) {
      local_68 = *(undefined8 *)param_2;
      uStack_60 = (undefined5)*(undefined8 *)(param_2 + 8);
      uStack_5b = (undefined3)*(undefined8 *)(param_2 + 0xd);
      uStack_58 = (undefined5)((ulong)*(undefined8 *)(param_2 + 0xd) >> 0x18);
      local_48 = param_1 + 1;
      if (*param_2 < 0x15) {
        lVar2 = OPENSSL_LH_retrieve(param_1[3],&local_68);
        if (lVar2 != 0) goto LAB_00100de0;
      }
      uVar3 = 1;
      goto LAB_00100e42;
    }
LAB_00100de0:
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar3 = 0;
LAB_00100e42:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


