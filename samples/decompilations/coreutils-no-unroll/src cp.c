
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void decode_preserve_arg(undefined8 param_1,undefined8 param_2,char param_3)

{
  char *__s;
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = "--preserve";
  __s = (char *)xstrdup();
  if (param_3 == '\0') {
    pcVar3 = "--no-preserve";
  }
  pcVar1 = strchr(__s,0x2c);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  lVar2 = __xargmatch_internal(pcVar3,__s,preserve_args_3,preserve_vals_2,4,_argmatch_die);
  if (*(uint *)(preserve_vals_2 + lVar2 * 4) < 7) {
                    /* WARNING: Could not recover jumptable at 0x001000cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00101d60 +
              *(int *)(&DAT_00101d60 + (ulong)*(uint *)(preserve_vals_2 + lVar2 * 4) * 4)))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0","src/cp.c",0x3c5,"decode_preserve_arg");
}



undefined8
make_dir_parents_private
          (char *param_1,ulong param_2,int param_3,long param_4,__dev_t *param_5,char *param_6,
          long param_7)

{
  __dev_t _Var1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  size_t sVar9;
  ulong uVar10;
  char *pcVar11;
  int *piVar12;
  __dev_t *p_Var13;
  undefined8 uVar14;
  uint uVar15;
  long *plVar16;
  undefined1 *puVar17;
  long *plVar18;
  undefined1 *puVar20;
  char *pcVar22;
  uint uVar23;
  long in_FS_OFFSET;
  long local_1a8;
  stat *local_1a0;
  __dev_t *local_198;
  stat *local_190;
  char *local_188;
  ulong local_180;
  char *local_178;
  int local_16c;
  stat local_168;
  stat local_d8;
  long local_40;
  long *plVar19;
  undefined1 *puVar21;
  
  plVar19 = &local_1a8;
  plVar18 = &local_1a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a8 = param_4;
  local_198 = param_5;
  local_188 = param_6;
  local_16c = param_3;
  uVar7 = dir_len();
  *param_5 = 0;
  plVar16 = &local_1a8;
  if (param_2 < uVar7) {
    sVar9 = strlen(param_1);
    plVar16 = &local_1a8;
    while (plVar19 != (long *)((long)&local_1a8 - (sVar9 + 0x18 & 0xfffffffffffff000))) {
      plVar18 = (long *)((long)plVar16 + -0x1000);
      *(undefined8 *)((long)plVar16 + -8) = *(undefined8 *)((long)plVar16 + -8);
      plVar19 = (long *)((long)plVar16 + -0x1000);
      plVar16 = (long *)((long)plVar16 + -0x1000);
    }
    uVar10 = (ulong)((uint)(sVar9 + 0x18) & 0xff0);
    lVar2 = -uVar10;
    puVar20 = (undefined1 *)((long)plVar18 + lVar2);
    puVar21 = (undefined1 *)((long)plVar18 + lVar2);
    if (uVar10 != 0) {
      *(undefined8 *)((long)plVar18 + -8) = *(undefined8 *)((long)plVar18 + -8);
    }
    *(undefined8 *)((long)plVar18 + lVar2 + -8) = 0x1002b3;
    local_180 = __memcpy_chk((ulong)((long)plVar18 + lVar2 + 0xf) & 0xfffffffffffffff0,param_1,
                             sVar9 + 1,sVar9 + 1);
    puVar17 = (undefined1 *)((long)plVar18 + lVar2);
    while (puVar20 != (undefined1 *)((long)plVar18 + (lVar2 - (uVar7 + 0x18 & 0xfffffffffffff000))))
    {
      puVar21 = puVar17 + -0x1000;
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      puVar20 = puVar17 + -0x1000;
      puVar17 = puVar17 + -0x1000;
    }
    uVar10 = (ulong)((uint)(uVar7 + 0x18) & 0xff0);
    lVar2 = -uVar10;
    plVar16 = (long *)(puVar21 + lVar2);
    puVar17 = puVar21 + lVar2;
    if (uVar10 != 0) {
      *(undefined8 *)(puVar21 + -8) = *(undefined8 *)(puVar21 + -8);
    }
    uVar10 = (ulong)(puVar21 + lVar2 + 0xf) & 0xfffffffffffffff0;
    *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100326;
    __memcpy_chk(uVar10,local_180,uVar7);
    pcVar22 = (char *)(uVar10 + param_2);
    *(undefined1 *)(uVar10 + uVar7) = 0;
    cVar3 = *pcVar22;
    while (cVar3 == '/') {
      pcVar22 = pcVar22 + 1;
      cVar3 = *pcVar22;
    }
    local_190 = &local_168;
    *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100367;
    iVar4 = fstatat(local_16c,pcVar22,local_190,0);
    if (iVar4 == 0) {
      if ((local_168.st_mode & 0xf000) != 0x4000) {
LAB_001007a1:
        *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1007ab;
        uVar8 = quotearg_style(4,uVar10);
        *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1007c1;
        uVar14 = dcgettext(0,"%s exists but is not a directory",5);
        *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1007d2;
        error(0,0,uVar14,uVar8);
        uVar8 = 0;
        puVar17 = puVar21 + lVar2;
        goto LAB_00100221;
      }
      *local_188 = '\0';
    }
    else {
      local_178 = (char *)(local_180 + param_2);
      cVar3 = *local_178;
      pcVar22 = local_178;
      while (cVar3 == '/') {
        pcVar22 = pcVar22 + 1;
        cVar3 = *pcVar22;
      }
      local_1a0 = &local_d8;
      pcVar11 = pcVar22;
      while( true ) {
        *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1003ba;
        pcVar11 = strchr(pcVar11,0x2f);
        plVar16 = (long *)(puVar21 + lVar2);
        if (pcVar11 == (char *)0x0) break;
        *pcVar11 = '\0';
        *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1003e0;
        iVar4 = fstatat(local_16c,pcVar22,local_190,0);
        if (((iVar4 != 0) || (*(char *)(param_7 + 0x1f) != '\0')) ||
           (*(short *)(param_7 + 0x20) != 0)) {
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1004b3;
          iVar5 = stat(local_178,local_1a0);
          if (iVar5 == 0) {
            if ((local_d8.st_mode & 0xf000) == 0x4000) goto LAB_001004cc;
            iVar5 = 0x14;
LAB_001006c4:
            local_16c = iVar5;
            *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1006dc;
            uVar8 = quotearg_style(4,local_178);
            *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1006f2;
            uVar14 = dcgettext(0,"failed to get attributes of %s",5);
            *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100707;
            error(0,local_16c,uVar14,uVar8);
            goto LAB_00100707;
          }
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1004c0;
          piVar12 = __errno_location();
          iVar5 = *piVar12;
          if (*piVar12 != 0) goto LAB_001006c4;
LAB_001004cc:
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1004d6;
          p_Var13 = (__dev_t *)xmalloc(0xa8);
          *p_Var13 = local_d8.st_dev;
          p_Var13[1] = local_d8.st_ino;
          p_Var13[2] = local_d8.st_nlink;
          p_Var13[3] = CONCAT44(local_d8.st_uid,local_d8.st_mode);
          p_Var13[4] = local_d8._32_8_;
          p_Var13[5] = local_d8.st_rdev;
          p_Var13[6] = local_d8.st_size;
          p_Var13[7] = local_d8.st_blksize;
          p_Var13[8] = local_d8.st_blocks;
          p_Var13[9] = local_d8.st_atim.tv_sec;
          p_Var13[10] = local_d8.st_atim.tv_nsec;
          p_Var13[0xb] = local_d8.st_mtim.tv_sec;
          p_Var13[0xc] = local_d8.st_mtim.tv_nsec;
          p_Var13[0xd] = local_d8.st_ctim.tv_sec;
          p_Var13[0xe] = local_d8.st_ctim.tv_nsec;
          p_Var13[0xf] = local_d8.__unused[0];
          p_Var13[0x10] = local_d8.__unused[1];
          p_Var13[0x11] = local_d8.__unused[2];
          *(undefined1 *)(p_Var13 + 0x12) = 0;
          p_Var13[0x13] = (long)pcVar11 - local_180;
          _Var1 = *local_198;
          *local_198 = (__dev_t)p_Var13;
          p_Var13[0x14] = _Var1;
          if (iVar4 == 0) goto LAB_00100404;
          _Var1 = p_Var13[3];
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x10058c;
          cVar3 = set_process_security_ctx(local_178,local_180,(int)_Var1,1,param_7);
          if (cVar3 == '\0') goto LAB_00100707;
          uVar6 = (uint)p_Var13[3];
          *local_188 = '\x01';
          if (*(char *)(param_7 + 0x1f) == '\0') {
            if (*(char *)(param_7 + 0x20) == '\0') {
              uVar15 = 0xffffffff;
              uVar23 = 0;
            }
            else {
              uVar23 = uVar6 & 0x12;
              uVar15 = ~uVar23;
            }
          }
          else {
            uVar23 = uVar6 & 0x3f;
            uVar15 = ~uVar23;
          }
          if (*(char *)(param_7 + 0x22) != '\0') {
            uVar6 = 0x1ff;
          }
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1005de;
          iVar4 = mkdirat(local_16c,pcVar22,uVar6 & uVar15 & 0xfff);
          if (iVar4 == 0) {
            if (local_1a8 != 0) {
              *(undefined8 *)(puVar21 + lVar2 + -8) = 0x10060f;
              __printf_chk(2,local_1a8,local_178,local_180);
            }
            *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100629;
            iVar4 = fstatat(local_16c,pcVar22,local_190,0x100);
            if (iVar4 == 0) {
              if (*(char *)(param_7 + 0x20) == '\0') {
                if ((~local_168.st_mode & uVar23) == 0) {
LAB_0010064c:
                  if ((~local_168.st_mode & 0x1c0) == 0) goto LAB_00100667;
                }
                else {
                  *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100746;
                  uVar6 = cached_umask();
                  uVar23 = uVar23 & ~uVar6;
                  if ((~local_168.st_mode & uVar23) == 0) goto LAB_0010064c;
                }
                *(undefined1 *)(p_Var13 + 0x12) = 1;
                *(uint *)(p_Var13 + 3) = uVar23 | local_168.st_mode;
              }
LAB_00100667:
              if (local_168.st_mode != (local_168.st_mode | 0x1c0)) {
                *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100686;
                iVar4 = fchmodat(local_16c,pcVar22,local_168.st_mode | 0x1c0,0x100);
                if (iVar4 != 0) {
                  *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100836;
                  uVar8 = quotearg_style(4,local_180);
                  *(undefined8 *)(puVar21 + lVar2 + -8) = 0x10084c;
                  uVar14 = dcgettext(0,"setting permissions for %s",5);
                  *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100854;
                  piVar12 = __errno_location();
                  iVar4 = *piVar12;
                  *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100865;
                  error(0,iVar4,uVar14,uVar8);
                  uVar8 = 0;
                  puVar17 = puVar21 + lVar2;
                  goto LAB_00100221;
                }
              }
              if (*local_188 == '\0') goto LAB_00100446;
              goto LAB_00100478;
            }
            *(undefined8 *)(puVar21 + lVar2 + -8) = 0x1007ef;
            uVar8 = quotearg_style(4,local_180);
            pcVar22 = "failed to get attributes of %s";
          }
          else {
            *(undefined8 *)(puVar21 + lVar2 + -8) = 0x10087d;
            uVar8 = quotearg_style(4,local_180);
            pcVar22 = "cannot make directory %s";
          }
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100805;
          uVar14 = dcgettext(0,pcVar22,5);
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x10080d;
          piVar12 = __errno_location();
          iVar4 = *piVar12;
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x10081e;
          error(0,iVar4,uVar14,uVar8);
          uVar8 = 0;
          goto LAB_00100221;
        }
LAB_00100404:
        *(undefined8 *)(puVar21 + lVar2 + -8) = 0x10041e;
        cVar3 = set_process_security_ctx(local_178,local_180,0,0,param_7);
        if (cVar3 == '\0') {
LAB_00100707:
          uVar8 = 0;
          puVar17 = puVar21 + lVar2;
          goto LAB_00100221;
        }
        uVar10 = local_180;
        if ((local_168.st_mode & 0xf000) != 0x4000) goto LAB_001007a1;
        *local_188 = '\0';
LAB_00100446:
        if ((*(long *)(param_7 + 0x28) != 0) || (*(char *)(param_7 + 0x33) != '\0')) {
          *(undefined8 *)(puVar21 + lVar2 + -8) = 0x100463;
          cVar3 = set_file_security_ctx(local_180,0,param_7);
          if ((cVar3 == '\0') && (*(char *)(param_7 + 0x34) != '\0')) goto LAB_00100707;
        }
LAB_00100478:
        cVar3 = pcVar11[1];
        *pcVar11 = '/';
        pcVar11 = pcVar11 + 1;
        while (cVar3 == '/') {
          pcVar11 = pcVar11 + 1;
          cVar3 = *pcVar11;
        }
      }
    }
  }
  uVar8 = 1;
  puVar17 = (undefined1 *)plVar16;
LAB_00100221:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar17 + -8) = 0x1007de;
    __stack_chk_fail();
  }
  return uVar8;
}



undefined8
re_protect(char *param_1,long param_2,int param_3,timespec *param_4,long param_5,long param_6)

{
  undefined4 uVar1;
  __gid_t _Var2;
  __uid_t __owner;
  __mode_t __mode;
  long lVar3;
  timespec **pptVar4;
  char cVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  timespec **pptVar13;
  char *pcVar15;
  long in_FS_OFFSET;
  timespec *local_78;
  long local_70;
  timespec local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  timespec **pptVar14;
  
  pptVar13 = &local_78;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = param_4;
  local_70 = param_2;
  sVar7 = strlen(param_1);
  pptVar14 = &local_78;
  pptVar4 = &local_78;
  while (pptVar14 != (timespec **)((long)&local_78 - (sVar7 + 0x18 & 0xfffffffffffff000))) {
    pptVar13 = (timespec **)((long)pptVar4 + -0x1000);
    *(undefined8 *)((long)pptVar4 + -8) = *(undefined8 *)((long)pptVar4 + -8);
    pptVar14 = (timespec **)((long)pptVar4 + -0x1000);
    pptVar4 = (timespec **)((long)pptVar4 + -0x1000);
  }
  uVar12 = (ulong)((uint)(sVar7 + 0x18) & 0xff0);
  lVar3 = -uVar12;
  if (uVar12 != 0) {
    *(undefined8 *)((long)pptVar13 + -8) = *(undefined8 *)((long)pptVar13 + -8);
  }
  *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100937;
  lVar8 = __memcpy_chk((ulong)((long)pptVar13 + lVar3 + 0xf) & 0xfffffffffffffff0,param_1,sVar7 + 1)
  ;
  local_70 = (local_70 - (long)param_1) + lVar8;
  pcVar15 = (char *)((long)local_78 + (lVar8 - (long)param_1));
  if (param_5 != 0) {
    local_78 = &local_68;
    do {
      cVar5 = *(char *)(param_6 + 0x21);
      *(undefined1 *)(lVar8 + *(long *)(param_5 + 0x98)) = 0;
      if (cVar5 != '\0') {
        local_68.tv_sec = *(__time_t *)(param_5 + 0x48);
        local_68.tv_nsec = *(long *)(param_5 + 0x50);
        local_58 = *(undefined8 *)(param_5 + 0x58);
        uStack_50 = *(undefined8 *)(param_5 + 0x60);
        *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x1009e5;
        iVar6 = utimensat(param_3,pcVar15,local_78,0);
        if (iVar6 == 0) goto LAB_00100970;
        *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x1009f6;
        uVar9 = quotearg_style(4,lVar8);
        pcVar15 = "failed to preserve times for %s";
LAB_00100ac8:
        *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100acf;
        uVar10 = dcgettext(0,pcVar15,5);
        *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100ad7;
        piVar11 = __errno_location();
        iVar6 = *piVar11;
        *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100ae8;
        error(0,iVar6,uVar10,uVar9);
        uVar9 = 0;
        goto LAB_00100af5;
      }
LAB_00100970:
      if (*(char *)(param_6 + 0x1f) != '\0') {
        _Var2 = *(__gid_t *)(param_5 + 0x20);
        __owner = *(__uid_t *)(param_5 + 0x1c);
        *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100a59;
        iVar6 = fchownat(param_3,pcVar15,__owner,_Var2,0x100);
        if (iVar6 != 0) {
          *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100a69;
          cVar5 = chown_failure_ok(param_6);
          if (cVar5 == '\0') {
            *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100b2b;
            uVar9 = quotearg_style(4,lVar8);
            pcVar15 = "failed to preserve ownership for %s";
            goto LAB_00100ac8;
          }
          _Var2 = *(__gid_t *)(param_5 + 0x20);
          *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100a8b;
          fchownat(param_3,pcVar15,0xffffffff,_Var2,0x100);
        }
      }
      if (*(char *)(param_6 + 0x20) == '\0') {
        if (*(char *)(param_5 + 0x90) != '\0') {
          __mode = *(__mode_t *)(param_5 + 0x18);
          *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100aa4;
          iVar6 = fchmodat(param_3,pcVar15,__mode,0x100);
          if (iVar6 != 0) {
            *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100ab9;
            uVar9 = quotearg_style(4,lVar8);
            pcVar15 = "failed to preserve permissions for %s";
            goto LAB_00100ac8;
          }
        }
      }
      else {
        uVar1 = *(undefined4 *)(param_5 + 0x18);
        *(undefined8 *)((long)pptVar13 + lVar3 + -8) = 0x100a2a;
        iVar6 = xcopy_acl(local_70,0xffffffff,lVar8,0xffffffff,uVar1);
        if (iVar6 != 0) {
          uVar9 = 0;
          goto LAB_00100af5;
        }
      }
      *(undefined1 *)(lVar8 + *(long *)(param_5 + 0x98)) = 0x2f;
      param_5 = *(long *)(param_5 + 0xa0);
    } while (param_5 != 0);
  }
  uVar9 = 1;
LAB_00100af5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)pptVar13 + lVar3 + -8) = &UNK_00100b41;
    __stack_chk_fail();
  }
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100ba9;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Copy SOURCE to DEST, or multiple SOURCE(s) to DIRECTORY.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --archive                same as -dR --preserve=all\n      --attributes-only        don\'t copy the file data, just the attributes\n      --backup[=CONTROL]       make a backup of each existing destination file\n  -b                           like --backup but does not accept an argument\n      --copy-contents          copy contents of special files when recursive\n  -d                           same as --no-dereference --preserve=links\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --debug                  explain how a file is copied.  Implies -v\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f, --force                  if an existing destination file cannot be\n                                 opened, remove it and try again (this option\n                                 is ignored when the -n option is also used)\n  -i, --interactive            prompt before overwrite (overrides a previous -n\n                                  option)\n  -H                           follow command-line symbolic links in SOURCE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -l, --link                   hard link files instead of copying\n  -L, --dereference            always follow symbolic links in SOURCE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -n, --no-clobber             (deprecated) silently skip existing files.\n                                 See also --update\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -P, --no-dereference         never follow symbolic links in SOURCE\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -p                           same as --preserve=mode,ownership,timestamps\n      --preserve[=ATTR_LIST]   preserve the specified attributes\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --no-preserve=ATTR_LIST  don\'t preserve the specified attributes\n      --parents                use full source file name under DIRECTORY\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -R, -r, --recursive          copy directories recursively\n      --reflink[=WHEN]         control clone/CoW copies. See below\n      --remove-destination     remove each existing destination file before\n                                 attempting to open it (contrast with --force)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --sparse=WHEN            control creation of sparse files. See below\n      --strip-trailing-slashes  remove any trailing slashes from each SOURCE\n                                 argument\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -s, --symbolic-link          make symbolic links instead of copying\n  -S, --suffix=SUFFIX          override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory    treat DEST as a normal file\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --update[=UPDATE]        control which existing files are updated;\n                                 UPDATE={all,none,none-fail,older(default)}\n  -u                           equivalent to --update[=older].  See below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -v, --verbose                explain what is being done\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --keep-directory-symlink  follow existing symlinks to directories\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -x, --one-file-system        stay on this file system\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -Z                           set SELinux security context of destination\n                                 file to default type\n      --context[=CTX]          like -Z, or if CTX is specified then set the\n                                 SELinux or SMACK security context to CTX\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nATTR_LIST is a comma-separated list of attributes. Attributes are \'mode\' for\npermissions (including any ACL and xattr permissions), \'ownership\' for user\nand group, \'timestamps\' for file timestamps, \'links\' for hard links, \'context\'\nfor security context, \'xattr\' for extended attributes, and \'all\' for all\nattributes.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nBy default, sparse SOURCE files are detected by a crude heuristic and the\ncorresponding DEST file is made sparse as well.  That is the behavior\nselected by --sparse=auto.  Specify --sparse=always to create a sparse DEST\nfile whenever the SOURCE file contains a long enough sequence of zero bytes.\nUse --sparse=never to inhibit creation of sparse files.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUPDATE controls which existing files in the destination are replaced.\n\'all\' is the default operation when an --update option is not specified,\nand results in all existing files in the destination being replaced.\n\'none\' is like the --no-clobber option, in that no files in the\ndestination are replaced, and skipped files do not induce a failure.\n\'none-fail\' also ensures no files are replaced in the destination,\nbut any skipped files are diagnosed and induce a failure.\n\'older\' is the default operation when --update is specified, and results\nin files being replaced if they\'re older than the corresponding source file.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nWhen --reflink[=always] is specified, perform a lightweight copy, where the\ndata blocks are copied only when modified.  If this is not possible the copy\nfails, or if --reflink=auto is specified, fall back to a standard copy.\nUse --reflink=never to ensure a standard copy is performed.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe backup suffix is \'~\', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAs a special case, cp makes a backup of SOURCE when the force and backup\noptions are given and SOURCE and DEST are the same name for an existing,\nregular file.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC11;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    if (((*pcVar4 == 'c') && (pcVar4[1] == 'p')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC12;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001010f4;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC12);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001010f4:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC12);
    if (puVar7 == &_LC12) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100ba9:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



uint do_copy(int param_1,undefined8 *param_2,char *param_3,char param_4,int *param_5)

{
  EVP_PKEY_CTX *pEVar1;
  void *pvVar2;
  long lVar3;
  void *__ptr;
  char cVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  undefined8 uVar8;
  EVP_PKEY_CTX *pEVar9;
  byte *pbVar10;
  undefined8 uVar11;
  int *piVar12;
  char *pcVar13;
  ulong uVar14;
  char *extraout_RDX;
  char *extraout_RDX_00;
  undefined1 *puVar15;
  char **ppcVar16;
  char **ppcVar17;
  int *piVar18;
  long lVar19;
  uint uVar20;
  long in_FS_OFFSET;
  byte bVar21;
  char *local_128;
  char **local_120;
  char *local_118;
  char *local_110;
  int *local_108;
  char *local_100;
  char local_ea;
  undefined1 local_e9;
  void *local_e8;
  char *local_e0;
  stat local_d8;
  long local_40;
  
  bVar21 = 0;
  ppcVar17 = &local_128;
  ppcVar16 = &local_128;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_ea = '\0';
  local_108 = param_5;
  if ((int)(uint)(param_3 == (char *)0x0) < param_1) {
    local_d8.st_mode = 0;
    if (param_4 != '\0') {
      if (param_3 == (char *)0x0) {
        if (param_1 < 3) goto LAB_0010146e;
      }
      else {
        uVar8 = dcgettext(0,"cannot combine --target-directory (-t) and --no-target-directory (-T)",
                          5);
        param_2 = (undefined8 *)0x0;
        error(1,0,uVar8);
      }
      uVar8 = quotearg_style(4,param_2[2]);
      pcVar13 = "extra operand %s";
LAB_0010184c:
      uVar11 = dcgettext(0,pcVar13,5);
      error(0,0,uVar11,uVar8);
      goto LAB_00101864;
    }
    if (param_3 == (char *)0x0) {
      local_118 = (char *)CONCAT44(local_118._4_4_,param_1);
      local_100 = (char *)param_2[(long)param_1 + -1];
      iVar5 = target_directory_operand(local_100,&local_d8);
      local_110 = (char *)CONCAT44(local_110._4_4_,iVar5);
      if (iVar5 == -1) {
        local_110 = local_100;
        local_100 = (char *)CONCAT44(local_100._4_4_,(int)local_118);
        piVar12 = __errno_location();
        uVar14 = (ulong)local_100 & 0xffffffff;
        iVar5 = *piVar12;
        pcVar13 = local_110;
        if (iVar5 == 2) goto LAB_001017e6;
        while (2 < (int)uVar14) {
          uVar8 = quotearg_style(4,pcVar13);
          uVar11 = dcgettext(0,"target %s",5);
          error(1,iVar5,uVar11,uVar8);
          pcVar13 = extraout_RDX;
LAB_001017e6:
          local_ea = '\x01';
        }
      }
      else {
        iVar5 = (int)local_118 + -1;
        if (local_100 != (char *)0x0) {
          if (1 < iVar5) goto LAB_001016e0;
          uVar20 = 1;
          ppcVar17 = &local_128;
          if (iVar5 == 1) {
            iVar5 = 1;
            local_128 = local_100;
            goto LAB_001012e5;
          }
          goto LAB_00101437;
        }
      }
LAB_0010146e:
      cVar4 = local_ea;
      pEVar1 = (EVP_PKEY_CTX *)*param_2;
      pEVar9 = (EVP_PKEY_CTX *)param_2[1];
      if (parents_option != '\0') {
        pcVar13 = "with --parents, the destination must be a directory";
        goto LAB_001018c4;
      }
      if (((((*(char *)((long)local_108 + 0x16) != '\0') && (*local_108 != 0)) &&
           (iVar5 = strcmp((char *)pEVar1,(char *)pEVar9), iVar5 == 0)) && (cVar4 == '\0')) &&
         (((local_d8.st_mode != 0 || (iVar5 = stat((char *)pEVar9,&local_d8), iVar5 == 0)) &&
          (piVar12 = local_108, (local_d8.st_mode & 0xf000) == 0x8000)))) {
        pEVar9 = (EVP_PKEY_CTX *)find_backup_file_name(0xffffff9c,pEVar9,*local_108);
        piVar18 = &x_tmp_0;
        for (lVar19 = 0x18; lVar19 != 0; lVar19 = lVar19 + -1) {
          *piVar18 = *piVar12;
          piVar12 = piVar12 + (ulong)bVar21 * -2 + 1;
          piVar18 = piVar18 + (ulong)bVar21 * -2 + 1;
        }
        x_tmp_0 = 0;
        local_108 = &x_tmp_0;
      }
      uVar20 = copy(pEVar1,pEVar9);
      ppcVar17 = &local_128;
LAB_00101437:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar20;
      }
      goto LAB_001018ad;
    }
    local_118 = (char *)CONCAT44(local_118._4_4_,param_1);
    local_100 = param_3;
    iVar5 = target_directory_operand(param_3,&local_d8);
    local_110 = (char *)CONCAT44(local_110._4_4_,iVar5);
    pcVar13 = local_100;
    if (iVar5 != -1) {
      local_128 = local_100;
      iVar5 = (int)local_118;
      if ((int)local_118 != 1) {
LAB_001016e0:
        piVar12 = local_108;
        local_118 = local_100;
        local_100 = (char *)CONCAT44(local_100._4_4_,iVar5);
        dest_info_init(local_108);
        src_info_init(piVar12);
        local_128 = local_118;
        iVar5 = (int)local_100;
      }
LAB_001012e5:
      local_120 = &local_e0;
      local_100 = (char *)CONCAT44(local_100._4_4_,iVar5);
      lVar19 = 0;
      uVar20 = 1;
      do {
        pEVar1 = (EVP_PKEY_CTX *)param_2[lVar19];
        if (remove_trailing_slashes != '\0') {
          *(undefined8 *)((long)ppcVar16 + -8) = 0x1016a0;
          strip_trailing_slashes(pEVar1);
        }
        if (parents_option == '\0') {
          *(undefined8 *)((long)ppcVar16 + -8) = 0x10154d;
          pcVar13 = (char *)last_component();
          *(undefined8 *)((long)ppcVar16 + -8) = 0x101558;
          sVar7 = strlen(pcVar13);
          for (puVar15 = (undefined1 *)ppcVar16;
              puVar15 != (undefined1 *)((long)ppcVar16 + -(sVar7 + 0x18 & 0xfffffffffffff000));
              puVar15 = puVar15 + -0x1000) {
            *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          }
          uVar14 = (ulong)((uint)(sVar7 + 0x18) & 0xff0);
          lVar3 = -uVar14;
          ppcVar16 = (char **)(puVar15 + lVar3);
          if (uVar14 != 0) {
            *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          }
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x1015b8;
          pbVar10 = (byte *)__memcpy_chk((ulong)(puVar15 + lVar3 + 0xf) & 0xfffffffffffffff0,pcVar13
                                         ,sVar7 + 1,sVar7 + 1);
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x1015c3;
          strip_trailing_slashes(pbVar10);
          uVar6 = *pbVar10 - 0x2e;
          if ((uVar6 == 0) && (uVar6 = pbVar10[1] - 0x2e, uVar6 == 0)) {
            uVar6 = (uint)pbVar10[2];
          }
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x1015f9;
          pEVar9 = (EVP_PKEY_CTX *)file_name_concat(local_128,pbVar10 + (uVar6 == 0),local_120);
LAB_001015fc:
          cVar4 = *local_e0;
          local_118 = local_e0;
          while (cVar4 == '/') {
            local_118 = local_118 + 1;
            cVar4 = *local_118;
          }
          *(undefined8 *)((long)ppcVar16 + -8) = 0;
          *(undefined1 **)((long)ppcVar16 + -0x10) = &local_e9;
          *(undefined8 *)((long)ppcVar16 + -0x18) = 0x10164a;
          uVar6 = copy(pEVar1,pEVar9);
          uVar20 = uVar20 & uVar6;
          if (parents_option != '\0') {
            *(undefined8 *)((long)ppcVar16 + -8) = 0x101686;
            uVar6 = re_protect(pEVar9,local_e0,(ulong)local_110 & 0xffffffff,local_118,local_e8,
                               local_108);
            uVar20 = uVar20 & uVar6;
            goto LAB_00101413;
          }
        }
        else {
          *(undefined8 *)((long)ppcVar16 + -8) = 0x101336;
          sVar7 = strlen((char *)pEVar1);
          for (puVar15 = (undefined1 *)ppcVar16;
              puVar15 != (undefined1 *)((long)ppcVar16 + -(sVar7 + 0x18 & 0xfffffffffffff000));
              puVar15 = puVar15 + -0x1000) {
            *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          }
          uVar14 = (ulong)((uint)(sVar7 + 0x18) & 0xff0);
          lVar3 = -uVar14;
          ppcVar16 = (char **)(puVar15 + lVar3);
          if (uVar14 != 0) {
            *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
          }
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x101396;
          uVar8 = __memcpy_chk((ulong)(puVar15 + lVar3 + 0xf) & 0xfffffffffffffff0,pEVar1,sVar7 + 1,
                               sVar7 + 1);
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x1013a1;
          strip_trailing_slashes(uVar8);
          *(undefined8 *)(puVar15 + lVar3 + -8) = 0x1013b7;
          pEVar9 = (EVP_PKEY_CTX *)file_name_concat(local_128,uVar8,local_120);
          pcVar13 = (char *)0x0;
          if ((char)local_108[0x10] != '\0') {
            pcVar13 = "%s -> %s\n";
          }
          *(int **)(puVar15 + lVar3 + -0x10) = local_108;
          *(undefined8 *)(puVar15 + lVar3 + -0x18) = 0x1013fd;
          cVar4 = make_dir_parents_private
                            (pEVar9,(long)local_e0 - (long)pEVar9,(ulong)local_110 & 0xffffffff,
                             pcVar13,&local_e8,&local_ea);
          if (cVar4 != '\0') goto LAB_001015fc;
          uVar20 = 0;
          ppcVar16 = (char **)(puVar15 + lVar3);
LAB_00101413:
          __ptr = local_e8;
          if (parents_option != '\0') {
            while (__ptr != (void *)0x0) {
              pvVar2 = *(void **)((long)__ptr + 0xa0);
              *(undefined8 *)((long)ppcVar16 + -8) = 0x1016d6;
              local_e8 = pvVar2;
              free(__ptr);
              __ptr = pvVar2;
            }
          }
        }
        lVar19 = lVar19 + 1;
        *(undefined8 *)((long)ppcVar16 + -8) = 0x101427;
        free(pEVar9);
        ppcVar17 = ppcVar16;
      } while ((int)lVar19 < (int)local_100);
      goto LAB_00101437;
    }
  }
  else {
    if (param_1 == 1) {
      uVar8 = quotearg_style(4,*param_2);
      pcVar13 = "missing destination file operand after %s";
      goto LAB_0010184c;
    }
    pcVar13 = "missing file operand";
LAB_001018c4:
    uVar8 = dcgettext(0,pcVar13,5);
    error(0,0,uVar8);
LAB_00101864:
    usage(1);
    pcVar13 = extraout_RDX_00;
  }
  uVar8 = quotearg_style(4,pcVar13);
  uVar11 = dcgettext(0,"target directory %s",5);
  piVar12 = __errno_location();
  error(1,*piVar12,uVar11,uVar8);
LAB_001018ad:
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppcVar17 + -8) = 0x1018b2;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(ulong param_1,int *param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int *piVar11;
  ulong uVar12;
  undefined1 *puVar13;
  undefined8 in_R9;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined1 local_90;
  undefined1 local_8d;
  undefined4 local_8a;
  undefined1 local_86;
  long local_80;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  char cStack_75;
  char cStack_74;
  undefined1 uStack_73;
  char cStack_72;
  undefined1 uStack_71;
  char cStack_70;
  undefined1 uStack_6f;
  char local_6e;
  int local_6c;
  undefined1 local_68;
  undefined1 uStack_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  int local_5c;
  undefined1 local_58 [16];
  long local_40;
  
  uVar12 = param_1 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils");
  textdomain("coreutils");
  atexit((__func *)&close_stdin);
  selinux_enabled = '\0';
  cp_options_default(&local_a8);
  local_94 = 1;
  local_90 = 0;
  local_a4 = __LC70;
  uStack_9c = _UNK_00104988;
  local_8d = 0;
  local_5c = 1;
  local_8a = 0;
  local_86 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_77 = 1;
  uStack_76 = 0;
  cStack_75 = '\0';
  cStack_74 = '\0';
  uStack_73 = 0;
  cStack_72 = '\0';
  uStack_71 = 0;
  local_6e = '\0';
  cStack_70 = '\0';
  uStack_6f = 0;
  local_65 = 0;
  local_6c = 0;
  local_68 = 0;
  uStack_67 = 0;
  pcVar6 = getenv("POSIXLY_CORRECT");
  local_b2 = 0;
  local_c0 = 0;
  local_64 = pcVar6 != (char *)0x0;
  local_d8 = 0;
  local_b1 = 0;
  local_d0 = 0;
  local_c8 = 0;
  bVar1 = false;
  local_58 = (undefined1  [16])0x0;
  lVar2 = local_d0;
  lVar3 = local_c0;
LAB_00103de8:
  local_c0 = lVar3;
  local_d0 = lVar2;
  puVar13 = long_opts;
  iVar5 = getopt_long(param_1 & 0xffffffff,param_2,"abdfHilLnprst:uvxPRS:TZ",long_opts,0);
  if (iVar5 != -1) {
    if (0x10d < iVar5 + 0x83U) goto switchD_00103e1b_caseD_ffffff7f;
    lVar2 = local_d0;
    lVar3 = local_c0;
    switch(iVar5) {
    case 0x48:
      local_a4 = CONCAT44(local_a4._4_4_,3);
      break;
    case 0x4c:
      local_a4 = CONCAT44(local_a4._4_4_,4);
      break;
    case 0x50:
      local_a4 = CONCAT44(local_a4._4_4_,2);
      break;
    case 0x52:
    case 0x72:
      cStack_70 = '\x01';
      break;
    case 0x53:
      local_c8 = _optarg;
      bVar1 = true;
      break;
    case 0x54:
      local_b2 = 1;
      break;
    case 0x5a:
      if (selinux_enabled == '\0') {
        if (_optarg != 0) {
          uVar10 = dcgettext(0,"warning: ignoring --context; it requires an SELinux-enabled kernel",
                             5);
          error(0,0,uVar10);
        }
      }
      else {
        lVar3 = _optarg;
        if (_optarg == 0) {
          piVar11 = __errno_location();
          *piVar11 = 0x5f;
          local_80 = 0;
          uVar10 = dcgettext(0,"warning: ignoring --context",5);
          error(0,*piVar11,uVar10);
          lVar3 = local_c0;
        }
      }
      break;
    case 0x61:
      local_78 = 1;
      local_a4 = CONCAT44(local_a4._4_4_,2);
      local_8a._0_3_ = CONCAT21(_LC74,(undefined1)local_8a);
      local_8a = CONCAT13(1,(undefined3)local_8a);
      uStack_76 = 1;
      if (selinux_enabled != '\0') {
        cStack_75 = '\x01';
      }
      uStack_73 = 1;
      uStack_71 = (undefined1)_LC74;
      cStack_70 = (char)((ushort)_LC74 >> 8);
      break;
    case 0x62:
      bVar1 = true;
      lVar2 = _optarg;
      if (_optarg == 0) {
        lVar2 = local_d0;
      }
      break;
    case 100:
      local_78 = 1;
      local_a4 = CONCAT44(local_a4._4_4_,2);
      break;
    case 0x66:
      local_94._0_3_ = CONCAT12(1,(undefined2)local_94);
      break;
    case 0x69:
      local_a4 = CONCAT44(3,(int)local_a4);
      break;
    case 0x6c:
      local_94 = CONCAT13(1,(undefined3)local_94);
      break;
    case 0x6e:
      local_a4 = CONCAT44(2,(int)local_a4);
      break;
    case 0x73:
      local_6e = '\x01';
      break;
    case 0x74:
      if (local_d8 != 0) {
        pcVar6 = "multiple target directories specified";
        goto LAB_001043ce;
      }
      local_d8 = _optarg;
      break;
    case 0x75:
      local_6c = 1;
      if (_optarg != 0) {
        in_R9 = _argmatch_die;
        lVar7 = __xargmatch_internal
                          ("--update",_optarg,update_type_string,update_type,4,_argmatch_die,1,
                           puVar13);
        local_6c = *(int *)(update_type + lVar7 * 4);
      }
      break;
    case 0x76:
      local_68 = 1;
      break;
    case 0x78:
      local_8a = CONCAT31(local_8a._1_3_,1);
      break;
    case 0x80:
      uStack_77 = 0;
      break;
    case 0x81:
      local_b1 = 1;
      break;
    case 0x82:
      local_68 = 1;
      local_66 = 1;
      break;
    case 0x83:
      decode_preserve_arg(_optarg,&local_a8,0);
      break;
    case 0x84:
      parents_option = 1;
      break;
    case 0x85:
      if (_optarg != 0) {
        decode_preserve_arg(_optarg,&local_a8,1);
        uStack_76 = 1;
        break;
      }
    case 0x70:
      local_8a._0_3_ = CONCAT21(0x101,(undefined1)local_8a);
      local_8a = CONCAT13(1,(undefined3)local_8a);
      uStack_76 = 1;
      break;
    case 0x86:
      if (_optarg == 0) {
        local_5c = 2;
      }
      else {
        uVar10 = _argmatch_die;
        lVar7 = __xargmatch_internal
                          ("--reflink",_optarg,reflink_type_string,reflink_type,4,_argmatch_die,1,
                           in_R9);
        local_5c = *(int *)(reflink_type + lVar7 * 4);
        in_R9 = uVar10;
      }
      break;
    case 0x87:
      in_R9 = _argmatch_die;
      lVar7 = __xargmatch_internal
                        ("--sparse",_optarg,sparse_type_string,sparse_type,4,_argmatch_die,1,
                         (long)&switchD_00103e1b::switchdataD_00101d7c +
                         (long)(int)(&switchD_00103e1b::switchdataD_00101d7c)[iVar5 + 0x83U]);
      uStack_9c = CONCAT44(uStack_9c._4_4_,*(undefined4 *)(sparse_type + lVar7 * 4));
      break;
    case 0x88:
      remove_trailing_slashes = 1;
      break;
    case 0x89:
      local_94._0_2_ = CONCAT11(1,(undefined1)local_94);
      break;
    case 0x8a:
      goto switchD_00103e1b_caseD_8a;
    case -0x83:
      uVar10 = proper_name_lite("Jim Meyering","Jim Meyering");
      uVar8 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar9 = proper_name_lite("Torbjorn Granlund",&_LC81);
      version_etc(_stdout,&_LC12,"GNU coreutils",_Version,uVar9,uVar8,uVar10,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case -0x82:
      goto switchD_00103e1b_caseD_ffffff7e;
    default:
      goto switchD_00103e1b_caseD_ffffff7f;
    }
    goto LAB_00103de8;
  }
  if ((local_5c == 1) && ((int)uStack_9c == 1)) {
    local_5c = 0;
  }
  if ((local_94._3_1_ != '\0') && (local_6e != '\0')) {
    pcVar6 = "cannot make both hard and symbolic links";
    goto LAB_0010437d;
  }
  if (local_a4._4_4_ == 2) {
    local_6c = 2;
    if (bVar1) goto LAB_0010447a;
LAB_0010420b:
    if ((local_5c == 2) && ((int)uStack_9c != 2)) {
LAB_0010432c:
      pcVar6 = "--reflink can be used only with --sparse=auto";
      goto LAB_0010437d;
    }
    local_a8 = 0;
  }
  else {
    if (!bVar1) goto LAB_0010420b;
    if (local_6c - 2U < 2) goto LAB_0010447a;
    if ((local_5c == 2) && ((int)uStack_9c != 2)) goto LAB_0010432c;
    uVar10 = dcgettext(0,"backup type",5);
    local_a8 = xget_version(uVar10,local_d0);
  }
  set_simple_backup_suffix(local_c8);
  if ((int)local_a4 == 1) {
    if ((cStack_70 == '\0') || (local_94._3_1_ != '\0')) {
      local_a4 = CONCAT44(local_a4._4_4_,4);
      goto LAB_00104231;
    }
    local_a4 = CONCAT44(local_a4._4_4_,2);
  }
  else {
LAB_00104231:
    if (cStack_70 == '\0') goto LAB_0010423c;
  }
  local_94 = CONCAT31(local_94._1_3_,local_b1);
LAB_0010423c:
  if (local_c0 == 0 && local_80 == 0) goto LAB_001043a3;
  if (cStack_74 == '\0') {
    cStack_75 = '\0';
    do {
      if (local_c0 == 0) goto LAB_0010427b;
      param_2 = __errno_location();
      *param_2 = 0x5f;
      uVar12 = quote(local_c0);
      uVar10 = dcgettext(0,"failed to set default file creation context to %s",5);
      error(1,*param_2,uVar10,uVar12);
LAB_0010447a:
      pcVar6 = "--backup is mutually exclusive with -n or --update=none-fail";
LAB_0010437d:
      uVar10 = dcgettext(0,pcVar6,5);
      error(0,0,uVar10);
switchD_00103e1b_caseD_ffffff7f:
      usage();
switchD_00103e1b_caseD_ffffff7e:
      usage(0);
LAB_001043a3:
      if (cStack_75 == '\0') goto LAB_001043e6;
      if (cStack_74 == '\0') goto LAB_0010427b;
      if (selinux_enabled != '\0') goto LAB_0010427b;
      do {
        pcVar6 = "cannot preserve security context without an SELinux-enabled kernel";
LAB_001043ce:
        while( true ) {
          uVar10 = dcgettext(0,pcVar6,5);
          error(1,0,uVar10);
LAB_001043e6:
          if (cStack_74 != '\0') break;
LAB_0010427b:
          pcVar6 = "cannot preserve extended attributes, cp is built without xattr support";
          if (cStack_72 == '\0') {
            hash_init();
            bVar4 = do_copy((int)uVar12 - _optind,param_2 + (long)_optind * 2,local_d8,local_b2,
                            &local_a8);
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return bVar4 ^ 1;
          }
        }
LAB_00104262:
      } while (selinux_enabled == '\0');
    } while( true );
  }
  if (cStack_75 == '\0') goto LAB_00104262;
  pcVar6 = "cannot set target context and preserve it";
  goto LAB_001043ce;
switchD_00103e1b_caseD_8a:
  uStack_67 = 1;
  goto LAB_00103de8;
}


