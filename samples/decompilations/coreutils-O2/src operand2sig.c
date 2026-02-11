
uint operand2sig(char *param_1)

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
  uint local_3c;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)*param_1 - 0x30U < 10) {
    piVar5 = __errno_location();
    *piVar5 = 0;
    lVar6 = __isoc23_strtol(param_1,&local_38,10);
    if (((local_38 == param_1) || (*local_38 != '\0')) ||
       ((*piVar5 != 0 || ((uVar2 = (uint)lVar6, (int)uVar2 != lVar6 || (uVar2 == 0xffffffff)))))) {
      local_3c = 0xffffffff;
    }
    else {
      uVar4 = 0x7f;
      if (0xfe < (int)uVar2) {
        uVar4 = 0xff;
      }
      uVar4 = uVar4 & uVar2;
      local_3c = uVar4;
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
    iVar3 = str2sig(__ptr,&local_3c);
    if ((iVar3 == 0) ||
       ((((*__ptr == 'S' && (__ptr[1] == 'I')) && (__ptr[2] == 'G')) &&
        (iVar3 = str2sig(__ptr + 3,&local_3c), iVar3 == 0)))) {
      uVar4 = local_3c;
      free(__ptr);
      goto LAB_00100122;
    }
    local_3c = 0xffffffff;
    free(__ptr);
  }
  uVar7 = quote(param_1);
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


