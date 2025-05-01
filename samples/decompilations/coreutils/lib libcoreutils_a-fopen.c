
/* WARNING: Unknown calling convention */

FILE * rpl_fopen(char *filename,char *mode)

{
  char cVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int __fd;
  char *pcVar5;
  FILE *pFVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  char *__s;
  ulong uVar13;
  uint uVar14;
  long in_FS_OFFSET;
  char fdopen_mode_buf [81];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *mode;
  if (cVar1 != '\0') {
    bVar4 = false;
    uVar12 = 0;
    uVar14 = 0;
    uVar9 = 0x51;
    pcVar11 = fdopen_mode_buf;
    __s = mode;
    if (cVar1 == '+') goto LAB_00100158;
    do {
      switch(cVar1) {
      case 'a':
        uVar12 = uVar12 | 0x440;
        uVar14 = 1;
        if (pcVar11 < fdopen_mode_buf + 0x50) {
          *pcVar11 = 'a';
          uVar7 = 0x51;
          if (0x50 < uVar9) {
            uVar7 = uVar9;
          }
          uVar13 = (uVar7 - uVar9) + 1;
          if (uVar13 < uVar7) {
            uVar13 = uVar7;
          }
          pcVar11 = pcVar11 + 1;
          uVar9 = ((uVar9 - 1) - uVar7) + uVar13;
        }
        break;
      case 'b':
        if (pcVar11 < fdopen_mode_buf + 0x50) {
          *pcVar11 = 'b';
          uVar7 = 0x51;
          if (0x50 < uVar9) {
            uVar7 = uVar9;
          }
          uVar13 = (uVar7 - uVar9) + 1;
          if (uVar13 < uVar7) {
            uVar13 = uVar7;
          }
          pcVar11 = pcVar11 + 1;
          uVar9 = ((uVar9 - 1) - uVar7) + uVar13;
        }
        break;
      default:
        goto switchD_00100071_caseD_63;
      case 'e':
        uVar12 = uVar12 | 0x80000;
        bVar4 = true;
        break;
      case 'r':
        uVar14 = 0;
        if (pcVar11 < fdopen_mode_buf + 0x50) {
          *pcVar11 = 'r';
          uVar7 = 0x51;
          if (0x50 < uVar9) {
            uVar7 = uVar9;
          }
          uVar13 = (uVar7 - uVar9) + 1;
          if (uVar13 < uVar7) {
            uVar13 = uVar7;
          }
          pcVar11 = pcVar11 + 1;
          uVar9 = ((uVar9 - 1) - uVar7) + uVar13;
        }
        break;
      case 'w':
        uVar12 = uVar12 | 0x240;
        uVar14 = 1;
        if (pcVar11 < fdopen_mode_buf + 0x50) {
          *pcVar11 = 'w';
          uVar7 = 0x51;
          if (0x50 < uVar9) {
            uVar7 = uVar9;
          }
          uVar13 = (uVar7 - uVar9) + 1;
          if (uVar13 < uVar7) {
            uVar13 = uVar7;
          }
          pcVar11 = pcVar11 + 1;
          uVar9 = ((uVar9 - 1) - uVar7) + uVar13;
        }
        break;
      case 'x':
        uVar12 = uVar12 | 0x80;
        bVar4 = true;
      }
      while( true ) {
        cVar1 = __s[1];
        __s = __s + 1;
        if (cVar1 == '\0') goto LAB_001000c3;
        if (cVar1 != '+') break;
LAB_00100158:
        uVar14 = 2;
        if (pcVar11 < fdopen_mode_buf + 0x50) {
          *pcVar11 = '+';
          uVar7 = 0x51;
          if (0x50 < uVar9) {
            uVar7 = uVar9;
          }
          uVar13 = (uVar7 - uVar9) + 1;
          if (uVar13 < uVar7) {
            uVar13 = uVar7;
          }
          pcVar11 = pcVar11 + 1;
          uVar9 = ((uVar9 - 1) - uVar7) + uVar13;
        }
      }
    } while( true );
  }
  fdopen_mode_buf[0] = '\0';
LAB_001002f0:
  pFVar6 = fopen(filename,mode);
LAB_00100101:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (FILE *)pFVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00100071_caseD_63:
  pcVar5 = (char *)strlen(__s);
  pcVar10 = fdopen_mode_buf + (0x50 - (long)pcVar11);
  if (pcVar5 < fdopen_mode_buf + (0x50 - (long)pcVar11)) {
    pcVar10 = pcVar5;
  }
  __memcpy_chk(pcVar11,__s,pcVar10,uVar9);
  pcVar11 = pcVar11 + (long)pcVar10;
LAB_001000c3:
  *pcVar11 = '\0';
  if (bVar4) {
    pFVar6 = (FILE *)0x0;
    __fd = open(filename,uVar14 | uVar12,0x1b6);
    if ((-1 < __fd) && (pFVar6 = fdopen(__fd,fdopen_mode_buf), pFVar6 == (FILE *)0x0)) {
      piVar8 = __errno_location();
      iVar2 = *piVar8;
      close(__fd);
      *piVar8 = iVar2;
    }
    goto LAB_00100101;
  }
  goto LAB_001002f0;
}


