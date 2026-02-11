
void rpl_mbrlen(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  if (param_3 == (undefined8 *)0x0) {
    param_3 = &internal_state;
  }
  rpl_mbrtowc(0,param_1,param_2,param_3);
  return;
}


