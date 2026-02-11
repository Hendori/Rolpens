
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long srp_verify_user(undefined8 param_1,char *param_2,long param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,uint param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *extraout_RDX;
  size_t len;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  char *pcStack_8c8;
  undefined1 auStack_8c0 [1032];
  long lStack_4b8;
  size_t sStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  char *pcStack_490;
  undefined1 *puStack_488;
  undefined8 uStack_480;
  long local_470 [2];
  char *local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_460 = (char *)0x0;
  uStack_480 = 0x100061;
  local_470[0] = param_3;
  local_458 = param_6;
  local_450 = param_1;
  iVar2 = password_callback(local_448,0x400,0,&local_458);
  if (iVar2 < 1) {
    lVar3 = 0;
  }
  else {
    pcVar5 = (char *)(ulong)param_7;
    len = (size_t)iVar2;
    local_448[len] = 0;
    lVar3 = local_470[0];
    if (param_7 != 0) {
      pcStack_490 = (char *)0x100144;
      pcVar5 = param_2;
      param_6 = param_4;
      puStack_488 = (undefined1 *)param_5;
      BIO_printf(_bio_err,
                 "Validating\n   user=\"%s\"\n srp_verifier=\"%s\"\n srp_usersalt=\"%s\"\n g=\"%s\"\n N=\"%s\"\n"
                 ,param_1,param_2);
      if (1 < (int)param_7) {
        uStack_480 = 0x10016c;
        BIO_printf(_bio_err,"Pass %s\n",local_448);
      }
    }
    if (local_470[0] == 0) {
      pcVar6 = "apps/srp.c";
      pcVar7 = "assertion failed: srp_usersalt != NULL";
      uStack_480 = 0x1001b7;
      OPENSSL_die("assertion failed: srp_usersalt != NULL","apps/srp.c",0x91);
      lVar4 = 0;
      lStack_4b8 = *(long *)(in_FS_OFFSET + 0x28);
      uStack_8d8 = 0;
      uStack_8d0 = param_6;
      pcStack_8c8 = pcVar7;
      sStack_4a8 = len;
      uStack_4a0 = param_1;
      uStack_498 = param_5;
      pcStack_490 = param_2;
      puStack_488 = local_448;
      uStack_480 = param_4;
      iVar2 = password_callback(auStack_8c0,0x400,1,&uStack_8d0);
      if (0 < iVar2) {
        iVar1 = (int)local_470[0];
        auStack_8c0[iVar2] = 0;
        if (iVar1 != 0) {
          BIO_printf(_bio_err,"Creating\n user=\"%s\"\n g=\"%s\"\n N=\"%s\"\n",pcVar7,pcVar5,lVar3);
        }
        lVar4 = SRP_create_verifier(pcVar7,auStack_8c0,&uStack_8d8,pcVar6,lVar3,pcVar5);
        if (lVar4 == 0) {
          BIO_printf(_bio_err,"Internal error creating SRP verifier\n");
        }
        else {
          *extraout_RDX = uStack_8d8;
        }
        OPENSSL_cleanse(auStack_8c0,(long)iVar2);
        if (1 < (int)local_470[0]) {
          BIO_printf(_bio_err,"gNid=%s salt =\"%s\"\n verifier =\"%s\"\n",lVar4,uStack_8d8,
                     *(undefined8 *)pcVar6);
        }
      }
      if (lStack_4b8 == *(long *)(in_FS_OFFSET + 0x28)) {
        return lVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uStack_480 = 0x1000ac;
    lVar3 = SRP_create_verifier(param_1,local_448,local_470,&local_460,param_5,param_4);
    pcVar5 = local_460;
    if (lVar3 == 0) {
      uStack_480 = 0x100195;
      BIO_printf(_bio_err,"Internal error validating SRP verifier\n");
    }
    else {
      uStack_480 = 0x1000c8;
      iVar2 = strcmp(local_460,param_2);
      if (iVar2 != 0) {
        lVar3 = 0;
      }
      uStack_480 = 0x1000e7;
      CRYPTO_free(pcVar5);
    }
    uStack_480 = 0x1000f2;
    OPENSSL_cleanse(local_448,len);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  uStack_480 = 0x10019f;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long srp_create_user(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_448 [1032];
  long local_40;
  
  lVar2 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_460 = 0;
  local_458 = param_6;
  local_450 = param_1;
  iVar1 = password_callback(local_448,0x400,1,&local_458);
  if (0 < iVar1) {
    local_448[iVar1] = 0;
    if (param_7 != 0) {
      BIO_printf(_bio_err,"Creating\n user=\"%s\"\n g=\"%s\"\n N=\"%s\"\n",param_1,param_4,param_5);
    }
    lVar2 = SRP_create_verifier(param_1,local_448,&local_460,param_2,param_5,param_4);
    if (lVar2 == 0) {
      BIO_printf(_bio_err,"Internal error creating SRP verifier\n");
    }
    else {
      *param_3 = local_460;
    }
    OPENSSL_cleanse(local_448,(long)iVar1);
    if (1 < param_7) {
      BIO_printf(_bio_err,"gNid=%s salt =\"%s\"\n verifier =\"%s\"\n",lVar2,local_460,*param_2);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int get_index(long param_1,char *param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  if (param_2 != (char *)0x0) {
    iVar3 = 0;
    if (param_3 == 'I') {
      for (; iVar1 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(param_1 + 8) + 8)), iVar3 < iVar1;
          iVar3 = iVar3 + 1) {
        puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8),iVar3);
        if ((*(char *)*puVar2 == 'I') && (iVar1 = strcmp(param_2,(char *)puVar2[3]), iVar1 == 0)) {
          return iVar3;
        }
      }
    }
    else {
      for (; iVar1 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(param_1 + 8) + 8)), iVar3 < iVar1;
          iVar3 = iVar3 + 1) {
        puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8),iVar3);
        if ((*(char *)*puVar2 != 'I') && (iVar1 = strcmp(param_2,(char *)puVar2[3]), iVar1 == 0)) {
          return iVar3;
        }
      }
    }
  }
  return -1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_entry_part_0_isra_0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8));
  uVar4 = 0;
  BIO_printf(_bio_err,"%s \"%s\"\n",param_3,*(undefined8 *)(lVar2 + 0x18));
  do {
    lVar1 = uVar4 * 8;
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    BIO_printf(_bio_err,"  %d = \"%s\"\n",uVar3,*(undefined8 *)(lVar2 + lVar1));
  } while (uVar4 != 6);
  return;
}



