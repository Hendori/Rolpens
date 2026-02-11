
int ecdh_compute_shared_restartable_constprop_0
              (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mbedtls_ecp_point_init(local_78);
  iVar1 = mbedtls_ecp_mul_restartable(param_1,local_78,param_4,param_3,param_5,param_6);
  if (iVar1 == 0) {
    iVar1 = mbedtls_ecp_is_zero(local_78);
    if (iVar1 == 0) {
      iVar1 = mbedtls_mpi_copy(param_2,local_78);
    }
    else {
      iVar1 = -0x4f80;
    }
  }
  mbedtls_ecp_point_free(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_ecdh_can_do(void)

{
  return 1;
}



void mbedtls_ecdh_gen_public
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  int iVar1;
  
  iVar1 = mbedtls_ecp_gen_privkey(param_1,param_2,param_4,param_5);
  if (iVar1 == 0) {
    mbedtls_ecp_mul_restartable(param_1,param_3,param_2,param_1 + 0x38,param_4,param_5,0);
  }
  return;
}



void mbedtls_ecdh_compute_shared(void)

{
  ecdh_compute_shared_restartable_constprop_0();
  return;
}



undefined4 mbedtls_ecdh_get_grp_id(long param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



void mbedtls_ecdh_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x29] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x150U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



undefined8 mbedtls_ecdh_setup(undefined1 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  mbedtls_ecp_group_init(param_1 + 0x10);
  mbedtls_mpi_init(param_1 + 0xd0);
  mbedtls_ecp_point_init(param_1 + 0xe0);
  mbedtls_ecp_point_init(param_1 + 0x110);
  mbedtls_mpi_init(param_1 + 0x140);
  uVar1 = mbedtls_ecp_group_load(param_1 + 0x10,param_2);
  if ((int)uVar1 != 0) {
    uVar1 = 0xffffb180;
  }
  return uVar1;
}



void mbedtls_ecdh_free(undefined1 *param_1)

{
  if (param_1 == (undefined1 *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    return;
  }
  mbedtls_ecp_group_free(param_1 + 0x10);
  mbedtls_mpi_free(param_1 + 0xd0);
  mbedtls_ecp_point_free(param_1 + 0xe0);
  mbedtls_ecp_point_free(param_1 + 0x110);
  mbedtls_mpi_free(param_1 + 0x140);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



undefined8
mbedtls_ecdh_make_params
          (undefined1 *param_1,long *param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_1 + 8) == 1) && (uVar2 = *param_1, *(long *)(param_1 + 0x88) != 0)) {
    puVar1 = param_1 + 0x10;
    uVar3 = mbedtls_ecp_gen_privkey(puVar1,param_1 + 0xd0,param_5,param_6);
    if ((int)uVar3 == 0) {
      uVar3 = mbedtls_ecp_mul_restartable
                        (puVar1,param_1 + 0xe0,param_1 + 0xd0,param_1 + 0x48,param_5,param_6,0);
      if ((int)uVar3 == 0) {
        uVar3 = mbedtls_ecp_tls_write_group(puVar1,&local_50,param_3,param_4);
        if ((int)uVar3 == 0) {
          uVar3 = mbedtls_ecp_tls_write_point
                            (puVar1,param_1 + 0xe0,uVar2,&local_48,param_3 + local_50,
                             param_4 - local_50);
          if ((int)uVar3 == 0) {
            *param_2 = local_48 + local_50;
          }
        }
      }
    }
  }
  else {
    uVar3 = 0xffffb080;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_ecdh_read_params(undefined1 *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = mbedtls_ecp_tls_read_group_id(&local_44,param_2,param_3 - *param_2);
  if ((int)uVar3 == 0) {
    *param_1 = 0;
    puVar1 = param_1 + 0x10;
    *(undefined4 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 4) = local_44;
    mbedtls_ecp_group_init(puVar1);
    mbedtls_mpi_init(param_1 + 0xd0);
    mbedtls_ecp_point_init(param_1 + 0xe0);
    mbedtls_ecp_point_init(param_1 + 0x110);
    mbedtls_mpi_init(param_1 + 0x140);
    iVar2 = mbedtls_ecp_group_load(puVar1,local_44);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 8) == 1) {
        uVar3 = mbedtls_ecp_tls_read_point(puVar1,param_1 + 0x110,param_2,param_3 - *param_2);
      }
      else {
        uVar3 = 0xffffb080;
      }
    }
    else {
      uVar3 = 0xffffb180;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_ecdh_get_params(undefined1 *param_1,int *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (1 < param_3) {
    return 0xffffb080;
  }
  iVar1 = *param_2;
  if (*(int *)(param_1 + 4) == 0) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 1;
    *(int *)(param_1 + 4) = iVar1;
    mbedtls_ecp_group_init(param_1 + 0x10);
    mbedtls_mpi_init(param_1 + 0xd0);
    mbedtls_ecp_point_init(param_1 + 0xe0);
    mbedtls_ecp_point_init(param_1 + 0x110);
    mbedtls_mpi_init(param_1 + 0x140);
    iVar1 = mbedtls_ecp_group_load(param_1 + 0x10,iVar1);
    if (iVar1 != 0) {
      return 0xffffb180;
    }
  }
  else if (iVar1 != *(int *)(param_1 + 4)) {
    return 0xffffb080;
  }
  if (*(int *)(param_1 + 8) != 1) {
    return 0xffffb080;
  }
  if (param_3 == 1) {
    uVar2 = mbedtls_ecp_copy(param_1 + 0x110,param_2 + 0x34);
    return uVar2;
  }
  uVar2 = mbedtls_ecp_copy(param_1 + 0xe0,param_2 + 0x34);
  if ((int)uVar2 == 0) {
    uVar2 = mbedtls_mpi_copy(param_1 + 0xd0,param_2 + 0x30);
    return uVar2;
  }
  return uVar2;
}



undefined8
mbedtls_ecdh_make_public
          (undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 8) != 1) {
    return 0xffffb080;
  }
  uVar2 = *param_1;
  if (*(long *)(param_1 + 0x88) == 0) {
    uVar3 = 0xffffb080;
  }
  else {
    puVar1 = param_1 + 0x10;
    uVar3 = mbedtls_ecp_gen_privkey(puVar1,param_1 + 0xd0,param_5,param_6);
    if ((int)uVar3 == 0) {
      uVar3 = mbedtls_ecp_mul_restartable
                        (puVar1,param_1 + 0xe0,param_1 + 0xd0,param_1 + 0x48,param_5,param_6,0);
      if ((int)uVar3 == 0) {
        uVar3 = mbedtls_ecp_tls_write_point(puVar1,param_1 + 0xe0,uVar2,param_2,param_3,param_4);
        return uVar3;
      }
    }
  }
  return uVar3;
}



