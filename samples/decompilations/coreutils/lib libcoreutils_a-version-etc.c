
/* WARNING: Unknown calling convention */

void version_etc_arn(FILE *stream,char *command_name,char *package,char *version,char **authors,
                    size_t n_authors)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  
  if (command_name == (char *)0x0) {
    __fprintf_chk(stream,2,"%s %s\n",package,version);
  }
  else {
    __fprintf_chk(stream,2,"%s (%s) %s\n",command_name,package,version);
  }
  uVar1 = dcgettext("gnulib",&_LC2,5);
  __fprintf_chk(stream,2,&version_etc_copyright,uVar1,0x7e9);
  fputc_unlocked(10,(FILE *)stream);
  uVar1 = dcgettext("gnulib",
                    "License GPLv3+: GNU GPL version 3 or later <%s>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n"
                    ,5);
  __fprintf_chk(stream,2,uVar1,"https://gnu.org/licenses/gpl.html");
  fputc_unlocked(10,(FILE *)stream);
  switch(n_authors) {
  case 0:
    goto switchD_001000d9_caseD_0;
  case 1:
    pcVar5 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s.\n",5);
    __fprintf_chk(stream,2,uVar1,pcVar5);
    return;
  case 2:
    pcVar5 = authors[1];
    pcVar7 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s and %s.\n",5);
    __fprintf_chk(stream,2,uVar1,pcVar7,pcVar5);
    return;
  case 3:
    pcVar5 = authors[2];
    pcVar7 = authors[1];
    pcVar6 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s, %s, and %s.\n",5);
    __fprintf_chk(stream,2,uVar1,pcVar6,pcVar7,pcVar5);
    return;
  case 4:
    pcVar7 = authors[3];
    pcVar6 = authors[2];
    pcVar5 = authors[1];
    pcVar2 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s, %s, %s,\nand %s.\n",5);
    goto LAB_0010030b;
  case 5:
    pcVar5 = authors[1];
    pcVar7 = authors[3];
    pcVar6 = authors[2];
    pcVar2 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, and %s.\n",5);
LAB_0010030b:
    __fprintf_chk(stream,2,uVar1,pcVar2,pcVar5,pcVar6,pcVar7);
    return;
  case 6:
    pcVar7 = authors[2];
    pcVar5 = authors[1];
    pcVar6 = authors[5];
    pcVar2 = authors[4];
    pcVar4 = authors[3];
    pcVar3 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, %s, and %s.\n",5);
    goto LAB_001003bd;
  case 7:
    pcVar5 = authors[1];
    pcVar7 = authors[2];
    pcVar6 = authors[5];
    pcVar2 = authors[4];
    pcVar4 = authors[3];
    pcVar3 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, %s, %s, and %s.\n",5);
LAB_001003bd:
    __fprintf_chk(stream,2,uVar1,pcVar3,pcVar5,pcVar7,pcVar4,pcVar2,pcVar6);
    return;
  case 8:
    local_48 = authors[7];
    local_50 = authors[6];
    local_60 = authors[2];
    local_58 = authors[1];
    pcVar5 = authors[5];
    pcVar7 = authors[4];
    pcVar6 = authors[3];
    pcVar2 = *authors;
    uVar1 = dcgettext("gnulib","Written by %s, %s, %s,\n%s, %s, %s, %s,\nand %s.\n",5);
    goto LAB_0010012f;
  case 9:
    local_48 = authors[7];
    pcVar4 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
    local_50 = authors[6];
    local_60 = authors[2];
    local_58 = authors[1];
    pcVar5 = authors[5];
    pcVar7 = authors[4];
    pcVar6 = authors[3];
    pcVar2 = *authors;
    break;
  default:
    local_48 = authors[7];
    pcVar4 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
    local_50 = authors[6];
    local_60 = authors[2];
    local_58 = authors[1];
    pcVar5 = authors[5];
    pcVar7 = authors[4];
    pcVar6 = authors[3];
    pcVar2 = *authors;
  }
  uVar1 = dcgettext("gnulib",pcVar4,5);
LAB_0010012f:
  __fprintf_chk(stream,2,uVar1,pcVar2,local_58,local_60,pcVar6,pcVar7,pcVar5,local_50,local_48);
switchD_001000d9_caseD_0:
  return;
}



/* WARNING: Unknown calling convention */

void version_etc_ar(FILE *stream,char *command_name,char *package,char *version,char **authors)

{
  char *pcVar1;
  size_t n_authors;
  
  n_authors = 0;
  pcVar1 = *authors;
  while (pcVar1 != (char *)0x0) {
    n_authors = n_authors + 1;
    pcVar1 = authors[n_authors];
  }
  version_etc_arn(stream,command_name,package,version,authors,n_authors);
  return;
}



/* WARNING: Unknown calling convention */

void version_etc_va(FILE *stream,char *command_name,char *package,char *version,
                   __va_list_tag *authors)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  size_t n_authors;
  long in_FS_OFFSET;
  char *authtab [10];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  n_authors = 0;
  do {
    uVar1 = authors->gp_offset;
    if (uVar1 < 0x30) {
      authors->gp_offset = uVar1 + 8;
      pcVar4 = *(char **)((ulong)uVar1 + (long)authors->reg_save_area);
      authtab[n_authors] = pcVar4;
    }
    else {
      plVar3 = (long *)authors->overflow_arg_area;
      authors->overflow_arg_area = plVar3 + 1;
      pcVar4 = (char *)*plVar3;
      authtab[n_authors] = pcVar4;
    }
  } while ((pcVar4 != (char *)0x0) && (n_authors = n_authors + 1, n_authors != 10));
  version_etc_arn(stream,command_name,package,version,authtab,n_authors);
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Unknown calling convention */

void version_etc(FILE *stream,char *command_name,char *package,char *version,...)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  size_t n_authors;
  long in_FS_OFFSET;
  va_list authors;
  char *authtab [10];
  undefined8 local_38 [4];
  undefined8 local_18 [2];
  
  uVar3 = 0x20;
  local_18[0] = in_R8;
  puVar4 = (undefined8 *)&stack0x00000008;
  local_18[1] = in_R9;
  n_authors = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if ((uint)uVar3 < 0x30) {
      pcVar2 = *(char **)((long)local_38 + uVar3);
      authtab[n_authors] = pcVar2;
      uVar3 = (ulong)((uint)uVar3 + 8);
    }
    else {
      pcVar2 = (char *)*puVar4;
      authtab[n_authors] = pcVar2;
      puVar4 = puVar4 + 1;
    }
  } while ((pcVar2 != (char *)0x0) && (n_authors = n_authors + 1, n_authors != 10));
  version_etc_arn(stream,command_name,package,version,authtab,n_authors);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void emit_bug_reporting_address(void)

{
  undefined8 uVar1;
  
  fputc_unlocked(10,_stdout);
  uVar1 = dcgettext("gnulib","Report bugs to: %s\n",5);
  __printf_chk(2,uVar1,"bug-coreutils@gnu.org");
  uVar1 = dcgettext("gnulib","%s home page: <%s>\n",5);
  __printf_chk(2,uVar1,"GNU coreutils","https://www.gnu.org/software/coreutils/");
  uVar1 = dcgettext("gnulib","General help using GNU software: <%s>\n",5);
  __printf_chk(2,uVar1,"https://www.gnu.org/gethelp/");
  return;
}


