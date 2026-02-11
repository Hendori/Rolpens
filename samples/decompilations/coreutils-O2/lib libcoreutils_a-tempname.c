
int try_nocreate(char *param_1)

{
  int iVar1;
  int *piVar2;
  long in_FS_OFFSET;
  stat sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = lstat(param_1,&sStack_a8);
  if (iVar1 == 0) {
    piVar2 = __errno_location();
  }
  else {
    piVar2 = __errno_location();
    if (*piVar2 != 0x4b) {
      iVar1 = -(uint)(*piVar2 != 2);
      goto LAB_0010003a;
    }
  }
  *piVar2 = 0x11;
  iVar1 = -1;
LAB_0010003a:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void try_dir(char *param_1)

{
  mkdir(param_1,0x1c0);
  return;
}



void try_file(char *param_1,uint *param_2)

{
  open(param_1,*param_2 & 0xffffff3c | 0xc2,0x180);
  return;
}



undefined8
try_tempname_len(char *param_1,int param_2,undefined8 param_3,code *param_4,ulong param_5)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  ulong unaff_R13;
  ulong uVar10;
  long in_FS_OFFSET;
  int local_70;
  ulong local_60;
  timespec local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = __errno_location();
  local_60 = 0;
  iVar1 = *piVar2;
  sVar3 = strlen(param_1);
  if ((long)param_2 + param_5 <= sVar3) {
    lVar4 = sVar3 - ((long)param_2 + param_5);
    sVar3 = strspn(param_1 + lVar4,"X");
    if (param_5 <= sVar3) {
      local_70 = 0x3a2f8;
      iVar9 = 0;
      do {
        if (param_5 != 0) {
          pcVar8 = param_1 + lVar4;
          uVar10 = unaff_R13;
          do {
            if (iVar9 == 0) {
              do {
                uVar10 = local_60;
                lVar5 = getrandom(&local_60,8,1);
                if (lVar5 != 8) {
                  clock_gettime(0,&local_58);
                  uVar10 = (uVar10 * 0x27bb2ee687b0b0fd + 0xb504f32d ^ local_58.tv_sec) *
                           0x27bb2ee687b0b0fd + 0xb504f32d ^ local_58.tv_nsec;
                  local_60 = clock();
                  local_60 = uVar10 * 0x27bb2ee687b0b0fd + 0xb504f32d ^ local_60;
                  break;
                }
              } while (0xf49998db0aa753ff < local_60);
              iVar9 = 9;
              uVar10 = local_60;
            }
            else {
              iVar9 = iVar9 + -1;
            }
            pcVar7 = pcVar8 + 1;
            unaff_R13 = uVar10 / 0x3e;
            *pcVar8 = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
                      [uVar10 % 0x3e];
            pcVar8 = pcVar7;
            uVar10 = unaff_R13;
          } while (pcVar7 != param_1 + lVar4 + param_5);
        }
        uVar6 = (*param_4)(param_1,param_3);
        if (-1 < (int)uVar6) {
          *piVar2 = iVar1;
          goto LAB_001002b5;
        }
      } while ((*piVar2 == 0x11) && (local_70 = local_70 + -1, local_70 != 0));
      goto LAB_001002a1;
    }
  }
  *piVar2 = 0x16;
LAB_001002a1:
  uVar6 = 0xffffffff;
LAB_001002b5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



void gen_tempname_len(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined4 local_c [3];
  
  local_c[0] = param_3;
  try_tempname_len(param_1,param_2,local_c,*(undefined8 *)(tryfunc_0 + (long)param_4 * 8));
  return;
}



void gen_tempname(undefined8 param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = param_3;
  try_tempname_len(param_1,param_2,&local_14,*(undefined8 *)(tryfunc_0 + (long)param_4 * 8),6);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void try_tempname(void)

{
  try_tempname_len();
  return;
}


