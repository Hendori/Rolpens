
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
LAB_00100122:
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
LAB_001000f3:
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
          goto LAB_00100122;
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
          if (uVar10 == 0) goto LAB_001000f3;
          uVar9 = (param_2 - local_58) + uVar2;
          if (0x4000000000000000 - local_58 < uVar9) {
            uVar9 = 0x4000000000000000 - local_58;
          }
          if (uVar10 < uVar9) {
            uVar9 = uVar10;
          }
          if (uVar9 == 0) {
LAB_001002a0:
            CRYPTO_free(ptr_00);
            goto LAB_00100050;
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
          if (uVar10 != uVar6) goto LAB_001002a0;
          uVar8 = uVar8 + uVar10;
          uVar9 = uVar8 + uVar2;
        } while ((uVar9 <= uVar3) && (!CARRY8(uVar8,uVar2)));
      }
      CRYPTO_free(ptr_00);
    }
LAB_00100050:
    uVar5 = 0;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 * ossl_quic_sstream_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x58,"ssl/quic/quic_sstream.c",0x40);
  if (ptr != (undefined8 *)0x0) {
    *ptr = 0;
    ptr[3] = 0;
    *(undefined1 (*) [16])(ptr + 1) = (undefined1  [16])0x0;
    iVar1 = ring_buf_resize(ptr,param_1,0);
    if (iVar1 != 0) {
      ossl_uint_set_init(ptr + 4);
      ossl_uint_set_init(ptr + 7);
      return ptr;
    }
    CRYPTO_free((void *)*ptr);
    *ptr = 0;
    ptr[1] = 0;
    CRYPTO_free(ptr);
  }
  return (undefined8 *)0x0;
}



void ossl_quic_sstream_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    ossl_uint_set_destroy(param_1 + 4);
    ossl_uint_set_destroy(param_1 + 7);
    if ((*(byte *)(param_1 + 10) & 8) == 0) {
      CRYPTO_free((void *)*param_1);
    }
    else {
      CRYPTO_clear_free(*param_1,param_1[1],"include/internal/ring_buf.h",0x3a);
    }
    *param_1 = 0;
    param_1[1] = 0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8
ossl_quic_sstream_get_stream_frame
          (long *param_1,ulong param_2,long param_3,long *param_4,ulong *param_5)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  bool bVar13;
  
  plVar6 = (long *)param_1[4];
  if (*param_5 < 2) {
    return 0;
  }
  uVar8 = 0;
  if ((plVar6 == (long *)0x0) || (param_2 == 0)) {
LAB_00100488:
    if (plVar6 != (long *)0x0) {
      lVar5 = plVar6[2];
      uVar8 = (plVar6[3] + 1) - lVar5;
      if (uVar8 == 0) {
        uVar12 = 0;
        uVar11 = uVar8;
      }
      else {
        lVar2 = *param_1;
        uVar3 = param_1[2];
        uVar12 = 0;
        uVar10 = 0;
        do {
          uVar1 = lVar5 + uVar10;
          if (uVar3 < uVar1) {
            return 0;
          }
          if (uVar1 < (ulong)param_1[3]) {
            return 0;
          }
          uVar4 = param_1[1];
          uVar11 = uVar10;
          if (uVar4 == 0) break;
          uVar7 = uVar3 - uVar1;
          uVar9 = uVar4 - uVar1 % uVar4;
          if (uVar9 < uVar7) {
            uVar7 = uVar9;
          }
          if (uVar7 == 0) break;
          uVar11 = uVar7 + uVar10;
          *param_4 = uVar1 % uVar4 + lVar2;
          if (uVar8 < uVar11) {
            uVar12 = uVar12 + 1;
            param_4[1] = uVar8 - uVar10;
            uVar11 = uVar8;
            break;
          }
          param_4[1] = uVar7;
          uVar12 = uVar12 + 1;
          param_4 = param_4 + 2;
          uVar10 = uVar11;
        } while (uVar11 < uVar8);
      }
      bVar13 = false;
      *(long *)(param_3 + 8) = lVar5;
      *(ulong *)(param_3 + 0x10) = uVar11;
      if ((*(byte *)(param_1 + 10) & 1) != 0) {
        bVar13 = lVar5 + uVar11 == param_1[2];
      }
      goto LAB_0010052f;
    }
  }
  else {
    do {
      uVar8 = uVar8 + 1;
      plVar6 = (long *)*plVar6;
      if (param_2 <= uVar8) goto LAB_00100488;
    } while (plVar6 != (long *)0x0);
  }
  if ((uVar8 < param_2) || ((*(byte *)(param_1 + 10) & 3) != 1)) {
    return 0;
  }
  lVar5 = param_1[2];
  uVar12 = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(long *)(param_3 + 8) = lVar5;
  bVar13 = true;
