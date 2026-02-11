
undefined8
mbedtls_cipher_values_from_psa
          (uint param_1,ushort param_2,undefined8 param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if ((param_1 & 0x7f000000) == 0x5000000) {
    param_1 = param_1 & 0xffc07fff;
  }
  if ((param_1 & 0x7e000000) == 0x4000000) {
    if (param_1 == 0x4c01100) {
      uVar1 = 3;
      goto LAB_0010007c;
    }
    if (0x4c01100 < param_1) {
      if (param_1 == 0x5000500) {
        uVar1 = 0xb;
      }
      else if (param_1 < 0x5000501) {
        if (param_1 == 0x4c01200) {
          uVar1 = 4;
        }
        else {
          uVar1 = 9;
          if (param_1 != 0x4c01300) {
            return 0xffffff7a;
          }
        }
      }
      else if (param_1 == 0x5400100) {
        uVar1 = 8;
      }
      else {
        uVar1 = 6;
        if (param_1 != 0x5400200) {
          return 0xffffff7a;
        }
      }
      goto LAB_0010007c;
    }
    if (param_1 != 0x4404400) {
      if (param_1 < 0x4404401) {
        if ((param_1 & 0xfffffeff) != 0x4404000) {
          return 0xffffff7a;
        }
        uVar1 = 2;
      }
      else if (param_1 == 0x4800100) {
        uVar1 = 7;
      }
      else {
        uVar1 = 5;
        if (param_1 != 0x4c01000) {
          return 0xffffff7a;
        }
      }
      goto LAB_0010007c;
    }
  }
  else if (param_1 != 0x3c00200) {
    return 0xffffff7a;
  }
  uVar1 = 1;
LAB_0010007c:
  *param_4 = uVar1;
  if (param_2 == 0x2403) {
    uVar1 = 5;
  }
  else if (param_2 < 0x2404) {
    if (param_2 == 0x2004) {
      uVar1 = 7;
    }
    else {
      uVar1 = 2;
      if (param_2 != 0x2400) {
        return 0xffffff7a;
      }
    }
  }
  else {
    uVar1 = 6;
    if (param_2 != 0x2406) {
      return 0xffffff7a;
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = uVar1;
  }
  if ((param_1 == 0x4800100) || (param_1 == 0x5000500)) {
    if (param_2 == 0x2004) {
      return 0;
    }
  }
  else if ((((((param_1 + 0xfabfff00 & 0xfffffeff) == 0) || (param_1 == 0x4c01300)) ||
            ((param_1 & 0xfffffeff) == 0x4c01000)) ||
           (((param_1 == 0x4c01200 || ((param_1 & 0xfffffeff) == 0x4404000)) ||
            ((param_1 == 0x4404400 || (param_1 == 0x3c00200)))))) &&
          ((ushort)(param_2 + 0xdc00) < 7)) {
    return 0;
  }
  return 0xffffff7a;
}



undefined8
psa_cipher_setup_isra_0
          (uint *param_1,ushort *param_2,undefined8 param_3,uint param_4,undefined4 param_5)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long in_FS_OFFSET;
  undefined4 local_50;
  undefined4 local_4c;
  ulong local_48;
  long local_40;
  
  puVar1 = param_1 + 2;
  uVar2 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_cipher_init(puVar1);
  *param_1 = param_4;
  uVar3 = param_2[1];
  local_4c = 0;
  local_48 = (ulong)uVar3;
  iVar6 = mbedtls_cipher_values_from_psa(param_4,uVar2,&local_48,&local_50,&local_4c);
  if ((iVar6 != 0) ||
     (lVar8 = mbedtls_cipher_info_from_values(local_4c,(ulong)uVar3,local_50), lVar8 == 0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0xffffff7a;
    }
    goto LAB_001004bc;
  }
  iVar6 = mbedtls_cipher_setup(puVar1,lVar8);
  if ((iVar6 == 0) &&
     (iVar7 = mbedtls_cipher_setkey(puVar1,param_3,uVar3,param_5), iVar6 = iVar7, iVar7 == 0)) {
    bVar4 = (byte)(uVar2 >> 8);
    if (param_4 == 0x4404000) {
      iVar6 = mbedtls_cipher_set_padding_mode(puVar1,4);
LAB_0010035f:
      if (iVar6 != 0) goto LAB_001002f3;
      if ((uVar2 & 0x7000) != 0x2000) {
        *(undefined1 *)((long)param_1 + 5) = 0;
        goto LAB_0010037c;
      }
LAB_00100410:
      uVar5 = (undefined1)(1 << (bVar4 & 7));
      *(undefined1 *)((long)param_1 + 5) = uVar5;
LAB_00100424:
      if (((uVar2 & 0x700) == 0) ||
         (((((param_4 & 0xfffffeff) != 0x4c01000 && (param_4 != 0x4c01200)) &&
           (param_4 != 0x440ff00)) && ((param_4 & 0xfffffeff) != 0x4404000)))) goto LAB_001003c1;
    }
    else {
      if (param_4 == 0x4404100) {
        iVar6 = mbedtls_cipher_set_padding_mode(puVar1,0);
        goto LAB_0010035f;
      }
      if ((param_4 & 0x7f800000) != 0x4800000) {
        if ((uVar2 & 0x7000) != 0x2000) {
          *(undefined1 *)((long)param_1 + 5) = 0;
          goto LAB_001003c1;
        }
        goto LAB_00100410;
      }
      *(undefined1 *)((long)param_1 + 5) = 1;
      if ((uVar2 & 0x7000) == 0x2000) {
        uVar5 = (undefined1)(1 << (bVar4 & 7));
        goto LAB_00100424;
      }
LAB_001003c1:
      if ((uVar2 != 0x2004) || (uVar5 = 0xc, param_4 != 0x4800100)) {
LAB_0010037c:
        uVar5 = 0;
        if (param_4 == 0x4c01300) {
          uVar5 = 0xd;
        }
      }
    }
    *(undefined1 *)(param_1 + 1) = uVar5;
    iVar6 = iVar7;
  }
LAB_001002f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar9 = mbedtls_to_psa_error(iVar6);
    return uVar9;
  }
