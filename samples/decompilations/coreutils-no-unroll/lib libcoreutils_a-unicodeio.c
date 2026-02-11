
undefined8 exit_failure_callback(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  uint uVar3;
  
  uVar2 = 5;
  if (param_2 != 0) {
    uVar2 = dcgettext(0,param_2,5);
    uVar1 = dcgettext("gnulib","cannot convert U+%04X to local character set: %s",5);
    error(1,0,uVar1,param_1,uVar2);
    uVar2 = extraout_RDX;
  }
  uVar2 = dcgettext("gnulib","cannot convert U+%04X to local character set",uVar2);
  uVar3 = 1;
  error(1,0,uVar2,param_1);
  if (uVar3 < 0x10000) {
    __fprintf_chk(extraout_RDX_00,2,"\\u%04X");
    return 0xffffffffffffffff;
  }
  __fprintf_chk(extraout_RDX_00,2,"\\U%08X");
  return 0xffffffffffffffff;
}



undefined8 fallback_failure_callback(uint param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 < 0x10000) {
    __fprintf_chk(param_3,2,"\\u%04X");
    return 0xffffffffffffffff;
  }
  __fprintf_chk(param_3,2,"\\U%08X");
  return 0xffffffffffffffff;
}



void unicode_to_mb(uint param_1,code *param_2,code *UNRECOVERED_JUMPTABLE,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  char *__s1;
  undefined8 uVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  char *local_90;
  size_t local_88;
  char *local_80;
  size_t local_78;
  char local_6e [6];
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = is_utf8_1;
  if (initialized_2 == 0) {
    __s1 = (char *)locale_charset();
    iVar2 = strcmp(__s1,"UTF-8");
    is_utf8_1 = (uint)(iVar2 == 0);
    uVar1 = 1;
    if ((iVar2 != 0) &&
       (utf8_to_local_0 = iconv_open(__s1,"UTF-8"), uVar1 = is_utf8_1,
       utf8_to_local_0 == (iconv_t)0xffffffffffffffff)) {
      utf8_to_local_0 = iconv_open("ASCII","UTF-8");
      uVar1 = is_utf8_1;
    }
    initialized_2 = 1;
  }
  if (uVar1 == 0) {
    if (utf8_to_local_0 == (iconv_t)0xffffffffffffffff) {
      uVar3 = dcgettext("gnulib","iconv function not usable",5);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100331. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,param_4);
        return;
      }
      goto LAB_00100360;
    }
    if (0x7f < param_1) goto LAB_00100240;
    sVar4 = 1;
    local_6e[0] = (char)param_1;
LAB_0010014e:
    local_90 = local_6e;
    local_78 = 0x19;
    local_88 = sVar4;
    local_80 = local_68;
    sVar4 = iconv(utf8_to_local_0,&local_90,&local_88,&local_80,&local_78);
    if ((((local_88 == 0) && (sVar4 != 0xffffffffffffffff)) &&
        ((sVar4 == 0 || (((long)local_80 - (long)local_68 != 1 || (local_68[0] != '?')))))) &&
       (sVar4 = iconv(utf8_to_local_0,(char **)0x0,(size_t *)0x0,&local_80,&local_78),
       sVar4 != 0xffffffffffffffff)) {
      (*param_2)(local_68,(long)local_80 - (long)local_68,param_4);
    }
    else {
      (*UNRECOVERED_JUMPTABLE)(param_1,0,param_4);
    }
  }
  else {
    if (param_1 < 0x80) {
      sVar4 = 1;
      local_6e[0] = (char)param_1;
    }
    else {
LAB_00100240:
      iVar2 = u8_uctomb_aux(local_6e,param_1,6);
      if (iVar2 < 0) {
        uVar3 = dcgettext("gnulib","character out of range",5);
        (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,param_4);
        goto LAB_00100214;
      }
      sVar4 = (size_t)iVar2;
      if (is_utf8_1 == 0) goto LAB_0010014e;
    }
    (*param_2)(local_6e,sVar4,param_4);
  }
LAB_00100214:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100360:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fwrite_success_callback(void *param_1,size_t param_2,FILE *param_3)

{
  fwrite(param_1,1,param_2,param_3);
  return 0;
}



void print_unicode_char(FILE *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char *__s1;
  undefined8 uVar3;
  size_t sVar4;
  char cVar5;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  char *local_90;
  size_t local_88;
  char *local_80;
  size_t local_78;
  char local_6e [6];
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar5 = (char)param_2;
  if (param_2 - 0x20 < 0x60) {
    local_78 = CONCAT71(local_78._1_7_,cVar5);
    fwrite(&local_78,1,1,param_1);
  }
  else {
    UNRECOVERED_JUMPTABLE = fallback_failure_callback;
    if (param_3 != 0) {
      UNRECOVERED_JUMPTABLE = exit_failure_callback;
    }
    if (initialized_2 == 0) {
      __s1 = (char *)locale_charset();
      iVar2 = strcmp(__s1,"UTF-8");
      is_utf8_1 = (uint)(iVar2 == 0);
      uVar1 = 1;
      if ((iVar2 != 0) &&
         (utf8_to_local_0 = iconv_open(__s1,"UTF-8"), uVar1 = is_utf8_1,
         utf8_to_local_0 == (iconv_t)0xffffffffffffffff)) {
        utf8_to_local_0 = iconv_open("ASCII","UTF-8");
        uVar1 = is_utf8_1;
      }
      initialized_2 = 1;
      if (uVar1 == 0) goto LAB_00100403;
LAB_0010051f:
      if (param_2 < 0x80) {
        sVar4 = 1;
        local_6e[0] = cVar5;
      }
      else {
LAB_00100590:
        iVar2 = u8_uctomb_aux(local_6e,param_2,6);
        if (iVar2 < 0) {
          uVar3 = dcgettext("gnulib","character out of range",5);
          (*UNRECOVERED_JUMPTABLE)(param_2,uVar3,param_1);
          goto LAB_00100542;
        }
        sVar4 = (size_t)iVar2;
        if (is_utf8_1 == 0) goto LAB_00100428;
      }
      fwrite(local_6e,1,sVar4,param_1);
    }
    else {
      if (is_utf8_1 != 0) goto LAB_0010051f;
LAB_00100403:
      if (utf8_to_local_0 == (iconv_t)0xffffffffffffffff) {
        uVar3 = dcgettext("gnulib","iconv function not usable",5);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(param_2,uVar3,param_1);
          return;
        }
        goto LAB_00100683;
      }
      if (0x7f < param_2) goto LAB_00100590;
      sVar4 = 1;
      local_6e[0] = cVar5;
LAB_00100428:
      local_90 = local_6e;
      local_78 = 0x19;
      local_88 = sVar4;
      local_80 = local_68;
      sVar4 = iconv(utf8_to_local_0,&local_90,&local_88,&local_80,&local_78);
      if ((((local_88 == 0) && (sVar4 != 0xffffffffffffffff)) &&
          ((sVar4 == 0 || (((long)local_80 - (long)local_68 != 1 || (local_68[0] != '?')))))) &&
         (sVar4 = iconv(utf8_to_local_0,(char **)0x0,(size_t *)0x0,&local_80,&local_78),
         sVar4 != 0xffffffffffffffff)) {
        fwrite(local_68,1,(long)local_80 - (long)local_68,param_1);
      }
      else {
        (*UNRECOVERED_JUMPTABLE)(param_2,0,param_1);
      }
    }
  }
LAB_00100542:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100683:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


