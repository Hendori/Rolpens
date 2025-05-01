
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * enet_host_create(long *param_1,ulong param_2,long param_3,undefined4 param_4,
                       undefined4 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  long *__s;
  void *__s_00;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if ((param_2 < 0x1000) && (__s = (long *)enet_malloc(0x2b30), __s != (long *)0x0)) {
    memset(__s,0,0x2b30);
    __s_00 = (void *)enet_malloc(param_2 * 0x1d0);
    __s[7] = (long)__s_00;
    if (__s_00 != (void *)0x0) {
      memset(__s_00,0,param_2 * 0x1d0);
      lVar6 = enet_socket_create(2);
      *__s = lVar6;
      if (lVar6 != 0) {
        if (param_1 == (long *)0x0) {
          enet_socket_set_option(lVar6,1,1);
          enet_socket_set_option(*__s,2,1);
          enet_socket_set_option(*__s,3,0x40000);
          enet_socket_set_option(*__s,4,0x40000);
LAB_00100117:
          *(int *)((long)__s + 0x2c) = (int)__s;
          if (0xfe < param_3 - 1U) {
            param_3 = 0xff;
          }
          iVar4 = enet_host_random_seed();
          uVar5 = iVar4 + *(int *)((long)__s + 0x2c);
          *(undefined4 *)((long)__s + 0x1c) = param_4;
          lVar2 = _UNK_00100ba8;
          lVar6 = __LC1;
          __s[9] = param_3;
          *(uint *)((long)__s + 0x2c) = uVar5 * 0x10000 | uVar5 >> 0x10;
          uVar1 = _LC0;
          *(undefined1 (*) [16])(__s + 0x559) = (undefined1  [16])0x0;
          *(undefined8 *)((long)__s + 0x24) = uVar1;
          *(undefined2 *)(__s + 0x55b) = 0;
          *(undefined4 *)(__s + 4) = param_5;
          *(undefined4 *)(__s + 6) = 0;
          __s[8] = param_2;
          __s[0xd0] = 0;
          __s[0x153] = 0;
          __s[0x154] = 0;
          __s[0x55c] = 0;
          __s[0x55d] = 0;
          *(undefined4 *)(__s + 0xd) = 0;
          __s[0x565] = 0x2000000;
          __s[0x155] = 0;
          __s[0x158] = 0;
          __s[0x560] = 0;
          *(undefined1 (*) [16])(__s + 0x55e) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(__s + 0x561) = (undefined1  [16])0x0;
          __s[0x563] = lVar6;
          __s[0x564] = lVar2;
          *(undefined1 (*) [16])(__s + 0x156) = (undefined1  [16])0x0;
          enet_list_clear(__s + 0xb);
          uVar3 = _LC2;
          uVar7 = __s[7];
          uVar8 = uVar7;
          if (__s[8] * 0x1d0 + uVar7 <= uVar7) {
            return __s;
          }
          do {
            *(long **)(uVar8 + 0x10) = __s;
            *(undefined2 *)(uVar8 + 0x20) = uVar3;
            *(undefined8 *)(uVar8 + 0x38) = 0;
            *(short *)(uVar8 + 0x1a) = (short)((long)(uVar8 - uVar7) >> 4) * -0x3dcb;
            enet_list_clear(uVar8 + 0xe8);
            enet_list_clear(uVar8 + 0xf8);
            enet_list_clear(uVar8 + 0x118);
            enet_list_clear(uVar8 + 0x108);
            enet_list_clear(uVar8 + 0x128);
            uVar9 = uVar8 + 0x1d0;
            enet_peer_reset(uVar8);
            uVar7 = __s[7];
            uVar8 = uVar9;
          } while (uVar9 < __s[8] * 0x1d0 + uVar7);
          return __s;
        }
        iVar4 = enet_socket_bind(lVar6,param_1);
        if (-1 < iVar4) {
          enet_socket_set_option(*__s,1,1);
          enet_socket_set_option(*__s,2,1);
          enet_socket_set_option(*__s,3,0x40000);
          enet_socket_set_option(*__s,4,0x40000);
          iVar4 = enet_socket_get_address(*__s,__s + 1);
          if (iVar4 < 0) {
            lVar6 = param_1[1];
            __s[1] = *param_1;
            __s[2] = lVar6;
            *(int *)(__s + 3) = (int)param_1[2];
          }
          goto LAB_00100117;
        }
        if (*__s != 0) {
          enet_socket_destroy();
        }
      }
      enet_free(__s[7]);
    }
    enet_free(__s);
  }
  return (long *)0x0;
}



