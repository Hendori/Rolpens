
int zip64local_getByte(long param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  byte local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x38),param_2,&local_21,1);
  if (iVar1 == 1) {
    *param_3 = (uint)local_21;
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x38),param_2);
    iVar1 = -(uint)(iVar1 != 0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void zip64local_getShort(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar2 = zip64local_getByte(param_1,param_2,&local_44);
  iVar1 = local_44;
  lVar3 = 0;
  if (iVar2 == 0) {
    iVar2 = zip64local_getByte(param_1,param_2,&local_44);
    if (iVar2 == 0) {
      lVar3 = (long)local_44 * 0x100 + (long)iVar1;
    }
  }
  *param_3 = lVar3;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void zip64local_getLong(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  lVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar1 = zip64local_getByte(param_1,param_2,&local_44);
  if (iVar1 == 0) {
    lVar4 = (long)local_44;
    iVar1 = zip64local_getByte(param_1,param_2,&local_44);
    lVar2 = (long)local_44;
    if (iVar1 == 0) {
      iVar1 = zip64local_getByte(param_1,param_2,&local_44);
      lVar3 = (long)local_44;
      if (iVar1 == 0) {
        iVar1 = zip64local_getByte(param_1,param_2,&local_44);
        if (iVar1 == 0) {
          lVar5 = (long)local_44 * 0x1000000 + lVar4 + lVar3 * 0x10000 + lVar2 * 0x100;
        }
      }
    }
  }
  *param_3 = lVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void zip64local_getLong64(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  long lVar8;
  
  lVar8 = 0;
  lVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  iVar1 = zip64local_getByte(param_1,param_2,&local_44);
  lVar9 = lVar8;
  if (iVar1 == 0) {
    lVar10 = (long)local_44;
    iVar1 = zip64local_getByte(param_1,param_2,&local_44);
    lVar2 = (long)local_44;
    if (iVar1 == 0) {
      iVar1 = zip64local_getByte(param_1,param_2,&local_44);
      lVar3 = (long)local_44;
      if (iVar1 == 0) {
        iVar1 = zip64local_getByte(param_1,param_2,&local_44);
        lVar4 = (long)local_44;
        lVar9 = lVar7;
        if (iVar1 == 0) {
          iVar1 = zip64local_getByte(param_1,param_2,&local_44);
          lVar7 = (long)local_44;
          if (iVar1 == 0) {
            iVar1 = zip64local_getByte(param_1,param_2,&local_44);
            lVar5 = (long)local_44;
            if (iVar1 == 0) {
              iVar1 = zip64local_getByte(param_1,param_2,&local_44);
              lVar6 = (long)local_44;
              if (iVar1 == 0) {
                iVar1 = zip64local_getByte(param_1,param_2,&local_44);
                lVar9 = lVar8;
                if (iVar1 == 0) {
                  lVar9 = ((long)local_44 << 0x38) +
                          lVar10 + lVar3 * 0x10000 + lVar2 * 0x100 + lVar4 * 0x1000000 +
                          (lVar7 << 0x20) + (lVar5 << 0x28) + (lVar6 << 0x30);
                }
              }
            }
          }
        }
      }
    }
  }
  *param_3 = lVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void update_keys_isra_0(ulong *param_1,long param_2,uint param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)*(uint *)(param_2 + (ulong)((param_3 ^ (uint)*param_1) & 0xff) * 4) ^ *param_1 >> 8
  ;
  *param_1 = uVar1;
  uVar1 = ((uVar1 & 0xff) + param_1[1]) * 0x8088405 + 1;
  param_1[1] = uVar1;
  param_1[2] = (ulong)*(uint *)(param_2 +
                               (ulong)(((uint)(uVar1 >> 0x18) ^ (uint)param_1[2]) & 0xff) * 4) ^
               param_1[2] >> 8;
  return;
}



int zip64FlushWriteBuffer(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0xfc);
  if (*(int *)(param_1 + 0x10148) != 0) {
    if (*(uint *)(param_1 + 0xfc) == 0) {
      uVar2 = 0;
    }
    else {
      pbVar3 = (byte *)(param_1 + 0x138);
      pbVar1 = pbVar3 + uVar2;
      do {
        bVar4 = *pbVar3;
        pbVar3 = pbVar3 + 1;
        uVar5 = *(ushort *)(param_1 + 0x10178) | 2;
        update_keys_isra_0(param_1 + 0x10168);
        pbVar3[-1] = bVar4 ^ (byte)((uVar5 ^ 1) * uVar5 >> 8);
      } while (pbVar1 != pbVar3);
    }
  }
  uVar2 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),param_1 + 0x138
                     ,uVar2);
  *(long *)(param_1 + 0x10160) = *(long *)(param_1 + 0x10160) + *(long *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar5 = *(uint *)(param_1 + 0xfc);
  *(long *)(param_1 + 0x10158) = *(long *)(param_1 + 0x10158) + (ulong)uVar5;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  return -(uint)(uVar2 != uVar5);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 add_data_in_datablock(undefined1 (*param_1) [16],long param_2,ulong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  puVar6 = *(undefined8 **)(*param_1 + 8);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)malloc(0x1010);
    uVar3 = _UNK_00103558;
    uVar2 = __LC0;
    if (puVar6 == (undefined8 *)0x0) {
      *param_1 = (undefined1  [16])0x0;
      return 0xffffff98;
    }
    *puVar6 = 0;
    *(undefined8 **)*param_1 = puVar6;
    *(undefined8 **)(*param_1 + 8) = puVar6;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
  }
  if (param_3 != 0) {
    uVar4 = puVar6[1];
    do {
      uVar9 = (uint)param_3;
      if (uVar4 == 0) {
        puVar5 = (undefined8 *)malloc(0x1010);
        uVar3 = _UNK_00103558;
        uVar2 = __LC0;
        if (puVar5 == (undefined8 *)0x0) {
          *puVar6 = 0;
          return 0xffffff98;
        }
        *puVar5 = 0;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        *puVar6 = puVar5;
        *(undefined8 **)(*param_1 + 8) = puVar5;
        if (param_3 < 0xff1) {
          puVar8 = puVar5 + 4;
        }
        else {
          puVar8 = puVar5 + 4;
          uVar9 = 0xff0;
        }
      }
      else {
        while( true ) {
          uVar1 = (uint)uVar4;
          if (param_3 <= uVar4) {
            uVar1 = uVar9;
          }
          if (uVar1 != 0) break;
          puVar6[1] = uVar4;
        }
        puVar8 = (undefined8 *)((long)puVar6 + puVar6[2] + 0x20);
        puVar5 = puVar6;
        uVar9 = uVar1;
      }
      uVar7 = (ulong)uVar9;
      uVar4 = 0;
      do {
        *(undefined1 *)((long)puVar8 + uVar4) = *(undefined1 *)(param_2 + uVar4);
        uVar4 = uVar4 + 1;
      } while (uVar7 != uVar4);
      puVar5[2] = puVar5[2] + uVar7;
      param_2 = param_2 + uVar7;
      uVar4 = puVar5[1] - uVar7;
      puVar5[1] = uVar4;
      param_3 = param_3 - uVar7;
      puVar6 = puVar5;
    } while (param_3 != 0);
  }
  return 0;
}



