
/* WARNING: Unknown calling convention */

char * user_group_str(char *user,char *group)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  undefined1 *puVar5;
  
  if (user == (char *)0x0) {
    user = group;
    if (group != (char *)0x0) goto LAB_00100070;
    pcVar4 = (char *)0x0;
  }
  else {
    if (group == (char *)0x0) {
LAB_00100070:
      pcVar4 = (char *)xstrdup(user);
      return pcVar4;
    }
    sVar2 = strlen(user);
    sVar3 = strlen(group);
    lVar1 = sVar2 + 2 + sVar3;
    pcVar4 = (char *)xmalloc(lVar1);
    puVar5 = (undefined1 *)__stpcpy_chk(pcVar4,user,lVar1);
    *puVar5 = 0x3a;
    strcpy(puVar5 + 1,group);
  }
  return pcVar4;
}



/* WARNING: Unknown calling convention */

void chopt_init(Chown_option *chopt)

{
  chopt->recurse = false;
  chopt->verbosity = V_off;
  chopt->root_dev_ino = (dev_ino *)0x0;
  chopt->affect_symlink_referent = true;
  chopt->force_silent = false;
  chopt->user_name = (char *)0x0;
  chopt->group_name = (char *)0x0;
  return;
}



/* WARNING: Unknown calling convention */

void chopt_free(Chown_option *chopt)

{
  free(chopt->user_name);
  free(chopt->group_name);
  return;
}



/* WARNING: Unknown calling convention */

char * gid_to_name(gid_t gid)

