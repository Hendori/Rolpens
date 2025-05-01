
void wslay_event_frame_recv_callback
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_4 + 0x10e0);
                    /* WARNING: Could not recover jumptable at 0x0010001d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_4,param_1,param_2,param_3,param_4[1],UNRECOVERED_JUMPTABLE);
  return;
}



void wslay_event_frame_send_callback
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,long *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_4 + 0x10e8);
                    /* WARNING: Could not recover jumptable at 0x0010003d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_4,param_1,param_2,param_3,param_4[1],UNRECOVERED_JUMPTABLE);
  return;
}



void wslay_event_frame_genmask_callback(undefined8 param_1,undefined8 param_2,long *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_3 + 0x10f0);
                    /* WARNING: Could not recover jumptable at 0x0010005b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_3,param_1,param_2,param_3[1],UNRECOVERED_JUMPTABLE);
  return;
}



void * wslay_event_send_ctrl_queue_pop(long param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  
  lVar1 = param_1 + 0xa0;
  if ((*(byte *)(param_1 + 0x11) & 2) == 0) {
    pvVar3 = (void *)wslay_queue_top(lVar1);
    wslay_queue_pop(lVar1);
    return pvVar3;
  }
  while( true ) {
    iVar2 = wslay_queue_empty(lVar1);
    if (iVar2 != 0) {
      return (void *)0x0;
    }
    pvVar3 = (void *)wslay_queue_top(lVar1);
    wslay_queue_pop(lVar1);
    if (*(char *)((long)pvVar3 + 9) == '\b') break;
    free(pvVar3);
  }
  return pvVar3;
}



void wslay_event_context_free_part_0(void *param_1)

{
  long lVar1;
  void *pvVar2;
  int iVar3;
  
  lVar1 = (long)param_1 + 0x30;
  while( true ) {
    iVar3 = wslay_queue_empty(lVar1);
    if (iVar3 != 0) break;
    pvVar2 = (void *)wslay_queue_top(lVar1);
    wslay_queue_pop(lVar1);
    free(pvVar2);
  }
  wslay_queue_deinit();
  lVar1 = (long)param_1 + 0x50;
  while( true ) {
    iVar3 = wslay_queue_empty(lVar1);
    if (iVar3 != 0) break;
    pvVar2 = (void *)wslay_queue_top(lVar1);
    wslay_queue_pop(lVar1);
    free(pvVar2);
  }
  wslay_queue_deinit();
  lVar1 = (long)param_1 + 0x90;
  while( true ) {
    iVar3 = wslay_queue_empty(lVar1);
    if (iVar3 != 0) break;
    pvVar2 = (void *)wslay_queue_top(lVar1);
    wslay_queue_pop(lVar1);
    free(pvVar2);
  }
  wslay_queue_deinit();
  lVar1 = (long)param_1 + 0xa0;
  while( true ) {
    iVar3 = wslay_queue_empty(lVar1);
    if (iVar3 != 0) break;
    pvVar2 = (void *)wslay_queue_top(lVar1);
    wslay_queue_pop(lVar1);
    free(pvVar2);
  }
  wslay_queue_deinit();
  wslay_frame_context_free(*(undefined8 *)((long)param_1 + 0x18));
  free(*(void **)((long)param_1 + 0x88));
  free(param_1);
  return;
}



int wslay_event_context_init(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  long lVar11;
  long in_FS_OFFSET;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = wslay_event_frame_genmask_callback;
  local_48 = wslay_event_frame_send_callback;
  uStack_40 = 0x100000;
  pvVar10 = calloc(1,0x1138);
  *param_1 = (long)pvVar10;
  if (pvVar10 == (void *)0x0) {
    iVar8 = -500;
  }
  else {
    uVar1 = param_2[6];
    uVar3 = *param_2;
    uVar4 = param_2[1];
    *(undefined8 *)((long)pvVar10 + 0x1128) = param_3;
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    *(undefined8 *)((long)pvVar10 + 0x1110) = uVar1;
    uVar1 = param_2[4];
    uVar7 = param_2[5];
    *(undefined8 *)((long)pvVar10 + 0x1120) = param_3;
    *(void **)((long)pvVar10 + 0x1118) = pvVar10;
    *(undefined8 *)((long)pvVar10 + 0x10e0) = uVar3;
    *(undefined8 *)((long)pvVar10 + 0x10e8) = uVar4;
    *(undefined8 *)((long)pvVar10 + 0x10f0) = uVar5;
    *(undefined8 *)((long)pvVar10 + 0x10f8) = uVar6;
    *(undefined8 *)((long)pvVar10 + 0x1100) = uVar1;
    *(undefined8 *)((long)pvVar10 + 0x1108) = uVar7;
    iVar8 = wslay_frame_context_init((long)pvVar10 + 0x18,&local_48,(long)pvVar10 + 0x1118);
    if (iVar8 == 0) {
      *(undefined2 *)(*param_1 + 0x20) = 0x101;
      wslay_queue_init();
      wslay_queue_init(*param_1 + 0xa0);
      lVar2 = *param_1;
      *(undefined1 (*) [16])(lVar2 + 0xb0) = (undefined1  [16])0x0;
      wslay_queue_init(lVar2 + 0x30);
      lVar2 = *param_1;
      *(undefined1 *)(lVar2 + 0x2a) = 0xff;
      lVar11 = lVar2 + 0x30;
      *(undefined4 *)(lVar2 + 0x2c) = 0;
      while( true ) {
        iVar9 = wslay_queue_empty(lVar11);
        if (iVar9 != 0) break;
        pvVar10 = (void *)wslay_queue_top(lVar11);
        wslay_queue_pop(lVar11);
        free(pvVar10);
      }
      wslay_queue_init(*param_1 + 0x50);
      lVar2 = *param_1;
      *(undefined1 *)(lVar2 + 0x4a) = 0xff;
      lVar11 = lVar2 + 0x50;
      *(undefined4 *)(lVar2 + 0x4c) = 0;
      while( true ) {
        iVar9 = wslay_queue_empty(lVar11);
        if (iVar9 != 0) break;
        pvVar10 = (void *)wslay_queue_top(lVar11);
        wslay_queue_pop(lVar11);
        free(pvVar10);
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + 0x12) = 0x3ee03ee;
      *(long *)(lVar2 + 0x68) = lVar2 + 0x28;
      *(undefined8 *)(lVar2 + 8) = 0x7fffffff;
      *(long *)(lVar2 + 0x10c0) = lVar2 + 0xc0;
      *(long *)(lVar2 + 0x10c8) = lVar2 + 0xc0;
    }
    else if (*param_1 != 0) {
      wslay_event_context_free_part_0();
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 wslay_event_queue_msg_ex(long param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  size_t __size;
  byte bVar5;
  undefined4 uVar6;
  
  uVar6 = 0xfffffed2;
  if ((*(char *)(param_1 + 0x21) != '\0') && ((*(byte *)(param_1 + 0x11) & 2) == 0)) {
    bVar1 = *param_2;
    bVar5 = bVar1 >> 3;
    if ((((bVar5 & 1) == 0) || ((*(ulong *)(param_2 + 0x10) < 0x7e && ((param_3 & 4) == 0)))) &&
       ((~*(byte *)(param_1 + 0x1130) & param_3) == 0)) {
      uVar2 = *(undefined8 *)(param_2 + 8);
      lVar3 = *(long *)(param_2 + 0x10);
      __size = lVar3 + 0x30;
      pvVar4 = malloc(__size);
      if (pvVar4 == (void *)0x0) {
        uVar6 = 0xfffffe0c;
      }
      else {
        __memset_chk(pvVar4,0,0x30,__size);
        *(undefined1 *)((long)pvVar4 + 8) = 1;
        *(byte *)((long)pvVar4 + 10) = param_3;
        *(byte *)((long)pvVar4 + 9) = bVar1;
        if (lVar3 != 0) {
          *(long *)((long)pvVar4 + 0x10) = (long)pvVar4 + 0x30;
          if (__size < 0x30) {
            __size = 0x30;
          }
          __memcpy_chk((long)pvVar4 + 0x30,uVar2,lVar3,__size - 0x30);
          *(long *)((long)pvVar4 + 0x18) = lVar3;
        }
        if ((bVar5 & 1) == 0) {
          wslay_queue_push(param_1 + 0x90,pvVar4);
        }
        else {
          wslay_queue_push(param_1 + 0xa0,pvVar4);
        }
        lVar3 = *(long *)(param_2 + 0x10);
        *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
        *(long *)(param_1 + 0xb8) = lVar3 + *(long *)(param_1 + 0xb8);
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0xfffffed4;
    }
  }
  return uVar6;
}



void wslay_event_queue_msg(undefined8 param_1,undefined8 param_2)

{
  wslay_event_queue_msg_ex(param_1,param_2,0);
  return;
}



undefined8 wslay_event_queue_close(long param_1,ushort param_2,void *param_3,ulong param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 local_b8 [8];
  ushort *local_b0;
  long local_a8;
  ushort local_98;
  undefined1 local_96 [134];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0xfffffed2;
  if ((*(char *)(param_1 + 0x21) != '\0') && ((*(byte *)(param_1 + 0x11) & 2) == 0)) {
    if (param_4 < 0x7c) {
      local_a8 = 0;
      if (param_2 != 0) {
        local_98 = param_2 << 8 | param_2 >> 8;
        if (param_4 != 0) {
          memcpy(local_96,param_3,param_4);
        }
        local_a8 = param_4 + 2;
      }
      local_b0 = &local_98;
      local_b8[0] = 8;
      uVar1 = wslay_event_queue_msg_ex(param_1,local_b8,0);
      if ((int)uVar1 == 0) {
        *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
      }
    }
    else {
      uVar1 = 0xfffffed4;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined8 wslay_event_queue_close_wrapper(long param_1,ushort param_2,void *param_3,ulong param_4)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined1 local_b8 [8];
  ushort *local_b0;
  long local_a8;
  ushort local_98;
  undefined1 local_96 [134];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  if ((*(char *)(param_1 + 0x21) != '\0') && ((*(byte *)(param_1 + 0x11) & 2) == 0)) {
    if (0x7b < param_4) {
      uVar1 = 0xfffffed4;
      goto LAB_001006ca;
    }
    if (param_2 != 0) {
      local_98 = param_2 << 8 | param_2 >> 8;
      if (param_4 != 0) {
        memcpy(local_96,param_3,param_4);
      }
      lVar2 = param_4 + 2;
    }
    local_b0 = &local_98;
    local_b8[0] = 8;
    local_a8 = lVar2;
    uVar1 = wslay_event_queue_msg_ex(param_1,local_b8,0);
    if ((int)uVar1 == 0) {
      *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 2;
    }
    else if ((int)uVar1 != -0x12e) goto LAB_001006ca;
  }
  uVar1 = 0;
LAB_001006ca:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined4 wslay_event_queue_fragmented_msg_ex(long param_1,byte *param_2,byte param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  
  uVar5 = 0xfffffed2;
  if ((*(char *)(param_1 + 0x21) != '\0') && ((*(byte *)(param_1 + 0x11) & 2) == 0)) {
    bVar1 = *param_2;
    if (((bVar1 & 8) == 0) && ((~*(byte *)(param_1 + 0x1130) & param_3) == 0)) {
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 8);
      pvVar4 = calloc(1,0x30);
      if (pvVar4 == (void *)0x0) {
        uVar5 = 0xfffffe0c;
      }
      else {
        *(ushort *)((long)pvVar4 + 9) = CONCAT11(param_3,bVar1);
        *(undefined4 *)((long)pvVar4 + 0xc) = 1;
        *(undefined8 *)((long)pvVar4 + 0x20) = uVar3;
        *(undefined8 *)((long)pvVar4 + 0x28) = uVar2;
        wslay_queue_push(param_1 + 0x90,pvVar4);
        *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + 1;
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0xfffffed4;
    }
  }
  return uVar5;
}



void wslay_event_queue_fragmented_msg(undefined8 param_1,undefined8 param_2)

{
  wslay_event_queue_fragmented_msg_ex(param_1,param_2,0);
  return;
}



void wslay_event_config_set_callbacks(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x10e0) = *param_2;
  *(undefined8 *)(param_1 + 0x10e8) = uVar1;
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x10f0) = param_2[2];
  *(undefined8 *)(param_1 + 0x10f8) = uVar1;
  uVar1 = param_2[5];
  *(undefined8 *)(param_1 + 0x1100) = param_2[4];
  *(undefined8 *)(param_1 + 0x1108) = uVar1;
  *(undefined8 *)(param_1 + 0x1110) = param_2[6];
  return;
}



void wslay_event_context_server_init(long *param_1)

{
  int iVar1;
  
  iVar1 = wslay_event_context_init();
  if (iVar1 == 0) {
    *(undefined1 *)(*param_1 + 0x10) = 1;
  }
  return;
}



void wslay_event_context_client_init(long *param_1)

{
  int iVar1;
  
  iVar1 = wslay_event_context_init();
  if (iVar1 == 0) {
    *(undefined1 *)(*param_1 + 0x10) = 0;
  }
  return;
}



void wslay_event_context_free(long param_1)

{
  if (param_1 != 0) {
    wslay_event_context_free_part_0();
    return;
  }
  return;
}



ulong wslay_event_recv(byte *param_1)

{
  size_t __size;
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  byte bVar9;
  ushort *puVar10;
  ushort uVar11;
  byte *pbVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  long in_FS_OFFSET;
  ushort *local_98;
  undefined8 local_88;
  ushort *local_80;
  undefined8 local_78;
  ushort local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ushort *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
LAB_00100ab2:
  bVar9 = param_1[0x20];
  do {
    if (bVar9 == 0) {
LAB_00100cfd:
      uVar7 = 0;
LAB_00100b41:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar7;
    }
    local_48 = (ushort *)0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    lVar6 = wslay_frame_recv(*(undefined8 *)(param_1 + 0x18),local_68);
    if (lVar6 < 0) {
      if ((lVar6 != -100) ||
         ((*(int *)(param_1 + 0x80) != -0x191 && (*(int *)(param_1 + 0x80) != 0)))) {
        uVar7 = wslay_event_queue_close_wrapper(param_1,0,0,0);
        if ((int)uVar7 == 0) {
          uVar7 = 0xfffffe70;
        }
        goto LAB_00100b41;
      }
      goto LAB_00100cfd;
    }
    if (((~param_1[0x1130] & local_68[1]) != 0) ||
       ((((local_68 & (undefined1  [16])0x400) != (undefined1  [16])0x0 &&
         (((local_68 & (undefined1  [16])0x80000) != (undefined1  [16])0x0 || (local_68[2] == 0))))
        || (local_58[0] == '\0')))) {
LAB_00100b30:
      uVar7 = wslay_event_queue_close_wrapper(param_1,0x3ea,0,0);
      goto LAB_00100b41;
    }
    pbVar12 = *(byte **)(param_1 + 0x68);
    bVar9 = pbVar12[2];
    uVar1 = local_68._0_2_;
    if (bVar9 == 0xff) {
      if ((1 < (byte)(local_68[2] - 1)) && (2 < (byte)(local_68[2] - 8))) goto LAB_00100b30;
      pbVar12[2] = local_68[2];
      pbVar12[0x18] = 0;
      pbVar12[0x19] = 0;
      pbVar12[0x1a] = 0;
      pbVar12[0x1b] = 0;
      pbVar12[0x1c] = 0;
      pbVar12[0x1d] = 0;
      pbVar12[0x1e] = 0;
      pbVar12[0x1f] = 0;
      *(undefined2 *)pbVar12 = local_68._0_2_;
      pbVar12 = *(byte **)(param_1 + 0x68);
      lVar6 = *(long *)(pbVar12 + 0x18);
LAB_00100980:
      if (*(ulong *)(param_1 + 8) < (ulong)(lVar6 + local_68._8_8_)) {
        uVar7 = wslay_event_queue_close_wrapper(param_1,0x3f1,0,0);
        goto LAB_00100b41;
      }
      *(undefined8 *)(param_1 + 0x70) = local_68._8_8_;
      if (*(code **)(param_1 + 0x10f8) != (code *)0x0) {
        local_80 = (ushort *)local_68._8_8_;
        local_88._0_3_ = local_68._0_3_;
        (**(code **)(param_1 + 0x10f8))(param_1,&local_88,*(undefined8 *)(param_1 + 0x1128));
        pbVar12 = *(byte **)(param_1 + 0x68);
      }
      if ((((*param_1 & 1) != 0) &&
          ((local_68 & (undefined1  [16])0x80000) == (undefined1  [16])0x0)) ||
         (uVar15 = local_68._8_8_, local_68._8_8_ == 0)) {
LAB_00100a35:
        bVar9 = pbVar12[2];
        goto LAB_00100a3b;
      }
      __size = local_68._8_8_ + 0x18;
      pvVar5 = malloc(__size);
      if (pvVar5 != (void *)0x0) {
        lVar6 = __memset_chk(pvVar5,0,0x18,__size);
        *(long *)(lVar6 + 8) = lVar6 + 0x18;
        *(undefined8 *)(lVar6 + 0x10) = uVar15;
        wslay_queue_push(pbVar12 + 8,lVar6);
        *(long *)(pbVar12 + 0x18) = *(long *)(pbVar12 + 0x18) + uVar15;
        pbVar12 = *(byte **)(param_1 + 0x68);
        goto LAB_00100a35;
      }
LAB_00100dc9:
      param_1[0x20] = 0;
      uVar7 = 0xfffffe0c;
      goto LAB_00100b41;
    }
    if ((*(long *)(param_1 + 0x70) == 0) && (*(long *)(param_1 + 0x78) == 0)) {
      if (local_68[2] == 0) {
        lVar6 = *(long *)(pbVar12 + 0x18);
        *pbVar12 = local_68[0];
      }
      else {
        if (2 < (byte)(local_68[2] - 8)) goto LAB_00100b30;
        pbVar12 = param_1 + 0x48;
        param_1[0x4a] = local_68[2];
        *(byte **)(param_1 + 0x68) = pbVar12;
        param_1[0x60] = 0;
        param_1[0x61] = 0;
        param_1[0x62] = 0;
        param_1[99] = 0;
        param_1[100] = 0;
        param_1[0x65] = 0;
        param_1[0x66] = 0;
        param_1[0x67] = 0;
        *(undefined2 *)(param_1 + 0x48) = uVar1;
        lVar6 = 0;
      }
      goto LAB_00100980;
    }
LAB_00100a3b:
    uVar4 = *(uint *)(pbVar12 + 4);
    if (((((pbVar12[1] & 4) == 0) && (bVar9 == 1)) || (bVar9 == 8)) &&
       (puVar10 = (ushort *)((ulong)(bVar9 == 8) * 2), puVar10 < local_48)) {
      do {
        uVar4 = (uint)(byte)utf8d[uVar4 + 0x100 +
                                  (uint)(byte)utf8d[*(byte *)(local_58._8_8_ + (long)puVar10)]];
        *(uint *)(pbVar12 + 4) = uVar4;
        if (uVar4 == 0xc) {
          uVar7 = wslay_event_queue_close_wrapper(param_1,0x3ef,0,0);
          if ((int)uVar7 != 0) goto LAB_00100b41;
          uVar4 = *(uint *)(*(long *)(param_1 + 0x68) + 4);
          goto LAB_00100a5c;
        }
        puVar10 = (ushort *)((long)puVar10 + 1);
      } while (puVar10 < local_48);
    }
    else {
LAB_00100a5c:
      if (uVar4 == 0xc) goto LAB_00100cfd;
    }
    if (*(code **)(param_1 + 0x1100) != (code *)0x0) {
      local_80 = local_48;
      local_88 = local_58._8_8_;
      (**(code **)(param_1 + 0x1100))(param_1,&local_88,*(undefined8 *)(param_1 + 0x1128));
    }
    if (local_48 == (ushort *)0x0) {
      if (*(long *)(param_1 + 0x70) != *(long *)(param_1 + 0x78)) goto LAB_00100ab2;
    }
    else {
      if (((*param_1 & 1) == 0) || ((local_68 & (undefined1  [16])0x80000) != (undefined1  [16])0x0)
         ) {
        lVar6 = wslay_queue_tail(*(long *)(param_1 + 0x68) + 8);
        memcpy((void *)(*(long *)(param_1 + 0x78) + *(long *)(lVar6 + 8)),(void *)local_58._8_8_,
               (size_t)local_48);
      }
      lVar6 = *(long *)(param_1 + 0x78);
      *(long *)(param_1 + 0x78) = (long)local_48 + lVar6;
      if (*(long *)(param_1 + 0x70) != (long)local_48 + lVar6) goto LAB_00100ab2;
    }
    pcVar14 = *(char **)(param_1 + 0x68);
    if (*pcVar14 == '\0') {
      pcVar8 = *(code **)(param_1 + 0x1108);
      if (pcVar8 != (code *)0x0) {
LAB_00100be1:
        (*pcVar8)(param_1,*(undefined8 *)(param_1 + 0x1128));
        pcVar14 = *(char **)(param_1 + 0x68);
        if (*pcVar14 != '\0') goto LAB_00100bfc;
      }
    }
    else {
      if (((pcVar14[2] == '\x01') || (pcVar14[2] == '\b')) && (*(int *)(pcVar14 + 4) != 0)) {
        uVar7 = wslay_event_queue_close_wrapper(param_1,0x3ef,0,0);
        goto LAB_00100b41;
      }
      pcVar8 = *(code **)(param_1 + 0x1108);
      if (pcVar8 != (code *)0x0) goto LAB_00100be1;
LAB_00100bfc:
      if ((*(long *)(param_1 + 0x1110) != 0) || ((byte)(pcVar14[2] - 8U) < 2)) {
        if ((((*param_1 & 1) == 0) ||
            ((local_68 & (undefined1  [16])0x80000) != (undefined1  [16])0x0)) &&
           (*(size_t *)(pcVar14 + 0x18) != 0)) {
          local_98 = (ushort *)malloc(*(size_t *)(pcVar14 + 0x18));
          if (local_98 == (ushort *)0x0) goto LAB_00100dc9;
          pcVar14 = pcVar14 + 8;
          lVar6 = 0;
          while (iVar3 = wslay_queue_empty(pcVar14), iVar3 == 0) {
            pvVar5 = (void *)wslay_queue_top(pcVar14);
            wslay_queue_pop(pcVar14);
            __memcpy_chk((long)local_98 + lVar6,*(undefined8 *)((long)pvVar5 + 8),
                         *(undefined8 *)((long)pvVar5 + 0x10));
            lVar6 = lVar6 + *(long *)((long)pvVar5 + 0x10);
            free(pvVar5);
          }
          pcVar14 = *(char **)(param_1 + 0x68);
          uVar15 = *(undefined8 *)(pcVar14 + 0x18);
        }
        else {
          local_98 = (ushort *)0x0;
          uVar15 = 0;
        }
        if (pcVar14[2] == '\b') {
          if (*(ulong *)(pcVar14 + 0x18) < 2) {
            bVar9 = param_1[0x11];
            uVar11 = 0;
            lVar6 = 0;
            puVar10 = (ushort *)0x0;
            uVar2 = 0x3ed;
          }
          else {
            uVar11 = *local_98;
            uVar2 = uVar11 << 8 | uVar11 >> 8;
            if (((ushort)(uVar2 - 1000) < 0xc) && (uVar11 != 0xec03)) {
              if ((ushort)(uVar2 - 0x3ed) < 2) {
LAB_00101081:
                free(local_98);
                uVar7 = wslay_event_queue_close_wrapper(param_1,0x3ea,0,0);
                if ((int)uVar7 == 0) {
                  uVar7 = 0;
                }
                goto LAB_00100b41;
              }
            }
            else if (1999 < (ushort)(uVar2 - 3000)) goto LAB_00101081;
            bVar9 = param_1[0x11];
            lVar6 = *(ulong *)(pcVar14 + 0x18) - 2;
            puVar10 = local_98 + 1;
            uVar11 = uVar2;
          }
          param_1[0x11] = bVar9 | 1;
          *(ushort *)(param_1 + 0x12) = uVar2;
          uVar4 = wslay_event_queue_close_wrapper(param_1,uVar11,puVar10,lVar6);
          if (uVar4 != 0) {
            free(local_98);
            uVar7 = (ulong)uVar4;
            goto LAB_00100b41;
          }
        }
        else {
          if (pcVar14[2] == '\t') {
            local_88 = CONCAT71(local_88._1_7_,10);
            local_80 = local_98;
            local_78 = *(undefined8 *)(pcVar14 + 0x18);
            uVar4 = wslay_event_queue_msg_ex(param_1,&local_88,0);
            if ((uVar4 != 0) && (uVar4 != 0xfffffed2)) {
              param_1[0x20] = 0;
              free(local_98);
              uVar7 = (ulong)uVar4;
              goto LAB_00100b41;
            }
          }
          uVar11 = 0;
        }
        if (*(code **)(param_1 + 0x1110) != (code *)0x0) {
          local_80 = local_98;
          local_88 = CONCAT62(local_88._2_6_,*(undefined2 *)(*(long *)(param_1 + 0x68) + 1));
          param_1[0x80] = 0;
          param_1[0x81] = 0;
          param_1[0x82] = 0;
          param_1[0x83] = 0;
          local_78 = uVar15;
          local_70 = uVar11;
          (**(code **)(param_1 + 0x1110))(param_1,&local_88,*(undefined8 *)(param_1 + 0x1128));
        }
        free(local_98);
        pcVar14 = *(char **)(param_1 + 0x68);
      }
      pcVar14[2] = -1;
      pcVar13 = pcVar14 + 8;
      pcVar14[4] = '\0';
      pcVar14[5] = '\0';
      pcVar14[6] = '\0';
      pcVar14[7] = '\0';
      while (iVar3 = wslay_queue_empty(pcVar13), iVar3 == 0) {
        pvVar5 = (void *)wslay_queue_top(pcVar13);
        wslay_queue_pop(pcVar13);
        free(pvVar5);
      }
      if (*(byte **)(param_1 + 0x68) == param_1 + 0x48) {
        *(byte **)(param_1 + 0x68) = param_1 + 0x28;
      }
    }
    bVar9 = param_1[0x20];
    *(undefined1 (*) [16])(param_1 + 0x70) = (undefined1  [16])0x0;
  } while( true );
}



undefined8 wslay_event_send(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ushort uVar5;
  long lVar6;
  ushort uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  void *__ptr;
  long in_FS_OFFSET;
  int local_5c;
  undefined1 local_58 [2];
  undefined1 auStack_56 [6];
  long lStack_50;
  bool local_48;
  undefined1 auStack_47 [15];
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0x21) != '\0') {
    lVar1 = param_1 + 0xc0;
    lVar2 = param_1 + 0x90;
    lVar3 = param_1 + 0xa0;
    do {
      iVar8 = wslay_queue_empty(lVar2);
      if ((iVar8 == 0) || (iVar8 = wslay_queue_empty(lVar3), iVar8 == 0)) {
        lVar9 = *(long *)(param_1 + 0x88);
        if (lVar9 != 0) goto LAB_00101120;
        iVar8 = wslay_queue_empty(lVar3);
        if (iVar8 == 0) {
          lVar9 = wslay_event_send_ctrl_queue_pop(param_1);
          *(long *)(param_1 + 0x88) = lVar9;
          if (lVar9 == 0) {
            uVar10 = 0;
            goto LAB_0010123e;
          }
        }
        else {
          uVar10 = wslay_queue_top(lVar2);
          *(undefined8 *)(param_1 + 0x88) = uVar10;
          wslay_queue_pop(lVar2);
          lVar9 = *(long *)(param_1 + 0x88);
        }
        if (*(int *)(lVar9 + 0xc) != 0) goto LAB_00101143;
        uVar10 = *(undefined8 *)(lVar9 + 0x18);
        *(undefined1 *)(lVar9 + 8) = 1;
        *(undefined8 *)(param_1 + 0x10d8) = 0;
        *(undefined8 *)(param_1 + 0x10d0) = uVar10;
LAB_001012b5:
        lVar11 = *(long *)(param_1 + 0x10d8);
        stack0xffffffffffffffab = SUB1613((undefined1  [16])0x0,3);
        stack0xffffffffffffffa9 = *(ushort *)(lVar9 + 9) << 8 | *(ushort *)(lVar9 + 9) >> 8;
        local_58[0] = 1;
        auStack_47 = SUB1615((undefined1  [16])0x0,1);
        local_48 = (bool)(*(byte *)(param_1 + 0x10) ^ 1);
        lVar9 = *(long *)(lVar9 + 0x10);
        lVar6 = *(long *)(param_1 + 0x10d0);
        local_38 = lVar6;
        if (lVar11 != 0) {
          lVar9 = lVar9 + lVar11;
          local_38 = lVar6 - lVar11;
        }
        auStack_47._7_8_ = lVar9;
        lStack_50 = lVar6;
        lVar9 = wslay_frame_send(*(undefined8 *)(param_1 + 0x18),local_58);
        if (lVar9 < 0) {
LAB_00101530:
          if (lVar9 == -0x65) {
            if (*(int *)(param_1 + 0x80) == -0x191) break;
            if (*(int *)(param_1 + 0x80) == 0) {
              uVar10 = 0;
              goto LAB_0010123e;
            }
          }
LAB_001014b2:
          *(undefined1 *)(param_1 + 0x21) = 0;
          uVar10 = 0xfffffe70;
          goto LAB_0010123e;
        }
        lVar9 = lVar9 + *(long *)(param_1 + 0x10d8);
        *(long *)(param_1 + 0x10d8) = lVar9;
        if (lVar9 != *(long *)(param_1 + 0x10d0)) break;
        __ptr = *(void **)(param_1 + 0x88);
        uVar4 = *(ulong *)((long)__ptr + 0x18);
        *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
        *(ulong *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) - uVar4;
        if (*(char *)((long)__ptr + 9) == '\b') {
          *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
          *(undefined1 *)(param_1 + 0x21) = 0;
          uVar7 = 0x3ed;
          if (1 < uVar4) {
            uVar5 = **(ushort **)((long)__ptr + 0x10);
            if (uVar5 != 0) {
              uVar7 = uVar5 << 8 | uVar5 >> 8;
            }
          }
          *(ushort *)(param_1 + 0x14) = uVar7;
        }
LAB_00101398:
        free(__ptr);
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      else {
        lVar9 = *(long *)(param_1 + 0x88);
        if (lVar9 == 0) break;
LAB_00101120:
        if (((*(byte *)(lVar9 + 9) & 8) == 0) && (*(int *)(*(long *)(param_1 + 0x18) + 0x1078) == 0)
           ) {
          iVar8 = wslay_queue_empty(lVar3);
          if (iVar8 == 0) {
            wslay_queue_push_front(lVar2,*(undefined8 *)(param_1 + 0x88));
            lVar9 = wslay_event_send_ctrl_queue_pop(param_1);
            *(long *)(param_1 + 0x88) = lVar9;
            if (lVar9 == 0) break;
            uVar10 = *(undefined8 *)(lVar9 + 0x18);
            *(undefined1 *)(lVar9 + 8) = 1;
            *(undefined8 *)(param_1 + 0x10d8) = 0;
            *(undefined8 *)(param_1 + 0x10d0) = uVar10;
          }
          else {
            lVar9 = *(long *)(param_1 + 0x88);
          }
        }
        if (*(int *)(lVar9 + 0xc) == 0) goto LAB_001012b5;
LAB_00101143:
        lVar11 = *(long *)(param_1 + 0x10c0);
        if ((*(char *)(lVar9 + 8) == '\0') && (lVar11 == *(long *)(param_1 + 0x10c8))) {
          local_5c = 0;
          lVar9 = (**(code **)(lVar9 + 0x28))
                            (param_1,lVar1,0x1000,lVar9 + 0x20,&local_5c,
                             *(undefined8 *)(param_1 + 0x1128));
          if (lVar9 != 0) {
            if (-1 < lVar9) {
              *(long *)(param_1 + 0x10c0) = lVar1 + lVar9;
              if (local_5c != 0) goto LAB_00101424;
              goto LAB_0010142f;
            }
            goto LAB_001014b2;
          }
          if (local_5c != 0) {
            *(long *)(param_1 + 0x10c0) = lVar1;
            lVar9 = 0;
LAB_00101424:
            *(undefined1 *)(*(long *)(param_1 + 0x88) + 8) = 1;
LAB_0010142f:
            *(long *)(param_1 + 0x10d0) = lVar9;
            lVar11 = *(long *)(param_1 + 0x10c0);
            *(undefined8 *)(param_1 + 0x10d8) = 0;
            goto LAB_0010115d;
          }
          break;
        }
LAB_0010115d:
        lVar9 = *(long *)(param_1 + 0x88);
        stack0xffffffffffffffab = SUB1613((undefined1  [16])0x0,3);
        auStack_56[0] = *(undefined1 *)(lVar9 + 9);
        local_58[1] = *(undefined1 *)(lVar9 + 10);
        local_58[0] = *(undefined1 *)(lVar9 + 8);
        auStack_47 = SUB1615((undefined1  [16])0x0,1);
        local_48 = *(char *)(param_1 + 0x10) == '\0';
        local_38 = lVar11 - *(long *)(param_1 + 0x10c8);
        auStack_47._7_8_ = *(long *)(param_1 + 0x10c8);
        lStack_50 = *(undefined8 *)(param_1 + 0x10d0);
        lVar9 = wslay_frame_send(*(undefined8 *)(param_1 + 0x18),local_58);
        if (lVar9 < 0) goto LAB_00101530;
        lVar9 = lVar9 + *(long *)(param_1 + 0x10c8);
        *(long *)(param_1 + 0x10c8) = lVar9;
        if (lVar9 != *(long *)(param_1 + 0x10c0)) break;
        __ptr = *(void **)(param_1 + 0x88);
        *(long *)(param_1 + 0x10c0) = lVar1;
        *(long *)(param_1 + 0x10c8) = lVar1;
        if (*(char *)((long)__ptr + 8) != '\0') {
          *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
          goto LAB_00101398;
        }
        *(byte *)((long)__ptr + 10) = *(byte *)((long)__ptr + 10) & 0xfb;
        *(undefined1 *)((long)__ptr + 9) = 0;
      }
    } while (*(char *)(param_1 + 0x21) != '\0');
  }
  uVar10 = 0;
LAB_0010123e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



long wslay_event_write(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ushort uVar5;
  void *pvVar6;
  long lVar7;
  ushort uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long in_FS_OFFSET;
  int local_74;
  long local_70;
  undefined1 local_68 [2];
  undefined1 auStack_66 [6];
  long lStack_60;
  bool local_58;
  undefined1 auStack_57 [15];
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar11 = 0;
  if (*(char *)(param_1 + 0x21) != '\0') {
    lVar1 = param_1 + 0xc0;
    lVar2 = param_1 + 0x90;
    lVar3 = param_1 + 0xa0;
    lVar11 = param_2;
    do {
      iVar9 = wslay_queue_empty(lVar2);
      if ((iVar9 == 0) || (iVar9 = wslay_queue_empty(lVar3), iVar9 == 0)) {
        lVar10 = *(long *)(param_1 + 0x88);
        if (lVar10 != 0) goto LAB_001015e0;
        iVar9 = wslay_queue_empty(lVar3);
        if (iVar9 == 0) {
          lVar10 = wslay_event_send_ctrl_queue_pop(param_1);
          *(long *)(param_1 + 0x88) = lVar10;
          if (lVar10 == 0) break;
        }
        else {
          uVar12 = wslay_queue_top(lVar2);
          *(undefined8 *)(param_1 + 0x88) = uVar12;
          wslay_queue_pop(lVar2);
          lVar10 = *(long *)(param_1 + 0x88);
        }
        if (*(int *)(lVar10 + 0xc) != 0) goto LAB_00101603;
        uVar12 = *(undefined8 *)(lVar10 + 0x18);
        *(undefined1 *)(lVar10 + 8) = 1;
        *(undefined8 *)(param_1 + 0x10d8) = 0;
        *(undefined8 *)(param_1 + 0x10d0) = uVar12;
LAB_001017a5:
        lVar13 = *(long *)(param_1 + 0x10d8);
        stack0xffffffffffffff9b = SUB1613((undefined1  [16])0x0,3);
        stack0xffffffffffffff99 = *(ushort *)(lVar10 + 9) << 8 | *(ushort *)(lVar10 + 9) >> 8;
        local_68[0] = 1;
        auStack_57 = SUB1615((undefined1  [16])0x0,1);
        local_58 = (bool)(*(byte *)(param_1 + 0x10) ^ 1);
        lVar10 = *(long *)(lVar10 + 0x10);
        lVar7 = *(long *)(param_1 + 0x10d0);
        local_48 = lVar7;
        if (lVar13 != 0) {
          lVar10 = lVar10 + lVar13;
          local_48 = lVar7 - lVar13;
        }
        auStack_57._7_8_ = lVar10;
        lStack_60 = lVar7;
        lVar10 = wslay_frame_write(*(undefined8 *)(param_1 + 0x18),local_68,lVar11,param_3,&local_70
                                  );
        if (lVar10 < 1) {
LAB_00101a70:
          if (lVar10 != 0) {
LAB_001019e7:
            lVar11 = -400;
            goto LAB_00101723;
          }
          break;
        }
        lVar11 = lVar11 + lVar10;
        lVar13 = local_70 + *(long *)(param_1 + 0x10d8);
        *(long *)(param_1 + 0x10d8) = lVar13;
        if (lVar13 != *(long *)(param_1 + 0x10d0)) break;
        pvVar6 = *(void **)(param_1 + 0x88);
        uVar4 = *(ulong *)((long)pvVar6 + 0x18);
        *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
        *(ulong *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) - uVar4;
        if (*(char *)((long)pvVar6 + 9) == '\b') {
          *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 4;
          *(undefined1 *)(param_1 + 0x21) = 0;
          uVar8 = 0x3ed;
          if (1 < uVar4) {
            uVar5 = **(ushort **)((long)pvVar6 + 0x10);
            if (uVar5 != 0) {
              uVar8 = uVar5 << 8 | uVar5 >> 8;
            }
          }
          *(ushort *)(param_1 + 0x14) = uVar8;
        }
        free(pvVar6);
        *(undefined8 *)(param_1 + 0x88) = 0;
      }
      else {
        lVar10 = *(long *)(param_1 + 0x88);
        if (lVar10 == 0) break;
LAB_001015e0:
        if (((*(byte *)(lVar10 + 9) & 8) == 0) &&
           (*(int *)(*(long *)(param_1 + 0x18) + 0x1078) == 0)) {
          iVar9 = wslay_queue_empty(lVar3);
          if (iVar9 == 0) {
            wslay_queue_push_front(lVar2,*(undefined8 *)(param_1 + 0x88));
            lVar10 = wslay_event_send_ctrl_queue_pop(param_1);
            *(long *)(param_1 + 0x88) = lVar10;
            if (lVar10 == 0) break;
            uVar12 = *(undefined8 *)(lVar10 + 0x18);
            *(undefined1 *)(lVar10 + 8) = 1;
            *(undefined8 *)(param_1 + 0x10d8) = 0;
            *(undefined8 *)(param_1 + 0x10d0) = uVar12;
          }
          else {
            lVar10 = *(long *)(param_1 + 0x88);
          }
        }
        if (*(int *)(lVar10 + 0xc) == 0) goto LAB_001017a5;
LAB_00101603:
        lVar13 = *(long *)(param_1 + 0x10c0);
        if ((*(char *)(lVar10 + 8) == '\0') && (lVar13 == *(long *)(param_1 + 0x10c8))) {
          local_74 = 0;
          lVar10 = (**(code **)(lVar10 + 0x28))
                             (param_1,lVar1,0x1000,lVar10 + 0x20,&local_74,
                              *(undefined8 *)(param_1 + 0x1128));
          if (lVar10 != 0) {
            if (-1 < lVar10) {
              *(long *)(param_1 + 0x10c0) = lVar1 + lVar10;
              if (local_74 != 0) goto LAB_0010195b;
              goto LAB_00101966;
            }
            *(undefined1 *)(param_1 + 0x21) = 0;
            goto LAB_001019e7;
          }
          if (local_74 != 0) {
            *(long *)(param_1 + 0x10c0) = lVar1;
            lVar10 = 0;
LAB_0010195b:
            *(undefined1 *)(*(long *)(param_1 + 0x88) + 8) = 1;
LAB_00101966:
            *(long *)(param_1 + 0x10d0) = lVar10;
            lVar13 = *(long *)(param_1 + 0x10c0);
            *(undefined8 *)(param_1 + 0x10d8) = 0;
            goto LAB_0010161d;
          }
          break;
        }
LAB_0010161d:
        lVar10 = *(long *)(param_1 + 0x88);
        stack0xffffffffffffff9b = SUB1613((undefined1  [16])0x0,3);
        auStack_66[0] = *(undefined1 *)(lVar10 + 9);
        local_68[1] = *(undefined1 *)(lVar10 + 10);
        local_68[0] = *(undefined1 *)(lVar10 + 8);
        auStack_57 = SUB1615((undefined1  [16])0x0,1);
        local_58 = *(char *)(param_1 + 0x10) == '\0';
        local_48 = lVar13 - *(long *)(param_1 + 0x10c8);
        auStack_57._7_8_ = *(long *)(param_1 + 0x10c8);
        lStack_60 = *(undefined8 *)(param_1 + 0x10d0);
        lVar10 = wslay_frame_write(*(undefined8 *)(param_1 + 0x18),local_68,lVar11,param_3,&local_70
                                  );
        if (lVar10 < 1) goto LAB_00101a70;
        lVar13 = local_70 + *(long *)(param_1 + 0x10c8);
        lVar11 = lVar11 + lVar10;
        *(long *)(param_1 + 0x10c8) = lVar13;
        if (lVar13 != *(long *)(param_1 + 0x10c0)) break;
        pvVar6 = *(void **)(param_1 + 0x88);
        *(long *)(param_1 + 0x10c0) = lVar1;
        *(long *)(param_1 + 0x10c8) = lVar1;
        if (*(char *)((long)pvVar6 + 8) == '\0') {
          *(byte *)((long)pvVar6 + 10) = *(byte *)((long)pvVar6 + 10) & 0xfb;
          *(undefined1 *)((long)pvVar6 + 9) = 0;
        }
        else {
          *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + -1;
          free(pvVar6);
          *(undefined8 *)(param_1 + 0x88) = 0;
        }
      }
      param_3 = param_3 - lVar10;
    } while (*(char *)(param_1 + 0x21) != '\0');
    lVar11 = lVar11 - param_2;
  }
LAB_00101723:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar11;
}



void wslay_event_set_error(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x80) = param_2;
  return;
}



undefined1 wslay_event_want_read(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



bool wslay_event_want_write(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x21) == '\0') {
    return false;
  }
  iVar1 = wslay_queue_empty(param_1 + 0x90);
  if (iVar1 != 0) {
    iVar1 = wslay_queue_empty(param_1 + 0xa0);
    if (iVar1 != 0) {
      return *(long *)(param_1 + 0x88) != 0;
    }
  }
  return true;
}



void wslay_event_shutdown_read(long param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



void wslay_event_shutdown_write(long param_1)

{
  *(undefined1 *)(param_1 + 0x21) = 0;
  return;
}



undefined1 wslay_event_get_read_enabled(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



undefined1 wslay_event_get_write_enabled(long param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



byte wslay_event_get_close_received(long param_1)

{
  return *(byte *)(param_1 + 0x11) & 1;
}



byte wslay_event_get_close_sent(long param_1)

{
  return *(byte *)(param_1 + 0x11) >> 2 & 1;
}



void wslay_event_config_set_allowed_rsv_bits(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x1130) = param_2 & 4;
  return;
}



void wslay_event_config_set_no_buffering(uint *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0xfffffffe;
  if (param_2 != 0) {
    uVar1 = *param_1 | 1;
  }
  *param_1 = uVar1;
  return;
}



void wslay_event_config_set_max_recv_msg_length(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}



undefined2 wslay_event_get_status_code_received(long param_1)

{
  return *(undefined2 *)(param_1 + 0x12);
}



undefined2 wslay_event_get_status_code_sent(long param_1)

{
  return *(undefined2 *)(param_1 + 0x14);
}



undefined8 wslay_event_get_queued_msg_count(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



undefined8 wslay_event_get_queued_msg_length(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}


