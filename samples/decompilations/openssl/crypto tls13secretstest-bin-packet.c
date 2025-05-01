
undefined8 WPACKET_allocate_bytes(long *param_1,ulong param_2,long *param_3)

{
  long lVar1;
  byte bVar2;
  BUF_MEM *str;
  int iVar3;
  ulong uVar4;
  undefined4 extraout_var;
  long lVar5;
  long lVar6;
  ulong len;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if ((param_2 != 0) && (lVar6 = param_1[3], param_2 <= (ulong)(param_1[4] - lVar6))) {
    str = (BUF_MEM *)*param_1;
    if ((str != (BUF_MEM *)0x0) && (uVar4 = str->length, uVar4 - lVar6 < param_2)) {
      if (uVar4 <= param_2) {
        uVar4 = param_2;
      }
      len = 0xffffffffffffffff;
      if ((-1 < (long)uVar4) && (len = uVar4 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar3 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar3) == 0) {
        return 0;
      }
      lVar6 = param_1[3];
    }
    lVar1 = param_1[2];
    if (param_3 != (long *)0x0) {
      lVar5 = param_1[1];
      if ((lVar5 == 0) && ((*param_1 == 0 || (lVar5 = *(long *)(*param_1 + 8), lVar5 == 0)))) {
        *param_3 = 0;
      }
      else {
        if ((*(byte *)(param_1 + 6) & 1) == 0) {
          lVar5 = lVar5 + lVar1;
          *param_3 = lVar5;
          bVar2 = *(byte *)(param_1 + 6);
        }
        else {
          lVar5 = (lVar5 - lVar1) + param_1[4];
          *param_3 = lVar5;
          bVar2 = *(byte *)(param_1 + 6);
        }
        if ((bVar2 & 1) != 0) {
          *param_3 = lVar5 - param_2;
        }
      }
    }
    param_1[2] = param_2 + lVar1;
    param_1[3] = param_2 + lVar6;
    return 1;
  }
  return 0;
}



undefined8 WPACKET_reserve_bytes(long *param_1,ulong param_2,long *param_3)

