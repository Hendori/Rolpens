
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 dgram_pair_init(long param_1)

{
  undefined8 uVar1;
  void *ptr;
  long lVar2;
  
  ptr = (void *)CRYPTO_zalloc(0x60,"crypto/bio/bss_dgram_pair.c",0x117);
  uVar1 = _UNK_00102018;
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x30) = __LC1;
    *(undefined8 *)((long)ptr + 0x38) = uVar1;
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)((long)ptr + 0x50) = lVar2;
    if (lVar2 != 0) {
      *(void **)(param_1 + 0x40) = ptr;
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



long dgram_pair_read_inner(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong __n;
  long lVar4;
  long lVar5;
  
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar4 = *(long *)(param_1 + 0x10);
    do {
      while( true ) {
        lVar2 = *(long *)(param_1 + 0x28);
        uVar1 = *(ulong *)(param_1 + 0x18);
        uVar3 = lVar4 - lVar2;
        __n = uVar1;
        if (uVar3 <= uVar1) {
          __n = uVar3;
        }
        if (__n == 0) {
          return lVar5;
        }
        if (param_3 < __n) {
          __n = param_3;
        }
        if (param_2 != (void *)0x0) break;
        if ((uVar3 < __n) || (uVar1 < __n)) goto LAB_001000d8;
        if (lVar4 == lVar2 + __n) {
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(ulong *)(param_1 + 0x18) = uVar1 - __n;
          goto LAB_001000d8;
        }
        *(ulong *)(param_1 + 0x28) = lVar2 + __n;
        lVar5 = lVar5 + __n;
        *(ulong *)(param_1 + 0x18) = uVar1 - __n;
        param_3 = param_3 - __n;
        if (param_3 == 0) {
          return lVar5;
        }
      }
      param_2 = memcpy(param_2,(void *)(*(long *)(param_1 + 8) + lVar2),__n);
      lVar4 = *(long *)(param_1 + 0x10);
      if ((__n <= (ulong)(lVar4 - *(long *)(param_1 + 0x28))) &&
         (uVar1 = *(ulong *)(param_1 + 0x18), __n <= uVar1)) {
        lVar2 = *(long *)(param_1 + 0x28) + __n;
        if (lVar2 == lVar4) {
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(ulong *)(param_1 + 0x18) = uVar1 - __n;
        }
        else {
          *(long *)(param_1 + 0x28) = lVar2;
          *(ulong *)(param_1 + 0x18) = uVar1 - __n;
        }
      }
      param_2 = (void *)((long)param_2 + __n);
LAB_001000d8:
      lVar5 = lVar5 + __n;
      param_3 = param_3 - __n;
    } while (param_3 != 0);
  }
  return lVar5;
}



ulong dgram_pair_read_actual
                (BIO *param_1,long param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                int param_6)

