
undefined1 * get_crc_table(void)

{
  return crc_table;
}



ulong crc32_z(uint param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long local_58;
  
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  uVar10 = (ulong)~param_1;
  if (0x2e < param_3) {
    if (((ulong)param_2 & 7) == 0) {
      uVar5 = param_3 / 0x28;
      param_3 = param_3 % 0x28;
    }
    else {
      do {
        puVar6 = (ulong *)((long)param_2 + 1);
        uVar10 = (ulong)*(uint *)(crc_table + (ulong)(byte)((byte)uVar10 ^ (byte)*param_2) * 4) ^
                 uVar10 >> 8;
        param_3 = param_3 - 1;
        param_2 = puVar6;
        if (param_3 == 0) {
          lVar4 = -1;
          param_3 = 0;
          goto LAB_0010008d;
        }
      } while (((ulong)puVar6 & 7) != 0);
      uVar5 = param_3 / 0x28;
      param_3 = param_3 % 0x28;
    }
    lVar4 = uVar5 - 1;
    if (lVar4 == 0) {
      uVar13 = 0;
      uVar11 = 0;
      uVar2 = 0;
      uVar5 = 0;
    }
    else {
LAB_0010008d:
      uVar13 = 0;
      uVar11 = 0;
      uVar2 = 0;
      uVar5 = 0;
      puVar6 = param_2;
      local_58 = lVar4;
      do {
        uVar16 = uVar10 ^ *puVar6;
        iVar9 = 1;
        uVar12 = uVar5 ^ puVar6[1];
        uVar7 = puVar6[2] ^ uVar2;
        uVar10 = (ulong)*(uint *)(crc_braid_table + (uVar16 & 0xff) * 4);
        uVar15 = puVar6[3] ^ uVar11;
        uVar5 = (ulong)*(uint *)(crc_braid_table + (uVar12 & 0xff) * 4);
        uVar14 = uVar13 ^ puVar6[4];
        uVar2 = (ulong)*(uint *)(crc_braid_table + (uVar7 & 0xff) * 4);
        uVar11 = (ulong)*(uint *)(crc_braid_table + (uVar15 & 0xff) * 4);
        uVar13 = (ulong)*(uint *)(crc_braid_table + (uVar14 & 0xff) * 4);
        do {
          bVar3 = (char)iVar9 * '\b';
          lVar1 = (long)iVar9;
          iVar9 = iVar9 + 1;
          lVar1 = lVar1 * 0x100;
          uVar10 = (ulong)((uint)uVar10 ^
                          *(uint *)(crc_braid_table +
                                   ((uVar16 >> (bVar3 & 0x3f) & 0xff) + lVar1) * 4));
          uVar5 = (ulong)((uint)uVar5 ^
                         *(uint *)(crc_braid_table + ((uVar12 >> (bVar3 & 0x3f) & 0xff) + lVar1) * 4
                                  ));
          uVar2 = (ulong)((uint)uVar2 ^
                         *(uint *)(crc_braid_table + ((uVar7 >> (bVar3 & 0x3f) & 0xff) + lVar1) * 4)
                         );
          uVar11 = (ulong)((uint)uVar11 ^
                          *(uint *)(crc_braid_table +
                                   ((uVar15 >> (bVar3 & 0x3f) & 0xff) + lVar1) * 4));
          uVar13 = (ulong)((uint)uVar13 ^
                          *(uint *)(crc_braid_table +
                                   (lVar1 + (uVar14 >> (bVar3 & 0x3f) & 0xff)) * 4));
        } while (iVar9 != 8);
        local_58 = local_58 + -1;
        puVar6 = puVar6 + 5;
      } while (local_58 != 0);
      param_2 = param_2 + lVar4 * 5;
    }
    uVar10 = uVar10 ^ *param_2;
    iVar9 = 8;
    do {
      uVar10 = (ulong)*(uint *)(crc_table + (uVar10 & 0xff) * 4) ^ uVar10 >> 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = 8;
    uVar10 = uVar5 ^ param_2[1] ^ uVar10 & 0xffffffff;
    do {
      uVar10 = (ulong)*(uint *)(crc_table + (uVar10 & 0xff) * 4) ^ uVar10 >> 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar10 = uVar2 ^ param_2[2] ^ uVar10 & 0xffffffff;
    iVar9 = 8;
    do {
      uVar10 = (ulong)*(uint *)(crc_table + (uVar10 & 0xff) * 4) ^ uVar10 >> 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar10 = uVar11 ^ param_2[3] ^ uVar10 & 0xffffffff;
    iVar9 = 8;
    do {
      uVar10 = (ulong)*(uint *)(crc_table + (uVar10 & 0xff) * 4) ^ uVar10 >> 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = 8;
    uVar10 = uVar13 ^ param_2[4] ^ uVar10 & 0xffffffff;
    do {
      uVar10 = (ulong)*(uint *)(crc_table + (uVar10 & 0xff) * 4) ^ uVar10 >> 8;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    uVar10 = uVar10 & 0xffffffff;
    param_2 = param_2 + 5;
  }
  if (7 < param_3) {
    puVar6 = (ulong *)((long)param_2 + (param_3 - 8 & 0xfffffffffffffff8) + 8);
    do {
      puVar8 = param_2 + 1;
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table + (ulong)(byte)((byte)uVar10 ^ (byte)*param_2) * 4);
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table +
                               (ulong)(byte)((byte)uVar10 ^ *(byte *)((long)param_2 + 1)) * 4);
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table +
                               (ulong)(byte)((byte)uVar10 ^ *(byte *)((long)param_2 + 2)) * 4);
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table +
                               (ulong)(byte)((byte)uVar10 ^ *(byte *)((long)param_2 + 3)) * 4);
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table +
                               (ulong)(byte)((byte)uVar10 ^ *(byte *)((long)param_2 + 4)) * 4);
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table +
                               (ulong)(byte)((byte)uVar10 ^ *(byte *)((long)param_2 + 5)) * 4);
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table +
                               (ulong)(byte)((byte)uVar10 ^ *(byte *)((long)param_2 + 6)) * 4);
      uVar10 = uVar10 >> 8 ^
               (ulong)*(uint *)(crc_table +
                               (ulong)(byte)((byte)uVar10 ^ *(byte *)((long)param_2 + 7)) * 4);
      param_2 = puVar8;
    } while (puVar8 != puVar6);
    param_3 = (ulong)((uint)param_3 & 7);
    param_2 = puVar6;
  }
  if (param_3 != 0) {
    puVar6 = param_2;
    do {
      puVar8 = (ulong *)((long)puVar6 + 1);
      uVar10 = (ulong)*(uint *)(crc_table + (ulong)(byte)((byte)uVar10 ^ (byte)*puVar6) * 4) ^
               uVar10 >> 8;
      puVar6 = puVar8;
    } while (puVar8 != (ulong *)((long)param_2 + param_3));
  }
  return uVar10 ^ 0xffffffff;
}



