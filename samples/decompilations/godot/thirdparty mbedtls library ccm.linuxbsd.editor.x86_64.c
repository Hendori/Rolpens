
undefined8 ccm_calculate_first_block_if_ready(byte *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  uVar1 = *(uint *)(param_1 + 0xa8);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((~uVar1 & 3) == 0) {
    if (*(long *)(param_1 + 0x30) == 0) {
      if (*(int *)(param_1 + 0x44) - 2U < 2) {
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        goto LAB_00100025;
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x40);
      uVar6 = *(ulong *)(param_1 + 0x20);
      *param_1 = (byte)((int)(*(long *)(param_1 + 0x30) - 2U >> 1) << 3) |
                 (char)uVar2 - 1U | *param_1 | (*(long *)(param_1 + 0x28) != 0) << 6;
      if (uVar2 != 0) {
        uVar7 = 0;
        uVar5 = 0;
        do {
          uVar7 = uVar7 + 1;
          iVar3 = 0xf - uVar5;
          uVar5 = uVar7 & 0xff;
          param_1[iVar3] = (byte)uVar6;
          uVar6 = uVar6 >> 8;
        } while (uVar5 < uVar2);
      }
      if (uVar6 == 0) {
        uVar4 = mbedtls_cipher_update(param_1 + 0x48,param_1,0x10,param_1,auStack_18);
        if ((int)uVar4 != 0) {
          *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10;
        }
        goto LAB_00100027;
      }
      *(uint *)(param_1 + 0xa8) = uVar1 | 0x10;
    }
    uVar4 = 0xfffffff3;
  }
  else {
LAB_00100025:
    uVar4 = 0;
  }
LAB_00100027:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ccm_crypt(long param_1,long param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  iVar1 = mbedtls_cipher_update(param_1 + 0x48,param_1 + 0x10,0x10,local_58,&local_60);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10;
    mbedtls_platform_zeroize(local_58,0x10);
    goto LAB_001001f1;
  }
  puVar3 = (ulong *)(local_58 + param_2);
  if (param_3 < 8) {
    uVar2 = 0;
LAB_001001d0:
    do {
      *(byte *)((long)param_5 + uVar2) =
           *(byte *)((long)param_4 + uVar2) ^ *(byte *)((long)puVar3 + uVar2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  else {
    *param_5 = *param_4 ^ *puVar3;
    if (param_3 == 0x10) {
      param_5[1] = param_4[1] ^ *(ulong *)(local_58 + param_2 + 8);
      uVar2 = 0x10;
    }
    else {
      uVar2 = 8;
    }
    if (uVar2 < param_3) {
      uVar2 = 8;
      goto LAB_001001d0;
    }
  }
  mbedtls_platform_zeroize(local_58,0x10);
LAB_001001f1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_ccm_update_part_0(long param_1,ulong *param_2,ulong param_3,undefined8 *param_4)

{
  char *pcVar1;
  ulong *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
LAB_001002b5:
    do {
      uVar11 = (ulong)((uint)*(long *)(param_1 + 0x38) & 0xf);
      uVar10 = 0x10 - uVar11;
      if (param_3 < 0x10 - uVar11) {
        uVar10 = param_3;
      }
      *(ulong *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + uVar10;
      uVar3 = *(uint *)(param_1 + 0x44) & 0xfffffffd;
      if (uVar3 == 1) {
        puVar2 = (ulong *)(param_1 + uVar11);
        if (uVar10 < 8) {
          uVar5 = 0;
          goto LAB_00100320;
        }
        *puVar2 = *puVar2 ^ *param_2;
        if (uVar10 == 0x10) {
          puVar2[1] = puVar2[1] ^ param_2[1];
          uVar8 = 0x10;
        }
        else {
          uVar8 = 8;
        }
        uVar5 = 8;
        while (uVar8 < uVar10) {
LAB_00100320:
          *(byte *)((long)puVar2 + uVar5) =
               *(byte *)((long)puVar2 + uVar5) ^ *(byte *)((long)param_2 + uVar5);
          uVar5 = uVar5 + 1;
          uVar8 = uVar5;
        }
        if (((uVar11 + uVar10 == 0x10) || (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x20)))
           && (iVar4 = mbedtls_cipher_update(param_1 + 0x48,param_1,0x10,param_1,&local_60),
              iVar4 != 0)) {
LAB_00100451:
          *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 0x10;
        }
        else {
          iVar4 = mbedtls_ccm_crypt(param_1,uVar11,uVar10,param_2,param_4);
          if (iVar4 == 0) {
            if ((*(uint *)(param_1 + 0x44) & 0xfffffffd) != 0) goto LAB_00100288;
            goto LAB_00100381;
          }
        }
        goto LAB_00100460;
      }
      if (uVar3 == 0) {
LAB_00100381:
        iVar4 = mbedtls_ccm_crypt(param_1,uVar11,uVar10,param_2,&local_58);
        if (iVar4 == 0) {
          puVar2 = (ulong *)(param_1 + uVar11);
          if (uVar10 < 8) {
            uVar5 = 0;
            goto LAB_001003e0;
          }
          *puVar2 = *puVar2 ^ CONCAT44(local_58._4_4_,(undefined4)local_58);
          if (uVar10 == 0x10) {
            puVar2[1] = puVar2[1] ^ local_50;
            uVar8 = 0x10;
          }
          else {
            uVar8 = 8;
          }
          uVar5 = 8;
          while (uVar8 < uVar10) {
LAB_001003e0:
            *(byte *)((long)puVar2 + uVar5) =
                 *(byte *)((long)puVar2 + uVar5) ^ *(byte *)((long)&local_58 + uVar5);
            uVar5 = uVar5 + 1;
            uVar8 = uVar5;
          }
          uVar3 = (uint)uVar10;
          if (uVar3 < 8) {
            if ((uVar10 & 4) == 0) {
              if (uVar3 != 0) {
                *(undefined1 *)param_4 = (undefined1)local_58;
                if ((uVar10 & 2) != 0) {
                  *(undefined2 *)((long)param_4 + ((uVar10 & 0xffffffff) - 2)) =
                       *(undefined2 *)((long)&local_60 + (uVar10 & 0xffffffff) + 6);
                }
              }
            }
            else {
              *(undefined4 *)param_4 = (undefined4)local_58;
              *(undefined4 *)((long)param_4 + ((uVar10 & 0xffffffff) - 4)) =
                   *(undefined4 *)((long)&local_60 + (uVar10 & 0xffffffff) + 4);
            }
          }
          else {
            *param_4 = CONCAT44(local_58._4_4_,(undefined4)local_58);
            *(undefined8 *)((long)param_4 + ((uVar10 & 0xffffffff) - 8)) =
                 *(undefined8 *)((long)&local_60 + (uVar10 & 0xffffffff));
            lVar6 = (long)param_4 - ((ulong)(param_4 + 1) & 0xfffffffffffffff8);
            uVar3 = (int)lVar6 + uVar3 & 0xfffffff8;
            if (7 < uVar3) {
              uVar5 = 0;
              do {
                uVar9 = (int)uVar5 + 8;
                *(undefined8 *)(((ulong)(param_4 + 1) & 0xfffffffffffffff8) + uVar5) =
                     *(undefined8 *)((long)&local_58 + (uVar5 - lVar6));
                uVar5 = (ulong)uVar9;
              } while (uVar9 < uVar3);
            }
          }
          if (uVar11 + uVar10 == 0x10) {
            iVar4 = mbedtls_cipher_update(param_1 + 0x48,param_1,0x10,param_1,&local_60);
            if (iVar4 == 0) goto LAB_001004b8;
          }
          else {
            if (*(long *)(param_1 + 0x38) != *(long *)(param_1 + 0x20)) goto LAB_001002a6;
            iVar4 = mbedtls_cipher_update(param_1 + 0x48,param_1,0x10,param_1,&local_60);
            if (iVar4 == 0) goto LAB_00100295;
          }
          goto LAB_00100451;
        }
        goto LAB_00100460;
      }
LAB_00100288:
      if (uVar11 + uVar10 == 0x10) {
LAB_001004b8:
        uVar3 = *(uint *)(param_1 + 0x40);
        uVar7 = 0;
        uVar9 = 0;
        if (uVar3 != 0) {
          do {
            pcVar1 = (char *)(param_1 + 0x10 + (long)(int)(0xf - uVar9));
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 != '\0') {
              param_2 = (ulong *)((long)param_2 + uVar10);
              param_4 = (undefined8 *)((long)param_4 + uVar10);
              param_3 = param_3 - uVar10;
              if (param_3 == 0) goto LAB_001004fb;
              goto LAB_001002b5;
            }
            uVar7 = uVar7 + 1;
            uVar9 = uVar7 & 0xff;
          } while (uVar9 < uVar3);
        }
      }
      else {
LAB_00100295:
        if (*(long *)(param_1 + 0x38) == *(long *)(param_1 + 0x20)) goto LAB_001004b8;
      }
LAB_001002a6:
      param_2 = (ulong *)((long)param_2 + uVar10);
      param_4 = (undefined8 *)((long)param_4 + uVar10);
      param_3 = param_3 - uVar10;
    } while (param_3 != 0);
  }
LAB_001004fb:
  iVar4 = 0;
LAB_00100460:
  mbedtls_platform_zeroize(&local_58,0x10);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_ccm_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x15] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xb0U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



undefined8 mbedtls_ccm_setkey(long param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = mbedtls_cipher_info_from_values(param_2,param_4,1);
  if ((lVar1 == 0) || ((*(byte *)(lVar1 + 8) & 0x1f) != 0x10)) {
    uVar2 = 0xfffffff3;
  }
  else {
    param_1 = param_1 + 0x48;
    mbedtls_cipher_free(param_1);
    uVar2 = mbedtls_cipher_setup(param_1,lVar1);
    if ((int)uVar2 == 0) {
      uVar2 = mbedtls_cipher_setkey(param_1,param_3,param_4,1);
      return uVar2;
    }
  }
  return uVar2;
}



void mbedtls_ccm_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_cipher_free(param_1 + 0x48);
    mbedtls_platform_zeroize(param_1,0xb0);
    return;
  }
  return;
}



