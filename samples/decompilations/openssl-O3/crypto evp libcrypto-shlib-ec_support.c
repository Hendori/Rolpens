
undefined * OSSL_EC_curve_nid2name(int param_1)

{
  long lVar1;
  int *piVar2;
  
  if (0 < param_1) {
    piVar2 = &DAT_00100988;
    lVar1 = 0;
    do {
      if (*piVar2 == param_1) {
        return (&curve_list)[lVar1 * 2];
      }
      lVar1 = lVar1 + 1;
      piVar2 = piVar2 + 4;
    } while (lVar1 != 0x52);
  }
  return (undefined *)0x0;
}



undefined * ossl_ec_curve_nid2nist_int(int param_1)

{
  long lVar1;
  
  if (param_1 == 0x2d3) {
    lVar1 = 0;
  }
  else if (param_1 == 0x2d7) {
    lVar1 = 1;
  }
  else if (param_1 == 0x2da) {
    lVar1 = 2;
  }
  else if (param_1 == 0x2dc) {
    lVar1 = 3;
  }
  else if (param_1 == 0x2de) {
    lVar1 = 4;
  }
  else if (param_1 == 0x2d1) {
    lVar1 = 5;
  }
  else if (param_1 == 0x2d6) {
    lVar1 = 6;
  }
  else if (param_1 == 0x2d9) {
    lVar1 = 7;
  }
  else if (param_1 == 0x2db) {
    lVar1 = 8;
  }
  else if (param_1 == 0x2dd) {
    lVar1 = 9;
  }
  else if (param_1 == 0x199) {
    lVar1 = 10;
  }
  else if (param_1 == 0x2c9) {
    lVar1 = 0xb;
  }
  else if (param_1 == 0x19f) {
    lVar1 = 0xc;
  }
  else if (param_1 == 0x2cb) {
    lVar1 = 0xd;
  }
  else {
    if (param_1 != 0x2cc) {
      return (undefined *)0x0;
    }
    lVar1 = 0xe;
  }
  return (&nist_curves)[lVar1 * 2];
}



undefined4 ossl_ec_curve_nist2nid_int(char *param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = strcmp("B-163",param_1);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    iVar1 = strcmp("B-233",param_1);
    if (iVar1 == 0) {
      lVar2 = 1;
    }
    else {
      iVar1 = strcmp("B-283",param_1);
      if (iVar1 == 0) {
        lVar2 = 2;
      }
      else {
        iVar1 = strcmp("B-409",param_1);
        if (iVar1 == 0) {
          lVar2 = 3;
        }
        else {
          iVar1 = strcmp("B-571",param_1);
          if (iVar1 == 0) {
            lVar2 = 4;
          }
          else {
            iVar1 = strcmp("K-163",param_1);
            if (iVar1 == 0) {
              lVar2 = 5;
            }
            else {
              iVar1 = strcmp("K-233",param_1);
              if (iVar1 == 0) {
                lVar2 = 6;
              }
              else {
                iVar1 = strcmp("K-283",param_1);
                if (iVar1 == 0) {
                  lVar2 = 7;
                }
                else {
                  iVar1 = strcmp("K-409",param_1);
                  if (iVar1 == 0) {
                    lVar2 = 8;
                  }
                  else {
                    iVar1 = strcmp("K-571",param_1);
                    if (iVar1 == 0) {
                      lVar2 = 9;
                    }
                    else {
                      iVar1 = strcmp("P-192",param_1);
                      if (iVar1 == 0) {
                        lVar2 = 10;
                      }
                      else {
                        iVar1 = strcmp("P-224",param_1);
                        if (iVar1 == 0) {
                          lVar2 = 0xb;
                        }
                        else {
                          iVar1 = strcmp("P-256",param_1);
                          if (iVar1 == 0) {
                            lVar2 = 0xc;
                          }
                          else {
                            iVar1 = strcmp("P-384",param_1);
                            if (iVar1 == 0) {
                              lVar2 = 0xd;
                            }
                            else {
                              iVar1 = strcmp("P-521",param_1);
                              if (iVar1 != 0) {
                                return 0;
                              }
                              lVar2 = 0xe;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (&DAT_00100888)[lVar2 * 4];
}



ulong ossl_ec_curve_name2nid(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = ossl_ec_curve_nist2nid_int();
  if ((int)uVar2 == 0) {
    lVar3 = 0;
    ppuVar4 = &curve_list;
    while( true ) {
      iVar1 = OPENSSL_strcasecmp(*ppuVar4,param_1);
      if (iVar1 == 0) break;
      lVar3 = lVar3 + 1;
      ppuVar4 = ppuVar4 + 2;
      if (lVar3 == 0x52) {
        return 0;
      }
    }
    uVar2 = (ulong)(uint)(&DAT_00100988)[lVar3 * 4];
  }
  return uVar2;
}


