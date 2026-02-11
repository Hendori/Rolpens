
bool WPACKET_init_der(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
    param_1[1] = param_2;
    param_1[4] = param_3;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    lVar1 = CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
    param_1[5] = lVar1;
    return lVar1 != 0;
  }
  return false;
}



bool WPACKET_init_null(undefined1 (*param_1) [16],long param_2)

{
  long lVar1;
  
  lVar1 = -1;
  *param_1 = (undefined1  [16])0x0;
  if (param_2 - 1U < 7) {
    lVar1 = (1L << ((char)param_2 * '\b' & 0x3fU)) + (param_2 - 1U);
  }
  param_1[3][0] = param_1[3][0] & 0xfe;
  *(long *)param_1[2] = lVar1;
  param_1[1] = (undefined1  [16])0x0;
  lVar1 = CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
  *(long *)(param_1[2] + 8) = lVar1;
  return lVar1 != 0;
}



bool WPACKET_init_null_der(undefined1 (*param_1) [16])

{
  long lVar1;
  
  param_1[3][0] = param_1[3][0] | 1;
  *(undefined8 *)param_1[2] = 0xffffffffffffffff;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  lVar1 = CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
  *(long *)(param_1[2] + 8) = lVar1;
  return lVar1 != 0;
}



undefined8 WPACKET_set_flags(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x20) = param_2;
    return 1;
  }
  return 0;
}



bool WPACKET_set_max_size(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
    return false;
  }
  do {
    plVar4 = plVar2;
    plVar2 = (long *)*plVar4;
  } while (plVar2 != (long *)0x0);
  lVar3 = plVar4[2];
  uVar1 = lVar3 - 1;
  if (uVar1 < 7) {
    if ((1L << ((byte)((int)lVar3 << 3) & 0x3f)) + uVar1 < param_2) {
      return false;
    }
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  if (uVar1 <= param_2) {
    *(ulong *)(param_1 + 0x20) = param_2;
  }
  return uVar1 <= param_2;
}



undefined8 WPACKET_get_total_written(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    return 1;
  }
  return 0;
}



undefined8 WPACKET_get_length(long param_1,long *param_2)

{
  if ((param_2 != (long *)0x0) && (*(long *)(param_1 + 0x28) != 0)) {
    *param_2 = *(long *)(param_1 + 0x18) - *(long *)(*(long *)(param_1 + 0x28) + 0x18);
    return 1;
  }
  return 0;
}



long WPACKET_get_curr(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    if (*param_1 == 0) {
      return 0;
    }
    lVar1 = *(long *)(*param_1 + 8);
    if (lVar1 == 0) {
      return lVar1;
    }
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    return lVar1 + param_1[2];
  }
  return (lVar1 - param_1[2]) + param_1[4];
}



undefined8 WPACKET_reserve_bytes(undefined8 *param_1,ulong param_2,long *param_3)