void enet_host_destroy(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    enet_socket_destroy(*param_1);
    uVar3 = param_1[7];
    uVar1 = uVar3;
    if (uVar3 < param_1[8] * 0x1d0 + uVar3) {
      do {
        uVar2 = uVar1 + 0x1d0;
        enet_peer_reset(uVar1);
        uVar3 = param_1[7];
        uVar1 = uVar2;
      } while (uVar2 < param_1[8] * 0x1d0 + uVar3);
    }
    if ((param_1[0x155] != 0) && ((code *)param_1[0x158] != (code *)0x0)) {
      (*(code *)param_1[0x158])(param_1[0x155]);
      uVar3 = param_1[7];
    }
    enet_free(uVar3);
    enet_free(param_1);
    return;
  }
  return;
}



uint enet_host_random(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x2c) + 0x6d2b79f5;
  *(uint *)(param_1 + 0x2c) = uVar1;
  uVar1 = (uVar1 >> 0xf ^ uVar1) * (uVar1 | 1);
  uVar1 = (uVar1 >> 7 ^ uVar1) * (uVar1 | 0x3d) + uVar1 ^ uVar1;
  return uVar1 >> 0xe ^ uVar1;
}



ulong enet_host_connect(long param_1,undefined8 *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined2 local_78 [2];
  ushort local_74;
  ushort local_72;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  long local_40;
  
  uVar6 = *(ulong *)(param_1 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = *(long *)(param_1 + 0x40) * 0x1d0 + uVar6;
  do {
    if (uVar4 <= uVar6) {
LAB_001006b0:
      uVar6 = 0;
LAB_00100663:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(uVar6 + 0x40) == 0) {
      if (uVar6 < uVar4) {
        uVar4 = 0xff;
        if (param_3 < 0x100) {
          uVar4 = param_3;
        }
        if (uVar4 == 0) {
          uVar4 = 1;
        }
        puVar5 = (undefined4 *)enet_malloc(uVar4 * 0x50);
        *(undefined4 **)(uVar6 + 0x48) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          *(ulong *)(uVar6 + 0x50) = uVar4;
          *(undefined4 *)(uVar6 + 0x40) = 1;
          uVar2 = param_2[1];
          *(undefined8 *)(uVar6 + 0x22) = *param_2;
          *(undefined8 *)(uVar6 + 0x2a) = uVar2;
          uVar8 = *(uint *)(param_1 + 0x28);
          *(undefined4 *)(uVar6 + 0x32) = *(undefined4 *)(param_2 + 2);
          uVar9 = *(int *)(param_1 + 0x2c) + 0x6d2b79f5;
          *(uint *)(param_1 + 0x2c) = uVar9;
          *(uint *)(uVar6 + 0xd8) = uVar8;
          local_50 = (uVar9 >> 0xf ^ uVar9) * (uVar9 | 1);
          local_50 = local_50 ^ (local_50 >> 7 ^ local_50) * (local_50 | 0x3d) + local_50;
          uVar9 = *(uint *)(param_1 + 0x20);
          local_50 = local_50 >> 0xe ^ local_50;
          *(uint *)(uVar6 + 0x1c) = local_50;
          uVar3 = 0x10000;
          if (uVar9 != 0) {
            uVar3 = (uVar9 >> 0x10) << 0xc;
            if (0x10000 < uVar3) {
              uVar3 = 0x10000;
            }
            if (uVar3 < 0x1000) {
              uVar3 = 0x1000;
            }
          }
          *(uint *)(uVar6 + 0xdc) = uVar3;
          if (puVar5 < puVar5 + uVar4 * 0x14) {
            do {
              *puVar5 = 0;
              *(undefined4 *)((long)puVar5 + 0x26) = 0;
              enet_list_clear(puVar5 + 0xc);
              puVar7 = puVar5 + 0x14;
              enet_list_clear(puVar5 + 0x10);
              *(undefined1 (*) [16])((long)puVar5 + 6) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])((long)puVar5 + 0x16) = (undefined1  [16])0x0;
              lVar1 = *(long *)(uVar6 + 0x48);
              *(undefined2 *)(puVar5 + 1) = 0;
              puVar5 = puVar7;
            } while (puVar7 < (undefined4 *)(lVar1 + uVar4 * 0x50));
            uVar8 = *(uint *)(uVar6 + 0xd8);
            uVar9 = *(uint *)(param_1 + 0x20);
            local_50 = *(uint *)(uVar6 + 0x1c);
          }
          local_70 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18
          ;
          local_60 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          local_78[0] = 0xff82;
          uVar9 = (uint)uVar4;
          local_68 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          local_74 = *(ushort *)(uVar6 + 0x1a) << 8 | *(ushort *)(uVar6 + 0x1a) >> 8;
          local_4c = param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 |
                     param_4 << 0x18;
          local_72 = *(ushort *)(uVar6 + 0x20) << 8 | *(ushort *)(uVar6 + 0x20) >> 8;
          uVar9 = *(uint *)(uVar6 + 0xdc);
          local_6c = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          uVar9 = *(uint *)(param_1 + 0x1c);
          local_64 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          uVar9 = *(uint *)(uVar6 + 0xac);
          local_5c = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          uVar9 = *(uint *)(uVar6 + 0xa4);
          local_58 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          uVar9 = *(uint *)(uVar6 + 0xa8);
          local_54 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18
          ;
          enet_peer_queue_outgoing_command(uVar6,local_78,0,0,0);
          goto LAB_00100663;
        }
      }
      goto LAB_001006b0;
    }
    uVar6 = uVar6 + 0x1d0;
  } while( true );
}