undefined8 zipOpen3(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  void *pvVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  ulong uVar21;
  undefined1 *puVar22;
  ulong uVar23;
  char *pcVar24;
  int iVar25;
  long lVar26;
  undefined8 uVar27;
  long in_FS_OFFSET;
  undefined1 auStack_10030 [65536];
  
  puVar2 = &stack0xffffffffffffffd0;
  do {
    puVar22 = puVar2;
    *(undefined8 *)(puVar22 + -0x1000) = *(undefined8 *)(puVar22 + -0x1000);
    puVar2 = puVar22 + -0x1000;
  } while (puVar22 + -0x1000 != auStack_10030);
  *(undefined8 *)(puVar22 + -0x1250) = param_3;
  *(undefined8 *)(puVar22 + 0xeff0) = *(undefined8 *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(puVar22 + -0x1168) = 0;
  if (param_4 == (undefined8 *)0x0) {
    *(undefined8 *)(puVar22 + -0x1170) = 0;
  }
  else {
    uVar16 = *param_4;
    uVar27 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    uVar5 = param_4[4];
    uVar6 = param_4[5];
    uVar7 = param_4[6];
    uVar8 = param_4[7];
    uVar9 = param_4[8];
    uVar10 = param_4[9];
    *(undefined8 *)(puVar22 + -0x1168) = param_4[0xc];
    uVar11 = param_4[10];
    uVar12 = param_4[0xb];
    *(undefined8 *)(puVar22 + -0x11c8) = uVar16;
    *(undefined8 *)(puVar22 + -0x11c0) = uVar27;
    *(undefined8 *)(puVar22 + -0x11b8) = uVar3;
    *(undefined8 *)(puVar22 + -0x11b0) = uVar4;
    *(undefined8 *)(puVar22 + -0x11a8) = uVar5;
    *(undefined8 *)(puVar22 + -0x11a0) = uVar6;
    *(undefined8 *)(puVar22 + -0x1198) = uVar7;
    *(undefined8 *)(puVar22 + -0x1190) = uVar8;
    *(undefined8 *)(puVar22 + -0x1188) = uVar9;
    *(undefined8 *)(puVar22 + -0x1180) = uVar10;
    *(undefined8 *)(puVar22 + -0x1178) = uVar11;
    *(undefined8 *)(puVar22 + -0x1170) = uVar12;
  }
  puVar2 = puVar22 + -0x11c8;
  if (param_2 == 0) {
    *(undefined8 *)(puVar22 + -0x1260) = 0x100b80;
    lVar15 = call_zopen64(puVar2,param_1,0xb);
    *(long *)(puVar22 + -0x1160) = lVar15;
    if (lVar15 != 0) {
LAB_00100b94:
      *(undefined8 *)(puVar22 + -0x1260) = 0x100b9c;
      uVar16 = call_ztell64(puVar2,lVar15);
      *(undefined4 *)(puVar22 + -0x1148) = 0;
      *(undefined8 *)(puVar22 + 0xefc8) = uVar16;
      *(undefined4 *)(puVar22 + -0x10d0) = 0;
      *(undefined8 *)(puVar22 + 0xefd8) = 0;
      *(undefined8 *)(puVar22 + 0xefd0) = 0;
      *(undefined1 (*) [16])(puVar22 + -0x1158) = (undefined1  [16])0x0;
      *(undefined8 *)(puVar22 + -0x1260) = 0x100be8;
      pvVar17 = malloc(0x101b0);
      *(void **)(puVar22 + -0x1258) = pvVar17;
      if (pvVar17 != (void *)0x0) {
        *(undefined8 *)(puVar22 + 0xefe0) = 0;
LAB_00100c01:
        if (*(undefined8 **)(puVar22 + -0x1250) != (undefined8 *)0x0) {
          **(undefined8 **)(puVar22 + -0x1250) = 0;
        }
LAB_00100c12:
        *(undefined8 *)(puVar22 + -0x1260) = 0x100c23;
        memcpy(*(void **)(puVar22 + -0x1258),puVar2,0x101b0);
        goto LAB_00100c23;
      }
LAB_001011c6:
      *(undefined8 *)(puVar22 + -0x1260) = 0x1011dd;
      (**(code **)(puVar22 + -0x11a0))
                (*(undefined8 *)(puVar22 + -0x1190),*(undefined8 *)(puVar22 + -0x1160));
    }
  }
  else {
    *(undefined8 *)(puVar22 + -0x1260) = 0x1006e6;
    lVar15 = call_zopen64(puVar2,param_1,7);
    *(long *)(puVar22 + -0x1160) = lVar15;
    if (lVar15 == 0) goto LAB_00100f36;
    if (param_2 == 1) {
      *(undefined8 *)(puVar22 + -0x1260) = 0x100f57;
      call_zseek64(puVar2,lVar15,0,2);
      lVar15 = *(long *)(puVar22 + -0x1160);
      goto LAB_00100b94;
    }
    *(undefined8 *)(puVar22 + -0x1260) = 0x10070b;
    uVar16 = call_ztell64(puVar2);
    *(undefined4 *)(puVar22 + -0x1148) = 0;
    *(undefined8 *)(puVar22 + 0xefc8) = uVar16;
    *(undefined4 *)(puVar22 + -0x10d0) = 0;
    *(undefined8 *)(puVar22 + 0xefd8) = 0;
    *(undefined8 *)(puVar22 + 0xefd0) = 0;
    *(undefined1 (*) [16])(puVar22 + -0x1158) = (undefined1  [16])0x0;
    *(undefined8 *)(puVar22 + -0x1260) = 0x100757;
    pvVar17 = malloc(0x101b0);
    *(void **)(puVar22 + -0x1258) = pvVar17;
    if (pvVar17 == (void *)0x0) goto LAB_001011c6;
    *(undefined8 *)(puVar22 + 0xefe0) = 0;
    if (param_2 != 2) goto LAB_00100c01;
    uVar16 = *(undefined8 *)(puVar22 + -0x1160);
    *(undefined8 *)(puVar22 + -0x1260) = 0x100793;
    lVar15 = call_zseek64(puVar2,uVar16,0,2);
    if (lVar15 == 0) {
      *(undefined8 *)(puVar22 + -0x1260) = 0x1007ac;
      uVar18 = call_ztell64(puVar2,uVar16);
      *(ulong *)(puVar22 + -0x1248) = uVar18;
      uVar23 = 0xffff;
      if (uVar18 < 0x10000) {
        uVar23 = uVar18;
      }
      *(undefined8 *)(puVar22 + -0x1260) = 0x1007c2;
      pvVar17 = malloc(0x404);
      if (pvVar17 != (void *)0x0) {
        uVar18 = 4;
        *(long *)(puVar22 + -0x1240) = (long)pvVar17 + -4;
        do {
          if (uVar23 <= uVar18) {
LAB_00100c61:
            *(undefined8 *)(puVar22 + -0x1260) = 0x100c69;
            free(pvVar17);
            break;
          }
          uVar18 = uVar18 + 0x400;
          if (uVar23 < uVar18) {
            uVar18 = uVar23;
          }
          uVar21 = 0x404;
          if (uVar18 < 0x405) {
            uVar21 = uVar18;
          }
          *(ulong *)(puVar22 + -0x1238) = *(long *)(puVar22 + -0x1248) - uVar18;
          *(undefined8 *)(puVar22 + -0x1260) = 0x100821;
          lVar15 = call_zseek64(puVar2,uVar16,*(long *)(puVar22 + -0x1248) - uVar18,0);
          if (lVar15 != 0) goto LAB_00100c61;
          *(undefined8 *)(puVar22 + -0x1260) = 0x100842;
          uVar19 = (**(code **)(puVar22 + -0x11c0))
                             (*(undefined8 *)(puVar22 + -0x1190),uVar16,pvVar17,uVar21);
          if (uVar21 != uVar19) goto LAB_00100c61;
          pcVar20 = (char *)((long)((int)uVar21 + -3) + (long)pvVar17);
          do {
            if ((((pcVar20[-1] == 'P') && (*pcVar20 == 'K')) && (pcVar20[1] == '\x06')) &&
               (pcVar20[2] == '\a')) {
              if (pcVar20 + ((*(long *)(puVar22 + -0x1238) + -1) - (long)pvVar17) != (char *)0x0) {
                *(char **)(puVar22 + -0x1248) =
                     pcVar20 + ((*(long *)(puVar22 + -0x1238) + -1) - (long)pvVar17);
                *(undefined8 *)(puVar22 + -0x1260) = 0x1008b7;
                free(pvVar17);
                *(undefined8 *)(puVar22 + -0x1260) = 0x1008c9;
                lVar15 = call_zseek64(puVar2,uVar16,*(undefined8 *)(puVar22 + -0x1248),0);
                if (lVar15 != 0) goto LAB_00100c69;
                *(undefined1 **)(puVar22 + -0x1230) = puVar22 + -0x11d8;
                *(undefined8 *)(puVar22 + -0x1260) = 0x1008ed;
                iVar13 = zip64local_getLong(puVar2,uVar16,puVar22 + -0x11d8);
                if (iVar13 == 0) {
                  *(undefined8 *)(puVar22 + -0x1260) = 0x100905;
                  iVar13 = zip64local_getLong(puVar2,uVar16,*(undefined8 *)(puVar22 + -0x1230));
                  if ((iVar13 == 0) && (*(long *)(puVar22 + -0x11d8) == 0)) {
                    *(undefined8 *)(puVar22 + -0x1260) = 0x100932;
                    iVar13 = zip64local_getLong64(puVar2,uVar16,puVar22 + -0x11d0);
                    if (iVar13 == 0) {
                      *(undefined8 *)(puVar22 + -0x1260) = 0x10094a;
                      iVar13 = zip64local_getLong(puVar2,uVar16,*(undefined8 *)(puVar22 + -0x1230));
                      uVar27 = *(undefined8 *)(puVar22 + -0x1160);
                      if ((iVar13 != 0) || (*(long *)(puVar22 + -0x11d8) != 1)) goto LAB_00100c7e;
                      pcVar20 = *(char **)(puVar22 + -0x11d0);
                      *(undefined8 *)(puVar22 + -0x1260) = 0x100981;
                      lVar15 = call_zseek64(puVar2,uVar16,pcVar20,0);
                      if (lVar15 == 0) {
                        *(undefined8 *)(puVar22 + -0x1260) = 0x10099a;
                        iVar13 = zip64local_getLong(puVar2,uVar16,*(undefined8 *)(puVar22 + -0x1230)
                                                   );
                        uVar27 = *(undefined8 *)(puVar22 + -0x1160);
                        if (((iVar13 != 0) || (*(long *)(puVar22 + -0x11d8) != 0x6064b50)) ||
                           (pcVar20 == (char *)0x0)) goto LAB_00100c7e;
                        *(undefined8 *)(puVar22 + -0x1260) = 0x1009d5;
                        lVar15 = call_zseek64(puVar2,uVar27,pcVar20,0);
                        iVar13 = -1;
                        *(undefined8 *)(puVar22 + -0x1260) = 0x1009f3;
                        iVar14 = zip64local_getLong(puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                                    puVar22 + -0x1210);
                        if (iVar14 == 0) {
                          iVar13 = -(uint)(lVar15 != 0);
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100a15;
                        iVar14 = zip64local_getLong64
                                           (puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                            puVar22 + -0x11d0);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100a30;
                        iVar14 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                                     puVar22 + -0x11e8);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100a4b;
                        iVar14 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                                     puVar22 + -0x11e0);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100a66;
                        iVar14 = zip64local_getLong(puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                                    puVar22 + -0x1208);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100a81;
                        iVar14 = zip64local_getLong(puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                                    puVar22 + -0x1200);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100a9c;
                        iVar14 = zip64local_getLong64
                                           (puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                            puVar22 + -0x11f8);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100ab7;
                        iVar14 = zip64local_getLong64
                                           (puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                            puVar22 + -0x11f0);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        if (*(long *)(puVar22 + -0x11f0) == *(long *)(puVar22 + -0x11f8)) {
                          if (*(long *)(puVar22 + -0x1200) != 0 || *(long *)(puVar22 + -0x1208) != 0
                             ) {
                            iVar13 = -0x67;
                          }
                        }
                        else {
                          iVar13 = -0x67;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100ae8;
                        iVar14 = zip64local_getLong64
                                           (puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                            puVar22 + -0x1220);
                        if (iVar14 != 0) {
                          iVar13 = -1;
                        }
                        *(undefined8 *)(puVar22 + -0x1260) = 0x100b08;
                        iVar14 = zip64local_getLong64
                                           (puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                            puVar22 + -0x1218);
                        if (iVar14 != 0) goto LAB_00100b34;
                        lVar15 = *(long *)(puVar22 + -0x1218);
                        uVar23 = *(ulong *)(puVar22 + -0x1220);
                        *(undefined8 *)(puVar22 + -0x11d8) = 0;
                        pcVar24 = (char *)(lVar15 + uVar23);
                        if ((iVar13 != 0) || (pcVar20 < pcVar24)) goto LAB_00100b34;
                        goto LAB_00100e32;
                      }
                    }
                  }
                }
                uVar27 = *(undefined8 *)(puVar22 + -0x1160);
                goto LAB_00100c7e;
              }
              break;
            }
            pcVar20 = pcVar20 + -1;
          } while ((char *)((*(long *)(puVar22 + -0x1240) + uVar21) - (ulong)((int)uVar21 - 4)) !=
                   pcVar20);
        } while( true );
      }
    }
LAB_00100c69:
    uVar27 = *(undefined8 *)(puVar22 + -0x1160);
    *(undefined1 **)(puVar22 + -0x1230) = puVar22 + -0x11d8;
LAB_00100c7e:
    *(undefined8 *)(puVar22 + -0x1260) = 0x100c90;
    lVar15 = call_zseek64(puVar2,uVar27,0,2);
    if (lVar15 == 0) {
      *(undefined8 *)(puVar22 + -0x1260) = 0x100f74;
      uVar18 = call_ztell64(puVar2,uVar27);
      *(ulong *)(puVar22 + -0x1240) = uVar18;
      uVar23 = 0xffff;
      if (uVar18 < 0x10000) {
        uVar23 = uVar18;
      }
      *(undefined8 *)(puVar22 + -0x1260) = 0x100f8a;
      pvVar17 = malloc(0x404);
      *(void **)(puVar22 + -0x1248) = pvVar17;
      if (pvVar17 != (void *)0x0) {
        uVar18 = 4;
        *(long *)(puVar22 + -0x1238) = (long)pvVar17 + -4;
        do {
          if (uVar23 <= uVar18) {
LAB_00101170:
            pcVar20 = (char *)0x0;
LAB_0010107a:
            *(undefined8 *)(puVar22 + -0x1260) = 0x101084;
            free(*(void **)(puVar22 + -0x1248));
            goto LAB_00100c9c;
          }
          uVar18 = uVar18 + 0x400;
          lVar15 = *(long *)(puVar22 + -0x1240);
          if (uVar23 < uVar18) {
            uVar18 = uVar23;
          }
          uVar21 = 0x404;
          if (uVar18 < 0x405) {
            uVar21 = uVar18;
          }
          *(undefined8 *)(puVar22 + -0x1260) = 0x100fef;
          lVar26 = call_zseek64(puVar2,uVar27,lVar15 - uVar18,0);
          if (lVar26 != 0) goto LAB_00101170;
          *(undefined8 *)(puVar22 + -0x1260) = 0x101012;
          uVar19 = (**(code **)(puVar22 + -0x11c0))
                             (*(undefined8 *)(puVar22 + -0x1190),uVar27,
                              *(undefined8 *)(puVar22 + -0x1248),uVar21);
          if (uVar21 != uVar19) goto LAB_00101170;
          pcVar20 = (char *)((long)((int)uVar21 + -3) + *(long *)(puVar22 + -0x1248));
          do {
            if (((pcVar20[-1] == 'P') && (*pcVar20 == 'K')) &&
               ((pcVar20[1] == '\x05' && (pcVar20[2] == '\x06')))) {
              pcVar20 = pcVar20 + (((lVar15 - uVar18) + -1) - *(long *)(puVar22 + -0x1248));
              if (pcVar20 != (char *)0x0) goto LAB_0010107a;
              break;
            }
            pcVar20 = pcVar20 + -1;
          } while ((char *)((*(long *)(puVar22 + -0x1238) + uVar21) - (ulong)((int)uVar21 - 4)) !=
                   pcVar20);
        } while( true );
      }
    }
    pcVar20 = (char *)0x0;
LAB_00100c9c:
    puVar1 = puVar22 + -0x1210;
    iVar13 = -1;
    *(undefined8 *)(puVar22 + -0x1260) = 0x100cbc;
    lVar15 = call_zseek64(puVar2,*(undefined8 *)(puVar22 + -0x1160),pcVar20,0);
    *(undefined8 *)(puVar22 + -0x1260) = 0x100cd2;
    iVar14 = zip64local_getLong(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar1);
    if (iVar14 == 0) {
      iVar13 = -(uint)(lVar15 != 0);
    }
    *(undefined8 *)(puVar22 + -0x1260) = 0x100cf6;
    iVar14 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar22 + -0x1208);
    if (iVar14 != 0) {
      iVar13 = -1;
    }
    *(undefined8 *)(puVar22 + -0x1260) = 0x100d11;
    iVar14 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar22 + -0x1200);
    *(undefined8 *)(puVar22 + -0x11f8) = 0;
    if (iVar14 != 0) {
      iVar13 = -1;
    }
    *(undefined8 *)(puVar22 + -0x1260) = 0x100d33;
    iVar14 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar1);
    if (iVar14 == 0) {
      lVar15 = *(long *)(puVar22 + -0x1210);
      *(undefined8 *)(puVar22 + -0x11f0) = 0;
      *(long *)(puVar22 + -0x11f8) = lVar15;
      *(undefined8 *)(puVar22 + -0x1260) = 0x100d61;
      iVar14 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar1);
      if (iVar14 == 0) {
LAB_0010110e:
        iVar25 = iVar13;
        lVar26 = *(long *)(puVar22 + -0x1210);
        *(long *)(puVar22 + -0x11f0) = lVar26;
      }
      else {
        lVar26 = 0;
        iVar25 = -1;
      }
      if (lVar26 == lVar15) goto LAB_00101145;
