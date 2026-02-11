
undefined8 psa_rsa_decode_md_type(uint param_1,ulong param_2,uint *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (((param_1 & 0xfffffe00) == 0x6000200) || ((param_1 & 0xffffff00) == 0x6001300)) {
    if ((param_1 & 0xff) == 0) {
      *param_3 = 0;
      if (param_2 >> 0x20 != 0) {
        return 0xffffff79;
      }
      if (param_1 == 0x6000200) {
        return 0;
      }
      return 0xffffff7a;
    }
    *param_3 = param_1 & 0xff;
    if (param_2 >> 0x20 != 0) {
      return 0xffffff79;
    }
    if (param_1 == 0x6000200) {
      return 0;
    }
  }
  else {
    if ((((param_1 & 0xfffffc00) != 0x6000400) && ((param_1 & 0xffffff00) != 0x6000900)) ||
       ((param_1 & 0xff) == 0)) {
      *param_3 = 0;
      if (param_2 >> 0x20 != 0) {
        return 0xffffff79;
      }
      return 0xffffff7a;
    }
    *param_3 = param_1 & 0xff;
    if (param_2 >> 0x20 != 0) {
      return 0xffffff79;
    }
  }
  uVar2 = mbedtls_md_info_from_type(param_1 & 0xff);
  bVar1 = mbedtls_md_get_size(uVar2);
  if (bVar1 == param_2) {
    return 0;
  }
  return 0xffffff79;
}



