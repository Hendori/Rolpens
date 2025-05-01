
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong pcre2_config_16(uint param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    switch((ulong)param_1) {
    case 0:
    case 1:
    case 9:
      *param_2 = 1;
      break;
    case 2:
      uVar3 = _pcre2_jit_get_target_16();
      iVar1 = _pcre2_strcpy_c8_16(param_2,uVar3);
      return (ulong)(iVar1 + 1);
    case 3:
    case 5:
      *param_2 = 2;
      break;
    case 4:
    case 7:
      *param_2 = 10000000;
      break;
    case 6:
      *param_2 = 0xfa;
      break;
    case 8:
    case 0xd:
    case 0xe:
      *param_2 = 0;
      break;
    case 10:
      iVar1 = _pcre2_strcpy_c8_16(param_2,__pcre2_unicode_version_16);
      return (ulong)(iVar1 + 1);
    case 0xb:
      iVar1 = _pcre2_strcpy_c8_16(param_2,"10.43 2024-02-16");
      return (ulong)(iVar1 + 1);
    case 0xc:
      *param_2 = 20000000;
      break;
    case 0xf:
      *param_2 = 0x440;
      break;
    default:
      return 0xffffffde;
    }
    return 0;
  }
  if (param_1 < 0x10) {
    uVar2 = 4;
    uVar4 = 1L << ((byte)param_1 & 0x3f);
    if (((uVar4 & 0xf3fb) == 0) && (uVar2 = 0xffffffde, (uVar4 & 0xc04) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00100065. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_001001bc + *(int *)(&DAT_001001bc + (ulong)param_1 * 4)))();
      return uVar2;
    }
  }
  else {
    uVar2 = 0xffffffde;
  }
  return uVar2;
}



undefined8 pcre2_config_16_cold(void)

{
  return 0xffffffde;
}


