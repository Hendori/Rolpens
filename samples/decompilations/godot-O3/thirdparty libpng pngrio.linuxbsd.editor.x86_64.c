
void png_default_read_data(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  long extraout_RDX;
  long lVar2;
  char *pcVar3;
  
  if (param_1 != 0) {
    sVar1 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x108));
    if (param_3 != sVar1) {
      png_error(param_1,"Read Error");
      if (*(code **)(param_1 + 0x100) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x100))();
        return;
      }
      pcVar3 = "Call to NULL read function";
      png_error();
      if (param_1 != 0) {
        lVar2 = extraout_RDX;
        if (extraout_RDX == 0) {
          lVar2 = 0x100000;
        }
        *(char **)(param_1 + 0x108) = pcVar3;
        *(long *)(param_1 + 0x100) = lVar2;
        if (*(long *)(param_1 + 0xf8) != 0) {
          *(undefined8 *)(param_1 + 0xf8) = 0;
          png_warning();
        }
        *(undefined8 *)(param_1 + 0x290) = 0;
        return;
      }
      return;
    }
  }
  return;
}



void png_read_data(long param_1)

{
  long extraout_RDX;
  long lVar1;
  char *pcVar2;
  
  if (*(code **)(param_1 + 0x100) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x100))();
    return;
  }
  pcVar2 = "Call to NULL read function";
  png_error();
  if (param_1 != 0) {
    lVar1 = extraout_RDX;
    if (extraout_RDX == 0) {
      lVar1 = 0x100000;
    }
    *(char **)(param_1 + 0x108) = pcVar2;
    *(long *)(param_1 + 0x100) = lVar1;
    if (*(long *)(param_1 + 0xf8) != 0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      png_warning();
    }
    *(undefined8 *)(param_1 + 0x290) = 0;
    return;
  }
  return;
}



void png_set_read_fn(long param_1,undefined8 param_2,long param_3)

{
  if (param_1 != 0) {
    if (param_3 == 0) {
      param_3 = 0x100000;
    }
    *(undefined8 *)(param_1 + 0x108) = param_2;
    *(long *)(param_1 + 0x100) = param_3;
    if (*(long *)(param_1 + 0xf8) != 0) {
      *(undefined8 *)(param_1 + 0xf8) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
    *(undefined8 *)(param_1 + 0x290) = 0;
    return;
  }
  return;
}


