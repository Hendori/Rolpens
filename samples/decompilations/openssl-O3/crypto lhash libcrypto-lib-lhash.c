
undefined8 * getrn(long *param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((code *)param_1[3] == (code *)0x0) {
    uVar5 = (*(code *)param_1[2])(param_2);
  }
  else {
    uVar5 = (*(code *)param_1[3])();
  }
  uVar2 = *(uint *)((long)param_1 + 0x44);
  *param_3 = uVar5;
  uVar6 = uVar5 % (ulong)uVar2;
  iVar4 = (int)uVar6;
  if (uVar6 < *(uint *)(param_1 + 8)) {
    iVar4 = (int)(uVar5 % (ulong)*(uint *)((long)param_1 + 0x3c));
  }
  puVar1 = (undefined8 *)(*param_1 + (long)iVar4 * 8);
  puVar3 = (undefined8 *)*puVar1;
  do {
    if (puVar3 == (undefined8 *)0x0) {
      return puVar1;
    }
    if (puVar3[2] == uVar5) {
      if ((code *)param_1[4] == (code *)0x0) {
        iVar4 = (*(code *)param_1[1])();
      }
      else {
        iVar4 = (*(code *)param_1[4])(*puVar3,param_2);
      }
      if (iVar4 == 0) {
        return puVar1;
      }
    }
    puVar1 = puVar3 + 1;
    puVar3 = (undefined8 *)puVar3[1];
  } while( true );
}



ulong OPENSSL_LH_strhash(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, bVar4 != 0)) {
    uVar2 = 0;
    uVar5 = 0x100;
    do {
      param_1 = param_1 + 1;
      uVar1 = (long)(char)bVar4 | uVar5;
      uVar5 = uVar5 + 0x100;
      bVar3 = ((byte)(uVar1 >> 2) ^ bVar4) & 0xf;
      bVar4 = *param_1;
      uVar2 = uVar1 * uVar1 ^
              (ulong)((uint)(uVar2 << bVar3) | (uint)(uVar2 >> (0x20 - bVar3 & 0x3f)));
    } while (bVar4 != 0);
    return uVar2 >> 0x10 ^ uVar2;
  }
  return 0;
}



