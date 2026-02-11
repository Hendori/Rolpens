
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * create_fullname(char *param_1,byte *param_2)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  ushort **ppuVar6;
  __int32_t **pp_Var7;
  ulong uVar8;
  undefined1 *puVar9;
  tm *__tp;
  passwd *ppVar10;
  void *__ptr;
  undefined8 uVar11;
  char *pcVar12;
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
  byte *pbStack_50;
  long lStack_48;
  char *pcStack_40;
  
  sVar3 = strlen(param_1);
  cVar16 = *param_1;
  lVar17 = sVar3 + 1;
  if (cVar16 == '\0') {
LAB_00100063:
    pcVar5 = (char *)xmalloc(lVar17);
    cVar16 = *param_1;
    pcVar13 = pcVar5;
    while (cVar16 != '\0') {
      while (cVar16 == '&') {
        ppuVar6 = __ctype_b_loc();
        uVar8 = (ulong)*param_2;
        pbVar14 = param_2;
        if ((*(byte *)((long)*ppuVar6 + uVar8 * 2 + 1) & 2) != 0) {
          pp_Var7 = __ctype_toupper_loc();
          pbVar14 = param_2 + 1;
          *pcVar13 = (char)(*pp_Var7)[uVar8];
          uVar8 = (ulong)param_2[1];
          pcVar13 = pcVar13 + 1;
        }
        if ((char)uVar8 == '\0') goto LAB_00100086;
        do {
          pbVar14 = pbVar14 + 1;
          *pcVar13 = (char)uVar8;
          pcVar13 = pcVar13 + 1;
          uVar8 = (ulong)*pbVar14;
        } while (*pbVar14 != 0);
        cVar16 = param_1[1];
        param_1 = param_1 + 1;
        if (cVar16 == '\0') goto LAB_001000f6;
      }
      *pcVar13 = cVar16;
      pcVar13 = pcVar13 + 1;
LAB_00100086:
      pcVar12 = param_1 + 1;
      param_1 = param_1 + 1;
      cVar16 = *pcVar12;
    }
LAB_001000f6:
    *pcVar13 = '\0';
    return pcVar5;
  }
  lVar15 = 0;
  pcVar13 = param_1;
  do {
    pcVar13 = pcVar13 + 1;
    lVar15 = lVar15 + (ulong)(cVar16 == '&');
    cVar16 = *pcVar13;
  } while (cVar16 != '\0');
  if (lVar15 == 0) goto LAB_00100063;
  pbVar14 = param_2;
  sVar3 = strlen((char *)param_2);
  lVar4 = (sVar3 - 1) * lVar15;
  if ((SEXT816(lVar4) == SEXT816((long)(sVar3 - 1)) * SEXT816(lVar15)) &&
     (bVar18 = SCARRY8(lVar17,lVar4), lVar17 = lVar17 + lVar4, !bVar18)) goto LAB_00100063;
  xalloc_die();
  pcVar13 = *(char **)(pbVar14 + 0x10);
  lStack_68 = *(long *)(in_FS_OFFSET + 0x28);
  lStack_58 = lVar15;
  pbStack_50 = param_2;
  lStack_48 = lVar17;
  pcStack_40 = param_1;
  pcVar5 = strchr(pcVar13,0x20);
  if (pcVar5 != (char *)0x0) {
    pcVar13 = pcVar5 + 1;
  }
  if (*pcVar13 == '/') {
    iVar2 = -100;
LAB_00100315:
    iVar2 = fstatat(iVar2,pcVar13,&sStack_100,0);
    if (iVar2 != 0) goto LAB_00100174;
    iVar2 = (-(uint)((sStack_100.st_mode & 0x10) == 0) & 10) + 0x20;
    cVar16 = (-((sStack_100.st_mode & 0x10) == 0) & 10U) + 0x20;
    lVar17 = sStack_100.st_atim.tv_sec;
  }
  else {
    if (dev_dirfd_3 == 0) {
      iVar2 = open("/dev",0x210000);
      dev_dirfd_3 = iVar2;
      if (-1 < iVar2) goto LAB_00100315;
      dev_dirfd_3 = -0x65;
    }
    else {
      iVar2 = dev_dirfd_3;
      if (-0x65 < dev_dirfd_3) goto LAB_00100315;
    }
LAB_00100174:
    iVar2 = 0x3f;
    cVar16 = '?';
    lVar17 = 0;
  }
  pcVar13 = *(char **)pbVar14;
  sVar3 = strnlen(pcVar13,8);
  if (sVar3 == 8) {
    fputs_unlocked(pcVar13,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar13);
  }
  if (include_fullname != '\0') {
    ppVar10 = getpwnam(pcVar13);
    if (ppVar10 == (passwd *)0x0) {
      uVar11 = dcgettext(0,"        ???",5);
      __printf_chk(2," %19s",uVar11);
    }
    else {
      pcVar13 = ppVar10->pw_gecos;
      pcVar5 = strchr(pcVar13,0x2c);
      if (pcVar5 != (char *)0x0) {
        *pcVar5 = '\0';
        pcVar13 = ppVar10->pw_gecos;
      }
      __ptr = (void *)create_fullname(pcVar13,ppVar10->pw_name);
      __printf_chk(2," %-19.19s",__ptr);
      free(__ptr);
    }
  }
  pcVar13 = _stdout->_IO_write_ptr;
  if (pcVar13 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar13 + 1;
    *pcVar13 = ' ';
  }
  else {
    __overflow(_stdout,0x20);
  }
  pcVar13 = _stdout->_IO_write_ptr;
  if (pcVar13 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar13 + 1;
    *pcVar13 = cVar16;
  }
  else {
    __overflow(_stdout,iVar2);
  }
  pcVar13 = *(char **)(pbVar14 + 0x10);
  sVar3 = strnlen(pcVar13,8);
  if (sVar3 == 8) {
    fputs_unlocked(pcVar13,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar13);
  }
  if (include_idle != '\0') {
    if (lVar17 == 0) {
      puVar9 = (undefined1 *)dcgettext(0,"?????",5);
    }
    else {
      if (now_2 == 0) {
        rpl_time(&now_2);
      }
      lVar17 = now_2 - lVar17;
      puVar9 = &_LC0;
      if (0x3b < lVar17) {
        if (lVar17 < 0x15180) {
          __sprintf_chk(buf_1,2,0x16,"%02d:%02d",lVar17 / 0xe10,(ulong)(lVar17 % 0xe10) / 0x3c);
        }
        else {
          __sprintf_chk(buf_1,2,0x16,&_LC7,lVar17 / 0x15180);
        }
        puVar9 = buf_1;
      }
    }
    __printf_chk(2," %-6s",puVar9);
  }
  __tp = localtime((time_t *)(pbVar14 + 0x20));
  if (__tp == (tm *)0x0) {
    puVar9 = (undefined1 *)imaxtostr(*(undefined8 *)(pbVar14 + 0x20),buf_0);
  }
  else {
    strftime(buf_0,0x21,time_format,__tp);
    puVar9 = buf_0;
  }
  __printf_chk(2,&_LC10,puVar9);
  if ((include_where == '\0') || (pcVar13 = *(char **)(pbVar14 + 0x18), *pcVar13 == '\0'))
  goto LAB_001002c7;
  pcVar5 = strchr(pcVar13,0x3a);
  if (pcVar5 == (char *)0x0) {
LAB_001005c3:
    if ((do_lookup == '\0') || (pcVar12 = (char *)canon_host(pcVar13), pcVar12 == (char *)0x0)) {
      pcVar12 = pcVar13;
    }
  }
  else {
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 1;
    pcVar12 = pcVar13;
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
  fputs_unlocked(pcVar12,_stdout);
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
  if (pcVar13 != pcVar12) {
    free(pcVar12);
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

void print_entry(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  undefined1 *puVar5;
  tm *__tp;
  passwd *ppVar6;
  void *__ptr;
  undefined8 uVar7;
  char *__s;
  char cVar8;
  char *pcVar9;
  long lVar10;
  long in_FS_OFFSET;
  stat sStack_d8;
  long local_40;
  
  pcVar9 = (char *)param_1[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = strchr(pcVar9,0x20);
  if (pcVar3 != (char *)0x0) {
    pcVar9 = pcVar3 + 1;
  }
  if (*pcVar9 == '/') {
    iVar2 = -100;
LAB_00100315:
    iVar2 = fstatat(iVar2,pcVar9,&sStack_d8,0);
    if (iVar2 != 0) goto LAB_00100174;
    iVar2 = (-(uint)((sStack_d8.st_mode & 0x10) == 0) & 10) + 0x20;
    cVar8 = (-((sStack_d8.st_mode & 0x10) == 0) & 10U) + 0x20;
    lVar10 = sStack_d8.st_atim.tv_sec;
  }
  else {
    if (dev_dirfd_3 == 0) {
      iVar2 = open("/dev",0x210000);
      dev_dirfd_3 = iVar2;
      if (-1 < iVar2) goto LAB_00100315;
      dev_dirfd_3 = -0x65;
    }
    else {
      iVar2 = dev_dirfd_3;
      if (-0x65 < dev_dirfd_3) goto LAB_00100315;
    }
LAB_00100174:
    iVar2 = 0x3f;
    cVar8 = '?';
    lVar10 = 0;
  }
  pcVar9 = (char *)*param_1;
  sVar4 = strnlen(pcVar9,8);
  if (sVar4 == 8) {
    fputs_unlocked(pcVar9,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar9);
  }
  if (include_fullname != '\0') {
    ppVar6 = getpwnam(pcVar9);
    if (ppVar6 == (passwd *)0x0) {
      uVar7 = dcgettext(0,"        ???",5);
      __printf_chk(2," %19s",uVar7);
    }
    else {
      pcVar9 = ppVar6->pw_gecos;
      pcVar3 = strchr(pcVar9,0x2c);
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
        pcVar9 = ppVar6->pw_gecos;
      }
      __ptr = (void *)create_fullname(pcVar9,ppVar6->pw_name);
      __printf_chk(2," %-19.19s",__ptr);
      free(__ptr);
    }
  }
  pcVar9 = _stdout->_IO_write_ptr;
  if (pcVar9 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar9 + 1;
    *pcVar9 = ' ';
  }
  else {
    __overflow(_stdout,0x20);
  }
  pcVar9 = _stdout->_IO_write_ptr;
  if (pcVar9 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar9 + 1;
    *pcVar9 = cVar8;
  }
  else {
    __overflow(_stdout,iVar2);
  }
  pcVar9 = (char *)param_1[2];
  sVar4 = strnlen(pcVar9,8);
  if (sVar4 == 8) {
    fputs_unlocked(pcVar9,_stdout);
  }
  else {
    __printf_chk(2,&_LC2,pcVar9);
  }
  if (include_idle != '\0') {
    if (lVar10 == 0) {
      puVar5 = (undefined1 *)dcgettext(0,"?????",5);
    }
    else {
      if (now_2 == 0) {
        rpl_time(&now_2);
      }
      lVar10 = now_2 - lVar10;
      puVar5 = &_LC0;
      if (0x3b < lVar10) {
        if (lVar10 < 0x15180) {
          __sprintf_chk(buf_1,2,0x16,"%02d:%02d",lVar10 / 0xe10,(ulong)(lVar10 % 0xe10) / 0x3c);
        }
        else {
          __sprintf_chk(buf_1,2,0x16,&_LC7,lVar10 / 0x15180);
        }
        puVar5 = buf_1;
      }
    }
    __printf_chk(2," %-6s",puVar5);
  }
  __tp = localtime(param_1 + 4);
  if (__tp == (tm *)0x0) {
    puVar5 = (undefined1 *)imaxtostr(param_1[4],buf_0);
  }
  else {
    strftime(buf_0,0x21,time_format,__tp);
    puVar5 = buf_0;
  }
  __printf_chk(2,&_LC10,puVar5);
  if ((include_where == '\0') || (pcVar9 = (char *)param_1[3], *pcVar9 == '\0')) goto LAB_001002c7;
  pcVar3 = strchr(pcVar9,0x3a);
  if (pcVar3 == (char *)0x0) {
LAB_001005c3:
    if ((do_lookup == '\0') || (__s = (char *)canon_host(pcVar9), __s == (char *)0x0)) {
      __s = pcVar9;
    }
  }
  else {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
    __s = pcVar9;
    if (*pcVar9 != '\0') goto LAB_001005c3;
  }
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = ' ';
  }
  else {
    __overflow(_stdout,0x20);
  }
  fputs_unlocked(__s,_stdout);
  if (pcVar3 != (char *)0x0) {
    pcVar1 = _stdout->_IO_write_ptr;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = ':';
    }
    else {
      __overflow(_stdout,0x3a);
    }
    fputs_unlocked(pcVar3,_stdout);
  }
  if (pcVar9 != __s) {
    free(__s);
  }
LAB_001002c7:
  pcVar9 = _stdout->_IO_write_ptr;
  if (pcVar9 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar9 + 1;
    *pcVar9 = '\n';
  }
  else {
    __overflow(_stdout,10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_long_entry(char *param_1)

{
  char cVar1;
  passwd *ppVar2;
  undefined8 uVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 *puVar6;
  size_t sVar7;
  undefined4 *puVar8;
  FILE *pFVar9;
  char *pcVar10;
  long in_FS_OFFSET;
  undefined1 auStack_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar2 = getpwnam(param_1);
  uVar3 = dcgettext(0,"Login name: ",5);
  __printf_chk(2,uVar3);
  __printf_chk(2,"%-28s",param_1);
  uVar3 = dcgettext(0,"In real life: ",5);
  __printf_chk(2,uVar3);
  if (ppVar2 == (passwd *)0x0) {
    uVar3 = dcgettext(0,&_LC14,5);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      __printf_chk(2,&_LC10,uVar3);
      return;
    }
  }
  else {
    pcVar10 = ppVar2->pw_gecos;
    pcVar4 = strchr(pcVar10,0x2c);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      pcVar10 = ppVar2->pw_gecos;
    }
    pvVar5 = (void *)create_fullname(pcVar10,ppVar2->pw_name);
    __printf_chk(2,&_LC10,pvVar5);
    free(pvVar5);
    pcVar10 = _stdout->_IO_write_ptr;
    if (pcVar10 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar10 + 1;
      *pcVar10 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
    cVar1 = include_project;
    if (include_home_and_shell != '\0') {
      uVar3 = dcgettext(0,"Directory: ",5);
      __printf_chk(2,uVar3);
      __printf_chk(2,"%-29s",ppVar2->pw_dir);
      uVar3 = dcgettext(0,"Shell: ",5);
      __printf_chk(2,uVar3);
      __printf_chk(2,&_LC10,ppVar2->pw_shell);
      cVar1 = include_project;
      pcVar10 = _stdout->_IO_write_ptr;
      if (pcVar10 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar10 + 1;
        *pcVar10 = '\n';
      }
      else {
        __overflow(_stdout,10);
        cVar1 = include_project;
      }
    }
    if (cVar1 != '\0') {
      sVar7 = strlen(ppVar2->pw_dir);
      pvVar5 = (void *)xmalloc(sVar7 + 10);
      puVar6 = (undefined8 *)__stpcpy_chk(pvVar5,ppVar2->pw_dir,sVar7 + 10);
      *(undefined2 *)(puVar6 + 1) = 0x74;
      *puVar6 = 0x63656a6f72702e2f;
      pFVar9 = (FILE *)rpl_fopen(pvVar5,&_LC18);
      if (pFVar9 != (FILE *)0x0) {
        uVar3 = dcgettext(0,"Project: ",5);
        __printf_chk(2,uVar3);
        while (sVar7 = fread_unlocked(auStack_438,1,0x400,pFVar9), sVar7 != 0) {
          fwrite_unlocked(auStack_438,1,sVar7,_stdout);
        }
        rpl_fclose(pFVar9);
      }
      free(pvVar5);
    }
    if (include_plan != '\0') {
      sVar7 = strlen(ppVar2->pw_dir);
      pvVar5 = (void *)xmalloc(sVar7 + 7);
      puVar8 = (undefined4 *)__stpcpy_chk(pvVar5,ppVar2->pw_dir,sVar7 + 7);
      *puVar8 = 0x6c702e2f;
      *(undefined4 *)((long)puVar8 + 3) = 0x6e616c;
      pFVar9 = (FILE *)rpl_fopen(pvVar5,&_LC18);
      if (pFVar9 != (FILE *)0x0) {
        uVar3 = dcgettext(0,"Plan:\n",5);
        __printf_chk(2,uVar3);
        while (sVar7 = fread_unlocked(auStack_438,1,0x400,pFVar9), sVar7 != 0) {
          fwrite_unlocked(auStack_438,1,sVar7,_stdout);
        }
        rpl_fclose(pFVar9);
      }
      free(pvVar5);
    }
    pcVar10 = _stdout->_IO_write_ptr;
    if (pcVar10 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar10 + 1;
      *pcVar10 = '\n';
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      __overflow(_stdout,10);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_a8 = &_LC21;
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
    iVar2 = strcmp("pinky",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar7 + 0x10);
    ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
  } while (pcVar4 != (char *)0x0);
  pcVar4 = *(char **)((long)ppuVar7 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(ulong param_1,undefined8 *param_2)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  uint uVar10;
  _IO_FILE *p_Var11;
  uint *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  long lVar15;
  long unaff_R15;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  long local_40;
  
  uVar8 = param_1 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar12 = &switchD_001016f3::switchdataD_00101b50;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  while( true ) {
    iVar4 = getopt_long(param_1 & 0xffffffff,param_2,"sfwiqbhlp",longopts,0);
    if (iVar4 == -1) break;
    if (0x80 < iVar4) goto switchD_001016f3_caseD_63;
    if (iVar4 < 0x62) {
      if (iVar4 != -0x83) goto LAB_0010196a;
      uVar7 = proper_name_lite("Kaveh Ghazi","Kaveh Ghazi");
      uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar6 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
      version_etc(_stdout,"pinky","GNU coreutils",_Version,uVar6,uVar5,uVar7,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    switch(iVar4) {
    case 0x62:
      include_home_and_shell = 0;
      break;
    default:
      goto switchD_001016f3_caseD_63;
    case 0x66:
      include_heading = '\0';
      break;
    case 0x68:
      include_project = 0;
      break;
    case 0x69:
      include_fullname = '\0';
      include_where = '\0';
      break;
    case 0x6c:
      do_short_format = '\0';
      break;
    case 0x70:
      include_plan = 0;
      break;
    case 0x71:
      include_fullname = '\0';
      include_where = '\0';
      include_idle = '\0';
      break;
    case 0x73:
      do_short_format = '\x01';
      break;
    case 0x77:
      include_fullname = '\0';
      break;
    case 0x80:
      do_lookup = 1;
    }
  }
  lVar15 = (long)_optind;
  uVar10 = (int)param_1 - _optind;
  uVar8 = (ulong)uVar10;
  if (do_short_format == '\0') {
    if (uVar10 != 0) {
      if (0 < (int)uVar10) {
        puVar13 = param_2 + lVar15;
        do {
          uVar7 = *puVar13;
          puVar13 = puVar13 + 1;
          print_long_entry(uVar7);
        } while (puVar13 != param_2 + (int)uVar10 + lVar15);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar7 = dcgettext(0,"no username specified; at least one must be specified when using -l",5);
    error(0,0,uVar7);
switchD_001016f3_caseD_63:
    do {
      iVar4 = usage(1);
LAB_0010196a:
    } while (iVar4 != -0x82);
    usage(0);
    pcVar14 = "sfwiqbhlp";
LAB_00101978:
    uVar7 = dcgettext(0,"Login",5);
    __printf_chk(2,&_LC2,uVar7);
    if (include_fullname != '\0') {
      uVar7 = dcgettext(0,&_LC59,5);
      __printf_chk(2," %-19s",uVar7);
    }
    uVar7 = dcgettext(0,&_LC61,5);
    __printf_chk(2," %-9s",uVar7);
    if (include_idle != '\0') {
      uVar7 = dcgettext(0,&_LC63,5);
      __printf_chk(2," %-6s",uVar7);
    }
    uVar7 = dcgettext(0,&_LC64,5);
    __printf_chk(2,&_LC65,time_format_width,uVar7);
    if (include_where != '\0') {
      uVar7 = dcgettext(0,"Where",5);
      __printf_chk(2,&_LC10,uVar7);
    }
    pcVar1 = _stdout->_IO_write_ptr;
    p_Var11 = _stdout;
    if (pcVar1 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = '\n';
      goto LAB_001018bf;
    }
  }
  else {
    pcVar14 = "/var/run/utmp";
    puVar12 = (uint *)(long)_optind;
    iVar4 = read_utmp("/var/run/utmp",&local_50,&local_48,2);
    if (iVar4 == 0) {
      cVar3 = hard_locale();
      time_format_width = (-(uint)(cVar3 == '\0') & 0xfffffffc) + 0x10;
      time_format = "%b %e %H:%M";
      if (cVar3 != '\0') {
        time_format = "%Y-%m-%d %H:%M";
      }
      pcVar14 = local_48;
      unaff_R15 = local_50;
      if (include_heading == '\0') goto LAB_001018bf;
      goto LAB_00101978;
    }
    uVar8 = quotearg_n_style_colon(0,3,"/var/run/utmp");
    piVar9 = __errno_location();
    p_Var11 = (_IO_FILE *)0x1;
    error(1,*piVar9,&_LC57,uVar8);
  }
  __overflow(p_Var11,10);
LAB_001018bf:
  do {
    if (unaff_R15 == 0) {
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    pcVar1 = *(char **)pcVar14;
    if ((*pcVar1 != '\0') && (*(short *)(pcVar14 + 0x38) == 7)) {
      if ((int)uVar8 != 0) {
        lVar15 = 0;
        do {
          if ((int)uVar8 <= (int)lVar15) goto LAB_001018b7;
          lVar2 = (long)puVar12 + lVar15;
          lVar15 = lVar15 + 1;
          iVar4 = strcmp(pcVar1,(char *)param_2[lVar2]);
        } while (iVar4 != 0);
      }
      print_entry();
    }
LAB_001018b7:
    pcVar14 = pcVar14 + 0x48;
    unaff_R15 = unaff_R15 + -1;
  } while( true );
}