void print_user_part_0(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  if (*(char *)*puVar2 != 'I') {
    if ((-1 < param_2) && (param_3 != 0)) {
      print_entry_part_0_isra_0(*(undefined8 *)(param_1 + 8),param_2,"User entry");
    }
    iVar1 = get_index(param_1,puVar2[4],0x49);
    if ((-1 < iVar1) && (param_3 != 0)) {
      print_entry_part_0_isra_0(*(undefined8 *)(param_1 + 8),iVar1,"g N entry");
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong srp_main(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  OPENSSL_STRING *value;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  char *pcVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined8 local_e0;
  char *local_d8;
  CONF *local_d0;
  char *local_c8;
  char *local_c0;
  long local_b8;
  long *local_a8;
  long local_a0;
  char *local_90;
  void *local_88;
  void *local_80;
  char *local_78;
  undefined1 local_70 [16];
  char *local_60;
  char *local_58;
  char *local_50;
  long local_40;
  
  pcVar14 = (char *)0x0;
  iVar17 = 0;
  lVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  uVar5 = opt_init(param_1,param_2,srp_options);
  local_d8 = (char *)0x0;
  local_b8 = 0;
  local_c0 = (char *)0x0;
  local_c8 = (char *)0x0;
  local_d0 = (CONF *)0x0;
  local_e0 = 0;
  iVar13 = -1;
switchD_001005b2_caseD_0:
  iVar2 = opt_next();
  if (iVar2 != 0) goto LAB_00100599;
LAB_001005e8:
  iVar2 = opt_num_rest();
  local_a8 = (long *)opt_rest();
  iVar3 = app_RAND_load();
  if (iVar3 == 0) goto LAB_00100782;
  if ((local_d8 != (char *)0x0) && (local_b8 != 0)) {
    pcVar14 = "-srpvfile and -configfile cannot be specified together.\n";
LAB_00100a9e:
    BIO_printf(_bio_err,pcVar14);
    goto LAB_00100782;
  }
  if (iVar13 == -1) {
    BIO_printf(_bio_err,
               "Exactly one of the options -add, -delete, -modify -list must be specified.\n");
    goto switchD_001005b2_caseD_ffffffff;
  }
  if (iVar13 - 6U < 3) {
    if (iVar2 == 0) {
      BIO_printf(_bio_err,"Need at least one user.\n");
      goto switchD_001005b2_caseD_ffffffff;
    }
    local_90 = (char *)*local_a8;
    local_a8 = local_a8 + 1;
  }
  else {
    local_90 = (char *)0x0;
  }
  if ((local_d0 != (CONF *)0x0 || lVar6 != 0) && (iVar2 != 1)) {
    BIO_printf(_bio_err,"-passin, -passout arguments only valid with one user.\n");
    goto switchD_001005b2_caseD_ffffffff;
  }
  iVar2 = app_passwd(lVar6,local_d0,&local_88,&local_80);
  if (iVar2 == 0) {
    pcVar14 = "Error getting passwords\n";
    goto LAB_00100a9e;
  }
  if (local_d8 != (char *)0x0) {
    local_d0 = (CONF *)0x0;
    if (iVar17 != 0) {
LAB_001010f1:
      BIO_printf(_bio_err,"Trying to read SRP verifier file \"%s\"\n",local_d8);
    }
LAB_00100688:
    iVar11 = 0;
    iVar3 = -1;
    iVar2 = -1;
    lVar6 = load_index(local_d8,0);
    pcVar14 = "Problem with index file: %s (could not load/parse file)\n";
    if (lVar6 != 0) goto LAB_001006c3;
    goto LAB_001013d0;
  }
  if (local_b8 == 0) {
    local_b8 = _default_config_file;
  }
  local_d0 = (CONF *)app_load_config_verbose(local_b8,iVar17);
  if (local_d0 != (CONF *)0x0) {
    if ((_default_config_file == local_b8) || (iVar2 = app_load_modules(local_d0), iVar2 != 0)) {
      if (pcVar14 == (char *)0x0) {
        if (iVar17 == 0) {
          pcVar14 = NCONF_get_string(local_d0,"srp","default_srp");
          if (pcVar14 != (char *)0x0) {
            app_RAND_load_conf(local_d0,&_LC21);
            goto LAB_001010c7;
          }
        }
        else {
          BIO_printf(_bio_err,"trying to read default_srp in srp\n");
          pcVar14 = NCONF_get_string(local_d0,"srp","default_srp");
          if (pcVar14 != (char *)0x0) {
            app_RAND_load_conf(local_d0,&_LC21);
            goto LAB_001015c7;
          }
        }
        uVar12 = 1;
        BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",&_LC21,"default_srp");
        lVar6 = 0;
        goto LAB_001007bd;
      }
      app_RAND_load_conf(local_d0,&_LC21);
      if (iVar17 == 0) {
LAB_001010c7:
        local_d8 = NCONF_get_string(local_d0,pcVar14,"srpvfile");
        if (local_d8 != (char *)0x0) goto LAB_00100688;
      }
      else {
LAB_001015c7:
        BIO_printf(_bio_err,"trying to read srpvfile in section \"%s\"\n",pcVar14);
        local_d8 = NCONF_get_string(local_d0,pcVar14,"srpvfile");
        if (local_d8 != (char *)0x0) goto LAB_001010f1;
      }
      BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar14,"srpvfile");
    }
    lVar6 = 0;
    uVar12 = 1;
    goto LAB_001007bd;
  }
LAB_00100782:
  uVar12 = 1;
  lVar6 = 0;
  local_d0 = (CONF *)0x0;
LAB_001007bd:
  if (iVar17 != 0) {
LAB_00100a4f:
    BIO_printf(_bio_err,"SRP terminating with code %d.\n",uVar12);
  }
LAB_001007c6:
  CRYPTO_free(local_88);
  CRYPTO_free(local_80);
  if ((int)uVar12 == 0) goto LAB_001007f2;
LAB_00100908:
  uVar12 = 1;
  ERR_print_errors(_bio_err);
LAB_001007f2:
  NCONF_free(local_d0);
  free_index(lVar6);
  release_engine(local_e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100599:
  while (0xe < iVar2) {
    if (0x5de < iVar2) {
      if ((3 < iVar2 - 0x641U) || (iVar2 = opt_provider(iVar2), iVar2 != 0))
      goto switchD_001005b2_caseD_0;
      goto LAB_00100782;
    }
    if (iVar2 < 0x5dd) goto switchD_001005b2_caseD_0;
    iVar2 = opt_rand(iVar2);
    if (iVar2 == 0) goto LAB_00100782;
    iVar2 = opt_next();
    if (iVar2 == 0) goto LAB_001005e8;
  }
  if (iVar2 < -1) goto switchD_001005b2_caseD_0;
  switch(iVar2) {
  default:
    goto switchD_001005b2_caseD_0;
  case 1:
    uVar12 = 0;
    lVar6 = 0;
    opt_help(srp_options);
    local_d0 = (CONF *)0x0;
    goto LAB_001007bd;
  case 2:
    iVar17 = iVar17 + 1;
    goto switchD_001005b2_caseD_0;
  case 3:
    local_b8 = opt_arg();
    goto switchD_001005b2_caseD_0;
  case 4:
    pcVar14 = (char *)opt_arg();
    goto switchD_001005b2_caseD_0;
  case 5:
    local_d8 = (char *)opt_arg();
    goto switchD_001005b2_caseD_0;
  case 6:
  case 7:
  case 8:
  case 9:
    bVar18 = iVar13 == -1;
    iVar13 = iVar2;
    if (bVar18) goto switchD_001005b2_caseD_0;
    BIO_printf(_bio_err,"%s: Only one of -add/-delete/-modify/-list\n",uVar5);
    break;
  case 10:
    local_c8 = (char *)opt_arg();
    goto switchD_001005b2_caseD_0;
  case 0xb:
    local_c0 = (char *)opt_arg();
    goto switchD_001005b2_caseD_0;
  case 0xc:
    lVar6 = opt_arg();
    goto switchD_001005b2_caseD_0;
  case 0xd:
    local_d0 = (CONF *)opt_arg();
    goto switchD_001005b2_caseD_0;
  case 0xe:
    uVar8 = opt_arg();
    local_e0 = setup_engine_methods(uVar8,0xffffffff,0);
    goto switchD_001005b2_caseD_0;
  case -1:
    break;
  }
switchD_001005b2_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar5);
  goto LAB_00100782;
LAB_001006c3:
  for (; iVar4 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar6 + 8) + 8)), iVar11 < iVar4;
      iVar11 = iVar11 + 1) {
    puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar11);
    if (*(char *)*puVar7 == 'I') {
      if (((iVar2 < 0) && (local_c8 != (char *)0x0)) &&
         (iVar3 = strcmp(local_c8,(char *)puVar7[3]), iVar3 == 0)) {
        iVar2 = iVar11;
      }
      iVar3 = iVar11;
      if (1 < iVar17) {
        print_entry_part_0_isra_0(*(undefined8 *)(lVar6 + 8),iVar11,"g N entry");
      }
    }
  }
  if (iVar17 != 0) {
    BIO_printf(_bio_err,"Database initialised\n");
    if (iVar2 < 0) {
      if ((0 < iVar3) && (lVar10 = SRP_get_default_gN(local_c8), lVar10 == 0)) goto LAB_001013c4;
      BIO_printf(_bio_err,"Database has no g N information.\n");
      if (1 < iVar17) {
        local_a0 = 0;
        goto LAB_0010141d;
      }
      if ((iVar13 == 9) || (local_90 != (char *)0x0)) goto LAB_00100ae0;
    }
    else {
      local_a0 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar2);
      if (1 < iVar17) {
        print_entry_part_0_isra_0(*(undefined8 *)(lVar6 + 8),iVar2,"Default g and N");
LAB_0010141d:
        BIO_printf(_bio_err,"Starting user processing\n");
      }
      if ((iVar13 == 9) || (local_90 != (char *)0x0)) goto LAB_00100ae9;
    }
    BIO_printf(_bio_err,"User procession done.\n");
    uVar16 = 0;
