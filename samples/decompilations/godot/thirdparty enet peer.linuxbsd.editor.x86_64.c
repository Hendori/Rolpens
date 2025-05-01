
void enet_peer_reset_outgoing_commands(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)*param_1;
  while (puVar1 != param_1) {
    lVar3 = enet_list_remove();
    plVar2 = *(long **)(lVar3 + 0x58);
    if ((plVar2 != (long *)0x0) && (*plVar2 = *plVar2 + -1, *plVar2 == 0)) {
      enet_packet_destroy();
    }
    enet_free(lVar3);
    puVar1 = (undefined8 *)*param_1;
  }
  return;
}



void enet_peer_remove_incoming_commands_isra_0(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (param_2 == param_1) {
    return;
  }
  do {
    plVar1 = (long *)*param_1;
    if (param_3 != param_1) {
      enet_list_remove(param_1);
      plVar2 = (long *)param_1[0xb];
      if ((plVar2 != (long *)0x0) && (*plVar2 = *plVar2 + -1, *plVar2 == 0)) {
        enet_packet_destroy();
      }
      if (param_1[10] != 0) {
        enet_free();
      }
      enet_free(param_1);
    }
    param_1 = plVar1;
  } while (plVar1 != param_2);
  return;
}



undefined8 enet_peer_throttle(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 200) < uVar2) {
    if (param_2 <= uVar2) {
      uVar2 = *(int *)(param_1 + 0xa4) + *(int *)(param_1 + 0x94);
      if (*(uint *)(param_1 + 0x98) < uVar2) {
        uVar2 = *(uint *)(param_1 + 0x98);
      }
      *(uint *)(param_1 + 0x94) = uVar2;
      return 1;
    }
    if (uVar2 + *(uint *)(param_1 + 200) * 2 < param_2) {
      iVar1 = *(uint *)(param_1 + 0x94) - *(uint *)(param_1 + 0xa8);
      if (*(uint *)(param_1 + 0x94) <= *(uint *)(param_1 + 0xa8)) {
        iVar1 = 0;
      }
      *(int *)(param_1 + 0x94) = iVar1;
      return 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x98);
  }
  return 0;
}



long * enet_peer_receive(long param_1,undefined1 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x128) != param_1 + 0x128) {
    lVar3 = enet_list_remove();
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = *(undefined1 *)(lVar3 + 0x15);
    }
    plVar1 = *(long **)(lVar3 + 0x58);
    lVar2 = *(long *)(lVar3 + 0x50);
    *plVar1 = *plVar1 + -1;
    if (lVar2 != 0) {
      enet_free();
    }
    enet_free(lVar3);
    *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) - plVar1[3];
    return plVar1;
  }
  return (long *)0x0;
}



void enet_peer_reset_queues(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((*(byte *)(param_1 + 0x138) & 1) != 0) {
    enet_list_remove();
    *(ushort *)(param_1 + 0x138) = *(ushort *)(param_1 + 0x138) & 0xfffe;
  }
  lVar2 = *(long *)(param_1 + 0xe8);
  while (lVar2 != param_1 + 0xe8) {
    uVar3 = enet_list_remove();
    enet_free(uVar3);
    lVar2 = *(long *)(param_1 + 0xe8);
  }
  enet_peer_reset_outgoing_commands(param_1 + 0xf8);
  enet_peer_reset_outgoing_commands(param_1 + 0x118);
  enet_peer_reset_outgoing_commands(param_1 + 0x108);
  enet_peer_remove_incoming_commands_isra_0(*(undefined8 *)(param_1 + 0x128),param_1 + 0x128,0);
  uVar4 = *(ulong *)(param_1 + 0x48);
  if ((uVar4 != 0) && (*(long *)(param_1 + 0x50) != 0)) {
    uVar5 = uVar4;
    if (uVar4 < *(long *)(param_1 + 0x50) * 0x50 + uVar4) {
      do {
        enet_peer_remove_incoming_commands_isra_0(*(undefined8 *)(uVar4 + 0x30),uVar4 + 0x30,0);
        puVar1 = (undefined8 *)(uVar4 + 0x40);
        lVar2 = uVar4 + 0x40;
        uVar4 = uVar4 + 0x50;
        enet_peer_remove_incoming_commands_isra_0(*puVar1,lVar2,0);
        uVar5 = *(ulong *)(param_1 + 0x48);
      } while (uVar4 < *(long *)(param_1 + 0x50) * 0x50 + *(ulong *)(param_1 + 0x48));
    }
    enet_free(uVar5);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



void enet_peer_on_connect(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (1 < *(int *)(param_1 + 0x40) - 5U) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x58) != 0) {
      plVar1 = (long *)(lVar2 + 0x2b10);
      *plVar1 = *plVar1 + 1;
    }
    plVar1 = (long *)(lVar2 + 0x2b08);
    *plVar1 = *plVar1 + 1;
  }
  return;
}