LAB_00100d7a:
      iVar25 = -0x67;
    }
    else {
      lVar15 = 0;
      *(undefined8 *)(puVar22 + -0x11f0) = 0;
      iVar25 = -1;
      *(undefined8 *)(puVar22 + -0x1260) = 0x101141;
      iVar14 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar1);
      iVar13 = -1;
      if (iVar14 == 0) goto LAB_0010110e;
LAB_00101145:
      if (*(long *)(puVar22 + -0x1200) != 0 || *(long *)(puVar22 + -0x1208) != 0) goto LAB_00100d7a;
    }
    *(undefined8 *)(puVar22 + -0x1220) = 0;
    *(undefined8 *)(puVar22 + -0x1260) = 0x100d9c;
    iVar13 = zip64local_getLong(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar1);
    if (iVar13 == 0) {
      *(undefined8 *)(puVar22 + -0x1220) = *(undefined8 *)(puVar22 + -0x1210);
    }
    else {
      iVar25 = -1;
    }
    *(undefined8 *)(puVar22 + -0x1218) = 0;
    *(undefined8 *)(puVar22 + -0x1260) = 0x100dca;
    iVar13 = zip64local_getLong(puVar2,*(undefined8 *)(puVar22 + -0x1160),puVar1);
    if (iVar13 == 0) {
      *(undefined8 *)(puVar22 + -0x1218) = *(undefined8 *)(puVar22 + -0x1210);
    }
    else {
      iVar25 = -1;
    }
    *(undefined8 *)(puVar22 + -0x1260) = 0x100df1;
    iVar13 = zip64local_getShort(puVar2,*(undefined8 *)(puVar22 + -0x1160),
                                 *(undefined8 *)(puVar22 + -0x1230));
    if (iVar13 == 0) {
      lVar15 = *(long *)(puVar22 + -0x1218);
      uVar23 = *(ulong *)(puVar22 + -0x1220);
      uVar16 = *(undefined8 *)(puVar22 + -0x1160);
      pcVar24 = (char *)(lVar15 + uVar23);
      if ((pcVar20 < pcVar24) || (iVar25 != 0)) goto LAB_00100b3c;
      lVar26 = *(long *)(puVar22 + -0x11d8);
      if (lVar26 != 0) {
        *(char **)(puVar22 + -0x1248) = pcVar24;
        *(undefined8 *)(puVar22 + -0x1260) = 0x1010c2;
        pvVar17 = malloc(lVar26 + 1);
        pcVar24 = *(char **)(puVar22 + -0x1248);
        *(void **)(puVar22 + 0xefe0) = pvVar17;
        if (pvVar17 != (void *)0x0) {
          *(undefined8 *)(puVar22 + -0x1260) = 0x1010f0;
          lVar26 = (**(code **)(puVar22 + -0x11c0))
                             (*(undefined8 *)(puVar22 + -0x1190),uVar16,pvVar17,lVar26);
          pcVar24 = *(char **)(puVar22 + -0x1248);
          *(long *)(puVar22 + -0x11d8) = lVar26;
          *(undefined1 *)(*(long *)(puVar22 + 0xefe0) + lVar26) = 0;
        }
      }
LAB_00100e32:
      lVar26 = (long)pcVar20 - (long)pcVar24;
      *(long *)(puVar22 + 0xefd0) = lVar26;
      *(undefined8 *)(puVar22 + -0x1260) = 0x100e47;
      pvVar17 = malloc(0xff0);
      *(long *)(puVar22 + -0x1248) = lVar15 + lVar26;
      *(undefined8 *)(puVar22 + -0x1260) = 0x100e68;
      lVar15 = call_zseek64(puVar2,*(undefined8 *)(puVar22 + -0x1160),lVar15 + lVar26,0);
      if ((lVar15 == 0) && (uVar23 != 0)) {
        while( true ) {
          uVar18 = 0xff0;
          if (uVar23 < 0xff1) {
            uVar18 = uVar23;
          }
          *(undefined8 *)(puVar22 + -0x1260) = 0x100eac;
          uVar21 = (**(code **)(puVar22 + -0x11c0))
                             (*(undefined8 *)(puVar22 + -0x1190),*(undefined8 *)(puVar22 + -0x1160),
                              pvVar17,uVar18);
          if (uVar18 != uVar21) break;
          *(undefined8 *)(puVar22 + -0x1260) = 0x10109e;
          iVar13 = add_data_in_datablock(puVar22 + -0x1158,pvVar17,uVar18);
          uVar23 = uVar23 - uVar18;
          if ((uVar23 == 0) || (iVar13 != 0)) goto LAB_00100ebb;
        }
        iVar13 = -1;
      }
      else {
        iVar13 = -(uint)(lVar15 != 0);
      }
LAB_00100ebb:
      *(int *)(puVar22 + -0x1240) = iVar13;
      *(undefined8 *)(puVar22 + -0x1260) = 0x100ec8;
      free(pvVar17);
      *(long *)(puVar22 + 0xefc8) = lVar26;
      *(undefined8 *)(puVar22 + 0xefd8) = *(undefined8 *)(puVar22 + -0x11f0);
      *(undefined8 *)(puVar22 + -0x1260) = 0x100ef4;
      lVar15 = call_zseek64(puVar2,*(undefined8 *)(puVar22 + -0x1160),
                            *(undefined8 *)(puVar22 + -0x1248),0);
      if (lVar15 == 0) {
        iVar13 = *(int *)(puVar22 + -0x1240);
        if (*(undefined8 **)(puVar22 + -0x1250) != (undefined8 *)0x0) {
          **(undefined8 **)(puVar22 + -0x1250) = *(undefined8 *)(puVar22 + 0xefe0);
        }
        if (iVar13 == 0) goto LAB_00100c12;
        pvVar17 = *(void **)(puVar22 + 0xefe0);
      }
      else {
        pvVar17 = *(void **)(puVar22 + 0xefe0);
        if (*(undefined8 **)(puVar22 + -0x1250) != (undefined8 *)0x0) {
          **(undefined8 **)(puVar22 + -0x1250) = pvVar17;
        }
      }
    }
    else {
LAB_00100b34:
      uVar16 = *(undefined8 *)(puVar22 + -0x1160);
LAB_00100b3c:
      *(undefined8 *)(puVar22 + -0x1260) = 0x100b4e;
      (**(code **)(puVar22 + -0x11a0))(*(undefined8 *)(puVar22 + -0x1190),uVar16);
      pvVar17 = *(void **)(puVar22 + 0xefe0);
      if (*(long *)(puVar22 + -0x1250) != 0) {
        **(undefined8 **)(puVar22 + -0x1250) = pvVar17;
      }
    }
    *(undefined8 *)(puVar22 + -0x1260) = 0x100f2d;
    free(pvVar17);
    *(undefined8 *)(puVar22 + -0x1260) = 0x100f36;
    free(*(void **)(puVar22 + -0x1258));
  }
