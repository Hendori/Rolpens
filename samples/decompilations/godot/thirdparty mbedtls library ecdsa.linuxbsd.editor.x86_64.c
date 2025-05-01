
ulong derive_mpi(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar4 = *(long *)(param_1 + 0x80) + 7U >> 3;
  if (uVar4 <= param_4) {
    param_4 = uVar4;
  }
  uVar1 = mbedtls_mpi_read_binary(param_2,param_3,param_4);
  if (uVar1 == 0) {
    if (*(ulong *)(param_1 + 0x80) < param_4 * 8) {
      uVar2 = mbedtls_mpi_shift_r(param_2,param_4 * 8 - *(ulong *)(param_1 + 0x80));
      if (uVar2 != 0) {
        return (ulong)uVar2;
      }
    }
    iVar3 = mbedtls_mpi_cmp_mpi(param_2,param_1 + 0x68);
    if (-1 < iVar3) {
      uVar4 = mbedtls_mpi_sub_mpi(param_2,param_2,param_1 + 0x68);
      return uVar4;
    }
  }
  return (ulong)uVar1;
}



int mbedtls_ecdsa_sign_restartable_part_0
              (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = mbedtls_mpi_cmp_int(param_4,1);
  if (-1 < iVar2) {
    lVar1 = param_1 + 0x68;
    iVar2 = mbedtls_mpi_cmp_mpi(param_4,lVar1);
    if (iVar2 < 0) {
      mbedtls_ecp_point_init(local_78);
      mbedtls_mpi_init(local_a8);
      mbedtls_mpi_init(local_98);
      mbedtls_mpi_init(local_88);
      local_b0 = 0xc;
      while (local_b0 = local_b0 + -1, local_b0 != 0) {
        iVar2 = 0xc;
        do {
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) goto LAB_00100246;
          iVar3 = mbedtls_ecp_gen_privkey(param_1,local_a8,param_7,param_8);
          if (((iVar3 != 0) ||
              (iVar3 = mbedtls_ecp_mul_restartable
                                 (param_1,local_78,local_a8,param_1 + 0x38,param_9,param_10,0),
              iVar3 != 0)) ||
             (iVar3 = mbedtls_mpi_mod_mpi(param_2,local_78,lVar1,0x1001ec), iVar3 != 0))
          goto LAB_0010024b;
          iVar3 = mbedtls_mpi_cmp_int(param_2,0);
        } while (iVar3 == 0);
        iVar3 = derive_mpi(param_1,local_98,param_5,param_6);
        if (((((iVar3 != 0) ||
              (iVar3 = mbedtls_ecp_gen_privkey(param_1,local_88,param_9,param_10), iVar3 != 0)) ||
             ((iVar3 = mbedtls_mpi_mul_mpi(param_3,param_2,param_4), iVar3 != 0 ||
              ((iVar3 = mbedtls_mpi_add_mpi(local_98,local_98,param_3), iVar3 != 0 ||
               (iVar3 = mbedtls_mpi_mul_mpi(local_98,local_98,local_88), iVar3 != 0)))))) ||
            (iVar3 = mbedtls_mpi_mul_mpi(local_a8,local_a8,local_88), iVar3 != 0)) ||
           ((((iVar3 = mbedtls_mpi_mod_mpi(local_a8,local_a8,lVar1), iVar3 != 0 ||
              (iVar3 = mbedtls_mpi_inv_mod(param_3,local_a8,lVar1), iVar3 != 0)) ||
             (iVar3 = mbedtls_mpi_mul_mpi(param_3,param_3,local_98), iVar3 != 0)) ||
            ((iVar3 = mbedtls_mpi_mod_mpi(param_3,param_3,lVar1), iVar3 != 0 ||
             (iVar2 = mbedtls_mpi_cmp_int(param_3,0), iVar2 != 0)))))) goto LAB_0010024b;
      }
LAB_00100246:
      iVar3 = -0x4d00;
LAB_0010024b:
      mbedtls_ecp_point_free(local_78);
      mbedtls_mpi_free(local_a8);
      mbedtls_mpi_free(local_98);
      mbedtls_mpi_free(local_88);
      goto LAB_00100275;
    }
  }
  iVar3 = -0x4c80;
LAB_00100275:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



bool mbedtls_ecdsa_can_do(uint param_1)

{
  return (param_1 & 0xfffffffb) != 9;
}



undefined8 mbedtls_ecdsa_sign_restartable(uint *param_1)

{
  undefined8 uVar1;
  
  if (((*param_1 & 0xfffffffb) != 9) && (*(long *)(param_1 + 0x1a) != 0)) {
    uVar1 = mbedtls_ecdsa_sign_restartable_part_0();
    return uVar1;
  }
  return 0xffffb080;
}



