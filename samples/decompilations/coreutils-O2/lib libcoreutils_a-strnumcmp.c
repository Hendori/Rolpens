
uint strnumcmp(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  
  uVar10 = (uint)*param_1;
  bVar5 = *param_2;
  bVar11 = (byte)param_3;
  if (*param_1 == 0x2d) {
    do {
      do {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      } while (bVar2 == 0x30);
      uVar6 = (uint)(char)bVar2;
    } while (param_4 == uVar6);
    if (bVar5 != 0x2d) {
      if (param_3 == uVar6) {
        do {
          pbVar4 = param_1 + 1;
          param_1 = param_1 + 1;
        } while (*pbVar4 == 0x30);
        uVar6 = (uint)(char)*pbVar4;
      }
      if (uVar6 - 0x30 < 10) {
        return 0xffffffff;
      }
      if (bVar5 != 0x30) goto LAB_00100136;
      do {
        do {
          bVar5 = param_2[1];
          param_2 = param_2 + 1;
        } while (bVar5 == 0x30);
LAB_00100136:
        uVar10 = (uint)(char)bVar5;
      } while (param_4 == uVar10);
      if (param_3 == uVar10) {
        do {
          pbVar4 = param_2 + 1;
          param_2 = param_2 + 1;
        } while (*pbVar4 == 0x30);
        uVar10 = (uint)(char)*pbVar4;
      }
      return -(uint)(uVar10 - 0x30 < 10);
    }
    do {
      do {
        bVar5 = param_2[1];
        param_2 = param_2 + 1;
      } while (bVar5 == 0x30);
      uVar9 = (uint)(char)bVar5;
      uVar10 = (uint)bVar2;
      uVar7 = (uint)bVar5;
    } while (param_4 == uVar9);
    do {
      pbVar4 = param_2;
      if (((char)uVar10 != (char)uVar7) || (9 < uVar9 - 0x30)) goto LAB_001001d1;
      do {
        uVar6 = (uint)(char)param_1[1];
        param_1 = param_1 + 1;
      } while (param_4 == uVar6);
      do {
        uVar9 = (uint)(char)pbVar4[1];
        param_2 = pbVar4 + 1;
        uVar10 = uVar6;
        uVar7 = uVar9;
        if (param_4 != uVar9) break;
        uVar9 = (uint)(char)pbVar4[2];
        pbVar4 = pbVar4 + 2;
        param_2 = pbVar4;
        uVar7 = uVar9;
      } while (param_4 == uVar9);
    } while( true );
  }
  if (bVar5 != 0x2d) {
    while (((char)uVar10 == '0' || (uVar6 = (uint)(char)uVar10, param_4 == uVar6))) {
      pbVar4 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar10 = (uint)*pbVar4;
    }
    if (bVar5 != 0x30) goto LAB_0010008e;
    do {
      do {
        bVar5 = param_2[1];
        param_2 = param_2 + 1;
      } while (bVar5 == 0x30);
LAB_0010008e:
      uVar9 = (uint)(char)bVar5;
      uVar7 = (uint)bVar5;
    } while (param_4 == uVar9);
    do {
      pbVar4 = param_2;
      if (((char)uVar10 != (char)uVar7) || (9 < uVar9 - 0x30)) goto LAB_001000a9;
      do {
        uVar6 = (uint)(char)param_1[1];
        param_1 = param_1 + 1;
      } while (param_4 == uVar6);
      do {
        uVar9 = (uint)(char)pbVar4[1];
        param_2 = pbVar4 + 1;
        uVar7 = uVar9;
        uVar10 = uVar6;
        if (param_4 != uVar9) break;
        uVar9 = (uint)(char)pbVar4[2];
        pbVar4 = pbVar4 + 2;
        param_2 = pbVar4;
        uVar7 = uVar9;
      } while (param_4 == uVar9);
    } while( true );
  }
  do {
    do {
      pbVar4 = param_2 + 1;
      uVar6 = (uint)(char)*pbVar4;
      param_2 = param_2 + 1;
    } while (*pbVar4 == 0x30);
  } while (param_4 == uVar6);
  if (param_3 == uVar6) {
    do {
      uVar6 = (uint)(char)param_2[1];
      if (param_2[1] != 0x30) break;
      pbVar4 = param_2 + 2;
      uVar6 = (uint)(char)*pbVar4;
      param_2 = param_2 + 2;
    } while (*pbVar4 == 0x30);
  }
  if (uVar6 - 0x30 < 10) {
    return 1;
  }
  while (((char)uVar10 == '0' || (uVar10 = (uint)(char)uVar10, param_4 == uVar10))) {
    pbVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    uVar10 = (uint)*pbVar4;
  }
  if (param_3 == uVar10) {
    do {
      pbVar4 = param_1 + 1;
      param_1 = param_1 + 1;
    } while (*pbVar4 == 0x30);
    uVar10 = (uint)(char)*pbVar4;
  }
  return (uint)(uVar10 - 0x30 < 10);
LAB_001001d1:
  if (param_3 == uVar6) {
    if (uVar9 - 0x30 < 10) {
      uVar10 = param_3 - 0x30;
      if (param_3 != uVar9) {
        uVar6 = uVar9 - param_3;
        if (uVar10 < 10) goto LAB_0010042a;
        uVar8 = 0;
        goto LAB_00100206;
      }
      goto LAB_0010041b;
    }
LAB_001004f2:
    bVar5 = *param_1;
    if (bVar11 != *pbVar4) {
      param_1 = param_1 + 1;
      if (bVar11 != bVar5) {
        return 0;
      }
LAB_0010050a:
      bVar5 = *param_1;
      while (bVar5 == 0x30) {
        pbVar4 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar5 = *pbVar4;
      }
      return -(uint)((int)(char)bVar5 - 0x30U < 10);
    }
    if (bVar11 != bVar5) goto LAB_00100535;
    while( true ) {
      bVar5 = pbVar4[1];
      bVar11 = param_1[1];
      pbVar4 = pbVar4 + 1;
      param_1 = param_1 + 1;
      uVar10 = (int)(char)bVar5 - 0x30;
      if (bVar5 != bVar11) break;
      if (9 < uVar10) {
        return 0;
      }
    }
    uVar6 = (int)(char)bVar11 - 0x30;
    if (9 < uVar10) {
      if (9 < uVar6) {
        return 0;
      }
      goto LAB_0010050a;
    }
    if (uVar6 < 10) {
      return (int)(char)bVar5 - (int)(char)bVar11;
    }
    for (; bVar5 = *pbVar4, bVar5 == 0x30; pbVar4 = pbVar4 + 1) {
LAB_00100535:
    }
    goto LAB_00100488;
  }
  uVar10 = uVar6 - 0x30;
  if (param_3 == uVar9) {
LAB_0010041b:
    if (9 < uVar10) goto LAB_001004f2;
    uVar6 = uVar9 - uVar6;
LAB_0010042a:
    uVar8 = 0;
    do {
      do {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (param_4 == (int)(char)*pbVar1);
      uVar8 = uVar8 + 1;
    } while ((int)(char)*pbVar1 - 0x30U < 10);
    if (9 < uVar9 - 0x30) {
      return -(uint)(uVar8 != 0);
    }
  }
  else {
    uVar6 = uVar9 - uVar6;
    if (uVar10 < 10) goto LAB_0010042a;
    if (9 < uVar9 - 0x30) {
      return 0;
    }
    uVar8 = 0;
  }
LAB_00100206:
  uVar3 = 0;
  do {
    do {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
    } while (param_4 == (int)(char)*pbVar1);
    uVar3 = uVar3 + 1;
  } while ((int)(char)*pbVar1 - 0x30U < 10);
  if (uVar3 != uVar8) {
    return (-(uint)(uVar8 < uVar3) & 2) - 1;
  }
  goto LAB_001005bb;
LAB_001000a9:
  if (param_3 == uVar6) {
    if (uVar9 - 0x30 < 10) {
      uVar10 = param_3 - 0x30;
      if (param_3 != uVar9) {
        uVar6 = param_3 - uVar9;
        if (uVar10 < 10) goto LAB_00100358;
        goto LAB_0010039b;
      }
      goto LAB_0010034c;
    }
LAB_001003d8:
    if (bVar11 == *param_1) {
      if (bVar11 == *pbVar4) {
        while( true ) {
          bVar5 = param_1[1];
          bVar11 = pbVar4[1];
          param_1 = param_1 + 1;
          pbVar4 = pbVar4 + 1;
          uVar10 = (int)(char)bVar5 - 0x30;
          if (bVar5 != bVar11) break;
          if (9 < uVar10) {
            return 0;
          }
        }
        uVar6 = (int)(char)bVar11 - 0x30;
        if (9 < uVar10) {
          if (9 < uVar6) {
            return 0;
          }
          goto joined_r0x001003fb;
        }
        if (uVar6 < 10) {
          return (int)(char)bVar5 - (int)(char)bVar11;
        }
      }
      else {
        bVar5 = param_1[1];
        param_1 = param_1 + 1;
      }
      while (bVar5 == 0x30) {
        pbVar4 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar5 = *pbVar4;
      }
LAB_00100488:
      return (uint)((int)(char)bVar5 - 0x30U < 10);
    }
    if (bVar11 != *pbVar4) {
      return 0;
    }
    bVar11 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
joined_r0x001003fb:
    while (bVar11 == 0x30) {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      bVar11 = *pbVar1;
    }
    return -(uint)((int)(char)bVar11 - 0x30U < 10);
  }
  uVar10 = uVar6 - 0x30;
  if (param_3 == uVar9) {
LAB_0010034c:
    if (9 < uVar10) goto LAB_001003d8;
    uVar6 = uVar6 - uVar9;
LAB_00100358:
    uVar8 = 0;
    do {
      do {
        pbVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (param_4 == (int)(char)*pbVar1);
      uVar8 = uVar8 + 1;
    } while ((int)(char)*pbVar1 - 0x30U < 10);
    if (9 < uVar9 - 0x30) {
      return (uint)(uVar8 != 0);
    }
  }
  else {
    uVar6 = uVar6 - uVar9;
    if (uVar10 < 10) goto LAB_00100358;
    if (9 < uVar9 - 0x30) {
      return 0;
    }
LAB_0010039b:
    uVar8 = 0;
  }
  uVar3 = 0;
  do {
    do {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
    } while (param_4 == (int)(char)*pbVar1);
    uVar3 = uVar3 + 1;
  } while ((int)(char)*pbVar1 - 0x30U < 10);
  if (uVar3 != uVar8) {
    return -(uint)(uVar8 < uVar3) | 1;
  }
LAB_001005bb:
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  return uVar6;
}


