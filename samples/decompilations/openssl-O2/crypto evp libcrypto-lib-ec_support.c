
undefined * OSSL_EC_curve_nid2name(int param_1)

{
  long lVar1;
  int *piVar2;
  
  if (0 < param_1) {
    piVar2 = &DAT_00100728;
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
  int *piVar2;
  
  piVar2 = &DAT_00100628;
  lVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      return (&nist_curves)[lVar1 * 2];
    }
    lVar1 = lVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (lVar1 != 0xf);
  return (undefined *)0x0;
}



undefined4 ossl_ec_curve_nist2nid_int(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &nist_curves;
  lVar2 = 0;
  do {
    iVar1 = strcmp(*ppuVar3,param_1);
    if (iVar1 == 0) {
      return (&DAT_00100628)[lVar2 * 4];
    }
    lVar2 = lVar2 + 1;
    ppuVar3 = ppuVar3 + 2;
  } while (lVar2 != 0xf);
  return 0;
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
    uVar2 = (ulong)(uint)(&DAT_00100728)[lVar3 * 4];
  }
  return uVar2;
}


