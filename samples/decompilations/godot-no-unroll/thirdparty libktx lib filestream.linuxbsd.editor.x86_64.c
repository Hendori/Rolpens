
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ktxFileStream_getpos(long param_1,__off64_t *param_2)

{
  __off64_t _Var1;
  int *piVar2;
  
  if (param_1 == 0) {
    return 0xb;
  }
  if (param_2 == (__off64_t *)0x0) {
    return 0xb;
  }
  if (*(FILE **)(param_1 + 0x40) == _stdin) {
    *param_2 = *(__off64_t *)(param_1 + 0x58);
  }
  else {
    _Var1 = ftello64(*(FILE **)(param_1 + 0x40));
    if (_Var1 < 0) {
      piVar2 = __errno_location();
      if (*piVar2 == 0x1d) {
        return 2;
      }
      if (*piVar2 == 0x4b) {
        return 4;
      }
    }
    *param_2 = _Var1;
  }
  return 0;
}



int ktxFileStream_read(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  size_t sVar2;
  
  if ((param_1 != 0) && (param_2 != (void *)0x0)) {
    sVar2 = fread(param_2,1,param_3,*(FILE **)(param_1 + 0x40));
    if (param_3 == sVar2) {
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + param_3;
      return 0;
    }
    iVar1 = feof(*(FILE **)(param_1 + 0x40));
    return (-(uint)(iVar1 == 0) & 0xfffffffe) + 7;
  }
  return 0xb;
}



void ktxFileStream_destruct(long param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    *(undefined8 *)(param_1 + 0x40) = 0;
    return;
  }
  fclose(*(FILE **)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}



char ktxFileStream_getsize(long param_1,__off_t *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long in_FS_OFFSET;
  stat64 sStack_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (param_2 == (__off_t *)0x0)) {
    cVar1 = '\v';
  }
  else {
    fflush(*(FILE **)(param_1 + 0x40));
    iVar2 = fileno(*(FILE **)(param_1 + 0x40));
    iVar2 = fstat64(iVar2,&sStack_b8);
    if (iVar2 < 0) {
      piVar3 = __errno_location();
      cVar1 = (*piVar3 != 0x4b) + '\x04';
    }
    else if (((sStack_b8.st_mode & 0xf000) == 0x1000) || ((sStack_b8.st_mode & 0xf000) == 0xc000)) {
      cVar1 = '\x02';
    }
    else if ((sStack_b8.st_mode & 0x2000) == 0) {
      *param_2 = sStack_b8.st_size;
      cVar1 = '\0';
    }
    else {
      cVar1 = '\n';
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong ktxFileStream_setpos(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar3 = 0xb;
  }
  else if (*(long *)(param_1 + 0x40) == _stdin) {
    if (*(long *)(param_1 + 0x58) < param_2) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001002d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(param_1 + 8))(param_1,param_2 - *(long *)(param_1 + 0x58));
        return uVar3;
      }
      goto LAB_00100308;
    }
    uVar3 = 2;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x28))(param_1,&local_28);
    uVar3 = (ulong)uVar1;
    if (uVar1 == 0) {
      if (local_28 < param_2) {
        uVar3 = 10;
      }
      else {
        iVar2 = fseeko64(*(FILE **)(param_1 + 0x40),param_2,0);
        if (iVar2 < 0) {
          uVar3 = 6;
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00100308:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ktxFileStream_write(long param_1,void *param_2,size_t param_3,size_t param_4)

{
  size_t sVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if ((param_1 == 0) || (param_2 == (void *)0x0)) {
    return 0xb;
  }
  sVar1 = fwrite(param_2,param_3,param_4,*(FILE **)(param_1 + 0x40));
  uVar3 = 0;
  if (sVar1 != param_4) {
    piVar2 = __errno_location();
    if ((*piVar2 == 0x1b) || (uVar3 = 8, *piVar2 == 0x4b)) {
      return 4;
    }
  }
  return uVar3;
}



int ktxFileStream_skip(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    return 0xb;
  }
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      iVar1 = getc(*(FILE **)(param_1 + 0x40));
      if (iVar1 == -1) {
        iVar1 = feof(*(FILE **)(param_1 + 0x40));
        return (-(uint)(iVar1 == 0) & 0xfffffffe) + 7;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < param_2);
  }
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + param_2;
  return 0;
}



undefined8 ktxFileStream_construct(undefined8 *param_1,long param_2,undefined1 param_3)

{
  if ((param_1 != (undefined8 *)0x0) && (param_2 != 0)) {
    param_1[8] = param_2;
    param_1[0xb] = 0;
    *(undefined1 *)(param_1 + 0xc) = param_3;
    *param_1 = ktxFileStream_read;
    param_1[1] = ktxFileStream_skip;
    *(undefined4 *)(param_1 + 7) = 1;
    param_1[2] = ktxFileStream_write;
    param_1[3] = 0x100000;
    param_1[6] = ktxFileStream_destruct;
    param_1[4] = ktxFileStream_setpos;
    param_1[5] = ktxFileStream_getsize;
    return 0;
  }
  return 0xb;
}


