
/* WARNING: Unknown calling convention */

int mbscasecmp(char *s1,char *s2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  wint_t wVar4;
  wint_t wVar5;
  size_t sVar6;
  long lVar7;
  ulong uVar8;
  __int32_t **pp_Var9;
  char *pcVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  wint_t __wc;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  iVar12 = 0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (s2 != s1) {
    sVar6 = __ctype_get_mb_cur_max();
    if (sVar6 < 2) {
      do {
        bVar14 = *s1;
        bVar1 = *s2;
        s1 = (char *)((byte *)s1 + 1);
        iVar12 = 0;
        s2 = (char *)((byte *)s2 + 1);
        if (bVar1 != bVar14) {
          pp_Var9 = __ctype_tolower_loc();
          uVar15 = (*pp_Var9)[bVar14];
          bVar14 = (byte)uVar15;
          if (bVar1 != bVar14) {
            iVar12 = (uVar15 & 0xff) - (uint)*(byte *)(*pp_Var9 + bVar1);
          }
        }
      } while (bVar14 != 0 && iVar12 == 0);
    }
    else {
      do {
        uVar15 = (uint)*s1;
        if (*s1 < '\0') {
          pcVar10 = s1 + (2 - (ulong)(s1[1] == '\0'));
          mbs.__count = 0;
          lVar7 = mbrtoc32(&ch,s1,pcVar10 + (*pcVar10 != '\0') +
                                  ((ulong)(pcVar10[*pcVar10 != '\0'] != '\0') - (long)s1),&mbs);
          if (lVar7 < 0) {
            lVar7 = 1;
            __wc = 0;
          }
          else {
            uVar15 = 0;
            __wc = ch;
          }
        }
        else {
          lVar7 = 1;
          __wc = uVar15;
          uVar15 = 0;
        }
        bVar14 = *s2;
        s1 = s1 + lVar7;
        if ((char)bVar14 < '\0') {
          mbs.__count = 0;
          pbVar11 = (byte *)s2 + (2 - (ulong)(((byte *)s2)[1] == 0));
          uVar8 = mbrtoc32(&ch,s2,pbVar11 + (*pbVar11 != 0) +
                                  ((ulong)(pbVar11[*pbVar11 != 0] != 0) - (long)s2));
          if ((long)uVar8 < 0) {
            uVar13 = (uint)bVar14;
            uVar8 = 1;
            wVar5 = 0;
          }
          else {
            uVar8 = uVar8 & 0xff;
            uVar13 = 0;
            wVar5 = ch;
          }
        }
        else {
          uVar13 = 0;
          uVar8 = 1;
          wVar5 = (int)(char)bVar14;
        }
        s2 = (char *)((byte *)s2 + uVar8);
        iVar3 = (uVar15 & 0xff) - uVar13;
        iVar12 = iVar3 * 0x4000 + (__wc - wVar5);
        if (iVar12 != 0 && iVar3 == 0) {
          wVar4 = towlower(__wc);
          wVar5 = towlower(wVar5);
          iVar12 = wVar4 - wVar5;
        }
      } while (__wc != 0 && iVar12 == 0);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar12;
}