LAB_00100f36:
  *(undefined8 *)(puVar22 + -0x1258) = 0;
LAB_00100c23:
  if (*(long *)(puVar22 + 0xeff0) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar22 + -0x1260) = &UNK_001011e7;
    __stack_chk_fail();
  }
  return *(undefined8 *)(puVar22 + -0x1258);
}



void zipOpen2(undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  long in_FS_OFFSET;
  undefined1 auStack_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      zipOpen3();
      return;
    }
  }
  else {
    fill_zlib_filefunc64_32_def_from_filefunc32(auStack_98,param_4);
    zipOpen3(param_1,param_2,param_3,auStack_98);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void zipOpen2_64(void)

{
  long lVar1;
  long in_RCX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RCX == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      zipOpen3();
      return;
    }
  }
  else {
    zipOpen3();
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void zipOpen(undefined8 param_1,undefined8 param_2)

{
  zipOpen3(param_1,param_2,0,0);
  return;
}



void zipOpen64(undefined8 param_1,undefined8 param_2)

{
  zipOpen3(param_1,param_2,0,0);
  return;
}



undefined8 zipWriteInFileInZip(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  
  if (param_1 == 0) {
    return 0xffffff9a;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar3 = 0xffffff9a;
  }
  else {
    uVar3 = crc32(*(undefined8 *)(param_1 + 0x10140));
    *(undefined8 *)(param_1 + 0x88) = param_2;
    *(undefined8 *)(param_1 + 0x10140) = uVar3;
    *(int *)(param_1 + 0x90) = param_3;
    if (param_3 != 0) {
      do {
        if (*(int *)(param_1 + 0xa8) == 0) {
          uVar3 = zip64FlushWriteBuffer(param_1);
          *(undefined4 *)(param_1 + 0xa8) = 0x10000;
          if ((int)uVar3 == -1) {
            *(long *)(param_1 + 0xa0) = param_1 + 0x138;
            return uVar3;
          }
          *(long *)(param_1 + 0xa0) = param_1 + 0x138;
        }
        if (*(long *)(param_1 + 0x130) == 8) {
          uVar3 = *(undefined8 *)(param_1 + 0xb0);
          uVar5 = deflate(param_1 + 0x88,0);
          *(int *)(param_1 + 0xfc) =
               (*(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xb0)) - (int)uVar3;
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
        else {
          uVar6 = *(uint *)(param_1 + 0x90);
          uVar2 = *(uint *)(param_1 + 0xa8);
          uVar1 = uVar2;
          if (uVar6 <= uVar2) {
            uVar1 = uVar6;
          }
          uVar7 = (ulong)uVar1;
          if (uVar1 != 0) {
            uVar4 = 0;
            do {
              *(undefined1 *)(*(long *)(param_1 + 0xa0) + uVar4) =
                   *(undefined1 *)(*(long *)(param_1 + 0x88) + uVar4);
              uVar4 = uVar4 + 1;
            } while (uVar7 != uVar4);
            uVar6 = *(uint *)(param_1 + 0x90);
            uVar2 = *(uint *)(param_1 + 0xa8);
          }
          *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + uVar7;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + uVar7;
          *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + uVar7;
          *(long *)(param_1 + 0xb0) = *(long *)(param_1 + 0xb0) + uVar7;
          *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0xfc) + uVar1;
          *(uint *)(param_1 + 0x90) = uVar6 - uVar1;
          *(uint *)(param_1 + 0xa8) = uVar2 - uVar1;
        }
      } while (*(int *)(param_1 + 0x90) != 0);
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int zipCloseFileInZipRaw64(long param_1,ulong param_2,ulong param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  undefined4 *puVar10;
  ulong uVar11;
  int iVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  ulong uVar20;
  ulong uVar21;
  long local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (*(int *)(param_1 + 0x80) == 0)) {
    iVar12 = -0x66;
    goto LAB_00101707;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(long *)(param_1 + 0x130) == 8) {
    lVar5 = param_1 + 0x88;
    do {
      if (*(int *)(param_1 + 0xa8) == 0) {
        zip64FlushWriteBuffer(param_1);
        *(undefined4 *)(param_1 + 0xa8) = 0x10000;
        *(long *)(param_1 + 0xa0) = param_1 + 0x138;
      }
      uVar4 = *(undefined8 *)(param_1 + 0xb0);
      iVar12 = deflate(lVar5,4);
      iVar3 = (*(int *)(param_1 + 0xfc) + *(int *)(param_1 + 0xb0)) - (int)uVar4;
      *(int *)(param_1 + 0xfc) = iVar3;
    } while (iVar12 == 0);
    if (iVar12 == 1) {
      if (iVar3 != 0) goto LAB_00101730;
      if (*(long *)(param_1 + 0x130) != 8) goto LAB_0010154a;
      iVar12 = deflateEnd(lVar5);
    }
    else {
      if (*(long *)(param_1 + 0x130) != 8) goto LAB_0010154c;
      deflateEnd(lVar5);
    }
LAB_00101a98:
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  else {
    if (*(int *)(param_1 + 0xfc) != 0) {
LAB_00101730:
      iVar12 = zip64FlushWriteBuffer(param_1);
      if (iVar12 == -1) {
        iVar12 = -1;
        if (*(long *)(param_1 + 0x130) != 8) goto LAB_0010154c;
        deflateEnd(param_1 + 0x88);
      }
      else {
        if (*(long *)(param_1 + 0x130) != 8) goto LAB_0010154a;
        iVar12 = deflateEnd(param_1 + 0x88);
      }
      goto LAB_00101a98;
    }
LAB_0010154a:
    iVar12 = 0;
  }
LAB_0010154c:
  uVar1 = _LC4;
  if (*(int *)(param_1 + 0x134) == 0) {
    param_3 = *(ulong *)(param_1 + 0x10140);
    param_2 = *(ulong *)(param_1 + 0x10160);
  }
  uVar17 = (ulong)*(uint *)(param_1 + 0x10188) + *(long *)(param_1 + 0x10158);
  bVar18 = 0xfffffffe < uVar17;
  bVar19 = 0xfffffffe < param_2;
  if ((bVar18 || bVar19) || (0xfffffffe < *(ulong *)(param_1 + 0x100))) {
    *(undefined2 *)(*(long *)(param_1 + 0x108) + 4) = _LC4;
    *(undefined2 *)(*(long *)(param_1 + 0x108) + 6) = uVar1;
  }
  uVar16 = (undefined4)param_3;
  if (param_3 >> 0x20 == 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x10) = uVar16;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x10) = 0xffffffff;
  }
  if (uVar17 < 0xffffffff) {
    *(int *)(*(long *)(param_1 + 0x108) + 0x14) = (int)uVar17;
    iVar3 = *(int *)(param_1 + 0xe0);
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x14) = _LC2;
    iVar3 = *(int *)(param_1 + 0xe0);
  }
  if (iVar3 == 1) {
    *(undefined2 *)(*(long *)(param_1 + 0x108) + 0x24) = 1;
  }
  if (0xfffffffe < param_2) {
    *(undefined4 *)(*(long *)(param_1 + 0x108) + 0x18) = 0xffffffff;
    if (0xfffffffe < uVar17) {
      iVar2 = 0x10;
      iVar3 = 0x10;
      if (*(ulong *)(param_1 + 0x100) < 0xffffffff) goto LAB_0010163a;
LAB_00101793:
      cVar13 = (char)iVar2 + '\b';
      uVar9 = (ulong)(iVar2 + 0xc);
      goto LAB_0010163f;
    }
    if (0xfffffffe < *(ulong *)(param_1 + 0x100)) {
      uVar9 = 0x14;
      cVar13 = '\x10';
      goto LAB_0010163f;
    }
    if (0xb < *(ulong *)(param_1 + 0x120)) {
      puVar10 = (undefined4 *)(*(long *)(param_1 + 0x118) + *(long *)(param_1 + 0x108));
      uVar9 = 0xc;
      *puVar10 = 0x80001;
      puVar14 = (undefined8 *)(puVar10 + 1);
      uVar20 = __LC3;
      uVar21 = _UNK_00103568;
      goto LAB_0010194c;
    }
LAB_00101c29:
    iVar12 = -0x67;
    goto LAB_00101707;
  }
  *(int *)(*(long *)(param_1 + 0x108) + 0x18) = (int)param_2;
  if (bVar18 || bVar19) {
    iVar2 = 8;
    iVar3 = 8;
    if (0xfffffffe < *(ulong *)(param_1 + 0x100)) goto LAB_00101793;
LAB_0010163a:
    uVar9 = (ulong)(iVar3 + 4);
    cVar13 = (char)iVar3;
LAB_0010163f:
    if (*(ulong *)(param_1 + 0x120) < uVar9) goto LAB_00101c29;
    puVar10 = (undefined4 *)(*(long *)(param_1 + 0x118) + *(long *)(param_1 + 0x108));
    *(char *)((long)puVar10 + 2) = cVar13;
    puVar14 = (undefined8 *)(puVar10 + 1);
    *(undefined2 *)puVar10 = 1;
    *(undefined1 *)((long)puVar10 + 3) = 0;
    uVar20 = uVar9;
    uVar21 = uVar9;
    puVar7 = puVar14;
    if (0xfffffffe < param_2) {
LAB_0010194c:
      puVar7 = (undefined8 *)(puVar10 + 3);
      puVar6 = puVar14;
      uVar11 = param_2;
      do {
        *(char *)puVar6 = (char)uVar11;
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = uVar11 >> 8;
      } while (puVar6 != puVar7);
      if (uVar11 != 0) {
        *puVar14 = 0xffffffffffffffff;
      }
    }
    puVar14 = puVar7;
    if (0xfffffffe < uVar17) {
      puVar14 = puVar7 + 1;
      puVar6 = puVar7;
      uVar11 = uVar17;
      do {
        *(char *)puVar6 = (char)uVar11;
        puVar6 = (undefined8 *)((long)puVar6 + 1);
        uVar11 = uVar11 >> 8;
      } while (puVar6 != puVar14);
      if (uVar11 != 0) {
        *puVar7 = 0xffffffffffffffff;
      }
    }
    uVar11 = *(ulong *)(param_1 + 0x100);
    if (0xfffffffe < uVar11) {
      puVar7 = puVar14;
      do {
        *(char *)puVar7 = (char)uVar11;
        puVar7 = (undefined8 *)((long)puVar7 + 1);
        uVar11 = uVar11 >> 8;
      } while (puVar7 != puVar14 + 1);
      if (uVar11 != 0) {
        *puVar14 = 0xffffffffffffffff;
      }
    }
    *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) - uVar9;
    lVar5 = *(long *)(param_1 + 0x108);
    uVar20 = uVar20 + *(long *)(param_1 + 0x110);
    *(ulong *)(param_1 + 0x110) = uVar20;
    *(ulong *)(param_1 + 0x118) = uVar21 + *(long *)(param_1 + 0x118);
    *(char *)(lVar5 + 0x1e) = (char)uVar20;
    if (uVar20 >> 0x10 == 0) {
      *(char *)(lVar5 + 0x1f) = (char)(uVar20 >> 8);
    }
    else {
      *(undefined2 *)(lVar5 + 0x1e) = 0xffff;
    }
  }
  else if (0xfffffffe < *(ulong *)(param_1 + 0x100)) {
    uVar9 = 0xc;
    cVar13 = '\b';
    goto LAB_0010163f;
  }
  if (iVar12 == 0) {
    iVar12 = add_data_in_datablock
                       (param_1 + 0x70,*(void **)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x118))
    ;
    free(*(void **)(param_1 + 0x108));
    if (iVar12 == 0) {
      uVar4 = call_ztell64(param_1,*(undefined8 *)(param_1 + 0x68));
      lVar5 = call_zseek64(param_1,*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x100) + 0xe,
                           0);
      if (lVar5 == 0) {
        if (param_3 >> 0x20 != 0) {
          local_48._0_4_ = 0xffffffff;
          uVar16 = (undefined4)local_48;
        }
        local_48 = CONCAT44(local_48._4_4_,uVar16);
        lVar5 = (**(code **)(param_1 + 0x10))
                          (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_48
                           ,4);
        if (lVar5 != 4) goto LAB_001018df;
        uVar15 = *(undefined8 *)(param_1 + 0x68);
        if (!bVar18 && !bVar19) {
          local_48 = CONCAT44(local_48._4_4_,(int)uVar17);
          lVar5 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar15,&local_48,4);
          if (lVar5 != 4) goto LAB_00101a11;
          local_48 = CONCAT44(local_48._4_4_,(int)param_2);
          lVar5 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),
                             &local_48,4);
          uVar15 = *(undefined8 *)(param_1 + 0x68);
          iVar12 = -(uint)(lVar5 != 4);
          goto LAB_00101a1a;
        }
        if (*(long *)(param_1 + 0x10150) == 0) goto LAB_001018fc;
        lVar5 = call_zseek64(param_1,uVar15,*(long *)(param_1 + 0x10150) + 4,0);
        if (lVar5 == 0) {
          uVar15 = *(undefined8 *)(param_1 + 0x68);
          plVar8 = &local_48;
          do {
            *(char *)plVar8 = (char)param_2;
            plVar8 = (long *)((long)plVar8 + 1);
            param_2 = param_2 >> 8;
          } while (plVar8 != local_40);
          if (param_2 != 0) {
            local_48 = -1;
          }
          lVar5 = (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x38),uVar15,&local_48,8);
          if (lVar5 == 8) {
            uVar15 = *(undefined8 *)(param_1 + 0x68);
            plVar8 = &local_48;
            do {
              *(char *)plVar8 = (char)uVar17;
              plVar8 = (long *)((long)plVar8 + 1);
              uVar17 = uVar17 >> 8;
            } while (plVar8 != local_40);
            if (uVar17 != 0) {
              local_48 = -1;
            }
            lVar5 = (**(code **)(param_1 + 0x10))
                              (*(undefined8 *)(param_1 + 0x38),uVar15,&local_48,8);
            uVar15 = *(undefined8 *)(param_1 + 0x68);
            iVar12 = -(uint)(lVar5 != 8);
            goto LAB_00101a1a;
          }
        }
