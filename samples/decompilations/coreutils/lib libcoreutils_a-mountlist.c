
/* WARNING: Unknown calling convention */

void unescape_tab(char *str)

{
  ulong uVar1;
  size_t sVar2;
  char *pcVar3;
  ulong uVar4;
  
  sVar2 = strlen(str);
  uVar4 = 0;
  pcVar3 = str;
  do {
    uVar1 = uVar4 + 1;
    if ((((str[uVar4] == '\\') && (uVar4 + 4 < sVar2 + 1)) && ((byte)(str[uVar1] - 0x30U) < 4)) &&
       (((byte)(str[uVar4 + 2] - 0x30U) < 8 && ((byte)(str[uVar4 + 3] - 0x30U) < 8)))) {
      *pcVar3 = str[uVar4 + 3] + 'P' + (str[uVar4 + 2] + str[uVar1] * '\b') * '\b';
      uVar4 = uVar4 + 4;
    }
    else {
      *pcVar3 = str[uVar4];
      uVar4 = uVar1;
      if (sVar2 + 1 <= uVar1) {
        return;
      }
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}



/* WARNING: Unknown calling convention */

mount_entry * read_file_system_list(_Bool need_fs_type)

{
  mount_entry *pmVar1;
  undefined8 uVar2;
  int iVar3;
  FILE *__stream;
  __ssize_t _Var4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  mount_entry *pmVar10;
  int *piVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  mount_entry **local_88;
  uint devmaj;
  uint devmin;
  int mntroot_s;
  mount_entry *mount_list;
  char *line;
  size_t buf_size;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __stream = (FILE *)rpl_fopen("/proc/self/mountinfo",&_LC0);
  if (__stream == (FILE *)0x0) {
    lVar12 = setmntent("/etc/mtab",&_LC31);
    if (lVar12 != 0) {
      local_88 = &mount_list;
      while (puVar13 = (undefined8 *)getmntent(lVar12), puVar13 != (undefined8 *)0x0) {
        bVar15 = true;
        lVar14 = hasmntopt(puVar13,&_LC33);
        pmVar10 = (mount_entry *)xmalloc(0x38);
        pcVar5 = (char *)xstrdup(*puVar13);
        uVar2 = puVar13[1];
        pmVar10->me_devname = pcVar5;
        pcVar5 = (char *)xstrdup(uVar2);
        pmVar10->me_mntroot = (char *)0x0;
        uVar2 = puVar13[2];
        pmVar10->me_mountdir = pcVar5;
        pcVar5 = (char *)xstrdup(uVar2);
        pmVar10->field_0x28 = pmVar10->field_0x28 | 4;
        pmVar10->me_type = pcVar5;
        iVar3 = strcmp(pcVar5,"autofs");
        if ((((((iVar3 != 0) && (iVar3 = strcmp(pcVar5,"proc"), iVar3 != 0)) &&
              (iVar3 = strcmp(pcVar5,"subfs"), iVar3 != 0)) &&
             ((iVar3 = strcmp(pcVar5,"debugfs"), iVar3 != 0 &&
              (iVar3 = strcmp(pcVar5,"devpts"), iVar3 != 0)))) &&
            (iVar3 = strcmp(pcVar5,"fusectl"), iVar3 != 0)) &&
           ((((iVar3 = strcmp(pcVar5,"fuse.portal"), iVar3 != 0 &&
              (iVar3 = strcmp(pcVar5,"mqueue"), iVar3 != 0)) &&
             ((iVar3 = strcmp(pcVar5,"rpc_pipefs"), iVar3 != 0 &&
              (((iVar3 = strcmp(pcVar5,"sysfs"), iVar3 != 0 &&
                (iVar3 = strcmp(pcVar5,"devfs"), iVar3 != 0)) &&
               (iVar3 = strcmp(pcVar5,"kernfs"), iVar3 != 0)))))) &&
            (iVar3 = strcmp(pcVar5,"ignore"), iVar3 != 0)))) {
          iVar3 = strcmp(pcVar5,"none");
          bVar15 = lVar14 == 0 && iVar3 == 0;
        }
        pcVar6 = pmVar10->me_devname;
        bVar16 = true;
        pmVar10->field_0x28 = pmVar10->field_0x28 & 0xfe | bVar15;
        pcVar7 = strchr(pcVar6,0x3a);
        if ((pcVar7 == (char *)0x0) &&
           (((*pcVar6 != '/' || (pcVar6[1] != '/')) ||
            ((iVar3 = strcmp(pcVar5,"smbfs"), iVar3 != 0 &&
             ((iVar3 = strcmp(pcVar5,"smb3"), iVar3 != 0 &&
              (iVar3 = strcmp(pcVar5,"cifs"), iVar3 != 0)))))))) {
          bVar16 = true;
          iVar3 = strcmp(pcVar5,"acfs");
          if ((iVar3 != 0) &&
             ((((iVar3 = strcmp(pcVar5,"afs"), iVar3 != 0 &&
                (iVar3 = strcmp(pcVar5,"coda"), iVar3 != 0)) &&
               (iVar3 = strcmp(pcVar5,"auristorfs"), iVar3 != 0)) &&
              (((iVar3 = strcmp(pcVar5,"fhgfs"), iVar3 != 0 &&
                (iVar3 = strcmp(pcVar5,"gpfs"), iVar3 != 0)) &&
               ((iVar3 = strcmp(pcVar5,"ibrix"), iVar3 != 0 &&
                ((iVar3 = strcmp(pcVar5,"ocfs2"), iVar3 != 0 &&
                 (iVar3 = strcmp(pcVar5,"vxfs"), iVar3 != 0)))))))))) {
            iVar3 = strcmp("-hosts",pcVar6);
            bVar16 = iVar3 == 0;
          }
        }
        pmVar10->me_dev = 0xffffffffffffffff;
        pmVar10->field_0x28 = pmVar10->field_0x28 & 0xfd | bVar16 * '\x02';
        *local_88 = pmVar10;
        local_88 = &pmVar10->me_next;
      }
      iVar3 = endmntent(lVar12);
      if (iVar3 != 0) goto LAB_00100344;
      goto LAB_001006e3;
    }
  }
  else {
    local_88 = &mount_list;
    line = (char *)0x0;
    buf_size = 0;
    while (_Var4 = __getdelim(&line,&buf_size,10,__stream), _Var4 != -1) {
      iVar3 = __isoc23_sscanf(line,"%*u %*u %u:%u %n",&devmaj,&devmin,&mntroot_s);
      if (iVar3 - 2U < 2) {
        pcVar5 = line + mntroot_s;
        pcVar6 = strchr(pcVar5,0x20);
        if (pcVar6 != (char *)0x0) {
          *pcVar6 = '\0';
          pcVar6 = pcVar6 + 1;
          pcVar7 = strchr(pcVar6,0x20);
          if (pcVar7 != (char *)0x0) {
            *pcVar7 = '\0';
            pcVar7 = strstr(pcVar7 + 1," - ");
            if (pcVar7 != (char *)0x0) {
              pcVar7 = pcVar7 + 3;
              pcVar8 = strchr(pcVar7,0x20);
              if (pcVar8 != (char *)0x0) {
                *pcVar8 = '\0';
                pcVar8 = pcVar8 + 1;
                pcVar9 = strchr(pcVar8,0x20);
                if (pcVar9 != (char *)0x0) {
                  *pcVar9 = '\0';
                  unescape_tab(pcVar8);
                  unescape_tab(pcVar6);
                  unescape_tab(pcVar5);
                  unescape_tab(pcVar7);
                  pmVar10 = (mount_entry *)xmalloc(0x38);
                  pcVar8 = (char *)xstrdup(pcVar8);
                  pmVar10->me_devname = pcVar8;
                  pcVar6 = (char *)xstrdup(pcVar6);
                  pmVar10->me_mountdir = pcVar6;
                  pcVar5 = (char *)xstrdup(pcVar5);
                  pmVar10->me_mntroot = pcVar5;
                  pcVar5 = (char *)xstrdup(pcVar7);
                  pmVar10->field_0x28 = pmVar10->field_0x28 | 4;
                  pmVar10->me_type = pcVar5;
                  pmVar10->me_dev =
                       ((ulong)devmin & 0xffffff00) << 0xc |
                       ((ulong)devmaj & 0xfffff000) << 0x20 | (ulong)((devmaj & 0xfff) << 8) |
                       (ulong)(byte)devmin;
                  iVar3 = strcmp(pcVar5,"autofs");
                  bVar15 = true;
                  if (iVar3 != 0) {
                    iVar3 = strcmp(pcVar5,"proc");
                    bVar15 = true;
                    if (iVar3 != 0) {
                      iVar3 = strcmp(pcVar5,"subfs");
                      bVar15 = true;
                      if (iVar3 != 0) {
                        iVar3 = strcmp(pcVar5,"debugfs");
                        bVar15 = true;
                        if (iVar3 != 0) {
                          iVar3 = strcmp(pcVar5,"devpts");
                          bVar15 = true;
                          if (iVar3 != 0) {
                            iVar3 = strcmp(pcVar5,"fusectl");
                            bVar15 = true;
                            if (iVar3 != 0) {
                              iVar3 = strcmp(pcVar5,"fuse.portal");
                              bVar15 = true;
                              if (iVar3 != 0) {
                                iVar3 = strcmp(pcVar5,"mqueue");
                                bVar15 = true;
                                if (iVar3 != 0) {
                                  iVar3 = strcmp(pcVar5,"rpc_pipefs");
                                  bVar15 = true;
                                  if (iVar3 != 0) {
                                    iVar3 = strcmp(pcVar5,"sysfs");
                                    bVar15 = true;
                                    if (iVar3 != 0) {
                                      iVar3 = strcmp(pcVar5,"devfs");
                                      bVar15 = true;
                                      if (iVar3 != 0) {
                                        iVar3 = strcmp(pcVar5,"kernfs");
                                        bVar15 = true;
                                        if (iVar3 != 0) {
                                          iVar3 = strcmp(pcVar5,"ignore");
                                          bVar15 = true;
                                          if (iVar3 != 0) {
                                            iVar3 = strcmp(pcVar5,"none");
                                            bVar15 = iVar3 == 0;
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
                  pmVar10->field_0x28 = pmVar10->field_0x28 & 0xfe | bVar15;
                  pcVar6 = pmVar10->me_devname;
                  pcVar7 = strchr(pcVar6,0x3a);
                  bVar15 = true;
                  if (pcVar7 == (char *)0x0) {
                    if ((*pcVar6 == '/') && (pcVar6[1] == '/')) {
                      iVar3 = strcmp(pcVar5,"smbfs");
                      bVar15 = true;
                      if (iVar3 != 0) {
                        iVar3 = strcmp(pcVar5,"smb3");
                        bVar15 = true;
                        if (iVar3 != 0) {
                          iVar3 = strcmp(pcVar5,"cifs");
                          bVar15 = true;
                          if (iVar3 != 0) goto LAB_0010051e;
                        }
                      }
                    }
                    else {
LAB_0010051e:
                      iVar3 = strcmp(pcVar5,"acfs");
                      bVar15 = true;
                      if (iVar3 != 0) {
                        iVar3 = strcmp(pcVar5,"afs");
                        bVar15 = true;
                        if (iVar3 != 0) {
                          iVar3 = strcmp(pcVar5,"coda");
                          bVar15 = true;
                          if (iVar3 != 0) {
                            iVar3 = strcmp(pcVar5,"auristorfs");
                            bVar15 = true;
                            if (iVar3 != 0) {
                              iVar3 = strcmp(pcVar5,"fhgfs");
                              bVar15 = true;
                              if (iVar3 != 0) {
                                iVar3 = strcmp(pcVar5,"gpfs");
                                bVar15 = true;
                                if (iVar3 != 0) {
                                  iVar3 = strcmp(pcVar5,"ibrix");
                                  bVar15 = true;
                                  if (iVar3 != 0) {
                                    iVar3 = strcmp(pcVar5,"ocfs2");
                                    bVar15 = true;
                                    if (iVar3 != 0) {
                                      iVar3 = strcmp(pcVar5,"vxfs");
                                      bVar15 = true;
                                      if (iVar3 != 0) {
                                        iVar3 = strcmp("-hosts",pcVar6);
                                        bVar15 = iVar3 == 0;
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
                  pmVar10->field_0x28 = pmVar10->field_0x28 & 0xfd | bVar15 * '\x02';
                  *local_88 = pmVar10;
                  local_88 = &pmVar10->me_next;
                }
              }
            }
          }
        }
      }
    }
    free(line);
    if ((__stream->_flags & 0x20) == 0) {
      iVar3 = rpl_fclose(__stream);
      if (iVar3 != -1) {
LAB_00100344:
        *local_88 = (mount_entry *)0x0;
        pmVar10 = mount_list;
        goto LAB_00100355;
      }
LAB_001006e3:
      piVar11 = __errno_location();
      iVar3 = *piVar11;
    }
    else {
      piVar11 = __errno_location();
      iVar3 = *piVar11;
      rpl_fclose(__stream);
      *piVar11 = iVar3;
    }
    *local_88 = (mount_entry *)0x0;
    pmVar10 = mount_list;
    while (pmVar10 != (mount_entry *)0x0) {
      pmVar1 = pmVar10->me_next;
      mount_list = pmVar10;
      free(pmVar10->me_devname);
      free(pmVar10->me_mountdir);
      free(pmVar10->me_mntroot);
      if ((pmVar10->field_0x28 & 4) != 0) {
        free(pmVar10->me_type);
      }
      free(pmVar10);
      pmVar10 = pmVar1;
    }
    *piVar11 = iVar3;
    mount_list = (mount_entry *)0x0;
  }
  pmVar10 = (mount_entry *)0x0;
LAB_00100355:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pmVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void free_mount_entry(mount_entry *me)

{
  free(me->me_devname);
  free(me->me_mountdir);
  free(me->me_mntroot);
  if ((me->field_0x28 & 4) == 0) {
    free(me);
    return;
  }
  free(me->me_type);
  free(me);
  return;
}


