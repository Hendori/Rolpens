
undefined8 table_iterator(long *param_1,ushort *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((((param_1 != (long *)0x0) && ((undefined8 *)param_1[1] == &fz_FUZZER_VALUE_id)) &&
      (*param_1 != 0)) && (*param_1 == (ulong)*param_2 * 0x10 + prediction_table)) {
    valfound = 1;
    uVar1 = 0;
  }
  return uVar1;
}



bool filter_iterator(long *param_1,ushort *param_2)

{
  if (((param_1 != (long *)0x0) && ((undefined8 *)param_1[1] == &fz_FUZZER_VALUE_id)) &&
     (*param_1 != 0)) {
    return *param_1 == (ulong)*param_2 * 0x10 + prediction_table;
  }
  return false;
}



void fuzz_free_cb(undefined8 *param_1)

{
  ulong *puVar1;
  
  if (((param_1 != (undefined8 *)0x0) && ((undefined8 *)param_1[1] == &fz_FUZZER_VALUE_id)) &&
     (puVar1 = (ulong *)*param_1, puVar1 != (ulong *)0x0)) {
    *puVar1 = *puVar1 & 0xfffffffffffffffe;
  }
  return;
}



undefined8 FuzzerInitialize(void)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (undefined1  [16])0x0;
  local_38 = ZEXT816(0x1000a0) << 0x40;
  local_18 = 1;
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  prediction_table = (void *)CRYPTO_zalloc(0x100010,"fuzz/hashtable.c",0x6a);
  if (prediction_table != (void *)0x0) {
    fuzzer_table = ossl_ht_new(local_38);
    if (fuzzer_table != 0) {
      uVar1 = 0;
      goto LAB_0010015f;
    }
    CRYPTO_free(prediction_table);
  }
  uVar1 = 0xffffffff;
