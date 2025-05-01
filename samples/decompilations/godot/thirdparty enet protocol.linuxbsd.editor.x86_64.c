
undefined4 enet_protocol_check_outgoing_commands(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long local_60;
  ushort local_4a;
  undefined4 local_44;
  
  plVar23 = *(long **)(param_2 + 0x118);
  local_44 = 1;
  bVar11 = false;
  local_60 = 0;
  plVar17 = (long *)(param_1 + 0x7a + *(long *)(param_1 + 0x680) * 0x30);
  puVar20 = (undefined8 *)(param_1 + 0x688 + *(long *)(param_1 + 0xa98) * 0x10);
  plVar1 = (long *)(param_2 + 0x118);
  plVar2 = (long *)(param_2 + 0x108);
  local_4a = 0;
  plVar19 = *(long **)(param_2 + 0x108);
LAB_00100091:
  puVar21 = puVar20;
  plVar24 = plVar19;
  if (plVar1 == plVar23) goto joined_r0x00100222;
LAB_0010009c:
  if ((plVar24 != plVar2) &&
     (86399999 < (uint)(*(int *)((long)plVar24 + 0x1c) - *(int *)((long)plVar23 + 0x1c))))
  goto LAB_00100228;
  bVar4 = *(byte *)(plVar23 + 5);
  plVar19 = (long *)*plVar23;
  puVar20 = puVar21;
  plVar12 = plVar24;
  plVar18 = plVar23;
  do {
    plVar24 = plVar12;
    plVar23 = plVar19;
    if ((char)bVar4 < '\0') {
      uVar5 = *(ushort *)(plVar18 + 2);
      local_4a = uVar5 >> 0xc;
      if ((ulong)*(byte *)((long)plVar18 + 0x29) < *(ulong *)(param_2 + 0x50)) {
        local_60 = (ulong)*(byte *)((long)plVar18 + 0x29) * 0x50 + *(long *)(param_2 + 0x48);
        if (local_60 != 0) {
          plVar19 = plVar24;
          if (bVar11) goto LAB_00100091;
          if (((uVar5 & 0xfff) == 0 && *(short *)((long)plVar18 + 0x26) == 0) &&
             ((0xfff < *(ushort *)(local_60 + 6 + (ulong)(local_4a + 0xf & 0xf) * 2) ||
              (bVar8 = (byte)(uVar5 >> 8),
              ((0x3ff >> (0x10 - (bVar8 >> 4) & 0x1f) | 0x3ff << (bVar8 >> 4)) &
              (uint)*(ushort *)(local_60 + 4)) != 0)))) {
            bVar11 = true;
            plVar19 = plVar2;
            goto LAB_00100091;
          }
        }
      }
      else {
        local_60 = 0;
      }
      if (plVar18[0xb] != 0) {
        uVar13 = (uint)(*(int *)(param_2 + 0x94) * *(int *)(param_2 + 0xdc)) >> 5;
        if (uVar13 < *(uint *)(param_2 + 0xd8)) {
          uVar13 = *(uint *)(param_2 + 0xd8);
        }
        plVar19 = plVar2;
        if (uVar13 < (uint)*(ushort *)((long)plVar18 + 0x24) + *(int *)(param_2 + 0xe0))
        goto LAB_00100091;
      }
      local_44 = 0;
    }
    uVar7 = *(ulong *)(commandSizes + (ulong)(bVar4 & 0xf) * 8);
    if (((long *)(param_1 + 0x67a) <= plVar17) ||
       (puVar21 = puVar20 + 2, (undefined8 *)(param_1 + 0xa98) <= puVar21)) {
LAB_00100440:
      *(ushort *)(param_2 + 0x138) = *(ushort *)(param_2 + 0x138) | 2;
      puVar21 = puVar20;
LAB_0010044e:
      iVar14 = *(int *)(param_2 + 0x40);
      *(long *)(param_1 + 0x680) = ((long)plVar17 - (param_1 + 0x7a) >> 4) * -0x5555555555555555;
      *(long *)(param_1 + 0xa98) = (long)puVar21 - (param_1 + 0x688) >> 4;
      if (((iVar14 == 6) && (iVar14 = enet_peer_has_outgoing_commands(param_2), iVar14 == 0)) &&
         ((long *)*param_3 == param_3)) {
        enet_peer_disconnect(param_2,*(undefined4 *)(param_2 + 0x1c0));
      }
      return local_44;
    }
    if ((ulong)*(uint *)(param_2 + 0xd8) - *(long *)(param_1 + 0x70) < uVar7) goto LAB_00100440;
    plVar19 = (long *)plVar18[0xb];
    if (plVar19 == (long *)0x0) {
      if ((char)bVar4 < '\0') {
LAB_00100310:
        sVar6 = *(short *)((long)plVar18 + 0x26);
        if ((local_60 != 0) && (sVar6 == 0)) {
          *(ushort *)(local_60 + 4) = *(ushort *)(local_60 + 4) | (ushort)(1 << (sbyte)local_4a);
          psVar3 = (short *)(local_60 + 6 + (ulong)local_4a * 2);
          *psVar3 = *psVar3 + 1;
        }
        *(short *)((long)plVar18 + 0x26) = sVar6 + 1;
        if ((int)plVar18[3] == 0) {
          *(int *)(plVar18 + 3) = *(int *)(param_2 + 0xd0) + *(int *)(param_2 + 0xd4) * 4;
        }
        if (*(long *)(param_2 + 0xf8) == param_2 + 0xf8) {
          *(int *)(param_2 + 0x78) = (int)plVar18[3] + *(int *)(param_1 + 0x50);
        }
        uVar15 = enet_list_remove(plVar18);
        enet_list_insert(param_2 + 0xf8,uVar15);
        lVar16 = plVar18[0xb];
        *(undefined4 *)((long)plVar18 + 0x14) = *(undefined4 *)(param_1 + 0x50);
        uVar5 = *(ushort *)((long)plVar18 + 0x24);
        *(ushort *)(param_1 + 0x78) = *(ushort *)(param_1 + 0x78) | 0x8000;
        *(int *)(param_2 + 0xe0) = *(int *)(param_2 + 0xe0) + (uint)uVar5;
LAB_001001ae:
        lVar9 = plVar18[5];
        lVar10 = plVar18[6];
        puVar20[1] = uVar7;
        lVar22 = uVar7 + *(long *)(param_1 + 0x70);
        *puVar20 = plVar17;
        *(long *)(param_1 + 0x70) = lVar22;
        *plVar17 = lVar9;
        plVar17[1] = lVar10;
        lVar9 = plVar18[8];
        plVar17[2] = plVar18[7];
        plVar17[3] = lVar9;
        lVar9 = plVar18[10];
        plVar17[4] = plVar18[9];
        plVar17[5] = lVar9;
        if (lVar16 == 0) goto LAB_001003ea;
        puVar21 = puVar20 + 4;
        puVar20[2] = (ulong)*(uint *)(plVar18 + 4) + *(long *)(lVar16 + 0x10);
        uVar5 = *(ushort *)((long)plVar18 + 0x24);
        puVar20[3] = (ulong)uVar5;
        *(ulong *)(param_1 + 0x70) = lVar22 + (ulong)uVar5;
      }
      else {
LAB_0010016c:
        enet_list_remove(plVar18);
        if (plVar18[0xb] != 0) {
          enet_list_insert(param_3,plVar18);
          lVar16 = plVar18[0xb];
          goto LAB_001001ae;
        }
        lVar16 = plVar18[5];
        lVar9 = plVar18[6];
        *puVar20 = plVar17;
        puVar20[1] = uVar7;
        *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + uVar7;
        *plVar17 = lVar16;
        plVar17[1] = lVar9;
        lVar16 = plVar18[8];
        plVar17[2] = plVar18[7];
        plVar17[3] = lVar16;
        lVar16 = plVar18[10];
        plVar17[4] = plVar18[9];
        plVar17[5] = lVar16;
LAB_001003ea:
        if (-1 < (char)plVar18[5]) {
          enet_free(plVar18);
        }
      }
      *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + 1;
      plVar17 = plVar17 + 6;
      if (plVar1 != plVar23) goto LAB_0010009c;
    }
    else {
      if ((ushort)((short)*(uint *)(param_2 + 0xd8) - (short)*(long *)(param_1 + 0x70)) <
          (ushort)(*(short *)((long)plVar18 + 0x24) + (short)uVar7)) goto LAB_00100440;
      if ((char)bVar4 < '\0') goto LAB_00100310;
      if (((int)plVar18[4] != 0) ||
         (uVar13 = *(int *)(param_2 + 0x9c) + 7U & 0x1f, *(uint *)(param_2 + 0x9c) = uVar13,
         uVar13 <= *(uint *)(param_2 + 0x94))) goto LAB_0010016c;
      lVar16 = plVar18[2];
      sVar6 = *(short *)((long)plVar18 + 0x12);
      while( true ) {
        *plVar19 = *plVar19 + -1;
        if (*plVar19 == 0) {
          enet_packet_destroy();
        }
        enet_list_remove(plVar18);
        enet_free(plVar18);
        puVar21 = puVar20;
        if (plVar1 == plVar23) break;
        plVar19 = plVar24;
        if (((short)plVar23[2] != (short)lVar16) || (*(short *)((long)plVar23 + 0x12) != sVar6))
        goto LAB_00100091;
        plVar19 = (long *)plVar23[0xb];
        plVar18 = plVar23;
        plVar23 = (long *)*plVar23;
      }
    }
joined_r0x00100222:
    if (plVar24 == plVar2) goto LAB_0010044e;
LAB_00100228:
    bVar4 = *(byte *)(plVar24 + 5);
    plVar19 = plVar23;
    puVar20 = puVar21;
    plVar12 = (long *)*plVar24;
    plVar18 = plVar24;
  } while( true );
}