LAB_00101a11:
        uVar15 = *(undefined8 *)(param_1 + 0x68);
        iVar12 = -1;
      }
      else {
LAB_001018df:
        if (!bVar18 && !bVar19) goto LAB_00101a11;
        if (*(long *)(param_1 + 0x10150) != 0) {
          call_zseek64(param_1,*(undefined8 *)(param_1 + 0x68),*(long *)(param_1 + 0x10150) + 4,0);
          goto LAB_00101a11;
        }
        uVar15 = *(undefined8 *)(param_1 + 0x68);
LAB_001018fc:
        iVar12 = -0x67;
      }
LAB_00101a1a:
      lVar5 = call_zseek64(param_1,uVar15,uVar4,0);
      if (lVar5 != 0) {
        iVar12 = -1;
      }
    }
  }
  else {
    free(*(void **)(param_1 + 0x108));
  }
  *(long *)(param_1 + 0x101a0) = *(long *)(param_1 + 0x101a0) + 1;
  *(undefined4 *)(param_1 + 0x80) = 0;
LAB_00101707:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void zipCloseFileInZipRaw(void)

{
  zipCloseFileInZipRaw64();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int zipOpenNewFileInZip4_64
              (long param_1,char *param_2,int *param_3,undefined8 param_4,uint param_5,long param_6,
              uint param_7,char *param_8,uint param_9,int param_10,undefined4 param_11,int param_12,
              undefined4 param_13,undefined4 param_14,char *param_15,undefined4 param_16,
              undefined8 param_17,ulong param_18,undefined4 param_19)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  time_t tVar13;
  ulong uVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  char *pcVar18;
  undefined8 uVar19;
  byte bVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  long in_FS_OFFSET;
  uint local_b0;
  undefined2 local_a4;
  ulong local_98;
  undefined1 local_90;
  ulong local_88;
  int local_80;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_60;
  byte local_56 [10];
  undefined8 local_4c;
  byte local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1 == 0) || ((param_9 & 0xfffffff7) != 0)) ||
      ((param_2 != (char *)0x0 && (sVar5 = strlen(param_2), 0xffff < sVar5)))) ||
     (((param_8 != (char *)0x0 && (sVar5 = strlen(param_8), 0xffff < sVar5)) ||
      (0xffff < (param_5 | param_7))))) {
    local_80 = -0x66;
    goto LAB_001023ac;
  }
  if ((*(int *)(param_1 + 0x80) == 1) &&
     (local_80 = zipCloseFileInZipRaw64(param_1,0,0), local_80 != 0)) goto LAB_001023ac;
  if (param_2 == (char *)0x0) {
    local_60 = 0;
    uVar16 = 1;
    uVar11 = 1;
    param_2 = "-";
    local_88 = 0;
    local_7a = 1;
  }
  else {
    sVar5 = strlen(param_2);
    uVar16 = (uint)sVar5;
    uVar11 = sVar5 & 0xffffffff;
    local_60 = (undefined1)(uVar11 >> 8);
    local_7a = (undefined1)uVar11;
    local_88 = uVar11 >> 0x10;
  }
  if (param_8 == (char *)0x0) {
    local_98 = 0;
    local_90 = 0;
    local_79 = 0;
    local_b0 = 0;
  }
  else {
    sVar5 = strlen(param_8);
    local_b0 = (uint)sVar5;
    local_79 = (undefined1)sVar5;
    local_98 = (sVar5 & 0xffffffff) >> 0x10;
    local_90 = (undefined1)(sVar5 >> 8);
  }
  uVar6 = 0;
  if ((param_3 == (int *)0x0) || (uVar6 = *(ulong *)(param_3 + 6), uVar6 != 0)) {
    if (param_10 - 8U < 2) goto LAB_0010244e;
LAB_00101d9a:
    if (param_10 == 2) {
      uVar14 = param_18 | 4;
    }
    else {
      uVar14 = param_18 | 6;
      if (param_10 != 1) {
        uVar14 = param_18;
      }
    }
  }
  else {
    uVar6 = (ulong)param_3[5];
    if (uVar6 < 0x7bc) {
      if (0x4f < uVar6) {
        uVar6 = uVar6 - 0x50;
      }
    }
    else {
      uVar6 = uVar6 - 0x7bc;
    }
    uVar6 = (((long)(param_3[4] + 1) + uVar6 * 0x10) * 0x20 + (long)param_3[3]) * 0x10000 |
            ((long)param_3[2] * 0x40 + (long)param_3[1]) * 0x20 + ((ulong)(long)*param_3 >> 1);
    if (1 < param_10 - 8U) goto LAB_00101d9a;
LAB_0010244e:
    uVar14 = param_18 | 2;
  }
  param_18 = uVar14;
  *(ulong *)(param_1 + 0x10138) = uVar6;
  *(ulong *)(param_1 + 0x128) = param_18;
  if (param_15 != (char *)0x0) {
    *(ulong *)(param_1 + 0x128) = *(ulong *)(param_1 + 0x128) | 1;
  }
  *(undefined8 *)(param_1 + 0x10140) = 0;
  *(undefined4 *)(param_1 + 0x10148) = 0;
  *(uint *)(param_1 + 0x130) = param_9;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x134) = param_11;
  uVar6 = call_ztell64(param_1,*(undefined8 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x120) = 0x20;
  *(ulong *)(param_1 + 0x100) = uVar6;
  uVar14 = (ulong)(uVar16 + 0x2e + param_7 + local_b0);
  *(ulong *)(param_1 + 0x118) = uVar14;
  puVar7 = (undefined4 *)malloc(uVar14 + 0x20);
  uVar14 = 0x2014b50;
  uVar17 = (ulong)param_7;
  *(undefined4 **)(param_1 + 0x108) = puVar7;
  *(ulong *)(param_1 + 0x110) = uVar17;
  puVar8 = puVar7;
  do {
    *(char *)puVar8 = (char)uVar14;
    puVar8 = (undefined4 *)((long)puVar8 + 1);
    uVar14 = uVar14 >> 8;
  } while (puVar8 != puVar7 + 1);
  if (uVar14 != 0) {
    *puVar7 = 0xffffffff;
  }
  *(undefined1 *)(puVar7 + 1) = (undefined1)param_17;
  if (param_17._1_7_ >> 8 == 0) {
    *(char *)((long)puVar7 + 5) = (char)((ulong)param_17 >> 8);
  }
  else {
    *(undefined2 *)(puVar7 + 1) = 0xffff;
  }
  uVar14 = *(ulong *)(param_1 + 0x128);
  *(undefined2 *)((long)puVar7 + 6) = _LC8;
  *(char *)(puVar7 + 2) = (char)uVar14;
  if (uVar14 >> 0x10 == 0) {
    *(char *)((long)puVar7 + 9) = (char)(uVar14 >> 8);
  }
  else {
    *(undefined2 *)(puVar7 + 2) = 0xffff;
  }
  iVar4 = *(int *)(param_1 + 0x130);
  *(char *)((long)puVar7 + 10) = (char)iVar4;
  if ((ulong)(long)iVar4 >> 0x10 == 0) {
    *(char *)((long)puVar7 + 0xb) = (char)((uint)iVar4 >> 8);
  }
  else {
    *(undefined2 *)((long)puVar7 + 10) = 0xffff;
  }
  if (*(int *)(param_1 + 0x1013c) == 0) {
    puVar7[3] = *(undefined4 *)(param_1 + 0x10138);
  }
  else {
    puVar7[3] = 0xffffffff;
  }
  *(undefined8 *)(puVar7 + 4) = 0;
  puVar7[6] = 0;
  *(undefined1 *)(puVar7 + 7) = local_7a;
  if (local_88 == 0) {
    *(undefined1 *)((long)puVar7 + 0x1d) = local_60;
  }
  else {
    *(undefined2 *)(puVar7 + 7) = 0xffff;
  }
  *(uint *)((long)puVar7 + 0x1e) =
       ((uint)CONCAT11(local_90,local_79) << 8 | param_7 >> 8 & 0xff) << 8 | param_7 & 0xff;
  if (local_98 != 0) {
    *(undefined2 *)(puVar7 + 8) = 0xffff;
  }
  *(undefined2 *)((long)puVar7 + 0x22) = 0;
  if (param_3 == (int *)0x0) {
    puVar7[9] = 0;
    *(undefined2 *)(puVar7 + 10) = 0;
  }
  else {
    uVar14 = *(ulong *)(param_3 + 8);
    *(char *)(puVar7 + 9) = (char)uVar14;
    if (uVar14 >> 0x10 == 0) {
      iVar1 = param_3[0xb];
      *(char *)((long)puVar7 + 0x25) = (char)(uVar14 >> 8);
      iVar4 = param_3[10];
    }
    else {
      iVar1 = param_3[0xb];
      iVar4 = param_3[10];
      *(undefined2 *)(puVar7 + 9) = 0xffff;
    }
    if (iVar1 == 0) {
      *(int *)((long)puVar7 + 0x26) = iVar4;
    }
    else {
      *(undefined4 *)((long)puVar7 + 0x26) = 0xffffffff;
    }
  }
  if ((uVar6 < 0xffffffff) && (uVar6 = uVar6 - *(long *)(param_1 + 0x10198), uVar6 >> 0x20 == 0)) {
    *(int *)((long)puVar7 + 0x2a) = (int)uVar6;
  }
  else {
    *(undefined4 *)((long)puVar7 + 0x2a) = 0xffffffff;
  }
  lVar9 = 0x2e;
  if (uVar16 != 0) {
    do {
      *(char *)(*(long *)(param_1 + 0x108) + lVar9) = param_2[lVar9 + -0x2e];
      lVar9 = lVar9 + 1;
    } while (lVar9 != (ulong)uVar16 + 0x2e);
  }
  lVar9 = uVar11 + 0x2e;
  if (param_7 != 0) {
    do {
      *(undefined1 *)(*(long *)(param_1 + 0x108) + lVar9) =
           *(undefined1 *)((param_6 - uVar11) + -0x2e + lVar9);
      lVar9 = lVar9 + 1;
    } while (uVar17 + 0x2e + uVar11 != lVar9);
  }
  if (local_b0 != 0) {
    lVar9 = uVar17 + 0x2e + uVar11;
    lVar10 = lVar9;
    do {
      *(char *)(*(long *)(param_1 + 0x108) + lVar10) = param_8[lVar10 - lVar9];
      lVar10 = lVar10 + 1;
    } while (lVar10 != (ulong)local_b0 + lVar9);
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    local_80 = -0x68;
    goto LAB_001023ac;
  }
  *(undefined8 *)(param_1 + 0x10160) = 0;
  *(undefined4 *)(param_1 + 0x1014c) = param_19;
  *(undefined1 (*) [16])(param_1 + 0x10150) = (undefined1  [16])0x0;
  sVar5 = strlen(param_2);
  local_4c = CONCAT44(local_4c._4_4_,0x4034b50);
  lVar9 = (**(code **)(param_1 + 0x10))
                    (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,4);
  if (lVar9 == 4) {
    if (*(int *)(param_1 + 0x1014c) == 0) {
      local_4c = CONCAT62(local_4c._2_6_,_LC8);
    }
    else {
      local_4c = CONCAT62(local_4c._2_6_,0x2d);
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,2);
    if (lVar9 != 2) goto LAB_001024a7;
    if (*(ulong *)(param_1 + 0x128) >> 0x10 == 0) {
      local_4c._0_2_ = (undefined2)*(ulong *)(param_1 + 0x128);
    }
    else {
      local_4c._0_2_ = 0xffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,2);
    if (lVar9 != 2) goto LAB_001024a7;
    if ((ulong)(long)*(int *)(param_1 + 0x130) >> 0x10 == 0) {
      local_4c._0_2_ = (undefined2)*(int *)(param_1 + 0x130);
    }
    else {
      local_4c._0_2_ = 0xffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,2);
    if (lVar9 != 2) goto LAB_001024a7;
    if (*(int *)(param_1 + 0x1013c) == 0) {
      local_4c = CONCAT44(local_4c._4_4_,*(undefined4 *)(param_1 + 0x10138));
    }
    else {
      local_4c = CONCAT44(local_4c._4_4_,0xffffffff);
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,4);
    if (lVar9 != 4) goto LAB_001024a7;
    local_4c = local_4c & 0xffffffff00000000;
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,4);
    if (lVar9 != 4) goto LAB_001024a7;
    if (*(int *)(param_1 + 0x1014c) == 0) {
      local_4c = (ulong)local_4c._4_4_ << 0x20;
    }
    else {
      local_4c = CONCAT44(local_4c._4_4_,0xffffffff);
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,4);
    if (lVar9 != 4) goto LAB_001024a7;
    if (*(int *)(param_1 + 0x1014c) == 0) {
      local_4c = (ulong)local_4c._4_4_ << 0x20;
    }
    else {
      local_4c = CONCAT44(local_4c._4_4_,0xffffffff);
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,4);
    if (lVar9 != 4) goto LAB_001024a7;
    uVar11 = sVar5 & 0xffffffff;
    if (uVar11 >> 0x10 == 0) {
      local_4c._0_2_ = (undefined2)uVar11;
    }
    else {
      local_4c._0_2_ = 0xffff;
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,2);
    if (lVar9 != 2) goto LAB_001024a7;
    if (*(int *)(param_1 + 0x1014c) == 0) {
      local_a4 = (undefined2)param_5;
      local_4c = CONCAT62(local_4c._2_6_,local_a4);
    }
    else if ((param_5 + 0x14 & 0xffff0000) == 0) {
      local_4c._0_2_ = (undefined2)(param_5 + 0x14);
    }
    else {
      local_4c = CONCAT62(local_4c._2_6_,0xffff);
    }
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,2);
    if (((lVar9 != 2) ||
        (((int)sVar5 != 0 &&
         (uVar6 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),param_2
                             ,uVar11), uVar11 != uVar6)))) ||
       ((param_5 != 0 &&
        (uVar11 = (**(code **)(param_1 + 0x10))
                            (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),param_4
                             ,(ulong)param_5), param_5 != uVar11)))) goto LAB_001024a7;
    if (*(int *)(param_1 + 0x1014c) != 0) {
      uVar12 = call_ztell64(param_1,*(undefined8 *)(param_1 + 0x68));
      local_4c._0_2_ = 1;
      *(undefined8 *)(param_1 + 0x10150) = uVar12;
      (**(code **)(param_1 + 0x10))
                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,2);
      local_4c = CONCAT62(local_4c._2_6_,0x10);
      (**(code **)(param_1 + 0x10))
                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,2);
      local_4c = 0;
      (**(code **)(param_1 + 0x10))
                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,8);
      local_4c = 0;
      lVar9 = (**(code **)(param_1 + 0x10))
                        (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,8
                        );
      if (lVar9 != 8) goto LAB_001024a7;
    }
    *(long *)(param_1 + 0xa0) = param_1 + 0x138;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0x10000;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if ((*(long *)(param_1 + 0x130) == 8) && (*(int *)(param_1 + 0x130) == 8)) {
      *(undefined8 *)(param_1 + 0xd8) = 0;
      *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x48);
      iVar4 = -param_12;
      if (param_12 < 1) {
        iVar4 = param_12;
      }
      local_80 = deflateInit2_(param_1 + 0x88,param_10,8,iVar4,param_13,param_14,&_LC11,0x70);
      if (local_80 != 0) {
        *(undefined4 *)(param_1 + 0x10188) = 0;
        goto LAB_001023ac;
      }
      *(undefined4 *)(param_1 + 0xf8) = 8;
      *(undefined4 *)(param_1 + 0x10188) = 0;
      if (param_15 != (char *)0x0) goto LAB_00102678;
