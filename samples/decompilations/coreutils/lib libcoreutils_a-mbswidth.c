
/* WARNING: Unknown calling convention */

wchar_t mbsnwidth(char *string,size_t nbytes,wchar_t flags)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  ushort **ppuVar7;
  long lVar8;
  wchar_t wVar9;
  long in_FS_OFFSET;
  char32_t wc;
  mbstate_t mbstate;
  
  pbVar1 = (byte *)(string + nbytes);
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  sVar5 = __ctype_get_mb_cur_max();
  if (sVar5 < 2) {
    wVar9 = L'\0';
    if (string < pbVar1) {
      ppuVar7 = __ctype_b_loc();
      wVar9 = L'\0';
      do {
        bVar2 = *string;
        string = (char *)((byte *)string + 1);
        if (((*ppuVar7)[bVar2] & 0x4000) == 0) {
          if ((flags & 2U) != 0) goto LAB_001000c6;
          if (((*ppuVar7)[bVar2] & 2) == 0) goto LAB_00100179;
        }
        else {
LAB_00100179:
          if (wVar9 == L'\x7fffffff') goto LAB_00100181;
          wVar9 = wVar9 + L'\x01';
        }
      } while (pbVar1 != (byte *)string);
    }
  }
  else {
    wVar9 = L'\0';
    if (string < pbVar1) {
      do {
        if ((int)*string - 0x20U < 0x5f) {
LAB_00100050:
          string = (char *)((byte *)string + 1);
          wVar9 = wVar9 + L'\x01';
        }
        else {
          mbstate.__count = L'\0';
          mbstate.__value = (anon_union_4_2_91654ee9_for___value)0x0;
          lVar6 = rpl_mbrtoc32(&wc,string,(long)pbVar1 - (long)string,&mbstate);
          if (lVar6 == -1) {
            if ((flags & 1U) == 0) goto LAB_00100050;
            goto LAB_001000c6;
          }
          if (lVar6 == -2) {
            if ((flags & 1U) == 0) {
              wVar9 = wVar9 + L'\x01';
            }
            else {
LAB_001000c6:
              wVar9 = L'\xffffffff';
            }
            break;
          }
          lVar8 = 1;
          if (lVar6 != 0) {
            lVar8 = lVar6;
          }
          iVar4 = wcwidth(wc);
          if (iVar4 < 0) {
            if ((flags & 2U) != 0) goto LAB_001000c6;
            iVar4 = iswcntrl(wc);
            if (iVar4 == 0) {
              if (wVar9 == L'\x7fffffff') goto LAB_00100181;
              wVar9 = wVar9 + L'\x01';
            }
          }
          else {
            if (0x7fffffff - wVar9 < iVar4) goto LAB_00100181;
            wVar9 = wVar9 + iVar4;
          }
          string = (char *)((byte *)string + lVar8);
        }
      } while (string < pbVar1);
    }
  }
LAB_0010009a:
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return wVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100181:
  wVar9 = L'\x7fffffff';
  goto LAB_0010009a;
}



/* WARNING: Unknown calling convention */

wchar_t gnu_mbswidth(char *string,wchar_t flags)

{
  wchar_t wVar1;
  size_t nbytes;
  
  nbytes = strlen(string);
  wVar1 = mbsnwidth(string,nbytes,flags);
  return wVar1;
}