LAB_0010015f:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte bVar9;
  int iVar10;
  ulong *puVar11;
  long in_FS_OFFSET;
  ushort local_82;
  undefined8 local_80;
  undefined8 local_78;
  ulong *local_70;
  ulong local_68 [2];
  ulong *local_58;
  undefined8 *local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0xb) {
    skipped_values = skipped_values + 1;
    uVar8 = 0xffffffff;
    goto LAB_00100282;
  }
  local_70 = local_68;
  local_82 = *(ushort *)(param_1 + 1);
  local_68[0] = 0;
  local_78 = 8;
  switch((*param_1 & 0x3f) % 6) {
  default:
    bVar9 = *param_1 & 0x40;
    local_68[0] = (ulong)local_82;
    puVar11 = (ulong *)(prediction_table + (ulong)local_82 * 0x10);
    ossl_ht_write_lock(fuzzer_table);
    puVar11[1] = *(ulong *)(param_1 + 3);
    local_58 = puVar11;
    if ((*puVar11 & 1) == 0) {
      if (bVar9 != 0) goto LAB_001004f9;
      iVar10 = 1;
LAB_001004bf:
      bVar2 = false;
      local_50 = &fz_FUZZER_VALUE_id;
      iVar4 = ossl_ht_insert(fuzzer_table,&local_78,&local_58,0);
    }
    else {
      if (bVar9 == 0) {
        iVar10 = 0;
        goto LAB_001004bf;
      }
LAB_001004f9:
      iVar10 = 1;
      local_80 = 0;
      local_50 = &fz_FUZZER_VALUE_id;
      bVar2 = true;
      iVar4 = ossl_ht_insert(fuzzer_table,&local_78,&local_58,&local_80);
    }
    if (iVar4 != -1) {
      *puVar11 = *puVar11 | 1;
      ossl_ht_write_unlock(fuzzer_table);
      if (iVar4 != iVar10) {
LAB_001006b6:
        OPENSSL_die("assertion failed: rc == rc_prediction","fuzz/hashtable.c",0xd0);
        goto LAB_001006ce;
      }
      if (iVar4 == 1) {
        if (bVar2) {
          replacements = replacements + 1;
        }
        else {
          inserts = inserts + 1;
        }
      }
    }
    break;
  case 1:
    local_68[0] = (ulong)local_82;
    puVar11 = (ulong *)(prediction_table + (ulong)local_82 * 0x10);
    ossl_ht_write_lock(fuzzer_table);
    uVar5 = *puVar11;
    uVar3 = ossl_ht_delete(fuzzer_table,&local_78);
    ossl_ht_write_unlock(fuzzer_table);
    if (uVar3 == ((uint)uVar5 & 1)) {
      if ((*puVar11 & 1) != 0) goto LAB_00100716;
      if ((uVar5 & 1) != 0) {
        deletes = deletes + 1;
      }
      break;
    }
LAB_001006ce:
    OPENSSL_die("assertion failed: rc == rc_prediction","fuzz/hashtable.c",0xfb);
    goto LAB_001006e6;
  case 2:
    pbVar7 = prediction_table + (ulong)local_82 * 0x10;
    local_68[0] = (ulong)local_82;
    ossl_ht_read_lock(fuzzer_table);
    if ((*pbVar7 & 1) != 0) {
      local_58 = (ulong *)ossl_ht_get(fuzzer_table,&local_78);
      if (((local_58 != (ulong *)0x0) &&
          (puVar6 = (undefined8 *)ossl_rcu_uptr_deref(&local_58), puVar6 != (undefined8 *)0x0)) &&
         ((undefined8 *)puVar6[1] == &fz_FUZZER_VALUE_id)) goto LAB_001003ff;
      ossl_ht_read_unlock(fuzzer_table);
LAB_001005cc:
      OPENSSL_die("assertion failed: lval == valptr","fuzz/hashtable.c",0x12f);
      goto LAB_001005e8;
    }
    puVar11 = (ulong *)ossl_ht_get(fuzzer_table,&local_78);
    if (((puVar11 == (ulong *)0x0) ||
        (local_58 = puVar11, puVar6 = (undefined8 *)ossl_rcu_uptr_deref(&local_58),
        puVar6 == (undefined8 *)0x0)) ||
       (pbVar7 = (byte *)0x0, (undefined8 *)puVar6[1] != &fz_FUZZER_VALUE_id)) {
      ossl_ht_read_unlock(fuzzer_table);
      break;
    }
LAB_001003ff:
    pbVar1 = (byte *)*puVar6;
    ossl_ht_read_unlock(fuzzer_table);
    if (pbVar1 != pbVar7) goto LAB_001005cc;
    if (pbVar7 != (byte *)0x0) {
      if ((undefined8 *)puVar6[1] == &fz_FUZZER_VALUE_id) {
        lookups = lookups + 1;
        break;
      }
      OPENSSL_die("assertion failed: ossl_ht_fz_FUZZER_VALUE_type(v) == 1","fuzz/hashtable.c",0x136)
      ;
      goto LAB_001006b6;
    }
    break;
  case 3:
    uVar5 = flushes * 0x5d4e8fb00bcbe61d + 0xa2b1704ff43419e3;
    if (0xa7c5ac471b47 < (uVar5 >> 5 | uVar5 << 0x3b)) {
      flushes = flushes + 1;
      skipped_values = skipped_values + 1;
      break;
    }
LAB_001005e8:
    ossl_ht_write_lock(fuzzer_table);
    ossl_ht_flush(fuzzer_table);
    ossl_ht_write_unlock(fuzzer_table);
    pbVar7 = prediction_table;
    do {
      if ((*pbVar7 & 1) != 0) {
        OPENSSL_die("assertion failed: (prediction_table[i].flags & FZ_FLAG_ALLOCATED) == 0",
                    "fuzz/hashtable.c",0x159);
        goto LAB_0010068d;
      }
      pbVar7 = pbVar7 + 0x10;
    } while (prediction_table + 0xffff0 != pbVar7);
    flushes = flushes + 1;
    break;
  case 4:
    uVar8 = *(undefined8 *)(prediction_table + (ulong)local_82 * 0x10);
    valfound = 0;
    ossl_ht_foreach_until(fuzzer_table,0x100000,&local_82);
    if (valfound == ((uint)uVar8 & 1)) {
      foreaches = foreaches + 1;
      break;
    }
    goto LAB_001006fe;
  case 5:
    uVar8 = *(undefined8 *)(prediction_table + (ulong)local_82 * 0x10);
    puVar11 = (ulong *)ossl_ht_filter(fuzzer_table,1,filter_iterator,&local_82);
    if ((ulong)((uint)uVar8 & 1) == *puVar11) {
      ossl_ht_value_list_free(puVar11);
      filters = filters + 1;
      break;
    }
LAB_001006e6:
    OPENSSL_die("assertion failed: htvlist->list_len == (size_t)rc_prediction","fuzz/hashtable.c",
                0x177);
LAB_001006fe:
    OPENSSL_die("assertion failed: valfound == rc_prediction","fuzz/hashtable.c",0x169);
LAB_00100716:
    OPENSSL_die("assertion failed: !(valptr->flags & FZ_FLAG_ALLOCATED)","fuzz/hashtable.c",0x102);
    ossl_ht_free(fuzzer_table);
    CRYPTO_free(prediction_table);
    uVar8 = OPENSSL_cleanup();
    return uVar8;
  }
  uVar8 = 0;
LAB_00100282:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
LAB_0010068d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void FuzzerCleanup(void)

{
  ossl_ht_free(fuzzer_table);
  CRYPTO_free(prediction_table);
  OPENSSL_cleanup();
  return;
}


