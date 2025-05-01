
/* WARNING: Unknown calling convention */

void strtoint_die(char *msgid,char *arg)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  uVar2 = quote(arg);
  uVar3 = dcgettext(0,msgid,5);
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  if (*piVar4 == 0x16) {
    iVar1 = 0;
  }
                    /* WARNING: Subroutine does not return */
  error(1,iVar1,"%s: %s",uVar3,uVar2);
}



/* WARNING: Unknown calling convention */

intmax_t parse_n_units(char *arg,char *multipliers,char *msgid)

{
  uint uVar1;
  long in_FS_OFFSET;
  intmax_t n;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoimax(arg,0,10,&n,multipliers);
  if ((uVar1 < 2) && (0 < n)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return n;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  strtoint_die(msgid,arg);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void next_file_name(void)

{
  char cVar1;
  long lVar2;
  _Bool _Var3;
  idx_t iVar4;
  idx_t iVar5;
  size_t sVar6;
  size_t sVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  idx_t *piVar11;
  undefined8 uVar12;
  ulong uVar13;
  long *plVar14;
  long *extraout_RDX;
  ulong uVar15;
  char *in_RSI;
  char *pcVar16;
  char *in_R8;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  
  pcVar16 = suffix_alphabet;
  pcVar8 = outfile;
  pcVar9 = outfile_mid;
  iVar5 = suffix_length;
  piVar11 = next_file_name::sufindex;
  _Var3 = suffix_auto;
  if (outfile == (char *)0x0) {
LAB_00100188:
    pcVar9 = in_R8;
    pcVar16 = in_RSI;
    iVar4 = next_file_name::outfile_length;
    if (next_file_name::outfile_length == 0) {
      sVar6 = strlen(outbase);
      sVar7 = 0;
      next_file_name::outbase_length = sVar6;
      if (additional_suffix != (char *)0x0) {
        sVar7 = strlen(additional_suffix);
        sVar6 = sVar6 + sVar7;
      }
      next_file_name::outfile_length = sVar6 + iVar5;
      uVar18 = next_file_name::outfile_length + 1;
      next_file_name::addsuf_length = sVar7;
      if (!SCARRY8(sVar6,iVar5) && !SCARRY8(next_file_name::outfile_length,1)) {
        pcVar8 = (char *)xirealloc(pcVar8,uVar18);
        uVar15 = next_file_name::outbase_length;
        outfile = pcVar8;
        __memcpy_chk(pcVar8,outbase,next_file_name::outbase_length,uVar18);
        pcVar9 = suffix_alphabet;
        piVar11 = next_file_name::sufindex;
LAB_001002a4:
        iVar5 = suffix_length;
        uVar17 = uVar15;
        if (uVar15 <= uVar18) {
          uVar17 = uVar18;
        }
        outfile_mid = pcVar8 + uVar15;
        uVar13 = uVar17 - uVar15;
        lVar10 = __memset_chk(outfile_mid,(int)*pcVar9,suffix_length);
        if (additional_suffix != (char *)0x0) {
          if (uVar18 <= uVar13) {
            uVar18 = uVar13;
          }
          uVar15 = (uVar15 - uVar17) + iVar5 + uVar18;
          if (uVar15 < uVar18) {
            uVar15 = uVar18;
          }
          __memcpy_chk(lVar10 + iVar5,additional_suffix,next_file_name::addsuf_length,
                       (uVar13 - (iVar5 + uVar18)) + uVar15);
        }
        pcVar8[next_file_name::outfile_length] = '\0';
        free(piVar11);
        piVar11 = (idx_t *)xicalloc(iVar5,8);
        pcVar9 = numeric_suffix_start;
        next_file_name::sufindex = piVar11;
        if (numeric_suffix_start != (char *)0x0) {
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("! widen","src/split.c",0x1a7,"next_file_name");
          }
          sVar7 = strlen(numeric_suffix_start);
          iVar5 = suffix_length;
          memcpy(outfile_mid + (suffix_length - sVar7),pcVar9,sVar7);
          sVar6 = sVar7;
          if (sVar7 != 0) {
            do {
              sVar6 = sVar6 - 1;
              piVar11[(iVar5 + sVar6) - sVar7] = (long)(pcVar9[sVar6] + -0x30);
            } while (sVar6 != 0);
            return;
          }
        }
        return;
      }
    }
    else {
      bVar19 = SCARRY8(next_file_name::outfile_length,2);
      lVar10 = next_file_name::outfile_length + 2;
      suffix_length = iVar5 + 1;
      uVar18 = next_file_name::outfile_length + 3;
      next_file_name::outfile_length = lVar10;
      if (!bVar19 && !SCARRY8(lVar10,1)) {
        pcVar8 = (char *)xirealloc(pcVar8,uVar18);
        pcVar9 = suffix_alphabet;
        piVar11 = next_file_name::sufindex;
        outfile = pcVar8;
        pcVar8[next_file_name::outbase_length] = suffix_alphabet[*next_file_name::sufindex];
        uVar15 = next_file_name::outbase_length + 1;
        next_file_name::outbase_length = uVar15;
        goto LAB_001002a4;
      }
    }
    xalloc_die();
    plVar14 = extraout_RDX;
LAB_001003d9:
    *plVar14 = 0;
    *pcVar9 = *pcVar16;
  }
  else if (suffix_length != 0) {
    plVar14 = next_file_name::sufindex + suffix_length + -1;
    lVar10 = suffix_length + -1;
    do {
      lVar2 = *plVar14;
      *plVar14 = lVar2 + 1;
      if ((lVar10 == 0) && (_Var3)) {
        in_RSI = pcVar16;
        in_R8 = pcVar9;
        if (pcVar16[*piVar11 + 1] == '\0') goto LAB_00100188;
        cVar1 = pcVar16[lVar2 + 1];
        *pcVar9 = cVar1;
        if (cVar1 != '\0') {
          return;
        }
        goto LAB_001003d9;
      }
      cVar1 = pcVar16[lVar2 + 1];
      pcVar9[lVar10] = cVar1;
      if (cVar1 != '\0') {
        return;
      }
      *plVar14 = 0;
      plVar14 = plVar14 + -1;
      pcVar9[lVar10] = *pcVar16;
      bVar19 = lVar10 != 0;
      lVar10 = lVar10 + -1;
    } while (bVar19);
  }
  uVar12 = dcgettext(0,"output file suffixes exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar12);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int create(char *name)

{
  char *pcVar1;
  int iVar2;
  __pid_t _Var3;
  int iVar4;
  char *pcVar5;
  char *__arg;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  stat out_stat_buf;
  
  lVar10 = *(long *)(in_FS_OFFSET + 0x28);
  if (filter_command != (char *)0x0) {
    pcVar5 = getenv("SHELL");
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "/bin/sh";
    }
    iVar2 = setenv("FILE",name,1);
    if (iVar2 == 0) {
      if (verbose != false) {
        uVar7 = quotearg_n_style_colon(0,3,name);
        uVar6 = dcgettext(0,"executing with FILE=%s\n",5);
        __fprintf_chk(_stdout,2,uVar6,uVar7);
      }
      iVar2 = pipe((int *)&out_stat_buf);
      if (iVar2 == 0) {
        _Var3 = fork();
        if (_Var3 == 0) {
          lVar10 = 0;
          if (0 < n_open_pipes) {
            do {
              iVar2 = close(open_pipes[lVar10]);
              if (iVar2 != 0) {
                pcVar5 = "closing prior pipe";
                goto LAB_0010074c;
              }
              lVar10 = lVar10 + 1;
            } while ((int)lVar10 < n_open_pipes);
          }
          iVar2 = close(out_stat_buf.st_dev._4_4_);
          if (iVar2 == 0) {
            if ((int)out_stat_buf.st_dev != 0) {
              iVar2 = dup2((int)out_stat_buf.st_dev,0);
              if (iVar2 != 0) {
                pcVar5 = "moving input pipe";
                goto LAB_0010087f;
              }
              iVar2 = close((int)out_stat_buf.st_dev);
              if (iVar2 != 0) {
                pcVar5 = "closing input pipe";
LAB_0010074c:
                uVar7 = dcgettext(0,pcVar5,5);
                piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
                error(1,*piVar8,uVar7);
              }
            }
            if (default_SIGPIPE != false) {
              signal(0xd,(__sighandler_t)0x0);
            }
            pcVar1 = filter_command;
            __arg = (char *)last_component(pcVar5);
            execl(pcVar5,__arg,&_LC18,pcVar1,0);
            uVar7 = dcgettext(0,"failed to run command: \"%s -c %s\"",5);
            piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
            error(1,*piVar8,uVar7,pcVar5,pcVar1);
          }
          pcVar5 = "closing output pipe";
        }
        else if (_Var3 < 0) {
          pcVar5 = "fork system call failed";
        }
        else {
          iVar2 = close((int)out_stat_buf.st_dev);
          if (iVar2 == 0) {
            lVar9 = (long)n_open_pipes;
            filter_pid = _Var3;
            if (lVar9 == open_pipes_alloc) {
              open_pipes = (int *)xpalloc(open_pipes,&open_pipes_alloc,1,0x7fffffff,4);
              lVar9 = (long)n_open_pipes;
            }
            n_open_pipes = (int)lVar9 + 1;
            open_pipes[lVar9] = out_stat_buf.st_dev._4_4_;
            iVar2 = out_stat_buf.st_dev._4_4_;
            goto LAB_0010050a;
          }
          pcVar5 = "failed to close input pipe";
        }
      }
      else {
        pcVar5 = "failed to create pipe";
      }
    }
    else {
      pcVar5 = "failed to set FILE environment variable";
    }
LAB_0010087f:
    uVar7 = dcgettext(0,pcVar5,5);
    piVar8 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar8,uVar7);
  }
  if (verbose) {
    uVar7 = quotearg_style(4,name);
    uVar6 = dcgettext(0,"creating file %s\n",5);
    __fprintf_chk(_stdout,2,uVar6,uVar7);
  }
  iVar2 = open_safer(name,0xc1,0x1b6);
  if (iVar2 < 0) {
    piVar8 = __errno_location();
    if (*piVar8 == 0x11) {
      iVar2 = open_safer(name,0x41,0x1b6);
      if (-1 < iVar2) {
        iVar4 = fstat(iVar2,(stat *)&out_stat_buf);
        if (iVar4 == 0) {
          if (in_stat_buf.st_dev == CONCAT44(out_stat_buf.st_dev._4_4_,(int)out_stat_buf.st_dev) &&
              in_stat_buf.st_ino == out_stat_buf.st_ino) {
            uVar7 = quotearg_style(4,name);
            uVar6 = dcgettext(0,"%s would overwrite input; aborting",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar6,uVar7);
          }
          iVar4 = ftruncate(iVar2,0);
          if ((-1 < iVar4) || ((out_stat_buf.st_mode & 0xf000) != 0x8000)) goto LAB_0010050a;
          uVar7 = quotearg_n_style_colon(0,3,name);
          pcVar5 = "%s: error truncating";
        }
        else {
          uVar7 = quotearg_style(4,name);
          pcVar5 = "failed to stat %s";
        }
        uVar6 = dcgettext(0,pcVar5,5);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar8,uVar6,uVar7);
      }
    }
  }
LAB_0010050a:
  if (lVar10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void write_error(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar3 = dcgettext(0,"write error",5);
                    /* WARNING: Subroutine does not return */
  error(1,iVar1,uVar3);
}



/* WARNING: Unknown calling convention */

_Bool ofile_open(of_t *files,idx_t i_check,idx_t nfiles)

{
  pid_t pVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  _Bool _Var8;
  of_t *poVar9;
  of_t *poVar10;
  bool bVar11;
  
  poVar10 = files + i_check;
  _Var8 = false;
  if (poVar10->ofd < 0) {
    pcVar6 = poVar10->of_name;
    lVar7 = i_check + -1;
    if (i_check == 0) {
      lVar7 = nfiles + -1;
    }
    _Var8 = false;
    if (poVar10->ofd == -1) goto LAB_00100a24;
LAB_00100998:
    iVar2 = open_safer(pcVar6,0xc01);
    if (iVar2 < 0) {
      do {
        piVar3 = __errno_location();
        if (1 < *piVar3 - 0x17U) {
LAB_00100a65:
          pcVar6 = poVar10->of_name;
LAB_00100a6d:
          uVar5 = quotearg_n_style_colon(0,3,pcVar6);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar3,&_LC23,uVar5);
        }
        while (poVar9 = files + lVar7, poVar9->ofd < 0) {
          bVar11 = lVar7 == 0;
          lVar7 = lVar7 + -1;
          if (bVar11) {
            lVar7 = nfiles + -1;
          }
          if (lVar7 == i_check) goto LAB_00100a65;
        }
        iVar2 = rpl_fclose(poVar9->ofile);
        if (iVar2 != 0) {
          pcVar6 = poVar9->of_name;
          goto LAB_00100a6d;
        }
        poVar9->ofd = -2;
        iVar2 = poVar10->ofd;
        poVar9->ofile = (FILE *)0x0;
        pcVar6 = poVar10->of_name;
        _Var8 = true;
        if (iVar2 != -1) goto LAB_00100998;
LAB_00100a24:
        iVar2 = create(pcVar6);
        if (-1 < iVar2) break;
      } while( true );
    }
    poVar10->ofd = iVar2;
    pFVar4 = fdopen(iVar2,"a");
    if (pFVar4 == (FILE *)0x0) {
      uVar5 = quotearg_n_style_colon(0,3,poVar10->of_name);
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar3,&_LC23,uVar5);
    }
    poVar10->ofile = (FILE *)pFVar4;
    pVar1 = filter_pid;
    filter_pid = 0;
    poVar10->opid = pVar1;
  }
  return _Var8;
}