undefined8 mbedtls_ecdsa_sign(uint *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (((*param_1 & 0xfffffffb) != 9) && (*(long *)(param_1 + 0x1a) != 0)) {
    uVar1 = mbedtls_ecdsa_sign_restartable_part_0(param_1,param_2);
    return uVar1;
  }
  return 0xffffb080;
}



int mbedtls_ecdsa_sign_det_restartable
              (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
              undefined8 param_9)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined1 local_158 [16];
  undefined1 local_148 [128];
  undefined1 local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(long *)(param_1 + 0x20) + 7U >> 3;
  lVar2 = mbedtls_md_info_from_type(param_7);
  if (lVar2 == 0) {
    iVar1 = -0x4f80;
  }
  else {
    mbedtls_mpi_init(local_158);
    mbedtls_hmac_drbg_init(local_148);
    iVar1 = mbedtls_mpi_write_binary(param_4,local_c8,uVar3);
    if (iVar1 == 0) {
      iVar1 = derive_mpi(param_1,local_158,param_5,param_6);
      if (iVar1 == 0) {
        iVar1 = mbedtls_mpi_write_binary(local_158,local_c8 + uVar3,uVar3);
        if (iVar1 == 0) {
          iVar1 = mbedtls_hmac_drbg_seed_buf(local_148,lVar2,local_c8,uVar3 * 2);
          if (((iVar1 == 0) && (iVar1 = -0x4f80, (*param_1 & 0xfffffffb) != 9)) &&
             (*(long *)(param_1 + 0x1a) != 0)) {
            iVar1 = mbedtls_ecdsa_sign_restartable_part_0
                              (param_1,param_2,param_3,param_4,param_5,param_6,_GLOBAL_OFFSET_TABLE_
                               ,local_148,param_8,param_9);
          }
        }
      }
    }
    mbedtls_hmac_drbg_free(local_148);
    mbedtls_mpi_free(local_158);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ecdsa_sign_det_ext(void)

{
  mbedtls_ecdsa_sign_det_restartable();
  return;
}



int mbedtls_ecdsa_verify_restartable
              (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  uint *puVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_ecp_point_init(local_78);
  mbedtls_mpi_init(local_b8);
  mbedtls_mpi_init(local_a8);
  mbedtls_mpi_init(local_98);
  mbedtls_mpi_init(local_88);
  iVar2 = -0x4f80;
  if (((*param_1 & 0xfffffffb) == 9) || (*(long *)(param_1 + 0x1a) == 0)) goto LAB_00100798;
  iVar2 = mbedtls_mpi_cmp_int(param_5,1);
  if (iVar2 < 0) {
LAB_00100765:
    iVar2 = -0x4e00;
  }
  else {
    puVar1 = param_1 + 0x1a;
    iVar2 = mbedtls_mpi_cmp_mpi(param_5,puVar1);
    if ((((-1 < iVar2) || (iVar2 = mbedtls_mpi_cmp_int(param_6,1), iVar2 < 0)) ||
        (iVar2 = mbedtls_mpi_cmp_mpi(param_6,puVar1), -1 < iVar2)) ||
       (((((iVar2 = derive_mpi(param_1,local_b8,param_2,param_3), iVar2 == 0 &&
           (iVar2 = mbedtls_mpi_inv_mod(local_a8,param_6,puVar1), iVar2 == 0)) &&
          ((iVar2 = mbedtls_mpi_mul_mpi(local_98,local_b8,local_a8), iVar2 == 0 &&
           ((iVar2 = mbedtls_mpi_mod_mpi(local_98,local_98,puVar1), iVar2 == 0 &&
            (iVar2 = mbedtls_mpi_mul_mpi(local_88,param_5,local_a8), iVar2 == 0)))))) &&
         (iVar2 = mbedtls_mpi_mod_mpi(local_88,local_88,puVar1), iVar2 == 0)) &&
        ((iVar2 = mbedtls_ecp_muladd_restartable
                            (param_1,local_78,local_98,param_1 + 0xe,local_88,param_4), iVar2 == 0
         && ((iVar2 = mbedtls_ecp_is_zero(local_78), iVar2 != 0 ||
             ((iVar2 = mbedtls_mpi_mod_mpi(local_78,local_78,puVar1), iVar2 == 0 &&
              (iVar2 = mbedtls_mpi_cmp_mpi(local_78,param_5), iVar2 != 0))))))))))
    goto LAB_00100765;
  }
  mbedtls_ecp_point_free(local_78);
  mbedtls_mpi_free(local_b8);
  mbedtls_mpi_free(local_a8);
  mbedtls_mpi_free(local_98);
  mbedtls_mpi_free(local_88);
LAB_00100798:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



void mbedtls_ecdsa_verify(void)

{
  mbedtls_ecdsa_verify_restartable();
  return;
}



int mbedtls_ecdsa_write_signature_restartable
              (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,void *param_5,
              ulong param_6,ulong *param_7,long param_8,undefined8 param_9,undefined8 param_10)

{
  ulong __n;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 *local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [11];
  undefined5 uStack_5d;
  undefined1 auStack_58 [11];
  undefined1 local_4d [13];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == 0) {
    iVar3 = -0x4f80;
  }
  else {
    mbedtls_mpi_init(local_f8);
    mbedtls_mpi_init(local_e8);
    iVar1 = mbedtls_ecdsa_sign_det_restartable
                      (param_1,local_f8,local_e8,param_1 + 0xc0,param_3,param_4,param_2,param_8,
                       param_9,param_10);
    iVar3 = iVar1;
    if (iVar1 == 0) {
      local_100 = local_4d;
      local_68 = SUB1611((undefined1  [16])0x0,0);
      local_d8 = (undefined1  [16])0x0;
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (undefined1  [16])0x0;
      local_a8 = (undefined1  [16])0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      uStack_5d = 0;
      auStack_58 = SUB1611((undefined1  [16])0x0,5);
      iVar2 = mbedtls_asn1_write_mpi(&local_100,local_d8,local_e8);
      iVar3 = iVar2;
      if ((-1 < iVar2) && (iVar3 = mbedtls_asn1_write_mpi(&local_100,local_d8,local_f8), -1 < iVar3)
         ) {
        lVar5 = (long)iVar3;
        iVar4 = mbedtls_asn1_write_len(&local_100,local_d8,iVar2 + lVar5);
        iVar3 = iVar4;
        if ((-1 < iVar4) && (iVar3 = mbedtls_asn1_write_tag(&local_100,local_d8,0x30), -1 < iVar3))
        {
          __n = (long)iVar3 + (long)iVar4 + iVar2 + lVar5;
          if (param_6 < __n) {
            iVar3 = -0x4f00;
          }
          else {
            memcpy(param_5,local_100,__n);
            *param_7 = __n;
            iVar3 = iVar1;
          }
        }
      }
    }
    mbedtls_mpi_free(local_f8);
    mbedtls_mpi_free(local_e8);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



void mbedtls_ecdsa_write_signature(void)

{
  mbedtls_ecdsa_write_signature_restartable();
  return;
}



int mbedtls_ecdsa_read_signature_restartable
              (long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
              undefined8 param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  param_5 = param_4 + param_5;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  mbedtls_mpi_init(local_68);
  mbedtls_mpi_init(local_58);
  iVar1 = mbedtls_asn1_get_tag(&local_78,param_5,&local_70,0x30);
  if (iVar1 == 0) {
    if (param_5 != local_70 + local_78) {
      iVar1 = -0x4fe6;
      goto LAB_00100bfe;
    }
    iVar1 = mbedtls_asn1_get_mpi(&local_78,param_5,local_68);
    if ((iVar1 == 0) && (iVar1 = mbedtls_asn1_get_mpi(&local_78,param_5,local_58), iVar1 == 0)) {
      iVar1 = mbedtls_ecdsa_verify_restartable
                        (param_1,param_2,param_3,param_1 + 0xd0,local_68,local_58,param_6);
      if ((iVar1 == 0) && (local_78 != param_5)) {
        iVar1 = -0x4c00;
      }
      goto LAB_00100bfe;
    }
  }
  iVar1 = iVar1 + -0x4f80;
LAB_00100bfe:
  mbedtls_mpi_free(local_68);
  mbedtls_mpi_free(local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void mbedtls_ecdsa_read_signature(void)

{
  mbedtls_ecdsa_read_signature_restartable();
  return;
}



void mbedtls_ecdsa_genkey(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = mbedtls_ecp_group_load();
  if (iVar1 != 0) {
    return;
  }
  mbedtls_ecp_gen_keypair(param_1,param_1 + 0xc0,param_1 + 0xd0,param_3,param_4);
  return;
}



int mbedtls_ecdsa_from_keypair(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = mbedtls_ecp_group_copy();
  if ((((iVar1 != 0) || (iVar1 = mbedtls_mpi_copy(param_1 + 0xc0,param_2 + 0xc0), iVar1 != 0)) ||
      (iVar1 = mbedtls_ecp_copy(param_1 + 0xd0,param_2 + 0xd0), iVar1 != 0)) && (param_1 != 0)) {
    mbedtls_ecp_keypair_free(param_1);
  }
  return iVar1;
}



void mbedtls_ecdsa_init(void)

{
  mbedtls_ecp_keypair_init();
  return;
}



void mbedtls_ecdsa_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_ecp_keypair_free();
    return;
  }
  return;
}