void enet_peer_on_disconnect(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (1 < *(int *)(param_1 + 0x40) - 5U) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x58) != 0) {
    plVar1 = (long *)(lVar2 + 0x2b10);
    *plVar1 = *plVar1 + -1;
  }
  plVar1 = (long *)(lVar2 + 0x2b08);
  *plVar1 = *plVar1 + -1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void enet_peer_reset(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_1 + 0x40) - 5U < 2) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x58) != 0) {
      plVar1 = (long *)(lVar3 + 0x2b10);
      *plVar1 = *plVar1 + -1;
    }
    plVar1 = (long *)(lVar3 + 0x2b08);
    *plVar1 = *plVar1 + -1;
  }
  *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x68) = (undefined1  [16])0x0;
  puVar7 = (undefined8 *)(param_1 + 0x148U & 0xfffffffffffffff8);
  *(undefined1 (*) [16])(param_1 + 0x78) = (undefined1  [16])0x0;
  uVar5 = _UNK_00101588;
  uVar4 = __LC0;
  *(undefined2 *)(param_1 + 0x18) = 0xfff;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  uVar5 = _UNK_00101598;
  uVar4 = __LC1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x98) = uVar4;
  *(undefined8 *)(param_1 + 0xa0) = uVar5;
  uVar5 = _UNK_001015a8;
  uVar4 = __LC2;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  uVar4 = _UNK_001015b8;
  *(undefined8 *)(param_1 + 0xb8) = __LC3;
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  uVar4 = _UNK_001015c8;
  *(undefined8 *)(param_1 + 200) = __LC4;
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  uVar2 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x28);
  *(undefined2 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = uVar2;
  *(undefined8 *)(param_1 + 0xdc) = 0x10000;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  uVar6 = (ulong)(((int)param_1 - (int)puVar7) + 0x1c0U >> 3);
  for (; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  enet_peer_reset_queues(param_1);
  return;
}



void enet_peer_ping_interval(long param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 500;
  }
  *(int *)(param_1 + 0xb0) = param_2;
  return;
}



void enet_peer_timeout(long param_1,int param_2,int param_3,int param_4)

{
  if (param_2 == 0) {
    param_2 = 0x20;
  }
  if (param_3 == 0) {
    param_3 = 5000;
  }
  if (param_4 == 0) {
    param_4 = 30000;
  }
  *(int *)(param_1 + 0xb4) = param_2;
  *(int *)(param_1 + 0xb8) = param_3;
  *(int *)(param_1 + 0xbc) = param_4;
  return;
}



bool enet_peer_has_outgoing_commands(long param_1)

{
  if ((*(long *)(param_1 + 0x118) == param_1 + 0x118) &&
     (*(long *)(param_1 + 0x108) == param_1 + 0x108)) {
    return *(long *)(param_1 + 0xf8) != param_1 + 0xf8;
  }
  return true;
}



long enet_peer_queue_acknowledgement(long param_1,undefined8 *param_2,uint param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  
  if ((ulong)*(byte *)((long)param_2 + 1) < *(ulong *)(param_1 + 0x50)) {
    uVar1 = *(ushort *)
             ((ulong)*(byte *)((long)param_2 + 1) * 0x50 + *(long *)(param_1 + 0x48) + 0x26);
    uVar4 = *(ushort *)((long)param_2 + 2) >> 0xc;
    uVar6 = uVar1 >> 0xc;
    if (*(ushort *)((long)param_2 + 2) < uVar1) {
      uVar4 = uVar4 + 0x10;
    }
    if (((ushort)(uVar6 + 6) < uVar4) && (uVar4 <= (ushort)(uVar6 + 8))) {
      return 0;
    }
  }
  lVar5 = enet_malloc(0x48);
  if (lVar5 != 0) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 8;
    *(uint *)(lVar5 + 0x10) = param_3 & 0xffff;
    *(undefined8 *)(lVar5 + 0x14) = uVar2;
    *(undefined8 *)(lVar5 + 0x1c) = uVar3;
    uVar2 = param_2[3];
    *(undefined8 *)(lVar5 + 0x24) = param_2[2];
    *(undefined8 *)(lVar5 + 0x2c) = uVar2;
    uVar2 = param_2[5];
    *(undefined8 *)(lVar5 + 0x34) = param_2[4];
    *(undefined8 *)(lVar5 + 0x3c) = uVar2;
    enet_list_insert(param_1 + 0xe8,lVar5);
  }
  return lVar5;
}



