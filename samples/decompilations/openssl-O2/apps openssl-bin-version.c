
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 version_main(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined *puVar15;
  
  bVar2 = false;
  bVar3 = false;
  bVar1 = false;
  bVar4 = false;
  uVar13 = opt_init(param_1,param_2,version_options);
  bVar11 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar5 = false;
  bVar6 = false;
  bVar10 = false;
  while (iVar12 = opt_next(), iVar12 != 0) {
    switch(iVar12) {
    case 1:
      opt_help(version_options);
      return 0;
    case 2:
      bVar1 = true;
      bVar4 = true;
      break;
    case 3:
      bVar7 = true;
      bVar4 = true;
      break;
    case 4:
      bVar8 = true;
      bVar4 = true;
      break;
    case 5:
      bVar9 = true;
      bVar4 = true;
      break;
    case 6:
      bVar6 = true;
      bVar4 = true;
      break;
    case 7:
      bVar3 = true;
      bVar4 = true;
      break;
    case 8:
      bVar2 = true;
      bVar4 = true;
      break;
    case 9:
      bVar5 = true;
      bVar4 = true;
      break;
    case 10:
      bVar11 = true;
      bVar2 = true;
      bVar3 = true;
      bVar1 = true;
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      bVar5 = true;
      bVar6 = true;
      bVar10 = true;
      break;
    case 0xb:
      bVar10 = true;
      bVar4 = true;
      break;
    case 0xc:
      bVar11 = true;
      bVar4 = true;
      break;
    case -1:
switchD_00100089_caseD_ffffffff:
      BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar13);
      return 1;
    }
  }
  iVar12 = opt_check_rest_arg(0);
  if (iVar12 != 0) {
    if (!bVar4 || bVar5) {
      uVar13 = OpenSSL_version(0);
      __printf_chk(2,"%s (Library: %s)\n","OpenSSL 3.5.0 8 Apr 2025",uVar13);
    }
    if (bVar1) {
      pcVar14 = (char *)OpenSSL_version(2);
      puts(pcVar14);
    }
    if (bVar2) {
      pcVar14 = (char *)OpenSSL_version(3);
      puts(pcVar14);
    }
    if (bVar3) {
      __printf_chk(2,"options: ");
      pcVar14 = BN_options();
      __printf_chk(2,&_LC5,pcVar14);
      putchar(10);
    }
    if (bVar6) {
      pcVar14 = (char *)OpenSSL_version(1);
      puts(pcVar14);
    }
    if (bVar7) {
      pcVar14 = (char *)OpenSSL_version(4);
      puts(pcVar14);
    }
    if (bVar8) {
      pcVar14 = (char *)OpenSSL_version(5);
      puts(pcVar14);
    }
    if (bVar9) {
      pcVar14 = (char *)OpenSSL_version(8);
      puts(pcVar14);
    }
    if (bVar10) {
      puVar15 = (undefined *)OPENSSL_info(0x3ef);
      if (puVar15 == (undefined *)0x0) {
        puVar15 = &_LC0;
      }
      __printf_chk(2,"Seeding source: %s\n",puVar15);
    }
    if (!bVar11) {
      return 0;
    }
    pcVar14 = (char *)OpenSSL_version(9);
    puts(pcVar14);
    return 0;
  }
  goto switchD_00100089_caseD_ffffffff;
}


