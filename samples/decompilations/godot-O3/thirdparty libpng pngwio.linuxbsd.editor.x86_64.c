
void png_default_write_data(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  
  if (param_1 != 0) {
    sVar1 = fwrite(param_2,1,param_3,*(FILE **)(param_1 + 0x108));
    if (param_3 != sVar1) {
      png_error(param_1,"Write Error");
      if (param_1 != 0) {
        fflush(*(FILE **)(param_1 + 0x108));
        return;
      }
      return;
    }
  }
  return;
}



void png_default_flush(long param_1)

{
  if (param_1 != 0) {
    fflush(*(FILE **)(param_1 + 0x108));
    return;
  }
  return;
}



void png_write_data(long param_1)

{
  if (*(code **)(param_1 + 0xf8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0xf8))();
    return;
  }
  png_error(param_1,"Call to NULL write function");
  if (*(code **)(param_1 + 0x290) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x290))();
    return;
  }
  return;
}



void png_flush(long param_1)

{
  if (*(code **)(param_1 + 0x290) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x290))();
    return;
  }
  return;
}



void png_set_write_fn(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x108) = param_2;
    if (param_3 == 0) {
      param_3 = 0x100000;
    }
    if (param_4 == (code *)0x0) {
      param_4 = png_default_flush;
    }
    *(long *)(param_1 + 0xf8) = param_3;
    *(code **)(param_1 + 0x290) = param_4;
    if (*(long *)(param_1 + 0x100) != 0) {
      *(undefined8 *)(param_1 + 0x100) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
      return;
    }
  }
  return;
}


