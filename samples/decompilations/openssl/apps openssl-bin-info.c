
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 info_main(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0;
  iVar4 = 1;
  uVar2 = opt_init(param_1,param_2,info_options);
  iVar1 = opt_next();
  while (iVar1 != 0) {
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(iVar1) {
    case 1:
      opt_help(info_options);
      return 0;
    case 2:
      uVar5 = 0x3e9;
      break;
    case 3:
      uVar5 = 0x3ea;
      break;
    case 4:
      uVar5 = 0x3eb;
      break;
    case 5:
      uVar5 = 0x3ec;
      break;
    case 6:
      uVar5 = 0x3ed;
      break;
    case 7:
      uVar5 = 0x3ee;
      break;
    case 8:
      uVar5 = 0x3ef;
      break;
    case 9:
      uVar5 = 0x3f0;
      break;
    case 10:
      uVar5 = 0x3f1;
      break;
    default:
      goto switchD_00100044_default;
    }
    iVar4 = iVar4 + 1;
    iVar1 = opt_next();
  }
  iVar1 = opt_check_rest_arg(0);
  if (iVar1 != 0) {
    if (iVar4 + -1 < 2) {
      if (iVar4 != 1) {
        pcVar3 = (char *)OPENSSL_info(uVar5);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = "Undefined";
        }
        BIO_printf(_bio_out,"%s\n",pcVar3);
        return 0;
      }
      BIO_printf(_bio_err,"%s: No items chosen\n",uVar2);
    }
    else {
      BIO_printf(_bio_err,"%s: Only one item allowed\n",uVar2);
    }
  }
switchD_00100044_default:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar2);
  return 1;
}


