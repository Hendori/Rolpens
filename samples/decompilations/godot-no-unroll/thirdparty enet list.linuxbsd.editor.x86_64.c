
void enet_list_clear(long param_1)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  return;
}



long * enet_list_insert(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 8);
  *param_2 = param_1;
  param_2[1] = (long)plVar1;
  *plVar1 = (long)param_2;
  *(long **)(param_1 + 8) = param_2;
  return param_2;
}



long * enet_list_remove(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[1];
  lVar2 = *param_1;
  *plVar1 = lVar2;
  *(long **)(lVar2 + 8) = plVar1;
  return param_1;
}



void enet_list_move(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *param_3;
  plVar2 = *(long **)(param_2 + 8);
  *plVar2 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  plVar2 = *(long **)(param_1 + 8);
  *(long **)(param_2 + 8) = plVar2;
  *param_3 = param_1;
  *plVar2 = param_2;
  *(long **)(param_1 + 8) = param_3;
  return;
}



long enet_list_size(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  for (puVar1 = (undefined8 *)*param_1; puVar1 != param_1; puVar1 = (undefined8 *)*puVar1) {
    lVar2 = lVar2 + 1;
  }
  return lVar2;
}


