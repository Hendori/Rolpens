
long ossl_strtouint64(char *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 10;
  if (*param_1 == '0') {
    iVar1 = ossl_tolower((int)param_1[1]);
    if (iVar1 == 0x78) {
      param_1 = param_1 + 2;
      lVar4 = 0x10;
    }
    else {
      param_1 = param_1 + 1;
      lVar4 = 8;
    }
  }
  lVar5 = 0;
  while( true ) {
    iVar2 = (int)*param_1;
    param_1 = param_1 + 1;
    iVar1 = ossl_isdigit(iVar2);
    if (iVar1 == 0) {
      iVar1 = ossl_ctype_check(iVar2,0x10);
      if (iVar1 == 0) {
        return lVar5;
      }
      iVar1 = ossl_tolower(iVar2);
      uVar3 = iVar1 - 0x57;
    }
    else {
      uVar3 = iVar2 - 0x30;
    }
    if ((uint)lVar4 <= uVar3) break;
    lVar5 = lVar5 * lVar4 + (long)(int)uVar3;
  }
  return lVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPENSSL_cpuid_setup(void)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;
  undefined8 *puVar5;
  
  if (trigger_0 != 0) {
    return;
  }
  trigger_0 = 1;
  pcVar1 = getenv("OPENSSL_ia32cap");
  if (pcVar1 == (char *)0x0) {
    uVar3 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
    goto LAB_0010017b;
  }
  cVar4 = *pcVar1;
  uVar2 = ossl_strtouint64(pcVar1 + (cVar4 == '~'));
  if (cVar4 == '~') {
    uVar3 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
    uVar3 = uVar3 & ~uVar2;
    if ((uVar2 & 0x1000000) == 0) {
      cVar4 = *pcVar1;
      goto LAB_0010013c;
    }
    cVar4 = *pcVar1;
    uVar3 = uVar3 & 0xedfff7fdffffffff;
    goto LAB_0010013c;
  }
  cVar4 = *pcVar1;
  uVar3 = uVar2;
  if (cVar4 != ':') goto LAB_0010013c;
  uVar3 = OPENSSL_ia32_cpuid(&OPENSSL_ia32cap_P);
  do {
    cVar4 = *pcVar1;
LAB_0010013c:
    if (cVar4 == '\0') {
      pcVar1 = (char *)0x0;
      break;
    }
    pcVar1 = pcVar1 + 1;
  } while (cVar4 != ':');
  puVar5 = (undefined8 *)&OPENSSL_ia32cap_P;
  if (pcVar1 == (char *)0x0) {
LAB_00100210:
    if (((long)&DAT_00101040 - (long)puVar5 & 8U) != 0) {
      puVar5[1] = 0;
      puVar5 = puVar5 + 1;
      if (puVar5 == (undefined8 *)&DAT_00101040) goto LAB_0010016c;
    }
    do {
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      *puVar5 = 0;
    } while (puVar5 != (undefined8 *)&DAT_00101040);
  }
  else {
    do {
      while (cVar4 = *pcVar1, cVar4 != '\0') {
        if (cVar4 != ':') {
          uVar2 = ossl_strtouint64(pcVar1 + (cVar4 == '~'));
          if (cVar4 == '~') {
            puVar5[1] = ~uVar2 & puVar5[1];
            cVar4 = *pcVar1;
          }
          else {
            *(int *)(puVar5 + 1) = (int)uVar2;
            *(int *)((long)puVar5 + 0xc) = (int)(uVar2 >> 0x20);
            cVar4 = *pcVar1;
          }
          while( true ) {
            if (cVar4 == '\0') {
              puVar5 = puVar5 + 1;
              if (puVar5 == (undefined8 *)&DAT_00101040) goto LAB_0010016c;
              goto LAB_00100210;
            }
            if (cVar4 == ':') break;
            cVar4 = pcVar1[1];
            pcVar1 = pcVar1 + 1;
          }
        }
        puVar5 = puVar5 + 1;
        pcVar1 = pcVar1 + 1;
        if (puVar5 == (undefined8 *)&DAT_00101040) goto LAB_0010016c;
      }
      puVar5[1] = 0;
      puVar5 = puVar5 + 1;
    } while (puVar5 != (undefined8 *)&DAT_00101040);
  }
LAB_0010016c:
  if ((DAT_0010103a & 8) == 0) {
    _DAT_00101044 = 0;
  }
LAB_0010017b:
  _DAT_00101024 = (int)(uVar3 >> 0x20);
  _OPENSSL_ia32cap_P = (uint)uVar3 | 0x400;
  return;
}


