
undefined8 hmac_drbg_self_test_entropy(long param_1,void *param_2,size_t param_3)

{
  long lVar1;
  
  lVar1 = test_offset + param_3;
  memcpy(param_2,(void *)(param_1 + test_offset),param_3);
  test_offset = lVar1;
  return 0;
}



void mbedtls_hmac_drbg_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0xf] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x80U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((long)param_1 + 0x6c) = 10000;
  return;
}



int mbedtls_hmac_drbg_update(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  byte bVar4;
  long in_FS_OFFSET;
  byte local_89;
  undefined1 local_88 [72];
  long local_40;
  
  puVar1 = param_1 + 3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = mbedtls_md_get_size(*param_1);
  local_89 = 0;
  bVar4 = (param_2 != 0 && param_3 != 0) + 1;
  do {
    iVar3 = mbedtls_md_hmac_reset(param_1);
    if (iVar3 != 0) break;
    iVar3 = mbedtls_md_hmac_update(param_1,puVar1,uVar2);
    if (iVar3 != 0) break;
    iVar3 = mbedtls_md_hmac_update(param_1,&local_89,1);
    if (iVar3 != 0) break;
    if (bVar4 == 2) {
      iVar3 = mbedtls_md_hmac_update(param_1,param_2,param_3);
      if (iVar3 != 0) break;
    }
    iVar3 = mbedtls_md_hmac_finish(param_1,local_88);
    if (iVar3 != 0) break;
    iVar3 = mbedtls_md_hmac_starts(param_1,local_88,uVar2);
    if (iVar3 != 0) break;
    iVar3 = mbedtls_md_hmac_update(param_1,puVar1,uVar2);
    if (iVar3 != 0) break;
    iVar3 = mbedtls_md_hmac_finish(param_1,puVar1);
    if (iVar3 != 0) break;
    local_89 = local_89 + 1;
  } while (local_89 < bVar4);
  mbedtls_platform_zeroize(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int hmac_drbg_reseed_core(long param_1,long param_2,ulong param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 auStack_1c8 [49];
  long local_40;
  ulong uVar5;
  
  uVar2 = *(ulong *)(param_1 + 0x60);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != 0) {
    uVar2 = uVar2 * 3 >> 1;
  }
  if ((0x100 < param_3) || (0x180 < uVar2 + param_3)) {
    iVar1 = -5;
    goto LAB_001002bd;
  }
  puVar6 = auStack_1c8;
  for (lVar3 = 0x30; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  iVar1 = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x78),auStack_1c8);
  if (iVar1 == 0) {
    uVar2 = *(ulong *)(param_1 + 0x60);
    if (param_4 != 0) {
      iVar1 = (**(code **)(param_1 + 0x70))
                        (*(undefined8 *)(param_1 + 0x78),(long)auStack_1c8 + uVar2,uVar2 >> 1);
      if (iVar1 != 0) goto LAB_00100320;
      uVar2 = uVar2 + (*(ulong *)(param_1 + 0x60) >> 1);
    }
    if ((param_2 != 0) && (param_3 != 0)) {
      lVar3 = (long)auStack_1c8 + uVar2;
      uVar5 = 0x180;
      if (0x17f < uVar2) {
        uVar5 = uVar2;
      }
      lVar4 = uVar5 - uVar2;
      uVar2 = uVar2 + param_3;
      __memcpy_chk(lVar3,param_2,param_3,lVar4);
    }
    iVar1 = mbedtls_hmac_drbg_update(param_1,auStack_1c8,uVar2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x58) = 1;
    }
    mbedtls_platform_zeroize(auStack_1c8,uVar2);
  }
  else {
LAB_00100320:
    iVar1 = -9;
  }
