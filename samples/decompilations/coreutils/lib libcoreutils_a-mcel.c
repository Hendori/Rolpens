
/* WARNING: Unknown calling convention */

mcel_t mcel_ch(char32_t ch,size_t len)

{
  return (mcel_t)((ulong)ch | (len & 0xff) << 0x28);
}



/* WARNING: Unknown calling convention */

mcel_t mcel_err(uchar err)

{
  return (mcel_t)((ulong)err << 0x20 | 0x10000000000);
}



/* WARNING: Unknown calling convention */

int mcel_cmp(mcel_t c1,mcel_t c2)

{
  return ((c1._4_4_ & 0xff) - (c2._4_4_ & 0xff)) * 0x4000 + (c1.ch - c2.ch);
}



/* WARNING: Unknown calling convention */

int mcel_tocmp(_func_wint_t_wint_t *to,mcel_t c1,mcel_t c2)

{
  int iVar1;
  wint_t wVar2;
  wint_t wVar3;
  int iVar4;
  
  iVar4 = (c1._4_4_ & 0xff) - (c2._4_4_ & 0xff);
  iVar1 = iVar4 * 0x4000 + (c1.ch - c2.ch);
  if (iVar1 == 0 || iVar4 != 0) {
    return iVar1;
  }
  wVar2 = (*to)(c1.ch);
  wVar3 = (*to)(c2.ch);
  return wVar2 - wVar3;
}



/* WARNING: Unknown calling convention */

_Bool mcel_isbasic(char c)

{
  return (_Bool)((byte)~c >> 7);
}



/* WARNING: Unknown calling convention */

mcel_t mcel_scan(char *p,char *lim)

{
  byte bVar1;
  long lVar2;
  mcel_t mVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  bVar1 = *p;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)bVar1 < '\0') {
    mbs.__count = 0;
    uVar4 = mbrtoc32(&ch,p,(long)lim - (long)p,&mbs);
    if ((long)uVar4 < 0) {
      mVar3 = (mcel_t)((ulong)bVar1 << 0x20 | 0x10000000000);
    }
    else {
      mVar3 = (mcel_t)((ulong)ch | (uVar4 & 0xff) << 0x28);
    }
  }
  else {
    mVar3 = (mcel_t)((ulong)(uint)(int)(char)bVar1 | 0x10000000000);
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return mVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

mcel_t mcel_scant(char *p,char terminator)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  mcel_t mVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  bVar2 = *p;
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)bVar2 < '\0') {
    mbs.__count = 0;
    pcVar1 = p + (ulong)(p[1] != terminator) + 1;
    uVar5 = mbrtoc32(&ch,p,pcVar1 + (*pcVar1 != terminator) +
                           ((ulong)(pcVar1[*pcVar1 != terminator] != terminator) - (long)p),&mbs);
    if ((long)uVar5 < 0) {
      uVar7 = (ulong)bVar2;
      uVar5 = 1;
      uVar6 = 0;
    }
    else {
      uVar6 = (ulong)ch;
      uVar5 = uVar5 & 0xff;
      uVar7 = 0;
    }
    mVar4 = (mcel_t)(uVar6 | uVar7 << 0x20 | uVar5 << 0x28);
  }
  else {
    mVar4 = (mcel_t)((ulong)(uint)(int)(char)bVar2 | 0x10000000000);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return mVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

mcel_t mcel_scanz(char *p)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  bVar1 = *p;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((char)bVar1 < '\0') {
    pcVar6 = p + (2 - (ulong)(p[1] == '\0'));
    mbs.__count = 0;
    uVar5 = mbrtoc32(&ch,p,pcVar6 + (*pcVar6 != '\0') +
                           ((ulong)(pcVar6[*pcVar6 != '\0'] != '\0') - (long)p));
    if ((long)uVar5 < 0) {
      uVar4 = (ulong)bVar1;
      uVar5 = 1;
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)ch;
      uVar4 = 0;
    }
  }
  else {
    uVar3 = (ulong)(uint)(int)(char)bVar1;
    uVar5 = 1;
    uVar4 = 0;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (mcel_t)(uVar3 | uVar4 << 0x20 | (uVar5 & 0xff) << 0x28);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