{
  bio_st *pbVar1;
  bio_st *pbVar2;
  _func_603 *p_Var3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  ulong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  pbVar1 = param_1->prev_bio;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == 0) {
    BIO_clear_flags(param_1,0xf);
  }
  if (param_1->num == 0) {
    param_3 = 0xffffffffffffff88;
    goto LAB_001002af;
  }
  if (pbVar1 != (bio_st *)0x0) {
    if (pbVar1->method == (BIO_METHOD *)0x0) {
      p_Var3 = pbVar1->callback;
      pbVar2 = pbVar1;
    }
    else {
      pbVar2 = (bio_st *)pbVar1->method->destroy;
      if (pbVar2 == (bio_st *)0x0) goto LAB_001002a8;
      p_Var3 = pbVar2->callback;
    }
    if (p_Var3 != (_func_603 *)0x0) {
      if ((param_3 != 0) && (param_2 == 0)) {
        param_3 = 0xffffffffffffff83;
        goto LAB_001002af;
      }
      if ((param_4 != (undefined8 *)0x0) && ((pbVar1->num_write & 2) == 0)) {
        param_3 = 0xffffffffffffff91;
        goto LAB_001002af;
      }
      iVar4 = pbVar2->num;
      uVar5 = *(undefined4 *)&pbVar2->field_0x2c;
      iVar6 = pbVar2->init;
      iVar7 = pbVar2->shutdown;
      lVar8 = dgram_pair_read_inner(pbVar2,&local_128,0xe8);
      if (lVar8 == 0) {
        if (param_6 == 0) {
          BIO_set_flags(param_1,9);
        }
LAB_00100414:
        param_3 = 0xffffffffffffff90;
        goto LAB_001002af;
      }
      if (lVar8 != 0xe8) {
        param_3 = 0xffffffffffffff84;
        goto LAB_001002af;
      }
      uVar9 = local_128;
      if ((local_128 < param_3) || (uVar9 = param_3, local_128 <= param_3)) {
        param_3 = dgram_pair_read_inner(pbVar2,param_2,uVar9);
        if (uVar9 == param_3) {
LAB_001002f7:
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = local_b0;
            param_4[1] = uStack_a8;
            param_4[2] = local_a0;
            param_4[3] = uStack_98;
            param_4[4] = local_90;
            param_4[5] = uStack_88;
            param_4[6] = local_80;
            param_4[7] = uStack_78;
            param_4[8] = local_70;
            param_4[9] = uStack_68;
            param_4[10] = local_60;
            param_4[0xb] = uStack_58;
            param_4[0xc] = local_50;
            param_4[0xd] = uStack_48;
          }
          if (param_5 != (undefined8 *)0x0) {
            *param_5 = local_120;
            param_5[1] = uStack_118;
            param_5[2] = local_110;
            param_5[3] = uStack_108;
            param_5[4] = local_100;
            param_5[5] = uStack_f8;
            param_5[6] = local_f0;
            param_5[7] = uStack_e8;
            param_5[8] = local_e0;
            param_5[9] = uStack_d8;
            param_5[10] = local_d0;
            param_5[0xb] = uStack_c8;
            param_5[0xc] = local_c0;
            param_5[0xd] = uStack_b8;
          }
          goto LAB_001002af;
        }
      }
      else {
        if ((pbVar1->num_write & 1) != 0) {
          pbVar2->num = iVar4;
          *(undefined4 *)&pbVar2->field_0x2c = uVar5;
          pbVar2->init = iVar6;
          pbVar2->shutdown = iVar7;
          goto LAB_00100414;
        }
        uVar9 = dgram_pair_read_inner(pbVar2,param_2,param_3);
        if ((uVar9 == param_3) &&
           (lVar8 = dgram_pair_read_inner(pbVar2,0,local_128 - param_3),
           lVar8 == local_128 - param_3)) goto LAB_001002f7;
      }
    }
  }
LAB_001002a8:
  param_3 = 0xffffffffffffff98;
LAB_001002af:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
dgram_pair_recvmmsg(long param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5,
                   long *param_6)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x40);
  if (param_4 == 0) {
    *param_6 = 0;
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x28) == 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x42c,"dgram_pair_recvmmsg");
      ERR_set_error(0x20,0x7c,0);
    }
    else {
      if (*plVar5 != 0) {
        plVar5 = *(long **)(*plVar5 + 0x40);
      }
      lVar4 = 0;
      iVar1 = CRYPTO_THREAD_write_lock(plVar5[10]);
      if (iVar1 != 0) {
        do {
          lVar2 = dgram_pair_read_actual(param_1,*param_2,param_2[1],param_2[3],param_2[2],1);
          if (lVar2 < 0) {
            *param_6 = lVar4;
            if (lVar4 != 0) goto LAB_00100547;
            uVar3 = 0;
            ERR_new();
            ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x445,"dgram_pair_recvmmsg");
            ERR_set_error(0x20,-(int)lVar2,0);
            goto LAB_0010054c;
          }
          lVar4 = lVar4 + 1;
          param_2[1] = lVar2;
          param_2[4] = 0;
          param_2 = (undefined8 *)((long)param_2 + param_3);
        } while (param_4 != lVar4);
        *param_6 = param_4;
LAB_00100547:
        uVar3 = 1;
LAB_0010054c:
        CRYPTO_THREAD_unlock(plVar5[10]);
        return uVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x437,"dgram_pair_recvmmsg");
      ERR_set_error(0x20,0xc0110,0);
    }
    uVar3 = 0;
    *param_6 = 0;
  }
  return uVar3;
}



