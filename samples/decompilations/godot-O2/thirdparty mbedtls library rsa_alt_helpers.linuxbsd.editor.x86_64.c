
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int mbedtls_rsa_deduce_primes
              (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long *param_5
              )

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  long in_FS_OFFSET;
  ulong local_b0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = __LC0;
  uStack_70 = _UNK_00100bb8;
  local_68 = __LC1;
  uStack_60 = _UNK_00100bc8;
  local_58 = __LC2;
  uStack_50 = (undefined6)_UNK_00100bd8;
  uStack_4a = 0xdfd3;
  uStack_48 = 0xfbf1efe9e5e3;
  if (((((param_4 == (long *)0x0) || (param_5 == (long *)0x0)) || (*param_4 != 0)) ||
      (((*param_5 != 0 || (iVar2 = mbedtls_mpi_cmp_int(param_1,0), iVar2 < 1)) ||
       ((iVar2 = mbedtls_mpi_cmp_int(param_3,1), iVar2 < 1 ||
        ((iVar2 = mbedtls_mpi_cmp_mpi(param_3,param_1), -1 < iVar2 ||
         (iVar2 = mbedtls_mpi_cmp_int(param_2,1), iVar2 < 1)))))))) ||
     (iVar2 = mbedtls_mpi_cmp_mpi(param_2,param_1), -1 < iVar2)) {
    iVar2 = -4;
    goto LAB_00100141;
  }
  mbedtls_mpi_init(local_88);
  mbedtls_mpi_init(local_98);
  iVar2 = mbedtls_mpi_mul_mpi(local_98,param_3,param_2);
  if ((iVar2 == 0) && (iVar2 = mbedtls_mpi_sub_int(local_98,local_98,1), iVar2 == 0)) {
    uVar1 = mbedtls_mpi_lsb(local_98);
    if (uVar1 != 0) {
      iVar2 = mbedtls_mpi_shift_r(local_98,uVar1);
      if (iVar2 != 0) goto LAB_00100129;
      local_b0 = (ulong)(((uint)*(undefined8 *)*param_1 & 7) == 1);
      do {
        iVar2 = mbedtls_mpi_lset(local_88,*(undefined1 *)((long)&local_78 + local_b0));
        if ((iVar2 != 0) || (iVar2 = mbedtls_mpi_gcd(param_4,local_88,param_1), iVar2 != 0))
        goto LAB_00100129;
        iVar2 = mbedtls_mpi_cmp_int(param_4,1);
        if (iVar2 == 0) {
          iVar2 = mbedtls_mpi_exp_mod(local_88,local_88,local_98,param_1,param_5);
          if (iVar2 != 0) goto LAB_00100129;
          uVar3 = 1;
          do {
            iVar2 = mbedtls_mpi_cmp_int(local_88,1);
            if (iVar2 == 0) break;
            iVar2 = mbedtls_mpi_add_int(local_88,local_88,1);
            if ((iVar2 != 0) || (iVar2 = mbedtls_mpi_gcd(param_4,local_88,param_1), iVar2 != 0))
            goto LAB_00100129;
            iVar2 = mbedtls_mpi_cmp_int(param_4,1);
            if ((iVar2 == 1) && (iVar2 = mbedtls_mpi_cmp_mpi(param_4,param_1), iVar2 == -1)) {
              iVar2 = mbedtls_mpi_div_mpi(param_5,0,param_1,param_4);
              goto LAB_00100129;
            }
            iVar2 = mbedtls_mpi_sub_int(local_88,local_88,1);
            if (((iVar2 != 0) ||
                (iVar2 = mbedtls_mpi_mul_mpi(local_88,local_88,local_88), iVar2 != 0)) ||
               (iVar2 = mbedtls_mpi_mod_mpi(local_88,local_88,param_1), iVar2 != 0))
            goto LAB_00100129;
            uVar3 = uVar3 + 1;
          } while (uVar3 <= uVar1);
          iVar2 = mbedtls_mpi_cmp_int(local_88,1);
          if (iVar2 != 0) break;
        }
        local_b0 = local_b0 + 1;
      } while ((short)local_b0 != 0x36);
    }
    iVar2 = -4;
  }
LAB_00100129:
  mbedtls_mpi_free(local_88);
  mbedtls_mpi_free(local_98);
LAB_00100141:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



