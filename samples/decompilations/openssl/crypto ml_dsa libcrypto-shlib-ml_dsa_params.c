
undefined1 * ossl_ml_dsa_params_get(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = ml_dsa_params;
  do {
    if ((int)*(long *)((long)puVar1 + 8) == param_1) {
      return puVar1;
    }
    puVar1 = (undefined1 *)((long)puVar1 + 0x58);
  } while (*(long *)puVar1 != 0);
  return (undefined1 *)(long *)0x0;
}


