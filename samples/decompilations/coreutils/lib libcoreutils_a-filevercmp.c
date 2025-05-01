
/* WARNING: Unknown calling convention */

idx_t file_prefixlen(char *s,ptrdiff_t *len)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *len;
  uVar5 = 0;
  uVar6 = 0;
LAB_00100015:
  uVar3 = uVar5;
  if ((long)uVar2 < 0) goto LAB_0010008c;
  do {
    do {
      if (uVar2 == uVar3) {
LAB_001000a8:
        *len = uVar3;
        return uVar6;
      }
      uVar5 = uVar3 + 1;
      uVar4 = uVar3 + 2;
      uVar3 = uVar5;
      uVar6 = uVar5;
    } while (uVar2 <= uVar4);
LAB_00100040:
    do {
      if (s[uVar5] != '.') goto LAB_00100015;
      cVar1 = s[uVar5 + 1];
      if (cVar1 < '[') {
        if (cVar1 < 'A') goto LAB_00100015;
      }
      else if ((0x19 < (byte)(cVar1 + 0x9fU)) && (cVar1 != '~')) goto LAB_00100015;
      for (uVar5 = uVar5 + 2; uVar5 < uVar2; uVar5 = uVar5 + 1) {
        cVar1 = s[uVar5];
        if (cVar1 < '[') {
          if ((cVar1 < 'A') && (9 < (byte)(cVar1 - 0x30U))) break;
        }
        else if ((0x19 < (byte)(cVar1 + 0x9fU)) && (cVar1 != '~')) break;
      }
    } while (uVar5 + 1 < uVar2);
    uVar3 = uVar5;
  } while (-1 < (long)uVar2);
LAB_0010008c:
  cVar1 = s[uVar5];
  uVar3 = uVar5;
  while( true ) {
    if (cVar1 == '\0') goto LAB_001000a8;
    uVar5 = uVar3 + 1;
    uVar6 = uVar5;
    if (uVar3 + 2 < uVar2) break;
    cVar1 = s[uVar5];
    uVar3 = uVar5;
  }
  goto LAB_00100040;
}



/* WARNING: Unknown calling convention */

int verrevcmp(char *s1,idx_t s1_len,char *s2,idx_t s2_len)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  lVar2 = 0;
  lVar3 = 0;
LAB_001000e9:
  if (lVar2 < s1_len) goto LAB_00100100;
  if (s2_len <= lVar3) {
    return 0;
  }
  do {
    if (lVar2 < s1_len) {
LAB_00100100:
      uVar7 = (uint)s1[lVar2];
      if (uVar7 - 0x30 < 10) goto LAB_001001a0;
LAB_00100116:
      cVar6 = (char)uVar7;
      if (cVar6 < '[') {
        if (cVar6 < 'A') goto LAB_0010017a;
LAB_00100122:
        iVar4 = (int)cVar6;
        if (lVar3 == s2_len) {
          return iVar4 + 1;
        }
      }
      else {
        if ((byte)(cVar6 + 0x9fU) < 0x1a) goto LAB_00100122;
LAB_0010017a:
        if (cVar6 == '~') {
          if (lVar3 == s2_len) {
            return -1;
          }
          bVar1 = s2[lVar3];
          uVar9 = (uint)bVar1;
          if (uVar9 - 0x30 < 10) {
            return -2;
          }
          if ((char)bVar1 < '[') {
            if ((char)bVar1 < 'A') {
              iVar5 = -2;
              goto LAB_001002fa;
            }
          }
          else if (0x19 < (byte)(bVar1 + 0x9f)) {
            iVar5 = -2;
            goto LAB_001002ec;
          }
          iVar8 = (int)(char)bVar1;
          iVar4 = -2;
          goto LAB_00100354;
        }
        iVar4 = (uVar7 & 0xff) + 0x100;
        if (lVar3 == s2_len) {
          return (uVar7 & 0xff) + 0x101;
        }
      }
      bVar1 = s2[lVar3];
      uVar9 = (uint)bVar1;
      if (bVar1 - 0x30 < 10) {
        return iVar4;
      }
      iVar5 = iVar4;
      if ((char)bVar1 < '[') {
        if ((char)bVar1 < 'A') {
          if (bVar1 == 0x7e) {
            iVar8 = -2;
            goto LAB_00100354;
          }
          uVar9 = (uint)bVar1;
          goto LAB_001002fa;
        }
      }
      else if (0x19 < (byte)(bVar1 + 0x9f)) goto LAB_001002ec;
      iVar8 = (int)(char)bVar1;
    }
    else {
LAB_001001a0:
      if (s2_len <= lVar3) break;
      bVar1 = s2[lVar3];
      iVar8 = (int)(char)bVar1;
      if (iVar8 - 0x30U < 10) break;
      uVar9 = (uint)bVar1;
      if (lVar2 == s1_len) {
        if ((char)bVar1 < '[') {
          if ((char)bVar1 < 'A') {
            iVar8 = bVar1 + 0x100;
          }
          iVar4 = -1;
          goto LAB_00100354;
        }
        iVar5 = -1;
        iVar4 = -1;
joined_r0x001002ea:
        if ((byte)(bVar1 + 0x9f) < 0x1a) goto LAB_00100354;
LAB_001002ec:
        if ((char)uVar9 == '~') {
          iVar8 = -2;
          iVar4 = iVar5;
          goto LAB_00100301;
        }
      }
      else {
        uVar7 = (uint)(byte)s1[lVar2];
        if (9 < uVar7 - 0x30) goto LAB_00100116;
        if ('Z' < (char)bVar1) {
          iVar5 = 0;
          iVar4 = 0;
          goto joined_r0x001002ea;
        }
        iVar4 = 0;
        iVar5 = 0;
        if ('@' < (char)bVar1) goto LAB_00100354;
        uVar9 = (uint)bVar1;
      }
LAB_001002fa:
      iVar8 = uVar9 + 0x100;
      iVar4 = iVar5;
    }
LAB_00100301:
    if (iVar8 != iVar4) {
LAB_00100354:
      return iVar4 - iVar8;
    }
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 1;
  } while( true );
  if (lVar2 < s1_len) {
    do {
      if (s1[lVar2] != '0') break;
      lVar2 = lVar2 + 1;
    } while (s1_len != lVar2);
    if (lVar3 < s2_len) goto LAB_001001fd;
    iVar8 = 0;
    if (s1_len <= lVar2) goto LAB_001000e9;
  }
  else {
    if (s2_len <= lVar3) goto LAB_001000e9;
LAB_001001fd:
    do {
      if (s2[lVar3] != '0') {
        iVar8 = 0;
        if ((s2_len <= lVar3) || (s1_len <= lVar2)) goto LAB_00100250;
        goto LAB_00100210;
      }
      lVar3 = lVar3 + 1;
    } while (s2_len != lVar3);
    iVar8 = 0;
LAB_00100250:
    if (s1_len <= lVar2) goto LAB_00100268;
  }
  if ((int)s1[lVar2] - 0x30U < 10) {
    return 1;
  }