/* WARNING: Unknown calling convention */

void closeout(FILE *fp,int fd,pid_t pid,char *name)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  __pid_t _Var4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long in_FS_OFFSET;
  int wstatus;
  char signame [19];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (fp == (FILE *)0x0) {
    if (fd < 0) goto LAB_00100b8c;
    iVar3 = close(fd);
    if (iVar3 < 0) {
      uVar6 = quotearg_n_style_colon(0,3,name);
      piVar5 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar5,&_LC23,uVar6);
    }
  }
  else {
    iVar3 = rpl_fclose();
    if (iVar3 != 0) {
      piVar5 = __errno_location();
      if ((*piVar5 != 0x20) || (filter_command == (char *)0x0)) {
        uVar6 = quotearg_n_style_colon(0,3,name);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar5,&_LC23,uVar6);
      }
    }
    if (fd < 0) goto LAB_00100b8c;
  }
  if (0 < n_open_pipes) {
    lVar9 = (long)n_open_pipes;
    piVar5 = open_pipes;
    do {
      if (*piVar5 == fd) {
        n_open_pipes = n_open_pipes + -1;
        *piVar5 = open_pipes[lVar9 + -1];
        break;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != open_pipes + lVar9);
  }
LAB_00100b8c:
  if (0 < pid) {
    _Var4 = waitpid(pid,&wstatus,0);
    pcVar2 = filter_command;
    if (_Var4 < 0) {
      uVar6 = dcgettext(0,"waiting for child process",5);
      piVar5 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar5,uVar6);
    }
    uVar8 = wstatus & 0x7f;
    if ((char)((char)uVar8 + '\x01') < '\x02') {
      if (uVar8 != 0) {
        uVar6 = dcgettext(0,"unknown status from command (0x%X)",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar6,wstatus);
      }
      if ((char)((uint)wstatus >> 8) != '\0') {
        uVar6 = quotearg_n_style_colon(0,3,name);
        uVar7 = dcgettext(0,"with FILE=%s, exit %d from command: %s",5);
        uVar8 = (uint)wstatus >> 8 & 0xff;
                    /* WARNING: Subroutine does not return */
        error(uVar8,0,uVar7,uVar6,uVar8,pcVar2);
      }
    }
    else if (uVar8 != 0xd) {
      iVar3 = sig2str(uVar8,signame);
      if (iVar3 != 0) {
        __sprintf_chk(signame,2,0x13,&_LC26,uVar8);
      }
      pcVar2 = filter_command;
      uVar6 = quotearg_n_style_colon(0,3,name);
      uVar7 = dcgettext(0,"with FILE=%s, signal %s from command: %s",5);
                    /* WARNING: Subroutine does not return */
      error(uVar8 + 0x80,0,uVar7,uVar6,signame,pcVar2);
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool cwrite(_Bool new_file_flag,char *bp,idx_t bytes)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (new_file_flag) {
    if ((bp == (char *)0x0 && bytes == 0) && (elide_empty_files)) {
      return true;
    }
    closeout((FILE *)0x0,output_desc,filter_pid,outfile);
    next_file_name();
    output_desc = create(outfile);
    if (output_desc < 0) {
      uVar3 = quotearg_n_style_colon(0,3,outfile);
      piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar2,&_LC23,uVar3);
    }
  }
  lVar1 = full_write(output_desc,bp,bytes);
  if (lVar1 == bytes) {
    return true;
  }
  piVar2 = __errno_location();
  if ((*piVar2 == 0x20) && (filter_command != (char *)0x0)) {
    return false;
  }
  uVar3 = quotearg_n_style_colon(0,3,outfile);
                    /* WARNING: Subroutine does not return */
  error(1,*piVar2,&_LC23,uVar3);
}