{
  byte bVar1;
  BUF_MEM *str;
  int iVar2;
  ulong uVar3;
  undefined4 extraout_var;
  long lVar4;
  undefined8 uVar5;
  ulong len;
  
  if (param_1[5] == 0) {
    return 0;
  }
  if ((param_2 == 0) || ((ulong)(param_1[4] - param_1[3]) < param_2)) {
LAB_00100151:
    uVar5 = 0;
  }
  else {
    str = (BUF_MEM *)*param_1;
    if ((str != (BUF_MEM *)0x0) && (uVar3 = str->length, uVar3 - param_1[3] < param_2)) {
      if (uVar3 < param_2) {
        uVar3 = param_2;
      }
      len = 0xffffffffffffffff;
      if ((-1 < (long)uVar3) && (len = uVar3 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar2 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar2) == 0) goto LAB_00100151;
    }
    if (param_3 != (long *)0x0) {
      lVar4 = param_1[1];
      if ((lVar4 == 0) && ((*param_1 == 0 || (lVar4 = *(long *)(*param_1 + 8), lVar4 == 0)))) {
        *param_3 = 0;
      }
      else {
        if ((*(byte *)(param_1 + 6) & 1) == 0) {
          lVar4 = lVar4 + param_1[2];
          *param_3 = lVar4;
          bVar1 = *(byte *)(param_1 + 6);
        }
        else {
          lVar4 = (lVar4 - param_1[2]) + param_1[4];
          *param_3 = lVar4;
          bVar1 = *(byte *)(param_1 + 6);
        }
        if ((bVar1 & 1) != 0) {
          *param_3 = lVar4 - param_2;
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WPACKET_sub_reserve_bytes__(long *param_1,long param_2,long *param_3,long param_4)

{
  ulong uVar1;
  byte bVar2;
  BUF_MEM *str;
  int iVar3;
  ulong uVar4;
  undefined4 extraout_var;
  long lVar5;
  ulong len;
  
  if (((((*(byte *)(param_1 + 6) & 1) != 0) && (param_4 != 0)) ||
      (uVar1 = param_4 + param_2, param_1[5] == 0)) ||
     ((uVar1 == 0 || ((ulong)(param_1[4] - param_1[3]) < uVar1)))) {
    return 0;
  }
  str = (BUF_MEM *)*param_1;
  if ((str != (BUF_MEM *)0x0) && (uVar4 = str->length, uVar4 - param_1[3] < uVar1)) {
    len = 0xffffffffffffffff;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    if ((-1 < (long)uVar4) && (len = uVar4 * 2, len < 0x100)) {
      len = 0x100;
    }
    iVar3 = BUF_MEM_grow(str,len);
    if (CONCAT44(extraout_var,iVar3) == 0) {
      return 0;
    }
  }
  if (param_3 == (long *)0x0) {
    lVar5 = _DAT_00000000;
    if (_DAT_00000000 == 0) {
      return 1;
    }
  }
  else {
    lVar5 = param_1[1];
    if ((lVar5 == 0) && ((*param_1 == 0 || (lVar5 = *(long *)(*param_1 + 8), lVar5 == 0)))) {
      *param_3 = 0;
      return 1;
    }
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      lVar5 = lVar5 + param_1[2];
      *param_3 = lVar5;
      bVar2 = *(byte *)(param_1 + 6);
    }
    else {
      lVar5 = (lVar5 - param_1[2]) + param_1[4];
      *param_3 = lVar5;
      bVar2 = *(byte *)(param_1 + 6);
    }
    if ((bVar2 & 1) != 0) {
      lVar5 = lVar5 - uVar1;
    }
  }
  *param_3 = lVar5 + param_4;
  return 1;
}



undefined8 WPACKET_init_static_len(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_28 [8];
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
        iVar1 = WPACKET_reserve_bytes(param_1,param_4,local_28);
        if (iVar1 == 0) {
          CRYPTO_free((void *)param_1[5]);
          param_1[5] = 0;
          goto LAB_00100479;
        }
        param_1[2] = param_4 + param_1[2];
        param_1[3] = param_4 + param_1[3];
        *(undefined8 *)(param_1[5] + 8) = 0;
      }
      uVar4 = 1;
      goto LAB_001003f9;
    }
  }
LAB_00100479:
  uVar4 = 0;
LAB_001003f9:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



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



undefined8 WPACKET_init_len(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  BUF_MEM *str;
  ulong uVar2;
  int iVar3;
  void *ptr;
  undefined4 extraout_var;
  long lVar4;
  ulong uVar5;
  ulong len;
  
  if (param_2 == 0) {
    return 0;
  }
  param_1[1] = 0;
  *param_1 = param_2;
  if (param_3 - 1 < 7) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    param_1[4] = (1L << ((char)param_3 * '\b' & 0x3fU)) + (param_3 - 1);
    ptr = (void *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
    param_1[5] = (long)ptr;
    if (ptr == (void *)0x0) {
      return 0;
    }
  }
  else {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    param_1[4] = -1;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    ptr = (void *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x6e);
    param_1[5] = (long)ptr;
    if (ptr == (void *)0x0) {
      return 0;
    }
    if (param_3 == 0) {
      return 1;
    }
  }
  lVar4 = param_1[3];
  lVar1 = param_1[4];
  *(ulong *)((long)ptr + 0x10) = param_3;
  *(ulong *)((long)ptr + 0x18) = param_3;
  if (param_3 <= (ulong)(lVar1 - lVar4)) {
    str = (BUF_MEM *)*param_1;
    if ((str != (BUF_MEM *)0x0) && (uVar2 = str->length, uVar2 - lVar4 < param_3)) {
      len = 0xffffffffffffffff;
      uVar5 = param_3;
      if (param_3 < uVar2) {
        uVar5 = uVar2;
      }
      if ((-1 < (long)uVar5) && (len = uVar5 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar3 = BUF_MEM_grow(str,len);
      ptr = (void *)param_1[5];
      if (CONCAT44(extraout_var,iVar3) == 0) goto LAB_00100618;
      lVar4 = param_1[3];
    }
    param_1[2] = param_1[2] + param_3;
    param_1[3] = lVar4 + param_3;
    *(undefined8 *)((long)ptr + 8) = 0;
    return 1;
  }
LAB_00100618:
  CRYPTO_free(ptr);
  param_1[5] = 0;
  return 0;
}



bool WPACKET_init(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xfe;
    *param_1 = param_2;
    param_1[1] = 0;
    param_1[4] = -1;
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



undefined8 WPACKET_start_sub_packet_len__(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (param_2 == 0) {
      puVar3 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        puVar3[2] = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar3;
        *puVar3 = uVar4;
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        puVar3[1] = 0;
        puVar3[3] = uVar4;
LAB_0010088b:
        uVar4 = 1;
        goto LAB_00100890;
      }
    }
    else if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      puVar3 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar3;
        *puVar3 = uVar4;
        lVar1 = *(long *)(param_1 + 0x18);
        puVar3[3] = param_2 + lVar1;
        puVar3[1] = lVar1;
        puVar3[2] = param_2;
        iVar2 = WPACKET_reserve_bytes(param_1,param_2,auStack_28);
        if (iVar2 != 0) {
          *(long *)(param_1 + 0x10) = param_2 + *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x18) = param_2 + *(long *)(param_1 + 0x18);
          goto LAB_0010088b;
        }
      }
    }
  }
  uVar4 = 0;
LAB_00100890:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WPACKET_start_sub_packet(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return 0;
  }
  puVar2 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 **)(param_1 + 0x28) = puVar2;
    *(undefined1 (*) [16])(puVar2 + 1) = (undefined1  [16])0x0;
    *puVar2 = uVar1;
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    return 1;
  }
  return 0;
}



