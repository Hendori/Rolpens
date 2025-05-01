
/* WARNING: Unknown calling convention */

int strcoll_loop(char *s1,size_t s1size,char *s2,size_t s2size)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  size_t sVar4;
  
  piVar2 = __errno_location();
  while( true ) {
    *piVar2 = 0;
    iVar1 = strcoll(s1,s2);
    if (iVar1 != 0) {
      return iVar1;
    }
    sVar3 = strlen(s1);
    sVar4 = strlen(s2);
    s1 = s1 + sVar3 + 1;
    s2 = s2 + sVar4 + 1;
    s2size = s2size - (sVar4 + 1);
    s1size = s1size - (sVar3 + 1);
    if (s1size == 0) break;
    if (s2size == 0) {
      return 1;
    }
  }
  return -(uint)(s2size != 0);
}



/* WARNING: Unknown calling convention */

int memcoll(char *s1,size_t s1len,char *s2,size_t s2len)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  
  if ((s1len == s2len) && (iVar5 = memcmp(s1,s2,s1len), iVar5 == 0)) {
    piVar6 = __errno_location();
    *piVar6 = 0;
    return 0;
  }
  pcVar1 = s1 + s1len;
  pcVar2 = s2 + s2len;
  cVar3 = *pcVar1;
  cVar4 = *pcVar2;
  *pcVar1 = '\0';
  *pcVar2 = '\0';
  iVar5 = strcoll_loop(s1,s1len + 1,s2,s2len + 1);
  *pcVar1 = cVar3;
  *pcVar2 = cVar4;
  return iVar5;
}



/* WARNING: Unknown calling convention */

int memcoll0(char *s1,size_t s1size,char *s2,size_t s2size)

{
  int iVar1;
  int *piVar2;
  
  if (s1size == s2size) {
    iVar1 = memcmp(s1,s2,s1size);
    if (iVar1 == 0) {
      piVar2 = __errno_location();
      *piVar2 = 0;
      return 0;
    }
  }
  iVar1 = strcoll_loop(s1,s1size,s2,s2size);
  return iVar1;
}


