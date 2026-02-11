
undefined8
ossl_quic_obj_init(long param_1,long param_2,uint param_3,byte *param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((((*(byte *)(param_1 + 0x70) & 1) == 0) && ((param_3 & 0x80) != 0)) &&
     ((param_4 == (byte *)0x0 || (((*param_4 & 0x80) != 0 && (param_5 == 0)))))) {
    iVar1 = ossl_ssl_init(param_1,param_2,*(undefined8 *)(param_2 + 8),param_3);
    if (iVar1 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x6d0);
      *(byte **)(param_1 + 0x40) = param_4;
      *(long *)(param_1 + 0x58) = param_5;
      *(undefined8 *)(param_1 + 0x68) = uVar3;
      *(long *)(param_1 + 0x60) = param_6;
      *(byte *)(param_1 + 0x70) =
           (param_6 != 0) << 2 | (param_5 != 0) * '\x02' | *(byte *)(param_1 + 0x70) & 0xe1;
      lVar2 = param_1;
      do {
        if ((*(byte *)(lVar2 + 0x70) & 2) != 0) {
          *(long *)(param_1 + 0x48) = lVar2;
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar2 + 0x58);
          lVar2 = param_1;
          goto LAB_001000f9;
        }
      } while (((param_1 == lVar2) || ((*(byte *)(lVar2 + 0x70) & 1) != 0)) &&
              (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0));
    }
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xf9;
  }
  return 0;
  while (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0) {
LAB_001000f9:
    if ((*(byte *)(lVar2 + 0x70) & 4) != 0) {
      *(long *)(param_1 + 0x50) = lVar2;
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      goto LAB_00100107;
    }
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar3 = 0;
LAB_00100107:
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 1;
  return 1;
}



int * ossl_quic_obj_get0_handshake_layer(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)0x0;
  if (((*param_1 == 0x80) && (piVar1 = *(int **)(param_1 + 0x1e), piVar1 != (int *)0x0)) &&
     (*piVar1 != 0)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



bool ossl_quic_obj_can_support_blocking(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = ossl_quic_engine_get0_reactor(*(undefined8 *)(param_1 + 0x58));
  bVar1 = false;
  if ((*(byte *)(param_1 + 0x68) & 0x18) != 0) {
    iVar2 = ossl_quic_reactor_can_poll_r(uVar3);
    bVar1 = true;
    if (iVar2 == 0) {
      iVar2 = ossl_quic_reactor_can_poll_w(uVar3);
      return iVar2 != 0;
    }
  }
  return bVar1;
}



bool ossl_quic_obj_desires_blocking(long param_1)

{
  byte bVar1;
  
  do {
    bVar1 = *(byte *)(param_1 + 0x70) >> 3;
    if ((bVar1 & 3) != 0) {
      return (bVar1 & 3) != 1;
    }
    param_1 = *(long *)(param_1 + 0x40);
  } while (param_1 != 0);
  return true;
}



undefined8 ossl_quic_obj_blocking(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_quic_obj_desires_blocking();
  if (iVar1 == 0) {
    return 0;
  }
  ossl_quic_engine_update_poll_descriptors(*(undefined8 *)(param_1 + 0x58),0);
  uVar2 = ossl_quic_obj_can_support_blocking(param_1);
  return uVar2;
}



void ossl_quic_obj_set_blocking_mode(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) & 0xe7 | (param_2 & 3) * '\b';
  return;
}