ulong dgram_pair_read(long param_1,undefined8 param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (param_3 < 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x3f8,"dgram_pair_read");
    ERR_set_error(0x20,0x7d,0);
  }
  else if (*plVar1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x3fd,"dgram_pair_read");
    ERR_set_error(0x20,0x7c,0);
  }
  else {
    plVar2 = *(long **)(*plVar1 + 0x40);
    plVar4 = plVar1;
    plVar6 = plVar2;
    if ((*(byte *)(plVar2 + 0xb) & 4) == 0) {
      plVar4 = plVar2;
      plVar6 = plVar1;
    }
    if ((((((*(byte *)(plVar2 + 0xb) ^ *(byte *)(plVar1 + 0xb)) & 4) != 0) && (plVar1 != plVar2)) &&
        (plVar4 != plVar6)) && (iVar3 = CRYPTO_THREAD_write_lock(plVar6[10]), iVar3 != 0)) {
      iVar3 = CRYPTO_THREAD_write_lock(plVar4[10]);
      if (iVar3 != 0) {
        uVar5 = dgram_pair_read_actual(param_1,param_2,(long)param_3,0,0,0);
        if ((long)uVar5 < 0) {
          if (uVar5 != 0xffffffffffffff90) {
            ERR_new();
            ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x410,"dgram_pair_read");
            ERR_set_error(0x20,-(int)uVar5,0);
          }
          uVar5 = 0xffffffff;
        }
        CRYPTO_THREAD_unlock(plVar2[10]);
        CRYPTO_THREAD_unlock(plVar1[10]);
        goto LAB_001006af;
      }
      CRYPTO_THREAD_unlock(plVar6[10]);
    }
    ERR_new();
    ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x409,"dgram_pair_read");
    ERR_set_error(0x20,0xc0110,0);
  }
  uVar5 = 0xffffffff;
LAB_001006af:
  return uVar5 & 0xffffffff;
}



ulong dgram_mem_read(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (param_3 < 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x45e,"dgram_mem_read");
    ERR_set_error(0x20,0x7d,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x50));
    if (iVar2 != 0) {
      uVar3 = dgram_pair_read_actual(param_1,param_2,(long)param_3,0,0,0);
      uVar4 = uVar3 & 0xffffffff;
      if ((long)uVar3 < 0) {
        if (uVar3 != 0xffffffffffffff90) {
          ERR_new();
          ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x46a,"dgram_mem_read");
          ERR_set_error(0x20,-(int)uVar3,0);
        }
        uVar4 = 0xffffffff;
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x50));
      return uVar4;
    }
    ERR_new();
    ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x463,"dgram_mem_read");
    ERR_set_error(0x20,0xc0110,0);
  }
  return 0xffffffff;
}



void dgram_pair_ctrl_destroy_bio_pair_isra_0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x40);
  CRYPTO_free((void *)plVar1[1]);
  lVar2 = plVar1[9];
  plVar1[1] = 0;
  *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  BIO_ADDR_free(lVar2);
  lVar2 = *plVar1;
  if ((lVar2 != 0) && (plVar3 = *(long **)(lVar2 + 0x40), param_1 == *plVar3)) {
    CRYPTO_free((void *)plVar3[1]);
    plVar3[1] = 0;
    *(undefined1 (*) [16])(plVar3 + 2) = (undefined1  [16])0x0;
    *(undefined4 *)(lVar2 + 0x28) = 0;
    *plVar1 = 0;
    *plVar3 = 0;
  }
  return;
}



undefined8 dgram_pair_free(long param_1)

{
  void *ptr;
  
  if (param_1 == 0) {
    return 0;
  }
  ptr = *(void **)(param_1 + 0x40);
  if (ptr != (void *)0x0) {
    dgram_pair_ctrl_destroy_bio_pair_isra_0();
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)ptr + 0x50));
    CRYPTO_free(ptr);
    return 1;
  }
  return 0;
}



undefined8 dgram_mem_init(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  iVar3 = dgram_pair_init();
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    pvVar4 = CRYPTO_malloc((int)uVar2,"crypto/bio/bss_dgram_pair.c",0x25);
    *(void **)(lVar1 + 8) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x134,"dgram_mem_init");
      ERR_set_error(0x20,0x80020,0);
      uVar5 = 0;
    }
    else {
      *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) | 8;
      uVar5 = 1;
      *(undefined8 *)(lVar1 + 0x10) = uVar2;
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0;
      *(undefined8 *)(lVar1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 1;
    }
  }
  return uVar5;
}



