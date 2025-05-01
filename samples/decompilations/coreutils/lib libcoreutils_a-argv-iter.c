
/* WARNING: Unknown calling convention */

argv_iterator * argv_iter_init_argv(char **argv)

{
  argv_iterator *paVar1;
  
  paVar1 = (argv_iterator *)malloc(0x30);
  if (paVar1 != (argv_iterator *)0x0) {
    paVar1->fp = (FILE *)0x0;
    paVar1->arg_list = argv;
    paVar1->p = argv;
  }
  return paVar1;
}



/* WARNING: Unknown calling convention */

argv_iterator * argv_iter_init_stream(FILE *fp)

{
  argv_iterator *paVar1;
  
  paVar1 = (argv_iterator *)malloc(0x30);
  if (paVar1 != (argv_iterator *)0x0) {
    paVar1->fp = fp;
    paVar1->tok = (char *)0x0;
    paVar1->buf_len = 0;
    paVar1->item_idx = 0;
    paVar1->arg_list = (char **)0x0;
  }
  return paVar1;
}



/* WARNING: Unknown calling convention */

char * argv_iter(argv_iterator *ai,argv_iter_err *err)

{
  char **ppcVar1;
  int iVar2;
  __ssize_t _Var3;
  char *pcVar4;
  
  if ((FILE *)ai->fp == (FILE *)0x0) {
    ppcVar1 = ai->p;
    pcVar4 = *ppcVar1;
    if (pcVar4 != (char *)0x0) {
      *err = AI_ERR_OK;
      ai->p = ppcVar1 + 1;
      return pcVar4;
    }
    *err = AI_ERR_EOF;
    pcVar4 = (char *)0x0;
  }
  else {
    _Var3 = getdelim(&ai->tok,&ai->buf_len,0,(FILE *)ai->fp);
    if (_Var3 < 0) {
      iVar2 = feof((FILE *)ai->fp);
      *err = (-(uint)(iVar2 == 0) & 2) + AI_ERR_EOF;
      pcVar4 = (char *)0x0;
    }
    else {
      *err = AI_ERR_OK;
      pcVar4 = ai->tok;
      ai->item_idx = ai->item_idx + 1;
    }
  }
  return pcVar4;
}



/* WARNING: Unknown calling convention */

size_t argv_iter_n_args(argv_iterator *ai)

{
  if (ai->fp != (FILE *)0x0) {
    return ai->item_idx;
  }
  return (long)ai->p - (long)ai->arg_list >> 3;
}



/* WARNING: Unknown calling convention */

void argv_iter_free(argv_iterator *ai)

{
  if (ai->fp != (FILE *)0x0) {
    free(ai->tok);
  }
  free(ai);
  return;
}