LAB_001004bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_cipher_info_from_psa
          (undefined8 param_1,undefined2 param_2,ulong param_3,undefined4 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_20;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_20 = param_3;
  iVar1 = mbedtls_cipher_values_from_psa(param_1,param_2,&local_20,&local_18,&local_14);
  if (iVar1 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_14;
    }
    uVar2 = mbedtls_cipher_info_from_values(local_14,local_20 & 0xffffffff,local_18);
  }
  else {
    uVar2 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_psa_cipher_encrypt_setup(void)

{
  psa_cipher_setup_isra_0();
  return;
}



void mbedtls_psa_cipher_decrypt_setup(void)

{
  psa_cipher_setup_isra_0();
  return;
}



undefined8 mbedtls_psa_cipher_set_iv(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(byte *)(param_1 + 4) == param_3) {
    uVar1 = mbedtls_cipher_set_iv(param_1 + 8);
    uVar2 = mbedtls_to_psa_error(uVar1);
    return uVar2;
  }
  return 0xffffff79;
}



ulong mbedtls_psa_cipher_update
                (uint *param_1,undefined8 *param_2,ulong param_3,long param_4,ulong param_5,
                ulong *param_6)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 & 0x7f800000) == 0x4800000) {
    if (param_5 < param_3) goto LAB_00100761;
LAB_00100640:
    if (param_3 != 0) {
      uVar2 = mbedtls_cipher_update(param_1 + 2,param_2,param_3,param_4,param_6);
      uVar4 = mbedtls_to_psa_error(uVar2);
      uVar4 = uVar4 & 0xffffffff;
      if (param_5 < *param_6) {
        uVar4 = 0xffffff69;
      }
      goto LAB_00100652;
    }
    *param_6 = 0;
  }
  else {
    if (param_5 < (*(long *)(param_1 + 0xe) + param_3) -
                  (*(long *)(param_1 + 0xe) + param_3) % (ulong)*(byte *)((long)param_1 + 5)) {
LAB_00100761:
      uVar4 = 0xffffff76;
      goto LAB_00100652;
    }
    if (*param_1 != 0x4404400) goto LAB_00100640;
    if (*(long *)(param_1 + 2) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)(*(byte *)(*(long *)(param_1 + 2) + 8) & 0x1f);
    }
    local_48 = 0;
    *param_6 = 0;
    if (param_3 == 0) goto LAB_00100650;
    lVar6 = *(long *)(param_1 + 0xe);
    if (lVar6 == 0) {
      lVar6 = 0;
      if (uVar7 <= param_3) {
LAB_001006c3:
        do {
          uVar2 = mbedtls_cipher_update(param_1 + 2,param_2,uVar7,param_4,&local_48);
          uVar4 = mbedtls_to_psa_error(uVar2);
          if ((int)uVar4 != 0) goto LAB_00100652;
          param_3 = param_3 - uVar7;
          *param_6 = *param_6 + local_48;
          param_2 = (undefined8 *)((long)param_2 + uVar7);
          param_4 = param_4 + local_48;
        } while (uVar7 <= param_3);
        goto LAB_0010070c;
      }
    }
    else {
      uVar4 = uVar7 - lVar6;
      if (param_3 < uVar7 - lVar6) {
        uVar4 = param_3;
      }
      memcpy((void *)((long)param_1 + lVar6 + 0x28),param_2,uVar4);
      lVar6 = *(long *)(param_1 + 0xe);
      param_3 = param_3 - uVar4;
      param_2 = (undefined8 *)((long)param_2 + uVar4);
      *(ulong *)(param_1 + 0xe) = lVar6 + uVar4;
      if (uVar7 == lVar6 + uVar4) {
        uVar2 = mbedtls_cipher_update(param_1 + 2,param_1 + 10,uVar7,param_4,&local_48);
        uVar4 = mbedtls_to_psa_error(uVar2);
        if ((int)uVar4 != 0) goto LAB_00100652;
        *param_6 = *param_6 + local_48;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_4 = param_4 + local_48;
      }
      if (uVar7 <= param_3) goto LAB_001006c3;
LAB_0010070c:
      if (param_3 == 0) goto LAB_00100650;
      lVar6 = *(long *)(param_1 + 0xe);
    }
    puVar1 = (undefined8 *)((long)param_1 + lVar6 + 0x28);
    uVar3 = (uint)param_3;
    uVar4 = param_3 & 0xffffffff;
    if (uVar3 < 8) {
      if ((param_3 & 4) == 0) {
        if ((uVar3 != 0) && (*(undefined1 *)puVar1 = *(undefined1 *)param_2, (param_3 & 2) != 0)) {
          *(undefined2 *)((long)puVar1 + (uVar4 - 2)) = *(undefined2 *)((long)param_2 + (uVar4 - 2))
          ;
        }
      }
      else {
        *(undefined4 *)puVar1 = *(undefined4 *)param_2;
        *(undefined4 *)((long)puVar1 + (uVar4 - 4)) = *(undefined4 *)((long)param_2 + (uVar4 - 4));
      }
    }
    else {
      *puVar1 = *param_2;
      *(undefined8 *)((long)puVar1 + ((param_3 & 0xffffffff) - 8)) =
           *(undefined8 *)((long)param_2 + ((param_3 & 0xffffffff) - 8));
      lVar6 = (long)puVar1 - ((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
      uVar3 = uVar3 + (int)lVar6 & 0xfffffff8;
      if (7 < uVar3) {
        uVar4 = 0;
        do {
          uVar5 = (int)uVar4 + 8;
          *(undefined8 *)(((ulong)(puVar1 + 1) & 0xfffffffffffffff8) + uVar4) =
               *(undefined8 *)((long)param_2 + (uVar4 - lVar6));
          uVar4 = (ulong)uVar5;
        } while (uVar5 < uVar3);
      }
    }
    *(ulong *)(param_1 + 0xe) = *(long *)(param_1 + 0xe) + param_3;
  }
LAB_00100650:
  uVar4 = 0;
LAB_00100652:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int mbedtls_psa_cipher_finish(uint *param_1,void *param_2,ulong param_3,ulong *param_4)

{
  ulong __n;
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xe) == 0) || ((*param_1 & 0xfffffbff) != 0x4404000)) {
    uVar1 = mbedtls_cipher_finish(param_1 + 2,auStack_48,param_4);
    iVar2 = mbedtls_to_psa_error(uVar1);
    if ((iVar2 == 0) && (__n = *param_4, __n != 0)) {
      if (param_3 < __n) {
        iVar2 = -0x8a;
      }
      else {
        memcpy(param_2,auStack_48,__n);
      }
    }
  }
  else {
    iVar2 = -0x87;
  }
  mbedtls_platform_zeroize(auStack_48,0x10);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_psa_cipher_abort(uint *param_1)

