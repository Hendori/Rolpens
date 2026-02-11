
void add_tab_stop(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (first_free_tab != 0) {
    lVar1 = *(long *)(tab_list + -8 + first_free_tab * 8);
  }
  lVar2 = param_1 - lVar1;
  if (param_1 < lVar1) {
    lVar2 = 0;
  }
  if (first_free_tab == n_tabs_allocated) {
    tab_list = xpalloc(tab_list,&n_tabs_allocated,1,0xffffffffffffffff,8);
  }
  *(long *)(tab_list + first_free_tab * 8) = param_1;
  first_free_tab = first_free_tab + 1;
  if (max_column_width < lVar2) {
    max_column_width = lVar2;
  }
  return;
}



void parse_tab_stops(byte *param_1)

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
  long lVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  byte *local_48;
  
  bVar7 = *param_1;
  if (bVar7 == 0) {
    return;
  }
  bVar2 = true;
  bVar11 = false;
  bVar10 = false;
  local_48 = (byte *)0x0;
  lVar9 = 0;
  bVar13 = false;
  do {
    while ((bVar7 != 0x2c && (ppuVar3 = __ctype_b_loc(), ((*ppuVar3)[bVar7] & 1) == 0))) {
      if (bVar7 == 0x2f) {
        if (bVar13) {
          bVar11 = false;
          uVar4 = quote(param_1);
          uVar6 = dcgettext(0,"\'/\' specifier not at start of number: %s",5);
          error(0,0,uVar6,uVar4);
          bVar2 = false;
          bVar10 = bVar13;
        }
        else {
          bVar11 = false;
          bVar10 = true;
        }
      }
      else if (bVar7 == 0x2b) {
        if (bVar13) {
          uVar4 = quote(param_1);
          uVar6 = dcgettext(0,"\'+\' specifier not at start of number: %s",5);
          error(0,0,uVar6,uVar4);
          bVar2 = false;
          bVar10 = false;
          bVar11 = bVar13;
        }
        else {
          bVar10 = false;
          bVar11 = true;
        }
      }
      else {
        uVar8 = (int)(char)bVar7 - 0x30;
        if (9 < uVar8) {
          uVar4 = quote(param_1);
          uVar6 = dcgettext(0,"tab size contains invalid character(s): %s",5);
          error(0,0,uVar6,uVar4);
          goto LAB_001002cf;
        }
        if (!bVar13) {
          lVar9 = 0;
          local_48 = param_1;
        }
        auVar1 = SEXT816(lVar9);
        lVar9 = lVar9 * 10;
        if ((SEXT816(lVar9) != auVar1 * SEXT816(10)) ||
           (bVar13 = SCARRY8((long)(int)uVar8,lVar9), lVar9 = (int)uVar8 + lVar9, bVar13)) {
          sVar5 = strspn((char *)local_48,"0123456789");
          __ptr = (void *)ximemdup0(local_48,sVar5);
          uVar4 = quote(__ptr);
          uVar6 = dcgettext(0,"tab stop is too large %s",5);
          error(0,0,uVar6,uVar4);
          free(__ptr);
          bVar2 = false;
          param_1 = local_48 + (sVar5 - 1);
          bVar13 = true;
        }
        else {
          bVar13 = true;
        }
      }
LAB_00100160:
      bVar7 = param_1[1];
      param_1 = param_1 + 1;
      bVar12 = bVar13;
      if (bVar7 == 0) goto LAB_001001c0;
    }
    if (!bVar13) goto LAB_00100160;
    if (bVar10) {
      if (extend_size == 0) {
        bVar13 = false;
        extend_size = lVar9;
        goto LAB_00100160;
      }
      goto LAB_001003d2;
    }
    if (!bVar11) {
      bVar13 = false;
      add_tab_stop(lVar9);
      goto LAB_00100160;
    }
    if (increment_size != 0) goto LAB_00100331;
    bVar13 = false;
    bVar12 = false;
    bVar7 = param_1[1];
    param_1 = param_1 + 1;
    increment_size = lVar9;
  } while (bVar7 != 0);
