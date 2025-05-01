
/* WARNING: Unknown calling convention */

long fwrite_success_callback(char *buf,size_t buflen,void *callback_arg)

{
  fwrite(buf,1,buflen,(FILE *)callback_arg);
  return 0;
}



/* WARNING: Unknown calling convention */

long exit_failure_callback(uint code,char *msg,void *callback_arg)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar3;
  
  uVar2 = 5;
  if (msg != (char *)0x0) {
    uVar2 = dcgettext(0,msg,5);
    uVar1 = dcgettext("gnulib","cannot convert U+%04X to local character set: %s",5);
    error(1,0,uVar1,code,uVar2);
    uVar2 = extraout_RDX;
  }
  uVar2 = dcgettext("gnulib","cannot convert U+%04X to local character set",uVar2);
  uVar3 = 1;
  error(1,0,uVar2,code);
  if (uVar3 < 0x10000) {
    __fprintf_chk(extraout_RDX_00,2,"\\u%04X");
    return -1;
  }
  __fprintf_chk(extraout_RDX_00,2,"\\U%08X");
  return -1;
}



/* WARNING: Unknown calling convention */

long fallback_failure_callback(uint code,char *msg,void *callback_arg)

{
  if (code < 0x10000) {
    __fprintf_chk(callback_arg,2,"\\u%04X");
    return -1;
  }
  __fprintf_chk(callback_arg,2,"\\U%08X");
  return -1;
}



/* WARNING: Unknown calling convention */

long unicode_to_mb(uint code,_func_long_char_ptr_size_t_void_ptr *success,
                  _func_long_uint_char_ptr_void_ptr *failure,void *callback_arg)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  size_t sVar7;
  long in_FS_OFFSET;
  char *inptr;
  size_t inbytesleft;
  char *outptr;
  size_t outbytesleft;
  char inbuf [6];
  char outbuf [25];
  
  lVar6 = *(long *)(in_FS_OFFSET + 0x28);
  if (unicode_to_mb::initialized == 0) {
    pcVar5 = (char *)locale_charset();
    iVar2 = strcmp(pcVar5,"UTF-8");
    unicode_to_mb::is_utf8 = (int)(iVar2 == 0);
    iVar1 = 1;
    if ((iVar2 != 0) &&
       (unicode_to_mb::utf8_to_local = iconv_open(pcVar5,"UTF-8"), iVar1 = unicode_to_mb::is_utf8,
       unicode_to_mb::utf8_to_local == (iconv_t)0xffffffffffffffff)) {
      unicode_to_mb::utf8_to_local = iconv_open("ASCII","UTF-8");
      iVar1 = unicode_to_mb::is_utf8;
    }
    unicode_to_mb::initialized = 1;
    if (iVar1 == 0) goto LAB_00100149;
LAB_00100297:
    if (code < 0x80) {
      sVar7 = 1;
      inbuf[0] = (char)code;
    }
    else {
LAB_00100220:
      iVar1 = u8_uctomb_aux(inbuf,code,6);
      if (iVar1 < 0) {
        pcVar5 = (char *)dcgettext("gnulib","character out of range",5);
        lVar4 = (*failure)(code,pcVar5,callback_arg);
        goto LAB_001002b3;
      }
      sVar7 = (size_t)iVar1;
      if (unicode_to_mb::is_utf8 == 0) goto LAB_0010016e;
    }
    lVar4 = (*success)(inbuf,sVar7,callback_arg);
  }
  else {
    if (unicode_to_mb::is_utf8 != 0) goto LAB_00100297;
LAB_00100149:
    if (unicode_to_mb::utf8_to_local == (iconv_t)0xffffffffffffffff) {
      pcVar5 = (char *)dcgettext("gnulib","iconv function not usable",5);
      if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100391. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar6 = (*failure)(code,pcVar5,callback_arg);
        return lVar6;
      }
      goto LAB_00100393;
    }
    if (0x7f < code) goto LAB_00100220;
    sVar7 = 1;
    inbuf[0] = (char)code;
LAB_0010016e:
    inptr = inbuf;
    outbytesleft = 0x19;
    inbytesleft = sVar7;
    outptr = outbuf;
    sVar3 = iconv(unicode_to_mb::utf8_to_local,&inptr,&inbytesleft,&outptr,&outbytesleft);
    if ((((inbytesleft == 0) && (sVar3 != 0xffffffffffffffff)) &&
        ((sVar3 == 0 || (((long)outptr - (long)outbuf != 1 || (outbuf[0] != '?')))))) &&
       (sVar3 = iconv(unicode_to_mb::utf8_to_local,(char **)0x0,(size_t *)0x0,&outptr,&outbytesleft)
       , sVar3 != 0xffffffffffffffff)) {
      lVar4 = (*success)(outbuf,(long)outptr - (long)outbuf,callback_arg);
    }
    else {
      lVar4 = (*failure)(code,(char *)0x0,callback_arg);
    }
  }
LAB_001002b3:
  if (lVar6 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
LAB_00100393:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention */

void print_unicode_char(FILE *stream,uint code,int exit_on_error)

{
  code *failure;
  long in_FS_OFFSET;
  char code_char;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (code - 0x20 < 0x60) {
    code_char = (char)code;
    fwrite(&code_char,1,1,(FILE *)stream);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    failure = fallback_failure_callback;
    if (exit_on_error != 0) {
      failure = exit_failure_callback;
    }
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      unicode_to_mb(code,fwrite_success_callback,failure,stream);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


