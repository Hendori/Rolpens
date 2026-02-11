
undefined8 path_search(void *param_1,ulong param_2,char *param_3,char *param_4,char param_5)

{
  int iVar1;
  size_t __n;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  ulong uVar5;
  char *__file;
  size_t sVar6;
  long in_FS_OFFSET;
  bool bVar7;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    sVar6 = 4;
    param_4 = "file";
    if (param_5 != '\0') goto LAB_00100140;
LAB_0010005b:
    __file = param_3;
    if (param_3 == (char *)0x0) goto LAB_001001c5;
LAB_00100064:
    __n = strlen(__file);
    if (__n != 0) {
      lVar3 = __n - 1;
      goto LAB_00100104;
    }
    bVar7 = false;
    uVar5 = 0;
LAB_0010007f:
    if (sVar6 + 7 + __n + uVar5 <= param_2) {
      memcpy(param_1,__file,__n);
      __sprintf_chk((long)param_1 + __n,2,0xffffffffffffffff,"/%.*sXXXXXX" + !bVar7,
                    sVar6 & 0xffffffff,param_4);
      uVar2 = 0;
      goto LAB_001000ce;
    }
    piVar4 = __errno_location();
    *piVar4 = 0x16;
  }
  else {
    sVar6 = strlen(param_4);
    if (5 < sVar6) {
      sVar6 = 5;
    }
    if (param_5 == '\0') goto LAB_0010005b;
LAB_00100140:
    __file = (char *)secure_getenv("TMPDIR");
    if ((((__file != (char *)0x0) && (iVar1 = stat(__file,&local_d8), iVar1 == 0)) &&
        ((local_d8.st_mode & 0xf000) == 0x4000)) ||
       (((param_3 != (char *)0x0 && (iVar1 = stat(param_3,&local_d8), iVar1 == 0)) &&
        (__file = param_3, (local_d8.st_mode & 0xf000) == 0x4000)))) goto LAB_00100064;
LAB_001001c5:
    __file = "/tmp";
    iVar1 = stat("/tmp",&local_d8);
    if ((iVar1 == 0) && ((local_d8.st_mode & 0xf000) == 0x4000)) {
      lVar3 = 3;
      __n = 4;
LAB_00100104:
      bVar7 = __file[lVar3] != '/';
      uVar5 = (ulong)bVar7;
      goto LAB_0010007f;
    }
    piVar4 = __errno_location();
    *piVar4 = 2;
  }
  uVar2 = 0xffffffff;
LAB_001000ce:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


