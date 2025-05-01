
void wslay_queue_init(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = param_1;
  return;
}



void wslay_queue_deinit(void)

{
  return;
}



void wslay_queue_push(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *param_2 = 0;
  *puVar1 = param_2;
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}



void wslay_queue_push_front(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_2 = lVar1;
  *param_1 = (long)param_2;
  if (lVar1 != 0) {
    return;
  }
  param_1[1] = (long)param_2;
  return;
}



void wslay_queue_pop(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  *param_1 = lVar1;
  if (lVar1 != 0) {
    return;
  }
  param_1[1] = (long)param_1;
  return;
}



undefined8 wslay_queue_top(undefined8 *param_1)

{
  return *param_1;
}



undefined8 wslay_queue_tail(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



bool wslay_queue_empty(long *param_1)

{
  return *param_1 == 0;
}