bool WPACKET_put_bytes__(undefined8 *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined4 extraout_var;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong len;
  BUF_MEM *str;
  long lVar6;
  
  if (8 < param_3) {
    return false;
  }
  if (((param_1[5] == 0) || (param_3 == 0)) ||
     (lVar3 = param_1[3], (ulong)(param_1[4] - lVar3) < param_3)) {
    return false;
  }
  str = (BUF_MEM *)*param_1;
  if (str == (BUF_MEM *)0x0) {
    pcVar5 = (char *)param_1[1];
    if (pcVar5 == (char *)0x0) {
LAB_00100b2d:
      lVar4 = param_1[2];
      goto LAB_00100b3f;
    }
  }
  else {
    uVar2 = str->length;
    if (uVar2 - lVar3 < param_3) {
      len = 0xffffffffffffffff;
      if (uVar2 <= param_3) {
        uVar2 = param_3;
      }
      if ((-1 < (long)uVar2) && (len = uVar2 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar1 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar1) == 0) {
        return false;
      }
      pcVar5 = (char *)param_1[1];
      lVar3 = param_1[3];
      if (pcVar5 == (char *)0x0) {
        str = (BUF_MEM *)*param_1;
        if (str == (BUF_MEM *)0x0) goto LAB_00100b2d;
        goto LAB_00100af4;
      }
    }
    else {
      pcVar5 = (char *)param_1[1];
      if (pcVar5 == (char *)0x0) {
LAB_00100af4:
        pcVar5 = str->data;
        lVar4 = param_1[2];
        if (pcVar5 == (char *)0x0) {
LAB_00100b3f:
          param_1[2] = param_3 + lVar4;
          param_1[3] = param_3 + lVar3;
          return true;
        }
        goto LAB_001009e3;
      }
    }
  }
  lVar4 = param_1[2];
LAB_001009e3:
  lVar6 = lVar4 + param_3;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    lVar4 = (param_1[4] - lVar4) - param_3;
  }
  param_1[2] = lVar6;
  param_1[3] = lVar3 + param_3;
  pcVar5 = pcVar5 + (param_3 - 1) + lVar4;
  uVar2 = param_2 >> 8;
  *pcVar5 = (char)param_2;
  if (param_3 - 1 != 0) {
    pcVar5[-1] = (char)(param_2 >> 8);
    uVar2 = param_2 >> 0x10;
    if (param_3 != 2) {
      pcVar5[-2] = (char)(param_2 >> 0x10);
      uVar2 = param_2 >> 0x18;
      if (param_3 != 3) {
        pcVar5[-3] = (char)(param_2 >> 0x18);
        uVar2 = param_2 >> 0x20;
        if (param_3 != 4) {
          pcVar5[-4] = (char)(param_2 >> 0x20);
          uVar2 = param_2 >> 0x28;
          if (param_3 != 5) {
            pcVar5[-5] = (char)(param_2 >> 0x28);
            uVar2 = param_2 >> 0x30;
            if (param_3 != 6) {
              pcVar5[-6] = (char)(param_2 >> 0x30);
              uVar2 = param_2 >> 0x38;
              if (param_3 != 7) {
                pcVar5[-7] = (char)(param_2 >> 0x38);
                uVar2 = 0;
              }
            }
          }
        }
      }
    }
  }
  return uVar2 == 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 wpacket_intern_close(long *param_1,long *param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  ulong uVar3;
  size_t sVar4;
  undefined4 extraout_var;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  BUF_MEM *str;
  long lVar9;
  
  uVar7 = param_1[3] - param_2[3];
  if (uVar7 == 0) {
    if ((*(uint *)(param_2 + 4) & 1) != 0) {
      return 0;
    }
    if ((*(uint *)(param_2 + 4) & 2) != 0) {
      if (param_3 == 0) {
        return 0;
      }
      if (param_1[2] - param_2[2] == param_2[1]) {
        lVar9 = param_2[2];
        param_1[2] = param_1[2] - lVar9;
        param_1[3] = param_1[3] - lVar9;
      }
      *(undefined1 (*) [16])(param_2 + 1) = (undefined1  [16])0x0;
      goto LAB_00100bd0;
    }
  }
  uVar3 = param_2[2];
  if (uVar3 == 0) {
    if (((*(byte *)(param_1 + 6) & 1) != 0) && (*param_2 != 0)) {
      if (uVar7 == 0) {
        if (((*(byte *)(param_2 + 4) & 2) == 0) &&
           (iVar1 = WPACKET_put_bytes__(param_1,0,1), iVar1 == 0)) {
          return 0;
        }
      }
      else {
        uVar3 = uVar7 >> 8;
        if (uVar3 == 0) {
          iVar1 = WPACKET_put_bytes__(param_1,uVar7,1);
          if (iVar1 == 0) {
            return 0;
          }
          if (uVar7 < 0x80) goto LAB_00100c3d;
          uVar5 = 1;
        }
        else {
          uVar5 = 1;
          do {
            uVar5 = uVar5 + 1;
            uVar3 = uVar3 >> 8;
          } while (uVar3 != 0);
          iVar1 = WPACKET_put_bytes__(param_1,uVar7,uVar5);
          if (iVar1 == 0) {
            return 0;
          }
        }
        if (param_1[5] == 0) {
          return 0;
        }
        sVar4 = param_1[3];
        if (param_1[4] == sVar4) {
          return 0;
        }
        str = (BUF_MEM *)*param_1;
        if (str != (BUF_MEM *)0x0) {
          if (sVar4 == str->length) {
            uVar7 = 0xffffffffffffffff;
            if (sVar4 == 0) {
              sVar4 = 1;
            }
            if ((-1 < (long)sVar4) && (uVar7 = sVar4 * 2, uVar7 < 0x100)) {
              uVar7 = 0x100;
            }
            iVar1 = BUF_MEM_grow(str,uVar7);
            if (CONCAT44(extraout_var,iVar1) == 0) {
              return 0;
            }
            pcVar6 = (char *)param_1[1];
            sVar4 = param_1[3];
            if (pcVar6 != (char *)0x0) goto LAB_00100dcb;
            str = (BUF_MEM *)*param_1;
            if (str == (BUF_MEM *)0x0) goto LAB_00100e9e;
LAB_00100e61:
            pcVar6 = str->data;
            uVar7 = param_1[2];
            if (pcVar6 == (char *)0x0) {
              param_1[3] = sVar4 + 1;
              param_1[2] = uVar7 + 1;
              goto LAB_00100c3d;
            }
          }
          else {
            pcVar6 = (char *)param_1[1];
            if (pcVar6 == (char *)0x0) goto LAB_00100e61;
LAB_00100dcb:
            uVar7 = param_1[2];
          }
          lVar9 = uVar7 + 1;
          if ((*(byte *)(param_1 + 6) & 1) != 0) {
            uVar7 = ~uVar7 + param_1[4];
          }
          param_1[3] = sVar4 + 1;
          param_1[2] = lVar9;
          pcVar6[uVar7] = (byte)uVar5 | 0x80;
          uVar7 = uVar5 >> 8;
          goto joined_r0x00100e05;
        }
        pcVar6 = (char *)param_1[1];
        if (pcVar6 != (char *)0x0) goto LAB_00100dcb;
LAB_00100e9e:
        lVar9 = param_1[3] + _UNK_00102378;
        param_1[2] = param_1[2] + __LC1;
        param_1[3] = lVar9;
      }
    }
  }
  else {
    lVar9 = param_1[1];
    if ((lVar9 != 0) || ((*param_1 != 0 && (lVar9 = *(long *)(*param_1 + 8), lVar9 != 0)))) {
      if ((*(byte *)(param_2 + 4) & 4) == 0) {
        puVar8 = (undefined1 *)(lVar9 + (uVar3 - 1) + param_2[1]);
        puVar2 = puVar8 + -uVar3;
        do {
          *puVar8 = (char)uVar7;
          puVar8 = puVar8 + -1;
          uVar7 = uVar7 >> 8;
        } while (puVar2 != puVar8);
joined_r0x00100e05:
        if (uVar7 != 0) {
          return 0;
        }
      }
      else {
        if (0x3f < uVar7) {
          if (uVar7 < 0x4000) {
            uVar5 = 2;
          }
          else if (uVar7 < 0x40000000) {
            uVar5 = 4;
          }
          else {
            uVar5 = 8;
            if (uVar7 >> 0x3e != 0) goto LAB_00100cea;
          }
          if (uVar3 < uVar5) {
            return 0;
          }
        }
LAB_00100cea:
        ossl_quic_vlint_encode_n(lVar9 + param_2[1]);
      }
    }
  }
LAB_00100c3d:
  if (param_3 == 0) {
    return 1;
  }
LAB_00100bd0:
  param_1[5] = *param_2;
  CRYPTO_free(param_2);
  return 1;
}



