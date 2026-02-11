
undefined8 mbedtls_mpi_lt_mpi_ct(long *param_1,undefined8 *param_2,uint *param_3)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_38 [4];
  ulong uVar5;
  
  local_38[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)((long)param_1 + 10) == *(short *)((long)param_2 + 10)) {
    sVar1 = *(short *)(param_2 + 1);
    uVar2 = (uint)(-(ulong)((int)(short)param_1[1] >> 1 & 1) >> 0x20);
    uVar3 = (int)uVar2 >> 0x1f;
    uVar5 = (ulong)(uVar3 & 1);
    local_38[0] = *param_1;
    local_38[1] = *param_2;
    uVar4 = mbedtls_mpi_core_lt_ct(local_38[uVar5],local_38[uVar5 ^ 1]);
    uVar6 = 0;
    *param_3 = ((uVar3 ^ uVar4) &
                (int)((uint)(-(ulong)((int)sVar1 >> 1 & 1) >> 0x20) ^ uVar2) >> 0x1f ^ uVar4) & 1;
  }
  else {
    uVar6 = 0xfffffffc;
  }
  if (local_38[3] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_mpi_init(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  return;
}



void mbedtls_mpi_free(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      mbedtls_zeroize_and_free(*param_1,(ulong)*(ushort *)((long)param_1 + 10) << 3);
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    return;
  }
  return;
}



undefined8 mbedtls_mpi_grow(long *param_1,ulong param_2)

{
  ushort uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  
  if (10000 < param_2) {
    return 0xfffffff0;
  }
  uVar1 = *(ushort *)((long)param_1 + 10);
  if (uVar1 < param_2) {
    pvVar3 = calloc(param_2,8);
    if (pvVar3 == (void *)0x0) {
      return 0xfffffff0;
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
      lVar4 = (ulong)uVar1 << 3;
      __memcpy_chk(pvVar3,lVar2,lVar4,param_2 * 8);
      mbedtls_zeroize_and_free(lVar2,lVar4);
    }
    *(short *)((long)param_1 + 10) = (short)param_2;
    *param_1 = (long)pvVar3;
  }
  return 0;
}



int mbedtls_mpi_safe_cond_assign(long *param_1,undefined8 *param_2,ulong param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  
  iVar5 = mbedtls_mpi_grow(param_1,*(undefined2 *)((long)param_2 + 10));
  if (iVar5 == 0) {
    uVar6 = -(param_3 & 0xff);
    uVar7 = (long)(uVar6 | param_3 & 0xff) >> 0x3f;
    uVar2 = (ushort)((long)uVar6 >> 0x3f);
    uVar1 = *(undefined2 *)((long)param_2 + 10);
    uVar3 = *param_2;
    *(ushort *)(param_1 + 1) =
         ((short)param_1[1] + 1U & ~uVar2 | *(short *)(param_2 + 1) + 1U & uVar2) - 1;
    mbedtls_mpi_core_cond_assign(*param_1,uVar3,uVar1,uVar7);
    uVar2 = *(ushort *)((long)param_1 + 10);
    if ((ulong)*(ushort *)((long)param_2 + 10) < (ulong)uVar2) {
      lVar4 = *param_1;
      puVar8 = (ulong *)(lVar4 + (ulong)*(ushort *)((long)param_2 + 10) * 8);
      do {
        *puVar8 = *puVar8 & ~uVar7;
        puVar8 = puVar8 + 1;
      } while (puVar8 != (ulong *)(lVar4 + (ulong)uVar2 * 8));
      return 0;
    }
  }
  return iVar5;
}



int mbedtls_mpi_safe_cond_swap(undefined8 *param_1,undefined8 *param_2,ulong param_3)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  
  iVar4 = 0;
  if (param_1 != param_2) {
    uVar5 = -(param_3 & 0xff);
    iVar4 = mbedtls_mpi_grow(param_1,*(undefined2 *)((long)param_2 + 10));
    if (iVar4 == 0) {
      iVar4 = mbedtls_mpi_grow(param_2,*(undefined2 *)((long)param_1 + 10));
      if (iVar4 == 0) {
        sVar1 = *(short *)(param_1 + 1);
        uVar3 = (ushort)((long)uVar5 >> 0x3f);
        *(ushort *)(param_1 + 1) = (sVar1 + 1U & ~uVar3 | *(short *)(param_2 + 1) + 1U & uVar3) - 1;
        uVar2 = *(undefined2 *)((long)param_1 + 10);
        *(ushort *)(param_2 + 1) = (*(short *)(param_2 + 1) + 1U & ~uVar3 | sVar1 + 1U & uVar3) - 1;
        mbedtls_mpi_core_cond_swap(*param_1,*param_2,uVar2,(long)(uVar5 | param_3 & 0xff) >> 0x3f);
        return 0;
      }
    }
  }
  return iVar4;
}



undefined8 mbedtls_mpi_resize_clear(long *param_1,ulong param_2)

