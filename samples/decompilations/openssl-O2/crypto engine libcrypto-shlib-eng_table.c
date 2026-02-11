
void lh_ENGINE_PILE_hfn_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ENGINE_PILE_cfn_thunk(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ENGINE_PILE_doall_thunk(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ENGINE_PILE_doall_arg_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



long engine_pile_hash(int *param_1)

{
  return (long)*param_1;
}



int engine_pile_cmp(int *param_1,int *param_2)

{
  return *param_1 - *param_2;
}



void int_dall(undefined4 *param_1,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00100078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_2)(*param_1,*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_1 + 4),param_2[1])
  ;
  return;
}



void int_cleanup_cb_doall(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OPENSSL_sk_free(*(undefined8 *)((long)param_1 + 8));
    if (*(long *)((long)param_1 + 0x10) != 0) {
      engine_unlocked_finish(*(long *)((long)param_1 + 0x10),0);
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void int_unregister_cb(long param_1,long param_2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = OPENSSL_sk_find(*(undefined8 *)(param_1 + 8),param_2);
    if (iVar1 < 0) break;
    OPENSSL_sk_delete(*(undefined8 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x10) != param_2) {
    return;
  }
  engine_unlocked_finish(param_2,0);
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



void lh_ENGINE_PILE_doall_ENGINE_PILE_DOALL_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void lh_ENGINE_PILE_doall_ENGINE_thunk
               (undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00100154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint ENGINE_get_table_flags(void)

{
  return table_flags;
}



void ENGINE_set_table_flags(uint flags)

{
  table_flags = flags;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_table_register
              (long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,uint param_5,
              int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *ptr;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined4 local_68 [10];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = CRYPTO_THREAD_write_lock(_global_engine_lock);
  if (iVar2 == 0) goto LAB_001002a9;
  if (*param_1 == 0) {
    uVar5 = OPENSSL_LH_new(engine_pile_hash,engine_pile_cmp);
    lVar4 = OPENSSL_LH_set_thunks
                      (uVar5,0x100000,lh_ENGINE_PILE_cfn_thunk,lh_ENGINE_PILE_doall_thunk,
                       lh_ENGINE_PILE_doall_arg_thunk);
    if (lVar4 != 0) {
      *param_1 = lVar4;
      iVar2 = engine_cleanup_add_first(param_2);
      if (iVar2 != 0) goto LAB_001001d8;
      OPENSSL_LH_free(*param_1);
      *param_1 = 0;
    }
LAB_001003c8:
    iVar2 = 0;
  }
  else {
LAB_001001d8:
    if (param_5 != 0) {
      puVar1 = param_4 + param_5;
      do {
        while( true ) {
          local_68[0] = *param_4;
          puVar3 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_68);
          if (puVar3 == (undefined4 *)0x0) {
            ptr = (undefined4 *)CRYPTO_malloc(0x20,"crypto/engine/eng_table.c",0x6a);
            if (ptr == (undefined4 *)0x0) goto LAB_001003c8;
            ptr[6] = 1;
            *ptr = *param_4;
            lVar4 = OPENSSL_sk_new_null();
            *(long *)(ptr + 2) = lVar4;
            if (lVar4 == 0) {
              CRYPTO_free(ptr);
              goto LAB_001003c8;
            }
            *(undefined8 *)(ptr + 4) = 0;
            OPENSSL_LH_insert(*param_1,ptr);
            puVar3 = (undefined4 *)OPENSSL_LH_retrieve(*param_1,local_68);
            if (ptr != puVar3) {
              OPENSSL_sk_free(*(undefined8 *)(ptr + 2));
              CRYPTO_free(ptr);
              goto LAB_001003c8;
            }
          }
          OPENSSL_sk_delete_ptr(*(undefined8 *)(puVar3 + 2),param_3);
          iVar2 = OPENSSL_sk_push(*(undefined8 *)(puVar3 + 2),param_3);
          if (iVar2 == 0) goto LAB_001003c8;
          puVar3[6] = 0;
          if (param_6 == 0) break;
          iVar2 = engine_unlocked_init(param_3);
          if (iVar2 == 0) {
            ERR_new();
            ERR_set_debug("crypto/engine/eng_table.c",0x87,"engine_table_register");
            ERR_set_error(0x26,0x6d,0);
            goto LAB_001003c8;
          }
          if (*(long *)(puVar3 + 4) != 0) {
            engine_unlocked_finish(*(long *)(puVar3 + 4),0);
          }
          param_4 = param_4 + 1;
          *(undefined8 *)(puVar3 + 4) = param_3;
          puVar3[6] = 1;
          if (param_4 == puVar1) goto LAB_00100294;
        }
        param_4 = param_4 + 1;
      } while (param_4 != puVar1);
    }
LAB_00100294:
    iVar2 = 1;
  }
  CRYPTO_THREAD_unlock(_global_engine_lock);
LAB_001002a9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_table_unregister(long *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
  if (iVar1 != 0) {
    if (*param_1 != 0) {
      OPENSSL_LH_doall_arg_thunk
                (*param_1,lh_ENGINE_PILE_doall_ENGINE_thunk,int_unregister_cb,param_2);
    }
    CRYPTO_THREAD_unlock(_global_engine_lock);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_table_cleanup(long *param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock);
  if (iVar1 != 0) {
    if (*param_1 != 0) {
      OPENSSL_LH_doall(*param_1,int_cleanup_cb_doall);
      OPENSSL_LH_free(*param_1);
      *param_1 = 0;
    }
    CRYPTO_THREAD_unlock(_global_engine_lock);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long ossl_engine_table_select(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined4 local_58 [10];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  OPENSSL_init_crypto(0x40,0);
  if ((*param_1 == 0) || (iVar1 = CRYPTO_THREAD_write_lock(_global_engine_lock), iVar1 == 0)) {
    lVar3 = 0;
  }
  else {
    ERR_set_mark();
    if ((*param_1 == 0) ||
       (local_58[0] = param_2, lVar2 = OPENSSL_LH_retrieve(*param_1,local_58), lVar2 == 0)) {
      lVar3 = 0;
    }
    else {
      if (((*(long *)(lVar2 + 0x10) == 0) || (iVar1 = engine_unlocked_init(), iVar1 == 0)) &&
         (iVar1 = *(int *)(lVar2 + 0x18), *(int *)(lVar2 + 0x18) == 0)) {
        do {
          iVar4 = iVar1 + 1;
          lVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 8),iVar1);
          if (lVar3 == 0) goto LAB_0010056e;
          iVar1 = iVar4;
        } while (((*(int *)(lVar3 + 0xa0) < 1) && (((byte)table_flags & 1) != 0)) ||
                (iVar4 = engine_unlocked_init(lVar3), iVar4 == 0));
        if ((*(long *)(lVar2 + 0x10) != lVar3) && (iVar1 = engine_unlocked_init(lVar3), iVar1 != 0))
        {
          if (*(long *)(lVar2 + 0x10) != 0) {
            engine_unlocked_finish(*(long *)(lVar2 + 0x10),0);
          }
          *(long *)(lVar2 + 0x10) = lVar3;
        }
      }
      else {
        lVar3 = *(long *)(lVar2 + 0x10);
      }
LAB_0010056e:
      *(undefined4 *)(lVar2 + 0x18) = 1;
    }
    CRYPTO_THREAD_unlock(_global_engine_lock);
    ERR_pop_to_mark();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar3;
}



void engine_table_doall(long param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_3;
  if (param_1 != 0) {
    OPENSSL_LH_doall_arg_thunk
              (param_1,lh_ENGINE_PILE_doall_ENGINE_PILE_DOALL_thunk,int_dall,&local_28);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