bool WPACKET_sub_allocate_bytes__(long param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (param_4 == 0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar5 != (undefined8 *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        puVar5[2] = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar5;
        *puVar5 = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        puVar5[1] = 0;
        puVar5[3] = uVar1;
LAB_00100f89:
        iVar4 = WPACKET_reserve_bytes(param_1,param_2,param_3);
        if (iVar4 != 0) {
          plVar3 = *(long **)(param_1 + 0x28);
          *(long *)(param_1 + 0x10) = param_2 + *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x18) = param_2 + *(long *)(param_1 + 0x18);
          if ((plVar3 != (long *)0x0) && (*plVar3 != 0)) {
            iVar4 = wpacket_intern_close(param_1,plVar3,1);
            bVar6 = iVar4 != 0;
            goto LAB_00100fe2;
          }
        }
      }
    }
    else if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar5 != (undefined8 *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar5;
        *puVar5 = uVar1;
        lVar2 = *(long *)(param_1 + 0x18);
        puVar5[3] = param_4 + lVar2;
        puVar5[1] = lVar2;
        puVar5[2] = param_4;
        iVar4 = WPACKET_reserve_bytes(param_1,param_4,auStack_38);
        if (iVar4 != 0) {
          *(long *)(param_1 + 0x10) = param_4 + *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x18) = param_4 + *(long *)(param_1 + 0x18);
          goto LAB_00100f89;
        }
      }
    }
  }
  bVar6 = false;
