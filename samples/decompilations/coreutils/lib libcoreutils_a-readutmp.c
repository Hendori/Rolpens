
/* WARNING: Unknown calling convention */

utmp_alloc *
add_utmp(utmp_alloc a,int options,char *user,idx_t user_len,char *id,idx_t id_len,char *line,
        idx_t line_len,char *host,idx_t host_len,pid_t pid,short type,timespec ts,long session,
        int termination,int exit)

{
  gl_utmp *pgVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  long lVar7;
  utmp_alloc *in_RDI;
  long lVar8;
  long lVar9;
  
  lVar9 = a.alloc_bytes + (a.filled * -0x48 - a.string_bytes);
  lVar2 = host_len + line_len + user_len + 4 + id_len;
  lVar7 = lVar2 + 0x48;
  if (lVar9 < lVar7) {
    lVar8 = a.alloc_bytes - a.string_bytes;
    a.utmp = (gl_utmp *)xpalloc(a.utmp,&a.alloc_bytes,lVar7 - lVar9,0xffffffffffffffff,1);
    memmove((void *)((long)a.utmp + (a.alloc_bytes - a.string_bytes)),(void *)((long)a.utmp + lVar8)
            ,a.string_bytes);
  }
  lVar7 = (long)&(a.utmp)->ut_user + a.alloc_bytes;
  pgVar1 = a.utmp + a.filled;
  *(undefined1 *)((lVar7 - a.string_bytes) + -1) = 0;
  pcVar4 = (char *)memcpy((void *)((lVar7 - a.string_bytes) + ~user_len),user,user_len);
  pgVar1->ut_user = pcVar4;
  pcVar4[-1] = '\0';
  pcVar4 = (char *)memcpy(pcVar4 + ~id_len,id,id_len);
  pgVar1->ut_id = pcVar4;
  pcVar4[-1] = '\0';
  pcVar4 = (char *)memcpy(pcVar4 + ~line_len,line,line_len);
  pgVar1->ut_line = pcVar4;
  pcVar4[-1] = '\0';
  pcVar5 = (char *)memcpy(pcVar4 + ~host_len,host,host_len);
  pgVar1->ut_host = pcVar5;
  pgVar1->ut_session = (pid_t)session;
  pgVar1->ut_pid = pid;
  (pgVar1->ut_exit).e_termination = termination;
  pgVar1->ut_type = type;
  (pgVar1->ut_exit).e_exit = exit;
  pcVar4 = pgVar1->ut_user;
  (pgVar1->ut_ts).tv_sec = ts.tv_sec;
  (pgVar1->ut_ts).tv_nsec = ts.tv_nsec;
  if ((options & 4U) == 0) {
    if (((options & 8U) != 0) && (type == 2)) goto LAB_00100186;
    if ((*pcVar4 == '\0') || (type != 7)) goto LAB_001001cd;
    if (((options & 1U) != 0) && (0 < pid)) {
      iVar3 = kill(pid,0);
      if ((iVar3 < 0) && (piVar6 = __errno_location(), *piVar6 == 3)) goto LAB_00100186;
      pcVar4 = pgVar1->ut_user;
      pcVar5 = pgVar1->ut_host;
    }
  }
  else {
    if ((type != 2) || ((options & 8U) != 0)) goto LAB_00100186;
LAB_001001cd:
    if ((options & 2U) != 0) goto LAB_00100186;
  }
  pgVar1->ut_id = pgVar1->ut_id + -lVar7;
  pgVar1->ut_host = pcVar5 + -lVar7;
  pgVar1->ut_line = pgVar1->ut_line + -lVar7;
  pgVar1->ut_user = pcVar4 + -lVar7;
  a.filled = a.filled + 1;
  a.string_bytes = lVar2 + a.string_bytes;
LAB_00100186:
  in_RDI->utmp = a.utmp;
  in_RDI->filled = a.filled;
  in_RDI->string_bytes = a.string_bytes;
  in_RDI->alloc_bytes = a.alloc_bytes;
  return in_RDI;
}



/* WARNING: Unknown calling convention */

char * extract_trimmed_name(STRUCT_UTMP *ut)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  
  __s = ut->ut_user;
  sVar1 = strlen(__s);
  pcVar2 = __s + sVar1;
  if (__s < pcVar2) {
    do {
      if (pcVar2[-1] != ' ') break;
      pcVar2 = pcVar2 + -1;
    } while (__s != pcVar2);
  }
  pcVar2 = (char *)ximemdup0(__s,(long)pcVar2 - (long)__s);
  return pcVar2;
}



