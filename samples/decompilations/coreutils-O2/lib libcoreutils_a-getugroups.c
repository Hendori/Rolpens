
int getugroups(int param_1,int *param_2,char *param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  group *pgVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  char *__s2;
  ulong uVar9;
  char **ppcVar10;
  
  iVar8 = 0;
  iVar7 = 0;
  if (param_4 != -1) {
    if (param_1 != 0) {
      *param_2 = param_4;
    }
    iVar8 = 1;
    iVar7 = 1;
  }
  setgrent();
  piVar2 = __errno_location();
  do {
    do {
      *piVar2 = 0;
      pgVar3 = getgrent();
      if (pgVar3 == (group *)0x0) {
        iVar1 = *piVar2;
        if (iVar1 != 0) {
          iVar8 = -1;
        }
LAB_0010010c:
        endgrent();
        *piVar2 = iVar1;
        return iVar8;
      }
      ppcVar10 = pgVar3->gr_mem;
      __s2 = *ppcVar10;
    } while (__s2 == (char *)0x0);
    do {
      iVar1 = strcmp(param_3,__s2);
      if (iVar1 == 0) {
        if (iVar7 < 1) {
          if (iVar7 == 0) {
LAB_001000c3:
            if (param_1 != 0) {
LAB_001000c8:
              if (param_1 <= iVar7) {
                iVar1 = *piVar2;
                iVar8 = iVar7;
                goto LAB_0010010c;
              }
              param_2[iVar7] = pgVar3->gr_gid;
            }
LAB_001000dc:
            iVar7 = iVar7 + 1;
            iVar8 = iVar7;
          }
        }
        else {
          uVar9 = (ulong)iVar7;
          if (param_2 == (int *)0x0) {
            iVar1 = 0;
            lVar6 = 0;
            if ((uVar9 & 1) == 0) {
              lVar6 = 1;
              iVar1 = 1;
            }
            while (lVar6 + 1U != uVar9) {
              lVar6 = lVar6 + 2;
              iVar1 = (int)lVar6;
            }
LAB_001000eb:
            if (iVar7 == iVar1 + 1) {
              if (param_1 != 0) goto LAB_001000c8;
              if (iVar7 != 0x7fffffff) goto LAB_001000dc;
              iVar1 = 0x4b;
              *piVar2 = 0x4b;
              iVar8 = iVar7;
              goto LAB_0010010c;
            }
          }
          else {
            uVar4 = 0;
            uVar5 = 0;
            iVar1 = 0;
            while (param_2[uVar5] != pgVar3->gr_gid) {
              uVar5 = uVar5 + 1;
              if (uVar5 == uVar9) {
                iVar1 = (int)uVar4;
                goto LAB_001000eb;
              }
              iVar1 = (int)uVar5;
              uVar4 = uVar5 & 0xffffffff;
            }
            if (iVar7 == iVar1) goto LAB_001000c3;
          }
        }
      }
      __s2 = ppcVar10[1];
      ppcVar10 = ppcVar10 + 1;
    } while (__s2 != (char *)0x0);
  } while( true );
}


