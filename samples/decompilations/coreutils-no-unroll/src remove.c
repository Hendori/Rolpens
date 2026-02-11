
undefined8 excise(long param_1,long param_2,char *param_3,byte param_4)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  stat sStack_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = unlinkat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),(uint)param_4 << 9);
  if (iVar5 == 0) {
    if (param_3[0x1a] != '\0') {
      uVar7 = quotearg_style(4,*(undefined8 *)(param_2 + 0x38));
      if (param_4 == 0) {
        uVar8 = dcgettext(0,"removed %s\n",5);
      }
      else {
        uVar8 = dcgettext(0,"removed directory %s\n",5);
      }
      __printf_chk(2,uVar8,uVar7);
    }
    goto LAB_0010012b;
  }
  puVar6 = (uint *)__errno_location();
  uVar2 = *puVar6;
  uVar9 = (ulong)uVar2;
  if (uVar2 == 0x1e) {
    iVar5 = fstatat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),&sStack_c8,0x100);
    if ((iVar5 == 0) || (*puVar6 != 2)) {
      cVar1 = *param_3;
      *puVar6 = 0x1e;
      if ((cVar1 != '\0') && (*(short *)(param_2 + 0x68) == 4)) {
        uVar9 = 0x1e;
LAB_00100199:
        if (((0x8000320000U >> (uVar9 & 0x3f) & 1) != 0) && (*(uint *)(param_2 + 0x40) != 0)) {
          *puVar6 = *(uint *)(param_2 + 0x40);
        }
      }
    }
    else if (*param_3 != '\0') goto LAB_0010012b;
  }
  else {
    if (*param_3 == '\0') goto LAB_00100064;
    if (uVar2 == 0x16) {
LAB_0010012b:
      uVar7 = 2;
      goto LAB_001000d7;
    }
    if ((int)uVar2 < 0x17) {
      if ((uVar2 == 2) || (uVar2 == 0x14)) goto LAB_0010012b;
    }
    else if (uVar2 == 0x54) goto LAB_0010012b;
LAB_00100064:
    if ((*(short *)(param_2 + 0x68) == 4) && (uVar2 < 0x28)) goto LAB_00100199;
  }
  uVar7 = quotearg_style(4,*(undefined8 *)(param_2 + 0x38));
  uVar8 = dcgettext(0,"cannot remove %s",5);
  error(0,*puVar6,uVar8,uVar7);
  lVar3 = *(long *)(param_2 + 8);
  lVar4 = *(long *)(lVar3 + 0x58);
  while ((-1 < lVar4 && (*(long *)(lVar3 + 0x20) == 0))) {
    *(undefined8 *)(lVar3 + 0x20) = 1;
    lVar3 = *(long *)(lVar3 + 8);
    lVar4 = *(long *)(lVar3 + 0x58);
  }
  uVar7 = 5;
LAB_001000d7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int prompt(long param_1,long param_2,char param_3,char *param_4,int param_5,int *param_6)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  undefined8 uVar10;
  DIR *pDVar11;
  dirent *pdVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  undefined8 local_108;
  stat local_d8;
  long local_40;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar13 = *(char **)(param_2 + 0x30);
  iVar4 = 4;
  local_d8.st_atim.tv_nsec = -1;
  if (*(long *)(param_2 + 0x20) != 0) goto LAB_0010038d;
  iVar4 = *(int *)(param_4 + 4);
  if (iVar4 == 5) {
LAB_00100388:
    iVar4 = 2;
    goto LAB_0010038d;
  }
  if (*param_4 == '\0') {
    if ((iVar4 != 3) && (param_4[0x19] == '\0')) goto LAB_00100388;
    cVar2 = can_write_any_file();
    if (cVar2 != '\0') {
LAB_001002e7:
      iVar4 = *(int *)(param_4 + 4);
      goto LAB_001002ea;
    }
    if (local_d8.st_atim.tv_nsec < 0) {
      if (local_d8.st_atim.tv_nsec != -1) goto LAB_00100849;
      iVar4 = fstatat(iVar5,pcVar13,&local_d8,0x100);
      if (iVar4 == 0) goto LAB_00100410;
LAB_00100866:
      local_d8.st_atim.tv_nsec = -2;
      piVar9 = __errno_location();
      iVar4 = *piVar9;
      local_d8.st_ino = (__ino_t)iVar4;
      *piVar9 = iVar4;
    }
    else {
LAB_00100410:
      if (((local_d8.st_mode & 0xf000) == 0xa000) ||
         (iVar4 = faccessat(iVar5,pcVar13,2,0x200), iVar4 == 0)) goto LAB_001002e7;
      piVar9 = __errno_location();
      iVar4 = *piVar9;
      if (iVar4 == 0xd) {
        bVar1 = true;
        goto joined_r0x001004aa;
      }
    }
LAB_0010048a:
    uVar7 = quotearg_style(4,uVar7);
LAB_0010034a:
    uVar8 = dcgettext(0,"cannot remove %s",5);
    error(0,iVar4,uVar8,uVar7);
LAB_00100651:
    iVar4 = 5;
    goto LAB_0010038d;
  }
