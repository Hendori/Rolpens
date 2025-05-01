
/* WARNING: Unknown calling convention */

int strnumcmp(char *a,char *b,int decimal_point,int thousands_sep)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  char *pcVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  
  uVar5 = (uint)(byte)*a;
  bVar8 = *b;
  cVar14 = (char)decimal_point;
  if (*a == 0x2d) {
    do {
      do {
        bVar3 = a[1];
        a = a + 1;
      } while (bVar3 == 0x30);
      uVar5 = (uint)(char)bVar3;
    } while (thousands_sep == uVar5);
    if (bVar8 != 0x2d) {
      if (decimal_point == uVar5) {
        do {
          pcVar7 = a + 1;
          a = a + 1;
        } while (*pcVar7 == '0');
        uVar5 = (uint)*pcVar7;
      }
      if (uVar5 - 0x30 < 10) {
        return -1;
      }
      if (bVar8 != 0x30) goto LAB_00100136;
      do {
        do {
          bVar8 = b[1];
          b = b + 1;
        } while (bVar8 == 0x30);
LAB_00100136:
        iVar9 = (int)(char)bVar8;
      } while (thousands_sep == iVar9);
      if (decimal_point == iVar9) {
        do {
          pcVar7 = b + 1;
          b = b + 1;
        } while (*pcVar7 == '0');
        iVar9 = (int)*pcVar7;
      }
      return -(uint)(iVar9 - 0x30U < 10);
    }
    do {
      do {
        bVar8 = b[1];
        b = b + 1;
      } while (bVar8 == 0x30);
      uVar12 = (uint)(char)bVar8;
      uVar13 = (uint)bVar3;
      uVar10 = (uint)bVar8;
    } while (thousands_sep == uVar12);
    do {
      pcVar7 = b;
      if (((char)uVar13 != (char)uVar10) || (9 < uVar12 - 0x30)) goto LAB_001001d1;
      do {
        uVar5 = (uint)a[1];
        a = a + 1;
      } while (thousands_sep == uVar5);
      do {
        uVar12 = (uint)pcVar7[1];
        b = pcVar7 + 1;
        uVar13 = uVar5;
        uVar10 = uVar12;
        if (thousands_sep != uVar12) break;
        uVar12 = (uint)pcVar7[2];
        pcVar7 = pcVar7 + 2;
        b = pcVar7;
        uVar10 = uVar12;
      } while (thousands_sep == uVar12);
    } while( true );
  }
  if (bVar8 != 0x2d) {
    while (((char)uVar5 == '0' || (uVar13 = (uint)(char)uVar5, thousands_sep == uVar13))) {
      pbVar1 = (byte *)(a + 1);
      a = a + 1;
      uVar5 = (uint)*pbVar1;
    }
    if (bVar8 != 0x30) goto LAB_0010008e;
    do {
      do {
        bVar8 = b[1];
        b = b + 1;
      } while (bVar8 == 0x30);
LAB_0010008e:
      uVar12 = (uint)(char)bVar8;
      uVar10 = (uint)bVar8;
    } while (thousands_sep == uVar12);
    do {
      pcVar7 = b;
      if (((char)uVar5 != (char)uVar10) || (9 < uVar12 - 0x30)) goto LAB_001000a9;
      do {
        uVar13 = (uint)a[1];
        a = a + 1;
      } while (thousands_sep == uVar13);
      do {
        uVar12 = (uint)pcVar7[1];
        b = pcVar7 + 1;
        uVar10 = uVar12;
        uVar5 = uVar13;
        if (thousands_sep != uVar12) break;
        uVar12 = (uint)pcVar7[2];
        pcVar7 = pcVar7 + 2;
        b = pcVar7;
        uVar10 = uVar12;
      } while (thousands_sep == uVar12);
    } while( true );
  }
  do {
    do {
      pcVar7 = b + 1;
      iVar9 = (int)*pcVar7;
      b = b + 1;
    } while (*pcVar7 == '0');
  } while (thousands_sep == iVar9);
  if (decimal_point == iVar9) {
    do {
      iVar9 = (int)b[1];
      if (b[1] != '0') break;
      pcVar7 = b + 2;
      iVar9 = (int)*pcVar7;
      b = b + 2;
    } while (*pcVar7 == '0');
  }
  if (iVar9 - 0x30U < 10) {
    return 1;
  }
  while (((char)uVar5 == '0' || (iVar9 = (int)(char)uVar5, thousands_sep == iVar9))) {
    pbVar1 = (byte *)(a + 1);
    a = a + 1;
    uVar5 = (uint)*pbVar1;
  }
  if (decimal_point == iVar9) {
    do {
      pcVar7 = a + 1;
      a = a + 1;
    } while (*pcVar7 == '0');
    iVar9 = (int)*pcVar7;
  }
  return (uint)(iVar9 - 0x30U < 10);
