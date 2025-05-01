
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) [clone .isra.0] */

void std::__cxx11::string::_M_construct<char_const*>
               (ulong *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  __n = param_3 - (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = __n;
  if (__n < 0x10) {
    __dest = (undefined1 *)*param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = (undefined1 *)*param_1;
      goto LAB_00100044;
    }
    if (__n == 0) goto LAB_00100044;
  }
  else {
    __dest = (undefined1 *)std::__cxx11::string::_M_create(param_1,(ulong)&local_28);
    *param_1 = (ulong)__dest;
    param_1[2] = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = (undefined1 *)*param_1;
LAB_00100044:
  param_1[1] = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* FileSysUtilsIsRegularFile(std::__cxx11::string const&) */

undefined4 FileSysUtilsIsRegularFile(string *param_1)

{
  long in_FS_OFFSET;
  stat64 sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stat64(*(char **)param_1,&sStack_a8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT31((int3)((sStack_a8.st_mode & 0xf000) >> 8),(sStack_a8.st_mode & 0xf000) == 0x8000
                   );
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileSysUtilsIsDirectory(std::__cxx11::string const&) */

undefined4 FileSysUtilsIsDirectory(string *param_1)

{
  long in_FS_OFFSET;
  stat64 sStack_a8;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  stat64(*(char **)param_1,&sStack_a8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT31((int3)((sStack_a8.st_mode & 0xf000) >> 8),(sStack_a8.st_mode & 0xf000) == 0x4000
                   );
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileSysUtilsPathExists(std::__cxx11::string const&) */

bool FileSysUtilsPathExists(string *param_1)

{
  int iVar1;
  
  iVar1 = access(*(char **)param_1,0);
  return iVar1 != -1;
}



/* FileSysUtilsIsAbsolutePath(std::__cxx11::string const&) */

undefined8 FileSysUtilsIsAbsolutePath(string *param_1)

{
  return CONCAT71((int7)((ulong)*(char **)param_1 >> 8),**(char **)param_1 == '/');
}



/* FileSysUtilsGetCurrentPath(std::__cxx11::string&) */

bool FileSysUtilsGetCurrentPath(string *param_1)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char acStack_1028 [4104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = getcwd(acStack_1028,0xfff);
  if (pcVar1 != (char *)0x0) {
    strlen(acStack_1028);
    std::__cxx11::string::_M_replace((ulong)param_1,0,*(char **)(param_1 + 8),(ulong)acStack_1028);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar1 != (char *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileSysUtilsGetCanonicalPath(std::__cxx11::string const&, std::__cxx11::string&) */

bool FileSysUtilsGetCanonicalPath(string *param_1,string *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  char acStack_1028 [4104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = __realpath_chk(*(undefined8 *)param_1,acStack_1028,0x1000);
  if (lVar1 != 0) {
    strlen(acStack_1028);
    std::__cxx11::string::_M_replace((ulong)param_2,0,*(char **)(param_2 + 8),(ulong)acStack_1028);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileSysUtilsGetAbsolutePath(std::__cxx11::string const&, std::__cxx11::string&) */

void FileSysUtilsGetAbsolutePath(string *param_1,string *param_2)

{
  FileSysUtilsGetCanonicalPath(param_1,param_2);
  return;
}



/* FileSysUtilsGetParentPath(std::__cxx11::string const&, std::__cxx11::string&) */

undefined4 FileSysUtilsGetParentPath(string *param_1,string *param_2)

{
  ulong uVar1;
  undefined1 *__src;
  undefined4 uVar2;
  ulong uVar3;
  string *__dest;
  long in_FS_OFFSET;
  ulong local_90;
  undefined1 *local_88;
  ulong local_80;
  undefined1 local_78;
  undefined7 uStack_77;
  string *local_68;
  size_t local_60;
  ulong local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_78 = 0;
  local_88 = &local_78;
  uVar2 = FileSysUtilsGetCanonicalPath(param_1,(string *)&local_88);
  if ((char)uVar2 == '\0') goto LAB_00100320;
  uVar3 = std::__cxx11::string::rfind((char)(string *)&local_88,0x2f);
  uVar1 = local_80;
  __src = local_88;
  local_68 = (string *)local_58;
  if (uVar3 == 0) {
    local_90 = local_80;
    if (local_80 < 0x10) {
      if (local_80 == 1) {
        local_58[0] = CONCAT71(local_58[0]._1_7_,*local_88);
      }
      else if (local_80 != 0) goto LAB_001004fe;
    }
    else {
      local_68 = (string *)std::__cxx11::string::_M_create((ulong *)&local_68,(ulong)&local_90);
      local_58[0] = local_90;
LAB_001004fe:
      memcpy(local_68,__src,uVar1);
    }
    local_68[local_90] = (string)0x0;
    local_60 = local_90;
  }
  else {
    if (local_80 < uVar3) {
      uVar3 = local_80;
    }
    std::__cxx11::string::_M_construct<char_const*>(&local_68,local_88,local_88 + uVar3);
  }
  __dest = *(string **)param_2;
  if (__dest == param_2 + 0x10) {
    if (local_68 == (string *)local_58) goto LAB_001004b0;
    *(string **)param_2 = local_68;
    *(size_t *)(param_2 + 8) = local_60;
    *(ulong *)(param_2 + 0x10) = local_58[0];
    local_68 = (string *)local_58;
  }
  else if (local_68 == (string *)local_58) {
LAB_001004b0:
    if (local_60 != 0) {
      if (local_60 == 1) {
        *__dest = local_58[0]._0_1_;
        __dest = *(string **)param_2;
      }
      else {
        memcpy(__dest,(string *)local_58,local_60);
        __dest = *(string **)param_2;
      }
    }
    *(size_t *)(param_2 + 8) = local_60;
    __dest[local_60] = (string)0x0;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 0x10);
    *(string **)param_2 = local_68;
    *(size_t *)(param_2 + 8) = local_60;
    *(ulong *)(param_2 + 0x10) = local_58[0];
    local_68 = (string *)local_58;
    if (__dest != (string *)0x0) {
      local_68 = __dest;
      local_58[0] = uVar1;
    }
  }
  local_60 = 0;
  *local_68 = (string)0x0;
  if (local_68 != (string *)local_58) {
    operator_delete(local_68,local_58[0] + 1);
  }
LAB_00100320:
  if (local_88 != &local_78) {
    operator_delete(local_88,CONCAT71(uStack_77,local_78) + 1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* FileSysUtilsCombinePaths(std::__cxx11::string const&, std::__cxx11::string const&,
   std::__cxx11::string&) */

undefined8 FileSysUtilsCombinePaths(string *param_1,string *param_2,string *param_3)

{
  long *plVar1;
  short *psVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  string *psVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  string *psVar12;
  ulong uVar13;
  long *plVar14;
  string *psVar15;
  long in_FS_OFFSET;
  long *local_98;
  ulong local_90;
  long local_88 [2];
  long *local_78;
  long local_70;
  long local_68 [2];
  string *local_58;
  undefined8 local_50;
  long alStack_48 [5];
  
  uVar13 = *(ulong *)(param_1 + 8);
  alStack_48[3] = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar13 == 0) {
LAB_00100719:
    std::__cxx11::string::_M_assign(param_3);
    goto LAB_00100724;
  }
  psVar2 = *(short **)param_1;
  if (uVar13 == 1) {
    if ((char)*psVar2 == '.') goto LAB_00100719;
  }
  else if ((uVar13 == 2) && (*psVar2 == 0x2f2e)) goto LAB_00100719;
  if ((*(char *)((long)psVar2 + (uVar13 - 1)) == '/') && (uVar13 - 1 < uVar13)) {
    uVar13 = uVar13 - 1;
  }
  local_98 = local_88;
  std::__cxx11::string::_M_construct<char_const*>(&local_98,psVar2,(char *)(uVar13 + (long)psVar2));
  plVar4 = (long *)std::__cxx11::string::_M_replace_aux((ulong)&local_98,local_90,0,'\x01');
  plVar1 = plVar4 + 2;
  if ((long *)*plVar4 == plVar1) {
    uVar13 = plVar4[1] + 1;
    plVar10 = plVar1;
    plVar14 = local_68;
    if (7 < (uint)uVar13) {
      uVar11 = 0;
      do {
        uVar3 = (int)uVar11 + 8;
        uVar9 = (ulong)uVar3;
        *(undefined8 *)((long)local_68 + uVar11) = *(undefined8 *)((long)plVar1 + uVar11);
        uVar11 = uVar9;
      } while (uVar3 < ((uint)uVar13 & 0xfffffff8));
      plVar14 = (long *)((long)local_68 + uVar9);
      plVar10 = (long *)(uVar9 + (long)plVar1);
    }
    lVar7 = 0;
    if ((uVar13 & 4) != 0) {
      *(int *)plVar14 = (int)*plVar10;
      lVar7 = 4;
    }
    if ((uVar13 & 2) != 0) {
      *(undefined2 *)((long)plVar14 + lVar7) = *(undefined2 *)((long)plVar10 + lVar7);
      lVar7 = lVar7 + 2;
    }
    local_78 = local_68;
    if ((uVar13 & 1) != 0) {
      *(undefined1 *)((long)plVar14 + lVar7) = *(undefined1 *)((long)plVar10 + lVar7);
    }
  }
  else {
    local_68[0] = plVar4[2];
    local_78 = (long *)*plVar4;
  }
  local_70 = plVar4[1];
  *(undefined1 *)(plVar4 + 2) = 0;
  *plVar4 = (long)plVar1;
  uVar13 = *(ulong *)param_2;
  plVar4[1] = 0;
  if (0x3fffffffffffffffU - local_70 < *(ulong *)(param_2 + 8)) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("basic_string::append");
  }
  puVar5 = (undefined8 *)std::__cxx11::string::_M_append((char *)&local_78,uVar13);
  psVar6 = (string *)(puVar5 + 2);
  local_58 = (string *)alStack_48;
  if ((string *)*puVar5 == psVar6) {
    uVar13 = puVar5[1] + 1;
    psVar12 = psVar6;
    psVar15 = (string *)alStack_48;
    if (7 < (uint)uVar13) {
      uVar11 = 0;
      do {
        uVar3 = (int)uVar11 + 8;
        uVar9 = (ulong)uVar3;
        *(undefined8 *)((string *)alStack_48 + uVar11) = *(undefined8 *)(psVar6 + uVar11);
        uVar11 = uVar9;
      } while (uVar3 < ((uint)uVar13 & 0xfffffff8));
      psVar15 = (string *)alStack_48 + uVar9;
      psVar12 = psVar6 + uVar9;
    }
    lVar7 = 0;
    if ((uVar13 & 4) != 0) {
      *(undefined4 *)psVar15 = *(undefined4 *)psVar12;
      lVar7 = 4;
    }
    if ((uVar13 & 2) != 0) {
      *(undefined2 *)(psVar15 + lVar7) = *(undefined2 *)(psVar12 + lVar7);
      lVar7 = lVar7 + 2;
    }
    if ((uVar13 & 1) != 0) {
      psVar15[lVar7] = psVar12[lVar7];
    }
  }
  else {
    alStack_48[0] = puVar5[2];
    local_58 = (string *)*puVar5;
  }
  local_50 = puVar5[1];
  *puVar5 = psVar6;
  puVar5[1] = 0;
  *(undefined1 *)(puVar5 + 2) = 0;
  psVar6 = *(string **)param_3;
  if (psVar6 == param_3 + 0x10) {
    if (local_58 == (string *)alStack_48) goto LAB_001007d0;
    *(string **)param_3 = local_58;
    *(ulong *)(param_3 + 8) = local_50;
    *(long *)(param_3 + 0x10) = alStack_48[0];
    local_58 = (string *)alStack_48;
  }
  else if (local_58 == (string *)alStack_48) {
LAB_001007d0:
    if (local_50 != 0) {
      if (local_50 == 1) {
        *psVar6 = alStack_48[0]._0_1_;
        psVar6 = *(string **)param_3;
      }
      else {
        uVar3 = (uint)local_50;
        uVar13 = local_50 & 0xffffffff;
        if (uVar3 < 8) {
          if ((local_50 & 4) == 0) {
            if (uVar3 != 0) {
              *psVar6 = alStack_48[0]._0_1_;
              if ((local_50 & 2) == 0) goto LAB_0010080e;
              *(undefined2 *)(psVar6 + (uVar13 - 2)) =
                   *(undefined2 *)((long)alStack_48 + (uVar13 - 2));
              psVar6 = *(string **)param_3;
            }
          }
          else {
            *(undefined4 *)psVar6 = (undefined4)alStack_48[0];
            *(undefined4 *)(psVar6 + (uVar13 - 4)) =
                 *(undefined4 *)((long)alStack_48 + (uVar13 - 4));
            psVar6 = *(string **)param_3;
          }
        }
        else {
          *(long *)psVar6 = alStack_48[0];
          *(undefined8 *)(psVar6 + ((local_50 & 0xffffffff) - 8)) =
               *(undefined8 *)((long)alStack_48 + ((local_50 & 0xffffffff) - 8));
          lVar7 = (long)psVar6 - ((ulong)(psVar6 + 8) & 0xfffffffffffffff8);
          uVar3 = (int)lVar7 + uVar3 & 0xfffffff8;
          if (7 < uVar3) {
            uVar8 = 0;
            do {
              uVar13 = (ulong)uVar8;
              uVar8 = uVar8 + 8;
              *(undefined8 *)(((ulong)(psVar6 + 8) & 0xfffffffffffffff8) + uVar13) =
                   *(undefined8 *)((string *)alStack_48 + (uVar13 - lVar7));
            } while (uVar8 < uVar3);
          }
LAB_0010080e:
          psVar6 = *(string **)param_3;
        }
      }
    }
    *(ulong *)(param_3 + 8) = local_50;
    psVar6[local_50] = (string)0x0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x10);
    *(string **)param_3 = local_58;
    *(ulong *)(param_3 + 8) = local_50;
    *(long *)(param_3 + 0x10) = alStack_48[0];
    local_58 = (string *)alStack_48;
    if (psVar6 != (string *)0x0) {
      local_58 = psVar6;
      alStack_48[0] = lVar7;
    }
  }
  local_50 = 0;
  *local_58 = (string)0x0;
  if (local_58 != (string *)alStack_48) {
    operator_delete(local_58,alStack_48[0] + 1);
  }
  if (local_78 != local_68) {
    operator_delete(local_78,local_68[0] + 1);
  }
  if (local_98 != local_88) {
    operator_delete(local_98,local_88[0] + 1);
  }
LAB_00100724:
  if (alStack_48[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}



/* FileSysUtilsFindFilesInPath(std::__cxx11::string const&, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > >&) */

undefined8 FileSysUtilsFindFilesInPath(string *param_1,vector *param_2)

{
  char *__s;
  long *plVar1;
  DIR *__dirp;
  dirent64 *pdVar2;
  size_t sVar3;
  
  __dirp = opendir(*(char **)param_1);
  if (__dirp == (DIR *)0x0) {
    return 0;
  }
  do {
    pdVar2 = readdir64(__dirp);
    while( true ) {
      if (pdVar2 == (dirent64 *)0x0) {
        closedir(__dirp);
        return 1;
      }
      plVar1 = *(long **)(param_2 + 8);
      __s = pdVar2->d_name;
      if (plVar1 == *(long **)(param_2 + 0x10)) break;
      *plVar1 = (long)(plVar1 + 2);
      sVar3 = strlen(__s);
      std::__cxx11::string::_M_construct<char_const*>(plVar1,__s,__s + sVar3);
      *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x20;
      pdVar2 = readdir64(__dirp);
    }
    std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
    _M_realloc_insert<char(&)[256]>
              ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)param_2,plVar1,
               __s);
  } while( true );
}



/* FileSysUtilsParsePathList(std::__cxx11::string&, std::vector<std::__cxx11::string,
   std::allocator<std::__cxx11::string > >&) */

undefined8 FileSysUtilsParsePathList(string *param_1,vector *param_2)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 **local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = std::__cxx11::string::find((char)param_1,0x3a);
  if (uVar2 == 0xffffffffffffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      if (*(ulong *)(param_1 + 8) < uVar7) goto LAB_00100dc5;
      uVar4 = *(ulong *)(param_1 + 8) - uVar7;
      if (uVar2 < uVar4) {
        uVar4 = uVar2;
      }
      local_68 = (undefined8 *)&local_58;
      std::__cxx11::string::_M_construct<char_const*>
                (&local_68,*(long *)param_1 + uVar7,*(long *)param_1 + uVar7 + uVar4);
      plVar1 = *(long **)(param_2 + 8);
      if (plVar1 == *(long **)(param_2 + 0x10)) {
        std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
        _M_realloc_insert<std::__cxx11::string>
                  ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)param_2,
                   plVar1,&local_68);
        if (local_68 != (undefined8 *)&local_58) {
          operator_delete(local_68,CONCAT44(uStack_54,local_58) + 1);
        }
      }
      else {
        *plVar1 = (long)(plVar1 + 2);
        if (local_68 == (undefined8 *)&local_58) {
          uVar7 = local_60 + 1;
          uVar3 = (uint)uVar7;
          if (uVar3 < 8) {
            if ((uVar7 & 4) == 0) {
              if (uVar3 != 0) {
                *(undefined1 *)(plVar1 + 2) = (undefined1)local_58;
                if ((uVar7 & 2) != 0) {
                  *(undefined2 *)((long)plVar1 + (uVar7 & 0xffffffff) + 0xe) =
                       *(undefined2 *)((long)&local_60 + (uVar7 & 0xffffffff) + 6);
                }
              }
            }
            else {
              *(undefined4 *)(plVar1 + 2) = local_58;
              *(undefined4 *)((long)plVar1 + (uVar7 & 0xffffffff) + 0xc) =
                   *(undefined4 *)((long)&local_60 + (uVar7 & 0xffffffff) + 4);
            }
          }
          else {
            plVar1[2] = CONCAT44(uStack_54,local_58);
            *(undefined8 *)((long)plVar1 + (uVar7 & 0xffffffff) + 8) =
                 *(undefined8 *)((long)&local_60 + (uVar7 & 0xffffffff));
            lVar6 = (long)(plVar1 + 2) - ((ulong)(plVar1 + 3) & 0xfffffffffffffff8);
            uVar3 = uVar3 + (int)lVar6 & 0xfffffff8;
            if (7 < uVar3) {
              uVar5 = 0;
              do {
                uVar7 = (ulong)uVar5;
                uVar5 = uVar5 + 8;
                *(undefined8 *)(((ulong)(plVar1 + 3) & 0xfffffffffffffff8) + uVar7) =
                     *(undefined8 *)((long)&local_58 + (uVar7 - lVar6));
              } while (uVar5 < uVar3);
            }
          }
        }
        else {
          *plVar1 = (long)local_68;
          plVar1[2] = CONCAT44(uStack_54,local_58);
        }
        plVar1[1] = local_60;
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x20;
      }
      uVar7 = uVar2 + 1;
      uVar2 = std::__cxx11::string::find((char)param_1,0x3a);
    } while (uVar2 != 0xffffffffffffffff);
    uVar2 = *(ulong *)(param_1 + 8);
    if (uVar2 < uVar7) {
LAB_00100dc5:
      std::__throw_out_of_range_fmt
                ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",
                 uVar7);
      goto LAB_00100ddd;
    }
  }
  local_70 = &local_68;
  local_68 = (undefined8 *)&local_58;
  std::__cxx11::string::_M_construct<char_const*>
            (local_70,*(long *)param_1 + uVar7,uVar2 + *(long *)param_1);
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 == *(long **)(param_2 + 0x10)) {
    std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
    _M_realloc_insert<std::__cxx11::string>
              ((vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)param_2,plVar1,
               local_70);
    if (local_68 != (undefined8 *)&local_58) {
      operator_delete(local_68,CONCAT44(uStack_54,local_58) + 1);
    }
  }
  else {
    *plVar1 = (long)(plVar1 + 2);
    if (local_68 == (undefined8 *)&local_58) {
      uVar2 = local_60 + 1;
      uVar3 = (uint)uVar2;
      if (uVar3 < 8) {
        if ((uVar2 & 4) == 0) {
          if (uVar3 != 0) {
            *(undefined1 *)(plVar1 + 2) = (undefined1)local_58;
            if ((uVar2 & 2) != 0) {
              *(undefined2 *)((long)plVar1 + (uVar2 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)&local_60 + (uVar2 & 0xffffffff) + 6);
            }
          }
        }
        else {
          *(undefined4 *)(plVar1 + 2) = local_58;
          *(undefined4 *)((long)plVar1 + (uVar2 & 0xffffffff) + 0xc) =
               *(undefined4 *)((long)&local_60 + (uVar2 & 0xffffffff) + 4);
        }
      }
      else {
        plVar1[2] = CONCAT44(uStack_54,local_58);
        *(undefined8 *)((long)plVar1 + (uVar2 & 0xffffffff) + 8) =
             *(undefined8 *)((long)&local_60 + (uVar2 & 0xffffffff));
        lVar6 = (long)(plVar1 + 2) - ((ulong)(plVar1 + 3) & 0xfffffffffffffff8);
        uVar3 = uVar3 + (int)lVar6 & 0xfffffff8;
        if (7 < uVar3) {
          uVar5 = 0;
          do {
            uVar2 = (ulong)uVar5;
            uVar5 = uVar5 + 8;
            *(undefined8 *)(((ulong)(plVar1 + 3) & 0xfffffffffffffff8) + uVar2) =
                 *(undefined8 *)((long)&local_58 + (uVar2 - lVar6));
          } while (uVar5 < uVar3);
        }
      }
    }
    else {
      *plVar1 = (long)local_68;
      plVar1[2] = CONCAT44(uStack_54,local_58);
    }
    plVar1[1] = local_60;
    *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x20;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00100ddd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<char (&) [256]>(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >, char (&) [256]) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<char(&)[256]>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,void *param_2,
          char *param_3)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  size_t sVar6;
  long *plVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long local_48;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
  if (uVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_00100f60;
    uVar12 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar12 = uVar5 + 1;
    }
    uVar12 = uVar12 << 5;
  }
  else {
    uVar12 = uVar5 * 2;
    if (uVar12 < uVar5) {
LAB_00100f60:
      uVar12 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar12 == 0) {
        local_48 = 0;
        plVar13 = (long *)0x20;
        plVar7 = (long *)0x0;
        goto LAB_00100ea5;
      }
      if (0x3ffffffffffffff < uVar12) {
        uVar12 = 0x3ffffffffffffff;
      }
      uVar12 = uVar12 << 5;
    }
  }
  plVar7 = (long *)operator_new(uVar12);
  local_48 = (long)plVar7 + uVar12;
  plVar13 = plVar7 + 4;
LAB_00100ea5:
  plVar15 = (long *)((long)plVar7 + ((long)param_2 - (long)pvVar3));
  *plVar15 = (long)(plVar15 + 2);
  sVar6 = strlen(param_3);
  __cxx11::string::_M_construct<char_const*>(plVar15,param_3,param_3 + sVar6);
  if (param_2 != pvVar3) {
    plVar15 = (long *)((long)pvVar3 + 0x10);
    plVar13 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar7);
    plVar8 = plVar7;
    do {
      plVar1 = plVar8 + 2;
      lVar14 = plVar15[-1];
      *plVar8 = (long)plVar1;
      if (plVar15 == (long *)plVar15[-2]) {
        uVar5 = lVar14 + 1;
        uVar11 = (uint)uVar5;
        if (uVar11 < 8) {
          if ((uVar5 & 4) == 0) {
            if (uVar11 != 0) {
              *(char *)plVar1 = (char)*plVar15;
              if ((uVar5 & 2) == 0) goto LAB_00100f54;
              *(undefined2 *)((long)plVar8 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar15 + ((uVar5 & 0xffffffff) - 2));
              lVar14 = plVar15[-1];
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar15;
            *(undefined4 *)((long)plVar8 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar15 + ((uVar5 & 0xffffffff) - 4));
            lVar14 = plVar15[-1];
          }
        }
        else {
          *plVar1 = *plVar15;
          *(undefined8 *)((long)plVar8 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar15 + ((uVar5 & 0xffffffff) - 8));
          lVar14 = (long)plVar1 - ((ulong)(plVar8 + 3) & 0xfffffffffffffff8);
          uVar11 = uVar11 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar11) {
            uVar9 = 0;
            do {
              uVar5 = (ulong)uVar9;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(((ulong)(plVar8 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar15 + (uVar5 - lVar14));
            } while (uVar9 < uVar11);
          }
LAB_00100f54:
          lVar14 = plVar15[-1];
        }
      }
      else {
        *plVar8 = plVar15[-2];
        plVar8[2] = *plVar15;
      }
      plVar8[1] = lVar14;
      plVar8 = plVar8 + 4;
      plVar15 = plVar15 + 4;
    } while (plVar13 != plVar8);
    plVar13 = plVar13 + 4;
  }
  plVar15 = plVar13;
  if (param_2 != pvVar2) {
    plVar8 = (long *)((long)param_2 + 0x10);
    plVar15 = (long *)(((long)pvVar2 - (long)param_2) + (long)plVar13);
    do {
      plVar4 = (long *)plVar8[-2];
      plVar1 = plVar13 + 2;
      lVar14 = plVar8[-1];
      *plVar13 = (long)plVar1;
      if (plVar8 == plVar4) {
        uVar5 = lVar14 + 1;
        uVar11 = (uint)uVar5;
        if (uVar11 < 8) {
          if ((uVar5 & 4) == 0) {
            if ((uVar11 != 0) && (*(char *)plVar1 = (char)*plVar8, (uVar5 & 2) != 0)) {
              *(undefined2 *)((long)plVar13 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar8 + ((uVar5 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar8;
            *(undefined4 *)((long)plVar13 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar8 + ((uVar5 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar1 = *plVar8;
          *(undefined8 *)((long)plVar13 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar8 + ((uVar5 & 0xffffffff) - 8));
          lVar10 = (long)plVar1 - ((ulong)(plVar13 + 3) & 0xfffffffffffffff8);
          uVar11 = uVar11 + (int)lVar10 & 0xfffffff8;
          if (7 < uVar11) {
            uVar9 = 0;
            do {
              uVar5 = (ulong)uVar9;
              uVar9 = uVar9 + 8;
              *(undefined8 *)(((ulong)(plVar13 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar8 + (uVar5 - lVar10));
            } while (uVar9 < uVar11);
          }
        }
      }
      else {
        *plVar13 = (long)plVar4;
        plVar13[2] = *plVar8;
      }
      plVar13[1] = lVar14;
      plVar13 = plVar13 + 4;
      plVar8 = plVar8 + 4;
    } while (plVar13 != plVar15);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
  }
  *(long **)this = plVar7;
  *(long **)(this + 8) = plVar15;
  *(long *)(this + 0x10) = local_48;
  return;
}



/* void std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string >
   >::_M_realloc_insert<std::__cxx11::string >(__gnu_cxx::__normal_iterator<std::__cxx11::string*,
   std::vector<std::__cxx11::string, std::allocator<std::__cxx11::string > > >,
   std::__cxx11::string&&) */

void __thiscall
std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
_M_realloc_insert<std::__cxx11::string>
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *this,void *param_2,
          long *param_3)

{
  long *plVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  
  pvVar2 = *(void **)(this + 8);
  pvVar3 = *(void **)this;
  uVar5 = (long)pvVar2 - (long)pvVar3 >> 5;
  if (uVar5 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  if (pvVar3 == pvVar2) {
    if (0xfffffffffffffffe < uVar5) goto LAB_001012c8;
    uVar8 = 0x3ffffffffffffff;
    if (uVar5 + 1 < 0x400000000000000) {
      uVar8 = uVar5 + 1;
    }
    uVar8 = uVar8 << 5;
  }
  else {
    uVar8 = uVar5 * 2;
    if (uVar8 < uVar5) {
LAB_001012c8:
      uVar8 = 0x7fffffffffffffe0;
    }
    else {
      if (uVar8 == 0) {
        plVar6 = (long *)0x20;
        lVar11 = 0;
        plVar7 = (long *)0x0;
        goto LAB_001011fd;
      }
      if (0x3ffffffffffffff < uVar8) {
        uVar8 = 0x3ffffffffffffff;
      }
      uVar8 = uVar8 << 5;
    }
  }
  plVar7 = (long *)operator_new(uVar8);
  lVar11 = uVar8 + (long)plVar7;
  plVar6 = plVar7 + 4;
LAB_001011fd:
  plVar9 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar7);
  lVar15 = *param_3;
  plVar10 = param_3 + 2;
  lVar14 = param_3[1];
  *plVar9 = (long)(plVar9 + 2);
  if ((long *)lVar15 == plVar10) {
    uVar5 = lVar14 + 1;
    uVar12 = (uint)uVar5;
    if (uVar12 < 8) {
      if ((uVar5 & 4) == 0) {
        if ((uVar12 != 0) && (*(char *)(plVar9 + 2) = (char)param_3[2], (uVar5 & 2) != 0)) {
          *(undefined2 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xe) =
               *(undefined2 *)((long)param_3 + (uVar5 & 0xffffffff) + 0xe);
        }
      }
      else {
        *(int *)(plVar9 + 2) = (int)param_3[2];
        *(undefined4 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xc) =
             *(undefined4 *)((long)param_3 + (uVar5 & 0xffffffff) + 0xc);
      }
    }
    else {
      plVar9[2] = param_3[2];
      *(undefined8 *)((long)plVar9 + (uVar5 & 0xffffffff) + 8) =
           *(undefined8 *)((long)param_3 + (uVar5 & 0xffffffff) + 8);
      lVar15 = (long)(plVar9 + 2) - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
      uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
      if (7 < uVar12) {
        uVar13 = 0;
        do {
          uVar5 = (ulong)uVar13;
          uVar13 = uVar13 + 8;
          *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + uVar5) =
               *(undefined8 *)((long)plVar10 + (uVar5 - lVar15));
        } while (uVar13 < uVar12);
      }
    }
  }
  else {
    *plVar9 = lVar15;
    plVar9[2] = param_3[2];
  }
  plVar9[1] = lVar14;
  *param_3 = (long)plVar10;
  param_3[1] = 0;
  *(undefined1 *)(param_3 + 2) = 0;
  if (param_2 != pvVar3) {
    plVar10 = (long *)((long)pvVar3 + 0x10);
    plVar6 = (long *)(((long)param_2 - (long)pvVar3) + (long)plVar7);
    plVar9 = plVar7;
    do {
      plVar1 = plVar9 + 2;
      lVar15 = plVar10[-1];
      *plVar9 = (long)plVar1;
      if (plVar10 == (long *)plVar10[-2]) {
        uVar5 = lVar15 + 1;
        uVar12 = (uint)uVar5;
        if (uVar12 < 8) {
          if ((uVar5 & 4) == 0) {
            if (uVar12 != 0) {
              *(char *)plVar1 = (char)*plVar10;
              if ((uVar5 & 2) == 0) goto LAB_001012bb;
              *(undefined2 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 2));
              lVar15 = plVar10[-1];
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar10;
            *(undefined4 *)((long)plVar9 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 4));
            lVar15 = plVar10[-1];
          }
        }
        else {
          *plVar1 = *plVar10;
          *(undefined8 *)((long)plVar9 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar10 + ((uVar5 & 0xffffffff) - 8));
          lVar15 = (long)plVar1 - ((ulong)(plVar9 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar15 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar5 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar9 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar10 + (uVar5 - lVar15));
            } while (uVar13 < uVar12);
          }
LAB_001012bb:
          lVar15 = plVar10[-1];
        }
      }
      else {
        *plVar9 = plVar10[-2];
        plVar9[2] = *plVar10;
      }
      plVar9[1] = lVar15;
      plVar9 = plVar9 + 4;
      plVar10 = plVar10 + 4;
    } while (plVar6 != plVar9);
    plVar6 = plVar6 + 4;
  }
  plVar10 = plVar6;
  if (param_2 != pvVar2) {
    plVar9 = (long *)((long)param_2 + 0x10);
    plVar10 = (long *)(((long)pvVar2 - (long)param_2) + (long)plVar6);
    do {
      plVar4 = (long *)plVar9[-2];
      plVar1 = plVar6 + 2;
      lVar15 = plVar9[-1];
      *plVar6 = (long)plVar1;
      if (plVar9 == plVar4) {
        uVar5 = lVar15 + 1;
        uVar12 = (uint)uVar5;
        if (uVar12 < 8) {
          if ((uVar5 & 4) == 0) {
            if ((uVar12 != 0) && (*(char *)plVar1 = (char)*plVar9, (uVar5 & 2) != 0)) {
              *(undefined2 *)((long)plVar6 + (uVar5 & 0xffffffff) + 0xe) =
                   *(undefined2 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 2));
            }
          }
          else {
            *(int *)plVar1 = (int)*plVar9;
            *(undefined4 *)((long)plVar6 + (uVar5 & 0xffffffff) + 0xc) =
                 *(undefined4 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 4));
          }
        }
        else {
          *plVar1 = *plVar9;
          *(undefined8 *)((long)plVar6 + (uVar5 & 0xffffffff) + 8) =
               *(undefined8 *)((long)plVar9 + ((uVar5 & 0xffffffff) - 8));
          lVar14 = (long)plVar1 - ((ulong)(plVar6 + 3) & 0xfffffffffffffff8);
          uVar12 = uVar12 + (int)lVar14 & 0xfffffff8;
          if (7 < uVar12) {
            uVar13 = 0;
            do {
              uVar5 = (ulong)uVar13;
              uVar13 = uVar13 + 8;
              *(undefined8 *)(((ulong)(plVar6 + 3) & 0xfffffffffffffff8) + uVar5) =
                   *(undefined8 *)((long)plVar9 + (uVar5 - lVar14));
            } while (uVar13 < uVar12);
          }
        }
      }
      else {
        *plVar6 = (long)plVar4;
        plVar6[2] = *plVar9;
      }
      plVar6[1] = lVar15;
      plVar6 = plVar6 + 4;
      plVar9 = plVar9 + 4;
    } while (plVar6 != plVar10);
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3,*(long *)(this + 0x10) - (long)pvVar3);
  }
  *(long **)this = plVar7;
  *(long **)(this + 8) = plVar10;
  *(long *)(this + 0x10) = lVar11;
  return;
}