LAB_001023a2:
      *(undefined4 *)(param_1 + 0x80) = 1;
      local_80 = 0;
      goto LAB_001023ac;
    }
    *(undefined4 *)(param_1 + 0x10188) = 0;
    if (param_15 == (char *)0x0) goto LAB_001023a2;
LAB_00102678:
    *(undefined4 *)(param_1 + 0x10148) = 1;
    lVar9 = param_1 + 0x10168;
    uVar12 = get_crc_table();
    *(undefined8 *)(param_1 + 0x10180) = uVar12;
    calls_0 = calls_0 + 1;
    if (calls_0 == 1) {
      tVar13 = time((time_t *)0x0);
      srand((uint)tVar13 ^ 0xbb40e64e);
    }
    uVar2 = _UNK_00103578;
    uVar19 = __LC12;
    *(undefined8 *)(param_1 + 0x10178) = 0x34567890;
    *(undefined8 *)(param_1 + 0x10168) = uVar19;
    *(undefined8 *)(param_1 + 0x10170) = uVar2;
    cVar3 = *param_15;
    pcVar18 = param_15;
    while (cVar3 != '\0') {
      pcVar18 = pcVar18 + 1;
      update_keys_isra_0(lVar9,uVar12,(int)cVar3);
      cVar3 = *pcVar18;
    }
    pbVar22 = local_56;
    pbVar23 = pbVar22;
    do {
      iVar4 = rand();
      pbVar24 = pbVar23 + 1;
      uVar16 = (uint)*(ushort *)(param_1 + 0x10178);
      bVar15 = (byte)(iVar4 >> 7);
      update_keys_isra_0(lVar9,uVar12,iVar4 >> 7 & 0xff);
      uVar2 = _UNK_00103578;
      uVar19 = __LC12;
      *pbVar23 = bVar15 ^ (byte)(((uVar16 | 2) ^ 1) * (uVar16 | 2) >> 8);
      pbVar23 = pbVar24;
    } while ((byte *)&local_4c != pbVar24);
    *(undefined8 *)(param_1 + 0x10178) = 0x34567890;
    *(undefined8 *)(param_1 + 0x10168) = uVar19;
    *(undefined8 *)(param_1 + 0x10170) = uVar2;
    cVar3 = *param_15;
    if (cVar3 == '\0') {
      uVar19 = 0x34567890;
    }
    else {
      do {
        param_15 = param_15 + 1;
        update_keys_isra_0(lVar9,uVar12,(int)cVar3);
        cVar3 = *param_15;
      } while (cVar3 != '\0');
      uVar19 = *(undefined8 *)(param_1 + 0x10178);
    }
    lVar10 = 0;
    while( true ) {
      bVar15 = pbVar22[lVar10];
      uVar16 = (uint)uVar19 & 0xffff | 2;
      update_keys_isra_0(lVar9,uVar12);
      *(byte *)((long)&local_4c + lVar10) = bVar15 ^ (byte)((uVar16 ^ 1) * uVar16 >> 8);
      lVar10 = lVar10 + 1;
      if (lVar10 == 10) break;
      uVar19 = *(undefined8 *)(param_1 + 0x10178);
    }
    bVar15 = (byte)((uint)param_16 >> 0x10);
    uVar21 = *(ushort *)(param_1 + 0x10178) | 2;
    update_keys_isra_0(lVar9);
    uVar16 = *(ushort *)(param_1 + 0x10178) | 2;
    bVar20 = (byte)((uint)param_16 >> 0x18);
    local_42 = bVar15 ^ (byte)((uVar21 ^ 1) * uVar21 >> 8);
    update_keys_isra_0(lVar9);
    *(undefined4 *)(param_1 + 0x10188) = 0xc;
    local_41 = bVar20 ^ (byte)((uVar16 ^ 1) * uVar16 >> 8);
    lVar9 = (**(code **)(param_1 + 0x10))
                      (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x68),&local_4c,0xc
                      );
    if (lVar9 == 0xc) goto LAB_001023a2;
  }
  else {
LAB_001024a7:
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0x10000;
    *(long *)(param_1 + 0xa0) = param_1 + 0x138;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0x10188) = 0;
  }
  local_80 = -1;
