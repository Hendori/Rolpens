
/* WARNING: Unknown calling convention */

char * parse_with_separator
                 (char *spec,char *separator,uid_t *uid,gid_t *gid,char **username,char **groupname)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  __uid_t _Var4;
  int iVar5;
  __gid_t __gid;
  group *pgVar6;
  char *pcVar7;
  void *__ptr;
  char *pcVar8;
  passwd *ppVar9;
  bool bVar10;
  long lVar11;
  long in_FS_OFFSET;
  char *local_88;
  ulong tmp;
  char buf [21];
  
  __gid = 0xffffffff;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  _Var4 = *uid;
  if (gid != (gid_t *)0x0) {
    __gid = *gid;
  }
  if (username != (char **)0x0) {
    *username = (char *)0x0;
  }
  if (groupname != (char **)0x0) {
    *groupname = (char *)0x0;
  }
  if (separator == (char *)0x0) {
    pcVar7 = (char *)0x0;
    pcVar8 = (char *)0x0;
    if (*spec != '\0') {
      pcVar8 = (char *)xstrdup();
      bVar2 = false;
      local_88 = (char *)0x0;
LAB_0010014a:
      if (*pcVar8 == '+') {
LAB_00100154:
        iVar5 = xstrtoul(pcVar8,0,10,&tmp,&_LC3);
        if (((iVar5 != 0) || (tmp >> 0x20 != 0)) || (_Var4 = (__uid_t)tmp, _Var4 == 0xffffffff)) {
          endpwent();
          pcVar7 = "invalid user";
          goto LAB_001002c9;
        }
        endpwent();
        username = (char **)0x0;
        pcVar7 = (char *)0x0;
      }
      else {
LAB_00100300:
        ppVar9 = getpwnam(pcVar8);
        bVar10 = local_88 == (char *)0x0 && separator != (char *)0x0;
        if (ppVar9 == (passwd *)0x0) {
          if (bVar10) goto LAB_001002bd;
          goto LAB_00100154;
        }
        _Var4 = ppVar9->pw_uid;
        pcVar7 = (char *)0x0;
        if (bVar10) {
          __gid = ppVar9->pw_gid;
          pgVar6 = getgrgid(__gid);
          if (pgVar6 == (group *)0x0) {
            pcVar7 = (char *)umaxtostr(__gid,buf);
          }
          else {
            pcVar7 = pgVar6->gr_name;
          }
          pcVar7 = (char *)xstrdup(pcVar7);
          endgrent();
          local_88 = (char *)0x0;
        }
        endpwent();
      }
      if (bVar2) {
        cVar3 = *local_88;
        goto LAB_00100085;
      }
    }
  }
  else {
    lVar11 = (long)separator - (long)spec;
    if (lVar11 != 0) {
      pcVar8 = (char *)ximemdup(spec,lVar11 + 1);
      cVar3 = separator[1];
      pcVar8[lVar11] = '\0';
      if (cVar3 != '\0') {
        local_88 = separator + 1;
        bVar2 = true;
        goto LAB_0010014a;
      }
      if (*pcVar8 != '+') {
        bVar2 = false;
        local_88 = (char *)0x0;
        goto LAB_00100300;
      }
LAB_001002bd:
      endpwent();
      pcVar7 = "invalid spec";
LAB_001002c9:
      free(pcVar8);
LAB_00100238:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        pcVar8 = (char *)dcgettext("gnulib",pcVar7,5);
        return pcVar8;
      }
      goto LAB_001003da;
    }
    cVar3 = separator[1];
    if (cVar3 == '\0') {
      pcVar8 = (char *)0x0;
      pcVar7 = (char *)0x0;
      goto LAB_001000b4;
    }
    local_88 = separator + 1;
    pcVar8 = (char *)0x0;
LAB_00100085:
    if ((cVar3 == '+') || (pgVar6 = getgrnam(local_88), pgVar6 == (group *)0x0)) {
      iVar5 = xstrtoul(local_88,0,10,&tmp,&_LC3);
      if ((iVar5 != 0) || ((tmp >> 0x20 != 0 || (__gid = (__gid_t)tmp, __gid == 0xffffffff)))) {
        endgrent();
        __ptr = (void *)xstrdup(local_88);
        free(pcVar8);
        pcVar7 = "invalid group";
        free(__ptr);
        goto LAB_00100238;
      }
      endgrent();
      groupname = (char **)0x0;
      pcVar7 = (char *)xstrdup(local_88);
    }
    else {
      __gid = pgVar6->gr_gid;
      endgrent();
      pcVar7 = (char *)xstrdup(local_88);
    }
  }
LAB_001000b4:
  *uid = _Var4;
  if (gid != (gid_t *)0x0) {
    *gid = __gid;
  }
  if (username != (char **)0x0) {
    *username = pcVar8;
    pcVar8 = (char *)0x0;
  }
  if (groupname == (char **)0x0) {
    free(pcVar8);
    free(pcVar7);
  }
  else {
    *groupname = pcVar7;
    free(pcVar8);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (char *)0x0;
  }
LAB_001003da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

char * parse_user_spec_warn
                 (char *spec,uid_t *uid,gid_t *gid,char **username,char **groupname,_Bool *pwarn)

{
  _Bool _Var1;
  char *pcVar2;
  char *pcVar3;
  
  if (gid == (gid_t *)0x0) {
    pcVar3 = parse_with_separator(spec,(char *)0x0,uid,(gid_t *)0x0,username,groupname);
  }
  else {
    pcVar2 = strchr(spec,0x3a);
    pcVar3 = parse_with_separator(spec,pcVar2,uid,gid,username,groupname);
    if ((((pcVar2 == (char *)0x0) && (pcVar3 != (char *)0x0)) &&
        (pcVar2 = strchr(spec,0x2e), pcVar2 != (char *)0x0)) &&
       (pcVar2 = parse_with_separator(spec,pcVar2,uid,gid,username,groupname), pcVar2 == (char *)0x0
       )) {
      _Var1 = true;
      pcVar3 = "warning: \'.\' should be \':\'";
      if (pwarn == (_Bool *)0x0) {
        return (char *)0x0;
      }
      goto LAB_0010049f;
    }
  }
  if (pwarn == (_Bool *)0x0) {
    return pcVar3;
  }
  _Var1 = false;
LAB_0010049f:
  *pwarn = _Var1;
  return pcVar3;
}



/* WARNING: Unknown calling convention */

char * parse_user_spec(char *spec,uid_t *uid,gid_t *gid,char **username,char **groupname)

{
  char *pcVar1;
  char *pcVar2;
  
  if (gid == (gid_t *)0x0) {
    pcVar1 = parse_with_separator(spec,(char *)0x0,uid,(gid_t *)0x0,username,groupname);
    return pcVar1;
  }
  pcVar1 = strchr(spec,0x3a);
  pcVar2 = parse_with_separator(spec,pcVar1,uid,gid,username,groupname);
  if (pcVar1 != (char *)0x0) {
    return pcVar2;
  }
  if (pcVar2 != (char *)0x0) {
    pcVar1 = strchr(spec,0x2e);
    if (pcVar1 == (char *)0x0) {
      return pcVar2;
    }
    pcVar1 = parse_with_separator(spec,pcVar1,uid,gid,username,groupname);
    if (pcVar1 != (char *)0x0) {
      return pcVar2;
    }
  }
  return (char *)0x0;
}


