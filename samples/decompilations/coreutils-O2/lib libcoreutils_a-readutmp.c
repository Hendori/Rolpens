
long * add_utmp(long *param_1,uint param_2,void *param_3,ulong param_4,void *param_5,ulong param_6,
               long param_7,long param_8,size_t param_9,long param_10,void *param_11,ulong param_12,
               void *param_13,ulong param_14,int param_15,undefined4 param_16,long param_17,
               long param_18,undefined8 param_19,undefined4 param_20,undefined4 param_21)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  
  uVar3 = param_16;
  lVar10 = param_10 + (param_8 * -0x48 - param_9);
  lVar2 = param_14 + param_12 + param_4 + 4 + param_6;
  lVar7 = lVar2 + 0x48;
  if (lVar10 < lVar7) {
    lVar9 = param_10 - param_9;
    param_7 = xpalloc(param_7,&param_10,lVar7 - lVar10,0xffffffffffffffff,1);
    memmove((void *)((param_7 - param_9) + param_10),(void *)(param_7 + lVar9),param_9);
  }
  lVar7 = param_7 + param_10;
  plVar1 = (long *)(param_7 + param_8 * 0x48);
  *(undefined1 *)((lVar7 - param_9) + -1) = 0;
  pvVar5 = memcpy((void *)((lVar7 - param_9) + ~param_4),param_3,param_4);
  *plVar1 = (long)pvVar5;
  *(undefined1 *)((long)pvVar5 + -1) = 0;
  pvVar5 = memcpy((void *)((long)pvVar5 + ~param_6),param_5,param_6);
  plVar1[1] = (long)pvVar5;
  *(undefined1 *)((long)pvVar5 + -1) = 0;
  pvVar5 = memcpy((void *)((long)pvVar5 + ~param_12),param_11,param_12);
  plVar1[2] = (long)pvVar5;
  *(undefined1 *)((long)pvVar5 + -1) = 0;
  pvVar5 = memcpy((void *)((long)pvVar5 + ~param_14),param_13,param_14);
  plVar1[3] = (long)pvVar5;
  *(int *)((long)plVar1 + 0x34) = (int)param_19;
  *(int *)(plVar1 + 6) = param_15;
  *(undefined4 *)((long)plVar1 + 0x3c) = param_20;
  sVar11 = (short)uVar3;
  *(short *)(plVar1 + 7) = sVar11;
  *(undefined4 *)(plVar1 + 8) = param_21;
  pcVar8 = (char *)*plVar1;
  plVar1[4] = param_17;
  plVar1[5] = param_18;
  if ((param_2 & 4) == 0) {
    if (((param_2 & 8) != 0) && (sVar11 == 2)) goto LAB_00100186;
    if ((*pcVar8 == '\0') || (sVar11 != 7)) goto LAB_001001cd;
    if (((param_2 & 1) != 0) && (0 < param_15)) {
      iVar4 = kill(param_15,0);
      if ((iVar4 < 0) && (piVar6 = __errno_location(), *piVar6 == 3)) goto LAB_00100186;
      pcVar8 = (char *)*plVar1;
      pvVar5 = (void *)plVar1[3];
    }
  }
  else {
    if ((sVar11 != 2) || ((param_2 & 8) != 0)) goto LAB_00100186;
LAB_001001cd:
    if ((param_2 & 2) != 0) goto LAB_00100186;
  }
  plVar1[1] = plVar1[1] - lVar7;
  plVar1[3] = (long)pvVar5 - lVar7;
  plVar1[2] = plVar1[2] - lVar7;
  *plVar1 = (long)pcVar8 - lVar7;
  param_8 = param_8 + 1;
  param_9 = lVar2 + param_9;
LAB_00100186:
  *param_1 = param_7;
  param_1[1] = param_8;
  param_1[2] = param_9;
  param_1[3] = param_10;
  return param_1;
}



void extract_trimmed_name(undefined8 *param_1)