LAB_00100fe2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WPACKET_fill_lengths(long *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  size_t sVar7;
  undefined4 extraout_var;
  ulong uVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  BUF_MEM *str;
  
  if ((undefined8 *)param_1[5] == (undefined8 *)0x0) {
    return 0;
  }
  lVar4 = param_1[3];
  puVar11 = (undefined8 *)param_1[5];
  do {
    puVar10 = puVar11;
    uVar12 = lVar4 - puVar10[3];
    if ((uVar12 == 0) && ((*(byte *)(puVar10 + 4) & 3) != 0)) {
      return 0;
    }
    uVar6 = puVar10[2];
    if (uVar6 != 0) {
      lVar4 = param_1[1];
      if (lVar4 == 0) {
        if ((*param_1 != 0) && (lVar4 = *(long *)(*param_1 + 8), lVar4 != 0)) {
          lVar2 = puVar10[1];
          bVar1 = *(byte *)(puVar10 + 4);
          goto joined_r0x001010ae;
        }
      }
      else {
        lVar2 = puVar10[1];
        bVar1 = *(byte *)(puVar10 + 4);
joined_r0x001010ae:
        if ((bVar1 & 4) != 0) {
          if (0x3f < uVar12) {
            if (uVar12 < 0x4000) {
              uVar8 = 2;
            }
            else if (uVar12 < 0x40000000) {
              uVar8 = 4;
            }
            else {
              uVar8 = 8;
              if (uVar12 >> 0x3e != 0) goto LAB_0010125a;
            }
            if (uVar6 < uVar8) {
              return 0;
            }
          }
LAB_0010125a:
          ossl_quic_vlint_encode_n(lVar4 + lVar2);
          puVar11 = (undefined8 *)*puVar10;
          goto LAB_001010e0;
        }
        puVar13 = (undefined1 *)(lVar4 + (uVar6 - 1) + lVar2);
        puVar5 = puVar13 + -uVar6;
        do {
          *puVar13 = (char)uVar12;
          puVar13 = puVar13 + -1;
          uVar12 = uVar12 >> 8;
        } while (puVar13 != puVar5);
joined_r0x00101308:
        if (uVar12 != 0) {
          return 0;
        }
      }
      goto LAB_001010dd;
    }
    puVar11 = (undefined8 *)*puVar10;
    if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_001010e0;
    if (puVar11 == (undefined8 *)0x0) {
      return 1;
    }
    if (uVar12 != 0) {
      uVar8 = 1;
      uVar6 = uVar12 >> 8;
      if (uVar6 == 0) {
        iVar3 = WPACKET_put_bytes__(param_1,uVar12,1);
        if (iVar3 == 0) {
          return 0;
        }
        if (uVar12 < 0x80) goto LAB_001010dd;
      }
      else {
        do {
          uVar8 = uVar8 + 1;
          uVar6 = uVar6 >> 8;
        } while (uVar6 != 0);
        iVar3 = WPACKET_put_bytes__(param_1,uVar12,uVar8);
        if (iVar3 == 0) {
          return 0;
        }
      }
      if (param_1[5] == 0) {
        return 0;
      }
      sVar7 = param_1[3];
      if (param_1[4] == sVar7) {
        return 0;
      }
      str = (BUF_MEM *)*param_1;
      if (str == (BUF_MEM *)0x0) {
        pcVar9 = (char *)param_1[1];
        if (pcVar9 != (char *)0x0) goto LAB_001012d4;
LAB_0010131c:
        param_1[2] = param_1[2] + 1;
        puVar11 = (undefined8 *)*puVar10;
        param_1[3] = sVar7 + 1;
        goto LAB_001010e0;
      }
      if (sVar7 == str->length) {
        uVar12 = 0xffffffffffffffff;
        if (sVar7 == 0) {
          sVar7 = 1;
        }
        if ((-1 < (long)sVar7) && (uVar12 = sVar7 * 2, uVar12 < 0x100)) {
          uVar12 = 0x100;
        }
        iVar3 = BUF_MEM_grow(str,uVar12);
        if (CONCAT44(extraout_var,iVar3) == 0) {
          return 0;
        }
        pcVar9 = (char *)param_1[1];
        sVar7 = param_1[3];
        if (pcVar9 != (char *)0x0) goto LAB_001012d4;
        str = (BUF_MEM *)*param_1;
        if (str == (BUF_MEM *)0x0) goto LAB_0010131c;
LAB_001011c8:
        pcVar9 = str->data;
        uVar12 = param_1[2];
        if (pcVar9 == (char *)0x0) {
          puVar11 = (undefined8 *)*puVar10;
          param_1[3] = sVar7 + 1;
          param_1[2] = uVar12 + 1;
          goto LAB_001010e0;
        }
      }
      else {
        pcVar9 = (char *)param_1[1];
        if (pcVar9 == (char *)0x0) goto LAB_001011c8;
LAB_001012d4:
        uVar12 = param_1[2];
      }
      lVar4 = uVar12 + 1;
      if ((*(byte *)(param_1 + 6) & 1) != 0) {
        uVar12 = ~uVar12 + param_1[4];
      }
      param_1[3] = sVar7 + 1;
      param_1[2] = lVar4;
      pcVar9[uVar12] = (byte)uVar8 | 0x80;
      uVar12 = uVar8 >> 8;
      goto joined_r0x00101308;
    }
    if ((*(byte *)(puVar10 + 4) & 2) == 0) {
      iVar3 = WPACKET_put_bytes__(param_1,0,1);
      if (iVar3 == 0) {
        return 0;
      }
LAB_001010dd:
      puVar11 = (undefined8 *)*puVar10;
LAB_001010e0:
      if (puVar11 == (undefined8 *)0x0) {
        return 1;
      }
      lVar4 = param_1[3];
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WPACKET_close(long *param_1)

{
  long *ptr;
  int iVar1;
  ulong uVar2;
  size_t sVar3;
  undefined4 extraout_var;
  undefined1 *puVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  BUF_MEM *str;
  long lVar9;
  long lVar10;
  
  ptr = (long *)param_1[5];
  if (ptr == (long *)0x0) {
    return 0;
  }
  lVar7 = *ptr;
  if (lVar7 == 0) {
    return 0;
  }
  uVar8 = param_1[3] - ptr[3];
  if (uVar8 == 0) {
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
      goto LAB_0010155d;
    }
    if (uVar2 != 0) goto LAB_00101519;
    if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_0010155d;
    iVar1 = WPACKET_put_bytes__(param_1,0,1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    uVar2 = ptr[2];
    if (uVar2 == 0) {
      if ((*(byte *)(param_1 + 6) & 1) == 0) goto LAB_0010155d;
      uVar2 = uVar8 >> 8;
      if (uVar2 == 0) {
        iVar1 = WPACKET_put_bytes__(param_1,uVar8,1);
        if (iVar1 == 0) {
          return 0;
        }
        if (uVar8 < 0x80) goto LAB_00101559;
        uVar5 = 1;
      }
      else {
        uVar5 = 1;
        do {
          uVar5 = uVar5 + 1;
          uVar2 = uVar2 >> 8;
        } while (uVar2 != 0);
        iVar1 = WPACKET_put_bytes__(param_1,uVar8,uVar5);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if (param_1[5] == 0) {
        return 0;
      }
      sVar3 = param_1[3];
      if (param_1[4] == sVar3) {
        return 0;
      }
      str = (BUF_MEM *)*param_1;
      if (str == (BUF_MEM *)0x0) {
        pcVar6 = (char *)param_1[1];
        if (pcVar6 != (char *)0x0) goto LAB_001014d0;
LAB_00101658:
        lVar9 = param_1[2];
        lVar10 = param_1[3];
LAB_0010165d:
        lVar10 = lVar10 + _UNK_00102378;
        lVar7 = *ptr;
        param_1[2] = lVar9 + __LC1;
        param_1[3] = lVar10;
        goto LAB_0010155d;
      }
      if (sVar3 == str->length) {
        uVar8 = 0xffffffffffffffff;
        if (sVar3 == 0) {
          sVar3 = 1;
        }
        if ((-1 < (long)sVar3) && (uVar8 = sVar3 * 2, uVar8 < 0x100)) {
          uVar8 = 0x100;
        }
        iVar1 = BUF_MEM_grow(str,uVar8);
        if (CONCAT44(extraout_var,iVar1) == 0) {
          return 0;
        }
        pcVar6 = (char *)param_1[1];
        sVar3 = param_1[3];
        if (pcVar6 == (char *)0x0) {
          str = (BUF_MEM *)*param_1;
          if (str == (BUF_MEM *)0x0) goto LAB_00101658;
LAB_001014be:
          pcVar6 = str->data;
          lVar9 = param_1[2];
          lVar10 = param_1[3];
          if (pcVar6 == (char *)0x0) goto LAB_0010165d;
        }
      }
      else {
        pcVar6 = (char *)param_1[1];
        if (pcVar6 == (char *)0x0) goto LAB_001014be;
      }
LAB_001014d0:
      uVar8 = param_1[2];
      lVar7 = uVar8 + 1;
      if ((*(byte *)(param_1 + 6) & 1) != 0) {
        uVar8 = ~uVar8 + param_1[4];
      }
      param_1[3] = sVar3 + 1;
      param_1[2] = lVar7;
      pcVar6[uVar8] = (byte)uVar5 | 0x80;
      uVar8 = uVar5 >> 8;
    }
    else {
LAB_00101519:
      lVar9 = param_1[1];
      if ((lVar9 == 0) && ((*param_1 == 0 || (lVar9 = *(long *)(*param_1 + 8), lVar9 == 0))))
      goto LAB_0010155d;
      if ((*(byte *)(ptr + 4) & 4) != 0) {
        if (0x3f < uVar8) {
          if (uVar8 < 0x4000) {
            uVar5 = 2;
          }
          else if (uVar8 < 0x40000000) {
            uVar5 = 4;
          }
          else {
            uVar5 = 8;
            if (uVar8 >> 0x3e != 0) goto LAB_0010161e;
          }
          if (uVar2 < uVar5) {
            return 0;
          }
        }
LAB_0010161e:
        ossl_quic_vlint_encode_n(lVar9 + ptr[1]);
        lVar7 = *ptr;
        goto LAB_0010155d;
      }
      lVar7 = ptr[1] + -1;
      puVar4 = (undefined1 *)(lVar7 + uVar2 + lVar9);
      do {
        *puVar4 = (char)uVar8;
        puVar4 = puVar4 + -1;
        uVar8 = uVar8 >> 8;
      } while (puVar4 != (undefined1 *)(lVar9 + lVar7));
    }
    if (uVar8 != 0) {
      return 0;
    }
  }
LAB_00101559:
  lVar7 = *ptr;
LAB_0010155d:
  param_1[5] = lVar7;
  CRYPTO_free(ptr);
  return 1;
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
      goto LAB_00101709;
    }
  }
  uVar1 = ptr[2];
  if ((uVar1 == 0) ||
     ((lVar4 = param_1[1], lVar4 == 0 &&
      ((*param_1 == 0 || (lVar4 = *(long *)(*param_1 + 8), lVar4 == 0)))))) goto LAB_00101709;
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
        if (uVar6 >> 0x3e != 0) goto LAB_001017ce;
      }
      if (uVar1 < uVar7) {
        return 0;
      }
    }
LAB_001017ce:
    ossl_quic_vlint_encode_n(lVar4 + ptr[1]);
  }
  lVar3 = *ptr;
