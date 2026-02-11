
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



undefined1
change_file_owner(long param_1,long param_2,__uid_t param_3,__gid_t param_4,uint param_5,
                 uint param_6,int *param_7)

{
  __gid_t __gid;
  undefined4 uVar1;
  char *__s1;
  __ino_t *p_Var2;
  long *plVar3;
  undefined1 uVar4;
  void *pvVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  passwd *ppVar10;
  group *pgVar11;
  undefined8 uVar12;
  void *__ptr;
  int *piVar13;
  void *pvVar14;
  undefined8 uVar15;
  undefined *puVar16;
  void *__ptr_00;
  undefined8 uVar17;
  ushort uVar18;
  ulong uVar19;
  char *pcVar20;
  __uid_t __uid;
  stat *__buf;
  long in_FS_OFFSET;
  void *local_190;
  void *local_188;
  void *local_180;
  stat local_178;
  stat local_e8;
  undefined1 local_58 [24];
  long local_40;
  
  uVar18 = *(ushort *)(param_2 + 0x68);
  pcVar20 = *(char **)(param_2 + 0x30);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __s1 = *(char **)(param_2 + 0x38);
  switch(uVar18) {
  case 1:
    if ((char)param_7[1] == '\0') break;
    plVar3 = *(long **)(param_7 + 2);
    if ((plVar3 == (long *)0x0) ||
       (*(long *)(param_2 + 0x70) != plVar3[1] || *(long *)(param_2 + 0x78) != *plVar3))
    goto LAB_00100493;
    iVar9 = strcmp(__s1,"/");
    if (iVar9 == 0) {
      uVar12 = quotearg_style(4,__s1);
      uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
      error(0,0,uVar15,uVar12);
    }
    else {
      uVar12 = quotearg_n_style(1,4,&_LC0);
      uVar15 = quotearg_n_style(0,4,__s1);
      uVar17 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
      error(0,0,uVar17,uVar15,uVar12);
    }
    uVar12 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
    error(0,0,uVar12);
    rpl_fts_set(param_1,param_2,4);
    rpl_fts_read(param_1);
    goto LAB_00100621;
  case 2:
    cVar6 = cycle_warning_required(param_1);
    if (cVar6 != '\0') {
      uVar12 = quotearg_n_style_colon(0,3,__s1);
      uVar15 = dcgettext(0,
                         "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n"
                         ,5);
      error(0,0,uVar15,uVar12);
      goto LAB_00100621;
    }
    break;
  case 4:
    if (*(char *)((long)param_7 + 0x11) == '\0') {
      uVar12 = quotearg_style(4,__s1);
      pcVar20 = "cannot read directory %s";
LAB_0010053a:
      puVar16 = (undefined *)dcgettext(0,pcVar20,5);
      uVar1 = *(undefined4 *)(param_2 + 0x40);
LAB_0010054a:
      error(0,uVar1,puVar16,uVar12);
    }
    goto LAB_00100332;
  case 6:
    if ((char)param_7[1] == '\0') {
LAB_00100493:
      uVar4 = 1;
      goto LAB_001004a0;
    }
    break;
  case 7:
    if (*(char *)((long)param_7 + 0x11) == '\0') {
      uVar12 = quotearg_n_style_colon(0,3,__s1);
      uVar1 = *(undefined4 *)(param_2 + 0x40);
      puVar16 = &_LC5;
      goto LAB_0010054a;
    }
    goto LAB_00100332;
  case 10:
    if ((*(long *)(param_2 + 0x58) == 0) && (*(long *)(param_2 + 0x20) == 0)) {
      *(undefined8 *)(param_2 + 0x20) = 1;
      rpl_fts_set(param_1,param_2,1);
      goto LAB_00100493;
    }
    if (*(char *)((long)param_7 + 0x11) == '\0') {
      uVar12 = quotearg_style(4,__s1);
      pcVar20 = "cannot access %s";
      goto LAB_0010053a;
    }
LAB_00100332:
    if (*param_7 != 0) goto LAB_00100800;
    uVar4 = 0;
    iVar9 = 3;
    local_180 = (void *)0x0;
    local_190 = (void *)0x0;
    goto LAB_0010035a;
  }
  uVar19 = (ulong)uVar18;
  if ((((param_5 & param_6) != 0xffffffff) || (*param_7 != 2)) || (*(long *)(param_7 + 2) != 0)) {
    __buf = (stat *)(param_2 + 0x70);
    if ((char)param_7[4] != '\0') goto LAB_00100141;
    goto LAB_00100157;
  }
  __buf = (stat *)(param_2 + 0x70);
  if ((char)param_7[4] == '\0') {
    iVar9 = *(int *)(param_1 + 0x2c);
LAB_00100700:
    iVar9 = fchownat(iVar9,pcVar20,param_3,param_4,0x100);
    if (iVar9 == 0) goto LAB_00100670;
    piVar13 = __errno_location();
    if (*piVar13 != 0x5f) goto LAB_00100300;
    uVar4 = 1;
    iVar9 = 1;
    if (*param_7 != 0) goto LAB_00100740;
LAB_001001b2:
    __uid = __buf->st_uid;
LAB_001001c0:
    ppVar10 = getpwuid(__uid);
    if (ppVar10 == (passwd *)0x0) {
      uVar12 = umaxtostr(__uid,local_58);
      local_180 = (void *)xstrdup(uVar12);
    }
    else {
      local_180 = (void *)xstrdup(ppVar10->pw_name);
    }
    __gid = __buf->st_gid;
    pgVar11 = getgrgid(__gid);
    if (pgVar11 == (group *)0x0) {
      uVar12 = umaxtostr(__gid,local_58);
      local_190 = (void *)xstrdup(uVar12);
LAB_0010035a:
      __ptr = *(void **)(param_7 + 6);
    }
    else {
      local_190 = (void *)xstrdup(pgVar11->gr_name);
      __ptr = *(void **)(param_7 + 6);
    }
    if ((__ptr == (void *)0x0) && (param_3 != 0xffffffff)) {
      uVar12 = umaxtostr(param_3,local_58);
      __ptr = (void *)xstrdup(uVar12);
    }
    __ptr_00 = *(void **)(param_7 + 8);
    if (__ptr_00 == (void *)0x0) {
      if (param_4 != 0xffffffff) {
        uVar12 = umaxtostr(param_4,local_58);
        __ptr_00 = (void *)xstrdup(uVar12);
        goto LAB_00100374;
      }
      if (iVar9 != 1) {
        local_188 = (void *)user_group_str(__ptr,0);
        pvVar14 = (void *)0x0;
        goto LAB_00100393;
      }
LAB_00100780:
      uVar12 = quotearg_style(4,__s1);
      uVar15 = dcgettext(0,"neither symbolic link %s nor referent has been changed\n",5);
      __printf_chk(2,uVar15,uVar12);
    }
    else {
LAB_00100374:
      if (iVar9 == 1) goto LAB_00100780;
      local_188 = (void *)user_group_str(__ptr,__ptr_00);
      pvVar14 = local_190;
LAB_00100393:
      pvVar5 = local_188;
      if (__ptr == (void *)0x0) {
        pvVar14 = (void *)user_group_str(0,pvVar14);
        if (iVar9 == 3) {
          if (pvVar14 == (void *)0x0) {
            pcVar20 = "failed to change group of %s to %s\n";
            if (__ptr_00 == (void *)0x0) {
              pcVar20 = "failed to change ownership of %s\n";
            }
            goto LAB_00100a3e;
          }
          if (__ptr_00 == (void *)0x0) {
            uVar12 = dcgettext(0,"failed to change ownership of %s\n",5);
          }
          else {
            uVar12 = dcgettext(0,"failed to change group of %s from %s to %s\n",5);
          }
        }
        else if (iVar9 == 4) {
          if (__ptr_00 == (void *)0x0) {
            uVar12 = dcgettext(0,"ownership of %s retained\n",5);
          }
          else {
            uVar12 = dcgettext(0,"group of %s retained as %s\n",5);
          }
        }
        else {
          if (iVar9 != 2) goto LAB_00100d2a;
          if (__ptr_00 == (void *)0x0) {
            uVar12 = dcgettext(0,"no change to ownership of %s\n",5);
          }
          else {
            uVar12 = dcgettext(0,"changed group of %s from %s to %s\n",5);
          }
        }
      }
      else {
        pvVar14 = (void *)user_group_str(local_180,pvVar14);
        if (iVar9 == 3) {
          if (pvVar14 == (void *)0x0) {
            pcVar20 = "failed to change ownership of %s to %s\n";
LAB_00100a3e:
            uVar12 = dcgettext(0,pcVar20,5);
            local_188 = (void *)0x0;
            pvVar14 = pvVar5;
          }
          else {
            uVar12 = dcgettext(0,"failed to change ownership of %s from %s to %s\n",5);
          }
        }
        else if (iVar9 == 4) {
          uVar12 = dcgettext(0,"ownership of %s retained as %s\n",5);
        }
        else {
          if (iVar9 != 2) {
LAB_00100d2a:
                    /* WARNING: Subroutine does not return */
            __assert_fail("0","src/chown-core.c",0xca,"describe_change");
          }
          uVar12 = dcgettext(0,"changed ownership of %s from %s to %s\n",5);
        }
      }
      uVar15 = quotearg_style(4,__s1);
      __printf_chk(2,uVar12,uVar15,pvVar14,local_188);
      free(pvVar14);
      free(local_188);
    }
    free(local_180);
    free(local_190);
    if (*(void **)(param_7 + 6) != __ptr) {
      free(__ptr);
    }
    if (*(void **)(param_7 + 8) != __ptr_00) {
      free(__ptr_00);
    }
  }
  else {
LAB_00100141:
    __buf = (stat *)(param_2 + 0x70);
    if ((*(uint *)(param_2 + 0x88) & 0xf000) != 0xa000) {
LAB_00100157:
      uVar18 = (ushort)uVar19;
      if ((param_5 == 0xffffffff) || (__buf->st_uid == param_5)) {
        if (param_6 == 0xffffffff) {
          if (((6 < uVar18) || ((0x56UL >> (uVar19 & 0x3f) & 1) == 0)) ||
             ((p_Var2 = *(__ino_t **)(param_7 + 2), p_Var2 == (__ino_t *)0x0 ||
              (*p_Var2 != __buf->st_ino || p_Var2[1] != __buf->st_dev)))) {
            iVar9 = *(int *)(param_1 + 0x2c);
            if ((char)param_7[4] == '\0') goto LAB_00100700;
            if ((param_5 & param_6) != 0xffffffff) goto LAB_00100299;
LAB_00100650:
            iVar9 = fchownat(iVar9,pcVar20,param_3,param_4,0);
            if (iVar9 == 0) goto LAB_00100670;
LAB_00100300:
            if (*(char *)((long)param_7 + 0x11) == '\0') {
              uVar12 = quotearg_style(4,__s1);
              if (param_3 == 0xffffffff) {
                pcVar20 = "changing group of %s";
                goto LAB_00100b48;
              }
              uVar15 = dcgettext(0,"changing ownership of %s",5);
              goto LAB_00100b52;
            }
            goto LAB_0010030a;
          }
        }
        else if ((((6 < uVar18) || ((0x56UL >> (uVar19 & 0x3f) & 1) == 0)) ||
                 (p_Var2 = *(__ino_t **)(param_7 + 2), p_Var2 == (__ino_t *)0x0)) ||
                (__buf->st_dev != p_Var2[1] || __buf->st_ino != *p_Var2)) {
          if (__buf->st_gid != param_6) goto LAB_0010019c;
          iVar9 = *(int *)(param_1 + 0x2c);
          if ((char)param_7[4] == '\0') goto LAB_00100700;
LAB_00100299:
          uVar7 = __buf->st_mode & 0xf000;
          if (uVar7 == 0x8000) {
            local_190 = (void *)0x901;
            uVar12 = 0x900;
          }
          else {
            local_190 = (void *)0x10901;
            uVar12 = 0x10900;
            if (uVar7 != 0x4000) goto LAB_00100650;
          }
          iVar8 = __openat_2(iVar9,pcVar20,uVar12);
          if (iVar8 < 0) {
            piVar13 = __errno_location();
            if (*piVar13 == 0xd) {
              if ((__buf->st_mode & 0xf000) == 0x8000) {
                iVar8 = __openat_2(iVar9,pcVar20,local_190);
                if (-1 < iVar8) goto LAB_00100858;
                if (*piVar13 != 0xd) goto LAB_00100300;
              }
              iVar9 = *(int *)(param_1 + 0x2c);
              goto LAB_00100650;
            }
            goto LAB_00100300;
          }
LAB_00100858:
          iVar9 = fstat(iVar8,&local_e8);
          if (iVar9 != 0) {
LAB_001009f0:
            piVar13 = __errno_location();
            iVar9 = *piVar13;
            close(iVar8);
            *piVar13 = iVar9;
            goto LAB_00100300;
          }
          if (__buf->st_dev != local_e8.st_dev || __buf->st_ino != local_e8.st_ino) {
            piVar13 = __errno_location();
            iVar9 = *piVar13;
            close(iVar8);
            uVar4 = 0;
            *piVar13 = iVar9;
            iVar9 = 3;
            if (*param_7 == 0) goto LAB_001001b2;
            goto LAB_00100800;
          }
          if (((param_5 == 0xffffffff) || (param_5 == local_e8.st_uid)) &&
             ((param_6 == 0xffffffff || (param_6 == local_e8.st_gid)))) {
            iVar9 = fchown(iVar8,param_3,param_4);
            if (iVar9 != 0) goto LAB_001009f0;
            iVar9 = close(iVar8);
            if (iVar9 < 0) goto LAB_00100300;
          }
          else {
            piVar13 = __errno_location();
            iVar9 = *piVar13;
            close(iVar8);
            *piVar13 = iVar9;
          }
LAB_00100670:
          iVar8 = *param_7;
          if (iVar8 != 2) {
            if (param_3 == 0xffffffff) {
              if (param_4 != 0xffffffff) {
LAB_001006a8:
                if (__buf->st_gid == param_4) {
                  if (iVar8 != 0) goto LAB_00100740;
                  uVar4 = 1;
                  __uid = __buf->st_uid;
                  iVar9 = 4;
                }
                else {
                  uVar4 = 1;
                  __uid = __buf->st_uid;
                  iVar9 = 2;
                }
                goto LAB_001001c0;
              }
              if (iVar8 == 0) goto LAB_001001a7;
            }
            else {
              __uid = __buf->st_uid;
              uVar4 = 1;
              iVar9 = 2;
              if (__uid != param_3) goto LAB_001001c0;
              if (param_4 != 0xffffffff) goto LAB_001006a8;
              if (iVar8 == 0) {
                iVar9 = 4;
                goto LAB_001001b2;
              }
            }
          }
LAB_00100740:
          uVar4 = 1;
          goto LAB_0010044b;
        }
      }
      else if (((6 < uVar18) || ((0x56UL >> (uVar19 & 0x3f) & 1) == 0)) ||
              ((p_Var2 = *(__ino_t **)(param_7 + 2), p_Var2 == (__ino_t *)0x0 ||
               (p_Var2[1] != __buf->st_dev || __buf->st_ino != *p_Var2)))) {
LAB_0010019c:
        if (*param_7 != 0) goto LAB_00100740;
LAB_001001a7:
        uVar4 = 1;
        iVar9 = 4;
        goto LAB_001001b2;
      }
      iVar9 = strcmp(__s1,"/");
      if (iVar9 == 0) {
        uVar12 = quotearg_style(4,__s1);
        uVar15 = dcgettext(0,"it is dangerous to operate recursively on %s",5);
        error(0,0,uVar15,uVar12);
      }
      else {
        uVar12 = quotearg_n_style(1,4,&_LC0);
        uVar15 = quotearg_n_style(0,4,__s1);
        uVar17 = dcgettext(0,"it is dangerous to operate recursively on %s (same as %s)",5);
        error(0,0,uVar17,uVar15,uVar12);
      }
      uVar12 = dcgettext(0,"use --no-preserve-root to override this failsafe",5);
      error(0,0,uVar12);
LAB_00100621:
      uVar4 = 0;
      goto LAB_001004a0;
    }
    __buf = &local_178;
    iVar9 = fstatat(*(int *)(param_1 + 0x2c),pcVar20,__buf,0);
    if (iVar9 == 0) {
      uVar19 = (ulong)*(ushort *)(param_2 + 0x68);
      goto LAB_00100157;
    }
    if (*(char *)((long)param_7 + 0x11) == '\0') {
      uVar12 = quotearg_style(4,__s1);
      pcVar20 = "cannot dereference %s";
LAB_00100b48:
      uVar15 = dcgettext(0,pcVar20,5);
LAB_00100b52:
      piVar13 = __errno_location();
      error(0,*piVar13,uVar15,uVar12);
    }
LAB_0010030a:
    if (*param_7 == 0) {
      uVar4 = 0;
      iVar9 = 3;
      goto LAB_001001b2;
    }
LAB_00100800:
    uVar4 = 0;
  }
LAB_0010044b:
  if ((char)param_7[1] == '\0') {
    rpl_fts_set(param_1,param_2,4);
  }
LAB_001004a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



uint chown_files(undefined8 param_1,ulong param_2,undefined4 param_3,undefined4 param_4,uint param_5
                ,uint param_6,int *param_7)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  uint uVar7;
  
  if (((param_5 & param_6) == 0xffffffff) && ((char)param_7[4] == '\0')) {
    param_2 = (ulong)((uint)param_2 | (uint)(*param_7 == 2) << 3);
  }
  uVar7 = 1;
  uVar3 = xfts_open(param_1,param_2,0);
  while( true ) {
    lVar4 = rpl_fts_read(uVar3);
    if (lVar4 == 0) break;
    uVar1 = change_file_owner(uVar3,lVar4,param_3,param_4,param_5,param_6,param_7);
    uVar7 = uVar7 & uVar1;
  }
  piVar5 = __errno_location();
  if (*piVar5 != 0) {
    if (*(char *)((long)param_7 + 0x11) == '\0') {
      uVar7 = 0;
      uVar6 = dcgettext(0,"fts_read failed",5);
      error(0,*piVar5,uVar6);
    }
    else {
      uVar7 = 0;
    }
  }
  iVar2 = rpl_fts_close(uVar3);
  if (iVar2 != 0) {
    uVar7 = 0;
    uVar3 = dcgettext(0,"fts_close failed",5);
    error(0,*piVar5,uVar3);
  }
  return uVar7;
}


