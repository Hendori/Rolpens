
bool int_end_context(undefined8 param_1,uint param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0) {
LAB_001000a0:
    bVar2 = true;
  }
  else {
    if ((int)param_2 < 0x1f) {
      iVar1 = WPACKET_get_total_written(param_1,&local_30);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_1);
        if (iVar1 != 0) {
          iVar1 = WPACKET_get_total_written(param_1,&local_28);
          if (iVar1 != 0) {
            if (local_30 != local_28) {
              iVar1 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1);
              bVar2 = iVar1 != 0;
              goto LAB_00100038;
            }
            goto LAB_001000a0;
          }
        }
      }
    }
    bVar2 = false;
  }
LAB_00100038:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void int_put_bytes_uint32(undefined8 param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (*param_2 != 0) {
    lVar3 = 0;
    uVar2 = *param_2;
    do {
      uVar1 = uVar2;
      lVar3 = lVar3 + 1;
      uVar2 = uVar1 >> 8;
    } while (uVar2 != 0);
    *param_3 = uVar1;
    lVar4 = 1;
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
    WPACKET_put_bytes__(param_1,*param_2,lVar4);
    return;
  }
  WPACKET_put_bytes__(param_1,0,1);
  return;
}



bool int_der_w_integer(undefined8 param_1,int param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  if (param_2 < 0) {
LAB_00100160:
    iVar1 = WPACKET_start_sub_packet(param_1);
    if (iVar1 != 0) {
      iVar1 = (*param_3)(param_1,param_4,&local_34);
      if (iVar1 != 0) {
        if ((local_34 & 0x80) != 0) {
          iVar1 = WPACKET_put_bytes__(param_1,0,1);
          if (iVar1 == 0) goto LAB_0010013f;
        }
        iVar1 = WPACKET_close(param_1);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(param_1,2,1);
          if (iVar1 != 0) {
            iVar1 = int_end_context(param_1,param_2);
            bVar2 = iVar1 != 0;
            goto LAB_00100141;
          }
        }
      }
    }
  }
  else if (param_2 < 0x1f) {
    iVar1 = WPACKET_start_sub_packet();
    if (iVar1 != 0) goto LAB_00100160;
  }
LAB_0010013f:
  bVar2 = false;
LAB_00100141:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 int_put_bytes_bn(undefined8 param_1,BIGNUM *param_2,uint *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  iVar2 = BN_num_bits(param_2);
  iVar5 = iVar2 + 0xe;
  if (-1 < iVar2 + 7) {
    iVar5 = iVar2 + 7;
  }
  lVar3 = bn_get_words(param_2);
  uVar1 = (long)(iVar5 >> 3) - 1;
  *param_3 = (uint)(*(ulong *)(lVar3 + (uVar1 & 0xfffffffffffffff8)) >>
                   (sbyte)(((uint)uVar1 & 7) << 3)) & 0xff;
  uVar4 = WPACKET_allocate_bytes(param_1,(long)(iVar5 >> 3),&local_38);
  if ((int)uVar4 != 0) {
    if (local_38 != (uchar *)0x0) {
      BN_bn2bin(param_2,local_38);
    }
    uVar4 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_DER_w_precompiled(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (0x1e < param_2) {
      return false;
    }
    iVar1 = WPACKET_start_sub_packet();
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = WPACKET_memcpy(param_1,param_3,param_4);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = int_end_context(param_1,param_2);
  return iVar1 != 0;
}



bool ossl_DER_w_boolean(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  if (((param_2 < 0) || ((param_2 < 0x1f && (iVar1 = WPACKET_start_sub_packet(), iVar1 != 0)))) &&
     ((iVar1 = WPACKET_start_sub_packet(param_1), iVar1 != 0 &&
      ((((param_3 == 0 || (iVar1 = WPACKET_put_bytes__(param_1,0xff,1), iVar1 != 0)) &&
        (iVar1 = WPACKET_close(param_1), iVar1 == 0)) &&
       (iVar1 = WPACKET_put_bytes__(param_1,1,1), iVar1 == 0)))))) {
    iVar1 = int_end_context(param_1,param_2);
    bVar2 = iVar1 != 0;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



bool ossl_DER_w_octet_string(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((((param_2 < 0) || ((param_2 < 0x1f && (iVar1 = WPACKET_start_sub_packet(), iVar1 != 0)))) &&
      (iVar1 = WPACKET_start_sub_packet(param_1), iVar1 != 0)) &&
     (((iVar1 = WPACKET_memcpy(param_1,param_3,param_4), iVar1 != 0 &&
       (iVar1 = WPACKET_close(param_1), iVar1 != 0)) &&
      (iVar1 = WPACKET_put_bytes__(param_1,4,1), iVar1 != 0)))) {
    iVar1 = int_end_context(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}



void ossl_DER_w_octet_string_uint32(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)((long)&local_14 + 3);
    do {
      *puVar1 = (char)param_3;
      param_3 = param_3 >> 8;
      puVar1 = puVar1 + -1;
    } while (param_3 != 0);
  }
  ossl_DER_w_octet_string(param_1,param_2,&local_14,4);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_DER_w_uint32(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  int_der_w_integer(param_1,param_2,int_put_bytes_uint32,local_c);
  return;
}



undefined8 ossl_DER_w_bn(undefined8 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = BN_is_negative(param_3);
  if (iVar1 != 0) {
    return 0;
  }
  iVar1 = BN_is_zero(param_3);
  if (iVar1 == 0) {
    uVar2 = int_der_w_integer(param_1,param_2,int_put_bytes_bn,param_3);
    return uVar2;
  }
  uVar2 = ossl_DER_w_uint32(param_1,param_2,0);
  return uVar2;
}



bool ossl_DER_w_null(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if ((((param_2 < 0) || ((param_2 < 0x1f && (iVar1 = WPACKET_start_sub_packet(), iVar1 != 0)))) &&
      (iVar1 = WPACKET_start_sub_packet(param_1), iVar1 != 0)) &&
     ((iVar1 = WPACKET_close(param_1), iVar1 != 0 &&
      (iVar1 = WPACKET_put_bytes__(param_1,5,1), iVar1 != 0)))) {
    iVar1 = int_end_context(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}



bool ossl_DER_w_begin_sequence(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (param_2 < 0x1f) {
      iVar1 = WPACKET_start_sub_packet();
      if (iVar1 != 0) goto LAB_001005fa;
    }
    return false;
  }
LAB_001005fa:
  iVar1 = WPACKET_start_sub_packet(param_1);
  return iVar1 != 0;
}



bool ossl_DER_w_end_sequence(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_get_total_written(param_1,&local_30);
  if (((iVar1 != 0) && (iVar1 = WPACKET_close(param_1), iVar1 != 0)) &&
     (iVar1 = WPACKET_get_total_written(param_1,&local_28), iVar1 != 0)) {
    if (local_30 == local_28) {
      iVar1 = WPACKET_set_flags(param_1,2);
    }
    else {
      iVar1 = WPACKET_put_bytes__(param_1,0x30,1);
    }
    if (iVar1 != 0) {
      iVar1 = int_end_context(param_1,param_2);
      bVar2 = iVar1 != 0;
      goto LAB_0010064f;
    }
  }
  bVar2 = false;
LAB_0010064f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


