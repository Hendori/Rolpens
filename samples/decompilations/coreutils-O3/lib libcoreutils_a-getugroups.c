
int getugroups(int param_1,__gid_t *param_2,char *param_3,__gid_t param_4)

{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  group *pgVar4;
  __gid_t *p_Var5;
  char **ppcVar6;
  int iVar7;
  int iVar8;
  int *local_40;
  
  if (param_4 == 0xffffffff) {
    iVar7 = 0;
    iVar8 = 0;
LAB_00100032:
    setgrent();
    local_40 = __errno_location();
    if (param_2 != (__gid_t *)0x0) goto LAB_001000ce;
    while( true ) {
      *local_40 = 0;
      pgVar4 = getgrent();
      if (pgVar4 == (group *)0x0) break;
      ppcVar6 = pgVar4->gr_mem;
      pcVar2 = *ppcVar6;
      while (pcVar2 != (char *)0x0) {
        iVar3 = strcmp(param_3,pcVar2);
        if (iVar3 == 0) {
          if (iVar8 < 1) {
            if (iVar8 != 0) goto LAB_00100078;
            if (param_1 != 0) goto LAB_001001bc;
          }
          else if (param_1 == 0) {
            if (iVar8 == 0x7fffffff) goto LAB_00100179;
          }
          else {
LAB_001001bc:
            if (param_1 <= iVar8) goto LAB_001001e7;
            *(__gid_t *)((long)iVar8 * 4) = pgVar4->gr_gid;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar8;
        }
LAB_00100078:
        ppcVar1 = ppcVar6 + 1;
        ppcVar6 = ppcVar6 + 1;
        pcVar2 = *ppcVar1;
      }
    }
  }
  else {
    if (param_1 == 0) {
      iVar7 = 1;
      iVar8 = 1;
      goto LAB_00100032;
    }
    *param_2 = param_4;
    iVar7 = 1;
    iVar8 = 1;
    setgrent();
    local_40 = __errno_location();
LAB_001000ce:
    while( true ) {
      *local_40 = 0;
      pgVar4 = getgrent();
      if (pgVar4 == (group *)0x0) break;
      ppcVar6 = pgVar4->gr_mem;
      pcVar2 = *ppcVar6;
      while (pcVar2 != (char *)0x0) {
        iVar3 = strcmp(param_3,pcVar2);
        if (iVar3 == 0) {
          if (iVar8 < 1) {
            if (iVar8 != 0) goto LAB_00100100;
LAB_001001d9:
            if (param_1 != 0) {
              if (iVar8 < param_1) goto LAB_0010015e;
              goto LAB_001001e7;
            }
          }
          else {
            iVar3 = 0;
            p_Var5 = param_2;
            do {
              if (*p_Var5 == pgVar4->gr_gid) {
                if (iVar8 != iVar3) goto LAB_00100100;
                goto LAB_001001d9;
              }
              iVar3 = iVar3 + 1;
              p_Var5 = p_Var5 + 1;
            } while (iVar8 != iVar3);
            if (param_1 == 0) {
              if (iVar8 == 0x7fffffff) goto LAB_00100179;
            }
            else {
              if (param_1 <= iVar8) goto LAB_001001e7;
LAB_0010015e:
              param_2[iVar8] = pgVar4->gr_gid;
            }
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar8;
        }
LAB_00100100:
        ppcVar1 = ppcVar6 + 1;
        ppcVar6 = ppcVar6 + 1;
        pcVar2 = *ppcVar1;
      }
    }
  }
  iVar8 = iVar7;
  iVar7 = *local_40;
  if (iVar7 != 0) {
    iVar8 = -1;
  }
  goto LAB_0010018f;
LAB_00100179:
  iVar7 = 0x4b;
  iVar8 = 0x7fffffff;
  *local_40 = 0x4b;
  goto LAB_0010018f;
LAB_001001e7:
  iVar7 = *local_40;
LAB_0010018f:
  endgrent();
  *local_40 = iVar7;
  return iVar8;
}


