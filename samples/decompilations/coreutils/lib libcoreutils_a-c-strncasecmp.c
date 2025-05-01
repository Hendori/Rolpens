
/* WARNING: Unknown calling convention */

int c_strncasecmp(char *s1,char *s2,size_t n)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  if ((s1 != s2) && (n != 0)) {
    lVar2 = 0;
    do {
      bVar4 = s1[lVar2];
      uVar1 = (uint)bVar4;
      if (bVar4 - 0x41 < 0x1a) {
        uVar1 = uVar1 + 0x20;
        bVar4 = bVar4 + 0x20;
      }
      bVar3 = s2[lVar2];
      uVar5 = (uint)bVar3;
      if (bVar3 - 0x41 < 0x1a) {
        uVar5 = bVar3 + 0x20;
        bVar3 = bVar3 + 0x20;
      }
    } while (((lVar2 != n - 1) && (uVar1 != 0)) && (lVar2 = lVar2 + 1, bVar4 == bVar3));
    return uVar1 - uVar5;
  }
  return 0;
}