LAB_001001d1:
  if (decimal_point == uVar5) {
    if (uVar12 - 0x30 < 10) {
      uVar13 = decimal_point - 0x30;
      if (decimal_point != uVar12) {
        iVar9 = uVar12 - decimal_point;
        if (uVar13 < 10) goto LAB_0010042a;
        uVar11 = 0;
        goto LAB_00100206;
      }
      goto LAB_0010041b;
    }
LAB_001004f2:
    cVar4 = *a;
    if (cVar14 != *pcVar7) {
      a = a + 1;
      if (cVar14 != cVar4) {
        return 0;
      }
LAB_0010050a:
      cVar14 = *a;
      while (cVar14 == '0') {
        pcVar7 = a + 1;
        a = a + 1;
        cVar14 = *pcVar7;
      }
      return -(uint)((int)cVar14 - 0x30U < 10);
    }
    if (cVar14 != cVar4) goto LAB_00100535;
    while( true ) {
      cVar14 = pcVar7[1];
      cVar4 = a[1];
      pcVar7 = pcVar7 + 1;
      a = a + 1;
      uVar5 = (int)cVar14 - 0x30;
      if (cVar14 != cVar4) break;
      if (9 < uVar5) {
        return 0;
      }
    }
    uVar13 = (int)cVar4 - 0x30;
    if (9 < uVar5) {
      if (9 < uVar13) {
        return 0;
      }
      goto LAB_0010050a;
    }
    if (uVar13 < 10) {
      return (int)cVar14 - (int)cVar4;
    }
    for (; cVar14 = *pcVar7, cVar14 == '0'; pcVar7 = pcVar7 + 1) {
LAB_00100535:
    }
    goto LAB_00100488;
  }
  uVar13 = uVar5 - 0x30;
  if (decimal_point == uVar12) {
LAB_0010041b:
    if (9 < uVar13) goto LAB_001004f2;
    iVar9 = uVar12 - uVar5;
LAB_0010042a:
    uVar11 = 0;
    do {
      do {
        pcVar2 = a + 1;
        a = a + 1;
      } while (thousands_sep == *pcVar2);
      uVar11 = uVar11 + 1;
    } while ((int)*pcVar2 - 0x30U < 10);
    if (9 < uVar12 - 0x30) {
      return -(uint)(uVar11 != 0);
    }
  }
  else {
    iVar9 = uVar12 - uVar5;
    if (uVar13 < 10) goto LAB_0010042a;
    if (9 < uVar12 - 0x30) {
      return 0;
    }
    uVar11 = 0;
  }
LAB_00100206:
  uVar6 = 0;
  do {
    do {
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (thousands_sep == *pcVar2);
    uVar6 = uVar6 + 1;
  } while ((int)*pcVar2 - 0x30U < 10);
  if (uVar6 != uVar11) {
    return (-(uint)(uVar11 < uVar6) & 2) - 1;
  }
  goto LAB_001005bb;
LAB_001000a9:
  if (decimal_point == uVar13) {
    if (uVar12 - 0x30 < 10) {
      uVar5 = decimal_point - 0x30;
      if (decimal_point != uVar12) {
        iVar9 = decimal_point - uVar12;
        if (uVar5 < 10) goto LAB_00100358;
        goto LAB_0010039b;
      }
      goto LAB_0010034c;
    }
LAB_001003d8:
    if (cVar14 == *a) {
      if (cVar14 == *pcVar7) {
        while( true ) {
          cVar14 = a[1];
          cVar4 = pcVar7[1];
          a = a + 1;
          pcVar7 = pcVar7 + 1;
          uVar5 = (int)cVar14 - 0x30;
          if (cVar14 != cVar4) break;
          if (9 < uVar5) {
            return 0;
          }
        }
        uVar13 = (int)cVar4 - 0x30;
        if (9 < uVar5) {
          if (9 < uVar13) {
            return 0;
          }
          goto joined_r0x001003fb;
        }
        if (uVar13 < 10) {
          return (int)cVar14 - (int)cVar4;
        }
      }
      else {
        cVar14 = a[1];
        a = a + 1;
      }
      while (cVar14 == '0') {
        pcVar7 = a + 1;
        a = a + 1;
        cVar14 = *pcVar7;
      }
LAB_00100488:
      return (uint)((int)cVar14 - 0x30U < 10);
    }
    if (cVar14 != *pcVar7) {
      return 0;
    }
    cVar4 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
joined_r0x001003fb:
    while (cVar4 == '0') {
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar4 = *pcVar2;
    }
    return -(uint)((int)cVar4 - 0x30U < 10);
  }
  uVar5 = uVar13 - 0x30;
  if (decimal_point == uVar12) {
LAB_0010034c:
    if (9 < uVar5) goto LAB_001003d8;
    iVar9 = uVar13 - uVar12;
LAB_00100358:
    uVar11 = 0;
    do {
      do {
        pcVar2 = a + 1;
        a = a + 1;
      } while (thousands_sep == *pcVar2);
      uVar11 = uVar11 + 1;
    } while ((int)*pcVar2 - 0x30U < 10);
    if (9 < uVar12 - 0x30) {
      return (uint)(uVar11 != 0);
    }
  }
  else {
    iVar9 = uVar13 - uVar12;
    if (uVar5 < 10) goto LAB_00100358;
    if (9 < uVar12 - 0x30) {
      return 0;
    }
LAB_0010039b:
    uVar11 = 0;
  }
  uVar6 = 0;
  do {
    do {
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (thousands_sep == *pcVar2);
    uVar6 = uVar6 + 1;
  } while ((int)*pcVar2 - 0x30U < 10);
  if (uVar6 != uVar11) {
    return -(uint)(uVar11 < uVar6) | 1;
  }
LAB_001005bb:
  if (uVar6 == 0) {
    iVar9 = 0;
  }
  return iVar9;
}


