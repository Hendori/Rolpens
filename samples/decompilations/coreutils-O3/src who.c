
void print_line(undefined *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
               char *param_5,char *param_6,undefined8 param_7,char *param_8)

{
  int iVar1;
  size_t sVar2;
  undefined1 *__ptr;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  undefined3 *puVar7;
  long in_FS_OFFSET;
  char *local_60;
  undefined1 local_55 [8];
  undefined1 local_4d [13];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  mesg_9._1_1_ = param_2;
  if (include_idle == '\0') {
    local_55[0] = 0;
LAB_001001fa:
    if ((short_output == '\0') && (sVar3 = strlen(param_6), sVar3 < 0xc)) {
LAB_001001c1:
      __sprintf_chk(local_4d,2,0xd," %10s",param_6);
      goto LAB_00100078;
    }
  }
  else {
    if (short_output == '\0') {
      sVar3 = strlen(param_5);
      if (sVar3 < 7) {
        __sprintf_chk(local_55,2,8," %-6s",param_5);
        goto LAB_001001fa;
      }
      local_55[0] = 0;
      sVar3 = strlen(param_6);
      if (0xb < sVar3) goto LAB_0010006e;
      goto LAB_001001c1;
    }
    local_55[0] = 0;
  }
LAB_0010006e:
  local_4d[0] = 0;
LAB_00100078:
  lVar6 = 1;
  if (include_exit != '\0') {
    sVar2 = strlen(param_8);
    sVar3 = 0xc;
    if (0xb < sVar2) {
      sVar3 = sVar2;
    }
    lVar6 = sVar3 + 2;
  }
  __ptr = (undefined1 *)xmalloc(lVar6);
  if (include_exit == '\0') {
    *__ptr = 0;
  }
  else {
    __sprintf_chk(__ptr,2,lVar6," %-12s",param_8);
  }
  puVar7 = (undefined3 *)&_LC0;
  if (include_mesg != '\0') {
    puVar7 = &mesg_9;
  }
  if (param_1 == (undefined *)0x0) {
    param_1 = &_LC1;
  }
  iVar1 = __asprintf_chk(&local_60,2,"%-8s%s %-12s %-*s%s%s %-8s%s",param_1,puVar7,param_3,
                         time_format_width,param_4,local_55,local_4d,param_7,__ptr);
  pcVar5 = local_60;
  if (iVar1 == -1) {
    xalloc_die();
  }
  else {
    sVar3 = strlen(local_60);
    pcVar5 = pcVar5 + sVar3;
    do {
      pcVar4 = pcVar5;
      pcVar5 = pcVar4 + -1;
    } while (*pcVar5 == ' ');
    *pcVar4 = '\0';
    puts(local_60);
    free(local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      free(__ptr);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 make_id_equals_comment_isra_0(char *param_1)

{
  long lVar1;
  size_t __n;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  void *__dest;
  undefined1 *puVar4;
  
  __n = strlen(param_1);
  __s = (char *)dcgettext(0,&_LC6,5);
  sVar2 = strlen(__s);
  lVar1 = __n + 1 + sVar2;
  uVar3 = xmalloc(lVar1);
  __dest = (void *)__mempcpy_chk(uVar3,__s,sVar2,lVar1);
  puVar4 = (undefined1 *)mempcpy(__dest,param_1,__n);
  *puVar4 = 0;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void who(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  FILE *pFVar2;
  __time_t _Var3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  void *pvVar13;
  undefined8 uVar14;
  tm *ptVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  size_t sVar19;
  size_t sVar20;
  ulong uVar21;
  int *piVar22;
  undefined1 *puVar23;
  time_t tVar24;
  long lVar25;
  undefined **ppuVar26;
  char *unaff_RBP;
  short sVar27;
  undefined8 *puVar28;
  ulong uVar29;
  time_t *__timer;
  undefined *puVar30;
  long in_FS_OFFSET;
  undefined *puStack_1d0;
  char *pcStack_1c8;
  char *apcStack_1c0 [4];
  char *pcStack_1a0;
  char *pcStack_198;
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 auStack_170 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  long local_128;
  char *local_120;
  undefined4 *local_118;
  char local_109;
  long local_f8;
  undefined8 *local_f0;
  stat local_e8;
  undefined4 local_53;
  undefined1 local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = read_utmp(param_1,&local_f8,&local_f0,(uint)short_list * 2 | param_2);
  puVar28 = local_f0;
  if (iVar5 == 0) {
    if (short_list == 0) {
      if (include_heading != '\0') {
        dcgettext(0,&_LC12,5);
        dcgettext(0,"COMMENT",5);
        uVar14 = dcgettext(0,&_LC14,5);
        uVar9 = dcgettext(0,&_LC15,5);
        uVar10 = dcgettext(0,&_LC16,5);
        uVar11 = dcgettext(0,&_LC17,5);
        uVar12 = dcgettext(0,&_LC18,5);
        print_line(uVar12,0x20,uVar11,uVar10,uVar9,uVar14);
      }
      if (my_line_only != '\0') {
        unaff_RBP = ttyname(0);
        if (unaff_RBP == (char *)0x0) goto LAB_001004c1;
        iVar5 = strncmp(unaff_RBP,"/dev/",5);
        if (iVar5 == 0) {
          unaff_RBP = unaff_RBP + 5;
        }
      }
      if (local_f8 != 0) {
        __timer = puVar28 + 4;
        local_128 = -0x8000000000000000;
        lVar25 = local_f8;
        do {
          sVar27 = (short)__timer[3];
          if ((my_line_only == '\0') || (cVar4 = str_endswith(__timer[-2],unaff_RBP), cVar4 != '\0')
             ) {
            if ((need_users == '\0') || ((*(char *)__timer[-4] == '\0' || (sVar27 != 7)))) {
              if ((need_runlevel == '\0') || (sVar27 != 1)) {
                if ((need_boottime == '\0') || (sVar27 != 2)) {
                  if ((need_clockchange == '\0') || (sVar27 != 3)) {
                    if ((need_initspawn == '\0') || (sVar27 != 5)) {
                      if ((need_login == '\0') || (sVar27 != 6)) {
                        if ((need_deadprocs == '\0') || (sVar27 != 8)) goto LAB_00100450;
                        pvVar13 = (void *)make_id_equals_comment_isra_0(__timer[-3]);
                        __sprintf_chk(local_4c,2,0xc,&_LC20,(long)(int)__timer[2]);
                        if (exitstr_0 == 0) {
                          pcVar18 = (char *)dcgettext(0,"term=",5);
                          sVar19 = strlen(pcVar18);
                          pcVar18 = (char *)dcgettext(0,"exit=",5);
                          sVar20 = strlen(pcVar18);
                          exitstr_0 = xmalloc(sVar19 + 0x18 + sVar20);
                        }
                        dcgettext(0,"exit=",5);
                        uVar1 = *(undefined4 *)((long)__timer + 0x1c);
                        uVar14 = dcgettext(0,"term=",5);
                        __sprintf_chk(exitstr_0,2,0xffffffffffffffff,"%s%d %s%d",uVar14,uVar1);
                        ptVar15 = localtime(__timer);
                        if (ptVar15 == (tm *)0x0) {
                          puVar23 = (undefined1 *)imaxtostr(*__timer,buf_3);
                        }
                        else {
                          strftime(buf_3,0x21,time_format,ptVar15);
                          puVar23 = buf_3;
                        }
                        tVar24 = __timer[-2];
                        goto LAB_001007ac;
                      }
                      pvVar13 = (void *)make_id_equals_comment_isra_0(__timer[-3]);
                      __sprintf_chk(local_4c,2,0xc,&_LC20,(long)(int)__timer[2]);
                      ptVar15 = localtime(__timer);
                      if (ptVar15 == (tm *)0x0) {
                        puVar23 = (undefined1 *)imaxtostr(*__timer,buf_3);
                      }
                      else {
                        strftime(buf_3,0x21,time_format,ptVar15);
                        puVar23 = buf_3;
                      }
                      tVar24 = __timer[-2];
                      puVar8 = (undefined *)dcgettext(0,"LOGIN",5);
                    }
                    else {
                      pvVar13 = (void *)make_id_equals_comment_isra_0(__timer[-3]);
                      __sprintf_chk(local_4c,2,0xc,&_LC20,(long)(int)__timer[2]);
                      ptVar15 = localtime(__timer);
                      if (ptVar15 == (tm *)0x0) {
                        puVar23 = (undefined1 *)imaxtostr(*__timer,buf_3);
                      }
                      else {
                        strftime(buf_3,0x21,time_format,ptVar15);
                        puVar23 = buf_3;
                      }
                      tVar24 = __timer[-2];
LAB_001007ac:
                      puVar8 = &_LC0;
                    }
                    print_line(puVar8,0x20,tVar24,puVar23,&_LC0,local_4c);
                    free(pvVar13);
                    sVar27 = (short)__timer[3];
                    goto LAB_00100450;
                  }
                  ptVar15 = localtime(__timer);
                  if (ptVar15 == (tm *)0x0) {
                    puVar23 = (undefined1 *)imaxtostr(*__timer,buf_3);
                  }
                  else {
                    puVar23 = buf_3;
                    strftime(buf_3,0x21,time_format,ptVar15);
                  }
                  pcVar18 = "clock change";
                }
                else {
                  ptVar15 = localtime(__timer);
                  if (ptVar15 == (tm *)0x0) {
                    puVar23 = (undefined1 *)imaxtostr(*__timer,buf_3);
                  }
                  else {
                    puVar23 = buf_3;
                    strftime(buf_3,0x21,time_format,ptVar15);
                  }
                  pcVar18 = "system boot";
                }
                lVar7 = dcgettext(0,pcVar18,5);
              }
              else {
                tVar24 = __timer[2];
                uVar21 = (long)(int)tVar24 / 0x100;
                if (runlevline_2 == 0) {
                  pcVar18 = (char *)dcgettext(0,"run-level",5);
                  sVar19 = strlen(pcVar18);
                  runlevline_2 = xmalloc(sVar19 + 3);
                }
                uVar14 = dcgettext(0,"run-level",5);
                __sprintf_chk(runlevline_2,2,0xffffffffffffffff,"%s %c",uVar14,
                              (long)(int)tVar24 % 0x100 & 0xff);
                if (comment_1 == 0) {
                  pcVar18 = (char *)dcgettext(0,"last=",5);
                  sVar19 = strlen(pcVar18);
                  comment_1 = xmalloc(sVar19 + 2);
                }
                uVar29 = 0x53;
                if ((char)uVar21 != 'N') {
                  uVar29 = uVar21 & 0xff;
                }
                uVar14 = dcgettext(0,"last=",5);
                __sprintf_chk(comment_1,2,0xffffffffffffffff,&_LC28,uVar14,uVar29);
                ptVar15 = localtime(__timer);
                if (ptVar15 == (tm *)0x0) {
                  puVar23 = (undefined1 *)imaxtostr(*__timer,buf_3);
                  lVar7 = runlevline_2;
                }
                else {
                  strftime(buf_3,0x21,time_format,ptVar15);
                  puVar23 = buf_3;
                  lVar7 = runlevline_2;
                }
              }
              print_line(&_LC0,0x20,lVar7,puVar23,&_LC0,&_LC0);
              sVar27 = (short)__timer[3];
            }
            else {
              __sprintf_chk(local_4c,2,0xc,&_LC20,(long)(int)__timer[2]);
              pcVar18 = (char *)__timer[-2];
              pcVar16 = strchr(pcVar18,0x20);
              if (pcVar16 != (char *)0x0) {
                pcVar18 = pcVar16 + 1;
              }
              if (*pcVar18 == '/') {
                iVar5 = -100;
LAB_00100ae6:
                iVar5 = fstatat(iVar5,pcVar18,&local_e8,0);
                _Var3 = local_e8.st_atim.tv_sec;
                if (iVar5 != 0) goto LAB_00100ada;
                local_109 = (-((local_e8.st_mode & 0x10) == 0) & 2U) + 0x2b;
                if (local_e8.st_atim.tv_sec == 0) goto LAB_00100b20;
                if (now_5 == -0x8000000000000000) {
                  rpl_time(&now_5);
                }
                if ((local_128 < _Var3) && (_Var3 <= now_5)) {
                  uVar21 = now_5 - _Var3;
                  iVar5 = (int)uVar21;
                  if ((0x1517f < iVar5) || (uVar21 != (long)iVar5 || SBORROW8(now_5,_Var3)))
                  goto LAB_00100f24;
                  pcVar18 = "  .  ";
                  if (0x3b < iVar5) {
                    uVar21 = (ulong)(uint)(iVar5 >> 0x1f) << 0x20 | uVar21 & 0xffffffff;
                    uVar29 = (long)uVar21 % 0xe10;
                    __sprintf_chk(&idle_hhmm_4,2,6,"%02d:%02d",(long)uVar21 / 0xe10 & 0xffffffff,
                                  (long)((ulong)(uint)((int)uVar29 >> 0x1f) << 0x20 |
                                        uVar29 & 0xffffffff) / 0x3c & 0xffffffff);
                    pcVar18 = (char *)&idle_hhmm_4;
                  }
                }
                else {
LAB_00100f24:
                  pcVar18 = (char *)dcgettext(0," old ",5);
                }
                __sprintf_chk(&local_53,2,7,&_LC24,6,pcVar18);
              }
              else {
                if (dev_dirfd_8 == 0) {
                  iVar5 = open("/dev",0x210000);
                  dev_dirfd_8 = iVar5;
                  if (-1 < iVar5) goto LAB_00100ae6;
                  dev_dirfd_8 = -0x65;
                }
                else {
                  iVar5 = dev_dirfd_8;
                  if (-0x65 < dev_dirfd_8) goto LAB_00100ae6;
                }
LAB_00100ada:
                local_109 = '?';
LAB_00100b20:
                local_53 = 0x3f2020;
              }
              local_118 = &local_53;
              pcVar18 = (char *)__timer[-1];
              if (*pcVar18 == '\0') {
                if (hostlen_7 < 1) {
                  hoststr_6 = (undefined1 *)xpalloc(hoststr_6,&hostlen_7,1,0xffffffffffffffff,1);
                }
                *hoststr_6 = 0;
              }
              else {
                local_120 = strchr(pcVar18,0x3a);
                if (local_120 == (char *)0x0) {
                  local_120 = (char *)0x0;
LAB_00100d9b:
                  if ((do_lookup == '\0') ||
                     (pcVar16 = (char *)canon_host(pcVar18), pcVar16 == (char *)0x0)) {
                    pcVar16 = pcVar18;
                  }
                  sVar19 = strlen(pcVar16);
                  if (local_120 != (char *)0x0) goto LAB_00100b7c;
                  if (hostlen_7 < (long)(sVar19 + 3)) {
                    free(hoststr_6);
                    hoststr_6 = (undefined1 *)
                                xpalloc(0,&hostlen_7,(sVar19 + 3) - hostlen_7,0xffffffffffffffff,1);
                  }
                  puVar23 = hoststr_6;
                  *hoststr_6 = 0x28;
                  pcVar17 = stpcpy(puVar23 + 1,pcVar16);
                  pcVar17[0] = ')';
                  pcVar17[1] = '\0';
                }
                else {
                  *local_120 = '\0';
                  local_120 = local_120 + 1;
                  pcVar16 = pcVar18;
                  if (*pcVar18 != '\0') goto LAB_00100d9b;
LAB_00100b7c:
                  puVar23 = hoststr_6;
                  sVar19 = strlen(pcVar16);
                  sVar20 = strlen(local_120);
                  lVar7 = sVar19 + 4 + sVar20;
                  if (hostlen_7 < lVar7) {
                    free(puVar23);
                    puVar23 = (undefined1 *)
                              xpalloc(0,&hostlen_7,lVar7 - hostlen_7,0xffffffffffffffff,1);
                    hoststr_6 = puVar23;
                  }
                  *puVar23 = 0x28;
                  pcVar17 = stpcpy(puVar23 + 1,pcVar16);
                  *pcVar17 = ':';
                  pcVar17 = stpcpy(pcVar17 + 1,local_120);
                  pcVar17[0] = ')';
                  pcVar17[1] = '\0';
                }
                if (pcVar18 != pcVar16) {
                  free(pcVar16);
                }
              }
              ptVar15 = localtime(__timer);
              if (ptVar15 == (tm *)0x0) {
                puVar23 = (undefined1 *)imaxtostr(*__timer,buf_3);
              }
              else {
                strftime(buf_3,0x21,time_format,ptVar15);
                puVar23 = buf_3;
              }
              print_line(__timer[-4],local_109,__timer[-2],puVar23,local_118,local_4c);
              sVar27 = (short)__timer[3];
            }
          }
LAB_00100450:
          if (sVar27 == 2) {
            local_128 = *__timer;
          }
          __timer = __timer + 9;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
    }
    else {
      lVar25 = local_f8;
      if (local_f8 != 0) {
        lVar25 = 0;
        lVar7 = local_f8;
        puVar8 = &_LC0;
        do {
          puVar30 = puVar8;
          if ((*(char *)*puVar28 != '\0') && (*(short *)(puVar28 + 7) == 7)) {
            lVar25 = lVar25 + 1;
            pvVar13 = (void *)extract_trimmed_name(puVar28);
            puVar30 = &_LC7;
            __printf_chk(2,&_LC10,puVar8,pvVar13);
            free(pvVar13);
          }
          puVar28 = puVar28 + 9;
          lVar7 = lVar7 + -1;
          puVar8 = puVar30;
        } while (lVar7 != 0);
      }
      uVar14 = dcgettext(0,"\n# users=%td\n",5);
      __printf_chk(2,uVar14,lVar25);
    }
LAB_001004c1:
    free(local_f0);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar9 = quotearg_n_style_colon(0,3,param_1);
  piVar22 = __errno_location();
  iVar5 = 1;
  error(1,*piVar22,&_LC9,uVar9);
  uVar14 = _program_name;
  ppuVar26 = &puStack_1d0;
  uStack_158 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  uStack_150 = uVar9;
  if (iVar5 != 0) {
    uVar9 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar9,uVar14);
    goto LAB_001010ba;
  }
  uVar9 = dcgettext(0,"Usage: %s [OPTION]... [ FILE | ARG1 ARG2 ]\n",5);
  __printf_chk(2,uVar9,uVar14);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,"Print information about users who are currently logged in.\n",5);
  fputs_unlocked(pcVar18,pFVar2);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,
                              "\n  -a, --all         same as -b -d --login -p -r -t -T -u\n  -b, --boot        time of last system boot\n  -d, --dead        print dead processes\n  -H, --heading     print line of column headings\n"
                              ,5);
  fputs_unlocked(pcVar18,pFVar2);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,"  -l, --login       print system login processes\n",5);
  fputs_unlocked(pcVar18,pFVar2);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,
                              "      --lookup      attempt to canonicalize hostnames via DNS\n  -m                only hostname and user associated with stdin\n  -p, --process     print active processes spawned by init\n"
                              ,5);
  fputs_unlocked(pcVar18,pFVar2);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,
                              "  -q, --count       all login names and number of users logged on\n  -r, --runlevel    print current runlevel\n  -s, --short       print only name, line, and time (default)\n  -t, --time        print last system clock change\n"
                              ,5);
  fputs_unlocked(pcVar18,pFVar2);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,
                              "  -T, -w, --mesg    add user\'s message status as +, - or ?\n  -u, --users       list users logged in\n      --message     same as -T\n      --writable    same as -T\n"
                              ,5);
  fputs_unlocked(pcVar18,pFVar2);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar18,pFVar2);
  pFVar2 = _stdout;
  pcVar18 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar18,pFVar2);
  uVar14 = dcgettext(0,
                     "\nIf FILE is not specified, use %s.  %s as FILE is common.\nIf ARG1 ARG2 given, -m presumed: \'am i\' or \'mom likes\' are usual.\n"
                     ,5);
  __printf_chk(2,uVar14,"/var/run/utmp","/var/log/wtmp");
  pcVar18 = "[";
  puStack_1d0 = &_LC35;
  pcStack_1c8 = "test invocation";
  apcStack_1c0[0] = "coreutils";
  apcStack_1c0[1] = "Multi-call invocation";
  apcStack_1c0[2] = "sha224sum";
  apcStack_1c0[3] = "sha2 utilities";
  pcStack_1a0 = "sha256sum";
  pcStack_198 = "sha2 utilities";
  pcStack_190 = "sha384sum";
  pcStack_188 = "sha2 utilities";
  pcStack_180 = "sha512sum";
  pcStack_178 = "sha2 utilities";
  auStack_170 = (undefined1  [16])0x0;
  do {
    iVar6 = strcmp("who",pcVar18);
    if (iVar6 == 0) break;
    pcVar18 = *(char **)((long)ppuVar26 + 0x10);
    ppuVar26 = (undefined **)((long)ppuVar26 + 0x10);
  } while (pcVar18 != (char *)0x0);
  puVar8 = *(undefined **)((long)ppuVar26 + 8);
  if (puVar8 == (undefined *)0x0) {
    uVar14 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar8 = &_LC36;
    __printf_chk(2,uVar14,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar18 = setlocale(5,(char *)0x0);
    if (pcVar18 != (char *)0x0) goto LAB_0010135d;
    uVar14 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar18 = " invocation";
    __printf_chk(2,uVar14,"https://www.gnu.org/software/coreutils/",&_LC36);
  }
  else {
    uVar14 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar14,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar18 = setlocale(5,(char *)0x0);
    if (pcVar18 != (char *)0x0) {
LAB_0010135d:
      iVar6 = strncmp(pcVar18,"en_",3);
      pFVar2 = _stdout;
      if (iVar6 != 0) {
        pcVar18 = (char *)dcgettext(0,
                                    "Report any translation bugs to <https://translationproject.org/team/>\n"
                                    ,5);
        fputs_unlocked(pcVar18,pFVar2);
      }
    }
    uVar14 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar18 = "";
    __printf_chk(2,uVar14,"https://www.gnu.org/software/coreutils/",&_LC36);
    if (puVar8 == &_LC36) {
      pcVar18 = " invocation";
    }
  }
  uVar14 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar14,puVar8,pcVar18);