undefined8 enet_protocol_dispatch_incoming_commands(long param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x58);
  do {
    if (lVar3 == param_1 + 0x58) {
      return 0;
    }
    lVar3 = enet_list_remove();
    *(ushort *)(lVar3 + 0x138) = *(ushort *)(lVar3 + 0x138) & 0xfffe;
    uVar1 = *(uint *)(lVar3 + 0x40);
    if (uVar1 == 5) {
      if (*(long *)(lVar3 + 0x128) != lVar3 + 0x128) {
        lVar4 = enet_peer_receive(lVar3,param_2 + 4);
        *(long *)(param_2 + 6) = lVar4;
        if (lVar4 != 0) {
          *param_2 = 3;
          *(long *)(param_2 + 2) = lVar3;
          if (lVar3 + 0x128 == *(long *)(lVar3 + 0x128)) {
            return 1;
          }
          *(ushort *)(lVar3 + 0x138) = *(ushort *)(lVar3 + 0x138) | 1;
          enet_list_insert(param_1 + 0x58,lVar3);
          return 1;
        }
      }
    }
    else if (uVar1 < 6) {
      if (uVar1 - 3 < 2) {
        enet_peer_on_connect(lVar3);
        uVar2 = *(undefined4 *)(lVar3 + 0x1c0);
        *(undefined4 *)(lVar3 + 0x40) = 5;
        *param_2 = 1;
        *(long *)(param_2 + 2) = lVar3;
        param_2[5] = uVar2;
        return 1;
      }
    }
    else if (uVar1 == 9) {
      uVar2 = *(undefined4 *)(lVar3 + 0x1c0);
      *(undefined4 *)(param_1 + 0x30) = 1;
      *param_2 = 2;
      *(long *)(param_2 + 2) = lVar3;
      param_2[5] = uVar2;
      enet_peer_reset(lVar3);
      return 1;
    }
    lVar3 = *(long *)(param_1 + 0x58);
  } while( true );
}



byte enet_protocol_remove_sent_reliable_command(long param_1,ulong param_2,byte param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  long *plVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  short sVar7;
  undefined8 *puVar8;
  
  sVar7 = (short)param_2;
  puVar1 = (undefined8 *)(param_1 + 0xf8);
  for (puVar8 = *(undefined8 **)(param_1 + 0xf8); puVar8 != puVar1; puVar8 = (undefined8 *)*puVar8)
  {
    if ((*(short *)(puVar8 + 2) == sVar7) && (*(byte *)((long)puVar8 + 0x29) == param_3)) {
      if (puVar8 != puVar1) {
        bVar2 = *(byte *)(puVar8 + 5);
        bVar4 = true;
        goto LAB_0010074b;
      }
      break;
    }
  }
  for (puVar8 = *(undefined8 **)(param_1 + 0x118); (undefined8 *)(param_1 + 0x118) != puVar8;
      puVar8 = (undefined8 *)*puVar8) {
    bVar2 = *(byte *)(puVar8 + 5);
    if ((char)bVar2 < '\0') {
      if (*(short *)((long)puVar8 + 0x26) == 0) break;
      if ((sVar7 == *(short *)(puVar8 + 2)) && (param_3 == *(byte *)((long)puVar8 + 0x29)))
      goto LAB_0010084c;
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x108);
  do {
    if ((undefined8 *)(param_1 + 0x108) == puVar8) {
      return 0;
    }
    bVar2 = *(byte *)(puVar8 + 5);
    if ((char)bVar2 < '\0') {
      if (*(short *)((long)puVar8 + 0x26) == 0) {
        return 0;
      }
      if ((sVar7 == *(short *)(puVar8 + 2)) && (param_3 == *(byte *)((long)puVar8 + 0x29))) {
LAB_0010084c:
        bVar4 = false;
LAB_0010074b:
        if ((ulong)param_3 < *(ulong *)(param_1 + 0x50)) {
          uVar6 = (param_2 & 0xffffffff) >> 0xc & 0xf;
          lVar5 = (ulong)param_3 * 0x50 + *(long *)(param_1 + 0x48);
          sVar7 = *(short *)(lVar5 + 6 + uVar6 * 2);
          if ((sVar7 != 0) &&
             (sVar7 = sVar7 + -1, *(short *)(lVar5 + 6 + uVar6 * 2) = sVar7, sVar7 == 0)) {
            *(ushort *)(lVar5 + 4) = *(ushort *)(lVar5 + 4) & ~(ushort)(1 << (sbyte)uVar6);
          }
        }
        enet_list_remove(puVar8);
        plVar3 = (long *)puVar8[0xb];
        if (plVar3 != (long *)0x0) {
          if (bVar4) {
            *(int *)(param_1 + 0xe0) =
                 *(int *)(param_1 + 0xe0) - (uint)*(ushort *)((long)puVar8 + 0x24);
          }
          *plVar3 = *plVar3 + -1;
          if (*plVar3 == 0) {
            *(uint *)(plVar3 + 1) = *(uint *)(plVar3 + 1) | 0x100;
            enet_packet_destroy();
          }
        }
        enet_free(puVar8);
        puVar8 = *(undefined8 **)(param_1 + 0xf8);
        if (puVar8 != puVar1) {
          *(int *)(param_1 + 0x78) = *(int *)(puVar8 + 3) + *(int *)((long)puVar8 + 0x14);
          return bVar2 & 0xf;
        }
        return bVar2 & 0xf;
      }
    }
    puVar8 = (undefined8 *)*puVar8;
  } while( true );
}



void enet_protocol_notify_disconnect(long param_1,long param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x40);
  if (2 < uVar1) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  if ((uVar1 == 1) || (3 < uVar1)) {
    if (param_3 == (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + 0x1c0) = 0;
      enet_peer_on_disconnect(param_2);
      *(undefined4 *)(param_2 + 0x40) = 9;
      if ((*(byte *)(param_2 + 0x138) & 1) == 0) {
        enet_list_insert(param_1 + 0x58,param_2);
        *(ushort *)(param_2 + 0x138) = *(ushort *)(param_2 + 0x138) | 1;
      }
      return;
    }
    *param_3 = 2;
    *(long *)(param_3 + 2) = param_2;
    param_3[5] = 0;
  }
  enet_peer_reset(param_2);
  return;
}



