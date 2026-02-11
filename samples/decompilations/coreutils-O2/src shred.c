
void clear_random_data(void)

{
  randint_all_free(randint_source);
  return;
}



undefined8 dosync(int param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = fdatasync(param_1);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
      uVar3 = dcgettext(0,"%s: fdatasync failed",5);
      error(0,iVar1,uVar3,param_2);
      *piVar2 = iVar1;
      return 0xffffffff;
    }
    iVar1 = fsync(param_1);
    if (iVar1 != 0) {
      iVar1 = *piVar2;
      if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
        uVar3 = dcgettext(0,"%s: fsync failed",5);
        error(0,iVar1,uVar3,param_2);
        *piVar2 = iVar1;
        return 0xffffffff;
      }
      sync();
    }
  }
  return 0;
}



ulong dopass(int param_1,long param_2,undefined8 param_3,ulong *param_4,uint param_5,
            undefined8 param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  char *__ptr;
  __off_t _Var6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  ssize_t sVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  char cVar14;
  ulong uVar15;
  ulong uVar16;
  undefined4 uVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  ulong local_858;
  ulong local_850;
  char *local_840;
  long local_838;
  long local_830;
  undefined2 local_808 [2];
  undefined4 local_804;
  undefined4 local_7ff;
  undefined3 uStack_7fb;
  char local_7f8 [656];
  undefined1 local_568 [656];
  undefined1 local_2d8 [664];
  long local_40;
  
  uVar9 = *param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = getpagesize();
  if ((int)param_5 < 1) {
LAB_00100223:
    local_850 = 0x10000;
    uVar18 = 0x10002;
  }
  else {
    uVar5 = (param_5 & 0xfff) * 0x1001;
    cVar14 = (char)(uVar5 >> 4);
    if (((char)(uVar5 >> 8) == cVar14) && (cVar14 == (char)uVar5)) goto LAB_00100223;
    local_850 = 0xf000;
    uVar18 = 0xf000;
  }
  __ptr = (char *)xalignalloc((long)iVar4);
  bVar1 = 0 < (long)uVar9 && uVar9 < local_850;
  if (((0 >= (long)uVar9 || uVar9 >= local_850) && (uVar5 = rpl_fcntl(param_1), 0 < (int)uVar5)) &&
     (uVar5 != (uVar5 | 0x4000))) {
    rpl_fcntl(param_1);
  }
  if ((*(uint *)(param_2 + 0x18) & 0xf000) != 0x2000) {
LAB_001001a0:
    _Var6 = lseek(param_1,0,0);
    if (_Var6 < 1) {
      if (_Var6 == 0) goto LAB_0010023e;
    }
    else {
      piVar7 = __errno_location();
      *piVar7 = 0x16;
    }
    uVar8 = dcgettext(0,"%s: cannot rewind",5);
    piVar7 = __errno_location();
    iVar4 = *piVar7;
LAB_001001e4:
    error(0,iVar4,uVar8,param_3);
    free(__ptr);
    goto LAB_001001f5;
  }
  local_808[0] = 6;
  local_804 = 1;
  iVar4 = ioctl(param_1,0x40086d01,local_808);
  if (iVar4 != 0) goto LAB_001001a0;
LAB_0010023e:
  if ((int)param_5 < 0) {
    local_7ff = 0x646e6172;
    uStack_7fb = 0x6d6f;
  }
  else {
    uVar19 = uVar18;
    if ((long)uVar9 < 0) {
      uVar5 = (param_5 & 0xfff) * 0x1001;
      uVar3 = (ushort)uVar5;
      *(ushort *)(__ptr + 1) = uVar3 << 8 | uVar3 >> 8;
      *__ptr = (char)(uVar5 >> 4);
LAB_0010028d:
      local_858 = uVar19 >> 1;
      uVar16 = 3;
      do {
        uVar15 = uVar16 * 2;
        __memcpy_chk(__ptr + uVar16,__ptr,uVar16,uVar18 - uVar16);
        uVar16 = uVar15;
      } while (uVar15 <= local_858);
    }
    else {
      if (uVar9 <= uVar18) {
        uVar19 = uVar9;
      }
      uVar5 = (param_5 & 0xfff) * 0x1001;
      uVar3 = (ushort)uVar5;
      *(ushort *)(__ptr + 1) = uVar3 << 8 | uVar3 >> 8;
      *__ptr = (char)(uVar5 >> 4);
      if (5 < uVar19) goto LAB_0010028d;
      uVar15 = 3;
    }
    if (uVar15 < uVar19) {
      if (uVar18 < uVar15) {
        uVar18 = uVar15;
      }
      __memcpy_chk(__ptr + uVar15,__ptr,uVar19 - uVar15,uVar18 - uVar15);
      if ((param_5 & 0x1000) != 0) goto LAB_001002d7;
    }
    else if (((param_5 & 0x1000) != 0) && (uVar19 != 0)) {
LAB_001002d7:
      uVar18 = 0x200;
      *__ptr = *__ptr + -0x80;
      if (0x200 < uVar19) {
        if ((uVar19 - 1 >> 9 & 1) != 0) {
          uVar18 = 0x400;
          __ptr[0x200] = __ptr[0x200] + -0x80;
          if (uVar19 < 0x401) goto LAB_0010031e;
        }
        do {
          __ptr[uVar18] = __ptr[uVar18] + -0x80;
          __ptr[uVar18 + 0x200] = __ptr[uVar18 + 0x200] + -0x80;
          uVar18 = uVar18 + 0x400;
        } while (uVar18 < uVar19);
      }
    }
LAB_0010031e:
    __sprintf_chk(&local_7ff,2,7,"%02x%02x%02x",*__ptr,__ptr[1],__ptr[2]);
  }
  if (param_8 != 0) {
    pcVar11 = "%s: pass %lu/%lu (%s)...";
    uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...",5);
    error(0,0,uVar8,param_3,param_7,param_8,&local_7ff,pcVar11);
    lVar13 = rpl_time(0);
    local_838 = lVar13 + 5;
  }
  bVar2 = 0;
  local_840 = "";
  local_830 = 0;
  local_858 = 0;
joined_r0x0010038b:
  uVar18 = local_850;
  if ((((long)uVar9 < 0) || (uVar19 = uVar9 - local_858, local_850 <= uVar19)) ||
     ((uVar19 != 0 && (uVar18 = uVar19, (long)local_858 <= (long)uVar9)))) {
    if ((int)param_5 < 0) {
      randread(param_6,__ptr,uVar18);
    }
    uVar19 = 0;
LAB_001003d8:
    do {
      sVar10 = write(param_1,__ptr + uVar19,uVar18 - uVar19);
      if (sVar10 < 1) {
        if ((long)uVar9 < 0) {
          if (sVar10 != 0) {
            piVar7 = __errno_location();
            iVar4 = *piVar7;
            if (iVar4 != 0x1c) {
              if ((iVar4 == 0x16) && (!bVar1)) goto LAB_00100416;
              uVar8 = dcgettext(0,"%s: error writing at offset %ju",5);
              error(0,iVar4,uVar8,param_3,local_858 + uVar19);
              goto LAB_00100661;
            }
          }
          if (0x7fffffffffffffff - local_858 < uVar19) goto LAB_00100723;
          uVar9 = local_858 + uVar19;
          *param_4 = uVar9;
          local_858 = uVar9;
          goto LAB_0010046d;
        }
        piVar7 = __errno_location();
        iVar4 = *piVar7;
        if ((iVar4 == 0x16) && (!bVar1)) {
LAB_00100416:
          uVar5 = rpl_fcntl(param_1,3);
          if ((0 < (int)uVar5) && ((uVar5 & 0x4000) != 0)) {
            rpl_fcntl(param_1,4,uVar5 & 0xffffbfff);
          }
          bVar1 = true;
          if (uVar18 <= uVar19) break;
          goto LAB_001003d8;
        }
        uVar8 = dcgettext(0,"%s: error writing at offset %ju",5);
        error(0,iVar4,uVar8,param_3,uVar19 + local_858);
        if ((iVar4 != 5) || (uVar18 <= (uVar19 | 0x1ff))) goto LAB_00100661;
        uVar19 = (uVar19 | 0x1ff) + 1;
        _Var6 = lseek(param_1,local_858 + uVar19,0);
        if (_Var6 == -1) {
          uVar8 = dcgettext(0,"%s: lseek failed",5);
          iVar4 = *piVar7;
          goto LAB_001001e4;
        }
        bVar2 = 1;
      }
      else {
        uVar19 = uVar19 + sVar10;
      }
    } while (uVar19 < uVar18);
    if (0x7fffffffffffffff - local_858 < uVar19) {
LAB_00100723:
      uVar8 = dcgettext(0,"%s: file too large",5);
      iVar4 = 0;
      goto LAB_001001e4;
    }
    local_858 = uVar19 + local_858;
LAB_0010046d:
    if (param_8 != 0) {
      if (uVar9 == local_858) {
        if ((*local_840 == '\0') && (local_830 = rpl_time(0), local_830 < local_838))
        goto joined_r0x0010038b;
        pcVar11 = (char *)human_readable(uVar9,local_568,0x1b2,1,1);
        if (-1 < (long)uVar9) goto LAB_001004c3;
LAB_001006c8:
        uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s",5);
        error(0,0,uVar8,param_3,param_7,param_8,&local_7ff,pcVar11);
      }
      else {
        local_830 = rpl_time(0);
        if (local_830 < local_838) goto joined_r0x0010038b;
        pcVar11 = (char *)human_readable(local_858,local_568,0x1b2,1,1);
        iVar4 = strcmp(local_840,pcVar11);
        if (iVar4 == 0) goto joined_r0x0010038b;
        if ((long)uVar9 < 0) goto LAB_001006c8;
LAB_001004c3:
        uVar17 = 100;
        if (uVar9 != 0) {
          if (local_858 < 0x28f5c28f5c28f5d) {
            uVar17 = (undefined4)((local_858 * 100) / uVar9);
          }
          else {
            uVar17 = (undefined4)
                     (local_858 /
                     (ulong)(((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar9),8) +
                                    uVar9) >> 6) - ((long)uVar9 >> 0x3f)));
          }
        }
        pcVar12 = (char *)human_readable(uVar9,local_2d8,0x1b0,1,1);
        if (uVar9 == local_858) {
          pcVar11 = pcVar12;
        }
        uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s/%s %d%%",5);
        error(0,0,uVar8,param_3,param_7,param_8,&local_7ff,pcVar11,pcVar12,uVar17);
      }
      local_840 = local_7f8;
      __strcpy_chk(local_840,pcVar11,0x28c);
      local_838 = local_830 + 5;
      iVar4 = dosync(param_1,param_3);
      if (iVar4 != 0) {
        piVar7 = __errno_location();
        if (*piVar7 != 5) goto LAB_00100661;
        bVar2 = 1;
      }
    }
    goto joined_r0x0010038b;
  }
  iVar4 = dosync(param_1,param_3);
  if (iVar4 == 0) {
    free(__ptr);
    uVar9 = (ulong)bVar2;
    goto LAB_001001fa;
  }
  piVar7 = __errno_location();
  if (*piVar7 == 5) {
    free(__ptr);
    uVar9 = 1;
    goto LAB_001001fa;
  }
