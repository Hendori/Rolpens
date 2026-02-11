
bool ossl_encode_der_length(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (0xffff < param_2) {
    return false;
  }
  if (param_2 < 0x100) {
    if ((0x7f < param_2) && (iVar1 = WPACKET_put_bytes__(param_1,0x81,1), iVar1 == 0)) {
      return false;
    }
    uVar2 = 1;
  }
  else {
    iVar1 = WPACKET_put_bytes__(param_1,0x82,1);
    uVar2 = 2;
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = WPACKET_put_bytes__(param_1,param_2,uVar2);
  return iVar1 != 0;
}



bool ossl_encode_der_integer(undefined8 param_1,BIGNUM *param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = BN_is_negative(param_2);
  if (iVar1 == 0) {
    iVar1 = BN_num_bits(param_2);
    iVar2 = WPACKET_start_sub_packet(param_1);
    if (iVar2 != 0) {
      iVar2 = WPACKET_put_bytes__(param_1,2,1);
      if (iVar2 != 0) {
        if (iVar1 < 0) {
          iVar1 = iVar1 + 7;
        }
        iVar2 = (iVar1 >> 3) + 1;
        iVar1 = ossl_encode_der_length(param_1,(long)iVar2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_allocate_bytes(param_1,(long)iVar2,&local_38);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_1);
            if (iVar1 != 0) {
              bVar3 = true;
              if (local_38 != 0) {
                iVar1 = BN_bn2binpad(param_2,local_38,iVar2);
                bVar3 = iVar2 == iVar1;
              }
              goto LAB_001000c2;
            }
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_001000c2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_encode_der_dsa_sig(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  undefined8 local_70;
  undefined1 local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_is_null_buf();
  iVar2 = WPACKET_start_sub_packet(param_1);
  if (iVar2 != 0) {
    if (iVar1 == 0) {
      iVar2 = WPACKET_init_null(local_68,0);
      if (iVar2 != 0) {
        iVar2 = ossl_encode_der_integer(local_68,param_2);
        if (((iVar2 != 0) && (iVar2 = ossl_encode_der_integer(local_68,param_3), iVar2 != 0)) &&
           ((iVar2 = WPACKET_get_length(local_68,&local_70), iVar2 != 0 &&
            (iVar2 = WPACKET_finish(local_68), iVar2 != 0)))) goto LAB_00100267;
        WPACKET_cleanup(local_68);
      }
    }
    else {
      iVar2 = ossl_encode_der_integer(param_1,param_2);
      if (((iVar2 != 0) && (iVar2 = ossl_encode_der_integer(param_1,param_3), iVar2 != 0)) &&
         (iVar2 = WPACKET_get_length(param_1,&local_70), iVar2 != 0)) {
LAB_00100267:
        iVar2 = WPACKET_put_bytes__(param_1,0x30,1);
        if (((iVar2 != 0) && (iVar2 = ossl_encode_der_length(param_1,local_70), iVar2 != 0)) &&
           ((iVar1 != 0 ||
            ((iVar1 = ossl_encode_der_integer(param_1,param_2), iVar1 != 0 &&
             (iVar1 = ossl_encode_der_integer(param_1,param_3), iVar1 != 0)))))) {
          iVar1 = WPACKET_close(param_1);
          bVar3 = iVar1 != 0;
          goto LAB_00100212;
        }
      }
    }
  }
  bVar3 = false;
LAB_00100212:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}



undefined8 ossl_decode_der_length(long *param_1,long *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  lVar3 = param_1[1];
  if (lVar3 != 0) {
    pbVar4 = (byte *)*param_1;
    uVar5 = lVar3 - 1;
    bVar2 = *pbVar4;
    uVar6 = (ulong)bVar2;
    pbVar1 = pbVar4 + 1;
    param_1[1] = uVar5;
    *param_1 = (long)pbVar1;
    if ((char)bVar2 < '\0') {
      if (bVar2 == 0x81) {
        if (uVar5 != 0) {
          uVar5 = (ulong)pbVar4[1];
          if (uVar5 <= lVar3 - 2U) {
            param_1[1] = (lVar3 - 2U) - uVar5;
            *param_1 = (long)(pbVar4 + 2 + uVar5);
            *param_2 = (long)(pbVar4 + 2);
            param_2[1] = uVar5;
            return 1;
          }
        }
      }
      else if ((bVar2 == 0x82) && (1 < uVar5)) {
        uVar5 = (ulong)(ushort)(*(ushort *)(pbVar4 + 1) << 8 | *(ushort *)(pbVar4 + 1) >> 8);
        if (uVar5 <= lVar3 - 3U) {
          param_1[1] = (lVar3 - 3U) - uVar5;
          *param_1 = (long)(pbVar4 + 3 + uVar5);
          *param_2 = (long)(pbVar4 + 3);
          param_2[1] = uVar5;
          return 1;
        }
      }
    }
    else if (uVar6 <= uVar5) {
      *param_2 = (long)pbVar1;
      param_2[1] = uVar6;
      param_1[1] = param_1[1] - uVar6;
      *param_1 = (long)(pbVar1 + uVar6);
      return 1;
    }
  }
  return 0;
}



bool ossl_decode_der_integer(undefined8 *param_1,BIGNUM *param_2)

{
  char cVar1;
  int iVar2;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  bool bVar4;
  uchar *local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] != 0) {
    cVar1 = *(char *)*param_1;
    param_1[1] = param_1[1] + -1;
    *param_1 = (char *)*param_1 + 1;
    if (cVar1 == '\x02') {
      iVar2 = ossl_decode_der_length(param_1,&local_28);
      if (iVar2 != 0) {
        if (((local_20 != 0) && (-1 < (char)*local_28)) &&
           ((*local_28 != '\0' || ((local_20 == 1 || ((char)local_28[1] < '\0')))))) {
          pBVar3 = BN_bin2bn(local_28,(int)local_20,param_2);
          bVar4 = pBVar3 != (BIGNUM *)0x0;
          goto LAB_0010043c;
        }
      }
    }
  }
  bVar4 = false;
LAB_0010043c:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ossl_decode_der_dsa_sig(undefined8 param_1,undefined8 param_2,long *param_3,long param_4)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  char *local_58;
  long local_50;
  undefined1 local_48 [8];
  long local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)*param_3;
  if (-1 < param_4) {
    local_58 = pcVar1;
    local_50 = param_4;
    if (param_4 != 0) {
      local_50 = param_4 + -1;
      local_58 = pcVar1 + 1;
      if (*pcVar1 == '0') {
        iVar2 = ossl_decode_der_length(&local_58,local_48);
        if (iVar2 != 0) {
          iVar2 = ossl_decode_der_integer(local_48,param_1);
          if (iVar2 != 0) {
            iVar2 = ossl_decode_der_integer(local_48,param_2);
            if ((iVar2 != 0) && (local_40 == 0)) {
              lVar3 = (long)local_58 - *param_3;
              *param_3 = (long)local_58;
              goto LAB_001004ed;
            }
          }
        }
      }
    }
  }
  lVar3 = 0;
LAB_001004ed:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