int mbedtls_rsa_deduce_private_exponent
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != 0) {
    iVar1 = mbedtls_mpi_cmp_int(param_4,0);
    if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_cmp_int(param_1,1);
      if (0 < iVar1) {
        iVar1 = mbedtls_mpi_cmp_int(param_2,1);
        if (0 < iVar1) {
          iVar1 = mbedtls_mpi_cmp_int(param_3,0);
          if (iVar1 != 0) {
            mbedtls_mpi_init(auStack_68);
            mbedtls_mpi_init(local_58);
            iVar1 = mbedtls_mpi_sub_int(auStack_68,param_1,1);
            if (iVar1 == 0) {
              iVar1 = mbedtls_mpi_sub_int(local_58,param_2,1);
              if (iVar1 == 0) {
                iVar1 = mbedtls_mpi_gcd(param_4,auStack_68,local_58);
                if (iVar1 == 0) {
                  iVar1 = mbedtls_mpi_mul_mpi(auStack_68,auStack_68,local_58);
                  if (iVar1 == 0) {
                    iVar1 = mbedtls_mpi_div_mpi(auStack_68,0,auStack_68,param_4);
                    if (iVar1 == 0) {
                      iVar1 = mbedtls_mpi_inv_mod(param_4,param_3,auStack_68);
                    }
                  }
                }
              }
            }
            mbedtls_mpi_free(auStack_68);
            mbedtls_mpi_free(local_58);
            goto LAB_00100433;
          }
        }
      }
    }
  }
  iVar1 = -4;
LAB_00100433:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_rsa_deduce_crt
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
              long param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_mpi_init(local_58);
  if (param_4 != 0) {
    iVar1 = mbedtls_mpi_sub_int(local_58,param_1,1);
    if (iVar1 != 0) goto LAB_0010053c;
    iVar1 = mbedtls_mpi_mod_mpi(param_4,param_3,local_58);
    if (iVar1 != 0) goto LAB_0010053c;
  }
  if (param_5 != 0) {
    iVar1 = mbedtls_mpi_sub_int(local_58,param_2,1);
    if (iVar1 != 0) goto LAB_0010053c;
    iVar1 = mbedtls_mpi_mod_mpi(param_5,param_3,local_58);
    if (iVar1 != 0) goto LAB_0010053c;
  }
  iVar1 = 0;
  if (param_6 != 0) {
    iVar1 = mbedtls_mpi_inv_mod(param_6,param_2,param_1);
  }
