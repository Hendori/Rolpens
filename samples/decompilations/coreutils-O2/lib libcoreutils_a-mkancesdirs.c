
/* WARNING: Type propagation algorithm not settling */

long mkancesdirs(char *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  bool bVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  int local_3c;
  
  cVar6 = *param_1;
  if (cVar6 == '\0') {
    return 0;
  }
  pcVar14 = param_1 + 1;
  bVar3 = false;
  pcVar11 = (char *)0x0;
  pcVar13 = param_1;
LAB_00100061:
  cVar5 = cVar6;
  cVar9 = *pcVar14;
  if (*pcVar14 != '/') goto LAB_00100040;
  if (cVar6 == '/') goto LAB_00100098;
  do {
    cVar9 = pcVar14[1];
    pcVar11 = pcVar14;
    while (pcVar14 = pcVar14 + 1, cVar9 == '/') {
LAB_00100098:
      cVar9 = pcVar14[1];
    }
    cVar5 = '/';
LAB_00100040:
    do {
      cVar6 = cVar9;
      if (cVar9 == '\0' || cVar5 != '/') {
joined_r0x0010005b:
        pcVar14 = pcVar14 + 1;
        if (cVar6 == '\0') {
          return (long)pcVar13 - (long)param_1;
        }
        goto LAB_00100061;
      }
      if (pcVar11 != (char *)0x0) {
        if ((long)pcVar11 - (long)pcVar13 == 1) {
          if (*pcVar13 == '.') {
            pcVar1 = pcVar14 + 1;
            pcVar2 = pcVar14 + 1;
            pcVar13 = pcVar14;
            pcVar14 = pcVar2;
            cVar5 = cVar9;
            cVar9 = *pcVar1;
            if (*pcVar1 == '/') break;
            goto LAB_00100040;
          }
          *pcVar11 = '\0';
LAB_001000de:
          iVar7 = (*param_3)(param_1,pcVar13,param_4);
          local_3c = 0;
          bVar10 = true;
          bVar4 = cVar9 != '\0' && cVar5 == '/';
          if (iVar7 < 0) {
            piVar8 = __errno_location();
            local_3c = *piVar8;
            bVar10 = bVar3;
            bVar4 = bVar3;
          }
        }
        else {
          *pcVar11 = '\0';
          if ((((long)pcVar11 - (long)pcVar13 != 2) || (*pcVar13 != '.')) || (pcVar13[1] != '.'))
          goto LAB_001000de;
          local_3c = 0;
          bVar4 = false;
          bVar10 = false;
        }
        iVar7 = savewd_chdir(param_2,pcVar13,bVar10,0);
        if (iVar7 == -1) {
          lVar12 = -1;
LAB_001001ed:
          if (local_3c == 0) {
            return lVar12;
          }
          piVar8 = __errno_location();
          if (*piVar8 != 2) {
            return lVar12;
          }
          *piVar8 = local_3c;
          return lVar12;
        }
        *pcVar11 = '/';
        if (iVar7 != 0) {
          lVar12 = (long)iVar7;
          goto LAB_001001ed;
        }
        pcVar13 = pcVar14;
        cVar6 = *pcVar14;
        bVar3 = bVar4;
        goto joined_r0x0010005b;
      }
      pcVar1 = pcVar14 + 1;
      pcVar14 = pcVar14 + 1;
      cVar5 = cVar9;
      cVar9 = *pcVar1;
    } while (*pcVar1 != '/');
  } while( true );
}


