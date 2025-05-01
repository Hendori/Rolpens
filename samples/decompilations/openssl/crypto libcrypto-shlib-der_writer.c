
undefined8
ossl_DER_w_precompiled(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0) {
    iVar1 = WPACKET_memcpy(param_1,param_3,param_4);
joined_r0x001000ed:
    if (iVar1 != 0) {
LAB_001000d0:
      uVar2 = 1;
      goto LAB_00100041;
    }
  }
  else if (((((int)param_2 < 0x1f) && (iVar1 = WPACKET_start_sub_packet(), iVar1 != 0)) &&
           (iVar1 = WPACKET_memcpy(param_1,param_3,param_4), iVar1 != 0)) &&
          (((iVar1 = WPACKET_get_total_written(param_1,&local_40), iVar1 != 0 &&
            (iVar1 = WPACKET_close(param_1), iVar1 != 0)) &&
           (iVar1 = WPACKET_get_total_written(param_1,&local_38), iVar1 != 0)))) {
    if (local_40 != local_38) {
      iVar1 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1);
      goto joined_r0x001000ed;
    }
    goto LAB_001000d0;
  }
  uVar2 = 0;
LAB_00100041:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_DER_w_boolean(undefined8 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((((int)param_2 < 0) ||
       (((int)param_2 < 0x1f && (iVar1 = WPACKET_start_sub_packet(), iVar1 != 0)))) &&
      (iVar1 = WPACKET_start_sub_packet(param_1), iVar1 != 0)) &&
     (((((param_3 == 0 || (iVar1 = WPACKET_put_bytes__(param_1,0xff,1), iVar1 != 0)) &&
        (iVar1 = WPACKET_close(param_1), iVar1 == 0)) &&
       (iVar1 = WPACKET_put_bytes__(param_1,1,1), iVar1 == 0)) &&
      (((int)param_2 < 0 ||
       (((iVar1 = WPACKET_get_total_written(param_1,&local_30), iVar1 != 0 &&
         (iVar1 = WPACKET_close(param_1), iVar1 != 0)) &&
        ((iVar1 = WPACKET_get_total_written(param_1,&local_28), iVar1 != 0 &&
         ((local_30 == local_28 ||
          (iVar1 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1), iVar1 != 0)))))))))))
     ) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8
ossl_DER_w_octet_string(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0) {
LAB_00100280:
    iVar1 = WPACKET_start_sub_packet(param_1);
    if (iVar1 != 0) {
      iVar1 = WPACKET_memcpy(param_1,param_3,param_4);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_1);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(param_1,4,1);
          if (iVar1 != 0) {
            if ((int)param_2 < 0) goto LAB_00100321;
            iVar1 = WPACKET_get_total_written(param_1,&local_40);
            if (iVar1 != 0) {
              iVar1 = WPACKET_close(param_1);
              if (iVar1 != 0) {
                iVar1 = WPACKET_get_total_written(param_1,&local_38);
                if (iVar1 != 0) {
                  if (local_40 != local_38) {
                    iVar1 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1);
                    if (iVar1 == 0) goto LAB_0010025b;
                  }
LAB_00100321:
                  uVar2 = 1;
                  goto LAB_0010025d;
                }
              }
            }
          }
        }
      }
    }
  }
  else if ((int)param_2 < 0x1f) {
    iVar1 = WPACKET_start_sub_packet();
    if (iVar1 != 0) goto LAB_00100280;
  }
LAB_0010025b:
  uVar2 = 0;
LAB_0010025d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



undefined8 ossl_DER_w_uint32(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0) {
LAB_00100400:
    iVar1 = WPACKET_start_sub_packet(param_1);
    if (iVar1 != 0) {
      if (param_3 == 0) {
LAB_00100445:
        iVar1 = WPACKET_put_bytes__(param_1,0,1);
        if (iVar1 != 0) {
LAB_00100458:
          iVar1 = WPACKET_close(param_1);
          if (iVar1 != 0) {
            iVar1 = WPACKET_put_bytes__(param_1,2,1);
            if (iVar1 != 0) {
              if ((int)param_2 < 0) goto LAB_001004ec;
              iVar1 = WPACKET_get_total_written(param_1,&local_40);
              if (iVar1 != 0) {
                iVar1 = WPACKET_close(param_1);
                if (iVar1 != 0) {
                  iVar1 = WPACKET_get_total_written(param_1,&local_38);
                  if (iVar1 != 0) {
                    if (local_40 != local_38) {
                      iVar1 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1);
                      if (iVar1 == 0) goto LAB_001003d8;
                    }
LAB_001004ec:
                    uVar2 = 1;
                    goto LAB_001003da;
                  }
                }
              }
            }
          }
        }
      }
      else {
        lVar3 = 0;
        uVar5 = param_3;
        do {
          uVar4 = uVar5;
          lVar3 = lVar3 + 1;
          uVar5 = uVar4 >> 8;
        } while (uVar5 != 0);
        if (lVar3 == 0) {
          lVar3 = 1;
        }
        iVar1 = WPACKET_put_bytes__(param_1,param_3,lVar3);
        if (iVar1 != 0) {
          if ((uVar4 & 0x80) != 0) goto LAB_00100445;
          goto LAB_00100458;
        }
      }
    }
  }
  else if ((int)param_2 < 0x1f) {
    iVar1 = WPACKET_start_sub_packet();
    if (iVar1 != 0) goto LAB_00100400;
  }
