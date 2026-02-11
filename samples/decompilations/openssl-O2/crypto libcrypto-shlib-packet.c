
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
  ulong len;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if ((param_2 != 0) && (param_2 <= (ulong)(param_1[4] - param_1[3]))) {
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
      if (CONCAT44(extraout_var,iVar1) == 0) {
        return 0;
      }
    }
    if (param_3 != (long *)0x0) {
      lVar3 = WPACKET_get_curr(param_1);
      *param_3 = lVar3;
      if ((lVar3 != 0) && ((*(byte *)(param_1 + 6) & 1) != 0)) {
        *param_3 = lVar3 - param_2;
      }
    }
    return 1;
  }
  return 0;
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



undefined8 wpacket_intern_init_len(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
  lVar2 = CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
  *(long *)(param_1 + 0x28) = lVar2;
  if (lVar2 == 0) {
LAB_00100429:
    uVar3 = 0;
  }
  else {
    if (param_2 != 0) {
      *(long *)(lVar2 + 0x10) = param_2;
      *(long *)(lVar2 + 0x18) = param_2;
      iVar1 = WPACKET_allocate_bytes(param_1,param_2,auStack_28);
      if (iVar1 == 0) {
        CRYPTO_free(*(void **)(param_1 + 0x28));
        *(undefined8 *)(param_1 + 0x28) = 0;
        goto LAB_00100429;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x28) + 8) = 0;
    }
    uVar3 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WPACKET_init_static_len(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_4 - 1U < 7) {
    uVar1 = (1L << ((char)param_4 * '\b' & 0x3fU)) + (param_4 - 1U);
  }
  if ((param_2 != 0) && (param_3 != 0)) {
    param_1[1] = param_2;
    if (uVar1 < param_3) {
      param_3 = uVar1;
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    *param_1 = 0;
    param_1[4] = param_3;
    uVar2 = wpacket_intern_init_len(param_1,param_4);
    return uVar2;
  }
  return 0;
}



undefined8 WPACKET_init_len(long *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    *param_1 = param_2;
    lVar1 = -1;
    param_1[1] = 0;
    if (param_3 - 1U < 7) {
      lVar1 = (1L << ((char)param_3 * '\b' & 0x3fU)) + (param_3 - 1U);
    }
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    param_1[4] = lVar1;
    uVar2 = wpacket_intern_init_len();
    return uVar2;
  }
  return 0;
}



void WPACKET_init(undefined8 param_1,undefined8 param_2)

{
  WPACKET_init_len(param_1,param_2,0);
  return;
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
        goto LAB_001005b5;
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
        goto LAB_001005b5;
      }
    }
  }
  bVar5 = false;
LAB_001005b5:
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
  long in_FS_OFFSET;
  bool bVar3;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 9) {
    iVar1 = WPACKET_allocate_bytes(param_1,param_3,&local_28);
    if (iVar1 != 0) {
      if (local_28 == 0) {
        bVar3 = true;
      }
      else {
        puVar2 = (undefined1 *)(local_28 + -1 + param_3);
        if (param_3 != 0) {
          do {
            *puVar2 = (char)param_2;
            puVar2 = puVar2 + -1;
            param_2 = param_2 >> 8;
          } while ((undefined1 *)(local_28 + -1) != puVar2);
        }
        bVar3 = param_2 == 0;
      }
      goto LAB_00100677;
    }
  }
  bVar3 = false;
