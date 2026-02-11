
long rpl_mbsrtowcs(long param_1,undefined8 *param_2,long param_3,undefined8 *param_4)

{
  int *piVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  pcVar3 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == (undefined8 *)0x0) {
    param_4 = (undefined8 *)&_gl_mbsrtowcs_state;
  }
  if (param_1 == 0) {
    local_48 = *param_4;
    lVar4 = 0;
    while( true ) {
      lVar2 = 1;
      if ((((*pcVar3 != '\0') && (lVar2 = 2, pcVar3[1] != '\0')) && (lVar2 = 3, pcVar3[2] != '\0'))
         && (lVar2 = 4, pcVar3[3] != '\0')) {
        lVar2 = strnlen1(pcVar3 + 4,0xc,4);
        lVar2 = lVar2 + 4;
      }
      lVar2 = rpl_mbrtowc(0,pcVar3,lVar2,&local_48);
      if (lVar2 == -2) goto rpl_mbsrtowcs_cold;
      if (lVar2 == -1) goto LAB_00100183;
      if (lVar2 == 0) break;
      pcVar3 = pcVar3 + lVar2;
      lVar4 = lVar4 + 1;
    }
  }
  else {
    lVar4 = param_1;
    if (param_3 == 0) {
      lVar4 = 0;
    }
    else {
      do {
        lVar2 = 1;
        if (((*pcVar3 != '\0') && (lVar2 = 2, pcVar3[1] != '\0')) &&
           ((lVar2 = 3, pcVar3[2] != '\0' && (lVar2 = 4, pcVar3[3] != '\0')))) {
          lVar2 = strnlen1(pcVar3 + 4,0xc,4);
          lVar2 = lVar2 + 4;
        }
        lVar2 = rpl_mbrtowc(lVar4,pcVar3,lVar2,param_4);
        if (lVar2 == -2) {
rpl_mbsrtowcs_cold:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar2 == -1) {
          *param_2 = pcVar3;
LAB_00100183:
          piVar1 = __errno_location();
          lVar4 = -1;
          *piVar1 = 0x54;
          goto LAB_001000ca;
        }
        if (lVar2 == 0) {
          pcVar3 = (char *)0x0;
          lVar4 = lVar4 - param_1 >> 2;
          goto LAB_001000c7;
        }
        pcVar3 = pcVar3 + lVar2;
        lVar4 = lVar4 + 4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      lVar4 = lVar4 - param_1 >> 2;
    }
LAB_001000c7:
    *param_2 = pcVar3;
  }
LAB_001000ca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rpl_mbsrtowcs_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


