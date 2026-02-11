
ulong vma_iterate(code *param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ssize_t sVar4;
  __off_t _Var5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  size_t __nbytes;
  long lVar11;
  long in_FS_OFFSET;
  byte bVar12;
  long local_88;
  undefined1 *local_70;
  undefined1 *local_68;
  size_t local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = open("/proc/self/maps",0x80000);
  if (-1 < iVar2) {
    local_70 = local_48;
    uVar10 = 0;
    local_88 = 0;
    __nbytes = 1;
    local_68 = (undefined1 *)0x0;
    local_58 = (undefined1  [16])0x0;
LAB_00100080:
    if (__nbytes < 0x104a) goto LAB_00100161;
LAB_0010008d:
    sVar4 = read(iVar2,local_70,__nbytes);
    iVar3 = (int)sVar4;
    if (iVar3 < 0) {
      piVar6 = __errno_location();
      iVar3 = *piVar6;
joined_r0x001001a1:
      if (iVar3 == 4) goto LAB_00100120;
    }
    else if (iVar3 != 0) {
      if (__nbytes < (ulong)(long)(iVar3 + 0x1049)) {
        __nbytes = __nbytes * 2;
        if (uVar10 == 0) goto LAB_0010016d;
LAB_001000c8:
        do {
          if (local_68 != (undefined1 *)0x0) {
            munmap(local_68,local_60);
          }
          while( true ) {
            local_70 = (undefined1 *)mmap((void *)0x0,__nbytes,3,0x22,-1,0);
            if (local_70 == (undefined1 *)0xffffffffffffffff) {
              close(iVar2);
              goto LAB_00100525;
            }
            local_58._8_8_ = local_70 + __nbytes;
            local_58._0_8_ = local_70;
            local_68 = local_70;
            local_60 = __nbytes;
LAB_00100120:
            _Var5 = lseek(iVar2,0,0);
            if (-1 < _Var5) goto LAB_00100080;
            close(iVar2);
            iVar2 = open("/proc/self/maps",0x80000);
            if (iVar2 < 0) goto LAB_001001ae;
            if (0x1049 < __nbytes) goto LAB_0010008d;
LAB_00100161:
            __nbytes = __nbytes * 2;
            if (uVar10 != 0) break;
LAB_0010016d:
            iVar3 = getpagesize();
            uVar10 = (ulong)iVar3;
            for (__nbytes = uVar10; __nbytes < 0x104a; __nbytes = __nbytes * 2) {
            }
          }
        } while( true );
      }
      lVar9 = (long)iVar3;
      while( true ) {
        uVar8 = read(iVar2,local_70 + lVar9,__nbytes - lVar9);
        iVar3 = (int)uVar8;
        uVar8 = uVar8 & 0xffffffff;
        if (iVar3 < 0) {
          piVar6 = __errno_location();
          iVar3 = *piVar6;
          goto joined_r0x001001a1;
        }
        if (__nbytes - lVar9 < (ulong)(long)(iVar3 + 0x1049)) break;
        if (iVar3 == 0) {
          close(iVar2);
          goto LAB_00100240;
        }
        lVar9 = iVar3 + lVar9;
      }
      if (uVar10 == 0) goto LAB_0010016d;
      __nbytes = __nbytes * 2;
      if (__nbytes != 0) goto LAB_001000c8;
    }
    close(iVar2);
LAB_001001ae:
    if (local_68 != (undefined1 *)0x0) {
      munmap(local_68,local_60);
    }
  }
LAB_00100525:
  uVar8 = 0xffffffff;
LAB_00100494:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
LAB_00100240:
  iVar2 = 0;
  uVar10 = 0;
  do {
    if (local_88 == lVar9) goto LAB_00100480;
    bVar12 = local_70[local_88];
    if (bVar12 - 0x30 < 10) {
      uVar10 = uVar10 * 0x10 + (long)(int)(bVar12 - 0x30);
    }
    else if (bVar12 - 0x41 < 6) {
      uVar10 = uVar10 * 0x10 + (long)(int)(bVar12 - 0x37);
    }
    else {
      if (5 < bVar12 - 0x61) break;
      uVar10 = uVar10 * 0x10 + (long)(int)(bVar12 - 0x57);
    }
    local_88 = local_88 + 1;
    iVar2 = iVar2 + 1;
  } while( true );
  if ((iVar2 == 0) || (bVar12 != 0x2d)) goto LAB_00100480;
  iVar2 = 0;
  lVar11 = 0;
  while (local_88 = local_88 + 1, local_88 != lVar9) {
    bVar12 = local_70[local_88];
    if (bVar12 - 0x30 < 10) {
      lVar11 = lVar11 * 0x10 + (long)(int)(bVar12 - 0x30);
    }
    else if (bVar12 - 0x41 < 6) {
      lVar11 = lVar11 * 0x10 + (long)(int)(bVar12 - 0x37);
    }
    else {
      if (5 < bVar12 - 0x61) {
        lVar7 = local_88;
        if (iVar2 == 0) goto LAB_00100480;
        goto LAB_00100373;
      }
      lVar11 = lVar11 * 0x10 + (long)(int)(bVar12 - 0x57);
    }
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 0) goto LAB_00100480;
LAB_001004f7:
  bVar12 = 0;
  lVar7 = local_88;
LAB_0010040b:
  local_88 = lVar7;
  if (uVar10 <= (ulong)local_58._0_8_) {
    if (local_58._8_8_ - 1 <= lVar11 - 1U) {
      if ((uVar10 < (ulong)local_58._0_8_) &&
         (iVar2 = (*param_1)(param_2,uVar10,local_58._0_8_,bVar12), iVar2 != 0)) goto LAB_00100480;
      if (lVar11 - 1U <= local_58._8_8_ - 1) goto LAB_00100240;
      iVar2 = (*param_1)(param_2,local_58._8_8_,lVar11,bVar12);
      goto joined_r0x00100475;
    }
  }
  iVar2 = (*param_1)(param_2,uVar10,lVar11,bVar12);
joined_r0x00100475:
  if (iVar2 != 0) goto LAB_00100480;
  goto LAB_00100240;
  while( true ) {
    lVar7 = local_88 + 1;
    if (local_70[local_88] != ' ') break;
LAB_00100373:
    local_88 = lVar7;
    if (local_88 == lVar9) goto LAB_001004f7;
  }
  bVar12 = local_70[local_88] == 'r';
  if (lVar7 != lVar9) {
    if (local_70[lVar7] == 'w') {
      bVar12 = bVar12 | 2;
    }
    lVar7 = local_88 + 2;
    if (local_88 + 2 != lVar9) {
      lVar7 = local_88 + 3;
      if (local_70[local_88 + 2] == 'x') {
        bVar12 = bVar12 | 4;
      }
      do {
        if (lVar9 == lVar7) break;
        pcVar1 = local_70 + lVar7;
        lVar7 = lVar7 + 1;
      } while (*pcVar1 != '\n');
    }
  }
  goto LAB_0010040b;
LAB_00100480:
  if (local_68 != (undefined1 *)0x0) {
    munmap(local_68,local_60);
  }
  goto LAB_00100494;
}


