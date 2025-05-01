
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPENSSL_cpuid_setup(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  char *pcVar8;
  long lVar9;
  undefined *local_50;
  int local_40;
  uint local_3c;
  
  if (trigger_0 != 0) {
    return;
  }
  trigger_0 = 1;
  pcVar3 = getenv("OPENSSL_ia32cap");
  if (pcVar3 != (char *)0x0) {
    cVar1 = *pcVar3;
    lVar9 = 10;
    pcVar8 = pcVar3 + (cVar1 == '~');
    if (*pcVar8 == '0') {
      iVar2 = ossl_tolower((int)pcVar8[1]);
      if (iVar2 == 0x78) {
        pcVar8 = pcVar8 + 2;
        lVar9 = 0x10;
      }
      else {
        pcVar8 = pcVar8 + 1;
        lVar9 = 8;
      }
    }
    uVar4 = 0;
    do {
      iVar5 = (int)*pcVar8;
      pcVar8 = pcVar8 + 1;
      iVar2 = ossl_isdigit(iVar5);
      if (iVar2 == 0) {
        iVar2 = ossl_ctype_check(iVar5,0x10);
        if (iVar2 == 0) goto LAB_001000a6;
        iVar2 = ossl_tolower(iVar5);
        uVar6 = iVar2 - 0x57;
      }
      else {
        uVar6 = iVar5 - 0x30;
      }
      if ((uint)lVar9 <= uVar6) goto LAB_001000a6;
      uVar4 = uVar4 * lVar9 + (long)(int)uVar6;
    } while( true );
  }
  uVar4 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
  goto LAB_00100153;
LAB_00100232:
  if (cVar1 == '~') {
    *(ulong *)(local_50 + 8) = ~uVar7 & *(ulong *)(local_50 + 8);
    cVar1 = *pcVar3;
  }
  else {
    *(int *)(local_50 + 8) = (int)uVar7;
    *(int *)(local_50 + 0xc) = (int)(uVar7 >> 0x20);
    cVar1 = *pcVar3;
  }
  if (cVar1 == '\0') {
    if (local_40 != 8) {
      iVar2 = local_40 + 2;
      local_50 = local_50 + 8;
      goto LAB_00100118;
    }
    goto LAB_00100142;
  }
  while (cVar1 != ':') {
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 1;
    if (cVar1 == '\0') {
      local_50 = local_50 + 8;
      iVar2 = local_40 + 2;
      if (local_40 != 8) goto LAB_00100118;
      goto LAB_00100142;
    }
  }
LAB_00100290:
  local_40 = local_40 + 2;
  if (local_40 == 10) goto LAB_00100142;
  local_50 = local_50 + 8;
  pcVar3 = pcVar3 + 1;
  goto LAB_00100180;
LAB_001000a6:
  if (cVar1 == '~') {
    uVar7 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
    if ((uVar4 & 0x1000000) == 0) {
      cVar1 = *pcVar3;
      uVar4 = uVar7 & ~uVar4;
    }
    else {
      cVar1 = *pcVar3;
      uVar4 = uVar7 & ~uVar4 & 0xedfff7fdffffffff;
    }
  }
  else {
    cVar1 = *pcVar3;
    if (cVar1 == ':') {
      uVar4 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
      cVar1 = *pcVar3;
    }
  }
  while (cVar1 != '\0') {
    if (cVar1 == ':') {
      pcVar3 = pcVar3 + 1;
      goto LAB_00100105;
    }
    pcVar8 = pcVar3 + 1;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar8;
  }
  pcVar3 = (char *)0x0;
LAB_00100105:
  local_50 = &OPENSSL_ia32cap_P;
  iVar2 = 2;
  if (pcVar3 != (char *)0x0) {
    local_40 = 2;
LAB_00100180:
    cVar1 = *pcVar3;
    while (cVar1 == '\0') {
      local_40 = local_40 + 2;
      *(undefined8 *)(local_50 + 8) = 0;
      if (local_40 == 10) goto LAB_00100142;
      local_50 = local_50 + 8;
      cVar1 = *pcVar3;
    }
    if (cVar1 != ':') {
      local_3c = 10;
      pcVar8 = pcVar3 + (cVar1 == '~');
      if (*pcVar8 == '0') {
        iVar2 = ossl_tolower((int)pcVar8[1]);
        if (iVar2 == 0x78) {
          local_3c = 0x10;
          pcVar8 = pcVar8 + 2;
        }
        else {
          local_3c = 8;
          pcVar8 = pcVar8 + 1;
        }
      }
      uVar7 = 0;
      do {
        iVar5 = (int)*pcVar8;
        pcVar8 = pcVar8 + 1;
        iVar2 = ossl_isdigit(iVar5);
        if (iVar2 == 0) {
          iVar2 = ossl_ctype_check(iVar5,0x10);
          if (iVar2 == 0) goto LAB_00100232;
          iVar2 = ossl_tolower(iVar5);
          uVar6 = iVar2 - 0x57;
        }
        else {
          uVar6 = iVar5 - 0x30;
        }
        if (local_3c <= uVar6) goto LAB_00100232;
        uVar7 = uVar7 * local_3c + (long)(int)uVar6;
      } while( true );
    }
    goto LAB_00100290;
  }
LAB_00100118:
  iVar5 = iVar2 + 2;
  *(undefined8 *)(local_50 + 8) = 0;
  if ((iVar2 != 8) &&
     ((iVar5 == 8 ||
      (*(undefined1 (*) [16])(&OPENSSL_ia32cap_P + (long)iVar5 * 4) = (undefined1  [16])0x0,
      iVar5 != 6)))) {
    _DAT_00101038 = 0;
  }
LAB_00100142:
  if ((DAT_00101032 & 8) == 0) {
    _DAT_00101038 = _DAT_00101038 & 0xffffffff;
  }
LAB_00100153:
  _OPENSSL_ia32cap_P = (uint)uVar4 | 0x400;
  _DAT_0010101c = (int)(uVar4 >> 0x20);
  return;
}


