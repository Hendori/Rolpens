
undefined8 psa_its_read_file_constprop_0(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  FILE *__stream;
  size_t sVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  __snprintf_chk(local_48,0x19,2,0x19,"%s%08x%08x%s",&_LC0,param_1 >> 0x20,param_1,".psa_its");
  __stream = fopen64(local_48,"rb");
  *param_3 = __stream;
  if (__stream == (FILE *)0x0) {
    uVar2 = 0xffffff74;
  }
  else {
    setbuf(__stream,(char *)0x0);
    sVar1 = fread(&local_58,1,0x10,(FILE *)*param_3);
    if ((sVar1 == 0x10) && (local_58 == 0x53544900415350)) {
      *param_2 = local_50;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffff68;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 psa_its_get_info(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  FILE *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (FILE *)0x0;
  uVar1 = psa_its_read_file_constprop_0(param_1,param_2,&local_18);
  if (local_18 != (FILE *)0x0) {
    fclose(local_18);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int psa_its_get(undefined8 param_1,uint param_2,uint param_3,void *param_4,ulong *param_5)

{
  FILE *__stream;
  int iVar1;
  size_t sVar2;
  ulong __n;
  long in_FS_OFFSET;
  FILE *local_50;
  uint local_48 [2];
  long local_40;
  
  __n = (ulong)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (FILE *)0x0;
  iVar1 = psa_its_read_file_constprop_0(param_1,local_48,&local_50);
  __stream = local_50;
  if (iVar1 == 0) {
    if ((CARRY4(param_2,param_3)) || (local_48[0] < param_2 + param_3)) {
      iVar1 = -0x87;
      goto LAB_001001f2;
    }
    iVar1 = fseek(local_50,(ulong)param_2,1);
    if (iVar1 == 0) {
      sVar2 = fread(param_4,1,__n,__stream);
      if (__n == sVar2) {
        iVar1 = 0;
        if (param_5 != (ulong *)0x0) {
          *param_5 = __n;
        }
      }
      else {
        iVar1 = -0x92;
      }
      goto LAB_001001f2;
    }
    iVar1 = -0x92;
  }
  else {
LAB_001001f2:
    if (__stream == (FILE *)0x0) goto LAB_001001ff;
  }
  fclose(__stream);
LAB_001001ff:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int psa_its_set(ulong param_1,uint param_2,void *param_3,undefined4 param_4)

{
  int iVar1;
  FILE *__stream;
  size_t sVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  uint local_60;
  undefined4 local_5c;
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    iVar1 = -0x88;
    goto LAB_0010033f;
  }
  local_68 = 0x53544900415350;
  local_60 = param_2;
  local_5c = param_4;
  __snprintf_chk(local_58,0x19,2,0x19,"%s%08x%08x%s",&_LC0,param_1 >> 0x20,param_1,".psa_its");
  __stream = fopen64("tempfile.psa_its","wb");
  if (__stream == (FILE *)0x0) {
LAB_00100381:
    iVar1 = -0x92;
  }
  else {
    setbuf(__stream,(char *)0x0);
    sVar2 = fwrite(&local_68,1,0x10,__stream);
    if ((sVar2 == 0x10) &&
       ((param_2 == 0 || (sVar2 = fwrite(param_3,1,(ulong)param_2,__stream), param_2 == sVar2)))) {
      iVar1 = fclose(__stream);
      if (iVar1 == 0) {
        iVar1 = rename("tempfile.psa_its",local_58);
        if (iVar1 != 0) goto LAB_00100381;
        goto LAB_00100337;
      }
    }
    else {
      fclose(__stream);
    }
    iVar1 = -0x8e;
  }
LAB_00100337:
  remove("tempfile.psa_its");
LAB_0010033f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int psa_its_remove(ulong param_1)

{
  int iVar1;
  FILE *__stream;
  long in_FS_OFFSET;
  char acStack_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __snprintf_chk(acStack_38,0x19,2,0x19,"%s%08x%08x%s",&_LC0,param_1 >> 0x20,param_1,".psa_its");
  __stream = fopen64(acStack_38,"rb");
  if (__stream == (FILE *)0x0) {
    iVar1 = -0x8c;
  }
  else {
    fclose(__stream);
    iVar1 = remove(acStack_38);
    if (iVar1 != 0) {
      iVar1 = -0x92;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


