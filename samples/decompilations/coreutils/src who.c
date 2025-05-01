
/* WARNING: Unknown calling convention */

void print_line(char *user,char state,char *line,char *time_str,char *idle,char *pid,char *comment,
               char *exitstr)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  undefined1 *__ptr;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char *buf;
  char x_idle [8];
  char x_pid [13];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  print_line::mesg[1] = state;
  if (include_idle) {
    if (!short_output) {
      sVar4 = strlen(idle);
      if (sVar4 < 7) {
        __sprintf_chk(x_idle,2,8," %-6s",idle);
        goto LAB_001001fa;
      }
      x_idle[0] = '\0';
      sVar4 = strlen(pid);
      if (0xb < sVar4) goto LAB_0010006e;
      goto LAB_001001c1;
    }
    x_idle[0] = '\0';
  }
  else {
    x_idle[0] = '\0';
LAB_001001fa:
    if ((short_output == false) && (sVar4 = strlen(pid), sVar4 < 0xc)) {
LAB_001001c1:
      __sprintf_chk(x_pid,2,0xd," %10s",pid);
      goto LAB_00100078;
    }
  }
LAB_0010006e:
  x_pid[0] = '\0';
LAB_00100078:
  lVar6 = 1;
  if (include_exit != false) {
    sVar3 = strlen(exitstr);
    sVar4 = 0xc;
    if (0xb < sVar3) {
      sVar4 = sVar3;
    }
    lVar6 = sVar4 + 2;
  }
  __ptr = (undefined1 *)xmalloc(lVar6);
  if (include_exit == false) {
    *__ptr = 0;
  }
  else {
    __sprintf_chk(__ptr,2,lVar6," %-12s",exitstr);
  }
  pcVar7 = "";
  if (include_mesg != false) {
    pcVar7 = print_line::mesg;
  }
  if (user == (char *)0x0) {
    user = "   .";
  }
  iVar2 = __asprintf_chk(&buf,2,"%-8s%s %-12s %-*s%s%s %-8s%s",user,pcVar7,line,time_format_width,
                         time_str,x_idle,x_pid,comment,__ptr);
  pcVar7 = buf;
  if (iVar2 == -1) {
    xalloc_die();
  }
  else {
    sVar4 = strlen(buf);
    pcVar7 = pcVar7 + sVar4;
    do {
      pcVar5 = pcVar7;
      pcVar7 = pcVar5 + -1;
    } while (*pcVar7 == ' ');
    *pcVar5 = '\0';
    puts(buf);
    free(buf);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      free(__ptr);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * make_id_equals_comment(gl_utmp *utmp_ent)

{
  long lVar1;
  size_t __n;
  char *__s;
  size_t sVar2;
  char *pcVar3;
  void *__dest;
  undefined1 *puVar4;
  
  __n = strlen((char *)utmp_ent);
  __s = (char *)dcgettext(0,&_LC6,5);
  sVar2 = strlen(__s);
  lVar1 = __n + 1 + sVar2;
  pcVar3 = (char *)xmalloc(lVar1);
  __dest = (void *)__mempcpy_chk(pcVar3,__s,sVar2,lVar1);
  puVar4 = (undefined1 *)mempcpy(__dest,utmp_ent,__n);
  *puVar4 = 0;
  return pcVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void who(char *filename,int options)

{
  long lVar1;
  long lVar2;
  FILE *pFVar3;
  __time_t _Var4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *__ptr;
  char *pcVar8;
  char *time_str;
  char *line;
  char *user;
  char *pcVar9;
  undefined8 uVar10;
  tm *ptVar11;
  char *pcVar12;
  char *pcVar13;
  size_t sVar14;
  size_t sVar15;
  ulong uVar16;
  undefined8 uVar17;
  int *piVar18;
  undefined1 *puVar19;
  idx_t iVar20;
  undefined **ppuVar21;
  char *unaff_RBP;
  idx_t iVar22;
  short sVar23;
  gl_utmp *pgVar24;
  ulong uVar25;
  timespec *__timer;
  undefined *puVar26;
  undefined *puVar27;
  ulong uVar28;
  long in_FS_OFFSET;
  undefined *puStackY_1d0;
  char *pcStackY_1c8;
  char *apcStackY_1c0 [4];
  char *pcStackY_1a0;
  char *pcStackY_198;
  char *pcStackY_190;
  char *pcStackY_188;
  char *pcStackY_180;
  char *pcStackY_178;
  undefined1 auStackY_170 [16];
  undefined8 uStackY_158;
  undefined8 uStackY_150;
  long local_128;
  char *local_120;
  char *local_118;
  char local_109;
  idx_t n_users;
  gl_utmp *utmp_buf;
  stat stats;
  char idlestr [7];
  char pidstr [12];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = read_utmp(filename,&n_users,&utmp_buf,(uint)short_list * 2 | options);
  pgVar24 = utmp_buf;
  if (iVar6 == 0) {
    if (short_list == false) {
      if (include_heading != false) {
        pcVar9 = (char *)dcgettext(0,&_LC12,5);
        pcVar13 = (char *)dcgettext(0,"COMMENT",5);
        pcVar12 = (char *)dcgettext(0,&_LC14,5);
        pcVar8 = (char *)dcgettext(0,&_LC15,5);
        time_str = (char *)dcgettext(0,&_LC16,5);
        line = (char *)dcgettext(0,&_LC17,5);
        user = (char *)dcgettext(0,&_LC18,5);
        print_line(user,' ',line,time_str,pcVar8,pcVar12,pcVar13,pcVar9);
      }
      if (my_line_only != false) {
        unaff_RBP = ttyname(0);
        if (unaff_RBP == (char *)0x0) goto LAB_001004c1;
        iVar6 = strncmp(unaff_RBP,"/dev/",5);
        if (iVar6 == 0) {
          unaff_RBP = unaff_RBP + 5;
        }
      }
      if (n_users != 0) {
        __timer = &pgVar24->ut_ts;
        local_128 = -0x8000000000000000;
        iVar20 = n_users;
        do {
          sVar23 = *(short *)((long)(__timer + 1) + 8);
          if ((my_line_only == false) ||
             (cVar5 = str_endswith(*(char **)(__timer + -1),unaff_RBP), cVar5 != '\0')) {
            if ((need_users == false) ||
               ((*((gl_utmp *)(__timer + -2))->ut_user == '\0' || (sVar23 != 7)))) {
              if ((need_runlevel == false) || (sVar23 != 1)) {
                if ((need_boottime == false) || (sVar23 != 2)) {
                  if ((need_clockchange == false) || (sVar23 != 3)) {
                    if ((need_initspawn == false) || (sVar23 != 5)) {
                      if ((need_login == false) || (sVar23 != 6)) {
                        if ((need_deadprocs == false) || (sVar23 != 8)) goto LAB_00100450;
                        pcVar9 = make_id_equals_comment
                                           ((gl_utmp *)((gl_utmp *)(__timer + -2))->ut_id);
                        __sprintf_chk(pidstr,2,0xc,&_LC20,(long)*(int *)(__timer + 1));
                        if (exitstr_0 == (char *)0x0) {
                          pcVar13 = (char *)dcgettext(0,"term=",5);
                          sVar14 = strlen(pcVar13);
                          pcVar13 = (char *)dcgettext(0,"exit=",5);
                          sVar15 = strlen(pcVar13);
                          exitstr_0 = (char *)xmalloc(sVar14 + 0x18 + sVar15);
                        }
                        dcgettext(0,"exit=",5);
                        iVar6 = ((anon_struct_8_2_e76d0249_for_ut_exit *)((long)(__timer + 1) + 0xc)
                                )->e_termination;
                        uVar10 = dcgettext(0,"term=",5);
                        __sprintf_chk(exitstr_0,2,0xffffffffffffffff,"%s%d %s%d",uVar10,iVar6);
                        pcVar13 = exitstr_0;
                        ptVar11 = localtime(&__timer->tv_sec);
                        if (ptVar11 == (tm *)0x0) {
                          puVar19 = (undefined1 *)imaxtostr(__timer->tv_sec,buf_3);
                        }
                        else {
                          strftime(buf_3,0x21,time_format,ptVar11);
                          puVar19 = buf_3;
                        }
                        pcVar12 = *(char **)(__timer + -1);
                        goto LAB_001007ac;
                      }
                      pcVar9 = make_id_equals_comment((gl_utmp *)((gl_utmp *)(__timer + -2))->ut_id)
                      ;
                      __sprintf_chk(pidstr,2,0xc,&_LC20,(long)*(int *)(__timer + 1));
                      ptVar11 = localtime(&__timer->tv_sec);
                      if (ptVar11 == (tm *)0x0) {
                        puVar19 = (undefined1 *)imaxtostr(__timer->tv_sec,buf_3);
                      }
                      else {
                        strftime(buf_3,0x21,time_format,ptVar11);
                        puVar19 = buf_3;
                      }
                      pcVar12 = *(char **)(__timer + -1);
                      pcVar8 = (char *)dcgettext(0,"LOGIN",5);
                      pcVar13 = "";
                    }
                    else {
                      pcVar9 = make_id_equals_comment((gl_utmp *)((gl_utmp *)(__timer + -2))->ut_id)
                      ;
                      __sprintf_chk(pidstr,2,0xc,&_LC20,(long)*(int *)(__timer + 1));
                      ptVar11 = localtime(&__timer->tv_sec);
                      if (ptVar11 == (tm *)0x0) {
                        puVar19 = (undefined1 *)imaxtostr(__timer->tv_sec,buf_3);
                      }
                      else {
                        strftime(buf_3,0x21,time_format,ptVar11);
                        puVar19 = buf_3;
                      }
                      pcVar12 = *(char **)(__timer + -1);
                      pcVar13 = "";
LAB_001007ac:
                      pcVar8 = "";
                    }
                    print_line(pcVar8,' ',pcVar12,puVar19,"",pidstr,pcVar9,pcVar13);
                    free(pcVar9);
                    sVar23 = *(short *)((long)(__timer + 1) + 8);
                    goto LAB_00100450;
                  }
                  ptVar11 = localtime(&__timer->tv_sec);
                  if (ptVar11 == (tm *)0x0) {
                    puVar19 = (undefined1 *)imaxtostr(__timer->tv_sec,buf_3);
                  }
                  else {
                    puVar19 = buf_3;
                    strftime(buf_3,0x21,time_format,ptVar11);
                  }
                  pcVar9 = "clock change";
                }
                else {
                  ptVar11 = localtime(&__timer->tv_sec);
                  if (ptVar11 == (tm *)0x0) {
                    puVar19 = (undefined1 *)imaxtostr(__timer->tv_sec,buf_3);
                  }
                  else {
                    puVar19 = buf_3;
                    strftime(buf_3,0x21,time_format,ptVar11);
                  }
                  pcVar9 = "system boot";
                }
                pcVar9 = (char *)dcgettext(0,pcVar9,5);
                pcVar13 = "";
              }
              else {
                iVar6 = *(int *)(__timer + 1);
                uVar16 = (long)iVar6 / 0x100;
                if (runlevline_2 == (char *)0x0) {
                  pcVar9 = (char *)dcgettext(0,"run-level",5);
                  sVar14 = strlen(pcVar9);
                  runlevline_2 = (char *)xmalloc(sVar14 + 3);
                }
                uVar10 = dcgettext(0,"run-level",5);
                __sprintf_chk(runlevline_2,2,0xffffffffffffffff,"%s %c",uVar10,
                              (long)iVar6 % 0x100 & 0xff);
                if (comment_1 == (char *)0x0) {
                  pcVar9 = (char *)dcgettext(0,"last=",5);
                  sVar14 = strlen(pcVar9);
                  comment_1 = (char *)xmalloc(sVar14 + 2);
                }
                uVar28 = uVar16 & 0xff;
                uVar25 = 0x53;
                if ((char)uVar16 != 'N') {
                  uVar25 = uVar28;
                }
                uVar10 = dcgettext(0,"last=",5);
                __sprintf_chk(comment_1,2,0xffffffffffffffff,&_LC28,uVar10,uVar25);
                pcVar13 = comment_1;
                if (0x5e < (int)uVar28 - 0x20U) {
                  pcVar13 = "";
                }
                ptVar11 = localtime(&__timer->tv_sec);
                if (ptVar11 == (tm *)0x0) {
                  puVar19 = (undefined1 *)imaxtostr(__timer->tv_sec,buf_3);
                  pcVar9 = runlevline_2;
                }
                else {
                  strftime(buf_3,0x21,time_format,ptVar11);
                  puVar19 = buf_3;
                  pcVar9 = runlevline_2;
                }
              }
              print_line("",' ',pcVar9,puVar19,"","",pcVar13,"");
              sVar23 = *(short *)((long)(__timer + 1) + 8);
            }
            else {
              __sprintf_chk(pidstr,2,0xc,&_LC20,(long)*(int *)(__timer + 1));
              pcVar9 = *(char **)(__timer + -1);
              pcVar13 = strchr(pcVar9,0x20);
              if (pcVar13 != (char *)0x0) {
                pcVar9 = pcVar13 + 1;
              }
              if (*pcVar9 == '/') {
                iVar6 = -100;
LAB_00100ae6:
                iVar6 = fstatat(iVar6,pcVar9,(stat *)&stats,0);
                _Var4 = stats.st_atim.tv_sec;
                if (iVar6 != 0) goto LAB_00100ada;
                local_109 = (-((stats.st_mode & 0x10) == 0) & 2U) + 0x2b;
                if (stats.st_atim.tv_sec == 0) goto LAB_00100b20;
                if (now_5 == -0x8000000000000000) {
                  rpl_time(&now_5);
                }
                if ((local_128 < _Var4) && (_Var4 <= now_5)) {
                  uVar16 = now_5 - _Var4;
                  iVar6 = (int)uVar16;
                  if ((0x1517f < iVar6) || (uVar16 != (long)iVar6 || SBORROW8(now_5,_Var4)))
                  goto LAB_00100f24;
                  pcVar9 = "  .  ";
                  if (0x3b < iVar6) {
                    uVar16 = (ulong)(uint)(iVar6 >> 0x1f) << 0x20 | uVar16 & 0xffffffff;
                    uVar25 = (long)uVar16 % 0xe10;
                    __sprintf_chk(&idle_hhmm_4,2,6,"%02d:%02d",(long)uVar16 / 0xe10 & 0xffffffff,
                                  (long)((ulong)(uint)((int)uVar25 >> 0x1f) << 0x20 |
                                        uVar25 & 0xffffffff) / 0x3c & 0xffffffff);
                    pcVar9 = (char *)&idle_hhmm_4;
                  }
                }
                else {
LAB_00100f24:
                  pcVar9 = (char *)dcgettext(0," old ",5);
                }
                __sprintf_chk(idlestr,2,7,&_LC24,6,pcVar9);
              }
              else {
                if (dev_dirfd_8 == 0) {
                  iVar6 = open("/dev",0x210000);
                  dev_dirfd_8 = iVar6;
                  if (-1 < iVar6) goto LAB_00100ae6;
                  dev_dirfd_8 = -0x65;
                }
                else {
                  iVar6 = dev_dirfd_8;
                  if (-0x65 < dev_dirfd_8) goto LAB_00100ae6;
                }
LAB_00100ada:
                local_109 = '?';
LAB_00100b20:
                builtin_strncpy(idlestr,"  ?",4);
              }
              local_118 = idlestr;
              pcVar9 = *(char **)((long)(__timer + -1) + 8);
              if (*pcVar9 == '\0') {
                if (hostlen_7 < 1) {
                  hoststr_6 = (char *)xpalloc(hoststr_6,&hostlen_7,1,0xffffffffffffffff,1);
                }
                local_120 = hoststr_6;
                *hoststr_6 = '\0';
              }
              else {
                local_120 = strchr(pcVar9,0x3a);
                if (local_120 == (char *)0x0) {
                  local_120 = (char *)0x0;
LAB_00100d9b:
                  if ((do_lookup == false) ||
                     (pcVar13 = (char *)canon_host(pcVar9), pcVar13 == (char *)0x0)) {
                    pcVar13 = pcVar9;
                  }
                  sVar14 = strlen(pcVar13);
                  if (local_120 != (char *)0x0) goto LAB_00100b7c;
                  if (hostlen_7 < (long)(sVar14 + 3)) {
                    free(hoststr_6);
                    hoststr_6 = (char *)xpalloc(0,&hostlen_7,(sVar14 + 3) - hostlen_7,
                                                0xffffffffffffffff,1);
                  }
                  pcVar12 = hoststr_6;
                  *hoststr_6 = '(';
                  pcVar12 = stpcpy(pcVar12 + 1,pcVar13);
                  pcVar12[0] = ')';
                  pcVar12[1] = '\0';
                }
                else {
                  *local_120 = '\0';
                  local_120 = local_120 + 1;
                  pcVar13 = pcVar9;
                  if (*pcVar9 != '\0') goto LAB_00100d9b;
LAB_00100b7c:
                  pcVar12 = hoststr_6;
                  sVar14 = strlen(pcVar13);
                  sVar15 = strlen(local_120);
                  lVar1 = sVar14 + 4 + sVar15;
                  if (hostlen_7 < lVar1) {
                    free(pcVar12);
                    pcVar12 = (char *)xpalloc(0,&hostlen_7,lVar1 - hostlen_7,0xffffffffffffffff,1);
                    hoststr_6 = pcVar12;
                  }
                  *pcVar12 = '(';
                  pcVar12 = stpcpy(pcVar12 + 1,pcVar13);
                  *pcVar12 = ':';
                  pcVar12 = stpcpy(pcVar12 + 1,local_120);
                  pcVar12[0] = ')';
                  pcVar12[1] = '\0';
                }
                pcVar12 = hoststr_6;
                local_120 = hoststr_6;
                if ((pcVar9 != pcVar13) && (free(pcVar13), pcVar12 == (char *)0x0)) {
                  local_120 = "";
                }
              }
              ptVar11 = localtime(&__timer->tv_sec);
              if (ptVar11 == (tm *)0x0) {
                puVar19 = (undefined1 *)imaxtostr(__timer->tv_sec,buf_3);
              }
              else {
                strftime(buf_3,0x21,time_format,ptVar11);
                puVar19 = buf_3;
              }
              print_line(((gl_utmp *)(__timer + -2))->ut_user,local_109,*(char **)(__timer + -1),
                         puVar19,local_118,pidstr,local_120,"");
              sVar23 = *(short *)((long)(__timer + 1) + 8);
            }
          }
LAB_00100450:
          if (sVar23 == 2) {
            local_128 = __timer->tv_sec;
          }
          __timer = (timespec *)((long)(__timer + 4) + 8);
          iVar20 = iVar20 + -1;
        } while (iVar20 != 0);
      }
    }
    else {
      iVar20 = n_users;
      if (n_users != 0) {
        iVar20 = 0;
        iVar22 = n_users;
        puVar26 = &_LC0;
        do {
          puVar27 = puVar26;
          if ((*pgVar24->ut_user != '\0') && (pgVar24->ut_type == 7)) {
            iVar20 = iVar20 + 1;
            __ptr = (void *)extract_trimmed_name(pgVar24);
            puVar27 = &_LC7;
            __printf_chk(2,&_LC10,puVar26,__ptr);
            free(__ptr);
          }
          pgVar24 = pgVar24 + 1;
          iVar22 = iVar22 + -1;
          puVar26 = puVar27;
        } while (iVar22 != 0);
      }
      uVar10 = dcgettext(0,"\n# users=%td\n",5);
      __printf_chk(2,uVar10,iVar20);
    }
LAB_001004c1:
    free(utmp_buf);
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar17 = quotearg_n_style_colon(0,3,filename);
  piVar18 = __errno_location();
  iVar6 = 1;
  error(1,*piVar18,&_LC9,uVar17);
  uVar10 = _program_name;
  ppuVar21 = &puStackY_1d0;
  uStackY_158 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStackY_150 = uVar17;
  if (iVar6 != 0) {
    uVar17 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar17,uVar10);
    goto LAB_001010ba;
  }
  uVar17 = dcgettext(0,"Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n",5);
  __printf_chk(2,uVar17,uVar10);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,"Print information about users who are currently logged in.\n",5);
  fputs_unlocked(pcVar9,pFVar3);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar3);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,"  -l, --login       print system login processes\n",5);
  fputs_unlocked(pcVar9,pFVar3);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar3);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar3);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,
                             "  -T, -w, --mesg    add user\'s message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n"
                             ,5);
  fputs_unlocked(pcVar9,pFVar3);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar9,pFVar3);
  pFVar3 = _stdout;
  pcVar9 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar9,pFVar3);
  uVar10 = dcgettext(0,
                     "\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: \'am i\' or \'mom likes\' are usual.\n"
                     ,5);
  __printf_chk(2,uVar10,"/var/run/utmp","/var/log/wtmp");
  pcVar9 = "[";
  puStackY_1d0 = &_LC35;
  pcStackY_1c8 = "test invocation";
  apcStackY_1c0[0] = "coreutils";
  apcStackY_1c0[1] = "Multi-call invocation";
  apcStackY_1c0[2] = "sha224sum";
  apcStackY_1c0[3] = "sha2 utilities";
  pcStackY_1a0 = "sha256sum";
  pcStackY_198 = "sha2 utilities";
  pcStackY_190 = "sha384sum";
  pcStackY_188 = "sha2 utilities";
  pcStackY_180 = "sha512sum";
  pcStackY_178 = "sha2 utilities";
  auStackY_170 = (undefined1  [16])0x0;
  do {
    iVar7 = strcmp("who",pcVar9);
    if (iVar7 == 0) break;
    pcVar9 = *(char **)((long)ppuVar21 + 0x10);
    ppuVar21 = (undefined **)((long)ppuVar21 + 0x10);
  } while (pcVar9 != (char *)0x0);
  puVar26 = *(undefined **)((long)ppuVar21 + 8);
  if (puVar26 == (undefined *)0x0) {
    uVar10 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar26 = &_LC36;
    __printf_chk(2,uVar10,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar9 = setlocale(5,(char *)0x0);
    if (pcVar9 != (char *)0x0) goto LAB_0010135d;
    uVar10 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar9 = " invocation";
    __printf_chk(2,uVar10,"https://www.gnu.org/software/coreutils/",&_LC36);
  }
  else {
    uVar10 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar10,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar9 = setlocale(5,(char *)0x0);
    if (pcVar9 != (char *)0x0) {
LAB_0010135d:
      iVar7 = strncmp(pcVar9,"en_",3);
      pFVar3 = _stdout;
      if (iVar7 != 0) {
        pcVar9 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar9,pFVar3);
      }
    }
    uVar10 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar9 = "";
    __printf_chk(2,uVar10,"https://www.gnu.org/software/coreutils/",&_LC36);
    if (puVar26 == &_LC36) {
      pcVar9 = " invocation";
    }
  }
  uVar10 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar10,puVar26,pcVar9);