LAB_00100661:
  free(__ptr);
LAB_001001f5:
  uVar9 = 0xffffffff;
LAB_001001fa:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 do_wipefd(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  char *pcVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long in_FS_OFFSET;
  long local_130;
  long local_120;
  long local_118;
  long local_e0;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = 0;
  if (*(char *)(param_4 + 0x1c) != '\0') {
    local_118 = (ulong)*(byte *)(param_4 + 0x1e) + *(long *)(param_4 + 8);
  }
  iVar2 = fstat(param_1,&local_d8);
  if (iVar2 == 0) {
    uVar3 = local_d8.st_mode & 0xf000;
    if (uVar3 == 0x2000) {
      iVar2 = isatty(param_1);
      if (iVar2 == 0) {
        uVar3 = local_d8.st_mode & 0xf000;
        goto LAB_00100a82;
      }
LAB_00101046:
      pcVar14 = "%s: invalid file type";
    }
    else {
LAB_00100a82:
      if (uVar3 == 0xc000 || uVar3 == 0x1000) goto LAB_00101046;
      if ((uVar3 != 0x8000) || (-1 < local_d8.st_size)) {
        lVar7 = *(long *)(param_4 + 8);
        piVar4 = (int *)xnmalloc(lVar7);
        local_120 = *(long *)(param_4 + 0x10);
        lVar9 = local_d8.st_size;
        if (local_120 == -1) {
          if ((local_d8.st_mode & 0xf000) == 0x8000) {
            local_120 = local_d8.st_size;
            if (*(char *)(param_4 + 0x1d) == '\0') {
              if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
                local_d8.st_blksize = 0x200;
              }
              if ((local_d8.st_blksize <= local_d8.st_size) || (local_d8.st_size == 0)) {
                lVar9 = 0;
              }
              if (local_d8.st_size % local_d8.st_blksize != 0) {
                local_d8.st_blksize = local_d8.st_blksize - local_d8.st_size % local_d8.st_blksize;
                local_120 = 0x7fffffffffffffff - local_d8.st_size;
                if (local_d8.st_blksize < 0x7fffffffffffffff - local_d8.st_size) {
                  local_120 = local_d8.st_blksize;
                }
                local_120 = local_d8.st_size + local_120;
              }
              goto LAB_00100c0d;
            }
            goto LAB_00100aee;
          }
          lVar9 = lseek(param_1,0,2);
          uVar10 = *(ulong *)(param_4 + 8);
          if (lVar9 < 1) {
            lVar9 = local_120;
          }
        }
        else {
          if ((local_d8.st_mode & 0xf000) == 0x8000) {
            if (0x1fffffffffffffff < local_d8.st_blksize - 1U) {
              local_d8.st_blksize = 0x200;
            }
            if (local_120 < local_d8.st_blksize) {
              local_d8.st_blksize = local_120;
            }
            if (local_d8.st_size < local_d8.st_blksize) {
LAB_00100c0d:
              uVar10 = *(ulong *)(param_4 + 8);
              if (uVar10 != 0) goto LAB_00100afd;
              goto LAB_00100cfb;
            }
          }
LAB_00100aee:
          uVar10 = *(ulong *)(param_4 + 8);
          lVar9 = local_120;
        }
        local_120 = lVar9;
        lVar9 = 0;
        if (uVar10 == 0) {
          uVar8 = randint_get_source(param_3);
          uVar1 = 1;
          lVar7 = local_120;
          goto LAB_00100da8;
        }
LAB_00100afd:
        uVar12 = lVar7 * 4;
        puVar19 = patterns;
        uVar11 = 0xfffffffffffffffe;
        local_130 = 0;
        uVar17 = uVar12;
        piVar15 = piVar4;
        uVar18 = uVar10;
        do {
          if ((int)uVar11 == 0) {
            uVar11 = 0xfffffffe;
            puVar19 = patterns + 4;
LAB_00100b54:
            uVar11 = (ulong)-(int)uVar11;
            if (uVar18 <= uVar11) goto LAB_00100e97;
            local_130 = local_130 + uVar11;
          }
          else {
            piVar13 = (int *)((long)puVar19 + 4);
            puVar19 = (undefined1 *)piVar13;
            if ((int)uVar11 < 0) goto LAB_00100b54;
            if (uVar18 < uVar11) {
              if ((1 < uVar18) && (uVar11 <= uVar18 * 3)) goto LAB_00100f85;
              local_130 = local_130 + uVar18;
              goto LAB_00100c58;
            }
            lVar7 = uVar11 * 4;
            puVar19 = (undefined1 *)(piVar13 + uVar11);
            lVar5 = __memcpy_chk(piVar15,piVar13,lVar7,uVar17);
            uVar16 = uVar12;
            if (uVar12 <= uVar17) {
              uVar16 = uVar17;
            }
            uVar6 = (uVar16 + lVar7) - uVar17;
            if (uVar6 < uVar16) {
              uVar6 = uVar16;
            }
            piVar15 = (int *)(lVar5 + lVar7);
            uVar17 = uVar6 + (uVar17 - (uVar16 + lVar7));
          }
          uVar18 = uVar18 - uVar11;
          uVar11 = (ulong)*(int *)puVar19;
        } while( true );
      }
      pcVar14 = "%s: file has negative size";
    }
    uVar8 = dcgettext(0,pcVar14,5);
    error(0,0,uVar8,param_2);
  }
  else {
    uVar8 = dcgettext(0,"%s: fstat failed",5);
    piVar4 = __errno_location();
    error(0,*piVar4,uVar8,param_2);
  }
  uVar1 = 0;