/* WARNING: Unknown calling convention */

void bytes_split(intmax_t n_bytes,intmax_t rem_bytes,char *buf,idx_t bufsize,ssize_t initial_read,
                intmax_t max_files)

{
  __off_t _Var1;
  undefined8 uVar2;
  int *piVar3;
  _Bool new_file_flag;
  long lVar4;
  _Bool _Var5;
  long lVar6;
  char *bp;
  bool bVar7;
  
  lVar4 = (ulong)(0 < rem_bytes) + n_bytes;
  if (lVar4 != 0) {
    if (initial_read < 0) {
      lVar6 = 0;
      _Var5 = true;
      new_file_flag = true;
      goto LAB_00100f7d;
    }
    _Var5 = true;
    new_file_flag = true;
    bVar7 = initial_read < bufsize;
    lVar6 = 0;
    if (lVar4 < 1) goto LAB_00100fb2;
    do {
      if (initial_read < lVar4) goto LAB_00100fb2;
      bp = buf;
      do {
        _Var5 = (_Bool)(_Var5 | new_file_flag);
        if (_Var5 != false) {
          _Var5 = cwrite(new_file_flag,bp,lVar4);
        }
        lVar6 = lVar6 + (ulong)new_file_flag;
        new_file_flag = lVar6 < max_files || max_files == 0;
        if ((lVar6 >= max_files && max_files != 0) && (_Var5 == false)) goto LAB_00101080;
        bp = bp + lVar4;
        initial_read = initial_read - lVar4;
        lVar4 = (ulong)(lVar6 < rem_bytes) + n_bytes;
      } while ((0 < lVar4) && (lVar4 <= initial_read));
      if (initial_read != 0) goto LAB_00100ff0;
      while( true ) {
        if (bVar7) goto LAB_00101080;
        if ((_Var5 == false) && (_Var1 = lseek(0,lVar4,1), -1 < _Var1)) {
          new_file_flag = true;
          lVar4 = (ulong)(lVar6 + 1 < rem_bytes) + n_bytes;
        }
LAB_00100f7d:
        initial_read = read(0,buf,bufsize);
        bVar7 = initial_read == 0;
        if (initial_read < 0) {
          uVar2 = quotearg_n_style_colon(0,3,infile);
          piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar3,&_LC23,uVar2);
        }
        if (0 < lVar4) break;
LAB_00100fb2:
        if (initial_read != 0) {
          bp = buf;
          if (_Var5 == false && new_file_flag == false) {
            _Var5 = false;
            new_file_flag = max_files == lVar6;
            if (new_file_flag) {
              return;
            }
          }
          else {
LAB_00100ff0:
            _Var5 = cwrite(new_file_flag,bp,initial_read);
            lVar6 = lVar6 + (ulong)new_file_flag;
            new_file_flag = max_files == lVar6 && !_Var5;
            if (new_file_flag) {
              return;
            }
          }
          lVar4 = lVar4 - initial_read;
        }
      }
    } while( true );
  }
  lVar6 = 0;