LAB_001002bd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_hmac_drbg_seed_buf
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  iVar3 = mbedtls_md_setup(param_1,param_2,1);
  if (iVar3 == 0) {
    uVar1 = mbedtls_md_get_size(param_2);
    iVar3 = mbedtls_md_hmac_starts(param_1,param_1 + 0x18,uVar1);
    if (iVar3 == 0) {
      bVar2 = mbedtls_md_get_size(param_2);
      uVar4 = (ulong)bVar2;
      if (bVar2 < 8) {
        if ((bVar2 & 4) == 0) {
          if ((bVar2 != 0) && (*(undefined1 *)(param_1 + 0x18) = 1, (bVar2 & 2) != 0)) {
            *(undefined2 *)(param_1 + 0x16 + uVar4) = 0x101;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x18) = 0x1010101;
          *(undefined4 *)(param_1 + 0x14 + uVar4) = 0x1010101;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0x101010101010101;
        puVar5 = (undefined8 *)(param_1 + 0x20U & 0xfffffffffffffff8);
        *(undefined8 *)(param_1 + 0x10 + uVar4) = 0x101010101010101;
        uVar4 = (ulong)((uint)bVar2 + ((int)(param_1 + 0x18) - (int)puVar5) >> 3);
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0x101010101010101;
          puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
        }
      }
      mbedtls_hmac_drbg_update(param_1,param_3,param_4);
      return;
    }
  }
  return;
}



void mbedtls_hmac_drbg_reseed(void)

{
  hmac_drbg_reseed_core();
  return;
}



void mbedtls_hmac_drbg_seed
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  byte bVar7;
  
  bVar7 = 0;
  iVar2 = mbedtls_md_setup(param_1,param_2,1);
  if (iVar2 == 0) {
    bVar1 = mbedtls_md_get_size(param_2);
    uVar5 = (ulong)bVar1;
    iVar2 = mbedtls_md_hmac_starts(param_1,param_1 + 0x18,uVar5);
    if (iVar2 == 0) {
      if (bVar1 < 8) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 != 0) && (*(undefined1 *)(param_1 + 0x18) = 1, (bVar1 & 2) != 0)) {
            *(undefined2 *)(param_1 + 0x16 + uVar5) = 0x101;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x18) = 0x1010101;
          *(undefined4 *)(param_1 + 0x14 + uVar5) = 0x1010101;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0x101010101010101;
        puVar6 = (undefined8 *)(param_1 + 0x20U & 0xfffffffffffffff8);
        *(undefined8 *)(param_1 + 0x10 + uVar5) = 0x101010101010101;
        uVar4 = (ulong)(((int)(param_1 + 0x18) - (int)puVar6) + (uint)bVar1 >> 3);
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = 0x101010101010101;
          puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
        }
      }
      *(undefined8 *)(param_1 + 0x70) = param_3;
      *(undefined8 *)(param_1 + 0x78) = param_4;
      if (*(long *)(param_1 + 0x60) == 0) {
        lVar3 = 0x10;
        if (0x14 < uVar5) {
          lVar3 = (-(ulong)(uVar5 < 0x1d) & 0xfffffffffffffff8) + 0x20;
        }
        *(long *)(param_1 + 0x60) = lVar3;
      }
      hmac_drbg_reseed_core(param_1,param_5,param_6,1);
      return;
    }
  }
  return;
}



void mbedtls_hmac_drbg_set_prediction_resistance(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x68) = param_2;
  return;
}



void mbedtls_hmac_drbg_set_entropy_len(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x60) = param_2;
  return;
}



void mbedtls_hmac_drbg_set_reseed_interval(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return;
}



