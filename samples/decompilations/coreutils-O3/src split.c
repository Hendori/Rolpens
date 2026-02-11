
void strtoint_die(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  
  uVar2 = quote(param_2);
  uVar3 = dcgettext(0,param_1,5);
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  if (*piVar4 == 0x16) {
    iVar1 = 0;
  }
                    /* WARNING: Subroutine does not return */
  error(1,iVar1,"%s: %s",uVar3,uVar2);
}



void parse_n_units(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoimax(param_1,0,10,&local_28,param_2);
  if ((uVar1 < 2) && (0 < local_28)) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    strtoint_die(param_3,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void next_file_name(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   char *param_5)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  size_t sVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long *extraout_RDX;
  char *pcVar14;
  ulong uVar15;
  long *plVar16;
  bool bVar17;
  
  pcVar14 = suffix_alphabet;
  lVar3 = outfile;
  pcVar8 = outfile_mid;
  lVar7 = suffix_length;
  plVar16 = sufindex_3;
  cVar2 = suffix_auto;
  if (outfile == 0) {
LAB_00100188:
    pcVar8 = param_5;
    pcVar14 = param_2;
    lVar4 = outfile_length_6;
    if (outfile_length_6 == 0) {
      sVar5 = strlen(outbase);
      sVar6 = 0;
      outbase_length_5 = sVar5;
      if (additional_suffix != (char *)0x0) {
        sVar6 = strlen(additional_suffix);
        sVar5 = sVar5 + sVar6;
      }
      outfile_length_6 = sVar5 + lVar7;
      uVar15 = outfile_length_6 + 1;
      addsuf_length_4 = sVar6;
      if (!SCARRY8(sVar5,lVar7) && !SCARRY8(outfile_length_6,1)) {
        lVar7 = xirealloc(lVar3,uVar15);
        sVar5 = outbase_length_5;
        outfile = lVar7;
        __memcpy_chk(lVar7,outbase,outbase_length_5,uVar15);
        pcVar8 = suffix_alphabet;
        plVar16 = sufindex_3;
LAB_001002a4:
        lVar3 = suffix_length;
        uVar10 = sVar5;
        if (sVar5 <= uVar15) {
          uVar10 = uVar15;
        }
        outfile_mid = (char *)(lVar7 + sVar5);
        uVar12 = uVar10 - sVar5;
        lVar9 = __memset_chk(outfile_mid,(int)*pcVar8,suffix_length);
        if (additional_suffix != (char *)0x0) {
          if (uVar15 <= uVar12) {
            uVar15 = uVar12;
          }
          uVar10 = (sVar5 - uVar10) + lVar3 + uVar15;
          if (uVar10 < uVar15) {
            uVar10 = uVar15;
          }
          __memcpy_chk(lVar9 + lVar3,additional_suffix,addsuf_length_4,
                       (uVar12 - (lVar3 + uVar15)) + uVar10);
        }
        *(undefined1 *)(lVar7 + outfile_length_6) = 0;
        free(plVar16);
        lVar7 = xicalloc(lVar3,8);
        pcVar8 = numeric_suffix_start;
        sufindex_3 = (long *)lVar7;
        if (numeric_suffix_start != (char *)0x0) {
          if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("! widen","src/split.c",0x1a7,"next_file_name");
          }
          sVar6 = strlen(numeric_suffix_start);
          lVar3 = suffix_length;
          memcpy((void *)((long)outfile_mid + (suffix_length - sVar6)),pcVar8,sVar6);
          sVar5 = sVar6;
          if (sVar6 != 0) {
            do {
              sVar5 = sVar5 - 1;
              *(long *)(lVar7 + ((lVar3 + sVar5) - sVar6) * 8) = (long)(pcVar8[sVar5] + -0x30);
            } while (sVar5 != 0);
            return;
          }
        }
        return;
      }
    }
    else {
      bVar17 = SCARRY8(outfile_length_6,2);
      lVar9 = outfile_length_6 + 2;
      suffix_length = lVar7 + 1;
      uVar15 = outfile_length_6 + 3;
      outfile_length_6 = lVar9;
      if (!bVar17 && !SCARRY8(lVar9,1)) {
        lVar7 = xirealloc(lVar3,uVar15);
        pcVar8 = suffix_alphabet;
        plVar16 = sufindex_3;
        outfile = lVar7;
        *(undefined *)(lVar7 + outbase_length_5) = suffix_alphabet[*sufindex_3];
        sVar5 = outbase_length_5 + 1;
        outbase_length_5 = sVar5;
        goto LAB_001002a4;
      }
    }
    xalloc_die();
    plVar13 = extraout_RDX;
LAB_001003d9:
    *plVar13 = 0;
    *pcVar8 = *pcVar14;
  }
  else if (suffix_length != 0) {
    plVar13 = sufindex_3 + suffix_length + -1;
    lVar4 = suffix_length + -1;
    do {
      lVar9 = *plVar13;
      *plVar13 = lVar9 + 1;
      if ((lVar4 == 0) && (cVar2 != '\0')) {
        param_2 = pcVar14;
        param_5 = pcVar8;
        if (pcVar14[*plVar16 + 1] == '\0') goto LAB_00100188;
        cVar2 = pcVar14[lVar9 + 1];
        *pcVar8 = cVar2;
        if (cVar2 != '\0') {
          return;
        }
        goto LAB_001003d9;
      }
      cVar1 = pcVar14[lVar9 + 1];
      pcVar8[lVar4] = cVar1;
      if (cVar1 != '\0') {
        return;
      }
      *plVar13 = 0;
      plVar13 = plVar13 + -1;
      pcVar8[lVar4] = *pcVar14;
      bVar17 = lVar4 != 0;
      lVar4 = lVar4 + -1;
    } while (bVar17);
  }
  uVar11 = dcgettext(0,"output file suffixes exhausted",5);
                    /* WARNING: Subroutine does not return */
  error(1,0,uVar11);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int create(char *param_1)

{
  int iVar1;
  __pid_t _Var2;
  int iVar3;
  char *pcVar4;
  char *__arg;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long in_FS_OFFSET;
  stat local_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (filter_command != 0) {
    pcVar4 = getenv("SHELL");
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "/bin/sh";
    }
    iVar1 = setenv("FILE",param_1,1);
    if (iVar1 == 0) {
      if (verbose != '\0') {
        uVar6 = quotearg_n_style_colon(0,3,param_1);
        uVar5 = dcgettext(0,"executing with FILE=%s\n",5);
        __fprintf_chk(_stdout,2,uVar5,uVar6);
      }
      iVar1 = pipe((int *)&local_b8);
      if (iVar1 == 0) {
        _Var2 = fork();
        if (_Var2 == 0) {
          lVar8 = 0;
          if (0 < n_open_pipes) {
            do {
              iVar1 = close(*(int *)(open_pipes + lVar8 * 4));
              if (iVar1 != 0) {
                pcVar4 = "closing prior pipe";
                goto LAB_0010074c;
              }
              lVar8 = lVar8 + 1;
            } while ((int)lVar8 < n_open_pipes);
          }
          iVar1 = close(local_b8.st_dev._4_4_);
          if (iVar1 == 0) {
            if ((int)local_b8.st_dev != 0) {
              iVar1 = dup2((int)local_b8.st_dev,0);
              if (iVar1 != 0) {
                pcVar4 = "moving input pipe";
                goto LAB_0010087f;
              }
              iVar1 = close((int)local_b8.st_dev);
              if (iVar1 != 0) {
                pcVar4 = "closing input pipe";
LAB_0010074c:
                uVar6 = dcgettext(0,pcVar4,5);
                piVar7 = __errno_location();
                    /* WARNING: Subroutine does not return */
                error(1,*piVar7,uVar6);
              }
            }
            if (default_SIGPIPE != '\0') {
              signal(0xd,(__sighandler_t)0x0);
            }
            lVar8 = filter_command;
            __arg = (char *)last_component(pcVar4);
            execl(pcVar4,__arg,&_LC18,lVar8,0);
            uVar6 = dcgettext(0,"failed to run command: \"%s -c %s\"",5);
            piVar7 = __errno_location();
                    /* WARNING: Subroutine does not return */
            error(1,*piVar7,uVar6,pcVar4,lVar8);
          }
          pcVar4 = "closing output pipe";
        }
        else if (_Var2 < 0) {
          pcVar4 = "fork system call failed";
        }
        else {
          iVar1 = close((int)local_b8.st_dev);
          if (iVar1 == 0) {
            lVar8 = (long)n_open_pipes;
            filter_pid = _Var2;
            if (lVar8 == open_pipes_alloc) {
              open_pipes = xpalloc(open_pipes,&open_pipes_alloc,1,0x7fffffff,4);
              lVar8 = (long)n_open_pipes;
            }
            n_open_pipes = (int)lVar8 + 1;
            *(int *)(open_pipes + lVar8 * 4) = local_b8.st_dev._4_4_;
            iVar1 = local_b8.st_dev._4_4_;
            goto LAB_0010050a;
          }
          pcVar4 = "failed to close input pipe";
        }
      }
      else {
        pcVar4 = "failed to create pipe";
      }
    }
    else {
      pcVar4 = "failed to set FILE environment variable";
    }
LAB_0010087f:
    uVar6 = dcgettext(0,pcVar4,5);
    piVar7 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar7,uVar6);
  }
  if (verbose != '\0') {
    uVar6 = quotearg_style(4,param_1);
    uVar5 = dcgettext(0,"creating file %s\n",5);
    __fprintf_chk(_stdout,2,uVar5,uVar6);
  }
  iVar1 = open_safer(param_1,0xc1,0x1b6);
  if (iVar1 < 0) {
    piVar7 = __errno_location();
    if (*piVar7 == 0x11) {
      iVar1 = open_safer(param_1,0x41,0x1b6);
      if (-1 < iVar1) {
        iVar3 = fstat(iVar1,&local_b8);
        if (iVar3 == 0) {
          if (in_stat_buf == CONCAT44(local_b8.st_dev._4_4_,(int)local_b8.st_dev) &&
              DAT_00101848 == local_b8.st_ino) {
            uVar6 = quotearg_style(4,param_1);
            uVar5 = dcgettext(0,"%s would overwrite input; aborting",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar5,uVar6);
          }
          iVar3 = ftruncate(iVar1,0);
          if ((-1 < iVar3) || ((local_b8.st_mode & 0xf000) != 0x8000)) goto LAB_0010050a;
          uVar6 = quotearg_n_style_colon(0,3,param_1);
          pcVar4 = "%s: error truncating";
        }
        else {
          uVar6 = quotearg_style(4,param_1);
          pcVar4 = "failed to stat %s";
        }
        uVar5 = dcgettext(0,pcVar4,5);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar7,uVar5,uVar6);
      }
    }
  }
