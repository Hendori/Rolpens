
/* lz4::decompress(void const*, unsigned long, void*, unsigned long) */

int lz4::decompress(void *param_1,ulong param_2,void *param_3,ulong param_4)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  byte bVar13;
  undefined8 *puVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  bool bVar18;
  
  if ((((param_4 <= param_2) || (param_2 < 0xd)) ||
      (puVar1 = (ushort *)((long)param_1 + param_2), (void *)((long)param_3 + param_4) <= param_3))
     || (puVar1 <= param_1)) {
    return -1;
  }
  puVar6 = (undefined8 *)param_3;
  do {
                    /* WARNING: Load size is inaccurate */
    puVar11 = (ushort *)((long)param_1 + 1);
    bVar13 = (byte)*param_1 >> 4;
    uVar7 = (uint)bVar13;
    uVar8 = (ulong)bVar13;
    if (bVar13 == 0xf) {
      if (puVar1 == puVar11) {
        uVar8 = 0xf;
        uVar7 = 0xf;
      }
      else {
        uVar7 = 0xf;
        do {
          uVar3 = *puVar11;
          puVar11 = (ushort *)((long)puVar11 + 1);
          uVar7 = uVar7 + (byte)uVar3;
          if (puVar1 == puVar11) break;
        } while ((byte)uVar3 == 0xff);
        uVar8 = (ulong)uVar7;
      }
    }
    puVar2 = (ushort *)((long)puVar11 + uVar8);
    if ((puVar1 + -1 < puVar2) || (puVar2 < puVar11)) {
LAB_00100083:
      if ((puVar11 <= (ushort *)((long)puVar1 - uVar8)) && (uVar8 <= param_4)) {
        if (uVar8 >> 3 != 0) {
          lVar16 = 0;
          do {
            *(undefined8 *)((long)puVar6 + lVar16) = *(undefined8 *)((long)puVar11 + lVar16);
            lVar16 = lVar16 + 8;
          } while (lVar16 != (uVar8 >> 3) * 8);
          puVar6 = (undefined8 *)((long)puVar6 + lVar16);
          puVar11 = (ushort *)((long)puVar11 + lVar16);
        }
        if ((uVar7 & 7) != 0) {
          uVar8 = 0;
          do {
            *(byte *)((long)puVar6 + uVar8) = *(byte *)((long)puVar11 + uVar8);
            uVar8 = uVar8 + 1;
          } while (uVar8 != (uVar7 & 7));
          puVar6 = (undefined8 *)((long)puVar6 + uVar8);
        }
        return (int)puVar6 - (int)param_3;
      }
      return -1;
    }
    bVar13 = (byte)*param_1 & 0xf;
    uVar3 = *puVar2;
    param_1 = puVar2 + 1;
    uVar17 = (ulong)(byte)(bVar13 + 4);
    if (bVar13 == 0xf) {
      if (puVar1 == (ushort *)param_1) {
        uVar17 = 0x13;
      }
      else {
        iVar15 = 0xf;
        do {
                    /* WARNING: Load size is inaccurate */
          uVar5 = *param_1;
          param_1 = (void *)((long)param_1 + 1);
          iVar15 = iVar15 + (uint)(byte)uVar5;
          if ((byte)uVar5 != 0xff) break;
        } while (puVar1 != (ushort *)param_1);
        uVar17 = (ulong)(iVar15 + 4);
      }
    }
    if (puVar1 + -3 < param_1) goto LAB_00100083;
    if (uVar7 != 0) {
      puVar9 = puVar6;
      if (param_4 < (uVar8 + 7 & 0xfffffffffffffff8)) {
        return -1;
      }
      do {
        uVar4 = *(undefined8 *)puVar11;
        puVar11 = puVar11 + 4;
        *puVar9 = uVar4;
        puVar9 = puVar9 + 1;
      } while (puVar11 < puVar2);
      puVar6 = (undefined8 *)((long)puVar6 + uVar8);
      param_4 = param_4 - uVar8;
    }
    puVar9 = (undefined8 *)((long)puVar6 - (ulong)uVar3);
    if (puVar9 < param_3) {
      return -1;
    }
    if ((int)param_4 - 5U < (uint)uVar17) {
      return -1;
    }
    if (param_4 < 5) {
      return -1;
    }
    if (puVar6 <= puVar9) {
      return -1;
    }
    if (puVar9 + 1 < puVar6) {
      if (param_4 < (uVar17 + 7 & 0xfffffffffffffff8)) {
LAB_0010020d:
        lVar16 = 0;
        do {
          *(undefined1 *)((long)puVar6 + lVar16) = *(undefined1 *)((long)puVar9 + lVar16);
          bVar18 = lVar16 != uVar17 - 1;
          lVar16 = lVar16 + 1;
        } while (bVar18);
        puVar6 = (undefined8 *)((long)puVar6 + uVar17);
      }
      else {
        puVar10 = puVar9;
        puVar12 = puVar9 + 1;
        puVar14 = puVar6;
        while( true ) {
          *puVar14 = *puVar10;
          if ((undefined8 *)((long)puVar9 + uVar17) <= puVar12) break;
          puVar10 = puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar6 = (undefined8 *)((long)puVar6 + uVar17);
      }
    }
    else if (uVar17 != 0) goto LAB_0010020d;
    param_4 = param_4 - uVar17;
  } while( true );
}


