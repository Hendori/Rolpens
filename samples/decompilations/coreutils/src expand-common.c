
/* WARNING: Unknown calling convention */

void add_tab_stop(colno tabval)

{
  colno cVar1;
  long lVar2;
  
  cVar1 = 0;
  if (first_free_tab != 0) {
    cVar1 = tab_list[first_free_tab + -1];
  }
  lVar2 = tabval - cVar1;
  if (tabval < cVar1) {
    lVar2 = 0;
  }
  if (first_free_tab == n_tabs_allocated) {
    tab_list = (colno *)xpalloc(tab_list,&n_tabs_allocated,1,0xffffffffffffffff,8);
  }
  tab_list[first_free_tab] = tabval;
  first_free_tab = first_free_tab + 1;
  if (max_column_width < lVar2) {
    max_column_width = lVar2;
  }
  return;
}



/* WARNING: Unknown calling convention */

void parse_tab_stops(char *stops)

{
  undefined1 auVar1 [16];
  bool bVar2;
  ushort **ppuVar3;
  undefined8 uVar4;
  size_t sVar5;
  void *__ptr;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  long tabval;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  char *local_48;
  
  bVar7 = *stops;
  if (bVar7 == 0) {
    return;
  }
  bVar2 = true;
  bVar10 = false;
  bVar9 = false;
  local_48 = (char *)0x0;
  tabval = 0;
  bVar12 = false;
  do {
    while ((bVar7 != 0x2c && (ppuVar3 = __ctype_b_loc(), ((*ppuVar3)[bVar7] & 1) == 0))) {
      if (bVar7 == 0x2f) {
        if (bVar12) {
          bVar10 = false;
          uVar4 = quote(stops);
          uVar6 = dcgettext(0,"\'/\' specifier not at start of number: %s",5);
          error(0,0,uVar6,uVar4);
          bVar2 = false;
          bVar9 = bVar12;
        }
        else {
          bVar10 = false;
          bVar9 = true;
        }
      }
      else if (bVar7 == 0x2b) {
        if (bVar12) {
          uVar4 = quote(stops);
          uVar6 = dcgettext(0,"\'+\' specifier not at start of number: %s",5);
          error(0,0,uVar6,uVar4);
          bVar2 = false;
          bVar9 = false;
          bVar10 = bVar12;
        }
        else {
          bVar9 = false;
          bVar10 = true;
        }
      }
      else {
        uVar8 = (int)(char)bVar7 - 0x30;
        if (9 < uVar8) {
          uVar4 = quote(stops);
          uVar6 = dcgettext(0,"tab size contains invalid character(s): %s",5);
          error(0,0,uVar6,uVar4);
          goto LAB_001002cf;
        }
        if (!bVar12) {
          tabval = 0;
          local_48 = stops;
        }
        auVar1 = SEXT816(tabval);
        tabval = tabval * 10;
        if ((SEXT816(tabval) != auVar1 * SEXT816(10)) ||
           (bVar12 = SCARRY8((long)(int)uVar8,tabval), tabval = (int)uVar8 + tabval, bVar12)) {
          sVar5 = strspn(local_48,"0123456789");
          __ptr = (void *)ximemdup0(local_48,sVar5);
          uVar4 = quote(__ptr);
          uVar6 = dcgettext(0,"tab stop is too large %s",5);
          error(0,0,uVar6,uVar4);
          free(__ptr);
          bVar2 = false;
          stops = local_48 + (sVar5 - 1);
          bVar12 = true;
        }
        else {
          bVar12 = true;
        }
      }
LAB_00100160:
      bVar7 = stops[1];
      stops = stops + 1;
      bVar11 = bVar12;
      if (bVar7 == 0) goto LAB_001001c0;
    }
    if (!bVar12) goto LAB_00100160;
    if (bVar9) {
      if (extend_size == 0) {
        bVar12 = false;
        extend_size = tabval;
        goto LAB_00100160;
      }
      goto LAB_001003d2;
    }
    if (!bVar10) {
      bVar12 = false;
      add_tab_stop(tabval);
      goto LAB_00100160;
    }
    if (increment_size != 0) goto LAB_00100331;
    bVar12 = false;
    bVar11 = false;
    bVar7 = stops[1];
    stops = stops + 1;
    increment_size = tabval;
  } while (bVar7 != 0);
LAB_001001c0:
  if (bVar11) {
    if (bVar2) {
      if (bVar9) {
        if (extend_size == 0) {
          extend_size = tabval;
          return;
        }
LAB_001003d2:
        uVar4 = dcgettext(0,"\'/\' specifier only allowed with the last value",5);
        error(0,0,uVar4);
        extend_size = tabval;
      }
      else {
        if (!bVar10) {
          add_tab_stop(tabval);
          return;
        }
        if (increment_size == 0) {
          increment_size = tabval;
          return;
        }
LAB_00100331:
        uVar4 = dcgettext(0,"\'+\' specifier only allowed with the last value",5);
        error(0,0,uVar4);
        increment_size = tabval;
      }
    }
  }
  else if (bVar2) {
    return;
  }
LAB_001002cf:
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void finalize_tab_stops(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  colno cVar4;
  long lVar5;
  char *pcVar6;
  idx_t iVar7;
  colno *pcVar8;
  
  if (first_free_tab < 1) {
    if (increment_size == 0) {
      if (first_free_tab != 0) {
        tab_size = increment_size;
        return;
      }
      max_column_width = extend_size;
      if (extend_size == 0) {
        max_column_width = 8;
      }
      tab_size = max_column_width;
      return;
    }
    if (extend_size == 0) {
      if (first_free_tab != 0) {
        tab_size = 0;
        return;
      }
      max_column_width = increment_size;
      tab_size = increment_size;
      return;
    }
  }
  else {
    lVar5 = 0;
    lVar2 = 0;
    do {
      lVar1 = tab_list[lVar5];
      if (lVar1 == 0) {
        pcVar6 = "tab size cannot be 0";
        goto LAB_001004fe;
      }
      if (lVar1 <= lVar2) {
        pcVar6 = "tab sizes must be ascending";
        goto LAB_001004fe;
      }
      lVar5 = lVar5 + 1;
      lVar2 = lVar1;
    } while (first_free_tab != lVar5);
    cVar4 = increment_size;
    iVar7 = first_free_tab;
    pcVar8 = tab_list;
    if (increment_size == 0) goto LAB_00100520;
    if (extend_size == 0) {
      tab_size = extend_size;
      return;
    }
  }
  pcVar6 = "\'/\' specifier is mutually exclusive with \'+\'";
LAB_001004fe:
  uVar3 = dcgettext(0,pcVar6,5);
  iVar7 = 0;
  pcVar8 = (colno *)0x1;
  cVar4 = error(1,0,uVar3);
LAB_00100520:
  if ((iVar7 == 1) && (extend_size == 0)) {
    cVar4 = *pcVar8;
  }
  tab_size = cVar4;
  return;
}



/* WARNING: Unknown calling convention */

colno get_next_tab_column(colno column,idx_t *tab_index,_Bool *last_tab)

{
  idx_t iVar1;
  colno *pcVar2;
  undefined8 uVar3;
  colno cVar4;
  long lVar5;
  char **ppcVar6;
  
  cVar4 = tab_size;
  *last_tab = false;
  pcVar2 = tab_list;
  iVar1 = first_free_tab;
  if (cVar4 == 0) {
    lVar5 = *tab_index;
    if (lVar5 < first_free_tab) {
      do {
        if (column < pcVar2[lVar5]) {
          return pcVar2[lVar5];
        }
        lVar5 = lVar5 + 1;
        *tab_index = lVar5;
      } while (lVar5 != iVar1);
    }
    cVar4 = extend_size;
    if (extend_size == 0) {
      if (increment_size == 0) {
        *last_tab = true;
        lVar5 = 1;
      }
      else {
        lVar5 = increment_size - (column - tab_list[iVar1 + -1]) % increment_size;
      }
      goto LAB_00100607;
    }
  }
  lVar5 = cVar4 - column % cVar4;
LAB_00100607:
  if (!SCARRY8(lVar5,column)) {
    return lVar5 + column;
  }
  uVar3 = dcgettext(0,"input line is too long",5);
  ppcVar6 = (char **)0x1;
  error(1,0,uVar3);
  have_read_stdin = false;
  if (ppcVar6 == (char **)0x0) {
    ppcVar6 = stdin_argv;
  }
  file_list = ppcVar6;
  return 0x100c30;
}



/* WARNING: Unknown calling convention */

void set_file_list(char **list)

{
  have_read_stdin = false;
  if (list == (char **)0x0) {
    list = stdin_argv;
  }
  file_list = list;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

FILE * next_file(FILE *fp)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  FILE *pFVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (fp != (FILE *)0x0) {
    puVar3 = (uint *)__errno_location();
    uVar6 = fp->_flags & 0x20;
    if (uVar6 != 0) {
      uVar6 = *puVar3;
    }
    if ((*next_file::prev_file == '-') && (next_file::prev_file[1] == '\0')) {
      clearerr_unlocked((FILE *)fp);
    }
    else {
      iVar2 = rpl_fclose();
      if (iVar2 != 0) {
        uVar6 = *puVar3;
      }
    }
    if (uVar6 != 0) {
      uVar5 = quotearg_n_style_colon(0,3,next_file::prev_file);
      goto LAB_001007b3;
    }
  }
  while( true ) {
    pcVar1 = *file_list;
    file_list = file_list + 1;
    if (pcVar1 == (char *)0x0) {
      return (FILE *)0x0;
    }
    if ((*pcVar1 == '-') && (pcVar1[1] == '\0')) {
      have_read_stdin = true;
      pFVar4 = _stdin;
    }
    else {
      pFVar4 = (FILE *)rpl_fopen(pcVar1,&_LC12);
    }
    if (pFVar4 != (FILE *)0x0) break;
    uVar5 = quotearg_n_style_colon(0,3,pcVar1);
    puVar3 = (uint *)__errno_location();
    uVar6 = *puVar3;
LAB_001007b3:
    error(0,uVar6,&_LC11,uVar5);
    exit_status = 1;
  }
  next_file::prev_file = pcVar1;
  fadvise(pFVar4,2);
  return pFVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cleanup_file_list_stdin(void)

{
  FILE *pFVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  if (!have_read_stdin) {
    return;
  }
  iVar2 = rpl_fclose(_stdin);
  if (iVar2 == 0) {
    return;
  }
  piVar3 = __errno_location();
  error(1,*piVar3,&_LC13);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -t, --tabs=LIST  use comma separated list of tab positions.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "                     The last specified position can be prefixed with \'/\'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of \'+\'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void emit_tab_list_info(void)

{
  char *pcVar1;
  FILE *pFVar2;
  
  pFVar2 = _stdout;
  pcVar1 = (char *)dcgettext(0,"  -t, --tabs=LIST  use comma separated list of tab positions.\n",5);
  fputs_unlocked(pcVar1,pFVar2);
  pFVar2 = _stdout;
  pcVar1 = (char *)dcgettext(0,
                             "                     The last specified position can be prefixed with \'/\'\n                     to specify a tab size to use after the last\n                     explicitly specified tab stop.  Also a prefix of \'+\'\n                     can be used to align remaining tab stops relative to\n                     the last specified tab stop instead of the first column\n"
                             ,5);
  fputs_unlocked(pcVar1,pFVar2);
  return;
}