undefined8 ring_buf_resize(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  
  if ((void *)*param_1 == (void *)0x0) {
    pvVar2 = CRYPTO_malloc((int)param_2,"crypto/bio/bss_dgram_pair.c",0x25);
    *param_1 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    param_1[1] = param_2;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
  }
  else if (param_1[1] != param_2) {
    if ((param_1[2] != 0) && (param_2 < (ulong)param_1[1])) {
      return 0;
    }
    pvVar2 = CRYPTO_realloc((void *)*param_1,(int)param_2,"crypto/bio/bss_dgram_pair.c",0x86);
    if (pvVar2 == (void *)0x0) {
      return 0;
    }
    if (param_1[2] == 0) {
      *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
    }
    else {
      uVar1 = param_1[4];
      if ((ulong)param_1[3] <= uVar1) {
        lVar3 = param_2 - param_1[1];
        memmove((void *)(uVar1 + lVar3 + (long)pvVar2),(void *)((long)pvVar2 + uVar1),
                param_1[1] - uVar1);
        param_1[4] = param_1[4] + lVar3;
      }
    }
    *param_1 = pvVar2;
    param_1[1] = param_2;
  }
  return 1;
}



long dgram_pair_write_inner(long param_1,void *param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n;
  void *local_48;
  long local_40;
  
  if (param_3 == 0) {
    local_40 = 0;
  }
  else {
    local_40 = 0;
    uVar2 = *(ulong *)(param_1 + 0x10);
    local_48 = param_2;
    do {
      __n = uVar2 - *(long *)(param_1 + 0x18);
      uVar2 = uVar2 - *(long *)(param_1 + 0x20);
      if (uVar2 < __n) {
        __n = uVar2;
      }
      if (__n == 0) {
        if ((*(byte *)(param_1 + 0x58) & 8) == 0) {
          return local_40;
        }
        uVar5 = *(ulong *)(param_1 + 0x30);
        uVar2 = uVar5 + param_3;
        uVar4 = uVar5;
        if (uVar5 < uVar2) {
          do {
            if (0x7ffffffffffffffe < uVar4) {
              return local_40;
            }
            while (uVar5 >> 0x3d == 0) {
              uVar5 = (uVar5 * 8) / 5;
              if (uVar2 <= uVar5) goto LAB_00100c47;
            }
            if (uVar5 < 8) {
              uVar6 = 3;
              uVar4 = uVar5;
            }
            else {
              uVar4 = uVar5 / 5;
              uVar6 = uVar5 % 5;
              uVar5 = 8;
              uVar4 = uVar4 << 3;
            }
            uVar4 = (uVar6 * uVar5) / 5 + uVar4;
            uVar5 = 0x7fffffffffffffff;
            if (uVar4 < 0x8000000000000000) {
              uVar5 = uVar4;
            }
          } while (uVar5 < uVar2);
        }
        else if (uVar5 == 0) {
          return local_40;
        }
LAB_00100c47:
        iVar1 = ring_buf_resize(param_1 + 8,uVar5);
        if (iVar1 == 0) {
          return local_40;
        }
        uVar2 = *(ulong *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x20);
        *(ulong *)(param_1 + 0x30) = uVar5;
LAB_00100c67:
        uVar5 = *(long *)(param_1 + 0x18) + __n;
        if (uVar5 <= uVar2) {
          *(ulong *)(param_1 + 0x18) = uVar5;
          uVar5 = lVar3 + __n;
          if (lVar3 + __n == uVar2) {
            uVar5 = 0;
          }
          *(ulong *)(param_1 + 0x20) = uVar5;
        }
      }
      else {
        if (param_3 < __n) {
          __n = param_3;
        }
        memcpy((void *)(*(long *)(param_1 + 8) + *(long *)(param_1 + 0x20)),local_48,__n);
        uVar2 = *(ulong *)(param_1 + 0x10);
        lVar3 = *(long *)(param_1 + 0x20);
        if (__n <= uVar2 - lVar3) goto LAB_00100c67;
      }
      local_48 = (void *)((long)local_48 + __n);
      local_40 = local_40 + __n;
      param_3 = param_3 - __n;
    } while (param_3 != 0);
  }
  return local_40;
}



