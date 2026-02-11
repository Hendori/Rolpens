
undefined8
parse_with_separator
          (char *param_1,long param_2,__uid_t *param_3,__gid_t *param_4,undefined8 *param_5,
          undefined8 *param_6)

{
  bool bVar1;
  char cVar2;
  __uid_t _Var3;
  int iVar4;
  __gid_t __gid;
  group *pgVar5;
  void *pvVar6;
  char *__name;
  undefined8 uVar7;
  passwd *ppVar8;
  bool bVar9;
  long lVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  char *local_88;
  ulong local_60;
  undefined1 local_58 [24];
  long local_40;
  
  __gid = 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _Var3 = *param_3;
  if (param_4 != (__gid_t *)0x0) {
    __gid = *param_4;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (undefined8 *)0x0) {
    *param_6 = 0;
  }
  if (param_2 == 0) {
    pvVar6 = (void *)0x0;
    __name = (char *)0x0;
    if (*param_1 != '\0') {
      __name = (char *)xstrdup();
      bVar1 = false;
      local_88 = (char *)0x0;
LAB_0010014a:
      if (*__name == '+') {
LAB_00100154:
        iVar4 = xstrtoul(__name,0,10,&local_60,&_LC3);
        if (((iVar4 != 0) || (local_60 >> 0x20 != 0)) ||
           (_Var3 = (__uid_t)local_60, _Var3 == 0xffffffff)) {
          endpwent();
          pcVar11 = "invalid user";
          goto LAB_001002c9;
        }
        endpwent();
        param_5 = (undefined8 *)0x0;
        pvVar6 = (void *)0x0;
      }
      else {
LAB_00100300:
        ppVar8 = getpwnam(__name);
        bVar9 = param_2 != 0 && local_88 == (char *)0x0;
        if (ppVar8 == (passwd *)0x0) {
          if (bVar9) goto LAB_001002bd;
          goto LAB_00100154;
        }
        _Var3 = ppVar8->pw_uid;
        pvVar6 = (void *)0x0;
        if (bVar9) {
          __gid = ppVar8->pw_gid;
          pgVar5 = getgrgid(__gid);
          if (pgVar5 == (group *)0x0) {
            pcVar11 = (char *)umaxtostr(__gid,local_58);
          }
          else {
            pcVar11 = pgVar5->gr_name;
          }
          pvVar6 = (void *)xstrdup(pcVar11);
          endgrent();
          local_88 = (char *)0x0;
        }
        endpwent();
      }
      if (bVar1) {
        cVar2 = *local_88;
        goto LAB_00100085;
      }
    }
  }
  else {
    lVar10 = param_2 - (long)param_1;
    if (lVar10 != 0) {
      __name = (char *)ximemdup(param_1,lVar10 + 1);
      cVar2 = *(char *)(param_2 + 1);
      __name[lVar10] = '\0';
      if (cVar2 != '\0') {
        local_88 = (char *)(param_2 + 1);
        bVar1 = true;
        goto LAB_0010014a;
      }
      if (*__name != '+') {
        bVar1 = false;
        local_88 = (char *)0x0;
        goto LAB_00100300;
      }
LAB_001002bd:
      endpwent();
      pcVar11 = "invalid spec";
LAB_001002c9:
      free(__name);
LAB_00100238:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = dcgettext("gnulib",pcVar11,5);
        return uVar7;
      }
      goto LAB_001003da;
    }
    cVar2 = *(char *)(param_2 + 1);
    if (cVar2 == '\0') {
      __name = (char *)0x0;
      pvVar6 = (void *)0x0;
      goto LAB_001000b4;
    }
    local_88 = (char *)(param_2 + 1);
    __name = (char *)0x0;
LAB_00100085:
    if ((cVar2 == '+') || (pgVar5 = getgrnam(local_88), pgVar5 == (group *)0x0)) {
      iVar4 = xstrtoul(local_88,0,10,&local_60,&_LC3);
      if ((iVar4 != 0) ||
         ((local_60 >> 0x20 != 0 || (__gid = (__gid_t)local_60, __gid == 0xffffffff)))) {
        endgrent();
        pvVar6 = (void *)xstrdup(local_88);
        free(__name);
        pcVar11 = "invalid group";
        free(pvVar6);
        goto LAB_00100238;
      }
      endgrent();
      param_6 = (undefined8 *)0x0;
      pvVar6 = (void *)xstrdup(local_88);
    }
    else {
      __gid = pgVar5->gr_gid;
      endgrent();
      pvVar6 = (void *)xstrdup(local_88);
    }
  }
LAB_001000b4:
  *param_3 = _Var3;
  if (param_4 != (__gid_t *)0x0) {
    *param_4 = __gid;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = __name;
    __name = (char *)0x0;
  }
  if (param_6 == (undefined8 *)0x0) {
    free(__name);
    free(pvVar6);
  }
  else {
    *param_6 = pvVar6;
    free(__name);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001003da:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * parse_user_spec_warn
                 (char *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 *param_6)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  if (param_3 == 0) {
    pcVar3 = (char *)parse_with_separator(param_1,0,param_2,0,param_4,param_5);
  }
  else {
    pcVar2 = strchr(param_1,0x3a);
    pcVar3 = (char *)parse_with_separator(param_1,pcVar2,param_2,param_3,param_4,param_5);
    if ((((pcVar2 == (char *)0x0) && (pcVar3 != (char *)0x0)) &&
        (pcVar2 = strchr(param_1,0x2e), pcVar2 != (char *)0x0)) &&
       (lVar4 = parse_with_separator(param_1,pcVar2,param_2,param_3,param_4,param_5), lVar4 == 0)) {
      uVar1 = 1;
      pcVar3 = "warning: \'.\' should be \':\'";
      if (param_6 == (undefined1 *)0x0) {
        return (char *)0x0;
      }
      goto LAB_0010049f;
    }
  }
  if (param_6 == (undefined1 *)0x0) {
    return pcVar3;
  }
  uVar1 = 0;
LAB_0010049f:
  *param_6 = uVar1;
  return pcVar3;
}



long parse_user_spec(char *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                    undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0) {
    lVar2 = parse_with_separator(param_1,0,param_2,0,param_4,param_5);
    return lVar2;
  }
  pcVar1 = strchr(param_1,0x3a);
  lVar2 = parse_with_separator(param_1,pcVar1,param_2,param_3,param_4,param_5);
  if (pcVar1 != (char *)0x0) {
    return lVar2;
  }
  if (lVar2 != 0) {
    pcVar1 = strchr(param_1,0x2e);
    if (pcVar1 == (char *)0x0) {
      return lVar2;
    }
    lVar3 = parse_with_separator(param_1,pcVar1,param_2,param_3,param_4,param_5);
    if (lVar3 != 0) {
      return lVar2;
    }
  }
  return 0;
}