{
  BUF_MEM *str;
  int iVar1;
  ulong uVar2;
  undefined4 extraout_var;
  long lVar3;
  undefined8 uVar4;
  ulong len;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if ((param_2 == 0) || ((ulong)(param_1[4] - param_1[3]) < param_2)) {
LAB_001002a1:
    uVar4 = 0;
  }
  else {
    str = (BUF_MEM *)*param_1;
    if ((str != (BUF_MEM *)0x0) && (uVar2 = str->length, uVar2 - param_1[3] < param_2)) {
      if (uVar2 < param_2) {
        uVar2 = param_2;
      }
      len = 0xffffffffffffffff;
      if ((-1 < (long)uVar2) && (len = uVar2 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar1 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar1) == 0) goto LAB_001002a1;
    }
    if (param_3 != (long *)0x0) {
      lVar3 = WPACKET_get_curr(param_1);
      *param_3 = lVar3;
      if ((lVar3 != 0) && ((*(byte *)(param_1 + 6) & 1) != 0)) {
        *param_3 = lVar3 - param_2;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



undefined8 WPACKET_allocate_bytes(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = WPACKET_reserve_bytes();
  if ((int)uVar1 != 0) {
    uVar1 = 1;
    *(long *)(param_1 + 0x10) = param_2 + *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x18) = param_2 + *(long *)(param_1 + 0x18);
  }
  return uVar1;
}



bool WPACKET_start_sub_packet_len__(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (param_2 == 0) {
      puVar4 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar4 != (undefined8 *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        puVar4[2] = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar4;
        *puVar4 = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        puVar4[1] = 0;
        puVar4[3] = uVar1;
        bVar5 = true;
        goto LAB_00100415;
      }
    }
    else if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      puVar4 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar4 != (undefined8 *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar4;
        *puVar4 = uVar1;
        lVar2 = *(long *)(param_1 + 0x18);
        puVar4[3] = param_2 + lVar2;
        puVar4[1] = lVar2;
        puVar4[2] = param_2;
        iVar3 = WPACKET_allocate_bytes(param_1,param_2,auStack_28);
        bVar5 = iVar3 != 0;
        goto LAB_00100415;
      }
    }
  }
  bVar5 = false;
LAB_00100415:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void WPACKET_start_sub_packet(undefined8 param_1)

{
  WPACKET_start_sub_packet_len__(param_1,0);
  return;
}



bool WPACKET_put_bytes__(undefined8 param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 < 9) && (iVar1 = WPACKET_allocate_bytes(param_1,param_3,&local_28), iVar1 != 0)) {
    if (local_28 == 0) {
      bVar4 = true;
    }
    else {
      puVar2 = (undefined1 *)(local_28 + (param_3 - 1));
      uVar3 = param_2;
      if (param_3 != 0) {
        *puVar2 = (char)param_2;
        uVar3 = param_2 >> 8;
        if (param_3 - 1 != 0) {
          puVar2[-1] = (char)(param_2 >> 8);
          uVar3 = param_2 >> 0x10;
          if (param_3 != 2) {
            puVar2[-2] = (char)(param_2 >> 0x10);
            uVar3 = param_2 >> 0x18;
            if (param_3 != 3) {
              puVar2[-3] = (char)(param_2 >> 0x18);
              uVar3 = param_2 >> 0x20;
              if (param_3 != 4) {
                puVar2[-4] = (char)(param_2 >> 0x20);
                uVar3 = param_2 >> 0x28;
                if (param_3 != 5) {
                  puVar2[-5] = (char)(param_2 >> 0x28);
                  uVar3 = param_2 >> 0x30;
                  if (param_3 != 6) {
                    puVar2[-6] = (char)(param_2 >> 0x30);
                    uVar3 = param_2 >> 0x38;
                    if (param_3 != 7) {
                      puVar2[-7] = (char)(param_2 >> 0x38);
                      uVar3 = 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar4 = uVar3 == 0;
    }
  }
  else {
    bVar4 = false;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



undefined8 WPACKET_finish(long *param_1)

{
  long *ptr;
  ulong uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  ptr = (long *)param_1[5];
  if (ptr == (long *)0x0) {
    return 0;
  }
  if (*ptr != 0) {
    return 0;
  }
  uVar6 = param_1[3] - ptr[3];
  lVar3 = 0;
  if (uVar6 == 0) {
    if ((*(uint *)(ptr + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(ptr + 4) & 2) != 0) {
      if (param_1[2] - ptr[2] == ptr[1]) {
        lVar4 = ptr[2];
        param_1[2] = param_1[2] - lVar4;
        param_1[3] = param_1[3] - lVar4;
      }
      *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
      goto LAB_00100649;
    }
  }
  uVar1 = ptr[2];
  if ((uVar1 == 0) ||
     ((lVar4 = param_1[1], lVar4 == 0 &&
      ((*param_1 == 0 || (lVar4 = *(long *)(*param_1 + 8), lVar4 == 0)))))) goto LAB_00100649;
  if ((*(byte *)(ptr + 4) & 4) == 0) {
    puVar2 = (undefined1 *)((uVar1 - 1) + ptr[1] + lVar4);
    puVar5 = puVar2 + -uVar1;
    do {
      *puVar2 = (char)uVar6;
      puVar2 = puVar2 + -1;
      uVar6 = uVar6 >> 8;
    } while (puVar2 != puVar5);
    if (uVar6 != 0) {
      return 0;
    }
  }
  else {
    if (0x3f < uVar6) {
      if (uVar6 < 0x4000) {
        uVar7 = 2;
      }
      else if (uVar6 < 0x40000000) {
        uVar7 = 4;
      }
      else {
        uVar7 = 8;
        if (uVar6 >> 0x3e != 0) goto LAB_0010070e;
      }
      if (uVar1 < uVar7) {
        return 0;
      }
    }
LAB_0010070e:
    ossl_quic_vlint_encode_n(lVar4 + ptr[1]);
  }
  lVar3 = *ptr;
LAB_00100649:
  param_1[5] = lVar3;
  CRYPTO_free(ptr);
  CRYPTO_free((void *)param_1[5]);
  param_1[5] = 0;
  return 1;
}



undefined8 WPACKET_fill_lengths(long *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *puVar11;
  
  if ((undefined8 *)param_1[5] == (undefined8 *)0x0) {
    return 0;
  }
  lVar4 = param_1[3];
  puVar9 = (undefined8 *)param_1[5];
  do {
    puVar8 = puVar9;
    uVar10 = lVar4 - puVar8[3];
    if ((uVar10 == 0) && ((*(byte *)(puVar8 + 4) & 3) != 0)) {
      return 0;
    }
    uVar6 = puVar8[2];
    if (uVar6 != 0) {
      lVar4 = param_1[1];
      if (lVar4 == 0) {
        if ((*param_1 == 0) || (lVar4 = *(long *)(*param_1 + 8), lVar4 == 0)) goto LAB_001007ed;
        lVar2 = puVar8[1];
        bVar1 = *(byte *)(puVar8 + 4);
      }
      else {
        lVar2 = puVar8[1];
        bVar1 = *(byte *)(puVar8 + 4);
      }
      if ((bVar1 & 4) != 0) {
        if (0x3f < uVar10) {
          if (uVar10 < 0x4000) {
            uVar7 = 2;
          }
          else if (uVar10 < 0x40000000) {
            uVar7 = 4;
          }
          else {
            uVar7 = 8;
            if (uVar10 >> 0x3e != 0) goto LAB_001008da;
          }
          if (uVar6 < uVar7) {
            return 0;
          }
        }
LAB_001008da:
        ossl_quic_vlint_encode_n(lVar4 + lVar2);
        puVar9 = (undefined8 *)*puVar8;
        goto LAB_001007f0;
      }
      puVar11 = (undefined1 *)(lVar4 + (uVar6 - 1) + lVar2);
      puVar5 = puVar11 + -uVar6;
      do {
        *puVar11 = (char)uVar10;
        puVar11 = puVar11 + -1;
        uVar10 = uVar10 >> 8;
      } while (puVar5 != puVar11);
      if (uVar10 != 0) {
        return 0;
      }
      goto LAB_001007ed;
    }
    puVar9 = (undefined8 *)*puVar8;
    if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_001007f0;
    if (puVar9 == (undefined8 *)0x0) {
      return 1;
    }
    if (uVar10 != 0) {
      uVar7 = 1;
      uVar6 = uVar10 >> 8;
      if (uVar6 == 0) {
        iVar3 = WPACKET_put_bytes__(param_1,uVar10,1);
        if (iVar3 == 0) {
          return 0;
        }
        if (uVar10 < 0x80) goto LAB_001007ed;
      }
      else {
        do {
          uVar7 = uVar7 + 1;
          uVar6 = uVar6 >> 8;
        } while (uVar6 != 0);
        iVar3 = WPACKET_put_bytes__(param_1,uVar10,uVar7);
        if (iVar3 == 0) {
          return 0;
        }
      }
      iVar3 = WPACKET_put_bytes__(param_1,uVar7 | 0x80,1);
      if (iVar3 == 0) {
        return 0;
      }
      goto LAB_001007ed;
    }
    if ((*(byte *)(puVar8 + 4) & 2) == 0) {
      iVar3 = WPACKET_put_bytes__(param_1,0,1);
      if (iVar3 == 0) {
        return 0;
      }
LAB_001007ed:
      puVar9 = (undefined8 *)*puVar8;
LAB_001007f0:
      if (puVar9 == (undefined8 *)0x0) {
        return 1;
      }
      lVar4 = param_1[3];
    }
  } while( true );
}



undefined8 WPACKET_close(long *param_1)

{
  long *ptr;
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  ptr = (long *)param_1[5];
  if (ptr == (long *)0x0) {
    return 0;
  }
  lVar5 = *ptr;
  if (lVar5 == 0) {
    return 0;
  }
  uVar6 = param_1[3] - ptr[3];
  if (uVar6 == 0) {
    if ((*(uint *)(ptr + 4) & 1) != 0) {
      return 0;
    }
    uVar2 = ptr[2];
    if ((*(uint *)(ptr + 4) & 2) != 0) {
      if (param_1[2] - uVar2 == ptr[1]) {
        param_1[2] = param_1[2] - uVar2;
        param_1[3] = param_1[3] - uVar2;
      }
      *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
      goto LAB_00100adc;
    }
    if (uVar2 != 0) goto LAB_00100a91;
    if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_00100adc;
    iVar1 = WPACKET_put_bytes__(param_1,0,1);
joined_r0x00100a7f:
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = ptr[2];
    if (uVar2 == 0) {
      if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_00100adc;
      uVar2 = uVar6 >> 8;
      if (uVar2 == 0) {
        iVar1 = WPACKET_put_bytes__(param_1,uVar6,1);
        if (iVar1 == 0) {
          return 0;
        }
        if (uVar6 < 0x80) goto LAB_00100ad9;
        uVar4 = 1;
      }
      else {
        uVar4 = 1;
        do {
          uVar4 = uVar4 + 1;
          uVar2 = uVar2 >> 8;
        } while (uVar2 != 0);
        iVar1 = WPACKET_put_bytes__(param_1,uVar6,uVar4);
        if (iVar1 == 0) {
          return 0;
        }
      }
      iVar1 = WPACKET_put_bytes__(param_1,uVar4 | 0x80,1);
      goto joined_r0x00100a7f;
    }
LAB_00100a91:
    lVar7 = param_1[1];
    if ((lVar7 == 0) && ((*param_1 == 0 || (lVar7 = *(long *)(*param_1 + 8), lVar7 == 0))))
    goto LAB_00100adc;
    if ((*(byte *)(ptr + 4) & 4) != 0) {
      if (0x3f < uVar6) {
        if (uVar6 < 0x4000) {
          uVar4 = 2;
        }
        else if (uVar6 < 0x40000000) {
          uVar4 = 4;
        }
        else {
          uVar4 = 8;
          if (uVar6 >> 0x3e != 0) goto LAB_00100b9e;
        }
        if (uVar2 < uVar4) {
          return 0;
        }
      }
LAB_00100b9e:
      ossl_quic_vlint_encode_n(lVar7 + ptr[1]);
      lVar5 = *ptr;
      goto LAB_00100adc;
    }
    lVar5 = ptr[1] + -1;
    puVar3 = (undefined1 *)(lVar5 + uVar2 + lVar7);
    do {
      *puVar3 = (char)uVar6;
      puVar3 = puVar3 + -1;
      uVar6 = uVar6 >> 8;
    } while (puVar3 != (undefined1 *)(lVar7 + lVar5));
    if (uVar6 != 0) {
      return 0;
    }
  }
LAB_00100ad9:
  lVar5 = *ptr;
LAB_00100adc:
  param_1[5] = lVar5;
  CRYPTO_free(ptr);
  return 1;
}



bool WPACKET_sub_allocate_bytes__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = WPACKET_start_sub_packet_len__(param_1,param_4);
  if (iVar1 != 0) {
    iVar1 = WPACKET_allocate_bytes(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined8 WPACKET_memset(undefined8 param_1,int param_2,size_t param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar1 = WPACKET_allocate_bytes(param_1,param_3,&local_28);
    if ((int)uVar1 == 0) goto LAB_00100c34;
    if (local_28 != (void *)0x0) {
      memset(local_28,param_2,param_3);
    }
  }
  uVar1 = 1;
LAB_00100c34:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WPACKET_memcpy(undefined8 param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  void *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar1 = WPACKET_allocate_bytes(param_1,param_3,&local_28);
    if ((int)uVar1 == 0) goto LAB_00100ca4;
    if (local_28 != (void *)0x0) {
      memcpy(local_28,param_2,param_3);
    }
  }
  uVar1 = 1;
LAB_00100ca4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool WPACKET_sub_memcpy__
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = WPACKET_start_sub_packet_len__(param_1,param_4);
  if (iVar1 != 0) {
    iVar1 = WPACKET_memcpy(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined8 WPACKET_init_len(long *param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    *param_1 = param_2;
    param_1[1] = 0;
    if (param_3 - 1U < 7) {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
      *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      param_1[4] = (1L << ((char)param_3 * '\b' & 0x3fU)) + (param_3 - 1U);
      lVar2 = CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
      param_1[5] = lVar2;
      if (lVar2 != 0) {
LAB_00100dc8:
        *(long *)(lVar2 + 0x10) = param_3;
        *(long *)(lVar2 + 0x18) = param_3;
        iVar1 = WPACKET_allocate_bytes(param_1,param_3,auStack_28);
        if (iVar1 != 0) {
          *(undefined8 *)(param_1[5] + 8) = 0;
          goto LAB_00100df3;
        }
        CRYPTO_free((void *)param_1[5]);
        param_1[5] = 0;
      }
    }
    else {
      *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
      param_1[4] = -1;
      *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
      lVar2 = CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
      param_1[5] = lVar2;
      if (lVar2 != 0) {
        if (param_3 != 0) goto LAB_00100dc8;
LAB_00100df3:
        uVar3 = 1;
        goto LAB_00100df8;
      }
    }
  }
  uVar3 = 0;
LAB_00100df8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



void WPACKET_init(undefined8 param_1,undefined8 param_2)

{
  WPACKET_init_len(param_1,param_2,0);
  return;
}



undefined8 WPACKET_init_static_len(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0xffffffffffffffff;
  if (param_4 - 1U < 7) {
    uVar2 = (1L << ((char)param_4 * '\b' & 0x3fU)) + (param_4 - 1U);
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[1] = param_2;
    if (uVar2 < param_3) {
      param_3 = uVar2;
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    *param_1 = 0;
    param_1[4] = param_3;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    lVar3 = CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
    param_1[5] = lVar3;
    if (lVar3 != 0) {
      if (param_4 != 0) {
        *(long *)(lVar3 + 0x10) = param_4;
        *(long *)(lVar3 + 0x18) = param_4;
        iVar1 = WPACKET_allocate_bytes(param_1,param_4,auStack_28);
        if (iVar1 == 0) {
          CRYPTO_free((void *)param_1[5]);
          param_1[5] = 0;
          goto LAB_00100fa9;
        }
        *(undefined8 *)(param_1[5] + 8) = 0;
      }
      uVar4 = 1;
      goto LAB_00100f45;
    }
  }
LAB_00100fa9:
  uVar4 = 0;
LAB_00100f45:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WPACKET_sub_reserve_bytes__(long param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  
  if (((*(byte *)(param_1 + 0x30) & 1) == 0) || (param_4 == 0)) {
    iVar1 = WPACKET_reserve_bytes(param_1,param_2 + param_4,param_3);
    if (iVar1 != 0) {
      if (*param_3 != 0) {
        *param_3 = *param_3 + param_4;
      }
      return 1;
    }
  }
  return 0;
}



bool WPACKET_is_null_buf(long *param_1)

{
  if (*param_1 != 0) {
    return false;
  }
  return param_1[1] == 0;
}



void WPACKET_cleanup(long param_1)

{
  undefined8 *puVar1;
  undefined8 *ptr;
  
  ptr = *(undefined8 **)(param_1 + 0x28);
  while (ptr != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*ptr;
    CRYPTO_free(ptr);
    ptr = puVar1;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}



undefined8 WPACKET_start_quic_sub_packet_bound(long param_1,ulong param_2)

{
  uint *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_2 < 0x40) {
    uVar3 = 1;
  }
  else if (param_2 < 0x4000) {
    uVar3 = 2;
  }
  else if (param_2 < 0x40000000) {
    uVar3 = 4;
  }
  else {
    if (param_2 >> 0x3e != 0) {
      return 0;
    }
    uVar3 = 8;
  }
  iVar2 = WPACKET_start_sub_packet_len__(param_1,uVar3);
  if (iVar2 == 0) {
    return 0;
  }
  puVar1 = (uint *)(*(long *)(param_1 + 0x28) + 0x20);
  *puVar1 = *puVar1 | 4;
  return 1;
}



void WPACKET_start_quic_sub_packet(undefined8 param_1)

{
  WPACKET_start_quic_sub_packet_bound(param_1,0x4000);
  return;
}



bool WPACKET_quic_sub_allocate_bytes(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = WPACKET_start_quic_sub_packet_bound();
  if (iVar1 != 0) {
    iVar1 = WPACKET_allocate_bytes(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}



undefined8 WPACKET_quic_write_vlint(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (param_2 < 0x40) {
    uVar2 = 1;
LAB_001011d5:
    iVar1 = WPACKET_allocate_bytes(param_1,uVar2,&local_18);
    if (iVar1 != 0) {
      ossl_quic_vlint_encode(local_18,param_2);
      uVar2 = 1;
      goto LAB_001011b7;
    }
  }
  else {
    if (param_2 < 0x4000) {
      uVar2 = 2;
      goto LAB_001011d5;
    }
    if (param_2 < 0x40000000) {
      uVar2 = 4;
      goto LAB_001011d5;
    }
    if (param_2 >> 0x3e == 0) {
      uVar2 = 8;
      goto LAB_001011d5;
    }
  }
  uVar2 = 0;
LAB_001011b7:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