LAB_0010050a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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



undefined8 ofile_open(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  
  puVar9 = (undefined8 *)(param_2 * 0x20 + param_1);
  uVar5 = 0;
  if (*(int *)(puVar9 + 1) < 0) {
    uVar8 = *puVar9;
    lVar6 = param_2 + -1;
    if (param_2 == 0) {
      lVar6 = param_3 + -1;
    }
    if (*(int *)(puVar9 + 1) == -1) goto LAB_00100a24;
LAB_00100998:
    iVar2 = open_safer(uVar8,0xc01);
    if (iVar2 < 0) {
      do {
        piVar3 = __errno_location();
        if (1 < *piVar3 - 0x17U) {
LAB_00100a65:
          uVar5 = *puVar9;
LAB_00100a6d:
          uVar5 = quotearg_n_style_colon(0,3,uVar5);
                    /* WARNING: Subroutine does not return */
          error(1,*piVar3,&_LC23,uVar5);
        }
        while (puVar7 = (undefined8 *)(lVar6 * 0x20 + param_1), *(int *)(puVar7 + 1) < 0) {
          bVar10 = lVar6 == 0;
          lVar6 = lVar6 + -1;
          if (bVar10) {
            lVar6 = param_3 + -1;
          }
          if (lVar6 == param_2) goto LAB_00100a65;
        }
        iVar2 = rpl_fclose(puVar7[2]);
        if (iVar2 != 0) {
          uVar5 = *puVar7;
          goto LAB_00100a6d;
        }
        *(undefined4 *)(puVar7 + 1) = 0xfffffffe;
        iVar2 = *(int *)(puVar9 + 1);
        puVar7[2] = 0;
        uVar8 = *puVar9;
        uVar5 = 1;
        if (iVar2 != -1) goto LAB_00100998;
LAB_00100a24:
        iVar2 = create();
        if (-1 < iVar2) break;
      } while( true );
    }
    *(int *)(puVar9 + 1) = iVar2;
    pFVar4 = fdopen(iVar2,"a");
    if (pFVar4 == (FILE *)0x0) {
      uVar5 = quotearg_n_style_colon(0,3,*puVar9);
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar3,&_LC23,uVar5);
    }
    puVar9[2] = pFVar4;
    uVar1 = filter_pid;
    filter_pid = 0;
    *(undefined4 *)(puVar9 + 3) = uVar1;
  }
  return uVar5;
}