LAB_001002ea:
  if (iVar4 != 3) goto LAB_00100388;
  bVar1 = false;
joined_r0x001004aa:
  if (param_3 == '\0') {
    if (local_d8.st_atim.tv_nsec < 0) {
      if (local_d8.st_atim.tv_nsec != -1) {
LAB_00100849:
        piVar9 = __errno_location();
        *piVar9 = (int)local_d8.st_ino;
        iVar4 = (int)local_d8.st_ino;
        goto LAB_0010048a;
      }
      iVar4 = fstatat(iVar5,pcVar13,&local_d8,0x100);
      if (iVar4 != 0) goto LAB_00100866;
    }
    if ((local_d8.st_mode & 0xf000) == 0xa000) {
      if (*(int *)(param_4 + 4) != 3) goto LAB_00100388;
    }
    else if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_00100304;
    local_108 = quotearg_style(4,uVar7);
    iVar4 = *param_6;
    goto LAB_0010052a;
  }
LAB_00100304:
  if (param_4[9] == '\0') {
    iVar4 = *param_6;
    if (param_4[10] == '\0') {
      if (0 < iVar4) goto LAB_0010048a;
    }
    else {
      if (iVar4 == -2) {
        iVar6 = openat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),0x30900);
        if (iVar6 < 0) {
          piVar9 = __errno_location();
          iVar4 = *piVar9;
        }
        else {
          pDVar11 = fdopendir(iVar6);
          if (pDVar11 == (DIR *)0x0) {
            piVar9 = __errno_location();
            iVar4 = *piVar9;
            close(iVar6);
          }
          else {
            piVar9 = __errno_location();
            *piVar9 = 0;
            do {
              while( true ) {
                pdVar12 = readdir(pDVar11);
                if (pdVar12 == (dirent *)0x0) {
                  iVar4 = *piVar9;
                  closedir(pDVar11);
                  if (iVar4 != 0) goto LAB_00100968;
                  *param_6 = -1;
                  goto LAB_00100708;
                }
                if (pdVar12->d_name[0] != '.') goto LAB_00100940;
                cVar2 = pdVar12->d_name[1];
                if (cVar2 == '.') break;
                if ((cVar2 != '\0') && (cVar2 != '/')) goto LAB_00100940;
              }
            } while ((pdVar12->d_name[2] == '\0') || (pdVar12->d_name[2] == '/'));
LAB_00100940:
            iVar4 = *piVar9;
            closedir(pDVar11);
          }
        }
LAB_00100968:
        *param_6 = iVar4;
      }
      if (iVar4 != 0) goto LAB_00100708;
    }
    uVar7 = quotearg_style(4,uVar7);
    iVar4 = 0x15;
    goto LAB_0010034a;
  }
