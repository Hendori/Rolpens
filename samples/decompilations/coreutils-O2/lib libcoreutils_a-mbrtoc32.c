
ulong rpl_mbrtoc32(uint *param_1,byte *param_2,long param_3,mbstate_t *param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  uint *puVar5;
  long lVar6;
  
  pbVar4 = &_LC0;
  puVar5 = (uint *)0x0;
  lVar6 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar4 = param_2;
    puVar5 = param_1;
    lVar6 = param_3;
  }
  if (param_4 == (mbstate_t *)0x0) {
    param_4 = (mbstate_t *)&internal_state;
  }
  uVar3 = mbrtoc32(puVar5,pbVar4,lVar6,param_4);
  if (uVar3 < 0xfffffffffffffffd) {
    iVar2 = mbsinit(param_4);
    if (iVar2 == 0) {
      param_4->__count = 0;
      param_4->__value = (_union_27)0x0;
      return uVar3;
    }
  }
  else {
    if (uVar3 == 0xfffffffffffffffd) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 != 0) {
      cVar1 = hard_locale(0);
      if (cVar1 == '\0') {
        if (puVar5 != (uint *)0x0) {
          *puVar5 = (uint)*pbVar4;
        }
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_mbrtoc32_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


