
undefined8 write_at_ring_buf_cb(ulong param_1,void *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 < (ulong)param_4[3]) {
    return 0;
  }
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar3 = param_4[3] + uVar4;
  if (uVar5 <= uVar3) {
    if (uVar3 < param_1 + param_3) {
      return 0;
    }
    if ((uVar5 + param_3 < 0x4000000000000001 && !CARRY8(uVar5,param_3)) &&
       (!CARRY8(param_1,param_3))) {
      if (param_3 != 0) {
        lVar1 = *param_4;
        bVar2 = false;
        while( true ) {
          uVar5 = uVar4 - param_1 % uVar4;
          if (param_3 < uVar5) {
            uVar5 = param_3;
          }
          memcpy((void *)(lVar1 + param_1 % uVar4),param_2,uVar5);
          param_1 = param_1 + uVar5;
          if ((ulong)param_4[2] < param_1) {
            param_4[2] = param_1;
          }
          param_3 = param_3 - uVar5;
          if ((param_3 == 0) || (bVar2)) break;
          uVar4 = param_4[1];
          param_2 = (void *)((long)param_2 + uVar5);
          bVar2 = true;
        }
      }
      return 1;
    }
  }
  return 0;
}



undefined8 ring_buf_resize(undefined8 *param_1,ulong param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *ptr;
  ulong uVar4;
  void *ptr_00;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong __n;
  ulong uVar8;
  ulong uVar9;
  void *__src;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong local_58;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1[1] == param_2) {
LAB_00100222:
    uVar5 = 1;
  }
  else {
    if (((ulong)(param_1[2] - param_1[3]) <= param_2) &&
       (ptr_00 = CRYPTO_malloc((int)param_2,"include/internal/ring_buf.h",0xf4),
       ptr_00 != (void *)0x0)) {
      uVar2 = param_1[3];
      uVar3 = param_1[2];
      ptr = (void *)*param_1;
      if (uVar2 <= uVar3) {
        uVar4 = param_1[1];
        local_58 = uVar2;
        if (uVar4 == 0) {
LAB_001001f3:
          if (param_3 == 0) {
            CRYPTO_free(ptr);
          }
          else {
            CRYPTO_clear_free(ptr,uVar4,"include/internal/ring_buf.h",0x3a);
          }
          *param_1 = ptr_00;
          param_1[1] = param_2;
          param_1[2] = local_58;
          param_1[3] = uVar2;
          goto LAB_00100222;
        }
        uVar8 = 0;
        uVar9 = uVar2;
        do {
          uVar6 = uVar4 - uVar9 % uVar4;
          uVar10 = uVar3 - uVar9;
          if (uVar6 < uVar3 - uVar9) {
            uVar10 = uVar6;
          }
          __src = (void *)((long)ptr + uVar9 % uVar4);
          if (uVar10 == 0) goto LAB_001001f3;
          uVar9 = (param_2 - local_58) + uVar2;
          if (0x4000000000000000 - local_58 < uVar9) {
            uVar9 = 0x4000000000000000 - local_58;
          }
          if (uVar10 < uVar9) {
            uVar9 = uVar10;
          }
          if (uVar9 == 0) {
LAB_001003a0:
            CRYPTO_free(ptr_00);
            goto LAB_00100150;
          }
          uVar6 = 0;
          do {
            __n = param_2 - local_58 % param_2;
            if (uVar9 < __n) {
              __n = uVar9;
            }
            memcpy((void *)((long)ptr_00 + local_58 % param_2),__src,__n);
            local_58 = local_58 + __n;
            __src = (void *)((long)__src + __n);
            uVar6 = uVar6 + __n;
            uVar7 = (param_2 + uVar2) - local_58;
            if (0x4000000000000000 - local_58 < uVar7) {
              uVar7 = 0x4000000000000000 - local_58;
            }
            uVar9 = uVar9 - __n;
            if (uVar7 <= uVar9) {
              uVar9 = uVar7;
            }
          } while (uVar9 != 0);
          if (uVar10 != uVar6) goto LAB_001003a0;
          uVar8 = uVar8 + uVar10;
          uVar9 = uVar8 + uVar2;
        } while ((uVar9 <= uVar3) && (!CARRY8(uVar8,uVar2)));
      }
      CRYPTO_free(ptr_00);
    }
LAB_00100150:
    uVar5 = 0;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int read_internal(long param_1,void *param_2,ulong param_3,long *param_4,undefined4 *param_5,
                 uint param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  size_t len;
  ulong __n;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined4 local_6c;
  undefined8 local_68;
  void *local_60;
  ulong local_58;
  ulong local_50;
  long local_40;
  ulong uVar5;
  
  uVar7 = 0;
  lVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_6c = 0;
  local_68 = 0;
  do {
    iVar1 = ossl_sframe_list_peek(param_1,&local_68,&local_58,&local_60,&local_6c);
    uVar3 = local_58;
    if (iVar1 == 0) break;
    uVar6 = local_50 - local_58;
    uVar7 = local_50;
    if (param_3 < local_50 - local_58) {
      local_6c = 0;
      uVar7 = local_58 + param_3;
      uVar6 = param_3;
    }
    if (uVar6 == 0) break;
    if (local_60 == (void *)0x0) {
      if ((*(ulong *)(param_1 + 0x60) <= local_58) || (local_58 < *(ulong *)(param_1 + 0x68)))
      goto LAB_00100608;
      uVar5 = *(ulong *)(param_1 + 0x58);
      uVar2 = local_58 % uVar5;
      __n = uVar5 - uVar2;
      local_60 = (void *)(*(long *)(param_1 + 0x50) + uVar2);
      if (local_60 == (void *)0x0) goto LAB_00100608;
      if (__n < uVar6) {
        memcpy(param_2,local_60,__n);
        uVar3 = uVar3 + __n;
        if ((*(ulong *)(param_1 + 0x60) <= uVar3) || (uVar3 < *(ulong *)(param_1 + 0x68)))
        goto LAB_00100608;
        uVar3 = uVar3 % *(ulong *)(param_1 + 0x58);
        uVar6 = uVar6 + (uVar2 - uVar5);
        local_60 = (void *)(*(long *)(param_1 + 0x50) + uVar3);
        if ((*(ulong *)(param_1 + 0x58) - uVar3 <= uVar6) || (local_60 == (void *)0x0))
        goto LAB_00100608;
        param_3 = param_3 + (uVar2 - uVar5);
        param_2 = (void *)((long)param_2 + __n);
        lVar4 = lVar4 + __n;
      }
    }
    lVar4 = lVar4 + uVar6;
    memcpy(param_2,local_60,uVar6);
    param_3 = param_3 - uVar6;
    param_2 = (void *)((long)param_2 + uVar6);
  } while (param_3 != 0);
  if ((uVar7 == 0) || ((param_6 & 1) == 0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = ossl_sframe_list_drop_frames(param_1,uVar7);
    uVar3 = *(ulong *)(param_1 + 0x68);
    if (uVar7 - 1 >> 0x3e == 0) {
      if (((*(int *)(param_1 + 0x2c) != 0) && (uVar6 = *(ulong *)(param_1 + 0x58), uVar6 != 0)) &&
         (uVar3 < uVar7 - 1)) {
        uVar2 = uVar3 % uVar6;
        uVar5 = *(ulong *)(param_1 + 0x60);
        if (uVar7 <= *(ulong *)(param_1 + 0x60)) {
          uVar5 = uVar7;
        }
        len = uVar5 - uVar3;
        if (uVar6 - uVar2 < len) {
          OPENSSL_cleanse((void *)(*(long *)(param_1 + 0x50) + uVar2),uVar6 - uVar2);
          len = len + (uVar2 - *(long *)(param_1 + 0x58));
          uVar2 = 0;
        }
        if (len != 0) {
          OPENSSL_cleanse((void *)(*(long *)(param_1 + 0x50) + uVar2),len);
        }
      }
      *(ulong *)(param_1 + 0x68) = uVar7;
      if (*(ulong *)(param_1 + 0x60) < uVar7) {
        *(ulong *)(param_1 + 0x60) = uVar7;
      }
    }
    if (iVar1 == 0) {
LAB_00100608:
      iVar1 = 0;
      goto LAB_0010060a;
    }
  }
  *param_4 = lVar4;
  *param_5 = local_6c;
LAB_0010060a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void * ossl_quic_rstream_new(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  void *ptr;
  
  ptr = (void *)CRYPTO_zalloc(0x70,"ssl/quic/quic_rstream.c",0x1b);
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x50) = 0;
    *(undefined8 *)((long)ptr + 0x68) = 0;
    *(undefined1 (*) [16])((long)ptr + 0x58) = (undefined1  [16])0x0;
    iVar1 = ring_buf_resize((long)ptr + 0x50,param_3,0);
    if (iVar1 != 0) {
      ossl_sframe_list_init(ptr);
      *(undefined8 *)((long)ptr + 0x30) = param_1;
      *(undefined8 *)((long)ptr + 0x38) = param_2;
      return ptr;
    }
    CRYPTO_free(ptr);
  }
  return (void *)0x0;
}



void ossl_quic_rstream_free(void *param_1)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    iVar1 = *(int *)((long)param_1 + 0x2c);
    ossl_sframe_list_destroy();
    if (iVar1 == 0) {
      CRYPTO_free(*(void **)((long)param_1 + 0x50));
    }
    else {
      CRYPTO_clear_free(*(undefined8 *)((long)param_1 + 0x50),*(undefined8 *)((long)param_1 + 0x58),
                        "include/internal/ring_buf.h",0x3a);
    }
    *(undefined8 *)((long)param_1 + 0x50) = 0;
    *(undefined8 *)((long)param_1 + 0x58) = 0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8
ossl_quic_rstream_queue_data
          (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,int param_6)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (param_5 == 0) {
LAB_00100816:
      if (param_6 != 0) goto LAB_0010086d;
    }
    ERR_new();
    ERR_set_debug("ssl/quic/quic_rstream.c",0x42,"ossl_quic_rstream_queue_data");
    ERR_set_error(0x14,0xc0103,0);
    uVar1 = 0;
  }
  else {
    if (param_5 == 0) goto LAB_00100816;
LAB_0010086d:
    local_20 = param_5 + param_3;
    local_28 = param_3;
    uVar1 = ossl_sframe_list_insert(param_1,&local_28,param_2,param_4,param_6);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong ossl_quic_rstream_read
                (long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (*(long *)(param_1 + 0x38) != 0) {
    ossl_statm_get_rtt_info(*(long *)(param_1 + 0x38),local_68);
    uVar3 = local_68[0];
  }
  uVar2 = read_internal(param_1,param_2,param_3,param_4,param_5,1);
  if ((int)uVar2 != 0) {
    uVar2 = 1;
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar1 = ossl_quic_rxfc_on_retire(*(long *)(param_1 + 0x30),*param_4,uVar3);
      uVar2 = (ulong)(iVar1 != 0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_rstream_peek(void)

{
  read_internal();
  return;
}



undefined8 ossl_quic_rstream_available(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined1 local_60 [8];
  long local_58;
  long local_50;
  long local_40;
  
  lVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  while( true ) {
    iVar1 = ossl_sframe_list_peek(param_1,&local_68,&local_58,local_60,param_3);
    if (iVar1 == 0) break;
    lVar2 = (local_50 + lVar2) - local_58;
  }
  *param_2 = lVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_rstream_get_record(long param_1,ulong *param_2,ulong *param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  iVar2 = ossl_sframe_list_lock_head(param_1,param_1 + 0x40,&local_38);
  if (iVar2 == 0) {
    *param_2 = 0;
    *param_3 = 0;
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x40);
    if (*(ulong *)(param_1 + 0x48) == uVar1) {
      if ((*param_4 == 0) || (iVar2 = ossl_sframe_list_drop_frames(param_1), iVar2 == 0))
      goto LAB_00100b28;
      uVar1 = *(ulong *)(param_1 + 0x40);
      uVar3 = *(long *)(param_1 + 0x48) - uVar1;
      uVar5 = local_38;
      uVar6 = uVar3;
      if (local_38 == 0) goto joined_r0x00100ace;
    }
    else {
      uVar3 = *(ulong *)(param_1 + 0x48) - uVar1;
      uVar6 = local_38;
joined_r0x00100ace:
      uVar5 = local_38;
      if (uVar6 != 0) {
        if ((uVar1 < *(ulong *)(param_1 + 0x60)) && (*(ulong *)(param_1 + 0x68) <= uVar1)) {
          uVar5 = uVar1 % *(ulong *)(param_1 + 0x58);
          uVar6 = *(ulong *)(param_1 + 0x58) - uVar5;
          uVar5 = uVar5 + *(long *)(param_1 + 0x50);
          if (uVar5 != 0) {
            if (uVar6 < uVar3) {
              *(ulong *)(param_1 + 0x48) = uVar1 + uVar6;
              uVar3 = uVar6;
            }
            goto LAB_00100a72;
          }
        }
LAB_00100b28:
        uVar4 = 0;
        goto LAB_00100a7f;
      }
    }
LAB_00100a72:
    *param_3 = uVar3;
    *param_2 = uVar5;
  }
  uVar4 = 1;
LAB_00100a7f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_rstream_release_record(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  size_t len;
  ulong uVar7;
  ulong uVar8;
  long in_FS_OFFSET;
  undefined8 local_58 [5];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = ossl_sframe_list_is_head_locked();
  if (iVar3 != 0) {
    uVar8 = *(ulong *)(param_1 + 0x48);
    if (uVar8 - *(long *)(param_1 + 0x40) < param_2) {
      if (param_2 != 0xffffffffffffffff) goto LAB_00100bfe;
    }
    else {
      uVar8 = *(long *)(param_1 + 0x40) + param_2;
    }
    iVar3 = ossl_sframe_list_drop_frames(param_1,uVar8);
    if (iVar3 != 0) {
      if (uVar8 != 0) {
        uVar1 = *(ulong *)(param_1 + 0x68);
        if (uVar8 - 1 >> 0x3e == 0) {
          if (((*(int *)(param_1 + 0x2c) != 0) &&
              (uVar2 = *(ulong *)(param_1 + 0x58), uVar1 < uVar8 - 1)) && (uVar2 != 0)) {
            uVar5 = uVar1 % uVar2;
            uVar7 = *(ulong *)(param_1 + 0x60);
            if (uVar8 <= *(ulong *)(param_1 + 0x60)) {
              uVar7 = uVar8;
            }
            len = uVar7 - uVar1;
            if (uVar2 - uVar5 < len) {
              OPENSSL_cleanse((void *)(*(long *)(param_1 + 0x50) + uVar5),uVar2 - uVar5);
              lVar6 = uVar5 - *(long *)(param_1 + 0x58);
              uVar5 = 0;
              len = len + lVar6;
            }
            if (len != 0) {
              OPENSSL_cleanse((void *)(*(long *)(param_1 + 0x50) + uVar5),len);
            }
          }
          *(ulong *)(param_1 + 0x68) = uVar8;
          if (*(ulong *)(param_1 + 0x60) < uVar8) {
            *(ulong *)(param_1 + 0x60) = uVar8;
          }
        }
      }
      lVar6 = *(long *)(param_1 + 0x30);
      if (lVar6 != 0) {
        uVar4 = 0;
        if (*(long *)(param_1 + 0x38) != 0) {
          ossl_statm_get_rtt_info(*(long *)(param_1 + 0x38),local_58,0);
          lVar6 = *(long *)(param_1 + 0x30);
          uVar4 = local_58[0];
        }
        iVar3 = ossl_quic_rxfc_on_retire(lVar6,uVar8,uVar4);
        if (iVar3 == 0) goto LAB_00100bfe;
      }
      uVar4 = 1;
      goto LAB_00100bd4;
    }
  }
LAB_00100bfe:
  uVar4 = 0;
LAB_00100bd4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_rstream_move_to_rbuf(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x60) == *(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x58)) {
    return 0;
  }
  uVar1 = ossl_sframe_list_move_data(param_1,0x100000,param_1 + 0x50);
  return uVar1;
}



bool ossl_quic_rstream_resize_rbuf(long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = ossl_sframe_list_is_head_locked();
  bVar2 = false;
  if (iVar1 == 0) {
    iVar1 = ring_buf_resize(param_1 + 0x50,param_2,*(undefined4 *)(param_1 + 0x2c));
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



void ossl_quic_rstream_set_cleanse(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}


