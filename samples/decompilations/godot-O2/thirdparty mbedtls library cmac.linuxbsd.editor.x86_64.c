
undefined8 cmac_multiply_by_u_part_0(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = 0xc;
  uVar4 = 0;
  do {
    uVar1 = *(uint *)(param_2 + lVar3);
    uVar2 = (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) * 2;
    *(uint *)(param_1 + lVar3) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | (uVar2 | uVar4) << 0x18;
    lVar3 = lVar3 + -4;
    uVar4 = uVar1 >> 7 & 1;
  } while (lVar3 != -4);
  *(byte *)(param_1 + 0xf) =
       *(byte *)(param_1 + 0xf) ^ (byte)((long)-(ulong)(*param_2 >> 7) >> 0x3f) & 0x87;
  return 0;
}



int cmac_generate_subkeys(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  long in_FS_OFFSET;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_platform_zeroize(local_48,0x10);
  if (*param_1 == 0) {
    iVar1 = mbedtls_cipher_update(param_1,local_48,0,local_48,local_50);
    if (iVar1 != 0) goto LAB_001000ee;
  }
  else {
    bVar2 = *(byte *)(*param_1 + 8) & 0x1f;
    iVar1 = mbedtls_cipher_update(param_1,local_48,bVar2,local_48,local_50);
    if (iVar1 != 0) goto LAB_001000ee;
    if (bVar2 == 0x10) {
      iVar1 = cmac_multiply_by_u_part_0(param_2,local_48);
      if (iVar1 == 0) {
        iVar1 = cmac_multiply_by_u_part_0(param_3,param_2);
        if (iVar1 == 0) goto LAB_001000ee;
      }
    }
  }
  iVar1 = -0x6100;
LAB_001000ee:
  mbedtls_platform_zeroize(local_48,0x10);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int cmac_test_subkeys_constprop_0
              (int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,void *param_5,
              int param_6)

{
  int iVar1;
  long lVar2;
  int iVar3;
  char *__s;
  long in_FS_OFFSET;
  undefined1 local_c8 [96];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = mbedtls_cipher_info_from_type(param_6);
  if (lVar2 == 0) {
    iVar1 = -0x6080;
  }
  else {
    iVar3 = 1;
    if (param_1 != 0) goto LAB_001002cf;
LAB_001001b8:
    do {
      mbedtls_cipher_init(local_c8);
      iVar1 = mbedtls_cipher_setup(local_c8,lVar2);
      if (iVar1 != 0) {
LAB_00100300:
        if (param_1 != 0) {
          puts("test execution failed");
        }
LAB_00100305:
        mbedtls_cipher_free(local_c8);
        goto LAB_00100315;
      }
      iVar1 = mbedtls_cipher_setkey(local_c8,param_3,param_4,1);
      if (iVar1 == 0) {
        iVar1 = cmac_generate_subkeys(local_c8,local_68,local_58);
        if (iVar1 == 0) {
          iVar1 = memcmp(local_68,param_5,0x10);
          if (iVar1 == 0) {
            iVar1 = memcmp(local_58,(void *)((long)param_5 + 0x10),0x10);
            if (iVar1 == 0) {
              if (param_1 != 0) {
                __s = "passed";
                goto LAB_001002b6;
              }
              goto LAB_0010021b;
            }
          }
        }
        if (param_1 != 0) {
          puts("failed");
        }
        goto LAB_00100305;
      }
      if ((iVar1 != -0x72 && iVar1 != -0x6080) || (param_6 != 3)) goto LAB_00100300;
      if (param_1 != 0) {
        __s = "skipped";
LAB_001002b6:
        puts(__s);
        iVar3 = iVar3 + 1;
        mbedtls_cipher_free(local_c8);
        if (iVar3 == 5) break;
LAB_001002cf:
        __printf_chk(2,"  %s CMAC subkey #%d: ",param_2,iVar3);
        goto LAB_001001b8;
      }
LAB_0010021b:
      iVar3 = iVar3 + 1;
      mbedtls_cipher_free(local_c8);
    } while (iVar3 != 5);
    iVar1 = 0;
  }
LAB_00100315:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_cipher_cmac_starts(long *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  void *pvVar3;
  
  if (((param_1 != (long *)0x0) && (*param_1 != 0)) && (param_2 != 0)) {
    iVar2 = mbedtls_cipher_setkey();
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*param_1 != 0) {
      bVar1 = *(byte *)(*param_1 + 10);
      if (bVar1 < 5) {
        if (1 < bVar1) {
LAB_001003d1:
          pvVar3 = calloc(1,0x28);
          if (pvVar3 != (void *)0x0) {
            param_1[0xb] = (long)pvVar3;
            mbedtls_platform_zeroize(pvVar3,0x10);
            return 0;
          }
          return -0x6180;
        }
      }
      else if (bVar1 == 0x24) goto LAB_001003d1;
    }
  }
  return -0x6100;
}



undefined8 mbedtls_cipher_cmac_update(long *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) || (param_2 == (ulong *)0x0)) ||
     (puVar1 = (ulong *)param_1[0xb], puVar1 == (ulong *)0x0)) {
    uVar3 = 0xffff9f00;
  }
  else {
    uVar2 = puVar1[4];
    uVar6 = (ulong)(*(byte *)(*param_1 + 8) & 0x1f);
    if ((uVar2 != 0) && (uVar6 - uVar2 < param_3)) {
      memcpy((void *)((long)puVar1 + uVar2 + 0x10),param_2,uVar6 - uVar2);
      if (uVar6 < 8) {
        uVar2 = 0;
      }
      else {
        *puVar1 = *puVar1 ^ puVar1[2];
        if (uVar6 == 0x10) {
          puVar1[1] = puVar1[1] ^ puVar1[3];
          uVar2 = 0x10;
        }
        else {
          uVar2 = 8;
        }
      }
      if (uVar2 < uVar6) {
        pbVar4 = (byte *)(uVar2 + (long)puVar1);
        do {
          *pbVar4 = *pbVar4 ^ pbVar4[0x10];
          pbVar4 = pbVar4 + 1;
        } while ((byte *)((long)puVar1 + uVar6) != pbVar4);
      }
      uVar3 = mbedtls_cipher_update(param_1,puVar1,uVar6,puVar1,local_48);
      if ((int)uVar3 != 0) goto LAB_0010052e;
      uVar2 = puVar1[4];
      puVar1[4] = 0;
      param_3 = (uVar2 + param_3) - uVar6;
      param_2 = (ulong *)((long)param_2 + (uVar6 - uVar2));
    }
    uVar7 = 1;
    uVar2 = ((uVar6 - 1) + param_3) / uVar6;
    if (1 < uVar2) {
      do {
        uVar5 = 0;
        if (7 < uVar6) {
          *puVar1 = *puVar1 ^ *param_2;
          if (uVar6 == 0x10) {
            puVar1[1] = puVar1[1] ^ param_2[1];
            uVar5 = 0x10;
          }
          else {
            uVar5 = 8;
          }
        }
        if (uVar5 < uVar6) {
          do {
            *(byte *)((long)puVar1 + uVar5) =
                 *(byte *)((long)puVar1 + uVar5) ^ *(byte *)((long)param_2 + uVar5);
            uVar5 = uVar5 + 1;
          } while (uVar5 != uVar6);
        }
        uVar3 = mbedtls_cipher_update(param_1,puVar1,uVar6,puVar1,local_48);
        if ((int)uVar3 != 0) goto LAB_0010052e;
        param_3 = param_3 - uVar6;
        param_2 = (ulong *)((long)param_2 + uVar6);
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
    if (param_3 == 0) {
      uVar3 = 0;
    }
    else {
      memcpy((void *)((long)puVar1 + puVar1[4] + 0x10),param_2,param_3);
      puVar1[4] = puVar1[4] + param_3;
      uVar3 = 0;
    }
  }
LAB_0010052e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



int mbedtls_cipher_cmac_finish(long *param_1,ulong *param_2)

{
  byte bVar1;
  ulong *puVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined1 local_80 [8];
  ulong local_78 [2];
  ulong local_68 [2];
  ulong local_58;
  ulong local_50;
  long local_40;
  ulong uVar10;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == (long *)0x0) || (*param_1 == 0)) ||
      (puVar2 = (ulong *)param_1[0xb], puVar2 == (ulong *)0x0)) || (param_2 == (ulong *)0x0)) {
    iVar3 = -0x6100;
    goto LAB_001007ff;
  }
  bVar1 = *(byte *)(*param_1 + 8);
  mbedtls_platform_zeroize(local_78,0x10);
  uVar9 = bVar1 & 0x1f;
  uVar10 = (ulong)uVar9;
  mbedtls_platform_zeroize(local_68,0x10);
  cmac_generate_subkeys(param_1,local_78,local_68);
  uVar4 = puVar2[4];
  if (uVar4 < uVar10) {
    uVar7 = 0;
    do {
      while (uVar5 = uVar7, uVar4 <= uVar5) {
        *(char *)((long)&local_58 + uVar5) = (uVar4 == uVar5) << 7;
        uVar7 = uVar5 + 1;
        if (uVar10 == uVar5 + 1) goto LAB_001008ab;
      }
      *(undefined1 *)((long)&local_58 + uVar5) = *(undefined1 *)((long)puVar2 + uVar5 + 0x10);
      uVar7 = uVar5 + 1;
    } while (uVar10 != uVar5 + 1);
LAB_001008ab:
    if (uVar10 < 8) {
      uVar4 = 0;
    }
    else {
      local_58 = local_58 ^ local_68[0];
      if (uVar10 == 0x10) {
        local_50 = local_50 ^ local_68[1];
        uVar7 = 0x10;
      }
      else {
        uVar7 = 8;
      }
      uVar4 = 8;
      if (uVar5 + 1 <= uVar7) goto LAB_0010075d;
    }
    do {
      *(byte *)((long)&local_58 + uVar4) =
           *(byte *)((long)&local_58 + uVar4) ^ *(byte *)((long)local_68 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5 + 1);
LAB_00100755:
    uVar4 = 0;
    if (7 < uVar10) {
LAB_0010075d:
      *puVar2 = *puVar2 ^ local_58;
      if (uVar10 == 0x10) {
        puVar2[1] = puVar2[1] ^ local_50;
        uVar4 = 0x10;
      }
      else {
        uVar4 = 8;
      }
      if (uVar10 <= uVar4) goto LAB_001007a0;
      uVar4 = 8;
    }
    do {
      *(byte *)((long)puVar2 + uVar4) =
           *(byte *)((long)puVar2 + uVar4) ^ *(byte *)((long)&local_58 + uVar4);
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar10);
  }
  else {
    if (7 < uVar10) {
      local_58 = puVar2[2] ^ local_78[0];
      if (uVar10 == 0x10) {
        local_50 = puVar2[3] ^ local_78[1];
        uVar4 = 0x10;
      }
      else {
        uVar4 = 8;
      }
      if (uVar4 < uVar10) {
        uVar4 = 8;
        goto LAB_00100740;
      }
      goto LAB_0010075d;
    }
    uVar4 = 0;
    if (uVar10 != 0) {
LAB_00100740:
      do {
        *(byte *)((long)&local_58 + uVar4) =
             *(byte *)((long)puVar2 + uVar4 + 0x10) ^ *(byte *)((long)local_78 + uVar4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar10);
      goto LAB_00100755;
    }
  }
LAB_001007a0:
  iVar3 = mbedtls_cipher_update(param_1,puVar2,uVar10,puVar2,local_80);
  if (iVar3 == 0) {
    if (uVar9 < 8) {
      if ((bVar1 & 4) == 0) {
        if (((bVar1 & 0x1f) != 0) && (*(char *)param_2 = (char)*puVar2, (bVar1 & 2) != 0)) {
          *(undefined2 *)((long)param_2 + (uVar10 - 2)) =
               *(undefined2 *)((long)puVar2 + (uVar10 - 2));
        }
      }
      else {
        *(int *)param_2 = (int)*puVar2;
        *(undefined4 *)((long)param_2 + (uVar10 - 4)) = *(undefined4 *)((long)puVar2 + (uVar10 - 4))
        ;
      }
    }
    else {
      *param_2 = *puVar2;
      *(undefined8 *)((long)param_2 + (uVar10 - 8)) = *(undefined8 *)((long)puVar2 + (uVar10 - 8));
      lVar8 = (long)param_2 - ((ulong)(param_2 + 1) & 0xfffffffffffffff8);
      uVar9 = uVar9 + (int)lVar8 & 0xfffffff8;
      if (7 < uVar9) {
        uVar4 = 0;
        do {
          uVar6 = (int)uVar4 + 8;
          *(undefined8 *)(((ulong)(param_2 + 1) & 0xfffffffffffffff8) + uVar4) =
               *(undefined8 *)((long)puVar2 + (uVar4 - lVar8));
          uVar4 = (ulong)uVar6;
        } while (uVar6 < uVar9);
      }
    }
  }
  mbedtls_platform_zeroize(local_78,0x10);
  mbedtls_platform_zeroize(local_68,0x10);
  puVar2[4] = 0;
  mbedtls_platform_zeroize(puVar2 + 2,0x10);
  mbedtls_platform_zeroize(puVar2,0x10);
LAB_001007ff:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_cipher_cmac_reset(long *param_1)

{
  long lVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    lVar1 = param_1[0xb];
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
      mbedtls_platform_zeroize(lVar1 + 0x10,0x10);
      mbedtls_platform_zeroize(lVar1,0x10);
      return 0;
    }
    return 0xffff9f00;
  }
  return 0xffff9f00;
}