LAB_001011a0:
    uVar12 = (ulong)(uVar16 != 0);
LAB_00100a25:
    if (uVar16 == 0) goto LAB_001007bd;
    if (iVar17 == 0) goto LAB_001007c6;
LAB_00100a37:
    BIO_printf(_bio_err,"User errors %d.\n",(ulong)uVar16);
    goto LAB_00100a4f;
  }
  if (-1 < iVar2) {
    local_a0 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar2);
    if ((iVar13 == 9) || (local_90 != (char *)0x0)) goto LAB_00100ae9;
LAB_00101346:
    uVar12 = 0;
    goto LAB_001007c6;
  }
  if ((0 < iVar3) && (lVar10 = SRP_get_default_gN(local_c8), lVar10 == 0)) {
LAB_001013c4:
    pcVar14 = "No g and N value for index \"%s\"\n";
    local_d8 = local_c8;
LAB_001013d0:
    uVar12 = 1;
    BIO_printf(_bio_err,pcVar14,local_d8);
    goto LAB_001007bd;
  }
  if ((iVar13 != 9) && (local_90 == (char *)0x0)) goto LAB_00101346;
LAB_00100ae0:
  local_a0 = 0;
LAB_00100ae9:
  bVar18 = local_90 != (char *)0x0;
  bVar15 = iVar13 == 9;
  uVar1 = 0;
  uVar16 = 0;
  do {
    if ((iVar17 < 2) || (!bVar18)) {
      iVar2 = get_index(lVar6,local_90,0x55);
      if (iVar2 < 0) goto LAB_00100bd0;
      if ((0 < iVar17) || (bVar15)) goto LAB_00100b52;
LAB_00100b72:
      if (iVar13 == 6) {
        puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar2);
        BIO_printf(_bio_err,"user \"%s\" reactivated.\n",local_90);
        *(undefined1 *)*puVar7 = 0x56;
LAB_00100d76:
        uVar1 = 1;
      }
      else if (iVar13 == 8) {
        plVar9 = (long *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar2);
        if (*(char *)*plVar9 != 'v') {
          if (*(char *)*plVar9 == 'V') {
            if (iVar17 != 0) {
              BIO_printf(_bio_err,"Verifying password for user \"%s\"\n",local_90);
            }
            iVar3 = get_index(lVar6,plVar9[4],0x49);
            if ((iVar3 < 0) ||
               (lVar10 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar2),
               lVar10 == 0)) {
              lVar10 = plVar9[4];
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined8 *)(lVar10 + 8);
              lVar10 = *(long *)(lVar10 + 0x10);
            }
            lVar10 = srp_verify_user(local_90,plVar9[1],plVar9[2],lVar10,uVar5,local_88,iVar17);
            if (lVar10 == 0) {
              uVar12 = 1;
              BIO_printf(_bio_err,"Invalid password for user \"%s\", operation abandoned.\n",
                         local_90);
              uVar16 = uVar16 + 1;
              goto LAB_00100a25;
            }
          }
          if (iVar17 != 0) {
            BIO_printf(_bio_err,"Password for user \"%s\" ok.\n",local_90);
          }
          if (local_a0 == 0) {
            uVar5 = 0;
            uVar8 = 0;
          }
          else {
            uVar5 = *(undefined8 *)(local_a0 + 8);
            uVar8 = *(undefined8 *)(local_a0 + 0x10);
          }
          pcVar14 = (char *)srp_create_user(local_90,plVar9 + 1,plVar9 + 2,uVar8,uVar5,local_80,
                                            iVar17);
          if (pcVar14 != (char *)0x0) {
            *(undefined1 *)*plVar9 = 0x76;
            pcVar14 = CRYPTO_strdup(pcVar14,"apps/srp.c",0x226);
            plVar9[4] = (long)pcVar14;
            if ((((plVar9[3] != 0) && (pcVar14 != (char *)0x0)) && (*plVar9 != 0)) &&
               ((plVar9[1] != 0 && (plVar9[2] != 0)))) {
              if (local_c0 != (char *)0x0) {
                pcVar14 = CRYPTO_strdup(local_c0,"apps/srp.c",0x22e);
                plVar9[5] = (long)pcVar14;
                if (pcVar14 == (char *)0x0) goto LAB_00100a20;
              }
              goto LAB_00100d76;
            }
            goto LAB_00100a20;
          }
          uVar12 = 1;
          BIO_printf(_bio_err,"Cannot create srp verifier for user \"%s\", operation abandoned.\n",
                     local_90);
          uVar16 = uVar16 + 1;
          goto LAB_00100a25;
        }
        BIO_printf(_bio_err,"user \"%s\" already updated, operation ignored.\n",local_90);
        uVar16 = uVar16 + 1;
      }
      else if (iVar13 == 7) {
        puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar2);
        BIO_printf(_bio_err,"user \"%s\" revoked. t\n",local_90);
        *(undefined1 *)*puVar7 = 0x52;
        goto LAB_00100d76;
      }
    }
    else {
      BIO_printf(_bio_err,"Processing user \"%s\"\n",local_90);
      iVar2 = get_index(lVar6,local_90,0x55);
      if (iVar2 < 0) {
LAB_00100bd0:
        if (bVar15) {
          if (local_90 == (char *)0x0) goto LAB_00100df9;
          BIO_printf(_bio_err,"user \"%s\" does not exist, ignored. t\n",local_90);
          uVar16 = uVar16 + 1;
        }
        else {
          if (iVar13 == 6) {
            local_50 = (char *)0x0;
            local_70 = (undefined1  [16])0x0;
            if (local_a0 == 0) {
              uVar5 = 0;
              pcVar14 = local_c8;
            }
            else {
              uVar5 = *(undefined8 *)(local_a0 + 8);
              pcVar14 = *(char **)(local_a0 + 0x10);
            }
            pcVar14 = (char *)srp_create_user(local_90,local_70,local_70 + 8,pcVar14,uVar5,local_80,
                                              iVar17);
            if (pcVar14 == (char *)0x0) {
              BIO_printf(_bio_err,
                         "Cannot create srp verifier for user \"%s\", operation abandoned .\n",
                         local_90);
              uVar16 = uVar16 + 1;
            }
            else {
              local_60 = CRYPTO_strdup(local_90,"apps/srp.c",0x1d1);
              local_78 = CRYPTO_strdup("v","apps/srp.c",0x1d2);
              local_58 = CRYPTO_strdup(pcVar14,"apps/srp.c",0x1d3);
              if ((((local_60 != (char *)0x0) && (local_58 != (char *)0x0)) &&
                  ((local_78 != (char *)0x0 && ((local_70._0_8_ != 0 && (local_70._8_8_ != 0))))))
                 && ((local_c0 == (char *)0x0 ||
                     (local_50 = CRYPTO_strdup(local_c0,"apps/srp.c",0x1db), local_50 != (char *)0x0
                     )))) {
                value = (OPENSSL_STRING *)app_malloc(0x38,"row pointers");
                lVar10 = 0;
                do {
                  *(undefined8 *)((long)value + lVar10) = *(undefined8 *)(local_70 + lVar10 + -8);
                  lVar10 = lVar10 + 8;
                } while (lVar10 != 0x30);
                value[6] = (OPENSSL_STRING)0x0;
                iVar2 = TXT_DB_insert(*(TXT_DB **)(lVar6 + 8),value);
                if (iVar2 != 0) goto LAB_00100d76;
                BIO_printf(_bio_err,"failed to update srpvfile\n");
                BIO_printf(_bio_err,"TXT_DB error number %ld\n",
                           *(undefined8 *)(*(long *)(lVar6 + 8) + 0x20));
                CRYPTO_free(value);
              }
              CRYPTO_free(local_60);
              CRYPTO_free(local_58);
              CRYPTO_free(local_50);
              CRYPTO_free(local_78);
              CRYPTO_free((void *)local_70._0_8_);
              CRYPTO_free((void *)local_70._8_8_);
            }
LAB_00100a20:
            uVar12 = 1;
            goto LAB_00100a25;
          }
          if (iVar13 == 8) {
            BIO_printf(_bio_err,"user \"%s\" does not exist, operation ignored.\n",local_90);
            uVar16 = uVar16 + 1;
          }
          else if (iVar13 == 7) {
            BIO_printf(_bio_err,"user \"%s\" does not exist, operation ignored. t\n",local_90);
            uVar16 = uVar16 + 1;
          }
        }
      }
      else {
LAB_00100b52:
        print_user_part_0(lVar6,iVar2,1);
        if (!bVar15) goto LAB_00100b72;
        if (local_90 != (char *)0x0) goto LAB_00100b8d;
LAB_00100df9:
        BIO_printf(_bio_err,"List all users\n");
        for (iVar2 = 0; iVar3 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar6 + 8) + 8)),
            iVar2 < iVar3; iVar2 = iVar2 + 1) {
          print_user_part_0(lVar6,iVar2,1);
        }
      }
    }