{
  char *__s;
  size_t sVar1;
  char *pcVar2;
  
  __s = (char *)*param_1;
  sVar1 = strlen(__s);
  pcVar2 = __s + sVar1;
  if (__s < pcVar2) {
    do {
      if (pcVar2[-1] != ' ') break;
      pcVar2 = pcVar2 + -1;
    } while (__s != pcVar2);
  }
  ximemdup0(__s,(long)pcVar2 - (long)__s);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 read_utmp(char *param_1,long *param_2,undefined8 *param_3,uint param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  __pid_t _Var5;
  int iVar6;
  utmpx *puVar7;
  long lVar8;
  size_t sVar9;
  size_t sVar10;
  size_t sVar11;
  size_t sVar12;
  long *plVar13;
  long *plVar14;
  FILE *__stream;
  long lVar15;
  __dev_t _Var16;
  long lVar17;
  char *pcVar18;
  char **ppcVar19;
  char *pcVar20;
  long *plVar21;
  long in_FS_OFFSET;
  long local_228;
  undefined8 uStack_220;
  long local_210;
  long local_1a0;
  long local_198;
  long *local_178;
  long lStack_170;
  undefined8 local_168;
  long lStack_160;
  timespec local_158;
  long local_148;
  long lStack_140;
  long *local_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  char *local_118 [4];
  stat local_f8;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_4 & 4) != 0) && ((param_4 & 10) != 0)) {
    local_228 = 0;
    plVar21 = (long *)0x0;
    goto LAB_00100682;
  }
  utmpxname(param_1);
  setutxent();
  iVar6 = strcmp(param_1,"/var/run/utmp");
  local_198 = 0;
  local_1a0 = 0;
  local_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  plVar21 = (long *)0x0;
  while (puVar7 = getutxent(), puVar7 != (utmpx *)0x0) {
    while( true ) {
      lVar8 = (long)*(int *)((long)&puVar7->ut_session + 4);
      _Var5 = puVar7->ut_pid;
      sVar2 = (puVar7->ut_exit).e_exit;
      lVar17 = puVar7->ut_session;
      sVar3 = (puVar7->ut_exit).e_termination;
      lVar15 = (long)((int)(puVar7->ut_tv).tv_sec * 1000);
      sVar4 = puVar7->ut_type;
      sVar9 = strnlen(puVar7->ut_host,0x100);
      sVar10 = strnlen(puVar7->ut_line,0x20);
      sVar11 = strnlen(puVar7->ut_id,4);
      sVar12 = strnlen(puVar7->ut_user,0x20);
      lStack_130 = local_228;
      uStack_128 = uStack_220;
      lStack_120 = local_210;
      local_138 = plVar21;
      add_utmp(&local_138,param_4,puVar7->ut_user,sVar12,puVar7->ut_id,sVar11,plVar21,local_228,
               uStack_220,local_210,puVar7->ut_line,sVar10,puVar7->ut_host,sVar9,_Var5,(int)sVar4,
               lVar8,lVar15,(long)(int)lVar17,(int)sVar3,(int)sVar2);
      plVar21 = local_138;
      local_210 = lStack_120;
      local_228 = lStack_130;
      uStack_220 = uStack_128;
      if (((iVar6 != 0) || (*(long *)puVar7->ut_user != 0x6c6576656c6e7572)) ||
         (puVar7->ut_user[8] != '\0')) break;
      if (*(short *)puVar7->ut_line != 0x7e) {
        lVar8 = local_1a0;
        lVar15 = local_198;
      }
      local_198 = lVar15;
      puVar7 = getutxent();
      local_1a0 = lVar8;
      if (puVar7 == (utmpx *)0x0) goto LAB_00100610;
    }
  }
