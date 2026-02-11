
void mark_ancestor_dirs(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(long *)(lVar1 + 0x58) < 0) {
    return;
  }
  do {
    if (*(long *)(lVar1 + 0x20) != 0) {
      return;
    }
    *(undefined8 *)(lVar1 + 0x20) = 1;
    lVar1 = *(long *)(lVar1 + 8);
  } while (-1 < *(long *)(lVar1 + 0x58));
  return;
}



void fts_skip_tree(undefined8 param_1,undefined8 param_2)

{
  rpl_fts_set(param_1,param_2,4);
  rpl_fts_read(param_1);
  return;
}



undefined8 excise(long param_1,long param_2,char *param_3,byte param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  stat sStack_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = unlinkat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),(uint)param_4 << 9);
  if (iVar3 == 0) {
    if (param_3[0x1a] != '\0') {
      uVar5 = quotearg_style(4,*(undefined8 *)(param_2 + 0x38));
      if (param_4 == 0) {
        uVar6 = dcgettext(0,"removed %s\n",5);
      }
      else {
        uVar6 = dcgettext(0,"removed directory %s\n",5);
      }
      __printf_chk(2,uVar6,uVar5);
    }
    goto LAB_0010016b;
  }
  puVar4 = (uint *)__errno_location();
  uVar2 = *puVar4;
  uVar7 = (ulong)uVar2;
  if (uVar2 == 0x1e) {
    iVar3 = fstatat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),&sStack_c8,0x100);
    if ((iVar3 == 0) || (*puVar4 != 2)) {
      cVar1 = *param_3;
      *puVar4 = 0x1e;
      if (cVar1 != '\0') goto LAB_001000d8;
    }
    else {
      uVar7 = 2;
      if (*param_3 != '\0') goto LAB_0010016b;
    }
    if (*(short *)(param_2 + 0x68) == 4) {
LAB_001001c9:
      if (((0x8000320000U >> (uVar7 & 0x3f) & 1) != 0) && (*(uint *)(param_2 + 0x40) != 0)) {
        *puVar4 = *(uint *)(param_2 + 0x40);
      }
    }
  }
  else {
    if (*param_3 == '\0') goto LAB_001000d8;
    if (uVar2 == 0x16) {
LAB_0010016b:
      uVar5 = 2;
      goto LAB_00100130;
    }
    if ((int)uVar2 < 0x17) {
      if ((uVar2 == 2) || (uVar2 == 0x14)) goto LAB_0010016b;
    }
    else if (uVar2 == 0x54) goto LAB_0010016b;
LAB_001000d8:
    if ((*(short *)(param_2 + 0x68) == 4) && (uVar2 < 0x28)) goto LAB_001001c9;
  }
  uVar5 = quotearg_style(4,*(undefined8 *)(param_2 + 0x38));
  uVar6 = dcgettext(0,"cannot remove %s",5);
  error(0,*puVar4,uVar6,uVar5);
  mark_ancestor_dirs(param_2);
  uVar5 = 5;
LAB_00100130:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int get_dir_status(long param_1,long param_2,int *param_3)