{
  if ((*param_1 & 0x7f000000) == 0x4000000) {
    mbedtls_cipher_free(param_1 + 2);
    return 0;
  }
  return 0xffffff77;
}



int mbedtls_psa_cipher_encrypt
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,long param_9,
              long param_10,long *param_11)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  long local_b8;
  long local_b0;
  uint local_a8;
  byte local_a4;
  undefined1 local_a0 [96];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = &local_a8;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  iVar1 = psa_cipher_setup_isra_0(&local_a8,param_1,param_2,param_4,1);
  if (iVar1 == 0) {
    if (param_6 != 0) {
      if (param_6 == local_a4) {
        uVar2 = mbedtls_cipher_set_iv(local_a0,param_5,param_6);
        iVar1 = mbedtls_to_psa_error(uVar2);
        if (iVar1 == 0) goto LAB_00100a75;
      }
      else {
        iVar1 = -0x87;
      }
      goto LAB_00100b00;
    }
LAB_00100a75:
    iVar1 = mbedtls_psa_cipher_update(&local_a8,param_7,param_8,param_9,param_10,&local_b8);
    if (iVar1 != 0) goto LAB_00100b00;
    if (param_9 != 0) {
      param_9 = local_b8 + param_9;
    }
    iVar1 = mbedtls_psa_cipher_finish(&local_a8,param_9,param_10 - local_b8,&local_b0);
    if (iVar1 != 0) goto LAB_00100b00;
    *param_11 = local_b0 + local_b8;
    if ((local_a8 & 0x7f000000) != 0x4000000) {
      iVar1 = -0x89;
      goto LAB_00100b1a;
    }
  }
  else {
LAB_00100b00:
    if ((local_a8 & 0x7f000000) != 0x4000000) goto LAB_00100b1a;
  }
  mbedtls_cipher_free(local_a0);
