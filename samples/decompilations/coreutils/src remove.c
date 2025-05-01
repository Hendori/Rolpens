
/* WARNING: Unknown calling convention */

void mark_ancestor_dirs(FTSENT *ent)

{
  _ftsent *p_Var1;
  
  p_Var1 = ent->fts_parent;
  if (p_Var1->fts_level < 0) {
    return;
  }
  do {
    if (p_Var1->fts_number != 0) {
      return;
    }
    p_Var1->fts_number = 1;
    p_Var1 = p_Var1->fts_parent;
  } while (-1 < p_Var1->fts_level);
  return;
}



/* WARNING: Unknown calling convention */

void fts_skip_tree(FTS *fts,FTSENT *ent)

{
  rpl_fts_set(fts,ent,4);
  rpl_fts_read(fts);
  return;
}



/* WARNING: Unknown calling convention */

RM_status excise(FTS *fts,FTSENT *ent,rm_options *x,_Bool is_dir)

{
  _Bool _Var1;
  uint uVar2;
  long lVar3;
  int iVar4;
  RM_status RVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  stat st;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = unlinkat(fts->fts_cwd_fd,ent->fts_accpath,(uint)is_dir << 9);
  if (iVar4 == 0) {
    if (x->verbose != false) {
      uVar7 = quotearg_style(4,ent->fts_path);
      if (is_dir) {
        uVar8 = dcgettext(0,"removed directory %s\n",5);
      }
      else {
        uVar8 = dcgettext(0,"removed %s\n",5);
      }
      __printf_chk(2,uVar8,uVar7);
    }
    goto LAB_0010016b;
  }
  puVar6 = (uint *)__errno_location();
  uVar2 = *puVar6;
  uVar9 = (ulong)uVar2;
  if (uVar2 == 0x1e) {
    iVar4 = fstatat(fts->fts_cwd_fd,ent->fts_accpath,(stat *)&st,0x100);
    if ((iVar4 == 0) || (*puVar6 != 2)) {
      _Var1 = x->ignore_missing_files;
      *puVar6 = 0x1e;
      if (_Var1 != false) goto LAB_001000d8;
    }
    else {
      uVar9 = 2;
      if (x->ignore_missing_files != false) goto LAB_0010016b;
    }
    if (ent->fts_info == 4) {
LAB_001001c9:
      if (((0x8000320000U >> (uVar9 & 0x3f) & 1) != 0) && (ent->fts_errno != 0)) {
        *puVar6 = ent->fts_errno;
      }
    }
  }
  else {
    if (x->ignore_missing_files == false) goto LAB_001000d8;
    if (uVar2 == 0x16) {
LAB_0010016b:
      RVar5 = RM_OK;
      goto LAB_00100130;
    }
    if ((int)uVar2 < 0x17) {
      if ((uVar2 == 2) || (uVar2 == 0x14)) goto LAB_0010016b;
    }
    else if (uVar2 == 0x54) goto LAB_0010016b;
LAB_001000d8:
    if ((ent->fts_info == 4) && (uVar2 < 0x28)) goto LAB_001001c9;
  }
  uVar7 = quotearg_style(4,ent->fts_path);
  uVar8 = dcgettext(0,"cannot remove %s",5);
  error(0,*puVar6,uVar8,uVar7);
  mark_ancestor_dirs(ent);
  RVar5 = RM_ERROR;
LAB_00100130:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return RVar5;
}



/* WARNING: Unknown calling convention */

int get_dir_status(FTS *fts,FTSENT *ent,int *dir_status)

