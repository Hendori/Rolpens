
undefined8 user_group_str(char *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  if (param_1 == (char *)0x0) {
    param_1 = param_2;
    if (param_2 != (char *)0x0) goto LAB_00100070;
    uVar4 = 0;
  }
  else {
    if (param_2 == (char *)0x0) {
LAB_00100070:
      uVar4 = xstrdup(param_1);
      return uVar4;
    }
    sVar2 = strlen(param_1);
    sVar3 = strlen(param_2);
    lVar1 = sVar2 + 2 + sVar3;
    uVar4 = xmalloc(lVar1);
    puVar5 = (undefined1 *)__stpcpy_chk(uVar4,param_1,lVar1);
    *puVar5 = 0x3a;
    strcpy(puVar5 + 1,param_2);
  }
  return uVar4;
}



void chopt_init(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)(param_1 + 4) = 1;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  return;
}



void chopt_free(long param_1)

{
  free(*(void **)(param_1 + 0x18));
  free(*(void **)(param_1 + 0x20));
  return;
}



void gid_to_name(__gid_t param_1)

{
  group *pgVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pgVar1 = getgrgid(param_1);
  if (pgVar1 == (group *)0x0) {
    uVar2 = umaxtostr(param_1,auStack_28);
    xstrdup(uVar2);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    xstrdup(pgVar1->gr_name);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void uid_to_name(__uid_t param_1)

{
  passwd *ppVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ppVar1 = getpwuid(param_1);
  if (ppVar1 == (passwd *)0x0) {
    uVar2 = umaxtostr(param_1,auStack_28);
    xstrdup(uVar2);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    xstrdup(ppVar1->pw_name);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



byte chown_files(undefined8 param_1,ulong param_2,__uid_t param_3,__gid_t param_4,uint param_5,
                uint param_6,int *param_7)

{
  __gid_t __gid;
  char *__s1;
  __ino_t *p_Var1;
  long *plVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  int *piVar12;
  passwd *ppVar13;
  group *pgVar14;
  undefined8 uVar15;
  void *__ptr;
  void *pvVar16;
  void *__ptr_00;
  stat *__buf;
  void *pvVar17;
  char *pcVar18;
  ushort uVar19;
  __uid_t __uid;
  ulong uVar20;
  long in_FS_OFFSET;
  void *local_1b0;
  void *local_1a8;
  void *local_1a0;
  void *local_198;
  byte local_17a;
  byte local_179;
  stat local_178;
  stat local_e8;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = param_5 & param_6;
  if ((uVar5 == 0xffffffff) && ((char)param_7[4] == '\0')) {
    param_2 = (ulong)((uint)param_2 | (uint)(*param_7 == 2) << 3);
  }
  lVar9 = xfts_open(param_1,param_2,0);
  local_17a = 1;
LAB_00100248:
  lVar10 = rpl_fts_read(lVar9);
  do {
    if (lVar10 == 0) {
      piVar12 = __errno_location();
      if (*piVar12 != 0) {
        if (*(char *)((long)param_7 + 0x11) == '\0') {
          uVar15 = dcgettext(0,"fts_read failed",5);
          error(0,*piVar12,uVar15);
        }
        local_17a = 0;
      }
      iVar6 = rpl_fts_close(lVar9);
      if (iVar6 != 0) {
        uVar15 = dcgettext(0,"fts_close failed",5);
        error(0,*piVar12,uVar15);
        local_17a = 0;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return local_17a;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    __s1 = *(char **)(lVar10 + 0x38);
    uVar20 = (ulong)*(ushort *)(lVar10 + 0x68);
    pcVar18 = *(char **)(lVar10 + 0x30);
    switch(*(ushort *)(lVar10 + 0x68)) {
    default:
      goto switchD_00100286_caseD_0;
    case 1:
      if ((char)param_7[1] == '\0') goto switchD_00100286_caseD_0;
      plVar2 = *(long **)(param_7 + 2);
      if ((plVar2 != (long *)0x0) &&
         (*(long *)(lVar10 + 0x70) == plVar2[1] && *(long *)(lVar10 + 0x78) == *plVar2)) {
        iVar6 = strcmp(__s1,"/");
        if (iVar6 == 0) {
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
      cVar3 = cycle_warning_required(lVar9,lVar10);
      if (cVar3 != '\0') {
        quotearg_n_style_colon(0,3,__s1);
        uVar15 = dcgettext(0,
                           "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                           ,5);
        error(0,0,uVar15);
        goto LAB_00100d55;
      }
switchD_00100286_caseD_0:
      cVar3 = (char)param_7[4];
joined_r0x00100395:
      if (((uVar5 == 0xffffffff) && (*param_7 == 2)) && (*(long *)(param_7 + 2) == 0)) {
        __buf = (stat *)(lVar10 + 0x70);
        if (cVar3 != '\0') goto LAB_001002bb;
        iVar6 = *(int *)(lVar9 + 0x2c);
LAB_001003c0:
        iVar6 = fchownat(iVar6,pcVar18,param_3,param_4,0x100);
        if (iVar6 == 0) goto LAB_001007c0;
        piVar12 = __errno_location();
        if (*piVar12 != 0x5f) goto LAB_001003ef;
        local_179 = 1;
        iVar6 = 1;
        if (*param_7 != 0) goto LAB_00100550;
LAB_00100b32:
        __uid = __buf->st_uid;
        goto LAB_001007f1;
      }
      __buf = (stat *)(lVar10 + 0x70);
      if (cVar3 != '\0') {
LAB_001002bb:
        __buf = (stat *)(lVar10 + 0x70);
        if ((*(uint *)(lVar10 + 0x88) & 0xf000) != 0xa000) goto LAB_001002d1;
        __buf = &local_178;
        iVar6 = fstatat(*(int *)(lVar9 + 0x2c),pcVar18,__buf,0);
        if (iVar6 == 0) {
          uVar20 = (ulong)*(ushort *)(lVar10 + 0x68);
          goto LAB_001002d1;
        }
        if (*(char *)((long)param_7 + 0x11) == '\0') {
          quotearg_style(4,__s1);
          uVar15 = dcgettext(0,"cannot dereference %s",5);
          piVar12 = __errno_location();
          error(0,*piVar12,uVar15);
        }
        if (*param_7 == 0) goto LAB_00100405;
        goto LAB_00100c40;
      }
LAB_001002d1:
      uVar19 = (ushort)uVar20;
      if ((param_5 != 0xffffffff) && (param_5 != __buf->st_uid)) {
        if (((uVar19 < 7) &&
            (((0x56UL >> (uVar20 & 0x3f) & 1) != 0 &&
             (p_Var1 = *(__ino_t **)(param_7 + 2), p_Var1 != (__ino_t *)0x0)))) &&
           (*p_Var1 == __buf->st_ino && p_Var1[1] == __buf->st_dev)) goto LAB_00100ce2;
LAB_0010031a:
        if (*param_7 == 0) {
LAB_00100325:
          local_179 = 1;
          iVar6 = 4;
          goto LAB_00100b32;
        }
        bVar4 = 1;
        goto LAB_001009fd;
      }
      if (param_6 != 0xffffffff) {
        if (((uVar19 < 7) && ((0x56UL >> (uVar20 & 0x3f) & 1) != 0)) &&
           ((p_Var1 = *(__ino_t **)(param_7 + 2), p_Var1 != (__ino_t *)0x0 &&
            (__buf->st_dev == p_Var1[1] && __buf->st_ino == *p_Var1)))) goto LAB_00100ce2;
        if (param_6 != __buf->st_gid) goto LAB_0010031a;
        iVar6 = *(int *)(lVar9 + 0x2c);
        if ((char)param_7[4] == '\0') goto LAB_001003c0;
        uVar7 = __buf->st_mode & 0xf000;
        if (uVar7 != 0x8000) goto LAB_0010074d;
LAB_00100940:
        uVar7 = 0x900;
LAB_0010075c:
        iVar8 = __openat_2(iVar6,pcVar18,uVar7);
        if (iVar8 < 0) {
          piVar12 = __errno_location();
          if (*piVar12 == 0xd) {
            if ((__buf->st_mode & 0xf000) == 0x8000) {
              iVar8 = __openat_2(iVar6,pcVar18,uVar7 | 1);
              if (-1 < iVar8) goto LAB_00100976;
              if (*piVar12 != 0xd) goto LAB_001003ef;
            }
            iVar6 = *(int *)(lVar9 + 0x2c);
            goto LAB_0010079d;
          }
          goto LAB_001003ef;
        }
LAB_00100976:
        iVar6 = fstat(iVar8,&local_e8);
        if (iVar6 != 0) {
LAB_00100993:
          piVar12 = __errno_location();
          iVar6 = *piVar12;
          close(iVar8);
          *piVar12 = iVar6;
          goto LAB_001003ef;
        }
        if (__buf->st_dev != local_e8.st_dev || __buf->st_ino != local_e8.st_ino) {
          piVar12 = __errno_location();
          iVar6 = *piVar12;
          close(iVar8);
          local_179 = 0;
          *piVar12 = iVar6;
          iVar6 = 3;
          if (*param_7 == 0) goto LAB_00100b32;
          goto LAB_001008e8;
        }
        if (((param_5 == 0xffffffff) || (param_5 == local_e8.st_uid)) &&
           ((param_6 == 0xffffffff || (param_6 == local_e8.st_gid)))) {
          iVar6 = fchown(iVar8,param_3,param_4);
          if (iVar6 != 0) goto LAB_00100993;
          iVar6 = close(iVar8);
          if (iVar6 < 0) goto LAB_001003ef;
        }
        else {
          piVar12 = __errno_location();
          iVar6 = *piVar12;
          close(iVar8);
          *piVar12 = iVar6;
        }
LAB_001007c0:
        iVar8 = *param_7;
        if (iVar8 != 2) {
          if (param_3 != 0xffffffff) {
            local_179 = 1;
            __uid = __buf->st_uid;
            iVar6 = 2;
            if (param_3 != __uid) goto LAB_001007f1;
            if (param_4 != 0xffffffff) goto LAB_00100bcb;
            if (iVar8 == 0) {
              iVar6 = 4;
              goto LAB_00100b32;
            }
            goto LAB_00100550;
          }
          if (param_4 == 0xffffffff) {
            if (iVar8 == 0) goto LAB_00100325;
            goto LAB_00100550;
          }
LAB_00100bcb:
          if (param_4 == __buf->st_gid) {
            if (iVar8 != 0) goto LAB_00100550;
            local_179 = 1;
            __uid = __buf->st_uid;
            iVar6 = 4;
          }
          else {
            local_179 = 1;
            __uid = __buf->st_uid;
            iVar6 = 2;
          }
LAB_001007f1:
          ppVar13 = getpwuid(__uid);
          if (ppVar13 == (passwd *)0x0) {
            uVar15 = umaxtostr(__uid,local_58);
            local_198 = (void *)xstrdup(uVar15);
          }
          else {
            local_198 = (void *)xstrdup(ppVar13->pw_name);
          }
          __gid = __buf->st_gid;
          pgVar14 = getgrgid(__gid);
          if (pgVar14 == (group *)0x0) {
            uVar15 = umaxtostr(__gid,local_58);
            local_1a0 = (void *)xstrdup(uVar15);
            goto LAB_0010044c;
          }
          local_1a0 = (void *)xstrdup(pgVar14->gr_name);
          __ptr = *(void **)(param_7 + 6);
          goto joined_r0x00100453;
        }
        goto LAB_00100550;
      }
      if ((((6 < uVar19) || ((0x56UL >> (uVar20 & 0x3f) & 1) == 0)) ||
          (p_Var1 = *(__ino_t **)(param_7 + 2), p_Var1 == (__ino_t *)0x0)) ||
         (__buf->st_dev != p_Var1[1] || __buf->st_ino != *p_Var1)) {
        iVar6 = *(int *)(lVar9 + 0x2c);
        if ((char)param_7[4] == '\0') goto LAB_001003c0;
        if (uVar5 != 0xffffffff) {
          uVar7 = __buf->st_mode & 0xf000;
          if (uVar7 == 0x8000) goto LAB_00100940;
LAB_0010074d:
          if (uVar7 == 0x4000) {
            uVar7 = 0x10900;
            goto LAB_0010075c;
          }
        }
LAB_0010079d:
        iVar6 = fchownat(iVar6,pcVar18,param_3,param_4,0);
        if (iVar6 == 0) goto LAB_001007c0;
LAB_001003ef:
        if (*(char *)((long)param_7 + 0x11) == '\0') {
          uVar15 = quotearg_style(4,__s1);
          if (param_3 == 0xffffffff) {
            uVar11 = dcgettext(0,"changing group of %s",5);
          }
          else {
            uVar11 = dcgettext(0,"changing ownership of %s",5);
          }
          piVar12 = __errno_location();
          error(0,*piVar12,uVar11,uVar15);
        }
        if (*param_7 != 0) {
LAB_001008e8:
          local_17a = 0;
          goto LAB_00100550;
        }
LAB_00100405:
        local_179 = 0;
        iVar6 = 3;
        goto LAB_00100b32;
      }
LAB_00100ce2:
      iVar6 = strcmp(__s1,"/");
      if (iVar6 == 0) {
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
      local_17a = 0;
      goto LAB_00100248;
    case 4:
      if (*(char *)((long)param_7 + 0x11) == '\0') {
        quotearg_style(4,__s1);
        pcVar18 = "cannot read directory %s";
LAB_00100600:
        uVar15 = dcgettext(0,pcVar18,5);
        error(0,*(undefined4 *)(lVar10 + 0x40),uVar15);
      }
      break;
    case 6:
      if ((char)param_7[1] != '\0') {
        cVar3 = (char)param_7[4];
        goto joined_r0x00100395;
      }
      goto LAB_00100248;
    case 7:
      if (*(char *)((long)param_7 + 0x11) == '\0') {
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
      if (*(char *)((long)param_7 + 0x11) == '\0') {
        quotearg_style(4,__s1);
        pcVar18 = "cannot access %s";
        goto LAB_00100600;
      }
    }
    if (*param_7 == 0) {
      local_179 = 0;
      iVar6 = 3;
      local_198 = (void *)0x0;
      local_1a0 = (void *)0x0;
LAB_0010044c:
      __ptr = *(void **)(param_7 + 6);
joined_r0x00100453:
      if ((__ptr == (void *)0x0) && (param_3 != 0xffffffff)) {
        uVar15 = umaxtostr(param_3,local_58);
        __ptr = (void *)xstrdup(uVar15);
        __ptr_00 = *(void **)(param_7 + 8);
        if (__ptr_00 != (void *)0x0) goto LAB_00100466;
LAB_00100870:
        if (param_4 != 0xffffffff) {
          uVar15 = umaxtostr(param_4,local_58);
          __ptr_00 = (void *)xstrdup(uVar15);
          goto LAB_00100466;
        }
        if (iVar6 != 1) {
          pvVar16 = (void *)user_group_str(__ptr,0);
          pvVar17 = (void *)0x0;
          goto joined_r0x00100488;
        }
LAB_001009b8:
        uVar15 = quotearg_style(4,__s1);
        uVar11 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
        __printf_chk(2,uVar11,uVar15);
      }
      else {
        __ptr_00 = *(void **)(param_7 + 8);
        if (__ptr_00 == (void *)0x0) goto LAB_00100870;
LAB_00100466:
        if (iVar6 == 1) goto LAB_001009b8;
        pvVar16 = (void *)user_group_str(__ptr,__ptr_00);
        pvVar17 = local_1a0;
joined_r0x00100488:
        local_1a8 = pvVar16;
        if (__ptr == (void *)0x0) {
          local_1b0 = (void *)user_group_str(0,pvVar17);
          if (iVar6 == 3) {
            if (local_1b0 == (void *)0x0) {
              pcVar18 = "failed to change group of %s to %s\n";
              if (__ptr_00 == (void *)0x0) {
                pcVar18 = "failed to change ownership of %s\n";
              }
              goto LAB_00100dec;
            }
            if (__ptr_00 == (void *)0x0) {
              uVar15 = dcgettext(0,"failed to change ownership of %s\n",5);
            }
            else {
              uVar15 = dcgettext(0,"failed to change group of %s from %s to %s\n",5);
            }
          }
          else if (iVar6 == 4) {
            if (__ptr_00 == (void *)0x0) {
              uVar15 = dcgettext(0,"ownership of %s retained\n",5);
            }
            else {
              uVar15 = dcgettext(0,"group of %s retained as %s\n",5);
            }
          }
          else {
            if (iVar6 != 2) goto LAB_00100f3c;
            if (__ptr_00 == (void *)0x0) {
              uVar15 = dcgettext(0,"no change to ownership of %s\n",5);
            }
            else {
              uVar15 = dcgettext(0,"changed group of %s from %s to %s\n",5);
            }
          }
        }
        else {
          local_1b0 = (void *)user_group_str(local_198,pvVar17);
          if (iVar6 == 3) {
            if (local_1b0 == (void *)0x0) {
              pcVar18 = "failed to change ownership of %s to %s\n";
LAB_00100dec:
              uVar15 = dcgettext(0,pcVar18,5);
              local_1a8 = (void *)0x0;
              local_1b0 = pvVar16;
            }
            else {
              uVar15 = dcgettext(0,"failed to change ownership of %s from %s to %s\n",5);
            }
          }
          else if (iVar6 == 4) {
            uVar15 = dcgettext(0,"ownership of %s retained as %s\n",5);
          }
          else {
            if (iVar6 != 2) {
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
      if (__ptr != *(void **)(param_7 + 6)) {
        free(__ptr);
      }
      if (*(void **)(param_7 + 8) != __ptr_00) {
        free(__ptr_00);
      }
      local_17a = local_17a & local_179;
    }
    else {
LAB_00100c40:
      bVar4 = 0;
LAB_001009fd:
      local_17a = local_17a & bVar4;
    }
LAB_00100550:
    if ((char)param_7[1] != '\0') goto LAB_00100248;
    rpl_fts_set(lVar9,lVar10,4);
    lVar10 = rpl_fts_read();
  } while( true );
}