LAB_00100708:
  local_108 = quotearg_style(4,uVar7);
  iVar4 = *param_6;
  if (param_5 == 2) {
    if (iVar4 == -2) {
      iVar6 = openat(*(int *)(param_1 + 0x2c),*(char **)(param_2 + 0x30),0x30900);
      if (iVar6 < 0) {
        piVar9 = __errno_location();
        iVar4 = *piVar9;
      }
      else {
        pDVar11 = fdopendir(iVar6);
        if (pDVar11 == (DIR *)0x0) {
          piVar9 = __errno_location();
          iVar4 = *piVar9;
          close(iVar6);
        }
        else {
          piVar9 = __errno_location();
          *piVar9 = 0;
          do {
            while( true ) {
              pdVar12 = readdir(pDVar11);
              if (pdVar12 == (dirent *)0x0) {
                iVar4 = *piVar9;
                closedir(pDVar11);
                if (iVar4 != 0) goto LAB_001007e5;
                *param_6 = -1;
                goto LAB_001005c8;
              }
              if (pdVar12->d_name[0] != '.') goto LAB_001007ce;
              cVar2 = pdVar12->d_name[1];
              if (cVar2 == '.') break;
              if ((cVar2 != '\0') && (cVar2 != '/')) goto LAB_001007ce;
            }
          } while ((pdVar12->d_name[2] == '\0') || (pdVar12->d_name[2] == '/'));
LAB_001007ce:
          iVar4 = *piVar9;
          closedir(pDVar11);
        }
      }
LAB_001007e5:
      *param_6 = iVar4;
    }
    uVar7 = _program_name;
    if (iVar4 != 0) goto LAB_0010052a;
    if (!bVar1) {
      pcVar13 = "%s: descend into directory %s? ";
      goto LAB_00100562;
    }
    uVar8 = dcgettext(0,"%s: descend into write-protected directory %s? ",5);
LAB_0010056c:
    __fprintf_chk(_stderr,2,uVar8,uVar7,local_108);
  }
  else {
LAB_0010052a:
    if (0 < iVar4) {
      if ((param_4[10] != '\x01') || (iVar4 != 0xd)) {
        uVar7 = dcgettext(0,"cannot remove %s",5);
        error(0,*param_6,uVar7,local_108);
        goto LAB_00100651;
      }
      if (param_5 == 2) goto LAB_00100388;
      pcVar13 = "%s: attempt removal of inaccessible directory %s? ";
LAB_00100562:
      uVar7 = _program_name;
      uVar8 = dcgettext(0,pcVar13,5);
      goto LAB_0010056c;
    }
LAB_001005c8:
    if (local_d8.st_atim.tv_nsec < 0) {
      if (local_d8.st_atim.tv_nsec == -1) {
        iVar5 = fstatat(iVar5,pcVar13,&local_d8,0x100);
        if (iVar5 == 0) goto LAB_00100660;
        local_d8.st_atim.tv_nsec = -2;
        piVar9 = __errno_location();
        local_d8.st_ino = (__ino_t)*piVar9;
        iVar5 = *piVar9;
      }
      else {
        piVar9 = __errno_location();
        iVar5 = (int)local_d8.st_ino;
      }
      *piVar9 = iVar5;
      uVar7 = dcgettext(0,"cannot remove %s",5);
      error(0,*piVar9,uVar7,local_108);
      goto LAB_00100651;
    }
LAB_00100660:
    uVar8 = file_type(&local_d8);
    uVar7 = _program_name;
    if (bVar1) {
      uVar10 = dcgettext(0,"%s: remove write-protected %s %s? ",5);
    }
    else {
      uVar10 = dcgettext(0,"%s: remove %s %s? ",5);
    }
    __fprintf_chk(_stderr,2,uVar10,uVar7,uVar8,local_108);
  }
  bVar3 = yesno();
  iVar4 = 4 - (uint)bVar3;