LAB_00101709:
  param_1[5] = lVar3;
  CRYPTO_free(ptr);
  CRYPTO_free((void *)param_1[5]);
  param_1[5] = 0;
  return 1;
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



undefined8 WPACKET_memset(undefined8 *param_1,int param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 extraout_var;
  char *pcVar5;
  long lVar6;
  ulong len;
  long lVar7;
  BUF_MEM *str;
  
  if (param_3 == 0) {
    return 1;
  }
  if ((param_1[5] == 0) || (lVar6 = param_1[3], (ulong)(param_1[4] - lVar6) < param_3)) {
    return 0;
  }
  str = (BUF_MEM *)*param_1;
  if (str == (BUF_MEM *)0x0) {
    pcVar5 = (char *)param_1[1];
    if (pcVar5 == (char *)0x0) {
LAB_001019a7:
      param_1[2] = param_1[2] + param_3;
      param_1[3] = lVar6 + param_3;
      return 1;
    }
LAB_001018fc:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(param_1 + 6);
  }
  else {
    uVar4 = str->length;
    if (uVar4 - lVar6 < param_3) {
      len = 0xffffffffffffffff;
      if (uVar4 <= param_3) {
        uVar4 = param_3;
      }
      if ((-1 < (long)uVar4) && (len = uVar4 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar2 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar2) == 0) {
        return 0;
      }
      pcVar5 = (char *)param_1[1];
      lVar6 = param_1[3];
      if (pcVar5 != (char *)0x0) goto LAB_001018fc;
      str = (BUF_MEM *)*param_1;
      if (str == (BUF_MEM *)0x0) goto LAB_001019a7;
    }
    else {
      pcVar5 = (char *)param_1[1];
      if (pcVar5 != (char *)0x0) goto LAB_001018fc;
    }
    pcVar5 = str->data;
    lVar3 = param_1[2];
    bVar1 = *(byte *)(param_1 + 6);
    if (pcVar5 == (char *)0x0) {
      param_1[2] = lVar3 + param_3;
      param_1[3] = lVar6 + param_3;
      return 1;
    }
  }
  lVar7 = lVar3;
  if ((bVar1 & 1) != 0) {
    lVar7 = (param_1[4] - lVar3) - param_3;
  }
  param_1[2] = lVar3 + param_3;
  param_1[3] = lVar6 + param_3;
  memset(pcVar5 + lVar7,param_2,param_3);
  return 1;
}