LAB_00100610:
  endutxent();
  if ((param_4 & 10) == 0) {
    if (iVar6 == 0) {
      lVar17 = 0;
      plVar14 = plVar21;
      if (0 < local_228) {
        do {
          if ((short)plVar14[7] == 2) {
            if ((plVar14[4] < 0x3d) && (local_1a0 != 0)) {
              plVar14[4] = local_1a0;
              plVar14[5] = local_198;
            }
            break;
          }
          lVar17 = lVar17 + 1;
          plVar14 = plVar14 + 9;
        } while (lVar17 != local_228);
        plVar14 = plVar21 + 7;
        lVar17 = 0;
        do {
          if ((short)*plVar14 == 2) goto LAB_00100736;
          lVar17 = lVar17 + 1;
          plVar14 = plVar14 + 9;
        } while (lVar17 != local_228);
      }
      ppcVar19 = local_118;
      local_118[0] = "/var/lib/systemd/random-seed";
      local_118[1] = "/var/lib/urandom/random-seed";
      local_118[2] = "/var/lib/random-seed";
      local_118[3] = PTR__LC0_00100c40;
      do {
        iVar6 = stat(*ppcVar19,&local_f8);
        if ((-1 < iVar6) && (0x42e576f6 < local_f8.st_mtim.tv_sec)) {
          lStack_120 = local_210;
          lStack_130 = local_228;
          uStack_128 = uStack_220;
          local_138 = plVar21;
          add_utmp(&local_178,param_4,"reboot",6,&_LC5,0,plVar21,local_228,uStack_220,local_210,
                   &_LC7,1,&_LC5,0,0,2,local_f8.st_mtim.tv_sec,local_f8.st_mtim.tv_nsec,0,0,0);
          local_138 = local_178;
          lStack_130 = lStack_170;
          uStack_128 = local_168;
          lStack_120 = lStack_160;
          local_210 = lStack_160;
          local_228 = lStack_170;
          uStack_220 = local_168;
          plVar21 = local_178;
          break;
        }
        ppcVar19 = ppcVar19 + 1;
      } while (&local_f8 != (stat *)ppcVar19);
    }
LAB_00100736:
    iVar6 = strcmp(param_1,"/var/run/utmp");
    if (iVar6 == 0) {
      if (0 < local_228) {
        plVar14 = plVar21 + 7;
        lVar17 = 0;
        do {
          if ((short)*plVar14 == 2) {
            local_210 = local_210 + (long)plVar21;
            goto LAB_00100650;
          }
          lVar17 = lVar17 + 1;
          plVar14 = plVar14 + 9;
        } while (lVar17 != local_228);
      }
      iVar6 = clock_gettime(7,&local_158);
      if (iVar6 < 0) {
        __stream = (FILE *)rpl_fopen("/proc/uptime",&_LC8);
        if (__stream != (FILE *)0x0) {
          sVar9 = fread_unlocked(local_68,1,0x20,__stream);
          rpl_fclose(__stream);
          if ((sVar9 != 0) && (local_68[sVar9] = '\0', (byte)(local_68[0] - 0x30U) < 10)) {
            _Var16 = 0;
            pcVar18 = local_68;
            do {
              pcVar20 = pcVar18;
              pcVar18 = pcVar20 + 1;
              _Var16 = (long)(char)(local_68[0] + -0x30) + _Var16 * 10;
              local_68[0] = *pcVar18;
            } while ((byte)(local_68[0] - 0x30U) < 10);
            if (local_68 < pcVar18) {
              local_158.tv_nsec = 0;
              local_158.tv_sec = _Var16;
              if (local_68[0] == '.') {
                pcVar20 = pcVar20 + 2;
                iVar6 = 9;
                do {
                  cVar1 = *pcVar20;
                  local_158.tv_nsec = local_158.tv_nsec * 10;
                  if ((byte)(cVar1 - 0x30U) < 10) {
                    pcVar20 = pcVar20 + 1;
                    local_158.tv_nsec = local_158.tv_nsec + (cVar1 + -0x30);
                  }
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
              }
              goto LAB_0010083a;
            }
          }
        }
        iVar6 = sysinfo((sysinfo *)&local_f8);
        if (iVar6 < 0) goto LAB_0010063a;
        local_158.tv_nsec = 0;
        local_158.tv_sec = local_f8.st_dev;
      }
LAB_0010083a:
      iVar6 = timespec_get(&local_148,1);
      if (iVar6 != 0) {
        if (lStack_140 < local_158.tv_nsec) {
          local_148 = local_148 + __LC10;
          lStack_140 = lStack_140 + _UNK_00100c38;
        }
        lStack_130 = local_228;
        uStack_128 = uStack_220;
        local_148 = local_148 - local_158.tv_sec;
        lStack_140 = lStack_140 - local_158.tv_nsec;
        lStack_120 = local_210;
        local_138 = plVar21;
        add_utmp(&local_178,param_4,"reboot",6,&_LC5,0,plVar21,local_228,uStack_220,local_210,&_LC7,
                 1,&_LC5,0,0,2,local_148,lStack_140,0,0,0);
        uStack_128 = local_168;
        lStack_120 = lStack_160;
        local_138 = local_178;
        lStack_130 = lStack_170;
        local_210 = lStack_160;
        local_228 = lStack_170;
        plVar21 = local_178;
      }
    }
  }
LAB_0010063a:
  local_210 = local_210 + (long)plVar21;
  if (0 < local_228) {
LAB_00100650:
    plVar14 = plVar21;
    do {
      plVar13 = plVar14 + 9;
      *plVar14 = *plVar14 + local_210;
      plVar14[1] = plVar14[1] + local_210;
      plVar14[2] = plVar14[2] + local_210;
      plVar14[3] = plVar14[3] + local_210;
      plVar14 = plVar13;
    } while (plVar13 != plVar21 + local_228 * 9);
  }
LAB_00100682:
  *param_2 = local_228;
  *param_3 = plVar21;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