LAB_00100dd6:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100e97:
  local_130 = local_130 + uVar18;
LAB_00100c58:
  uVar11 = local_130 - 1;
  uVar12 = 0;
  local_130 = uVar10 - local_130;
  uVar17 = uVar11;
  do {
    while (uVar11 < uVar17) {
      uVar17 = uVar17 - uVar11;
      lVar7 = randint_genmax(param_3,(local_130 + -1) - uVar12);
      iVar2 = piVar4[uVar12];
      lVar7 = lVar7 + uVar12;
      piVar4[uVar12] = piVar4[lVar7];
      uVar12 = uVar12 + 1;
      piVar4[lVar7] = iVar2;
      if (uVar10 == uVar12) goto LAB_00100cfb;
    }
    uVar17 = (uVar17 + (uVar10 - 1)) - uVar11;
    piVar4[local_130] = piVar4[uVar12];
    local_130 = local_130 + 1;
    piVar4[uVar12] = -1;
    uVar12 = uVar12 + 1;
  } while (uVar10 != uVar12);
LAB_00100cfb:
  uVar8 = randint_get_source(param_3);
  if (lVar9 == 0) {
    uVar1 = 1;
    lVar7 = local_120;
    goto LAB_00100da8;
  }
  uVar1 = 1;
  lVar5 = 0;
  do {
    uVar10 = *(ulong *)(param_4 + 8);
    lVar7 = local_120;
    local_e0 = lVar9;
    if (*(byte *)(param_4 + 0x1e) + uVar10 != 0) {
      uVar11 = 0;
      do {
        iVar2 = 0;
        if (uVar11 < uVar10) {
          iVar2 = piVar4[uVar11];
        }
        uVar11 = uVar11 + 1;
        iVar2 = dopass(param_1,&local_d8,param_2,&local_e0,iVar2,uVar8,uVar11,lVar5);
        if (iVar2 != 0) {
          if (iVar2 < 0) goto LAB_00100dc9;
          uVar1 = 0;
        }
        uVar10 = *(ulong *)(param_4 + 8);
      } while (uVar11 < *(byte *)(param_4 + 0x1e) + uVar10);
    }
LAB_00100da8:
    local_120 = 0;
    lVar9 = lVar7;
    lVar5 = local_118;
  } while (lVar7 != 0);
  if (((*(int *)(param_4 + 0x18) != 0) && (iVar2 = ftruncate(param_1,0), iVar2 != 0)) &&
     ((local_d8.st_mode & 0xf000) == 0x8000)) {
    uVar8 = dcgettext(0,"%s: error truncating",5);
    piVar15 = __errno_location();
    error(0,*piVar15,uVar8,param_2);
LAB_00100dc9:
    uVar1 = 0;
  }
  free(piVar4);
  goto LAB_00100dd6;
