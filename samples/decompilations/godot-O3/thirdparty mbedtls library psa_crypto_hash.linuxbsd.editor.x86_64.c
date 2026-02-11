
undefined8 mbedtls_psa_hash_abort(int *param_1)

{
  if (*param_1 == 0) {
LAB_00100039:
    *param_1 = 0;
  }
  else {
    switch(*param_1) {
    case 0x2000003:
      mbedtls_md5_free(param_1 + 2);
      *param_1 = 0;
      break;
    case 0x2000004:
      mbedtls_ripemd160_free(param_1 + 2);
      *param_1 = 0;
      break;
    case 0x2000005:
      mbedtls_sha1_free(param_1 + 2);
      *param_1 = 0;
      break;
    default:
      return 0xffffff77;
    case 0x2000008:
    case 0x2000009:
      mbedtls_sha256_free(param_1 + 2);
      goto LAB_00100039;
    case 0x200000a:
    case 0x200000b:
      mbedtls_sha512_free(param_1 + 2);
      *param_1 = 0;
      break;
    case 0x2000010:
    case 0x2000011:
    case 0x2000012:
    case 0x2000013:
      mbedtls_sha3_free(param_1 + 2);
      *param_1 = 0;
    }
  }
  return 0;
}



ulong mbedtls_psa_hash_setup(uint *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*param_1 != 0) {
    return 0xffffff77;
  }
  switch(param_2) {
  case 0x2000003:
    mbedtls_md5_init(param_1 + 2);
    iVar1 = mbedtls_md5_starts(param_1 + 2);
    break;
  case 0x2000004:
    mbedtls_ripemd160_init(param_1 + 2);
    iVar1 = mbedtls_ripemd160_starts(param_1 + 2);
    break;
  case 0x2000005:
    mbedtls_sha1_init(param_1 + 2);
    iVar1 = mbedtls_sha1_starts(param_1 + 2);
    break;
  default:
    return (ulong)(((param_2 & 0x7f000000) == 0x2000000) - 0x87);
  case 0x2000008:
    mbedtls_sha256_init(param_1 + 2);
    iVar1 = mbedtls_sha256_starts(param_1 + 2,1);
    break;
  case 0x2000009:
    mbedtls_sha256_init(param_1 + 2);
    iVar1 = mbedtls_sha256_starts(param_1 + 2,0);
    break;
  case 0x200000a:
    mbedtls_sha512_init(param_1 + 2);
    iVar1 = mbedtls_sha512_starts(param_1 + 2,1);
    break;
  case 0x200000b:
    mbedtls_sha512_init(param_1 + 2);
    iVar1 = mbedtls_sha512_starts(param_1 + 2,0);
    break;
  case 0x2000010:
    mbedtls_sha3_init(param_1 + 2);
    iVar1 = mbedtls_sha3_starts(param_1 + 2,1);
    break;
  case 0x2000011:
    mbedtls_sha3_init(param_1 + 2);
    iVar1 = mbedtls_sha3_starts(param_1 + 2,2);
    break;
  case 0x2000012:
    mbedtls_sha3_init(param_1 + 2);
    iVar1 = mbedtls_sha3_starts(param_1 + 2,3);
    break;
  case 0x2000013:
    mbedtls_sha3_init(param_1 + 2);
    iVar1 = mbedtls_sha3_starts(param_1 + 2,4);
  }
  if (iVar1 == 0) {
    *param_1 = param_2;
    uVar2 = mbedtls_to_psa_error(0);
    return uVar2;
  }
  mbedtls_psa_hash_abort(param_1);
  uVar2 = mbedtls_to_psa_error(iVar1);
  return uVar2;
}



undefined8 mbedtls_psa_hash_clone(int *param_1,int *param_2)

{
  if (*param_1 != 0) {
    switch(*param_1) {
    case 0x2000003:
      mbedtls_md5_clone(param_2 + 2,param_1 + 2);
      break;
    case 0x2000004:
      mbedtls_ripemd160_clone(param_2 + 2,param_1 + 2);
      break;
    case 0x2000005:
      mbedtls_sha1_clone(param_2 + 2,param_1 + 2);
      break;
    case 0x2000006:
    case 0x2000007:
    case 0x200000c:
    case 0x200000d:
    case 0x200000e:
    case 0x200000f:
      return 0xffffff7a;
    case 0x2000008:
    case 0x2000009:
      mbedtls_sha256_clone(param_2 + 2,param_1 + 2);
      break;
    case 0x200000a:
    case 0x200000b:
      mbedtls_sha512_clone(param_2 + 2,param_1 + 2);
      break;
    case 0x2000010:
    case 0x2000011:
    case 0x2000012:
    case 0x2000013:
      mbedtls_sha3_clone(param_2 + 2,param_1 + 2);
      break;
    default:
      return 0xffffff7a;
    }
    *param_2 = *param_1;
    return 0;
  }
  return 0xffffff77;
}



