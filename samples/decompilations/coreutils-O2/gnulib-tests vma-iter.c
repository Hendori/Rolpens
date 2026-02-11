
undefined8 rof_scanf_lx(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 0;
  lVar3 = 0;
  while (lVar2 = *param_1, lVar2 != param_1[1]) {
    bVar1 = *(byte *)(param_1[3] + lVar2);
    if (bVar1 - 0x30 < 10) {
      lVar3 = lVar3 * 0x10 + (long)(int)(bVar1 - 0x30);
    }
    else if (bVar1 - 0x41 < 6) {
      lVar3 = lVar3 * 0x10 + (long)(int)(bVar1 - 0x37);
    }
    else {
      if (5 < bVar1 - 0x61) goto LAB_00100080;
      lVar3 = lVar3 * 0x10 + (long)(int)(bVar1 - 0x57);
    }
    iVar4 = iVar4 + 1;
    *param_1 = lVar2 + 1;
  }
  *(undefined4 *)(param_1 + 2) = 1;
LAB_00100080:
  if (iVar4 != 0) {
    *param_2 = lVar3;
    return 0;
  }
  return 0xffffffff;
}



undefined4 vma_iterate(code *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  ssize_t sVar11;
  __off_t _Var12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined4 uVar17;
  size_t __nbytes;
  long in_FS_OFFSET;
  byte bVar18;
  ulong local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  size_t local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = open("/proc/self/maps",0x80000);
  if (-1 < iVar9) {
    local_70 = local_48;
    uVar15 = 0;
    local_88 = 0;
    __nbytes = 1;
    local_78 = 0;
    local_68 = (undefined1 *)0x0;
    local_58 = (undefined1  [16])0x0;
LAB_00100118:
    if (__nbytes < 0x104a) goto LAB_001001f5;
LAB_00100125:
    sVar11 = read(iVar9,local_70,__nbytes);
    iVar10 = (int)sVar11;
    if (iVar10 < 0) {
      piVar13 = __errno_location();
      iVar10 = *piVar13;
joined_r0x00100240:
      if (iVar10 == 4) goto LAB_001001b8;
    }
    else if (iVar10 != 0) {
      if (__nbytes < (ulong)(long)(iVar10 + 0x1049)) {
        __nbytes = __nbytes * 2;
        if (uVar15 == 0) goto LAB_00100201;
LAB_00100160:
        do {
          if (local_68 != (undefined1 *)0x0) {
            munmap(local_68,local_60);
          }
          while( true ) {
            local_68 = (undefined1 *)mmap((void *)0x0,__nbytes,3,0x22,-1,0);
            if (local_68 == (undefined1 *)0xffffffffffffffff) {
              close(iVar9);
              goto LAB_00100516;
            }
            local_58._8_8_ = local_68 + __nbytes;
            local_58._0_8_ = local_68;
            local_70 = local_68;
            local_60 = __nbytes;
LAB_001001b8:
            _Var12 = lseek(iVar9,0,0);
            if (-1 < _Var12) goto LAB_00100118;
            close(iVar9);
            iVar9 = open("/proc/self/maps",0x80000);
            if (iVar9 < 0) goto LAB_0010024d;
            if (0x1049 < __nbytes) goto LAB_00100125;
LAB_001001f5:
            __nbytes = __nbytes * 2;
            if (uVar15 != 0) break;
LAB_00100201:
            iVar10 = getpagesize();
            uVar15 = (ulong)iVar10;
            for (__nbytes = uVar15; __nbytes < 0x104a; __nbytes = __nbytes * 2) {
            }
          }
        } while( true );
      }
      local_80 = (long)iVar10;
      while( true ) {
        sVar11 = read(iVar9,local_70 + local_80,__nbytes - local_80);
        iVar10 = (int)sVar11;
        if (iVar10 < 0) {
          piVar13 = __errno_location();
          iVar10 = *piVar13;
          goto joined_r0x00100240;
        }
        if (__nbytes - local_80 < (ulong)(long)(iVar10 + 0x1049)) break;
        if (iVar10 == 0) {
          close(iVar9);
          uVar8 = local_58._8_8_;
          uVar7 = local_58._0_8_;
          goto LAB_00100300;
        }
        local_80 = iVar10 + local_80;
      }
      if (uVar15 == 0) goto LAB_00100201;
      __nbytes = __nbytes * 2;
      if (__nbytes != 0) goto LAB_00100160;
    }
    close(iVar9);
LAB_0010024d:
    if (local_68 != (undefined1 *)0x0) {
      munmap(local_68,local_60);
    }
  }
LAB_00100516:
  uVar17 = 0xffffffff;
  goto LAB_001004a2;
  while (iVar9 = (*param_1)(param_2,uVar15,lVar5,bVar18), iVar9 == 0) {
LAB_00100300:
    iVar9 = rof_scanf_lx(&local_88,&local_98);
    puVar6 = local_70;
    if (iVar9 < 0) break;
    if (local_88 == local_80) {
      local_78 = 1;
      break;
    }
    pcVar4 = local_70 + local_88;
    local_88 = local_88 + 1;
    if ((*pcVar4 != '-') ||
       (lVar16 = local_80, iVar9 = rof_scanf_lx(), lVar5 = local_90, lVar14 = local_88, iVar9 < 0))
    break;
    do {
      local_88 = lVar14;
      if (lVar16 == local_88) {
        bVar18 = 0;
        lVar14 = lVar16;
        lVar1 = local_88;
        goto LAB_001004de;
      }
      lVar14 = local_88 + 1;
    } while (puVar6[local_88] == ' ');
    bVar18 = puVar6[local_88] == 'r';
    lVar1 = lVar14;
    if (lVar16 == lVar14) {
LAB_001004de:
      local_88 = lVar1;
      local_78 = 1;
    }
    else {
      lVar1 = local_88 + 2;
      if (puVar6[lVar14] == 'w') {
        bVar18 = bVar18 | 2;
      }
      lVar14 = lVar1;
      if (lVar16 == lVar1) goto LAB_001004de;
      lVar1 = local_88 + 2;
      lVar14 = local_88 + 3;
      local_88 = lVar14;
      if (puVar6[lVar1] == 'x') {
        bVar18 = bVar18 | 4;
      }
    }
    do {
      if (lVar16 == lVar14) {
        local_78 = 1;
        break;
      }
      pcVar4 = puVar6 + lVar14;
      lVar14 = lVar14 + 1;
      local_88 = lVar14;
    } while (*pcVar4 != '\n');
    uVar15 = local_98;
    if (local_98 <= (ulong)uVar7) {
      uVar2 = local_90 - 1;
      uVar3 = uVar8 - 1;
      if (uVar3 <= uVar2) {
        if ((local_98 < (ulong)uVar7) &&
           (iVar9 = (*param_1)(param_2,local_98,uVar7,bVar18), iVar9 != 0)) break;
        uVar15 = uVar8;
        if (uVar2 <= uVar3) goto LAB_00100300;
      }
    }
  }
  uVar17 = 0;
  if (local_68 != (undefined1 *)0x0) {
    munmap(local_68,local_60);
  }
LAB_001004a2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