LAB_00100f85:
  if (uVar18 == uVar11) {
    uVar11 = uVar18 - 1;
LAB_00100f69:
    *piVar15 = *piVar13;
    uVar18 = uVar18 - 1;
    piVar15 = piVar15 + 1;
    if (uVar18 == 0) goto LAB_00100c58;
  }
  else {
    uVar11 = uVar11 - 1;
    uVar17 = randint_genmax(param_3,uVar11);
    if (uVar17 < uVar18) goto LAB_00100f69;
  }
  piVar13 = piVar13 + 1;
  goto LAB_00100f85;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long in_FS_OFFSET;
  undefined *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar7 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_0010112a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Overwrite the specified FILE(s) repeatedly, in order to make it harder\nfor even very expensive hardware probing to recover the data.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nIf FILE is -, shred standard output.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "  -f, --force    change permissions to allow writing if necessary\n  -n, --iterations=N  overwrite N times instead of the default (%d)\n      --random-source=FILE  get random bytes from FILE\n  -s, --size=N   shred this many bytes (suffixes like K, M, G accepted)\n"
                    ,5);
  __printf_chk(2,uVar5,3);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -u             deallocate and remove file after overwriting\n      --remove[=HOW]  like -u but give control on HOW to delete;  See below\n  -v, --verbose  show progress\n  -x, --exact    do not round file sizes up to the next full block;\n                   this is the default for non-regular files\n  -z, --zero     add a final overwrite with zeros to hide shredding\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nDelete FILE(s) if --remove (-u) is specified.  The default is not to remove\nthe files because it is common to operate on device files like /dev/hda,\nand those files usually should not be removed.\nThe optional HOW parameter indicates how to remove a directory entry:\n\'unlink\' => use a standard unlink call.\n\'wipe\' => also first obfuscate bytes in the name.\n\'wipesync\' => also sync each obfuscated byte to the device.\nThe default mode is \'wipesync\', but note it can be expensive.\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "CAUTION: shred assumes the file system and hardware overwrite data in place.\nAlthough this is common, many platforms operate otherwise.  Also, backups\nand mirrors may contain unremovable copies that will let a shredded file\nbe recovered later.  See the GNU coreutils manual for details.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC15;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    iVar2 = strcmp("shred",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "shred";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001013cd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","shred");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001013cd:
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","shred");
    if (pcVar4 == "shred") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010112a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  char *__s;
  size_t __n;
  char *pcVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  char *pcVar9;
  long lVar10;
  byte bVar11;
  char *__s1;
  size_t sVar12;
  long in_FS_OFFSET;
  bool bVar13;
  char *local_b0;
  char *local_a8;
  void *local_a0;
  void *local_90;
  void *local_88;
  int local_80;
  byte local_7a;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  bVar11 = 0xa0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_68._8_8_ = 3;
  local_58._0_8_ = 0xffffffffffffffff;
  pcVar1 = (char *)0x0;
  do {
    __s1 = pcVar1;
    puVar8 = long_opts;
    iVar3 = getopt_long(param_1,param_2,"fn:s:uvxz",long_opts,0);
    pcVar1 = _optarg;
    if (iVar3 == -1) {
      lVar10 = (long)_optind;
      param_1 = param_1 - _optind;
      if (param_1 == 0) {
        uVar6 = dcgettext(0,"missing file operand",5);
        error(0,0,uVar6);
        param_1 = 0;
        goto switchD_0010219b_caseD_67;
      }
      randint_source = randint_all_new(__s1,0xffffffffffffffff);
      if (randint_source == 0) {
        randint_source = 0;
        if (__s1 == (char *)0x0) goto LAB_001028bb;
        do {
          uVar6 = quotearg_n_style_colon(0,3,__s1);
          piVar7 = __errno_location();
          error(1,*piVar7,&_LC54,uVar6);
LAB_001028bb:
          __s1 = "getrandom";
        } while( true );
      }
      atexit(clear_random_data);
      if (0 < param_1) {
        __s1 = (char *)(param_2 + lVar10);
        bVar11 = 1;
        local_a8 = (char *)(param_2 + param_1 + lVar10);
        goto LAB_00102413;
      }
      bVar11 = 1;
LAB_0010250c:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar11 ^ 1;
      }
      goto LAB_001027f7;
    }
    if (0x80 < iVar3) {
switchD_0010219b_caseD_67:
      usage(1);
      do {
        iVar3 = dosync(param_1,local_a0);
        if (iVar3 != 0) {
          local_7a = 0;
        }
        iVar3 = close(param_1);
        if (iVar3 != 0) {
          uVar6 = dcgettext(0,"%s: failed to close",5);
          piVar7 = __errno_location();
          error(0,*piVar7,uVar6,local_a0);
          local_7a = 0;
        }
        do {
          free(local_90);
          free(local_88);
          free(local_a0);
          do {
            while( true ) {
              bVar11 = bVar11 & local_7a;
              while( true ) {
                __s1 = __s1 + 8;
                free(local_b0);
                if (__s1 == local_a8) goto LAB_0010250c;
LAB_00102413:
                uVar6 = quotearg_n_style_colon(0,3,*(undefined8 *)__s1);
                local_b0 = (char *)xstrdup(uVar6);
                lVar10 = randint_source;
                pcVar1 = *(char **)__s1;
                if ((*pcVar1 != '-') || (pcVar1[1] != '\0')) break;
                uVar4 = rpl_fcntl(1,3);
                if ((int)uVar4 < 0) {
                  uVar6 = dcgettext(0,"%s: fcntl failed",5);
                  piVar7 = __errno_location();
                  error(0,*piVar7,uVar6,local_b0);
                  bVar2 = 0;
                }
                else if ((uVar4 & 0x400) == 0) {
                  bVar2 = do_wipefd(1,local_b0,lVar10,local_68);
                }
                else {
                  uVar6 = dcgettext(0,"%s: cannot shred append-only file descriptor",5);
                  error(0,0,uVar6,local_b0);
                  bVar2 = 0;
                }
                bVar11 = bVar11 & bVar2;
              }
              iVar3 = open_safer(pcVar1,0x101);
              if ((-1 < iVar3) ||
                 ((((piVar7 = __errno_location(), *piVar7 == 0xd && (local_68[0] != '\0')) &&
                   (iVar3 = chmod(pcVar1,0x80), iVar3 == 0)) &&
                  (iVar3 = open_safer(pcVar1,0x101), -1 < iVar3)))) break;
              uVar6 = dcgettext(0,"%s: failed to open for writing",5);
              error(0,*piVar7,uVar6,local_b0);
LAB_0010248e:
              local_7a = 0;
            }
            local_7a = do_wipefd(iVar3,local_b0,lVar10,local_68);
            iVar3 = close(iVar3);
            if (iVar3 != 0) {
              uVar6 = dcgettext(0,"%s: failed to close",5);
              piVar7 = __errno_location();
              error(0,*piVar7,uVar6,local_b0);
              goto LAB_0010248e;
            }
            if (local_7a == 0) goto LAB_0010248e;
          } while (local_58._8_4_ == 0);
          local_90 = (void *)xstrdup(pcVar1);
          __s = (char *)last_component(local_90);
          local_88 = (void *)dir_name(local_90);
          uVar6 = quotearg_n_style_colon(0,3,local_88);
          local_a0 = (void *)xstrdup(uVar6);
          local_80 = -1;
          if (local_58._8_4_ == 3) {
            local_80 = open_safer(local_88,0x10900);
          }
          if (local_58[0xc] != '\0') {
            uVar6 = dcgettext(0,"%s: removing",5);
            error(0,0,uVar6,local_b0);
          }
          if ((local_58._8_4_ != 1) && (__n = base_len(__s), __n != 0)) {
            bVar2 = local_7a;
            do {
              sVar12 = __n - 1;
              memset(__s,0x30,__n);
              __s[__n] = '\0';
              while (iVar3 = renameatu(0xffffff9c,pcVar1,0xffffff9c,local_90,1), iVar3 != 0) {
                piVar7 = __errno_location();
                if (*piVar7 != 0x11) goto LAB_001026ad;
                pcVar9 = __s + sVar12;
                while( true ) {
                  pcVar5 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_."
                                  ,(int)*pcVar9);
                  if (pcVar5[1] != '\0') break;
                  *pcVar9 = '0';
                  bVar13 = pcVar9 == __s;
                  pcVar9 = pcVar9 + -1;
                  if (bVar13) goto LAB_001026ad;
                }
                *pcVar9 = pcVar5[1];
              }
              if (-1 < local_80) {
                iVar3 = dosync(local_80,local_a0);
                if (iVar3 != 0) {
                  local_7a = 0;
                }
              }
              if (local_58[0xc] != '\0') {
                pcVar9 = local_b0;
                if (bVar2 == 0) {
                  pcVar9 = pcVar1;
                }
                uVar6 = dcgettext(0,"%s: renamed to %s",5);
                error(0,0,uVar6,pcVar9,local_90);
                bVar2 = 0;
              }
              memcpy(pcVar1 + ((long)__s - (long)local_90),__s,__n + 1);
LAB_001026ad:
              __n = sVar12;
            } while (sVar12 != 0);
          }
          iVar3 = unlink(pcVar1);
          if (iVar3 == 0) {
            if (local_58[0xc] != '\0') {
              uVar6 = dcgettext(0,"%s: removed",5);
              error(0,0,uVar6,local_b0);
            }
          }
          else {
            uVar6 = dcgettext(0,"%s: failed to remove",5);
            piVar7 = __errno_location();
            error(0,*piVar7,uVar6,local_b0);
            local_7a = 0;
          }
          param_1 = local_80;
        } while (local_80 < 0);
      } while( true );
    }
    if (iVar3 < 0x66) {
      if (iVar3 == -0x83) {
        uVar6 = proper_name_lite("Colin Plumb","Colin Plumb");
        version_etc(_stdout,"shred","GNU coreutils",_Version,uVar6,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 != -0x82) goto switchD_0010219b_caseD_67;
      usage(0);
      goto LAB_001027d3;
    }
    switch(iVar3) {
    case 0x66:
      local_68[0] = 1;
      pcVar1 = __s1;
      break;
    default:
      goto switchD_0010219b_caseD_67;
    case 0x6e:
      dcgettext(0,"invalid number of passes",5);
      uVar6 = xdectoumax(_optarg,0,0x3fffffffffffffff,&_LC2);
      local_68._8_8_ = uVar6;
      pcVar1 = __s1;
      break;
    case 0x73:
      uVar6 = dcgettext(0,"invalid file size",5);
      uVar6 = xnumtoumax(_optarg,0,0,0x7fffffffffffffff,"cbBkKMGTPEZYRQ0",uVar6,0,0);
      local_58._0_8_ = uVar6;
      pcVar1 = __s1;
      break;
    case 0x75:
      if (_optarg == (char *)0x0) {
        local_58._8_4_ = 3;
        pcVar1 = __s1;
      }
      else {
        lVar10 = __xargmatch_internal
                           ("--remove",_optarg,remove_args,remove_methods,4,_argmatch_die,1,puVar8);
        local_58._8_4_ = *(undefined4 *)(remove_methods + lVar10 * 4);
        pcVar1 = __s1;
      }
      break;
    case 0x76:
      local_58[0xc] = 1;
      pcVar1 = __s1;
      break;
    case 0x78:
      local_58[0xd] = 1;
      pcVar1 = __s1;
      break;
    case 0x7a:
      local_58[0xe] = 1;
      pcVar1 = __s1;
      break;
    case 0x80:
      if (__s1 != (char *)0x0) {
        local_b0 = _optarg;
        iVar3 = strcmp(__s1,_optarg);
        if (iVar3 != 0) {
LAB_001027d3:
          uVar6 = dcgettext(0,"multiple random sources specified",5);
          error(1,0,uVar6);
LAB_001027f7:
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
  } while( true );
}


