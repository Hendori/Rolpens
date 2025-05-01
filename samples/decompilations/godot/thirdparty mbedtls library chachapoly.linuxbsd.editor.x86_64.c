
void mbedtls_chachapoly_init(long param_1)

{
  mbedtls_chacha20_init();
  mbedtls_poly1305_init(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined1 (*) [16])(param_1 + 0xd8) = (undefined1  [16])0x0;
  return;
}



void mbedtls_chachapoly_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_chacha20_free();
    mbedtls_poly1305_free(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined1 (*) [16])(param_1 + 0xd8) = (undefined1  [16])0x0;
    return;
  }
  return;
}



void mbedtls_chachapoly_setkey(void)

{
  mbedtls_chacha20_setkey();
  return;
}



int mbedtls_chachapoly_starts(long param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_chacha20_starts(param_1,param_2,0);
  if (iVar1 == 0) {
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    iVar1 = mbedtls_chacha20_update(param_1,0x40,local_78,local_78);
    if (iVar1 == 0) {
      iVar1 = mbedtls_poly1305_starts(param_1 + 0x88,local_78);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xec) = param_3;
        *(undefined4 *)(param_1 + 0xe8) = 1;
        *(undefined1 (*) [16])(param_1 + 0xd8) = (undefined1  [16])0x0;
      }
    }
  }
  mbedtls_platform_zeroize(local_78,0x40);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_chachapoly_update_aad(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0xe8) == 1) {
    *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_3;
    uVar1 = mbedtls_poly1305_update(param_1 + 0x88);
    return uVar1;
  }
  return 0xffffffac;
}



undefined8
mbedtls_chachapoly_update(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0xe8) - 1U < 2) {
    if (*(int *)(param_1 + 0xe8) == 1) {
      *(undefined4 *)(param_1 + 0xe8) = 2;
      uVar1 = *(uint *)(param_1 + 0xd8) & 0xf;
      if (uVar1 != 0) {
        local_3f = 0;
        uStack_38 = 0;
        uStack_37 = 0;
        uVar2 = mbedtls_poly1305_update(param_1 + 0x88,&local_3f,0x10 - uVar1);
        if ((int)uVar2 != 0) goto LAB_001002e0;
      }
    }
    *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + param_2;
    if (*(int *)(param_1 + 0xec) == 0) {
      uVar2 = mbedtls_chacha20_update(param_1,param_2,param_3,param_4);
      if ((int)uVar2 == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = mbedtls_poly1305_update(param_1 + 0x88,param_4,param_2);
          return uVar2;
        }
        goto LAB_00100307;
      }
    }
    else {
      uVar2 = mbedtls_poly1305_update(param_1 + 0x88,param_3,param_2);
      if ((int)uVar2 == 0) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = mbedtls_chacha20_update(param_1,param_2,param_3,param_4);
          return uVar2;
        }
        goto LAB_00100307;
      }
    }
  }
  else {
    uVar2 = 0xffffffac;
  }
LAB_001002e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_00100307:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_chachapoly_finish(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined7 local_38;
  undefined1 uStack_31;
  undefined7 local_30;
  undefined1 uStack_29;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = *(int *)(param_1 + 0xe8);
  if (iVar1 == 0) {
    uVar4 = 0xffffffac;
    goto LAB_0010038b;
  }
  if (iVar1 == 1) {
    uVar3 = *(ulong *)(param_1 + 0xd8);
    uVar2 = (uint)uVar3;
    if ((uVar3 & 0xf) != 0) goto LAB_00100406;
    uVar5 = *(ulong *)(param_1 + 0xe0);
  }
  else {
    uVar5 = *(ulong *)(param_1 + 0xe0);
    if ((iVar1 == 2) && (uVar2 = (uint)uVar5, (uVar5 & 0xf) != 0)) {
LAB_00100406:
      local_30 = 0;
      uStack_31 = 0;
      local_38 = 0;
      uVar4 = mbedtls_poly1305_update(param_1 + 0x88,&local_38,0x10 - (uVar2 & 0xf));
      if ((int)uVar4 != 0) goto LAB_0010038b;
      uVar3 = *(ulong *)(param_1 + 0xd8);
      uVar5 = *(ulong *)(param_1 + 0xe0);
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0xd8);
    }
  }
  *(undefined4 *)(param_1 + 0xe8) = 3;
  local_30 = (undefined7)uVar5;
  uStack_29 = (undefined1)(uVar5 >> 0x38);
  local_38 = (undefined7)uVar3;
  uStack_31 = (undefined1)(uVar3 >> 0x38);
  uVar4 = mbedtls_poly1305_update(param_1 + 0x88,&local_38,0x10);
  if ((int)uVar4 == 0) {
    uVar4 = mbedtls_poly1305_finish(param_1 + 0x88,param_2);
  }
