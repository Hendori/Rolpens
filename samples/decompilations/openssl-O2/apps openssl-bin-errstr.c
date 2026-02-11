
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int errstr_main(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  ulong local_150;
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = opt_init(param_1,param_2,errstr_options);
  while( true ) {
    iVar1 = opt_next();
    if (iVar1 == 0) {
      OPENSSL_init_ssl(0x200002,0);
      plVar4 = (long *)opt_rest();
      lVar5 = *plVar4;
      if (lVar5 != 0) {
        iVar1 = 0;
        do {
          iVar2 = __isoc99_sscanf(lVar5,&_LC1,&local_150);
          if (iVar2 < 1) {
            iVar1 = iVar1 + 1;
          }
          else {
            ERR_error_string_n(local_150,local_148,0x100);
            BIO_printf(_bio_out,"%s\n",local_148);
          }
          lVar5 = plVar4[1];
          plVar4 = plVar4 + 1;
        } while (lVar5 != 0);
        goto LAB_00100059;
      }
      goto LAB_00100057;
    }
    if (iVar1 == -1) break;
    if (iVar1 == 1) {
      opt_help(errstr_options);
LAB_00100057:
      iVar1 = 0;
LAB_00100059:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar1;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  iVar1 = 1;
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar3);
  goto LAB_00100059;
}


