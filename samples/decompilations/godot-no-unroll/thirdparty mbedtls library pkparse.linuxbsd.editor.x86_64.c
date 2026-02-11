
int pk_get_pk_alg(undefined8 param_1,undefined8 param_2,int *param_3,undefined1 (*param_4) [16],
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_4[1] = 0;
  *param_4 = (undefined1  [16])0x0;
  iVar1 = mbedtls_asn1_get_alg(param_1,param_2,auStack_48);
  if (iVar1 == 0) {
    iVar2 = mbedtls_oid_get_pk_alg(auStack_48,param_3);
    iVar1 = 0;
    if (iVar2 == -0x2e) {
      iVar2 = mbedtls_oid_get_ec_grp_algid(auStack_48,param_5);
      if (iVar2 == 0) {
        *param_3 = 2;
        goto LAB_0010004b;
      }
    }
    else if (iVar2 == 0) {
      if (*param_3 == 1) {
        if ((*(int *)*param_4 == 5) || (*(int *)*param_4 == 0)) {
          if (*(long *)(*param_4 + 8) != 0) {
            iVar1 = -0x3a80;
          }
        }
        else {
          iVar1 = -0x3a80;
        }
      }
      goto LAB_0010004b;
    }
    iVar1 = -0x3c80;
  }
  else {
    iVar1 = iVar1 + -0x3a80;
  }
LAB_0010004b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



ulong pk_use_ecparams(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  int local_1d4;
  byte *local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [16];
  undefined1 local_1b0 [16];
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  long local_150;
  long local_148;
  long local_108;
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  long local_90;
  long local_88;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 6) {
    iVar2 = mbedtls_oid_get_ec_grp(param_1,&local_1d0);
    if (iVar2 != 0) {
      uVar7 = 0xffffc600;
      goto LAB_0010042f;
    }
LAB_00100472:
    uVar7 = mbedtls_pk_ecc_set_group(param_2,(ulong)local_1d0 & 0xffffffff);
  }
  else {
    mbedtls_ecp_group_init(local_1c8);
    local_1d0 = *(byte **)(param_1 + 4);
    pbVar9 = local_1d0 + *(long *)(param_1 + 2);
    iVar2 = mbedtls_asn1_get_int(&local_1d0,pbVar9,&local_1d4);
    if (iVar2 == 0) {
      if (local_1d4 - 1U < 3) {
        uVar3 = mbedtls_asn1_get_tag(&local_1d0,pbVar9,&local_108,0x30);
        if (uVar3 == 0) {
          pbVar5 = local_1d0 + local_108;
          uVar3 = mbedtls_asn1_get_tag(&local_1d0,pbVar5,&local_108,6);
          if (uVar3 == 0) {
            if (((local_108 == 7) && (*(int *)local_1d0 == -0x31b779d6)) &&
               (*(int *)(local_1d0 + 3) == 0x1013dce)) {
              local_1d0 = local_1d0 + 7;
              iVar2 = mbedtls_asn1_get_mpi(&local_1d0,pbVar5,local_1c0);
              if (iVar2 != 0) goto LAB_0010021a;
              local_150 = mbedtls_mpi_bitlen(local_1c0);
              if (pbVar5 == local_1d0) {
                uVar3 = mbedtls_asn1_get_tag(&local_1d0,pbVar9,&local_108,0x30);
                if (uVar3 == 0) {
                  pbVar5 = local_1d0 + local_108;
                  iVar2 = mbedtls_asn1_get_tag(&local_1d0,pbVar5,&local_108,4);
                  if ((iVar2 != 0) ||
                     (iVar2 = mbedtls_mpi_read_binary(local_1b0,local_1d0,local_108), iVar2 != 0)) {
                    uVar3 = iVar2 - 0x3d00;
                    goto LAB_0010023f;
                  }
                  local_1d0 = local_1d0 + local_108;
                  iVar2 = mbedtls_asn1_get_tag(&local_1d0,pbVar5,&local_108,4);
                  if ((iVar2 != 0) ||
                     (iVar2 = mbedtls_mpi_read_binary(local_1a0,local_1d0,local_108), iVar2 != 0)) {
LAB_0010075a:
                    uVar3 = iVar2 - 0x3d00;
                    goto LAB_0010023f;
                  }
                  local_1d0 = local_1d0 + local_108;
                  iVar2 = mbedtls_asn1_get_tag(&local_1d0,pbVar5,&local_108,3);
                  if (iVar2 == 0) {
                    local_1d0 = local_1d0 + local_108;
                  }
                  if (pbVar5 != local_1d0) goto LAB_00100793;
                  iVar2 = mbedtls_asn1_get_tag(&local_1d0,pbVar9,&local_108,4);
                  if (iVar2 != 0) goto LAB_0010075a;
                  iVar2 = mbedtls_ecp_point_read_binary(local_1c8,local_190,local_1d0,local_108);
                  if ((iVar2 != 0) &&
                     (((((iVar2 != -0x4e80 || (1 < (byte)(*local_1d0 - 2))) ||
                        (lVar8 = mbedtls_mpi_size(local_1c0), lVar8 + 1 != local_108)) ||
                       ((iVar2 = mbedtls_mpi_read_binary(local_190,local_1d0 + 1,lVar8), iVar2 != 0
                        || (iVar2 = mbedtls_mpi_lset(local_180,(long)(int)(*local_1d0 - 2)),
                           iVar2 != 0)))) || (iVar2 = mbedtls_mpi_lset(local_170,1), iVar2 != 0))))
                  goto LAB_00100748;
                  local_1d0 = local_1d0 + local_108;
                  iVar2 = mbedtls_asn1_get_mpi(&local_1d0,pbVar9,local_160);
                  if (iVar2 != 0) {
                    uVar3 = iVar2 - 0x3d00;
                    goto LAB_0010023f;
                  }
                  local_148 = mbedtls_mpi_bitlen(local_160);
                  goto LAB_0010024f;
                }
              }
              else {
LAB_00100793:
                uVar3 = 0xffffc29a;
              }
            }
            else {
              uVar3 = 0xffffc680;
            }
          }
        }
      }
      else {
LAB_00100748:
        uVar3 = 0xffffc300;
      }
    }
    else {
LAB_0010021a:
      uVar3 = iVar2 - 0x3d00;
LAB_0010023f:
      if (uVar3 == 0) {
LAB_0010024f:
        local_1e8 = local_190;
        local_1f0 = local_1a0;
        local_1f8 = local_1b0;
        mbedtls_ecp_group_init(&local_108);
        piVar6 = (int *)mbedtls_ecp_grp_id_list();
        iVar2 = *piVar6;
        while (iVar2 != 0) {
          mbedtls_ecp_group_free(&local_108);
          uVar3 = mbedtls_ecp_group_load(&local_108,*piVar6);
          if (uVar3 != 0) {
            mbedtls_ecp_group_free(&local_108);
            local_1d0 = (byte *)CONCAT44(local_1d0._4_4_,*piVar6);
            goto LAB_001003fa;
          }
          if ((((local_150 == local_90) && (local_148 == local_88)) &&
              ((iVar2 = mbedtls_mpi_cmp_mpi(local_1c0,local_100), iVar2 == 0 &&
               (((iVar2 = mbedtls_mpi_cmp_mpi(local_1f8,local_f0), iVar2 == 0 &&
                 (iVar2 = mbedtls_mpi_cmp_mpi(local_1f0,local_e0), iVar2 == 0)) &&
                (iVar2 = mbedtls_mpi_cmp_mpi(local_160,local_a0), iVar2 == 0)))))) &&
             ((iVar2 = mbedtls_mpi_cmp_mpi(local_1e8,local_d0), iVar2 == 0 &&
              (iVar2 = mbedtls_mpi_cmp_mpi(local_170,local_b0), iVar2 == 0)))) {
            iVar2 = mbedtls_mpi_get_bit(local_180,0);
            iVar4 = mbedtls_mpi_get_bit(local_c0,0);
            if (iVar2 == iVar4) break;
          }
          piVar1 = piVar6 + 1;
          piVar6 = piVar6 + 1;
          iVar2 = *piVar1;
        }
        mbedtls_ecp_group_free(&local_108);
        local_1d0 = (byte *)CONCAT44(local_1d0._4_4_,*piVar6);
        if (*piVar6 != 0) {
          mbedtls_mpi_free(local_160);
          mbedtls_mpi_free(local_1c0);
          mbedtls_mpi_free(local_1f8);
          mbedtls_mpi_free(local_1f0);
          mbedtls_ecp_point_free(local_1e8);
          goto LAB_00100472;
        }
        uVar3 = 0xffffb180;
      }
    }
LAB_001003fa:
    local_1e8 = local_190;
    local_1f0 = local_1a0;
    local_1f8 = local_1b0;
    mbedtls_mpi_free(local_160);
    mbedtls_mpi_free(local_1c0);
    mbedtls_mpi_free(local_1f8);
    mbedtls_mpi_free(local_1f0);
    mbedtls_ecp_point_free(local_1e8);
    uVar7 = (ulong)uVar3;
  }
LAB_0010042f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong pk_parse_key_sec1_der
                (undefined8 param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5
                )

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long in_FS_OFFSET;
  int local_6c;
  long local_68;
  byte *local_60;
  uint local_58 [2];
  long local_50;
  byte *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = 0;
  local_50 = 0;
  local_48 = (byte *)0x0;
  local_60 = param_2;
  iVar4 = mbedtls_asn1_get_tag(&local_60,param_2 + param_3,&local_68,0x30);
  if (iVar4 == 0) {
    pbVar6 = local_60 + local_68;
    iVar4 = mbedtls_asn1_get_int(&local_60,pbVar6,&local_6c);
    if (iVar4 == 0) {
      if (local_6c != 1) {
        uVar5 = 0xffffc280;
        goto LAB_0010084c;
      }
      iVar4 = mbedtls_asn1_get_tag(&local_60,pbVar6,&local_68,4);
      pbVar3 = local_60;
      lVar2 = local_68;
      if (iVar4 != 0) goto LAB_00100847;
      local_60 = local_60 + local_68;
      if (local_60 != pbVar6) {
        iVar4 = mbedtls_asn1_get_tag(&local_60,pbVar6,&local_68,0xa0);
        if (iVar4 != 0) {
          if (iVar4 != -0x62) goto LAB_00100847;
          goto LAB_001008f5;
        }
        pbVar1 = local_60 + local_68;
        if (local_68 < 1) {
          uVar5 = 0xffffc2a0;
          goto LAB_0010084c;
        }
        local_58[0] = (uint)*local_60;
        if ((local_58[0] != 6) && (*local_60 != 0x30)) {
          uVar5 = 0xffffc29e;
          goto LAB_0010084c;
        }
        iVar4 = mbedtls_asn1_get_tag(&local_60,pbVar1,&local_50);
        if (iVar4 != 0) {
          uVar5 = (ulong)(iVar4 - 0x3d00U);
          if (iVar4 - 0x3d00U != 0) goto LAB_0010084c;
LAB_00100a14:
          uVar5 = pk_use_ecparams(local_58,param_1);
          if ((int)uVar5 != 0) goto LAB_0010084c;
          goto LAB_001008f5;
        }
        local_48 = local_60;
        local_60 = local_60 + local_50;
        if (pbVar1 == local_60) goto LAB_00100a14;
LAB_00100a4a:
        uVar5 = 0xffffc29a;
        goto LAB_0010084c;
      }
LAB_001008f5:
      uVar5 = mbedtls_pk_ecc_set_key(param_1,pbVar3,lVar2);
      if ((int)uVar5 != 0) goto LAB_0010084c;
      if (local_60 == pbVar6) {
LAB_00100936:
        uVar5 = mbedtls_pk_ecc_set_pubkey_from_prv(param_1,pbVar3,lVar2,param_4,param_5);
        goto LAB_0010084c;
      }
      iVar4 = mbedtls_asn1_get_tag(&local_60,pbVar6,&local_68,0xa1);
      if (iVar4 == 0) {
        pbVar6 = local_60 + local_68;
        iVar4 = mbedtls_asn1_get_bitstring_null(&local_60,pbVar6,&local_68);
        if (iVar4 == 0) {
          if (pbVar6 != local_60 + local_68) goto LAB_00100a4a;
          uVar5 = mbedtls_pk_ecc_set_pubkey(param_1,local_60,(long)pbVar6 - (long)local_60);
          if ((int)uVar5 == 0) goto LAB_0010084c;
          if ((int)uVar5 != -0x4e80) {
            uVar5 = 0xffffc300;
            goto LAB_0010084c;
          }
          goto LAB_00100936;
        }
      }
      else if (iVar4 == -0x62) goto LAB_00100936;
    }
  }
LAB_00100847:
  uVar5 = (ulong)(iVar4 - 0x3d00);
LAB_0010084c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int pk_parse_key_pkcs8_unencrypted_der
              (long *param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_8c;
  int local_88;
  uint local_84;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long lStack_60;
  int local_58 [2];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_84 = 0;
  local_78 = param_2;
  iVar2 = mbedtls_asn1_get_tag(&local_78,param_2 + param_3,&local_80,0x30);
  if (iVar2 == 0) {
    lVar6 = local_80 + local_78;
    iVar2 = mbedtls_asn1_get_int(&local_78,lVar6,&local_8c);
    if (iVar2 == 0) {
      if (local_8c != 0) {
        iVar2 = -0x3d80;
        goto LAB_00100add;
      }
      iVar2 = pk_get_pk_alg(&local_78,lVar6,&local_88,local_58,&local_84);
      if (iVar2 != 0) goto LAB_00100add;
      iVar2 = mbedtls_asn1_get_tag(&local_78,lVar6,&local_80,4);
      if (iVar2 == 0) {
        if (local_80 == 0) {
          iVar2 = -0x3d60;
          goto LAB_00100add;
        }
        lVar5 = mbedtls_pk_info_from_type(local_88);
        if (lVar5 != 0) {
          iVar2 = mbedtls_pk_setup(param_1,lVar5);
          lVar1 = local_78;
          lVar5 = local_80;
          if (iVar2 != 0) goto LAB_00100add;
          if (local_88 == 1) {
            local_68 = *param_1;
            lStack_60 = param_1[1];
            iVar3 = mbedtls_pk_get_type(&local_68);
            lVar6 = 0;
            if (iVar3 == 1) {
              lVar6 = lStack_60;
            }
            iVar3 = mbedtls_rsa_parse_key(lVar6,lVar1,lVar5);
            if (iVar3 != 0) {
              mbedtls_pk_free(param_1);
              iVar2 = iVar3;
              goto LAB_00100add;
            }
LAB_00100cef:
            if (param_2 + param_3 != local_80 + local_78) {
              iVar2 = -0x3d66;
            }
            goto LAB_00100add;
          }
          if (local_88 - 2U < 2) {
            if ((local_84 & 0xfffffffb) == 9) {
              if ((local_50 == 0) && (local_58[0] == 0)) {
                iVar3 = mbedtls_pk_ecc_set_group(param_1);
                if (iVar3 == 0) {
                  local_70 = local_78;
                  iVar4 = mbedtls_asn1_get_tag(&local_70,local_78 + local_80,&local_68,4);
                  iVar3 = iVar4 + -0x3d00;
                  if (iVar4 == 0) {
                    if (lVar6 != local_70 + local_68) goto LAB_00100d94;
                    iVar3 = mbedtls_pk_ecc_set_key(param_1);
                    if (iVar3 != 0) goto LAB_00100ca0;
                    iVar3 = mbedtls_pk_ecc_set_pubkey_from_prv
                                      (param_1,local_70,local_68,param_4,param_5);
                  }
joined_r0x00100ced:
                  if (iVar3 == 0) goto LAB_00100cef;
                }
              }
              else {
LAB_00100d94:
                iVar3 = -0x3d00;
              }
            }
            else {
              iVar3 = pk_use_ecparams(local_58,param_1);
              if (iVar3 == 0) {
                iVar3 = pk_parse_key_sec1_der(param_1,local_78,local_80,param_4,param_5);
                goto joined_r0x00100ced;
              }
            }
LAB_00100ca0:
            mbedtls_pk_free(param_1);
            iVar2 = iVar3;
            goto LAB_00100add;
          }
        }
        iVar2 = -0x3c80;
        goto LAB_00100add;
      }
    }
  }
  iVar2 = iVar2 + -0x3d00;
LAB_00100add:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



ulong mbedtls_pk_parse_key_pkcs8_encrypted_der
                (undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined4 local_98;
  undefined4 local_94;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  long local_70;
  long *local_68;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_88 = param_2;
  if (param_5 == 0) {
    uVar2 = 0xffffc400;
    goto LAB_00100e23;
  }
  iVar1 = mbedtls_asn1_get_tag(&local_88,param_2 + param_3,&local_90,0x30);
  if (iVar1 == 0) {
    lVar3 = local_90 + local_88;
    iVar1 = mbedtls_asn1_get_alg(&local_88,lVar3,local_78);
    if ((iVar1 == 0) &&
       (iVar1 = mbedtls_asn1_get_tag(&local_88,lVar3,&local_90,4), lVar3 = local_88, iVar1 == 0)) {
      iVar1 = mbedtls_oid_get_pkcs12_pbe_alg(local_78,&local_94,&local_98);
      if (iVar1 == 0) {
        uVar2 = mbedtls_pkcs12_pbe_ext
                          (local_58,0,local_98,local_94,param_4,param_5,local_88,local_90,lVar3,
                           local_90,&local_80);
        if ((int)uVar2 == 0) {
LAB_00100f40:
          uVar2 = pk_parse_key_pkcs8_unencrypted_der(param_1,lVar3,local_80,param_6,param_7);
          goto LAB_00100e23;
        }
        if ((int)uVar2 != -0x1e00) goto LAB_00100e23;
      }
      else {
        if (((local_70 != 9) || (*local_68 != 0x5010df78648862a)) || ((char)local_68[1] != '\r')) {
          uVar2 = 0xffffc680;
          goto LAB_00100e23;
        }
        uVar2 = mbedtls_pkcs5_pbes2_ext
                          (local_58,0,param_4,param_5,local_88,local_90,lVar3,local_90,&local_80);
        if ((int)uVar2 == 0) goto LAB_00100f40;
        if ((int)uVar2 != -0x2e00) goto LAB_00100e23;
      }
      uVar2 = 0xffffc480;
      goto LAB_00100e23;
    }
  }
  uVar2 = (ulong)(iVar1 - 0x3d00);
LAB_00100e23:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int mbedtls_pk_parse_subpubkey(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  int local_78;
  uint local_74;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_58 [2];
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_74 = 0;
  iVar1 = mbedtls_asn1_get_tag(param_1,param_2,&local_70,0x30);
  iVar4 = iVar1 + -0x3d00;
  if (iVar1 != 0) goto LAB_00101013;
  lVar6 = local_70 + *param_1;
  iVar4 = pk_get_pk_alg(param_1,lVar6,&local_78,local_58,&local_74);
  if (iVar4 != 0) goto LAB_00101013;
  iVar1 = mbedtls_asn1_get_bitstring_null(param_1,lVar6,&local_70);
  iVar4 = iVar1 + -0x3b00;
  if (iVar1 != 0) goto LAB_00101013;
  if (lVar6 != local_70 + *param_1) {
    iVar4 = -0x3b66;
    goto LAB_00101013;
  }
  lVar3 = mbedtls_pk_info_from_type(local_78);
  if (lVar3 == 0) {
    iVar4 = -0x3c80;
    goto LAB_00101013;
  }
  iVar4 = mbedtls_pk_setup(param_3,lVar3);
  if (iVar4 != 0) goto LAB_00101013;
  if (local_78 == 1) {
    local_68 = *param_3;
    uStack_60 = param_3[1];
    lVar3 = *param_1;
    iVar1 = mbedtls_pk_get_type(&local_68);
    uVar5 = 0;
    if (iVar1 == 1) {
      uVar5 = uStack_60;
    }
    iVar1 = mbedtls_rsa_parse_pubkey(uVar5,lVar3,lVar6 - lVar3);
    if (iVar1 == 0) {
      *param_1 = lVar6;
      goto LAB_00101013;
    }
    iVar2 = -0x3b00;
    if (iVar1 + 0x6cU < 0xd) {
      iVar2 = iVar1 + -0x3b00;
    }
  }
  else if (local_78 - 2U < 2) {
    if ((local_74 & 0xfffffffb) == 9) {
      if ((local_50 != 0) || (local_58[0] != 0)) {
        iVar2 = -0x3d00;
        goto LAB_001010d3;
      }
      iVar2 = mbedtls_pk_ecc_set_group(param_3);
    }
    else {
      iVar2 = pk_use_ecparams(local_58,param_3);
    }
    if (iVar2 == 0) {
      iVar2 = mbedtls_pk_ecc_set_pubkey(param_3,*param_1,lVar6 - *param_1);
      *param_1 = lVar6;
      if (iVar2 == 0) goto LAB_00101013;
    }
  }
  else {
    iVar2 = -0x3c80;
  }
LAB_001010d3:
  iVar4 = iVar2;
  mbedtls_pk_free(param_3);
LAB_00101013:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



ulong mbedtls_pk_parse_key
                (undefined8 *param_1,long param_2,size_t param_3,undefined8 param_4,long param_5,
                undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined1 auVar7 [16];
  undefined1 *puVar8;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
LAB_001014c3:
    uVar6 = 0xffffc300;
    goto LAB_0010138f;
  }
  mbedtls_pem_init(&local_58);
  pcVar1 = (char *)(param_2 + -1 + param_3);
  if (*pcVar1 != '\0') goto LAB_00101247;
  puVar8 = local_70;
  auVar7 = mbedtls_pem_read_buffer
                     (&local_58,"-----BEGIN RSA PRIVATE KEY-----","-----END RSA PRIVATE KEY-----",
                      param_2,param_4,param_5);
  uVar6 = auVar7._0_8_;
  iVar2 = auVar7._0_4_;
  if (iVar2 != 0) {
    if (iVar2 == -0x1380) {
LAB_001014b1:
      uVar6 = 0xffffc480;
      goto LAB_0010138f;
    }
    if (iVar2 == -0x1300) {
LAB_001014d0:
      uVar6 = 0xffffc400;
      goto LAB_0010138f;
    }
    if (iVar2 != -0x1080) goto LAB_0010138f;
    if (*pcVar1 != '\0') goto LAB_00101247;
    uVar6 = mbedtls_pem_read_buffer
                      (&local_58,"-----BEGIN EC PRIVATE KEY-----","-----END EC PRIVATE KEY-----",
                       param_2,param_4,param_5,local_70);
    iVar2 = (int)uVar6;
    if (iVar2 == 0) {
      uVar4 = mbedtls_pk_info_from_type(2);
      uVar3 = mbedtls_pk_setup(param_1,uVar4);
      if (uVar3 == 0) {
        uVar3 = pk_parse_key_sec1_der(param_1,local_58,local_50,param_6,param_7);
        goto joined_r0x00101408;
      }
      goto LAB_0010140a;
    }
    if (iVar2 == -0x1380) goto LAB_001014b1;
    if (iVar2 == -0x1300) goto LAB_001014d0;
    if (iVar2 != -0x1080) goto LAB_0010138f;
    if (*pcVar1 == '\0') {
      uVar6 = mbedtls_pem_read_buffer
                        (&local_58,"-----BEGIN PRIVATE KEY-----","-----END PRIVATE KEY-----",param_2
                         ,0,0,local_70);
      if ((int)uVar6 == 0) {
        uVar3 = pk_parse_key_pkcs8_unencrypted_der(param_1,local_58,local_50,param_6,param_7);
joined_r0x00101655:
        if (uVar3 == 0) goto LAB_00101418;
        goto LAB_0010140a;
      }
      if ((int)uVar6 != -0x1080) goto LAB_0010138f;
      if (*pcVar1 == '\0') {
        uVar6 = mbedtls_pem_read_buffer
                          (&local_58,"-----BEGIN ENCRYPTED PRIVATE KEY-----",
                           "-----END ENCRYPTED PRIVATE KEY-----",param_2,0,0,local_70);
        if ((int)uVar6 == 0) {
          uVar3 = mbedtls_pk_parse_key_pkcs8_encrypted_der
                            (param_1,local_58,local_50,param_4,param_5,param_6,param_7);
          goto joined_r0x00101655;
        }
        if ((int)uVar6 != -0x1080) goto LAB_0010138f;
      }
    }
LAB_00101247:
    if (param_5 == 0) {
      mbedtls_pk_free(param_1);
      mbedtls_pk_init(param_1);
LAB_00101260:
      iVar2 = pk_parse_key_pkcs8_unencrypted_der(param_1,param_2,param_3,param_6,param_7);
      if (iVar2 != 0) {
        mbedtls_pk_free(param_1);
        mbedtls_pk_init(param_1);
        uVar4 = mbedtls_pk_info_from_type(1);
        iVar2 = mbedtls_pk_setup(param_1,uVar4);
        if (iVar2 == 0) {
          local_68 = *param_1;
          uStack_60 = param_1[1];
          iVar2 = mbedtls_pk_get_type(&local_68);
          uVar4 = 0;
          if (iVar2 == 1) {
            uVar4 = uStack_60;
          }
          iVar2 = mbedtls_rsa_parse_key(uVar4,param_2,param_3);
          if (iVar2 == 0) goto LAB_00101323;
        }
        mbedtls_pk_free(param_1);
        mbedtls_pk_init(param_1);
        uVar4 = mbedtls_pk_info_from_type(2);
        iVar2 = mbedtls_pk_setup(param_1,uVar4);
        if ((iVar2 != 0) ||
           (iVar2 = pk_parse_key_sec1_der(param_1,param_2,param_3,param_6,param_7), iVar2 != 0)) {
          mbedtls_pk_free(param_1);
          goto LAB_001014c3;
        }
      }
    }
    else {
      pvVar5 = calloc(1,param_3);
      if (pvVar5 == (void *)0x0) {
        uVar6 = 0xffffc080;
        goto LAB_0010138f;
      }
      __memcpy_chk(pvVar5,param_2,param_3,param_3);
      iVar2 = mbedtls_pk_parse_key_pkcs8_encrypted_der
                        (param_1,pvVar5,param_3,param_4,param_5,param_6,param_7);
      mbedtls_zeroize_and_free(pvVar5,param_3);
      if (iVar2 != 0) {
        mbedtls_pk_free(param_1);
        mbedtls_pk_init(param_1);
        if (iVar2 == -0x3b80) goto LAB_001014b1;
        goto LAB_00101260;
      }
    }
LAB_00101323:
    uVar6 = 0;
    goto LAB_0010138f;
  }
  uVar4 = mbedtls_pk_info_from_type(1,0x101238,auVar7._8_8_,puVar8);
  uVar3 = mbedtls_pk_setup(param_1,uVar4);
  if (uVar3 == 0) {
    local_68 = *param_1;
    uStack_60 = param_1[1];
    iVar2 = mbedtls_pk_get_type(&local_68);
    uVar4 = 0;
    if (iVar2 == 1) {
      uVar4 = uStack_60;
    }
    uVar3 = mbedtls_rsa_parse_key(uVar4,local_58,local_50);
joined_r0x00101408:
    if (uVar3 != 0) goto LAB_0010140a;
  }
  else {
LAB_0010140a:
    mbedtls_pk_free(param_1);
  }
LAB_00101418:
  mbedtls_pem_free(&local_58);
  uVar6 = (ulong)uVar3;
LAB_0010138f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_pk_parse_public_key(undefined8 *param_1,long param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 *puVar5;
  long local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    iVar2 = -0x3d00;
    goto LAB_00101720;
  }
  pcVar1 = (char *)(param_2 + -1 + param_3);
  mbedtls_pem_init(&local_58);
  if (*pcVar1 != '\0') goto LAB_001016ec;
  puVar5 = local_70;
  iVar2 = mbedtls_pem_read_buffer
                    (&local_58,"-----BEGIN RSA PUBLIC KEY-----","-----END RSA PUBLIC KEY-----",
                     param_2,0,0);
  if (iVar2 == 0) {
    local_78 = local_58;
    lVar3 = mbedtls_pk_info_from_type(1,0x1016e6,extraout_RDX,puVar5);
    if (lVar3 != 0) {
      iVar2 = mbedtls_pk_setup(param_1);
      lVar3 = local_78;
      if (iVar2 == 0) {
        local_68 = *param_1;
        uStack_60 = param_1[1];
        iVar2 = mbedtls_pk_get_type(&local_68);
        uVar4 = 0;
        if (iVar2 == 1) {
          uVar4 = uStack_60;
        }
        iVar2 = mbedtls_rsa_parse_pubkey(uVar4,lVar3,local_50);
        if (iVar2 != 0) {
          mbedtls_pk_free(param_1);
        }
      }
      goto LAB_00101793;
    }
    mbedtls_pem_free(&local_58,0);
  }
  else {
    if (iVar2 != -0x1080) {
LAB_00101793:
      mbedtls_pem_free(&local_58);
      goto LAB_00101720;
    }
    if (*pcVar1 == '\0') {
      iVar2 = mbedtls_pem_read_buffer
                        (&local_58,"-----BEGIN PUBLIC KEY-----","-----END PUBLIC KEY-----",param_2,0
                         ,0,local_70);
      if (iVar2 == 0) {
        local_78 = local_58;
        iVar2 = mbedtls_pk_parse_subpubkey(&local_78,local_58 + local_50,param_1);
        goto LAB_00101793;
      }
      if (iVar2 != -0x1080) {
        mbedtls_pem_free(&local_58);
        goto LAB_00101720;
      }
    }
LAB_001016ec:
    mbedtls_pem_free(&local_58);
    lVar3 = mbedtls_pk_info_from_type(1);
    if (lVar3 != 0) {
      iVar2 = mbedtls_pk_setup(param_1,lVar3);
      if (iVar2 == 0) {
        local_68 = *param_1;
        uStack_60 = param_1[1];
        local_78 = param_2;
        iVar2 = mbedtls_pk_get_type(&local_68);
        uVar4 = 0;
        if (iVar2 == 1) {
          uVar4 = uStack_60;
        }
        iVar2 = mbedtls_rsa_parse_pubkey(uVar4,param_2,param_3);
        if (iVar2 != 0) {
          mbedtls_pk_free(param_1);
          if (iVar2 == -0x62) {
            local_78 = param_2;
            iVar2 = mbedtls_pk_parse_subpubkey(&local_78,param_2 + param_3,param_1);
          }
        }
      }
      goto LAB_00101720;
    }
  }
  iVar2 = -0x3c80;
LAB_00101720:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_pk_load_file(char *param_1,long *param_2,size_t *param_3)

{
  FILE *__stream;
  size_t sVar1;
  void *__ptr;
  char *pcVar2;
  
  __stream = fopen64(param_1,"rb");
  if (__stream != (FILE *)0x0) {
    setbuf(__stream,(char *)0x0);
    fseek(__stream,0,2);
    sVar1 = ftell(__stream);
    if (sVar1 == 0xffffffffffffffff) {
      fclose(__stream);
    }
    else {
      fseek(__stream,0,0);
      *param_3 = sVar1;
      __ptr = calloc(1,sVar1 + 1);
      *param_2 = (long)__ptr;
      if (__ptr == (void *)0x0) {
        fclose(__stream);
        return 0xffffc080;
      }
      sVar1 = fread(__ptr,1,sVar1,__stream);
      if (*param_3 == sVar1) {
        fclose(__stream);
        *(undefined1 *)(*param_2 + *param_3) = 0;
        pcVar2 = strstr((char *)*param_2,"-----BEGIN ");
        if (pcVar2 != (char *)0x0) {
          *param_3 = *param_3 + 1;
        }
        return 0;
      }
      fclose(__stream);
      mbedtls_zeroize_and_free(*param_2,*param_3);
    }
  }
  return 0xffffc200;
}



ulong mbedtls_pk_parse_keyfile
                (undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined8 uStack_70;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = 0x101aa0;
  uVar2 = mbedtls_pk_load_file(param_2,&local_48,&local_50);
  if ((int)uVar2 == 0) {
    if (param_3 == (char *)0x0) {
      sVar3 = 0;
      param_3 = (char *)0x0;
    }
    else {
      uStack_70 = 0x101abb;
      sVar3 = strlen(param_3);
    }
    uVar1 = mbedtls_pk_parse_key(param_1,local_48,local_50,param_3,sVar3,param_4);
    mbedtls_zeroize_and_free(local_48,local_50,param_5,uStack_70);
    uVar2 = (ulong)uVar1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_pk_parse_public_keyfile(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_pk_load_file(param_2,&local_38,&local_40);
  if (iVar1 == 0) {
    iVar1 = mbedtls_pk_parse_public_key(param_1,local_38,local_40);
    mbedtls_zeroize_and_free(local_38,local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