long OPENSSL_LH_set_thunks
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_3;
    *(undefined8 *)(param_1 + 0x18) = param_2;
    *(undefined8 *)(param_1 + 0x28) = param_4;
    *(undefined8 *)(param_1 + 0x30) = param_5;
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * OPENSSL_LH_new(code *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *ptr;
  long lVar3;
  
  ptr = (long *)CRYPTO_zalloc(0x68,"crypto/lhash/lhash.c",0x43);
  if (ptr != (long *)0x0) {
    lVar3 = CRYPTO_zalloc(0x80,"crypto/lhash/lhash.c",0x45);
    *ptr = lVar3;
    if (lVar3 != 0) {
      if (param_2 == 0) {
        ptr[1] = (long)&strcmp;
        lVar3 = _LC1;
        lVar1 = __LC2;
        lVar2 = _UNK_00100908;
      }
      else {
        ptr[1] = param_2;
        lVar3 = _LC1;
        lVar1 = __LC2;
        lVar2 = _UNK_00100908;
      }
      if (param_1 == (code *)0x0) {
        param_1 = OPENSSL_LH_strhash;
      }
      _LC1 = lVar3;
      __LC2 = lVar1;
      _UNK_00100908 = lVar2;
      ptr[2] = (long)param_1;
      *(undefined4 *)((long)ptr + 0x44) = 8;
      ptr[7] = lVar3;
      ptr[9] = lVar1;
      ptr[10] = lVar2;
      return ptr;
    }
    CRYPTO_free((void *)0x0);
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



void OPENSSL_LH_flush(long *param_1)

{
  void *pvVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  void *ptr;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    uVar3 = *(uint *)(param_1 + 7);
    if (uVar3 != 0) {
      lVar4 = *param_1;
      lVar5 = 0;
      do {
        plVar2 = (long *)(lVar4 + lVar5 * 8);
        ptr = (void *)*plVar2;
        if ((void *)*plVar2 != (void *)0x0) {
          do {
            pvVar1 = *(void **)((long)ptr + 8);
            CRYPTO_free(ptr);
            ptr = pvVar1;
          } while (pvVar1 != (void *)0x0);
          lVar4 = *param_1;
          uVar3 = *(uint *)(param_1 + 7);
          plVar2 = (long *)(lVar4 + lVar5 * 8);
        }
        lVar5 = lVar5 + 1;
        *plVar2 = 0;
      } while ((uint)lVar5 < uVar3);
    }
    param_1[0xb] = 0;
    return;
  }
  return;
}



void OPENSSL_LH_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    OPENSSL_LH_flush();
    CRYPTO_free((void *)*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 OPENSSL_LH_insert(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  uVar8 = *(uint *)(param_1 + 7);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((ulong)(param_1[0xb] << 8) / (ulong)uVar8 < (ulong)param_1[9]) {
LAB_001003c7:
    plVar5 = (long *)getrn(param_1,param_2,&local_48);
    puVar7 = (undefined8 *)*plVar5;
    if (puVar7 != (undefined8 *)0x0) {
      uVar10 = *puVar7;
      *puVar7 = param_2;
      goto LAB_001003ea;
    }
    puVar7 = (undefined8 *)CRYPTO_malloc(0x18,"crypto/lhash/lhash.c",0x82);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = param_2;
      puVar7[1] = 0;
      puVar7[2] = local_48;
      uVar10 = 0;
      *plVar5 = (long)puVar7;
      param_1[0xb] = param_1[0xb] + 1;
      goto LAB_001003ea;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 8);
    uVar3 = *(uint *)((long)param_1 + 0x44);
    uVar4 = *(uint *)((long)param_1 + 0x3c);
    pvVar6 = (void *)*param_1;
    if (uVar2 + 1 < uVar3) {
      *(uint *)(param_1 + 8) = uVar2 + 1;
LAB_00100376:
      plVar5 = (long *)((long)pvVar6 + (ulong)uVar2 * 8);
      plVar1 = (long *)((long)pvVar6 + (ulong)(uVar2 + uVar3) * 8);
      *(uint *)(param_1 + 7) = uVar8 + 1;
      *plVar1 = 0;
      lVar9 = *plVar5;
      while (lVar9 != 0) {
        while ((ulong)uVar2 == *(ulong *)(lVar9 + 0x10) % (ulong)uVar4) {
          plVar5 = (long *)(lVar9 + 8);
          lVar9 = *(long *)(lVar9 + 8);
          if (lVar9 == 0) goto LAB_001003c7;
        }
        *plVar5 = *(long *)(lVar9 + 8);
        *(long *)(lVar9 + 8) = *plVar1;
        *plVar1 = lVar9;
        lVar9 = *plVar5;
      }
      goto LAB_001003c7;
    }
    pvVar6 = CRYPTO_realloc(pvVar6,uVar4 << 4,"crypto/lhash/lhash.c",0xfe);
    if (pvVar6 != (void *)0x0) {
      *param_1 = pvVar6;
      memset((void *)((long)pvVar6 + (ulong)uVar4 * 8),0,(ulong)uVar4 << 3);
      uVar8 = *(uint *)(param_1 + 7);
      pvVar6 = (void *)*param_1;
      *(uint *)((long)param_1 + 0x44) = uVar4;
      *(uint *)((long)param_1 + 0x3c) = uVar4 * 2;
      *(undefined4 *)(param_1 + 8) = 0;
      goto LAB_00100376;
    }
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  uVar10 = 0;
LAB_001003ea:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 OPENSSL_LH_delete(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 *ptr;
  long lVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  void *addr;
  uint uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  undefined1 auStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar7 = (undefined8 *)getrn(param_1,param_2,auStack_38);
  ptr = (undefined8 *)*puVar7;
  if (ptr == (undefined8 *)0x0) {
    uVar10 = 0;
  }
  else {
    *puVar7 = ptr[1];
    uVar10 = *ptr;
    CRYPTO_free(ptr);
    lVar3 = param_1[0xb];
    uVar9 = *(uint *)(param_1 + 7);
    param_1[0xb] = lVar3 + -1;
    if ((0x10 < uVar9) && ((ulong)((lVar3 + -1) * 0x100) / (ulong)uVar9 <= (ulong)param_1[10])) {
      iVar5 = *(int *)(param_1 + 8);
      iVar2 = *(int *)((long)param_1 + 0x44);
      addr = (void *)*param_1;
      plVar1 = (long *)((long)addr + (ulong)(uint)(iVar5 + -1 + iVar2) * 8);
      lVar3 = *plVar1;
      *plVar1 = 0;
      if (iVar5 == 0) {
        addr = CRYPTO_realloc(addr,iVar2 * 8,"crypto/lhash/lhash.c",0x126);
        if (addr == (void *)0x0) {
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
          addr = (void *)*param_1;
        }
        else {
          *param_1 = addr;
        }
        uVar9 = *(uint *)(param_1 + 7);
        *(uint *)((long)param_1 + 0x3c) = *(uint *)((long)param_1 + 0x3c) >> 1;
        uVar6 = *(uint *)((long)param_1 + 0x44) >> 1;
        *(uint *)((long)param_1 + 0x44) = uVar6;
        iVar5 = uVar6 - 1;
        *(int *)(param_1 + 8) = iVar5;
      }
      else {
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 8) = iVar5;
      }
      plVar1 = (long *)((long)addr + (long)iVar5 * 8);
      *(uint *)(param_1 + 7) = uVar9 - 1;
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        *plVar1 = lVar3;
      }
      else {
        do {
          lVar8 = lVar4;
          lVar4 = *(long *)(lVar8 + 8);
        } while (lVar4 != 0);
        *(long *)(lVar8 + 8) = lVar3;
      }
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



long * OPENSSL_LH_retrieve(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  puVar1 = (undefined8 *)getrn(param_1,param_2,auStack_18);
  plVar2 = (long *)*puVar1;
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void OPENSSL_LH_doall(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  pcVar1 = (code *)param_1[5];
  uVar4 = (int)param_1[7] - 1;
  if (-1 < (int)uVar4) {
    lVar5 = (ulong)uVar4 << 3;
    do {
      puVar3 = *(undefined8 **)(*param_1 + lVar5);
      while (puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar3[1];
        (*pcVar1)(*puVar3,param_2);
        puVar3 = puVar2;
      }
      uVar4 = uVar4 - 1;
      lVar5 = lVar5 + -8;
    } while (uVar4 != 0xffffffff);
  }
  return;
}



void OPENSSL_LH_doall_arg(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  
  if (param_1 != (long *)0x0) {
    pcVar1 = (code *)param_1[6];
    uVar4 = (int)param_1[7] - 1;
    if (-1 < (int)uVar4) {
      lVar5 = (ulong)uVar4 << 3;
      do {
        puVar3 = *(undefined8 **)(*param_1 + lVar5);
        while (puVar3 != (undefined8 *)0x0) {
          puVar2 = (undefined8 *)puVar3[1];
          (*pcVar1)(*puVar3,param_3,param_2);
          puVar3 = puVar2;
        }
        uVar4 = uVar4 - 1;
        lVar5 = lVar5 + -8;
      } while (uVar4 != 0xffffffff);
    }
  }
  return;
}



void OPENSSL_LH_doall_arg_thunk(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  
  if ((param_1 != (long *)0x0) && (uVar3 = (int)param_1[7] - 1, -1 < (int)uVar3)) {
    lVar4 = (ulong)uVar3 << 3;
    do {
      puVar2 = *(undefined8 **)(*param_1 + lVar4);
      while (puVar2 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)puVar2[1];
        (*param_2)(*puVar2,param_4,param_3);
        puVar2 = puVar1;
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -8;
    } while (uVar3 != 0xffffffff);
  }
  return;
}



ulong ossl_lh_strcasehash(byte *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  
  if ((param_1 != (byte *)0x0) && (bVar4 = *param_1, bVar4 != 0)) {
    uVar5 = 0x100;
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      uVar1 = (long)(char)(bVar4 & 0xdf) | uVar5;
      uVar5 = uVar5 + 0x100;
      bVar3 = ((byte)(uVar1 >> 2) ^ bVar4 & 0xdf) & 0xf;
      bVar4 = *param_1;
      uVar2 = uVar1 * uVar1 ^
              (ulong)((uint)(uVar2 << bVar3) | (uint)(uVar2 >> (0x20 - bVar3 & 0x3f)));
    } while (bVar4 != 0);
    return uVar2 >> 0x10 ^ uVar2;
  }
  return 0;
}



undefined8 OPENSSL_LH_num_items(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x58);
  }
  return uVar1;
}



undefined8 OPENSSL_LH_get_down_load(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



void OPENSSL_LH_set_down_load(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}



undefined4 OPENSSL_LH_error(long param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}