LAB_00100b1a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_psa_cipher_decrypt
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
              long param_5,long param_6,long param_7,long param_8,long *param_9)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint *puVar4;
  long in_FS_OFFSET;
  long local_b0;
  uint local_a8;
  byte local_a4;
  undefined1 local_a0 [96];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = &local_a8;
  for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4 = puVar4 + 2;
  }
  iVar1 = psa_cipher_setup_isra_0(&local_a8,param_1,param_2,param_4,0);
  if (iVar1 == 0) {
    if (local_a4 != 0) {
      uVar2 = mbedtls_cipher_set_iv(local_a0,param_5);
      iVar1 = mbedtls_to_psa_error(uVar2);
      if (iVar1 != 0) goto LAB_00100c78;
    }
    if (param_5 != 0) {
      param_5 = (ulong)local_a4 + param_5;
    }
    iVar1 = mbedtls_psa_cipher_update
                      (&local_a8,param_5,param_6 - (ulong)local_a4,param_7,param_8,&local_b0);
    lVar3 = local_b0;
    if (iVar1 != 0) goto LAB_00100c78;
    if (param_7 != 0) {
      param_7 = param_7 + local_b0;
    }
    iVar1 = mbedtls_psa_cipher_finish(&local_a8,param_7,param_8 - local_b0,&local_b0);
    if (iVar1 != 0) goto LAB_00100c78;
    *param_9 = lVar3 + local_b0;
    if ((local_a8 & 0x7f000000) != 0x4000000) {
      iVar1 = -0x89;
      goto LAB_00100c92;
    }
  }
  else {
LAB_00100c78:
    if ((local_a8 & 0x7f000000) != 0x4000000) goto LAB_00100c92;
  }
  mbedtls_cipher_free(local_a0);
LAB_00100c92:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}