void enet_peer_setup_outgoing_command(long param_1,long param_2)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  
  iVar4 = enet_protocol_command_size(*(undefined1 *)(param_2 + 0x28));
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (uint)*(ushort *)(param_2 + 0x24) + iVar4;
  if (*(byte *)(param_2 + 0x29) == 0xff) {
    uVar3 = *(short *)(param_1 + 0xe4) + 1;
    *(ushort *)(param_1 + 0xe4) = uVar3;
    *(undefined2 *)(param_2 + 0x12) = 0;
    lVar1 = *(long *)(param_1 + 0x10);
    *(ushort *)(param_2 + 0x10) = uVar3;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(ushort *)(param_2 + 0x2a) = uVar3 * 0x100 | uVar3 >> 8;
    iVar4 = *(int *)(lVar1 + 0x68);
    *(undefined2 *)(param_2 + 0x26) = 0;
    iVar4 = iVar4 + 1;
    *(int *)(lVar1 + 0x68) = iVar4;
    *(int *)(param_2 + 0x1c) = iVar4;
    bVar6 = *(byte *)(param_2 + 0x28) & 0xf;
    if (bVar6 == 7) {
      *(undefined2 *)(param_2 + 0x2c) = 0;
    }
    else if (bVar6 == 9) {
      *(ushort *)(param_2 + 0x2c) =
           *(ushort *)(param_1 + 0x13e) << 8 | *(ushort *)(param_1 + 0x13e) >> 8;
    }
    if (-1 < (char)*(byte *)(param_2 + 0x28)) goto LAB_001006e8;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    bVar6 = *(byte *)(param_2 + 0x28);
    puVar5 = (ushort *)((ulong)*(byte *)(param_2 + 0x29) * 0x50 + *(long *)(param_1 + 0x48));
    bVar7 = bVar6 & 0xf;
    iVar4 = *(int *)(lVar1 + 0x68) + 1;
    if (-1 < (char)bVar6) {
      if ((bVar6 & 0x40) == 0) {
        uVar3 = puVar5[1];
        if (*(int *)(param_2 + 0x20) == 0) {
          uVar3 = uVar3 + 1;
          puVar5[1] = uVar3;
        }
        uVar2 = *puVar5;
        uVar8 = uVar2 << 8 | uVar2 >> 8;
      }
      else {
        *(short *)(param_1 + 0x13e) = *(short *)(param_1 + 0x13e) + 1;
        uVar2 = 0;
        uVar3 = 0;
        uVar8 = 0;
      }
      *(ushort *)(param_2 + 0x10) = uVar2;
      *(ushort *)(param_2 + 0x12) = uVar3;
      *(undefined2 *)(param_2 + 0x26) = 0;
      *(undefined8 *)(param_2 + 0x14) = 0;
      *(ushort *)(param_2 + 0x2a) = uVar8;
      *(int *)(lVar1 + 0x68) = iVar4;
      *(int *)(param_2 + 0x1c) = iVar4;
      if (bVar7 == 7) {
        *(ushort *)(param_2 + 0x2c) = uVar3 << 8 | uVar3 >> 8;
      }
      else if (bVar7 == 9) {
        *(ushort *)(param_2 + 0x2c) =
             *(ushort *)(param_1 + 0x13e) << 8 | *(ushort *)(param_1 + 0x13e) >> 8;
      }
      goto LAB_001006e8;
    }
    puVar5[1] = 0;
    uVar3 = *puVar5 + 1;
    *puVar5 = uVar3;
    *(ushort *)(param_2 + 0x10) = uVar3;
    *(undefined2 *)(param_2 + 0x12) = 0;
    *(undefined2 *)(param_2 + 0x26) = 0;
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(ushort *)(param_2 + 0x2a) = uVar3 * 0x100 | uVar3 >> 8;
    *(int *)(lVar1 + 0x68) = iVar4;
    *(int *)(param_2 + 0x1c) = iVar4;
    if (bVar7 == 7) {
      *(undefined2 *)(param_2 + 0x2c) = 0;
    }
    else if (bVar7 == 9) {
      *(ushort *)(param_2 + 0x2c) =
           *(ushort *)(param_1 + 0x13e) << 8 | *(ushort *)(param_1 + 0x13e) >> 8;
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    enet_list_insert(param_1 + 0x108,param_2);
    return;
  }
LAB_001006e8:
  enet_list_insert(param_1 + 0x118,param_2);
  return;
}