long dgram_pair_write_actual
               (BIO *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 *param_5,
               int param_6)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  bio_st *pbVar8;
  long *plVar9;
  long in_FS_OFFSET;
  long local_128 [29];
  long local_40;
  
  pbVar1 = param_1->prev_bio;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = local_128;
  for (lVar7 = 0x1d; lVar7 != 0; lVar7 = lVar7 + -1) {
    *plVar9 = 0;
    plVar9 = plVar9 + 1;
  }
  if (param_6 == 0) {
    BIO_clear_flags(param_1,0xf);
  }
  if (param_1->num == 0) {
    lVar7 = -0x78;
    goto LAB_00100f27;
  }
  lVar7 = -0x68;
  if ((pbVar1 == (bio_st *)0x0) || (pbVar1->callback == (_func_603 *)0x0)) goto LAB_00100f27;
  if ((param_3 != 0) && (param_2 == 0)) {
    lVar7 = -0x7d;
    goto LAB_00100f27;
  }
  if ((param_4 != (undefined8 *)0x0) && ((pbVar1->num_write & 2) == 0)) {
    lVar7 = -0x6f;
    goto LAB_00100f27;
  }
  pbVar8 = pbVar1;
  if (pbVar1->method != (BIO_METHOD *)0x0) {
    pbVar8 = (bio_st *)pbVar1->method->destroy;
  }
  if (param_5 == (undefined8 *)0x0) {
    local_128[0xf] = zero_addr_6._0_8_;
    local_128[0x10] = zero_addr_6._8_8_;
    local_128[0x15] = zero_addr_6._48_8_;
    local_128[0x16] = zero_addr_6._56_8_;
    local_128[0x11] = zero_addr_6._16_8_;
    local_128[0x12] = zero_addr_6._24_8_;
    local_128[0x17] = zero_addr_6._64_8_;
    local_128[0x18] = zero_addr_6._72_8_;
    local_128[0x13] = zero_addr_6._32_8_;
    local_128[0x14] = zero_addr_6._40_8_;
    local_128[0x19] = zero_addr_6._80_8_;
    local_128[0x1a] = zero_addr_6._88_8_;
    local_128[0x1b] = zero_addr_6._96_8_;
    local_128[0x1c] = zero_addr_6._104_8_;
    if (param_4 != (undefined8 *)0x0) goto LAB_00100e9b;
LAB_00100fee:
    param_4 = *(undefined8 **)&pbVar1->references;
    if (param_4 != (undefined8 *)0x0) goto LAB_00100e9b;
    local_128[1] = zero_addr_6._0_8_;
    local_128[2] = zero_addr_6._8_8_;
    local_128[3] = zero_addr_6._16_8_;
    local_128[4] = zero_addr_6._24_8_;
    local_128[5] = zero_addr_6._32_8_;
    local_128[6] = zero_addr_6._40_8_;
    local_128[7] = zero_addr_6._48_8_;
    local_128[8] = zero_addr_6._56_8_;
    local_128[9] = zero_addr_6._64_8_;
    local_128[10] = zero_addr_6._72_8_;
    local_128[0xb] = zero_addr_6._80_8_;
    local_128[0xc] = zero_addr_6._88_8_;
    local_128[0xd] = zero_addr_6._96_8_;
    local_128[0xe] = zero_addr_6._104_8_;
  }
  else {
    if (((ulong)pbVar8->prev_bio & 2) == 0) {
      lVar7 = -0x97;
      goto LAB_00100f27;
    }
    local_128[0xf] = *param_5;
    local_128[0x10] = param_5[1];
    local_128[0x11] = param_5[2];
    local_128[0x12] = param_5[3];
    local_128[0x13] = param_5[4];
    local_128[0x14] = param_5[5];
    local_128[0x15] = param_5[6];
    local_128[0x16] = param_5[7];
    local_128[0x17] = param_5[8];
    local_128[0x18] = param_5[9];
    local_128[0x19] = param_5[10];
    local_128[0x1a] = param_5[0xb];
    local_128[0x1b] = param_5[0xc];
    local_128[0x1c] = param_5[0xd];
    if (param_4 == (undefined8 *)0x0) goto LAB_00100fee;
LAB_00100e9b:
    local_128[1] = *param_4;
    local_128[2] = param_4[1];
    local_128[3] = param_4[2];
    local_128[4] = param_4[3];
    local_128[5] = param_4[4];
    local_128[6] = param_4[5];
    local_128[7] = param_4[6];
    local_128[8] = param_4[7];
    local_128[9] = param_4[8];
    local_128[10] = param_4[9];
    local_128[0xb] = param_4[10];
    local_128[0xc] = param_4[0xb];
    local_128[0xd] = param_4[0xc];
    local_128[0xe] = param_4[0xd];
  }
  iVar2 = pbVar1->init;
  iVar3 = pbVar1->shutdown;
  iVar4 = pbVar1->flags;
  iVar5 = pbVar1->retry_reason;
  local_128[0] = param_3;
  lVar7 = dgram_pair_write_inner(pbVar1,local_128,0xe8);
  if ((lVar7 != 0xe8) ||
     (lVar6 = dgram_pair_write_inner(pbVar1,param_2,param_3), lVar7 = param_3, lVar6 != param_3)) {
    pbVar1->init = iVar2;
    pbVar1->shutdown = iVar3;
    pbVar1->flags = iVar4;
    pbVar1->retry_reason = iVar5;
    if (param_6 == 0) {
      BIO_set_flags(param_1,10);
    }
    lVar7 = -0x70;
  }