int mbedtls_psa_rsa_load_representation
              (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar4 = calloc(1,0xe8);
  *param_4 = pvVar4;
  if (pvVar4 == (void *)0x0) {
    iVar3 = -0x8d;
  }
  else {
    mbedtls_rsa_init(pvVar4);
    if ((~(byte)((uint)param_1 >> 8) & 0x70) == 0) {
      uVar2 = mbedtls_rsa_parse_key(*param_4,param_2,param_3);
      iVar3 = mbedtls_to_psa_error(uVar2);
    }
    else {
      uVar2 = mbedtls_rsa_parse_pubkey();
      iVar3 = mbedtls_to_psa_error(uVar2);
    }
    if (iVar3 == 0) {
      lVar5 = mbedtls_rsa_get_len(*param_4);
      if ((ulong)(lVar5 * 8) < 0x1001) {
        uVar1 = *param_4;
        mbedtls_mpi_init(auStack_48);
        uVar2 = mbedtls_rsa_export(uVar1,auStack_48,0,0,0,0);
        iVar3 = mbedtls_to_psa_error(uVar2);
        if ((iVar3 == 0) && (uVar6 = mbedtls_mpi_bitlen(auStack_48), (uVar6 & 7) != 0)) {
          iVar3 = -0x86;
        }
        mbedtls_mpi_free(auStack_48);
      }
      else {
        iVar3 = -0x86;
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



undefined8
mbedtls_psa_rsa_export_key
          (uint param_1,undefined8 param_2,void *param_3,ulong param_4,ulong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  ulong __n;
  void *__src;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (long)param_3 + param_4;
  if ((~param_1 & 0x7000) == 0) {
    iVar1 = mbedtls_rsa_write_key(param_2,param_3,&local_38);
  }
  else {
    iVar1 = mbedtls_rsa_write_pubkey();
  }
  if (iVar1 < 0) {
    memset(param_3,0,param_4);
    uVar2 = mbedtls_to_psa_error(iVar1);
  }
  else {
    __n = (ulong)iVar1;
    if (param_4 < __n * 2) {
      if (__n < param_4) {
        memmove(param_3,(void *)((long)param_3 + (param_4 - __n)),__n);
        memset((void *)((long)param_3 + __n),0,param_4 - __n);
      }
    }
    else {
      __src = (void *)((param_4 - __n) + (long)param_3);
      memcpy(param_3,__src,__n);
      memset(__src,0,__n);
    }
    *param_5 = __n;
    uVar2 = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int mbedtls_psa_rsa_import_key
              (undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,ulong *param_7)

{
  undefined2 uVar1;
  void *__ptr;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (void *)0x0;
  iVar2 = mbedtls_psa_rsa_load_representation(*param_1,param_2,param_3,&local_48);
  __ptr = local_48;
  if (iVar2 == 0) {
    uVar3 = mbedtls_rsa_get_len(local_48);
    uVar1 = *param_1;
    *param_7 = (ulong)((uVar3 & 0x1fff) << 3);
    iVar2 = mbedtls_psa_rsa_export_key(uVar1,__ptr,param_4,param_5,param_6);
  }
  mbedtls_rsa_free(__ptr);
  free(__ptr);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_psa_rsa_export_public_key
              (undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  void *__ptr;
  int iVar1;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)0x0;
  iVar1 = mbedtls_psa_rsa_load_representation(*param_1,param_2,param_3,&local_38);
  __ptr = local_38;
  if (iVar1 == 0) {
    iVar1 = mbedtls_psa_rsa_export_key(0x4001,local_38,param_4,param_5,param_6);
  }
  mbedtls_rsa_free(__ptr);
  free(__ptr);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined4
mbedtls_psa_rsa_generate_key
          (undefined2 *param_1,byte *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  long in_FS_OFFSET;
  undefined1 auStack_128 [232];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    uVar5 = 0x10001;
LAB_001004f6:
    mbedtls_rsa_init(auStack_128);
    iVar2 = mbedtls_rsa_gen_key(auStack_128,&mbedtls_psa_get_random,0,param_1[1],uVar5);
    if (iVar2 == 0) {
      uVar3 = mbedtls_psa_rsa_export_key(*param_1,auStack_128,param_4,param_5,param_6);
      mbedtls_rsa_free(auStack_128);
    }
    else {
      mbedtls_rsa_free(auStack_128);
      uVar3 = mbedtls_to_psa_error(iVar2);
    }
  }
  else {
    if (param_3 < 5) {
      pbVar4 = param_2 + param_3;
      uVar5 = 0;
      do {
        bVar1 = *param_2;
        param_2 = param_2 + 1;
        uVar5 = uVar5 << 8 | (uint)bVar1;
      } while (pbVar4 != param_2);
      if (-1 < (int)uVar5) goto LAB_001004f6;
    }
    uVar3 = 0xffffff7a;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_psa_rsa_sign_hash
              (undefined2 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
              undefined8 param_5,ulong param_6,undefined8 param_7,ulong param_8,undefined8 *param_9)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *__ptr;
  long in_FS_OFFSET;
  undefined4 local_4c;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (void *)0x0;
  iVar1 = mbedtls_psa_rsa_load_representation(*param_1,param_2,param_3,&local_48);
  __ptr = local_48;
  if ((iVar1 != 0) ||
     (iVar1 = psa_rsa_decode_md_type(param_4,param_6,&local_4c), __ptr = local_48, iVar1 != 0))
  goto LAB_001005e6;
  uVar2 = mbedtls_rsa_get_len(local_48);
  if (param_8 < uVar2) {
    iVar1 = -0x8a;
    goto LAB_001005e6;
  }
  if (param_4 >> 8 == 0x60002) {
    iVar1 = mbedtls_rsa_set_padding(__ptr,0,0);
    if (iVar1 == 0) {
      iVar1 = mbedtls_rsa_pkcs1_sign
                        (__ptr,&mbedtls_psa_get_random,0,local_4c,param_6 & 0xffffffff,param_5,
                         param_7);
LAB_001006bb:
      if (iVar1 == 0) {
        uVar3 = mbedtls_rsa_get_len(__ptr);
        *param_9 = uVar3;
      }
    }
  }
  else {
    if ((param_4 & 0xffffef00) != 0x6000300) {
      iVar1 = -0x87;
      goto LAB_001005e6;
    }
    iVar1 = mbedtls_rsa_set_padding(__ptr,1,local_4c);
    if (iVar1 == 0) {
      iVar1 = mbedtls_rsa_rsassa_pss_sign
                        (__ptr,&mbedtls_psa_get_random,0,0,param_6 & 0xffffffff,param_5,param_7);
      goto LAB_001006bb;
    }
  }
  iVar1 = mbedtls_to_psa_error(iVar1);
LAB_001005e6:
  mbedtls_rsa_free(__ptr);
  free(__ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int mbedtls_psa_rsa_verify_hash
              (undefined2 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
              undefined8 param_5,ulong param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  void *__ptr;
  long in_FS_OFFSET;
  undefined4 local_4c;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (void *)0x0;
  iVar1 = mbedtls_psa_rsa_load_representation(*param_1,param_2,param_3,&local_48);
  __ptr = local_48;
  if ((iVar1 == 0) &&
     (iVar1 = psa_rsa_decode_md_type(param_4,param_6,&local_4c), __ptr = local_48, iVar1 == 0)) {
    lVar4 = mbedtls_rsa_get_len(local_48);
    if (lVar4 == param_8) {
      iVar1 = (int)param_6;
      if ((param_4 & 0xffffff00) == 0x6000200) {
        iVar2 = mbedtls_rsa_set_padding(__ptr,0,0);
        if (iVar2 == 0) {
          iVar2 = mbedtls_rsa_pkcs1_verify(__ptr,local_4c,param_6 & 0xffffffff,param_5,param_7);
        }
      }
      else {
        if ((param_4 & 0xffffef00) != 0x6000300) {
          iVar1 = -0x87;
          goto LAB_00100780;
        }
        iVar2 = mbedtls_rsa_set_padding(__ptr,1,local_4c);
        if (iVar2 == 0) {
          if ((param_4 & 0xffffff00) == 0x6001300) {
            iVar2 = -1;
          }
          else {
            iVar2 = mbedtls_rsa_get_len(__ptr);
            iVar3 = (iVar2 + -2) - iVar1;
            if (iVar3 <= iVar1) {
              iVar1 = iVar3;
            }
            iVar2 = 0;
            if (-1 < iVar3) {
              iVar2 = iVar1;
            }
          }
          iVar2 = mbedtls_rsa_rsassa_pss_verify_ext
                            (__ptr,local_4c,param_6 & 0xffffffff,param_5,local_4c,iVar2,param_7);
        }
      }
      if (iVar2 != -0x4100) {
        iVar1 = mbedtls_to_psa_error(iVar2);
        goto LAB_00100780;
      }
    }
    iVar1 = -0x95;
  }
LAB_00100780:
  mbedtls_rsa_free(__ptr);
  free(__ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int mbedtls_psa_asymmetric_encrypt
              (ushort *param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5
              ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
              ulong param_10,undefined8 *param_11)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 & 0xcfff) != 0x4001) {
    iVar2 = -0x86;
    goto LAB_00100977;
  }
  iVar2 = mbedtls_psa_rsa_load_representation();
  if (iVar2 == 0) {
    iVar2 = -0x8a;
    uVar4 = mbedtls_rsa_get_len(0);
    if (uVar4 <= param_10) {
      if (param_4 == 0x7000200) {
        uVar3 = mbedtls_rsa_pkcs1_encrypt(0,&mbedtls_psa_get_random,0,param_6,param_5,param_9);
        iVar2 = mbedtls_to_psa_error(uVar3);
LAB_00100a74:
        if (iVar2 == 0) {
          uVar6 = mbedtls_rsa_get_len(0);
          *param_11 = uVar6;
        }
      }
      else {
        iVar2 = -0x87;
        if (param_4 >> 8 == 0x70003) {
          lVar5 = mbedtls_md_info_from_type(param_4 & 0xff);
          if (lVar5 == 0) {
            uVar3 = 0xffffff7a;
          }
          else {
            uVar3 = mbedtls_rsa_set_padding(0,1,param_4 & 0xff);
          }
          iVar2 = mbedtls_to_psa_error(uVar3);
          if (iVar2 == 0) {
            uVar3 = mbedtls_rsa_rsaes_oaep_encrypt
                              (0,&mbedtls_psa_get_random,0,param_7,param_8,param_6,param_5);
            iVar2 = mbedtls_to_psa_error(uVar3);
            goto LAB_00100a74;
          }
        }
      }
    }
  }
  mbedtls_rsa_free(0);
  free((void *)0x0);
LAB_00100977:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_psa_asymmetric_decrypt
              (short *param_1,undefined8 param_2,undefined8 param_3,uint param_4,undefined8 param_5,
              long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
              undefined8 param_10,undefined8 *param_11)

{
  short sVar1;
  void *__ptr;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar1 = *param_1;
  *param_11 = 0;
  if (sVar1 == 0x7001) {
    local_48 = (void *)0x0;
    iVar2 = mbedtls_psa_rsa_load_representation(0x7001,param_2,param_3,&local_48);
    __ptr = local_48;
    if (iVar2 == 0) {
      lVar4 = mbedtls_rsa_get_len(local_48);
      iVar2 = -0x87;
      if (lVar4 == param_6) {
        if (param_4 == 0x7000200) {
          uVar3 = mbedtls_rsa_pkcs1_decrypt
                            (__ptr,&mbedtls_psa_get_random,0,param_11,param_5,param_9);
          iVar2 = mbedtls_to_psa_error(uVar3);
        }
        else if (param_4 >> 8 == 0x70003) {
          lVar4 = mbedtls_md_info_from_type(param_4 & 0xff);
          if (lVar4 == 0) {
            uVar3 = 0xffffff7a;
          }
          else {
            uVar3 = mbedtls_rsa_set_padding(__ptr,1,param_4 & 0xff);
          }
          iVar2 = mbedtls_to_psa_error(uVar3);
          if (iVar2 == 0) {
            uVar3 = mbedtls_rsa_rsaes_oaep_decrypt
                              (__ptr,&mbedtls_psa_get_random,0,param_7,param_8,param_11,param_5,
                               param_9,param_10);
            iVar2 = mbedtls_to_psa_error(uVar3);
          }
        }
      }
    }
    mbedtls_rsa_free(__ptr);
    free(__ptr);
  }
  else {
    iVar2 = -0x86;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