undefined8 WPACKET_memcpy(undefined8 *param_1,void *param_2,ulong param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined4 extraout_var;
  char *pcVar5;
  long lVar6;
  ulong len;
  long lVar7;
  BUF_MEM *str;
  
  if (param_3 == 0) {
    return 1;
  }
  if ((param_1[5] == 0) || (lVar6 = param_1[3], (ulong)(param_1[4] - lVar6) < param_3)) {
    return 0;
  }
  str = (BUF_MEM *)*param_1;
  if (str == (BUF_MEM *)0x0) {
    pcVar5 = (char *)param_1[1];
    if (pcVar5 == (char *)0x0) {
LAB_00101b27:
      param_1[2] = param_1[2] + param_3;
      param_1[3] = lVar6 + param_3;
      return 1;
    }
LAB_00101a7c:
    lVar3 = param_1[2];
    bVar1 = *(byte *)(param_1 + 6);
  }
  else {
    uVar4 = str->length;
    if (uVar4 - lVar6 < param_3) {
      len = 0xffffffffffffffff;
      if (uVar4 <= param_3) {
        uVar4 = param_3;
      }
      if ((-1 < (long)uVar4) && (len = uVar4 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar2 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar2) == 0) {
        return 0;
      }
      pcVar5 = (char *)param_1[1];
      lVar6 = param_1[3];
      if (pcVar5 != (char *)0x0) goto LAB_00101a7c;
      str = (BUF_MEM *)*param_1;
      if (str == (BUF_MEM *)0x0) goto LAB_00101b27;
    }
    else {
      pcVar5 = (char *)param_1[1];
      if (pcVar5 != (char *)0x0) goto LAB_00101a7c;
    }
    pcVar5 = str->data;
    lVar3 = param_1[2];
    bVar1 = *(byte *)(param_1 + 6);
    if (pcVar5 == (char *)0x0) {
      param_1[2] = lVar3 + param_3;
      param_1[3] = lVar6 + param_3;
      return 1;
    }
  }
  lVar7 = lVar3;
  if ((bVar1 & 1) != 0) {
    lVar7 = (param_1[4] - lVar3) - param_3;
  }
  param_1[2] = lVar3 + param_3;
  param_1[3] = lVar6 + param_3;
  memcpy(pcVar5 + lVar7,param_2,param_3);
  return 1;
}



bool WPACKET_sub_memcpy__(long param_1,void *param_2,size_t param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  void *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x28) != 0) {
    if (param_4 == 0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar5 != (undefined8 *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        puVar5[2] = 0;
        *(undefined8 **)(param_1 + 0x28) = puVar5;
        *puVar5 = uVar1;
        uVar1 = *(undefined8 *)(param_1 + 0x18);
        puVar5[1] = 0;
        puVar5[3] = uVar1;
LAB_00101c49:
        if (param_3 != 0) {
          iVar4 = WPACKET_reserve_bytes(param_1,param_3,&local_38);
          if (iVar4 == 0) goto LAB_00101cb0;
          *(size_t *)(param_1 + 0x10) = param_3 + *(long *)(param_1 + 0x10);
          *(size_t *)(param_1 + 0x18) = param_3 + *(long *)(param_1 + 0x18);
          if (local_38 != (void *)0x0) {
            memcpy(local_38,param_2,param_3);
          }
        }
        plVar3 = *(long **)(param_1 + 0x28);
        if ((plVar3 != (long *)0x0) && (*plVar3 != 0)) {
          iVar4 = wpacket_intern_close(param_1,plVar3,1);
          bVar6 = iVar4 != 0;
          goto LAB_00101cb2;
        }
      }
    }
    else if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar5 != (undefined8 *)0x0) {
        uVar1 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar5;
        *puVar5 = uVar1;
        lVar2 = *(long *)(param_1 + 0x18);
        puVar5[3] = param_4 + lVar2;
        puVar5[1] = lVar2;
        puVar5[2] = param_4;
        iVar4 = WPACKET_reserve_bytes(param_1,param_4,&local_38);
        if (iVar4 != 0) {
          *(long *)(param_1 + 0x10) = param_4 + *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x18) = param_4 + *(long *)(param_1 + 0x18);
          goto LAB_00101c49;
        }
      }
    }
  }
LAB_00101cb0:
  bVar6 = false;
LAB_00101cb2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x40) {
    lVar6 = 1;
LAB_00101ead:
    if ((*(long *)(param_1 + 0x28) != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
      puVar4 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar4 != (undefined8 *)0x0) {
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar4;
        *puVar4 = uVar5;
        lVar2 = *(long *)(param_1 + 0x18);
        puVar4[3] = lVar6 + lVar2;
        puVar4[1] = lVar2;
        puVar4[2] = lVar6;
        iVar3 = WPACKET_reserve_bytes(param_1,lVar6,auStack_28);
        if (iVar3 != 0) {
          *(long *)(param_1 + 0x10) = lVar6 + *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x18) = lVar6 + *(long *)(param_1 + 0x18);
          puVar1 = (uint *)(*(long *)(param_1 + 0x28) + 0x20);
          *puVar1 = *puVar1 | 4;
          uVar5 = 1;
          goto LAB_00101e8a;
        }
      }
    }
  }
  else {
    if (param_2 < 0x4000) {
      lVar6 = 2;
      goto LAB_00101ead;
    }
    if (param_2 < 0x40000000) {
      lVar6 = 4;
      goto LAB_00101ead;
    }
    lVar6 = 8;
    if (param_2 >> 0x3e == 0) goto LAB_00101ead;
  }
  uVar5 = 0;