void closeout(long param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  __pid_t _Var2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  uint local_4c;
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (param_2 < 0) goto LAB_00100b8c;
    iVar1 = close(param_2);
    if (iVar1 < 0) {
      uVar4 = quotearg_n_style_colon(0,3,param_4);
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar3,&_LC23,uVar4);
    }
  }
  else {
    iVar1 = rpl_fclose();
    if (iVar1 != 0) {
      piVar3 = __errno_location();
      if ((*piVar3 != 0x20) || (filter_command == 0)) {
        uVar4 = quotearg_n_style_colon(0,3,param_4);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar3,&_LC23,uVar4);
      }
    }
    if (param_2 < 0) goto LAB_00100b8c;
  }
  if (0 < n_open_pipes) {
    lVar7 = (long)n_open_pipes;
    piVar3 = open_pipes;
    do {
      if (*piVar3 == param_2) {
        n_open_pipes = n_open_pipes + -1;
        *piVar3 = open_pipes[lVar7 + -1];
        break;
      }
      piVar3 = piVar3 + 1;
    } while (open_pipes + lVar7 != piVar3);
  }
LAB_00100b8c:
  if (0 < param_3) {
    _Var2 = waitpid(param_3,(int *)&local_4c,0);
    lVar7 = filter_command;
    if (_Var2 < 0) {
      uVar4 = dcgettext(0,"waiting for child process",5);
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar3,uVar4);
    }
    uVar6 = local_4c & 0x7f;
    if ((char)((char)uVar6 + '\x01') < '\x02') {
      if (uVar6 != 0) {
        uVar4 = dcgettext(0,"unknown status from command (0x%X)",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar4,local_4c);
      }
      if ((char)(local_4c >> 8) != '\0') {
        uVar4 = quotearg_n_style_colon(0,3,param_4);
        uVar5 = dcgettext(0,"with FILE=%s, exit %d from command: %s",5);
        uVar6 = local_4c >> 8 & 0xff;
                    /* WARNING: Subroutine does not return */
        error(uVar6,0,uVar5,uVar4,uVar6,lVar7);
      }
    }
    else if (uVar6 != 0xd) {
      iVar1 = sig2str(uVar6,local_48);
      if (iVar1 != 0) {
        __sprintf_chk(local_48,2,0x13,&_LC26,uVar6);
      }
      lVar7 = filter_command;
      uVar4 = quotearg_n_style_colon(0,3,param_4);
      uVar5 = dcgettext(0,"with FILE=%s, signal %s from command: %s",5);
                    /* WARNING: Subroutine does not return */
      error(uVar6 + 0x80,0,uVar5,uVar4,local_48,lVar7);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 cwrite(char param_1,long param_2,long param_3)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (param_1 != '\0') {
    if ((param_2 == 0 && param_3 == 0) && (elide_empty_files != '\0')) {
      return 1;
    }
    closeout(0,output_desc,filter_pid,outfile);
    next_file_name();
    output_desc = create(outfile);
    if (output_desc < 0) {
      uVar3 = quotearg_n_style_colon(0,3,outfile);
      piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar2,&_LC23,uVar3);
    }
  }
  lVar1 = full_write(output_desc,param_2,param_3);
  if (lVar1 == param_3) {
    return 1;
  }
  piVar2 = __errno_location();
  if ((*piVar2 == 0x20) && (filter_command != 0)) {
    return 0;
  }
  uVar3 = quotearg_n_style_colon(0,3,outfile);
                    /* WARNING: Subroutine does not return */
  error(1,*piVar2,&_LC23,uVar3);
}



void cwrite_constprop_0_isra_0(void)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (elide_empty_files != '\0') {
    return;
  }
  closeout(0,output_desc,filter_pid,outfile);
  next_file_name();
  output_desc = create(outfile);
  if (-1 < output_desc) {
    lVar1 = full_write(output_desc,0,0);
    if (lVar1 != 0) {
      piVar2 = __errno_location();
      if ((filter_command == 0) || (*piVar2 != 0x20)) {
        uVar3 = quotearg_n_style_colon(0,3,outfile);
                    /* WARNING: Subroutine does not return */
        error(1,*piVar2,&_LC23,uVar3);
      }
    }
    return;
  }
  uVar3 = quotearg_n_style_colon(0,3,outfile);
  piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar2,&_LC23,uVar3);
}



void bytes_split(long param_1,long param_2,void *param_3,size_t param_4,long param_5,long param_6)

