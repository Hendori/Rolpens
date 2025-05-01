
void ossl_sframe_list_init(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  return;
}



void ossl_sframe_list_destroy(undefined8 *param_1)

{
  void *pvVar1;
  void *ptr;
  
  ptr = (void *)*param_1;
  while (ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)ptr + 8);
    if ((*(int *)((long)param_1 + 0x2c) != 0) && (*(void **)((long)ptr + 0x28) != (void *)0x0)) {
      OPENSSL_cleanse(*(void **)((long)ptr + 0x28),
                      *(long *)((long)ptr + 0x18) - *(long *)((long)ptr + 0x10));
    }
    ossl_qrx_pkt_release(*(undefined8 *)((long)ptr + 0x20));
    CRYPTO_free(ptr);
    ptr = pvVar1;
  }
  return;
}



undefined8
ossl_sframe_list_insert
          (undefined1 (*param_1) [16],ulong *param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *ptr;
  
  uVar2 = param_2[1];
  if (*(ulong *)param_1[2] < uVar2) {
    lVar10 = *(long *)(*param_1 + 8);
    if (lVar10 == 0) {
      lVar10 = CRYPTO_zalloc(0x30,"ssl/quic/quic_sf_list.c",0x21);
      if (lVar10 == 0) {
        *param_1 = (undefined1  [16])0x0;
        return 0;
      }
      if (param_3 != 0) {
        ossl_qrx_pkt_up_ref(param_3);
      }
      uVar2 = *param_2;
      uVar5 = param_2[1];
      *(long *)(lVar10 + 0x20) = param_3;
      *(long *)(param_1[1] + 8) = *(long *)(param_1[1] + 8) + 1;
      *(long *)(lVar10 + 0x28) = param_4;
      *(ulong *)(lVar10 + 0x10) = uVar2;
      *(ulong *)(lVar10 + 0x18) = uVar5;
      *(long *)*param_1 = lVar10;
      *(long *)(*param_1 + 8) = lVar10;
    }
    else if (*(ulong *)(lVar10 + 0x10) < *param_2) {
      if (*(ulong *)(lVar10 + 0x18) < uVar2) {
        plVar9 = (long *)CRYPTO_zalloc(0x30,"ssl/quic/quic_sf_list.c",0x21);
        if (plVar9 == (long *)0x0) {
          return 0;
        }
        if (param_3 != 0) {
          ossl_qrx_pkt_up_ref(param_3);
        }
        uVar2 = *param_2;
        uVar5 = param_2[1];
        lVar10 = *(long *)(*param_1 + 8);
        plVar9[4] = param_3;
        plVar9[5] = param_4;
        *plVar9 = lVar10;
        plVar9[2] = uVar2;
        plVar9[3] = uVar5;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar9;
        }
        *(long *)(param_1[1] + 8) = *(long *)(param_1[1] + 8) + 1;
        *(long **)(*param_1 + 8) = plVar9;
      }
    }
    else {
      puVar8 = *(undefined8 **)*param_1;
      puVar6 = (undefined8 *)0x0;
      while( true ) {
        ptr = puVar8;
        if (ptr == (undefined8 *)0x0) {
          return 0;
        }
        if (*param_2 <= (ulong)ptr[2]) break;
        puVar8 = (undefined8 *)ptr[1];
        puVar6 = ptr;
      }
      if ((puVar6 == (undefined8 *)0x0) || ((ulong)puVar6[3] < uVar2)) {
        puVar8 = (undefined8 *)CRYPTO_zalloc(0x30,"ssl/quic/quic_sf_list.c",0x21);
        if (puVar8 == (undefined8 *)0x0) {
          return 0;
        }
        if (param_3 != 0) {
          ossl_qrx_pkt_up_ref(param_3);
        }
        uVar2 = *param_2;
        uVar5 = param_2[1];
        puVar8[4] = param_3;
        puVar8[5] = param_4;
        puVar8[2] = uVar2;
        puVar8[3] = uVar5;
        do {
          uVar2 = ptr[3];
          if (param_2[1] < uVar2) {
            if (puVar6 == (undefined8 *)0x0) {
              *ptr = puVar8;
              puVar8[1] = ptr;
              *puVar8 = 0;
              goto LAB_00100398;
            }
            if ((ulong)puVar6[3] < (ulong)ptr[2]) {
              *ptr = puVar8;
              puVar8[1] = ptr;
              *puVar8 = puVar6;
              goto LAB_0010035d;
            }
            if ((*(int *)(param_1[2] + 0xc) != 0) && ((void *)puVar8[5] != (void *)0x0)) {
              OPENSSL_cleanse((void *)puVar8[5],puVar8[3] - puVar8[2]);
            }
            ossl_qrx_pkt_release(puVar8[4]);
            CRYPTO_free(puVar8);
            goto joined_r0x001002a9;
          }
          puVar3 = (undefined8 *)ptr[1];
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = *ptr;
          }
          if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = puVar3;
          }
          if (*(undefined8 **)*param_1 == ptr) {
            *(undefined8 **)*param_1 = puVar3;
            puVar4 = *(undefined8 **)(*param_1 + 8);
          }
          else {
            puVar4 = *(undefined8 **)(*param_1 + 8);
          }
          if (puVar4 == ptr) {
            *(undefined8 **)(*param_1 + 8) = puVar6;
          }
          iVar1 = *(int *)(param_1[2] + 0xc);
          *(long *)(param_1[1] + 8) = *(long *)(param_1[1] + 8) + -1;
          if ((iVar1 != 0) && ((void *)ptr[5] != (void *)0x0)) {
            OPENSSL_cleanse((void *)ptr[5],uVar2 - ptr[2]);
          }
          ossl_qrx_pkt_release(ptr[4]);
          CRYPTO_free(ptr);
          ptr = puVar3;
        } while (puVar3 != (undefined8 *)0x0);
        *(undefined8 **)(*param_1 + 8) = puVar8;
        puVar8[1] = 0;
        *puVar8 = puVar6;
        if (puVar6 == (undefined8 *)0x0) {
LAB_00100398:
          *(undefined8 **)*param_1 = puVar8;
        }
        else {
LAB_0010035d:
          puVar6[1] = puVar8;
        }
        *(long *)(param_1[1] + 8) = *(long *)(param_1[1] + 8) + 1;
      }
    }
  }