{
  long lVar1;
  group *pgVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pgVar2 = getgrgid(gid);
  if (pgVar2 == (group *)0x0) {
    uVar4 = umaxtostr(gid,buf);
    pcVar3 = (char *)xstrdup(uVar4);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pcVar3;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    pcVar3 = (char *)xstrdup(pgVar2->gr_name);
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

char * uid_to_name(uid_t uid)

{
  long lVar1;
  passwd *ppVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char buf [21];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar2 = getpwuid(uid);
  if (ppVar2 == (passwd *)0x0) {
    uVar4 = umaxtostr(uid,buf);
    pcVar3 = (char *)xstrdup(uVar4);
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      return pcVar3;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    pcVar3 = (char *)xstrdup(ppVar2->pw_name);
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

_Bool chown_files(char **files,int bit_flags,uid_t uid,gid_t gid,uid_t required_uid,
                 gid_t required_gid,Chown_option *chopt)

{
  Verbosity VVar1;
  __gid_t __gid;
  long lVar2;
  char *__s1;
  dev_ino *pdVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int __fd;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  passwd *ppVar13;
  group *pgVar14;
  undefined8 uVar15;
  char *pcVar16;
  char *pcVar17;
  char *group;
  stat *__buf;
  undefined4 in_register_00000034;
  ulong uVar18;
  char *pcVar19;
  ushort uVar20;
  __uid_t __uid;
  long in_FS_OFFSET;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  _Bool local_17a;
  byte local_179;
  stat stat_buf;
  stat st;
  char buf [21];
  
  uVar18 = CONCAT44(in_register_00000034,bit_flags);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = required_uid & required_gid;
  if ((uVar6 == 0xffffffff) && (chopt->affect_symlink_referent == false)) {
    uVar18 = (ulong)(bit_flags | (uint)(chopt->verbosity == V_off) << 3);
  }
  lVar9 = xfts_open(files,uVar18,0);
  local_17a = true;
LAB_00100248:
  lVar10 = rpl_fts_read(lVar9);
  do {
    if (lVar10 == 0) {
      piVar12 = __errno_location();
      if (*piVar12 != 0) {
        if (chopt->force_silent == false) {
          uVar15 = dcgettext(0,"fts_read failed",5);
          error(0,*piVar12,uVar15);
        }
        local_17a = false;
      }
      iVar7 = rpl_fts_close(lVar9);
      if (iVar7 != 0) {
        uVar15 = dcgettext(0,"fts_close failed",5);
        error(0,*piVar12,uVar15);
        local_17a = false;
      }
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return local_17a;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __s1 = *(char **)(lVar10 + 0x38);
    uVar18 = (ulong)*(ushort *)(lVar10 + 0x68);
    pcVar16 = *(char **)(lVar10 + 0x30);
    switch(*(ushort *)(lVar10 + 0x68)) {
    default:
      goto switchD_00100286_caseD_0;
    case 1:
      if (chopt->recurse == false) goto switchD_00100286_caseD_0;
      pdVar3 = chopt->root_dev_ino;
      if ((pdVar3 != (dev_ino *)0x0) &&
         (*(dev_t *)(lVar10 + 0x70) == pdVar3->st_dev && *(ino_t *)(lVar10 + 0x78) == pdVar3->st_ino
         )) {
        iVar7 = strcmp(__s1,"/");
        if (iVar7 == 0) {
          quotearg_style(4,__s1);
          uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
          error(0,0,uVar15);
        }
        else {
          quotearg_n_style(1,4,&_LC3);
          quotearg_n_style(0,4,__s1);
          uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
          error(0,0,uVar15);
        }
        uVar15 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
        error(0,0,uVar15);
        rpl_fts_set(lVar9,lVar10,4);
        rpl_fts_read(lVar9);
        goto LAB_00100d55;
      }
      goto LAB_00100248;
    case 2:
      cVar4 = cycle_warning_required(lVar9);
      if (cVar4 != '\0') {
        quotearg_n_style_colon(0,3,__s1);
        uVar15 = dcgettext(0,
                           "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                           ,5);
        error(0,0,uVar15);
        goto LAB_00100d55;
      }
switchD_00100286_caseD_0:
      cVar4 = chopt->affect_symlink_referent;
joined_r0x00100395:
      if (((uVar6 == 0xffffffff) && (chopt->verbosity == V_off)) &&
         (chopt->root_dev_ino == (dev_ino *)0x0)) {
        __buf = (stat *)(lVar10 + 0x70);
        if (cVar4 != '\0') goto LAB_001002bb;
        iVar7 = *(int *)(lVar9 + 0x2c);
LAB_001003c0:
        iVar7 = fchownat(iVar7,pcVar16,uid,gid,0x100);
        if (iVar7 == 0) goto LAB_001007c0;
        piVar12 = __errno_location();
        if (*piVar12 != 0x5f) goto LAB_001003ef;
        local_179 = 1;
        iVar7 = 1;
        if (chopt->verbosity != V_high) goto LAB_00100550;
LAB_00100b32:
        __uid = __buf->st_uid;
        goto LAB_001007f1;
      }
      __buf = (stat *)(lVar10 + 0x70);
      if (cVar4 != '\0') {
LAB_001002bb:
        __buf = (stat *)(lVar10 + 0x70);
        if ((*(uint *)(lVar10 + 0x88) & 0xf000) != 0xa000) goto LAB_001002d1;
        __buf = &stat_buf;
        iVar7 = fstatat(*(int *)(lVar9 + 0x2c),pcVar16,(stat *)__buf,0);
        if (iVar7 == 0) {
          uVar18 = (ulong)*(ushort *)(lVar10 + 0x68);
          goto LAB_001002d1;
        }
        if (chopt->force_silent == false) {
          quotearg_style(4,__s1);
          uVar15 = dcgettext(0,"cannot dereference %s",5);
          piVar12 = __errno_location();
          error(0,*piVar12,uVar15);
        }
        if (chopt->verbosity == V_high) goto LAB_00100405;
        goto LAB_00100c40;
      }
LAB_001002d1:
      uVar20 = (ushort)uVar18;
      if ((required_uid != 0xffffffff) && (required_uid != __buf->st_uid)) {
        if (((uVar20 < 7) &&
            (((0x56UL >> (uVar18 & 0x3f) & 1) != 0 &&
             (pdVar3 = chopt->root_dev_ino, pdVar3 != (dev_ino *)0x0)))) &&
           (pdVar3->st_ino == __buf->st_ino && pdVar3->st_dev == __buf->st_dev)) goto LAB_00100ce2;
LAB_0010031a:
        if (chopt->verbosity == V_high) {
LAB_00100325:
          local_179 = 1;
          iVar7 = 4;
          goto LAB_00100b32;
        }
        bVar5 = 1;
        goto LAB_001009fd;
      }
      if (required_gid != 0xffffffff) {
        if (((uVar20 < 7) && ((0x56UL >> (uVar18 & 0x3f) & 1) != 0)) &&
           ((pdVar3 = chopt->root_dev_ino, pdVar3 != (dev_ino *)0x0 &&
            (__buf->st_dev == pdVar3->st_dev && __buf->st_ino == pdVar3->st_ino))))
        goto LAB_00100ce2;
        if (required_gid != __buf->st_gid) goto LAB_0010031a;
        iVar7 = *(int *)(lVar9 + 0x2c);
        if (chopt->affect_symlink_referent == false) goto LAB_001003c0;
        uVar8 = __buf->st_mode & 0xf000;
        if (uVar8 != 0x8000) goto LAB_0010074d;
LAB_00100940:
        uVar8 = 0x900;
LAB_0010075c:
        __fd = __openat_2(iVar7,pcVar16,uVar8);
        if (__fd < 0) {
          piVar12 = __errno_location();
          if (*piVar12 == 0xd) {
            if ((__buf->st_mode & 0xf000) == 0x8000) {
              __fd = __openat_2(iVar7,pcVar16,uVar8 | 1);
              if (-1 < __fd) goto LAB_00100976;
              if (*piVar12 != 0xd) goto LAB_001003ef;
            }
            iVar7 = *(int *)(lVar9 + 0x2c);
            goto LAB_0010079d;
          }
          goto LAB_001003ef;
        }
LAB_00100976:
        iVar7 = fstat(__fd,(stat *)&st);
        if (iVar7 != 0) {
LAB_00100993:
          piVar12 = __errno_location();
          iVar7 = *piVar12;
          close(__fd);
          *piVar12 = iVar7;
          goto LAB_001003ef;
        }
        if (__buf->st_dev != st.st_dev || __buf->st_ino != st.st_ino) {
          piVar12 = __errno_location();
          iVar7 = *piVar12;
          close(__fd);
          local_179 = 0;
          *piVar12 = iVar7;
          iVar7 = 3;
          if (chopt->verbosity == V_high) goto LAB_00100b32;
          goto LAB_001008e8;
        }
        if (((required_uid == 0xffffffff) || (required_uid == st.st_uid)) &&
           ((required_gid == 0xffffffff || (required_gid == st.st_gid)))) {
          iVar7 = fchown(__fd,uid,gid);
          if (iVar7 != 0) goto LAB_00100993;
          iVar7 = close(__fd);
          if (iVar7 < 0) goto LAB_001003ef;
        }
        else {
          piVar12 = __errno_location();
          iVar7 = *piVar12;
          close(__fd);
          *piVar12 = iVar7;
        }
LAB_001007c0:
        VVar1 = chopt->verbosity;
        if (VVar1 != V_off) {
          if (uid != 0xffffffff) {
            local_179 = 1;
            __uid = __buf->st_uid;
            iVar7 = 2;
            if (uid != __uid) goto LAB_001007f1;
            if (gid != 0xffffffff) goto LAB_00100bcb;
            if (VVar1 == V_high) {
              iVar7 = 4;
              goto LAB_00100b32;
            }
            goto LAB_00100550;
          }
          if (gid == 0xffffffff) {
            if (VVar1 == V_high) goto LAB_00100325;
            goto LAB_00100550;
          }
LAB_00100bcb:
          if (gid == __buf->st_gid) {
            if (VVar1 != V_high) goto LAB_00100550;
            local_179 = 1;
            __uid = __buf->st_uid;
            iVar7 = 4;
          }
          else {
            local_179 = 1;
            __uid = __buf->st_uid;
            iVar7 = 2;
          }
LAB_001007f1:
          ppVar13 = getpwuid(__uid);
          if (ppVar13 == (passwd *)0x0) {
            uVar15 = umaxtostr(__uid);
            local_198 = (char *)xstrdup(uVar15);
          }
          else {
            local_198 = (char *)xstrdup(ppVar13->pw_name);
          }
          __gid = __buf->st_gid;
          pgVar14 = getgrgid(__gid);
          if (pgVar14 == (group *)0x0) {
            uVar15 = umaxtostr(__gid);
            local_1a0 = (char *)xstrdup(uVar15);
            goto LAB_0010044c;
          }
          local_1a0 = (char *)xstrdup(pgVar14->gr_name);
          pcVar16 = chopt->user_name;
          goto joined_r0x00100453;
        }
        goto LAB_00100550;
      }
      if ((((6 < uVar20) || ((0x56UL >> (uVar18 & 0x3f) & 1) == 0)) ||
          (pdVar3 = chopt->root_dev_ino, pdVar3 == (dev_ino *)0x0)) ||
         (__buf->st_dev != pdVar3->st_dev || __buf->st_ino != pdVar3->st_ino)) {
        iVar7 = *(int *)(lVar9 + 0x2c);
        if (chopt->affect_symlink_referent == false) goto LAB_001003c0;
        if (uVar6 != 0xffffffff) {
          uVar8 = __buf->st_mode & 0xf000;
          if (uVar8 == 0x8000) goto LAB_00100940;
LAB_0010074d:
          if (uVar8 == 0x4000) {
            uVar8 = 0x10900;
            goto LAB_0010075c;
          }
        }
LAB_0010079d:
        iVar7 = fchownat(iVar7,pcVar16,uid,gid,0);
        if (iVar7 == 0) goto LAB_001007c0;
LAB_001003ef:
        if (chopt->force_silent == false) {
          uVar15 = quotearg_style(4,__s1);
          if (uid == 0xffffffff) {
            uVar11 = dcgettext(0,"changing group of %s",5);
          }
          else {
            uVar11 = dcgettext(0,"changing ownership of %s",5);
          }
          piVar12 = __errno_location();
          error(0,*piVar12,uVar11,uVar15);
        }
        if (chopt->verbosity != V_high) {
LAB_001008e8:
          local_17a = false;
          goto LAB_00100550;
        }
LAB_00100405:
        local_179 = 0;
        iVar7 = 3;
        goto LAB_00100b32;
      }
LAB_00100ce2:
      iVar7 = strcmp(__s1,"/");
      if (iVar7 == 0) {
        quotearg_style(4,__s1);
        uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
        error(0,0,uVar15);
      }
      else {
        quotearg_n_style(1,4,&_LC3);
        quotearg_n_style(0,4,__s1);
        uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
        error(0,0,uVar15);
      }
      uVar15 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
      error(0,0,uVar15);
LAB_00100d55:
      local_17a = false;
      goto LAB_00100248;
    case 4:
      if (chopt->force_silent == false) {
        quotearg_style(4,__s1);
        pcVar16 = "cannot read directory %s";
LAB_00100600:
        uVar15 = dcgettext(0,pcVar16,5);
        error(0,*(undefined4 *)(lVar10 + 0x40),uVar15);
      }
      break;
    case 6:
      if (chopt->recurse != false) {
        cVar4 = chopt->affect_symlink_referent;
        goto joined_r0x00100395;
      }
      goto LAB_00100248;
    case 7:
      if (chopt->force_silent == false) {
        quotearg_n_style_colon(0,3,__s1);
        error(0,*(undefined4 *)(lVar10 + 0x40),&_LC8);
      }
      break;
    case 10:
      if ((*(long *)(lVar10 + 0x58) == 0) && (*(long *)(lVar10 + 0x20) == 0)) {
        *(undefined8 *)(lVar10 + 0x20) = 1;
        rpl_fts_set(lVar9,lVar10,1);
        goto LAB_00100248;
      }
      if (chopt->force_silent == false) {
        quotearg_style(4,__s1);
        pcVar16 = "cannot access %s";
        goto LAB_00100600;
      }
    }
    if (chopt->verbosity == V_high) {
      local_179 = 0;
      iVar7 = 3;
      local_198 = (char *)0x0;
      local_1a0 = (char *)0x0;
LAB_0010044c:
      pcVar16 = chopt->user_name;
joined_r0x00100453:
      if ((pcVar16 == (char *)0x0) && (uid != 0xffffffff)) {
        uVar15 = umaxtostr(uid);
        pcVar16 = (char *)xstrdup(uVar15);
        group = chopt->group_name;
        if (group != (char *)0x0) goto LAB_00100466;
LAB_00100870:
        if (gid != 0xffffffff) {
          uVar15 = umaxtostr(gid,buf);
          group = (char *)xstrdup(uVar15);
          goto LAB_00100466;
        }
        if (iVar7 != 1) {
          pcVar17 = user_group_str(pcVar16,(char *)0x0);
          pcVar19 = (char *)0x0;
          goto joined_r0x00100488;
        }
LAB_001009b8:
        uVar15 = quotearg_style(4,__s1);
        uVar11 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
        __printf_chk(2,uVar11,uVar15);
      }
      else {
        group = chopt->group_name;
        if (group == (char *)0x0) goto LAB_00100870;
LAB_00100466:
        if (iVar7 == 1) goto LAB_001009b8;
        pcVar17 = user_group_str(pcVar16,group);
        pcVar19 = local_1a0;
joined_r0x00100488:
        local_1a8 = pcVar17;
        if (pcVar16 == (char *)0x0) {
          local_1b0 = user_group_str((char *)0x0,pcVar19);
          if (iVar7 == 3) {
            if (local_1b0 == (char *)0x0) {
              pcVar19 = "failed to change group of %s to %s\n";
              if (group == (char *)0x0) {
                pcVar19 = "failed to change ownership of %s\n";
              }
              goto LAB_00100dec;
            }
            if (group == (char *)0x0) {
              uVar15 = dcgettext(0,"failed to change ownership of %s\n",5);
            }
            else {
              uVar15 = dcgettext(0,"failed to change group of %s from %s to %s\n",5);
            }
          }
          else if (iVar7 == 4) {
            if (group == (char *)0x0) {
              uVar15 = dcgettext(0,"ownership of %s retained\n",5);
            }
            else {
              uVar15 = dcgettext(0,"group of %s retained as %s\n",5);
            }
          }
          else {
            if (iVar7 != 2) goto LAB_00100f3c;
            if (group == (char *)0x0) {
              uVar15 = dcgettext(0,"no change to ownership of %s\n",5);
            }
            else {
              uVar15 = dcgettext(0,"changed group of %s from %s to %s\n",5);
            }
          }
        }
        else {
          local_1b0 = user_group_str(local_198,pcVar19);
          if (iVar7 == 3) {
            if (local_1b0 == (char *)0x0) {
              pcVar19 = "failed to change ownership of %s to %s\n";
LAB_00100dec:
              uVar15 = dcgettext(0,pcVar19,5);
              local_1a8 = (char *)0x0;
              local_1b0 = pcVar17;
            }
            else {
              uVar15 = dcgettext(0,"failed to change ownership of %s from %s to %s\n",5);
            }
          }
          else if (iVar7 == 4) {
            uVar15 = dcgettext(0,"ownership of %s retained as %s\n",5);
          }
          else {
            if (iVar7 != 2) {
LAB_00100f3c:
                    /* WARNING: Subroutine does not return */
              __assert_fail("0","src/chown-core.c",0xca,"describe_change");
            }
            uVar15 = dcgettext(0,"changed ownership of %s from %s to %s\n",5);
          }
        }
        uVar11 = quotearg_style(4,__s1);
        __printf_chk(2,uVar15,uVar11);
        free(local_1b0);
        free(local_1a8);
      }
      free(local_198);
      free(local_1a0);
      if (pcVar16 != chopt->user_name) {
        free(pcVar16);
      }
      if (chopt->group_name != group) {
        free(group);
      }
      local_17a = (_Bool)(local_17a & local_179);
    }
    else {
LAB_00100c40:
      bVar5 = 0;
LAB_001009fd:
      local_17a = (_Bool)(local_17a & bVar5);
    }
LAB_00100550:
    if (chopt->recurse != false) goto LAB_00100248;
    rpl_fts_set(lVar9,lVar10,4);
    lVar10 = rpl_fts_read();
  } while( true );
}