{
  void *__s;
  undefined8 uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    if (param_1 != (long *)0x0) {
      if (*param_1 != 0) {
        mbedtls_zeroize_and_free(*param_1,(ulong)*(ushort *)((long)param_1 + 10) << 3);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 1;
      return 0;
    }
  }
  else {
    uVar2 = (ulong)*(ushort *)((long)param_1 + 10);
    __s = (void *)*param_1;
    if (uVar2 != param_2) {
      if (__s != (void *)0x0) {
        mbedtls_zeroize_and_free(__s,uVar2 * 8);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 1;
      uVar1 = mbedtls_mpi_grow(param_1,param_2);
      return uVar1;
    }
    memset(__s,0,uVar2 << 3);
    *(undefined2 *)(param_1 + 1) = 1;
  }
  return 0;
}



undefined8 mbedtls_mpi_shrink(long *param_1,ulong param_2)

{
  ushort uVar1;
  long lVar2;
  ulong __nmemb;
  void *pvVar3;
  undefined8 uVar4;
  
  if (10000 < param_2) {
    return 0xfffffff0;
  }
  uVar1 = *(ushort *)((long)param_1 + 10);
  if (uVar1 <= param_2) {
    uVar4 = mbedtls_mpi_grow();
    return uVar4;
  }
  lVar2 = (long)(int)(uVar1 - 1);
  if (uVar1 - 1 != 0) {
    do {
      if (*(long *)(*param_1 + lVar2 * 8) != 0) {
        __nmemb = lVar2 + 1;
        goto LAB_00100471;
      }
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  __nmemb = 1;
LAB_00100471:
  if (__nmemb <= param_2) {
    __nmemb = param_2;
  }
  pvVar3 = calloc(__nmemb,8);
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0xfffffff0;
  }
  else {
    lVar2 = *param_1;
    if (lVar2 != 0) {
      __memcpy_chk(pvVar3,lVar2,__nmemb * 8,__nmemb * 8);
      mbedtls_zeroize_and_free(lVar2,(ulong)uVar1 * 8);
    }
    *(short *)((long)param_1 + 10) = (short)__nmemb;
    uVar4 = 0;
    *param_1 = (long)pvVar3;
  }
  return uVar4;
}



undefined8 mbedtls_mpi_copy(long *param_1,long *param_2)

{
  ushort uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  
  if (param_1 == param_2) {
    return 0;
  }
  uVar1 = *(ushort *)((long)param_1 + 10);
  uVar4 = (ulong)uVar1;
  if (*(ushort *)((long)param_2 + 10) == 0) {
    if (uVar1 != 0) {
      *(undefined2 *)(param_1 + 1) = 1;
      memset((void *)*param_1,0,(ulong)uVar1 << 3);
      return 0;
    }
  }
  else {
    iVar5 = *(ushort *)((long)param_2 + 10) - 1;
    lVar2 = (long)iVar5;
    if (iVar5 != 0) {
      do {
        if (*(long *)(*param_2 + lVar2 * 8) != 0) {
          uVar6 = lVar2 + 1;
          *(short *)(param_1 + 1) = (short)param_2[1];
          if (uVar6 <= uVar4) goto LAB_001005d4;
          goto LAB_00100560;
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    uVar6 = 1;
    *(short *)(param_1 + 1) = (short)param_2[1];
    if (uVar4 != 0) {
LAB_001005d4:
      memset((void *)(*param_1 + uVar6 * 8),0,(uVar4 - uVar6) * 8);
      memcpy((void *)*param_1,(void *)*param_2,uVar6 * 8);
      return 0;
    }
LAB_00100560:
    uVar3 = mbedtls_mpi_grow(param_1,uVar6);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    memcpy((void *)*param_1,(void *)*param_2,uVar6 * 8);
  }
  return 0;
}



void mbedtls_mpi_swap(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}



undefined8 mbedtls_mpi_lset(long *param_1,long param_2)

{
  long lVar1;
  void *__s;
  size_t __n;
  
  if (*(ushort *)((long)param_1 + 10) == 0) {
    __s = calloc(1,8);
    if (__s == (void *)0x0) {
      return 0xfffffff0;
    }
    if (*param_1 != 0) {
      mbedtls_zeroize_and_free();
    }
    *param_1 = (long)__s;
    __n = 8;
    *(undefined2 *)((long)param_1 + 10) = 1;
  }
  else {
    __s = (void *)*param_1;
    __n = (ulong)*(ushort *)((long)param_1 + 10) << 3;
  }
  memset(__s,0,__n);
  lVar1 = -param_2;
  if (0 < param_2) {
    lVar1 = param_2;
  }
  *(long *)*param_1 = lVar1;
  *(ushort *)(param_1 + 1) = (ushort)(param_2 >> 0x3f) | 1;
  return 0;
}



uint mbedtls_mpi_get_bit(long *param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < (ulong)*(ushort *)((long)param_1 + 10) << 6) {
    uVar1 = (uint)(*(ulong *)(*param_1 + (param_2 >> 6) * 8) >> ((byte)param_2 & 0x3f)) & 1;
  }
  return uVar1;
}



undefined8 mbedtls_mpi_set_bit(long *param_1,ulong param_2,byte param_3)

{
  ulong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (1 < param_3) {
    return 0xfffffffc;
  }
  if ((ulong)*(ushort *)((long)param_1 + 10) << 6 <= param_2) {
    if (param_3 == 0) {
      return 0;
    }
    uVar3 = mbedtls_mpi_grow(param_1,(param_2 >> 6) + 1);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  puVar1 = (ulong *)(*param_1 + (param_2 >> 6) * 8);
  bVar2 = (byte)param_2 & 0x3f;
  *puVar1 = (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2) & *puVar1 |
            (ulong)param_3 << ((byte)param_2 & 0x3f);
  return 0;
}



ulong mbedtls_mpi_lsb(long *param_1)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(ushort *)((long)param_1 + 10) == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar1 = *(ulong *)(*param_1 + uVar3 * 8);
    if (uVar1 != 0) {
      iVar2 = 0;
      for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
        iVar2 = iVar2 + 1;
      }
      return (long)iVar2 + uVar3 * 0x40;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != *(ushort *)((long)param_1 + 10));
  return uVar1;
}



void mbedtls_mpi_bitlen(undefined8 *param_1)

{
  mbedtls_mpi_core_bitlen(*param_1,*(undefined2 *)((long)param_1 + 10));
  return;
}



ulong mbedtls_mpi_size(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = mbedtls_mpi_core_bitlen(*param_1,*(undefined2 *)((long)param_1 + 10));
  return lVar1 + 7U >> 3;
}



void mbedtls_mpi_read_binary_le(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = mbedtls_mpi_resize_clear(param_1,(ulong)((param_3 & 7) != 0) + (param_3 >> 3));
  if (iVar1 != 0) {
    return;
  }
  mbedtls_mpi_core_read_le(*param_1,*(undefined2 *)((long)param_1 + 10),param_2,param_3);
  return;
}



void mbedtls_mpi_read_binary(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  
  iVar1 = mbedtls_mpi_resize_clear(param_1,(ulong)((param_3 & 7) != 0) + (param_3 >> 3));
  if (iVar1 != 0) {
    return;
  }
  mbedtls_mpi_core_read_be(*param_1,*(undefined2 *)((long)param_1 + 10),param_2,param_3);
  return;
}



void mbedtls_mpi_write_binary_le(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  mbedtls_mpi_core_write_le(*param_1,*(undefined2 *)((long)param_1 + 10),param_2,param_3);
  return;
}



void mbedtls_mpi_write_binary(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  mbedtls_mpi_core_write_be(*param_1,*(undefined2 *)((long)param_1 + 10),param_2,param_3);
  return;
}



undefined8 mbedtls_mpi_shift_l(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  lVar1 = mbedtls_mpi_core_bitlen(*param_1,*(undefined2 *)((long)param_1 + 10));
  uVar4 = (ulong)*(ushort *)((long)param_1 + 10);
  uVar2 = lVar1 + param_2;
  if (uVar4 << 6 < uVar2) {
    uVar3 = mbedtls_mpi_grow(param_1,(ulong)((uVar2 & 0x3f) != 0) + (uVar2 >> 6));
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar4 = (ulong)*(ushort *)((long)param_1 + 10);
  }
  mbedtls_mpi_core_shift_l(*param_1,uVar4,param_2);
  return 0;
}



undefined8 mbedtls_mpi_shift_r(undefined8 *param_1,undefined8 param_2)

{
  if (*(short *)((long)param_1 + 10) == 0) {
    return 0;
  }
  mbedtls_mpi_core_shift_r(*param_1,*(short *)((long)param_1 + 10),param_2);
  return 0;
}



ulong mbedtls_mpi_cmp_abs(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(ushort *)((long)param_1 + 10);
  uVar3 = (ulong)*(ushort *)((long)param_2 + 10);
  if (uVar2 == 0) {
    if (*(ushort *)((long)param_2 + 10) == 0) {
      return 0;
    }
  }
  else {
    do {
      if (*(long *)(*param_1 + -8 + uVar2 * 8) != 0) break;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (uVar3 == 0) goto LAB_00100a38;
  }
  do {
    if (*(long *)(*param_2 + -8 + uVar3 * 8) != 0) {
      if (uVar3 < uVar2) {
        return 1;
      }
      if (uVar2 < uVar3) {
        return 0xffffffff;
      }
      while( true ) {
        uVar3 = *(ulong *)(*param_1 + -8 + uVar2 * 8);
        uVar1 = *(ulong *)(*param_2 + -8 + uVar2 * 8);
        if (uVar1 < uVar3) {
          return 1;
        }
        if (uVar3 < uVar1) break;
        uVar2 = uVar2 - 1;
        if (uVar2 == 0) {
          return 0;
        }
      }
      return 0xffffffff;
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
LAB_00100a38:
  return (ulong)(uVar2 != 0);
}



int mbedtls_mpi_cmp_mpi(long *param_1,long *param_2)

{
  short sVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (ulong)*(ushort *)((long)param_1 + 10);
  uVar5 = (ulong)*(ushort *)((long)param_2 + 10);
  if (uVar4 == 0) {
    if (*(ushort *)((long)param_2 + 10) == 0) {
      return 0;
    }
  }
  else {
    do {
      if (*(long *)(*param_1 + -8 + uVar4 * 8) != 0) {
        if (uVar5 != 0) goto LAB_00100a9b;
        goto LAB_00100b20;
      }
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    if (uVar5 == 0) {
      return 0;
    }
  }
LAB_00100a9b:
  do {
    if (*(long *)(*param_2 + -8 + uVar5 * 8) != 0) {
      if (uVar4 <= uVar5) {
        sVar1 = (short)param_2[1];
        if (uVar4 < uVar5) {
          return -(int)sVar1;
        }
        sVar2 = (short)param_1[1];
        if (sVar2 < 1) {
          if ((0 < sVar1) && (sVar2 != 0)) {
            return -1;
          }
        }
        else if (sVar1 < 0) {
          return 1;
        }
        while( true ) {
          uVar5 = *(ulong *)(*param_1 + -8 + uVar4 * 8);
          uVar3 = *(ulong *)(*param_2 + -8 + uVar4 * 8);
          if (uVar3 < uVar5) {
            return (int)sVar2;
          }
          if (uVar5 < uVar3) break;
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) {
            return 0;
          }
        }
        return -(int)sVar2;
      }
      goto LAB_00100b20;
    }
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  if (uVar4 == 0) {
    return 0;
  }
LAB_00100b20:
  return (int)(short)param_1[1];
}



void mbedtls_mpi_cmp_int(undefined8 param_1,long param_2)

{
  long in_FS_OFFSET;
  long *local_28;
  ushort local_20;
  undefined2 local_1e;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = -param_2;
  if (0 < param_2) {
    local_18 = param_2;
  }
  local_20 = (ushort)(param_2 >> 0x3f) | 1;
  local_1e = 1;
  local_28 = &local_18;
  mbedtls_mpi_cmp_mpi(param_1,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_mpi_add_abs(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  
  plVar6 = param_2;
  if (((param_1 != param_3) && (plVar6 = param_3, param_1 != param_2)) &&
     (uVar2 = mbedtls_mpi_copy(), (int)uVar2 != 0)) {
    return uVar2;
  }
  uVar5 = (ulong)*(ushort *)((long)plVar6 + 10);
  *(undefined2 *)(param_1 + 1) = 1;
  if (uVar5 != 0) {
    do {
      if (*(long *)(*plVar6 + -8 + uVar5 * 8) != 0) {
        uVar2 = mbedtls_mpi_grow(param_1,uVar5);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        lVar1 = *param_1;
        uVar3 = mbedtls_mpi_core_add(lVar1,lVar1,*plVar6,uVar5);
        puVar4 = (ulong *)(lVar1 + uVar5 * 8);
        if (uVar3 == 0) {
          return 0;
        }
        do {
          if (*(ushort *)((long)param_1 + 10) <= uVar5) {
            uVar2 = mbedtls_mpi_grow(param_1,uVar5 + 1);
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            puVar4 = (ulong *)(*param_1 + uVar5 * 8);
          }
          bVar7 = CARRY8(uVar3,*puVar4);
          *puVar4 = uVar3 + *puVar4;
          puVar4 = puVar4 + 1;
          uVar3 = 1;
          uVar5 = uVar5 + 1;
        } while (bVar7);
        return 0;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return 0;
}



int mbedtls_mpi_sub_abs(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = (ulong)*(ushort *)((long)param_3 + 10);
  if (uVar6 != 0) {
    do {
      if (*(long *)(*param_3 + -8 + uVar6 * 8) != 0) {
        if (*(ushort *)((long)param_2 + 10) < uVar6) goto LAB_00100d9f;
        break;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  iVar3 = mbedtls_mpi_grow(param_1);
  if (iVar3 != 0) {
    return iVar3;
  }
  uVar5 = (ulong)*(ushort *)((long)param_2 + 10);
  if ((param_2 == param_1) || (uVar5 <= uVar6)) {
    uVar2 = *(ushort *)((long)param_1 + 10);
    if (uVar2 <= *(ushort *)((long)param_2 + 10)) goto LAB_00100d52;
  }
  else {
    memcpy((void *)(*param_1 + uVar6 * 8),(void *)(uVar6 * 8 + *param_2),(uVar5 - uVar6) * 8);
    uVar5 = (ulong)*(ushort *)((long)param_2 + 10);
    uVar2 = *(ushort *)((long)param_1 + 10);
    if (uVar2 <= *(ushort *)((long)param_2 + 10)) goto LAB_00100d52;
  }
  memset((void *)(*param_1 + uVar5 * 8),0,(long)(int)((uint)uVar2 - (int)uVar5) << 3);
LAB_00100d52:
  lVar4 = mbedtls_mpi_core_sub(*param_1,*param_2,*param_3,uVar6);
  if ((lVar4 == 0) ||
     (lVar1 = *param_1 + uVar6 * 8,
     lVar4 = mbedtls_mpi_core_sub_int(lVar1,lVar1,lVar4,*(ushort *)((long)param_1 + 10) - uVar6),
     lVar4 == 0)) {
    *(undefined2 *)(param_1 + 1) = 1;
    iVar3 = 0;
  }
  else {
LAB_00100d9f:
    iVar3 = -10;
  }
  return iVar3;
}



void add_sub_mpi(long param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  sVar3 = *(short *)(param_2 + 8);
  if ((int)*(short *)(param_3 + 8) * (int)sVar3 * param_4 < 0) {
    iVar1 = mbedtls_mpi_cmp_abs(param_2,param_3);
    if (iVar1 < 0) {
      iVar1 = mbedtls_mpi_sub_abs(param_1,param_3,param_2);
      if (iVar1 == 0) {
        *(short *)(param_1 + 8) = -sVar3;
        return;
      }
    }
    else {
      iVar2 = mbedtls_mpi_sub_abs(param_1,param_2,param_3);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
          sVar3 = 1;
        }
        *(short *)(param_1 + 8) = sVar3;
      }
    }
  }
  else {
    iVar1 = mbedtls_mpi_add_abs(param_1,param_2,param_3);
    if (iVar1 == 0) {
      *(short *)(param_1 + 8) = sVar3;
      return;
    }
  }
  return;
}



void mbedtls_mpi_add_mpi(void)

{
  add_sub_mpi();
  return;
}



void mbedtls_mpi_sub_mpi(void)

{
  add_sub_mpi();
  return;
}



void mbedtls_mpi_add_int(undefined8 param_1,undefined8 param_2,long param_3)

{
  long in_FS_OFFSET;
  long *local_28;
  ushort local_20;
  undefined2 local_1e;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = -param_3;
  if (0 < param_3) {
    local_18 = param_3;
  }
  local_20 = (ushort)(param_3 >> 0x3f) | 1;
  local_1e = 1;
  local_28 = &local_18;
  add_sub_mpi(param_1,param_2,&local_28,1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_mpi_sub_int(undefined8 param_1,undefined8 param_2,long param_3)

{
  long in_FS_OFFSET;
  long *local_28;
  ushort local_20;
  undefined2 local_1e;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = -param_3;
  if (0 < param_3) {
    local_18 = param_3;
  }
  local_20 = (ushort)(param_3 >> 0x3f) | 1;
  local_1e = 1;
  local_28 = &local_18;
  add_sub_mpi(param_1,param_2,&local_28,0xffffffff);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_mpi_mul_mpi(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 1;
  local_68 = 0;
  local_58 = 0;
  local_50 = 1;
  if (param_1 == param_2) {
    param_2 = &local_68;
    iVar3 = mbedtls_mpi_copy(param_2,param_1);
    if (iVar3 != 0) goto LAB_001010d8;
    if (param_1 == param_3) goto LAB_00101178;
LAB_0010100f:
    uVar4 = (ulong)*(ushort *)((long)param_2 + 10);
    if (uVar4 != 0) {
      do {
        if (*(long *)(*param_2 + -8 + uVar4 * 8) != 0) {
          bVar1 = false;
          goto LAB_00101042;
        }
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    bVar1 = true;
LAB_00101042:
    uVar5 = (ulong)*(ushort *)((long)param_3 + 10);
    if (uVar5 != 0) {
      do {
        if (*(long *)(*param_3 + -8 + uVar5 * 8) != 0) {
          uVar6 = uVar4 + uVar5;
          goto LAB_0010106e;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    bVar1 = true;
    uVar6 = uVar4;
LAB_0010106e:
    iVar3 = mbedtls_mpi_grow(param_1,uVar6);
    if ((iVar3 == 0) && (iVar3 = mbedtls_mpi_lset(param_1,0), iVar3 == 0)) {
      mbedtls_mpi_core_mul(*param_1,*param_2,uVar4,*param_3,uVar5);
      if (bVar1) {
        sVar2 = 1;
      }
      else {
        sVar2 = (short)param_2[1] * (short)param_3[1];
      }
      *(short *)(param_1 + 1) = sVar2;
    }
  }
  else {
    if (param_1 != param_3) goto LAB_0010100f;
LAB_00101178:
    param_3 = &local_58;
    iVar3 = mbedtls_mpi_copy(param_3,param_1);
    if (iVar3 == 0) goto LAB_0010100f;
  }
  if (local_58 != 0) {
    mbedtls_zeroize_and_free(local_58,(ulong)local_50._2_2_ << 3);
  }
LAB_001010d8:
  if (local_68 != 0) {
    mbedtls_zeroize_and_free(local_68,(ulong)local_60._2_2_ << 3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



ulong mbedtls_mpi_mul_int(undefined8 *param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = (ulong)*(ushort *)((long)param_2 + 10);
  if (uVar2 != 0) {
    do {
      if (*(long *)(*param_2 + -8 + uVar2 * 8) != 0) {
        if (param_3 != 0) {
          uVar1 = mbedtls_mpi_grow(param_1,uVar2 + 1);
          uVar3 = (ulong)uVar1;
          if (uVar1 == 0) {
            uVar1 = mbedtls_mpi_copy(param_1,param_2);
            uVar3 = (ulong)uVar1;
            if (uVar1 == 0) {
              mbedtls_mpi_core_mla
                        (*param_1,*(undefined2 *)((long)param_1 + 10),*param_2,uVar2,param_3 + -1);
              return uVar3;
            }
          }
          return uVar3;
        }
        break;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  uVar2 = mbedtls_mpi_lset(param_1,0);
  return uVar2;
}



ulong mbedtls_mpi_read_string(long *param_1,int param_2,char *param_3)

{
  ulong *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  int local_6c;
  long local_68;
  undefined4 local_60;
  ulong *local_58;
  undefined4 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xe < param_2 - 2U) {
LAB_0010154e:
    uVar5 = 0xfffffffc;
    goto LAB_00101318;
  }
  local_60 = 1;
  local_68 = 0;
  if (*param_3 == '\0') {
    if (param_1 != (long *)0x0) {
      if (*param_1 != 0) {
        mbedtls_zeroize_and_free(*param_1,(ulong)*(ushort *)((long)param_1 + 10) << 3);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 1;
    }
LAB_00101439:
    uVar5 = 0;
    goto LAB_00101318;
  }
  local_6c = 1;
  if (*param_3 == '-') {
    local_6c = -1;
    param_3 = param_3 + 1;
  }
  sVar4 = strlen(param_3);
  if (param_2 == 0x10) {
    if (sVar4 >> 0x3e != 0) goto LAB_0010154e;
    uVar5 = mbedtls_mpi_grow(param_1,((sVar4 * 4 >> 6) + 1) - (ulong)((sVar4 & 0xf) == 0));
    if (((int)uVar5 != 0) || (uVar5 = mbedtls_mpi_lset(param_1,0), (int)uVar5 != 0))
    goto LAB_00101318;
    if (sVar4 == 0) goto LAB_00101522;
    uVar5 = 0;
    do {
      sVar4 = sVar4 - 1;
      cVar2 = param_3[sVar4];
      iVar3 = (int)cVar2;
      if ((byte)(cVar2 - 0x30U) < 10) {
        lVar6 = (long)(iVar3 + -0x30);
      }
      else if ((byte)(cVar2 + 0xbfU) < 6) {
        lVar6 = (long)(iVar3 + -0x37);
      }
      else {
        if (5 < (byte)(cVar2 + 0x9fU)) {
          uVar5 = 0xfffffffa;
          goto LAB_00101318;
        }
        lVar6 = (long)(iVar3 + -0x57);
      }
      puVar1 = (ulong *)(*param_1 + (uVar5 >> 4) * 8);
      *puVar1 = *puVar1 | lVar6 << ((char)uVar5 * '\x04' & 0x3cU);
      uVar5 = uVar5 + 1;
    } while (sVar4 != 0);
LAB_001014e0:
    if (local_6c == -1) goto LAB_0010152d;
LAB_001014e7:
    uVar5 = 0;
  }
  else {
    uVar5 = mbedtls_mpi_lset(param_1,0);
    if ((int)uVar5 != 0) goto LAB_00101318;
    if (sVar4 != 0) {
      pcVar7 = param_3 + sVar4;
      do {
        cVar2 = *param_3;
        if (9 < (byte)(cVar2 - 0x30U)) {
          if ((byte)(cVar2 + 0xbfU) < 6) {
            uVar8 = (ulong)(cVar2 + -0x37);
            goto LAB_0010136b;
          }
          if ((byte)(cVar2 + 0x9fU) < 6) {
            uVar8 = (ulong)(cVar2 + -0x57);
            goto LAB_0010136b;
          }
LAB_001014f0:
          uVar5 = 0xfffffffa;
          goto LAB_001014b5;
        }
        uVar8 = (ulong)(cVar2 + -0x30);
LAB_0010136b:
        if ((ulong)(long)param_2 <= uVar8) goto LAB_001014f0;
        uVar5 = mbedtls_mpi_mul_int(&local_68,param_1,(long)param_2);
        if ((int)uVar5 != 0) goto LAB_001014b5;
        local_58 = &local_48;
        local_50 = 0x10001;
        local_48 = uVar8;
        uVar5 = add_sub_mpi(param_1,&local_68,&local_58,1);
        if ((int)uVar5 != 0) goto LAB_001014b5;
        param_3 = param_3 + 1;
      } while (pcVar7 != param_3);
      goto LAB_001014e0;
    }
LAB_00101522:
    if (local_6c != -1) goto LAB_00101439;
LAB_0010152d:
    uVar5 = mbedtls_mpi_core_bitlen(*param_1,*(undefined2 *)((long)param_1 + 10));
    if (uVar5 != 0) {
      *(undefined2 *)(param_1 + 1) = 0xffff;
      goto LAB_001014e7;
    }
  }
LAB_001014b5:
  if (local_68 != 0) {
    mbedtls_zeroize_and_free(local_68,(ulong)local_60._2_2_ << 3);
    uVar5 = uVar5 & 0xffffffff;
  }
LAB_00101318:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 mbedtls_mpi_read_file(undefined8 param_1,uint param_2,FILE *param_3)

{
  size_t sVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  char cVar7;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  long in_FS_OFFSET;
  undefined8 uStack_9e0;
  char local_9d8 [2488];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xe < param_2 - 2) {
    uVar6 = 0xfffffffc;
    goto LAB_0010161d;
  }
  pcVar4 = local_9d8;
  for (lVar8 = 0x136; lVar8 != 0; lVar8 = lVar8 + -1) {
    *(undefined8 *)pcVar4 = 0;
    pcVar4 = (char *)((long)pcVar4 + 8);
  }
  *(undefined4 *)pcVar4 = 0;
  uStack_9e0 = (undefined *)0x1015b6;
  pcVar4 = fgets(local_9d8,0x9b3,param_3);
  if (pcVar4 == (char *)0x0) {
    uVar6 = 0xfffffffe;
    goto LAB_0010161d;
  }
  uStack_9e0 = (undefined *)0x1015c7;
  sVar5 = strlen(local_9d8);
  if (sVar5 == 0x9b2) {
    uVar6 = 0xfffffff8;
    goto LAB_0010161d;
  }
  pcVar4 = local_9d8;
  if (sVar5 != 0) {
    sVar1 = sVar5 - 1;
    cVar7 = local_9d8[sVar5 - 1];
    sVar10 = sVar1;
    if (cVar7 == '\n') {
      local_9d8[sVar5 - 1] = '\0';
      pcVar4 = local_9d8;
      if (sVar1 == 0) goto LAB_001015e8;
      sVar10 = sVar5 - 2;
      cVar7 = local_9d8[sVar5 - 2];
      sVar5 = sVar1;
    }
    if (cVar7 == '\r') {
      local_9d8[sVar10] = '\0';
      pcVar4 = local_9d8 + sVar10;
    }
    else {
      pcVar4 = local_9d8 + sVar5;
    }
  }
LAB_001015e8:
  do {
    pcVar9 = pcVar4;
    if (pcVar9 <= local_9d8) break;
    cVar7 = pcVar9[-1];
    iVar2 = (int)cVar7;
    if ((byte)(cVar7 - 0x30U) < 10) {
      uVar3 = iVar2 - 0x30;
    }
    else if ((byte)(cVar7 + 0xbfU) < 6) {
      uVar3 = iVar2 - 0x37;
    }
    else {
      if (5 < (byte)(cVar7 + 0x9fU)) break;
      uVar3 = iVar2 - 0x57;
    }
    pcVar4 = pcVar9 + -1;
  } while (uVar3 < param_2);
  uStack_9e0 = (undefined *)0x10161d;
  uVar6 = mbedtls_mpi_read_string(param_1,param_2,pcVar9);
LAB_0010161d:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    uStack_9e0 = &UNK_001016e1;
    __stack_chk_fail();
  }
  return uVar6;
}



int mbedtls_mpi_div_mpi(long param_1,long param_2,long param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  undefined1 auVar20 [16];
  ulong local_120;
  long local_108;
  long local_100;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  undefined4 local_90;
  void *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_60 = 0x10001;
  local_68 = &local_58;
  iVar5 = mbedtls_mpi_cmp_mpi(param_4,&local_68);
  if (iVar5 == 0) {
    iVar5 = -0xc;
    goto LAB_00101864;
  }
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_90 = 1;
  local_88 = (void *)0x0;
  local_80 = 1;
  local_78 = (undefined8 *)0x0;
  local_70 = 1;
  local_60 = 0x30001;
  iVar5 = mbedtls_mpi_cmp_abs(param_3,param_4);
  if (iVar5 < 0) {
    if (((param_1 == 0) || (iVar5 = mbedtls_mpi_lset(param_1,0), iVar5 == 0)) &&
       ((param_2 == 0 || (iVar5 = mbedtls_mpi_copy(param_2,param_3), iVar5 == 0)))) {
      iVar5 = 0;
      goto LAB_00101864;
    }
LAB_00101818:
    puVar9 = local_78;
    if (local_88 != (void *)0x0) {
      mbedtls_zeroize_and_free(local_88,(ulong)local_80._2_2_ << 3);
    }
    if (puVar9 != (undefined8 *)0x0) {
      mbedtls_zeroize_and_free(puVar9,(ulong)local_70._2_2_ << 3);
    }
  }
  else {
    iVar5 = mbedtls_mpi_copy(&local_a8,param_3);
    if (iVar5 == 0) {
      iVar5 = mbedtls_mpi_copy(&local_98,param_4);
      lVar19 = local_98;
      lVar18 = local_a8;
      if (iVar5 == 0) {
        uVar3 = *(ushort *)(param_3 + 10);
        local_90 = CONCAT22(local_90._2_2_,1);
        uVar16 = uVar3 + 2;
        local_a0 = CONCAT22(local_a0._2_2_,1);
        if ((uVar16 < 0x2711) && (pvVar8 = calloc((long)(int)uVar16,8), pvVar8 != (void *)0x0)) {
          local_80 = CONCAT22(uVar3 + 2,(undefined2)local_80);
          local_88 = pvVar8;
          iVar5 = mbedtls_mpi_lset(&local_88,0);
          lVar18 = local_a8;
          if (iVar5 == 0) {
            uVar3 = *(ushort *)(param_3 + 10);
            uVar16 = uVar3 + 2;
            if ((10000 < uVar16) ||
               (puVar9 = (undefined8 *)calloc((long)(int)uVar16,8), puVar9 == (undefined8 *)0x0))
            goto LAB_00101dae;
            uVar4 = local_90._2_2_;
            local_120 = (ulong)local_90._2_2_;
            local_70 = CONCAT22(uVar3 + 2,(undefined2)local_70);
            local_78 = puVar9;
            uVar16 = mbedtls_mpi_core_bitlen(lVar19,local_120);
            if ((ulong)(uVar16 & 0x3f) == 0x3f) {
              local_108 = 0;
            }
            else {
              local_108 = 0x3f - (ulong)(uVar16 & 0x3f);
              iVar5 = mbedtls_mpi_shift_l(&local_a8,local_108);
              lVar18 = local_a8;
              if ((iVar5 != 0) ||
                 (iVar5 = mbedtls_mpi_shift_l(&local_98,local_108), lVar18 = local_a8,
                 lVar19 = local_98, iVar5 != 0)) goto LAB_001018e1;
              local_120 = (ulong)local_90._2_2_;
              uVar4 = local_90._2_2_;
            }
            uVar3 = local_a0._2_2_;
            uVar10 = (ulong)local_a0._2_2_;
            lVar13 = uVar10 - local_120;
            lVar11 = lVar13 * 0x40;
            iVar6 = mbedtls_mpi_shift_l(&local_98,lVar11);
            iVar5 = iVar6;
            lVar19 = local_98;
            while (lVar18 = local_a8, local_98 = lVar19, iVar5 == 0) {
              iVar5 = mbedtls_mpi_cmp_mpi(&local_a8,&local_98);
              lVar19 = local_98;
              if (iVar5 < 0) {
                if (local_90._2_2_ != 0) {
                  mbedtls_mpi_core_shift_r(local_98,local_90._2_2_,lVar11);
                }
                uVar17 = (ulong)(int)(uVar3 - 1);
                uVar12 = (ulong)(int)(uVar4 - 1);
                if (uVar17 <= uVar12) goto LAB_00101ee4;
                local_100 = (uVar10 - local_120) * 8;
                puVar1 = (ulong *)(lVar19 + uVar12 * 8);
                lVar11 = uVar17 * 8;
                local_120 = uVar17;
                goto LAB_00101c0d;
              }
              plVar15 = (long *)((long)local_88 + lVar13 * 8);
              *plVar15 = *plVar15 + 1;
              iVar5 = add_sub_mpi(&local_a8,&local_a8,&local_98,0xffffffff);
              lVar19 = local_98;
            }
          }
        }
        else {
LAB_00101dae:
          iVar5 = -0x10;
          lVar18 = local_a8;
        }
      }
LAB_001018e1:
      if (lVar18 != 0) {
        mbedtls_zeroize_and_free(lVar18,(ulong)local_a0._2_2_ << 3);
      }
      if (lVar19 != 0) {
        mbedtls_zeroize_and_free(lVar19,(ulong)local_90._2_2_ << 3);
      }
      goto LAB_00101818;
    }
    if (local_a8 != 0) {
      mbedtls_zeroize_and_free(local_a8,(ulong)local_a0._2_2_ << 3);
      goto LAB_00101818;
    }
  }
  mbedtls_platform_zeroize(&local_58,0x18);
LAB_00101864:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    iVar5 = mbedtls_mpi_shift_l(&local_78,local_100 * 8);
    if ((iVar5 != 0) ||
       (iVar5 = add_sub_mpi(&local_a8,&local_a8,&local_78,0xffffffff), lVar18 = local_a8, iVar5 != 0
       )) goto LAB_001018e1;
    iVar5 = mbedtls_mpi_cmp_int(&local_a8);
    if (iVar5 < 0) {
      iVar5 = mbedtls_mpi_copy(&local_78,&local_98);
      lVar18 = local_a8;
      if (((iVar5 != 0) ||
          (iVar5 = mbedtls_mpi_shift_l(&local_78,local_100 * 8), lVar18 = local_a8, iVar5 != 0)) ||
         (iVar5 = add_sub_mpi(&local_a8,&local_a8,&local_78,1), lVar18 = local_a8, iVar5 != 0))
      goto LAB_001018e1;
      *plVar15 = *plVar15 + -1;
    }
    local_120 = local_120 - 1;
    lVar11 = lVar11 + -8;
    if (local_120 <= uVar12) break;
LAB_00101c0d:
    lVar18 = local_a8;
    local_100 = local_100 + -8;
    uVar10 = *puVar1;
    puVar2 = (ulong *)(local_a8 + lVar11);
    puVar9 = (undefined8 *)(local_a8 + lVar11 + -8);
    plVar15 = (long *)(local_100 + (long)local_88);
    lVar13 = -1;
    uVar17 = *puVar2;
    if (uVar17 < uVar10) {
      auVar20 = __udivti3(*puVar9,uVar17,uVar10);
      lVar13 = auVar20._0_8_;
      if (auVar20._8_8_ != 0) {
        lVar13 = -1;
      }
    }
    local_58 = 0;
    *plVar15 = lVar13;
    if (local_120 != 1) {
      local_58 = *(undefined8 *)(lVar18 + -0x10 + lVar11);
    }
    local_50 = *puVar9;
    local_48 = *puVar2;
    lVar13 = *plVar15 + 1;
    do {
      *plVar15 = lVar13 + -1;
      iVar5 = mbedtls_mpi_lset(&local_78,0);
      if (iVar5 != 0) goto LAB_001018e1;
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = *(undefined8 *)(lVar19 + -8 + uVar12 * 8);
      }
      *local_78 = uVar14;
      local_78[1] = *puVar1;
      iVar5 = mbedtls_mpi_mul_int(&local_78,&local_78,*plVar15);
      if (iVar5 != 0) goto LAB_001018e1;
      iVar5 = mbedtls_mpi_cmp_mpi(&local_78);
      lVar13 = *plVar15;
    } while (0 < iVar5);
    iVar5 = mbedtls_mpi_mul_int(&local_78,&local_98);
    if (iVar5 != 0) goto LAB_001018e1;
  }
LAB_00101ee4:
  lVar18 = local_a8;
  if (param_1 != 0) {
    iVar5 = mbedtls_mpi_copy(param_1,&local_88);
    if (iVar5 != 0) goto LAB_001018e1;
    *(short *)(param_1 + 8) = *(short *)(param_3 + 8) * (short)*(undefined4 *)(param_4 + 8);
  }
  iVar5 = iVar6;
  if (param_2 != 0) {
    if (local_a0._2_2_ != 0) {
      mbedtls_mpi_core_shift_r(lVar18,local_a0._2_2_,local_108);
    }
    local_a0 = CONCAT22(local_a0._2_2_,*(undefined2 *)(param_3 + 8));
    iVar5 = mbedtls_mpi_copy(param_2,&local_a8);
    if ((iVar5 == 0) && (iVar7 = mbedtls_mpi_cmp_int(param_2,0), iVar5 = iVar6, iVar7 == 0)) {
      *(undefined2 *)(param_2 + 8) = 1;
    }
  }
  goto LAB_001018e1;
}



void mbedtls_mpi_div_int(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_mpi_div_mpi();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_mpi_mod_mpi(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_40 = 0x10001;
  local_48 = &local_38;
  iVar1 = mbedtls_mpi_cmp_mpi(param_3,&local_48);
  if (iVar1 < 0) {
    iVar1 = -10;
  }
  else {
    iVar2 = mbedtls_mpi_div_mpi(0,param_1,param_2,param_3);
    iVar1 = iVar2;
    while (iVar1 == 0) {
      local_38 = 0;
      local_40 = 0x10001;
      local_48 = &local_38;
      iVar1 = mbedtls_mpi_cmp_mpi(param_1,&local_48);
      if (-1 < iVar1) goto LAB_0010212f;
      iVar1 = add_sub_mpi(param_1,param_1,param_3,1);
    }
  }
  goto LAB_00102140;
  while (iVar1 = add_sub_mpi(param_1,param_1,param_3,0xffffffff), iVar1 == 0) {
LAB_0010212f:
    iVar3 = mbedtls_mpi_cmp_mpi(param_1,param_3);
    iVar1 = iVar2;
    if (iVar3 < 0) break;
  }
LAB_00102140:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_mpi_exp_mod_optionally_safe
                (undefined8 *param_1,long param_2,undefined8 *param_3,int param_4,
                undefined8 *param_5,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  size_t __nmemb;
  void *pvVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  undefined8 *local_58;
  ulong uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_48;
  uStack_50 = CONCAT44(uStack_50._4_4_,0x10001);
  local_48 = 0;
  iVar4 = mbedtls_mpi_cmp_mpi(param_5,&local_58);
  if ((((iVar4 < 1) || ((*(byte *)*param_5 & 1) == 0)) ||
      (iVar4 = mbedtls_mpi_cmp_mpi(param_3,&local_58), iVar4 < 0)) ||
     ((uVar6 = mbedtls_mpi_core_bitlen(*param_3,*(undefined2 *)((long)param_3 + 10)), 0x2000 < uVar6
      || (uVar6 = mbedtls_mpi_core_bitlen(*param_5,*(undefined2 *)((long)param_5 + 10)),
         0x2000 < uVar6)))) {
    uVar6 = 0xfffffffc;
  }
  else {
    if (*(short *)((long)param_3 + 10) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = mbedtls_mpi_lset(param_1,1);
        return uVar6;
      }
      goto LAB_00102544;
    }
    __nmemb = mbedtls_mpi_core_exp_mod_working_limbs(*(undefined2 *)((long)param_5 + 10));
    pvVar7 = calloc(__nmemb,8);
    if (pvVar7 == (void *)0x0) {
      uVar6 = 0xfffffff0;
      goto LAB_00102424;
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,1);
    local_58 = (undefined8 *)0x0;
    lVar1 = __nmemb * 8;
    if (param_6 == (long *)0x0) {
      uVar5 = mbedtls_mpi_core_get_mont_r2_unsafe(&local_58,param_5);
      if ((uVar5 == 0) && (uVar5 = mbedtls_mpi_copy(param_1,param_2), uVar5 == 0)) {
LAB_001022d9:
        *(undefined2 *)(param_1 + 1) = 1;
        iVar4 = mbedtls_mpi_cmp_mpi(param_1,param_5);
        if (iVar4 < 0) {
LAB_0010230c:
          uVar5 = mbedtls_mpi_grow(param_1,*(undefined2 *)((long)param_5 + 10));
          uVar6 = (ulong)uVar5;
          if (uVar5 == 0) {
            uVar8 = mbedtls_mpi_core_montmul_init(*param_5);
            mbedtls_mpi_core_to_mont_rep
                      (*param_1,*param_1,*param_5,*(undefined2 *)((long)param_5 + 10),uVar8,local_58
                       ,pvVar7);
            uVar2 = *param_1;
            if (param_4 == 0x2a2a2a2a) {
              mbedtls_mpi_core_exp_mod_unsafe
                        (uVar2,uVar2,*param_5,*(undefined2 *)((long)param_5 + 10),*param_3,
                         *(undefined2 *)((long)param_3 + 10),local_58,pvVar7);
            }
            else {
              mbedtls_mpi_core_exp_mod
                        (uVar2,uVar2,*param_5,*(undefined2 *)((long)param_5 + 10),*param_3,
                         *(undefined2 *)((long)param_3 + 10),local_58,pvVar7);
            }
            mbedtls_mpi_core_from_mont_rep
                      (*param_1,*param_1,*param_5,*(undefined2 *)((long)param_5 + 10),uVar8,pvVar7);
            if ((*(short *)(param_2 + 8) == -1) && ((*(byte *)*param_3 & 1) != 0)) {
              uVar3 = mbedtls_mpi_core_check_zero_ct(*param_1);
              *(ushort *)(param_1 + 1) = (~uVar3 & 2) - 1;
              uVar5 = add_sub_mpi(param_1,param_5,param_1,1);
              uVar6 = (ulong)uVar5;
            }
          }
        }
        else {
          uVar5 = mbedtls_mpi_mod_mpi(param_1,param_1,param_5);
          uVar6 = (ulong)uVar5;
          if (uVar5 == 0) goto LAB_0010230c;
        }
        mbedtls_zeroize_and_free(pvVar7,lVar1);
        if (param_6 != (long *)0x0) goto LAB_0010241d;
      }
      else {
        uVar6 = (ulong)uVar5;
        mbedtls_zeroize_and_free(pvVar7,lVar1);
      }
    }
    else {
      if (*param_6 == 0) {
        uVar5 = mbedtls_mpi_core_get_mont_r2_unsafe(&local_58,param_5);
        uVar6 = (ulong)uVar5;
        if (uVar5 == 0) {
          *param_6 = (long)local_58;
          param_6[1] = uStack_50;
          goto LAB_001022c2;
        }
      }
      else {
        uVar5 = mbedtls_mpi_grow(param_6,*(undefined2 *)((long)param_5 + 10));
        uVar6 = (ulong)uVar5;
        if (uVar5 == 0) {
          local_58 = (undefined8 *)*param_6;
          uStack_50 = param_6[1];
LAB_001022c2:
          uVar5 = mbedtls_mpi_copy(param_1,param_2);
          uVar6 = (ulong)uVar5;
          if (uVar5 == 0) goto LAB_001022d9;
        }
      }
      mbedtls_zeroize_and_free(pvVar7,lVar1);
LAB_0010241d:
      if (*param_6 != 0) goto LAB_00102424;
    }
    if (local_58 != (undefined8 *)0x0) {
      mbedtls_zeroize_and_free(local_58,(uStack_50 >> 0x10 & 0xffff) << 3);
    }
  }
LAB_00102424:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
LAB_00102544:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mpi_miller_rabin(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  long lStack_b8;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  undefined4 local_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  local_60 = 1;
  local_48 = 1;
  local_50 = 0x10001;
  local_58 = &local_48;
  uVar7 = add_sub_mpi(&local_a8,param_1,&local_58,0xffffffff);
  lVar3 = local_a8;
  if ((int)uVar7 == 0) {
    uVar11 = (ulong)local_a0._2_2_;
    if (uVar11 != 0) {
      uVar7 = 0;
LAB_00102759:
      uVar9 = *(ulong *)(local_a8 + uVar7 * 8);
      if (uVar9 == 0) goto LAB_00102750;
      iVar10 = 0;
      for (; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x8000000000000000) {
        iVar10 = iVar10 + 1;
      }
      uVar9 = (long)iVar10 + uVar7 * 0x40;
      goto LAB_00102771;
    }
    uVar9 = 0;
LAB_00102771:
    uVar7 = mbedtls_mpi_copy(&local_98,&local_a8);
    lVar4 = local_98;
    if ((int)uVar7 == 0) {
      if (local_90._2_2_ != 0) {
        mbedtls_mpi_core_shift_r(local_98);
      }
      if (param_2 != 0) {
        lStack_b8 = 0;
        do {
          iVar10 = 0x20;
          do {
            do {
              uVar2 = *(ushort *)(param_1 + 10);
              uVar7 = mbedtls_mpi_resize_clear(&local_78);
              if ((int)uVar7 != 0) goto LAB_00102a9f;
              if ((ulong)uVar2 != 0) {
                uVar7 = mbedtls_mpi_core_fill_random
                                  (local_78,local_70._2_2_,(ulong)uVar2 * 8,param_3,param_4);
                if ((int)uVar7 != 0) goto LAB_00102a9f;
              }
              lVar5 = local_78;
              uVar12 = (ulong)local_70._2_2_;
              uVar7 = mbedtls_mpi_core_bitlen(local_78,uVar12);
              uVar8 = mbedtls_mpi_core_bitlen(lVar3,uVar11);
              if (uVar8 < uVar7) {
                puVar1 = (ulong *)(lVar5 + -8 + uVar12 * 8);
                *puVar1 = *puVar1 & ~(-1L << ((char)uVar8 - 1U & 0x3f));
              }
              iVar10 = iVar10 + -1;
              if (iVar10 == 0) goto LAB_00102b20;
              iVar6 = mbedtls_mpi_cmp_mpi(&local_78,&local_a8);
            } while (-1 < iVar6);
            local_48 = 1;
            local_50 = 0x10001;
            local_58 = &local_48;
            iVar6 = mbedtls_mpi_cmp_mpi(&local_78,&local_58);
          } while (iVar6 < 1);
          uVar7 = mbedtls_mpi_exp_mod_optionally_safe
                            (&local_78,&local_78,&local_98,0,param_1,&local_68);
          if ((int)uVar7 != 0) goto LAB_00102a9f;
          iVar10 = mbedtls_mpi_cmp_mpi(&local_78,&local_a8);
          if (iVar10 != 0) {
            local_48 = 1;
            local_50 = 0x10001;
            local_58 = &local_48;
            iVar10 = mbedtls_mpi_cmp_mpi(&local_78,&local_58);
            if (iVar10 != 0) {
              uVar8 = 1;
              iVar10 = mbedtls_mpi_cmp_mpi(&local_78,&local_a8);
              if (1 < uVar9) {
                do {
                  iVar10 = mbedtls_mpi_cmp_mpi(&local_78,&local_a8);
                  if (iVar10 == 0) goto LAB_00102a1e;
                  uVar7 = mbedtls_mpi_mul_mpi(&local_88,&local_78,&local_78);
                  if (((int)uVar7 != 0) ||
                     (uVar7 = mbedtls_mpi_mod_mpi(&local_78,&local_88,param_1), (int)uVar7 != 0))
                  goto LAB_00102a9f;
                  local_48 = 1;
                  local_50 = 0x10001;
                  local_58 = &local_48;
                  iVar10 = mbedtls_mpi_cmp_mpi(&local_78,&local_58);
                } while ((iVar10 != 0) && (uVar8 = uVar8 + 1, uVar8 != uVar9));
                iVar10 = mbedtls_mpi_cmp_mpi(&local_78,&local_a8);
              }
              if (iVar10 == 0) {
LAB_00102a1e:
                local_48 = 1;
                local_50 = 0x10001;
                local_58 = &local_48;
                iVar10 = mbedtls_mpi_cmp_mpi(&local_78,&local_58);
                if (iVar10 != 0) goto LAB_00102a60;
              }
LAB_00102b20:
              uVar7 = 0xfffffff2;
              goto LAB_00102a9f;
            }
          }
LAB_00102a60:
          lStack_b8 = lStack_b8 + 1;
        } while (param_2 != lStack_b8);
      }
      uVar7 = 0;
    }
LAB_00102a9f:
    if (lVar3 != 0) {
      mbedtls_zeroize_and_free(lVar3,uVar11 * 8);
      uVar7 = uVar7 & 0xffffffff;
    }
    if (lVar4 != 0) {
      mbedtls_zeroize_and_free(lVar4,(ulong)local_90._2_2_ << 3);
      uVar7 = uVar7 & 0xffffffff;
    }
  }
  else {
    if (local_a8 == 0) goto LAB_001026ff;
    mbedtls_zeroize_and_free(local_a8,(ulong)local_a0._2_2_ << 3);
    uVar7 = uVar7 & 0xffffffff;
  }
  lVar4 = local_68;
  lVar3 = local_78;
  if (local_88 != 0) {
    mbedtls_zeroize_and_free(local_88,(ulong)local_80._2_2_ << 3);
    uVar7 = uVar7 & 0xffffffff;
  }
  if (lVar3 != 0) {
    mbedtls_zeroize_and_free(lVar3,(ulong)local_70._2_2_ << 3);
    uVar7 = uVar7 & 0xffffffff;
  }
  if (lVar4 != 0) {
    mbedtls_zeroize_and_free(lVar4,(ulong)local_60._2_2_ << 3);
    uVar7 = uVar7 & 0xffffffff;
  }
LAB_001026ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
LAB_00102750:
  uVar7 = uVar7 + 1;
  uVar9 = 0;
  if (uVar7 == uVar11) goto LAB_00102771;
  goto LAB_00102759;
}



undefined8 mbedtls_mpi_mod_int(ulong *param_1,long *param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_3 == 0) {
    return 0xfffffff4;
  }
  if ((long)param_3 < 0) {
    return 0xfffffff6;
  }
  uVar2 = 0;
  if ((param_3 != 1) &&
     (uVar3 = (ulong)*(ushort *)((long)param_2 + 10), *(ushort *)((long)param_2 + 10) != 0)) {
    puVar1 = (undefined8 *)*param_2;
    if (param_3 == 2) {
      *param_1 = (ulong)((uint)*puVar1 & 1);
      return 0;
    }
    do {
      uVar2 = ((ulong)*(uint *)(puVar1 + (uVar3 - 1)) |
              ((ulong)puVar1[uVar3 - 1] >> 0x20 | uVar2 << 0x20) % param_3 << 0x20) % param_3;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if (((short)param_2[1] < 0) && (uVar2 != 0)) {
      uVar2 = param_3 - uVar2;
    }
  }
  *param_1 = uVar2;
  return 0;
}



ulong mbedtls_mpi_write_string(long *param_1,int param_2,char *param_3,ulong param_4,ulong *param_5)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  char *pcVar10;
  char *__src;
  size_t __n;
  long in_FS_OFFSET;
  ulong local_70;
  long local_68;
  undefined4 local_60;
  long *local_58;
  undefined4 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0xe < param_2 - 2U) {
    uVar5 = 0xfffffffc;
    goto LAB_00102d53;
  }
  uVar4 = mbedtls_mpi_core_bitlen(*param_1,*(undefined2 *)((long)param_1 + 10));
  uVar5 = uVar4;
  if (3 < param_2) {
    uVar5 = uVar4 >> 2;
    if (param_2 != 0x10) {
      uVar5 = uVar4 >> 1;
    }
  }
  uVar5 = uVar5 + 4 & 0xfffffffffffffffe;
  if (param_4 < uVar5) {
    *param_5 = uVar5;
    uVar5 = 0xfffffff8;
    goto LAB_00102d53;
  }
  local_60 = 1;
  local_68 = 0;
  pcVar9 = param_3;
  if ((short)param_1[1] == -1) {
    param_4 = param_4 - 1;
    pcVar9 = param_3 + 1;
    *param_3 = '-';
  }
  if (param_2 == 0x10) {
    uVar5 = (ulong)*(ushort *)((long)param_1 + 10);
    if (uVar5 == 0) {
      *pcVar9 = '\0';
      *param_5 = (ulong)(pcVar9 + (1 - (long)param_3));
      uVar5 = 0;
      goto LAB_00102d53;
    }
    lVar8 = uVar5 * 8;
    bVar2 = false;
    pcVar10 = pcVar9;
    do {
      lVar8 = lVar8 + -8;
      lVar7 = uVar5 + 8;
      iVar6 = 0x38;
      pcVar9 = pcVar10;
      do {
        uVar4 = *(ulong *)(*param_1 + lVar8) >> ((byte)iVar6 & 0x3f);
        uVar3 = (uint)uVar4;
        if ((((uVar4 & 0xff) != 0) || (bVar2)) || (pcVar10 = pcVar9, lVar7 == 2)) {
          pcVar10 = pcVar9 + 2;
          bVar2 = true;
          cVar1 = "0123456789ABCDEF"[(int)(uVar3 & 0xff) >> 4];
          pcVar9[1] = "0123456789ABCDEF"[uVar3 & 0xf];
          *pcVar9 = cVar1;
        }
        iVar6 = iVar6 + -8;
        lVar7 = lVar7 + -1;
        pcVar9 = pcVar10;
      } while (iVar6 != -8);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
LAB_00102d1c:
    *pcVar10 = '\0';
    *param_5 = (ulong)(pcVar10 + (1 - (long)param_3));
    uVar5 = 0;
  }
  else {
    uVar5 = mbedtls_mpi_copy(&local_68,param_1);
    if ((int)uVar5 == 0) {
      if ((short)local_60 == -1) {
        local_60 = CONCAT22(local_60._2_2_,1);
      }
      __src = pcVar9 + param_4;
      do {
        if (__src == pcVar9) {
          uVar5 = 0xfffffff8;
          goto LAB_00102d38;
        }
        uVar5 = mbedtls_mpi_mod_int(&local_70,&local_68,(long)param_2);
        if ((int)uVar5 != 0) goto LAB_00102d38;
        local_50 = 0x10001;
        local_58 = &local_48;
        local_48 = (long)param_2;
        uVar5 = mbedtls_mpi_div_mpi(&local_68,0,&local_68,&local_58);
        if ((int)uVar5 != 0) goto LAB_00102d38;
        __src = __src + -1;
        local_48 = 0;
        local_50 = 0x10001;
        cVar1 = (char)local_70 + '7';
        if (local_70 < 10) {
          cVar1 = (char)local_70 + '0';
        }
        *__src = cVar1;
        local_58 = &local_48;
        iVar6 = mbedtls_mpi_cmp_mpi(&local_68,&local_58);
      } while (iVar6 != 0);
      __n = (long)(pcVar9 + param_4) - (long)__src;
      pcVar10 = pcVar9 + __n;
      memmove(pcVar9,__src,__n);
      goto LAB_00102d1c;
    }
  }
LAB_00102d38:
  if (local_68 != 0) {
    mbedtls_zeroize_and_free(local_68,(ulong)local_60._2_2_ << 3);
    uVar5 = uVar5 & 0xffffffff;
  }
LAB_00102d53:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int mbedtls_mpi_write_file(char *param_1,undefined8 param_2,int param_3,FILE *param_4)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  undefined1 local_a00 [8];
  char local_9f8 [2488];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 - 2U < 0xf) {
    pcVar6 = local_9f8;
    for (lVar5 = 0x136; lVar5 != 0; lVar5 = lVar5 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6[4] = '\0';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      pcVar6 = pcVar6 + 8;
    }
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    iVar1 = mbedtls_mpi_write_string(param_2,param_3,local_9f8,0x9b2,local_a00);
    if (iVar1 == 0) {
      if (param_1 == (char *)0x0) {
        sVar2 = 0;
        param_1 = "";
      }
      else {
        sVar2 = strlen(param_1);
      }
      sVar3 = strlen(local_9f8);
      (local_9f8 + sVar3)[0] = '\r';
      (local_9f8 + sVar3)[1] = '\n';
      if (param_4 == (FILE *)0x0) {
        __printf_chk(2,&_LC3,param_1,local_9f8);
      }
      else {
        sVar4 = fwrite(param_1,1,sVar2,param_4);
        if (sVar4 == sVar2) {
          sVar2 = fwrite(local_9f8,1,sVar3 + 2,param_4);
          if (sVar2 == sVar3 + 2) goto LAB_00102fb5;
        }
        iVar1 = -2;
      }
    }
  }
  else {
    iVar1 = -4;
  }
LAB_00102fb5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mpi_check_small_factors(undefined8 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_40;
  ulong *local_38;
  undefined4 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)*param_1 & 1) == 0) {
LAB_001030e7:
    uVar3 = 0xfffffff2;
  }
  else {
    pbVar4 = &small_prime_gaps;
    uVar5 = 3;
    do {
      iVar2 = (int)uVar5;
      uVar3 = mbedtls_mpi_mod_int();
      if ((int)uVar3 != 0) break;
      if (local_40 == 0) {
        local_38 = &local_28;
        local_30 = 0x10001;
        local_28 = uVar5;
        iVar2 = mbedtls_mpi_cmp_mpi(param_1,&local_38);
        if (iVar2 != 0) goto LAB_001030e7;
        uVar3 = 1;
        break;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar5 = (ulong)(iVar2 + (uint)bVar1);
    } while (pbVar4 != (byte *)0x1050c7);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_mpi_exp_mod(void)

{
  mbedtls_mpi_exp_mod_optionally_safe();
  return;
}



void mbedtls_mpi_exp_mod_unsafe(void)

{
  mbedtls_mpi_exp_mod_optionally_safe();
  return;
}



ulong mbedtls_mpi_gcd(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  long local_78;
  undefined2 local_70;
  ushort uStack_6e;
  byte *local_68;
  undefined4 local_60;
  undefined8 *puStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_70 = 1;
  uStack_6e = 0;
  local_68 = (byte *)0x0;
  local_60 = 1;
  uVar3 = mbedtls_mpi_copy(&local_78);
  if ((int)uVar3 == 0) {
    uVar3 = mbedtls_mpi_copy(&local_68);
    pbVar7 = local_68;
    if ((int)uVar3 == 0) {
      if (uStack_6e != 0) {
        uVar3 = 0;
LAB_00103229:
        uVar6 = *(ulong *)(local_78 + uVar3 * 8);
        if (uVar6 == 0) goto LAB_00103220;
        iVar2 = 0;
        for (; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x8000000000000000) {
          iVar2 = iVar2 + 1;
        }
        uVar6 = (long)iVar2 + uVar3 * 0x40;
        goto LAB_00103241;
      }
      uVar6 = 0;
LAB_00103241:
      if ((ulong)local_60._2_2_ == 0) {
LAB_00103453:
        uVar3 = mbedtls_mpi_copy(param_1,param_2);
      }
      else {
        uVar3 = 0;
LAB_0010326d:
        uVar4 = *(ulong *)(local_68 + uVar3 * 8);
        if (uVar4 == 0) goto LAB_00103260;
        iVar2 = 0;
        for (; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x8000000000000000) {
          iVar2 = iVar2 + 1;
        }
        uVar3 = uVar3 * 0x40 + (long)iVar2;
        if (uVar3 == 0) {
LAB_00103447:
          uVar6 = 0;
          if ((*local_68 & 1) != 0) goto LAB_00103295;
          goto LAB_00103453;
        }
        if (uVar3 <= uVar6) {
          uVar6 = uVar3;
        }
LAB_00103295:
        local_60 = CONCAT22(local_60._2_2_,1);
        local_70 = 1;
        while( true ) {
          uStack_48 = 0;
          uStack_50 = 0x10001;
          puStack_58 = &uStack_48;
          iVar2 = mbedtls_mpi_cmp_mpi(&local_78,&puStack_58);
          if (iVar2 == 0) break;
          uVar3 = (ulong)uStack_6e;
          if (uVar3 != 0) {
            uVar4 = 0;
LAB_00103301:
            uVar1 = *(ulong *)(local_78 + uVar4 * 8);
            if (uVar1 == 0) goto LAB_001032f8;
            iVar2 = 0;
            for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
              iVar2 = iVar2 + 1;
            }
            lVar5 = (long)iVar2 + uVar4 * 0x40;
LAB_00103319:
            mbedtls_mpi_core_shift_r(local_78,uVar3,lVar5);
          }
          uVar3 = (ulong)local_60._2_2_;
          if (uVar3 != 0) {
            uVar4 = 0;
LAB_00103341:
            uVar1 = *(ulong *)(local_68 + uVar4 * 8);
            if (uVar1 == 0) goto LAB_00103338;
            iVar2 = 0;
            for (; (uVar1 & 1) == 0; uVar1 = uVar1 >> 1 | 0x8000000000000000) {
              iVar2 = iVar2 + 1;
            }
            lVar5 = (long)iVar2 + uVar4 * 0x40;
LAB_00103359:
            mbedtls_mpi_core_shift_r(local_68,uVar3,lVar5);
          }
          iVar2 = mbedtls_mpi_cmp_mpi(&local_78,&local_68);
          if (iVar2 < 0) {
            uVar3 = mbedtls_mpi_sub_abs(&local_68,&local_68,&local_78);
            pbVar7 = local_68;
            if ((int)uVar3 != 0) goto LAB_001033c5;
            if (local_60._2_2_ != 0) {
              mbedtls_mpi_core_shift_r(local_68,local_60._2_2_,1);
            }
          }
          else {
            uVar3 = mbedtls_mpi_sub_abs(&local_78,&local_78,&local_68);
            pbVar7 = local_68;
            if ((int)uVar3 != 0) goto LAB_001033c5;
            if (uStack_6e != 0) {
              mbedtls_mpi_core_shift_r(local_78,uStack_6e,1);
            }
          }
        }
        uVar3 = mbedtls_mpi_shift_l(&local_68,uVar6);
        pbVar7 = local_68;
        if ((int)uVar3 == 0) {
          uVar3 = mbedtls_mpi_copy(param_1,&local_68);
          pbVar7 = local_68;
        }
      }
    }
LAB_001033c5:
    if (local_78 != 0) {
      mbedtls_zeroize_and_free(local_78,(ulong)uStack_6e << 3);
      uVar3 = uVar3 & 0xffffffff;
    }
    if (pbVar7 != (byte *)0x0) {
      mbedtls_zeroize_and_free(pbVar7,(ulong)local_60._2_2_ << 3);
      uVar3 = uVar3 & 0xffffffff;
    }
  }
  else if (local_78 != 0) {
    mbedtls_zeroize_and_free(local_78,(ulong)uStack_6e << 3);
    uVar3 = uVar3 & 0xffffffff;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
LAB_00103220:
  uVar3 = uVar3 + 1;
  uVar6 = 0;
  if (uStack_6e == uVar3) goto LAB_00103241;
  goto LAB_00103229;
LAB_00103260:
  uVar3 = uVar3 + 1;
  if (uVar3 == local_60._2_2_) goto LAB_00103447;
  goto LAB_0010326d;
LAB_001032f8:
  uVar4 = uVar4 + 1;
  lVar5 = 0;
  if (uVar4 == uVar3) goto LAB_00103319;
  goto LAB_00103301;
LAB_00103338:
  uVar4 = uVar4 + 1;
  lVar5 = 0;
  if (uVar3 == uVar4) goto LAB_00103359;
  goto LAB_00103341;
}



void mbedtls_mpi_fill_random
               (undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = mbedtls_mpi_resize_clear(param_1,(ulong)((param_2 & 7) != 0) + (param_2 >> 3));
  if ((iVar1 == 0) && (param_2 != 0)) {
    mbedtls_mpi_core_fill_random
              (*param_1,*(undefined2 *)((long)param_1 + 10),param_2,param_3,param_4);
    return;
  }
  return;
}



undefined8
mbedtls_mpi_random(undefined8 *param_1,long param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long *local_48;
  undefined4 local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0) {
LAB_001035b0:
    uVar2 = 0xfffffffc;
  }
  else {
    local_48 = &local_38;
    local_40 = 0x10001;
    local_38 = param_2;
    iVar1 = mbedtls_mpi_cmp_mpi(param_3,&local_48);
    if (iVar1 < 1) goto LAB_001035b0;
    uVar2 = mbedtls_mpi_resize_clear(param_1,*(undefined2 *)((long)param_3 + 10));
    if ((int)uVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = mbedtls_mpi_core_random
                          (*param_1,param_2,*param_3,*(undefined2 *)((long)param_1 + 10),param_4,
                           param_5);
        return uVar2;
      }
      goto LAB_001035b7;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
LAB_001035b7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_mpi_inv_mod(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte **ppbVar2;
  byte **ppbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  long in_FS_OFFSET;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  byte *local_c8;
  undefined4 local_c0;
  byte *local_b8;
  undefined4 local_b0;
  byte *local_a8;
  undefined4 local_a0;
  long local_98;
  undefined4 local_90;
  byte *local_88;
  undefined4 local_80;
  byte *local_78;
  undefined4 local_70;
  byte *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 1;
  local_50 = 0x10001;
  local_58 = &local_48;
  iVar5 = mbedtls_mpi_cmp_mpi(param_3,&local_58);
  if (iVar5 < 1) {
    iVar5 = -4;
    goto LAB_001037dd;
  }
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = (byte *)0x0;
  local_c0 = 1;
  local_b8 = (byte *)0x0;
  local_b0 = 1;
  local_a8 = (byte *)0x0;
  local_a0 = 1;
  local_e8 = 0;
  local_e0 = 1;
  local_98 = 0;
  local_90 = 1;
  local_88 = (byte *)0x0;
  local_80 = 1;
  local_78 = (byte *)0x0;
  local_70 = 1;
  local_68 = (byte *)0x0;
  local_60 = 1;
  iVar5 = mbedtls_mpi_gcd(&local_e8,param_2,param_3);
  if (iVar5 == 0) {
    local_48 = 1;
    iVar5 = -0xe;
    local_50 = 0x10001;
    local_58 = &local_48;
    iVar6 = mbedtls_mpi_cmp_mpi(&local_e8,&local_58);
    if (iVar6 == 0) {
      iVar5 = mbedtls_mpi_mod_mpi(&local_d8,param_2,param_3);
      if (iVar5 == 0) {
        iVar5 = mbedtls_mpi_copy(&local_c8,&local_d8);
        if (iVar5 == 0) {
          iVar5 = mbedtls_mpi_copy(&local_98,param_3);
          if (iVar5 == 0) {
            iVar5 = mbedtls_mpi_copy(&local_88,param_3);
            if (iVar5 == 0) {
              iVar5 = mbedtls_mpi_lset(&local_b8,1);
              if (iVar5 == 0) {
                iVar5 = mbedtls_mpi_lset(&local_a8,0);
                if (iVar5 == 0) {
                  iVar5 = mbedtls_mpi_lset(&local_78,0);
                  if (iVar5 == 0) {
                    iVar5 = mbedtls_mpi_lset(&local_68,1);
                    pbVar1 = local_c8;
                    if (iVar5 == 0) {
                      do {
                        while (pbVar4 = local_88, (*pbVar1 & 1) == 0) {
                          if (local_c0._2_2_ != 0) {
                            mbedtls_mpi_core_shift_r(pbVar1,local_c0._2_2_,1);
                          }
                          if ((((*local_b8 & 1) != 0) || ((*local_a8 & 1) != 0)) &&
                             ((iVar5 = add_sub_mpi(&local_b8,&local_b8,&local_98,1), iVar5 != 0 ||
                              (iVar5 = add_sub_mpi(&local_a8,&local_a8,&local_d8,0xffffffff),
                              iVar5 != 0)))) goto LAB_0010387f;
                          if (local_b0._2_2_ != 0) {
                            mbedtls_mpi_core_shift_r(local_b8,local_b0._2_2_,1);
                          }
                          if (local_a0._2_2_ != 0) {
                            mbedtls_mpi_core_shift_r(local_a8,local_a0._2_2_,1);
                          }
                        }
                        while ((*pbVar4 & 1) == 0) {
                          if (local_80._2_2_ != 0) {
                            mbedtls_mpi_core_shift_r(pbVar4,local_80._2_2_,1);
                          }
                          if ((((*local_78 & 1) != 0) || ((*local_68 & 1) != 0)) &&
                             ((iVar5 = add_sub_mpi(&local_78,&local_78,&local_98,1), iVar5 != 0 ||
                              (iVar5 = add_sub_mpi(&local_68,&local_68,&local_d8,0xffffffff),
                              iVar5 != 0)))) goto LAB_0010387f;
                          if (local_70._2_2_ != 0) {
                            mbedtls_mpi_core_shift_r(local_78,local_70._2_2_,1);
                          }
                          if (local_60._2_2_ != 0) {
                            mbedtls_mpi_core_shift_r(local_68,local_60._2_2_,1);
                          }
                        }
                        iVar5 = mbedtls_mpi_cmp_mpi(&local_c8,&local_88);
                        if (iVar5 < 0) {
                          iVar5 = add_sub_mpi(&local_88,&local_88,&local_c8,0xffffffff);
                          if (iVar5 != 0) goto LAB_0010387f;
                          iVar5 = add_sub_mpi(&local_78,&local_78,&local_b8,0xffffffff);
                          ppbVar2 = &local_a8;
                          ppbVar3 = &local_68;
                        }
                        else {
                          iVar5 = add_sub_mpi(&local_c8,&local_c8,&local_88,0xffffffff);
                          if (iVar5 != 0) goto LAB_0010387f;
                          iVar5 = add_sub_mpi(&local_b8,&local_b8,&local_78,0xffffffff);
                          ppbVar2 = &local_68;
                          ppbVar3 = &local_a8;
                        }
                        if ((iVar5 != 0) ||
                           (iVar5 = add_sub_mpi(ppbVar3,ppbVar3,ppbVar2,0xffffffff), iVar5 != 0))
                        goto LAB_0010387f;
                        iVar5 = mbedtls_mpi_cmp_int(&local_c8,0);
                        pbVar1 = local_c8;
                      } while (iVar5 != 0);
                      do {
                        iVar5 = mbedtls_mpi_cmp_int(&local_78,0);
                        if (-1 < iVar5) goto LAB_00103c16;
                        iVar5 = add_sub_mpi(&local_78,&local_78,param_3,1);
                      } while (iVar5 == 0);
                    }
                  }
                }
              }
            }
          }
        }
        goto LAB_0010387f;
      }
      if (local_d8 != 0) {
        mbedtls_zeroize_and_free(local_d8,(ulong)local_d0._2_2_ << 3);
      }
    }
  }
  goto LAB_00103735;
  while (iVar5 = add_sub_mpi(&local_78,&local_78,param_3,0xffffffff), iVar5 == 0) {
LAB_00103c16:
    iVar5 = mbedtls_mpi_cmp_mpi(&local_78,param_3);
    if (iVar5 < 0) {
      iVar5 = mbedtls_mpi_copy(param_1,&local_78);
      break;
    }
  }
LAB_0010387f:
  pbVar1 = local_c8;
  if (local_d8 != 0) {
    mbedtls_zeroize_and_free(local_d8,(ulong)local_d0._2_2_ << 3);
  }
  if (pbVar1 != (byte *)0x0) {
    mbedtls_zeroize_and_free(pbVar1,(ulong)local_c0._2_2_ << 3);
  }
  if (local_b8 != (byte *)0x0) {
    mbedtls_zeroize_and_free(local_b8,(ulong)local_b0._2_2_ << 3);
  }
LAB_00103735:
  if (local_a8 != (byte *)0x0) {
    mbedtls_zeroize_and_free(local_a8,(ulong)local_a0._2_2_ << 3);
  }
  if (local_e8 != 0) {
    mbedtls_zeroize_and_free(local_e8,(ulong)local_e0._2_2_ << 3);
  }
  if (local_98 != 0) {
    mbedtls_zeroize_and_free(local_98,(ulong)local_90._2_2_ << 3);
  }
  if (local_88 != (byte *)0x0) {
    mbedtls_zeroize_and_free(local_88,(ulong)local_80._2_2_ << 3);
  }
  if (local_78 != (byte *)0x0) {
    mbedtls_zeroize_and_free(local_78,(ulong)local_70._2_2_ << 3);
  }
  if (local_68 != (byte *)0x0) {
    mbedtls_zeroize_and_free(local_68,(ulong)local_60._2_2_ << 3);
  }
LAB_001037dd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_mpi_is_prime_ext
                (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined2 local_50;
  undefined2 local_4e;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ppuVar4 = &local_48;
  local_50 = 1;
  local_4e = *(undefined2 *)((long)param_1 + 10);
  local_38 = 0;
  local_58 = *param_1;
  local_40 = 0x10001;
  local_48 = &local_38;
  iVar1 = mbedtls_mpi_cmp_mpi(&local_58,ppuVar4);
  if (iVar1 != 0) {
    local_38 = 1;
    iVar1 = mbedtls_mpi_cmp_mpi(&local_58,ppuVar4);
    if (iVar1 != 0) {
      local_38 = 2;
      iVar1 = mbedtls_mpi_cmp_mpi(&local_58,ppuVar4);
      uVar3 = 0;
      if (iVar1 != 0) {
        uVar2 = mpi_check_small_factors(&local_58);
        if (uVar2 == 0) {
          uVar3 = mpi_miller_rabin(&local_58,(long)param_2,param_3,param_4);
        }
        else {
          uVar3 = (ulong)uVar2;
          if (uVar2 == 1) {
            uVar3 = 0;
          }
        }
      }
      goto LAB_00103d4a;
    }
  }
  uVar3 = 0xfffffff2;
LAB_00103d4a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_mpi_gen_prime
                (long *param_1,ulong param_2,uint param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x1ffd < param_2 - 3) {
    uVar2 = 0xfffffffc;
    goto LAB_00103efe;
  }
  lVar3 = (ulong)((param_2 & 0x3f) != 0) + (param_2 >> 6);
  local_68 = 0;
  local_60 = 1;
  if ((param_3 & 2) == 0) {
    cVar1 = '\x02';
    if (((param_2 < 0x514) && (cVar1 = '\x03', param_2 < 0x352)) &&
       ((cVar1 = '\x04', param_2 < 0x28a &&
        ((cVar1 = '\b', param_2 < 0x15e && (cVar1 = '\f', param_2 < 0xfa)))))) {
      cVar1 = (-(param_2 < 0x96) & 9U) + 0x12;
    }
  }
  else {
    cVar1 = '\x04';
    if ((((param_2 < 0x5aa) && (cVar1 = '\x05', param_2 < 0x47e)) &&
        (cVar1 = '\x06', param_2 < 1000)) &&
       (((cVar1 = '\a', param_2 < 0x352 && (cVar1 = '\b', param_2 < 0x2ee)) &&
        ((cVar1 = '\r', param_2 < 500 && (cVar1 = '\x1c', param_2 < 0xfa)))))) {
      cVar1 = (-(param_2 < 0x96) & 0xbU) + 0x28;
    }
  }
  do {
    do {
      uVar2 = mbedtls_mpi_resize_clear(param_1,lVar3);
      if (((int)uVar2 != 0) ||
         ((lVar3 != 0 &&
          (uVar2 = mbedtls_mpi_core_fill_random
                             (*param_1,*(undefined2 *)((long)param_1 + 10),lVar3 * 8,param_4,param_5
                             ), (int)uVar2 != 0)))) goto LAB_00103ee0;
      puVar4 = (ulong *)*param_1;
    } while (puVar4[lVar3 + -1] < 0xb504f333f9de6485);
    if ((param_2 < (ulong)(lVar3 * 0x40)) && (*(short *)((long)param_1 + 10) != 0)) {
      mbedtls_mpi_core_shift_r(puVar4,*(short *)((long)param_1 + 10),lVar3 * 0x40 - param_2);
      puVar4 = (ulong *)*param_1;
    }
    uVar2 = *puVar4;
    *puVar4 = uVar2 | 1;
    if ((param_3 & 1) != 0) {
      *puVar4 = uVar2 | 3;
      uVar2 = mbedtls_mpi_mod_int(&local_70,param_1,3);
      if ((int)uVar2 != 0) break;
      if (local_70 == 0) {
        local_48 = 8;
LAB_00104190:
        local_58 = &local_48;
        local_50 = 0x10001;
        uVar2 = add_sub_mpi(param_1,param_1,&local_58,1);
        if ((int)uVar2 != 0) break;
      }
      else if (local_70 == 1) {
        local_48 = 4;
        goto LAB_00104190;
      }
      uVar2 = mbedtls_mpi_copy(&local_68,param_1);
      if ((int)uVar2 == 0) {
        if (local_60._2_2_ != 0) {
          mbedtls_mpi_core_shift_r(local_68,local_60._2_2_,1);
        }
        goto LAB_001040d5;
      }
      break;
    }
    uVar2 = mbedtls_mpi_is_prime_ext(param_1,cVar1,param_4,param_5);
  } while ((int)uVar2 == -0xe);
  goto LAB_00103ee0;
  while( true ) {
    local_48 = 0xc;
    local_50 = 0x10001;
    local_58 = &local_48;
    uVar2 = add_sub_mpi(param_1,param_1,&local_58,1);
    if ((int)uVar2 != 0) break;
    local_48 = 6;
    local_50 = 0x10001;
    local_58 = &local_48;
    uVar2 = add_sub_mpi(&local_68,&local_68,&local_58,1);
    if ((int)uVar2 != 0) break;
LAB_001040d5:
    uVar2 = mpi_check_small_factors(param_1);
    if ((((((int)uVar2 == 0) && (uVar2 = mpi_check_small_factors(&local_68), (int)uVar2 == 0)) &&
         (uVar2 = mpi_miller_rabin(param_1,cVar1,param_4,param_5), (int)uVar2 == 0)) &&
        (uVar2 = mpi_miller_rabin(&local_68,cVar1,param_4,param_5), (int)uVar2 == 0)) ||
       ((int)uVar2 != -0xe)) break;
  }
LAB_00103ee0:
  if (local_68 != 0) {
    mbedtls_zeroize_and_free(local_68,(ulong)local_60._2_2_ << 3);
    uVar2 = uVar2 & 0xffffffff;
  }
LAB_00103efe:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_mpi_self_test(int param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long in_FS_OFFSET;
  long *local_d0;
  long local_b8;
  undefined4 local_b0;
  long local_a8;
  undefined4 local_a0;
  long local_98;
  undefined4 local_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  local_b0 = 1;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  local_50 = 1;
  iVar2 = mbedtls_mpi_read_string
                    (&local_b8,0x10,
                     "EFE021C2645FD1DC586E69184AF4A31ED5F53E93B5F123FA41680867BA110131944FE7952E2517337780CB0DB80E61AAE7C8DDC6C5C6AADEB34EB38A2F40D5E6"
                    );
  if (iVar2 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = 0;
    lVar8 = 0;
    lVar3 = 0;
    goto joined_r0x00104431;
  }
  iVar2 = mbedtls_mpi_read_string
                    (&local_a8,0x10,
                     "B2E7EFD37075B9F03FF989C7C5051C2034D2A323810251127E7BF8625A4F49A5F3E27F4DA8BD59C47D6DAABA4C8127BD5B5C25763222FEFCCFC38B832366C29E"
                    );
  if (iVar2 == 0) {
    iVar2 = mbedtls_mpi_read_string
                      (&local_98,0x10,
                       "0066A198186C18C10B2F5ED9B522752A9830B69916E535C8F047518A889A43A594B6BED27A168D31D4A52F88925AA8F5"
                      );
    if (iVar2 != 0) goto LAB_0010441e;
    iVar2 = mbedtls_mpi_mul_mpi(&local_88,&local_b8,&local_98);
    if (iVar2 != 0) {
      lVar4 = 0;
      lVar5 = local_88;
      lVar6 = 0;
      lVar8 = 0;
      lVar3 = local_a8;
      goto joined_r0x00104431;
    }
    iVar2 = mbedtls_mpi_read_string
                      (&local_68,0x10,
                       "602AB7ECA597A3D6B56FF9829A5E8B859E857EA95A03512E2BAE7391688D264AA5663B0341DB9CCFD2C4C5F421FEC8148001B72E848A38CAE1C65F78E56ABDEFE12D3C039B8A02D6BE593F0BBBDA56F1ECF677152EF804370C1A305CAF3B5BF130879B56C61DE584A0F53A2447A51E"
                      );
    if (iVar2 != 0) {
      lVar4 = 0;
      lVar5 = local_88;
      lVar6 = 0;
      lVar8 = local_68;
      lVar3 = local_a8;
      goto joined_r0x00104431;
    }
    if (param_1 != 0) {
      __printf_chk(2,"  MPI test #1 (mul_mpi): ");
      iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
      if (iVar2 == 0) {
        puts("passed");
        iVar2 = mbedtls_mpi_div_mpi(&local_88,&local_78,&local_b8,&local_98);
        if (iVar2 == 0) goto LAB_001045e0;
        lVar4 = 0;
        lVar3 = local_a8;
        lVar5 = local_88;
        lVar6 = local_78;
        lVar8 = local_68;
      }
      else {
        lVar4 = 0;
        iVar2 = 1;
        puts("failed");
        lVar3 = local_a8;
        lVar5 = local_88;
        lVar6 = 0;
        lVar8 = local_68;
      }
      goto LAB_00104439;
    }
    iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
    if (iVar2 != 0) {
      lVar4 = 0;
      iVar2 = 1;
      lVar3 = local_a8;
      lVar5 = local_88;
      lVar6 = 0;
      lVar8 = local_68;
      goto LAB_001042e7;
    }
    iVar2 = mbedtls_mpi_div_mpi(&local_88,&local_78,&local_b8,&local_98);
    if (iVar2 != 0) {
      lVar4 = 0;
      lVar3 = local_a8;
      lVar5 = local_88;
      lVar6 = local_78;
      lVar8 = local_68;
      goto LAB_001042e7;
    }
LAB_001045e0:
    local_d0 = &local_78;
    iVar2 = mbedtls_mpi_read_string(&local_68,0x10,"256567336059E52CAE22925474705F39A94");
    if (iVar2 != 0) {
      lVar4 = 0;
      lVar5 = local_88;
      lVar6 = local_78;
      lVar8 = local_68;
      lVar3 = local_a8;
      goto joined_r0x00104431;
    }
    iVar2 = mbedtls_mpi_read_string
                      (&local_58,0x10,
                       "6613F26162223DF488E9CD48CC132C7A0AC93C701B001B092E4E5B9F73BCD27B9EE50D0657C77F374E903CDFA4C642"
                      );
    lVar4 = local_58;
    lVar3 = local_a8;
    lVar5 = local_88;
    lVar6 = local_78;
    lVar8 = local_68;
    if (iVar2 != 0) goto joined_r0x00104431;
    if (param_1 == 0) {
      iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
      if ((iVar2 != 0) || (iVar2 = mbedtls_mpi_cmp_mpi(local_d0,&local_58), iVar2 != 0)) {
        iVar2 = 1;
        lVar5 = local_88;
        lVar6 = local_78;
        lVar8 = local_68;
        goto LAB_001042e7;
      }
      iVar2 = mbedtls_mpi_exp_mod_optionally_safe(&local_88,&local_b8,&local_a8,0,&local_98,0);
      lVar5 = local_88;
      lVar6 = local_78;
      lVar8 = local_68;
      if (iVar2 != 0) goto LAB_001042e7;
      iVar2 = mbedtls_mpi_read_string
                        (&local_68,0x10,
                         "36E139AEA55215609D2816998ED020BBBD96C37890F65171D948E9BC7CBAA4D9325D24D6A3C12710F10A09FA08AB87"
                        );
      lVar5 = local_88;
      lVar6 = local_78;
      lVar8 = local_68;
      if (iVar2 == 0) {
        iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
        if (iVar2 == 0) {
          iVar2 = mbedtls_mpi_inv_mod(&local_88,&local_b8,&local_98);
          lVar5 = local_88;
          lVar6 = local_78;
          lVar8 = local_68;
          if (iVar2 != 0) goto LAB_001042e7;
          iVar2 = mbedtls_mpi_read_string
                            (&local_68,0x10,
                             "003A0AAEDD7E784FC07D8F9EC6E3BFD5C3DBA76456363A10869622EAC2DD84ECC5B8A74DAC4D09E03B5E0BE779F2DF61"
                            );
          lVar5 = local_88;
          lVar6 = local_78;
          lVar8 = local_68;
          if (iVar2 != 0) goto joined_r0x00104431;
          iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
          if (iVar2 == 0) goto LAB_00104779;
        }
        iVar2 = 1;
        lVar5 = local_88;
        lVar6 = local_78;
        lVar8 = local_68;
        goto LAB_001042e7;
      }
      goto joined_r0x00104431;
    }
    __printf_chk(2,"  MPI test #2 (div_mpi): ");
    iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
    if ((iVar2 == 0) && (iVar2 = mbedtls_mpi_cmp_mpi(local_d0,&local_58), iVar2 == 0)) {
      puts("passed");
      iVar2 = mbedtls_mpi_exp_mod_optionally_safe(&local_88,&local_b8,&local_a8,0,&local_98,0);
      lVar5 = local_88;
      lVar6 = local_78;
      lVar8 = local_68;
      if (iVar2 == 0) {
        iVar2 = mbedtls_mpi_read_string
                          (&local_68,0x10,
                           "36E139AEA55215609D2816998ED020BBBD96C37890F65171D948E9BC7CBAA4D9325D24D6A3C12710F10A09FA08AB87"
                          );
        lVar5 = local_88;
        lVar6 = local_78;
        lVar8 = local_68;
        if (iVar2 != 0) goto joined_r0x00104431;
        __printf_chk(2,"  MPI test #3 (exp_mod): ");
        iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
        if (iVar2 == 0) {
          puts("passed");
          iVar2 = mbedtls_mpi_inv_mod(&local_88,&local_b8,&local_98);
          lVar5 = local_88;
          lVar6 = local_78;
          lVar8 = local_68;
          if (iVar2 != 0) goto LAB_00104439;
          iVar2 = mbedtls_mpi_read_string
                            (&local_68,0x10,
                             "003A0AAEDD7E784FC07D8F9EC6E3BFD5C3DBA76456363A10869622EAC2DD84ECC5B8A74DAC4D09E03B5E0BE779F2DF61"
                            );
          lVar5 = local_88;
          lVar6 = local_78;
          lVar8 = local_68;
          if (iVar2 != 0) goto joined_r0x00104431;
          __printf_chk(2,"  MPI test #4 (inv_mod): ");
          iVar2 = mbedtls_mpi_cmp_mpi(&local_88,&local_68);
          if (iVar2 == 0) {
            puts("passed");
            __printf_chk(2,"  MPI test #5 (simple gcd): ");
LAB_00104779:
            piVar7 = &gcd_pairs;
            iVar1 = 0;
            do {
              iVar2 = mbedtls_mpi_lset(&local_88,(long)*piVar7);
              lVar5 = local_88;
              lVar6 = local_78;
              lVar8 = local_68;
              if (((iVar2 != 0) ||
                  (iVar2 = mbedtls_mpi_lset(local_d0,(long)piVar7[1]), lVar5 = local_88,
                  lVar6 = local_78, lVar8 = local_68, iVar2 != 0)) ||
                 (iVar2 = mbedtls_mpi_gcd(&local_b8,&local_88,local_d0), lVar5 = local_88,
                 lVar6 = local_78, lVar8 = local_68, iVar2 != 0)) goto joined_r0x00104431;
              iVar2 = mbedtls_mpi_cmp_int(&local_b8,(long)piVar7[2]);
              lVar8 = local_68;
              lVar6 = local_78;
              lVar5 = local_88;
              if (iVar2 != 0) {
                iVar2 = 1;
                if (param_1 == 0) goto LAB_001042e7;
                __printf_chk(2,"failed at %d\n",iVar1);
                goto LAB_00104439;
              }
              iVar1 = iVar1 + 1;
              piVar7 = piVar7 + 3;
            } while (iVar1 != 3);
            iVar2 = 0;
            if (param_1 != 0) {
              puts("passed");
            }
            goto LAB_001042e7;
          }
        }
        goto LAB_00104a56;
      }
    }
    else {
LAB_00104a56:
      iVar2 = 1;
      puts("failed");
      lVar5 = local_88;
      lVar6 = local_78;
      lVar8 = local_68;
    }
  }
  else {
LAB_0010441e:
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = 0;
    lVar8 = 0;
    lVar3 = local_a8;
joined_r0x00104431:
    if (param_1 == 0) goto LAB_001042e7;
  }
LAB_00104439:
  __printf_chk(2,"Unexpected error, return code = %08X\n",iVar2);
LAB_001042e7:
  if (local_b8 != 0) {
    mbedtls_zeroize_and_free(local_b8,(ulong)local_b0._2_2_ << 3);
  }
  if (lVar3 != 0) {
    mbedtls_zeroize_and_free(lVar3,(ulong)local_a0._2_2_ << 3);
  }
  if (local_98 != 0) {
    mbedtls_zeroize_and_free(local_98,(ulong)local_90._2_2_ << 3);
  }
  local_98 = 0;
  local_90 = 1;
  if (lVar5 != 0) {
    mbedtls_zeroize_and_free(lVar5,(ulong)local_80._2_2_ << 3);
  }
  if (lVar6 != 0) {
    mbedtls_zeroize_and_free(lVar6,(ulong)local_70._2_2_ << 3);
  }
  if (lVar8 != 0) {
    mbedtls_zeroize_and_free(lVar8,(ulong)local_60._2_2_ << 3);
  }
  if (lVar4 != 0) {
    mbedtls_zeroize_and_free(lVar4,(ulong)local_50._2_2_ << 3);
  }
  if (param_1 != 0) {
    putchar(10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


