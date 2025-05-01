
/* WARNING: Unknown calling convention */

char * skip_str_matching(char *str,_func__Bool_mcel_t *predicate,_Bool ok)

{
  char cVar1;
  long lVar2;
  _Bool _Var3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  mcel_t unaff_RBX;
  ulong uVar7;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  cVar1 = *str;
  uVar7 = (ulong)(uint)(int)cVar1;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (cVar1 == '\0') {
LAB_00100093:
    if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return str;
  }
  if (cVar1 < '\0') goto LAB_001000d8;
  do {
    uVar5 = 1;
    uVar4 = 0;
    while( true ) {
      unaff_RBX = (mcel_t)((ulong)unaff_RBX & 0xffff000000000000 | uVar7 | uVar4 << 0x20 |
                          (uVar5 & 0xff) << 0x28);
      _Var3 = (*predicate)(unaff_RBX);
      if (_Var3 != ok) goto LAB_00100093;
      str = str + (uVar5 & 0xff);
      cVar1 = *str;
      uVar7 = (ulong)(uint)(int)cVar1;
      if (cVar1 == '\0') goto LAB_00100093;
      if (-1 < cVar1) break;
LAB_001000d8:
      pcVar6 = str + (2 - (ulong)(str[1] == '\0'));
      mbs.__count = 0;
      uVar5 = mbrtoc32(&ch,str,pcVar6 + (*pcVar6 != '\0') +
                               ((ulong)(pcVar6[*pcVar6 != '\0'] != '\0') - (long)str),&mbs);
      uVar4 = uVar7 & 0xff;
      if ((long)uVar5 < 0) {
        uVar5 = 1;
        uVar7 = 0;
      }
      else {
        uVar7 = (ulong)ch;
        uVar4 = 0;
      }
    }
  } while( true );
}



/* WARNING: Unknown calling convention */

char * skip_buf_matching(char *buf,char *lim,_func__Bool_mcel_t *predicate,_Bool ok)

{
  long lVar1;
  _Bool _Var2;
  ulong uVar3;
  ulong uVar4;
  mcel_t in_R8;
  ulong uVar5;
  byte bVar6;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (lim <= buf) {
LAB_001001f8:
    if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return (char *)(byte *)buf;
  }
  bVar6 = *buf;
  if ((char)bVar6 < '\0') goto LAB_00100240;
  do {
    uVar5 = (ulong)(uint)(int)(char)bVar6;
    uVar3 = 1;
    uVar4 = 0;
    while( true ) {
      in_R8 = (mcel_t)((ulong)in_R8 & 0xffff000000000000 | uVar5 | uVar4 << 0x20 |
                      (uVar3 & 0xff) << 0x28);
      _Var2 = (*predicate)(in_R8);
      if ((_Var2 != ok) || (buf = (char *)((byte *)buf + (uVar3 & 0xff)), lim <= buf))
      goto LAB_001001f8;
      bVar6 = *buf;
      if (-1 < (char)bVar6) break;
LAB_00100240:
      mbs.__count = 0;
      uVar3 = mbrtoc32(&ch,buf,(long)lim - (long)buf,&mbs);
      if ((long)uVar3 < 0) {
        uVar4 = (ulong)bVar6;
        uVar3 = 1;
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)ch;
        uVar4 = 0;
      }
    }
  } while( true );
}