LAB_0010038b:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8
mbedtls_chachapoly_encrypt_and_tag
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = mbedtls_chachapoly_starts(param_1,param_3,0);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0xe8) == 1) {
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_5;
      uVar1 = mbedtls_poly1305_update(param_1 + 0x88,param_4,param_5);
      if ((int)uVar1 == 0) {
        uVar1 = mbedtls_chachapoly_update(param_1,param_2,param_6,param_7);
        if ((int)uVar1 == 0) {
          uVar1 = mbedtls_chachapoly_finish(param_1,param_8);
          return uVar1;
        }
      }
    }
    else {
      uVar1 = 0xffffffac;
    }
  }
  return uVar1;
}



undefined8
mbedtls_chachapoly_auth_decrypt
          (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = mbedtls_chachapoly_starts(param_1,param_3,1);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0xe8) == 1) {
      *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + param_5;
      uVar1 = mbedtls_poly1305_update(param_1 + 0x88,param_4,param_5);
      if ((int)uVar1 == 0) {
        uVar1 = mbedtls_chachapoly_update(param_1,param_2,param_7,param_8);
        if ((int)uVar1 == 0) {
          uVar1 = mbedtls_chachapoly_finish(param_1);
          if ((int)uVar1 == 0) {
            uVar1 = mbedtls_ct_memcmp(param_6,local_58,0x10);
            if ((int)uVar1 != 0) {
              mbedtls_platform_zeroize(param_8,param_2);
              uVar1 = 0xffffffaa;
            }
          }
        }
      }
    }
    else {
      uVar1 = 0xffffffac;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_chachapoly_self_test(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1f8 [136];
  undefined1 local_170 [80];
  undefined1 local_120 [16];
  undefined8 local_110;
  long local_108;
  long local_100;
  undefined1 local_f8 [200];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    __printf_chk(2,"  ChaCha20-Poly1305 test %u ",0);
  }
  mbedtls_chacha20_init(auStack_1f8);
  mbedtls_poly1305_init(local_170);
  local_110 = 0;
  local_120 = (undefined1  [16])0x0;
  iVar1 = mbedtls_chacha20_setkey(auStack_1f8,test_key);
  if (iVar1 == 0) {
    iVar1 = mbedtls_chachapoly_starts(auStack_1f8,test_nonce,0);
    if (iVar1 == 0) {
      if ((int)local_110 == 1) {
        local_120._0_8_ = local_120._0_8_ + 0xc;
        iVar1 = mbedtls_poly1305_update(local_170,test_aad,0xc);
        if (iVar1 == 0) {
          iVar1 = mbedtls_chachapoly_update
                            (auStack_1f8,0x72,
                             "Ladies and Gentlemen of the class of \'99: If I could offer you only one tip for the future, sunscreen would be it."
                             ,local_f8);
          if (iVar1 == 0) {
            iVar1 = mbedtls_chachapoly_finish(auStack_1f8,&local_108);
            if (iVar1 == 0) {
              iVar1 = memcmp(local_f8,test_output,0x72);
              if (iVar1 == 0) {
                if (local_108 == 0x6ae2094f590be11a && local_100 == -0x6ef99f2f34d16f82) {
                  uVar2 = 0;
                  mbedtls_chacha20_free(auStack_1f8);
                  mbedtls_poly1305_free(local_170);
                  local_110 = 0;
                  local_120 = (undefined1  [16])0x0;
                  if (param_1 != 0) {
                    puts("passed");
                    putchar(10);
                  }
                  goto LAB_001007d0;
                }
                if (param_1 != 0) {
                  puts("failure (wrong MAC)");
                }
              }
              else if (param_1 != 0) {
                puts("failure (wrong output)");
              }
              goto LAB_001007c8;
            }
          }
        }
      }
      else {
        iVar1 = -0x54;
      }
    }
    if (param_1 != 0) {
      __printf_chk(2,"crypt_and_tag() error code: %i\n",iVar1);
    }
  }
  else if (param_1 != 0) {
    __printf_chk(2,"setkey() error code: %i\n",iVar1);
  }
LAB_001007c8:
  uVar2 = 0xffffffff;
LAB_001007d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