int enet_protocol_send_outgoing_commands(undefined8 *param_1,int *param_2,int param_3)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined1 *puVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  int local_80;
  int local_78;
  undefined4 local_5c;
  undefined8 ***local_58 [2];
  ushort local_48 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar25._0_8_ = enet_list_clear(local_58);
  auVar25._8_8_ = extraout_XMM0_Qb;
  uVar11 = param_1[7];
  lVar19 = param_1[8];
  local_78 = 0;
  local_80 = 0;
  do {
    if (uVar11 < lVar19 * 0x1d0 + uVar11) {
      plVar16 = (long *)(uVar11 + 0xf8);
      do {
        if ((((int)plVar16[-0x17] != 0) && ((int)plVar16[-0x17] != 9)) &&
           ((local_80 == 0 || ((*(ushort *)(plVar16 + 8) & 2) != 0)))) {
          plVar17 = plVar16 + -0x1f;
          plVar20 = (long *)plVar16[-2];
          *(ushort *)(plVar16 + 8) = *(ushort *)(plVar16 + 8) & 0xfffd;
          *(undefined2 *)(param_1 + 0xf) = 0;
          param_1[0xd0] = 0;
          param_1[0x153] = 1;
          param_1[0xe] = 4;
          if (plVar20 != plVar16 + -2) {
            puVar22 = param_1 + 0xd3;
            lVar19 = 4;
            puVar23 = (undefined1 *)((long)param_1 + 0x7a);
            while (7 < (ulong)*(uint *)(plVar16 + -4) - lVar19) {
              uVar13 = *(ushort *)((long)plVar20 + 0x16);
              plVar2 = (long *)*plVar20;
              *puVar22 = puVar23;
              puVar22[1] = 8;
              param_1[0xe] = lVar19 + 8;
              *puVar23 = 1;
              auVar25 = pshuflw(auVar25,ZEXT216((ushort)(uVar13 << 8 | uVar13 >> 8)),0);
              puVar23[1] = *(undefined1 *)((long)plVar20 + 0x15);
              *(int *)(puVar23 + 2) = auVar25._0_4_;
              *(ushort *)(puVar23 + 6) =
                   *(ushort *)(plVar20 + 2) << 8 | *(ushort *)(plVar20 + 2) >> 8;
              if ((*(byte *)((long)plVar20 + 0x14) & 0xf) == 4) {
                enet_peer_on_disconnect(plVar17);
                *(undefined4 *)(plVar16 + -0x17) = 9;
                if ((*(byte *)(plVar16 + 8) & 1) == 0) {
                  enet_list_insert(param_1 + 0xb,plVar17);
                  *(ushort *)(plVar16 + 8) = *(ushort *)(plVar16 + 8) | 1;
                }
              }
              puVar23 = puVar23 + 0x30;
              puVar22 = puVar22 + 2;
              enet_list_remove(plVar20);
              auVar25._0_8_ = enet_free(plVar20);
              auVar25._8_8_ = extraout_XMM0_Qb_00;
              if (plVar2 == plVar16 + -2) goto LAB_00100bd5;
              if (puVar23 == (undefined1 *)((long)param_1 + 0x67a)) break;
              plVar20 = plVar2;
              lVar19 = param_1[0xe];
            }
            *(ushort *)(plVar16 + 8) = *(ushort *)(plVar16 + 8) | 2;
LAB_00100bd5:
            param_1[0x153] = (long)puVar22 - (long)(param_1 + 0xd1) >> 4;
            param_1[0xd0] = ((long)puVar23 - ((long)param_1 + 0x7a) >> 4) * -0x5555555555555555;
          }
          lVar19 = plVar16[4];
          if (((param_3 != 0) && ((long *)*plVar16 != plVar16)) &&
             (iVar8 = *(int *)(param_1 + 10), (uint)(iVar8 - (int)plVar16[-0x10]) < 86400000)) {
            lVar21 = plVar16[2];
            plVar20 = (long *)*plVar16;
            do {
              iVar9 = *(int *)((long)plVar20 + 0x14);
              uVar14 = *(uint *)(plVar20 + 3);
              plVar2 = (long *)*plVar20;
              uVar15 = iVar8 - iVar9;
              uVar18 = iVar9 - iVar8;
              if (uVar15 < 86400000) {
                uVar18 = uVar15;
              }
              if (uVar18 < uVar14) {
LAB_001010d7:
                if (plVar2 == plVar16) break;
              }
              else {
                iVar1 = *(int *)((long)plVar16 + -0x7c);
                if ((iVar1 == 0) || (86399999 < (uint)(iVar9 - iVar1))) {
                  *(int *)((long)plVar16 + -0x7c) = iVar9;
                  if (iVar9 != 0) goto LAB_00101071;
                }
                else {
                  uVar15 = iVar8 - iVar1;
                  iVar9 = iVar1;
LAB_00101071:
                  if (86399999 < uVar15) {
                    uVar15 = iVar9 - iVar8;
                  }
                  if ((*(uint *)((long)plVar16 + -0x3c) <= uVar15) ||
                     ((*(uint *)((long)plVar16 + -0x44) <=
                       (uint)(1 << ((char)*(undefined2 *)((long)plVar20 + 0x26) - 1U & 0x1f)) &&
                      (*(uint *)(plVar16 + -8) <= uVar15)))) {
                    auVar25._0_8_ = enet_protocol_notify_disconnect(param_1,plVar17,param_2);
                    auVar25._8_8_ = extraout_XMM0_Qb_05;
                    if ((param_2 == (int *)0x0) || (*param_2 == 0)) goto LAB_00100b7b;
                    goto LAB_00100e90;
                  }
                }
                *(int *)(plVar16 + -0xe) = (int)plVar16[-0xe] + 1;
                *(uint *)(plVar20 + 3) = uVar14 * 2;
                if (plVar20[0xb] == 0) {
                  uVar10 = enet_list_remove();
                  auVar25._0_8_ = enet_list_insert(lVar19,uVar10);
                  auVar25._8_8_ = extraout_XMM0_Qb_04;
                }
                else {
                  *(uint *)(plVar16 + -3) =
                       (int)plVar16[-3] - (uint)*(ushort *)((long)plVar20 + 0x24);
                  uVar10 = enet_list_remove();
                  auVar25._0_8_ = enet_list_insert(lVar21,uVar10);
                  auVar25._8_8_ = extraout_XMM0_Qb_03;
                }
                if (((long *)*plVar16 == plVar16) || (plVar2 != (long *)*plVar16))
                goto LAB_001010d7;
                *(int *)(plVar16 + -0x10) = (int)plVar2[3] + *(int *)((long)plVar2 + 0x14);
              }
              iVar8 = *(int *)(param_1 + 10);
              plVar20 = plVar2;
            } while( true );
          }
          if (((long *)plVar16[4] == plVar16 + 4) && ((long *)plVar16[2] == plVar16 + 2)) {
            plVar20 = (long *)*plVar16;
joined_r0x00100ec9:
            if (plVar20 == plVar16) {
              uVar14 = *(int *)(param_1 + 10) - *(int *)((long)plVar16 + -0x84);
              if (86399999 < uVar14) {
                uVar14 = *(int *)((long)plVar16 + -0x84) - *(int *)(param_1 + 10);
              }
              if ((*(uint *)(plVar16 + -9) <= uVar14) &&
                 (3 < (ulong)*(uint *)(plVar16 + -4) - param_1[0xe])) {
                enet_peer_ping(plVar17);
                auVar25._0_8_ = enet_protocol_check_outgoing_commands(param_1,plVar17,local_58);
                auVar25._8_8_ = extraout_XMM0_Qb_02;
              }
            }
          }
          else {
            iVar8 = enet_protocol_check_outgoing_commands(param_1,plVar17,local_58);
            auVar25._8_8_ = extraout_XMM0_Qb_01;
            auVar25._0_8_ = extraout_XMM0_Qa;
            if (iVar8 != 0) {
              plVar20 = (long *)*plVar16;
              goto joined_r0x00100ec9;
            }
          }
          if (param_1[0xd0] != 0) {
            iVar8 = (int)plVar16[-0xf];
            iVar9 = *(int *)(param_1 + 10);
            if (iVar8 == 0) {
              *(int *)(plVar16 + -0xf) = iVar9;
            }
            else {
              uVar14 = iVar9 - iVar8;
              if (86399999 < uVar14) {
                uVar14 = iVar8 - iVar9;
              }
              if ((9999 < uVar14) && (uVar14 = *(uint *)((long)plVar16 + -0x74), uVar14 != 0)) {
                lVar19 = plVar16[-0xe];
                *(int *)(plVar16 + -0xf) = iVar9;
                *(undefined4 *)((long)plVar16 + -0x74) = 0;
                *(undefined4 *)(plVar16 + -0xe) = 0;
                uVar14 = (uint)((int)lVar19 << 0x10) / uVar14;
                uVar15 = *(uint *)((long)plVar16 + -0x6c);
                iVar8 = uVar14 - uVar15;
                if (uVar14 < uVar15) {
                  iVar8 = uVar15 - uVar14;
                }
                *(uint *)(plVar16 + -0xd) = (uint)((int)plVar16[-0xd] * 3 + iVar8) >> 2;
                *(uint *)((long)plVar16 + -0x6c) = uVar15 * 7 + uVar14 >> 3;
              }
            }
            uVar13 = *(ushort *)(param_1 + 0xf);
            uVar10 = 2;
            param_1[0xd1] = local_48;
            if ((short)uVar13 < 0) {
              local_48[1] = (ushort)iVar9 << 8 | (ushort)iVar9 >> 8;
              uVar10 = 4;
            }
            param_1[0xd2] = uVar10;
            uVar11 = 0;
            if ((param_1[0x155] != 0) && ((code *)param_1[0x156] != (code *)0x0)) {
              uVar24 = param_1[0xe] - 4;
              uVar11 = (*(code *)param_1[0x156])
                                 (param_1[0x155],param_1 + 0xd3,param_1[0x153] + -1,uVar24,
                                  param_1 + 0x359,uVar24);
              uVar13 = *(ushort *)(param_1 + 0xf);
              if ((uVar11 == 0) || (uVar24 <= uVar11)) {
                uVar11 = 0;
              }
              else {
                uVar13 = uVar13 | 0x4000;
                *(ushort *)(param_1 + 0xf) = uVar13;
              }
            }
            uVar7 = *(ushort *)(plVar16 + -0x1c);
            pcVar3 = (code *)param_1[0x154];
            if (uVar7 < 0xfff) {
              uVar13 = uVar13 | (ushort)*(byte *)(plVar16 + -0x1b) << 0xc;
              uVar7 = uVar7 | uVar13;
              *(ushort *)(param_1 + 0xf) = uVar13;
              local_48[0] = uVar7 << 8 | uVar7 >> 8;
              if (pcVar3 != (code *)0x0) {
                uVar24 = param_1[0xd2];
                local_5c = *(undefined4 *)((long)plVar16 + -0xdc);
                uVar12 = 8;
                if (7 < uVar24) {
                  uVar12 = uVar24;
                }
                lVar19 = uVar12 - uVar24;
LAB_00100d73:
                lVar21 = (long)local_48 + uVar24;
                __memcpy_chk(lVar21,&local_5c,4);
                param_1[0xd2] = uVar24 + 4;
                local_5c = (*pcVar3)(param_1 + 0xd1,param_1[0x153]);
                __memcpy_chk(lVar21,&local_5c,4,lVar19);
              }
            }
            else {
              local_48[0] = (uVar7 | uVar13) << 8 | (uVar7 | uVar13) >> 8;
              if (pcVar3 != (code *)0x0) {
                uVar24 = param_1[0xd2];
                uVar12 = 8;
                if (7 < uVar24) {
                  uVar12 = uVar24;
                }
                local_5c = 0;
                lVar19 = uVar12 - uVar24;
                goto LAB_00100d73;
              }
            }
            if (uVar11 == 0) {
              uVar10 = param_1[0x153];
            }
            else {
              param_1[0xd4] = uVar11;
              uVar10 = 2;
              param_1[0xd3] = param_1 + 0x359;
              param_1[0x153] = 2;
            }
            uVar4 = *param_1;
            *(undefined4 *)(plVar16 + -0x11) = *(undefined4 *)(param_1 + 10);
            iVar8 = enet_socket_send(uVar4,(long)plVar16 + -0xd6,param_1 + 0xd1,uVar10);
            if ((undefined8 ****)local_58[0] != local_58) {
              do {
                pppuVar6 = local_58[0];
                enet_list_remove(local_58[0]);
                pppuVar5 = (undefined8 ***)pppuVar6[0xb];
                if ((pppuVar5 != (undefined8 ***)0x0) &&
                   (*pppuVar5 = (undefined8 **)((long)*pppuVar5 + -1),
                   *pppuVar5 == (undefined8 **)0x0)) {
                  *(uint *)(pppuVar5 + 1) = *(uint *)(pppuVar5 + 1) | 0x100;
                  enet_packet_destroy();
                }
                enet_free(pppuVar6);
              } while ((undefined8 ****)local_58[0] != local_58);
              if (((int)plVar16[-0x17] == 6) &&
                 (iVar9 = enet_peer_has_outgoing_commands(plVar17), iVar9 == 0)) {
                enet_peer_disconnect(plVar17,(int)plVar16[0x19]);
              }
            }
            if (iVar8 < 0) {
              param_3 = -1;
              goto LAB_00100e90;
            }
            auVar25._4_4_ = _LC0;
            auVar25._0_4_ = iVar8;
            auVar25._8_8_ = 0;
            param_1[0x55e] =
                 CONCAT44((int)((ulong)param_1[0x55e] >> 0x20) + _LC0,(int)param_1[0x55e] + iVar8);
          }
LAB_00100b7b:
          if ((*(byte *)(plVar16 + 8) & 2) != 0) {
            local_78 = local_80 + 1;
          }
          uVar11 = param_1[7];
          lVar19 = param_1[8];
        }
        plVar17 = plVar16 + 0x1b;
        plVar16 = plVar16 + 0x3a;
      } while (plVar17 < (long *)(lVar19 * 0x1d0 + uVar11));
    }
    local_80 = local_80 + 1;
    if (local_78 < local_80) {
      param_3 = 0;
LAB_00100e90:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return param_3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}



undefined8 enet_protocol_command_size(uint param_1)

{
  return *(undefined8 *)(commandSizes + (ulong)(param_1 & 0xf) * 8);
}



void enet_host_flush(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = enet_time_get();
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  enet_protocol_send_outgoing_commands(param_1,0,0);
  return;
}



undefined8 enet_host_check_events(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 2) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    uVar1 = enet_protocol_dispatch_incoming_commands();
    return uVar1;
  }
  return 0xffffffff;
}



