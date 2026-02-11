
__uid_t * getuser(__uid_t param_1)

{
  __uid_t *p_Var1;
  passwd *ppVar2;
  size_t sVar3;
  __uid_t *p_Var4;
  ulong uVar5;
  char *__s;
  long lVar6;
  
  p_Var4 = user_alist;
  if (user_alist != (__uid_t *)0x0) {
    do {
      if (*p_Var4 == param_1) goto LAB_0010002d;
      p_Var4 = *(__uid_t **)(p_Var4 + 2);
    } while (p_Var4 != (__uid_t *)0x0);
  }
  ppVar2 = getpwuid(param_1);
  if (ppVar2 == (passwd *)0x0) {
    lVar6 = 8;
    uVar5 = 0x18;
    __s = "";
  }
  else {
    __s = ppVar2->pw_name;
    sVar3 = strlen(__s);
    uVar5 = sVar3 + 0x18 & 0xfffffffffffffff8;
    lVar6 = uVar5 - 0x10;
  }
  p_Var4 = (__uid_t *)xmalloc(uVar5);
  *p_Var4 = param_1;
  __strcpy_chk(p_Var4 + 4,__s,lVar6);
  p_Var1 = p_Var4;
  *(__uid_t **)(p_Var4 + 2) = user_alist;
  user_alist = p_Var1;
LAB_0010002d:
  p_Var1 = (__uid_t *)0x0;
  if ((char)p_Var4[4] != '\0') {
    p_Var1 = p_Var4 + 4;
  }
  return p_Var1;
}



__uid_t * getuidbyname(char *param_1)

{
  char cVar1;
  __uid_t *p_Var2;
  int iVar3;
  passwd *ppVar4;
  size_t sVar5;
  __uid_t *p_Var6;
  long lVar7;
  ulong uVar8;
  
  if (user_alist != (__uid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = user_alist;
    do {
      if (((char)p_Var6[4] == cVar1) && (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0))
      {
        return p_Var6;
      }
      p_Var6 = *(__uid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__uid_t *)0x0);
  }
  if (nouser_alist != (__uid_t *)0x0) {
    cVar1 = *param_1;
    lVar7 = (long)nouser_alist;
    do {
      if ((*(char *)(lVar7 + 0x10) == cVar1) &&
         (iVar3 = strcmp((char *)(lVar7 + 0x10),param_1), iVar3 == 0)) {
        return (__uid_t *)0x0;
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != 0);
  }
  ppVar4 = getpwnam(param_1);
  sVar5 = strlen(param_1);
  uVar8 = sVar5 + 0x18 & 0xfffffffffffffff8;
  p_Var6 = (__uid_t *)xmalloc(uVar8);
  __strcpy_chk(p_Var6 + 4,param_1,uVar8 - 0x10);
  if (ppVar4 == (passwd *)0x0) {
    *(__uid_t **)(p_Var6 + 2) = nouser_alist;
    nouser_alist = p_Var6;
    return (__uid_t *)0x0;
  }
  *p_Var6 = ppVar4->pw_uid;
  p_Var2 = p_Var6;
  *(__uid_t **)(p_Var6 + 2) = user_alist;
  user_alist = p_Var2;
  return p_Var6;
}



__gid_t * getgroup(__gid_t param_1)

{
  __gid_t *p_Var1;
  group *pgVar2;
  size_t sVar3;
  __gid_t *p_Var4;
  ulong uVar5;
  char *__s;
  long lVar6;
  
  p_Var4 = group_alist;
  if (group_alist != (__gid_t *)0x0) {
    do {
      if (*p_Var4 == param_1) goto LAB_001001fd;
      p_Var4 = *(__gid_t **)(p_Var4 + 2);
    } while (p_Var4 != (__gid_t *)0x0);
  }
  pgVar2 = getgrgid(param_1);
  if (pgVar2 == (group *)0x0) {
    lVar6 = 8;
    uVar5 = 0x18;
    __s = "";
  }
  else {
    __s = pgVar2->gr_name;
    sVar3 = strlen(__s);
    uVar5 = sVar3 + 0x18 & 0xfffffffffffffff8;
    lVar6 = uVar5 - 0x10;
  }
  p_Var4 = (__gid_t *)xmalloc(uVar5);
  *p_Var4 = param_1;
  __strcpy_chk(p_Var4 + 4,__s,lVar6);
  p_Var1 = p_Var4;
  *(__gid_t **)(p_Var4 + 2) = group_alist;
  group_alist = p_Var1;
LAB_001001fd:
  p_Var1 = (__gid_t *)0x0;
  if ((char)p_Var4[4] != '\0') {
    p_Var1 = p_Var4 + 4;
  }
  return p_Var1;
}



__gid_t * getgidbyname(char *param_1)

{
  char cVar1;
  __gid_t *p_Var2;
  int iVar3;
  group *pgVar4;
  size_t sVar5;
  __gid_t *p_Var6;
  long lVar7;
  ulong uVar8;
  
  if (group_alist != (__gid_t *)0x0) {
    cVar1 = *param_1;
    p_Var6 = group_alist;
    do {
      if (((char)p_Var6[4] == cVar1) && (iVar3 = strcmp((char *)(p_Var6 + 4),param_1), iVar3 == 0))
      {
        return p_Var6;
      }
      p_Var6 = *(__gid_t **)(p_Var6 + 2);
    } while (p_Var6 != (__gid_t *)0x0);
  }
  if (nogroup_alist != (__gid_t *)0x0) {
    cVar1 = *param_1;
    lVar7 = (long)nogroup_alist;
    do {
      if ((*(char *)(lVar7 + 0x10) == cVar1) &&
         (iVar3 = strcmp((char *)(lVar7 + 0x10),param_1), iVar3 == 0)) {
        return (__gid_t *)0x0;
      }
      lVar7 = *(long *)(lVar7 + 8);
    } while (lVar7 != 0);
  }
  pgVar4 = getgrnam(param_1);
  sVar5 = strlen(param_1);
  uVar8 = sVar5 + 0x18 & 0xfffffffffffffff8;
  p_Var6 = (__gid_t *)xmalloc(uVar8);
  __strcpy_chk(p_Var6 + 4,param_1,uVar8 - 0x10);
  if (pgVar4 == (group *)0x0) {
    *(__gid_t **)(p_Var6 + 2) = nogroup_alist;
    nogroup_alist = p_Var6;
    return (__gid_t *)0x0;
  }
  *p_Var6 = pgVar4->gr_gid;
  p_Var2 = p_Var6;
  *(__gid_t **)(p_Var6 + 2) = group_alist;
  group_alist = p_Var2;
  return p_Var6;
}


