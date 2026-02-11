
int renameatu(int param_1,char *param_2,int param_3,char *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  stat local_168;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = renameat2();
  if (-1 < iVar2) goto LAB_00100110;
  piVar3 = __errno_location();
  bVar1 = (*piVar3 - 0x16U & 0xffffffef) != 0 && *piVar3 != 0x5f;
  if (bVar1) goto LAB_00100110;
  if (param_5 == 0) {
LAB_001000ba:
    sVar4 = strlen(param_2);
    sVar5 = strlen(param_4);
    if (((sVar4 == 0) || (sVar5 == 0)) ||
       ((param_2[sVar4 - 1] != '/' && (param_4[sVar5 - 1] != '/')))) {
LAB_001000fa:
      iVar2 = renameat(param_1,param_2,param_3,param_4);
      goto LAB_00100110;
    }
    iVar2 = fstatat(param_1,param_2,&local_168,0x100);
    if (iVar2 == 0) {
      if (bVar1) {
        if ((local_168.st_mode & 0xf000) == 0x4000) goto LAB_001000fa;
        *piVar3 = 2;
      }
      else {
        iVar2 = fstatat(param_3,param_4,&local_d8,0x100);
        if (iVar2 == 0) {
          if ((local_d8.st_mode & 0xf000) == 0x4000) {
            if ((local_168.st_mode & 0xf000) == 0x4000) goto LAB_001000fa;
            *piVar3 = 0x15;
          }
          else {
            *piVar3 = 0x14;
          }
        }
        else if ((*piVar3 == 2) && ((local_168.st_mode & 0xf000) == 0x4000)) goto LAB_001000fa;
      }
    }
  }
  else if (param_5 == 1) {
    iVar2 = fstatat(param_3,param_4,&local_d8,0x100);
    if ((iVar2 == 0) || (*piVar3 == 0x4b)) {
      *piVar3 = 0x11;
    }
    else if (*piVar3 == 2) {
      bVar1 = true;
      goto LAB_001000ba;
    }
  }
  else {
    *piVar3 = 0x5f;
  }
  iVar2 = -1;
LAB_00100110:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}


