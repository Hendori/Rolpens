/* WARNING: Unknown calling convention */void splitbuf_grow(splitbuf *ss) {
   long lVar1;
   char *__n;
   char **ppcVar2;
   lVar1 = ss.half_alloc;
   __n = ss.argv[ss.argc];
   ppcVar2 = (char**)xpalloc(ss.argv, &ss.half_alloc, 1, 0x7fffffff, 0x10);
   ss.argv = ppcVar2;
   memmove(ppcVar2 + ss.half_alloc, ppcVar2 + lVar1, (size_t)__n);
   return;
}
/* WARNING: Unknown calling convention */void splitbuf_append_byte(splitbuf *ss, char c) {
   char *pcVar1;
   char *pcVar2;
   char **ppcVar3;
   ppcVar3 = ss.argv;
   pcVar1 = ppcVar3[ss.argc];
   pcVar2 = (char*)( ss.half_alloc << 3 );
   if (pcVar2 <= pcVar1) {
      splitbuf_grow(ss);
      ppcVar3 = ss.argv;
      pcVar2 = (char*)( ss.half_alloc << 3 );
   }

   ( (char*)( (long)ppcVar3 + (long)pcVar2 ) )[(long)pcVar1] = c;
   ss.argv[ss.argc] = pcVar1 + 1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention -- yet parameter storage is locked */void list_signal_handling(void) {
   long lVar1;
   int iVar2;
   int iVar3;
   undefined8 uVar4;
   int *piVar5;
   char *pcVar6;
   char *pcVar7;
   undefined *puVar8;
   long in_FS_OFFSET;
   sigset_t set;
   sigaction act;
   char signame[19];
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   sigemptyset((sigset_t*)&set);
   iVar2 = sigprocmask(0, (sigset_t*)0x0, (sigset_t*)&set);
   if (iVar2 == 0) {
      iVar2 = 1;
      do {
         iVar3 = sigaction(iVar2, (sigaction*)0x0, (sigaction*)&act);
         if (iVar3 == 0) {
            if (act.__sigaction_handler.sa_handler == (__sighandler_t)0x1) {
               pcVar7 = "";
               puVar8 = &_LC1;
               iVar3 = sigismember((sigset_t*)&set, iVar2);
               if (iVar3 != 0) {
                  pcVar7 = "BLOCK";
               }

               pcVar6 = "IGNORE";
               if (iVar3 != 0) {
                  puVar8 = &_LC3;
               }

            }
 else {
               pcVar6 = "";
               pcVar7 = "BLOCK";
               puVar8 = &_LC1;
               iVar3 = sigismember((sigset_t*)&set, iVar2);
               if (iVar3 == 0) goto LAB_00100173;
            }

            iVar3 = sig2str(iVar2, signame);
            if (iVar3 != 0) {
               __snprintf_chk(signame, 0x13, 2, 0x13, "SIG%d", iVar2);
            }

            __fprintf_chk(_stderr, 2, "%-10s (%2d): %s%s%s\n", signame, iVar2, pcVar7, puVar8, pcVar6);
         }

         LAB_00100173:iVar2 = iVar2 + 1;
      }
 while ( iVar2 != 0x41 );
      if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      uVar4 = dcgettext(0, "failed to get signal process mask", 5);
      piVar5 = __errno_location();
      error(0x7d, *piVar5, uVar4);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Unknown calling convention */void check_start_new_arg(splitbuf *ss) {
   int iVar1;
   splitbuf_append_byte(ss, '\0');
   iVar1 = ss.argc;
   if (ss.half_alloc <= (long)( ss.extra_argc + iVar1 + 1 )) {
      splitbuf_grow(ss);
   }

   ss.argv[(long)iVar1 + 1] = ss.argv[iVar1];
   ss.argc = iVar1 + 1;
   ss.sep = false;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void usage(int status) {
   FILE *pFVar1;
   int iVar2;
   undefined8 uVar3;
   char *pcVar4;
   undefined8 uVar5;
   infomap *piVar6;
   undefined *puVar7;
   infomap infomap[7];
   uVar5 = _program_name;
   piVar6 = infomap;
   if (status != 0) {
      uVar3 = dcgettext(0, "Try \'%s --help\' for more information.\n", 5);
      __fprintf_chk(_stderr, 2, uVar3, uVar5);
      goto LAB_0010032a;
   }

   uVar3 = dcgettext(0, "Usage: %s [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]\n", 5);
   __printf_chk(2, uVar3, uVar5);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "Set each NAME to VALUE in the environment and run COMMAND.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nMandatory arguments to long options are mandatory for short options too.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -a, --argv0=ARG      pass ARG as the zeroth argument of COMMAND\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -i, --ignore-environment  start with an empty environment\n  -0, --null           end each output line with NUL, not newline\n  -u, --unset=NAME     remove variable from the environment\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -C, --chdir=DIR      change working directory to DIR\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -S, --split-string=S  process and split S into separate arguments;\n                        used to pass multiple arguments on shebang lines\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --block-signal[=SIG]    block delivery of SIG signal(s) to COMMAND\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --default-signal[=SIG]  reset handling of SIG signal(s) to the default\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --ignore-signal[=SIG]   set handling of SIG signal(s) to do nothing\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --list-signal-handling  list non default signal handling to stderr\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "  -v, --debug          print verbose information for each processing step\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --help        display this help and exit\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "      --version     output version information and exit\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nA mere - implies -i.  If no COMMAND, print the resulting environment.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   pFVar1 = _stdout;
   pcVar4 = (char*)dcgettext(0, "\nSIG may be a signal name like \'PIPE\', or a signal number like \'13\'.\nWithout SIG, all known signals are included.  Multiple signals can be\ncomma-separated.  An empty SIG argument is a no-op.\n", 5);
   fputs_unlocked(pcVar4, pFVar1);
   uVar5 = dcgettext(0, "\nExit status:\n  125  if the %s command itself fails\n  126  if COMMAND is found but cannot be invoked\n  127  if COMMAND cannot be found\n  -    the exit status of COMMAND otherwise\n", 5);
   __printf_chk(2, uVar5, &_LC8);
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
   infomap[6].program = (char*)0x0;
   infomap[6].node = (char*)0x0;
   do {
      iVar2 = strcmp("env", pcVar4);
      if (iVar2 == 0) break;
      pcVar4 = *(char**)( (long)piVar6 + 0x10 );
      piVar6 = (infomap*)( (long)piVar6 + 0x10 );
   }
 while ( pcVar4 != (char*)0x0 );
   puVar7 = *(undefined**)( (long)piVar6 + 8 );
   if (puVar7 == (undefined*)0x0) {
      uVar5 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      puVar7 = &_LC8;
      __printf_chk(2, uVar5, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar4 = setlocale(5, (char*)0x0);
      if (pcVar4 != (char*)0x0) goto LAB_001006cd;
      uVar5 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar4 = " invocation";
      __printf_chk(2, uVar5, "https://www.gnu.org/software/coreutils/", &_LC8);
   }
 else {
      uVar5 = dcgettext(0, "\n%s online help: <%s>\n", 5);
      __printf_chk(2, uVar5, "GNU coreutils", "https://www.gnu.org/software/coreutils/");
      pcVar4 = setlocale(5, (char*)0x0);
      if (pcVar4 != (char*)0x0) {
         LAB_001006cd:iVar2 = strncmp(pcVar4, "en_", 3);
         pFVar1 = _stdout;
         if (iVar2 != 0) {
            pcVar4 = (char*)dcgettext(0, "Report any translation bugs to <https://translationproject.org/team/>\n", 5);
            fputs_unlocked(pcVar4, pFVar1);
         }

      }

      uVar5 = dcgettext(0, "Full documentation <%s%s>\n", 5);
      pcVar4 = "";
      __printf_chk(2, uVar5, "https://www.gnu.org/software/coreutils/", &_LC8);
      if (puVar7 == &_LC8) {
         pcVar4 = " invocation";
      }

   }

   uVar5 = dcgettext(0, "or available locally via: info \'(coreutils) %s%s\'\n", 5);
   __printf_chk(2, uVar5, puVar7, pcVar4);
   LAB_0010032a:/* WARNING: Subroutine does not return */exit(status);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void parse_signal_action_params(char *arg, _Bool set_default) {
   int iVar1;
   SIGNAL_MODE SVar2;
   char *__s;
   char *pcVar3;
   SIGNAL_MODE *pSVar4;
   SIGNAL_MODE *pSVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   SIGNAL_MODE *pSVar8;
   if (arg == (char*)0x0) {
      SVar2 = ( -(uint)!set_default & 2 ) + DEFAULT_NOERR;
      pSVar8 = signals + 0x41;
      pSVar4 = signals + 1;
      do {
         *pSVar4 = SVar2;
         for (int i = 0; i < 3; i++) {
            pSVar4[( i + 1 )] = SVar2;
         }

         pSVar5 = pSVar4 + 8;
         for (int i = 0; i < 4; i++) {
            pSVar4[( i + 4 )] = SVar2;
         }

         pSVar4 = pSVar5;
      }
 while ( pSVar8 != pSVar5 );
      return;
   }

   __s = (char*)xstrdup();
   pcVar3 = strtok(__s, ",");
   if (pcVar3 != (char*)0x0) {
      do {
         iVar1 = operand2sig();
         if (iVar1 == 0) {
            uVar6 = quote(pcVar3);
            uVar7 = dcgettext(0, "%s: invalid signal", 5);
            error(0, 0, uVar7, uVar6);
            LAB_001008fa:/* WARNING: Subroutine does not return */usage(_exit_failure);
         }

         if (iVar1 < 1) goto LAB_001008fa;
         signals[iVar1] = ( -(uint)!set_default & 2 ) + DEFAULT;
         pcVar3 = strtok((char*)0x0, ",");
      }
 while ( pcVar3 != (char*)0x0 );
   }

   free(__s);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */void parse_block_signal_params(char *arg, _Bool block) {
   int __signo;
   int iVar1;
   char *__s;
   char *pcVar2;
   undefined8 uVar3;
   int *piVar4;
   undefined8 uVar5;
   sigset_t *psVar6;
   if (arg == (char*)0x0) {
      if (block) {
         sigfillset((sigset_t*)&block_signals);
         psVar6 = &unblock_signals;
      }
 else {
         sigfillset((sigset_t*)&unblock_signals);
         psVar6 = &block_signals;
      }

      sigemptyset((sigset_t*)psVar6);
      sig_mask_changed = true;
      return;
   }

   if (!sig_mask_changed) {
      sigemptyset((sigset_t*)&block_signals);
      sigemptyset((sigset_t*)&unblock_signals);
      sig_mask_changed = true;
   }

   __s = (char*)xstrdup(arg);
   pcVar2 = strtok(__s, ",");
   if (pcVar2 != (char*)0x0) {
      psVar6 = &block_signals;
      if (block) {
         psVar6 = &unblock_signals;
      }

      do {
         __signo = operand2sig(pcVar2);
         if (__signo == 0) {
            uVar3 = quote(pcVar2);
            uVar5 = dcgettext(0, "%s: invalid signal", 5);
            error(0, 0, uVar5, uVar3);
            LAB_00100acf:/* WARNING: Subroutine does not return */usage(_exit_failure);
         }

         if (__signo < 1) goto LAB_00100acf;
         if (block) {
            iVar1 = sigaddset((sigset_t*)&block_signals, __signo);
            if (iVar1 == -1) {
               uVar3 = dcgettext(0, "failed to block signal %d", 5);
               piVar4 = __errno_location();
               error(0x7d, *piVar4, uVar3, __signo);
               break;
            }

            LAB_0010098d:sigdelset((sigset_t*)psVar6, __signo);
         }
 else {
            iVar1 = sigaddset((sigset_t*)&unblock_signals, __signo);
            if (iVar1 != -1) goto LAB_0010098d;
         }

         pcVar2 = strtok((char*)0x0, ",");
      }
 while ( pcVar2 != (char*)0x0 );
   }

   free(__s);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WARNING: Unknown calling convention */int main(int argc, char **argv) {
   long lVar1;
   bool bVar2;
   bool bVar3;
   char *__name;
   int iVar4;
   int iVar5;
   int iVar6;
   SIGNAL_MODE *pSVar7;
   char **ppcVar8;
   char **ppcVar9;
   size_t sVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   splitbuf *psVar14;
   int *piVar15;
   ulong uVar16;
   option *poVar17;
   FILE *pFVar18;
   char *pcVar19;
   undefined8 extraout_RDX;
   undefined8 extraout_RDX_00;
   uint uVar20;
   char **ppcVar21;
   splitbuf *psVar22;
   char *pcVar23;
   char *pcVar24;
   undefined8 *puVar25;
   long lVar26;
   char **ppcVar27;
   long in_FS_OFFSET;
   bool bVar28;
   bool bVar29;
   char cVar30;
   byte bVar31;
   char cVar32;
   FILE *local_150;
   int local_144;
   char *local_140;
   char *local_138;
   splitbuf ss;
   sigaction act;
   char signame[19];
   bVar31 = 0;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   set_program_name(*argv);
   setlocale(6, "");
   bindtextdomain("coreutils", "/usr/local/share/locale");
   textdomain("coreutils");
   _exit_failure = 0x7d;
   atexit((__func*)&close_stdout);
   pSVar7 = (SIGNAL_MODE*)xmalloc(0x104);
   signals = pSVar7;
   pSVar7[0] = UNCHANGED;
   pSVar7[1] = UNCHANGED;
   pSVar7[0x3f] = UNCHANGED;
   pSVar7[0x40] = UNCHANGED;
   puVar25 = (undefined8*)( ( ulong )(pSVar7 + 2) & 0xfffffffffffffff8 );
   for (uVar16 = ( ulong )(( (int)pSVar7 - (int)(undefined8*)( ( ulong )(pSVar7 + 2) & 0xfffffffffffffff8 ) ) + 0x104U >> 3); uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar25 = 0;
      puVar25 = puVar25 + (ulong)bVar31 * -2 + 1;
   }

   bVar2 = false;
   local_138 = (char*)0x0;
   local_140 = (char*)0x0;
   bVar29 = false;
   local_150 = (FILE*)argv;
   local_144 = argc;
   LAB_00101a00:while (true) {
      poVar17 = longopts;
      iVar4 = getopt_long(local_144, local_150, "+a:C:iS:u:v0 \t\n\v\f\r", longopts, 0);
      iVar5 = _optind;
      pcVar23 = _optarg;
      if (iVar4 == -1) break;
      if (0x83 < iVar4) goto switchD_00101a4f_caseD_31;
      if (iVar4 < 0x30) {
         LAB_00101ee0:cVar32 = SBORROW4(iVar4, -0x83);
         cVar30 = iVar4 + 0x83 < 0;
         iVar5 = iVar4;
         if (iVar4 == -0x83) {
            uVar11 = proper_name_lite("Assaf Gordon", "Assaf Gordon");
            uVar12 = proper_name_lite("David MacKenzie", "David MacKenzie");
            uVar13 = proper_name_lite("Richard Mlynarik", "Richard Mlynarik");
            version_etc(_stdout, &_LC8, "GNU coreutils", _Version, uVar13, uVar12, uVar11, 0);
            /* WARNING: Subroutine does not return */
            exit(0);
         }

         goto LAB_001029a8;
      }

      switch (iVar4) {
         case 0x30:
      bVar2 = true;
      break;
         default:
      goto switchD_00101a4f_caseD_31;
         case 0x43:
      local_140 = _optarg;
      break;
         case 0x53:
      uVar20 = local_144 - _optind;
      psVar14 = (splitbuf *)(ulong)uVar20;
      lVar26 = (long)(int)(uVar20 + 2);
      ss.argv = (char **)xnmalloc(lVar26);
      ss.argc = 1;
      ss.sep = true;
      ss.argv[1] = (char *)0x0;
      cVar30 = *pcVar23;
      ss.half_alloc = lVar26;
      ss.extra_argc = uVar20;
      if (cVar30 != '\0') {
        bVar28 = false;
        bVar3 = false;
        pcVar24 = pcVar23;
LAB_00101b70:
        pcVar19 = pcVar24;
        if (cVar30 < '(') {
          if (cVar30 < '\t') {
switchD_00101b8e_caseD_e:
            psVar14 = (splitbuf *)(ulong)(uint)(int)cVar30;
            goto LAB_00101bb3;
          }
          switch(cVar30) {
          case '\t':
          case '\n':
          case '\v':
          case '\f':
          case '\r':
          case ' ':
            if (bVar3 || bVar28) goto switchD_00101b8e_caseD_e;
            ss.sep = true;
            bVar28 = false;
            sVar10 = strspn(pcVar24," \t\n\v\f\r");
            bVar3 = false;
            pcVar24 = pcVar24 + sVar10;
            goto LAB_00101bd0;
          default:
            goto switchD_00101b8e_caseD_e;
          case '\"':
            psVar14 = (splitbuf *)0x22;
            if (bVar28) break;
            bVar3 = (bool)(bVar3 ^ 1);
joined_r0x00101df4:
            if (ss.sep != false) {
              check_start_new_arg(&ss);
            }
            goto LAB_00101bcc;
          case '#':
            if (ss.sep == false) {
              psVar14 = (splitbuf *)0x23;
              goto LAB_00101bc2;
            }
            goto LAB_00101bf4;
          case '$':
            psVar14 = (splitbuf *)0x24;
            if (!bVar28) {
              if (pcVar24[1] == '{') {
                cVar30 = pcVar24[2];
                if (cVar30 < '[') {
                  if ('@' < cVar30) goto LAB_00101d1f;
                  goto LAB_00101eb0;
                }
                goto LAB_00101e98;
              }
              goto LAB_00101eb0;
            }
            break;
          case '\'':
            psVar14 = (splitbuf *)0x27;
            if (!bVar3) {
              bVar28 = (bool)(bVar28 ^ 1);
              goto joined_r0x00101df4;
            }
          }
        }
        else {
          if (cVar30 != '\\') goto switchD_00101b8e_caseD_e;
          cVar30 = pcVar24[1];
          if (!bVar28) {
            if (cVar30 != '\0') {
              if ((byte)(cVar30 - 0x22U) < 0x55) goto LAB_00101e39;
switchD_00101e51_caseD_25:
              local_150 = (FILE *)CONCAT71(local_150._1_7_,cVar30);
              uVar11 = dcgettext(0,"invalid sequence \'\\%c\' in -S",5);
              cVar30 = error(0x7d,0,uVar11,(int)cVar30);
LAB_00101e98:
              if (((byte)(cVar30 + 0x9fU) < 0x1a) || (cVar30 == '_')) {
LAB_00101d1f:
                pcVar19 = pcVar24 + 3;
                do {
                  cVar30 = *pcVar19;
                  if (cVar30 < '[') {
                    if ((cVar30 < 'A') && (9 < (byte)(cVar30 - 0x30U))) break;
                  }
                  else if ((0x19 < (byte)(cVar30 + 0x9fU)) && (cVar30 != '_'))
                  goto code_r0x00101d4e;
                  pcVar19 = pcVar19 + 1;
                } while( true );
              }
              goto LAB_00101eb0;
            }
            pcVar23 = "invalid backslash at end of string in -S";
            goto LAB_00102a86;
          }
          if ((cVar30 != '\\') && (psVar14 = (splitbuf *)0x5c, cVar30 != '\'')) goto LAB_00101bb3;
LAB_00101e39:
          pcVar19 = pcVar24 + 1;
          switch(cVar30) {
          case '\"':
          case '#':
          case '$':
          case '\'':
          case '\\':
            psVar14 = (splitbuf *)(ulong)(uint)(int)cVar30;
            break;
          default:
            goto switchD_00101e51_caseD_25;
          case '_':
            if (!bVar3) {
              ss.sep = true;
              pcVar24 = pcVar24 + 2;
              goto LAB_00101bd0;
            }
            psVar14 = (splitbuf *)0x20;
            break;
          case 'c':
            psVar14 = (splitbuf *)(ulong)uVar20;
            if (!bVar3) goto LAB_00101bf4;
            pcVar23 = "\'\\c\' must not appear in double-quoted -S string";
            goto LAB_00102a86;
          case 'f':
            psVar14 = (splitbuf *)0xc;
            break;
          case 'n':
            psVar14 = (splitbuf *)0xa;
            break;
          case 'r':
            psVar14 = (splitbuf *)0xd;
            break;
          case 't':
            psVar14 = (splitbuf *)0x9;
            break;
          case 'v':
            psVar14 = (splitbuf *)0xb;
          }
        }
LAB_00101bb3:
        pcVar24 = pcVar19;
        if (ss.sep != false) {
          check_start_new_arg(&ss);
        }
LAB_00101bc2:
        splitbuf_append_byte(&ss,(char)psVar14);
LAB_00101bcc:
        pcVar24 = pcVar24 + 1;
        goto LAB_00101bd0;
      }
      goto LAB_00101bf4;
         case 0x61:
      local_138 = _optarg;
      break;
         case 0x69:
      bVar29 = true;
      break;
         case 0x75:
      if (usvars_used == usvars_alloc) {
        usvars = (char **)xpalloc(usvars,&usvars_alloc,1,0xffffffffffffffff);
      }
      ppcVar21 = usvars + usvars_used;
      usvars_used = usvars_used + 1;
      *ppcVar21 = pcVar23;
      break;
         case 0x76:
      dev_debug = true;
      break;
         case 0x80:
      parse_signal_action_params(_optarg,true);
      parse_block_signal_params(_optarg,false);
      break;
         case 0x81:
      parse_signal_action_params(_optarg,false);
      break;
         case 0x82:
      parse_block_signal_params(_optarg,true);
      break;
         case 0x83:
      goto switchD_00101a4f_caseD_83;
      }

   }
;
   if (( _optind < local_144 ) && ( poVar17 = (option*)local_150 ),iVar4 = strcmp(*(char**)( &local_150._flags + (long)_optind * 2 ), "-"),iVar4 == 0) {
      _optind = iVar5 + 1;
      LAB_00101fe0:if (dev_debug != false) {
         poVar17 = (option*)_stderr;
         fwrite("cleaning environ\n", 1, 0x11, _stderr);
      }

      _environ = main::lexical_block_11::dummy_environ;
      pcVar23 = (char*)poVar17;
      iVar5 = _optind;
   }
 else {
      if (bVar29) goto LAB_00101fe0;
      pcVar23 = (char*)poVar17;
      if (0 < usvars_used) {
         lVar26 = 0;
         ppcVar21 = usvars;
         do {
            if (dev_debug != false) {
               poVar17 = (option*)ppcVar21[lVar26];
               __fprintf_chk(_stderr, 2, "unset:    %s\n");
            }

            ppcVar21 = usvars;
            iVar5 = unsetenv(usvars[lVar26]);
            if (iVar5 != 0) goto LAB_00102a13;
            lVar26 = lVar26 + 1;
            pcVar23 = (char*)poVar17;
            iVar5 = _optind;
         }
 while ( lVar26 < usvars_used );
      }

   }

   while (iVar5 < local_144) {
      pFVar18 = *(FILE**)( &local_150._flags + (long)iVar5 * 2 );
      psVar14 = (splitbuf*)strchr((char*)pFVar18, 0x3d);
      if (psVar14 == (splitbuf*)0x0) {
         if (( iVar5 < local_144 ) && ( bVar2 )) {
            pcVar24 = "cannot specify --null (-0) with command";
            goto LAB_001026d9;
         }

         break;
      }

      if (dev_debug != false) {
         __fprintf_chk(_stderr, 2, "setenv:   %s\n");
         pcVar23 = (char*)pFVar18;
      }

      iVar5 = putenv(*(char**)( &local_150._flags + (long)_optind * 2 ));
      if (iVar5 != 0) goto LAB_00102a9e;
      _optind = _optind + 1;
      iVar5 = _optind;
   }
;
   if (( ( local_140 == (char*)0x0 ) || ( pcVar24 = "must specify command with --chdir (-C)" ),iVar5 < local_144 )) {
      if (local_144 <= iVar5) {
         pcVar23 = *_environ;
         if (pcVar23 != (char*)0x0) {
            ppcVar21 = _environ;
            do {
               ppcVar21 = ppcVar21 + 1;
               __printf_chk(2, &_LC74, pcVar23, -!bVar2 & 10);
               pcVar23 = *ppcVar21;
            }
 while ( pcVar23 != (char*)0x0 );
         }

         iVar5 = 0;
         goto LAB_0010222f;
      }

      lVar26 = 4;
      uVar20 = 1;
      do {
         iVar5 = *(int*)( (long)signals + lVar26 );
         if (iVar5 != 0) {
            iVar4 = sigaction(uVar20, (sigaction*)0x0, (sigaction*)&act);
            bVar29 = ( iVar5 - 2U & 0xfffffffd ) != 0;
            if (iVar4 == 0) {
               LAB_001023ef:act.__sigaction_handler._1_7_ = 0;
               act.__sigaction_handler._0_1_ = 1 < iVar5 - 1U;
               iVar4 = sigaction(uVar20, (sigaction*)&act, (sigaction*)0x0);
               if (( iVar4 == 0 ) || ( !bVar29 )) goto LAB_0010239d;
               pcVar23 = "failed to set signal action for signal %d";
               LAB_00102421:uVar11 = dcgettext(0, pcVar23, 5);
               piVar15 = __errno_location();
               pcVar23 = (char*)(ulong)uVar20;
               error(0x7d, *piVar15, uVar11);
            }
 else {
               if (bVar29) {
                  pcVar23 = "failed to get signal action for signal %d";
                  goto LAB_00102421;
               }

               if (iVar4 == 0) goto LAB_001023ef;
               LAB_0010239d:if (dev_debug == false) goto LAB_001023aa;
            }

            iVar6 = sig2str(uVar20);
            uVar11 = extraout_RDX;
            if (iVar6 != 0) {
               pcVar23 = (char*)0x13;
               __snprintf_chk(signame, 0x13, 2, 0x13, "SIG%d", uVar20);
               uVar11 = extraout_RDX_00;
            }

            if (dev_debug != false) {
               pcVar23 = " (failure ignored)";
               if (iVar4 == 0) {
                  pcVar23 = &_LC1;
               }

               pcVar24 = "DEFAULT";
               if (1 < iVar5 - 1U) {
                  pcVar24 = "IGNORE";
               }

               __fprintf_chk(_stderr, 2, "Reset signal %s (%d) to %s%s\n", signame, uVar20, pcVar24, pcVar23, uVar11);
            }

         }

         LAB_001023aa:uVar20 = uVar20 + 1;
         lVar26 = lVar26 + 4;
      }
 while ( uVar20 != 0x41 );
      if (sig_mask_changed == false) {
         LAB_001024f4:if (report_signal_handling != false) {
            list_signal_handling();
         }

         if (local_140 != (char*)0x0) {
            if (dev_debug != false) {
               uVar11 = quotearg_style(4, local_140);
               __fprintf_chk(_stderr, 2, "chdir:    %s\n", uVar11);
            }

            iVar5 = chdir(local_140);
            if (iVar5 != 0) {
               uVar11 = quotearg_style(4, local_140);
               pcVar23 = "cannot change directory to %s";
               LAB_001029f0:do {
                  uVar12 = dcgettext(0, pcVar23, 5);
                  piVar15 = __errno_location();
                  error(0x7d, *piVar15, uVar12, uVar11);
                  LAB_00102a13:uVar11 = quote();
                  pcVar23 = "cannot unset %s";
               }
 while ( true );
            }

         }

         lVar26 = (long)_optind;
         pcVar23 = *(char**)( &local_150._flags + lVar26 * 2 );
         if (local_138 != (char*)0x0) {
            if (dev_debug != false) {
               uVar11 = quotearg_style(4, local_138);
               __fprintf_chk(_stderr, 2, "argv0:     %s\n", uVar11);
               lVar26 = (long)_optind;
            }

            *(char**)( &local_150._flags + (long)(int)lVar26 * 2 ) = local_138;
         }

         if (dev_debug != false) {
            __fprintf_chk(_stderr, 2, "executing: %s\n", pcVar23);
            for (lVar26 = (long)_optind; (int)lVar26 < local_144; lVar26 = lVar26 + 1) {
               if (dev_debug != false) {
                  uVar11 = quote(*(undefined8*)( &local_150._flags + lVar26 * 2 ));
                  __fprintf_chk(_stderr, 2, "   arg[%d]= %s\n", (int)lVar26 - _optind, uVar11);
               }

            }

            lVar26 = (long)_optind;
         }

         execvp(pcVar23, (char**)( &local_150._flags + lVar26 * 2 ));
         piVar15 = __errno_location();
         if (*piVar15 == 2) {
            uVar11 = quote(pcVar23);
            error(0, *piVar15, &_LC85, uVar11);
            pcVar23 = strpbrk(pcVar23, " \t\n\v\f\r");
            if (pcVar23 != (char*)0x0) {
               uVar11 = dcgettext(0, "use -[v]S to pass options in shebang lines", 5);
               error(0, 0, uVar11);
            }

            iVar5 = 0x7f;
         }
 else {
            uVar11 = quote(pcVar23);
            error(0, *piVar15, &_LC85, uVar11);
            iVar5 = 0x7e;
         }

         LAB_0010222f:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return iVar5;
      }

      iVar6 = 1;
      sigemptyset((sigset_t*)&act);
      iVar4 = sigprocmask(0, (sigset_t*)0x0, (sigset_t*)&act);
      iVar5 = (int)pcVar23;
      pcVar24 = "failed to get signal process mask";
      if (iVar4 == 0) {
         do {
            iVar5 = sigismember((sigset_t*)&block_signals, iVar6);
            if (iVar5 == 0) {
               iVar5 = sigismember((sigset_t*)&unblock_signals, iVar6);
               if (iVar5 != 0) {
                  pcVar24 = "UNBLOCK";
                  sigdelset((sigset_t*)&act, iVar6);
                  if (dev_debug != false) goto LAB_001028a8;
               }

            }
 else {
               sigaddset((sigset_t*)&act, iVar6);
               if (dev_debug != false) {
                  pcVar24 = "BLOCK";
                  LAB_001028a8:pFVar18 = (FILE*)signame;
                  iVar5 = sig2str(iVar6, pFVar18);
                  if (iVar5 != 0) {
                     pcVar23 = (char*)0x13;
                     __snprintf_chk(pFVar18, 0x13, 2, 0x13, "SIG%d", iVar6);
                  }

                  if (dev_debug != false) {
                     __fprintf_chk(_stderr, 2, "signal %s (%d) mask set to %s\n", pFVar18, iVar6, pcVar24);
                     pcVar23 = (char*)pFVar18;
                  }

               }

            }

            iVar5 = (int)pcVar23;
            iVar6 = iVar6 + 1;
         }
 while ( iVar6 != 0x41 );
         iVar4 = sigprocmask(2, (sigset_t*)&act, (sigset_t*)0x0);
         if (iVar4 == 0) goto LAB_001024f4;
         pcVar24 = "failed to set signal process mask";
      }

      uVar11 = dcgettext(0, pcVar24, 5);
      piVar15 = __errno_location();
      cVar32 = '\0';
      cVar30 = '\0';
      iVar4 = error(0x7d, *piVar15, uVar11);
      LAB_001029a8:if (cVar32 != cVar30) goto switchD_00101a4f_caseD_31;
      if (iVar4 < 0xe) {
         if (iVar4 < 9) {
            if (iVar4 == -0x82) {
               /* WARNING: Subroutine does not return */
               usage(0);
            }

            goto switchD_00101a4f_caseD_31;
         }

      }
 else if (iVar4 != 0x20) goto switchD_00101a4f_caseD_31;
      uVar11 = dcgettext(0, "invalid option -- \'%c\'", 5);
      error(0, 0, uVar11, iVar5);
      pcVar24 = "use -[v]S to pass options in shebang lines";
   }

   LAB_001026d9:uVar11 = dcgettext(0, pcVar24, 5);
   error(0, 0, uVar11);
   switchD_00101a4f_caseD_31:/* WARNING: Subroutine does not return */usage(0x7d);
   switchD_00101a4f_caseD_83:report_signal_handling = true;
   goto LAB_00101a00;
   code_r0x00101d4e:if (cVar30 != '}') {
      LAB_00101eb0:uVar11 = dcgettext(0, "only ${VARNAME} expansion is supported, error at: %s", 5);
      iVar4 = error(0x7d, 0, uVar11, pcVar24);
      goto LAB_00101ee0;
   }

   if (vnlen <= (long)( pcVar19 + ( -2 - (long)pcVar24 ) )) {
      free(varname);
      varname = (char*)xpalloc(0, &vnlen, pcVar19 + ( ( -1 - (long)pcVar24 ) - vnlen ), 0xffffffffffffffff);
   }

   __name = varname;
   memcpy(varname, pcVar24 + 2, (size_t)( pcVar19 + ( -2 - (long)pcVar24 ) ));
   __name[(long)( pcVar19 + ( -2 - (long)pcVar24 ) )] = '\0';
   psVar14 = (splitbuf*)getenv(__name);
   if (psVar14 == (splitbuf*)0x0) {
      if (dev_debug != false) {
         __fprintf_chk(_stderr, 2, "replacing ${%s} with null string\n");
      }

   }
 else {
      if (ss.sep != false) {
         check_start_new_arg(&ss);
      }

      if (dev_debug != false) {
         quote(psVar14);
         __fprintf_chk(_stderr, 2, "expanding ${%s} into %s\n");
      }

      cVar30 = *(char*)&psVar14.argv;
      psVar22 = psVar14;
      while (cVar30 != '\0') {
         psVar22 = (splitbuf*)( (long)&psVar22.argv + 1 );
         splitbuf_append_byte(&ss, cVar30);
         psVar14 = &ss;
         cVar30 = *(char*)&psVar22.argv;
      }
;
   }

   pcVar24 = strchr(pcVar24, 0x7d);
   pcVar24 = pcVar24 + 1;
   LAB_00101bd0:cVar30 = *pcVar24;
   if (cVar30 == '\0') goto code_r0x00101bd8;
   goto LAB_00101b70;
   code_r0x00101bd8:psVar14 = (splitbuf*)(ulong)uVar20;
   if (( bVar28 ) || ( bVar3 )) {
      pcVar23 = "no terminating quote in -S string";
      LAB_00102a86:uVar11 = dcgettext(0, pcVar23, 5);
      error(0x7d, 0, uVar11);
      goto LAB_00102a9e;
   }

   LAB_00101bf4:splitbuf_append_byte(&ss, '\0');
   local_144 = ss.argc;
   ppcVar21 = ss.argv;
   if (ss.argc < 2) {
      *ss.argv = *(char**)local_150;
   }
 else {
      ppcVar27 = ss.argv + 2;
      ppcVar8 = ss.argv + 1;
      do {
         ppcVar9 = ppcVar8 + 1;
         *ppcVar8 = *ppcVar8 + ss.half_alloc * 8 + (long)ss.argv;
         ppcVar8 = ppcVar9;
      }
 while ( ppcVar9 != ppcVar27 + ( ss.argc - 2 ) );
      bVar28 = dev_debug != false;
      *ss.argv = *(char**)local_150;
      if (bVar28) {
         uVar11 = quote(pcVar23);
         __fprintf_chk(_stderr, 2, "split -S:  %s\n", uVar11);
         if (dev_debug != false) {
            uVar11 = quote(ppcVar21[1]);
            __fprintf_chk(_stderr, 2, " into:    %s\n", uVar11);
         }

         if (local_144 != 2) {
            do {
               if (dev_debug != false) {
                  uVar11 = quote(*ppcVar27);
                  __fprintf_chk(_stderr, 2, "     &    %s\n", uVar11);
               }

               ppcVar27 = ppcVar27 + 1;
            }
 while ( ppcVar27 != ppcVar21 + ( ulong )(local_144 - 3) + 3 );
         }

      }

   }

   memcpy(ppcVar21 + local_144, &local_150._flags + (long)_optind * 2, (long)(int)( uVar20 + 1 ) << 3);
   local_144 = uVar20 + local_144;
   local_150 = (FILE*)ppcVar21;
   _optind = 0;
   goto LAB_00101a00;
   LAB_00102a9e:*(undefined1*)&psVar14.argv = 0;
   uVar11 = quote(*(undefined8*)( &local_150._flags + (long)_optind * 2 ));
   pcVar23 = "cannot set %s";
   goto LAB_001029f0;
}