LAB_0010053c:
  mbedtls_mpi_free(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_rsa_validate_params
              (long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
              undefined8 param_7)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  bool bVar3;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_mpi_init(local_68);
  mbedtls_mpi_init(local_58);
  bVar2 = param_2 != 0;
  if (((param_6 != 0) && (bVar2)) &&
     (iVar1 = mbedtls_mpi_is_prime_ext(param_2,0x32,param_6,param_7), iVar1 != 0)) {
LAB_00100710:
    iVar1 = -0x4200;
  }
  else {
    bVar3 = param_3 != 0;
    if ((param_6 != 0) && (bVar3)) {
      iVar1 = mbedtls_mpi_is_prime_ext(param_3,0x32,param_6,param_7);
      if (iVar1 == 0) {
        if (!bVar2 || !bVar3) goto LAB_001006b0;
        goto LAB_00100669;
      }
      goto LAB_00100710;
    }
    if (bVar2 && bVar3) {
LAB_00100669:
      if (param_1 == 0) {
        if ((param_5 != 0) && (param_4 != 0)) {
LAB_001007f7:
          iVar1 = mbedtls_mpi_cmp_int(param_2,1);
          if ((0 < iVar1) && (iVar1 = mbedtls_mpi_cmp_int(param_3,1), 0 < iVar1)) {
            iVar1 = mbedtls_mpi_mul_mpi(local_68,param_4,param_5);
            if ((((iVar1 != 0) || (iVar1 = mbedtls_mpi_sub_int(local_68,local_68,1), iVar1 != 0)) ||
                (iVar1 = mbedtls_mpi_sub_int(local_58,param_2,1), iVar1 != 0)) ||
               (iVar1 = mbedtls_mpi_mod_mpi(local_68,local_68,local_58), iVar1 != 0)) {
LAB_0010068a:
              mbedtls_mpi_free(local_68);
              mbedtls_mpi_free(local_58);
              if (iVar1 != -0x4200) {
                iVar1 = iVar1 + -0x4200;
              }
              goto LAB_00100725;
            }
            iVar1 = mbedtls_mpi_cmp_int(local_68,0);
            if (iVar1 == 0) {
              iVar1 = mbedtls_mpi_mul_mpi(local_68,param_4,param_5);
              if ((((iVar1 != 0) || (iVar1 = mbedtls_mpi_sub_int(local_68,local_68,1), iVar1 != 0))
                  || (iVar1 = mbedtls_mpi_sub_int(local_58,param_3,1), iVar1 != 0)) ||
                 (iVar1 = mbedtls_mpi_mod_mpi(local_68,local_68,local_58), iVar1 != 0))
              goto LAB_0010068a;
              iVar1 = mbedtls_mpi_cmp_int(local_68,0);
              if (iVar1 == 0) {
                iVar1 = 0;
                goto LAB_00100715;
              }
            }
          }
          goto LAB_00100710;
        }
      }
      else {
        iVar1 = mbedtls_mpi_mul_mpi(local_68,param_2,param_3);
        if (iVar1 != 0) goto LAB_0010068a;
        iVar1 = mbedtls_mpi_cmp_int(param_1,1);
        if ((iVar1 < 1) || (iVar1 = mbedtls_mpi_cmp_mpi(local_68,param_1), iVar1 != 0))
        goto LAB_00100710;
        if ((param_4 != 0) && (param_5 != 0)) goto LAB_001006d2;
      }
LAB_001007e0:
      iVar1 = 0;
    }
    else {
LAB_001006b0:
      if ((param_5 == 0 || param_4 == 0) || (param_1 == 0)) goto LAB_001007e0;
LAB_001006d2:
      iVar1 = mbedtls_mpi_cmp_int(param_4,1);
      if ((((iVar1 < 1) || (iVar1 = mbedtls_mpi_cmp_int(param_5,1), iVar1 < 1)) ||
          (iVar1 = mbedtls_mpi_cmp_mpi(param_4,param_1), -1 < iVar1)) ||
         (iVar1 = mbedtls_mpi_cmp_mpi(param_5,param_1), -1 < iVar1)) goto LAB_00100710;
      if (bVar2 && bVar3) goto LAB_001007f7;
      iVar1 = 0;
    }
  }
LAB_00100715:
  mbedtls_mpi_free(local_68);
  mbedtls_mpi_free(local_58);
LAB_00100725:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int mbedtls_rsa_validate_crt
              (long param_1,long param_2,undefined8 param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_mpi_init(local_68);
  mbedtls_mpi_init(local_58);
  if (param_4 == 0) {
LAB_00100a60:
    if (param_5 != 0) {
      if (param_2 == 0) goto LAB_00100a6e;
      iVar1 = mbedtls_mpi_sub_int(local_68,param_2,1);
      if (((iVar1 != 0) || (iVar1 = mbedtls_mpi_sub_mpi(local_58,param_5,param_3), iVar1 != 0)) ||
         (iVar1 = mbedtls_mpi_mod_mpi(local_58,local_58,local_68), iVar1 != 0)) goto LAB_00100a28;
      iVar1 = mbedtls_mpi_cmp_int(local_58,0);
      if (iVar1 != 0) goto LAB_00100a33;
    }
    if (param_6 != 0) {
      if ((param_1 == 0) || (param_2 == 0)) goto LAB_00100a6e;
      iVar1 = mbedtls_mpi_mul_mpi(local_68,param_6,param_2);
      if ((iVar1 != 0) ||
         ((iVar1 = mbedtls_mpi_sub_int(local_68,local_68,1), iVar1 != 0 ||
          (iVar1 = mbedtls_mpi_mod_mpi(local_68,local_68,param_1), iVar1 != 0)))) goto LAB_00100a28;
      iVar1 = mbedtls_mpi_cmp_int(local_68,0);
      if (iVar1 != 0) goto LAB_00100a33;
    }
    iVar1 = 0;
    goto LAB_00100a73;
  }
  if (param_1 == 0) {
LAB_00100a6e:
    iVar1 = -0x4080;
  }
  else {
    iVar1 = mbedtls_mpi_sub_int(local_68,param_1,1);
    if (((iVar1 == 0) && (iVar1 = mbedtls_mpi_sub_mpi(local_58,param_4,param_3), iVar1 == 0)) &&
       (iVar1 = mbedtls_mpi_mod_mpi(local_58,local_58,local_68), iVar1 == 0)) {
      iVar1 = mbedtls_mpi_cmp_int(local_58,0);
      if (iVar1 == 0) goto LAB_00100a60;
    }
    else {
LAB_00100a28:
      if (iVar1 != -0x4200) {
        if (iVar1 != -0x4080) {
          iVar1 = iVar1 + -0x4200;
          goto LAB_00100a73;
        }
        goto LAB_00100a6e;
      }
    }
LAB_00100a33:
    iVar1 = -0x4200;
  }
LAB_00100a73:
  mbedtls_mpi_free(local_68);
  mbedtls_mpi_free(local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