void enet_peer_throttle_configure(long param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  
  *(uint *)(param_1 + 0xa8) = param_4;
  *(uint *)(param_1 + 0xac) = param_2;
  *(uint *)(param_1 + 0xa4) = param_3;
  lVar1 = enet_malloc(0x60);
  if (lVar1 != 0) {
    *(undefined2 *)(lVar1 + 0x28) = 0xff8b;
    *(uint *)(lVar1 + 0x2c) =
         param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
    *(uint *)(lVar1 + 0x30) =
         param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 | param_3 << 0x18;
    *(uint *)(lVar1 + 0x34) =
         param_4 >> 0x18 | (param_4 & 0xff0000) >> 8 | (param_4 & 0xff00) << 8 | param_4 << 0x18;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined2 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    enet_peer_setup_outgoing_command(param_1);
    return;
  }
  return;
}



void enet_peer_ping(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x40) != 5) {
    return;
  }
  lVar1 = enet_malloc(0x60);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined2 *)(lVar1 + 0x28) = 0xff85;
    *(undefined2 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    enet_peer_setup_outgoing_command(param_1);
    return;
  }
  return;
}



void enet_peer_disconnect_now(long param_1,uint param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x40) - 7U & 0xfffffffd) == 0) {
    enet_peer_reset(param_1);
    return;
  }
  enet_peer_reset_queues();
  lVar1 = enet_malloc(0x60);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x2c) =
         param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
    *(undefined2 *)(lVar1 + 0x28) = 0xff44;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined2 *)(lVar1 + 0x24) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    enet_peer_setup_outgoing_command(param_1);
  }
  enet_host_flush(*(undefined8 *)(param_1 + 0x10));
  enet_peer_reset(param_1);
  return;
}



void enet_peer_disconnect(long param_1,uint param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  if ((*(int *)(param_1 + 0x40) - 7U < 3) || (*(int *)(param_1 + 0x40) == 0)) {
    return;
  }
  enet_peer_reset_queues();
  iVar2 = *(int *)(param_1 + 0x40);
  lVar3 = enet_malloc(0x60);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0x28) = (-(iVar2 - 5U < 2) & 0x40U) + 0x44;
    *(undefined1 *)(lVar3 + 0x29) = 0xff;
    *(uint *)(lVar3 + 0x2c) =
         param_2 >> 0x18 | (param_2 & 0xff0000) >> 8 | (param_2 & 0xff00) << 8 | param_2 << 0x18;
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined2 *)(lVar3 + 0x24) = 0;
    *(undefined8 *)(lVar3 + 0x58) = 0;
    enet_peer_setup_outgoing_command(param_1,lVar3);
  }
  if (1 < *(int *)(param_1 + 0x40) - 5U) {
    enet_host_flush(*(undefined8 *)(param_1 + 0x10));
    enet_peer_reset(param_1);
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x58) != 0) {
    plVar1 = (long *)(lVar3 + 0x2b10);
    *plVar1 = *plVar1 + -1;
  }
  plVar1 = (long *)(lVar3 + 0x2b08);
  *plVar1 = *plVar1 + -1;
  *(undefined4 *)(param_1 + 0x40) = 7;
  return;
}



void enet_peer_disconnect_later(long param_1,undefined4 param_2)

{
  if ((*(int *)(param_1 + 0x40) - 5U < 2) &&
     (((*(long *)(param_1 + 0x118) != param_1 + 0x118 ||
       (*(long *)(param_1 + 0x108) != param_1 + 0x108)) ||
      (*(long *)(param_1 + 0xf8) != param_1 + 0xf8)))) {
    *(undefined4 *)(param_1 + 0x40) = 6;
    *(undefined4 *)(param_1 + 0x1c0) = param_2;
    return;
  }
  enet_peer_disconnect();
  return;
}



