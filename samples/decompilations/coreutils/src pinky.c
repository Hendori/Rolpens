
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

char * create_fullname(char *gecos_name,char *user_name)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  ushort **ppuVar6;
  __int32_t **pp_Var7;
  ulong uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  tm *__tp;
  passwd *ppVar11;
  undefined8 uVar12;
  char *pcVar13;
  byte *pbVar14;
  long lVar15;
  char cVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  stat sStack_100;
  long lStack_68;
  long lStack_58;
  char *pcStack_50;
  long lStack_48;
  char *pcStack_40;
  
  sVar3 = strlen(gecos_name);
  cVar16 = *gecos_name;
  lVar17 = sVar3 + 1;
  if (cVar16 == '\0') {
LAB_00100063:
    pcVar5 = (char *)xmalloc(lVar17);
    cVar16 = *gecos_name;
    pcVar13 = pcVar5;
    while (cVar16 != '\0') {
      while (cVar16 == '&') {
        ppuVar6 = __ctype_b_loc();
        uVar8 = (ulong)(byte)*user_name;
        pbVar14 = (byte *)user_name;
        if ((*(byte *)((long)*ppuVar6 + uVar8 * 2 + 1) & 2) != 0) {
          pp_Var7 = __ctype_toupper_loc();
          pbVar14 = (byte *)(user_name + 1);
          *pcVar13 = (char)(*pp_Var7)[uVar8];
          uVar8 = (ulong)(byte)user_name[1];
          pcVar13 = pcVar13 + 1;
        }
        if ((char)uVar8 == '\0') goto LAB_00100086;
        do {
          pbVar14 = pbVar14 + 1;
          *pcVar13 = (char)uVar8;
          pcVar13 = pcVar13 + 1;
          uVar8 = (ulong)*pbVar14;
        } while (*pbVar14 != 0);
        cVar16 = gecos_name[1];
        gecos_name = gecos_name + 1;
        if (cVar16 == '\0') goto LAB_001000f6;
      }
      *pcVar13 = cVar16;
      pcVar13 = pcVar13 + 1;
LAB_00100086:
      pcVar9 = gecos_name + 1;
      gecos_name = gecos_name + 1;
      cVar16 = *pcVar9;
    }
LAB_001000f6:
    *pcVar13 = '\0';
    return pcVar5;
  }
  lVar15 = 0;
  pcVar13 = gecos_name;
  do {
    pcVar13 = pcVar13 + 1;
    lVar15 = lVar15 + (ulong)(cVar16 == '&');
    cVar16 = *pcVar13;
  } while (cVar16 != '\0');
  if (lVar15 == 0) goto LAB_00100063;
  pcVar13 = user_name;
  sVar3 = strlen(user_name);
  lVar4 = (sVar3 - 1) * lVar15;
  if ((SEXT816(lVar4) == SEXT816((long)(sVar3 - 1)) * SEXT816(lVar15)) &&
     (bVar18 = SCARRY8(lVar17,lVar4), lVar17 = lVar17 + lVar4, !bVar18)) goto LAB_00100063;
  xalloc_die();
  pcVar5 = *(char **)(pcVar13 + 0x10);
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_58 = lVar15;
  pcStack_50 = user_name;
  lStack_48 = lVar17;
  pcStack_40 = gecos_name;
  pcVar9 = strchr(pcVar5,0x20);
  if (pcVar9 != (char *)0x0) {
    pcVar5 = pcVar9 + 1;
  }
  if (*pcVar5 == '/') {
    iVar2 = -100;
LAB_00100315:
    iVar2 = fstatat(iVar2,pcVar5,&sStack_100,0);
    if (iVar2 != 0) goto LAB_00100174;
    iVar2 = (-(uint)((sStack_100.st_mode & 0x10) == 0) & 10) + 0x20;
    cVar16 = (-((sStack_100.st_mode & 0x10) == 0) & 10U) + 0x20;
    lVar17 = sStack_100.st_atim.tv_sec;
  }
  else {
    if (print_entry::lexical_block_8::dev_dirfd == 0) {
      iVar2 = open("/dev",0x210000);
      print_entry::lexical_block_8::dev_dirfd = iVar2;
      if (-1 < iVar2) goto LAB_00100315;
      print_entry::lexical_block_8::dev_dirfd = -0x65;
    }
    else {
      iVar2 = print_entry::lexical_block_8::dev_dirfd;
      if (-0x65 < print_entry::lexical_block_8::dev_dirfd) goto LAB_00100315;
    }
LAB_00100174:
    iVar2 = 0x3f;
    cVar16 = '?';
    lVar17 = 0;
  }
  pcVar5 = *(char **)pcVar13;
  sVar3 = strnlen(pcVar5,8);
  if (sVar3 == 8) {
    fputs_unlocked(pcVar5,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar5);
  }
  if (include_fullname != false) {
    ppVar11 = getpwnam(pcVar5);
    if (ppVar11 == (passwd *)0x0) {
      uVar12 = dcgettext(0,"        ???",5);
      __printf_chk(2," %19s",uVar12);
    }
    else {
      pcVar5 = ppVar11->pw_gecos;
      pcVar9 = strchr(pcVar5,0x2c);
      if (pcVar9 != (char *)0x0) {
        *pcVar9 = '\0';
        pcVar5 = ppVar11->pw_gecos;
      }
      pcVar5 = create_fullname(pcVar5,ppVar11->pw_name);
      __printf_chk(2," %-19.19s",pcVar5);
      free(pcVar5);
    }
  }
  pcVar5 = _stdout->_IO_write_ptr;
  if (pcVar5 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar5 + 1;
    *pcVar5 = ' ';
  }
  else {
    __overflow(_stdout,0x20);
  }
  pcVar5 = _stdout->_IO_write_ptr;
  if (pcVar5 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar5 + 1;
    *pcVar5 = cVar16;
  }
  else {
    __overflow(_stdout,iVar2);
  }
  pcVar5 = *(char **)(pcVar13 + 0x10);
  sVar3 = strnlen(pcVar5,8);
  if (sVar3 == 8) {
    fputs_unlocked(pcVar5,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar5);
  }
  if (include_idle != false) {
    if (lVar17 == 0) {
      puVar10 = (undefined1 *)dcgettext(0,"?????",5);
    }
    else {
      if (now_2 == 0) {
        rpl_time(&now_2);
      }
      lVar17 = now_2 - lVar17;
      puVar10 = &_LC0;
      if (0x3b < lVar17) {
        if (lVar17 < 0x15180) {
          __sprintf_chk(buf_1,2,0x16,"%02d:%02d",lVar17 / 0xe10,(ulong)(lVar17 % 0xe10) / 0x3c);
        }
        else {
          __sprintf_chk(buf_1,2,0x16,&_LC7,lVar17 / 0x15180);
        }
        puVar10 = buf_1;
      }
    }
    __printf_chk(2," %-6s",puVar10);
  }
  __tp = localtime((time_t *)(pcVar13 + 0x20));
  if (__tp == (tm *)0x0) {
    puVar10 = (undefined1 *)imaxtostr(*(undefined8 *)(pcVar13 + 0x20),buf_0);
  }
  else {
    strftime(buf_0,0x21,time_format,__tp);
    puVar10 = buf_0;
  }
  __printf_chk(2,&_LC10,puVar10);
  if ((include_where == false) || (pcVar13 = *(char **)(pcVar13 + 0x18), *pcVar13 == '\0'))
  goto LAB_001002c7;
  pcVar5 = strchr(pcVar13,0x3a);
  if (pcVar5 == (char *)0x0) {
LAB_001005c3:
    if ((do_lookup == false) || (pcVar9 = (char *)canon_host(pcVar13), pcVar9 == (char *)0x0)) {
      pcVar9 = pcVar13;
    }
  }
  else {
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 1;
    pcVar9 = pcVar13;
    if (*pcVar13 != '\0') goto LAB_001005c3;
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = ' ';
  }
  else {
    __overflow(_stdout,0x20);
  }
  fputs_unlocked(pcVar9,_stdout);
  if (pcVar5 != (char *)0x0) {
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ':';
    }
    else {
      __overflow(_stdout,0x3a);
    }
    fputs_unlocked(pcVar5,_stdout);
  }
  if (pcVar13 != pcVar9) {
    free(pcVar9);
  }