LAB_00100677:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 wpacket_intern_close(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  
  uVar4 = param_1[3] - param_2[3];
  if (uVar4 == 0) {
    if ((*(uint *)(param_2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(param_2 + 4) & 2) != 0) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_1[2] - param_2[2] == param_2[1]) {
        lVar5 = param_2[2];
        param_1[2] = param_1[2] - lVar5;
        param_1[3] = param_1[3] - lVar5;
      }
      *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
      goto LAB_00100750;
    }
  }
  uVar7 = param_2[2];
  if (uVar7 == 0) {
    if (((*(byte *)(param_1 + 6) & 1) != 0) && (*param_2 != 0)) {
      if (uVar4 == 0) {
        uVar7 = 0;
        if ((*(byte *)(param_2 + 4) & 2) != 0) goto LAB_001007d0;
      }
      else {
        uVar3 = uVar4 >> 8;
        if (uVar3 == 0) {
          iVar1 = WPACKET_put_bytes__(param_1,uVar4,1);
          if (iVar1 == 0) {
            return 0;
          }
          if (uVar4 < 0x80) goto LAB_001007d0;
          uVar7 = 1;
        }
        else {
          uVar7 = 1;
          do {
            uVar7 = uVar7 + 1;
            uVar3 = uVar3 >> 8;
          } while (uVar3 != 0);
          iVar1 = WPACKET_put_bytes__(param_1,uVar4,uVar7);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar7 = uVar7 | 0x80;
      }
      iVar1 = WPACKET_put_bytes__(param_1,uVar7,1);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else {
    lVar5 = param_1[1];
    if ((lVar5 != 0) || ((*param_1 != 0 && (lVar5 = *(long *)(*param_1 + 8), lVar5 != 0)))) {
      if ((*(byte *)(param_2 + 4) & 4) == 0) {
        puVar6 = (undefined1 *)(lVar5 + (uVar7 - 1) + param_2[1]);
        puVar2 = puVar6 + -uVar7;
        do {
          *puVar6 = (char)uVar4;
          puVar6 = puVar6 + -1;
          uVar4 = uVar4 >> 8;
        } while (puVar2 != puVar6);
        if (uVar4 != 0) {
          return 0;
        }
      }
      else {
        if (0x3f < uVar4) {
          if (uVar4 < 0x4000) {
            uVar3 = 2;
          }
          else if (uVar4 < 0x40000000) {
            uVar3 = 4;
          }
          else {
            uVar3 = 8;
            if (uVar4 >> 0x3e != 0) goto LAB_001007c7;
          }
          if (uVar7 < uVar3) {
            return 0;
          }
        }
LAB_001007c7:
        ossl_quic_vlint_encode_n(lVar5 + param_2[1]);
      }
    }
  }
LAB_001007d0:
  if (param_3 == 0) {
    return 1;
  }
LAB_00100750:
  param_1[5] = *param_2;
  CRYPTO_free(param_2);
  return 1;
}



undefined8 WPACKET_fill_lengths(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    while (iVar1 = wpacket_intern_close(param_1,plVar2,0), iVar1 != 0) {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}



undefined8 WPACKET_close(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    uVar2 = wpacket_intern_close(param_1,plVar1,1);
    return uVar2;
  }
  return 0;
}



ulong WPACKET_finish(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 == (long *)0x0) {
    return 0;
  }
  if (*plVar1 != 0) {
    return 0;
  }
  uVar2 = wpacket_intern_close(param_1,plVar1,1);
  if ((int)uVar2 != 0) {
    CRYPTO_free(*(void **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
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
    if ((int)uVar1 == 0) goto LAB_00100ab4;
    if (local_28 != (void *)0x0) {
      memset(local_28,param_2,param_3);
    }
  }
  uVar1 = 1;
LAB_00100ab4:
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
    if ((int)uVar1 == 0) goto LAB_00100b24;
    if (local_28 != (void *)0x0) {
      memcpy(local_28,param_2,param_3);
    }
  }
  uVar1 = 1;
LAB_00100b24:
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
LAB_00100dd5:
    iVar1 = WPACKET_allocate_bytes(param_1,uVar2,&local_18);
    if (iVar1 != 0) {
      ossl_quic_vlint_encode(local_18,param_2);
      uVar2 = 1;
      goto LAB_00100db7;
    }
  }
  else {
    if (param_2 < 0x4000) {
      uVar2 = 2;
      goto LAB_00100dd5;
    }
    if (param_2 < 0x40000000) {
      uVar2 = 4;
      goto LAB_00100dd5;
    }
    if (param_2 >> 0x3e == 0) {
      uVar2 = 8;
      goto LAB_00100dd5;
    }
  }
  uVar2 = 0;
LAB_00100db7:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


