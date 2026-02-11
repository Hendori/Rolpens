
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 prime_main(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  byte *pbVar11;
  byte *str;
  int safe;
  long in_FS_OFFSET;
  BIGNUM *local_48;
  long local_40;
  
  safe = 0;
  bVar2 = false;
  bVar3 = false;
  iVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (BIGNUM *)0x0;
  uVar7 = opt_init(param_1,param_2,prime_options);
switchD_00100074_caseD_0:
  iVar4 = opt_next();
  if (iVar4 != 0) {
    while (6 < iVar4) {
      if (3 < iVar4 - 0x641U) goto switchD_00100074_caseD_0;
      iVar4 = opt_provider(iVar4);
      if (iVar4 == 0) goto LAB_001001da;
      iVar4 = opt_next();
      if (iVar4 == 0) goto LAB_001000a8;
    }
    if (iVar4 < -1) goto switchD_00100074_caseD_0;
    switch(iVar4) {
    case 1:
      uVar7 = 0;
      opt_help(prime_options);
      goto LAB_00100158;
    case 2:
      bVar3 = true;
      break;
    case 3:
      bVar2 = true;
      break;
    case 4:
      pcVar8 = (char *)opt_arg();
      lVar10 = strtol(pcVar8,(char **)0x0,10);
      iVar5 = (int)lVar10;
      break;
    case 5:
      safe = 1;
      break;
    case 6:
      opt_arg();
      break;
    case -1:
      goto switchD_00100074_caseD_ffffffff;
    }
    goto switchD_00100074_caseD_0;
  }
LAB_001000a8:
  if (!bVar2) {
    iVar5 = opt_num_rest();
    puVar9 = (undefined8 *)opt_rest();
    if (iVar5 != 0) {
      pbVar11 = (byte *)*puVar9;
      if (pbVar11 == (byte *)0x0) goto LAB_0010014f;
      bVar1 = *pbVar11;
      str = pbVar11;
      if (!bVar3) goto joined_r0x0010033e;
      goto LAB_001002ae;
    }
    BIO_printf(_bio_err,"Missing number (s) to check\n");
    goto switchD_00100074_caseD_ffffffff;
  }
  iVar4 = opt_check_rest_arg(0);
  if (iVar4 == 0) goto switchD_00100074_caseD_ffffffff;
  opt_num_rest();
  opt_rest();
  if (iVar5 == 0) {
    BIO_printf(_bio_err,"Specify the number of bits.\n");
    goto LAB_001001da;
  }
  local_48 = BN_new();
  if (local_48 == (BIGNUM *)0x0) {
LAB_001003c4:
    BIO_printf(_bio_err,"Out of memory.\n");
    goto LAB_001001da;
  }
  iVar5 = BN_generate_prime_ex(local_48,iVar5,safe,(BIGNUM *)0x0,(BIGNUM *)0x0,(BN_GENCB *)0x0);
  if (iVar5 == 0) {
    BIO_printf(_bio_err,"Failed to generate prime.\n");
    goto LAB_001001da;
  }
  if (bVar3) {
    pcVar8 = BN_bn2hex(local_48);
  }
  else {
    pcVar8 = BN_bn2dec(local_48);
  }
  if (pcVar8 == (char *)0x0) goto LAB_001003c4;
  BIO_printf(_bio_out,"%s\n",pcVar8);
  CRYPTO_free(pcVar8);
LAB_0010014f:
  uVar7 = 0;
  goto LAB_00100158;
LAB_001002ae:
  uVar6 = *pbVar11 - 0x30;
  if (0x36 < (byte)uVar6) {
    if (*pbVar11 != 0) goto LAB_00100380;
    iVar5 = BN_hex2bn(&local_48,(char *)str);
    while( true ) {
      if (iVar5 == 0) {
        str = (byte *)*puVar9;
        goto LAB_00100380;
      }
      BN_print(_bio_out,local_48);
      iVar5 = BN_check_prime(local_48,0,0);
      if (iVar5 < 0) {
        BIO_printf(_bio_err,"Error checking prime\n");
        goto LAB_001001da;
      }
      uVar7 = *puVar9;
      pcVar8 = "is";
      if (iVar5 != 1) {
        pcVar8 = "is not";
      }
      puVar9 = puVar9 + 1;
      BIO_printf(_bio_out," (%s) %s prime\n",uVar7,pcVar8);
      pbVar11 = (byte *)*puVar9;
      if (pbVar11 == (byte *)0x0) goto LAB_0010014f;
      bVar1 = *pbVar11;
      str = pbVar11;
      if (bVar3) break;
joined_r0x0010033e:
      while ((byte)(bVar1 - 0x30) < 10) {
        pbVar11 = pbVar11 + 1;
        bVar1 = *pbVar11;
      }
      if (bVar1 != 0) goto LAB_00100380;
      iVar5 = BN_dec2bn(&local_48,(char *)str);
    }
    goto LAB_001002ae;
  }
  if ((0x7e0000007e03ffU >> ((ulong)uVar6 & 0x3f) & 1) == 0) goto LAB_00100380;
  pbVar11 = pbVar11 + 1;
  goto LAB_001002ae;
LAB_00100380:
  BIO_printf(_bio_err,"Failed to process value (%s)\n",str);
  goto LAB_001001da;
switchD_00100074_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar7);
LAB_001001da:
  uVar7 = 1;
LAB_00100158:
  BN_free(local_48);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