LAB_00101080:
  lVar4 = lVar6 + 1;
  if (max_files <= lVar6) {
    return;
  }
  do {
    lVar4 = lVar4 + 1;
    cwrite(true,(char *)0x0,0);
  } while (max_files + 1 != lVar4);
  return;
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
    goto LAB_0010116a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE [PREFIX]]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Output pieces of FILE to PREFIXaa, PREFIXab, ...;\ndefault size is 1000 lines, and default PREFIX is \'x\'.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "  -a, --suffix-length=N   generate suffixes of length N (default %d)\n      --additional-suffix=SUFFIX  append an additional SUFFIX to file names\n  -b, --bytes=SIZE        put SIZE bytes per output file\n  -C, --line-bytes=SIZE   put at most SIZE bytes of records per output file\n  -d                      use numeric suffixes starting at 0, not alphabetic\n      --numeric-suffixes[=FROM]  same as -d, but allow setting the start value\n  -x                      use hex suffixes starting at 0, not alphabetic\n      --hex-suffixes[=FROM]  same as -x, but allow setting the start value\n  -e, --elide-empty-files  do not generate empty output files with \'-n\'\n      --filter=COMMAND    write to shell COMMAND; file name is $FILE\n  -l, --lines=NUMBER      put NUMBER lines/records per output file\n  -n, --number=CHUNKS     generate CHUNKS output files; see explanation below\n  -t, --separator=SEP     use SEP instead of newline as the record separator;\n                            \'\\0\' (zero) specifies the NUL character\n  -u, --unbuffered        immediately copy input to output with \'-n r/...\'\n"
                    ,5);
  __fprintf_chk(_stdout,2,uVar5,2);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --verbose           print a diagnostic just before each\n                            output file is opened\n"
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
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nCHUNKS may be:\n  N       split into N files based on size of input\n  K/N     output Kth of N to stdout\n  l/N     split into N files without splitting lines/records\n  l/K/N   output Kth of N to stdout without splitting lines/records\n  r/N     like \'l\' but use round robin distribution\n  r/K/N   likewise but only output Kth of N to stdout\n"
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
    iVar2 = strcmp("split",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "split";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_0010140d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","split");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_0010140d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","split");
    if (pcVar4 == "split") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_0010116a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  long bytes;
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  intmax_t iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ushort **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  size_t sVar15;
  ulong uVar16;
  __sighandler_t p_Var17;
  int *piVar18;
  long lVar19;
  char *pcVar20;
  ulong uVar21;
  void *pvVar22;
  size_t sVar23;
  __off_t _Var24;
  long lVar25;
  char *pcVar26;
  char *pcVar27;
  _Bool new_file_flag;
  _Bool _Var28;
  char *pcVar29;
  int iVar30;
  byte *pbVar31;
  byte *pbVar32;
  ulong uVar33;
  char *pcVar34;
  long in_FS_OFFSET;
  bool bVar35;
  bool bVar36;
  char *local_c0;
  size_t local_90;
  long local_78;
  intmax_t n_units;
  char *argend;
  intmax_t n;
  long local_40;
  
  iVar30 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  n_units = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_78 = 0;
  infile = "-";
  outbase = "x";
  local_90 = 0;
  iVar8 = eolchar;
  pbVar32 = (byte *)additional_suffix;
  iVar10 = 0;