LAB_001001c0:
  if (bVar12) {
    if (bVar2) {
      if (bVar10) {
        if (extend_size == 0) {
          extend_size = lVar9;
          return;
        }
LAB_001003d2:
        uVar4 = dcgettext(0,"\'/\' specifier only allowed with the last value",5);
        error(0,0,uVar4);
        extend_size = lVar9;
      }
      else {
        if (!bVar11) {
          add_tab_stop(lVar9);
          return;
        }
        if (increment_size == 0) {
          increment_size = lVar9;
          return;
        }
LAB_00100331:
        uVar4 = dcgettext(0,"\'+\' specifier only allowed with the last value",5);
        error(0,0,uVar4);
        increment_size = lVar9;
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



void finalize_tab_stops(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  
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
    lVar4 = 0;
    lVar3 = 0;
    do {
      lVar1 = tab_list[lVar4];
      if (lVar1 == 0) {
        pcVar5 = "tab size cannot be 0";
        goto LAB_001004fe;
      }
      if (lVar1 <= lVar3) {
        pcVar5 = "tab sizes must be ascending";
        goto LAB_001004fe;
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar1;
    } while (first_free_tab != lVar4);
    lVar3 = increment_size;
    lVar4 = first_free_tab;
    plVar6 = tab_list;
    if (increment_size == 0) goto LAB_00100520;
    if (extend_size == 0) {
      tab_size = extend_size;
      return;
    }
  }
  pcVar5 = "\'/\' specifier is mutually exclusive with \'+\'";
LAB_001004fe:
  uVar2 = dcgettext(0,pcVar5,5);
  lVar4 = 0;
  plVar6 = (long *)0x1;
  lVar3 = error(1,0,uVar2);
LAB_00100520:
  if ((lVar4 == 1) && (extend_size == 0)) {
    lVar3 = *plVar6;
  }
  tab_size = lVar3;
  return;
}



void get_next_tab_column(long param_1,long *param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  
  lVar4 = tab_size;
  *param_3 = 0;
  lVar2 = tab_list;
  lVar1 = first_free_tab;
  if (lVar4 == 0) {
    lVar4 = *param_2;
    if (lVar4 < first_free_tab) {
      do {
        if (param_1 < *(long *)(lVar2 + lVar4 * 8)) {
          return;
        }
        lVar4 = lVar4 + 1;
        *param_2 = lVar4;
      } while (lVar4 != lVar1);
    }
    lVar4 = extend_size;
    if (extend_size == 0) {
      if (increment_size == 0) {
        *param_3 = 1;
        lVar4 = 1;
      }
      else {
        lVar4 = increment_size - (param_1 - *(long *)(tab_list + -8 + lVar1 * 8)) % increment_size;
      }
      goto LAB_00100607;
    }
  }
  lVar4 = lVar4 - param_1 % lVar4;
LAB_00100607:
  if (!SCARRY8(lVar4,param_1)) {
    return;
  }
  uVar3 = dcgettext(0,"input line is too long",5);
  puVar5 = (undefined1 *)0x1;
  error(1,0,uVar3);
  have_read_stdin = 0;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = stdin_argv;
  }
  file_list = puVar5;
  return;
}



void set_file_list(undefined1 *param_1)

{
  have_read_stdin = 0;
  if (param_1 == (undefined1 *)0x0) {
    param_1 = stdin_argv;
  }
  file_list = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long next_file(FILE *param_1)

{
  char *pcVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_1 != (FILE *)0x0) {
    puVar3 = (uint *)__errno_location();
    uVar6 = param_1->_flags & 0x20;
    if (uVar6 != 0) {
      uVar6 = *puVar3;
    }
    if ((*prev_file_0 == '-') && (prev_file_0[1] == '\0')) {
      clearerr_unlocked(param_1);
    }
    else {
      iVar2 = rpl_fclose();
      if (iVar2 != 0) {
        uVar6 = *puVar3;
      }
    }
    if (uVar6 != 0) {
      uVar5 = quotearg_n_style_colon(0,3,prev_file_0);
      goto LAB_001007b3;
    }
  }
  while( true ) {
    pcVar1 = (char *)*file_list;
    file_list = file_list + 1;
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
    if ((*pcVar1 == '-') && (pcVar1[1] == '\0')) {
      have_read_stdin = 1;
      lVar4 = _stdin;
    }
    else {
      lVar4 = rpl_fopen(pcVar1,&_LC12);
    }
    if (lVar4 != 0) break;
    uVar5 = quotearg_n_style_colon(0,3,pcVar1);
    puVar3 = (uint *)__errno_location();
    uVar6 = *puVar3;
LAB_001007b3:
    error(0,uVar6,&_LC11,uVar5);
    exit_status = 1;
  }
  prev_file_0 = pcVar1;
  fadvise(lVar4,2);
  return lVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cleanup_file_list_stdin(void)

{
  FILE *pFVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  if (have_read_stdin == '\0') {
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