LAB_00100f27:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar7;
}



undefined4
dgram_pair_sendmmsg(long param_1,undefined8 *param_2,long param_3,long param_4,undefined8 param_5,
                   long *param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (param_4 == 0) {
    *param_6 = 0;
    uVar4 = 1;
  }
  else {
    lVar5 = 0;
    iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x50));
    if (iVar2 == 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x526,"dgram_pair_sendmmsg");
      ERR_set_error(0x20,0xc0110,0);
      uVar4 = 0;
      *param_6 = 0;
    }
    else {
      do {
        lVar3 = dgram_pair_write_actual(param_1,*param_2,param_2[1],param_2[3],param_2[2],1);
        if (lVar3 < 0) {
          *param_6 = lVar5;
          if (lVar5 != 0) goto LAB_001011bf;
          ERR_new();
          ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x534,"dgram_pair_sendmmsg");
          ERR_set_error(0x20,-(int)lVar3,0);
          uVar4 = 0;
          goto LAB_001011c4;
        }
        lVar5 = lVar5 + 1;
        param_2[4] = 0;
        param_2 = (undefined8 *)((long)param_2 + param_3);
      } while (param_4 != lVar5);
      *param_6 = param_4;
LAB_001011bf:
      uVar4 = 1;
LAB_001011c4:
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x50));
    }
  }
  return uVar4;
}



ulong dgram_pair_write(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (param_3 < 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x501,"dgram_pair_write");
    ERR_set_error(0x20,0x7d,0);
  }
  else {
    iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(lVar1 + 0x50));
    if (iVar2 != 0) {
      uVar3 = dgram_pair_write_actual(param_1,param_2,(long)param_3,0,0,0);
      uVar4 = uVar3 & 0xffffffff;
      if ((long)uVar3 < 0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x50c,"dgram_pair_write");
        uVar4 = 0xffffffff;
        ERR_set_error(0x20,-(int)uVar3,0);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x50));
      return uVar4;
    }
    ERR_new();
    ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x506,"dgram_pair_write");
    ERR_set_error(0x20,0xc0110,0);
  }
  return 0xffffffff;
}



