
int mbedtls_psa_ecp_load_representation
              (ushort param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *__ptr;
  byte bVar5;
  undefined8 uVar6;
  
  bVar5 = (byte)param_1;
  uVar4 = param_4;
  if (((param_1 & 0x7000) == 0x4000) && (((param_1 & 0xcf00) != 0x4100 || (bVar5 != 0x41)))) {
    if ((param_4 & 1) == 0) {
      return -0x87;
    }
    uVar4 = param_4 >> 1;
  }
  if (param_2 == 0) {
    param_2 = uVar4 * 8;
  }
  else if (param_2 + 7 >> 3 != uVar4) {
    return -0x87;
  }
  __ptr = (undefined4 *)calloc(1,0x100);
  if (__ptr == (undefined4 *)0x0) {
    return -0x8d;
  }
  iVar3 = -0x87;
  mbedtls_ecp_keypair_init(__ptr);
  if ((param_1 & 0xcf00) != 0x4100) goto LAB_0010007f;
  if (bVar5 == 0x30) {
    if (((param_2 & 0xffffffffffffff7f) != 0x100) && (param_2 != 0x200)) goto LAB_0010007f;
    uVar6 = 0x30;
  }
  else if (bVar5 < 0x31) {
    if (bVar5 == 0x12) {
      if (param_2 != 0x209) {
        if (param_2 < 0x20a) {
          if (param_2 != 0x100) {
            if (param_2 < 0x101) {
              if ((param_2 & 0xffffffffffffffdf) != 0xc0) {
LAB_0010024a:
                iVar3 = -0x87;
                goto LAB_0010007f;
              }
            }
            else if (param_2 != 0x180) goto LAB_0010024a;
          }
        }
        else {
          if (param_2 != 0x210) goto LAB_0010007f;
          param_2 = 0x209;
        }
      }
      uVar6 = 0x12;
    }
    else if ((bVar5 != 0x17) || (uVar6 = 0x17, (param_2 - 0xc0 & 0xffffffffffffffbf) != 0))
    goto LAB_0010007f;
  }
  else {
    if (bVar5 != 0x41) goto LAB_0010007f;
    if (param_2 == 0x100) {
      param_2 = 0xff;
      uVar6 = 0x41;
    }
    else {
      if ((param_2 != 0x1c0) && (param_2 != 0xff)) goto LAB_0010007f;
      uVar6 = 0x41;
    }
  }
  iVar3 = -0x86;
  iVar1 = mbedtls_ecc_group_from_psa(uVar6,param_2);
  if (iVar1 != 0) {
    uVar2 = mbedtls_ecp_group_load(__ptr,iVar1);
    iVar3 = mbedtls_to_psa_error(uVar2);
    if (iVar3 == 0) {
      if ((param_1 & 0x7000) == 0x4000) {
        uVar2 = mbedtls_ecp_point_read_binary(__ptr,__ptr + 0x34,param_3,param_4);
        iVar3 = mbedtls_to_psa_error(uVar2);
        if (iVar3 != 0) goto LAB_0010007f;
        uVar2 = mbedtls_ecp_check_pubkey(__ptr,__ptr + 0x34);
        iVar3 = mbedtls_to_psa_error(uVar2);
      }
      else {
        uVar2 = mbedtls_ecp_read_key(*__ptr,__ptr,param_3,param_4);
        iVar3 = mbedtls_to_psa_error(uVar2);
      }
      if (iVar3 == 0) {
        *param_5 = __ptr;
        return 0;
      }
    }
  }
LAB_0010007f:
  mbedtls_ecp_keypair_free(__ptr);
  free(__ptr);
  return iVar3;
}



ulong mbedtls_psa_ecp_export_key
                (ushort param_1,long param_2,void *param_3,size_t param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  
  if ((param_1 & 0x7000) != 0x4000) {
    uVar3 = mbedtls_ecp_write_key_ext(param_2,param_5);
    uVar5 = mbedtls_to_psa_error(uVar3);
    return uVar5;
  }
  lVar1 = param_2 + 0xd0;
  iVar2 = mbedtls_ecp_is_zero(lVar1);
  if (iVar2 != 0) {
    uVar3 = mbedtls_ecp_mul(param_2,lVar1,param_2 + 0xc0,param_2 + 0x38,&mbedtls_psa_get_random,0);
    uVar4 = mbedtls_to_psa_error(uVar3);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
  }
  uVar3 = mbedtls_ecp_point_write_binary(param_2,lVar1,0,param_5,param_3,param_4);
  uVar4 = mbedtls_to_psa_error(uVar3);
  if (uVar4 != 0) {
    memset(param_3,0,param_4);
  }
  return (ulong)uVar4;
}



int mbedtls_psa_ecp_import_key
              (ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,long *param_7)