LAB_00101e8a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 WPACKET_start_quic_sub_packet(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long lVar5;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x28) != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    puVar3 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
    if (puVar3 != (undefined8 *)0x0) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar3;
      puVar3[2] = 4;
      *puVar3 = uVar4;
      lVar5 = *(long *)(param_1 + 0x18);
      puVar3[1] = lVar5;
      puVar3[3] = lVar5 + 4;
      iVar2 = WPACKET_reserve_bytes(param_1,4,auStack_18);
      if (iVar2 != 0) {
        lVar5 = *(long *)(param_1 + 0x18) + _UNK_00102388;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __LC3;
        *(long *)(param_1 + 0x18) = lVar5;
        puVar1 = (uint *)(*(long *)(param_1 + 0x28) + 0x20);
        *puVar1 = *puVar1 | 4;
        uVar4 = 1;
        goto LAB_00102001;
      }
    }
  }
  uVar4 = 0;
LAB_00102001:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool WPACKET_quic_sub_allocate_bytes(long param_1,ulong param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x40) {
    lVar7 = 1;
LAB_001020ae:
    if ((*(long *)(param_1 + 0x28) != 0) && ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
      puVar6 = (undefined8 *)CRYPTO_zalloc(0x28,"crypto/packet.c",0x17b);
      if (puVar6 != (undefined8 *)0x0) {
        uVar2 = *(undefined8 *)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar6;
        *puVar6 = uVar2;
        lVar3 = *(long *)(param_1 + 0x18);
        puVar6[3] = lVar7 + lVar3;
        puVar6[1] = lVar3;
        puVar6[2] = lVar7;
        iVar5 = WPACKET_reserve_bytes(param_1,lVar7,auStack_38);
        if (iVar5 != 0) {
          *(long *)(param_1 + 0x10) = lVar7 + *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x18) = lVar7 + *(long *)(param_1 + 0x18);
          puVar1 = (uint *)(*(long *)(param_1 + 0x28) + 0x20);
          *puVar1 = *puVar1 | 4;
          iVar5 = WPACKET_reserve_bytes(param_1,param_2,param_3);
          if (iVar5 != 0) {
            plVar4 = *(long **)(param_1 + 0x28);
            *(ulong *)(param_1 + 0x10) = param_2 + *(long *)(param_1 + 0x10);
            *(ulong *)(param_1 + 0x18) = param_2 + *(long *)(param_1 + 0x18);
            if ((plVar4 != (long *)0x0) && (*plVar4 != 0)) {
              iVar5 = wpacket_intern_close(param_1,plVar4,1);
              bVar8 = iVar5 != 0;
              goto LAB_00102086;
            }
          }
        }
      }
    }
  }
  else {
    if (param_2 < 0x4000) {
      lVar7 = 2;
      goto LAB_001020ae;
    }
    if (param_2 < 0x40000000) {
      lVar7 = 4;
      goto LAB_001020ae;
    }
    if (param_2 >> 0x3e == 0) {
      lVar7 = 8;
      goto LAB_001020ae;
    }
  }
  bVar8 = false;
LAB_00102086:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 WPACKET_quic_write_vlint(undefined8 *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  undefined4 extraout_var;
  long lVar3;
  ulong uVar4;
  BUF_MEM *str;
  ulong len;
  char *pcVar5;
  ulong uVar6;
  
  if (param_2 < 0x40) {
    uVar6 = 1;
  }
  else if (param_2 < 0x4000) {
    uVar6 = 2;
  }
  else if (param_2 < 0x40000000) {
    uVar6 = 4;
  }
  else {
    if (param_2 >> 0x3e != 0) {
      return 0;
    }
    uVar6 = 8;
  }
  if ((param_1[5] == 0) || (lVar2 = param_1[3], (ulong)(param_1[4] - lVar2) < uVar6)) {
    return 0;
  }
  str = (BUF_MEM *)*param_1;
  if (str == (BUF_MEM *)0x0) {
    pcVar5 = (char *)param_1[1];
    if (pcVar5 == (char *)0x0) {
LAB_001022d0:
      lVar3 = param_1[2];
      pcVar5 = (char *)0x0;
      goto LAB_00102260;
    }
LAB_0010224c:
    lVar3 = param_1[2];
  }
  else {
    uVar4 = str->length;
    if (uVar4 - lVar2 < uVar6) {
      len = 0xffffffffffffffff;
      if (uVar4 <= uVar6) {
        uVar4 = uVar6;
      }
      if ((-1 < (long)uVar4) && (len = uVar4 * 2, len < 0x100)) {
        len = 0x100;
      }
      iVar1 = BUF_MEM_grow(str,len);
      if (CONCAT44(extraout_var,iVar1) == 0) {
        return 0;
      }
      pcVar5 = (char *)param_1[1];
      lVar2 = param_1[3];
      if (pcVar5 != (char *)0x0) goto LAB_0010224c;
      str = (BUF_MEM *)*param_1;
      if (str == (BUF_MEM *)0x0) goto LAB_001022d0;
    }
    else {
      pcVar5 = (char *)param_1[1];
      if (pcVar5 != (char *)0x0) goto LAB_0010224c;
    }
    pcVar5 = str->data;
    lVar3 = param_1[2];
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      goto LAB_00102260;
    }
  }
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    pcVar5 = pcVar5 + lVar3;
  }
  else {
    pcVar5 = pcVar5 + ((param_1[4] - lVar3) - uVar6);
  }
LAB_00102260:
  param_1[3] = lVar2 + uVar6;
  param_1[2] = lVar3 + uVar6;
  ossl_quic_vlint_encode(pcVar5,param_2);
  return 1;
}