{
  ssize_t sVar1;
  __off_t _Var2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  long lVar8;
  byte bVar9;
  void *pvVar10;
  long lVar11;
  bool bVar12;
  long local_50;
  
  lVar8 = (ulong)(0 < param_2) + param_1;
  lVar11 = lVar8;
  if (lVar8 != 0) {
    if (param_5 < 0) {
      lVar11 = 0;
      bVar9 = 1;
      bVar7 = true;
      local_50 = param_5;
      goto LAB_00101094;
    }
    bVar7 = true;
    local_50 = -1;
    bVar12 = param_5 < (long)param_4;
    bVar9 = 1;
    lVar11 = 0;
    lVar5 = param_5;
    if (lVar8 < 1) goto LAB_001010ce;
    do {
      if (lVar5 < lVar8) goto LAB_001010ce;
      pvVar10 = param_3;
      do {
        bVar9 = bVar9 | bVar7;
        if (bVar9 != 0) {
          bVar9 = cwrite(bVar7,pvVar10,lVar8);
        }
        lVar11 = lVar11 + (ulong)bVar7;
        bVar7 = lVar11 < param_6 || param_6 == 0;
        if ((lVar11 >= param_6 && param_6 != 0) && (bVar9 == 0)) goto LAB_001011ee;
        pvVar10 = (void *)((long)pvVar10 + lVar8);
        lVar5 = lVar5 - lVar8;
        lVar8 = (ulong)(lVar11 < param_2) + param_1;
      } while ((0 < lVar8) && (lVar8 <= lVar5));
      if (lVar5 != 0) goto LAB_00101280;
      while( true ) {
        if (bVar12) goto LAB_001011ee;
        if (param_5 < 0) goto LAB_00101113;
        if ((bVar9 == 0) && (_Var2 = lseek(0,lVar8,1), -1 < _Var2)) {
          bVar7 = true;
          lVar8 = (ulong)(lVar11 + 1 < param_2) + param_1;
        }
LAB_00101094:
        lVar5 = read(0,param_3,param_4);
        bVar12 = lVar5 == 0;
        if (lVar5 < 0) goto LAB_00101385;
        param_5 = local_50;
        if (0 < lVar8) break;
LAB_001010ce:
        if (lVar5 != 0) {
          pvVar10 = param_3;
          if (bVar9 == 0 && bVar7 == false) {
            bVar9 = 0;
            bVar7 = param_6 == lVar11;
            if (bVar7) {
              return;
            }
          }
          else {
LAB_00101280:
            bVar9 = cwrite(bVar7,pvVar10,lVar5);
            lVar11 = lVar11 + (ulong)bVar7;
            bVar7 = (bool)(param_6 == lVar11 & (bVar9 ^ 1));
            if (bVar7 != false) {
              return;
            }
          }
          lVar8 = lVar8 - lVar5;
        }
      }
    } while( true );
  }
  goto LAB_001011ee;
LAB_00101113:
  do {
    if ((bVar9 == 0) && (_Var2 = lseek(0,lVar8,1), -1 < _Var2)) {
      bVar7 = true;
      lVar8 = (ulong)(lVar11 + 1 < param_2) + param_1;
    }
    sVar1 = read(0,param_3,param_4);
    if (sVar1 < 0) {
LAB_00101385:
      uVar3 = quotearg_n_style_colon(0,3,infile);
      piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar4,&_LC23,uVar3);
    }
    pvVar10 = param_3;
    lVar5 = sVar1;
    if ((lVar8 < 1) || (sVar1 < lVar8)) {
      if (sVar1 == 0) break;
      if (bVar9 != 0 || bVar7 != false) goto LAB_00101310;
      bVar9 = 0;
      bVar6 = 1;
      bVar7 = false;
LAB_0010132f:
      lVar11 = lVar11 + (ulong)bVar7;
      if ((param_6 == lVar11 & bVar6) != 0) {
        return;
      }
      lVar8 = lVar8 - lVar5;
      bVar7 = false;
    }
    else {
      do {
        bVar9 = bVar9 | bVar7;
        if (bVar9 != 0) {
          bVar9 = cwrite(bVar7,pvVar10,lVar8);
        }
        lVar11 = lVar11 + (ulong)bVar7;
        bVar7 = lVar11 < param_6 || param_6 == 0;
        if ((bVar9 == 0) && (lVar11 >= param_6 && param_6 != 0)) goto LAB_001011ee;
        pvVar10 = (void *)((long)pvVar10 + lVar8);
        lVar5 = lVar5 - lVar8;
        lVar8 = (ulong)(lVar11 < param_2) + param_1;
      } while ((0 < lVar8) && (lVar8 <= lVar5));
      if (lVar5 != 0) {
LAB_00101310:
        bVar9 = cwrite(bVar7,pvVar10,lVar5);
        bVar6 = bVar9 ^ 1;
        goto LAB_0010132f;
      }
    }
  } while (sVar1 != 0);