LAB_001010ba:
                    /* WARNING: Subroutine does not return */
  exit(iVar6);
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
  infomap *piVar6;
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_001010ba;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Print information about users who are currently logged in.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -l, --login       print system login processes\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -T, -w, --mesg    add user\'s message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: \'am i\' or \'mom likes\' are usual.\n"
                    ,5);
  __printf_chk(2,uVar5,"/var/run/utmp","/var/log/wtmp");
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
    iVar2 = strcmp("who",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC36;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010135d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC36);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010135d:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC36);
    if (puVar7 == &_LC36) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001010ba:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar1 = true;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00101dc8:
  iVar3 = getopt_long(argc,argv,"abdlmpqrstuwHT",longopts,0);
  if (iVar3 != -1) {
    if (0x80 < iVar3) goto switchD_00101e0b_caseD_49;
    if (iVar3 < 0x48) {
      if (iVar3 == -0x83) {
        uVar4 = proper_name_lite("Michael Stone","Michael Stone");
        uVar5 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar6 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
        version_etc(_stdout,&_LC36,"GNU coreutils",_Version,uVar6,uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar3 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101e0b_caseD_49;
    }
    switch(iVar3) {
    case 0x48:
      include_heading = true;
      goto LAB_00101dc8;
    default:
      goto switchD_00101e0b_caseD_49;
    case 0x54:
    case 0x77:
      include_mesg = true;
      goto LAB_00101dc8;
    case 0x61:
      need_boottime = true;
      need_deadprocs = true;
      need_login = true;
      need_initspawn = true;
      need_runlevel = true;
      need_clockchange = true;
      need_users = true;
      include_mesg = true;
      include_idle = true;
      include_exit = true;
      break;
    case 0x62:
      need_boottime = true;
      break;
    case 100:
      need_deadprocs = true;
      include_idle = true;
      include_exit = true;
      break;
    case 0x6c:
      need_login = true;
      include_idle = true;
      break;
    case 0x6d:
      my_line_only = true;
      goto LAB_00101dc8;
    case 0x70:
      need_initspawn = true;
      break;
    case 0x71:
      short_list = true;
      goto LAB_00101dc8;
    case 0x72:
      need_runlevel = true;
      include_idle = true;
      break;
    case 0x73:
      short_output = true;
      goto LAB_00101dc8;
    case 0x74:
      need_clockchange = true;
      break;
    case 0x75:
      need_users = true;
      include_idle = true;
      break;
    case 0x80:
      goto switchD_00101e0b_caseD_80;
    }
    bVar1 = false;
    goto LAB_00101dc8;
  }
  if (bVar1) {
    need_users = true;
    short_output = true;
  }
  if (include_exit != false) {
    short_output = false;
  }
  cVar2 = hard_locale(2);
  time_format_width = (-(uint)(cVar2 == '\0') & 0xfffffffc) + 0x10;
  time_format = "%b %e %H:%M";
  if (cVar2 != '\0') {
    time_format = "%Y-%m-%d %H:%M";
  }
  iVar3 = argc - _optind;
  if (iVar3 == 1) {
    who(argv[_optind],0);
  }
  else {
    if (iVar3 < 2) {
      if (1 < iVar3 + 1U) {
LAB_0010206c:
        uVar4 = quote(argv[(long)_optind + 2]);
        uVar5 = dcgettext(0,"extra operand %s",5);
        error(0,0,uVar5,uVar4);
switchD_00101e0b_caseD_49:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
    }
    else {
      if (iVar3 != 2) goto LAB_0010206c;
      my_line_only = true;
    }
    who("/var/run/utmp",1);
  }
  return 0;
switchD_00101e0b_caseD_80:
  do_lookup = true;
  goto LAB_00101dc8;
}


