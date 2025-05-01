
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void clear_random_data(void)

{
  randint_all_free(randint_source);
  return;
}



/* WARNING: Unknown calling convention */

int dosync(int fd,char *qname)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  iVar1 = fdatasync(fd);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
      uVar3 = dcgettext(0,"%s: fdatasync failed",5);
      error(0,iVar1,uVar3,qname);
      *piVar2 = iVar1;
      return -1;
    }
    iVar1 = fsync(fd);
    if (iVar1 != 0) {
      iVar1 = *piVar2;
      if ((1 < iVar1 - 0x15U) && (iVar1 != 9)) {
        uVar3 = dcgettext(0,"%s: fsync failed",5);
        error(0,iVar1,uVar3,qname);
        *piVar2 = iVar1;
        return -1;
      }
      sync();
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention */

int dopass(int fd,stat *st,char *qname,off_t *sizep,int type,randread_source *s,ulong k,ulong n)

{
  long lVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  char *__ptr;
  __off_t _Var6;
  int *piVar7;
  undefined8 uVar8;
  ssize_t sVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar12;
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
  int local_81c;
  mtop op;
  char pass_string [7];
  char previous_offset_buf [652];
  char offset_buf [652];
  char size_buf [652];
  
  uVar12 = *sizep;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = getpagesize();
  if (type < 1) {
LAB_00100223:
    local_850 = 0x10000;
    uVar18 = 0x10002;
  }
  else {
    uVar5 = (type & 0xfffU) * 0x1001;
    cVar14 = (char)(uVar5 >> 4);
    if (((char)(uVar5 >> 8) == cVar14) && (cVar14 == (char)uVar5)) goto LAB_00100223;
    local_850 = 0xf000;
    uVar18 = 0xf000;
  }
  __ptr = (char *)xalignalloc((long)iVar4);
  bVar2 = 0 < (long)uVar12 && uVar12 < local_850;
  if (((0 >= (long)uVar12 || uVar12 >= local_850) && (uVar5 = rpl_fcntl(fd), 0 < (int)uVar5)) &&
     (uVar5 != (uVar5 | 0x4000))) {
    rpl_fcntl(fd);
  }
  if ((st->st_mode & 0xf000) != 0x2000) {
LAB_001001a0:
    _Var6 = lseek(fd,0,0);
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
    error(0,iVar4,uVar8,qname);
    free(__ptr);
    goto LAB_001001f5;
  }
  op.mt_op = 6;
  op.mt_count = 1;
  iVar4 = ioctl(fd,0x40086d01,&op);
  if (iVar4 != 0) goto LAB_001001a0;
LAB_0010023e:
  if (type < 0) {
    builtin_strncpy(pass_string,"random",7);
  }
  else {
    uVar19 = uVar18;
    if ((long)uVar12 < 0) {
      uVar5 = (type & 0xfffU) * 0x1001;
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
      if (uVar12 <= uVar18) {
        uVar19 = uVar12;
      }
      uVar5 = (type & 0xfffU) * 0x1001;
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
      if ((type & 0x1000U) != 0) goto LAB_001002d7;
    }
    else if (((type & 0x1000U) != 0) && (uVar19 != 0)) {
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
    __sprintf_chk(pass_string,2,7,"%02x%02x%02x",*__ptr,__ptr[1],__ptr[2]);
  }
  if (n != 0) {
    pcVar10 = "%s: pass %lu/%lu (%s)...";
    uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...",5);
    error(0,0,uVar8,qname,k,n,pass_string,pcVar10);
    lVar13 = rpl_time(0);
    local_838 = lVar13 + 5;
  }
  local_81c = 0;
  local_840 = "";
  local_830 = 0;
  local_858 = 0;
joined_r0x0010038b:
  uVar18 = local_850;
  if ((((long)uVar12 < 0) || (uVar19 = uVar12 - local_858, local_850 <= uVar19)) ||
     ((uVar19 != 0 && (uVar18 = uVar19, (long)local_858 <= (long)uVar12)))) {
    if (type < 0) {
      randread(s,__ptr,uVar18);
    }
    uVar19 = 0;
LAB_001003d8:
    do {
      sVar9 = write(fd,__ptr + uVar19,uVar18 - uVar19);
      if (sVar9 < 1) {
        if ((long)uVar12 < 0) {
          if (sVar9 != 0) {
            piVar7 = __errno_location();
            iVar4 = *piVar7;
            if (iVar4 != 0x1c) {
              if ((iVar4 == 0x16) && (!bVar2)) goto LAB_00100416;
              uVar8 = dcgettext(0,"%s: error writing at offset %ju",5);
              error(0,iVar4,uVar8,qname,local_858 + uVar19);
              goto LAB_00100661;
            }
          }
          if (0x7fffffffffffffff - local_858 < uVar19) goto LAB_00100723;
          uVar12 = local_858 + uVar19;
          *sizep = uVar12;
          local_858 = uVar12;
          goto LAB_0010046d;
        }
        piVar7 = __errno_location();
        iVar4 = *piVar7;
        if ((iVar4 == 0x16) && (!bVar2)) {
LAB_00100416:
          uVar5 = rpl_fcntl(fd,3);
          if ((0 < (int)uVar5) && ((uVar5 & 0x4000) != 0)) {
            rpl_fcntl(fd,4,uVar5 & 0xffffbfff);
          }
          bVar2 = true;
          if (uVar18 <= uVar19) break;
          goto LAB_001003d8;
        }
        uVar8 = dcgettext(0,"%s: error writing at offset %ju",5);
        error(0,iVar4,uVar8,qname,uVar19 + local_858);
        if ((iVar4 != 5) || (uVar18 <= (uVar19 | 0x1ff))) goto LAB_00100661;
        uVar19 = (uVar19 | 0x1ff) + 1;
        _Var6 = lseek(fd,local_858 + uVar19,0);
        if (_Var6 == -1) {
          uVar8 = dcgettext(0,"%s: lseek failed",5);
          iVar4 = *piVar7;
          goto LAB_001001e4;
        }
        local_81c = 1;
      }
      else {
        uVar19 = uVar19 + sVar9;
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
    if (n != 0) {
      if (uVar12 == local_858) {
        if ((*local_840 == '\0') && (local_830 = rpl_time(0), local_830 < local_838))
        goto joined_r0x0010038b;
        pcVar10 = (char *)human_readable(uVar12,offset_buf,0x1b2,1,1);
        if (-1 < (long)uVar12) goto LAB_001004c3;
LAB_001006c8:
        uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s",5);
        error(0,0,uVar8,qname,k,n,pass_string,pcVar10);
      }
      else {
        local_830 = rpl_time(0);
        if (local_830 < local_838) goto joined_r0x0010038b;
        pcVar10 = (char *)human_readable(local_858,offset_buf,0x1b2,1,1);
        iVar4 = strcmp(local_840,pcVar10);
        if (iVar4 == 0) goto joined_r0x0010038b;
        if ((long)uVar12 < 0) goto LAB_001006c8;
LAB_001004c3:
        uVar17 = 100;
        if (uVar12 != 0) {
          if (local_858 < 0x28f5c28f5c28f5d) {
            uVar17 = (undefined4)((local_858 * 100) / uVar12);
          }
          else {
            uVar17 = (undefined4)
                     (local_858 /
                     (ulong)(((long)(SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816((long)uVar12),8)
                                    + uVar12) >> 6) - ((long)uVar12 >> 0x3f)));
          }
        }
        pcVar11 = (char *)human_readable(uVar12,size_buf,0x1b0,1,1);
        if (uVar12 == local_858) {
          pcVar10 = pcVar11;
        }
        uVar8 = dcgettext(0,"%s: pass %lu/%lu (%s)...%s/%s %d%%",5);
        error(0,0,uVar8,qname,k,n,pass_string,pcVar10,pcVar11,uVar17);
      }
      local_840 = previous_offset_buf;
      __strcpy_chk(local_840,pcVar10,0x28c);
      local_838 = local_830 + 5;
      iVar4 = dosync(fd,qname);
      if (iVar4 != 0) {
        piVar7 = __errno_location();
        if (*piVar7 != 5) goto LAB_00100661;
        local_81c = 1;
      }
    }
    goto joined_r0x0010038b;
  }
  iVar4 = dosync(fd,qname);
  if (iVar4 == 0) {
    free(__ptr);
    goto LAB_001001fa;
  }
  piVar7 = __errno_location();
  if (*piVar7 == 5) {
    free(__ptr);
    local_81c = 1;
    goto LAB_001001fa;
  }
LAB_00100661:
  free(__ptr);
LAB_001001f5:
  local_81c = -1;
LAB_001001fa:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_81c;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool do_wipefd(int fd,char *qname,randint_source *s,Options *flags)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  randread_source *s_00;
  long lVar9;
  undefined8 uVar10;
  size_t sVar11;
  ulong uVar12;
  int *piVar13;
  char *pcVar14;
  int *piVar15;
  ulong uVar16;
  ulong uVar17;
  size_t sVar18;
  int *piVar19;
  long in_FS_OFFSET;
  long local_130;
  _Bool local_128;
  long local_120;
  ulong local_118;
  off_t pass_size;
  stat st;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = 0;
  if (flags->verbose != false) {
    local_118 = (ulong)flags->zero_fill + flags->n_iterations;
  }
  iVar3 = fstat(fd,(stat *)&st);
  if (iVar3 == 0) {
    uVar4 = st.st_mode & 0xf000;
    if (uVar4 == 0x2000) {
      iVar3 = isatty(fd);
      if (iVar3 == 0) {
        uVar4 = st.st_mode & 0xf000;
        goto LAB_00100a82;
      }
LAB_00101046:
      pcVar14 = "%s: invalid file type";
    }
    else {
LAB_00100a82:
      if (uVar4 == 0xc000 || uVar4 == 0x1000) goto LAB_00101046;
      if ((uVar4 != 0x8000) || (-1 < st.st_size)) {
        sVar18 = flags->n_iterations;
        piVar5 = (int *)xnmalloc(sVar18);
        local_120 = flags->size;
        lVar9 = st.st_size;
        if (local_120 == -1) {
          if ((st.st_mode & 0xf000) == 0x8000) {
            local_120 = st.st_size;
            if (flags->exact == false) {
              if (0x1fffffffffffffff < st.st_blksize - 1U) {
                st.st_blksize = 0x200;
              }
              if ((st.st_blksize <= st.st_size) || (st.st_size == 0)) {
                lVar9 = 0;
              }
              if (st.st_size % st.st_blksize != 0) {
                lVar8 = st.st_blksize - st.st_size % st.st_blksize;
                local_120 = 0x7fffffffffffffff - st.st_size;
                if (lVar8 < 0x7fffffffffffffff - st.st_size) {
                  local_120 = lVar8;
                }
                local_120 = st.st_size + local_120;
              }
              goto LAB_00100c0d;
            }
            goto LAB_00100aee;
          }
          lVar9 = lseek(fd,0,2);
          sVar11 = flags->n_iterations;
          if (lVar9 < 1) {
            lVar9 = local_120;
          }
        }
        else {
          if ((st.st_mode & 0xf000) == 0x8000) {
            if (0x1fffffffffffffff < st.st_blksize - 1U) {
              st.st_blksize = 0x200;
            }
            if (local_120 < st.st_blksize) {
              st.st_blksize = local_120;
            }
            if (st.st_size < st.st_blksize) {
LAB_00100c0d:
              sVar11 = flags->n_iterations;
              if (sVar11 != 0) goto LAB_00100afd;
              goto LAB_00100cfb;
            }
          }
LAB_00100aee:
          sVar11 = flags->n_iterations;
          lVar9 = local_120;
        }
        local_120 = lVar9;
        lVar9 = 0;
        if (sVar11 == 0) {
          s_00 = (randread_source *)randint_get_source(s);
          local_128 = true;
          lVar8 = local_120;
          goto LAB_00100da8;
        }
LAB_00100afd:
        uVar1 = sVar18 * 4;
        piVar19 = patterns;
        uVar12 = 0xfffffffffffffffe;
        local_130 = 0;
        uVar17 = uVar1;
        piVar15 = piVar5;
        sVar18 = sVar11;
        do {
          if ((int)uVar12 == 0) {
            uVar12 = 0xfffffffe;
            piVar19 = patterns + 1;
LAB_00100b54:
            uVar12 = (ulong)-(int)uVar12;
            if (sVar18 <= uVar12) goto LAB_00100e97;
            local_130 = local_130 + uVar12;
          }
          else {
            piVar13 = piVar19 + 1;
            piVar19 = piVar13;
            if ((int)uVar12 < 0) goto LAB_00100b54;
            if (sVar18 < uVar12) {
              if ((1 < sVar18) && (uVar12 <= sVar18 * 3)) goto LAB_00100f85;
              local_130 = local_130 + sVar18;
              goto LAB_00100c58;
            }
            lVar8 = uVar12 * 4;
            piVar19 = piVar13 + uVar12;
            lVar6 = __memcpy_chk(piVar15,piVar13,lVar8,uVar17);
            uVar16 = uVar1;
            if (uVar1 <= uVar17) {
              uVar16 = uVar17;
            }
            uVar7 = (uVar16 + lVar8) - uVar17;
            if (uVar7 < uVar16) {
              uVar7 = uVar16;
            }
            piVar15 = (int *)(lVar6 + lVar8);
            uVar17 = uVar7 + (uVar17 - (uVar16 + lVar8));
          }
          sVar18 = sVar18 - uVar12;
          uVar12 = (ulong)*piVar19;
        } while( true );
      }
      pcVar14 = "%s: file has negative size";
    }
    uVar10 = dcgettext(0,pcVar14,5);
    error(0,0,uVar10,qname);
  }
  else {
    uVar10 = dcgettext(0,"%s: fstat failed",5);
    piVar5 = __errno_location();
    error(0,*piVar5,uVar10,qname);
  }
  local_128 = false;
LAB_00100dd6:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_128;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100e97:
  local_130 = local_130 + sVar18;
LAB_00100c58:
  uVar12 = local_130 - 1;
  sVar18 = 0;
  local_130 = sVar11 - local_130;
  uVar17 = uVar12;
  do {
    while (uVar12 < uVar17) {
      uVar17 = uVar17 - uVar12;
      lVar8 = randint_genmax(s,(local_130 + -1) - sVar18);
      iVar3 = piVar5[sVar18];
      lVar8 = lVar8 + sVar18;
      piVar5[sVar18] = piVar5[lVar8];
      sVar18 = sVar18 + 1;
      piVar5[lVar8] = iVar3;
      if (sVar11 == sVar18) goto LAB_00100cfb;
    }
    uVar17 = (uVar17 + (sVar11 - 1)) - uVar12;
    piVar5[local_130] = piVar5[sVar18];
    local_130 = local_130 + 1;
    piVar5[sVar18] = -1;
    sVar18 = sVar18 + 1;
  } while (sVar11 != sVar18);
LAB_00100cfb:
  s_00 = (randread_source *)randint_get_source(s);
  if (lVar9 == 0) {
    local_128 = true;
    lVar8 = local_120;
    goto LAB_00100da8;
  }
  local_128 = true;
  uVar12 = 0;
  do {
    sVar18 = flags->n_iterations;
    lVar8 = local_120;
    pass_size = lVar9;
    if (flags->zero_fill + sVar18 != 0) {
      uVar17 = 0;
      do {
        iVar3 = 0;
        if (uVar17 < sVar18) {
          iVar3 = piVar5[uVar17];
        }
        uVar17 = uVar17 + 1;
        iVar3 = dopass(fd,&st,qname,&pass_size,iVar3,s_00,uVar17,uVar12);
        if (iVar3 != 0) {
          if (iVar3 < 0) goto LAB_00100dc9;
          local_128 = false;
        }
        sVar18 = flags->n_iterations;
      } while (uVar17 < flags->zero_fill + sVar18);
    }
LAB_00100da8:
    local_120 = 0;
    lVar9 = lVar8;
    uVar12 = local_118;
  } while (lVar8 != 0);
  if (((flags->remove_file != remove_none) && (iVar3 = ftruncate(fd,0), iVar3 != 0)) &&
     ((st.st_mode & 0xf000) == 0x8000)) {
    uVar10 = dcgettext(0,"%s: error truncating",5);
    piVar15 = __errno_location();
    error(0,*piVar15,uVar10,qname);
LAB_00100dc9:
    local_128 = false;
  }
  free(piVar5);
  goto LAB_00100dd6;
LAB_00100f85:
  if (sVar18 == uVar12) {
    uVar12 = sVar18 - 1;
LAB_00100f69:
    *piVar15 = *piVar13;
    sVar18 = sVar18 - 1;
    piVar15 = piVar15 + 1;
    if (sVar18 == 0) goto LAB_00100c58;
  }
  else {
    uVar12 = uVar12 - 1;
    uVar17 = randint_genmax(s,uVar12);
    if (uVar17 < sVar18) goto LAB_00100f69;
  }
  piVar13 = piVar13 + 1;
  goto LAB_00100f85;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  infomap *piVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar7 = infomap;
  if (status != 0) {
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
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    iVar2 = strcmp("shred",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long lVar1;
  char *pcVar2;
  randint_source *s;
  _Bool _Var3;
  int iVar4;
  uint uVar5;
  int iVar6;
  off_t oVar7;
  size_t sVar8;
  undefined8 uVar9;
  char *pcVar10;
  int *piVar11;
  void *__ptr;
  char *__s;
  void *__ptr_00;
  char *qname;
  size_t __n;
  char *pcVar12;
  option *poVar13;
  char *pcVar14;
  long lVar15;
  uint uVar16;
  char **ppcVar17;
  size_t sVar18;
  long in_FS_OFFSET;
  bool bVar19;
  int local_80;
  _Bool local_7a;
  Options flags;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  flags.force = false;
  flags._1_7_ = 0;
  flags.n_iterations = 0;
  flags.size = 0;
  flags.remove_file = remove_none;
  flags.verbose = false;
  flags.exact = false;
  flags.zero_fill = false;
  flags._31_1_ = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  flags.n_iterations = 3;
  flags.size = -1;
  pcVar2 = (char *)0x0;
LAB_00102158:
  pcVar10 = pcVar2;
  poVar13 = long_opts;
  iVar4 = getopt_long(argc,argv,"fn:s:uvxz",long_opts,0);
  pcVar2 = _optarg;
  if (iVar4 == -1) {
    lVar15 = (long)_optind;
    iVar4 = argc - _optind;
    if (iVar4 == 0) {
      uVar9 = dcgettext(0,"missing file operand",5);
      error(0,0,uVar9);
switchD_0010219b_caseD_67:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    randint_source = (randint_source *)randint_all_new(pcVar10,0xffffffffffffffff);
    if (randint_source == (randint_source *)0x0) {
      randint_source = (randint_source *)0x0;
      if (pcVar10 == (char *)0x0) goto LAB_001028bb;
      do {
        uVar9 = quotearg_n_style_colon(0,3,pcVar10);
        piVar11 = __errno_location();
        error(1,*piVar11,&_LC54,uVar9);
LAB_001028bb:
        pcVar10 = "getrandom";
      } while( true );
    }
    atexit(clear_random_data);
    if (0 < iVar4) {
      ppcVar17 = argv + lVar15;
      uVar16 = 1;
      goto LAB_00102413;
    }
    uVar16 = 1;
    goto LAB_0010250c;
  }
  if (0x80 < iVar4) goto switchD_0010219b_caseD_67;
  if (iVar4 < 0x66) {
    if (iVar4 == -0x83) {
      uVar9 = proper_name_lite("Colin Plumb","Colin Plumb");
      version_etc(_stdout,"shred","GNU coreutils",_Version,uVar9,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    goto switchD_0010219b_caseD_67;
  }
  switch(iVar4) {
  case 0x66:
    flags.force = true;
    pcVar2 = pcVar10;
    goto LAB_00102158;
  default:
    goto switchD_0010219b_caseD_67;
  case 0x6e:
    dcgettext(0,"invalid number of passes",5);
    sVar8 = xdectoumax(_optarg,0,0x3fffffffffffffff,&_LC2);
    flags.n_iterations = sVar8;
    pcVar2 = pcVar10;
    goto LAB_00102158;
  case 0x73:
    uVar9 = dcgettext(0,"invalid file size",5);
    oVar7 = xnumtoumax(_optarg,0,0,0x7fffffffffffffff,"cbBkKMGTPEZYRQ0",uVar9,0,0);
    flags.size = oVar7;
    pcVar2 = pcVar10;
    goto LAB_00102158;
  case 0x75:
    if (_optarg == (char *)0x0) {
      flags.remove_file = remove_wipesync;
      pcVar2 = pcVar10;
    }
    else {
      lVar15 = __xargmatch_internal
                         ("--remove",_optarg,remove_args,remove_methods,4,_argmatch_die,1,poVar13);
      flags.remove_file = remove_methods[lVar15];
      pcVar2 = pcVar10;
    }
    goto LAB_00102158;
  case 0x76:
    flags.verbose = true;
    pcVar2 = pcVar10;
    goto LAB_00102158;
  case 0x78:
    flags.exact = true;
    pcVar2 = pcVar10;
    goto LAB_00102158;
  case 0x7a:
    flags.zero_fill = true;
    pcVar2 = pcVar10;
    goto LAB_00102158;
  case 0x80:
    break;
  }
  if ((pcVar10 == (char *)0x0) || (iVar4 = strcmp(pcVar10,_optarg), iVar4 == 0)) goto LAB_00102158;
  uVar9 = dcgettext(0,"multiple random sources specified",5);
  error(1,0,uVar9);
  goto LAB_001027f7;
LAB_00102413:
  do {
    uVar9 = quotearg_n_style_colon(0,3,*ppcVar17);
    pcVar10 = (char *)xstrdup(uVar9);
    s = randint_source;
    pcVar2 = *ppcVar17;
    if ((*pcVar2 == '-') && (pcVar2[1] == '\0')) {
      uVar5 = rpl_fcntl(1,3);
      if ((int)uVar5 < 0) {
        uVar9 = dcgettext(0,"%s: fcntl failed",5);
        piVar11 = __errno_location();
        error(0,*piVar11,uVar9,pcVar10);
        uVar5 = 0;
      }
      else if ((uVar5 & 0x400) == 0) {
        _Var3 = do_wipefd(1,pcVar10,s,&flags);
        uVar5 = (uint)_Var3;
      }
      else {
        uVar9 = dcgettext(0,"%s: cannot shred append-only file descriptor",5);
        error(0,0,uVar9,pcVar10);
        uVar5 = 0;
      }
      uVar16 = uVar16 & uVar5;
    }
    else {
      iVar6 = open_safer(pcVar2,0x101);
      if ((iVar6 < 0) &&
         ((((piVar11 = __errno_location(), *piVar11 != 0xd || (flags.force == false)) ||
           (iVar6 = chmod(pcVar2,0x80), iVar6 != 0)) ||
          (iVar6 = open_safer(pcVar2,0x101), iVar6 < 0)))) {
        uVar9 = dcgettext(0,"%s: failed to open for writing",5);
        error(0,*piVar11,uVar9,pcVar10);
LAB_0010248e:
        local_7a = false;
      }
      else {
        local_7a = do_wipefd(iVar6,pcVar10,s,&flags);
        iVar6 = close(iVar6);
        if (iVar6 != 0) {
          uVar9 = dcgettext(0,"%s: failed to close",5);
          piVar11 = __errno_location();
          error(0,*piVar11,uVar9,pcVar10);
          goto LAB_0010248e;
        }
        if (!local_7a) goto LAB_0010248e;
        if (flags.remove_file != remove_none) {
          __ptr = (void *)xstrdup(pcVar2);
          __s = (char *)last_component(__ptr);
          __ptr_00 = (void *)dir_name(__ptr);
          uVar9 = quotearg_n_style_colon(0,3,__ptr_00);
          qname = (char *)xstrdup(uVar9);
          local_80 = -1;
          if (flags.remove_file == remove_wipesync) {
            local_80 = open_safer(__ptr_00,0x10900);
          }
          if (flags.verbose != false) {
            uVar9 = dcgettext(0,"%s: removing",5);
            error(0,0,uVar9,pcVar10);
          }
          if ((flags.remove_file != remove_unlink) && (__n = base_len(__s), __n != 0)) {
            _Var3 = local_7a;
            do {
              sVar18 = __n - 1;
              memset(__s,0x30,__n);
              __s[__n] = '\0';
              while (iVar6 = renameatu(0xffffff9c,pcVar2,0xffffff9c,__ptr,1), iVar6 != 0) {
                piVar11 = __errno_location();
                if (*piVar11 != 0x11) goto LAB_001026ad;
                pcVar14 = __s + sVar18;
                while( true ) {
                  pcVar12 = strchr("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ_."
                                   ,(int)*pcVar14);
                  if (pcVar12[1] != '\0') break;
                  *pcVar14 = '0';
                  bVar19 = pcVar14 == __s;
                  pcVar14 = pcVar14 + -1;
                  if (bVar19) goto LAB_001026ad;
                }
                *pcVar14 = pcVar12[1];
              }
              if (-1 < local_80) {
                iVar6 = dosync(local_80,qname);
                if (iVar6 != 0) {
                  local_7a = false;
                }
              }
              if (flags.verbose != false) {
                pcVar14 = pcVar10;
                if (_Var3 == false) {
                  pcVar14 = pcVar2;
                }
                uVar9 = dcgettext(0,"%s: renamed to %s",5);
                error(0,0,uVar9,pcVar14,__ptr);
                _Var3 = false;
              }
              memcpy(pcVar2 + ((long)__s - (long)__ptr),__s,__n + 1);
LAB_001026ad:
              __n = sVar18;
            } while (sVar18 != 0);
          }
          iVar6 = unlink(pcVar2);
          if (iVar6 == 0) {
            if (flags.verbose != false) {
              uVar9 = dcgettext(0,"%s: removed",5);
              error(0,0,uVar9,pcVar10);
            }
          }
          else {
            uVar9 = dcgettext(0,"%s: failed to remove",5);
            piVar11 = __errno_location();
            error(0,*piVar11,uVar9,pcVar10);
            local_7a = false;
          }
          if (-1 < local_80) {
            iVar6 = dosync(local_80,qname);
            if (iVar6 != 0) {
              local_7a = false;
            }
            iVar6 = close(local_80);
            if (iVar6 != 0) {
              uVar9 = dcgettext(0,"%s: failed to close",5);
              piVar11 = __errno_location();
              error(0,*piVar11,uVar9,qname);
              local_7a = false;
            }
          }
          free(__ptr);
          free(__ptr_00);
          free(qname);
        }
      }
      uVar16 = (uint)((byte)uVar16 & local_7a);
    }
    ppcVar17 = ppcVar17 + 1;
    free(pcVar10);
  } while (ppcVar17 != argv + iVar4 + lVar15);
LAB_0010250c:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16 ^ 1;
  }
LAB_001027f7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


