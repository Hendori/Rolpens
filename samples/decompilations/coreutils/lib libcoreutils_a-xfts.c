
/* WARNING: Unknown calling convention */

FTS * xfts_open(char **argv,int options,_func_int_FTSENT_ptr_ptr_FTSENT_ptr_ptr *compar)

{
  FTS *pFVar1;
  int *piVar2;
  
  pFVar1 = (FTS *)rpl_fts_open(argv,options | 0x200);
  if (pFVar1 != (FTS *)0x0) {
    return pFVar1;
  }
  piVar2 = __errno_location();
  if (*piVar2 != 0x16) {
    xalloc_die();
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("(*__errno_location ()) != 22","lib/xfts.c",0x28,"xfts_open");
}



/* WARNING: Unknown calling convention */

_Bool cycle_warning_required(FTS *fts,FTSENT *ent)

{
  uint uVar1;
  _Bool _Var2;
  
  _Var2 = true;
  uVar1 = fts->fts_options & 0x11;
  if ((uVar1 != 0x10) && (_Var2 = false, uVar1 == 0x11)) {
    return ent->fts_level != 0;
  }
  return _Var2;
}


