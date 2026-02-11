
long wslay_recv(void *param_1)

{
  void *__src;
  long lVar1;
  
  __src = *(void **)((long)param_1 + 0x1000);
  lVar1 = *(long *)((long)param_1 + 0x1008);
  if (__src != param_1) {
    memmove(param_1,__src,lVar1 - (long)__src);
    lVar1 = (long)param_1 + (lVar1 - (long)__src);
    *(void **)((long)param_1 + 0x1000) = param_1;
    *(long *)((long)param_1 + 0x1008) = lVar1;
  }
  lVar1 = (**(code **)((long)param_1 + 0x1088))
                    (lVar1,(long)param_1 + (0x1000 - lVar1),0,
                     *(undefined8 *)((long)param_1 + 0x1098));
  if (lVar1 < 1) {
    lVar1 = -100;
  }
  else {
    *(long *)((long)param_1 + 0x1008) = *(long *)((long)param_1 + 0x1008) + lVar1;
  }
  return lVar1;
}



undefined8 wslay_frame_context_init(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = calloc(0x10a0,1);
  *param_1 = pvVar3;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar4 = param_2[2];
    *(undefined4 *)((long)pvVar3 + 0x1030) = 4;
    *(undefined8 *)((long)pvVar3 + 0x1098) = param_3;
    *(undefined8 *)((long)pvVar3 + 0x1038) = 2;
    *(undefined8 *)((long)pvVar3 + 0x1090) = uVar4;
    *(void **)((long)pvVar3 + 0x1000) = pvVar3;
    *(void **)((long)pvVar3 + 0x1008) = pvVar3;
    *(undefined8 *)((long)pvVar3 + 0x1080) = uVar1;
    *(undefined8 *)((long)pvVar3 + 0x1088) = uVar2;
    uVar4 = 0;
  }
  return uVar4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wslay_frame_context_free(void *__ptr)

{
  free(__ptr);
  return;
}



