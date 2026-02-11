
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
  short sVar1;
  short sVar2;
  short sVar3;
  __pid_t _Var4;
  __time_t _Var5;
  char *pcVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  size_t sVar10;
  utmpx *puVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  FILE *__stream;
  size_t sVar15;
  long lVar16;
  __dev_t _Var17;
  long lVar18;
  long *plVar19;
  char *pcVar20;
  char **ppcVar21;
  long in_FS_OFFSET;
  long local_210;
  long local_208;
  undefined8 uStack_200;
  long local_198;
  long local_190;
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
    local_208 = 0;
    plVar19 = (long *)0x0;
    goto LAB_00100948;
  }
  utmpxname(param_1);
  setutxent();
  iVar7 = strcmp(param_1,"/var/run/utmp");
  if (iVar7 == 0) {
    local_210 = 0;
    local_190 = 0;
    local_198 = 0;
    local_208 = 0;
    uStack_200 = 0;
    plVar19 = (long *)0x0;
    while (puVar11 = getutxent(), puVar11 != (utmpx *)0x0) {
      while( true ) {
        lVar12 = (long)*(int *)((long)&puVar11->ut_session + 4);
        sVar1 = puVar11->ut_type;
        lVar18 = puVar11->ut_session;
        sVar2 = (puVar11->ut_exit).e_exit;
        sVar3 = (puVar11->ut_exit).e_termination;
        _Var4 = puVar11->ut_pid;
        lVar16 = (long)((int)(puVar11->ut_tv).tv_sec * 1000);
        sVar15 = strnlen(puVar11->ut_host,0x100);
        sVar8 = strnlen(puVar11->ut_line,0x20);
        sVar9 = strnlen(puVar11->ut_id,4);
        sVar10 = strnlen(puVar11->ut_user,0x20);
        lStack_130 = local_208;
        uStack_128 = uStack_200;
        lStack_120 = local_210;
        local_138 = plVar19;
        add_utmp(&local_138,param_4,puVar11->ut_user,sVar10,puVar11->ut_id,sVar9,plVar19,local_208,
                 uStack_200,local_210,puVar11->ut_line,sVar8,puVar11->ut_host,sVar15,_Var4,
                 (int)sVar1,lVar12,lVar16,(long)(int)lVar18,(int)sVar3,(int)sVar2);
        plVar19 = local_138;
        local_210 = lStack_120;
        local_208 = lStack_130;
        uStack_200 = uStack_128;
        if ((*(long *)puVar11->ut_user != 0x6c6576656c6e7572) || (puVar11->ut_user[8] != '\0'))
        break;
        if (*(short *)puVar11->ut_line != 0x7e) {
          lVar12 = local_198;
          lVar16 = local_190;
        }
        local_190 = lVar16;
        puVar11 = getutxent();
        local_198 = lVar12;
        if (puVar11 == (utmpx *)0x0) goto LAB_00100890;
      }
    }
LAB_00100890:
    endutxent();
    if ((param_4 & 10) == 0) {
      lVar18 = 0;
      plVar14 = plVar19;
      if (0 < local_208) {
        do {
          if ((short)plVar14[7] == 2) {
            if ((plVar14[4] < 0x3d) && (local_198 != 0)) {
              plVar14[4] = local_198;
              plVar14[5] = local_190;
            }
            break;
          }
          lVar18 = lVar18 + 1;
          plVar14 = plVar14 + 9;
        } while (lVar18 != local_208);
        plVar14 = plVar19 + 7;
        lVar18 = 0;
        do {
          if ((short)*plVar14 == 2) goto LAB_001005bc;
          lVar18 = lVar18 + 1;
          plVar14 = plVar14 + 9;
        } while (lVar18 != local_208);
      }
      ppcVar21 = local_118;
      local_118[0] = "/var/lib/systemd/random-seed";
      local_118[1] = "/var/lib/urandom/random-seed";
      local_118[2] = "/var/lib/random-seed";
      local_118[3] = PTR__LC0_00100fd0;
      do {
        iVar7 = stat(*ppcVar21,&local_f8);
        if ((-1 < iVar7) && (0x42e576f6 < local_f8.st_mtim.tv_sec)) {
          lStack_120 = local_210;
          lStack_130 = local_208;
          uStack_128 = uStack_200;
          local_138 = plVar19;
          add_utmp(&local_178,param_4,"reboot",6,&_LC5,0,plVar19,local_208,uStack_200,local_210,
                   &_LC7,1,&_LC5,0,0,2,local_f8.st_mtim.tv_sec,local_f8.st_mtim.tv_nsec,0,0,0);
          local_138 = local_178;
          lStack_130 = lStack_170;
          uStack_128 = local_168;
          lStack_120 = lStack_160;
          local_210 = lStack_160;
          local_208 = lStack_170;
          uStack_200 = local_168;
          plVar19 = local_178;
          break;
        }
        ppcVar21 = ppcVar21 + 1;
      } while (&local_f8 != (stat *)ppcVar21);
      goto LAB_001005bc;
    }
  }
  else {
    local_198._0_4_ = param_4 & 10;
    local_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    plVar19 = (long *)0x0;
    while (puVar11 = getutxent(), puVar11 != (utmpx *)0x0) {
      sVar1 = puVar11->ut_type;
      _Var4 = puVar11->ut_pid;
      sVar2 = (puVar11->ut_exit).e_exit;
      _Var5 = (puVar11->ut_tv).tv_sec;
      sVar3 = (puVar11->ut_exit).e_termination;
      lVar18 = puVar11->ut_session;
      sVar15 = strnlen(puVar11->ut_host,0x100);
      sVar8 = strnlen(puVar11->ut_line,0x20);
      sVar9 = strnlen(puVar11->ut_id,4);
      sVar10 = strnlen(puVar11->ut_user,0x20);
      lStack_130 = local_208;
      uStack_128 = uStack_200;
      lStack_120 = local_210;
      local_138 = plVar19;
      add_utmp(&local_138,param_4,puVar11->ut_user,sVar10,puVar11->ut_id,sVar9,plVar19,local_208,
               uStack_200,local_210,puVar11->ut_line,sVar8,puVar11->ut_host,sVar15,_Var4,(int)sVar1,
               (long)*(int *)((long)&puVar11->ut_session + 4),(long)((int)_Var5 * 1000),
               (long)(int)lVar18,(int)sVar3,(int)sVar2);
      local_210 = lStack_120;
      local_208 = lStack_130;
      uStack_200 = uStack_128;
      plVar19 = local_138;
    }
    endutxent();
    if ((uint)local_198 == 0) {
LAB_001005bc:
      iVar7 = strcmp(param_1,"/var/run/utmp");
      if (iVar7 == 0) {
        if (0 < local_208) {
          plVar14 = plVar19 + 7;
          lVar18 = 0;
          do {
            if ((short)*plVar14 == 2) {
              local_210 = local_210 + (long)plVar19;
              goto LAB_001008cd;
            }
            lVar18 = lVar18 + 1;
            plVar14 = plVar14 + 9;
          } while (lVar18 != local_208);
        }
        iVar7 = clock_gettime(7,&local_158);
        if (iVar7 < 0) {
          __stream = (FILE *)rpl_fopen("/proc/uptime",&_LC8);
          if (__stream != (FILE *)0x0) {
            sVar15 = fread_unlocked(local_68,1,0x20,__stream);
            rpl_fclose(__stream);
            if ((sVar15 != 0) && (local_68[sVar15] = '\0', (byte)(local_68[0] - 0x30U) < 10)) {
              _Var17 = 0;
              pcVar6 = local_68;
              do {
                pcVar20 = pcVar6;
                _Var17 = (long)(char)(local_68[0] + -0x30) + _Var17 * 10;
                local_68[0] = pcVar20[1];
                pcVar6 = pcVar20 + 1;
              } while ((byte)(local_68[0] - 0x30U) < 10);
              if (local_68 < pcVar20 + 1) {
                local_158.tv_nsec = 0;
                local_158.tv_sec = _Var17;
                if ((local_68[0] == '.') && ((byte)(pcVar20[2] - 0x30U) < 10)) {
                  lVar18 = (long)(pcVar20[2] + -0x30);
                  local_158.tv_nsec = lVar18 * 100000000;
                  if ((byte)(pcVar20[3] - 0x30U) < 10) {
                    lVar18 = (long)(pcVar20[3] + -0x30) + lVar18 * 10;
                    local_158.tv_nsec = lVar18 * 10000000;
                    if ((byte)(pcVar20[4] - 0x30U) < 10) {
                      lVar18 = (long)(pcVar20[4] + -0x30) + lVar18 * 10;
                      local_158.tv_nsec = lVar18 * 1000000;
                      if ((byte)(pcVar20[5] - 0x30U) < 10) {
                        lVar18 = (long)(pcVar20[5] + -0x30) + lVar18 * 10;
                        local_158.tv_nsec = lVar18 * 100000;
                        if ((byte)(pcVar20[6] - 0x30U) < 10) {
                          lVar18 = (long)(pcVar20[6] + -0x30) + lVar18 * 10;
                          local_158.tv_nsec = lVar18 * 10000;
                          if ((byte)(pcVar20[7] - 0x30U) < 10) {
                            lVar18 = (long)(pcVar20[7] + -0x30) + lVar18 * 10;
                            local_158.tv_nsec = lVar18 * 1000;
                            if ((byte)(pcVar20[8] - 0x30U) < 10) {
                              local_158.tv_nsec = (long)(pcVar20[8] + -0x30) + lVar18 * 10;
                              if ((byte)(pcVar20[9] - 0x30U) < 10) {
                                local_158.tv_nsec =
                                     ((long)(pcVar20[9] + -0x30) + local_158.tv_nsec * 10) * 10;
                                if ((byte)(pcVar20[10] - 0x30U) < 10) {
                                  local_158.tv_nsec = local_158.tv_nsec + (pcVar20[10] + -0x30);
                                }
                              }
                              else {
                                local_158.tv_nsec = local_158.tv_nsec * 100;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_00100aba;
              }
            }
          }
          iVar7 = sysinfo((sysinfo *)&local_f8);
          if (iVar7 < 0) goto LAB_001008b7;
          local_158.tv_nsec = 0;
          local_158.tv_sec = local_f8.st_dev;
        }
LAB_00100aba:
        iVar7 = timespec_get(&local_148,1);
        if (iVar7 != 0) {
          if (lStack_140 < local_158.tv_nsec) {
            local_148 = local_148 + __LC10;
            lStack_140 = lStack_140 + _UNK_00100fc8;
          }
          lStack_130 = local_208;
          uStack_128 = uStack_200;
          lStack_120 = local_210;
          local_148 = local_148 - local_158.tv_sec;
          lStack_140 = lStack_140 - local_158.tv_nsec;
          local_138 = plVar19;
          add_utmp(&local_178,param_4,"reboot",6,&_LC5,0,plVar19,local_208,uStack_200,local_210,
                   &_LC7,1,&_LC5,0,0,2,local_148,lStack_140,0,0,0);
          uStack_128 = local_168;
          lStack_120 = lStack_160;
          local_138 = local_178;
          lStack_130 = lStack_170;
          local_210 = lStack_160;
          plVar19 = local_178;
          local_208 = lStack_170;
        }
      }
    }
  }
LAB_001008b7:
  local_210 = local_210 + (long)plVar19;
  if (0 < local_208) {
LAB_001008cd:
    if (local_208 == 1) {
      lVar18 = 0;
    }
    else {
      lVar18 = local_208 + -1;
      plVar14 = plVar19;
      do {
        plVar13 = plVar14 + 9;
        *plVar14 = *plVar14 + local_210;
        plVar14[1] = plVar14[1] + local_210;
        plVar14[2] = plVar14[2] + local_210;
        plVar14[3] = plVar14[3] + local_210;
        plVar14 = plVar13;
      } while (plVar19 + local_208 * 9 + -9 != plVar13);
    }
    plVar14 = plVar19 + lVar18 * 9;
    *plVar14 = local_210 + *plVar14;
    plVar14[1] = local_210 + plVar14[1];
    plVar14[2] = plVar14[2] + local_210;
    plVar14[3] = plVar14[3] + local_210;
  }
LAB_00100948:
  *param_2 = local_208;
  *param_3 = plVar19;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