/* WARNING: Type propagation algorithm not settling */

undefined8 enet_peer_send(long param_1,byte param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ushort uVar11;
  uint uVar12;
  ulong uVar13;
  ushort unaff_R12W;
  uint uVar14;
  undefined1 uVar15;
  ushort uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  undefined1 local_5f;
  ushort local_5e;
  undefined8 *******local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(int *)(param_1 + 0x40) == 5) && ((ulong)param_2 < *(ulong *)(param_1 + 0x50))) {
    uVar10 = param_3[3];
    if (uVar10 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x2b20)) {
      psVar7 = (short *)((ulong)param_2 * 0x50 + *(long *)(param_1 + 0x48));
      uVar17 = (ulong)*(uint *)(param_1 + 0xd8) - 0x20;
      if (*(long *)(*(long *)(param_1 + 0x10) + 0xaa0) == 0) {
        uVar17 = (ulong)*(uint *)(param_1 + 0xd8) - 0x1c;
      }
      if (uVar17 < uVar10) {
        uVar10 = (uVar10 - 1) + uVar17;
        uVar5 = (uint)(uVar10 / uVar17);
        if (uVar5 < 0x100001) {
          if (((*(uint *)(param_3 + 1) & 9) == 8) && (psVar7[1] != -1)) {
            uVar16 = psVar7[1] + 1;
            local_5f = 0xc;
            local_5e = uVar16 * 0x100 | uVar16 >> 8;
          }
          else {
            local_5f = 0x88;
            local_5e = (*psVar7 + 1U) * 0x100 | (ushort)(*psVar7 + 1U) >> 8;
          }
          enet_list_clear(local_58,psVar7,uVar10 % uVar17);
          uVar10 = param_3[3];
          if (uVar10 != 0) {
            uVar13 = 0;
            uVar12 = 0;
            do {
              if (uVar10 - uVar13 < uVar17) {
                uVar17 = uVar10 - uVar13;
              }
              lVar8 = enet_malloc(0x60);
              if (lVar8 == 0) goto joined_r0x00100cc4;
              uVar14 = (uint)uVar13;
              *(uint *)(lVar8 + 0x20) = uVar14;
              uVar16 = (ushort)uVar17;
              *(ushort *)(lVar8 + 0x24) = uVar16;
              uVar1 = uVar12 >> 0x18;
              uVar2 = uVar12 & 0xff0000;
              uVar3 = uVar12 & 0xff00;
              uVar4 = uVar12 << 0x18;
              *(long **)(lVar8 + 0x58) = param_3;
              uVar12 = uVar12 + 1;
              *(undefined1 *)(lVar8 + 0x28) = local_5f;
              *(byte *)(lVar8 + 0x29) = param_2;
              *(ushort *)(lVar8 + 0x2c) = local_5e;
              *(ushort *)(lVar8 + 0x2e) = uVar16 << 8 | uVar16 >> 8;
              uVar6 = (uint)param_3[3];
              *(ulong *)(lVar8 + 0x30) =
                   CONCAT44(uVar1 | uVar2 >> 8 | uVar3 << 8 | uVar4,
                            uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18);
              *(ulong *)(lVar8 + 0x38) =
                   CONCAT44(uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                            uVar14 << 0x18,
                            uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                            uVar6 << 0x18);
              enet_list_insert(local_58);
              uVar10 = param_3[3];
              uVar13 = (ulong)(uVar14 + (int)uVar17);
            } while (uVar13 < uVar10);
            uVar10 = (ulong)uVar12;
          }
          *param_3 = *param_3 + uVar10;
          while ((undefined8 ********)local_58[0] != local_58) {
            uVar9 = enet_list_remove();
            enet_peer_setup_outgoing_command(param_1,uVar9);
          }
LAB_00100d63:
          uVar9 = 0;
          goto LAB_00100d65;
        }
      }
      else {
        uVar16 = (ushort)uVar10;
        uVar15 = 0x49;
        uVar11 = uVar16 << 8 | uVar16 >> 8;
        if ((*(uint *)(param_3 + 1) & 3) != 2) {
          if ((*(uint *)(param_3 + 1) & 1) == 0) {
            uVar15 = 0x86;
            if (psVar7[1] != -1) {
              uVar15 = 7;
            }
            unaff_R12W = 0;
            if (psVar7[1] == -1) {
              unaff_R12W = uVar11;
            }
          }
          else {
            uVar15 = 0x86;
            unaff_R12W = uVar11;
          }
        }
        lVar8 = enet_malloc(0x60);
        if (lVar8 != 0) {
          *(undefined1 *)(lVar8 + 0x28) = uVar15;
          *(byte *)(lVar8 + 0x29) = param_2;
          *(ushort *)(lVar8 + 0x2c) = unaff_R12W;
          *(ushort *)(lVar8 + 0x2e) = uVar11;
          *(undefined4 *)(lVar8 + 0x20) = 0;
          *(ushort *)(lVar8 + 0x24) = uVar16;
          *(long **)(lVar8 + 0x58) = param_3;
          *param_3 = *param_3 + 1;
          enet_peer_setup_outgoing_command(param_1,lVar8);
          goto LAB_00100d63;
        }
      }
    }
  }
  goto LAB_00100ce7;