LAB_0010052f:
  *(byte *)(param_3 + 0x20) = *(byte *)(param_3 + 0x20) & 0xfd | bVar13 * '\x02';
  *param_5 = uVar12;
  return 1;
}



void ossl_quic_sstream_has_pending(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [48];
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 2;
  ossl_quic_sstream_get_stream_frame(param_1,0,local_68,local_38,&local_70);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_sstream_get_cur_size(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



bool ossl_quic_sstream_mark_transmitted(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_3;
  iVar1 = ossl_uint_set_remove(param_1 + 0x20,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_quic_sstream_mark_transmitted_fin(long param_1,long param_2)

{
  if (((*(byte *)(param_1 + 0x50) & 1) != 0) && (*(long *)(param_1 + 0x10) == param_2)) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 2;
    return 1;
  }
  return 0;
}



bool ossl_quic_sstream_mark_lost(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_3;
  iVar1 = ossl_uint_set_insert(param_1 + 0x20,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_quic_sstream_mark_lost_fin(long param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x50) & 4) == 0;
  if (bVar1) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfd;
  }
  return bVar1;
}



undefined8 ossl_quic_sstream_mark_acked(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  size_t len;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_3;
  uVar5 = ossl_uint_set_insert(param_1 + 7,&local_48);
  if ((int)uVar5 != 0) {
    lVar2 = param_1[7];
    if (lVar2 != 0) {
      uVar7 = *(ulong *)(lVar2 + 0x18);
      uVar3 = param_1[3];
      if ((*(ulong *)(lVar2 + 0x10) <= uVar3) && (uVar7 >> 0x3e == 0)) {
        uVar1 = uVar7 + 1;
        if (((*(byte *)(param_1 + 10) >> 3 & 1) != 0) &&
           ((uVar4 = param_1[1], uVar4 != 0 && (uVar3 < uVar7)))) {
          uVar6 = uVar3 % uVar4;
          uVar7 = param_1[2];
          if (uVar1 <= (ulong)param_1[2]) {
            uVar7 = uVar1;
          }
          len = uVar7 - uVar3;
          if (uVar4 - uVar6 < len) {
            OPENSSL_cleanse((void *)(*param_1 + uVar6),uVar4 - uVar6);
            len = len + (uVar6 - param_1[1]);
            uVar6 = 0;
          }
          if (len != 0) {
            OPENSSL_cleanse((void *)(*param_1 + uVar6),len);
          }
        }
        param_1[3] = uVar1;
        if ((ulong)param_1[2] < uVar1) {
          param_1[2] = uVar1;
        }
      }
    }
    uVar5 = 1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_quic_sstream_mark_acked_fin(long param_1)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0x50) & 1) != 0;
  if (bVar1) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 4;
  }
  return bVar1;
}



void ossl_quic_sstream_fin(long param_1)

{
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
  }
  return;
}



undefined8 ossl_quic_sstream_get_final_size(long param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(param_1 + 0x10);
    }
    return 1;
  }
  return 0;
}



