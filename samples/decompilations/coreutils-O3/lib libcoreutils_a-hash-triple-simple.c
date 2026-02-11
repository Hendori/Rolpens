
ulong triple_hash(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = hash_pjw(*param_1);
  return (uVar1 ^ param_1[1]) % param_2;
}



bool triple_compare_ino_str(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  if (param_1[2] == param_2[2] && param_1[1] == param_2[1]) {
    iVar1 = strcmp((char *)*param_1,(char *)*param_2);
    return iVar1 == 0;
  }
  return false;
}



void triple_free(undefined8 *param_1)

{
  free((void *)*param_1);
  free(param_1);
  return;
}


