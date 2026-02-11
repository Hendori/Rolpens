
FILE * rpl_fopen(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  int __fd;
  char *pcVar4;
  FILE *pFVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  char *__s;
  ulong uVar12;
  uint uVar13;
  long in_FS_OFFSET;
  char local_98 [80];
  char local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    bVar3 = false;
    uVar11 = 0;
    uVar13 = 0;
    uVar8 = 0x51;
    pcVar10 = local_98;
    __s = param_2;
    if (cVar1 == '+') goto LAB_00100158;
    do {
      switch(cVar1) {
      case 'a':
        uVar11 = uVar11 | 0x440;
        uVar13 = 1;
        if (pcVar10 < local_48) {
          *pcVar10 = 'a';
          uVar6 = 0x51;
          if (0x50 < uVar8) {
            uVar6 = uVar8;
          }
          uVar12 = (uVar6 - uVar8) + 1;
          if (uVar12 < uVar6) {
            uVar12 = uVar6;
          }
          pcVar10 = pcVar10 + 1;
          uVar8 = ((uVar8 - 1) - uVar6) + uVar12;
        }
        break;
      case 'b':
        if (pcVar10 < local_48) {
          *pcVar10 = 'b';
          uVar6 = 0x51;
          if (0x50 < uVar8) {
            uVar6 = uVar8;
          }
          uVar12 = (uVar6 - uVar8) + 1;
          if (uVar12 < uVar6) {
            uVar12 = uVar6;
          }
          pcVar10 = pcVar10 + 1;
          uVar8 = ((uVar8 - 1) - uVar6) + uVar12;
        }
        break;
      default:
        goto switchD_00100071_caseD_63;
      case 'e':
        uVar11 = uVar11 | 0x80000;
        bVar3 = true;
        break;
      case 'r':
        uVar13 = 0;
        if (pcVar10 < local_48) {
          *pcVar10 = 'r';
          uVar6 = 0x51;
          if (0x50 < uVar8) {
            uVar6 = uVar8;
          }
          uVar12 = (uVar6 - uVar8) + 1;
          if (uVar12 < uVar6) {
            uVar12 = uVar6;
          }
          pcVar10 = pcVar10 + 1;
          uVar8 = ((uVar8 - 1) - uVar6) + uVar12;
        }
        break;
      case 'w':
        uVar11 = uVar11 | 0x240;
        uVar13 = 1;
        if (pcVar10 < local_48) {
          *pcVar10 = 'w';
          uVar6 = 0x51;
          if (0x50 < uVar8) {
            uVar6 = uVar8;
          }
          uVar12 = (uVar6 - uVar8) + 1;
          if (uVar12 < uVar6) {
            uVar12 = uVar6;
          }
          pcVar10 = pcVar10 + 1;
          uVar8 = ((uVar8 - 1) - uVar6) + uVar12;
        }
        break;
      case 'x':
        uVar11 = uVar11 | 0x80;
        bVar3 = true;
      }
      while( true ) {
        cVar1 = __s[1];
        __s = __s + 1;
        if (cVar1 == '\0') goto LAB_001000c3;
        if (cVar1 != '+') break;
LAB_00100158:
        uVar13 = 2;
        if (pcVar10 < local_48) {
          *pcVar10 = '+';
          uVar6 = 0x51;
          if (0x50 < uVar8) {
            uVar6 = uVar8;
          }
          uVar12 = (uVar6 - uVar8) + 1;
          if (uVar12 < uVar6) {
            uVar12 = uVar6;
          }
          pcVar10 = pcVar10 + 1;
          uVar8 = ((uVar8 - 1) - uVar6) + uVar12;
        }
      }
    } while( true );
  }
  local_98[0] = '\0';
LAB_001002f0:
  pFVar5 = fopen(param_1,param_2);
LAB_00100101:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pFVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100071_caseD_63:
  pcVar4 = (char *)strlen(__s);
  pcVar9 = local_48 + -(long)pcVar10;
  if (pcVar4 < local_48 + -(long)pcVar10) {
    pcVar9 = pcVar4;
  }
  __memcpy_chk(pcVar10,__s,pcVar9,uVar8);
  pcVar10 = pcVar10 + (long)pcVar9;
LAB_001000c3:
  *pcVar10 = '\0';
  if (bVar3) {
    pFVar5 = (FILE *)0x0;
    __fd = open(param_1,uVar13 | uVar11,0x1b6);
    if ((-1 < __fd) && (pFVar5 = fdopen(__fd,local_98), pFVar5 == (FILE *)0x0)) {
      piVar7 = __errno_location();
      iVar2 = *piVar7;
      close(__fd);
      *piVar7 = iVar2;
    }
    goto LAB_00100101;
  }
  goto LAB_001002f0;
}


