
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 enet_initialize_with_callbacks(uint param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (0x102ff < param_1) {
    lVar1 = param_2[1];
    if ((undefined *)*param_2 == (undefined *)0x0) {
      puVar2 = callbacks;
      lVar3 = _DAT_001000c8;
      if (lVar1 == 0) goto LAB_0010002e;
    }
    else {
      puVar2 = (undefined *)*param_2;
      lVar3 = lVar1;
      if (lVar1 != 0) {
LAB_0010002e:
        _DAT_001000c8 = lVar3;
        callbacks = puVar2;
        if ((undefined *)param_2[2] != (undefined *)0x0) {
          PTR_abort_001000d0 = (undefined *)param_2[2];
        }
        uVar4 = enet_initialize();
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}



undefined8 enet_linked_version(void)

{
  return 0x10312;
}



void enet_malloc(void)

{
  long lVar1;
  
  lVar1 = (*(code *)callbacks)();
  if (lVar1 != 0) {
    return;
  }
  (*(code *)PTR_abort_001000d0)();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enet_free(void)

{
  (*_DAT_001000c8)();
  return;
}


