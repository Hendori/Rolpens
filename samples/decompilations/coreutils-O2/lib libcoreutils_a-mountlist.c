
void unescape_tab(char *param_1)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  
  sVar2 = strlen(param_1);
  uVar4 = 0;
  pcVar3 = param_1;
  do {
    uVar1 = uVar4 + 1;
    if ((((param_1[uVar4] == '\\') && (uVar4 + 4 < sVar2 + 1)) &&
        ((byte)(param_1[uVar1] - 0x30U) < 4)) &&
       (((byte)(param_1[uVar4 + 2] - 0x30U) < 8 && ((byte)(param_1[uVar4 + 3] - 0x30U) < 8)))) {
      *pcVar3 = param_1[uVar4 + 3] + 'P' + (param_1[uVar4 + 2] + param_1[uVar1] * '\b') * '\b';
      uVar4 = uVar4 + 4;
    }
    else {
      *pcVar3 = param_1[uVar4];
      uVar4 = uVar1;
      if (sVar2 + 1 <= uVar1) {
        return;
      }
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}



undefined8 * read_file_system_list(void)

{
  int iVar1;
  FILE *__stream;
  __ssize_t _Var2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  undefined8 **local_88;
  uint local_64;
  uint local_60;
  int local_5c;
  undefined8 *local_58;
  char *local_50;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = (FILE *)rpl_fopen("/proc/self/mountinfo",&_LC0);
  if (__stream == (FILE *)0x0) {
    lVar11 = setmntent("/etc/mtab",&_LC31);
    if (lVar11 != 0) {
      local_88 = &local_58;
      while (puVar8 = (undefined8 *)getmntent(lVar11), puVar8 != (undefined8 *)0x0) {
        bVar15 = true;
        lVar12 = hasmntopt(puVar8,&_LC33);
        puVar13 = (undefined8 *)xmalloc(0x38);
        uVar14 = xstrdup(*puVar8);
        uVar9 = puVar8[1];
        *puVar13 = uVar14;
        uVar14 = xstrdup(uVar9);
        puVar13[2] = 0;
        uVar9 = puVar8[2];
        puVar13[1] = uVar14;
        pcVar3 = (char *)xstrdup(uVar9);
        *(byte *)(puVar13 + 5) = *(byte *)(puVar13 + 5) | 4;
        puVar13[3] = pcVar3;
        iVar1 = strcmp(pcVar3,"autofs");
        if ((((((iVar1 != 0) && (iVar1 = strcmp(pcVar3,"proc"), iVar1 != 0)) &&
              (iVar1 = strcmp(pcVar3,"subfs"), iVar1 != 0)) &&
             ((iVar1 = strcmp(pcVar3,"debugfs"), iVar1 != 0 &&
              (iVar1 = strcmp(pcVar3,"devpts"), iVar1 != 0)))) &&
            (iVar1 = strcmp(pcVar3,"fusectl"), iVar1 != 0)) &&
           ((((iVar1 = strcmp(pcVar3,"fuse.portal"), iVar1 != 0 &&
              (iVar1 = strcmp(pcVar3,"mqueue"), iVar1 != 0)) &&
             ((iVar1 = strcmp(pcVar3,"rpc_pipefs"), iVar1 != 0 &&
              (((iVar1 = strcmp(pcVar3,"sysfs"), iVar1 != 0 &&
                (iVar1 = strcmp(pcVar3,"devfs"), iVar1 != 0)) &&
               (iVar1 = strcmp(pcVar3,"kernfs"), iVar1 != 0)))))) &&
            (iVar1 = strcmp(pcVar3,"ignore"), iVar1 != 0)))) {
          iVar1 = strcmp(pcVar3,"none");
          bVar15 = lVar12 == 0 && iVar1 == 0;
        }
        pcVar4 = (char *)*puVar13;
        bVar16 = true;
        *(byte *)(puVar13 + 5) = *(byte *)(puVar13 + 5) & 0xfe | bVar15;
        pcVar5 = strchr(pcVar4,0x3a);
        if ((pcVar5 == (char *)0x0) &&
           (((*pcVar4 != '/' || (pcVar4[1] != '/')) ||
            ((iVar1 = strcmp(pcVar3,"smbfs"), iVar1 != 0 &&
             ((iVar1 = strcmp(pcVar3,"smb3"), iVar1 != 0 &&
              (iVar1 = strcmp(pcVar3,"cifs"), iVar1 != 0)))))))) {
          bVar16 = true;
          iVar1 = strcmp(pcVar3,"acfs");
          if ((iVar1 != 0) &&
             ((((iVar1 = strcmp(pcVar3,"afs"), iVar1 != 0 &&
                (iVar1 = strcmp(pcVar3,"coda"), iVar1 != 0)) &&
               (iVar1 = strcmp(pcVar3,"auristorfs"), iVar1 != 0)) &&
              (((iVar1 = strcmp(pcVar3,"fhgfs"), iVar1 != 0 &&
                (iVar1 = strcmp(pcVar3,"gpfs"), iVar1 != 0)) &&
               ((iVar1 = strcmp(pcVar3,"ibrix"), iVar1 != 0 &&
                ((iVar1 = strcmp(pcVar3,"ocfs2"), iVar1 != 0 &&
                 (iVar1 = strcmp(pcVar3,"vxfs"), iVar1 != 0)))))))))) {
            iVar1 = strcmp("-hosts",pcVar4);
            bVar16 = iVar1 == 0;
          }
        }
        puVar13[4] = 0xffffffffffffffff;
        *(byte *)(puVar13 + 5) = *(byte *)(puVar13 + 5) & 0xfd | bVar16 * '\x02';
        *local_88 = puVar13;
        local_88 = (undefined8 **)(puVar13 + 6);
      }
      iVar1 = endmntent(lVar11);
      if (iVar1 != 0) goto LAB_00100344;
      goto LAB_001006e3;
    }
  }
  else {
    local_88 = &local_58;
    local_50 = (char *)0x0;
    local_48 = 0;
    while (_Var2 = __getdelim(&local_50,&local_48,10,__stream), _Var2 != -1) {
      iVar1 = __isoc23_sscanf(local_50,"%*u %*u %u:%u %n",&local_64,&local_60,&local_5c);
      if (iVar1 - 2U < 2) {
        pcVar3 = local_50 + local_5c;
        pcVar4 = strchr(pcVar3,0x20);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
          pcVar4 = pcVar4 + 1;
          pcVar5 = strchr(pcVar4,0x20);
          if (pcVar5 != (char *)0x0) {
            *pcVar5 = '\0';
            pcVar5 = strstr(pcVar5 + 1," - ");
            if (pcVar5 != (char *)0x0) {
              pcVar5 = pcVar5 + 3;
              pcVar6 = strchr(pcVar5,0x20);
              if (pcVar6 != (char *)0x0) {
                *pcVar6 = '\0';
                pcVar6 = pcVar6 + 1;
                pcVar7 = strchr(pcVar6,0x20);
                if (pcVar7 != (char *)0x0) {
                  *pcVar7 = '\0';
                  unescape_tab(pcVar6);
                  unescape_tab(pcVar4);
                  unescape_tab(pcVar3);
                  unescape_tab(pcVar5);
                  puVar8 = (undefined8 *)xmalloc(0x38);
                  uVar9 = xstrdup(pcVar6);
                  *puVar8 = uVar9;
                  uVar9 = xstrdup(pcVar4);
                  puVar8[1] = uVar9;
                  uVar9 = xstrdup(pcVar3);
                  puVar8[2] = uVar9;
                  pcVar3 = (char *)xstrdup(pcVar5);
                  *(byte *)(puVar8 + 5) = *(byte *)(puVar8 + 5) | 4;
                  puVar8[3] = pcVar3;
                  puVar8[4] = ((ulong)local_60 & 0xffffff00) << 0xc |
                              ((ulong)local_64 & 0xfffff000) << 0x20 |
                              (ulong)((local_64 & 0xfff) << 8) | (ulong)(byte)local_60;
                  iVar1 = strcmp(pcVar3,"autofs");
                  bVar15 = true;
                  if (iVar1 != 0) {
                    iVar1 = strcmp(pcVar3,"proc");
                    bVar15 = true;
                    if (iVar1 != 0) {
                      iVar1 = strcmp(pcVar3,"subfs");
                      bVar15 = true;
                      if (iVar1 != 0) {
                        iVar1 = strcmp(pcVar3,"debugfs");
                        bVar15 = true;
                        if (iVar1 != 0) {
                          iVar1 = strcmp(pcVar3,"devpts");
                          bVar15 = true;
                          if (iVar1 != 0) {
                            iVar1 = strcmp(pcVar3,"fusectl");
                            bVar15 = true;
                            if (iVar1 != 0) {
                              iVar1 = strcmp(pcVar3,"fuse.portal");
                              bVar15 = true;
                              if (iVar1 != 0) {
                                iVar1 = strcmp(pcVar3,"mqueue");
                                bVar15 = true;
                                if (iVar1 != 0) {
                                  iVar1 = strcmp(pcVar3,"rpc_pipefs");
                                  bVar15 = true;
                                  if (iVar1 != 0) {
                                    iVar1 = strcmp(pcVar3,"sysfs");
                                    bVar15 = true;
                                    if (iVar1 != 0) {
                                      iVar1 = strcmp(pcVar3,"devfs");
                                      bVar15 = true;
                                      if (iVar1 != 0) {
                                        iVar1 = strcmp(pcVar3,"kernfs");
                                        bVar15 = true;
                                        if (iVar1 != 0) {
                                          iVar1 = strcmp(pcVar3,"ignore");
                                          bVar15 = true;
                                          if (iVar1 != 0) {
                                            iVar1 = strcmp(pcVar3,"none");
                                            bVar15 = iVar1 == 0;
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  *(byte *)(puVar8 + 5) = *(byte *)(puVar8 + 5) & 0xfe | bVar15;
                  pcVar4 = (char *)*puVar8;
                  pcVar5 = strchr(pcVar4,0x3a);
                  bVar15 = true;
                  if (pcVar5 == (char *)0x0) {
                    if ((*pcVar4 == '/') && (pcVar4[1] == '/')) {
                      iVar1 = strcmp(pcVar3,"smbfs");
                      bVar15 = true;
                      if (iVar1 != 0) {
                        iVar1 = strcmp(pcVar3,"smb3");
                        bVar15 = true;
                        if (iVar1 != 0) {
                          iVar1 = strcmp(pcVar3,"cifs");
                          bVar15 = true;
                          if (iVar1 != 0) goto LAB_0010051e;
                        }
                      }
                    }
                    else {
LAB_0010051e:
                      iVar1 = strcmp(pcVar3,"acfs");
                      bVar15 = true;
                      if (iVar1 != 0) {
                        iVar1 = strcmp(pcVar3,"afs");
                        bVar15 = true;
                        if (iVar1 != 0) {
                          iVar1 = strcmp(pcVar3,"coda");
                          bVar15 = true;
                          if (iVar1 != 0) {
                            iVar1 = strcmp(pcVar3,"auristorfs");
                            bVar15 = true;
                            if (iVar1 != 0) {
                              iVar1 = strcmp(pcVar3,"fhgfs");
                              bVar15 = true;
                              if (iVar1 != 0) {
                                iVar1 = strcmp(pcVar3,"gpfs");
                                bVar15 = true;
                                if (iVar1 != 0) {
                                  iVar1 = strcmp(pcVar3,"ibrix");
                                  bVar15 = true;
                                  if (iVar1 != 0) {
                                    iVar1 = strcmp(pcVar3,"ocfs2");
                                    bVar15 = true;
                                    if (iVar1 != 0) {
                                      iVar1 = strcmp(pcVar3,"vxfs");
                                      bVar15 = true;
                                      if (iVar1 != 0) {
                                        iVar1 = strcmp("-hosts",pcVar4);
                                        bVar15 = iVar1 == 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  *(byte *)(puVar8 + 5) = *(byte *)(puVar8 + 5) & 0xfd | bVar15 * '\x02';
                  *local_88 = puVar8;
                  local_88 = (undefined8 **)(puVar8 + 6);
                }
              }
            }
          }
        }
      }
    }
    free(local_50);
    if ((__stream->_flags & 0x20) == 0) {
      iVar1 = rpl_fclose(__stream);
      if (iVar1 != -1) {
LAB_00100344:
        *local_88 = (undefined8 *)0x0;
        puVar8 = local_58;
        goto LAB_00100355;
      }
LAB_001006e3:
      piVar10 = __errno_location();
      iVar1 = *piVar10;
    }
    else {
      piVar10 = __errno_location();
      iVar1 = *piVar10;
      rpl_fclose(__stream);
      *piVar10 = iVar1;
    }
    *local_88 = (undefined8 *)0x0;
    puVar8 = local_58;
    while (puVar8 != (undefined8 *)0x0) {
      puVar13 = (undefined8 *)puVar8[6];
      local_58 = puVar8;
      free((void *)*puVar8);
      free((void *)puVar8[1]);
      free((void *)puVar8[2]);
      if ((*(byte *)(puVar8 + 5) & 4) != 0) {
        free((void *)puVar8[3]);
      }
      free(puVar8);
      puVar8 = puVar13;
    }
    *piVar10 = iVar1;
    local_58 = (undefined8 *)0x0;
  }
  puVar8 = (undefined8 *)0x0;
LAB_00100355:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void free_mount_entry(undefined8 *param_1)

{
  free((void *)*param_1);
  free((void *)param_1[1]);
  free((void *)param_1[2]);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    free(param_1);
    return;
  }
  free((void *)param_1[3]);
  free(param_1);
  return;
}


