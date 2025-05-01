
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void xstrtol_fatal(strtol_error err,int opt_idx,char c,option *long_options,char *arg)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char option_buffer [2];
  
  uVar1 = _exit_failure;
  if (err < LONGINT_INVALID) {
    pcVar5 = "invalid suffix in %s%s argument \'%s\'";
    if ((err < LONGINT_INVALID_SUFFIX_CHAR) &&
       (pcVar5 = "%s%s argument \'%s\' too large", err != LONGINT_OVERFLOW)) {
                    /* WARNING: Subroutine does not return */
      xstrtol_fatal_cold();
    }
  }
  else {
    pcVar5 = "invalid %s%s argument \'%s\'";
    if (err != LONGINT_INVALID) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if (opt_idx < 0) {
    pcVar4 = option_buffer;
    option_buffer[1] = '\0';
    puVar3 = &_LC3 + -(long)opt_idx;
    option_buffer[0] = c;
  }
  else {
    pcVar4 = long_options[opt_idx].name;
    puVar3 = &_LC3;
  }
  uVar2 = dcgettext("gnulib",pcVar5,5);
  error(uVar1,0,uVar2,puVar3,pcVar4,arg);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void xstrtol_fatal_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