undefined8
mbedtls_hmac_drbg_random_with_add
          (undefined8 *param_1,undefined8 *param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  byte bVar11;
  ulong local_48;
  
  bVar11 = 0;
  bVar2 = mbedtls_md_get_size(*param_1);
  if (param_3 < 0x401) {
    if (param_5 < 0x101) {
      uVar10 = (ulong)bVar2;
      if ((param_1[0xe] == 0) ||
         ((*(int *)(param_1 + 0xd) != 1 &&
          (*(int *)(param_1 + 0xb) <= *(int *)((long)param_1 + 0x6c))))) {
        local_48 = param_5;
        if ((param_4 != 0) &&
           ((param_5 != 0 &&
            (uVar3 = mbedtls_hmac_drbg_update(param_1,param_4,param_5), (int)uVar3 != 0)))) {
          return uVar3;
        }
      }
      else {
        uVar3 = hmac_drbg_reseed_core(param_1,param_4,param_5,0);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        local_48 = 0;
      }
      if (param_3 != 0) {
        puVar1 = param_1 + 3;
        do {
          while( true ) {
            uVar7 = uVar10;
            if (param_3 <= uVar10) {
              uVar7 = param_3;
            }
            uVar3 = mbedtls_md_hmac_reset(param_1);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = mbedtls_md_hmac_update(param_1,puVar1,uVar10);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar3 = mbedtls_md_hmac_finish(param_1,puVar1);
            if ((int)uVar3 != 0) {
              return uVar3;
            }
            uVar6 = (uint)uVar7;
            if (uVar6 < 8) break;
            puVar9 = param_2 + 1;
            *param_2 = *puVar1;
            lVar4 = (long)param_2 - (long)((ulong)puVar9 & 0xfffffffffffffff8);
            *(undefined8 *)((long)param_2 + ((uVar7 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)param_1 + (uVar7 & 0xffffffff) + 0x10);
            param_2 = (undefined8 *)((long)param_2 + uVar7);
            puVar8 = (undefined8 *)((long)puVar1 - lVar4);
            puVar9 = (undefined8 *)((ulong)puVar9 & 0xfffffffffffffff8);
            for (uVar5 = (ulong)((int)lVar4 + uVar6 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
              *puVar9 = *puVar8;
              puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
              puVar9 = puVar9 + (ulong)bVar11 * -2 + 1;
            }
            param_3 = param_3 - uVar7;
            if (param_3 == 0) goto LAB_001006ba;
          }
          if ((uVar7 & 4) == 0) {
            if ((uVar6 != 0) && (*(undefined1 *)param_2 = *(undefined1 *)puVar1, (uVar7 & 2) != 0))
            {
              *(undefined2 *)((long)param_2 + ((uVar7 & 0xffffffff) - 2)) =
                   *(undefined2 *)((long)param_1 + (uVar7 & 0xffffffff) + 0x16);
            }
          }
          else {
            *(undefined4 *)param_2 = *(undefined4 *)puVar1;
            *(undefined4 *)((long)param_2 + ((uVar7 & 0xffffffff) - 4)) =
                 *(undefined4 *)((long)param_1 + (uVar7 & 0xffffffff) + 0x14);
          }
          param_2 = (undefined8 *)((long)param_2 + uVar7);
          param_3 = param_3 - uVar7;
        } while (param_3 != 0);
      }
LAB_001006ba:
      uVar3 = mbedtls_hmac_drbg_update(param_1,param_4,local_48);
      if ((int)uVar3 == 0) {
        *(int *)(param_1 + 0xb) = *(int *)(param_1 + 0xb) + 1;
      }
    }
    else {
      uVar3 = 0xfffffffb;
    }
  }
  else {
    uVar3 = 0xfffffffd;
  }
  return uVar3;
}



void mbedtls_hmac_drbg_random(void)

{
  mbedtls_hmac_drbg_random_with_add();
  return;
}



void mbedtls_hmac_drbg_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_md_free();
    mbedtls_platform_zeroize(param_1,0x80);
    *(undefined4 *)(param_1 + 0x6c) = 10000;
    return;
  }
  return;
}