LAB_00100268:
  if ((lVar3 < s2_len) && ((int)s2[lVar3] - 0x30U < 10)) {
    return -1;
  }
  if (iVar8 != 0) {
    return iVar8;
  }
  goto LAB_001000e9;
LAB_00100210:
  if (9 < (int)s1[lVar2] - 0x30U) goto LAB_00100250;
  if (9 < (int)s2[lVar3] - 0x30U) {
    if (lVar2 < s1_len) {
      return 1;
    }
    goto LAB_00100268;
  }
  if (iVar8 == 0) {
    iVar8 = (int)s1[lVar2] - (int)s2[lVar3];
  }
  lVar2 = lVar2 + 1;
  lVar3 = lVar3 + 1;
  if ((s1_len <= lVar2) || (s2_len <= lVar3)) goto LAB_00100250;
  goto LAB_00100210;
}



/* WARNING: Unknown calling convention */

int filenvercmp(char *a,ptrdiff_t alen,char *b,ptrdiff_t blen)

{
  ptrdiff_t s1_len;
  int iVar1;
  idx_t s1_len_00;
  idx_t s2_len;
  bool bVar2;
  bool bVar3;
  ptrdiff_t local_30;
  ptrdiff_t local_28;
  
  bVar2 = alen == 0;
  if (alen < 0) {
    bVar2 = *a == '\0';
  }
  bVar3 = blen == 0;
  if (blen < 0) {
    bVar3 = *b == '\0';
  }
  if (!bVar2) {
    if (bVar3 != false) {
      return 1;
    }
    if (*a == '.') {
      if (*b != '.') {
        return -1;
      }
      bVar2 = alen == 1;
      if (alen < 0) {
        bVar2 = a[1] == '\0';
      }
      bVar3 = blen == 1;
      if (blen < 0) {
        bVar3 = b[1] == '\0';
      }
      if (bVar2) goto LAB_00100518;
      if (bVar3 != false) {
        return 1;
      }
      if (a[1] == '.') {
        if (alen < 0) {
          if (a[2] == '\0') goto LAB_001005b3;
        }
        else if (alen == 2) {
LAB_001005b3:
          if (b[1] != '.') {
            return -1;
          }
          if (blen < 0) {
            return -(uint)(b[2] != '\0');
          }
          return (blen == 2) - 1;
        }
      }
      if (b[1] == '.') {
        if (blen < 0) {
          if (b[2] == '\0') {
            return 1;
          }
        }
        else if (blen == 2) {
          return 1;
        }
      }
    }
    else if (*b == '.') {
      return 1;
    }
    local_30 = blen;
    local_28 = alen;
    s1_len_00 = file_prefixlen(a,&local_28);
    s2_len = file_prefixlen(b,&local_30);
    s1_len = local_28;
    bVar2 = local_28 != s1_len_00;
    bVar3 = local_30 != s2_len;
    iVar1 = verrevcmp(a,s1_len_00,b,s2_len);
    if ((iVar1 == 0) && (bVar2 || bVar3)) {
      iVar1 = verrevcmp(a,s1_len,b,local_30);
    }
    return iVar1;
  }
LAB_00100518:
  return bVar3 - 1;
}



/* WARNING: Unknown calling convention */

int filevercmp(char *s1,char *s2)

{
  int iVar1;
  
  iVar1 = filenvercmp(s1,-1,s2,-1);
  return iVar1;
}


