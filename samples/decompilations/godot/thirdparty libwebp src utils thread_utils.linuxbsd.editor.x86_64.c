
bool Sync(long param_1)

{
  return *(int *)(param_1 + 0x28) == 0;
}



undefined8 Reset(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 8) == 0) {
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return 1;
}



void Execute(long param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)(iVar1 == 0);
    return;
  }
  return;
}



void End(long param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void Init(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  return;
}



void Launch(long param_1)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    iVar1 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | (uint)(iVar1 == 0);
    return;
  }
  return;
}



undefined8 WebPSetWorkerInterface(long *param_1)

{
  if ((((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     (((param_1[2] != 0 && (param_1[3] != 0)) && ((param_1[4] != 0 && (param_1[5] != 0)))))) {
    g_worker_interface._0_8_ = *param_1;
    g_worker_interface._8_8_ = param_1[1];
    g_worker_interface._16_8_ = param_1[2];
    g_worker_interface._24_8_ = param_1[3];
    g_worker_interface._32_8_ = param_1[4];
    g_worker_interface._40_8_ = param_1[5];
    return 1;
  }
  return 0;
}



undefined1 * WebPGetWorkerInterface(void)

{
  return g_worker_interface;
}


