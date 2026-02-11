
bool slh_prf_msg_sha2(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8 [6];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  lVar2 = *param_1;
  lVar3 = param_1[3];
  puVar7 = (undefined8 *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined4 *)(*(long *)(lVar2 + 0xa0) + 0x10);
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if ((int)param_1[4] == 0) {
    uVar5 = EVP_MD_get0_name(*(undefined8 *)(lVar2 + 0xc0),param_2,param_3,0);
    OSSL_PARAM_construct_utf8_string(&local_138,"digest",uVar5,0);
    local_e8 = local_118;
    puVar6 = &local_e0;
    local_108 = local_138;
    uStack_100 = uStack_130;
    local_f8 = local_128;
    uStack_f0 = uStack_120;
    if (*(long *)(lVar2 + 0x90) != 0) {
      OSSL_PARAM_construct_utf8_string(&local_138,"properties",*(long *)(lVar2 + 0x90),0);
      local_c0 = local_118;
      puVar6 = local_b8;
      local_e0 = local_138;
      uStack_d8 = uStack_130;
      local_d0 = local_128;
      uStack_c8 = uStack_120;
    }
    OSSL_PARAM_construct_end(&local_138);
    puVar7 = &local_108;
    *puVar6 = local_138;
    puVar6[1] = uStack_130;
    puVar6[2] = local_128;
    puVar6[3] = uStack_120;
    *(undefined4 *)(param_1 + 4) = 1;
    puVar6[4] = local_118;
  }
  iVar4 = EVP_MAC_init(lVar3,param_2,uVar1,puVar7);
  if (iVar4 == 1) {
    iVar4 = EVP_MAC_update(lVar3,param_3,uVar1);
    if (iVar4 == 1) {
      iVar4 = EVP_MAC_update(lVar3,param_4,param_5);
      if (iVar4 == 1) {
        iVar4 = EVP_MAC_final(lVar3,local_88,0,0x40);
        if (iVar4 == 1) {
          iVar4 = WPACKET_memcpy(param_6,local_88,uVar1);
          bVar8 = iVar4 != 0;
          goto LAB_00100092;
        }
      }
    }
  }
  bVar8 = false;
LAB_00100092:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool slh_hmsg_sha2(long *param_1,void *param_2,void *param_3,void *param_4,void *param_5,
                  size_t param_6,uchar *param_7)

{
  uint uVar1;
  long lVar2;
  EVP_MD_CTX *ctx;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong cnt;
  long in_FS_OFFSET;
  bool bVar6;
  uchar local_c8 [136];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(*param_1 + 0xa0);
  cnt = (ulong)*(uint *)(lVar2 + 0x10);
  uVar1 = *(uint *)(lVar2 + 0x28);
  iVar3 = EVP_MD_get_size(*(undefined8 *)(*param_1 + 0xc0));
  __memcpy_chk(local_c8,param_2,cnt,0x80);
  uVar5 = 0x80;
  if (0x7f < cnt) {
    uVar5 = cnt;
  }
  __memcpy_chk(local_c8 + cnt,param_3,cnt,uVar5 - cnt);
  ctx = (EVP_MD_CTX *)param_1[2];
  iVar4 = EVP_DigestInit_ex2(ctx,0,0);
  if (iVar4 == 1) {
    iVar4 = EVP_DigestUpdate(ctx,param_2,cnt);
    if (iVar4 == 1) {
      iVar4 = EVP_DigestUpdate(ctx,param_3,cnt);
      if (iVar4 == 1) {
        iVar4 = EVP_DigestUpdate(ctx,param_4,cnt);
        if (iVar4 == 1) {
          iVar4 = EVP_DigestUpdate(ctx,param_5,param_6);
          if (iVar4 == 1) {
            iVar4 = EVP_DigestFinal_ex(ctx,local_c8 + cnt * 2,(uint *)0x0);
            if (iVar4 == 1) {
              iVar3 = PKCS1_MGF1(param_7,(ulong)uVar1,local_c8,(long)iVar3 + cnt * 2,
                                 *(EVP_MD **)(*param_1 + 0xc0));
              bVar6 = iVar3 == 0;
              goto LAB_001002dc;
            }
          }
        }
      }
    }
  }
  bVar6 = false;
LAB_001002dc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool slh_prf_msg_shake(long *param_1,void *param_2,void *param_3,void *param_4,size_t param_5,
                      undefined8 param_6)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong cnt;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_68 [40];
  long local_40;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  iVar1 = EVP_DigestInit_ex2(ctx,0,0);
  if (iVar1 == 1) {
    iVar1 = EVP_DigestUpdate(ctx,param_2,cnt);
    if (iVar1 == 1) {
      iVar1 = EVP_DigestUpdate(ctx,param_3,cnt);
      if (iVar1 == 1) {
        iVar1 = EVP_DigestUpdate(ctx,param_4,param_5);
        if (iVar1 == 1) {
          iVar1 = EVP_DigestFinalXOF(ctx,local_68,cnt);
          if (iVar1 == 1) {
            iVar1 = WPACKET_memcpy(param_6,local_68,cnt);
            bVar2 = iVar1 != 0;
            goto LAB_00100406;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00100406:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool slh_hmsg_shake(long *param_1,void *param_2,void *param_3,void *param_4,void *param_5,
                   size_t param_6,undefined8 param_7)

{
  undefined4 uVar1;
  EVP_MD_CTX *ctx;
  int iVar2;
  ulong cnt;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  uVar1 = *(undefined4 *)(*(long *)(*param_1 + 0xa0) + 0x28);
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  iVar2 = EVP_DigestInit_ex2(ctx,0,0);
  if ((((iVar2 == 1) && (iVar2 = EVP_DigestUpdate(ctx,param_2,cnt), iVar2 == 1)) &&
      (iVar2 = EVP_DigestUpdate(ctx,param_3,cnt), iVar2 == 1)) &&
     ((iVar2 = EVP_DigestUpdate(ctx,param_4,cnt), iVar2 == 1 &&
      (iVar2 = EVP_DigestUpdate(ctx,param_5,param_6), iVar2 == 1)))) {
    iVar2 = EVP_DigestFinalXOF(ctx,param_7,uVar1);
    return iVar2 == 1;
  }
  return false;
}



bool slh_h_shake(long *param_1,void *param_2,void *param_3,void *param_4,void *param_5,
                undefined8 param_6)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong cnt;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  iVar1 = EVP_DigestInit_ex2(ctx,0,0);
  if ((((iVar1 == 1) && (iVar1 = EVP_DigestUpdate(ctx,param_2,cnt), iVar1 == 1)) &&
      (iVar1 = EVP_DigestUpdate(ctx,param_3,0x20), iVar1 == 1)) &&
     ((iVar1 = EVP_DigestUpdate(ctx,param_4,cnt), iVar1 == 1 &&
      (iVar1 = EVP_DigestUpdate(ctx,param_5,cnt), iVar1 == 1)))) {
    iVar1 = EVP_DigestFinalXOF(ctx,param_6,cnt);
    return iVar1 == 1;
  }
  return false;
}



bool slh_h_sha2(long *param_1,void *param_2,void *param_3,undefined8 param_4,undefined8 param_5,
               void *param_6)

{
  long lVar1;
  EVP_MD_CTX *ctx;
  int iVar2;
  ulong uVar3;
  ulong cnt;
  long in_FS_OFFSET;
  bool bVar4;
  undefined1 local_148 [64];
  uchar local_108 [64];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(*param_1 + 0xa0);
  cnt = (ulong)*(uint *)(lVar1 + 0x10);
  __memcpy_chk(local_148,param_4,cnt,0x40);
  uVar3 = 0x40;
  if (0x3f < cnt) {
    uVar3 = cnt;
  }
  __memcpy_chk(local_148 + cnt,param_5,cnt,uVar3 - cnt);
  ctx = (EVP_MD_CTX *)param_1[2];
  lVar1 = *(long *)(lVar1 + 0x38);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar2 = EVP_DigestInit_ex2(ctx,0,0);
  if (iVar2 == 1) {
    iVar2 = EVP_DigestUpdate(ctx,param_2,cnt);
    if (iVar2 == 1) {
      iVar2 = EVP_DigestUpdate(ctx,local_c8,lVar1 - cnt);
      if (iVar2 == 1) {
        iVar2 = EVP_DigestUpdate(ctx,param_3,0x16);
        if (iVar2 == 1) {
          iVar2 = EVP_DigestUpdate(ctx,local_148,cnt * 2);
          if (iVar2 == 1) {
            iVar2 = EVP_DigestFinal_ex(ctx,local_108,(uint *)0x0);
            bVar4 = iVar2 == 1;
            goto LAB_00100731;
          }
        }
      }
    }
  }
  bVar4 = false;
LAB_00100731:
  memcpy(param_6,local_108,cnt);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool slh_t_shake(long *param_1,void *param_2,void *param_3,void *param_4,size_t param_5,
                undefined8 param_6)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong cnt;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  iVar1 = EVP_DigestInit_ex2(ctx,0,0);
  if ((((iVar1 == 1) && (iVar1 = EVP_DigestUpdate(ctx,param_2,cnt), iVar1 == 1)) &&
      (iVar1 = EVP_DigestUpdate(ctx,param_3,0x20), iVar1 == 1)) &&
     (iVar1 = EVP_DigestUpdate(ctx,param_4,param_5), iVar1 == 1)) {
    iVar1 = EVP_DigestFinalXOF(ctx,param_6,cnt);
    return iVar1 == 1;
  }
  return false;
}



bool slh_prf_shake(long *param_1,void *param_2,void *param_3,void *param_4,undefined8 param_5)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong cnt;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  iVar1 = EVP_DigestInit_ex2(ctx,0,0);
  if ((((iVar1 == 1) && (iVar1 = EVP_DigestUpdate(ctx,param_2,cnt), iVar1 == 1)) &&
      (iVar1 = EVP_DigestUpdate(ctx,param_4,0x20), iVar1 == 1)) &&
     (iVar1 = EVP_DigestUpdate(ctx,param_3,cnt), iVar1 == 1)) {
    iVar1 = EVP_DigestFinalXOF(ctx,param_5,cnt);
    return iVar1 == 1;
  }
  return false;
}



bool slh_f_shake(long *param_1,void *param_2,void *param_3,void *param_4,size_t param_5,
                undefined8 param_6)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong cnt;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  iVar1 = EVP_DigestInit_ex2(ctx,0,0);
  if ((((iVar1 == 1) && (iVar1 = EVP_DigestUpdate(ctx,param_2,cnt), iVar1 == 1)) &&
      (iVar1 = EVP_DigestUpdate(ctx,param_3,0x20), iVar1 == 1)) &&
     (iVar1 = EVP_DigestUpdate(ctx,param_4,param_5), iVar1 == 1)) {
    iVar1 = EVP_DigestFinalXOF(ctx,param_6,cnt);
    return iVar1 == 1;
  }
  return false;
}



bool slh_f_sha2(long *param_1,void *param_2,void *param_3,void *param_4,size_t param_5,void *param_6
               )

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong cnt;
  long in_FS_OFFSET;
  bool bVar2;
  uchar local_108 [64];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = EVP_DigestInit_ex2(ctx,0,0);
  if (iVar1 == 1) {
    iVar1 = EVP_DigestUpdate(ctx,param_2,cnt);
    if (iVar1 == 1) {
      iVar1 = EVP_DigestUpdate(ctx,local_c8,0x40 - cnt);
      if (iVar1 == 1) {
        iVar1 = EVP_DigestUpdate(ctx,param_3,0x16);
        if (iVar1 == 1) {
          iVar1 = EVP_DigestUpdate(ctx,param_4,param_5);
          if (iVar1 == 1) {
            iVar1 = EVP_DigestFinal_ex(ctx,local_108,(uint *)0x0);
            bVar2 = iVar1 == 1;
            goto LAB_00100acc;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00100acc:
  memcpy(param_6,local_108,cnt);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool slh_prf_sha2(long *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  ulong cnt;
  long in_FS_OFFSET;
  bool bVar2;
  uchar local_108 [64];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  ctx = (EVP_MD_CTX *)param_1[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar1 = EVP_DigestInit_ex2(ctx,0,0);
  if (iVar1 == 1) {
    iVar1 = EVP_DigestUpdate(ctx,param_2,cnt);
    if (iVar1 == 1) {
      iVar1 = EVP_DigestUpdate(ctx,local_c8,0x40 - cnt);
      if (iVar1 == 1) {
        iVar1 = EVP_DigestUpdate(ctx,param_4,0x16);
        if (iVar1 == 1) {
          iVar1 = EVP_DigestUpdate(ctx,param_3,cnt);
          if (iVar1 == 1) {
            iVar1 = EVP_DigestFinal_ex(ctx,local_108,(uint *)0x0);
            bVar2 = iVar1 == 1;
            goto LAB_00100c37;
          }
        }
      }
    }
  }
  bVar2 = false;
LAB_00100c37:
  memcpy(param_5,local_108,cnt);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool slh_t_sha2(long *param_1,void *param_2,void *param_3,void *param_4,size_t param_5,void *param_6
               )

{
  EVP_MD_CTX *ctx;
  long lVar1;
  int iVar2;
  ulong cnt;
  long in_FS_OFFSET;
  bool bVar3;
  uchar local_108 [64];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  ctx = (EVP_MD_CTX *)param_1[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(*(long *)(*param_1 + 0xa0) + 0x38);
  cnt = (ulong)*(uint *)(*(long *)(*param_1 + 0xa0) + 0x10);
  local_c8 = (undefined1  [16])0x0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  iVar2 = EVP_DigestInit_ex2(ctx,0,0);
  if (iVar2 == 1) {
    iVar2 = EVP_DigestUpdate(ctx,param_2,cnt);
    if (iVar2 == 1) {
      iVar2 = EVP_DigestUpdate(ctx,local_c8,lVar1 - cnt);
      if (iVar2 == 1) {
        iVar2 = EVP_DigestUpdate(ctx,param_3,0x16);
        if (iVar2 == 1) {
          iVar2 = EVP_DigestUpdate(ctx,param_4,param_5);
          if (iVar2 == 1) {
            iVar2 = EVP_DigestFinal_ex(ctx,local_108,(uint *)0x0);
            bVar3 = iVar2 == 1;
            goto LAB_00100da1;
          }
        }
      }
    }
  }
  bVar3 = false;
LAB_00100da1:
  memcpy(param_6,local_108,cnt);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_slh_get_hash_fn(int param_1)

{
  return (-(uint)(param_1 == 0) & 0x30) + 0x100ea0;
}


