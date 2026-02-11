
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
              DAT_00101588 == local_b8.st_ino) {
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
    } while (piVar3 != open_pipes + lVar7);
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



void bytes_split(long param_1,long param_2,void *param_3,size_t param_4,ssize_t param_5,long param_6
                )

{
  __off_t _Var1;
  undefined8 uVar2;
  int *piVar3;
  bool bVar4;
  long lVar5;
  byte bVar6;
  long lVar7;
  void *pvVar8;
  bool bVar9;
  
  lVar5 = (ulong)(0 < param_2) + param_1;
  if (lVar5 != 0) {
    if (param_5 < 0) {
      lVar7 = 0;
      bVar6 = 1;
      bVar4 = true;
      goto LAB_00100f7d;
    }
    bVar6 = 1;
    bVar4 = true;
    bVar9 = param_5 < (long)param_4;
    lVar7 = 0;
    if (lVar5 < 1) goto LAB_00100fb2;
    do {
      if (param_5 < lVar5) goto LAB_00100fb2;
      pvVar8 = param_3;
      do {
        bVar6 = bVar6 | bVar4;
        if (bVar6 != 0) {
          bVar6 = cwrite(bVar4,pvVar8,lVar5);
        }
        lVar7 = lVar7 + (ulong)bVar4;
        bVar4 = lVar7 < param_6 || param_6 == 0;
        if ((lVar7 >= param_6 && param_6 != 0) && (bVar6 == 0)) goto LAB_00101080;
        pvVar8 = (void *)((long)pvVar8 + lVar5);
        param_5 = param_5 - lVar5;
        lVar5 = (ulong)(lVar7 < param_2) + param_1;
      } while ((0 < lVar5) && (lVar5 <= param_5));
      if (param_5 != 0) goto LAB_00100ff0;
      while( true ) {
        if (bVar9) goto LAB_00101080;
        if ((bVar6 == 0) && (_Var1 = lseek(0,lVar5,1), -1 < _Var1)) {
          bVar4 = true;
          lVar5 = (ulong)(lVar7 + 1 < param_2) + param_1;
        }
LAB_00100f7d:
        param_5 = read(0,param_3,param_4);
        bVar9 = param_5 == 0;
        if (param_5 < 0) {
          uVar2 = quotearg_n_style_colon(0,3,infile);
          piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
          error(1,*piVar3,&_LC23,uVar2);
        }
        if (0 < lVar5) break;
LAB_00100fb2:
        if (param_5 != 0) {
          pvVar8 = param_3;
          if (bVar6 == 0 && bVar4 == false) {
            bVar6 = 0;
            bVar4 = param_6 == lVar7;
            if (bVar4) {
              return;
            }
          }
          else {
LAB_00100ff0:
            bVar6 = cwrite(bVar4,pvVar8,param_5);
            lVar7 = lVar7 + (ulong)bVar4;
            bVar4 = (bool)(param_6 == lVar7 & (bVar6 ^ 1));
            if (bVar4 != false) {
              return;
            }
          }
          lVar5 = lVar5 - param_5;
        }
      }
    } while( true );
  }
  lVar7 = 0;
LAB_00101080:
  lVar5 = lVar7 + 1;
  if (param_6 <= lVar7) {
    return;
  }
  do {
    lVar5 = lVar5 + 1;
    cwrite(1,0,0);
  } while (param_6 + 1 != lVar5);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(uint param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  FILE *pFVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  ushort **ppuVar13;
  undefined8 uVar14;
  size_t sVar15;
  __sighandler_t p_Var16;
  long lVar17;
  undefined1 *puVar18;
  void *pvVar19;
  size_t sVar20;
  __off_t _Var21;
  int *piVar22;
  undefined1 *puVar23;
  ulong uVar24;
  char *pcVar25;
  long in_R11;
  undefined8 uVar26;
  undefined1 *puVar27;
  int iVar28;
  byte *pbVar29;
  byte *pbVar30;
  ulong uVar31;
  long lVar32;
  undefined1 *puVar33;
  long in_FS_OFFSET;
  bool bVar34;
  bool bVar35;
  ulong uVar36;
  void *local_c0;
  size_t local_90;
  undefined1 *local_88;
  ulong local_80;
  FILE *local_78;
  FILE *local_58;
  char *local_50;
  FILE *local_48;
  long local_40;
  
  iVar28 = 0;
  uVar24 = (ulong)param_1;
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
  iVar11 = eolchar;
  pbVar30 = additional_suffix;
LAB_001027d0:
  additional_suffix = pbVar30;
  eolchar = iVar11;
  uVar10 = _optind;
  if (_optind == 0) {
    uVar10 = 1;
  }
  iVar8 = getopt_long(param_1,param_2,"0123456789C:a:b:del:n:t:ux",longopts);
  pbVar29 = _optarg;
  if (iVar8 != -1) {
    if (0x83 < iVar8) {
switchD_0010282e_caseD_a:
      usage(1);
      goto switchD_00102ed7_caseD_4;
    }
    if (iVar8 < 0x30) {
      if (iVar8 == -0x83) {
        uVar26 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
        uVar14 = proper_name_lite("Torbjorn Granlund",&_LC82);
        version_etc(_stdout,"split","GNU coreutils",_Version,uVar14,uVar26,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar8 != -0x82) goto switchD_0010282e_caseD_a;
      usage(0);
      in_R11 = in_R11 - uVar24;
      __memmove_chk(local_88,local_88 + uVar24,in_R11,local_80);
      goto LAB_00103d4f;
    }
    iVar9 = iVar8 + -0x30;
    iVar11 = eolchar;
    pbVar30 = additional_suffix;
    switch(iVar9) {
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
      if (((uint)uVar36 != 0) && ((uint)uVar36 != uVar10)) {
        in_R11 = 0;
        local_58 = (FILE *)0x0;
      }
      lVar32 = (long)local_58 * 10;
      if ((SEXT816(lVar32) != SEXT816((long)local_58) * SEXT816(10)) ||
         (local_58 = (FILE *)(lVar32 + iVar9), SCARRY8(lVar32,(long)iVar9))) {
        local_58 = (FILE *)0x7fffffffffffffff;
      }
      uVar36 = (ulong)uVar10;
      iVar28 = 4;
      goto LAB_001027d0;
    default:
      goto switchD_0010282e_caseD_a;
    case 0x13:
      if (iVar28 == 0) {
        iVar28 = 2;
        local_58 = (FILE *)parse_n_units(_optarg,multipliers_8,"invalid number of lines");
        iVar11 = eolchar;
        pbVar30 = additional_suffix;
        goto LAB_001027d0;
      }
      break;
    case 0x31:
      dcgettext(0,"invalid suffix length",5);
      suffix_length = xdectoimax(_optarg,0,0x7fffffffffffffff,&_LC33);
      iVar11 = eolchar;
      pbVar30 = additional_suffix;
      goto LAB_001027d0;
    case 0x32:
      if (iVar28 == 0) {
        iVar28 = 1;
        local_58 = (FILE *)parse_n_units(_optarg,multipliers_8,"invalid number of bytes");
        iVar11 = eolchar;
        pbVar30 = additional_suffix;
        goto LAB_001027d0;
      }
      break;
    case 0x34:
    case 0x48:
      pcVar25 = "0123456789abcdef";
      if (iVar8 == 100) {
        pcVar25 = "0123456789";
      }
      suffix_alphabet = pcVar25;
      if (_optarg != (byte *)0x0) {
        sVar15 = strlen((char *)_optarg);
        sVar20 = strspn((char *)pbVar29,pcVar25);
        if (sVar15 != sVar20) {
          uVar26 = quote(pbVar29);
          if (iVar8 == 100) {
            uVar14 = dcgettext(0,"%s: invalid start value for numerical suffix",5);
          }
          else {
            uVar14 = dcgettext(0,"%s: invalid start value for hexadecimal suffix",5);
          }
          goto LAB_001030fb;
        }
        while ((iVar11 = eolchar, pbVar30 = additional_suffix, numeric_suffix_start = pbVar29,
               *pbVar29 == 0x30 && (pbVar29[1] != 0))) {
          pbVar29 = pbVar29 + 1;
          _optarg = pbVar29;
        }
      }
      goto LAB_001027d0;
    case 0x35:
      elide_empty_files = 1;
      goto LAB_001027d0;
    case 0x3c:
      if (iVar28 == 0) {
        iVar28 = 3;
        local_58 = (FILE *)parse_n_units(_optarg,&_LC33,"invalid number of lines");
        iVar11 = eolchar;
        pbVar30 = additional_suffix;
        goto LAB_001027d0;
      }
      break;
    case 0x3e:
      if (iVar28 == 0) {
        ppuVar13 = __ctype_b_loc();
        bVar3 = *(byte *)((long)*ppuVar13 + (ulong)*_optarg * 2 + 1);
        pbVar30 = _optarg;
        while ((bVar3 & 0x20) != 0) {
          pbVar30 = pbVar30 + 1;
          bVar3 = *(byte *)((long)*ppuVar13 + (ulong)*pbVar30 * 2 + 1);
        }
        if ((*pbVar30 == 0x72) && (pbVar30[1] == 0x2f)) {
          _optarg = pbVar30 + 2;
          iVar28 = 7;
        }
        else {
          iVar28 = 5;
          _optarg = pbVar30;
          iVar11 = strncmp((char *)pbVar30,"l/",2);
          if (iVar11 == 0) {
            _optarg = pbVar30 + 2;
            iVar28 = 6;
          }
        }
        pbVar29 = _optarg;
        uVar10 = xstrtoimax(_optarg,&local_50,10,&local_58);
        pFVar5 = local_58;
        if (uVar10 == 2) {
          if (*local_50 == '/') {
            pcVar25 = local_50 + 1;
            local_78 = local_58;
            uVar10 = xstrtoimax(pcVar25,0,10,&local_48);
            if ((1 < uVar10) || ((long)local_48 < 1)) {
              strtoint_die("invalid number of chunks",pcVar25);
              goto LAB_001041c6;
            }
            local_58 = local_48;
            if (((long)pFVar5 < 1) ||
               (iVar11 = eolchar, pbVar30 = additional_suffix, (long)local_48 < (long)pFVar5)) {
              uVar26 = quote_mem(pbVar29,(long)local_50 - (long)pbVar29);
              uVar14 = dcgettext(0,"invalid chunk number",5);
                    /* WARNING: Subroutine does not return */
              error(1,0,"%s: %s",uVar14,uVar26);
            }
            goto LAB_001027d0;
          }
        }
        else if ((uVar10 < 2) && (iVar11 = eolchar, pbVar30 = additional_suffix, 0 < (long)local_58)
                ) goto LAB_001027d0;
        strtoint_die("invalid number of chunks",pbVar29);
        goto LAB_00102c9c;
      }
      break;
    case 0x44:
      iVar11 = (int)(char)*_optarg;
      if (*_optarg == 0) {
        pcVar25 = "empty record separator";
      }
      else {
        if (_optarg[1] != 0) {
          iVar11 = strcmp((char *)_optarg,"\\0");
          if (iVar11 != 0) {
            uVar26 = quote(pbVar29);
            uVar14 = dcgettext(0,"multi-character separator %s",5);
                    /* WARNING: Subroutine does not return */
            error(1,0,uVar14,uVar26);
          }
          iVar11 = 0;
        }
        pbVar30 = additional_suffix;
        if ((eolchar < 0) || (eolchar == iVar11)) goto LAB_001027d0;
        pcVar25 = "multiple separator characters specified";
      }
      uVar26 = dcgettext(0,pcVar25,5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar26);
    case 0x45:
      unbuffered = 1;
      goto LAB_001027d0;
    case 0x50:
      verbose = 1;
      goto LAB_001027d0;
    case 0x51:
      filter_command = _optarg;
      goto LAB_001027d0;
    case 0x52:
      uVar26 = dcgettext(0,"invalid IO block size",5);
      local_90 = xnumtoumax(_optarg,10,1,0x7ff00000,multipliers_8,uVar26,0,4);
      iVar11 = eolchar;
      pbVar30 = additional_suffix;
      goto LAB_001027d0;
    case 0x53:
      goto switchD_0010282e_caseD_53;
    }
    pcVar25 = "cannot split in more than one way";
    goto LAB_0010403a;
  }
LAB_00102c9c:
  if ((local_78 != (FILE *)0x0) && (filter_command != (byte *)0x0)) {
    pcVar25 = "--filter does not process a chunk extracted to stdout";
    goto LAB_0010403a;
  }
  if (iVar28 == 0) {
    local_58 = (FILE *)0x3e8;
    iVar28 = 3;
  }
  else if (local_58 == (FILE *)0x0) {
    uVar26 = quote(&_LC85);
    uVar14 = dcgettext(0,"invalid number of lines: %s",5);
    goto LAB_001030fb;
  }
  pFVar5 = local_58;
  if (eolchar < 0) {
    eolchar = 10;
  }
  uVar10 = iVar28 - 5;
  if (numeric_suffix_start == (byte *)0x0) {
    pcVar25 = local_58[-1]._unused2 + 0x13;
    if (2 < uVar10) goto LAB_00102d01;
  }
  else {
    suffix_auto = 0;
    if (2 < uVar10) {
LAB_00102d01:
      iVar11 = 0;
      goto LAB_00102d04;
    }
    pcVar1 = local_58[-1]._unused2 + 0x13;
    iVar11 = xstrtoimax(numeric_suffix_start,0,10,&local_48);
    pcVar25 = pcVar1;
    if ((iVar11 == 0) && ((long)local_48 < (long)pFVar5)) {
      pcVar25 = (char *)0x7fffffffffffffff;
      if (!SCARRY8((long)local_48,(long)pcVar1)) {
        pcVar25 = pcVar1 + (long)(local_48->_shortbuf + -0x83);
      }
    }
  }
  iVar11 = 0;
  sVar15 = strlen(suffix_alphabet);
  do {
    iVar11 = iVar11 + 1;
    pcVar25 = (char *)((long)pcVar25 / (long)sVar15);
  } while (pcVar25 != (char *)0x0);
  suffix_auto = 0;
LAB_00102d04:
  if (suffix_length == 0) {
    iVar8 = 2;
    if (1 < iVar11) {
      iVar8 = iVar11;
    }
    suffix_length = (ulong)iVar8;
  }
  else {
    if ((long)suffix_length < (long)iVar11) {
      uVar26 = dcgettext(0,"the suffix length needs to be at least %d",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar26,iVar11);
    }
    suffix_auto = 0;
  }
  uVar6 = _optind;
  if ((int)_optind < (int)param_1) {
    lVar32 = (long)(int)_optind;
    infile = (char *)param_2[lVar32];
    uVar6 = _optind + 1;
    if ((int)(_optind + 1) < (int)param_1) {
      outbase = (undefined *)param_2[lVar32 + 1];
      _optind = _optind + 2;
      uVar6 = _optind;
      if ((int)_optind < (int)param_1) {
        uVar26 = quote(param_2[lVar32 + 2]);
        uVar14 = dcgettext(0,"extra operand %s",5);
        goto LAB_001030fb;
      }
    }
  }
  _optind = uVar6;
  if (numeric_suffix_start != (byte *)0x0) {
    sVar15 = strlen((char *)numeric_suffix_start);
    pcVar25 = "numerical suffix start value is too large for the suffix length";
    if (suffix_length < sVar15) {
LAB_0010403a:
      uVar26 = dcgettext(0,pcVar25,5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar26);
    }
  }
  pcVar25 = infile;
  iVar11 = strcmp(infile,"-");
  if ((iVar11 != 0) && (iVar11 = fd_reopen(0,pcVar25,0,0), iVar11 < 0)) {
LAB_001041c6:
    uVar26 = quotearg_style(4,infile);
    pcVar25 = "cannot open %s for reading";
    goto LAB_00102fff;
  }
  fdadvise(0,0,0,2);
  iVar11 = fstat(0,(stat *)&in_stat_buf);
  if (iVar11 != 0) goto LAB_00103e52;
  if (local_90 == 0) {
    uVar24 = 0x40000;
    if (((DAT_001015b8 - 1U < 0x2000000000000000) &&
        (auVar4._8_8_ = 0, auVar4._0_8_ = SUB168(SEXT816(0x3ffff),8),
        uVar24 = (0x3ffff - SUB168((auVar4 << 0x40 | ZEXT816(0x3ffff)) % SEXT816(DAT_001015b8),0)) +
                 DAT_001015b8, (DAT_00101598 & 0xf000) == 0x8000)) && ((uVar24 - 1 & uVar24) != 0))
    {
      lVar32 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      uVar24 = 1L << ((char)lVar32 + 1U & 0x3f);
    }
    local_90 = 0x7ff00000;
    if ((long)uVar24 < 0x7ff00001) {
      local_90 = uVar24;
    }
  }
  local_80 = local_90 + 1;
  iVar11 = getpagesize();
  local_88 = (undefined1 *)xalignalloc((long)iVar11,local_80);
  uVar24 = 0xffffffffffffffff;
  if (1 < uVar10) {
LAB_00102e90:
    if (filter_command != (byte *)0x0) {
      p_Var16 = signal(0xd,(__sighandler_t)0x1);
      default_SIGPIPE = p_Var16 == (__sighandler_t)0x0;
      uVar36 = uVar24;
    }
    pFVar5 = local_58;
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(iVar28) {
    case 2:
      bytes_split(local_58,0,local_88,local_90,0xffffffffffffffff,0,uVar36);
      goto LAB_00103210;
    case 3:
      lVar17 = 0;
      local_48 = (FILE *)0x0;
      bVar35 = false;
      local_c0 = (void *)0x0;
      lVar32 = lVar17;
      break;
    case 4:
switchD_00102ed7_caseD_4:
      pFVar5 = local_58;
      lVar32 = 0;
      uVar26 = 1;
LAB_00103120:
      lVar17 = __read_chk(0,local_88,local_90,local_80);
      iVar11 = eolchar;
      if (-1 < lVar17) {
        puVar33 = local_88 + lVar17;
        *puVar33 = (char)eolchar;
        puVar23 = local_88;
        uVar14 = uVar26;
        puVar27 = local_88;
        do {
          puVar18 = (undefined1 *)rawmemchr(puVar23,iVar11);
          while( true ) {
            if (puVar33 == puVar18) {
              uVar26 = uVar14;
              if (puVar33 != puVar27) {
                uVar26 = 0;
                cwrite(uVar14,puVar27,(long)puVar33 - (long)puVar27);
              }
              if (lVar17 != 0) goto LAB_00103120;
              goto LAB_00103210;
            }
            lVar32 = lVar32 + 1;
            puVar23 = puVar18 + 1;
            if (lVar32 < (long)pFVar5) break;
            lVar32 = 0;
            cwrite(uVar14,puVar27,(long)puVar23 - (long)puVar27);
            iVar11 = eolchar;
            puVar18 = (undefined1 *)rawmemchr(puVar23,eolchar);
            uVar14 = 1;
            puVar27 = puVar23;
          }
        } while( true );
      }
      goto LAB_00103e52;
    default:
                    /* WARNING: Subroutine does not return */
      __assert_fail("0","src/split.c",0x697,"main");
    }
LAB_00103470:
    do {
      sVar15 = __read_chk(0,local_88,local_90,local_80);
      if ((long)sVar15 < 0) goto LAB_00103e52;
      puVar23 = local_88;
      if (sVar15 == 0) {
        if (lVar17 != 0) {
          cwrite(lVar32 == 0,local_c0,lVar17);
        }
        free(local_c0);
LAB_00103210:
        iVar11 = close(0);
        if (iVar11 == 0) {
          closeout(0,output_desc,filter_pid,outfile);
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return 0;
        }
LAB_00103e52:
        uVar26 = quotearg_n_style_colon(0,3,infile);
        piVar22 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar22,&_LC23,uVar26);
      }
      do {
        while (sVar20 = (long)pFVar5 + (-lVar17 - lVar32), (long)sVar15 < (long)sVar20) {
          puVar33 = (undefined1 *)0x0;
          pvVar19 = memrchr(puVar23,eolchar,sVar15);
          sVar20 = 0;
          if (lVar17 != 0) goto LAB_001034cc;
LAB_00103559:
          if (pvVar19 == (void *)0x0) {
LAB_00103a3f:
            lVar17 = 0;
            goto LAB_001034e5;
          }
LAB_00103562:
          bVar35 = lVar32 == 0;
          lVar2 = (long)pvVar19 + (1 - (long)puVar23);
          lVar32 = lVar32 + lVar2;
          puVar27 = puVar23 + lVar2;
          cwrite(bVar35,puVar23,lVar2);
          sVar15 = sVar15 - lVar2;
          if (puVar33 != (undefined1 *)0x0) {
            lVar17 = 0;
            sVar20 = sVar20 - lVar2;
            goto LAB_001035a0;
          }
          lVar17 = 0;
LAB_001039f3:
          if (puVar33 == (undefined1 *)0x0) {
LAB_001039fc:
            sVar20 = sVar15;
            sVar15 = sVar20;
            if (sVar20 != 0) {
              sVar15 = 0;
              goto LAB_001035bb;
            }
          }
LAB_001035f1:
          bVar35 = puVar33 == (undefined1 *)0x0;
          if (puVar33 != (undefined1 *)0x0) {
            lVar32 = 0;
          }
          puVar23 = puVar27;
          if (sVar15 == 0) goto LAB_00103470;
        }
        puVar33 = puVar23 + (sVar20 - 1);
        pvVar19 = memrchr(puVar23,eolchar,sVar20);
        if (lVar17 == 0) goto LAB_00103559;
LAB_001034cc:
        bVar34 = lVar32 == 0;
        if ((pvVar19 != (void *)0x0) || (bVar34)) {
          lVar32 = lVar32 + lVar17;
          cwrite(bVar34,local_c0,lVar17);
          if (pvVar19 != (void *)0x0) goto LAB_00103562;
          goto LAB_00103a3f;
        }
LAB_001034e5:
        puVar27 = puVar23;
        if (bVar35) {
LAB_001035a0:
          if (puVar33 == (undefined1 *)0x0) goto LAB_001039fc;
          if (sVar20 == 0) goto LAB_001039f3;
          sVar15 = sVar15 - sVar20;
LAB_001035bb:
          if ((long)local_48 - lVar17 < (long)sVar20) {
            local_c0 = (void *)xpalloc(local_c0,&local_48,sVar20 - ((long)local_48 - lVar17),
                                       0xffffffffffffffff,1);
          }
          memcpy((void *)((long)local_c0 + lVar17),puVar27,sVar20);
          lVar17 = lVar17 + sVar20;
          puVar27 = puVar27 + sVar20;
          goto LAB_001035f1;
        }
        bVar34 = lVar32 == 0;
        if (puVar33 == (undefined1 *)0x0) {
          cwrite(bVar34,puVar23,sVar15);
          lVar32 = lVar32 + sVar15;
          break;
        }
        lVar32 = 0;
        cwrite(bVar34,puVar23,sVar20);
        sVar15 = sVar15 - sVar20;
        puVar23 = puVar23 + sVar20;
      } while (sVar15 != 0);
    } while( true );
  }
  uVar31 = 0;
  do {
    uVar24 = local_80;
    if (local_80 <= uVar31) {
      uVar24 = uVar31;
    }
    lVar32 = __read_chk(0,local_88 + uVar31,local_90 - uVar31,uVar24 - uVar31);
    if (lVar32 < 1) {
      if (lVar32 == 0) goto LAB_00103bff;
      goto LAB_00102fdd;
    }
    uVar31 = uVar31 + lVar32;
  } while ((long)uVar31 < (long)local_90);
  if (((DAT_00101598 & 0xd000) == 0x8000) && (DAT_001015b0 < (long)uVar31)) {
LAB_00103b0e:
    _Var21 = 0;
    pvVar19 = (void *)xmalloc(local_90);
    cVar7 = temp_stream(&local_48,0);
    if (cVar7 != '\0') {
      do {
        sVar15 = read(0,pvVar19,local_90);
        if ((long)sVar15 < 1) {
          if (sVar15 == 0) {
            iVar11 = fileno(local_48);
            iVar11 = dup2(iVar11,0);
            if ((-1 < iVar11) && (iVar11 = rpl_fclose(local_48), -1 < iVar11)) {
              free(pvVar19);
              lVar32 = 0;
              if (_Var21 < 0) goto LAB_00102fdd;
              goto LAB_00103bc6;
            }
          }
          goto LAB_00103f00;
        }
        sVar20 = fwrite_unlocked(pvVar19,1,sVar15,local_48);
        if (sVar15 != sVar20) goto LAB_00103f00;
        bVar35 = SCARRY8(sVar15,_Var21);
        _Var21 = sVar15 + _Var21;
      } while (!bVar35);
      piVar22 = __errno_location();
      *piVar22 = 0x4b;
    }
LAB_00103f00:
    free(pvVar19);
  }
  else {
    lVar32 = lseek(0,0,1);
    uVar24 = 0;
    if (-1 < (long)uVar31) {
      uVar24 = uVar31;
    }
    if ((lVar32 < (long)uVar24) || (_Var21 = lseek(0,0,2), _Var21 < 0)) goto LAB_00103b0e;
LAB_00103bc6:
    if (_Var21 == 0x7fffffffffffffff) {
LAB_001040af:
      piVar22 = __errno_location();
      *piVar22 = 0x4b;
    }
    else {
      if (lVar32 < _Var21) {
        bVar35 = SCARRY8(uVar31,_Var21 - lVar32);
        uVar31 = uVar31 + (_Var21 - lVar32);
        if (bVar35) goto LAB_001040af;
        _Var21 = lseek(0,lVar32,0);
        if (_Var21 < 0) goto LAB_00102fdd;
      }
LAB_00103bff:
      if (-1 < (long)uVar31) {
        uVar24 = local_90;
        if ((long)uVar31 < (long)local_90) {
          uVar24 = uVar31;
        }
        goto LAB_00102e90;
      }
    }
  }
LAB_00102fdd:
  uVar26 = quotearg_n_style_colon(0,3,infile);
  pcVar25 = "%s: cannot determine file size";
LAB_00102fff:
  uVar14 = dcgettext(0,pcVar25,5);
  piVar22 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar22,uVar14,uVar26);
LAB_00103d4f:
  if ((long)(ulong)uVar10 <= (long)uVar24) goto LAB_00103210;
  if (in_R11 < 0) {
    lVar32 = __read_chk(0,local_88,local_90,local_80);
    if (lVar32 < 0) goto LAB_00103e52;
    if (lVar32 == 0) goto LAB_00103210;
  }
  else {
    lVar32 = in_R11;
    in_R11 = -1;
  }
  lVar17 = uVar10 - uVar24;
  if (lVar32 < lVar17) {
    lVar17 = lVar32;
  }
  lVar32 = full_write(1,local_88,lVar17);
  if ((lVar17 != lVar32) &&
     ((piVar22 = __errno_location(), filter_command == (byte *)0x0 || (*piVar22 != 0x20)))) {
    uVar26 = quotearg_n_style_colon(0,3,&_LC63);
                    /* WARNING: Subroutine does not return */
    error(1,*piVar22,&_LC23,uVar26);
  }
  uVar24 = uVar24 + lVar17;
  goto LAB_00103d4f;
switchD_0010282e_caseD_53:
  pbVar30 = _optarg;
  sVar15 = strlen((char *)_optarg);
  pbVar12 = (byte *)last_component(pbVar29);
  if ((pbVar29 != pbVar12) ||
     ((iVar11 = eolchar, (int)sVar15 != 0 && (pbVar29[(long)(int)sVar15 + -1] == 0x2f)))) {
    uVar26 = quote(pbVar29);
    uVar14 = dcgettext(0,"invalid suffix %s, contains directory separator",5);
LAB_001030fb:
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar14,uVar26);
  }
  goto LAB_001027d0;
}