LAB_001011ee:
  lVar8 = lVar11 + 1;
  if (lVar11 < param_6) {
    param_6 = param_6 + 1;
    if ((param_6 - lVar8 & 1U) != 0) {
      cwrite_constprop_0_isra_0();
      lVar8 = lVar11 + 2;
      if (param_6 == lVar8) {
        return;
      }
    }
    do {
      cwrite_constprop_0_isra_0();
      lVar8 = lVar8 + 2;
      cwrite_constprop_0_isra_0();
    } while (param_6 != lVar8);
  }
  return;
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
    goto LAB_0010141a;
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
  local_a8 = &_LC30;
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
    iVar2 = strcmp("split",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "split";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_001016bd;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","split");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_001016bd:
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
LAB_0010141a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(uint param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  FILE *pFVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  ushort **ppuVar12;
  undefined8 uVar13;
  size_t sVar14;
  __sighandler_t p_Var15;
  long lVar16;
  undefined1 *puVar17;
  void *pvVar18;
  void *pvVar19;
  size_t sVar20;
  __off_t _Var21;
  int *piVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulong uVar25;
  char *pcVar26;
  long in_R11;
  undefined8 uVar27;
  int iVar28;
  undefined1 *puVar29;
  byte *__s;
  byte *pbVar30;
  ulong uVar31;
  long lVar32;
  size_t sVar33;
  long in_FS_OFFSET;
  bool bVar34;
  bool bVar35;
  ulong uVar36;
  size_t local_90;
  undefined1 *local_88;
  ulong local_80;
  FILE *local_78;
  FILE *local_58;
  char *local_50;
  FILE *local_48;
  long local_40;
  
  iVar28 = 0;
  uVar25 = (ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (FILE *)0x0;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  local_78 = (FILE *)0x0;
  infile = "-";
  outbase = &_LC64;
  uVar36 = 0;
  local_90 = 0;
  iVar10 = eolchar;
  pbVar30 = additional_suffix;
LAB_00102a90:
  additional_suffix = pbVar30;
  eolchar = iVar10;
  uVar9 = _optind;
  if (_optind == 0) {
    uVar9 = 1;
  }
  iVar7 = getopt_long(param_1,param_2,"0123456789C:a:b:del:n:t:ux",longopts);
  __s = _optarg;
  if (iVar7 != -1) {
    if (0x83 < iVar7) {
switchD_00102aee_caseD_a:
      usage(1);
      goto switchD_00103197_caseD_4;
    }
    if (iVar7 < 0x30) {
      if (iVar7 == -0x83) {
        uVar27 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        uVar13 = proper_name_lite("Torbjorn Granlund",&_LC82);
        version_etc(_stdout,"split","GNU coreutils",_Version,uVar13,uVar27,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar7 != -0x82) goto switchD_00102aee_caseD_a;
      usage(0);
      in_R11 = in_R11 - uVar25;
      __memmove_chk(local_88,local_88 + uVar25,in_R11,local_80);
      goto LAB_00103fd2;
    }
    iVar8 = iVar7 + -0x30;
    iVar10 = eolchar;
    pbVar30 = additional_suffix;
    switch(iVar8) {
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
      if (iVar28 == 0) {
        local_58 = (FILE *)0x0;
      }
      else if (iVar28 != 4) break;
      if (((uint)uVar36 != 0) && ((uint)uVar36 != uVar9)) {
        in_R11 = 0;
        local_58 = (FILE *)0x0;
      }
      lVar32 = (long)local_58 * 10;
      if ((SEXT816(lVar32) != SEXT816((long)local_58) * SEXT816(10)) ||
         (local_58 = (FILE *)(lVar32 + iVar8), SCARRY8(lVar32,(long)iVar8))) {
        local_58 = (FILE *)0x7fffffffffffffff;
      }
      uVar36 = (ulong)uVar9;
      iVar28 = 4;
      goto LAB_00102a90;
    default:
      goto switchD_00102aee_caseD_a;
    case 0x13:
      if (iVar28 == 0) {
        iVar28 = 2;
        local_58 = (FILE *)parse_n_units(_optarg,multipliers_8,"invalid number of lines");
        iVar10 = eolchar;
        pbVar30 = additional_suffix;
        goto LAB_00102a90;
      }
      break;
    case 0x31:
      dcgettext(0,"invalid suffix length",5);
      suffix_length = xdectoimax(_optarg,0,0x7fffffffffffffff,&_LC33);
      iVar10 = eolchar;
      pbVar30 = additional_suffix;
      goto LAB_00102a90;
    case 0x32:
      if (iVar28 == 0) {
        iVar28 = 1;
        local_58 = (FILE *)parse_n_units(_optarg,multipliers_8,"invalid number of bytes");
        iVar10 = eolchar;
        pbVar30 = additional_suffix;
        goto LAB_00102a90;
      }
      break;
    case 0x34:
    case 0x48:
      pcVar26 = "0123456789abcdef";
      if (iVar7 == 100) {
        pcVar26 = "0123456789";
      }
      suffix_alphabet = pcVar26;
      if (_optarg != (byte *)0x0) {
        sVar14 = strlen((char *)_optarg);
        sVar20 = strspn((char *)__s,pcVar26);
        if (sVar14 != sVar20) {
          uVar27 = quote(__s);
          if (iVar7 == 100) {
            uVar13 = dcgettext(0,"%s: invalid start value for numerical suffix",5);
          }
          else {
            uVar13 = dcgettext(0,"%s: invalid start value for hexadecimal suffix",5);
          }
          goto LAB_001033ac;
        }
        while ((iVar10 = eolchar, pbVar30 = additional_suffix, numeric_suffix_start = __s,
               *__s == 0x30 && (__s[1] != 0))) {
          __s = __s + 1;
          _optarg = __s;
        }
      }
      goto LAB_00102a90;
    case 0x35:
      elide_empty_files = 1;
      goto LAB_00102a90;
    case 0x3c:
      if (iVar28 == 0) {
        iVar28 = 3;
        local_58 = (FILE *)parse_n_units(_optarg,&_LC33,"invalid number of lines");
        iVar10 = eolchar;
        pbVar30 = additional_suffix;
        goto LAB_00102a90;
      }
      break;
    case 0x3e:
      if (iVar28 == 0) {
        ppuVar12 = __ctype_b_loc();
        bVar2 = *(byte *)((long)*ppuVar12 + (ulong)*_optarg * 2 + 1);
        pbVar30 = _optarg;
        while ((bVar2 & 0x20) != 0) {
          pbVar30 = pbVar30 + 1;
          bVar2 = *(byte *)((long)*ppuVar12 + (ulong)*pbVar30 * 2 + 1);
        }
        if ((*pbVar30 == 0x72) && (pbVar30[1] == 0x2f)) {
          _optarg = pbVar30 + 2;
          iVar28 = 7;
        }
        else {
          iVar28 = 5;
          _optarg = pbVar30;
          iVar10 = strncmp((char *)pbVar30,"l/",2);
          if (iVar10 == 0) {
            _optarg = pbVar30 + 2;
            iVar28 = 6;
          }
        }
        __s = _optarg;
        uVar9 = xstrtoimax(_optarg,&local_50,10,&local_58);
        pFVar4 = local_58;
        if (uVar9 == 2) {
          if (*local_50 == '/') {
            pcVar26 = local_50 + 1;
            local_78 = local_58;
            uVar9 = xstrtoimax(pcVar26,0,10,&local_48);
            if ((1 < uVar9) || ((long)local_48 < 1)) {
              strtoint_die("invalid number of chunks",pcVar26);
LAB_0010442c:
              uVar27 = quote(__s);
              uVar13 = dcgettext(0,"multi-character separator %s",5);
                    /* WARNING: Subroutine does not return */
              error(1,0,uVar13,uVar27);
            }
            local_58 = local_48;
            if (((long)pFVar4 < 1) ||
               (iVar10 = eolchar, pbVar30 = additional_suffix, (long)local_48 < (long)pFVar4)) {
              uVar27 = quote_mem(__s,(long)local_50 - (long)__s);
              uVar13 = dcgettext(0,"invalid chunk number",5);
                    /* WARNING: Subroutine does not return */
              error(1,0,"%s: %s",uVar13,uVar27);
            }
            goto LAB_00102a90;
          }
        }
        else if ((uVar9 < 2) && (iVar10 = eolchar, pbVar30 = additional_suffix, 0 < (long)local_58))
        goto LAB_00102a90;
        strtoint_die("invalid number of chunks",__s);
        goto LAB_00102f5c;
      }
      break;
    case 0x44:
      iVar10 = (int)(char)*_optarg;
      if (*_optarg == 0) {
        pcVar26 = "empty record separator";
      }
      else {
        if (_optarg[1] != 0) {
          iVar10 = strcmp((char *)_optarg,"\\0");
          if (iVar10 != 0) goto LAB_0010442c;
          iVar10 = 0;
        }
        pbVar30 = additional_suffix;
        if ((eolchar < 0) || (eolchar == iVar10)) goto LAB_00102a90;
        pcVar26 = "multiple separator characters specified";
      }
      uVar27 = dcgettext(0,pcVar26,5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar27);
    case 0x45:
      unbuffered = 1;
      goto LAB_00102a90;
    case 0x50:
      verbose = 1;
      goto LAB_00102a90;
    case 0x51:
      filter_command = _optarg;
      goto LAB_00102a90;
    case 0x52:
      uVar27 = dcgettext(0,"invalid IO block size",5);
      local_90 = xnumtoumax(_optarg,10,1,0x7ff00000,multipliers_8,uVar27,0,4);
      iVar10 = eolchar;
      pbVar30 = additional_suffix;
      goto LAB_00102a90;
    case 0x53:
      goto switchD_00102aee_caseD_53;
    }
    pcVar26 = "cannot split in more than one way";
    goto LAB_001042b3;
  }
LAB_00102f5c:
  if ((local_78 != (FILE *)0x0) && (filter_command != (byte *)0x0)) {
    pcVar26 = "--filter does not process a chunk extracted to stdout";
    goto LAB_001042b3;
  }
  if (iVar28 == 0) {
    local_58 = (FILE *)0x3e8;
    iVar28 = 3;
  }
  else if (local_58 == (FILE *)0x0) {
    uVar27 = quote(&_LC85);
    uVar13 = dcgettext(0,"invalid number of lines: %s",5);
    goto LAB_001033ac;
  }
  pFVar4 = local_58;
  if (eolchar < 0) {
    eolchar = 10;
  }
  uVar9 = iVar28 - 5;
  if (numeric_suffix_start == (byte *)0x0) {
    pcVar26 = local_58[-1]._unused2 + 0x13;
    if (2 < uVar9) goto LAB_00102fc1;
  }
  else {
    suffix_auto = 0;
    if (2 < uVar9) {
LAB_00102fc1:
      iVar10 = 0;
      goto LAB_00102fc4;
    }
    pcVar1 = local_58[-1]._unused2 + 0x13;
    iVar10 = xstrtoimax(numeric_suffix_start,0,10,&local_48);
    pcVar26 = pcVar1;
    if ((iVar10 == 0) && ((long)local_48 < (long)pFVar4)) {
      pcVar26 = (char *)0x7fffffffffffffff;
      if (!SCARRY8((long)local_48,(long)pcVar1)) {
        pcVar26 = pcVar1 + (long)(local_48->_shortbuf + -0x83);
      }
    }
  }
  iVar10 = 0;
  sVar14 = strlen(suffix_alphabet);
  do {
    iVar10 = iVar10 + 1;
    pcVar26 = (char *)((long)pcVar26 / (long)sVar14);
  } while (pcVar26 != (char *)0x0);
  suffix_auto = 0;
LAB_00102fc4:
  if (suffix_length == 0) {
    iVar7 = 2;
    if (1 < iVar10) {
      iVar7 = iVar10;
    }
    suffix_length = (ulong)iVar7;
  }
  else {
    if ((long)suffix_length < (long)iVar10) {
      uVar27 = dcgettext(0,"the suffix length needs to be at least %d",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar27,iVar10);
    }
    suffix_auto = 0;
  }
  uVar5 = _optind;
  if ((int)_optind < (int)param_1) {
    lVar32 = (long)(int)_optind;
    infile = (char *)param_2[lVar32];
    uVar5 = _optind + 1;
    if ((int)(_optind + 1) < (int)param_1) {
      outbase = (undefined *)param_2[lVar32 + 1];
      _optind = _optind + 2;
      uVar5 = _optind;
      if ((int)_optind < (int)param_1) {
        uVar27 = quote(param_2[lVar32 + 2]);
        uVar13 = dcgettext(0,"extra operand %s",5);
        goto LAB_001033ac;
      }
    }
  }
  _optind = uVar5;
  if (numeric_suffix_start != (byte *)0x0) {
    sVar14 = strlen((char *)numeric_suffix_start);
    pcVar26 = "numerical suffix start value is too large for the suffix length";
    if (suffix_length < sVar14) {
LAB_001042b3:
      uVar27 = dcgettext(0,pcVar26,5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar27);
    }
  }
  pcVar26 = infile;
  iVar10 = strcmp(infile,"-");
  if ((iVar10 != 0) && (iVar10 = fd_reopen(0,pcVar26,0,0), iVar10 < 0)) {
    uVar27 = quotearg_style(4,infile);
    pcVar26 = "cannot open %s for reading";
    goto LAB_001032bf;
  }
  fdadvise(0,0,0,2);
  iVar10 = fstat(0,(stat *)&in_stat_buf);
  if (iVar10 != 0) goto LAB_001040d5;
  if (local_90 == 0) {
    uVar25 = 0x40000;
    if (((DAT_00101878 - 1U < 0x2000000000000000) &&
        (auVar3._8_8_ = 0, auVar3._0_8_ = SUB168(SEXT816(0x3ffff),8),
        uVar25 = (0x3ffff - SUB168((auVar3 << 0x40 | ZEXT816(0x3ffff)) % SEXT816(DAT_00101878),0)) +
                 DAT_00101878, (DAT_00101858 & 0xf000) == 0x8000)) && ((uVar25 - 1 & uVar25) != 0))
    {
      lVar32 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      uVar25 = 1L << ((char)lVar32 + 1U & 0x3f);
    }
    local_90 = 0x7ff00000;
    if ((long)uVar25 < 0x7ff00001) {
      local_90 = uVar25;
    }
  }
  local_80 = local_90 + 1;
  iVar10 = getpagesize();
  local_88 = (undefined1 *)xalignalloc((long)iVar10,local_80);
  uVar25 = 0xffffffffffffffff;
  if (1 < uVar9) {
LAB_00103150:
    if (filter_command != (byte *)0x0) {
      p_Var15 = signal(0xd,(__sighandler_t)0x1);
      default_SIGPIPE = p_Var15 == (__sighandler_t)0x0;
      uVar36 = uVar25;
    }
    pFVar4 = local_58;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(iVar28) {
    case 2:
      bytes_split(local_58,0,local_88,local_90,0xffffffffffffffff,0,uVar36);
      goto LAB_001034c0;
    case 3:
      local_48 = (FILE *)0x0;
      lVar16 = 0;
      lVar32 = 0;
      pvVar19 = (void *)0x0;
      bVar35 = false;
      break;
    case 4:
switchD_00103197_caseD_4:
      pFVar4 = local_58;
      lVar32 = 0;
      uVar27 = 1;
LAB_001033d0:
      lVar16 = __read_chk(0,local_88,local_90,local_80);
      iVar10 = eolchar;
      if (-1 < lVar16) {
        puVar24 = local_88 + lVar16;
        *puVar24 = (char)eolchar;
        puVar23 = local_88;
        uVar13 = uVar27;
        puVar29 = local_88;
        do {
          puVar17 = (undefined1 *)rawmemchr(puVar23,iVar10);
          while( true ) {
            if (puVar24 == puVar17) {
              uVar27 = uVar13;
              if (puVar24 != puVar29) {
                uVar27 = 0;
                cwrite(uVar13,puVar29,(long)puVar24 - (long)puVar29);
              }
              if (lVar16 != 0) goto LAB_001033d0;
              goto LAB_001034c0;
            }
            lVar32 = lVar32 + 1;
            puVar23 = puVar17 + 1;
            if (lVar32 < (long)pFVar4) break;
            lVar32 = 0;
            cwrite(uVar13,puVar29,(long)puVar23 - (long)puVar29);
            iVar10 = eolchar;
            puVar17 = (undefined1 *)rawmemchr(puVar23,eolchar);
            uVar13 = 1;
            puVar29 = puVar23;
          }
        } while( true );
      }
      goto LAB_001040d5;
    default:
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","src/split.c",0x697,"main");
    }
    do {
      sVar14 = __read_chk(0,local_88,local_90,local_80);
      if ((long)sVar14 < 0) goto LAB_001040d5;
      puVar23 = local_88;
      if (sVar14 == 0) {
        if (lVar16 != 0) {
          cwrite(lVar32 == 0,pvVar19,lVar16);
        }
        free(pvVar19);
LAB_001034c0:
        iVar10 = close(0);
        if (iVar10 == 0) {
          closeout(0,output_desc,filter_pid,outfile);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return 0;
        }
LAB_001040d5:
        uVar27 = quotearg_n_style_colon(0,3,infile);
        piVar22 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar22,&_LC23,uVar27);
      }
      do {
        sVar20 = (long)pFVar4 + (-lVar16 - lVar32);
        if ((long)sVar14 < (long)sVar20) {
          sVar20 = 0;
          puVar24 = (undefined1 *)0x0;
          pvVar18 = memrchr(puVar23,eolchar,sVar14);
          if (lVar16 != 0) goto LAB_0010377f;
LAB_00103813:
          if (pvVar18 == (void *)0x0) goto LAB_00103cd0;
LAB_0010381c:
          bVar35 = lVar32 == 0;
          lVar16 = (long)pvVar18 + (1 - (long)puVar23);
          lVar32 = lVar32 + lVar16;
          sVar14 = sVar14 - lVar16;
          puVar29 = puVar23 + lVar16;
          cwrite(bVar35,puVar23,lVar16);
          if (puVar24 == (undefined1 *)0x0) {
            lVar16 = 0;
LAB_00103c83:
            if (puVar24 == (undefined1 *)0x0) {
LAB_00103c8c:
              if (sVar14 != 0) {
                sVar33 = 0;
                puVar23 = puVar29;
                goto LAB_00103877;
              }
            }
          }
          else {
            sVar20 = sVar20 - lVar16;
            lVar16 = 0;
LAB_0010385c:
            if (puVar24 == (undefined1 *)0x0) goto LAB_00103c8c;
            if (sVar20 == 0) goto LAB_00103c83;
            sVar33 = sVar14 - sVar20;
            puVar23 = puVar29;
            sVar14 = sVar20;
LAB_00103877:
            if ((long)local_48 - lVar16 < (long)sVar14) {
              pvVar19 = (void *)xpalloc(pvVar19,&local_48,sVar14 - ((long)local_48 - lVar16),
                                        0xffffffffffffffff,1);
            }
            puVar29 = puVar23 + sVar14;
            pvVar18 = (void *)((long)pvVar19 + lVar16);
            lVar16 = lVar16 + sVar14;
            memcpy(pvVar18,puVar23,sVar14);
            sVar14 = sVar33;
          }
          bVar35 = puVar24 == (undefined1 *)0x0;
          if (puVar24 != (undefined1 *)0x0) {
            lVar32 = 0;
          }
        }
        else {
          puVar24 = puVar23 + (sVar20 - 1);
          pvVar18 = memrchr(puVar23,eolchar,sVar20);
          if (lVar16 == 0) goto LAB_00103813;
LAB_0010377f:
          bVar34 = lVar32 == 0;
          if ((pvVar18 != (void *)0x0) || (bVar34)) {
            lVar32 = lVar32 + lVar16;
            cwrite(bVar34,pvVar19,lVar16);
            if (pvVar18 != (void *)0x0) goto LAB_0010381c;
LAB_00103cd0:
            lVar16 = 0;
          }
          puVar29 = puVar23;
          if (bVar35) goto LAB_0010385c;
          bVar34 = lVar32 == 0;
          if (puVar24 == (undefined1 *)0x0) {
            lVar32 = lVar32 + sVar14;
            cwrite(bVar34,puVar23,sVar14);
            break;
          }
          puVar29 = puVar23 + sVar20;
          cwrite(bVar34,puVar23,sVar20);
          sVar14 = sVar14 - sVar20;
          lVar32 = 0;
        }
        puVar23 = puVar29;
      } while (sVar14 != 0);
    } while( true );
  }
  uVar31 = 0;
  do {
    uVar25 = local_80;
    if (local_80 <= uVar31) {
      uVar25 = uVar31;
    }
    lVar32 = __read_chk(0,local_88 + uVar31,local_90 - uVar31,uVar25 - uVar31);
    if (lVar32 < 1) {
      if (lVar32 == 0) goto LAB_00103e85;
      goto LAB_0010329d;
    }
    uVar31 = uVar31 + lVar32;
  } while ((long)uVar31 < (long)local_90);
  if (((DAT_00101858 & 0xd000) == 0x8000) && (DAT_00101870 < (long)uVar31)) {
LAB_00103d94:
    _Var21 = 0;
    pvVar19 = (void *)xmalloc(local_90);
    cVar6 = temp_stream(&local_48,0);
    if (cVar6 != '\0') {
      do {
        sVar14 = read(0,pvVar19,local_90);
        if ((long)sVar14 < 1) {
          if (sVar14 == 0) {
            iVar10 = fileno(local_48);
            iVar10 = dup2(iVar10,0);
            if ((-1 < iVar10) && (iVar10 = rpl_fclose(local_48), -1 < iVar10)) {
              free(pvVar19);
              lVar32 = 0;
              if (_Var21 < 0) goto LAB_0010329d;
              goto LAB_00103e4c;
            }
          }
          goto LAB_00104182;
        }
        sVar20 = fwrite_unlocked(pvVar19,1,sVar14,local_48);
        if (sVar14 != sVar20) goto LAB_00104182;
        bVar35 = SCARRY8(sVar14,_Var21);
        _Var21 = sVar14 + _Var21;
      } while (!bVar35);
      piVar22 = __errno_location();
      *piVar22 = 0x4b;
    }
LAB_00104182:
    free(pvVar19);
  }
  else {
    lVar32 = lseek(0,0,1);
    uVar25 = 0;
    if (-1 < (long)uVar31) {
      uVar25 = uVar31;
    }
    if ((lVar32 < (long)uVar25) || (_Var21 = lseek(0,0,2), _Var21 < 0)) goto LAB_00103d94;
LAB_00103e4c:
    if (_Var21 == 0x7fffffffffffffff) {
LAB_001042f1:
      piVar22 = __errno_location();
      *piVar22 = 0x4b;
    }
    else {
      if (lVar32 < _Var21) {
        bVar35 = SCARRY8(uVar31,_Var21 - lVar32);
        uVar31 = uVar31 + (_Var21 - lVar32);
        if (bVar35) goto LAB_001042f1;
        _Var21 = lseek(0,lVar32,0);
        if (_Var21 < 0) goto LAB_0010329d;
      }
LAB_00103e85:
      if (-1 < (long)uVar31) {
        uVar25 = local_90;
        if ((long)uVar31 < (long)local_90) {
          uVar25 = uVar31;
        }
        goto LAB_00103150;
      }
    }
  }
LAB_0010329d:
  uVar27 = quotearg_n_style_colon(0,3,infile);
  pcVar26 = "%s: cannot determine file size";
LAB_001032bf:
  uVar13 = dcgettext(0,pcVar26,5);
  piVar22 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar22,uVar13,uVar27);
LAB_00103fd2:
  if ((long)(ulong)uVar9 <= (long)uVar25) goto LAB_001034c0;
  if (in_R11 < 0) {
    lVar32 = __read_chk(0,local_88,local_90,local_80);
    if (lVar32 < 0) goto LAB_001040d5;
    if (lVar32 == 0) goto LAB_001034c0;
  }
  else {
    lVar32 = in_R11;
    in_R11 = -1;
  }
  lVar16 = uVar9 - uVar25;
  if (lVar32 < lVar16) {
    lVar16 = lVar32;
  }
  lVar32 = full_write(1,local_88,lVar16);
  if ((lVar16 != lVar32) &&
     ((piVar22 = __errno_location(), filter_command == (byte *)0x0 || (*piVar22 != 0x20)))) {
    uVar27 = quotearg_n_style_colon(0,3,&_LC63);
                    /* WARNING: Subroutine does not return */
    error(1,*piVar22,&_LC23,uVar27);
  }
  uVar25 = uVar25 + lVar16;
  goto LAB_00103fd2;
switchD_00102aee_caseD_53:
  pbVar30 = _optarg;
  sVar14 = strlen((char *)_optarg);
  pbVar11 = (byte *)last_component(__s);
  if ((__s != pbVar11) ||
     ((iVar10 = eolchar, (int)sVar14 != 0 && (__s[(long)(int)sVar14 + -1] == 0x2f)))) {
    uVar27 = quote(__s);
    uVar13 = dcgettext(0,"invalid suffix %s, contains directory separator",5);
LAB_001033ac:
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar13,uVar27);
  }
  goto LAB_00102a90;
}


