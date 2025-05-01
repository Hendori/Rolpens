
undefined8 ossl_quic_gen_rand_conn_id(undefined8 param_1,ulong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  
  if (0x14 < param_2) {
    return 0;
  }
  *param_3 = (char)param_2;
  uVar1 = RAND_bytes_ex(param_1,param_3 + 1,param_2,(int)param_2 * 8);
  if ((int)uVar1 == 1) {
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_types.c",0x17,"ossl_quic_gen_rand_conn_id");
  ERR_set_error(0x14,0x80024,0);
  *param_3 = 0;
  return 0;
}