undefined8 mbedtls_ccm_starts(long param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_4 - 7 < 7) {
    iVar1 = 0xf - (int)param_4;
    *(undefined4 *)(param_1 + 0x44) = param_2;
    *(int *)(param_1 + 0x40) = iVar1;
    *(undefined8 *)(param_1 + 0x11) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(char *)(param_1 + 0x10) = (char)iVar1 + -1;
    memcpy((void *)(param_1 + 0x11),param_3,param_4);
    memset((void *)(param_1 + 0x11 + param_4),0,(ulong)*(uint *)(param_1 + 0x40));
    *(undefined1 *)(param_1 + 0x1f) = 1;
    memcpy((void *)(param_1 + 1),param_3,param_4);
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 1;
    uVar2 = ccm_calculate_first_block_if_ready(param_1);
    return uVar2;
  }
  return 0xfffffff3;
}



undefined8 mbedtls_ccm_set_lengths(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  
  if ((((param_4 != 2) && (param_4 < 0x11)) && (param_2 < 0xff00)) && ((param_4 & 1) == 0)) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(ulong *)(param_1 + 0x28) = param_2;
    *(ulong *)(param_1 + 0x30) = param_4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar1 = ccm_calculate_first_block_if_ready();
    return uVar1;
  }
  return 0xfffffff3;
}



