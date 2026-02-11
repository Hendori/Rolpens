
void sa_doall(int *param_1,code *param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  int local_108 [16];
  long local_c8 [17];
  long local_40;
  
  uVar5 = 0;
  iVar2 = 0;
  lVar4 = *(long *)(param_1 + 6);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  local_108[0] = 0;
  local_c8[0] = lVar4;
  do {
    if (iVar1 < 0x10) {
      lVar3 = (long)iVar2;
      local_108[lVar3] = iVar1 + 1;
      if (lVar4 != 0) {
        lVar4 = *(long *)(lVar4 + (long)iVar1 * 8);
        if (lVar4 != 0) {
          uVar5 = uVar5 & 0xfffffffffffffff0 | (long)iVar1;
          if (iVar2 < *param_1 + -1) {
            iVar2 = iVar2 + 1;
            uVar5 = uVar5 << 4;
            lVar3 = (long)iVar2;
            local_108[lVar3] = 0;
            local_c8[lVar3] = lVar4;
          }
          else if (param_3 != (code *)0x0) {
            (*param_3)(uVar5,lVar4,param_4);
          }
        }
      }
    }
    else {
      if ((lVar4 != 0) && (param_2 != (code *)0x0)) {
        (*param_2)();
      }
      iVar2 = iVar2 + -1;
      uVar5 = uVar5 >> 4;
      if (iVar2 == -1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      lVar3 = (long)iVar2;
    }
    iVar1 = local_108[lVar3];
    lVar4 = local_c8[lVar3];
  } while( true );
}



void trampoline(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00100114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)();
  return;
}



void sa_free_node(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void sa_free_leaf(undefined8 param_1,void *param_2)

{
  CRYPTO_free(param_2);
  return;
}



void ossl_sa_new(void)

{
  CRYPTO_zalloc(0x20,"crypto/sparse_array.c",0x3c);
  return;
}



void ossl_sa_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    sa_doall(param_1,sa_free_node,0,0);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



void ossl_sa_free_leaves(void *param_1)

{
  sa_doall(param_1,sa_free_node,sa_free_leaf,0);
  CRYPTO_free(param_1);
  return;
}



void ossl_sa_doall(long param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = param_2;
  if (param_1 != 0) {
    sa_doall(param_1,0,trampoline,&local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_sa_doall_arg(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    sa_doall(param_1,0,param_2,param_3);
    return;
  }
  return;
}



undefined8 ossl_sa_num(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  return uVar1;
}



long ossl_sa_get(int *param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (((param_1 != (int *)0x0) && (*(long *)(param_1 + 4) != 0)) &&
     (param_2 <= *(ulong *)(param_1 + 2))) {
    iVar1 = *param_1;
    for (lVar2 = *(long *)(param_1 + 6); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + (ulong)((uint)(param_2 >> ((char)iVar1 * '\x04' & 0x3fU)) & 0xf) *
                                  8)) {
      iVar1 = iVar1 + -1;
      if (iVar1 < 1) {
        if (lVar2 == 0) {
          return 0;
        }
        return *(long *)(lVar2 + (ulong)((uint)param_2 & 0xf) * 8);
      }
    }
  }
  return lVar2;
}



undefined8 ossl_sa_set(int *param_1,ulong param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar7 = 1;
  uVar4 = param_2 >> 4;
  while ((uVar4 != 0 && (iVar7 = iVar7 + 1, iVar7 != 0x10))) {
    uVar4 = uVar4 >> 4;
  }
  if (*param_1 < iVar7) {
    do {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x80,"crypto/sparse_array.c",0xb0);
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      uVar2 = *(undefined8 *)(param_1 + 6);
      iVar6 = *param_1;
      *(undefined8 **)(param_1 + 6) = puVar5;
      *puVar5 = uVar2;
      *param_1 = iVar6 + 1;
    } while (iVar6 + 1 < iVar7);
  }
  else {
    puVar5 = *(undefined8 **)(param_1 + 6);
    iVar6 = *param_1 + -1;
  }
  if (*(ulong *)(param_1 + 2) < param_2) {
    *(ulong *)(param_1 + 2) = param_2;
  }
  do {
    if (iVar6 == 0) {
      lVar3 = puVar5[(uint)param_2 & 0xf];
      if (param_3 == 0) {
        if (lVar3 != 0) {
          *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + -1;
        }
      }
      else if (lVar3 == 0) {
        *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + 1;
      }
      puVar5[(uint)param_2 & 0xf] = param_3;
      return 1;
    }
    puVar1 = puVar5 + ((uint)(param_2 >> ((char)iVar6 * '\x04' & 0x3fU)) & 0xf);
    puVar5 = (undefined8 *)*puVar1;
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x80,"crypto/sparse_array.c",0xb0);
      *puVar1 = puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
    }
    iVar6 = iVar6 + -1;
  } while( true );
}