void crc32(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  crc32_z(param_1,param_2,param_3);
  return;
}



uint crc32_combine64(uint param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar4 = 0x80000000;
  }
  else {
    uVar4 = 0x80000000;
    uVar5 = 3;
LAB_00100479:
    do {
      uVar1 = param_3 & 1;
      param_3 = (long)param_3 >> 1;
      if (uVar1 != 0) {
        uVar2 = 0x80000000;
        uVar3 = uVar4;
        uVar4 = 0;
        do {
          if ((*(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4) & uVar2) != 0) {
            uVar4 = uVar4 ^ uVar3;
            if ((uVar2 - 1 & *(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4)) == 0)
            goto code_r0x001004b9;
          }
          uVar2 = uVar2 >> 1;
          uVar3 = uVar3 >> 1 ^ -(uVar3 & 1) & 0xedb88320;
        } while( true );
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != 0);
  }
LAB_001004c2:
  uVar5 = 0;
  uVar3 = 0x80000000;
  do {
    if ((uVar3 & uVar4) != 0) {
      uVar5 = uVar5 ^ param_1;
      if ((uVar3 - 1 & uVar4) == 0) {
        return uVar5 ^ param_2;
      }
    }
    uVar3 = uVar3 >> 1;
    param_1 = param_1 >> 1 ^ -(param_1 & 1) & 0xedb88320;
  } while( true );
code_r0x001004b9:
  uVar5 = uVar5 + 1;
  if (param_3 == 0) goto LAB_001004c2;
  goto LAB_00100479;
}