/* WARNING: Removing unreachable block (ram,0x001006ed) */
/* WARNING: Removing unreachable block (ram,0x001006f4) */
/* WARNING: Removing unreachable block (ram,0x001006fb) */
/* WARNING: Removing unreachable block (ram,0x00100a41) */
/* WARNING: Removing unreachable block (ram,0x001006e0) */
/* WARNING: Removing unreachable block (ram,0x00100710) */
/* WARNING: Removing unreachable block (ram,0x0010072d) */
/* WARNING: Removing unreachable block (ram,0x00100720) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int read_utmp(char *file,idx_t *n_entries,STRUCT_UTMP **utmp_buf,int options)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short type;
  int iVar4;
  pid_t pid;
  long lVar5;
  utmp_alloc a;
  timespec ts;
  timespec ts_00;
  timespec ts_01;
  __time_t _Var6;
  int iVar7;
  utmpx *puVar8;
  size_t sVar9;
  size_t line_len;
  size_t id_len;
  size_t user_len;
  STRUCT_UTMP *pSVar10;
  STRUCT_UTMP *pSVar11;
  short *psVar12;
  FILE *__stream;
  long lVar13;
  char *pcVar14;
  char **ppcVar15;
  char *pcVar16;
  STRUCT_UTMP *pSVar17;
  long in_FS_OFFSET;
  long local_228;
  undefined8 uStack_220;
  long local_210;
  STRUCT_UTMP *local_178;
  long lStack_170;
  undefined8 local_168;
  long lStack_160;
  timespec uptime;
  timespec result;
  char *boot_touched_files [4];
  stat statbuf;
  char buf [33];
  
  lVar5 = *(long *)(in_FS_OFFSET + 0x28);
  if (((options & 4U) != 0) && ((options & 10U) != 0)) {
    local_228 = 0;
    pSVar17 = (STRUCT_UTMP *)0x0;
    goto LAB_00100682;
  }
  pSVar17 = (STRUCT_UTMP *)0x0;
  utmpxname(file);
  setutxent();
  iVar7 = strcmp(file,"/var/run/utmp");
  local_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  while (puVar8 = getutxent(), puVar8 != (utmpx *)0x0) {
    while( true ) {
      iVar4 = *(int *)((long)&puVar8->ut_session + 4);
      pid = puVar8->ut_pid;
      sVar2 = (puVar8->ut_exit).e_exit;
      lVar13 = puVar8->ut_session;
      sVar3 = (puVar8->ut_exit).e_termination;
      _Var6 = (puVar8->ut_tv).tv_sec;
      type = puVar8->ut_type;
      sVar9 = strnlen(puVar8->ut_host,0x100);
      line_len = strnlen(puVar8->ut_line,0x20);
      id_len = strnlen(puVar8->ut_id,4);
      user_len = strnlen(puVar8->ut_user,0x20);
      ts.tv_nsec = (long)((int)_Var6 * 1000);
      ts.tv_sec = (long)iVar4;
      add_utmp((utmp_alloc)ZEXT1632(ZEXT816(0)),options,puVar8->ut_user,user_len,puVar8->ut_id,
               id_len,puVar8->ut_line,line_len,puVar8->ut_host,sVar9,pid,type,ts,(long)(int)lVar13,
               (int)sVar3,(int)sVar2);
      if (((iVar7 != 0) || (*(long *)puVar8->ut_user != 0x6c6576656c6e7572)) ||
         (puVar8->ut_user[8] != '\0')) break;
      puVar8 = getutxent();
      if (puVar8 == (utmpx *)0x0) goto LAB_00100610;
    }
  }
LAB_00100610:
  endutxent();
  if ((options & 10U) == 0) {
    if (iVar7 == 0) {
      ppcVar15 = boot_touched_files;
      boot_touched_files[0] = "/var/lib/systemd/random-seed";
      boot_touched_files[1] = "/var/lib/urandom/random-seed";
      boot_touched_files[2] = "/var/lib/random-seed";
      boot_touched_files[3] = PTR__LC0_00100c40;
      do {
        iVar7 = stat(*ppcVar15,(stat *)&statbuf);
        if ((-1 < iVar7) && (0x42e576f6 < statbuf.st_mtim.tv_sec)) {
          ts_01.tv_nsec = statbuf.st_mtim.tv_nsec;
          ts_01.tv_sec = statbuf.st_mtim.tv_sec;
          add_utmp((utmp_alloc)ZEXT1632(ZEXT816(0)),options,"reboot",6,"",0,"~",1,"",0,0,2,ts_01,0,0
                   ,0);
          local_210 = lStack_160;
          local_228 = lStack_170;
          uStack_220 = local_168;
          pSVar17 = local_178;
          break;
        }
        ppcVar15 = ppcVar15 + 1;
      } while (&statbuf != (stat *)ppcVar15);
    }
    iVar7 = strcmp(file,"/var/run/utmp");
    if (iVar7 == 0) {
      if (0 < local_228) {
        psVar12 = &pSVar17->ut_type;
        lVar13 = 0;
        do {
          if (*psVar12 == 2) {
            local_210 = (long)&pSVar17->ut_user + local_210;
            goto LAB_00100650;
          }
          lVar13 = lVar13 + 1;
          psVar12 = psVar12 + 0x24;
        } while (lVar13 != local_228);
      }
      iVar7 = clock_gettime(7,(timespec *)&uptime);
      if (iVar7 < 0) {
        __stream = (FILE *)rpl_fopen("/proc/uptime",&_LC8);
        if (__stream != (FILE *)0x0) {
          sVar9 = fread_unlocked(buf,1,0x20,__stream);
          rpl_fclose(__stream);
          if ((sVar9 != 0) && (buf[sVar9] = '\0', (byte)(buf[0] - 0x30U) < 10)) {
            lVar13 = 0;
            pcVar14 = buf;
            do {
              pcVar16 = pcVar14;
              pcVar14 = pcVar16 + 1;
              lVar13 = (long)(char)(buf[0] + -0x30) + lVar13 * 10;
              buf[0] = *pcVar14;
            } while ((byte)(buf[0] - 0x30U) < 10);
            if (buf < pcVar14) {
              uptime.tv_nsec = 0;
              uptime.tv_sec = lVar13;
              if (buf[0] == '.') {
                pcVar16 = pcVar16 + 2;
                iVar7 = 9;
                do {
                  cVar1 = *pcVar16;
                  uptime.tv_nsec = uptime.tv_nsec * 10;
                  if ((byte)(cVar1 - 0x30U) < 10) {
                    pcVar16 = pcVar16 + 1;
                    uptime.tv_nsec = uptime.tv_nsec + (cVar1 + -0x30);
                  }
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              goto LAB_0010083a;
            }
          }
        }
        iVar7 = sysinfo((sysinfo *)&statbuf);
        if (iVar7 < 0) goto LAB_0010063a;
        uptime.tv_nsec = 0;
        uptime.tv_sec = statbuf.st_dev;
      }
LAB_0010083a:
      iVar7 = timespec_get(&result,1);
      if (iVar7 != 0) {
        if (result.tv_nsec < uptime.tv_nsec) {
          result.tv_sec = result.tv_sec + __LC10;
          result.tv_nsec = result.tv_nsec + _UNK_00100c38;
        }
        result.tv_sec = result.tv_sec - uptime.tv_sec;
        result.tv_nsec = result.tv_nsec - uptime.tv_nsec;
        a.filled = local_228;
        a.utmp = pSVar17;
        a.string_bytes = uStack_220;
        a.alloc_bytes = local_210;
        ts_00.tv_nsec = result.tv_nsec;
        ts_00.tv_sec = result.tv_sec;
        add_utmp(a,options,"reboot",6,"",0,"~",1,"",0,0,2,ts_00,0,0,0);
        local_210 = lStack_160;
        local_228 = lStack_170;
        pSVar17 = local_178;
      }
    }
  }
LAB_0010063a:
  local_210 = (long)&pSVar17->ut_user + local_210;
  if (0 < local_228) {
LAB_00100650:
    pSVar10 = pSVar17;
    do {
      pSVar11 = pSVar10 + 1;
      pSVar10->ut_user = pSVar10->ut_user + local_210;
      pSVar10->ut_id = pSVar10->ut_id + local_210;
      pSVar10->ut_line = pSVar10->ut_line + local_210;
      pSVar10->ut_host = pSVar10->ut_host + local_210;
      pSVar10 = pSVar11;
    } while (pSVar11 != pSVar17 + local_228);
  }
LAB_00100682:
  *n_entries = local_228;
  *utmp_buf = pSVar17;
  if (lVar5 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}