undefined8 mbedtls_psa_hash_update(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  switch(*param_1) {
  case 0x2000003:
    uVar1 = mbedtls_md5_update(param_1 + 2);
    uVar2 = mbedtls_to_psa_error(uVar1);
    return uVar2;
  case 0x2000004:
    uVar1 = mbedtls_ripemd160_update(param_1 + 2);
    uVar2 = mbedtls_to_psa_error(uVar1);
    return uVar2;
  case 0x2000005:
    uVar1 = mbedtls_sha1_update(param_1 + 2);
    uVar2 = mbedtls_to_psa_error(uVar1);
    return uVar2;
  case 0x2000006:
  case 0x2000007:
  case 0x200000c:
  case 0x200000d:
  case 0x200000e:
  case 0x200000f:
    return 0xffffff77;
  case 0x2000008:
  case 0x2000009:
    uVar1 = mbedtls_sha256_update(param_1 + 2);
    uVar2 = mbedtls_to_psa_error(uVar1);
    return uVar2;
  case 0x200000a:
  case 0x200000b:
    uVar1 = mbedtls_sha512_update(param_1 + 2);
    uVar2 = mbedtls_to_psa_error(uVar1);
    return uVar2;
  case 0x2000010:
  case 0x2000011:
  case 0x2000012:
  case 0x2000013:
    uVar1 = mbedtls_sha3_update(param_1 + 2);
    uVar2 = mbedtls_to_psa_error(uVar1);
    return uVar2;
  default:
    return 0xffffff77;
  }
}



undefined8 mbedtls_psa_hash_finish(uint *param_1,void *param_2,ulong param_3,ulong *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  uVar4 = (uVar1 & 0xff | 0x2000000) + 0xfdfffffd;
  if (uVar4 < 0x11) {
    *param_4 = param_3;
    uVar5 = *(ulong *)(CSWTCH_20 + (ulong)uVar4 * 8);
    if (param_3 != 0) {
      param_2 = memset(param_2,0x21,param_3);
    }
    if (param_3 < uVar5) {
      return 0xffffff76;
    }
    uVar1 = *param_1;
  }
  else {
    *param_4 = param_3;
    uVar5 = 0;
    if (param_3 != 0) {
      param_2 = memset(param_2,0x21,param_3);
      uVar1 = *param_1;
    }
  }
  switch(uVar1) {
  case 0x2000003:
    uVar2 = mbedtls_md5_finish(param_1 + 2,param_2);
    break;
  case 0x2000004:
    uVar2 = mbedtls_ripemd160_finish(param_1 + 2,param_2);
    break;
  case 0x2000005:
    uVar2 = mbedtls_sha1_finish(param_1 + 2,param_2);
    break;
  default:
    return 0xffffff77;
  case 0x2000008:
  case 0x2000009:
    uVar2 = mbedtls_sha256_finish(param_1 + 2,param_2);
    break;
  case 0x200000a:
  case 0x200000b:
    uVar2 = mbedtls_sha512_finish(param_1 + 2,param_2);
    break;
  case 0x2000010:
  case 0x2000011:
  case 0x2000012:
  case 0x2000013:
    uVar2 = mbedtls_sha3_finish(param_1 + 2,param_2,param_3);
  }
  uVar3 = mbedtls_to_psa_error(uVar2);
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  *param_4 = uVar5;
  return uVar3;
}



int mbedtls_psa_hash_compute
              (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 *param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_128 [29];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_6 = param_5;
  puVar4 = local_128;
  for (lVar3 = 0x1c; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar1 = mbedtls_psa_hash_setup(local_128,param_1);
  if (iVar1 == 0) {
    iVar1 = mbedtls_psa_hash_update(local_128,param_2,param_3);
    if (iVar1 == 0) {
      iVar1 = mbedtls_psa_hash_finish(local_128,param_4,param_5,param_6);
      iVar2 = mbedtls_psa_hash_abort(local_128);
      if (iVar1 == 0) {
        iVar1 = iVar2;
      }
    }
    else {
      mbedtls_psa_hash_abort(local_128);
    }
  }
  else {
    mbedtls_psa_hash_abort(local_128);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


