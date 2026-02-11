
int pk_write_ec_private_isra_0(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  ulong local_88;
  long local_80;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_3;
  local_80 = param_4;
  iVar2 = mbedtls_pk_get_type(&local_88,param_2,param_4,0);
  if (2 < iVar2 - 2U) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_88 = *(long *)(local_80 + 0x78) + 7U >> 3;
  iVar2 = mbedtls_ecp_write_key_ext(local_80,&local_88,local_78,0x42);
  if (iVar2 == 0) {
    iVar2 = mbedtls_asn1_write_octet_string(param_1,param_2,local_78,local_88);
  }
  mbedtls_platform_zeroize(local_78,0x42);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong pk_write_ec_pubkey_isra_0(ulong *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 local_a8 [136];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  local_b8 = param_3;
  local_b0 = param_4;
  iVar1 = mbedtls_pk_get_type(&local_b8,param_2,param_4,0);
  lVar3 = 0;
  if (iVar1 - 2U < 3) {
    lVar3 = local_b0;
  }
  uVar2 = mbedtls_ecp_point_write_binary(lVar3,lVar3 + 0xd0,0,&local_c0,local_a8,0x85);
  if ((int)uVar2 == 0) {
    uVar2 = *param_1;
    if ((uVar2 < param_2) || (uVar2 - param_2 < local_c0)) {
      uVar2 = 0xffffff94;
    }
    else {
      *param_1 = uVar2 - local_c0;
      memcpy((void *)(uVar2 - local_c0),local_a8,local_c0);
      uVar2 = local_c0 & 0xffffffff;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_pk_write_pubkey(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_pk_get_type(param_3);
  if (iVar1 == 1) {
    local_38 = *param_3;
    uStack_30 = param_3[1];
    iVar1 = mbedtls_pk_get_type(&local_38);
    uVar2 = 0;
    if (iVar1 == 1) {
      uVar2 = uStack_30;
    }
    uVar2 = mbedtls_rsa_write_pubkey(uVar2,param_2,param_1);
  }
  else {
    iVar1 = mbedtls_pk_get_type(param_3);
    if (iVar1 == 2) {
      uVar2 = pk_write_ec_pubkey_isra_0(param_1,param_2,*param_3,param_3[1]);
    }
    else {
      uVar2 = 0xffffc680;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_pk_write_pubkey_der(undefined8 *param_1,long param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_88;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint *puStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_68 = 0;
  if (param_3 != 0) {
    local_78 = param_3 + param_2;
    iVar3 = mbedtls_pk_write_pubkey(&local_78,param_2,param_1);
    iVar5 = iVar3;
    if (iVar3 < 0) goto LAB_001003a0;
    if (0 < local_78 - param_2) {
      *(undefined1 *)(local_78 + -1) = 0;
      local_78 = local_78 + -1;
      iVar4 = mbedtls_asn1_write_len(&local_78,param_2,(long)iVar3 + 1);
      iVar5 = iVar4;
      if (-1 < iVar4) {
        iVar5 = mbedtls_asn1_write_tag(&local_78,param_2,3);
        lVar8 = (long)iVar5;
        if (-1 < iVar5) {
          uVar6 = mbedtls_pk_get_type(param_1);
          iVar5 = mbedtls_pk_get_type(param_1);
          local_88 = 0;
          iVar7 = 1;
          if (iVar5 == 2) {
            local_58 = *param_1;
            puStack_50 = (uint *)param_1[1];
            local_88 = 0;
            iVar5 = mbedtls_pk_get_type(&local_58);
            if (2 < iVar5 - 2U) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            uVar1 = *puStack_50;
            if ((uVar1 & 0xfffffffb) == 9) {
              iVar5 = mbedtls_oid_get_oid_by_ec_grp_algid(uVar1,&local_68,&local_70);
              iVar7 = iVar5;
              if (iVar5 != 0) goto LAB_001003a0;
            }
            else {
              iVar5 = mbedtls_oid_get_oid_by_ec_grp(uVar1,&local_60,&local_58);
              if (iVar5 == 0) {
                iVar5 = mbedtls_asn1_write_oid(&local_78,param_2,local_60,local_58);
              }
              if (iVar5 < 0) goto LAB_001003a0;
              local_88 = (long)iVar5;
              iVar7 = 1;
            }
          }
          if (((local_70 != 0) ||
              (iVar5 = mbedtls_oid_get_oid_by_pk_alg(uVar6,&local_68,&local_70), iVar5 == 0)) &&
             (iVar5 = mbedtls_asn1_write_algorithm_identifier_ext
                                (&local_78,param_2,local_68,local_70,local_88,iVar7), -1 < iVar5)) {
            lVar8 = lVar8 + (long)iVar4 + (long)iVar3 + 1 + (long)iVar5;
            iVar3 = mbedtls_asn1_write_len(&local_78,param_2,lVar8);
            iVar5 = iVar3;
            if ((-1 < iVar3) && (iVar5 = mbedtls_asn1_write_tag(&local_78,param_2,0x30), -1 < iVar5)
               ) {
              iVar5 = iVar5 + iVar3 + (int)lVar8;
            }
          }
        }
      }
      goto LAB_001003a0;
    }
  }
  iVar5 = -0x6c;
LAB_001003a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



int mbedtls_pk_write_key_der(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint *puStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    local_68 = param_3 + param_2;
    iVar3 = mbedtls_pk_get_type();
    if (iVar3 == 1) {
      local_58 = *param_1;
      puStack_50 = (uint *)param_1[1];
      iVar3 = mbedtls_pk_get_type(&local_58);
      puVar10 = (uint *)0x0;
      if (iVar3 == 1) {
        puVar10 = puStack_50;
      }
      iVar3 = mbedtls_rsa_write_key(puVar10,param_2,&local_68);
      goto LAB_00100758;
    }
    iVar3 = mbedtls_pk_get_type(param_1);
    if (iVar3 != 2) {
      iVar3 = -0x3980;
      goto LAB_00100758;
    }
    local_58 = *param_1;
    puStack_50 = (uint *)param_1[1];
    iVar3 = mbedtls_pk_get_type(&local_58);
    if (2 < iVar3 - 2U) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if ((*puStack_50 & 0xfffffffb) == 9) {
      local_60 = 0;
      iVar4 = pk_write_ec_private_isra_0(&local_68,param_2,*param_1,param_1[1]);
      iVar3 = iVar4;
      if (-1 < iVar4) {
        iVar5 = mbedtls_asn1_write_len(&local_68,param_2,(long)iVar4);
        iVar3 = iVar5;
        if ((-1 < iVar5) &&
           (iVar6 = mbedtls_asn1_write_tag(&local_68,param_2,4), iVar3 = iVar6, -1 < iVar6)) {
          local_58 = *param_1;
          puStack_50 = (uint *)param_1[1];
          iVar3 = mbedtls_pk_get_type(&local_58);
          if (2 < iVar3 - 2U) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          iVar3 = mbedtls_oid_get_oid_by_ec_grp_algid(*puStack_50,&local_58,&local_60);
          if (((iVar3 == 0) &&
              (iVar7 = mbedtls_asn1_write_algorithm_identifier_ext
                                 (&local_68,param_2,local_58,local_60,0,0), iVar3 = iVar7,
              -1 < iVar7)) && (iVar3 = mbedtls_asn1_write_int(&local_68,param_2,0), -1 < iVar3)) {
            lVar1 = (long)iVar3 + (long)iVar7 + (long)iVar6 + (long)iVar5 + (long)iVar4;
            iVar4 = mbedtls_asn1_write_len(&local_68,param_2,lVar1);
            iVar3 = iVar4;
            if ((-1 < iVar4) && (iVar3 = mbedtls_asn1_write_tag(&local_68,param_2,0x30), -1 < iVar3)
               ) {
              iVar3 = iVar3 + iVar4 + (int)lVar1;
            }
          }
        }
      }
      goto LAB_00100758;
    }
    iVar4 = pk_write_ec_pubkey_isra_0(&local_68,param_2,*param_1,param_1[1]);
    iVar3 = iVar4;
    if (iVar4 < 0) goto LAB_00100758;
    if (0 < local_68 - param_2) {
      *(undefined1 *)(local_68 + -1) = 0;
      local_68 = local_68 + -1;
      iVar5 = mbedtls_asn1_write_len(&local_68,param_2,(long)iVar4 + 1);
      iVar3 = iVar5;
      if ((-1 < iVar5) && (iVar3 = mbedtls_asn1_write_tag(&local_68,param_2,3), -1 < iVar3)) {
        lVar1 = (long)iVar3 + (long)iVar5 + (long)iVar4 + 1;
        iVar4 = mbedtls_asn1_write_len(&local_68,param_2,lVar1);
        iVar3 = iVar4;
        if ((-1 < iVar4) &&
           (iVar5 = mbedtls_asn1_write_tag(&local_68,param_2,0xa1), iVar3 = iVar5, -1 < iVar5)) {
          local_58 = *param_1;
          puStack_50 = (uint *)param_1[1];
          iVar3 = mbedtls_pk_get_type(&local_58);
          if (2 < iVar3 - 2U) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          iVar3 = mbedtls_oid_get_oid_by_ec_grp(*puStack_50,&local_60,&local_58);
          if (iVar3 == 0) {
            iVar3 = mbedtls_asn1_write_oid(&local_68,param_2,local_60,local_58);
          }
          if (-1 < iVar3) {
            lVar9 = (long)iVar3;
            iVar6 = mbedtls_asn1_write_len(&local_68,param_2,lVar9);
            iVar3 = iVar6;
            if ((-1 < iVar6) &&
               (iVar7 = mbedtls_asn1_write_tag(&local_68,param_2,0xa0), iVar3 = iVar7, -1 < iVar7))
            {
              iVar8 = pk_write_ec_private_isra_0(&local_68,param_2,*param_1,param_1[1]);
              iVar3 = iVar8;
              if ((-1 < iVar8) && (iVar3 = mbedtls_asn1_write_int(&local_68,param_2,1), -1 < iVar3))
              {
                lVar1 = (long)iVar3 +
                        iVar4 + lVar1 + (long)iVar5 + lVar9 + (long)iVar6 + (long)iVar7 +
                        (long)iVar8;
                iVar4 = mbedtls_asn1_write_len(&local_68,param_2,lVar1);
                iVar3 = iVar4;
                if ((-1 < iVar4) &&
                   (iVar3 = mbedtls_asn1_write_tag(&local_68,param_2,0x30), -1 < iVar3)) {
                  iVar3 = iVar3 + iVar4 + (int)lVar1;
                }
              }
            }
          }
        }
      }
      goto LAB_00100758;
    }
  }
  iVar3 = -0x6c;
LAB_00100758:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int mbedtls_pk_write_pubkey_pem(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *__ptr;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __ptr = calloc(1,0x826);
  if (__ptr == (void *)0x0) {
    iVar1 = -0x3f80;
  }
  else {
    local_38 = 0;
    iVar1 = mbedtls_pk_write_pubkey_der(param_1,__ptr,0x826);
    if (-1 < iVar1) {
      iVar1 = mbedtls_pem_write_buffer
                        ("-----BEGIN PUBLIC KEY-----\n","-----END PUBLIC KEY-----\n",
                         (long)__ptr + (0x826 - (long)iVar1),(long)iVar1,param_2,param_3,&local_38);
    }
    free(__ptr);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_pk_write_key_pem(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 local_48;
  uint *puStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pvVar4 = calloc(1,0x162f);
  if (pvVar4 == (void *)0x0) {
    iVar2 = -0x3f80;
    goto LAB_00100a9f;
  }
  local_50 = 0;
  iVar2 = mbedtls_pk_write_key_der(param_1,pvVar4,0x162f);
  uStack_60 = extraout_RDX;
  if (-1 < iVar2) {
    uStack_60 = 0x100a7b;
    iVar3 = mbedtls_pk_get_type(param_1);
    if (iVar3 == 1) {
      pcVar5 = "-----END RSA PRIVATE KEY-----\n";
      pcVar6 = "-----BEGIN RSA PRIVATE KEY-----\n";
    }
    else {
      iVar3 = mbedtls_pk_get_type(param_1);
      if (iVar3 != 2) {
        iVar2 = -0x3980;
        uStack_60 = extraout_RDX_00;
        goto LAB_00100a92;
      }
      local_48 = *param_1;
      puStack_40 = (uint *)param_1[1];
      uStack_60 = 0x100b1c;
      iVar3 = mbedtls_pk_get_type(&local_48);
      if (2 < iVar3 - 2U) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      pcVar5 = "-----END EC PRIVATE KEY-----\n";
      pcVar6 = "-----BEGIN EC PRIVATE KEY-----\n";
      if ((*puStack_40 & 0xfffffffb) == 9) {
        pcVar5 = "-----END PRIVATE KEY-----\n";
        pcVar6 = "-----BEGIN PRIVATE KEY-----\n";
      }
    }
    iVar2 = mbedtls_pem_write_buffer
                      (pcVar6,pcVar5,(long)pvVar4 + (0x162f - (long)iVar2),(long)iVar2,param_2,
                       param_3,&local_50);
  }
LAB_00100a92:
  mbedtls_zeroize_and_free(pvVar4,0x162f,uStack_60);
LAB_00100a9f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void pk_write_ec_private_isra_0_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void mbedtls_pk_write_pubkey_der_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void mbedtls_pk_write_key_der_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



void mbedtls_pk_write_key_pem_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