LAB_001027d0:
  additional_suffix = (char *)pbVar32;
  eolchar = iVar8;
  iVar3 = _optind;
  if (_optind == 0) {
    iVar3 = 1;
  }
  iVar6 = getopt_long(argc,argv,"0123456789C:a:b:del:n:t:ux",longopts);
  pbVar31 = _optarg;
  if (iVar6 != -1) {
    if (0x83 < iVar6) {
switchD_0010282e_caseD_a:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (iVar6 < 0x30) {
      if (iVar6 == -0x83) {
        uVar13 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        uVar14 = proper_name_lite("Torbjorn Granlund",&_LC82);
        version_etc(_stdout,"split","GNU coreutils",_Version,uVar14,uVar13,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar6 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_0010282e_caseD_a;
    }
    iVar7 = iVar6 + -0x30;
    iVar8 = eolchar;
    pbVar32 = (byte *)additional_suffix;
    switch(iVar7) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      if (iVar30 == 0) {
        n_units = 0;
      }
      else if (iVar30 != 4) break;
      if ((iVar10 != 0) && (iVar10 != iVar3)) {
        n_units = 0;
      }
      lVar25 = n_units * 10;
      if ((SEXT816(lVar25) != SEXT816(n_units) * SEXT816(10)) ||
         (n_units = lVar25 + iVar7, SCARRY8(lVar25,(long)iVar7))) {
        n_units = 0x7fffffffffffffff;
      }
      iVar30 = 4;
      iVar10 = iVar3;
      goto LAB_001027d0;
    default:
      goto switchD_0010282e_caseD_a;
    case 0x13:
      if (iVar30 == 0) {
        iVar30 = 2;
        n_units = parse_n_units((char *)_optarg,"bEGKkMmPQRTYZ0","invalid number of lines");
        iVar8 = eolchar;
        pbVar32 = (byte *)additional_suffix;
        goto LAB_001027d0;
      }
      break;
    case 0x31:
      dcgettext(0,"invalid suffix length",5);
      suffix_length = xdectoimax(_optarg,0,0x7fffffffffffffff,&_LC33);
      iVar8 = eolchar;
      pbVar32 = (byte *)additional_suffix;
      goto LAB_001027d0;
    case 0x32:
      if (iVar30 == 0) {
        iVar30 = 1;
        n_units = parse_n_units((char *)_optarg,"bEGKkMmPQRTYZ0","invalid number of bytes");
        iVar8 = eolchar;
        pbVar32 = (byte *)additional_suffix;
        goto LAB_001027d0;
      }
      break;
    case 0x34:
    case 0x48:
      pcVar27 = "0123456789abcdef";
      if (iVar6 == 100) {
        pcVar27 = "0123456789";
      }
      suffix_alphabet = pcVar27;
      if (_optarg != (byte *)0x0) {
        sVar15 = strlen((char *)_optarg);
        sVar23 = strspn((char *)pbVar31,pcVar27);
        if (sVar15 != sVar23) {
          uVar13 = quote(pbVar31);
          if (iVar6 == 100) {
            uVar14 = dcgettext(0,"%s: invalid start value for numerical suffix",5);
          }
          else {
            uVar14 = dcgettext(0,"%s: invalid start value for hexadecimal suffix",5);
          }
          goto LAB_001030fb;
        }
        while ((iVar8 = eolchar, pbVar32 = (byte *)additional_suffix,
               numeric_suffix_start = (char *)pbVar31, *pbVar31 == 0x30 && (pbVar31[1] != 0))) {
          pbVar31 = pbVar31 + 1;
          _optarg = pbVar31;
        }
      }
      goto LAB_001027d0;
    case 0x35:
      elide_empty_files = true;
      goto LAB_001027d0;
    case 0x3c:
      if (iVar30 == 0) {
        iVar30 = 3;
        n_units = parse_n_units((char *)_optarg,"","invalid number of lines");
        iVar8 = eolchar;
        pbVar32 = (byte *)additional_suffix;
        goto LAB_001027d0;
      }
      break;
    case 0x3e:
      if (iVar30 == 0) {
        ppuVar12 = __ctype_b_loc();
        bVar1 = *(byte *)((long)*ppuVar12 + (ulong)*_optarg * 2 + 1);
        pbVar32 = _optarg;
        while ((bVar1 & 0x20) != 0) {
          pbVar32 = pbVar32 + 1;
          bVar1 = *(byte *)((long)*ppuVar12 + (ulong)*pbVar32 * 2 + 1);
        }
        if ((*pbVar32 == 0x72) && (pbVar32[1] == 0x2f)) {
          _optarg = pbVar32 + 2;
          iVar30 = 7;
        }
        else {
          iVar30 = 5;
          _optarg = pbVar32;
          iVar8 = strncmp((char *)pbVar32,"l/",2);
          if (iVar8 == 0) {
            _optarg = pbVar32 + 2;
            iVar30 = 6;
          }
        }
        pbVar31 = _optarg;
        uVar9 = xstrtoimax(_optarg,&argend,10,&n_units);
        iVar4 = n_units;
        if (uVar9 == 2) {
          if (*argend == '/') {
            pcVar27 = argend + 1;
            local_78 = n_units;
            uVar9 = xstrtoimax(pcVar27,0,10,&n);
            if ((1 < uVar9) || (n < 1)) {
                    /* WARNING: Subroutine does not return */
              strtoint_die("invalid number of chunks",pcVar27);
            }
            n_units = n;
            if ((iVar4 < 1) || (iVar8 = eolchar, pbVar32 = (byte *)additional_suffix, n < iVar4)) {
              uVar13 = quote_mem(pbVar31,(long)argend - (long)pbVar31);
              uVar14 = dcgettext(0,"invalid chunk number",5);
                    /* WARNING: Subroutine does not return */
              error(1,0,"%s: %s",uVar14,uVar13);
            }
            goto LAB_001027d0;
          }
        }
        else if ((uVar9 < 2) && (iVar8 = eolchar, pbVar32 = (byte *)additional_suffix, 0 < n_units))
        goto LAB_001027d0;
                    /* WARNING: Subroutine does not return */
        strtoint_die("invalid number of chunks",(char *)pbVar31);
      }
      break;
    case 0x44:
      iVar8 = (int)(char)*_optarg;
      if (*_optarg == 0) {
        pcVar27 = "empty record separator";
      }
      else {
        if (_optarg[1] != 0) {
          iVar8 = strcmp((char *)_optarg,"\\0");
          if (iVar8 != 0) {
            uVar13 = quote(pbVar31);
            uVar14 = dcgettext(0,"multi-character separator %s",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar14,uVar13);
          }
          iVar8 = 0;
        }
        pbVar32 = (byte *)additional_suffix;
        if ((eolchar < 0) || (eolchar == iVar8)) goto LAB_001027d0;
        pcVar27 = "multiple separator characters specified";
      }
      uVar13 = dcgettext(0,pcVar27,5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar13);
    case 0x45:
      unbuffered = true;
      goto LAB_001027d0;
    case 0x50:
      verbose = true;
      goto LAB_001027d0;
    case 0x51:
      filter_command = (char *)_optarg;
      goto LAB_001027d0;
    case 0x52:
      uVar13 = dcgettext(0,"invalid IO block size",5);
      local_90 = xnumtoumax(_optarg,10,1,0x7ff00000,"bEGKkMmPQRTYZ0",uVar13,0,4);
      iVar8 = eolchar;
      pbVar32 = (byte *)additional_suffix;
      goto LAB_001027d0;
    case 0x53:
      goto switchD_0010282e_caseD_53;
    }
    pcVar27 = "cannot split in more than one way";
    goto LAB_0010403a;
  }
  if ((local_78 != 0) && (filter_command != (char *)0x0)) {
    pcVar27 = "--filter does not process a chunk extracted to stdout";
    goto LAB_0010403a;
  }
  if (iVar30 == 0) {
    n_units = 1000;
    iVar30 = 3;
  }
  else if (n_units == 0) {
    uVar13 = quote(&_LC85);
    uVar14 = dcgettext(0,"invalid number of lines: %s",5);
    goto LAB_001030fb;
  }
  iVar4 = n_units;
  if (eolchar < 0) {
    eolchar = 10;
  }
  uVar9 = iVar30 - 5;
  if (numeric_suffix_start == (char *)0x0) {
    lVar25 = n_units + -1;
    if (uVar9 < 3) goto LAB_00102f1c;
  }
  else {
    suffix_auto = false;
    if (uVar9 < 3) {
      lVar19 = n_units + -1;
      iVar10 = xstrtoimax(numeric_suffix_start,0,10,&n);
      lVar25 = lVar19;
      if ((iVar10 == 0) && (n < iVar4)) {
        lVar25 = 0x7fffffffffffffff;
        if (!SCARRY8(n,lVar19)) {
          lVar25 = n + lVar19;
        }
      }
LAB_00102f1c:
      iVar10 = 0;
      sVar15 = strlen(suffix_alphabet);
      do {
        iVar10 = iVar10 + 1;
        lVar25 = lVar25 / (long)sVar15;
      } while (lVar25 != 0);
      suffix_auto = false;
LAB_00102d04:
      if (suffix_length == 0) {
        iVar8 = 2;
        if (1 < iVar10) {
          iVar8 = iVar10;
        }
        suffix_length = (idx_t)iVar8;
      }
      else {
        if (suffix_length < iVar10) {
          uVar13 = dcgettext(0,"the suffix length needs to be at least %d",5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar13,iVar10);
        }
        suffix_auto = false;
      }
      iVar10 = _optind;
      if (_optind < argc) {
        lVar25 = (long)_optind;
        infile = argv[lVar25];
        iVar10 = _optind + 1;
        if (_optind + 1 < argc) {
          outbase = argv[lVar25 + 1];
          _optind = _optind + 2;
          iVar10 = _optind;
          if (_optind < argc) {
            uVar13 = quote(argv[lVar25 + 2]);
            uVar14 = dcgettext(0,"extra operand %s",5);
            goto LAB_001030fb;
          }
        }
      }
      _optind = iVar10;
      if (numeric_suffix_start != (char *)0x0) {
        sVar15 = strlen(numeric_suffix_start);
        pcVar27 = "numerical suffix start value is too large for the suffix length";
        if ((ulong)suffix_length < sVar15) {
LAB_0010403a:
          uVar13 = dcgettext(0,pcVar27,5);
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar13);
        }
      }
      pcVar27 = infile;
      iVar10 = strcmp(infile,"-");
      if ((iVar10 != 0) && (iVar10 = fd_reopen(0,pcVar27,0,0), iVar10 < 0)) {
        uVar13 = quotearg_style(4,infile);
        pcVar27 = "cannot open %s for reading";
        goto LAB_00102fff;
      }
      fdadvise(0,0,0,2);
      iVar10 = fstat(0,(stat *)&in_stat_buf);
      if (iVar10 != 0) goto LAB_00103e52;
      if (local_90 == 0) {
        uVar16 = 0x40000;
        if (((in_stat_buf.st_blksize - 1U < 0x2000000000000000) &&
            (auVar2._8_8_ = 0, auVar2._0_8_ = SUB168(SEXT816(0x3ffff),8),
            uVar16 = (0x3ffff -
                     SUB168((auVar2 << 0x40 | ZEXT816(0x3ffff)) % SEXT816(in_stat_buf.st_blksize),0)
                     ) + in_stat_buf.st_blksize, (in_stat_buf.st_mode & 0xf000) == 0x8000)) &&
           ((uVar16 - 1 & uVar16) != 0)) {
          lVar25 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          uVar16 = 1L << ((char)lVar25 + 1U & 0x3f);
        }
        local_90 = 0x7ff00000;
        if ((long)uVar16 < 0x7ff00001) {
          local_90 = uVar16;
        }
      }
      uVar16 = local_90 + 1;
      getpagesize();
      pcVar27 = (char *)xalignalloc();
      if (uVar9 < 2) {
        uVar33 = 0;
        do {
          uVar21 = uVar16;
          if (uVar16 <= uVar33) {
            uVar21 = uVar33;
          }
          lVar25 = __read_chk(0,pcVar27 + uVar33,local_90 - uVar33,uVar21 - uVar33);
          if (lVar25 < 1) {
            if (lVar25 == 0) goto LAB_00103bff;
            goto LAB_00102fdd;
          }
          uVar33 = uVar33 + lVar25;
        } while ((long)uVar33 < (long)local_90);
        if (((in_stat_buf.st_mode & 0xd000) == 0x8000) && (in_stat_buf.st_size < (long)uVar33)) {
LAB_00103b0e:
          _Var24 = 0;
          pvVar22 = (void *)xmalloc(local_90);
          cVar5 = temp_stream(&n,0);
          if (cVar5 != '\0') {
            do {
              sVar15 = read(0,pvVar22,local_90);
              if ((long)sVar15 < 1) {
                if (sVar15 == 0) {
                  iVar10 = fileno((FILE *)n);
                  iVar10 = dup2(iVar10,0);
                  if ((-1 < iVar10) && (iVar10 = rpl_fclose(n), -1 < iVar10)) {
                    free(pvVar22);
                    lVar25 = 0;
                    if (_Var24 < 0) goto LAB_00102fdd;
                    goto LAB_00103bc6;
                  }
                }
                goto LAB_00103f00;
              }
              sVar23 = fwrite_unlocked(pvVar22,1,sVar15,(FILE *)n);
              if (sVar15 != sVar23) goto LAB_00103f00;
              bVar36 = SCARRY8(sVar15,_Var24);
              _Var24 = sVar15 + _Var24;
            } while (!bVar36);
            piVar18 = __errno_location();
            *piVar18 = 0x4b;
          }
LAB_00103f00:
          free(pvVar22);
        }
        else {
          lVar25 = lseek(0,0,1);
          uVar21 = 0;
          if (-1 < (long)uVar33) {
            uVar21 = uVar33;
          }
          if ((lVar25 < (long)uVar21) || (_Var24 = lseek(0,0,2), _Var24 < 0)) goto LAB_00103b0e;
LAB_00103bc6:
          if (_Var24 == 0x7fffffffffffffff) {
LAB_001040af:
            piVar18 = __errno_location();
            *piVar18 = 0x4b;
          }
          else {
            if (lVar25 < _Var24) {
              bVar36 = SCARRY8(uVar33,_Var24 - lVar25);
              uVar33 = uVar33 + (_Var24 - lVar25);
              if (bVar36) goto LAB_001040af;
              _Var24 = lseek(0,lVar25,0);
              if (_Var24 < 0) goto LAB_00102fdd;
            }
LAB_00103bff:
            if (-1 < (long)uVar33) goto LAB_00102e90;
          }
        }
LAB_00102fdd:
        uVar13 = quotearg_n_style_colon(0,3,infile);
        pcVar27 = "%s: cannot determine file size";
LAB_00102fff:
        uVar14 = dcgettext(0,pcVar27,5);
        piVar18 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar18,uVar14,uVar13);
      }
LAB_00102e90:
      if (filter_command != (char *)0x0) {
        p_Var17 = signal(0xd,(__sighandler_t)0x1);
        default_SIGPIPE = p_Var17 == (__sighandler_t)0x0;
      }
      iVar4 = n_units;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(iVar30) {
      case 2:
        bytes_split(n_units,0,pcVar27,local_90,-1,0);
LAB_00103210:
        iVar10 = close(0);
        if (iVar10 == 0) {
          closeout((FILE *)0x0,output_desc,filter_pid,outfile);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
LAB_00103e52:
        uVar13 = quotearg_n_style_colon(0,3,infile);
        piVar18 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar18,&_LC23,uVar13);
      case 3:
        lVar19 = 0;
        n = 0;
        bVar36 = false;
        local_c0 = (char *)0x0;
        lVar25 = lVar19;
        break;
      case 4:
        lVar25 = 0;
        _Var28 = true;
LAB_00103120:
        lVar19 = __read_chk(0,pcVar27,local_90,uVar16);
        iVar10 = eolchar;
        if (-1 < lVar19) {
          pcVar34 = pcVar27 + lVar19;
          *pcVar34 = (char)eolchar;
          pcVar26 = pcVar27;
          pcVar29 = pcVar27;
          new_file_flag = _Var28;
          do {
            pcVar20 = (char *)rawmemchr(pcVar26,iVar10);
            while( true ) {
              if (pcVar34 == pcVar20) {
                _Var28 = new_file_flag;
                if (pcVar34 != pcVar29) {
                  _Var28 = false;
                  cwrite(new_file_flag,pcVar29,(long)pcVar34 - (long)pcVar29);
                }
                if (lVar19 == 0) goto LAB_00103210;
                goto LAB_00103120;
              }
              lVar25 = lVar25 + 1;
              pcVar26 = pcVar20 + 1;
              if (lVar25 < iVar4) break;
              lVar25 = 0;
              cwrite(new_file_flag,pcVar29,(long)pcVar26 - (long)pcVar29);
              iVar10 = eolchar;
              pcVar20 = (char *)rawmemchr(pcVar26,eolchar);
              pcVar29 = pcVar26;
              new_file_flag = true;
            }
          } while( true );
        }
        goto LAB_00103e52;
      default:
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","src/split.c",0x697,"main");
      }
      do {
        sVar15 = __read_chk(0,pcVar27,local_90,uVar16);
        if ((long)sVar15 < 0) goto LAB_00103e52;
        pcVar26 = pcVar27;
        if (sVar15 == 0) {
          if (lVar19 != 0) {
            cwrite(lVar25 == 0,local_c0,lVar19);
          }
          free(local_c0);
          goto LAB_00103210;
        }
LAB_00103523:
        do {
          sVar23 = (iVar4 - lVar25) - lVar19;
          if ((long)sVar15 < (long)sVar23) {
            pcVar34 = (char *)0x0;
            pvVar22 = memrchr(pcVar26,eolchar,sVar15);
            sVar23 = 0;
            if (lVar19 == 0) goto LAB_00103559;
LAB_001034cc:
            bVar35 = lVar25 == 0;
            if ((pvVar22 == (void *)0x0) && (!bVar35)) goto LAB_001034e5;
            lVar25 = lVar25 + lVar19;
            cwrite(bVar35,local_c0,lVar19);
            if (pvVar22 == (void *)0x0) goto LAB_00103a3f;
LAB_00103562:
            bVar36 = lVar25 == 0;
            bytes = (long)pvVar22 + (1 - (long)pcVar26);
            lVar25 = lVar25 + bytes;
            pcVar29 = pcVar26 + bytes;
            cwrite(bVar36,pcVar26,bytes);
            sVar15 = sVar15 - bytes;
            if (pcVar34 != (char *)0x0) {
              lVar19 = 0;
              sVar23 = sVar23 - bytes;
              goto LAB_001035a0;
            }
            lVar19 = 0;
LAB_001039f3:
            if (pcVar34 == (char *)0x0) {
LAB_001039fc:
              sVar23 = sVar15;
              sVar15 = sVar23;
              if (sVar23 != 0) {
                sVar15 = 0;
                goto LAB_001035bb;
              }
            }
          }
          else {
            pcVar34 = pcVar26 + (sVar23 - 1);
            pvVar22 = memrchr(pcVar26,eolchar,sVar23);
            if (lVar19 != 0) goto LAB_001034cc;
LAB_00103559:
            if (pvVar22 != (void *)0x0) goto LAB_00103562;
LAB_00103a3f:
            lVar19 = 0;
LAB_001034e5:
            pcVar29 = pcVar26;
            if (!bVar36) {
              bVar35 = lVar25 == 0;
              if (pcVar34 == (char *)0x0) {
                cwrite(bVar35,pcVar26,sVar15);
                lVar25 = lVar25 + sVar15;
                break;
              }
              lVar25 = 0;
              cwrite(bVar35,pcVar26,sVar23);
              sVar15 = sVar15 - sVar23;
              pcVar26 = pcVar26 + sVar23;
              if (sVar15 == 0) break;
              goto LAB_00103523;
            }
LAB_001035a0:
            if (pcVar34 == (char *)0x0) goto LAB_001039fc;
            if (sVar23 == 0) goto LAB_001039f3;
            sVar15 = sVar15 - sVar23;
LAB_001035bb:
            if (n - lVar19 < (long)sVar23) {
              local_c0 = (char *)xpalloc(local_c0,&n,sVar23 - (n - lVar19),0xffffffffffffffff,1);
            }
            memcpy(local_c0 + lVar19,pcVar29,sVar23);
            lVar19 = lVar19 + sVar23;
            pcVar29 = pcVar29 + sVar23;
          }
          bVar36 = pcVar34 == (char *)0x0;
          if (pcVar34 != (char *)0x0) {
            lVar25 = 0;
          }
          pcVar26 = pcVar29;
        } while (sVar15 != 0);
      } while( true );
    }
  }
  iVar10 = 0;
  goto LAB_00102d04;
switchD_0010282e_caseD_53:
  pbVar32 = _optarg;
  sVar15 = strlen((char *)_optarg);
  pbVar11 = (byte *)last_component(pbVar31);
  if ((pbVar31 != pbVar11) ||
     ((iVar8 = eolchar, (int)sVar15 != 0 && (pbVar31[(long)(int)sVar15 + -1] == 0x2f)))) {
    uVar13 = quote(pbVar31);
    uVar14 = dcgettext(0,"invalid suffix %s, contains directory separator",5);
LAB_001030fb:
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar14,uVar13);
  }
  goto LAB_001027d0;
}