LAB_001023ac:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_80;
}



void zipOpenNewFileInZip4(void)

{
  zipOpenNewFileInZip4_64();
  return;
}



void zipOpenNewFileInZip3(void)

{
  zipOpenNewFileInZip4_64();
  return;
}



void zipOpenNewFileInZip3_64(void)

{
  zipOpenNewFileInZip4_64();
  return;
}



void zipOpenNewFileInZip2(void)

{
  zipOpenNewFileInZip4_64();
  return;
}



void zipOpenNewFileInZip2_64(void)

{
  zipOpenNewFileInZip4_64();
  return;
}



void zipOpenNewFileInZip64(void)

{
  zipOpenNewFileInZip4_64();
  return;
}



void zipOpenNewFileInZip(void)

{
  zipOpenNewFileInZip4_64();
  return;
}



void zipCloseFileInZip(undefined8 param_1)

{
  zipCloseFileInZipRaw64(param_1,0,0);
  return;
}



int zipClose(void *param_1,char *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 *__ptr;
  long in_FS_OFFSET;
  bool bVar17;
  ulong local_48;
  ulong local_40 [2];
  
  local_40[0] = *(ulong *)(in_FS_OFFSET + 0x28);
  if (param_1 == (void *)0x0) {
    iVar12 = -0x66;
    goto LAB_00102d77;
  }
  if (*(int *)((long)param_1 + 0x80) == 1) {
    iVar12 = zipCloseFileInZipRaw64(param_1,0,0);
    if (param_2 == (char *)0x0) {
      param_2 = *(char **)((long)param_1 + 0x101a8);
    }
    lVar5 = call_ztell64(param_1,*(undefined8 *)((long)param_1 + 0x68));
    if (iVar12 == 0) goto LAB_00102cb6;
    __ptr = *(undefined8 **)((long)param_1 + 0x70);
    uVar13 = 0;
LAB_00102d1c:
    while (__ptr != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*__ptr;
      free(__ptr);
      __ptr = puVar2;
    }
  }
  else {
    if (param_2 == (char *)0x0) {
      param_2 = *(char **)((long)param_1 + 0x101a8);
    }
    lVar5 = call_ztell64(param_1,*(undefined8 *)((long)param_1 + 0x68));
LAB_00102cb6:
    plVar16 = *(long **)((long)param_1 + 0x70);
    uVar13 = 0;
    iVar12 = 0;
    if (plVar16 != (long *)0x0) {
      do {
        lVar9 = plVar16[2];
        if ((iVar12 == 0) && (lVar9 != 0)) {
          lVar6 = (**(code **)((long)param_1 + 0x10))
                            (*(undefined8 *)((long)param_1 + 0x38),
                             *(undefined8 *)((long)param_1 + 0x68),plVar16 + 4);
          lVar9 = plVar16[2];
          iVar12 = -(uint)(lVar6 != lVar9);
        }
        plVar16 = (long *)*plVar16;
        uVar13 = uVar13 + lVar9;
      } while (plVar16 != (long *)0x0);
      __ptr = *(undefined8 **)((long)param_1 + 0x70);
      goto LAB_00102d1c;
    }
  }
  *(undefined1 (*) [16])((long)param_1 + 0x70) = (undefined1  [16])0x0;
  if (((ulong)(lVar5 - *(long *)((long)param_1 + 0x10198)) < 0xffffffff) &&
     (*(ulong *)((long)param_1 + 0x101a0) < 0xffff)) {
LAB_00102d4b:
    uVar14 = *(undefined8 *)((long)param_1 + 0x68);
    uVar15 = *(undefined8 *)((long)param_1 + 0x38);
    if (iVar12 != 0) goto LAB_00102d5b;
LAB_001030a0:
    local_48 = CONCAT44(local_48._4_4_,0x6054b50);
    lVar9 = (**(code **)((long)param_1 + 0x10))(uVar15,uVar14,&local_48,4);
    if (lVar9 != 4) {
LAB_0010339b:
      uVar14 = *(undefined8 *)((long)param_1 + 0x68);
      iVar12 = -1;
      goto LAB_00102d5b;
    }
    local_48 = local_48 & 0xffffffffffff0000;
    lVar9 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,2);
    if (lVar9 != 2) goto LAB_0010339b;
    local_48 = local_48 & 0xffffffffffff0000;
    lVar9 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,2);
    if (lVar9 != 2) goto LAB_0010339b;
    uVar1 = *(undefined2 *)((long)param_1 + 0x101a0);
    if (0xfffe < *(ulong *)((long)param_1 + 0x101a0)) {
      local_48._0_2_ = 0xffff;
      uVar1 = (undefined2)local_48;
    }
    local_48 = CONCAT62(local_48._2_6_,uVar1);
    lVar9 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,2);
    if (lVar9 != 2) goto LAB_0010339b;
    uVar1 = *(undefined2 *)((long)param_1 + 0x101a0);
    if (0xfffe < *(ulong *)((long)param_1 + 0x101a0)) {
      local_48._0_2_ = 0xffff;
      uVar1 = (undefined2)local_48;
    }
    local_48 = CONCAT62(local_48._2_6_,uVar1);
    lVar9 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,2);
    if (lVar9 != 2) goto LAB_0010339b;
    if (uVar13 >> 0x20 == 0) {
      local_48._0_4_ = (undefined4)uVar13;
    }
    else {
      local_48._0_4_ = 0xffffffff;
    }
    lVar9 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,4);
    if (lVar9 != 4) goto LAB_0010339b;
    uVar13 = lVar5 - *(long *)((long)param_1 + 0x10198);
    if (uVar13 < 0xffffffff) {
      local_48 = CONCAT44(local_48._4_4_,(int)uVar13);
    }
    else {
      local_48 = CONCAT44(local_48._4_4_,0xffffffff);
    }
    lVar5 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,4);
    if (lVar5 != 4) goto LAB_0010339b;
    pcVar3 = *(code **)((long)param_1 + 0x10);
    uVar14 = *(undefined8 *)((long)param_1 + 0x68);
    uVar15 = *(undefined8 *)((long)param_1 + 0x38);
    if (param_2 == (char *)0x0) {
      local_48 = local_48 & 0xffffffffffff0000;
      lVar5 = (*pcVar3)(uVar15,uVar14,&local_48,2);
      if (lVar5 != 2) goto LAB_0010339b;
LAB_00103353:
      bVar17 = true;
    }
    else {
      sVar10 = strlen(param_2);
      local_48 = CONCAT62(local_48._2_6_,(short)sVar10);
      uVar13 = sVar10 & 0xffffffff;
      if ((sVar10 & 0xffff0000) == 0) {
        lVar5 = (*pcVar3)(uVar15,uVar14,&local_48,2);
        if (lVar5 != 2) goto LAB_0010339b;
        if ((int)sVar10 == 0) goto LAB_00103353;
      }
      else {
        local_48 = CONCAT62(local_48._2_6_,0xffff);
        lVar5 = (*pcVar3)(uVar15,uVar14,&local_48,2);
        if (lVar5 != 2) goto LAB_0010339b;
      }
      uVar11 = (**(code **)((long)param_1 + 0x10))
                         (*(undefined8 *)((long)param_1 + 0x38),
                          *(undefined8 *)((long)param_1 + 0x68),param_2,uVar13);
      iVar12 = -(uint)(uVar13 != uVar11);
      bVar17 = uVar13 == uVar11;
    }
    iVar4 = (**(code **)((long)param_1 + 0x28))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68));
    if ((iVar4 != 0) && (bVar17)) {
      iVar12 = -1;
    }
  }
  else {
    lVar9 = call_ztell64(param_1,*(undefined8 *)((long)param_1 + 0x68));
    local_48 = CONCAT44(local_48._4_4_,0x6064b50);
    lVar6 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,4);
    if (lVar6 == 4) {
      local_48 = 0x2c;
      lVar6 = (**(code **)((long)param_1 + 0x10))
                        (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68)
                         ,&local_48,8);
      if (lVar6 == 8) {
        local_48 = CONCAT62(local_48._2_6_,_LC4);
        lVar6 = (**(code **)((long)param_1 + 0x10))
                          (*(undefined8 *)((long)param_1 + 0x38),
                           *(undefined8 *)((long)param_1 + 0x68),&local_48,2);
        if (lVar6 == 2) {
          local_48 = CONCAT62(local_48._2_6_,_LC4);
          lVar6 = (**(code **)((long)param_1 + 0x10))
                            (*(undefined8 *)((long)param_1 + 0x38),
                             *(undefined8 *)((long)param_1 + 0x68),&local_48,2);
          if (lVar6 == 2) {
            local_48 = local_48 & 0xffffffff00000000;
            lVar6 = (**(code **)((long)param_1 + 0x10))
                              (*(undefined8 *)((long)param_1 + 0x38),
                               *(undefined8 *)((long)param_1 + 0x68),&local_48,4);
            if (lVar6 == 4) {
              local_48 = local_48 & 0xffffffff00000000;
              lVar6 = (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),
                                 *(undefined8 *)((long)param_1 + 0x68),&local_48,4);
              if (lVar6 == 4) {
                uVar11 = *(ulong *)((long)param_1 + 0x101a0);
                uVar14 = *(undefined8 *)((long)param_1 + 0x68);
                puVar7 = &local_48;
                do {
                  *(char *)puVar7 = (char)uVar11;
                  puVar7 = (ulong *)((long)puVar7 + 1);
                  uVar11 = uVar11 >> 8;
                } while (puVar7 != local_40);
                if (uVar11 != 0) {
                  local_48 = 0xffffffffffffffff;
                }
                lVar6 = (**(code **)((long)param_1 + 0x10))
                                  (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_48,8);
                if (lVar6 == 8) {
                  uVar11 = *(ulong *)((long)param_1 + 0x101a0);
                  uVar14 = *(undefined8 *)((long)param_1 + 0x68);
                  puVar7 = &local_48;
                  do {
                    *(char *)puVar7 = (char)uVar11;
                    puVar7 = (ulong *)((long)puVar7 + 1);
                    uVar11 = uVar11 >> 8;
                  } while (local_40 != puVar7);
                  if (uVar11 != 0) {
                    local_48 = 0xffffffffffffffff;
                  }
                  lVar6 = (**(code **)((long)param_1 + 0x10))
                                    (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_48,8);
                  if (lVar6 == 8) {
                    uVar14 = *(undefined8 *)((long)param_1 + 0x68);
                    uVar11 = uVar13;
                    puVar7 = &local_48;
                    do {
                      *(char *)puVar7 = (char)uVar11;
                      puVar7 = (ulong *)((long)puVar7 + 1);
                      uVar11 = uVar11 >> 8;
                    } while (local_40 != puVar7);
                    if (uVar11 != 0) {
                      local_48 = 0xffffffffffffffff;
                    }
                    lVar6 = (**(code **)((long)param_1 + 0x10))
                                      (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_48,8);
                    if (lVar6 == 8) {
                      uVar14 = *(undefined8 *)((long)param_1 + 0x68);
                      uVar11 = lVar5 - *(long *)((long)param_1 + 0x10198);
                      puVar7 = &local_48;
                      do {
                        *(char *)puVar7 = (char)uVar11;
                        puVar7 = (ulong *)((long)puVar7 + 1);
                        uVar11 = uVar11 >> 8;
                      } while (puVar7 != local_40);
                      if (uVar11 != 0) {
                        local_48 = 0xffffffffffffffff;
                      }
                      (**(code **)((long)param_1 + 0x10))
                                (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_48,8);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar6 = *(long *)((long)param_1 + 0x10198);
    local_48 = CONCAT44(local_48._4_4_,0x7064b50);
    lVar8 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,4);
    if (lVar8 != 4) goto LAB_00102d4b;
    local_48 = local_48 & 0xffffffff00000000;
    lVar8 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),
                       &local_48,4);
    if (lVar8 != 4) goto LAB_00102d4b;
    uVar14 = *(undefined8 *)((long)param_1 + 0x68);
    uVar11 = lVar9 - lVar6;
    puVar7 = &local_48;
    do {
      *(char *)puVar7 = (char)uVar11;
      puVar7 = (ulong *)((long)puVar7 + 1);
      uVar11 = uVar11 >> 8;
    } while (local_40 != puVar7);
    if (uVar11 != 0) {
      local_48 = 0xffffffffffffffff;
    }
    lVar9 = (**(code **)((long)param_1 + 0x10))
                      (*(undefined8 *)((long)param_1 + 0x38),uVar14,&local_48,8);
    if (lVar9 != 8) goto LAB_00102d4b;
    local_48 = CONCAT44(local_48._4_4_,1);
    (**(code **)((long)param_1 + 0x10))
              (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x68),&local_48
               ,4);
    uVar14 = *(undefined8 *)((long)param_1 + 0x68);
    uVar15 = *(undefined8 *)((long)param_1 + 0x38);
    if (iVar12 == 0) goto LAB_001030a0;
LAB_00102d5b:
    (**(code **)((long)param_1 + 0x28))(*(undefined8 *)((long)param_1 + 0x38),uVar14);
  }
  free(*(void **)((long)param_1 + 0x101a8));
  free(param_1);
LAB_00102d77:
  if (local_40[0] != *(ulong *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}



undefined8 zipRemoveExtraInfoBlock(short *param_1,int *param_2,short param_3)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  void *__src;
  size_t __n;
  undefined8 uVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  
  if (((param_1 == (short *)0x0) || (param_2 == (int *)0x0)) || (iVar2 = *param_2, iVar2 < 4)) {
    return 0xffffff9a;
  }
  __src = malloc((long)iVar2);
  iVar3 = *param_2;
  __n = (size_t)iVar3;
  if (param_1 < (short *)((long)param_1 + __n)) {
    iVar7 = 0;
    psVar5 = param_1;
    do {
      psVar1 = (short *)((long)psVar5 + (long)psVar5[1] + 4);
      if (*psVar5 != param_3) {
        iVar6 = psVar5[1] + 4;
        iVar7 = iVar7 + iVar6;
        __memcpy_chk(__src,psVar5,(long)iVar6,(long)iVar2);
      }
      psVar5 = psVar1;
    } while (psVar1 < (short *)((long)param_1 + __n));
    if (iVar7 < iVar3) {
      memset(param_1,0,__n);
      if (0 < iVar7) {
        uVar4 = 0;
        memcpy(param_1,__src,(long)iVar7);
        *param_2 = iVar7;
        goto LAB_00103466;
      }
LAB_00103499:
      uVar4 = 0;
      *param_2 = iVar7;
      goto LAB_00103466;
    }
  }
  else if (0 < iVar3) {
    iVar7 = 0;
    memset(param_1,0,__n);
    goto LAB_00103499;
  }
  uVar4 = 0xffffffff;
LAB_00103466:
  free(__src);
  return uVar4;
}