int mbedtls_hmac_drbg_write_seed_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined1 auStack_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen64(param_2,"wb");
  if (__stream == (FILE *)0x0) {
    iVar1 = -7;
  }
  else {
    setbuf(__stream,(char *)0x0);
    iVar1 = mbedtls_hmac_drbg_random_with_add(param_1,auStack_128,0x100,0,0);
    if (iVar1 == 0) {
      sVar2 = fwrite(auStack_128,1,0x100,__stream);
      if (sVar2 != 0x100) {
        iVar1 = -7;
      }
    }
    fclose(__stream);
    mbedtls_platform_zeroize(auStack_128,0x100);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_hmac_drbg_update_seed_file(undefined8 param_1,char *param_2)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  size_t sVar3;
  long in_FS_OFFSET;
  undefined1 local_139;
  undefined1 local_138 [264];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = fopen64(param_2,"rb");
  if (__stream == (FILE *)0x0) {
    iVar1 = -7;
  }
  else {
    setbuf(__stream,(char *)0x0);
    sVar2 = fread(local_138,1,0x100,__stream);
    sVar3 = fread(&local_139,1,1,__stream);
    if (sVar3 == 0) {
      if (sVar2 != 0) {
        iVar1 = ferror(__stream);
        if (iVar1 == 0) {
          fclose(__stream);
          iVar1 = mbedtls_hmac_drbg_update(param_1,local_138,sVar2);
          mbedtls_platform_zeroize(local_138,0x100);
          if (iVar1 == 0) {
            iVar1 = mbedtls_hmac_drbg_write_seed_file(param_1,param_2);
          }
          goto LAB_0010093e;
        }
      }
      iVar1 = -7;
      mbedtls_platform_zeroize(local_138,0x100);
    }
    else {
      iVar1 = -5;
      mbedtls_platform_zeroize(local_138,0x100);
    }
    fclose(__stream);
  }
LAB_0010093e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 mbedtls_hmac_drbg_self_test(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined8 auStack_108 [13];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_88 [88];
  long local_30;
  
  bVar6 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = mbedtls_md_info_from_type(5);
  puVar4 = auStack_108;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
  }
  local_9c = 10000;
  if (param_1 == 0) {
    test_offset = 0;
    iVar1 = mbedtls_hmac_drbg_seed(auStack_108,uVar2,0x100000,entropy_pr,0,0);
    if (iVar1 == 0) {
      local_a0 = 1;
      iVar1 = mbedtls_hmac_drbg_random_with_add(auStack_108,local_88,0x50,0,0);
      if (iVar1 == 0) {
LAB_00100ac9:
        iVar1 = mbedtls_hmac_drbg_random_with_add(auStack_108,local_88,0x50,0,0);
        if ((iVar1 == 0) && (iVar1 = memcmp(local_88,result_pr,0x50), iVar1 == 0)) {
          mbedtls_md_free(auStack_108);
          mbedtls_platform_zeroize(auStack_108,0x80);
          local_9c = 10000;
          mbedtls_md_free(auStack_108);
          mbedtls_platform_zeroize(auStack_108,0x80);
          local_9c = 10000;
          if (param_1 == 0) {
            puVar4 = auStack_108;
            for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
            }
            local_9c = 10000;
            test_offset = 0;
            iVar1 = mbedtls_hmac_drbg_seed(auStack_108,uVar2,0x100000,entropy_nopr,0,0);
            if ((iVar1 != 0) || (iVar1 = hmac_drbg_reseed_core(auStack_108,0,0,0), iVar1 != 0))
            goto LAB_00100a66;
          }
          else {
            puts("passed");
            __printf_chk(2,"  HMAC_DRBG (PR = False) : ");
            puVar4 = auStack_108;
            for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + (ulong)bVar6 * -2 + 1;
            }
            local_9c = 10000;
            test_offset = 0;
            iVar1 = mbedtls_hmac_drbg_seed(auStack_108,uVar2,0x100000,entropy_nopr,0,0);
            if ((iVar1 != 0) || (iVar1 = hmac_drbg_reseed_core(auStack_108,0,0,0), iVar1 != 0))
            goto LAB_00100c9a;
          }
          iVar1 = mbedtls_hmac_drbg_random_with_add(auStack_108,local_88,0x50,0,0);
          if ((iVar1 == 0) &&
             ((iVar1 = mbedtls_hmac_drbg_random_with_add(auStack_108,local_88,0x50,0,0), iVar1 == 0
              && (iVar1 = memcmp(local_88,result_nopr,0x50), iVar1 == 0)))) {
            mbedtls_md_free(auStack_108);
            mbedtls_platform_zeroize(auStack_108,0x80);
            local_9c = 10000;
            mbedtls_md_free(auStack_108);
            mbedtls_platform_zeroize(auStack_108,0x80);
            local_9c = 10000;
            uVar5 = 0;
            if (param_1 != 0) {
              puts("passed");
              putchar(10);
            }
            goto LAB_00100a6c;
          }
        }
        if (param_1 != 0) goto LAB_00100c9a;
      }
    }
  }
  else {
    __printf_chk(2,"  HMAC_DRBG (PR = True) : ");
    test_offset = 0;
    iVar1 = mbedtls_hmac_drbg_seed(auStack_108,uVar2,0x100000,entropy_pr,0,0);
    if (iVar1 == 0) {
      local_a0 = 1;
      iVar1 = mbedtls_hmac_drbg_random_with_add(auStack_108,local_88,0x50,0,0);
      if (iVar1 == 0) goto LAB_00100ac9;
    }
LAB_00100c9a:
    puts("failed");
  }
LAB_00100a66:
  uVar5 = 1;
LAB_00100a6c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}


