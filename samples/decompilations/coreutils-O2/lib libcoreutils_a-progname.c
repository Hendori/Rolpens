
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_program_name(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (param_1 == (char *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,_stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar2 = strrchr(param_1,0x2f);
  pcVar3 = param_1;
  if ((((pcVar2 != (char *)0x0) && (pcVar3 = pcVar2 + 1, 6 < (long)pcVar3 - (long)param_1)) &&
      (iVar1 = strncmp(pcVar2 + -6,"/.libs/",7), iVar1 == 0)) &&
     (((param_1 = pcVar3, pcVar2[1] == 'l' && (pcVar2[2] == 't')) && (pcVar2[3] == '-')))) {
    pcVar3 = pcVar2 + 4;
    param_1 = pcVar3;
  }
  program_name = param_1;
  _program_invocation_name = param_1;
  _program_invocation_short_name = pcVar3;
  return;
}


