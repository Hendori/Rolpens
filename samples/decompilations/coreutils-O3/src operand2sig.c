
uint operand2sig(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *__ptr;
  char *pcVar8;
  char cVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  uint local_3c;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*param_1 - 0x30U < 10) {
    piVar4 = __errno_location();
    *piVar4 = 0;
    lVar5 = __isoc23_strtol(param_1,&local_38,10);
    if (((local_38 == param_1) || (*local_38 != '\0')) ||
       ((*piVar4 != 0 || ((uVar1 = (uint)lVar5, (int)uVar1 != lVar5 || (uVar1 == 0xffffffff)))))) {
      local_3c = 0xffffffff;
    }
    else {
      uVar3 = 0x7f;
      if (0xfe < (int)uVar1) {
        uVar3 = 0xff;
      }
      uVar3 = uVar3 & uVar1;
      local_3c = uVar3;
LAB_00100122:
      if (uVar3 < 0x41) goto LAB_0010012b;
    }
  }
  else {
    __ptr = (char *)xstrdup();
    cVar9 = *__ptr;
    pcVar8 = __ptr;
    while (pcVar10 = pcVar8, cVar9 != '\0') {
      while (pcVar8 = strchr("abcdefghijklmnopqrstuvwxyz",(int)cVar9), pcVar8 != (char *)0x0) {
        *pcVar10 = cVar9 + -0x20;
        cVar9 = pcVar10[1];
        pcVar10 = pcVar10 + 1;
        if (cVar9 == '\0') goto LAB_001000fa;
      }
      pcVar8 = pcVar10 + 1;
      cVar9 = pcVar10[1];
    }
LAB_001000fa:
    iVar2 = str2sig(__ptr,&local_3c);
    if ((iVar2 == 0) ||
       ((((*__ptr == 'S' && (__ptr[1] == 'I')) && (__ptr[2] == 'G')) &&
        (iVar2 = str2sig(__ptr + 3,&local_3c), iVar2 == 0)))) {
      uVar3 = local_3c;
      free(__ptr);
      goto LAB_00100122;
    }
    local_3c = 0xffffffff;
    free(__ptr);
  }
  uVar6 = quote(param_1);
  uVar7 = dcgettext(0,"%s: invalid signal",5);
  error(0,0,uVar7,uVar6);
  uVar3 = 0xffffffff;
LAB_0010012b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