int mbedtls_cipher_cmac(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5
                       ,long param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == 0) || (param_2 == 0)) || (param_4 == 0)) || (param_6 == 0)) {
    iVar1 = -0x6100;
  }
  else {
    mbedtls_cipher_init(local_a8);
    iVar1 = mbedtls_cipher_setup(local_a8,param_1);
    if (iVar1 == 0) {
      iVar1 = mbedtls_cipher_cmac_starts(local_a8,param_2,param_3);
      if (iVar1 == 0) {
        iVar1 = mbedtls_cipher_cmac_update(local_a8,param_4,param_5);
        if (iVar1 == 0) {
          iVar1 = mbedtls_cipher_cmac_finish(local_a8,param_6);
        }
      }
    }
    mbedtls_cipher_free(local_a8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int cmac_test_wth_cipher_constprop_0
              (int param_1,undefined8 param_2,undefined8 param_3,int param_4,void *param_5,
              int param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  char *__s;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = mbedtls_cipher_info_from_type(param_6);
  if (lVar2 != 0) {
    uVar3 = 1;
    if (param_1 == 0) goto LAB_00100b9e;
LAB_00100b84:
    __printf_chk(2,"  %s CMAC #%d: ",param_2,uVar3 & 0xffffffff);
LAB_00100b9e:
    do {
      iVar1 = mbedtls_cipher_cmac(lVar2,param_3,(long)param_4,test_message,
                                  *(undefined4 *)(aes_128_key + uVar3 * 4 + 0xc),local_58);
      if (iVar1 == 0) {
        iVar1 = memcmp(local_58,param_5,0x10);
        if (iVar1 != 0) goto LAB_00100c40;
        if (param_1 != 0) {
          __s = "passed";
          goto LAB_00100c22;
        }
      }
      else {
        if ((iVar1 != -0x72 && iVar1 != -0x6080) || (param_6 != 3)) {
LAB_00100c40:
          if (param_1 != 0) {
            puts("failed");
          }
          goto LAB_00100c47;
        }
        if (param_1 != 0) goto LAB_00100c90;
      }
      uVar3 = uVar3 + 1;
      param_5 = (void *)((long)param_5 + 0x10);
      if (uVar3 == 5) {
        iVar1 = 0;
        goto LAB_00100c47;
      }
    } while( true );
  }
  iVar1 = -0x6080;
LAB_00100c47:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100c90:
  __s = "skipped";
LAB_00100c22:
  puts(__s);
  uVar3 = uVar3 + 1;
  param_5 = (void *)((long)param_5 + 0x10);
  if (uVar3 == 5) goto code_r0x00100c39;
  goto LAB_00100b84;
code_r0x00100c39:
  iVar1 = 0;
  goto LAB_00100c47;
}



int mbedtls_aes_cmac_prf_128
              (undefined8 *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0 || param_5 == 0) || (param_1 == (undefined8 *)0x0)) {
    iVar1 = -0x6100;
    goto LAB_00100d55;
  }
  lVar2 = mbedtls_cipher_info_from_type(2);
  if (lVar2 == 0) {
    iVar1 = -0x6080;
  }
  else {
    if (param_2 == 0x10) {
      local_58 = *param_1;
      uStack_50 = param_1[1];
    }
    else {
      local_68 = (undefined1  [16])0x0;
      iVar1 = mbedtls_cipher_cmac(lVar2,local_68,0x80,param_1,param_2,&local_58);
      if (iVar1 != 0) goto LAB_00100d48;
    }
    iVar1 = mbedtls_cipher_cmac(lVar2,&local_58,0x80,param_3,param_4,param_5);
  }
LAB_00100d48:
  mbedtls_platform_zeroize(&local_58,0x10);
LAB_00100d55:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int mbedtls_cmac_self_test(ulong param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = cmac_test_subkeys_constprop_0(param_1,"AES 128",aes_128_key,0x80,aes_128_subkeys,2);
  if (iVar1 == 0) {
    iVar2 = (int)param_1;
    iVar1 = cmac_test_wth_cipher_constprop_0
                      (param_1 & 0xffffffff,"AES 128",aes_128_key,0x80,aes_128_expected_result,2);
    if ((((iVar1 == 0) &&
         (iVar1 = cmac_test_subkeys_constprop_0
                            (param_1 & 0xffffffff,"AES 192",aes_192_key,0xc0,aes_192_subkeys,3),
         iVar1 == 0)) &&
        (iVar1 = cmac_test_wth_cipher_constprop_0
                           (param_1 & 0xffffffff,"AES 192",aes_192_key,0xc0,aes_192_expected_result,
                            3), iVar1 == 0)) &&
       ((iVar1 = cmac_test_subkeys_constprop_0
                           (param_1 & 0xffffffff,"AES 256",aes_256_key,0x100,aes_256_subkeys,4),
        iVar1 == 0 &&
        (iVar1 = cmac_test_wth_cipher_constprop_0
                           (param_1 & 0xffffffff,"AES 256",aes_256_key,0x100,aes_256_expected_result
                            ,4), iVar1 == 0)))) {
      uVar3 = 0;
      do {
        __printf_chk(2,"  AES CMAC 128 PRF #%d: ",uVar3 & 0xffffffff);
        iVar1 = mbedtls_aes_cmac_prf_128(PRFK,(&PRFKlen)[uVar3],PRFM,0x14,&local_58);
        if (iVar1 != 0) {
          if (iVar2 != 0) {
            puts("failed");
          }
          goto LAB_00100e35;
        }
        if (local_58 != (&PRFT)[uVar3 * 2] || local_50 != (&DAT_001010e8)[uVar3 * 2]) {
          if (iVar2 == 0) goto LAB_00100e35;
          puts("failed");
          goto LAB_00100fd8;
        }
        if (iVar2 != 0) {
          puts("passed");
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != 3);
      if (iVar2 != 0) {
LAB_00100fd8:
        putchar(10);
      }
    }
  }
LAB_00100e35:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


