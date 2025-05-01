
/* WARNING: Unknown calling convention */

char * getuser(uid_t uid)

{
  userid *puVar1;
  passwd *ppVar2;
  size_t sVar3;
  userid *puVar4;
  ulong uVar5;
  char *__s;
  long lVar6;
  
  puVar4 = user_alist;
  if (user_alist != (userid *)0x0) {
    do {
      if ((puVar4->id).u == uid) goto LAB_0010002d;
      puVar4 = puVar4->next;
    } while (puVar4 != (userid *)0x0);
  }
  ppVar2 = getpwuid(uid);
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
  puVar4 = (userid *)xmalloc(uVar5);
  (puVar4->id).u = uid;
  __strcpy_chk(puVar4 + 1,__s,lVar6);
  puVar1 = puVar4;
  puVar4->next = user_alist;
  user_alist = puVar1;
LAB_0010002d:
  puVar1 = (userid *)0x0;
  if (*(char *)&puVar4[1].id != '\0') {
    puVar1 = puVar4 + 1;
  }
  return (char *)puVar1;
}



/* WARNING: Unknown calling convention */

uid_t * getuidbyname(char *user)

{
  char cVar1;
  userid *puVar2;
  int iVar3;
  passwd *ppVar4;
  size_t sVar5;
  userid *puVar6;
  ulong uVar7;
  
  if (user_alist != (userid *)0x0) {
    cVar1 = *user;
    puVar6 = user_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),user), iVar3 == 0)) {
        return (uid_t *)puVar6;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  if (nouser_alist != (userid *)0x0) {
    cVar1 = *user;
    puVar6 = nouser_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),user), iVar3 == 0)) {
        return (uid_t *)0x0;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  ppVar4 = getpwnam(user);
  sVar5 = strlen(user);
  uVar7 = sVar5 + 0x18 & 0xfffffffffffffff8;
  puVar6 = (userid *)xmalloc(uVar7);
  __strcpy_chk(puVar6 + 1,user,uVar7 - 0x10);
  if (ppVar4 == (passwd *)0x0) {
    puVar6->next = nouser_alist;
    nouser_alist = puVar6;
    return (uid_t *)0x0;
  }
  puVar6->id = (anon_union_4_2_947300cf_for_id)ppVar4->pw_uid;
  puVar2 = puVar6;
  puVar6->next = user_alist;
  user_alist = puVar2;
  return (uid_t *)puVar6;
}



/* WARNING: Unknown calling convention */

char * getgroup(gid_t gid)

{
  userid *puVar1;
  group *pgVar2;
  size_t sVar3;
  userid *puVar4;
  ulong uVar5;
  char *__s;
  long lVar6;
  
  puVar4 = group_alist;
  if (group_alist != (userid *)0x0) {
    do {
      if ((puVar4->id).u == gid) goto LAB_001001fd;
      puVar4 = puVar4->next;
    } while (puVar4 != (userid *)0x0);
  }
  pgVar2 = getgrgid(gid);
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
  puVar4 = (userid *)xmalloc(uVar5);
  (puVar4->id).g = gid;
  __strcpy_chk(puVar4 + 1,__s,lVar6);
  puVar1 = puVar4;
  puVar4->next = group_alist;
  group_alist = puVar1;
LAB_001001fd:
  puVar1 = (userid *)0x0;
  if (*(char *)&puVar4[1].id != '\0') {
    puVar1 = puVar4 + 1;
  }
  return (char *)puVar1;
}



/* WARNING: Unknown calling convention */

gid_t * getgidbyname(char *group)

{
  char cVar1;
  userid *puVar2;
  int iVar3;
  group *pgVar4;
  size_t sVar5;
  userid *puVar6;
  ulong uVar7;
  
  if (group_alist != (userid *)0x0) {
    cVar1 = *group;
    puVar6 = group_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),group), iVar3 == 0)) {
        return (gid_t *)puVar6;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  if (nogroup_alist != (userid *)0x0) {
    cVar1 = *group;
    puVar6 = nogroup_alist;
    do {
      if ((*(char *)&puVar6[1].id == cVar1) &&
         (iVar3 = strcmp((char *)(puVar6 + 1),group), iVar3 == 0)) {
        return (gid_t *)0x0;
      }
      puVar6 = puVar6->next;
    } while (puVar6 != (userid *)0x0);
  }
  pgVar4 = getgrnam(group);
  sVar5 = strlen(group);
  uVar7 = sVar5 + 0x18 & 0xfffffffffffffff8;
  puVar6 = (userid *)xmalloc(uVar7);
  __strcpy_chk(puVar6 + 1,group,uVar7 - 0x10);
  if (pgVar4 == (group *)0x0) {
    puVar6->next = nogroup_alist;
    nogroup_alist = puVar6;
    return (gid_t *)0x0;
  }
  puVar6->id = (anon_union_4_2_947300cf_for_id)pgVar4->gr_gid;
  puVar2 = puVar6;
  puVar6->next = group_alist;
  group_alist = puVar2;
  return (gid_t *)puVar6;
}


