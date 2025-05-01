
int ssl_ticket_gen_key(long param_1,byte param_2)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  time_t tVar4;
  long in_FS_OFFSET;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  lVar1 = param_1 + (ulong)param_2 * 0x78;
  tVar4 = time((time_t *)0x0);
  uVar2 = *(undefined8 *)(param_1 + 0x100);
  *(time_t *)(lVar1 + 8) = tVar4;
  *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_1 + 0xf4);
  iVar3 = (**(code **)(param_1 + 0xf8))(uVar2,lVar1,4);
  if (iVar3 == 0) {
    iVar3 = (**(code **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0x100),local_58,0x20);
    if (iVar3 == 0) {
      iVar3 = 0;
      if (*(long *)(lVar1 + 0x18) != 0) {
        iVar3 = (*(byte *)(*(long *)(lVar1 + 0x18) + 9) & 0xf) << 6;
      }
      iVar3 = mbedtls_cipher_setkey(lVar1 + 0x18,local_58,iVar3,1);
      mbedtls_platform_zeroize(local_58,0x20);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl_ticket_update_keys(long param_1)

{
  long lVar1;
  time_t tVar2;
  undefined8 uVar3;
  char cVar4;
  
  lVar1 = param_1 + (ulong)*(byte *)(param_1 + 0xf0) * 0x78;
  if (*(int *)(lVar1 + 0x10) != 0) {
    tVar2 = time((time_t *)0x0);
    if ((tVar2 < *(long *)(lVar1 + 8)) ||
       ((ulong)*(uint *)(lVar1 + 0x10) <= (ulong)(tVar2 - *(long *)(lVar1 + 8)))) {
      cVar4 = '\x01' - *(char *)(param_1 + 0xf0);
      *(char *)(param_1 + 0xf0) = cVar4;
      uVar3 = ssl_ticket_gen_key(param_1,cVar4);
      return uVar3;
    }
  }
  return 0;
}



void mbedtls_ssl_ticket_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x20] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x108U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



int mbedtls_ssl_ticket_rotate
              (long param_1,undefined4 *param_2,ulong param_3,undefined8 param_4,long param_5,
              undefined4 param_6)

{
  undefined4 *puVar1;
  time_t tVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 1 - *(char *)(param_1 + 0xf0);
  puVar1 = (undefined4 *)(param_1 + (ulong)bVar4 * 0x78);
  if (*(long *)(puVar1 + 6) == 0) {
    if (param_3 < 4) {
      return -0x6100;
    }
    iVar3 = 0;
  }
  else {
    iVar3 = (*(byte *)(*(long *)(puVar1 + 6) + 9) & 0xf) << 6;
    if ((param_3 < 4) || ((ulong)(param_5 << 3) < (ulong)(long)iVar3)) {
      return -0x6100;
    }
  }
  iVar3 = mbedtls_cipher_setkey(puVar1 + 6,param_4,iVar3,1);
  if (iVar3 == 0) {
    *(byte *)(param_1 + 0xf0) = bVar4;
    *(undefined4 *)(param_1 + 0xf4) = param_6;
    *puVar1 = *param_2;
    tVar2 = time((time_t *)0x0);
    puVar1[4] = param_6;
    *(time_t *)(puVar1 + 2) = tVar2;
  }
  return iVar3;
}



undefined8
mbedtls_ssl_ticket_setup
          (long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  
  lVar1 = mbedtls_cipher_info_from_type(param_4);
  if (lVar1 != 0) {
    bVar3 = *(byte *)(lVar1 + 9) >> 4;
    if ((((bVar3 - 6 & 0xfd) == 0) || (bVar3 == 0xb)) && ((*(byte *)(lVar1 + 9) & 0xf) < 5)) {
      *(undefined8 *)(param_1 + 0xf8) = param_2;
      *(undefined8 *)(param_1 + 0x100) = param_3;
      *(undefined4 *)(param_1 + 0xf4) = param_5;
      uVar2 = mbedtls_cipher_setup(param_1 + 0x18,lVar1);
      if ((int)uVar2 == 0) {
        uVar2 = mbedtls_cipher_setup(param_1 + 0x90,lVar1);
        if ((int)uVar2 == 0) {
          uVar2 = ssl_ticket_gen_key(param_1,0);
          if ((int)uVar2 == 0) {
            uVar2 = ssl_ticket_gen_key(param_1,1);
            return uVar2;
          }
        }
      }
      return uVar2;
    }
  }
  return 0xffff8f00;
}



int mbedtls_ssl_ticket_write
              (long param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,long *param_5
              ,undefined4 *param_6)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  ulong local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_5 = 0;
  if ((param_1 == 0) || (*(long *)(param_1 + 0xf8) == 0)) {
    iVar2 = -0x7100;
  }
  else {
    iVar2 = -0x6a00;
    if (((param_3 <= param_4) && (0x21 < (long)param_4 - (long)param_3)) &&
       (iVar2 = ssl_ticket_update_keys(), iVar2 == 0)) {
      lVar4 = (ulong)*(byte *)(param_1 + 0xf0) * 0x78;
      *param_6 = *(undefined4 *)(param_1 + 0x10 + (ulong)*(byte *)(param_1 + 0xf0) * 0x78);
      *param_3 = *(undefined4 *)(param_1 + lVar4);
      iVar2 = (**(code **)(param_1 + 0xf8))(*(undefined8 *)(param_1 + 0x100),param_3 + 1,0xc);
      if (iVar2 == 0) {
        lVar1 = (long)param_3 + 0x12;
        iVar3 = mbedtls_ssl_session_save(param_2,lVar1,(long)param_4 - lVar1,&local_50);
        iVar2 = iVar3;
        if ((iVar3 == 0) && (local_50 < 0x10000)) {
          *(ushort *)(param_3 + 4) = (ushort)local_50 << 8 | (ushort)local_50 >> 8;
          iVar2 = mbedtls_cipher_auth_encrypt_ext
                            (param_1 + 0x18 + lVar4,param_3 + 1,0xc,param_3,0x12,lVar1,local_50,
                             lVar1,(long)param_4 - lVar1,&local_48,0x10);
          if (iVar2 == 0) {
            if (local_50 + 0x10 == local_48) {
              *param_5 = local_48 + 0x12;
              iVar2 = iVar3;
            }
            else {
              iVar2 = -0x6c00;
            }
          }
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int mbedtls_ssl_ticket_parse(int *param_1,long param_2,int *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_4c;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 == (int *)0x0) || (*(long *)(param_1 + 0x3e) == 0)) || (param_4 < 0x22)) {
LAB_001005d0:
    iVar2 = -0x7100;
  }
  else {
    iVar2 = ssl_ticket_update_keys();
    if (iVar2 != 0) goto LAB_001005a1;
    uVar5 = (ulong)(ushort)(*(ushort *)(param_3 + 4) << 8 | *(ushort *)(param_3 + 4) >> 8);
    if (uVar5 + 0x22 != param_4) goto LAB_001005d0;
    if (*param_1 == *param_3) {
      local_4c = 0;
      lVar4 = 0x18;
LAB_001005ed:
      lVar3 = (long)param_3 + 0x12;
      iVar2 = mbedtls_cipher_auth_decrypt_ext
                        (lVar4 + (long)param_1,param_3 + 1,0xc,param_3,0x12,lVar3,uVar5 + 0x10,lVar3
                         ,uVar5,&local_48,0x10);
      if (iVar2 != 0) {
        if (iVar2 == -0x6300) {
          iVar2 = -0x7180;
        }
        goto LAB_001005a1;
      }
      if (local_48 != uVar5) {
        iVar2 = -0x6c00;
        goto LAB_001005a1;
      }
      iVar2 = mbedtls_ssl_session_load(param_2,lVar3,uVar5);
      if (iVar2 != 0) goto LAB_001005a1;
      uVar1 = param_1[(long)local_4c * 0x1e + 4];
      if ((param_2 == 0) || (*(char *)(param_2 + 2) != '\x01')) goto LAB_001005d0;
      lVar4 = *(long *)(param_2 + 0x98);
      lVar3 = mbedtls_ms_time();
      if ((ulong)(lVar3 - lVar4) <= (ulong)uVar1 * 1000) goto LAB_001005a1;
    }
    else if (*param_3 == param_1[0x1e]) {
      local_4c = 1;
      lVar4 = 0x90;
      goto LAB_001005ed;
    }
    iVar2 = -0x6d80;
  }
LAB_001005a1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void mbedtls_ssl_ticket_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_cipher_free(param_1 + 0x18);
    mbedtls_cipher_free(param_1 + 0x90);
    mbedtls_platform_zeroize(param_1,0x108);
    return;
  }
  return;
}