{
  ushort uVar1;
  void *__ptr;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (void *)0x0;
  iVar2 = mbedtls_psa_ecp_load_representation(*param_1,param_1[1],param_2,param_3,&local_48);
  __ptr = local_48;
  if (iVar2 == 0) {
    uVar1 = *param_1;
    lVar3 = *(long *)((long)local_48 + 0x80);
    if ((uVar1 & 0xcf00) == 0x4100) {
      lVar3 = lVar3 + (ulong)((char)uVar1 == 'A');
    }
    *param_7 = lVar3;
    iVar2 = mbedtls_psa_ecp_export_key(uVar1,local_48,param_4,param_5,param_6);
  }
  mbedtls_ecp_keypair_free(__ptr);
  free(__ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int mbedtls_psa_ecp_export_public_key
              (ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  void *__ptr;
  int iVar1;
  undefined2 uVar2;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (void *)0x0;
  iVar1 = mbedtls_psa_ecp_load_representation(*param_1,param_1[1],param_2,param_3,&local_48);
  __ptr = local_48;
  if (iVar1 == 0) {
    uVar2 = 0x4100;
    if ((*param_1 & 0xcf00) == 0x4100) {
      uVar2 = CONCAT11(0x41,(char)*param_1);
    }
    iVar1 = mbedtls_psa_ecp_export_key(uVar2,local_48,param_4,param_5,param_6);
    mbedtls_ecp_keypair_free(__ptr);
    free(__ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_psa_ecp_generate_key
          (ushort *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_138 [192];
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (undefined1)*param_1;
  if ((*param_1 & 0xcf00) != 0x4100) {
    uVar3 = 0;
  }
  iVar1 = mbedtls_ecc_group_from_psa(uVar3,param_1[1]);
  if (iVar1 == 0) {
    uVar2 = 0xffffff7a;
  }
  else {
    mbedtls_ecp_keypair_init(auStack_138);
    iVar1 = mbedtls_ecp_group_load(auStack_138,iVar1);
    if (iVar1 == 0) {
      iVar1 = mbedtls_ecp_gen_privkey(auStack_138,local_78,&mbedtls_psa_get_random,0);
      if (iVar1 == 0) {
        iVar1 = mbedtls_ecp_write_key_ext(auStack_138,param_4,param_2,param_3);
      }
    }
    mbedtls_ecp_keypair_free(auStack_138);
    uVar2 = mbedtls_to_psa_error(iVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_psa_ecdsa_sign_hash
               (undefined2 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
               undefined8 param_5,undefined8 param_6,long param_7,ulong param_8,ulong *param_9)

{
  void *__ptr;
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  void *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (void *)0x0;
  iVar1 = mbedtls_psa_ecp_load_representation(*param_1,param_1[1],param_2,param_3,&local_70);
  __ptr = local_70;
  if (iVar1 == 0) {
    uVar3 = *(long *)((long)local_70 + 0x78) + 7U >> 3;
    mbedtls_mpi_init(local_68);
    mbedtls_mpi_init(local_58);
    if (param_8 < uVar3 * 2) {
      iVar1 = -0x4f00;
      mbedtls_mpi_free(local_68);
      mbedtls_mpi_free(local_58);
    }
    else {
      if ((param_4 & 0x100) == 0) {
        iVar1 = mbedtls_ecdsa_sign(__ptr,local_68,local_58,(long)__ptr + 0xc0,param_5,param_6,
                                   _GLOBAL_OFFSET_TABLE_);
      }
      else {
        if (((((param_4 & 0xfffffe00) == 0x6000200) || ((param_4 & 0xffffff00) == 0x6001300)) ||
            ((param_4 & 0xfffffc00) == 0x6000400)) ||
           (uVar2 = 0, (param_4 & 0xffffff00) == 0x6000900)) {
          uVar2 = param_4 & 0xff;
        }
        iVar1 = mbedtls_ecdsa_sign_det_ext
                          (__ptr,local_68,local_58,(long)__ptr + 0xc0,param_5,param_6,uVar2,
                           _GLOBAL_OFFSET_TABLE_,0);
      }
      if ((iVar1 == 0) && (iVar1 = mbedtls_mpi_write_binary(local_68,param_7,uVar3), iVar1 == 0)) {
        iVar1 = mbedtls_mpi_write_binary(local_58,param_7 + uVar3);
        mbedtls_mpi_free(local_68);
        mbedtls_mpi_free(local_58);
        if (iVar1 == 0) {
          *param_9 = uVar3 * 2;
        }
      }
      else {
        mbedtls_mpi_free(local_68);
        mbedtls_mpi_free(local_58);
      }
    }
    mbedtls_ecp_keypair_free(__ptr);
    free(__ptr);
    mbedtls_to_psa_error(iVar1);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_psa_ecp_load_public_part(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = mbedtls_ecp_is_zero(param_1 + 0xd0);
  if (iVar1 == 0) {
    mbedtls_to_psa_error(0);
    return;
  }
  uVar2 = mbedtls_ecp_mul(param_1,param_1 + 0xd0,param_1 + 0xc0,param_1 + 0x38,
                          &mbedtls_psa_get_random,0);
  mbedtls_to_psa_error(uVar2);
  return;
}



ulong mbedtls_psa_ecdsa_verify_hash
                (undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  void *__ptr;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  void *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (void *)0x0;
  uVar5 = mbedtls_psa_ecp_load_representation(*param_1,param_1[1],param_2,param_3,&local_70);
  __ptr = local_70;
  if ((int)uVar5 == 0) {
    lVar1 = *(long *)((long)local_70 + 0x78);
    mbedtls_mpi_init(local_68);
    uVar5 = lVar1 + 7U >> 3;
    mbedtls_mpi_init(local_58);
    uVar3 = 0xffffff6b;
    if (uVar5 * 2 == param_8) {
      uVar2 = mbedtls_mpi_read_binary(local_68,param_7,uVar5);
      uVar3 = mbedtls_to_psa_error(uVar2);
      if (uVar3 == 0) {
        uVar2 = mbedtls_mpi_read_binary(local_58,param_7 + uVar5,uVar5);
        uVar3 = mbedtls_to_psa_error(uVar2);
        if (uVar3 == 0) {
          lVar1 = (long)__ptr + 0xd0;
          iVar4 = mbedtls_ecp_is_zero(lVar1);
          if (iVar4 != 0) {
            iVar4 = mbedtls_ecp_mul(__ptr,lVar1,(long)__ptr + 0xc0,(long)__ptr + 0x38,
                                    &mbedtls_psa_get_random,0);
          }
          uVar3 = mbedtls_to_psa_error(iVar4);
          if (uVar3 == 0) {
            uVar2 = mbedtls_ecdsa_verify(__ptr,param_5,param_6,lVar1,local_68,local_58);
            uVar3 = mbedtls_to_psa_error(uVar2);
          }
        }
      }
    }
    mbedtls_mpi_free(local_68);
    mbedtls_mpi_free(local_58);
    mbedtls_ecp_keypair_free(__ptr);
    free(__ptr);
    uVar5 = (ulong)uVar3;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_psa_key_agreement_ecdh
                (undefined2 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                ulong *param_9)

{
  undefined4 *__ptr;
  void *__ptr_00;
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 *local_1b0;
  void *local_1a8;
  long local_1a0;
  undefined1 local_198 [344];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((char)((ushort)*param_1 >> 8) != 'q') || ((param_4 & 0xf6ff0000 | 0x9000000) != 0x9020000)) {
    uVar4 = 0xffffff79;
    goto LAB_00100b43;
  }
  local_1b0 = (undefined4 *)0x0;
  uVar4 = mbedtls_psa_ecp_load_representation(*param_1,param_1[1],param_2,param_3,&local_1b0);
  __ptr = local_1b0;
  if ((int)uVar4 != 0) goto LAB_00100b43;
  local_1a8 = (void *)0x0;
  local_1a0 = 0;
  bVar1 = mbedtls_ecc_group_to_psa(*local_1b0,&local_1a0);
  mbedtls_ecdh_init(local_198);
  uVar2 = mbedtls_psa_ecp_load_representation(bVar1 | 0x4100,local_1a0,param_5,param_6,&local_1a8);
  __ptr_00 = local_1a8;
  if (uVar2 == 0) {
    uVar3 = mbedtls_ecdh_get_params(local_198,local_1a8,1);
    uVar2 = mbedtls_to_psa_error(uVar3);
    if (uVar2 != 0) goto LAB_00100bea;
    uVar3 = mbedtls_ecdh_get_params(local_198,__ptr,0);
    uVar2 = mbedtls_to_psa_error(uVar3);
    if (uVar2 != 0) goto LAB_00100bea;
    uVar3 = mbedtls_ecdh_calc_secret(local_198,param_9,param_7,param_8,&mbedtls_psa_get_random,0);
    uVar2 = mbedtls_to_psa_error(uVar3);
    if (uVar2 != 0) goto LAB_00100bea;
    if (local_1a0 + 7U >> 3 != *param_9) {
      uVar2 = 0xffffff69;
      goto LAB_00100bea;
    }
  }
  else {
LAB_00100bea:
    mbedtls_platform_zeroize(param_7,param_8);
  }
  mbedtls_ecdh_free(local_198);
  mbedtls_ecp_keypair_free(__ptr_00);
  free(__ptr_00);
  mbedtls_ecp_keypair_free(__ptr);
  free(__ptr);
  uVar4 = (ulong)uVar2;
LAB_00100b43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


