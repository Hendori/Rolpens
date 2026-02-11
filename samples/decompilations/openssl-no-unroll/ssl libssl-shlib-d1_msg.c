
undefined8
dtls1_write_app_data_bytes
          (int *param_1,undefined1 param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    iVar1 = SSL_in_init();
    if ((iVar1 != 0) && (iVar1 = ossl_statem_get_in_handshake(param_1), iVar1 == 0)) {
      uVar2 = (**(code **)(param_1 + 0x1c))(param_1);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if ((int)uVar2 == 0) {
        ERR_new();
        ERR_set_debug("ssl/d1_msg.c",0x1b,"dtls1_write_app_data_bytes");
        ERR_set_error(0x14,0xe5,0);
        return 0xffffffff;
      }
    }
    if (param_4 < 0x4001) {
      uVar2 = dtls1_write_bytes(param_1,param_2,param_3,param_4,param_5);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("ssl/d1_msg.c",0x21,"dtls1_write_app_data_bytes");
    ERR_set_error(0x14,0x14e,0);
  }
  return 0xffffffff;
}



int dtls1_dispatch_alert(int *param_1)

{
  int iVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  undefined1 local_30 [14];
  undefined2 local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*param_1 == 0) {
      param_1[0x71] = 0;
      local_22 = (undefined2)param_1[0x72];
      iVar1 = do_dtls1_write(param_1,0x15,&local_22,2,local_30);
      if (iVar1 < 1) {
        param_1[0x71] = 1;
      }
      else {
        BIO_ctrl(*(BIO **)(param_1 + 0x16),0xb,0,(void *)0x0);
        if (*(code **)(param_1 + 0x13e) != (code *)0x0) {
          (**(code **)(param_1 + 0x13e))
                    (1,param_1[0x12],0x15,param_1 + 0x72,2,param_1,*(undefined8 *)(param_1 + 0x140))
          ;
        }
        pcVar2 = *(code **)(param_1 + 600);
        if ((pcVar2 != (code *)0x0) ||
           (pcVar2 = *(code **)(*(long *)(param_1 + 2) + 0x120), pcVar2 != (code *)0x0)) {
          (*pcVar2)(param_1,0x4008,
                    *(ushort *)(param_1 + 0x72) << 8 | *(ushort *)(param_1 + 0x72) >> 8);
        }
      }
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