joined_r0x00100cc4:
  while ((undefined8 ********)local_58[0] != local_58) {
    uVar9 = enet_list_remove();
    enet_free(uVar9);
  }
LAB_00100ce7:
  uVar9 = 0xffffffff;
LAB_00100d65:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



long enet_peer_queue_outgoing_command
               (undefined8 param_1,undefined8 *param_2,long *param_3,undefined4 param_4,
               undefined2 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = enet_malloc(0x60);
  if (lVar3 != 0) {
    uVar1 = param_2[1];
    *(undefined8 *)(lVar3 + 0x28) = *param_2;
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    uVar1 = param_2[3];
    *(undefined8 *)(lVar3 + 0x38) = param_2[2];
    *(undefined8 *)(lVar3 + 0x40) = uVar1;
    uVar1 = param_2[4];
    uVar2 = param_2[5];
    *(undefined4 *)(lVar3 + 0x20) = param_4;
    *(undefined2 *)(lVar3 + 0x24) = param_5;
    *(long **)(lVar3 + 0x58) = param_3;
    *(undefined8 *)(lVar3 + 0x48) = uVar1;
    *(undefined8 *)(lVar3 + 0x50) = uVar2;
    if (param_3 != (long *)0x0) {
      *param_3 = *param_3 + 1;
    }
    enet_peer_setup_outgoing_command(param_1,lVar3);
  }
  return lVar3;
}



void enet_peer_dispatch_incoming_unreliable_commands(long param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  ushort uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ushort uVar8;
  
  plVar5 = (long *)(param_2 + 0x40);
  plVar4 = *(long **)(param_2 + 0x40);
  plVar7 = plVar5;
  if (plVar5 != plVar4) {
    plVar6 = plVar4;
    plVar7 = plVar4;
    do {
      while ((*(byte *)((long)plVar4 + 0x14) & 0xf) != 9) {
        uVar1 = *(ushort *)(plVar4 + 2);
        uVar2 = *(ushort *)(param_2 + 0x26);
        if (uVar1 == uVar2) {
          if ((int)plVar4[9] == 0) {
            *(undefined2 *)(param_2 + 0x28) = *(undefined2 *)((long)plVar4 + 0x12);
            break;
          }
          if (plVar6 == plVar4) {
            plVar3 = (long *)*plVar6;
            if (plVar7 != plVar4) {
              plVar7 = (long *)plVar4[1];
            }
          }
          else {
            enet_list_move(param_1 + 0x128,plVar6,plVar4[1]);
            if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
              enet_list_insert(*(long *)(param_1 + 0x10) + 0x58,param_1);
              *(ushort *)(param_1 + 0x138) = *(ushort *)(param_1 + 0x138) | 1;
            }
            plVar3 = (long *)*plVar4;
            plVar7 = plVar4;
          }
        }
        else {
          uVar8 = uVar1 >> 0xc;
          if (uVar1 < uVar2) {
            uVar8 = uVar8 + 0x10;
LAB_00100f1b:
            if (uVar8 <= (ushort)((uVar2 >> 0xc) + 6)) goto LAB_00100fb9;
            plVar7 = (long *)*plVar4;
          }
          else {
            if (uVar2 >> 0xc <= uVar8) goto LAB_00100f1b;
            plVar7 = (long *)*plVar4;
          }
          plVar3 = plVar7;
          if (plVar6 != plVar4) {
            enet_list_move(param_1 + 0x128,plVar6,plVar4[1]);
            if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
              enet_list_insert(*(long *)(param_1 + 0x10) + 0x58,param_1);
              *(ushort *)(param_1 + 0x138) = *(ushort *)(param_1 + 0x138) | 1;
            }
            plVar3 = (long *)*plVar4;
          }
        }
        plVar4 = plVar3;
        plVar6 = plVar4;
        if (plVar5 == plVar4) goto LAB_00100fb9;
      }
      plVar4 = (long *)*plVar4;
    } while (plVar5 != plVar4);