undefined8 mbedtls_ccm_update_ad(ushort *param_1,ulong *param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_1 + 0x54);
  if ((uVar2 & 0x10) == 0) {
    if (param_3 != 0) {
      if ((uVar2 & 8) != 0) goto LAB_00100940;
      if ((uVar2 & 4) == 0) {
        if (*(ulong *)(param_1 + 0x14) < param_3) goto LAB_00100940;
        *(uint *)(param_1 + 0x54) = uVar2 | 4;
        lVar4 = *(long *)(param_1 + 0x1c);
        *param_1 = *param_1 ^ (param_1[0x14] << 8 | param_1[0x14] >> 8);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x1c);
        if (*(ulong *)(param_1 + 0x14) < lVar4 + param_3) goto LAB_00100940;
      }
      do {
        uVar8 = (ulong)((int)lVar4 + 2U & 0xf);
        puVar1 = (ulong *)((long)param_1 + uVar8);
        uVar6 = 0x10 - uVar8;
        if (param_3 < 0x10 - uVar8) {
          uVar6 = param_3;
        }
        if (uVar6 < 8) {
          uVar3 = 0;
LAB_001008a0:
          do {
            *(byte *)((long)puVar1 + uVar3) =
                 *(byte *)((long)puVar1 + uVar3) ^ *(byte *)((long)param_2 + uVar3);
            uVar3 = uVar3 + 1;
          } while (uVar6 != uVar3);
        }
        else {
          *puVar1 = *puVar1 ^ *param_2;
          if (uVar6 == 0x10) {
            puVar1[1] = puVar1[1] ^ param_2[1];
            uVar7 = 0x10;
          }
          else {
            uVar7 = 8;
          }
          uVar3 = 8;
          if (uVar7 < uVar6) goto LAB_001008a0;
        }
        param_3 = param_3 - uVar6;
        param_2 = (ulong *)((long)param_2 + uVar6);
        lVar4 = *(long *)(param_1 + 0x1c) + uVar6;
        *(long *)(param_1 + 0x1c) = lVar4;
        if ((uVar6 + uVar8 == 0x10) || (lVar4 == *(long *)(param_1 + 0x14))) {
          uVar5 = mbedtls_cipher_update(param_1 + 0x24,param_1,0x10,param_1,auStack_38);
          if ((int)uVar5 != 0) {
            *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 0x10;
            goto LAB_001008e3;
          }
          lVar4 = *(long *)(param_1 + 0x1c);
        }
      } while (param_3 != 0);
      if (*(long *)(param_1 + 0x14) == lVar4) {
        *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) | 8;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_00100940:
    uVar5 = 0xfffffff3;
  }
