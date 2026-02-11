
bool rsa_can_do(int param_1)

{
  return param_1 == 1 || param_1 == 6;
}



void rsa_debug(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *param_2 = 1;
  *(char **)(param_2 + 2) = "rsa.N";
  param_2[6] = 1;
  *(long *)(param_2 + 4) = lVar1 + 0x10;
  *(char **)(param_2 + 8) = "rsa.E";
  *(long *)(param_2 + 10) = lVar1 + 0x20;
  return;
}



bool eckey_can_do(int param_1)

{
  return param_1 - 2U < 3;
}



undefined8 eckey_get_bitlen(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 8) + 0x78);
}



void eckey_debug(long param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  *param_2 = 2;
  *(char **)(param_2 + 2) = "eckey.Q";
  *(long *)(param_2 + 4) = lVar1 + 0xd0;
  return;
}



bool eckeydh_can_do(int param_1)

{
  return param_1 - 2U < 2;
}



bool ecdsa_can_do(int param_1)

{
  return param_1 == 4;
}



bool rsa_alt_can_do(int param_1)

{
  return param_1 == 1;
}



long rsa_alt_get_bitlen(long param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)(*(undefined8 **)(param_1 + 8))[3])(**(undefined8 **)(param_1 + 8));
  return lVar1 << 3;
}



undefined8
rsa_alt_sign_wrap(long param_1,undefined4 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,ulong param_6,ulong *param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (param_4 >> 0x20 == 0) {
    uVar2 = (*(code *)puVar1[3])(*puVar1);
    *param_7 = uVar2;
    if (uVar2 < 0x401) {
      if (param_6 < uVar2) {
        return 0xffffc780;
      }
                    /* WARNING: Could not recover jumptable at 0x0010018e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)puVar1[2])(*puVar1,param_8,param_9,param_2,param_4 & 0xffffffff,param_3);
      return uVar3;
    }
  }
  return 0xffffc180;
}



undefined8
rsa_alt_decrypt_wrap
          (long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  lVar2 = (*(code *)puVar1[3])(*puVar1);
  if (lVar2 == param_3) {
                    /* WARNING: Could not recover jumptable at 0x00100201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)puVar1[1])(*puVar1,param_5,param_2,param_4,param_6);
    return uVar3;
  }
  return 0xffffbf80;
}



void rsa_free_wrap(void *param_1)

{
  mbedtls_rsa_free();
  free(param_1);
  return;
}



void rsa_alt_alloc_wrap(void)

{
  calloc(1,0x20);
  return;
}



void * rsa_alloc_wrap(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0xe8);
  if (pvVar1 != (void *)0x0) {
    mbedtls_rsa_init(pvVar1);
  }
  return pvVar1;
}



void rsa_check_pair_wrap(long param_1,long param_2)

{
  mbedtls_rsa_check_pub_priv(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  return;
}



undefined8
rsa_encrypt_wrap(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ulong *param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = mbedtls_rsa_get_len();
  *param_5 = uVar1;
  if (uVar1 <= param_6) {
    uVar2 = mbedtls_rsa_pkcs1_encrypt(uVar2,param_7,param_8,param_3,param_2,param_4);
    return uVar2;
  }
  return 0xffffbc00;
}



undefined8
rsa_decrypt_wrap(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = mbedtls_rsa_get_len();
  if (lVar1 == param_3) {
    uVar2 = mbedtls_rsa_pkcs1_decrypt(uVar2,param_7,param_8,param_5,param_2,param_4);
    return uVar2;
  }
  return 0xffffbf80;
}



undefined8
rsa_sign_wrap(long param_1,int param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             ulong param_6,ulong *param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((param_2 == 0) && (param_4 >> 0x20 != 0)) {
    uVar2 = 0xffffc180;
  }
  else {
    uVar1 = mbedtls_rsa_get_len();
    *param_7 = uVar1;
    if (uVar1 <= param_6) {
      uVar2 = mbedtls_rsa_pkcs1_sign(uVar2,param_8,param_9,param_2,param_4 & 0xffffffff,param_3);
      return uVar2;
    }
    uVar2 = 0xffffc780;
  }
  return uVar2;
}



ulong rsa_verify_wrap(long param_1,int param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                     ulong param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = mbedtls_rsa_get_len();
  if ((param_2 == 0) && (param_4 >> 0x20 != 0)) {
    uVar3 = 0xffffc180;
  }
  else if (param_6 < uVar2) {
    uVar3 = 0xffffbc80;
  }
  else {
    uVar3 = mbedtls_rsa_pkcs1_verify(uVar1,param_2,param_4 & 0xffffffff,param_3,param_5);
    if (((int)uVar3 == 0) && (uVar3 = uVar3 & 0xffffffff, uVar2 < param_6)) {
      uVar3 = 0xffffc700;
    }
  }
  return uVar3;
}



void rsa_get_bitlen(long param_1)

{
  mbedtls_rsa_get_bitlen(*(undefined8 *)(param_1 + 8));
  return;
}



void eckey_free_wrap(void *param_1)

{
  mbedtls_ecp_keypair_free();
  free(param_1);
  return;
}



void * eckey_alloc_wrap(void)

{
  void *pvVar1;
  
  pvVar1 = calloc(1,0x100);
  if (pvVar1 != (void *)0x0) {
    mbedtls_ecp_keypair_init(pvVar1);
  }
  return pvVar1;
}



void eckey_check_pair_wrap(long param_1,long param_2)

{
  mbedtls_ecp_check_pub_priv(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 8));
  return;
}



void ecdsa_sign_wrap(long param_1)

{
  mbedtls_ecdsa_write_signature(*(undefined8 *)(param_1 + 8));
  return;
}



undefined8
ecdsa_verify_wrap(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  uVar1 = mbedtls_ecdsa_read_signature(*(undefined8 *)(param_1 + 8),param_3,param_4,param_5,param_6)
  ;
  if ((int)uVar1 == -0x4c00) {
    uVar1 = 0xffffc700;
  }
  return uVar1;
}



void rsa_alt_free_wrap(undefined8 param_1)

{
  mbedtls_zeroize_and_free(param_1,0x20);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int rsa_alt_check_pair(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = (*(code *)(*(undefined8 **)(param_2 + 8))[3])(**(undefined8 **)(param_2 + 8));
  lVar6 = mbedtls_rsa_get_bitlen(*(undefined8 *)(param_1 + 8));
  if (lVar6 == lVar5 << 3) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    local_468 = __LC3;
    uStack_460 = _UNK_00100928;
    local_458 = __LC3;
    uStack_450 = _UNK_00100928;
    uVar7 = (*(code *)puVar1[3])(*puVar1);
    if (0x400 < uVar7) {
      iVar3 = -16000;
      goto LAB_0010069b;
    }
    iVar3 = (*(code *)puVar1[2])(*puVar1,param_3,param_4,0,0x20,&local_468,local_448);
    if (iVar3 != 0) goto LAB_0010069b;
    uVar2 = *(undefined8 *)(param_1 + 8);
    uVar8 = mbedtls_rsa_get_len(uVar2);
    if (uVar8 <= uVar7) {
      iVar4 = mbedtls_rsa_pkcs1_verify(uVar2,0,0x20,&local_468,local_448);
      if ((iVar4 == 0) && (uVar7 <= uVar8)) goto LAB_0010069b;
    }
  }
  iVar3 = -0x4200;
LAB_0010069b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