undefined8 enet_host_service(undefined8 *param_1,int *param_2,int param_3)

{
  long *plVar1;
  uint *puVar2;
  undefined2 uVar3;
  ushort *puVar4;
  ushort uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ushort *puVar18;
  ulong uVar19;
  ushort uVar20;
  ulong uVar21;
  ushort *puVar22;
  long lVar23;
  ushort *puVar24;
  undefined4 *puVar25;
  byte bVar26;
  byte bVar27;
  ushort uVar28;
  ushort uVar29;
  ulong uVar30;
  undefined8 *puVar31;
  ulong uVar32;
  ushort uVar33;
  ulong uVar34;
  byte *pbVar35;
  uint uVar36;
  ushort *puVar37;
  ushort uVar38;
  uint uVar39;
  long in_FS_OFFSET;
  byte bVar40;
  int local_e4;
  ulong local_c0;
  uint local_8c;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  bVar40 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (int *)0x0) {
LAB_001012b0:
    iVar8 = enet_time_get();
    *(int *)(param_1 + 10) = iVar8;
    param_3 = param_3 + iVar8;
LAB_001012c4:
    uVar15 = iVar8 - *(int *)((long)param_1 + 0x24);
    if (86399999 < uVar15) {
      uVar15 = *(int *)((long)param_1 + 0x24) - iVar8;
    }
    if (999 < uVar15) {
      enet_host_bandwidth_throttle(param_1);
    }
    iVar8 = enet_protocol_send_outgoing_commands(param_1,param_2,1);
    if (iVar8 != -1) {
      if (iVar8 != 1) {
        local_e4 = 0x100;
        plVar1 = param_1 + 0x559;
LAB_00101332:
        local_80 = 0x1000;
        local_88 = param_1 + 0x159;
        iVar9 = enet_socket_receive(*param_1,plVar1,&local_88,1);
        iVar8 = _LC0;
        if (iVar9 == -2) goto LAB_001016c0;
        if (iVar9 < 0) goto LAB_00101780;
        if (iVar9 != 0) {
          uVar21 = (ulong)iVar9;
          param_1[0x55c] = param_1 + 0x159;
          param_1[0x55d] = uVar21;
          param_1[0x55f] =
               CONCAT44((int)((ulong)param_1[0x55f] >> 0x20) + iVar8,(int)param_1[0x55f] + iVar9);
          if ((code *)param_1[0x560] == (code *)0x0) {
LAB_001013d4:
            if (uVar21 < 2) goto LAB_001016c0;
            puVar4 = (ushort *)param_1[0x55c];
            uVar20 = *puVar4;
            uVar5 = uVar20 << 8;
            uVar28 = uVar5 & 0xfff | uVar20 >> 8;
            uVar19 = (ulong)(uVar5 >> 0xe & 2);
            uVar34 = uVar19 + 2;
            if (param_1[0x154] != 0) {
              uVar19 = uVar19 + 6;
              if (uVar28 == 0xfff) {
                if ((uVar5 & 0x4000) == 0) {
                  pbVar35 = (byte *)(uVar34 + (long)puVar4);
                  uVar30 = 0;
                  uVar10 = 0;
                  iVar8 = *(int *)pbVar35;
LAB_001014cf:
                  *(undefined4 *)pbVar35 = uVar10;
                  local_78 = param_1[0x55c];
                  uStack_70 = param_1[0x55d];
                  iVar9 = (*(code *)param_1[0x154])(&local_78,1);
                  if (iVar9 == iVar8) {
LAB_00101521:
                    if (uVar30 != 0) goto LAB_0010152e;
                    uVar21 = param_1[0x55d];
                    puVar22 = (ushort *)param_1[0x55c];
                    uVar34 = uVar19;
                    goto LAB_00101571;
                  }
                }
                else {
LAB_001022d0:
                  uVar30 = 0;
LAB_001022d3:
                  if ((param_1[0x155] != 0) && ((code *)param_1[0x157] != (code *)0x0)) {
                    puVar22 = (ushort *)(param_1 + 0x359);
                    lVar13 = (*(code *)param_1[0x157])
                                       (param_1[0x155],(byte *)((long)puVar4 + uVar19),
                                        uVar21 - uVar19,(byte *)((long)puVar22 + uVar19),
                                        0x1000 - uVar19);
                    if (lVar13 - 1U < 0x1000 - uVar19) {
                      uVar15 = (uint)uVar19;
                      if (uVar15 < 8) {
                        if ((uVar19 & 4) == 0) {
                          if ((uVar15 != 0) &&
                             (*(byte *)(param_1 + 0x359) = (byte)*puVar4, (uVar19 & 2) != 0)) {
                            *(undefined2 *)((long)param_1 + uVar19 + 0x1ac6) =
                                 *(undefined2 *)((long)puVar4 + (uVar19 - 2));
                          }
                        }
                        else {
                          *(undefined4 *)(param_1 + 0x359) = *(undefined4 *)puVar4;
                          *(undefined4 *)((long)param_1 + uVar19 + 0x1ac4) =
                               *(undefined4 *)((long)puVar4 + (uVar19 - 4));
                        }
                      }
                      else {
                        param_1[0x359] = *(undefined8 *)puVar4;
                        *(undefined8 *)((long)param_1 + uVar19 + 0x1ac0) =
                             *(undefined8 *)((long)puVar4 + (uVar19 - 8));
                        lVar23 = (long)puVar22 - ((ulong)(param_1 + 0x35a) & 0xfffffffffffffff8);
                        uVar15 = (int)lVar23 + uVar15 & 0xfffffff8;
                        if (7 < uVar15) {
                          uVar17 = 0;
                          do {
                            uVar21 = (ulong)uVar17;
                            uVar17 = uVar17 + 8;
                            *(undefined8 *)
                             (((ulong)(param_1 + 0x35a) & 0xfffffffffffffff8) + uVar21) =
                                 *(undefined8 *)((long)puVar4 + (uVar21 - lVar23));
                          } while (uVar17 < uVar15);
                        }
                      }
                      param_1[0x55c] = puVar22;
                      param_1[0x55d] = lVar13 + uVar19;
                      if (param_1[0x154] != 0) {
LAB_001014ba:
                        pbVar35 = (byte *)((long)puVar22 + (uVar19 - 4));
                        iVar8 = *(int *)pbVar35;
                        if (uVar30 == 0) {
                          uVar10 = 0;
                        }
                        else {
                          uVar10 = *(undefined4 *)(uVar30 + 0x1c);
                        }
                        goto LAB_001014cf;
                      }
                      goto LAB_00101521;
                    }
                  }
                }
              }
              else {
LAB_00101430:
                if ((ulong)uVar28 < (ulong)param_1[8]) {
                  uVar30 = (ulong)uVar28 * 0x1d0 + param_1[7];
                  if (((((*(int *)(uVar30 + 0x40) != 0) && (*(int *)(uVar30 + 0x40) != 9)) &&
                       (*plVar1 == *(long *)(uVar30 + 0x22) &&
                        param_1[0x55a] == *(long *)(uVar30 + 0x2a))) &&
                      (*(short *)(param_1 + 0x55b) == *(short *)(uVar30 + 0x32))) &&
                     ((0xffe < *(ushort *)(uVar30 + 0x18) ||
                      (((byte)uVar20 >> 4 & 3) == *(byte *)(uVar30 + 0x21))))) {
                    if ((uVar5 & 0x4000) != 0) goto LAB_001022d3;
                    puVar22 = puVar4;
                    if (param_1[0x154] != 0) goto LAB_001014ba;
LAB_0010152e:
                    enet_address_set_ip(uVar30 + 0x22,plVar1,0x10);
                    uVar3 = *(undefined2 *)(param_1 + 0x55b);
                    uVar21 = param_1[0x55d];
                    puVar22 = (ushort *)param_1[0x55c];
                    *(int *)(uVar30 + 0x68) = *(int *)(uVar30 + 0x68) + (int)uVar21;
                    *(undefined2 *)(uVar30 + 0x32) = uVar3;
                    uVar34 = uVar19;
                    goto LAB_00101571;
                  }
                }
              }
              goto LAB_001016c0;
            }
            uVar19 = uVar34;
            if (uVar28 != 0xfff) goto LAB_00101430;
            if ((uVar5 & 0x4000) != 0) goto LAB_001022d0;
            uVar30 = 0;
            puVar22 = puVar4;
LAB_00101571:
            puVar18 = (ushort *)((long)puVar22 + uVar21);
            puVar24 = (ushort *)((long)puVar22 + uVar34);
            if (puVar18 <= (ushort *)((long)puVar22 + uVar34)) goto LAB_001016a8;
LAB_00101596:
            if (puVar18 < puVar24 + 2) goto switchD_00101617_caseD_0;
            bVar7 = (byte)*puVar24;
            uVar15 = bVar7 & 0xf;
            if ((((0xc < (byte)uVar15) || (*(long *)(commandSizes + (ulong)uVar15 * 8) == 0)) ||
                (puVar37 = (ushort *)(*(long *)(commandSizes + (ulong)uVar15 * 8) + (long)puVar24),
                puVar18 < puVar37)) || ((uVar30 == 0 && ((byte)uVar15 != 2))))
            goto switchD_00101617_caseD_0;
            uVar20 = puVar24[1];
            uVar28 = uVar20 << 8 | uVar20 >> 8;
            puVar24[1] = uVar28;
            switch(uVar15) {
            default:
              goto switchD_00101617_caseD_0;
            case 1:
              if ((*(int *)(uVar30 + 0x40) == 0) || (*(int *)(uVar30 + 0x40) == 9)) break;
              uVar15 = *(uint *)(param_1 + 10);
              uVar20 = puVar24[3] << 8 | puVar24[3] >> 8;
              iVar8 = CONCAT22((short)(uVar15 >> 0x10),uVar20);
              if ((uVar15 & 0x8000) < (uVar20 & 0x8000)) {
                iVar8 = iVar8 + -0x10000;
              }
              uVar17 = uVar15 - iVar8;
              if (86399999 < uVar17) break;
              uVar16 = 1;
              if (uVar17 != 0) {
                uVar16 = uVar17;
              }
              if (*(int *)(uVar30 + 0x74) == 0) {
                *(uint *)(uVar30 + 0xd0) = uVar16;
                uVar17 = uVar16 + 1 >> 1;
                *(uint *)(uVar30 + 0xd4) = uVar17;
              }
              else {
                enet_peer_throttle(uVar30,uVar16);
                iVar8 = *(uint *)(uVar30 + 0xd4) - (*(uint *)(uVar30 + 0xd4) >> 2);
                uVar15 = *(uint *)(uVar30 + 0xd0);
                if (uVar16 < uVar15) {
                  uVar17 = uVar15 - uVar16;
                  uVar16 = uVar15 - (uVar17 >> 3);
                  uVar15 = *(uint *)(param_1 + 10);
                  uVar17 = iVar8 + (uVar17 >> 2);
                  *(uint *)(uVar30 + 0xd0) = uVar16;
                  *(uint *)(uVar30 + 0xd4) = uVar17;
                }
                else {
                  uVar17 = uVar16 - uVar15;
                  uVar16 = (uVar17 >> 3) + uVar15;
                  uVar17 = iVar8 + (uVar17 >> 2);
                  *(uint *)(uVar30 + 0xd0) = uVar16;
                  uVar15 = *(uint *)(param_1 + 10);
                  *(uint *)(uVar30 + 0xd4) = uVar17;
                }
              }
              if (uVar16 < *(uint *)(uVar30 + 0xc4)) {
                *(uint *)(uVar30 + 0xc4) = uVar16;
              }
              if (*(uint *)(uVar30 + 0xcc) < uVar17) {
                *(uint *)(uVar30 + 0xcc) = uVar17;
              }
              iVar8 = *(int *)(uVar30 + 0xa0);
              if (iVar8 == 0) {
LAB_001020c5:
                iVar8 = *(int *)(uVar30 + 0xcc);
                *(uint *)(uVar30 + 0xa0) = uVar15;
                if (iVar8 == 0) {
                  iVar8 = 1;
                }
                *(ulong *)(uVar30 + 0xc0) = CONCAT44(uVar16,*(undefined4 *)(uVar30 + 0xc4));
                *(ulong *)(uVar30 + 200) = CONCAT44(uVar17,iVar8);
              }
              else {
                uVar11 = uVar15 - iVar8;
                if (86399999 < uVar11) {
                  uVar11 = iVar8 - uVar15;
                }
                if (*(uint *)(uVar30 + 0xac) <= uVar11) goto LAB_001020c5;
              }
              bVar7 = *(byte *)((long)puVar24 + 1);
              uVar17 = 1;
              if (uVar15 != 0) {
                uVar17 = uVar15;
              }
              uVar20 = puVar24[2];
              *(undefined4 *)(uVar30 + 0x7c) = 0;
              *(uint *)(uVar30 + 0x74) = uVar17;
              iVar9 = enet_protocol_remove_sent_reliable_command
                                (uVar30,uVar20 << 8 | uVar20 >> 8,bVar7);
              iVar8 = *(int *)(uVar30 + 0x40);
              if (iVar8 == 6) {
                iVar8 = enet_peer_has_outgoing_commands(uVar30);
                if (iVar8 != 0) goto LAB_001019a0;
                enet_peer_disconnect(uVar30,*(undefined4 *)(uVar30 + 0x1c0));
                bVar7 = (byte)*puVar24;
                break;
              }
              if (iVar8 == 7) {
                if (iVar9 == 4) {
                  enet_protocol_notify_disconnect(param_1,uVar30,param_2);
                  bVar7 = (byte)*puVar24;
                  break;
                }
                goto switchD_00101617_caseD_0;
              }
              if (iVar8 == 2) {
                if (iVar9 == 3) {
                  *(undefined4 *)(param_1 + 6) = 1;
                  if (param_2 != (int *)0x0) goto LAB_00101f43;
                  enet_peer_on_disconnect();
                  *(undefined4 *)(uVar30 + 0x40) = 3;
                  if ((*(byte *)(uVar30 + 0x138) & 1) == 0) goto LAB_0010218f;
                  goto LAB_001019a0;
                }
                goto switchD_00101617_caseD_0;
              }
              goto LAB_001019a0;
            case 2:
              if (uVar30 != 0) goto switchD_00101617_caseD_0;
              uVar15 = *(uint *)(puVar24 + 8);
              uVar21 = (ulong)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                              uVar15 << 0x18);
              if (0xfe < uVar21 - 1) goto switchD_00101617_caseD_0;
              uVar19 = param_1[7];
              uVar34 = param_1[8] * 0x1d0 + uVar19;
              if (uVar34 <= uVar19) goto switchD_00101617_caseD_0;
              uVar32 = 0;
              do {
                if (*(int *)(uVar19 + 0x40) == 0) {
                  if (uVar30 == 0) {
                    uVar30 = uVar19;
                  }
                }
                else if ((*(int *)(uVar19 + 0x40) != 1) &&
                        (*(long *)(uVar19 + 0x22) == *plVar1 &&
                         *(long *)(uVar19 + 0x2a) == param_1[0x55a])) {
                  if ((*(short *)(uVar19 + 0x32) == *(short *)(param_1 + 0x55b)) &&
                     (*(int *)(uVar19 + 0x1c) == *(int *)(puVar24 + 0x14)))
                  goto switchD_00101617_caseD_0;
                  uVar32 = uVar32 + 1;
                }
                uVar19 = uVar19 + 0x1d0;
              } while (uVar19 < uVar34);
              if ((uVar30 == 0) || ((ulong)param_1[0x563] <= uVar32)) goto switchD_00101617_caseD_0;
              if ((ulong)param_1[9] < uVar21) {
                uVar21 = param_1[9];
              }
              puVar14 = (undefined4 *)enet_malloc(uVar21 * 0x50);
              *(undefined4 **)(uVar30 + 0x48) = puVar14;
              if (puVar14 == (undefined4 *)0x0) goto switchD_00101617_caseD_0;
              uVar10 = *(undefined4 *)(puVar24 + 0x14);
              uVar12 = param_1[0x559];
              uVar6 = param_1[0x55a];
              *(undefined4 *)(uVar30 + 0x40) = 2;
              bVar7 = *(byte *)(uVar30 + 0x20);
              *(undefined4 *)(uVar30 + 0x1c) = uVar10;
              uVar10 = *(undefined4 *)(param_1 + 0x55b);
              *(undefined8 *)(uVar30 + 0x22) = uVar12;
              *(undefined8 *)(uVar30 + 0x2a) = uVar6;
              *(undefined4 *)(uVar30 + 0x32) = uVar10;
              uVar10 = *(undefined4 *)(param_1 + 5);
              *(ulong *)(uVar30 + 0x50) = uVar21;
              *(undefined4 *)(uVar30 + 0xd8) = uVar10;
              *(ushort *)(uVar30 + 0x18) = puVar24[2] << 8 | puVar24[2] >> 8;
              uVar15 = *(uint *)(puVar24 + 10);
              *(uint *)(uVar30 + 0x58) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              uVar15 = *(uint *)(puVar24 + 0xc);
              *(uint *)(uVar30 + 0x5c) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              uVar15 = *(uint *)(puVar24 + 0xe);
              *(uint *)(uVar30 + 0xac) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              uVar15 = *(uint *)(puVar24 + 0x10);
              *(uint *)(uVar30 + 0xa4) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              uVar15 = *(uint *)(puVar24 + 0x12);
              *(uint *)(uVar30 + 0xa8) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              uVar15 = *(uint *)(puVar24 + 0x16);
              *(uint *)(uVar30 + 0x1c0) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              bVar26 = (byte)puVar24[3];
              if ((byte)puVar24[3] == 0xff) {
                bVar26 = bVar7;
              }
              bVar27 = bVar26 + 1 & 3;
              bVar26 = *(byte *)(uVar30 + 0x21);
              if (bVar27 == bVar7) {
                bVar27 = bVar7 + 1 & 3;
              }
              *(byte *)(uVar30 + 0x20) = bVar27;
              bVar7 = *(byte *)((long)puVar24 + 7);
              if (*(byte *)((long)puVar24 + 7) == 0xff) {
                bVar7 = bVar26;
              }
              bVar7 = bVar7 + 1 & 3;
              if (bVar7 == bVar26) {
                bVar7 = bVar26 + 1 & 3;
              }
              *(byte *)(uVar30 + 0x21) = bVar7;
              if (puVar14 < puVar14 + uVar21 * 0x14) {
                do {
                  *puVar14 = 0;
                  *(undefined4 *)((long)puVar14 + 0x26) = 0;
                  enet_list_clear(puVar14 + 0xc);
                  puVar25 = puVar14 + 0x14;
                  enet_list_clear(puVar14 + 0x10);
                  *(undefined1 (*) [16])((long)puVar14 + 6) = (undefined1  [16])0x0;
                  *(undefined1 (*) [16])((long)puVar14 + 0x16) = (undefined1  [16])0x0;
                  lVar13 = *(long *)(uVar30 + 0x48);
                  *(undefined2 *)(puVar14 + 1) = 0;
                  puVar14 = puVar25;
                } while (puVar25 < (undefined4 *)(lVar13 + uVar21 * 0x50));
              }
              uVar15 = *(uint *)(puVar24 + 4);
              uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                       uVar15 << 0x18;
              if (0x1000 < uVar15) {
                uVar15 = 0x1000;
              }
              if (uVar15 < 0x240) {
                uVar15 = 0x240;
              }
              if (uVar15 < *(uint *)(uVar30 + 0xd8)) {
                *(uint *)(uVar30 + 0xd8) = uVar15;
              }
              uVar15 = *(uint *)(param_1 + 4);
              uVar17 = *(uint *)(uVar30 + 0x58);
              if (uVar15 == 0) {
                uVar16 = 0x10000;
                if (uVar17 != 0) goto LAB_0010285e;
              }
              else {
                if (uVar17 == 0) {
LAB_0010285e:
                  if (uVar17 <= uVar15) {
                    uVar17 = uVar15;
                  }
                }
                else if (uVar15 <= uVar17) {
                  uVar17 = uVar15;
                }
                uVar16 = (uVar17 >> 0x10) << 0xc;
                if (0x10000 < uVar16) {
                  uVar16 = 0x10000;
                }
                if (uVar16 < 0x1000) {
                  uVar16 = 0x1000;
                }
              }
              uVar17 = *(uint *)((long)param_1 + 0x1c);
              uVar11 = (uint)uVar21;
              *(uint *)(uVar30 + 0xdc) = uVar16;
              uVar16 = (uVar17 >> 0x10) << 0xc;
              if (uVar17 == 0) {
                uVar16 = 0x10000;
              }
              uVar36 = *(uint *)(puVar24 + 6);
              local_78 = CONCAT62(local_78._2_6_,0xff83);
              uVar39 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 |
                       uVar36 << 0x18;
              uVar36 = *(uint *)(uVar30 + 0xd8);
              if (uVar16 < uVar39) {
                uVar39 = uVar16;
              }
              local_78 = CONCAT26(CONCAT11(bVar7,bVar27),
                                  CONCAT24(*(ushort *)(uVar30 + 0x1a) << 8 |
                                           *(ushort *)(uVar30 + 0x1a) >> 8,(undefined4)local_78));
              if (0x10000 < uVar39) {
                uVar39 = 0x10000;
              }
              if (uVar39 < 0x1000) {
                uVar39 = 0x1000;
              }
              uStack_70 = CONCAT44(uVar39 >> 0x18 | (uVar39 & 0xff0000) >> 8 |
                                   (uVar39 & 0xff00) << 8 | uVar39 << 0x18,
                                   uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 |
                                   (uVar36 & 0xff00) << 8 | uVar36 << 0x18);
              local_68 = CONCAT44(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8
                                  | uVar17 << 0x18,
                                  uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8
                                  | uVar11 << 0x18);
              uVar17 = *(uint *)(uVar30 + 0xac);
              uStack_60 = CONCAT44(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 |
                                   (uVar17 & 0xff00) << 8 | uVar17 << 0x18,
                                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 |
                                   (uVar15 & 0xff00) << 8 | uVar15 << 0x18);
              uVar15 = *(uint *)(uVar30 + 0xa4);
              uVar17 = *(uint *)(uVar30 + 0xa8);
              local_58 = CONCAT44(uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8
                                  | uVar17 << 0x18,
                                  uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8
                                  | uVar15 << 0x18);
              uStack_50 = CONCAT44(uStack_50._4_4_,*(undefined4 *)(uVar30 + 0x1c));
              enet_peer_queue_outgoing_command(uVar30,&local_78,0,0,0);
              bVar7 = (byte)*puVar24;
              break;
            case 3:
              if (*(int *)(uVar30 + 0x40) == 1) {
                uVar15 = *(uint *)(puVar24 + 8);
                uVar21 = (ulong)(uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8
                                | uVar15 << 0x18);
                if ((((0xfe < uVar21 - 1) ||
                     (uVar15 = *(uint *)(puVar24 + 0xe),
                     (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18) != *(uint *)(uVar30 + 0xac))) ||
                    (uVar15 = *(uint *)(puVar24 + 0x10),
                    (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                    uVar15 << 0x18) != *(uint *)(uVar30 + 0xa4))) ||
                   ((uVar15 = *(uint *)(puVar24 + 0x12),
                    (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                    uVar15 << 0x18) != *(uint *)(uVar30 + 0xa8) ||
                    (*(int *)(puVar24 + 0x14) != *(int *)(uVar30 + 0x1c))))) {
                  *(undefined4 *)(uVar30 + 0x1c0) = 0;
                  enet_peer_on_disconnect(uVar30);
                  *(undefined4 *)(uVar30 + 0x40) = 9;
                  if ((*(byte *)(uVar30 + 0x138) & 1) == 0) {
                    enet_list_insert(param_1 + 0xb,uVar30);
                    *(ushort *)(uVar30 + 0x138) = *(ushort *)(uVar30 + 0x138) | 1;
                  }
                  goto LAB_001016a8;
                }
                enet_protocol_remove_sent_reliable_command(uVar30,1,0xff);
                if (uVar21 < *(ulong *)(uVar30 + 0x50)) {
                  *(ulong *)(uVar30 + 0x50) = uVar21;
                }
                *(ushort *)(uVar30 + 0x18) = puVar24[2] << 8 | puVar24[2] >> 8;
                *(ushort *)(uVar30 + 0x20) = puVar24[3] << 8 | puVar24[3] >> 8;
                uVar15 = *(uint *)(puVar24 + 4);
                uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                         uVar15 << 0x18;
                if (0x1000 < uVar15) {
                  uVar15 = 0x1000;
                }
                if (uVar15 < 0x240) {
                  uVar15 = 0x240;
                }
                if (uVar15 < *(uint *)(uVar30 + 0xd8)) {
                  *(uint *)(uVar30 + 0xd8) = uVar15;
                }
                uVar15 = *(uint *)(puVar24 + 6);
                uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                         uVar15 << 0x18;
                if (0x10000 < uVar15) {
                  uVar15 = 0x10000;
                }
                if (uVar15 < 0x1000) {
                  uVar15 = 0x1000;
                }
                if (uVar15 < *(uint *)(uVar30 + 0xdc)) {
                  *(uint *)(uVar30 + 0xdc) = uVar15;
                }
                uVar15 = *(uint *)(puVar24 + 10);
                *(uint *)(uVar30 + 0x58) =
                     uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
                uVar15 = *(uint *)(puVar24 + 0xc);
                *(uint *)(uVar30 + 0x5c) =
                     uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
                *(undefined4 *)(param_1 + 6) = 1;
                if (param_2 == (int *)0x0) {
                  iVar8 = *(int *)(uVar30 + 0x40);
                  enet_peer_on_disconnect(uVar30);
                  *(uint *)(uVar30 + 0x40) = (iVar8 == 1) + 3;
                  if ((*(byte *)(uVar30 + 0x138) & 1) != 0) goto LAB_001019a0;
LAB_0010218f:
                  enet_list_insert(param_1 + 0xb,uVar30);
                  bVar7 = (byte)*puVar24;
                  *(ushort *)(uVar30 + 0x138) = *(ushort *)(uVar30 + 0x138) | 1;
                }
                else {
LAB_00101f43:
                  enet_peer_on_connect(uVar30);
                  iVar8 = *(int *)(uVar30 + 0x1c0);
                  *(undefined4 *)(uVar30 + 0x40) = 5;
                  *param_2 = 1;
                  param_2[5] = iVar8;
                  bVar7 = (byte)*puVar24;
                  *(ulong *)(param_2 + 2) = uVar30;
                }
              }
              break;
            case 4:
              if ((*(int *)(uVar30 + 0x40) - 8U < 2) || (*(int *)(uVar30 + 0x40) == 0)) break;
              enet_peer_reset_queues(uVar30);
              switch(*(undefined4 *)(uVar30 + 0x40)) {
              case 1:
              case 4:
              case 7:
                enet_peer_on_disconnect(uVar30);
                *(undefined4 *)(uVar30 + 0x40) = 9;
                if ((*(byte *)(uVar30 + 0x138) & 1) != 0) goto LAB_0010223b;
LAB_00102276:
                enet_list_insert(param_1 + 0xb,uVar30);
                *(ushort *)(uVar30 + 0x138) = *(ushort *)(uVar30 + 0x138) | 1;
                goto LAB_0010228b;
              case 3:
                *(undefined4 *)(param_1 + 6) = 1;
                break;
              case 5:
              case 6:
                if ((char)(byte)*puVar24 < '\0') {
                  enet_peer_on_disconnect(uVar30);
                  *(undefined4 *)(uVar30 + 0x40) = 8;
                }
                else {
                  enet_peer_on_disconnect(uVar30);
                  *(undefined4 *)(uVar30 + 0x40) = 9;
                  if ((*(byte *)(uVar30 + 0x138) & 1) == 0) goto LAB_00102276;
                }
LAB_0010223b:
                bVar7 = (byte)*puVar24;
                goto LAB_0010223f;
              }
              enet_peer_reset(uVar30);
LAB_0010228b:
              bVar7 = (byte)*puVar24;
              if (*(int *)(uVar30 + 0x40) != 0) {
LAB_0010223f:
                uVar15 = *(uint *)(puVar24 + 2);
                *(uint *)(uVar30 + 0x1c0) =
                     uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                     uVar15 << 0x18;
              }
              break;
            case 5:
              if (1 < *(int *)(uVar30 + 0x40) - 5U) goto switchD_00101617_caseD_0;
              break;
            case 6:
              if (((ulong)*(byte *)((long)puVar24 + 1) < *(ulong *)(uVar30 + 0x50)) &&
                 (*(int *)(uVar30 + 0x40) - 5U < 2)) {
                uVar21 = (ulong)(ushort)(puVar24[2] << 8 | puVar24[2] >> 8);
                puVar37 = (ushort *)((long)puVar37 + uVar21);
                if ((puVar22 <= puVar37 && puVar37 <= puVar18) && (uVar21 <= (ulong)param_1[0x564]))
                {
                  puVar22 = puVar24 + 3;
                  uVar12 = 1;
                  goto LAB_0010167a;
                }
              }
              goto switchD_00101617_caseD_0;
            case 7:
              if ((*(ulong *)(uVar30 + 0x50) <= (ulong)*(byte *)((long)puVar24 + 1)) ||
                 (1 < *(int *)(uVar30 + 0x40) - 5U)) goto switchD_00101617_caseD_0;
              uVar21 = (ulong)(ushort)(puVar24[3] << 8 | puVar24[3] >> 8);
              puVar37 = (ushort *)((long)puVar37 + uVar21);
              if ((puVar37 < puVar22 || puVar18 < puVar37) || ((ulong)param_1[0x564] < uVar21))
              goto switchD_00101617_caseD_0;
              puVar22 = puVar24 + 4;
              uVar12 = 0;
LAB_0010167a:
              lVar13 = enet_peer_queue_incoming_command(uVar30,puVar24,puVar22,uVar21,uVar12,0);
              if (lVar13 == 0) goto switchD_00101617_caseD_0;
LAB_001019a0:
              bVar7 = (byte)*puVar24;
              break;
            case 8:
              if ((*(ulong *)(uVar30 + 0x50) <= (ulong)*(byte *)((long)puVar24 + 1)) ||
                 (1 < *(int *)(uVar30 + 0x40) - 5U)) goto switchD_00101617_caseD_0;
              uVar20 = puVar24[3] << 8 | puVar24[3] >> 8;
              puVar37 = (ushort *)((long)puVar37 + (ulong)uVar20);
              if ((uVar20 == 0) ||
                 ((puVar18 < puVar37 || puVar37 < puVar22 || ((ulong)param_1[0x564] < (ulong)uVar20)
                  ))) goto switchD_00101617_caseD_0;
              uVar28 = puVar24[2];
              lVar13 = (ulong)*(byte *)((long)puVar24 + 1) * 0x50 + *(long *)(uVar30 + 0x48);
              uVar38 = *(ushort *)(lVar13 + 0x26);
              bVar26 = (byte)uVar28 >> 4;
              uVar28 = uVar28 << 8 | uVar28 >> 8;
              uVar29 = (ushort)bVar26;
              if (uVar28 < uVar38) {
                uVar29 = bVar26 + 0x10;
              }
              else if ((ushort)bVar26 < uVar38 >> 0xc) break;
              if (uVar29 <= (ushort)((uVar38 >> 0xc) + 6)) {
                uVar15 = *(uint *)(puVar24 + 10);
                uVar17 = *(uint *)(puVar24 + 6);
                uVar16 = *(uint *)(puVar24 + 4);
                uVar11 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                         uVar15 << 0x18;
                uVar15 = *(uint *)(puVar24 + 8);
                uVar36 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                         uVar16 << 0x18;
                uVar16 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                         uVar17 << 0x18;
                uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                         uVar15 << 0x18;
                if (((((uVar36 < 0x100001) && (uVar16 < uVar36)) &&
                     (uVar21 = (ulong)uVar15, uVar21 <= (ulong)param_1[0x564])) &&
                    ((uVar36 <= uVar15 && (uVar11 < uVar15)))) && ((uint)uVar20 <= uVar15 - uVar11))
                {
                  for (lVar23 = *(long *)(lVar13 + 0x38); lVar23 != lVar13 + 0x30;
                      lVar23 = *(long *)(lVar23 + 8)) {
                    uVar29 = *(ushort *)(lVar23 + 0x10);
                    if (uVar28 < uVar38) {
                      if (uVar38 <= uVar29) break;
LAB_00101ae5:
                      if (uVar29 <= uVar28) {
                        if (uVar28 <= uVar29) {
                          if ((((*(byte *)(lVar23 + 0x14) & 0xf) != 8) ||
                              (uVar21 != *(ulong *)(*(long *)(lVar23 + 0x58) + 0x18))) ||
                             (uVar36 != *(uint *)(lVar23 + 0x44))) goto switchD_00101617_caseD_0;
                          goto LAB_00101b73;
                        }
                        break;
                      }
                    }
                    else if (uVar38 <= uVar29) goto LAB_00101ae5;
                  }
                  uStack_70 = *(undefined8 *)(puVar24 + 4);
                  local_68 = *(undefined8 *)(puVar24 + 8);
                  uStack_60 = *(undefined8 *)(puVar24 + 0xc);
                  local_58 = *(undefined8 *)(puVar24 + 0x10);
                  uStack_50 = *(undefined8 *)(puVar24 + 0x14);
                  local_78._4_4_ = (undefined4)((ulong)*(undefined8 *)puVar24 >> 0x20);
                  local_78._0_4_ = CONCAT22(uVar28,(short)*(undefined8 *)puVar24);
                  lVar23 = enet_peer_queue_incoming_command(uVar30,&local_78,0,uVar21,1);
                  if (lVar23 != 0) {
LAB_00101b73:
                    puVar2 = (uint *)(*(long *)(lVar23 + 0x50) + (ulong)(uVar16 >> 5) * 4);
                    uVar15 = 1 << ((byte)(uVar17 >> 0x18) & 0x1f);
                    if ((uVar15 & *puVar2) == 0) {
                      *(int *)(lVar23 + 0x48) = *(int *)(lVar23 + 0x48) + -1;
                      *puVar2 = *puVar2 | uVar15;
                      uVar21 = *(ulong *)(*(long *)(lVar23 + 0x58) + 0x18);
                      uVar15 = (uint)uVar20;
                      if (uVar21 < uVar20 + uVar11) {
                        uVar15 = (int)uVar21 - uVar11;
                      }
                      memcpy((void *)((ulong)uVar11 + *(long *)(*(long *)(lVar23 + 0x58) + 0x10)),
                             puVar24 + 0xc,(ulong)uVar15);
                      if (*(int *)(lVar23 + 0x48) == 0) {
                        enet_peer_dispatch_incoming_reliable_commands(uVar30,lVar13,0);
                        bVar7 = (byte)*puVar24;
                        break;
                      }
                    }
                    goto LAB_001019a0;
                  }
                }
                goto switchD_00101617_caseD_0;
              }
              break;
            case 9:
              if ((*(ulong *)(uVar30 + 0x50) <= (ulong)*(byte *)((long)puVar24 + 1)) ||
                 (1 < *(int *)(uVar30 + 0x40) - 5U)) goto switchD_00101617_caseD_0;
              uVar21 = (ulong)(ushort)(puVar24[3] << 8 | puVar24[3] >> 8);
              puVar37 = (ushort *)((long)puVar37 + uVar21);
              if ((puVar18 < puVar37 || puVar37 < puVar22) || ((ulong)param_1[0x564] < uVar21))
              goto switchD_00101617_caseD_0;
              uVar20 = puVar24[2];
              uVar28 = *(ushort *)(uVar30 + 0x13c);
              uVar38 = uVar20 << 8 | uVar20 >> 8;
              uVar15 = uVar38 & 0x3ff;
              bVar26 = (byte)(uVar20 >> 8);
              if (uVar38 < uVar28) {
                if (uVar38 + 0x10000 < uVar28 + 0x8000) {
LAB_00101d19:
                  *(undefined8 *)(uVar30 + 0x140) = 0;
                  puVar31 = (undefined8 *)(uVar30 + 0x148 & 0xfffffffffffffff8);
                  *(ushort *)(uVar30 + 0x13c) = uVar38 - (uVar20 << 8 & 0x3ff | uVar20 >> 8);
                  *(undefined8 *)(uVar30 + 0x1b8) = 0;
                  uVar19 = (ulong)(((int)uVar30 - (int)puVar31) + 0x1c0U >> 3);
                  for (; uVar19 != 0; uVar19 = uVar19 - 1) {
                    *puVar31 = 0;
                    puVar31 = puVar31 + (ulong)bVar40 * -2 + 1;
                  }
LAB_00101d58:
                  local_c0 = (ulong)(uint)uVar38 & 0xffffffff000003ff;
                  lVar13 = enet_peer_queue_incoming_command(uVar30,puVar24,puVar24 + 4,uVar21,2,0);
                  if (lVar13 == 0) goto switchD_00101617_caseD_0;
                  puVar2 = (uint *)(uVar30 + 0x140 + (local_c0 >> 5) * 4);
                  *puVar2 = *puVar2 | 1 << (bVar26 & 0x1f);
                  bVar7 = (byte)*puVar24;
                }
              }
              else if ((uint)uVar38 < uVar28 + 0x8000) {
                if (uVar38 - uVar15 != (uint)uVar28) goto LAB_00101d19;
                if ((1 << (bVar26 & 0x1f) & *(uint *)(uVar30 + 0x140 + (ulong)(uVar15 >> 5) * 4)) ==
                    0) goto LAB_00101d58;
              }
              break;
            case 10:
              if (1 < *(int *)(uVar30 + 0x40) - 5U) goto switchD_00101617_caseD_0;
              if (*(int *)(uVar30 + 0x58) != 0) {
                param_1[0x562] = param_1[0x562] + -1;
              }
              uVar15 = *(uint *)(puVar24 + 2);
              uVar17 = *(uint *)(puVar24 + 4);
              *(uint *)(uVar30 + 0x5c) =
                   uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18;
              uVar17 = *(uint *)(param_1 + 4);
              uVar16 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                       uVar15 << 0x18;
              *(uint *)(uVar30 + 0x58) = uVar16;
              if (uVar15 == 0) {
                if (uVar17 != 0) goto LAB_00102749;
LAB_0010275d:
                *(undefined4 *)(uVar30 + 0xdc) = 0x10000;
              }
              else {
                param_1[0x562] = param_1[0x562] + 1;
                if (uVar17 == 0) {
LAB_00102749:
                  if (uVar16 < uVar17) {
                    uVar16 = uVar17;
                  }
                }
                else if (uVar17 < uVar16) {
                  uVar16 = uVar17;
                }
                uVar15 = (uVar16 >> 0x10) << 0xc;
                if (uVar15 < 0x1000) {
                  uVar15 = 0x1000;
                }
                else if (0x10000 < uVar15) goto LAB_0010275d;
                *(uint *)(uVar30 + 0xdc) = uVar15;
              }
              break;
            case 0xb:
              if (1 < *(int *)(uVar30 + 0x40) - 5U) goto switchD_00101617_caseD_0;
              uVar15 = *(uint *)(puVar24 + 2);
              *(uint *)(uVar30 + 0xac) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              uVar15 = *(uint *)(puVar24 + 4);
              *(uint *)(uVar30 + 0xa4) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              uVar15 = *(uint *)(puVar24 + 6);
              *(uint *)(uVar30 + 0xa8) =
                   uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                   uVar15 << 0x18;
              break;
            case 0xc:
              if ((*(ulong *)(uVar30 + 0x50) <= (ulong)*(byte *)((long)puVar24 + 1)) ||
                 (1 < *(int *)(uVar30 + 0x40) - 5U)) goto switchD_00101617_caseD_0;
              uVar38 = puVar24[3] << 8 | puVar24[3] >> 8;
              puVar37 = (ushort *)((long)puVar37 + (ulong)uVar38);
              if ((puVar37 < puVar22 || puVar18 < puVar37) ||
                 ((ulong)param_1[0x564] < (ulong)uVar38)) goto switchD_00101617_caseD_0;
              bVar26 = (byte)uVar20 >> 4;
              lVar13 = (ulong)*(byte *)((long)puVar24 + 1) * 0x50 + *(long *)(uVar30 + 0x48);
              uVar29 = puVar24[2] << 8 | puVar24[2] >> 8;
              uVar20 = *(ushort *)(lVar13 + 0x26);
              uVar33 = uVar20 >> 0xc;
              if (uVar28 < uVar20) {
                if ((ushort)(bVar26 + 0x10) <= (ushort)(uVar33 + 6)) {
LAB_0010184a:
                  uVar15 = *(uint *)(puVar24 + 10);
                  uVar17 = *(uint *)(puVar24 + 6);
                  uVar16 = *(uint *)(puVar24 + 4);
                  uVar11 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                           uVar15 << 0x18;
                  uVar15 = *(uint *)(puVar24 + 8);
                  uVar36 = uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                           uVar16 << 0x18;
                  uVar16 = uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                           uVar17 << 0x18;
                  uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                           uVar15 << 0x18;
                  if ((((uVar36 < 0x100001) && (uVar16 < uVar36)) &&
                      (uVar21 = (ulong)uVar15, uVar21 <= (ulong)param_1[0x564])) &&
                     ((uVar11 < uVar15 && (uVar39 = (uint)uVar38, (uint)uVar38 <= uVar15 - uVar11)))
                     ) {
                    for (lVar23 = *(long *)(lVar13 + 0x48); lVar23 != lVar13 + 0x40;
                        lVar23 = *(long *)(lVar23 + 8)) {
                      uVar38 = *(ushort *)(lVar23 + 0x10);
                      if (uVar28 < uVar20) {
                        if (uVar20 <= uVar38) break;
LAB_001018c5:
                        if (uVar38 < uVar28) break;
                        if ((uVar38 <= uVar28) && (*(ushort *)(lVar23 + 0x12) <= uVar29)) {
                          if (uVar29 <= *(ushort *)(lVar23 + 0x12)) {
                            if ((((*(byte *)(lVar23 + 0x14) & 0xf) != 0xc) ||
                                (uVar21 != *(ulong *)(*(long *)(lVar23 + 0x58) + 0x18))) ||
                               (uVar36 != *(uint *)(lVar23 + 0x44))) goto switchD_00101617_caseD_0;
                            goto LAB_00101923;
                          }
                          break;
                        }
                      }
                      else if (uVar20 <= uVar38) goto LAB_001018c5;
                    }
                    lVar23 = enet_peer_queue_incoming_command(uVar30,puVar24,0,uVar21,8);
                    if (lVar23 != 0) {
LAB_00101923:
                      puVar2 = (uint *)(*(long *)(lVar23 + 0x50) + (ulong)(uVar16 >> 5) * 4);
                      uVar15 = 1 << ((byte)(uVar17 >> 0x18) & 0x1f);
                      if ((uVar15 & *puVar2) == 0) {
                        *(int *)(lVar23 + 0x48) = *(int *)(lVar23 + 0x48) + -1;
                        *puVar2 = *puVar2 | uVar15;
                        uVar21 = *(ulong *)(*(long *)(lVar23 + 0x58) + 0x18);
                        if (uVar21 < uVar39 + uVar11) {
                          uVar39 = (int)uVar21 - uVar11;
                        }
                        memcpy((void *)((ulong)uVar11 + *(long *)(*(long *)(lVar23 + 0x58) + 0x10)),
                               puVar24 + 0xc,(ulong)uVar39);
                        if (*(int *)(lVar23 + 0x48) == 0) {
                          enet_peer_dispatch_incoming_unreliable_commands(uVar30,lVar13,0);
                        }
                      }
                      goto LAB_001019a0;
                    }
                  }
                  goto switchD_00101617_caseD_0;
                }
              }
              else if (((uVar33 <= bVar26) && ((ushort)bVar26 <= (ushort)(uVar33 + 6))) &&
                      ((uVar28 != uVar20 || (*(ushort *)(lVar13 + 0x28) < uVar29))))
              goto LAB_0010184a;
            }
            if ((char)bVar7 < '\0') {
              if (-1 < (short)uVar5) goto switchD_00101617_caseD_0;
              uVar15 = *(uint *)(uVar30 + 0x40);
              if ((9 < uVar15) ||
                 (((1L << ((byte)uVar15 & 0x3f) & 0x285U) == 0 &&
                  ((uVar15 != 8 || ((bVar7 & 0xf) == 4)))))) {
                enet_peer_queue_acknowledgement(uVar30,puVar24,puVar4[1] << 8 | puVar4[1] >> 8);
              }
            }
            puVar22 = (ushort *)param_1[0x55c];
            puVar18 = (ushort *)(param_1[0x55d] + (long)puVar22);
            puVar24 = puVar37;
            if (puVar18 <= puVar37) goto switchD_00101617_caseD_0;
            goto LAB_00101596;
          }
          iVar8 = (*(code *)param_1[0x560])(param_1,param_2);
          if (iVar8 != -1) {
            if (iVar8 != 1) {
              uVar21 = param_1[0x55d];
              goto LAB_001013d4;
            }
            goto LAB_001016a8;
          }
          goto LAB_00101780;
        }
        goto LAB_001016cb;
      }
      goto LAB_0010127e;
    }
    goto LAB_00101780;
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  iVar8 = enet_protocol_dispatch_incoming_commands();
  if (iVar8 == -1) {
LAB_00101780:
    uVar12 = 0xffffffff;
  }
  else {
    if (iVar8 != 1) goto LAB_001012b0;
LAB_0010127e:
    uVar12 = 1;
  }
  goto LAB_00101283;