ulong dgram_mem_ctrl(long param_1,undefined4 param_2,ulong param_3,uint *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  ulong local_118 [29];
  long local_30;
  
  plVar6 = *(long **)(param_1 + 0x40);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 == (long *)0x0) goto switchD_0010139b_caseD_0;
  switch(param_2) {
  default:
    goto switchD_0010139b_caseD_0;
  case 1:
    plVar6[5] = 0;
    *(undefined1 (*) [16])(plVar6 + 3) = (undefined1  [16])0x0;
    break;
  case 2:
    local_118[0] = 1;
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_001013d2;
    if (*plVar6 != 0) {
      local_118[0] = -(ulong)(*(long *)(*plVar6 + 0x40) == 0);
      goto LAB_001013d2;
    }
    goto switchD_0010139b_caseD_0;
  case 10:
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*plVar6 != 0) {
        plVar6 = *(long **)(*plVar6 + 0x40);
      }
      iVar3 = CRYPTO_THREAD_write_lock(plVar6[10]);
      if (iVar3 != 0) {
        lVar1 = plVar6[5];
        lVar2 = plVar6[3];
        lVar5 = dgram_pair_read_inner(plVar6,local_118,0xe8);
        plVar6[5] = lVar1;
        plVar6[3] = lVar2;
        CRYPTO_THREAD_unlock(plVar6[10]);
        if (lVar5 == 0xe8) goto LAB_001013d2;
      }
    }
    goto switchD_0010139b_caseD_0;
  case 0xb:
    break;
  case 0x29:
    local_118[0] = (ulong)(int)plVar6[7];
    goto LAB_001013d2;
  case 0x2a:
    plVar6[7] = param_3 & 0xffffffff;
    if (*plVar6 != 0) {
      *(ulong *)(*(long *)(*plVar6 + 0x40) + 0x38) = param_3 & 0xffffffff;
    }
    break;
  case 0x52:
    local_118[0] = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*plVar6 != 0) {
        plVar6 = *(long **)(*plVar6 + 0x40);
      }
      local_118[0] = (ulong)((~*(uint *)(plVar6 + 8) & 9) == 0);
    }
    goto LAB_001013d2;
  case 0x53:
    *param_4 = *(byte *)(plVar6 + 0xb) >> 1 & 1;
    break;
  case 0x54:
    local_118[0] = 0;
    if (*(int *)(param_1 + 0x28) == 0) goto LAB_001013d2;
    plVar4 = plVar6;
    if (*plVar6 != 0) {
      plVar4 = *(long **)(*plVar6 + 0x40);
    }
    if ((~*(uint *)(plVar4 + 8) & 9) == 0) {
      local_118[0] = 1;
      *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xfd | ((int)param_3 != 0) * '\x02';
      goto LAB_001013d2;
    }
    goto switchD_0010139b_caseD_0;
  case 0x55:
  case 0x56:
    local_118[0] = (ulong)*(uint *)(plVar6 + 8);
    goto LAB_001013d2;
  case 0x57:
    *(int *)(plVar6 + 8) = (int)param_3;
    break;
  case 0x58:
    local_118[0] = (ulong)(*(byte *)(plVar6 + 0xb) & 1);
    goto LAB_001013d2;
  case 0x59:
    *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xfe | 0 < (long)param_3;
    break;
  case 0x5e:
    BIO_ADDR_free(plVar6[9]);
    plVar6[9] = (long)param_4;
    break;
  case 0x88:
    if (*plVar6 == 0) {
      uVar7 = 0x400;
      if (0x3ff < param_3) {
        uVar7 = param_3;
      }
      if ((plVar6[1] == 0) || (iVar3 = ring_buf_resize(plVar6 + 1,uVar7), iVar3 != 0)) {
        plVar6[6] = uVar7;
        local_118[0] = 1;
        *(byte *)(plVar6 + 0xb) = *(byte *)(plVar6 + 0xb) & 0xf7;
        goto LAB_001013d2;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x1d1,"dgram_pair_ctrl_set_write_buf_size");
      ERR_set_error(0x20,0x7b,0);
    }
switchD_0010139b_caseD_0:
    local_118[0] = 0;
    goto LAB_001013d2;
  case 0x89:
    local_118[0] = plVar6[6];
    goto LAB_001013d2;
  case 0x8c:
    iVar3 = CRYPTO_THREAD_read_lock(plVar6[10]);
    local_118[0] = 0;
    if (iVar3 != 0) {
      uVar7 = plVar6[2] - plVar6[3];
      if (0xe7 < uVar7) {
        uVar7 = uVar7 - 0xe8;
      }
      if (uVar7 < (ulong)plVar6[7]) {
        uVar7 = 0;
      }
      CRYPTO_THREAD_unlock(plVar6[10]);
      local_118[0] = uVar7;
    }
    goto LAB_001013d2;
  }
  local_118[0] = 1;