{
  int __fd;
  DIR *__dirp;
  int *piVar1;
  dirent *pdVar2;
  int iVar3;
  
  if (*param_3 != -2) {
    return *param_3;
  }
  __fd = openat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),0x30900);
  if (__fd < 0) {
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    *param_3 = iVar3;
  }
  else {
    __dirp = fdopendir(__fd);
    if (__dirp == (DIR *)0x0) {
      piVar1 = __errno_location();
      iVar3 = *piVar1;
      close(__fd);
      *param_3 = iVar3;
    }
    else {
      piVar1 = __errno_location();
      *piVar1 = 0;
      do {
        pdVar2 = readdir(__dirp);
        if (pdVar2 == (dirent *)0x0) {
          iVar3 = *piVar1;
          closedir(__dirp);
          if (iVar3 == 0) {
            *param_3 = -1;
            return -1;
          }
          goto LAB_001002fc;
        }
      } while ((pdVar2->d_name[0] == '.') &&
              ((pdVar2->d_name[(ulong)(pdVar2->d_name[1] == '.') + 1] == '\0' ||
               (pdVar2->d_name[(ulong)(pdVar2->d_name[1] == '.') + 1] == '/'))));
      iVar3 = *piVar1;
      closedir(__dirp);
LAB_001002fc:
      *param_3 = iVar3;
    }
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int prompt(long param_1,long param_2,char param_3,char *param_4,int param_5,int *param_6)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  stat local_d8;
  long local_40;
  
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  pcVar11 = *(char **)(param_2 + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c);
  local_d8.st_atim.tv_nsec = -1;
  iVar4 = 4;
  if (*(long *)(param_2 + 0x20) != 0) goto LAB_001004b5;
  iVar4 = *(int *)(param_4 + 4);
  if (iVar4 == 5) {
LAB_001004b0:
    iVar4 = 2;
    goto LAB_001004b5;
  }
  if (*param_4 == '\0') {
    if ((iVar4 != 3) && (param_4[0x19] == '\0')) goto LAB_001004b0;
    cVar2 = can_write_any_file();
    if (cVar2 != '\0') {
LAB_0010040c:
      iVar4 = *(int *)(param_4 + 4);
      goto LAB_00100411;
    }
    if (local_d8.st_atim.tv_nsec < 0) {
      if (local_d8.st_atim.tv_nsec != -1) goto LAB_00100857;
      iVar4 = fstatat(iVar5,pcVar11,&local_d8,0x100);
      if (iVar4 == 0) goto LAB_00100525;
LAB_00100877:
      local_d8.st_atim.tv_nsec = -2;
      piVar8 = __errno_location();
      local_d8.st_ino = (__ino_t)*piVar8;
      iVar4 = *piVar8;
LAB_0010086c:
      *piVar8 = iVar4;
    }
    else {
LAB_00100525:
      if (((local_d8.st_mode & 0xf000) == 0xa000) ||
         (iVar4 = faccessat(iVar5,pcVar11,2,0x200), iVar4 == 0)) goto LAB_0010040c;
      piVar8 = __errno_location();
      iVar4 = *piVar8;
      if (iVar4 == 0xd) {
        bVar1 = true;
        goto joined_r0x001005b0;
      }
    }
    uVar6 = quotearg_style(4,uVar6);
LAB_001007c3:
    uVar10 = dcgettext(0,"cannot remove %s",5);
    error(0,iVar4,uVar10,uVar6);
LAB_00100726:
    iVar4 = 5;
    goto LAB_001004b5;
  }
LAB_00100411:
  if (iVar4 != 3) goto LAB_001004b0;
  bVar1 = false;
joined_r0x001005b0:
  if (param_3 == '\0') {
    if (local_d8.st_atim.tv_nsec < 0) {
      if (local_d8.st_atim.tv_nsec != -1) {
LAB_00100857:
        piVar8 = __errno_location();
        iVar4 = (int)local_d8.st_ino;
        goto LAB_0010086c;
      }
      iVar4 = fstatat(iVar5,pcVar11,&local_d8,0x100);
      if (iVar4 != 0) goto LAB_00100877;
    }
    if ((local_d8.st_mode & 0xf000) == 0xa000) {
      if (*(int *)(param_4 + 4) != 3) goto LAB_001004b0;
    }
    else if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_0010042b;
    uVar6 = quotearg_style(4,uVar6);
LAB_00100634:
    if (0 < *param_6) {
      if ((param_4[10] != '\x01') || (*param_6 != 0xd)) {
        uVar10 = dcgettext(0,"cannot remove %s",5);
        error(0,*param_6,uVar10,uVar6);
        goto LAB_00100726;
      }
      if (param_5 == 2) goto LAB_001004b0;
      pcVar11 = "%s: attempt removal of inaccessible directory %s? ";
LAB_0010066c:
      uVar10 = _program_name;
      uVar7 = dcgettext(0,pcVar11,5);
      goto LAB_00100676;
    }
    if (local_d8.st_atim.tv_nsec < 0) {
      if (local_d8.st_atim.tv_nsec == -1) {
        iVar5 = fstatat(iVar5,pcVar11,&local_d8,0x100);
        if (iVar5 == 0) goto LAB_00100730;
        local_d8.st_atim.tv_nsec = -2;
        piVar8 = __errno_location();
        local_d8.st_ino = (__ino_t)*piVar8;
        iVar5 = *piVar8;
      }
      else {
        piVar8 = __errno_location();
        iVar5 = (int)local_d8.st_ino;
      }
      *piVar8 = iVar5;
      uVar10 = dcgettext(0,"cannot remove %s",5);
      error(0,*piVar8,uVar10,uVar6);
      goto LAB_00100726;
    }
LAB_00100730:
    uVar7 = file_type(&local_d8);
    uVar10 = _program_name;
    if (bVar1) {
      uVar9 = dcgettext(0,"%s: remove write-protected %s %s? ",5);
    }
    else {
      uVar9 = dcgettext(0,"%s: remove %s %s? ",5);
    }
    __fprintf_chk(_stderr,2,uVar9,uVar10,uVar7,uVar6);
  }
  else {
LAB_0010042b:
    if (param_4[9] == '\0') {
      if ((param_4[10] == '\0') || (iVar4 = get_dir_status(param_1,param_2,param_6), iVar4 == 0)) {
        iVar4 = *param_6;
        if (iVar4 < 1) {
          uVar6 = quotearg_style(4,uVar6);
          iVar4 = 0x15;
        }
        else {
          uVar6 = quotearg_style(4,uVar6);
        }
        goto LAB_001007c3;
      }
      uVar6 = quotearg_style(4,uVar6);
    }
    else {
      uVar6 = quotearg_style(4,uVar6);
    }
    if ((param_5 != 2) ||
       (iVar4 = get_dir_status(param_1,param_2,param_6), uVar10 = _program_name, iVar4 != 0))
    goto LAB_00100634;
    if (!bVar1) {
      pcVar11 = "%s: descend into directory %s? ";
      goto LAB_0010066c;
    }
    uVar7 = dcgettext(0,"%s: descend into write-protected directory %s? ",5);
LAB_00100676:
    __fprintf_chk(_stderr,2,uVar7,uVar10,uVar6);
  }
  bVar3 = yesno();
  iVar4 = 4 - (uint)bVar3;
LAB_001004b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int rm(long *param_1,long param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  DIR *__dirp;
  dirent *pdVar10;
  char *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  long in_FS_OFFSET;
  bool bVar20;
  int local_dc;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    iVar18 = 2;
LAB_00100a43:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar18;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar18 = 2;
  lVar7 = xfts_open(param_1,(-(uint)(*(char *)(param_2 + 8) == '\0') & 0xffffffc0) + 600,0);
LAB_00100938:
  lVar8 = rpl_fts_read(lVar7);
  if (lVar8 != 0) {
    do {
      uVar1 = *(ushort *)(lVar8 + 0x68);
      local_dc = -2;
      if (uVar1 == 1) {
        if (*(char *)(param_2 + 9) == '\0') {
          if (*(char *)(param_2 + 10) == '\0') {
LAB_00100f2e:
            uVar15 = 0x15;
          }
          else {
            iVar6 = openat(*(int *)(lVar7 + 0x2c),*(char **)(lVar8 + 0x30),0x30900);
            if (iVar6 < 0) {
              piVar9 = __errno_location();
              iVar19 = *piVar9;
            }
            else {
              __dirp = fdopendir(iVar6);
              if (__dirp == (DIR *)0x0) {
                piVar9 = __errno_location();
                iVar19 = *piVar9;
                close(iVar6);
              }
              else {
                piVar9 = __errno_location();
                *piVar9 = 0;
LAB_00100ac0:
                pdVar10 = readdir(__dirp);
                if (pdVar10 != (dirent *)0x0) {
                  do {
                    if (pdVar10->d_name[0] != '.') {
LAB_00100adb:
                      iVar19 = *piVar9;
                      closedir(__dirp);
                      goto LAB_00100ae6;
                    }
                    if (pdVar10->d_name[(ulong)(pdVar10->d_name[1] == '.') + 1] == '\0')
                    goto LAB_00100ac0;
                    if (pdVar10->d_name[(ulong)(pdVar10->d_name[1] == '.') + 1] != '/')
                    goto LAB_00100adb;
                    pdVar10 = readdir(__dirp);
                    if (pdVar10 == (dirent *)0x0) break;
                  } while( true );
                }
                iVar19 = *piVar9;
                closedir(__dirp);
                if (iVar19 == 0) {
                  local_dc = -1;
                  goto LAB_00100af4;
                }
              }
            }
LAB_00100ae6:
            local_dc = iVar19;
            if (iVar19 != 0) goto LAB_00100af4;
            if (*(char *)(param_2 + 10) == '\0') goto LAB_00100f2e;
            uVar15 = 0x27;
          }
          uVar13 = quotearg_style(4,*(undefined8 *)(lVar8 + 0x38));
          uVar14 = dcgettext(0,"cannot remove %s",5);
          error(0,uVar15,uVar14,uVar13);
          mark_ancestor_dirs(lVar8,lVar8);
          fts_skip_tree(lVar7);
        }
        else {
LAB_00100af4:
          if (*(long *)(lVar8 + 0x58) != 0) goto LAB_00100b3b;
          uVar15 = *(undefined8 *)(lVar8 + 0x30);
          pcVar11 = (char *)last_component(uVar15);
          if ((*pcVar11 == '.') &&
             ((pcVar11[(ulong)(pcVar11[1] == '.') + 1] == '\0' ||
              (pcVar11[(ulong)(pcVar11[1] == '.') + 1] == '/')))) {
            uVar15 = quotearg_n_style(2,4,*(undefined8 *)(lVar8 + 0x38));
            uVar13 = quotearg_n_style(1,4,&_LC9);
            uVar14 = quotearg_n_style(0,4,&_LC10);
            uVar12 = dcgettext(0,"refusing to remove %s or %s directory: skipping %s",5);
            error(0,0,uVar12,uVar14,uVar13,uVar15);
            fts_skip_tree(lVar7,lVar8);
          }
          else {
            plVar3 = *(long **)(param_2 + 0x10);
            if ((plVar3 == (long *)0x0) ||
               (*(long *)(lVar8 + 0x70) != plVar3[1] || *(long *)(lVar8 + 0x78) != *plVar3)) {
              if (*(char *)(param_2 + 0x18) == '\0') {
LAB_00100b3b:
                iVar6 = prompt(lVar7,lVar8,1,param_2,2,&local_dc);
                if (iVar6 == 3) {
                  if (local_dc != -1) goto LAB_00100938;
                  iVar6 = excise(lVar7,lVar8,param_2,1);
                  if (iVar6 == 2) {
                    rpl_fts_set(lVar7,lVar8,4);
                    rpl_fts_read(lVar7);
                    goto LAB_00100938;
                  }
                }
                uVar16 = iVar6 - 2;
                if (1 < uVar16) {
                  lVar4 = *(long *)(lVar8 + 8);
                  lVar5 = *(long *)(lVar4 + 0x58);
                  while ((-1 < lVar5 && (*(long *)(lVar4 + 0x20) == 0))) {
                    *(undefined8 *)(lVar4 + 0x20) = 1;
                    lVar4 = *(long *)(lVar4 + 8);
                    lVar5 = *(long *)(lVar4 + 0x58);
                  }
                  rpl_fts_set(lVar7,lVar8,4);
                  rpl_fts_read(lVar7);
                  goto LAB_001009f4;
                }
                goto LAB_00100938;
              }
              pcVar11 = (char *)file_name_concat(uVar15,&_LC9,0);
              iVar6 = lstat(pcVar11,&local_d8);
              if (iVar6 == 0) {
                free(pcVar11);
                if (*(__dev_t *)(lVar7 + 0x18) == local_d8.st_dev) goto LAB_00100b3b;
                uVar15 = quotearg_style(4,*(undefined8 *)(lVar8 + 0x38));
                uVar13 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
                error(0,0,uVar13,uVar15);
                uVar15 = dcgettext(0,"and --preserve-root=all is in effect",5);
                error(0,0,uVar15);
              }
              else {
                uVar15 = quotearg_n_style(1,4,*(undefined8 *)(lVar8 + 0x30));
                uVar13 = quotearg_n_style(0,4,pcVar11);
                uVar14 = dcgettext(0,"failed to stat %s: skipping %s",5);
                error(0,0,uVar14,uVar13,uVar15);
                free(pcVar11);
              }
              rpl_fts_set(lVar7,lVar8,4);
              rpl_fts_read(lVar7);
            }
            else {
              if ((**(char **)(lVar8 + 0x38) == '/') && ((*(char **)(lVar8 + 0x38))[1] == '\0')) {
                uVar15 = quotearg_style(4);
                uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
                error(0,0,uVar13,uVar15);
              }
              else {
                uVar15 = quotearg_n_style(1,4,&_LC13);
                uVar13 = quotearg_n_style(0,4,*(undefined8 *)(lVar8 + 0x38));
                uVar14 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
                error(0,0,uVar14,uVar13,uVar15);
              }
              uVar15 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
              error(0,0,uVar15);
              fts_skip_tree(lVar7,lVar8);
            }
          }
        }
      }
      else {
        if (0xb < (ushort)(uVar1 - 2)) {
LAB_00100e90:
          uVar15 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar8 + 0x38));
          uVar2 = *(undefined2 *)(lVar8 + 0x68);
          uVar13 = dcgettext(0,"unexpected failure: fts_info=%d: %s\nplease report to %s",5);
          error(0,0,uVar13,uVar2,uVar15,"bug-coreutils@gnu.org");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((1L << ((byte)uVar1 & 0x3f) & 0x3d58U) == 0) {
          if (uVar1 == 7) {
            uVar15 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar8 + 0x38));
            uVar13 = dcgettext(0,"traversal failed: %s",5);
            uVar17 = *(undefined4 *)(lVar8 + 0x40);
          }
          else {
            if (uVar1 != 2) goto LAB_00100e90;
            uVar15 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar8 + 0x38));
            uVar13 = dcgettext(0,
                               "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                               ,5);
            uVar17 = 0;
          }
          error(0,uVar17,uVar13,uVar15);
          fts_skip_tree(lVar7,lVar8);
        }
        else if ((((uVar1 == 6) && (*(char *)(param_2 + 8) != '\0')) &&
                 (0 < *(long *)(lVar8 + 0x58))) &&
                (*(long *)(lVar8 + 0x70) != *(long *)(lVar7 + 0x18))) {
          mark_ancestor_dirs(lVar8);
          uVar15 = quotearg_style(4,*(undefined8 *)(lVar8 + 0x38));
          uVar13 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
          error(0,0,uVar13,uVar15);
        }
        else {
          bVar20 = (uVar1 & 0xfffd) == 4;
          iVar6 = prompt(lVar7,lVar8,bVar20,param_2,3,&local_dc);
          uVar16 = iVar6 - 2;
          if (uVar16 < 2) {
            iVar6 = excise(lVar7,lVar8,param_2,bVar20);
            uVar16 = iVar6 - 2;
          }
LAB_001009f4:
          if (3 < uVar16) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("((s) == RM_OK || (s) == RM_USER_ACCEPTED || (s) == RM_USER_DECLINED || (s) == RM_ERROR)"
                          ,"src/remove.c",0x27c,"rm");
          }
          if (iVar6 != 5) goto LAB_00100bc0;
        }
      }
      iVar18 = 5;
      lVar8 = rpl_fts_read();
      if (lVar8 == 0) break;
    } while( true );
  }
  piVar9 = __errno_location();
  if (*piVar9 != 0) {
    iVar18 = 5;
    uVar15 = dcgettext(0,"fts_read failed",5);
    error(0,*piVar9,uVar15);
  }
  iVar6 = rpl_fts_close(lVar7);
  if (iVar6 != 0) {
    iVar18 = 5;
    uVar15 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar9,uVar15);
  }
  goto LAB_00100a43;
LAB_00100bc0:
  if ((iVar6 == 4) && (iVar18 == 2)) {
    iVar18 = 4;
  }
  goto LAB_00100938;
}