LAB_00100b8d:
    local_90 = (char *)*local_a8;
    local_a8 = local_a8 + 1;
    bVar18 = true;
  } while (local_90 != (char *)0x0);
  uVar12 = (ulong)uVar1;
  if (iVar17 != 0) {
    BIO_printf(_bio_err,"User procession done.\n");
  }
  iVar13 = 0;
  if (uVar1 == 0) goto LAB_001011a0;
  for (; iVar2 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar6 + 8) + 8)), iVar13 < iVar2;
      iVar13 = iVar13 + 1) {
    puVar7 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar6 + 8) + 8),iVar13);
    if ((*(char *)*puVar7 == 'v') && (*(char *)*puVar7 = 'V', 0 < iVar17)) {
      print_user_part_0(lVar6,iVar13,iVar17);
    }
  }
  if (iVar17 != 0) {
    BIO_printf(_bio_err,"Trying to update srpvfile.\n");
    iVar13 = save_index(local_d8,&_LC51,lVar6);
    if (iVar13 != 0) {
      BIO_printf(_bio_err,"Temporary srpvfile created.\n");
      iVar13 = rotate_index(local_d8,&_LC51,&_LC53);
      if (iVar13 != 0) {
        BIO_printf(_bio_err,"srpvfile updated.\n");
        if (uVar16 == 0) {
          uVar12 = 0;
          goto LAB_001007bd;
        }
        goto LAB_00100a37;
      }
    }
    if (uVar16 != 0) goto LAB_00100a37;
    goto LAB_00100a4f;
  }
  iVar13 = save_index(local_d8,&_LC51,lVar6);
  if ((iVar13 != 0) && (iVar13 = rotate_index(local_d8,&_LC51,&_LC53), iVar13 != 0)) {
    if (uVar16 == 0) {
      uVar12 = 0;
    }
    goto LAB_001007c6;
  }
  CRYPTO_free(local_88);
  CRYPTO_free(local_80);
  goto LAB_00100908;
}