ulong mbedtls_ecdh_read_public(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 8) == 1) {
    local_28 = param_2;
    uVar1 = mbedtls_ecp_tls_read_point(param_1 + 0x10,param_1 + 0x110,&local_28,param_3);
    if (((int)uVar1 == 0) && (uVar1 = uVar1 & 0xffffffff, local_28 - param_2 != param_3)) {
      uVar1 = 0xffffb080;
    }
  }
  else {
    uVar1 = 0xffffb080;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_ecdh_calc_secret(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 8) != 1) {
    return 0xffffb080;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    lVar1 = param_1 + 0x140;
    uVar3 = ecdh_compute_shared_restartable_constprop_0
                      (param_1 + 0x10,lVar1,param_1 + 0x110,param_1 + 0xd0);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    uVar4 = mbedtls_mpi_size(lVar1);
    if (uVar4 <= param_4) {
      *param_2 = (*(ulong *)(param_1 + 0x88) >> 3) + (ulong)((*(ulong *)(param_1 + 0x88) & 7) != 0);
      iVar2 = mbedtls_ecp_get_type(param_1 + 0x10);
      if (iVar2 == 2) {
        uVar3 = mbedtls_mpi_write_binary_le(lVar1,param_3,*param_2);
        return uVar3;
      }
      uVar3 = mbedtls_mpi_write_binary();
      return uVar3;
    }
  }
  return 0xffffb080;
}