joined_r0x001002a9:
  uVar7 = 1;
  if (param_5 == 0) {
    uVar7 = (uint)(*(int *)param_1[1] != 0);
  }
  *(uint *)param_1[1] = uVar7;
  return 1;
}



undefined8
ossl_sframe_list_peek(long *param_1,long *param_2,ulong *param_3,long *param_4,undefined4 *param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar2 = param_1[4];
    lVar1 = *param_1;
    *param_3 = uVar2;
  }
  else {
    uVar2 = *(ulong *)(lVar1 + 0x18);
    lVar1 = *(long *)(lVar1 + 8);
    *param_3 = uVar2;
  }
  if (lVar1 == 0) {
    param_3[1] = uVar2;
    lVar1 = param_1[2];
    *param_4 = 0;
    *param_2 = 0;
    *param_5 = (int)lVar1;
    return 0;
  }
  uVar3 = *(ulong *)(lVar1 + 0x10);
  if ((uVar2 < uVar3) || (*(ulong *)(lVar1 + 0x18) <= uVar2)) {
    param_3[1] = uVar2;
    *param_4 = 0;
    *param_2 = 0;
    *param_5 = 0;
    return 0;
  }
  param_3[1] = *(ulong *)(lVar1 + 0x18);
  lVar5 = *(long *)(lVar1 + 0x28);
  if (lVar5 != 0) {
    lVar5 = (uVar2 - uVar3) + lVar5;
  }
  lVar4 = *(long *)(lVar1 + 8);
  *param_4 = lVar5;
  if (lVar4 == 0) {
    *param_5 = (int)param_1[2];
    *param_2 = lVar1;
    return 1;
  }
  *param_5 = 0;
  *param_2 = lVar1;
  return 1;
}



undefined8 ossl_sframe_list_drop_frames(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *ptr;
  
  if (param_2 < (ulong)param_1[4]) {
    return 0;
  }
  if (param_1[1] == 0) {
    if (param_1[4] != param_2) {
      return 0;
    }
  }
  else if (*(ulong *)(param_1[1] + 0x18) < param_2) {
    return 0;
  }
  param_1[4] = param_2;
  ptr = (undefined8 *)*param_1;
  if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
    do {
      uVar2 = ptr[3];
      if (param_2 < uVar2) {
        *param_1 = ptr;
        *ptr = 0;
        goto LAB_00100577;
      }
      puVar1 = (undefined8 *)ptr[1];
      param_1[3] = param_1[3] + -1;
      if ((*(int *)((long)param_1 + 0x2c) != 0) && ((void *)ptr[5] != (void *)0x0)) {
        OPENSSL_cleanse((void *)ptr[5],uVar2 - ptr[2]);
      }
      ossl_qrx_pkt_release(ptr[4]);
      CRYPTO_free(ptr);
      ptr = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    *param_1 = 0;
  }
  param_1[1] = 0;
LAB_00100577:
  *(undefined4 *)(param_1 + 5) = 0;
  return 1;
}



