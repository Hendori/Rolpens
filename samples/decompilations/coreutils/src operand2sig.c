
/* WARNING: Unknown calling convention */

int operand2sig(char *operand)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__ptr;
  char *pcVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  int signum;
  char *endp;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*operand - 0x30U < 10) {
    piVar5 = __errno_location();
    *piVar5 = 0;
    lVar6 = __isoc23_strtol(operand,&endp,10);
    if (((endp == operand) || (*endp != '\0')) ||
       ((*piVar5 != 0 || ((uVar2 = (uint)lVar6, (int)uVar2 != lVar6 || (uVar2 == 0xffffffff)))))) {
      signum = -1;
    }
    else {
      uVar4 = 0x7f;
      if (0xfe < (int)uVar2) {
        uVar4 = 0xff;
      }
      uVar4 = uVar4 & uVar2;
      signum = uVar4;
LAB_00100122:
      if (uVar4 < 0x41) goto LAB_0010012b;
    }
  }
  else {
    __ptr = (char *)xstrdup();
    cVar1 = *__ptr;
    pcVar10 = __ptr;
    while (cVar1 != '\0') {
      pcVar9 = strchr("abcdefghijklmnopqrstuvwxyz",(int)cVar1);
      if (pcVar9 != (char *)0x0) {
        *pcVar10 = cVar1 + -0x20;
      }
      pcVar9 = pcVar10 + 1;
      pcVar10 = pcVar10 + 1;
      cVar1 = *pcVar9;
    }
    iVar3 = str2sig(__ptr,&signum);
    if ((iVar3 == 0) ||
       ((((*__ptr == 'S' && (__ptr[1] == 'I')) && (__ptr[2] == 'G')) &&
        (iVar3 = str2sig(__ptr + 3,&signum), iVar3 == 0)))) {
      uVar4 = signum;
      free(__ptr);
      goto LAB_00100122;
    }
    signum = -1;
    free(__ptr);
  }
  uVar7 = quote(operand);
  uVar8 = dcgettext(0,"%s: invalid signal",5);
  error(0,0,uVar8,uVar7);
  uVar4 = 0xffffffff;
LAB_0010012b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