switchD_00101617_caseD_0:
LAB_001016a8:
  if ((param_2 != (int *)0x0) && (*param_2 != 0)) goto LAB_0010127e;
LAB_001016c0:
  local_e4 = local_e4 + -1;
  if (local_e4 == 0) goto LAB_001016cb;
  goto LAB_00101332;
LAB_001016cb:
  iVar8 = enet_protocol_send_outgoing_commands(param_1,param_2,1);
  if (iVar8 == -1) goto LAB_00101780;
  if (iVar8 == 1) goto LAB_0010127e;
  if (param_2 != (int *)0x0) {
    iVar8 = enet_protocol_dispatch_incoming_commands(param_1,param_2);
    if (iVar8 == -1) goto LAB_00101780;
    if (iVar8 == 1) goto LAB_0010127e;
  }
  if ((uint)(*(int *)(param_1 + 10) - param_3) < 86400000) {
LAB_0010176c:
    uVar12 = 0;
    goto LAB_00101283;
  }
  do {
    iVar8 = enet_time_get();
    *(int *)(param_1 + 10) = iVar8;
    if ((uint)(iVar8 - param_3) < 86400000) goto LAB_0010176c;
    local_8c = 6;
    uVar15 = param_3 - iVar8;
    if (86399999 < (uint)(param_3 - iVar8)) {
      uVar15 = iVar8 - param_3;
    }
    iVar8 = enet_socket_wait(*param_1,&local_8c,uVar15);
    if (iVar8 != 0) goto LAB_00101780;
  } while ((local_8c & 4) != 0);
  iVar8 = enet_time_get();
  *(int *)(param_1 + 10) = iVar8;
  if ((local_8c & 2) == 0) goto code_r0x00102405;
  goto LAB_001012c4;
code_r0x00102405:
  uVar12 = 0;
LAB_00101283:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