undefined8
ossl_sframe_list_lock_head(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  local_18 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = ossl_sframe_list_peek(param_1,&local_18,param_2,param_3,param_4);
    if ((int)uVar1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ossl_sframe_list_is_head_locked(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



undefined8 ossl_sframe_list_move_data(long *param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  void *ptr;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  
  ptr = (void *)*param_1;
  uVar7 = param_1[4];
  if (ptr == (void *)0x0) {
LAB_001007a2:
    uVar3 = 1;
  }
  else {
    if ((int)param_1[5] == 0) {
      lVar6 = *(long *)((long)ptr + 0x28);
      uVar4 = *(ulong *)((long)ptr + 0x10);
    }
    else {
      ptr = *(void **)((long)ptr + 8);
      if (ptr == (void *)0x0) goto LAB_001007a2;
      lVar6 = *(long *)((long)ptr + 0x28);
      uVar4 = *(ulong *)((long)ptr + 0x10);
    }
    if (lVar6 == 0) {
      uVar7 = *(ulong *)((long)ptr + 0x18);
      goto LAB_001006b0;
    }
    pvVar5 = (void *)0x0;
LAB_001006d1:
    if (uVar7 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar4 < uVar7) {
      lVar6 = (uVar7 - uVar4) + lVar6;
    }
    uVar3 = (*param_2)(uVar7,lVar6,*(long *)((long)ptr + 0x18) - uVar7,param_3);
    if ((int)uVar3 != 0) {
      if (*(int *)((long)param_1 + 0x2c) != 0) {
        OPENSSL_cleanse(*(void **)((long)ptr + 0x28),
                        *(long *)((long)ptr + 0x18) - *(long *)((long)ptr + 0x10));
      }
      *(undefined8 *)((long)ptr + 0x28) = 0;
      ossl_qrx_pkt_release(*(undefined8 *)((long)ptr + 0x20));
      *(undefined8 *)((long)ptr + 0x20) = 0;
      uVar7 = *(ulong *)((long)ptr + 0x18);
      if (pvVar5 == (void *)0x0) goto LAB_001006b0;
      uVar4 = *(ulong *)((long)ptr + 0x10);
      if (*(ulong *)((long)pvVar5 + 0x18) < uVar4) goto LAB_001006b0;
      do {
        puVar1 = *(undefined8 **)((long)ptr + 8);
        *(ulong *)((long)pvVar5 + 0x18) = uVar7;
        *(undefined8 **)((long)pvVar5 + 8) = puVar1;
        if (puVar1 == (undefined8 *)0x0) {
          param_1[1] = (long)pvVar5;
        }
        else {
          *puVar1 = pvVar5;
        }
        param_1[3] = param_1[3] + -1;
        if ((*(int *)((long)param_1 + 0x2c) != 0) && (*(void **)((long)ptr + 0x28) != (void *)0x0))
        {
          OPENSSL_cleanse(*(void **)((long)ptr + 0x28),uVar7 - uVar4);
        }
        ossl_qrx_pkt_release(*(undefined8 *)((long)ptr + 0x20));
        CRYPTO_free(ptr);
        pvVar2 = *(void **)((long)pvVar5 + 8);
        while( true ) {
          ptr = pvVar2;
          if (ptr == (void *)0x0) goto LAB_001007a2;
          lVar6 = *(long *)((long)ptr + 0x28);
          uVar4 = *(ulong *)((long)ptr + 0x10);
          if (lVar6 != 0) goto LAB_001006d1;
          uVar7 = *(ulong *)((long)ptr + 0x18);
          uVar4 = *(ulong *)((long)ptr + 0x10);
          if (uVar4 <= *(ulong *)((long)pvVar5 + 0x18)) break;
LAB_001006b0:
          pvVar2 = *(void **)((long)ptr + 8);
          pvVar5 = ptr;
        }
      } while( true );
    }
  }
  return uVar3;
}