uint crc32_combine(uint param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar4 = 0x80000000;
  }
  else {
    uVar4 = 0x80000000;
    uVar5 = 3;
LAB_00100539:
    do {
      uVar1 = param_3 & 1;
      param_3 = (long)param_3 >> 1;
      if (uVar1 != 0) {
        uVar2 = 0x80000000;
        uVar3 = uVar4;
        uVar4 = 0;
        do {
          if ((*(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4) & uVar2) != 0) {
            uVar4 = uVar4 ^ uVar3;
            if ((uVar2 - 1 & *(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4)) == 0)
            goto code_r0x00100579;
          }
          uVar2 = uVar2 >> 1;
          uVar3 = uVar3 >> 1 ^ -(uVar3 & 1) & 0xedb88320;
        } while( true );
      }
      uVar5 = uVar5 + 1;
    } while (param_3 != 0);
  }
LAB_00100582:
  uVar5 = 0;
  uVar3 = 0x80000000;
  do {
    if ((uVar3 & uVar4) != 0) {
      uVar5 = uVar5 ^ param_1;
      if ((uVar3 - 1 & uVar4) == 0) {
        return uVar5 ^ param_2;
      }
    }
    uVar3 = uVar3 >> 1;
    param_1 = param_1 >> 1 ^ -(param_1 & 1) & 0xedb88320;
  } while( true );
code_r0x00100579:
  uVar5 = uVar5 + 1;
  if (param_3 == 0) goto LAB_00100582;
  goto LAB_00100539;
}



uint crc32_combine_gen64(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0x80000000;
  if (param_1 != 0) {
    uVar5 = 3;
    uVar3 = 0x80000000;
    do {
      while (uVar1 = param_1 & 1, param_1 = (long)param_1 >> 1, uVar1 != 0) {
        uVar2 = 0;
        for (uVar4 = 0x80000000;
            ((*(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4) & uVar4) == 0 ||
            (uVar2 = uVar2 ^ uVar3,
            (uVar4 - 1 & *(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4)) != 0));
            uVar4 = uVar4 >> 1) {
          uVar3 = uVar3 >> 1 ^ -(uVar3 & 1) & 0xedb88320;
        }
        uVar5 = uVar5 + 1;
        uVar3 = uVar2;
        if (param_1 == 0) {
          return uVar2;
        }
      }
      uVar5 = uVar5 + 1;
    } while (param_1 != 0);
  }
  return uVar3;
}



uint crc32_combine_gen(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = 0x80000000;
  if (param_1 != 0) {
    uVar5 = 3;
    uVar3 = 0x80000000;
    do {
      while (uVar1 = param_1 & 1, param_1 = (long)param_1 >> 1, uVar1 != 0) {
        uVar2 = 0;
        for (uVar4 = 0x80000000;
            ((*(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4) & uVar4) == 0 ||
            (uVar2 = uVar2 ^ uVar3,
            (uVar4 - 1 & *(uint *)(x2n_table + (ulong)(uVar5 & 0x1f) * 4)) != 0));
            uVar4 = uVar4 >> 1) {
          uVar3 = uVar3 >> 1 ^ -(uVar3 & 1) & 0xedb88320;
        }
        uVar5 = uVar5 + 1;
        uVar3 = uVar2;
        if (param_1 == 0) {
          return uVar2;
        }
      }
      uVar5 = uVar5 + 1;
    } while (param_1 != 0);
  }
  return uVar3;
}



uint crc32_combine_op(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = 0x80000000;
  do {
    if ((param_3 & uVar2) != 0) {
      uVar1 = uVar1 ^ param_1;
      if ((uVar2 - 1 & param_3) == 0) {
        return uVar1 ^ param_2;
      }
    }
    uVar2 = uVar2 >> 1;
    param_1 = param_1 >> 1 ^ -(param_1 & 1) & 0xedb88320;
  } while( true );
}