void enet_host_broadcast(long param_1,undefined1 param_2,long *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(param_1 + 0x40);
  uVar2 = *(ulong *)(param_1 + 0x38);
  uVar3 = uVar2;
  if (uVar2 < lVar1 * 0x1d0 + uVar2) {
    do {
      if (*(int *)(uVar3 + 0x40) == 5) {
        enet_peer_send(uVar3,param_2,param_3);
        uVar2 = *(ulong *)(param_1 + 0x38);
        lVar1 = *(long *)(param_1 + 0x40);
      }
      uVar3 = uVar3 + 0x1d0;
    } while (uVar3 < lVar1 * 0x1d0 + uVar2);
  }
  if (*param_3 == 0) {
    enet_packet_destroy(param_3);
    return;
  }
  return;
}



void enet_host_compress(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0xaa8) != 0) && (*(code **)(param_1 + 0xac0) != (code *)0x0)) {
    (**(code **)(param_1 + 0xac0))();
  }
  if (param_2 != (undefined8 *)0x0) {
    uVar1 = param_2[1];
    *(undefined8 *)(param_1 + 0xaa8) = *param_2;
    *(undefined8 *)(param_1 + 0xab0) = uVar1;
    uVar1 = param_2[3];
    *(undefined8 *)(param_1 + 0xab8) = param_2[2];
    *(undefined8 *)(param_1 + 0xac0) = uVar1;
    return;
  }
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  return;
}



void enet_host_channel_limit(long param_1,long param_2)

{
  if (0xfe < param_2 - 1U) {
    param_2 = 0xff;
  }
  *(long *)(param_1 + 0x48) = param_2;
  return;
}



void enet_host_bandwidth_limit(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}



void enet_host_bandwidth_throttle(long param_1)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  undefined2 uVar18;
  long in_FS_OFFSET;
  undefined2 local_78 [2];
  uint local_74;
  uint local_70;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = enet_time_get();
  uVar16 = iVar4 - *(int *)(param_1 + 0x24);
  if (uVar16 < 1000) goto LAB_00100ad8;
  uVar13 = *(ulong *)(param_1 + 0x2b08);
  lVar2 = *(long *)(param_1 + 0x2b10);
  *(int *)(param_1 + 0x24) = iVar4;
  uVar17 = uVar13 & 0xffffffff;
  if ((int)uVar13 == 0) goto LAB_00100ad8;
  lVar11 = *(long *)(param_1 + 0x40);
  uVar9 = *(ulong *)(param_1 + 0x38);
  uVar7 = uVar9 + lVar11 * 0x1d0;
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar14 = 0xffffffff;
    uVar12 = 0xffffffff;
    uVar15 = 0x20;
    if (lVar2 != 0) goto LAB_001008d8;