LAB_001003d8:
  uVar2 = 0;
LAB_001003da:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_DER_w_bn(undefined8 param_1,uint param_2,BIGNUM *param_3)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == (BIGNUM *)0x0) {
LAB_0010053b:
    uVar6 = 0;
  }
  else {
    iVar3 = BN_is_negative(param_3);
    if (iVar3 != 0) goto LAB_0010053b;
    iVar3 = BN_is_zero(param_3);
    if (iVar3 != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = ossl_DER_w_uint32(param_1,param_2,0);
        return uVar6;
      }
      goto LAB_001006fa;
    }
    if (-1 < (int)param_2) {
      if ((int)param_2 < 0x1f) {
        iVar3 = WPACKET_start_sub_packet(param_1);
        if (iVar3 != 0) goto LAB_00100585;
      }
      goto LAB_0010053b;
    }
LAB_00100585:
    iVar3 = WPACKET_start_sub_packet(param_1);
    if (iVar3 == 0) goto LAB_0010053b;
    local_48 = (uchar *)0x0;
    iVar4 = BN_num_bits(param_3);
    iVar3 = iVar4 + 0xe;
    if (-1 < iVar4 + 7) {
      iVar3 = iVar4 + 7;
    }
    lVar5 = bn_get_words(param_3);
    uVar1 = (long)(iVar3 >> 3) - 1;
    uVar2 = *(ulong *)(lVar5 + (uVar1 & 0xfffffffffffffff8));
    iVar3 = WPACKET_allocate_bytes(param_1,(long)(iVar3 >> 3),&local_48);
    if (iVar3 == 0) goto LAB_0010053b;
    if (local_48 != (uchar *)0x0) {
      BN_bn2bin(param_3,local_48);
    }
    if ((uVar2 >> ((byte)uVar1 & 7) * '\b' & 0x80) != 0) {
      iVar3 = WPACKET_put_bytes__(param_1,0,1);
      if (iVar3 == 0) goto LAB_0010053b;
    }
    iVar3 = WPACKET_close(param_1);
    if (iVar3 == 0) goto LAB_0010053b;
    iVar3 = WPACKET_put_bytes__(param_1,2,1);
    if (iVar3 == 0) goto LAB_0010053b;
    if ((int)param_2 < 0) goto LAB_001006be;
    iVar3 = WPACKET_get_total_written(param_1,&local_50);
    if (iVar3 == 0) goto LAB_0010053b;
    iVar3 = WPACKET_close(param_1);
    if (iVar3 == 0) goto LAB_0010053b;
    iVar3 = WPACKET_get_total_written(param_1,&local_48);
    if (iVar3 == 0) goto LAB_0010053b;
    if (local_50 != local_48) {
      iVar3 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1);
      if (iVar3 == 0) goto LAB_0010053b;
    }
LAB_001006be:
    uVar6 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_001006fa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_DER_w_null(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_2 < 0) {
LAB_00100750:
    iVar1 = WPACKET_start_sub_packet(param_1);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_1,5,1);
        if (iVar1 != 0) {
          if ((int)param_2 < 0) goto LAB_001007d7;
          iVar1 = WPACKET_get_total_written(param_1,&local_30);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_1);
            if (iVar1 != 0) {
              iVar1 = WPACKET_get_total_written(param_1,&local_28);
              if (iVar1 != 0) {
                if (local_30 != local_28) {
                  iVar1 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1);
                  if (iVar1 == 0) goto LAB_00100731;
                }
LAB_001007d7:
                uVar2 = 1;
                goto LAB_00100733;
              }
            }
          }
        }
      }
    }
  }
  else if ((int)param_2 < 0x1f) {
    iVar1 = WPACKET_start_sub_packet();
    if (iVar1 != 0) goto LAB_00100750;
  }
LAB_00100731:
  uVar2 = 0;
LAB_00100733:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_DER_w_begin_sequence(undefined8 param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    if (param_2 < 0x1f) {
      iVar1 = WPACKET_start_sub_packet();
      if (iVar1 != 0) goto LAB_0010080a;
    }
    return false;
  }
LAB_0010080a:
  iVar1 = WPACKET_start_sub_packet(param_1);
  return iVar1 != 0;
}



undefined8 ossl_DER_w_end_sequence(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_get_total_written(param_1,&local_40);
  if (((iVar1 != 0) && (iVar1 = WPACKET_close(param_1), iVar1 != 0)) &&
     (iVar1 = WPACKET_get_total_written(param_1,&local_38), iVar1 != 0)) {
    if (local_40 == local_38) {
      iVar1 = WPACKET_set_flags(param_1,2);
    }
    else {
      iVar1 = WPACKET_put_bytes__(param_1,0x30,1);
    }
    if ((iVar1 != 0) &&
       (((int)param_2 < 0 ||
        (((((int)param_2 < 0x1f &&
           (iVar1 = WPACKET_get_total_written(param_1,&local_30), iVar1 != 0)) &&
          ((iVar1 = WPACKET_close(param_1), iVar1 != 0 &&
           (iVar1 = WPACKET_get_total_written(param_1,&local_28), iVar1 != 0)))) &&
         ((local_30 == local_28 ||
          (iVar1 = WPACKET_put_bytes__(param_1,(long)(int)(param_2 | 0xa0),1), iVar1 != 0)))))))) {
      uVar2 = 1;
      goto LAB_0010085f;
    }
  }
  uVar2 = 0;
LAB_0010085f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