LAB_00100fb9:
    plVar5 = plVar7;
    if (plVar6 == plVar4) {
      plVar7 = (long *)*(long *)(param_2 + 0x40);
    }
    else {
      enet_list_move(param_1 + 0x128,plVar6,plVar4[1]);
      if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
        enet_list_insert(*(long *)(param_1 + 0x10) + 0x58,param_1);
        *(ushort *)(param_1 + 0x138) = *(ushort *)(param_1 + 0x138) | 1;
      }
      plVar5 = plVar4;
      plVar7 = (long *)*(long *)(param_2 + 0x40);
    }
  }
  enet_peer_remove_incoming_commands_isra_0(plVar7,plVar5,param_3);
  return;
}



void enet_peer_dispatch_incoming_reliable_commands(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  short sVar5;
  long *plVar6;
  
  plVar3 = *(long **)(param_2 + 0x30);
  plVar6 = plVar3;
  if (plVar3 != (long *)(param_2 + 0x30)) {
    do {
      if ((int)plVar6[9] != 0) {
LAB_0010111d:
        if (plVar3 == plVar6) {
          return;
        }
        break;
      }
      plVar1 = plVar6 + 2;
      if ((short)*plVar1 != (short)(*(short *)(param_2 + 0x26) + 1)) goto LAB_0010111d;
      piVar2 = (int *)((long)plVar6 + 0x44);
      plVar6 = (long *)*plVar6;
      sVar5 = *(short *)(param_2 + 0x26) + (short)*piVar2;
      if (*piVar2 == 0) {
        sVar5 = (short)*plVar1;
      }
      *(short *)(param_2 + 0x26) = sVar5;
    } while (plVar6 != (long *)(param_2 + 0x30));
    lVar4 = plVar6[1];
    *(undefined2 *)(param_2 + 0x28) = 0;
    enet_list_move(param_1 + 0x128,plVar3,lVar4);
    if ((*(byte *)(param_1 + 0x138) & 1) == 0) {
      enet_list_insert(*(long *)(param_1 + 0x10) + 0x58,param_1);
      *(ushort *)(param_1 + 0x138) = *(ushort *)(param_1 + 0x138) | 1;
      if (*(long *)(param_2 + 0x40) != param_2 + 0x40) goto LAB_00101151;
    }
    else if (*(long *)(param_2 + 0x40) != param_2 + 0x40) {
LAB_00101151:
      enet_peer_dispatch_incoming_unreliable_commands(param_1,param_2,param_3);
      return;
    }
  }
  return;
}