joined_r0x001009f0:
    for (; uVar9 < uVar7; uVar9 = uVar9 + 0x1d0) {
      if ((*(int *)(uVar9 + 0x40) - 5U < 2) && (*(int *)(uVar9 + 100) != iVar4)) {
        *(uint *)(uVar9 + 0x98) = uVar15;
        if (uVar15 < *(uint *)(uVar9 + 0x94)) {
          *(uint *)(uVar9 + 0x94) = uVar15;
        }
        *(undefined8 *)(uVar9 + 0x68) = 0;
      }
    }
  }
  else {
    uVar14 = (*(int *)(param_1 + 0x20) * uVar16) / 1000;
    if (uVar9 < uVar7) {
      uVar12 = 0;
      uVar6 = uVar9;
      do {
        if (*(int *)(uVar6 + 0x40) - 5U < 2) {
          uVar12 = uVar12 + *(int *)(uVar6 + 0x6c);
        }
        uVar6 = uVar6 + 0x1d0;
      } while (uVar6 < uVar7);
      if (lVar2 != 0) goto LAB_001008d8;
LAB_001009d8:
      uVar15 = 0x20;
      if (uVar14 < uVar12) {
        uVar15 = (uVar14 << 5) / uVar12;
      }
      goto joined_r0x001009f0;
    }
    uVar12 = 0;
    if (lVar2 != 0) {
LAB_001008d8:
      while( true ) {
        uVar15 = 0x20;
        if (uVar14 < uVar12) {
          uVar15 = (uVar14 << 5) / uVar12;
        }
        uVar7 = uVar9 + lVar11 * 0x1d0;
        if (uVar7 <= uVar9) goto LAB_001009d8;
        bVar3 = false;
        uVar7 = uVar9;
        do {
          if (((*(int *)(uVar7 + 0x40) - 5U < 2) && (*(int *)(uVar7 + 0x58) != 0)) &&
             (*(int *)(uVar7 + 100) != iVar4)) {
            uVar8 = *(int *)(uVar7 + 0x58) * uVar16;
            uVar1 = *(uint *)(uVar7 + 0x6c);
            uVar5 = uVar8 / 1000;
            if (uVar5 < uVar1 * uVar15 >> 5) {
              uVar10 = 1;
              uVar5 = uVar5 << 5;
              if (uVar1 <= uVar5) {
                uVar10 = uVar5 / uVar1;
              }
              *(uint *)(uVar7 + 0x98) = uVar10;
              if (uVar10 < *(uint *)(uVar7 + 0x94)) {
                *(uint *)(uVar7 + 0x94) = uVar10;
              }
              *(int *)(uVar7 + 100) = iVar4;
              lVar11 = *(long *)(param_1 + 0x40);
              uVar13 = (ulong)((int)uVar13 - 1);
              uVar8 = uVar8 / 1000;
              uVar14 = uVar14 - uVar8;
              *(undefined4 *)(uVar7 + 0x68) = 0;
              uVar12 = uVar12 - uVar8;
              bVar3 = true;
              *(undefined4 *)(uVar7 + 0x6c) = 0;
            }
          }
          uVar7 = uVar7 + 0x1d0;
        } while (uVar7 < uVar9 + lVar11 * 0x1d0);
        if ((int)uVar13 == 0) goto LAB_00100a30;
        if (!bVar3) break;
        uVar9 = *(ulong *)(param_1 + 0x38);
      }
      if ((int)uVar13 != 0) {
        uVar9 = *(ulong *)(param_1 + 0x38);
        uVar7 = uVar9 + lVar11 * 0x1d0;
        goto LAB_001009d8;
      }
    }
  }
LAB_00100a30:
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar13 = *(ulong *)(param_1 + 0x38);
    uVar16 = *(uint *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x30) = 0;
    uVar7 = lVar11 * 0x1d0 + uVar13;
    if (uVar16 == 0) {
      uVar15 = 0;
      if (uVar7 <= uVar13) goto LAB_00100ad8;
    }
    else {
      do {
        uVar9 = uVar16 / uVar17;
        if (uVar7 <= uVar13) goto LAB_00100ad8;
        bVar3 = false;
        uVar6 = uVar13;
        do {
          uVar15 = (uint)uVar9;
          if (((*(int *)(uVar6 + 0x40) - 5U < 2) && (*(int *)(uVar6 + 0x60) != iVar4)) &&
             ((uVar12 = *(uint *)(uVar6 + 0x5c), uVar12 == 0 || (uVar12 < uVar15)))) {
            *(int *)(uVar6 + 0x60) = iVar4;
            uVar17 = (ulong)((int)uVar17 - 1);
            uVar16 = uVar16 - uVar12;
            bVar3 = true;
          }
          uVar6 = uVar6 + 0x1d0;
        } while (uVar6 < uVar7);
      } while (((int)uVar17 != 0) && (bVar3));
    }
    uVar18 = _LC7;
    uVar17 = uVar13;
    do {
      if (*(int *)(uVar17 + 0x40) - 5U < 2) {
        uVar16 = *(uint *)(param_1 + 0x20);
        local_70 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                   uVar16 << 0x18;
        local_74 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
        if (*(int *)(uVar17 + 0x60) == iVar4) {
          uVar16 = *(uint *)(uVar17 + 0x5c);
          local_74 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                     uVar16 << 0x18;
        }
        local_78[0] = uVar18;
        enet_peer_queue_outgoing_command(uVar17,local_78,0,0,0);
        uVar13 = *(ulong *)(param_1 + 0x38);
        lVar11 = *(long *)(param_1 + 0x40);
      }
      uVar17 = uVar17 + 0x1d0;
    } while (uVar17 < lVar11 * 0x1d0 + uVar13);
  }
LAB_00100ad8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