ulong wslay_frame_send(long param_1,char *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  byte abStack_1048 [4104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = *(ulong *)(param_2 + 0x20);
  if (*(ulong *)(param_2 + 8) < uVar10) {
LAB_001004e8:
    uVar3 = 0xfffffffffffffed4;
    goto LAB_001001e2;
  }
  iVar2 = *(int *)(param_1 + 0x1078);
  if (iVar2 == 0) {
    lVar8 = param_1 + 0x1040;
    *(undefined8 *)(param_1 + 0x1040) = 0;
    *(undefined8 *)(param_1 + 0x1046) = 0;
    bVar7 = *param_2 << 7 | *(byte *)(param_1 + 0x1040);
    *(byte *)(param_1 + 0x1040) = bVar7;
    bVar7 = (byte)(((byte)param_2[1] & 7) << 4) | bVar7;
    *(byte *)(param_1 + 0x1040) = bVar7;
    *(byte *)(param_1 + 0x1040) = bVar7 | param_2[2] & 0xfU;
    bVar7 = param_2[0x10] << 7 | *(byte *)(param_1 + 0x1041);
    *(byte *)(param_1 + 0x1041) = bVar7;
    uVar10 = *(ulong *)(param_2 + 8);
    if ((param_2[2] & 8U) == 0) {
      if (uVar10 < 0x7e) goto LAB_00100483;
      if (uVar10 < 0x10000) {
        puVar12 = (undefined4 *)(param_1 + 0x1044);
        *(byte *)(param_1 + 0x1041) = bVar7 | 0x7e;
        *(ushort *)(param_1 + 0x1042) = (ushort)uVar10 << 8 | (ushort)uVar10 >> 8;
      }
      else {
        if ((long)uVar10 < 0) goto LAB_001004e8;
        uVar6 = wslay_byteswap64();
        puVar12 = (undefined4 *)(param_1 + 0x104a);
        *(byte *)(param_1 + 0x1041) = *(byte *)(param_1 + 0x1041) | 0x7f;
        *(undefined8 *)(param_1 + 0x1042) = uVar6;
      }
    }
    else {
      if (0x7d < uVar10) goto LAB_001004e8;
LAB_00100483:
      puVar12 = (undefined4 *)(param_1 + 0x1042);
      *(byte *)(param_1 + 0x1041) = bVar7 | (byte)uVar10;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x1098);
    puVar13 = puVar12;
    if (param_2[0x10] == '\0') {
LAB_001003eb:
      uVar1 = *(undefined8 *)(param_2 + 8);
      *(long *)(param_1 + 0x1050) = lVar8;
      *(undefined4 *)(param_1 + 0x1078) = 2;
      uVar10 = *(ulong *)(param_2 + 0x20);
      *(undefined4 **)(param_1 + 0x1058) = puVar13;
      *(undefined8 *)(param_1 + 0x1060) = uVar1;
      *(undefined8 *)(param_1 + 0x1068) = 0;
      goto LAB_00100423;
    }
    iVar2 = (**(code **)(param_1 + 0x1090))(param_1 + 0x1071,4,uVar6);
    if (iVar2 == 0) {
      puVar13 = puVar12 + 1;
      *(undefined1 *)(param_1 + 0x1070) = 1;
      *puVar12 = *(undefined4 *)(param_1 + 0x1071);
      uVar6 = *(undefined8 *)(param_1 + 0x1098);
      goto LAB_001003eb;
    }
LAB_0010049a:
    uVar3 = 0xfffffffffffffed3;
    goto LAB_001001e2;
  }
  if (iVar2 == 2) {
    puVar13 = *(undefined4 **)(param_1 + 0x1058);
    lVar8 = *(long *)(param_1 + 0x1050);
    uVar6 = *(undefined8 *)(param_1 + 0x1098);
LAB_00100423:
    lVar4 = (**(code **)(param_1 + 0x1080))(lVar8,(long)puVar13 - lVar8,uVar10 != 0,uVar6);
    if (0 < lVar4) {
      if ((long)puVar13 - lVar8 < lVar4) goto LAB_0010049a;
      lVar4 = lVar4 + *(long *)(param_1 + 0x1050);
      *(long *)(param_1 + 0x1050) = lVar4;
      if (lVar4 == *(long *)(param_1 + 0x1058)) {
        *(undefined4 *)(param_1 + 0x1078) = 3;
        uVar10 = *(ulong *)(param_2 + 0x20);
        goto LAB_00100175;
      }
    }
LAB_0010050e:
    uVar3 = 0xffffffffffffff9b;
    goto LAB_001001e2;
  }
  if (iVar2 != 3) goto LAB_001004e8;
LAB_00100175:
  if (uVar10 == 0) {
LAB_001002d8:
    lVar8 = *(long *)(param_1 + 0x1068);
    uVar3 = 0;
  }
  else {
    uVar11 = *(ulong *)(param_2 + 0x18);
    if (*(char *)(param_1 + 0x1070) == '\0') {
      uVar3 = (**(code **)(param_1 + 0x1080))(uVar11,uVar10,0,*(undefined8 *)(param_1 + 0x1098));
      if ((long)uVar3 < 1) goto LAB_0010050e;
      if (*(ulong *)(param_2 + 0x20) < uVar3) goto LAB_0010049a;
      lVar8 = *(long *)(param_1 + 0x1068) + uVar3;
      *(long *)(param_1 + 0x1068) = lVar8;
    }
    else {
      uVar10 = uVar11 + uVar10;
      uVar9 = 0;
      if (uVar10 <= uVar11) goto LAB_001002d8;
      do {
        uVar3 = uVar10 - uVar11;
        if (0x1000 < uVar3) {
          uVar3 = 0x1000;
        }
        if (uVar11 != uVar10) {
          lVar8 = *(long *)(param_1 + 0x1068);
          lVar4 = lVar8;
          do {
            abStack_1048[lVar4 - lVar8] =
                 *(byte *)((uVar11 - lVar8) + lVar4) ^
                 *(byte *)(param_1 + 0x1071 + (ulong)((uint)lVar4 & 3));
            lVar4 = lVar4 + 1;
          } while (lVar4 != uVar3 + lVar8);
        }
        uVar5 = (**(code **)(param_1 + 0x1080))
                          (abStack_1048,uVar3,0,*(undefined8 *)(param_1 + 0x1098));
        if ((long)uVar5 < 1) {
          uVar3 = 0xffffffffffffff9b;
          if (uVar9 == 0) goto LAB_001001e2;
          lVar8 = *(long *)(param_1 + 0x1068);
          uVar3 = uVar9;
          break;
        }
        if (uVar3 < uVar5) goto LAB_0010049a;
        uVar11 = uVar11 + uVar5;
        uVar9 = uVar9 + uVar5;
        lVar8 = *(long *)(param_1 + 0x1068) + uVar5;
        *(long *)(param_1 + 0x1068) = lVar8;
        uVar3 = uVar9;
      } while (uVar11 < uVar10);
    }
  }
  if (*(long *)(param_1 + 0x1060) == lVar8) {
    *(undefined4 *)(param_1 + 0x1078) = 0;
  }
LAB_001001e2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



long wslay_frame_write(long param_1,char *param_2,byte *param_3,ulong param_4,size_t *param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte bVar6;
  uint uVar7;
  size_t sVar8;
  byte *__dest;
  byte *pbVar9;
  
  *param_5 = 0;
  uVar4 = *(ulong *)(param_2 + 0x20);
  uVar1 = *(ulong *)(param_2 + 8);
  if (uVar1 < uVar4) {
    return -300;
  }
  if (*(uint *)(param_1 + 0x1078) < 2) {
    uVar4 = 2;
    if ((0x7d < uVar1) && (uVar4 = 4, 0xffff < uVar1)) {
      uVar4 = ((long)uVar1 >> 0x3f & 0xfffffffffffffff8U) + 10;
    }
    if (param_2[0x10] != '\0') {
      uVar4 = uVar4 + 4;
    }
    if (param_4 < uVar4) {
      *(undefined4 *)(param_1 + 0x1078) = 1;
      return 0;
    }
    uVar7 = (uint)uVar4;
    if (uVar7 < 8) {
      if ((uVar4 & 4) == 0) {
        if ((uVar7 != 0) && (*param_3 = 0, (uVar4 & 2) != 0)) {
          (param_3 + ((uVar4 & 0xffffffff) - 2))[0] = 0;
          (param_3 + ((uVar4 & 0xffffffff) - 2))[1] = 0;
        }
      }
      else {
        param_3[0] = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        pbVar9 = param_3 + ((uVar4 & 0xffffffff) - 4);
        pbVar9[0] = 0;
        pbVar9[1] = 0;
        pbVar9[2] = 0;
        pbVar9[3] = 0;
      }
    }
    else {
      param_3[0] = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      pbVar9 = param_3 + ((uVar4 & 0xffffffff) - 8);
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9[4] = 0;
      pbVar9[5] = 0;
      pbVar9[6] = 0;
      pbVar9[7] = 0;
      uVar7 = ((int)param_3 - (int)((ulong)(param_3 + 8) & 0xfffffffffffffff8)) + uVar7 & 0xfffffff8
      ;
      if (7 < uVar7) {
        uVar3 = 0;
        do {
          uVar4 = (ulong)uVar3;
          uVar3 = uVar3 + 8;
          *(undefined8 *)(((ulong)(param_3 + 8) & 0xfffffffffffffff8) + uVar4) = 0;
        } while (uVar3 < uVar7);
      }
    }
    bVar6 = *param_2 << 7 | *param_3;
    *param_3 = bVar6;
    bVar6 = (byte)(((byte)param_2[1] & 7) << 4) | bVar6;
    *param_3 = bVar6;
    *param_3 = bVar6 | param_2[2] & 0xfU;
    bVar6 = param_2[0x10] << 7 | param_3[1];
    param_3[1] = bVar6;
    uVar4 = *(ulong *)(param_2 + 8);
    if ((param_2[2] & 8U) == 0) {
      if (uVar4 < 0x7e) goto LAB_001006e2;
      if (uVar4 < 0x10000) {
        pbVar9 = param_3 + 4;
        param_3[1] = bVar6 | 0x7e;
        *(ushort *)(param_3 + 2) = (ushort)uVar4 << 8 | (ushort)uVar4 >> 8;
      }
      else {
        if ((long)uVar4 < 0) {
          return -300;
        }
        uVar5 = wslay_byteswap64();
        pbVar9 = param_3 + 10;
        param_3[1] = param_3[1] | 0x7f;
        *(undefined8 *)(param_3 + 2) = uVar5;
      }
    }
    else {
      if (0x7d < uVar4) {
        return -300;
      }
LAB_001006e2:
      pbVar9 = param_3 + 2;
      param_3[1] = bVar6 | (byte)uVar4;
    }
    __dest = pbVar9;
    if (param_2[0x10] != '\0') {
      iVar2 = (**(code **)(param_1 + 0x1090))(param_1 + 0x1071,4,*(undefined8 *)(param_1 + 0x1098));
      if (iVar2 != 0) {
        return -0x12d;
      }
      *(undefined1 *)(param_1 + 0x1070) = 1;
      __dest = pbVar9 + 4;
      *(undefined4 *)pbVar9 = *(undefined4 *)(param_1 + 0x1071);
    }
    *(undefined4 *)(param_1 + 0x1078) = 3;
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x1068) = 0;
    *(undefined8 *)(param_1 + 0x1060) = uVar5;
    param_4 = param_4 - ((long)__dest - (long)param_3);
    uVar4 = *(ulong *)(param_2 + 0x20);
  }
  else {
    __dest = param_3;
    if (*(uint *)(param_1 + 0x1078) != 3) {
      return -300;
    }
  }
  if (uVar4 == 0) goto LAB_001005cf;
  if (uVar4 < param_4) {
    param_4 = uVar4;
  }
  if (*(char *)(param_1 + 0x1070) == '\0') {
    memcpy(__dest,*(void **)(param_2 + 0x18),param_4);
LAB_001005c2:
    __dest = __dest + param_4;
  }
  else if (param_4 != 0) {
    sVar8 = 0;
    do {
      __dest[sVar8] =
           *(byte *)(param_1 + 0x1071 +
                    (ulong)((int)*(undefined8 *)(param_1 + 0x1068) + (int)sVar8 & 3)) ^
           *(byte *)(*(long *)(param_2 + 0x18) + sVar8);
      sVar8 = sVar8 + 1;
    } while (param_4 != sVar8);
    goto LAB_001005c2;
  }
  *(long *)(param_1 + 0x1068) = *(long *)(param_1 + 0x1068) + param_4;
  *param_5 = param_4;
LAB_001005cf:
  if (*(long *)(param_1 + 0x1068) == *(long *)(param_1 + 0x1060)) {
    *(undefined4 *)(param_1 + 0x1078) = 0;
  }
  return (long)__dest - (long)param_3;
}



long wslay_frame_recv(long param_1,undefined2 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  byte bVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined4 *puVar14;
  char cVar15;
  ulong uVar16;
  
  iVar4 = *(int *)(param_1 + 0x1030);
  if (iVar4 == 4) {
    pbVar7 = *(byte **)(param_1 + 0x1008);
    pbVar12 = *(byte **)(param_1 + 0x1000);
    if ((ulong)((long)pbVar7 - (long)pbVar12) < *(ulong *)(param_1 + 0x1038)) {
      lVar11 = wslay_recv();
      if (lVar11 < 1) {
        return lVar11;
      }
      pbVar7 = *(byte **)(param_1 + 0x1008);
      pbVar12 = *(byte **)(param_1 + 0x1000);
      if ((ulong)((long)pbVar7 - (long)pbVar12) < *(ulong *)(param_1 + 0x1038)) {
        return -100;
      }
    }
    bVar1 = *pbVar12;
    *(byte *)(param_1 + 0x1012) = bVar1 >> 4 & 7;
    pbVar13 = pbVar12 + 2;
    *(byte *)(param_1 + 0x1011) = bVar1 & 0xf;
    *(byte **)(param_1 + 0x1000) = pbVar12 + 1;
    *(byte *)(param_1 + 0x1010) = bVar1 >> 7;
    bVar2 = pbVar12[1];
    *(byte *)(param_1 + 0x1028) = bVar2 >> 7;
    bVar3 = pbVar12[1];
    *(byte **)(param_1 + 0x1000) = pbVar13;
    bVar10 = (byte)(bVar3 & 0x7f);
    if ((bVar1 & 0xf) >> 3 == 0) {
      if (bVar10 == 0x7e) {
        uVar16 = 2;
      }
      else {
        uVar16 = 8;
        if (bVar10 != 0x7f) goto LAB_00100a58;
      }
      *(undefined4 *)(param_1 + 0x1030) = 6;
      *(ulong *)(param_1 + 0x1038) = uVar16;
      goto LAB_00100ab5;
    }
    if (0x7d < bVar10) {
      return -200;
    }
    if (-1 < (char)bVar1) {
      return -200;
    }
LAB_00100a58:
    *(undefined8 *)(param_1 + 0x1020) = 0;
    *(ulong *)(param_1 + 0x1018) = (ulong)(bVar3 & 0x7f);
    if (-1 < (char)bVar2) {
      *(undefined4 *)(param_1 + 0x1030) = 8;
      goto LAB_0010089f;
    }
    *(undefined4 *)(param_1 + 0x1030) = 7;
    *(undefined8 *)(param_1 + 0x1038) = 4;
LAB_00100a8b:
    puVar14 = *(undefined4 **)(param_1 + 0x1000);
    uVar16 = *(ulong *)(param_1 + 0x1038);
LAB_00100b7f:
    if ((ulong)((long)pbVar7 - (long)puVar14) < uVar16) {
      lVar11 = wslay_recv(param_1);
      if (lVar11 < 1) {
        return lVar11;
      }
      pbVar7 = *(byte **)(param_1 + 0x1008);
      puVar14 = *(undefined4 **)(param_1 + 0x1000);
      if ((ulong)((long)pbVar7 - (long)puVar14) < *(ulong *)(param_1 + 0x1038)) {
        return -100;
      }
    }
    uVar5 = *puVar14;
    pbVar12 = (byte *)(puVar14 + 1);
    *(undefined4 *)(param_1 + 0x1030) = 8;
    *(byte **)(param_1 + 0x1000) = pbVar12;
    *(undefined4 *)(param_1 + 0x1029) = uVar5;
  }
  else {
    if (iVar4 == 6) {
      pbVar13 = *(byte **)(param_1 + 0x1000);
      uVar16 = *(ulong *)(param_1 + 0x1038);
      pbVar7 = *(byte **)(param_1 + 0x1008);
LAB_00100ab5:
      if ((ulong)((long)pbVar7 - (long)pbVar13) < uVar16) {
        lVar11 = wslay_recv(param_1);
        if (lVar11 < 1) {
          return lVar11;
        }
        pbVar13 = *(byte **)(param_1 + 0x1000);
        uVar16 = *(ulong *)(param_1 + 0x1038);
        if ((ulong)(*(long *)(param_1 + 0x1008) - (long)pbVar13) < uVar16) {
          return -100;
        }
      }
      *(undefined1 (*) [16])(param_1 + 0x1018) = (undefined1  [16])0x0;
      memcpy((void *)((param_1 - uVar16) + 0x1020),pbVar13,uVar16);
      uVar16 = wslay_byteswap64(*(undefined8 *)(param_1 + 0x1018));
      *(ulong *)(param_1 + 0x1018) = uVar16;
      puVar14 = (undefined4 *)(*(long *)(param_1 + 0x1000) + *(long *)(param_1 + 0x1038));
      *(undefined4 **)(param_1 + 0x1000) = puVar14;
      if (*(long *)(param_1 + 0x1038) == 8) {
        if (0x7ffffffffffeffff < uVar16 - 0x10000) {
          return -200;
        }
      }
      else if (uVar16 < 0x7e) {
        return -200;
      }
      if (*(char *)(param_1 + 0x1028) != '\0') {
        *(undefined4 *)(param_1 + 0x1030) = 7;
        pbVar7 = *(byte **)(param_1 + 0x1008);
        uVar16 = 4;
        *(undefined8 *)(param_1 + 0x1038) = 4;
        goto LAB_00100b7f;
      }
      *(undefined4 *)(param_1 + 0x1030) = 8;
      pbVar7 = *(byte **)(param_1 + 0x1008);
    }
    else {
      if (iVar4 == 7) {
        pbVar7 = *(byte **)(param_1 + 0x1008);
        goto LAB_00100a8b;
      }
      if (iVar4 != 8) {
        return -300;
      }
      pbVar7 = *(byte **)(param_1 + 0x1008);
    }
LAB_0010089f:
    pbVar12 = *(byte **)(param_1 + 0x1000);
  }
  lVar11 = *(long *)(param_1 + 0x1020);
  uVar16 = *(long *)(param_1 + 0x1018) - lVar11;
  if (pbVar7 == pbVar12) {
    if (uVar16 != 0) {
      lVar11 = wslay_recv(param_1);
      if (lVar11 < 1) {
        return lVar11;
      }
      pbVar7 = *(byte **)(param_1 + 0x1008);
      pbVar12 = *(byte **)(param_1 + 0x1000);
      lVar11 = *(long *)(param_1 + 0x1020);
      goto LAB_001008c0;
    }
  }
  else {
LAB_001008c0:
    if ((ulong)((long)pbVar7 - (long)pbVar12) < uVar16) goto LAB_001008cf;
  }
  pbVar7 = pbVar12 + uVar16;
LAB_001008cf:
  cVar15 = *(char *)(param_1 + 0x1028);
  if (cVar15 == '\0') {
    *(byte **)(param_1 + 0x1000) = pbVar7;
    lVar8 = (long)pbVar7 - (long)pbVar12;
    lVar11 = lVar11 + lVar8;
    *(long *)(param_1 + 0x1020) = lVar11;
  }
  else {
    pbVar9 = *(byte **)(param_1 + 0x1000);
    pbVar13 = pbVar7;
    if (pbVar7 != pbVar9) {
      do {
        *pbVar9 = *pbVar9 ^ *(byte *)(param_1 + 0x1029 + (ulong)((uint)lVar11 & 3));
        pbVar13 = (byte *)(*(long *)(param_1 + 0x1000) + 1);
        *(byte **)(param_1 + 0x1000) = pbVar13;
        lVar11 = *(long *)(param_1 + 0x1020) + 1;
        *(long *)(param_1 + 0x1020) = lVar11;
        pbVar9 = pbVar13;
      } while (pbVar13 != pbVar7);
      cVar15 = *(char *)(param_1 + 0x1028);
    }
    lVar8 = (long)pbVar13 - (long)pbVar12;
  }
  *param_2 = CONCAT11(*(undefined1 *)(param_1 + 0x1012),*(undefined1 *)(param_1 + 0x1010));
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x1011);
  lVar6 = *(long *)(param_1 + 0x1018);
  *(char *)(param_2 + 8) = cVar15;
  *(long *)(param_2 + 4) = lVar6;
  *(byte **)(param_2 + 0xc) = pbVar12;
  *(long *)(param_2 + 0x10) = lVar8;
  if (lVar6 == lVar11) {
    *(undefined4 *)(param_1 + 0x1030) = 4;
    *(undefined8 *)(param_1 + 0x1038) = 2;
  }
  return lVar8;
}