LAB_001008e3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8
mbedtls_ccm_update(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  ulong *param_6)

{
  undefined8 uVar1;
  
  if (((*(byte *)(param_1 + 0xa8) & 0x10) == 0) &&
     (((*(long *)(param_1 + 0x30) == 0 ||
       (*(long *)(param_1 + 0x38) + param_3 <= *(ulong *)(param_1 + 0x20))) && (param_3 <= param_5))
     )) {
    *param_6 = param_3;
    uVar1 = mbedtls_ccm_update_part_0();
    return uVar1;
  }
  return 0xfffffff3;
}



int mbedtls_ccm_finish(undefined1 (*param_1) [16],void *param_2,size_t param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*(uint *)(param_1[10] + 8) & 0x10) == 0) {
    if (((*(long *)(param_1[2] + 8) == 0) || ((*(uint *)(param_1[10] + 8) & 8) != 0)) &&
       ((*(long *)param_1[2] == 0 || (*(long *)param_1[2] == *(long *)(param_1[3] + 8))))) {
      uVar1 = *(uint *)param_1[4];
      uVar3 = 0;
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          uVar3 = uVar3 + 1;
          iVar2 = 0xf - uVar4;
          uVar4 = uVar3 & 0xff;
          param_1[1][iVar2] = 0;
        } while (uVar4 < uVar1);
      }
      iVar2 = mbedtls_ccm_crypt(param_1,0,0x10,param_1,param_1);
      if (iVar2 == 0) {
        if (param_2 != (void *)0x0) {
          memcpy(param_2,param_1,param_3);
        }
        *(undefined4 *)(param_1[10] + 8) = 0;
        *param_1 = (undefined1  [16])0x0;
        param_1[1] = (undefined1  [16])0x0;
      }
    }
    else {
      iVar2 = -0xd;
    }
  }
  else {
    iVar2 = -0x6e;
  }
  return iVar2;
}



undefined8
ccm_auth_crypt_part_0
          (long param_1,long param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  
  if ((((param_8 != 2) && (param_8 < 0x11)) && (param_4 < 0xff00)) && ((param_8 & 1) == 0)) {
    *(uint *)(param_1 + 0xa8) = *(uint *)(param_1 + 0xa8) | 2;
    *(long *)(param_1 + 0x20) = param_2;
    *(ulong *)(param_1 + 0x28) = param_4;
    *(ulong *)(param_1 + 0x30) = param_8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    uVar1 = ccm_calculate_first_block_if_ready();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    uVar1 = mbedtls_ccm_update_ad(param_1,param_3,param_4);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (((*(byte *)(param_1 + 0xa8) & 0x10) == 0) &&
       ((*(long *)(param_1 + 0x30) == 0 ||
        ((ulong)(*(long *)(param_1 + 0x38) + param_2) <= *(ulong *)(param_1 + 0x20))))) {
      uVar1 = mbedtls_ccm_update_part_0(param_1,param_5,param_2,param_6);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      uVar1 = mbedtls_ccm_finish(param_1,param_7,param_8);
      return uVar1;
    }
  }
  return 0xfffffff3;
}



void mbedtls_ccm_star_encrypt_and_tag
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  
  iVar1 = mbedtls_ccm_starts(param_1,3);
  if (iVar1 != 0) {
    return;
  }
  ccm_auth_crypt_part_0(param_1,param_2,param_5,param_6,param_7,param_8);
  return;
}



void mbedtls_ccm_encrypt_and_tag
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  
  iVar1 = mbedtls_ccm_starts(param_1,1);
  if (iVar1 != 0) {
    return;
  }
  ccm_auth_crypt_part_0(param_1,param_2,param_5,param_6,param_7,param_8);
  return;
}