LAB_001013d2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_118[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long dgram_pair_ctrl(long param_1,int param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if (param_2 == 0x8a) {
    if ((param_1 == 0) || (param_4 == 0)) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x158,"dgram_pair_ctrl_make_bio_pair");
      ERR_set_error(0x20,0x7d,0);
    }
    else if ((*(undefined1 **)(param_1 + 8) == dgram_pair_method) &&
            (*(undefined1 **)(param_4 + 8) == dgram_pair_method)) {
      plVar1 = *(long **)(param_1 + 0x40);
      plVar2 = *(long **)(param_4 + 0x40);
      if ((plVar1 == (long *)0x0) || (plVar2 == (long *)0x0)) {
        ERR_new();
        uVar6 = 0x167;
      }
      else {
        if ((*plVar1 != 0) || (*plVar2 != 0)) {
          ERR_new();
          ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x170,"dgram_pair_ctrl_make_bio_pair");
          ERR_set_error(0x20,0x7b,"cannot associate a BIO_dgram_pair which is already in use");
          return 0;
        }
        uVar3 = plVar1[6];
        if ((0x3ff < uVar3) && (uVar7 = plVar2[6], 0x3ff < uVar7)) {
          if (uVar3 != plVar1[2]) {
            pvVar5 = CRYPTO_malloc((int)uVar3,"crypto/bio/bss_dgram_pair.c",0x25);
            plVar1[1] = (long)pvVar5;
            if (pvVar5 == (void *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x17d,"dgram_pair_ctrl_make_bio_pair");
              ERR_set_error(0x20,0x80020,0);
              return 0;
            }
            plVar1[2] = uVar3;
            uVar7 = plVar2[6];
            plVar1[3] = 0;
            plVar1[5] = 0;
            plVar1[4] = 0;
          }
          if (plVar2[2] != uVar7) {
            pvVar5 = CRYPTO_malloc((int)uVar7,"crypto/bio/bss_dgram_pair.c",0x25);
            plVar2[1] = (long)pvVar5;
            if (pvVar5 == (void *)0x0) {
              ERR_new();
              ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x183,"dgram_pair_ctrl_make_bio_pair");
              ERR_set_error(0x20,0x80020,0);
              CRYPTO_free((void *)plVar1[1]);
              plVar1[1] = 0;
              *(undefined1 (*) [16])(plVar1 + 2) = (undefined1  [16])0x0;
              return 0;
            }
            plVar2[2] = uVar7;
            plVar2[3] = 0;
            plVar2[5] = 0;
            plVar2[4] = 0;
          }
          *plVar1 = param_4;
          *plVar2 = param_1;
          *(byte *)(plVar1 + 0xb) = *(byte *)(plVar1 + 0xb) & 0xfb;
          *(byte *)(plVar2 + 0xb) = *(byte *)(plVar2 + 0xb) | 4;
          *(undefined4 *)(param_1 + 0x28) = 1;
          *(undefined4 *)(param_4 + 0x28) = 1;
          return 1;
        }
        ERR_new();
        uVar6 = 0x177;
      }
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",uVar6,"dgram_pair_ctrl_make_bio_pair");
      ERR_set_error(0x20,0x78,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_dgram_pair.c",0x15e,"dgram_pair_ctrl_make_bio_pair");
      ERR_set_error(0x20,0x7d,"both BIOs must be BIO_dgram_pair");
    }
  }
  else {
    if (param_2 == 0x8b) {
      dgram_pair_ctrl_destroy_bio_pair_isra_0();
      return 1;
    }
    if (param_2 != 0x55) {
      lVar4 = dgram_mem_ctrl();
      return lVar4;
    }
    if (**(long **)(param_1 + 0x40) != 0) {
      return (long)*(int *)(*(long *)(**(long **)(param_1 + 0x40) + 0x40) + 0x40);
    }
  }
  return 0;
}



undefined1 * BIO_s_dgram_pair(void)

{
  return dgram_pair_method;
}



undefined1 * BIO_s_dgram_mem(void)

{
  return dgram_mem_method;
}



undefined8 BIO_new_bio_dgram_pair(undefined8 *param_1,long param_2,undefined8 *param_3,long param_4)

{
  BIO_METHOD *pBVar1;
  BIO *pBVar2;
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  BIO *pBVar5;
  
  pBVar1 = (BIO_METHOD *)BIO_s_dgram_pair();
  pBVar2 = BIO_new(pBVar1);
  if (pBVar2 == (BIO *)0x0) {
LAB_00101a80:
    bp = (BIO *)0x0;
  }
  else {
    pBVar1 = (BIO_METHOD *)BIO_s_dgram_pair();
    bp = BIO_new(pBVar1);
    if (bp == (BIO *)0x0) goto LAB_00101a80;
    if ((((param_2 == 0) || (lVar3 = BIO_ctrl(pBVar2,0x88,param_2,(void *)0x0), (int)lVar3 != 0)) &&
        ((param_4 == 0 || (lVar3 = BIO_ctrl(bp,0x88,param_4,(void *)0x0), (int)lVar3 != 0)))) &&
       (lVar3 = BIO_ctrl(pBVar2,0x8a,0,bp), (int)lVar3 != 0)) {
      uVar4 = 1;
      pBVar5 = pBVar2;
      pBVar2 = bp;
      goto LAB_00101a29;
    }
  }
  pBVar5 = (BIO *)0x0;
  BIO_free(pBVar2);
  pBVar2 = (BIO *)0x0;
  BIO_free(bp);
  uVar4 = 0;
LAB_00101a29:
  *param_1 = pBVar5;
  *param_3 = pBVar2;
  return uVar4;
}