LAB_0010038d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int rm(long *param_1,long param_2)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  DIR *__dirp;
  dirent *pdVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined4 uVar19;
  int iVar20;
  long in_FS_OFFSET;
  bool bVar21;
  int local_dc;
  stat local_d8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 == 0) {
    iVar20 = 2;
LAB_00100bd4:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return iVar20;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  iVar20 = 2;
  lVar8 = xfts_open(param_1,(-(uint)(*(char *)(param_2 + 8) == '\0') & 0xffffffc0) + 600,0);
LAB_00100ab8:
  lVar9 = rpl_fts_read(lVar8);
  if (lVar9 != 0) {
    do {
      uVar2 = *(ushort *)(lVar9 + 0x68);
      local_dc = -2;
      if (uVar2 == 1) {
        if (*(char *)(param_2 + 9) == '\0') {
          if (*(char *)(param_2 + 10) == '\0') {
LAB_00101233:
            uVar16 = 0x15;
          }
          else {
            iVar7 = openat(*(int *)(lVar8 + 0x2c),*(char **)(lVar9 + 0x30),0x30900);
            if (iVar7 < 0) {
              piVar10 = __errno_location();
              local_dc = *piVar10;
            }
            else {
              __dirp = fdopendir(iVar7);
              if (__dirp == (DIR *)0x0) {
                piVar10 = __errno_location();
                iVar4 = *piVar10;
                close(iVar7);
                local_dc = iVar4;
              }
              else {
                piVar10 = __errno_location();
                *piVar10 = 0;
LAB_00100c57:
                pdVar11 = readdir(__dirp);
                if (pdVar11 != (dirent *)0x0) {
                  do {
                    if (pdVar11->d_name[0] != '.') {
LAB_00100c72:
                      iVar7 = *piVar10;
                      closedir(__dirp);
                      local_dc = iVar7;
                      goto LAB_00100c85;
                    }
                    cVar1 = pdVar11->d_name[1];
                    if (cVar1 == '.') {
                      if ((pdVar11->d_name[2] != '\0') && (pdVar11->d_name[2] != '/'))
                      goto LAB_00100c72;
                      goto LAB_00100c57;
                    }
                    if (cVar1 == '\0') goto LAB_00100c57;
                    if (cVar1 != '/') goto LAB_00100c72;
                    pdVar11 = readdir(__dirp);
                    if (pdVar11 == (dirent *)0x0) break;
                  } while( true );
                }
                iVar7 = *piVar10;
                closedir(__dirp);
                local_dc = iVar7;
                if (iVar7 == 0) {
                  local_dc = -1;
                  goto LAB_00100c91;
                }
              }
            }
LAB_00100c85:
            if (local_dc != 0) goto LAB_00100c91;
            if (*(char *)(param_2 + 10) == '\0') goto LAB_00101233;
            uVar16 = 0x27;
          }
          uVar15 = quotearg_style(4,*(undefined8 *)(lVar9 + 0x38));
          uVar17 = dcgettext(0,"cannot remove %s",5);
          error(0,uVar16,uVar17,uVar15);
          lVar14 = *(long *)(lVar9 + 8);
          if (-1 < *(long *)(lVar14 + 0x58)) goto LAB_001011cf;
          goto LAB_00100e03;
        }
LAB_00100c91:
        if (*(long *)(lVar9 + 0x58) == 0) {
          uVar16 = *(undefined8 *)(lVar9 + 0x30);
          pcVar12 = (char *)last_component(uVar16);
          if ((*pcVar12 == '.') &&
             ((pcVar12[(ulong)(pcVar12[1] == '.') + 1] == '\0' ||
              (pcVar12[(ulong)(pcVar12[1] == '.') + 1] == '/')))) {
            uVar16 = quotearg_n_style(2,4,*(undefined8 *)(lVar9 + 0x38));
            uVar15 = quotearg_n_style(1,4,&_LC9);
            uVar17 = quotearg_n_style(0,4,&_LC10);
            uVar13 = dcgettext(0,"refusing to remove %s or %s directory: skipping %s",5);
            error(0,0,uVar13,uVar17,uVar15,uVar16);
            goto LAB_00100e03;
          }
          plVar5 = *(long **)(param_2 + 0x10);
          if ((plVar5 != (long *)0x0) &&
             (*(long *)(lVar9 + 0x70) == plVar5[1] && *(long *)(lVar9 + 0x78) == *plVar5)) {
            if ((**(char **)(lVar9 + 0x38) == '/') && ((*(char **)(lVar9 + 0x38))[1] == '\0')) {
              uVar16 = quotearg_style(4);
              uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
              error(0,0,uVar15,uVar16);
            }
            else {
              uVar16 = quotearg_n_style(1,4,&_LC13);
              uVar15 = quotearg_n_style(0,4,*(undefined8 *)(lVar9 + 0x38));
              uVar17 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
              error(0,0,uVar17,uVar15,uVar16);
            }
            pcVar12 = "use --no-preserve-root to override this failsafe";
LAB_00100fb1:
            uVar16 = dcgettext(0,pcVar12,5);
            error(0,0,uVar16);
            goto LAB_00100e03;
          }
          if (*(char *)(param_2 + 0x18) != '\0') {
            pcVar12 = (char *)file_name_concat(uVar16,&_LC9,0);
            iVar7 = lstat(pcVar12,&local_d8);
            if (iVar7 != 0) {
              uVar16 = quotearg_n_style(1,4,*(undefined8 *)(lVar9 + 0x30));
              uVar15 = quotearg_n_style(0,4,pcVar12);
              uVar17 = dcgettext(0,"failed to stat %s: skipping %s",5);
              error(0,0,uVar17,uVar15,uVar16);
              free(pcVar12);
              goto LAB_00100e03;
            }
            free(pcVar12);
            if (*(__dev_t *)(lVar8 + 0x18) != local_d8.st_dev) {
              uVar16 = quotearg_style(4,*(undefined8 *)(lVar9 + 0x38));
              uVar15 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
              error(0,0,uVar15,uVar16);
              pcVar12 = "and --preserve-root=all is in effect";
              goto LAB_00100fb1;
            }
          }
        }
        iVar7 = prompt(lVar8,lVar9,1,param_2,2,&local_dc);
        if (iVar7 == 3) {
          if (local_dc != -1) goto LAB_00100ab8;
          iVar7 = excise(lVar8,lVar9,param_2,1);
          if (iVar7 == 2) {
            rpl_fts_set(lVar8,lVar9,4);
            rpl_fts_read(lVar8);
            goto LAB_00100ab8;
          }
        }
        uVar18 = iVar7 - 2;
        if (uVar18 < 2) goto LAB_00100ab8;
        lVar14 = *(long *)(lVar9 + 8);
        lVar6 = *(long *)(lVar14 + 0x58);
        while ((-1 < lVar6 && (*(long *)(lVar14 + 0x20) == 0))) {
          *(undefined8 *)(lVar14 + 0x20) = 1;
          lVar14 = *(long *)(lVar14 + 8);
          lVar6 = *(long *)(lVar14 + 0x58);
        }
        rpl_fts_set(lVar8,lVar9,4);
        rpl_fts_read(lVar8);
      }
      else {
        if (0xb < (ushort)(uVar2 - 2)) {
LAB_00100fe7:
          uVar16 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar9 + 0x38));
          uVar3 = *(undefined2 *)(lVar9 + 0x68);
          uVar15 = dcgettext(0,"unexpected failure: fts_info=%d: %s\nplease report to %s",5);
          error(0,0,uVar15,uVar3,uVar16,"bug-coreutils@gnu.org");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if ((1L << ((byte)uVar2 & 0x3f) & 0x3d58U) == 0) {
          if (uVar2 == 7) {
            uVar16 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar9 + 0x38));
            uVar15 = dcgettext(0,"traversal failed: %s",5);
            uVar19 = *(undefined4 *)(lVar9 + 0x40);
          }
          else {
            if (uVar2 != 2) goto LAB_00100fe7;
            uVar16 = quotearg_n_style_colon(0,3,*(undefined8 *)(lVar9 + 0x38));
            uVar15 = dcgettext(0,
                               "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                               ,5);
            uVar19 = 0;
          }
          error(0,uVar19,uVar15,uVar16);
          goto LAB_00100e03;
        }
        if ((((uVar2 == 6) && (*(char *)(param_2 + 8) != '\0')) && (0 < *(long *)(lVar9 + 0x58))) &&
           (*(long *)(lVar9 + 0x70) != *(long *)(lVar8 + 0x18))) {
          lVar14 = *(long *)(lVar9 + 8);
          if (-1 < *(long *)(lVar14 + 0x58)) goto LAB_001010a3;
          goto LAB_001010aa;
        }
        bVar21 = (uVar2 & 0xfffd) == 4;
        iVar7 = prompt(lVar8,lVar9,bVar21,param_2,3,&local_dc);
        uVar18 = iVar7 - 2;
        if (uVar18 < 2) {
          iVar7 = excise(lVar8,lVar9,param_2,bVar21);
          uVar18 = iVar7 - 2;
        }
      }
      if (3 < uVar18) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("((s) == RM_OK || (s) == RM_USER_ACCEPTED || (s) == RM_USER_DECLINED || (s) == RM_ERROR)"
                      ,"src/remove.c",0x27c,"rm");
      }
      if (iVar7 == 5) goto LAB_00100e20;
      if (iVar7 != 4) goto LAB_00100ab8;
      if (iVar20 == 2) {
        iVar20 = 4;
      }
      lVar9 = rpl_fts_read();
      if (lVar9 == 0) break;
    } while( true );
  }
  piVar10 = __errno_location();
  if (*piVar10 != 0) {
    iVar20 = 5;
    uVar16 = dcgettext(0,"fts_read failed",5);
    error(0,*piVar10,uVar16);
  }
  iVar7 = rpl_fts_close(lVar8);
  if (iVar7 != 0) {
    iVar20 = 5;
    uVar16 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar10,uVar16);
  }
  goto LAB_00100bd4;
  while( true ) {
    *(undefined8 *)(lVar14 + 0x20) = 1;
    lVar14 = *(long *)(lVar14 + 8);
    if (*(long *)(lVar14 + 0x58) < 0) break;
LAB_001011cf:
    if (*(long *)(lVar14 + 0x20) != 0) break;
  }
LAB_00100e03:
  rpl_fts_set(lVar8,lVar9,4);
  rpl_fts_read(lVar8);
  goto LAB_00100e20;
  while( true ) {
    *(undefined8 *)(lVar14 + 0x20) = 1;
    lVar14 = *(long *)(lVar14 + 8);
    if (*(long *)(lVar14 + 0x58) < 0) break;
LAB_001010a3:
    if (*(long *)(lVar14 + 0x20) != 0) break;
  }
LAB_001010aa:
  uVar16 = quotearg_style(4,*(undefined8 *)(lVar9 + 0x38));
  uVar15 = dcgettext(0,"skipping %s, since it\'s on a different device",5);
  error(0,0,uVar15,uVar16);
LAB_00100e20:
  iVar20 = 5;
  goto LAB_00100ab8;
}