undefined8
mbedtls_ccm_star_auth_decrypt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = mbedtls_ccm_starts(param_1,2);
  if ((int)uVar1 == 0) {
    uVar1 = ccm_auth_crypt_part_0(param_1,param_2,param_5,param_6,param_7,param_8,local_58);
    if ((int)uVar1 == 0) {
      uVar1 = mbedtls_ct_memcmp(param_9,local_58,param_10,param_10);
      if ((int)uVar1 != 0) {
        mbedtls_platform_zeroize(param_8,param_2);
        uVar1 = 0xfffffff1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
mbedtls_ccm_auth_decrypt
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          undefined8 param_9,undefined8 param_10)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = mbedtls_ccm_starts(param_1,0);
  if ((int)uVar1 == 0) {
    uVar1 = ccm_auth_crypt_part_0(param_1,param_2,param_5,param_6,param_7,param_8,local_58);
    if ((int)uVar1 == 0) {
      uVar1 = mbedtls_ct_memcmp(param_9,local_58,param_10,param_10);
      if ((int)uVar1 != 0) {
        mbedtls_platform_zeroize(param_8,param_2);
        uVar1 = 0xfffffff1;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 mbedtls_ccm_self_test(int param_1)

{
  undefined1 *puVar1;
  size_t __n;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  long lVar9;
  undefined8 local_148 [9];
  undefined1 local_100 [104];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar8 = local_148;
  for (lVar6 = 0x16; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  iVar5 = mbedtls_ccm_setkey(local_148,2,key_test_data,0x80);
  if (iVar5 == 0) {
    lVar6 = 0;
    if (param_1 == 0) goto LAB_00100f7b;
LAB_00100f61:
    __printf_chk(2,"  CCM-AES #%u: ",(int)lVar6 + 1);
LAB_00100f7b:
    do {
      local_78 = 0;
      __n = (&msg_len_test_data)[lVar6];
      local_88 = (undefined1  [16])0x0;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      __memcpy_chk(local_88,msg_test_data,__n,0x18);
      lVar2 = (&tag_len_test_data)[lVar6];
      uVar3 = (&iv_len_test_data)[lVar6];
      uVar4 = (&add_len_test_data)[lVar6];
      iVar5 = mbedtls_ccm_starts(local_148,1,iv_test_data,uVar3);
      if (iVar5 != 0) {
LAB_00100fed:
        if (param_1 != 0) {
          puts("failed");
        }
        goto LAB_001011b2;
      }
      puVar1 = local_68 + __n;
      iVar5 = ccm_auth_crypt_part_0(local_148,__n,ad_test_data,uVar4,local_88,local_68,puVar1,lVar2)
      ;
      if ((iVar5 != 0) ||
         (iVar5 = memcmp(local_68,res_test_data + lVar6 * 0x20,__n + lVar2), iVar5 != 0))
      goto LAB_00100fed;
      local_78 = 0;
      local_88 = (undefined1  [16])0x0;
      iVar5 = mbedtls_ccm_starts(local_148,0,iv_test_data,uVar3);
      if (iVar5 != 0) goto LAB_00100fed;
      lVar9 = lVar2;
      iVar5 = ccm_auth_crypt_part_0(local_148,__n,ad_test_data,uVar4,local_68,local_88,local_98);
      if (iVar5 != 0) goto LAB_00100fed;
      iVar5 = mbedtls_ct_memcmp(puVar1,local_98,lVar2,lVar9);
      if (iVar5 != 0) {
        mbedtls_platform_zeroize(local_88,__n);
        goto LAB_00100fed;
      }
      iVar5 = memcmp(local_88,msg_test_data,__n);
      if (iVar5 != 0) goto LAB_00100fed;
      uVar7 = 0;
      if (param_1 != 0) goto LAB_00101160;
      lVar6 = lVar6 + 1;
      if (lVar6 == 3) {
        mbedtls_cipher_free(local_100);
        mbedtls_platform_zeroize(local_148,0xb0);
        goto LAB_0010112b;
      }
    } while( true );
  }
  if (param_1 != 0) {
    __printf_chk(2,"  CCM: setup failed");
  }
LAB_001011b2:
  uVar7 = 1;
LAB_0010112b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
LAB_00101160:
  lVar6 = lVar6 + 1;
  puts("passed");
  if (lVar6 == 3) goto code_r0x0010117e;
  goto LAB_00100f61;
code_r0x0010117e:
  mbedtls_cipher_free(local_100);
  mbedtls_platform_zeroize(local_148,0xb0);
  putchar(10);
  goto LAB_0010112b;
}