LAB_001002c7:
  pcVar13 = _stdout->_IO_write_ptr;
  if (pcVar13 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar13 + 1;
    *pcVar13 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  if (lStack_68 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (char *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_entry(gl_utmp *utmp_ent)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined1 *puVar6;
  tm *__tp;
  passwd *ppVar7;
  char *pcVar8;
  undefined8 uVar9;
  char *__s;
  char cVar10;
  long lVar11;
  long in_FS_OFFSET;
  stat stats;
  
  pcVar8 = utmp_ent->ut_line;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = strchr(pcVar8,0x20);
  if (pcVar4 != (char *)0x0) {
    pcVar8 = pcVar4 + 1;
  }
  if (*pcVar8 == '/') {
    iVar3 = -100;
LAB_00100315:
    iVar3 = fstatat(iVar3,pcVar8,(stat *)&stats,0);
    if (iVar3 != 0) goto LAB_00100174;
    iVar3 = (-(uint)((stats.st_mode & 0x10) == 0) & 10) + 0x20;
    cVar10 = (-((stats.st_mode & 0x10) == 0) & 10U) + 0x20;
    lVar11 = stats.st_atim.tv_sec;
  }
  else {
    if (print_entry::lexical_block_8::dev_dirfd == 0) {
      iVar3 = open("/dev",0x210000);
      print_entry::lexical_block_8::dev_dirfd = iVar3;
      if (-1 < iVar3) goto LAB_00100315;
      print_entry::lexical_block_8::dev_dirfd = -0x65;
    }
    else {
      iVar3 = print_entry::lexical_block_8::dev_dirfd;
      if (-0x65 < print_entry::lexical_block_8::dev_dirfd) goto LAB_00100315;
    }
LAB_00100174:
    iVar3 = 0x3f;
    cVar10 = '?';
    lVar11 = 0;
  }
  pcVar8 = utmp_ent->ut_user;
  sVar5 = strnlen(pcVar8,8);
  if (sVar5 == 8) {
    fputs_unlocked(pcVar8,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar8);
  }
  if (include_fullname != false) {
    ppVar7 = getpwnam(pcVar8);
    if (ppVar7 == (passwd *)0x0) {
      uVar9 = dcgettext(0,"        ???",5);
      __printf_chk(2," %19s",uVar9);
    }
    else {
      pcVar8 = ppVar7->pw_gecos;
      pcVar4 = strchr(pcVar8,0x2c);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        pcVar8 = ppVar7->pw_gecos;
      }
      pcVar8 = create_fullname(pcVar8,ppVar7->pw_name);
      __printf_chk(2," %-19.19s",pcVar8);
      free(pcVar8);
    }
  }
  pcVar8 = _stdout->_IO_write_ptr;
  if (pcVar8 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar8 + 1;
    *pcVar8 = ' ';
  }
  else {
    __overflow(_stdout,0x20);
  }
  pcVar8 = _stdout->_IO_write_ptr;
  if (pcVar8 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar8 + 1;
    *pcVar8 = cVar10;
  }
  else {
    __overflow(_stdout,iVar3);
  }
  pcVar8 = utmp_ent->ut_line;
  sVar5 = strnlen(pcVar8,8);
  if (sVar5 == 8) {
    fputs_unlocked(pcVar8,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar8);
  }
  if (include_idle != false) {
    if (lVar11 == 0) {
      puVar6 = (undefined1 *)dcgettext(0,"?????",5);
    }
    else {
      if (now_2 == 0) {
        rpl_time(&now_2);
      }
      lVar11 = now_2 - lVar11;
      puVar6 = &_LC0;
      if (0x3b < lVar11) {
        if (lVar11 < 0x15180) {
          __sprintf_chk(buf_1,2,0x16,"%02d:%02d",lVar11 / 0xe10,(ulong)(lVar11 % 0xe10) / 0x3c);
        }
        else {
          __sprintf_chk(buf_1,2,0x16,&_LC7,lVar11 / 0x15180);
        }
        puVar6 = buf_1;
      }
    }
    __printf_chk(2," %-6s",puVar6);
  }
  __tp = localtime(&(utmp_ent->ut_ts).tv_sec);
  if (__tp == (tm *)0x0) {
    puVar6 = (undefined1 *)imaxtostr((utmp_ent->ut_ts).tv_sec,buf_0);
  }
  else {
    strftime(buf_0,0x21,time_format,__tp);
    puVar6 = buf_0;
  }
  __printf_chk(2,&_LC10,puVar6);
  if ((include_where == false) || (pcVar8 = utmp_ent->ut_host, *pcVar8 == '\0')) goto LAB_001002c7;
  pcVar4 = strchr(pcVar8,0x3a);
  if (pcVar4 == (char *)0x0) {
LAB_001005c3:
    if ((do_lookup == false) || (__s = (char *)canon_host(pcVar8), __s == (char *)0x0)) {
      __s = pcVar8;
    }
  }
  else {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
    __s = pcVar8;
    if (*pcVar8 != '\0') goto LAB_001005c3;
  }
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = ' ';
  }
  else {
    __overflow(_stdout,0x20);
  }
  fputs_unlocked(__s,_stdout);
  if (pcVar4 != (char *)0x0) {
    pcVar2 = _stdout->_IO_write_ptr;
    if (pcVar2 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar2 + 1;
      *pcVar2 = ':';
    }
    else {
      __overflow(_stdout,0x3a);
    }
    fputs_unlocked(pcVar4,_stdout);
  }
  if (pcVar8 != __s) {
    free(__s);
  }
LAB_001002c7:
  pcVar8 = _stdout->_IO_write_ptr;
  if (pcVar8 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar8 + 1;
    *pcVar8 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void print_long_entry(char *name)

{
  long lVar1;
  char cVar2;
  passwd *ppVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  size_t sVar8;
  void *pvVar9;
  undefined4 *puVar10;
  FILE *pFVar11;
  long in_FS_OFFSET;
  char buf [1024];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar3 = getpwnam(name);
  uVar4 = dcgettext(0,"Login name: ",5);
  __printf_chk(2,uVar4);
  __printf_chk(2,"%-28s",name);
  uVar4 = dcgettext(0,"In real life: ",5);
  __printf_chk(2,uVar4);
  if (ppVar3 == (passwd *)0x0) {
    uVar4 = dcgettext(0,&_LC14,5);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      __printf_chk(2,&_LC10,uVar4);
      return;
    }
  }
  else {
    pcVar6 = ppVar3->pw_gecos;
    pcVar5 = strchr(pcVar6,0x2c);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
      pcVar6 = ppVar3->pw_gecos;
    }
    pcVar6 = create_fullname(pcVar6,ppVar3->pw_name);
    __printf_chk(2,&_LC10,pcVar6);
    free(pcVar6);
    pcVar6 = _stdout->_IO_write_ptr;
    if (pcVar6 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar6 + 1;
      *pcVar6 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
    cVar2 = include_project;
    if (include_home_and_shell != false) {
      uVar4 = dcgettext(0,"Directory: ",5);
      __printf_chk(2,uVar4);
      __printf_chk(2,"%-29s",ppVar3->pw_dir);
      uVar4 = dcgettext(0,"Shell: ",5);
      __printf_chk(2,uVar4);
      __printf_chk(2,&_LC10,ppVar3->pw_shell);
      cVar2 = include_project;
      pcVar6 = _stdout->_IO_write_ptr;
      if (pcVar6 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar6 + 1;
        *pcVar6 = '\n';
      }
      else {
        __overflow(_stdout,10);
        cVar2 = include_project;
      }
    }
    if (cVar2 != '\0') {
      sVar8 = strlen(ppVar3->pw_dir);
      pvVar9 = (void *)xmalloc(sVar8 + 10);
      puVar7 = (undefined8 *)__stpcpy_chk(pvVar9,ppVar3->pw_dir,sVar8 + 10);
      *(undefined2 *)(puVar7 + 1) = 0x74;
      *puVar7 = 0x63656a6f72702e2f;
      pFVar11 = (FILE *)rpl_fopen(pvVar9,&_LC18);
      if (pFVar11 != (FILE *)0x0) {
        uVar4 = dcgettext(0,"Project: ",5);
        __printf_chk(2,uVar4);
        while (sVar8 = fread_unlocked(buf,1,0x400,pFVar11), sVar8 != 0) {
          fwrite_unlocked(buf,1,sVar8,_stdout);
        }
        rpl_fclose(pFVar11);
      }
      free(pvVar9);
    }
    if (include_plan != false) {
      sVar8 = strlen(ppVar3->pw_dir);
      pvVar9 = (void *)xmalloc(sVar8 + 7);
      puVar10 = (undefined4 *)__stpcpy_chk(pvVar9,ppVar3->pw_dir,sVar8 + 7);
      *puVar10 = 0x6c702e2f;
      *(undefined4 *)((long)puVar10 + 3) = 0x6e616c;
      pFVar11 = (FILE *)rpl_fopen(pvVar9,&_LC18);
      if (pFVar11 != (FILE *)0x0) {
        uVar4 = dcgettext(0,"Plan:\n",5);
        __printf_chk(2,uVar4);
        while (sVar8 = fread_unlocked(buf,1,0x400,pFVar11), sVar8 != 0) {
          fwrite_unlocked(buf,1,sVar8,_stdout);
        }
        rpl_fclose(pFVar11);
      }
      free(pvVar9);
    }
    pcVar6 = _stdout->_IO_write_ptr;
    if (pcVar6 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar6 + 1;
      *pcVar6 = '\n';
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      __overflow(_stdout,10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_00100b6a;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [USER]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -l              produce long format output for the specified USERs\n  -b              omit the user\'s home directory and shell in long format\n  -h              omit the user\'s project file in long format\n  -p              omit the user\'s plan file in long format\n  -s              do short format output, this is the default\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f              omit the line of column headings in short format\n  -w              omit the user\'s full name in short format\n  -i              omit the user\'s full name and remote host in short format\n  -q              omit the user\'s full name, remote host and idle time\n                  in short format\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --lookup    attempt to canonicalize hostnames via DNS\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nA lightweight \'finger\' program;  print user information.\nThe utmp file will be %s.\n"
                    ,5);
  __printf_chk(2,uVar5,"/var/run/utmp");
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
    iVar2 = strcmp("pinky",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar7 + 0x10);
    piVar7 = (infomap *)((long)piVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)piVar7 + 8);
  if (pcVar4 == (char *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    pcVar4 = "pinky";
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) goto LAB_00100d9d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar6 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","pinky");
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
LAB_00100d9d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/","pinky");
    if (pcVar4 == "pinky") {
      pcVar6 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,pcVar4,pcVar6);
LAB_00100b6a:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  _IO_FILE *p_Var12;
  char **ppcVar13;
  gl_utmp *utmp_ent;
  long lVar14;
  idx_t unaff_R15;
  long in_FS_OFFSET;
  idx_t n_users;
  gl_utmp *utmp_buf;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  while (iVar4 = getopt_long(argc,argv,"sfwiqbhlp",longopts,0), iVar4 != -1) {
    if (0x80 < iVar4) goto switchD_001016f3_caseD_63;
    if (iVar4 < 0x62) {
      if (iVar4 == -0x83) {
        uVar5 = proper_name_lite("Kaveh Ghazi","Kaveh Ghazi");
        uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar7 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
        version_etc(_stdout,"pinky","GNU coreutils",_Version,uVar7,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001016f3_caseD_63;
    }
    switch(iVar4) {
    case 0x62:
      include_home_and_shell = false;
      break;
    default:
      goto switchD_001016f3_caseD_63;
    case 0x66:
      include_heading = false;
      break;
    case 0x68:
      include_project = false;
      break;
    case 0x69:
      include_fullname = false;
      include_where = false;
      break;
    case 0x6c:
      do_short_format = false;
      break;
    case 0x70:
      include_plan = false;
      break;
    case 0x71:
      include_fullname = false;
      include_where = false;
      include_idle = false;
      break;
    case 0x73:
      do_short_format = true;
      break;
    case 0x77:
      include_fullname = false;
      break;
    case 0x80:
      do_lookup = true;
    }
  }
  lVar8 = (long)_optind;
  uVar11 = argc - _optind;
  uVar9 = (ulong)uVar11;
  if (do_short_format == false) {
    if (uVar11 != 0) {
      if (0 < (int)uVar11) {
        ppcVar13 = argv + lVar8;
        do {
          pcVar1 = *ppcVar13;
          ppcVar13 = ppcVar13 + 1;
          print_long_entry(pcVar1);
        } while (ppcVar13 != argv + (int)uVar11 + lVar8);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar5 = dcgettext(0,"no username specified; at least one must be specified when using -l",5);
    error(0,0,uVar5);
switchD_001016f3_caseD_63:
                    /* WARNING: Subroutine does not return */
    usage(1);
  }
  lVar8 = (long)_optind;
  iVar4 = read_utmp("/var/run/utmp",&n_users,&utmp_buf,2);
  if (iVar4 == 0) {
    cVar3 = hard_locale();
    time_format_width = (-(uint)(cVar3 == '\0') & 0xfffffffc) + 0x10;
    time_format = "%b %e %H:%M";
    if (cVar3 != '\0') {
      time_format = "%Y-%m-%d %H:%M";
    }
    utmp_ent = utmp_buf;
    unaff_R15 = n_users;
    if (include_heading == false) goto LAB_001018bf;
    uVar5 = dcgettext(0,"Login",5);
    __printf_chk(2,&_LC2,uVar5);
    if (include_fullname != false) {
      uVar5 = dcgettext(0,&_LC59,5);
      __printf_chk(2," %-19s",uVar5);
    }
    uVar5 = dcgettext(0,&_LC61,5);
    __printf_chk(2," %-9s",uVar5);
    if (include_idle != false) {
      uVar5 = dcgettext(0,&_LC63,5);
      __printf_chk(2," %-6s",uVar5);
    }
    uVar5 = dcgettext(0,&_LC64,5);
    __printf_chk(2," %-*s",time_format_width,uVar5);
    if (include_where != false) {
      uVar5 = dcgettext(0,"Where",5);
      __printf_chk(2,&_LC10,uVar5);
    }
    pcVar1 = _stdout->_IO_write_ptr;
    p_Var12 = _stdout;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
      goto LAB_001018bf;
    }
  }
  else {
    uVar9 = quotearg_n_style_colon(0,3,"/var/run/utmp");
    piVar10 = __errno_location();
    p_Var12 = (_IO_FILE *)0x1;
    error(1,*piVar10,&_LC57,uVar9);
    utmp_ent = (gl_utmp *)"/var/run/utmp";
  }
  __overflow(p_Var12,10);
LAB_001018bf:
  do {
    if (unaff_R15 == 0) {
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    pcVar1 = utmp_ent->ut_user;
    if ((*pcVar1 != '\0') && (utmp_ent->ut_type == 7)) {
      if ((int)uVar9 != 0) {
        lVar14 = 0;
        do {
          if ((int)uVar9 <= (int)lVar14) goto LAB_001018b7;
          lVar2 = lVar8 + lVar14;
          lVar14 = lVar14 + 1;
          iVar4 = strcmp(pcVar1,argv[lVar2]);
        } while (iVar4 != 0);
      }
      print_entry(utmp_ent);
    }
LAB_001018b7:
    utmp_ent = utmp_ent + 1;
    unaff_R15 = unaff_R15 + -1;
  } while( true );
}


