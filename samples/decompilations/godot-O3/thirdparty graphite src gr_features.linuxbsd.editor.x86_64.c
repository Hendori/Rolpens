
undefined8 gr_fref_feature_value(FeatureVal *param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (FeatureVal *)0x0) && (param_2 != 0)) {
    uVar1 = graphite2::FeatureRef::getFeatureVal(param_1);
    return uVar1;
  }
  return 0;
}



undefined1 gr_fref_set_feature_value(long param_1,ushort param_2,long param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    uVar1 = graphite2::FeatureRef::applyValToFeature((uint)param_1,(FeatureVal *)(ulong)param_2);
    return uVar1;
  }
  return 0;
}



undefined4 gr_fref_id(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x18);
  }
  return 0;
}



undefined2 gr_fref_n_values(long param_1)

{
  if (param_1 != 0) {
    return *(undefined2 *)(param_1 + 0x1e);
  }
  return 0;
}



undefined2 gr_fref_value(long param_1,ushort param_2)

{
  if ((param_1 != 0) && (param_2 < *(ushort *)(param_1 + 0x1e))) {
    return *(undefined2 *)(*(long *)(param_1 + 8) + 2 + (ulong)param_2 * 4);
  }
  return 0;
}



undefined8 gr_fref_label(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(undefined2 *)(param_1 + 0x1c);
  lVar2 = graphite2::Face::nameTable();
  if (lVar2 != 0) {
    uVar3 = graphite2::NameTable::getName(lVar2,param_2,uVar1,param_3,param_4);
    return uVar3;
  }
  return 0;
}



undefined8
gr_fref_value_label(long param_1,ushort param_2,undefined8 param_3,undefined4 param_4,
                   undefined8 param_5)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (param_2 < *(ushort *)(param_1 + 0x1e))) {
    uVar1 = *(undefined2 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 4);
    lVar2 = graphite2::Face::nameTable();
    if (lVar2 != 0) {
      uVar3 = graphite2::NameTable::getName(lVar2,param_3,uVar1,param_4,param_5);
      return uVar3;
    }
    return 0;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gr_label_destroy(void *__ptr)

{
  free(__ptr);
  return;
}



undefined1 (*) [16] gr_featureval_clone(long *param_1)

{
  size_t __size;
  long lVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  ulong uVar4;
  ulong uVar5;
  void *pvVar6;
  long lVar7;
  
  if (param_1 == (long *)0x0) {
    pauVar3 = (undefined1 (*) [16])malloc(0x20);
    *pauVar3 = (undefined1  [16])0x0;
    pauVar3[1] = (undefined1  [16])0x0;
  }
  else {
    pauVar3 = (undefined1 (*) [16])malloc(0x20);
    lVar1 = param_1[1];
    lVar2 = *param_1;
    *(undefined8 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
    uVar4 = (lVar1 - lVar2 >> 2) + 7;
    uVar5 = uVar4 & 0xfffffffffffffff8;
    if (uVar5 == 0) {
      pvVar6 = (void *)0x0;
    }
    else {
      __size = uVar5 * 4;
      if (uVar4 >> 0x3e != 0) {
gr_featureval_clone_cold:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pvVar6 = malloc(__size);
      *(void **)*pauVar3 = pvVar6;
      if (pvVar6 == (void *)0x0) goto gr_featureval_clone_cold;
      *(void **)pauVar3[1] = (void *)(__size + (long)pvVar6);
    }
    lVar7 = 0;
    *(long *)(*pauVar3 + 8) = (lVar1 - lVar2) + (long)pvVar6;
    if (lVar1 != lVar2) {
      do {
        *(undefined4 *)((long)pvVar6 + lVar7) = *(undefined4 *)(lVar2 + lVar7);
        lVar7 = lVar7 + 4;
      } while (lVar1 - lVar2 != lVar7);
    }
    *(long *)(pauVar3[1] + 8) = param_1[3];
  }
  return pauVar3;
}



void gr_featureval_destroy(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    free((void *)*param_1);
    free(param_1);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void gr_featureval_clone_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


