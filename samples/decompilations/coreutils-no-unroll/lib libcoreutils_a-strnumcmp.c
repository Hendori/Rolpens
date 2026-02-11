
uint strnumcmp(byte *param_1,byte *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  byte *pbVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  char cVar13;
  uint uVar9;
  
  uVar12 = (uint)*param_1;
  bVar7 = *param_2;
  cVar13 = (char)param_3;
  if (*param_1 == 0x2d) {
    do {
      do {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      } while (bVar2 == 0x30);
      uVar12 = (uint)(char)bVar2;
    } while (param_4 == uVar12);
    if (bVar7 != 0x2d) {
      if (param_3 == uVar12) {
        do {
          pbVar5 = param_1 + 1;
          param_1 = param_1 + 1;
        } while (*pbVar5 == 0x30);
        uVar12 = (uint)(char)*pbVar5;
      }
      if (9 < uVar12 - 0x30) {
        if (bVar7 != 0x30) goto LAB_0010013e;
        do {
          do {
            bVar7 = param_2[1];
            param_2 = param_2 + 1;
          } while (bVar7 == 0x30);
LAB_0010013e:
          uVar12 = (uint)(char)bVar7;
        } while (param_4 == uVar12);
        if (param_3 == uVar12) {
          do {
            pbVar5 = param_2 + 1;
            param_2 = param_2 + 1;
          } while (*pbVar5 == 0x30);
          uVar12 = (uint)(char)*pbVar5;
        }
        return -(uint)(uVar12 - 0x30 < 10);
      }
      return 0xffffffff;
    }
    do {
      do {
        bVar7 = param_2[1];
        param_2 = param_2 + 1;
      } while (bVar7 == 0x30);
      uVar11 = (uint)(char)bVar7;
      uVar8 = (uint)bVar2;
      uVar9 = (uint)bVar7;
    } while (param_4 == uVar11);
    do {
      pbVar5 = param_2;
      cVar3 = (char)uVar8;
      cVar6 = (char)uVar9;
      if ((cVar3 != cVar6) || (9 < uVar11 - 0x30)) goto LAB_00100366;
      do {
        uVar12 = (uint)(char)param_1[1];
        param_1 = param_1 + 1;
      } while (param_4 == uVar12);
      do {
        uVar11 = (uint)(char)pbVar5[1];
        param_2 = pbVar5 + 1;
        uVar8 = uVar12;
        uVar9 = uVar11;
        if (param_4 != uVar11) break;
        uVar11 = (uint)(char)pbVar5[2];
        pbVar5 = pbVar5 + 2;
        param_2 = pbVar5;
        uVar9 = uVar11;
      } while (param_4 == uVar11);
    } while( true );
  }
  if (bVar7 != 0x2d) {
    while (((char)uVar12 == '0' || (uVar8 = (uint)(char)uVar12, param_4 == uVar8))) {
      pbVar5 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar12 = (uint)*pbVar5;
    }
    if (bVar7 != 0x30) goto LAB_0010008e;
    do {
      do {
        bVar7 = param_2[1];
        param_2 = param_2 + 1;
      } while (bVar7 == 0x30);
LAB_0010008e:
      uVar11 = (uint)(char)bVar7;
      uVar9 = (uint)bVar7;
    } while (param_4 == uVar11);
    do {
      pbVar5 = param_2;
      cVar3 = (char)uVar12;
      cVar6 = (char)uVar9;
      if ((cVar3 != cVar6) || (9 < uVar11 - 0x30)) goto LAB_001000aa;
      do {
        uVar8 = (uint)(char)param_1[1];
        param_1 = param_1 + 1;
      } while (param_4 == uVar8);
      do {
        uVar11 = (uint)(char)pbVar5[1];
        param_2 = pbVar5 + 1;
        uVar9 = uVar11;
        uVar12 = uVar8;
        if (param_4 != uVar11) break;
        uVar11 = (uint)(char)pbVar5[2];
        pbVar5 = pbVar5 + 2;
        param_2 = pbVar5;
        uVar9 = uVar11;
      } while (param_4 == uVar11);
    } while( true );
  }
  do {
    do {
      pbVar5 = param_2 + 1;
      uVar8 = (uint)(char)*pbVar5;
      param_2 = param_2 + 1;
    } while (*pbVar5 == 0x30);
  } while (param_4 == uVar8);
  if (param_3 == uVar8) {
    do {
      uVar8 = (uint)(char)param_2[1];
      if (param_2[1] != 0x30) break;
      pbVar5 = param_2 + 2;
      uVar8 = (uint)(char)*pbVar5;
      param_2 = param_2 + 2;
    } while (*pbVar5 == 0x30);
  }
  if (9 < uVar8 - 0x30) {
    while (((char)uVar12 == '0' || (uVar12 = (uint)(char)uVar12, param_4 == uVar12))) {
      pbVar5 = param_1 + 1;
      param_1 = param_1 + 1;
      uVar12 = (uint)*pbVar5;
    }
    if (param_3 == uVar12) {
      do {
        pbVar5 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pbVar5 == 0x30);
      uVar12 = (uint)(char)*pbVar5;
    }
    return (uint)(uVar12 - 0x30 < 10);
  }
  return 1;
LAB_00100366:
  if (param_3 == uVar12) {
    if (9 < uVar11 - 0x30) goto LAB_001004e6;
    uVar8 = param_3 - 0x30;
    if (param_3 == uVar11) goto LAB_001003df;
    uVar12 = uVar11 - param_3;
    if (9 < uVar8) goto LAB_0010043f;
  }
  else {
    uVar8 = uVar12 - 0x30;
    if (param_3 == uVar11) {
LAB_001003df:
      if (9 < uVar8) {
LAB_001004e6:
        if (cVar6 == cVar13) {
          if (cVar6 != cVar3) goto LAB_00100526;
          while( true ) {
            bVar7 = pbVar5[1];
            bVar2 = param_1[1];
            pbVar5 = pbVar5 + 1;
            param_1 = param_1 + 1;
            uVar12 = (int)(char)bVar7 - 0x30;
            if (bVar7 != bVar2) break;
            if (9 < uVar12) {
              return 0;
            }
          }
          uVar8 = (int)(char)bVar2 - 0x30;
          if (uVar12 < 10) {
            if (9 < uVar8) {
              for (; *pbVar5 == 0x30; pbVar5 = pbVar5 + 1) {
LAB_00100526:
              }
              return (uint)((int)(char)*pbVar5 - 0x30U < 10);
            }
            return (int)(char)bVar7 - (int)(char)bVar2;
          }
          if (9 < uVar8) {
            return 0;
          }
        }
        else {
          param_1 = param_1 + 1;
          if (cVar13 != cVar3) {
            return 0;
          }
        }
        bVar7 = *param_1;
        while (bVar7 == 0x30) {
          pbVar5 = param_1 + 1;
          param_1 = param_1 + 1;
          bVar7 = *pbVar5;
        }
        return -(uint)((int)(char)bVar7 - 0x30U < 10);
      }
      uVar12 = uVar11 - uVar12;
    }
    else {
      uVar12 = uVar11 - uVar12;
      if (9 < uVar8) {
        if (9 < uVar11 - 0x30) {
          return 0;
        }
LAB_0010043f:
        uVar10 = 0;
        goto LAB_00100441;
      }
    }
  }
  uVar10 = 0;
  do {
    do {
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
    } while (param_4 == (int)(char)*pbVar1);
    uVar10 = uVar10 + 1;
  } while ((int)(char)*pbVar1 - 0x30U < 10);
  if (9 < uVar11 - 0x30) {
    return -(uint)(uVar10 != 0);
  }
LAB_00100441:
  uVar4 = 0;
  do {
    do {
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (param_4 == (int)(char)*pbVar1);
    uVar4 = uVar4 + 1;
  } while ((int)(char)*pbVar1 - 0x30U < 10);
  if (uVar4 == uVar10) {
    if (uVar4 == 0) {
      uVar12 = 0;
    }
  }
  else {
    uVar12 = (-(uint)(uVar10 < uVar4) & 2) - 1;
  }
  return uVar12;
LAB_001000aa:
  if (param_3 == uVar8) {
    if (9 < uVar11 - 0x30) {
LAB_001002f8:
      if (cVar3 != cVar13) {
        if (cVar6 != cVar13) {
          return 0;
        }
        bVar7 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
joined_r0x00100318:
        while (bVar7 == 0x30) {
          pbVar1 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          bVar7 = *pbVar1;
        }
        return -(uint)((int)(char)bVar7 - 0x30U < 10);
      }
      if (cVar6 == cVar3) {
        while( true ) {
          bVar2 = param_1[1];
          bVar7 = pbVar5[1];
          param_1 = param_1 + 1;
          pbVar5 = pbVar5 + 1;
          uVar12 = (int)(char)bVar2 - 0x30;
          if (bVar2 != bVar7) break;
          if (9 < uVar12) {
            return 0;
          }
        }
        uVar8 = (int)(char)bVar7 - 0x30;
        if (9 < uVar12) {
          if (9 < uVar8) {
            return 0;
          }
          goto joined_r0x00100318;
        }
        if (uVar8 < 10) {
          return (int)(char)bVar2 - (int)(char)bVar7;
        }
      }
      else {
        bVar2 = param_1[1];
        param_1 = param_1 + 1;
      }
      while (bVar2 == 0x30) {
        pbVar5 = param_1 + 1;
        param_1 = param_1 + 1;
        bVar2 = *pbVar5;
      }
      return (uint)((int)(char)bVar2 - 0x30U < 10);
    }
    uVar12 = param_3 - 0x30;
    if (param_3 == uVar11) goto LAB_00100266;
    uVar8 = param_3 - uVar11;
    if (9 < uVar12) goto LAB_001002b4;
  }
  else {
    uVar12 = uVar8 - 0x30;
    if (param_3 == uVar11) {
LAB_00100266:
      if (9 < uVar12) goto LAB_001002f8;
      uVar8 = uVar8 - uVar11;
    }
    else {
      uVar8 = uVar8 - uVar11;
      if (9 < uVar12) {
        if (9 < uVar11 - 0x30) {
          return 0;
        }
LAB_001002b4:
        uVar10 = 0;
        goto LAB_001002c0;
      }
    }
  }
  uVar10 = 0;
  do {
    do {
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 1;
    } while (param_4 == (int)(char)*pbVar1);
    uVar10 = uVar10 + 1;
  } while ((int)(char)*pbVar1 - 0x30U < 10);
  if (9 < uVar11 - 0x30) {
    return (uint)(uVar10 != 0);
  }
LAB_001002c0:
  uVar4 = 0;
  do {
    do {
      pbVar1 = pbVar5 + 1;
      pbVar5 = pbVar5 + 1;
    } while (param_4 == (int)(char)*pbVar1);
    uVar4 = uVar4 + 1;
  } while ((int)(char)*pbVar1 - 0x30U < 10);
  if (uVar4 == uVar10) {
    if (uVar4 == 0) {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = -(uint)(uVar10 < uVar4) | 1;
  }
  return uVar8;
}


