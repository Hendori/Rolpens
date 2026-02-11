
void OPENSSL_LH_stats_bio(long param_1,BIO *param_2)

{
  BIO_printf(param_2,"num_items             = %lu\n",*(undefined8 *)(param_1 + 0x58));
  BIO_printf(param_2,"num_nodes             = %u\n",(ulong)*(uint *)(param_1 + 0x38));
  BIO_printf(param_2,"num_alloc_nodes       = %u\n",(ulong)*(uint *)(param_1 + 0x3c));
  BIO_printf(param_2,"num_expands           = 0\n");
  BIO_printf(param_2,"num_expand_reallocs   = 0\n");
  BIO_printf(param_2,"num_contracts         = 0\n");
  BIO_printf(param_2,"num_contract_reallocs = 0\n");
  BIO_printf(param_2,"num_hash_calls        = 0\n");
  BIO_printf(param_2,"num_comp_calls        = 0\n");
  BIO_printf(param_2,"num_insert            = 0\n");
  BIO_printf(param_2,"num_replace           = 0\n");
  BIO_printf(param_2,"num_delete            = 0\n");
  BIO_printf(param_2,"num_no_delete         = 0\n");
  BIO_printf(param_2,"num_retrieve          = 0\n");
  BIO_printf(param_2,"num_retrieve_miss     = 0\n");
  BIO_printf(param_2,"num_hash_comps        = 0\n");
  return;
}



void OPENSSL_LH_stats(undefined8 param_1,void *param_2)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,param_2);
    OPENSSL_LH_stats_bio(param_1,bp);
    BIO_free(bp);
    return;
  }
  return;
}



void OPENSSL_LH_node_stats_bio(long *param_1,BIO *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((int)param_1[7] == 0) {
    return;
  }
  uVar4 = 0;
  do {
    uVar3 = uVar4 & 0xffffffff;
    uVar2 = 0;
    for (lVar1 = *(long *)(*param_1 + uVar4 * 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    uVar4 = uVar4 + 1;
    BIO_printf(param_2,"node %6u -> %3u\n",uVar3,uVar2);
  } while ((uint)uVar4 < *(uint *)(param_1 + 7));
  return;
}



void OPENSSL_LH_node_stats(undefined8 param_1,void *param_2)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,param_2);
    OPENSSL_LH_node_stats_bio(param_1,bp);
    BIO_free(bp);
    return;
  }
  return;
}



void OPENSSL_LH_node_usage_stats_bio(long *param_1,BIO *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  
  uVar2 = *(uint *)(param_1 + 7);
  if (uVar2 == 0) {
    BIO_printf(param_2,"%lu nodes used out of %u\n",0,0);
    BIO_printf(param_2,"%lu items\n",0);
    return;
  }
  plVar7 = (long *)*param_1;
  uVar6 = 0;
  uVar5 = 0;
  plVar1 = plVar7 + uVar2;
  do {
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        lVar4 = *(long *)(lVar4 + 8);
        lVar3 = lVar3 + 1;
      } while (lVar4 != 0);
      if (lVar3 != 0) {
        uVar6 = uVar6 + 1;
        uVar5 = uVar5 + lVar3;
      }
    }
    plVar7 = plVar7 + 1;
  } while (plVar1 != plVar7);
  BIO_printf(param_2,"%lu nodes used out of %u\n",uVar6,(ulong)uVar2);
  BIO_printf(param_2,"%lu items\n",uVar5);
  if (uVar6 != 0) {
    uVar8 = (ulong)*(uint *)(param_1 + 7);
    BIO_printf(param_2,"load %d.%02d  actual load %d.%02d\n",uVar5 / uVar8 & 0xffffffff,
               ((uVar5 % uVar8) * 100) / uVar8,uVar5 / uVar6,
               ((uVar5 % uVar6) * 100) / uVar6 & 0xffffffff);
    return;
  }
  return;
}



void OPENSSL_LH_node_usage_stats(undefined8 param_1,void *param_2)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,param_2);
    OPENSSL_LH_node_usage_stats_bio(param_1,bp);
    BIO_free(bp);
    return;
  }
  return;
}