{
  int __fd;
  DIR *__dirp;
  int *piVar1;
  dirent *pdVar2;
  int iVar3;
  
  if (*dir_status != -2) {
    return *dir_status;
  }
  __fd = openat(fts->fts_cwd_fd,ent->fts_accpath,0x30900);
  if (__fd < 0) {
    piVar1 = __errno_location();
    iVar3 = *piVar1;
    *dir_status = iVar3;
  }
  else {
    __dirp = fdopendir(__fd);
    if (__dirp == (DIR *)0x0) {
      piVar1 = __errno_location();
      iVar3 = *piVar1;
      close(__fd);
      *dir_status = iVar3;
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
            *dir_status = -1;
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
      *dir_status = iVar3;
    }
  }
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

RM_status prompt(FTS *fts,FTSENT *ent,_Bool is_dir,rm_options *x,Prompt_action mode,int *dir_status)

{
  char *__file;
  long lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  rm_interactive rVar5;
  int iVar6;
  RM_status RVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  stat st;
  
  pcVar14 = ent->fts_path;
  __file = ent->fts_accpath;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = fts->fts_cwd_fd;
  st.st_atim.tv_nsec = -1;
  RVar7 = RM_USER_DECLINED;
  if (ent->fts_number != 0) goto LAB_001004b5;
  rVar5 = x->interactive;
  if (rVar5 == RMI_NEVER) {
LAB_001004b0:
    RVar7 = RM_OK;
    goto LAB_001004b5;
  }
  if (x->ignore_missing_files == false) {
    if ((rVar5 != RMI_ALWAYS) && (x->stdin_tty == false)) goto LAB_001004b0;
    cVar3 = can_write_any_file();
    if (cVar3 != '\0') {
LAB_0010040c:
      rVar5 = x->interactive;
      goto LAB_00100411;
    }
    if (st.st_atim.tv_nsec < 0) {
      if (st.st_atim.tv_nsec != -1) goto LAB_00100857;
      iVar6 = fstatat(iVar8,__file,(stat *)&st,0x100);
      if (iVar6 == 0) goto LAB_00100525;
LAB_00100877:
      st.st_atim.tv_nsec = -2;
      piVar11 = __errno_location();
      st.st_ino = (__ino_t)*piVar11;
      iVar6 = *piVar11;
LAB_0010086c:
      *piVar11 = iVar6;
    }
    else {
LAB_00100525:
      if (((st.st_mode & 0xf000) == 0xa000) || (iVar6 = faccessat(iVar8,__file,2,0x200), iVar6 == 0)
         ) goto LAB_0010040c;
      piVar11 = __errno_location();
      iVar6 = *piVar11;
      if (iVar6 == 0xd) {
        bVar2 = true;
        goto joined_r0x001005b0;
      }
    }
    uVar9 = quotearg_style(4,pcVar14);
LAB_001007c3:
    uVar13 = dcgettext(0,"cannot remove %s",5);
    error(0,iVar6,uVar13,uVar9);
LAB_00100726:
    RVar7 = RM_ERROR;
    goto LAB_001004b5;
  }
LAB_00100411:
  if (rVar5 != RMI_ALWAYS) goto LAB_001004b0;
  bVar2 = false;
joined_r0x001005b0:
  if (is_dir) {
LAB_0010042b:
    if (x->recursive == false) {
      if ((x->remove_empty_directories == false) ||
         (iVar6 = get_dir_status(fts,ent,dir_status), iVar6 == 0)) {
        iVar6 = *dir_status;
        if (iVar6 < 1) {
          uVar9 = quotearg_style(4,pcVar14);
          iVar6 = 0x15;
        }
        else {
          uVar9 = quotearg_style(4,pcVar14);
        }
        goto LAB_001007c3;
      }
      uVar9 = quotearg_style(4,pcVar14);
    }
    else {
      uVar9 = quotearg_style(4,pcVar14);
    }
    if ((mode != PA_DESCEND_INTO_DIR) ||
       (iVar6 = get_dir_status(fts,ent,dir_status), uVar13 = _program_name, iVar6 != 0))
    goto LAB_00100634;
    if (!bVar2) {
      pcVar14 = "%s: descend into directory %s? ";
      goto LAB_0010066c;
    }
    uVar10 = dcgettext(0,"%s: descend into write-protected directory %s? ",5);
LAB_00100676:
    __fprintf_chk(_stderr,2,uVar10,uVar13,uVar9);
  }
  else {
    if (st.st_atim.tv_nsec < 0) {
      if (st.st_atim.tv_nsec != -1) {
LAB_00100857:
        piVar11 = __errno_location();
        iVar6 = (int)st.st_ino;
        goto LAB_0010086c;
      }
      iVar6 = fstatat(iVar8,__file,(stat *)&st,0x100);
      if (iVar6 != 0) goto LAB_00100877;
    }
    if ((st.st_mode & 0xf000) == 0xa000) {
      if (x->interactive != RMI_ALWAYS) goto LAB_001004b0;
    }
    else if ((st.st_mode & 0xf000) == 0x4000) goto LAB_0010042b;
    uVar9 = quotearg_style(4,pcVar14);
LAB_00100634:
    if (0 < *dir_status) {
      if ((x->remove_empty_directories != true) || (*dir_status != 0xd)) {
        uVar13 = dcgettext(0,"cannot remove %s",5);
        error(0,*dir_status,uVar13,uVar9);
        goto LAB_00100726;
      }
      if (mode == PA_DESCEND_INTO_DIR) goto LAB_001004b0;
      pcVar14 = "%s: attempt removal of inaccessible directory %s? ";
LAB_0010066c:
      uVar13 = _program_name;
      uVar10 = dcgettext(0,pcVar14,5);
      goto LAB_00100676;
    }
    if (st.st_atim.tv_nsec < 0) {
      if (st.st_atim.tv_nsec == -1) {
        iVar8 = fstatat(iVar8,__file,(stat *)&st,0x100);
        if (iVar8 == 0) goto LAB_00100730;
        st.st_atim.tv_nsec = -2;
        piVar11 = __errno_location();
        st.st_ino = (__ino_t)*piVar11;
        iVar8 = *piVar11;
      }
      else {
        piVar11 = __errno_location();
        iVar8 = (int)st.st_ino;
      }
      *piVar11 = iVar8;
      uVar13 = dcgettext(0,"cannot remove %s",5);
      error(0,*piVar11,uVar13,uVar9);
      goto LAB_00100726;
    }
LAB_00100730:
    uVar10 = file_type(&st);
    uVar13 = _program_name;
    if (bVar2) {
      uVar12 = dcgettext(0,"%s: remove write-protected %s %s? ",5);
    }
    else {
      uVar12 = dcgettext(0,"%s: remove %s %s? ",5);
    }
    __fprintf_chk(_stderr,2,uVar12,uVar13,uVar10,uVar9);
  }
  bVar4 = yesno();
  RVar7 = RM_USER_DECLINED - bVar4;
LAB_001004b5:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return RVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

RM_status rm(char **file,rm_options *x)

{
  ushort uVar1;
  long lVar2;
  dev_ino *pdVar3;
  _ftsent *p_Var4;
  long lVar5;
  RM_status RVar6;
  int iVar7;
  FTS *fts;
  FTSENT *ent;
  int *piVar8;
  DIR *__dirp;
  dirent *pdVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  RM_status RVar17;
  int iVar18;
  long in_FS_OFFSET;
  bool is_dir;
  int dir_status;
  stat statbuf;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (*file == (char *)0x0) {
    RVar17 = RM_OK;
LAB_00100a43:
    if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
      return RVar17;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  fts = (FTS *)xfts_open(file,(-(uint)(x->one_file_system == false) & 0xffffffc0) + 600,0);
  RVar17 = RM_OK;
LAB_00100938:
  ent = (FTSENT *)rpl_fts_read(fts);
  if (ent != (FTSENT *)0x0) {
    do {
      uVar1 = ent->fts_info;
      dir_status = -2;
      if (uVar1 == 1) {
        if (x->recursive == false) {
          if (x->remove_empty_directories == false) {
LAB_00100f2e:
            uVar15 = 0x15;
          }
          else {
            iVar7 = openat(fts->fts_cwd_fd,ent->fts_accpath,0x30900);
            if (iVar7 < 0) {
              piVar8 = __errno_location();
              iVar18 = *piVar8;
            }
            else {
              __dirp = fdopendir(iVar7);
              if (__dirp == (DIR *)0x0) {
                piVar8 = __errno_location();
                iVar18 = *piVar8;
                close(iVar7);
              }
              else {
                piVar8 = __errno_location();
                *piVar8 = 0;
LAB_00100ac0:
                pdVar9 = readdir(__dirp);
                if (pdVar9 != (dirent *)0x0) {
                  do {
                    if (pdVar9->d_name[0] != '.') {
LAB_00100adb:
                      iVar18 = *piVar8;
                      closedir(__dirp);
                      goto LAB_00100ae6;
                    }
                    if (pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] == '\0')
                    goto LAB_00100ac0;
                    if (pdVar9->d_name[(ulong)(pdVar9->d_name[1] == '.') + 1] != '/')
                    goto LAB_00100adb;
                    pdVar9 = readdir(__dirp);
                    if (pdVar9 == (dirent *)0x0) break;
                  } while( true );
                }
                iVar18 = *piVar8;
                closedir(__dirp);
                if (iVar18 == 0) {
                  dir_status = -1;
                  goto LAB_00100af4;
                }
              }
            }
LAB_00100ae6:
            dir_status = iVar18;
            if (iVar18 != 0) goto LAB_00100af4;
            if (x->remove_empty_directories == false) goto LAB_00100f2e;
            uVar15 = 0x27;
          }
          uVar13 = quotearg_style(4,ent->fts_path);
          uVar14 = dcgettext(0,"cannot remove %s",5);
          error(0,uVar15,uVar14,uVar13);
          mark_ancestor_dirs(ent);
          fts_skip_tree(fts,ent);
        }
        else {
LAB_00100af4:
          if (ent->fts_level != 0) goto LAB_00100b3b;
          pcVar12 = ent->fts_accpath;
          pcVar10 = (char *)last_component(pcVar12);
          if ((*pcVar10 == '.') &&
             ((pcVar10[(ulong)(pcVar10[1] == '.') + 1] == '\0' ||
              (pcVar10[(ulong)(pcVar10[1] == '.') + 1] == '/')))) {
            uVar15 = quotearg_n_style(2,4,ent->fts_path);
            uVar13 = quotearg_n_style(1,4,&_LC9);
            uVar14 = quotearg_n_style(0,4,&_LC10);
            uVar11 = dcgettext(0,"refusing to remove %s or %s directory: skipping %s",5);
            error(0,0,uVar11,uVar14,uVar13,uVar15);
            fts_skip_tree(fts,ent);
          }
          else {
            pdVar3 = x->root_dev_ino;
            if ((pdVar3 == (dev_ino *)0x0) ||
               (ent->fts_statp[0].st_dev != pdVar3->st_dev ||
                ent->fts_statp[0].st_ino != pdVar3->st_ino)) {
              if (x->preserve_all_root == false) {
LAB_00100b3b:
                RVar6 = prompt(fts,ent,true,x,PA_DESCEND_INTO_DIR,&dir_status);
                if (RVar6 == RM_USER_ACCEPTED) {
                  if (dir_status != -1) goto LAB_00100938;
                  RVar6 = excise(fts,ent,x,true);
                  if (RVar6 == RM_OK) {
                    rpl_fts_set(fts,ent,4);
                    rpl_fts_read(fts);
                    goto LAB_00100938;
                  }
                }
                uVar16 = RVar6 - RM_OK;
                if (1 < uVar16) {
                  p_Var4 = ent->fts_parent;
                  lVar5 = p_Var4->fts_level;
                  while ((-1 < lVar5 && (p_Var4->fts_number == 0))) {
                    p_Var4->fts_number = 1;
                    p_Var4 = p_Var4->fts_parent;
                    lVar5 = p_Var4->fts_level;
                  }
                  rpl_fts_set(fts,ent,4);
                  rpl_fts_read(fts);
                  goto LAB_001009f4;
                }
                goto LAB_00100938;
              }
              pcVar12 = (char *)file_name_concat(pcVar12,&_LC9,0);
              iVar7 = lstat(pcVar12,(stat *)&statbuf);
              if (iVar7 == 0) {
                free(pcVar12);
                if (fts->fts_dev == statbuf.st_dev) goto LAB_00100b3b;
                uVar15 = quotearg_style(4,ent->fts_path);
                uVar13 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
                error(0,0,uVar13,uVar15);
                uVar15 = dcgettext(0,"and --preserve-root=all is in effect",5);
                error(0,0,uVar15);
              }
              else {
                uVar15 = quotearg_n_style(1,4,ent->fts_accpath);
                uVar13 = quotearg_n_style(0,4,pcVar12);
                uVar14 = dcgettext(0,"failed to stat %s: skipping %s",5);
                error(0,0,uVar14,uVar13,uVar15);
                free(pcVar12);
              }
              rpl_fts_set(fts,ent,4);
              rpl_fts_read(fts);
            }
            else {
              if ((*ent->fts_path == '/') && (ent->fts_path[1] == '\0')) {
                uVar15 = quotearg_style(4);
                uVar13 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
                error(0,0,uVar13,uVar15);
              }
              else {
                uVar15 = quotearg_n_style(1,4,&_LC13);
                uVar13 = quotearg_n_style(0,4,ent->fts_path);
                uVar14 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
                error(0,0,uVar14,uVar13,uVar15);
              }
              uVar15 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
              error(0,0,uVar15);
              fts_skip_tree(fts,ent);
            }
          }
        }
      }
      else {
        if (0xb < (ushort)(uVar1 - 2)) {
LAB_00100e90:
          uVar15 = quotearg_n_style_colon(0,3,ent->fts_path);
          uVar1 = ent->fts_info;
          uVar13 = dcgettext(0,"unexpected failure: fts_info=%d: %s\nplease report to %s",5);
          error(0,0,uVar13,uVar1,uVar15,"bug-coreutils@gnu.org");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((1L << ((byte)uVar1 & 0x3f) & 0x3d58U) == 0) {
          if (uVar1 == 7) {
            uVar15 = quotearg_n_style_colon(0,3,ent->fts_path);
            uVar13 = dcgettext(0,"traversal failed: %s",5);
            iVar7 = ent->fts_errno;
          }
          else {
            if (uVar1 != 2) goto LAB_00100e90;
            uVar15 = quotearg_n_style_colon(0,3,ent->fts_path);
            uVar13 = dcgettext(0,
                               "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                               ,5);
            iVar7 = 0;
          }
          error(0,iVar7,uVar13,uVar15);
          fts_skip_tree(fts,ent);
        }
        else if ((((uVar1 == 6) && (x->one_file_system != false)) && (0 < ent->fts_level)) &&
                (ent->fts_statp[0].st_dev != fts->fts_dev)) {
          mark_ancestor_dirs(ent);
          uVar15 = quotearg_style(4,ent->fts_path);
          uVar13 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
          error(0,0,uVar13,uVar15);
        }
        else {
          is_dir = (uVar1 & 0xfffd) == 4;
          RVar6 = prompt(fts,ent,is_dir,x,PA_REMOVE_DIR,&dir_status);
          uVar16 = RVar6 - RM_OK;
          if (uVar16 < 2) {
            RVar6 = excise(fts,ent,x,is_dir);
            uVar16 = RVar6 - RM_OK;
          }
LAB_001009f4:
          if (3 < uVar16) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("((s) == RM_OK || (s) == RM_USER_ACCEPTED || (s) == RM_USER_DECLINED || (s) == RM_ERROR)"
                          ,"src/remove.c",0x27c,"rm");
          }
          if (RVar6 != RM_ERROR) goto LAB_00100bc0;
        }
      }
      RVar17 = RM_ERROR;
      ent = (FTSENT *)rpl_fts_read();
      if (ent == (FTSENT *)0x0) break;
    } while( true );
  }
  piVar8 = __errno_location();
  if (*piVar8 != 0) {
    RVar17 = RM_ERROR;
    uVar15 = dcgettext(0,"fts_read failed",5);
    error(0,*piVar8,uVar15);
  }
  iVar7 = rpl_fts_close(fts);
  if (iVar7 != 0) {
    RVar17 = RM_ERROR;
    uVar15 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar8,uVar15);
  }
  goto LAB_00100a43;
LAB_00100bc0:
  if ((RVar6 == RM_USER_DECLINED) && (RVar17 == RM_OK)) {
    RVar17 = RM_USER_DECLINED;
  }
  goto LAB_00100938;
}