LAB_001010ba:
                    /* WARNING: Subroutine does not return */
  exit(iVar5);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
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
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
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
  local_a8 = &_LC35;
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
    iVar2 = strcmp("who",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] main(int param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uStack_38;
  
  bVar1 = true;
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00101dc8:
  iVar4 = getopt_long(param_1,param_2,"abdlmpqrstuwHT",longopts,0);
  if (iVar4 != -1) {
    if (0x80 < iVar4) goto switchD_00101e0b_caseD_49;
    if (iVar4 < 0x48) {
      if (iVar4 == -0x83) {
        uVar5 = proper_name_lite("Michael Stone","Michael Stone");
        uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar7 = proper_name_lite("Joseph Arceneaux","Joseph Arceneaux");
        version_etc(_stdout,&_LC36,"GNU coreutils",_Version,uVar7,uVar6,uVar5,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar4 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_00101e0b_caseD_49;
    }
    switch(iVar4) {
    case 0x48:
      include_heading = 1;
      goto LAB_00101dc8;
    default:
      goto switchD_00101e0b_caseD_49;
    case 0x54:
    case 0x77:
      include_mesg = 1;
      goto LAB_00101dc8;
    case 0x61:
      need_boottime = 1;
      need_deadprocs = 1;
      need_login = 1;
      need_initspawn = 1;
      need_runlevel = 1;
      need_clockchange = 1;
      need_users = 1;
      include_mesg = 1;
      include_idle = 1;
      include_exit = '\x01';
      break;
    case 0x62:
      need_boottime = 1;
      break;
    case 100:
      need_deadprocs = 1;
      include_idle = 1;
      include_exit = '\x01';
      break;
    case 0x6c:
      need_login = 1;
      include_idle = 1;
      break;
    case 0x6d:
      my_line_only = 1;
      goto LAB_00101dc8;
    case 0x70:
      need_initspawn = 1;
      break;
    case 0x71:
      short_list = 1;
      goto LAB_00101dc8;
    case 0x72:
      need_runlevel = 1;
      include_idle = 1;
      break;
    case 0x73:
      short_output = 1;
      goto LAB_00101dc8;
    case 0x74:
      need_clockchange = 1;
      break;
    case 0x75:
      need_users = 1;
      include_idle = 1;
      break;
    case 0x80:
      goto switchD_00101e0b_caseD_80;
    }
    bVar1 = false;
    goto LAB_00101dc8;
  }
  if (bVar1) {
    need_users = 1;
    short_output = 1;
  }
  if (include_exit != '\0') {
    short_output = 0;
  }
  cVar3 = hard_locale(2);
  time_format_width = (-(uint)(cVar3 == '\0') & 0xfffffffc) + 0x10;
  time_format = "%b %e %H:%M";
  if (cVar3 != '\0') {
    time_format = "%Y-%m-%d %H:%M";
  }
  param_1 = param_1 - _optind;
  if (param_1 == 1) {
    who(param_2[_optind],0);
  }
  else {
    if (param_1 < 2) {
      if (1 < param_1 + 1U) {
LAB_0010206c:
        uVar5 = quote(param_2[(long)_optind + 2]);
        uVar6 = dcgettext(0,"extra operand %s",5);
        error(0,0,uVar6,uVar5);
switchD_00101e0b_caseD_49:
                    /* WARNING: Subroutine does not return */
        usage(1);
      }
    }
    else {
      if (param_1 != 2) goto LAB_0010206c;
      my_line_only = 1;
    }
    who("/var/run/utmp",1);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uStack_38;
  return auVar2 << 0x40;
switchD_00101e0b_caseD_80:
  do_lookup = 1;
  goto LAB_00101dc8;
}


