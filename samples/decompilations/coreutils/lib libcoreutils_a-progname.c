
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void set_program_name(char *argv0)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  if (argv0 == (char *)0x0) {
    fwrite("A NULL argv[0] was passed through an exec system call.\n",1,0x37,_stderr);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar2 = strrchr(argv0,0x2f);
  pcVar3 = argv0;
  if ((((pcVar2 != (char *)0x0) && (pcVar3 = pcVar2 + 1, 6 < (long)pcVar3 - (long)argv0)) &&
      (iVar1 = strncmp(pcVar2 + -6,"/.libs/",7), iVar1 == 0)) &&
     (((argv0 = pcVar3, pcVar2[1] == 'l' && (pcVar2[2] == 't')) && (pcVar2[3] == '-')))) {
    pcVar3 = pcVar2 + 4;
    argv0 = pcVar3;
  }
  program_name = argv0;
  _program_invocation_name = argv0;
  _program_invocation_short_name = pcVar3;
  return;
}