undefined8 ossl_quic_sstream_append(long *param_1,void *param_2,ulong param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong __n;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  void *__src;
  long lVar13;
  long in_FS_OFFSET;
  long local_90;
  ulong local_58;
  long lStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 10) & 1) != 0) {
LAB_00100a89:
    local_90 = 0;
    uVar7 = 0;
    goto LAB_00100a20;
  }
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  lVar1 = *param_1;
  lVar2 = param_1[3];
  if (param_3 == 0) {
LAB_00100a19:
    local_90 = 0;
  }
  else {
    lVar9 = uVar3 + lVar2;
    local_90 = 0;
    uVar6 = uVar4;
    uVar8 = uVar3;
    lVar11 = lVar1;
    while( true ) {
      uVar10 = 0x4000000000000000 - uVar6;
      if (param_3 < 0x4000000000000000 - uVar6) {
        uVar10 = param_3;
      }
      if (lVar9 - uVar6 < uVar10) {
        uVar10 = lVar9 - uVar6;
      }
      if (uVar10 == 0) break;
      lVar13 = 0;
      __src = param_2;
      do {
        __n = uVar8 - uVar6 % uVar8;
        if (uVar10 < __n) {
          __n = uVar10;
        }
        memcpy((void *)(lVar11 + uVar6 % uVar8),__src,__n);
        uVar8 = param_1[1];
        __src = (void *)((long)__src + __n);
        lVar13 = lVar13 + __n;
        uVar6 = param_1[2] + __n;
        param_1[2] = uVar6;
        uVar12 = 0x4000000000000000 - uVar6;
        if (uVar10 - __n < 0x4000000000000000 - uVar6) {
          uVar12 = uVar10 - __n;
        }
        lVar9 = param_1[3] + uVar8;
        uVar10 = lVar9 - uVar6;
        if (uVar12 <= lVar9 - uVar6) {
          uVar10 = uVar12;
        }
      } while (uVar10 != 0);
      if (lVar13 == 0) break;
      local_90 = local_90 + lVar13;
      param_2 = (void *)((long)param_2 + lVar13);
      param_3 = param_3 - lVar13;
      if (param_3 == 0) break;
      lVar11 = *param_1;
    }
    if (local_90 == 0) goto LAB_00100a19;
    lStack_50 = local_90 + -1 + uVar4;
    local_58 = uVar4;
    iVar5 = ossl_uint_set_insert(lStack_50,param_1 + 4,&local_58);
    if (iVar5 == 0) {
      *param_1 = lVar1;
      param_1[3] = lVar2;
      param_1[1] = uVar3;
      param_1[2] = uVar4;
      goto LAB_00100a89;
    }
  }
  uVar7 = 1;
LAB_00100a20:
  *param_4 = local_90;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_quic_sstream_set_buffer_size(long param_1,undefined8 param_2)

{
  ring_buf_resize(param_1,param_2,*(byte *)(param_1 + 0x50) >> 3 & 1);
  return;
}



undefined8 ossl_quic_sstream_get_buffer_size(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



long ossl_quic_sstream_get_buffer_used(long param_1)

{
  return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18);
}



long ossl_quic_sstream_get_buffer_avail(long param_1)

{
  return (*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8)) - *(long *)(param_1 + 0x10);
}



bool ossl_quic_sstream_is_totally_acked(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x50) & 5) == 1) {
    return false;
  }
  lVar1 = ossl_quic_sstream_get_cur_size();
  if (lVar1 == 0) {
    return true;
  }
  if (*(long *)(param_1 + 0x48) == 1) {
    if (*(long *)(*(long *)(param_1 + 0x38) + 0x10) == 0) {
      return *(long *)(*(long *)(param_1 + 0x38) + 0x18) + 1 == *(long *)(param_1 + 0x10);
    }
  }
  return false;
}



void ossl_quic_sstream_adjust_iov(ulong param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_3 != 0) {
    lVar1 = param_2 + param_3 * 0x10;
    uVar2 = 0;
    do {
      while (uVar3 = uVar2 + *(long *)(param_2 + 8), uVar2 < param_1) {
        if (uVar3 <= param_1) goto LAB_00100b80;
        lVar4 = param_2 + 0x10;
        *(ulong *)(param_2 + 8) = param_1 - uVar2;
        uVar2 = uVar3;
        param_2 = lVar4;
        if (lVar4 == lVar1) {
          return;
        }
      }
      *(undefined8 *)(param_2 + 8) = 0;
LAB_00100b80:
      param_2 = param_2 + 0x10;
      uVar2 = uVar3;
    } while (param_2 != lVar1);
  }
  return;
}



void ossl_quic_sstream_set_cleanse(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xf7 | (param_2 & 1) * '\b';
  return;
}