undefined1 *
enet_peer_queue_incoming_command
          (long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
          uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 *puVar7;
  void *__s;
  undefined8 *puVar8;
  ushort uVar9;
  long lVar10;
  uint uVar11;
  size_t __n;
  
  lVar10 = (ulong)param_2[1] * 0x50 + *(long *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x40) == 6) goto switchD_0010122d_caseD_a;
  if ((*param_2 & 0xf) == 9) {
switchD_0010122d_caseD_9:
    puVar8 = (undefined8 *)(lVar10 + 0x40);
    uVar11 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_2 + 2);
    uVar2 = *(ushort *)(lVar10 + 0x26);
    uVar9 = uVar1 >> 0xc;
    if (uVar1 < uVar2) {
      uVar9 = uVar9 + 0x10;
    }
    else if (uVar9 < uVar2 >> 0xc) goto switchD_0010122d_caseD_a;
    if ((ushort)((uVar2 >> 0xc) + 6) < uVar9) {
switchD_0010122d_caseD_a:
      if (param_6 != 0) {
        return (undefined1 *)0x0;
      }
      return dummyCommand_0;
    }
    switch(*param_2 & 0xf) {
    case 6:
    case 8:
      if (uVar2 == uVar1) goto switchD_0010122d_caseD_a;
      for (puVar8 = *(undefined8 **)(lVar10 + 0x38); (undefined8 *)(lVar10 + 0x30) != puVar8;
          puVar8 = (undefined8 *)puVar8[1]) {
        uVar9 = *(ushort *)(puVar8 + 2);
        if (uVar1 < uVar2) {
          if (uVar2 <= uVar9) break;
LAB_001013d5:
          if (uVar9 <= uVar1) {
            uVar11 = 0;
            if (uVar9 < uVar1) goto LAB_00101270;
            goto switchD_0010122d_caseD_a;
          }
        }
        else if (uVar2 <= uVar9) goto LAB_001013d5;
      }
      uVar11 = 0;
      break;
    case 7:
    case 0xc:
      uVar9 = *(ushort *)(param_2 + 4) << 8 | *(ushort *)(param_2 + 4) >> 8;
      uVar11 = (uint)uVar9;
      if ((uVar2 == uVar1) && (uVar9 <= *(ushort *)(lVar10 + 0x28))) goto switchD_0010122d_caseD_a;
      for (puVar8 = *(undefined8 **)(lVar10 + 0x48); (undefined8 *)(lVar10 + 0x40) != puVar8;
          puVar8 = (undefined8 *)puVar8[1]) {
        uVar3 = *(ushort *)(puVar8 + 2);
        if (uVar1 < uVar2) {
          if (uVar2 <= uVar3) break;
LAB_00101375:
          if (uVar3 < uVar1) break;
          if ((uVar3 <= uVar1) && (*(ushort *)((long)puVar8 + 0x12) <= uVar9)) {
            if (uVar9 <= *(ushort *)((long)puVar8 + 0x12)) goto switchD_0010122d_caseD_a;
            break;
          }
        }
        else if (uVar2 <= uVar3) goto LAB_00101375;
      }
      break;
    case 9:
      goto switchD_0010122d_caseD_9;
    default:
      goto switchD_0010122d_caseD_a;
    }
  }
LAB_00101270:
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x2b28) <= *(ulong *)(param_1 + 0x1c8)) {
    return (undefined1 *)0x0;
  }
  plVar6 = (long *)enet_packet_create(param_3,param_4,param_5);
  if (plVar6 == (long *)0x0) {
    return (undefined1 *)0x0;
  }
  puVar7 = (undefined1 *)enet_malloc(0x60);
  if (puVar7 != (undefined1 *)0x0) {
    *(uint *)(puVar7 + 0x10) = uVar11 << 0x10 | (uint)*(ushort *)(param_2 + 2);
    uVar4 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(puVar7 + 0x14) = *(undefined8 *)param_2;
    *(undefined8 *)(puVar7 + 0x1c) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(puVar7 + 0x24) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(puVar7 + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    uVar5 = *(undefined8 *)(param_2 + 0x28);
    *(long **)(puVar7 + 0x58) = plVar6;
    *(undefined8 *)(puVar7 + 0x50) = 0;
    *(undefined8 *)(puVar7 + 0x34) = uVar4;
    *(undefined8 *)(puVar7 + 0x3c) = uVar5;
    *(ulong *)(puVar7 + 0x44) = CONCAT44(param_6,param_6);
    if (param_6 == 0) {
LAB_00101449:
      uVar4 = *puVar8;
      *plVar6 = *plVar6 + 1;
      *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + plVar6[3];
      enet_list_insert(uVar4,puVar7);
      if (((*param_2 & 0xf) - 6 & 0xfd) == 0) {
        enet_peer_dispatch_incoming_reliable_commands(param_1,lVar10,puVar7);
        return puVar7;
      }
      enet_peer_dispatch_incoming_unreliable_commands(param_1,lVar10);
      return puVar7;
    }
    if (param_6 < 0x100001) {
      __n = (ulong)(param_6 + 0x1f >> 5) << 2;
      __s = (void *)enet_malloc(__n);
      *(void **)(puVar7 + 0x50) = __s;
      if (__s != (void *)0x0) {
        memset(__s,0,__n);
        goto LAB_00101449;
      }
    }
    enet_free(puVar7);
  }
  if (*plVar6 != 0) {
    return (undefined1 *)0x0;
  }
  enet_packet_destroy(plVar6);
  return (undefined1 *)0x0;
}


