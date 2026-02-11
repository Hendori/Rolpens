
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
  undefined8 *puVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  char *pcVar14;
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
    lVar10 = setmntent("/etc/mtab",&_LC31);
    if (lVar10 != 0) {
      local_88 = &local_58;
      while (puVar7 = (undefined8 *)getmntent(lVar10), puVar7 != (undefined8 *)0x0) {
        bVar15 = true;
        lVar11 = hasmntopt(puVar7,&_LC33);
        puVar12 = (undefined8 *)xmalloc(0x38);
        uVar13 = xstrdup(*puVar7);
        uVar8 = puVar7[1];
        *puVar12 = uVar13;
        uVar13 = xstrdup(uVar8);
        puVar12[2] = 0;
        uVar8 = puVar7[2];
        puVar12[1] = uVar13;
        pcVar3 = (char *)xstrdup(uVar8);
        *(byte *)(puVar12 + 5) = *(byte *)(puVar12 + 5) | 4;
        puVar12[3] = pcVar3;
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
          bVar15 = iVar1 == 0 && lVar11 == 0;
        }
        pcVar14 = (char *)*puVar12;
        bVar16 = true;
        *(byte *)(puVar12 + 5) = *(byte *)(puVar12 + 5) & 0xfe | bVar15;
        pcVar4 = strchr(pcVar14,0x3a);
        if ((pcVar4 == (char *)0x0) &&
           (((*pcVar14 != '/' || (pcVar14[1] != '/')) ||
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
            iVar1 = strcmp("-hosts",pcVar14);
            bVar16 = iVar1 == 0;
          }
        }
        puVar12[4] = 0xffffffffffffffff;
        *(byte *)(puVar12 + 5) = *(byte *)(puVar12 + 5) & 0xfd | bVar16 * '\x02';
        *local_88 = puVar12;
        local_88 = (undefined8 **)(puVar12 + 6);
      }
      iVar1 = endmntent(lVar10);
      if (iVar1 != 0) goto LAB_00100345;
      goto LAB_00100723;
    }
  }
  else {
    local_88 = &local_58;
    local_50 = (char *)0x0;
    local_48 = 0;
    while (_Var2 = __getdelim(&local_50,&local_48,10,__stream), _Var2 != -1) {
      iVar1 = __isoc23_sscanf(local_50,"%*u %*u %u:%u %n",&local_64,&local_60,&local_5c);
      if (iVar1 - 2U < 2) {
        pcVar14 = local_50 + local_5c;
        pcVar3 = strchr(pcVar14,0x20);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
          pcVar3 = pcVar3 + 1;
          pcVar4 = strchr(pcVar3,0x20);
          if (pcVar4 != (char *)0x0) {
            *pcVar4 = '\0';
            pcVar4 = strstr(pcVar4 + 1," - ");
            if (pcVar4 != (char *)0x0) {
              pcVar4 = pcVar4 + 3;
              pcVar5 = strchr(pcVar4,0x20);
              if (pcVar5 != (char *)0x0) {
                *pcVar5 = '\0';
                pcVar5 = pcVar5 + 1;
                pcVar6 = strchr(pcVar5,0x20);
                if (pcVar6 != (char *)0x0) {
                  *pcVar6 = '\0';
                  unescape_tab(pcVar5);
                  unescape_tab(pcVar3);
                  unescape_tab(pcVar14);
                  unescape_tab(pcVar4);
                  puVar7 = (undefined8 *)xmalloc(0x38);
                  uVar8 = xstrdup(pcVar5);
                  *puVar7 = uVar8;
                  uVar8 = xstrdup(pcVar3);
                  puVar7[1] = uVar8;
                  uVar8 = xstrdup(pcVar14);
                  puVar7[2] = uVar8;
                  pcVar3 = (char *)xstrdup(pcVar4);
                  *(byte *)(puVar7 + 5) = *(byte *)(puVar7 + 5) | 4;
                  puVar7[3] = pcVar3;
                  puVar7[4] = ((ulong)local_60 & 0xffffff00) << 0xc |
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
                  *(byte *)(puVar7 + 5) = *(byte *)(puVar7 + 5) & 0xfe | bVar15;
                  pcVar14 = (char *)*puVar7;
                  pcVar4 = strchr(pcVar14,0x3a);
                  bVar15 = true;
                  if (pcVar4 == (char *)0x0) {
                    if ((*pcVar14 == '/') && (pcVar14[1] == '/')) {
                      iVar1 = strcmp(pcVar3,"smbfs");
                      bVar15 = true;
                      if (iVar1 != 0) {
                        iVar1 = strcmp(pcVar3,"smb3");
                        bVar15 = true;
                        if (iVar1 != 0) {
                          iVar1 = strcmp(pcVar3,"cifs");
                          bVar15 = true;
                          if (iVar1 != 0) goto LAB_001004fe;
                        }
                      }
                    }
                    else {
LAB_001004fe:
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
                                        iVar1 = strcmp("-hosts",pcVar14);
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
                  *(byte *)(puVar7 + 5) = *(byte *)(puVar7 + 5) & 0xfd | bVar15 * '\x02';
                  *local_88 = puVar7;
                  local_88 = (undefined8 **)(puVar7 + 6);
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
LAB_00100345:
        *local_88 = (undefined8 *)0x0;
        puVar7 = local_58;
        goto LAB_00100356;
      }
LAB_00100723:
      piVar9 = __errno_location();
      iVar1 = *piVar9;
    }
    else {
      piVar9 = __errno_location();
      iVar1 = *piVar9;
      rpl_fclose(__stream);
      *piVar9 = iVar1;
    }
    *local_88 = (undefined8 *)0x0;
    puVar7 = local_58;
    while (puVar7 != (undefined8 *)0x0) {
      puVar12 = (undefined8 *)puVar7[6];
      local_58 = puVar7;
      free((void *)*puVar7);
      free((void *)puVar7[1]);
      free((void *)puVar7[2]);
      if ((*(byte *)(puVar7 + 5) & 4) != 0) {
        free((void *)puVar7[3]);
      }
      free(puVar7);
      puVar7 = puVar12;
    }
    *piVar9 = iVar1;
    local_58 = (undefined8 *)0x0;
  }
  puVar7 = (undefined8 *)0x0;
LAB_00100356:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar7;
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


