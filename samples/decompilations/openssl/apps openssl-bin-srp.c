
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

void print_user_part_0(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  puVar3 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8));
  if (*(char *)*puVar3 != 'I') {
    if (-1 < param_2) {
      uVar6 = 0;
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8),param_2);
      BIO_printf(_bio_err,"%s \"%s\"\n","User entry",*(undefined8 *)(lVar4 + 0x18));
      do {
        lVar1 = uVar6 * 8;
        uVar5 = uVar6 & 0xffffffff;
        uVar6 = uVar6 + 1;
        BIO_printf(_bio_err,"  %d = \"%s\"\n",uVar5,*(undefined8 *)(lVar4 + lVar1));
      } while (uVar6 != 6);
    }
    iVar2 = get_index(param_1,puVar3[4],0x49);
    if (-1 < iVar2) {
      uVar6 = 0;
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 8) + 8),iVar2);
      BIO_printf(_bio_err,"%s \"%s\"\n","g N entry",*(undefined8 *)(lVar4 + 0x18));
      do {
        lVar1 = uVar6 * 8;
        uVar5 = uVar6 & 0xffffffff;
        uVar6 = uVar6 + 1;
        BIO_printf(_bio_err,"  %d = \"%s\"\n",uVar5,*(undefined8 *)(lVar4 + lVar1));
      } while (uVar6 != 6);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong srp_main(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  TXT_DB *db;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  OPENSSL_STRING *value;
  long lVar12;
  CONF *conf;
  ulong uVar13;
  int iVar14;
  char *pcVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined8 local_e8;
  int local_e0;
  char *local_d8;
  long local_d0;
  char *local_c8;
  char *local_c0;
  long *local_b0;
  long local_a0;
  char *local_98;
  void *local_88;
  void *local_80;
  char *local_78;
  undefined1 local_70 [16];
  char *local_60;
  char *local_58;
  char *local_50;
  long local_40;
  
  pcVar15 = (char *)0x0;
  uVar17 = 0;
  lVar12 = 0;
  lVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (void *)0x0;
  local_80 = (void *)0x0;
  uVar7 = opt_init(param_1,param_2,srp_options);
  local_e0 = -1;
  local_d8 = (char *)0x0;
  local_c0 = (char *)0x0;
  local_c8 = (char *)0x0;
  local_d0 = 0;
  local_e8 = 0;
switchD_001005ca_caseD_0:
  iVar3 = opt_next();
  if (iVar3 != 0) goto LAB_001005b1;
LAB_00100600:
  iVar4 = opt_num_rest();
  local_b0 = (long *)opt_rest();
  iVar5 = app_RAND_load();
  if (iVar5 == 0) goto LAB_001007ca;
  if ((local_d8 != (char *)0x0) && (lVar8 != 0)) {
    pcVar15 = "-srpvfile and -configfile cannot be specified together.\n";
LAB_00100ad3:
    BIO_printf(_bio_err,pcVar15);
    goto LAB_001007ca;
  }
  if (local_e0 == -1) {
    BIO_printf(_bio_err,
               "Exactly one of the options -add, -delete, -modify -list must be specified.\n");
    goto switchD_001005ca_caseD_ffffffff;
  }
  if (local_e0 - 6U < 3) {
    if (iVar4 == 0) {
      BIO_printf(_bio_err,"Need at least one user.\n");
      goto switchD_001005ca_caseD_ffffffff;
    }
    local_98 = (char *)*local_b0;
    local_b0 = local_b0 + 1;
  }
  else {
    local_98 = (char *)0x0;
  }
  if ((local_d0 != 0 || lVar12 != 0) && (iVar4 != 1)) {
    BIO_printf(_bio_err,"-passin, -passout arguments only valid with one user.\n");
    goto switchD_001005ca_caseD_ffffffff;
  }
  iVar4 = app_passwd(lVar12,local_d0,&local_88,&local_80);
  if (iVar4 == 0) {
    pcVar15 = "Error getting passwords\n";
    goto LAB_00100ad3;
  }
  if (local_d8 != (char *)0x0) {
    conf = (CONF *)0x0;
    if (uVar17 != 0) {
LAB_001012ac:
      BIO_printf(_bio_err,"Trying to read SRP verifier file \"%s\"\n",local_d8);
    }
LAB_001006b0:
    iVar14 = 0;
    iVar5 = -1;
    iVar4 = -1;
    lVar8 = load_index(local_d8,0);
    pcVar15 = "Problem with index file: %s (could not load/parse file)\n";
    if (lVar8 != 0) goto LAB_00100703;
    goto LAB_001015af;
  }
  if (lVar8 == 0) {
    lVar8 = _default_config_file;
  }
  conf = (CONF *)app_load_config_verbose(lVar8,uVar17);
  if (conf != (CONF *)0x0) {
    if ((_default_config_file == lVar8) || (iVar4 = app_load_modules(conf), iVar4 != 0)) {
      if (pcVar15 == (char *)0x0) {
        if (uVar17 == 0) {
          pcVar15 = NCONF_get_string(conf,"srp","default_srp");
          if (pcVar15 != (char *)0x0) {
            app_RAND_load_conf(conf,&_LC21);
            goto LAB_0010127a;
          }
        }
        else {
          BIO_printf(_bio_err,"trying to read default_srp in srp\n");
          pcVar15 = NCONF_get_string(conf,"srp","default_srp");
          if (pcVar15 != (char *)0x0) {
            app_RAND_load_conf(conf,&_LC21);
            goto LAB_00101755;
          }
        }
        uVar16 = 1;
        BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",&_LC21,"default_srp");
        lVar8 = 0;
        goto LAB_001007f7;
      }
      app_RAND_load_conf(conf,&_LC21);
      if (uVar17 == 0) {
LAB_0010127a:
        local_d8 = NCONF_get_string(conf,pcVar15,"srpvfile");
        if (local_d8 != (char *)0x0) goto LAB_001006b0;
      }
      else {
LAB_00101755:
        BIO_printf(_bio_err,"trying to read srpvfile in section \"%s\"\n",pcVar15);
        local_d8 = NCONF_get_string(conf,pcVar15,"srpvfile");
        if (local_d8 != (char *)0x0) goto LAB_001012ac;
      }
      BIO_printf(_bio_err,"variable lookup failed for %s::%s\n",pcVar15,"srpvfile");
    }
    lVar8 = 0;
    uVar16 = 1;
    goto LAB_001007f7;
  }
LAB_001007ca:
  uVar16 = 1;
  conf = (CONF *)0x0;
  lVar8 = 0;
LAB_001007f7:
  if (uVar17 != 0) {
LAB_00100a84:
    BIO_printf(_bio_err,"SRP terminating with code %d.\n",uVar16);
  }
LAB_00100800:
  CRYPTO_free(local_88);
  CRYPTO_free(local_80);
  if ((int)uVar16 == 0) goto LAB_0010082c;
LAB_00100938:
  uVar16 = 1;
  ERR_print_errors(_bio_err);
LAB_0010082c:
  NCONF_free(conf);
  free_index(lVar8);
  release_engine(local_e8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001005b1:
  while (0xe < iVar3) {
    if (0x5de < iVar3) {
      if ((3 < iVar3 - 0x641U) || (iVar3 = opt_provider(iVar3), iVar3 != 0))
      goto switchD_001005ca_caseD_0;
      goto LAB_001007ca;
    }
    if (iVar3 < 0x5dd) goto switchD_001005ca_caseD_0;
    iVar3 = opt_rand(iVar3);
    if (iVar3 == 0) goto LAB_001007ca;
    iVar3 = opt_next();
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_00100600;
    }
  }
  if (iVar3 < -1) goto switchD_001005ca_caseD_0;
  switch(iVar3) {
  default:
    goto switchD_001005ca_caseD_0;
  case 1:
    uVar16 = 0;
    conf = (CONF *)0x0;
    lVar8 = 0;
    opt_help(srp_options);
    goto LAB_001007f7;
  case 2:
    uVar17 = uVar17 + 1;
    goto switchD_001005ca_caseD_0;
  case 3:
    lVar8 = opt_arg();
    goto switchD_001005ca_caseD_0;
  case 4:
    pcVar15 = (char *)opt_arg();
    goto switchD_001005ca_caseD_0;
  case 5:
    local_d8 = (char *)opt_arg();
    goto switchD_001005ca_caseD_0;
  case 6:
  case 7:
  case 8:
  case 9:
    bVar18 = local_e0 == -1;
    local_e0 = iVar3;
    if (bVar18) goto switchD_001005ca_caseD_0;
    BIO_printf(_bio_err,"%s: Only one of -add/-delete/-modify/-list\n",uVar7);
    break;
  case 10:
    local_c8 = (char *)opt_arg();
    goto switchD_001005ca_caseD_0;
  case 0xb:
    local_c0 = (char *)opt_arg();
    goto switchD_001005ca_caseD_0;
  case 0xc:
    lVar12 = opt_arg();
    goto switchD_001005ca_caseD_0;
  case 0xd:
    local_d0 = opt_arg();
    goto switchD_001005ca_caseD_0;
  case 0xe:
    uVar10 = opt_arg();
    local_e8 = setup_engine_methods(uVar10,0xffffffff,0);
    goto switchD_001005ca_caseD_0;
  case -1:
    break;
  }
switchD_001005ca_caseD_ffffffff:
  BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar7);
  goto LAB_001007ca;
LAB_00100703:
  for (; iVar6 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar8 + 8) + 8)), iVar14 < iVar6;
      iVar14 = iVar14 + 1) {
    puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar14);
    if (*(char *)*puVar9 == 'I') {
      if (((iVar4 < 0) && (local_c8 != (char *)0x0)) &&
         (iVar5 = strcmp(local_c8,(char *)puVar9[3]), iVar5 == 0)) {
        iVar4 = iVar14;
      }
      iVar5 = iVar14;
      if (1 < (int)uVar17) {
        uVar16 = 0;
        lVar12 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar14);
        BIO_printf(_bio_err,"%s \"%s\"\n","g N entry",*(undefined8 *)(lVar12 + 0x18));
        do {
          lVar1 = uVar16 * 8;
          uVar13 = uVar16 & 0xffffffff;
          uVar16 = uVar16 + 1;
          BIO_printf(_bio_err,"  %d = \"%s\"\n",uVar13,*(undefined8 *)(lVar12 + lVar1));
        } while (uVar16 != 6);
      }
    }
  }
  if (uVar17 == 0) {
    if (iVar4 < 0) {
      if ((0 < iVar5) && (lVar12 = SRP_get_default_gN(local_c8), lVar12 == 0)) {
LAB_001015a3:
        pcVar15 = "No g and N value for index \"%s\"\n";
        local_d8 = local_c8;
LAB_001015af:
        uVar16 = 1;
        BIO_printf(_bio_err,pcVar15,local_d8);
        goto LAB_001007f7;
      }
      local_a0 = 0;
    }
    else {
      local_a0 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar4);
    }
  }
  else {
    BIO_printf(_bio_err,"Database initialised\n");
    if (iVar4 < 0) {
      if ((0 < iVar5) && (lVar12 = SRP_get_default_gN(local_c8), lVar12 == 0)) goto LAB_001015a3;
      BIO_printf(_bio_err,"Database has no g N information.\n");
      local_a0 = 0;
      if (1 < (int)uVar17) goto LAB_00101373;
    }
    else {
      local_a0 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar4);
      if (1 < (int)uVar17) {
        uVar16 = 0;
        lVar12 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar4);
        BIO_printf(_bio_err,"%s \"%s\"\n","Default g and N",*(undefined8 *)(lVar12 + 0x18));
        do {
          lVar1 = uVar16 * 8;
          uVar13 = uVar16 & 0xffffffff;
          uVar16 = uVar16 + 1;
          BIO_printf(_bio_err,"  %d = \"%s\"\n",uVar13,*(undefined8 *)(lVar12 + lVar1));
        } while (uVar16 != 6);
LAB_00101373:
        BIO_printf(_bio_err,"Starting user processing\n");
      }
    }
  }
  bVar19 = local_e0 == 9;
  bVar18 = false;
  bVar20 = local_98 != (char *)0x0;
  if (!bVar19 && !bVar20) {
    if (uVar17 != 0) {
      BIO_printf(_bio_err,"User procession done.\n");
    }
    local_d0._0_4_ = 0;
LAB_0010103d:
    uVar16 = (ulong)((uint)local_d0 != 0);
LAB_00100a5a:
    if ((uint)local_d0 == 0) goto LAB_001007f7;
    if (uVar17 == 0) goto LAB_00100800;
LAB_00100a6c:
    BIO_printf(_bio_err,"User errors %d.\n",(ulong)(uint)local_d0);
    goto LAB_00100a84;
  }
  local_d0._0_4_ = 0;
  bVar2 = bVar20;
  do {
    if (((int)uVar17 < 2) || (!bVar2)) {
      iVar4 = get_index(lVar8,local_98,0x55);
      if (iVar4 < 0) goto LAB_00100c30;
      if (0 < (int)uVar17 || bVar19) goto LAB_00100bb6;
LAB_00100bd2:
      if (local_e0 == 6) {
        puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar4);
        BIO_printf(_bio_err,"user \"%s\" reactivated.\n",local_98);
        *(undefined1 *)*puVar9 = 0x56;
LAB_00100dfb:
        bVar18 = true;
      }
      else if (local_e0 == 8) {
        plVar11 = (long *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar4);
        if (*(char *)*plVar11 != 'v') {
          if (*(char *)*plVar11 == 'V') {
            if (uVar17 != 0) {
              BIO_printf(_bio_err,"Verifying password for user \"%s\"\n",local_98);
            }
            iVar5 = get_index(lVar8,plVar11[4],0x49);
            if ((iVar5 < 0) ||
               (lVar12 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar4),
               lVar12 == 0)) {
              lVar12 = plVar11[4];
              uVar7 = 0;
            }
            else {
              uVar7 = *(undefined8 *)(lVar12 + 8);
              lVar12 = *(long *)(lVar12 + 0x10);
            }
            lVar12 = srp_verify_user(local_98,plVar11[1],plVar11[2],lVar12,uVar7,local_88,
                                     (ulong)uVar17);
            if (lVar12 == 0) {
              uVar16 = 1;
              BIO_printf(_bio_err,"Invalid password for user \"%s\", operation abandoned.\n",
                         local_98);
              local_d0._0_4_ = (uint)local_d0 + 1;
              goto LAB_00100a5a;
            }
          }
          if (uVar17 != 0) {
            BIO_printf(_bio_err,"Password for user \"%s\" ok.\n",local_98);
          }
          if (local_a0 == 0) {
            uVar7 = 0;
            uVar10 = 0;
          }
          else {
            uVar7 = *(undefined8 *)(local_a0 + 8);
            uVar10 = *(undefined8 *)(local_a0 + 0x10);
          }
          uVar13 = (ulong)uVar17;
          pcVar15 = (char *)srp_create_user(local_98,plVar11 + 1,plVar11 + 2,uVar10,uVar7,local_80);
          if (pcVar15 != (char *)0x0) {
            *(undefined1 *)*plVar11 = 0x76;
            pcVar15 = CRYPTO_strdup(pcVar15,"apps/srp.c",0x226);
            plVar11[4] = (long)pcVar15;
            if ((((plVar11[3] != 0) && (pcVar15 != (char *)0x0)) && (*plVar11 != 0)) &&
               ((plVar11[1] != 0 && (plVar11[2] != 0)))) {
              if (local_c0 != (char *)0x0) {
                pcVar15 = CRYPTO_strdup(local_c0,"apps/srp.c",0x22e);
                plVar11[5] = (long)pcVar15;
                if (pcVar15 == (char *)0x0) goto LAB_00100a55;
              }
              goto LAB_00100dfb;
            }
            goto LAB_00100a55;
          }
          uVar16 = 1;
          BIO_printf(_bio_err,"Cannot create srp verifier for user \"%s\", operation abandoned.\n",
                     local_98,uVar13);
          local_d0._0_4_ = (uint)local_d0 + 1;
          goto LAB_00100a5a;
        }
        BIO_printf(_bio_err,"user \"%s\" already updated, operation ignored.\n",local_98);
        local_d0._0_4_ = (uint)local_d0 + 1;
      }
      else if (local_e0 == 7) {
        puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar4);
        BIO_printf(_bio_err,"user \"%s\" revoked. t\n",local_98);
        *(undefined1 *)*puVar9 = 0x52;
        goto LAB_00100dfb;
      }
    }
    else {
      BIO_printf(_bio_err,"Processing user \"%s\"\n",local_98);
      iVar4 = get_index(lVar8,local_98,0x55);
      if (iVar4 < 0) {
LAB_00100c30:
        if (local_e0 == 9) {
          if (local_98 == (char *)0x0) goto LAB_00100e79;
          BIO_printf(_bio_err,"user \"%s\" does not exist, ignored. t\n",local_98);
          local_d0._0_4_ = (uint)local_d0 + 1;
        }
        else {
          if (local_e0 == 6) {
            local_50 = (char *)0x0;
            local_70 = (undefined1  [16])0x0;
            if (local_a0 == 0) {
              uVar7 = 0;
              pcVar15 = local_c8;
            }
            else {
              uVar7 = *(undefined8 *)(local_a0 + 8);
              pcVar15 = *(char **)(local_a0 + 0x10);
            }
            pcVar15 = (char *)srp_create_user(local_98,local_70,local_70 + 8,pcVar15,uVar7,local_80)
            ;
            if (pcVar15 == (char *)0x0) {
              BIO_printf(_bio_err,
                         "Cannot create srp verifier for user \"%s\", operation abandoned .\n",
                         local_98);
              local_d0._0_4_ = (uint)local_d0 + 1;
            }
            else {
              local_60 = CRYPTO_strdup(local_98,"apps/srp.c",0x1d1);
              local_78 = CRYPTO_strdup("v","apps/srp.c",0x1d2);
              local_58 = CRYPTO_strdup(pcVar15,"apps/srp.c",0x1d3);
              if (((((local_58 != (char *)0x0) && (local_60 != (char *)0x0)) &&
                   (local_78 != (char *)0x0)) && ((local_70._0_8_ != 0 && (local_70._8_8_ != 0))))
                 && ((local_c0 == (char *)0x0 ||
                     (local_50 = CRYPTO_strdup(local_c0,"apps/srp.c",0x1db), local_50 != (char *)0x0
                     )))) {
                value = (OPENSSL_STRING *)app_malloc(0x38,"row pointers");
                db = *(TXT_DB **)(lVar8 + 8);
                value[6] = (OPENSSL_STRING)0x0;
                *value = local_78;
                value[1] = (OPENSSL_STRING)local_70._0_8_;
                value[2] = (OPENSSL_STRING)local_70._8_8_;
                value[3] = local_60;
                value[4] = local_58;
                value[5] = local_50;
                iVar4 = TXT_DB_insert(db,value);
                if (iVar4 != 0) goto LAB_00100dfb;
                BIO_printf(_bio_err,"failed to update srpvfile\n");
                BIO_printf(_bio_err,"TXT_DB error number %ld\n",
                           *(undefined8 *)(*(long *)(lVar8 + 8) + 0x20));
                CRYPTO_free(value);
              }
              CRYPTO_free(local_60);
              CRYPTO_free(local_58);
              CRYPTO_free(local_50);
              CRYPTO_free(local_78);
              CRYPTO_free((void *)local_70._0_8_);
              CRYPTO_free((void *)local_70._8_8_);
            }
LAB_00100a55:
            uVar16 = 1;
            goto LAB_00100a5a;
          }
          if (local_e0 == 8) {
            BIO_printf(_bio_err,"user \"%s\" does not exist, operation ignored.\n",local_98);
            local_d0._0_4_ = (uint)local_d0 + 1;
          }
          else if (local_e0 == 7) {
            BIO_printf(_bio_err,"user \"%s\" does not exist, operation ignored. t\n",local_98);
            local_d0._0_4_ = (uint)local_d0 + 1;
          }
        }
      }
      else {
LAB_00100bb6:
        print_user_part_0(lVar8,iVar4);
        if (local_e0 != 9) goto LAB_00100bd2;
        if (local_98 != (char *)0x0) goto LAB_00100bf0;
LAB_00100e79:
        BIO_printf(_bio_err,"List all users\n");
        for (iVar4 = 0; iVar5 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar8 + 8) + 8)),
            iVar4 < iVar5; iVar4 = iVar4 + 1) {
          print_user_part_0(lVar8,iVar4);
        }
      }
    }
LAB_00100bf0:
    local_98 = (char *)*local_b0;
    local_b0 = local_b0 + 1;
    bVar2 = bVar19 || bVar20;
  } while (local_98 != (char *)0x0);
  if (uVar17 != 0) {
    BIO_printf(_bio_err,"User procession done.\n");
    if (!bVar18) goto LAB_0010103d;
    if ((int)uVar17 < 1) goto LAB_00100fd1;
    for (; iVar4 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar8 + 8) + 8)), iVar3 < iVar4;
        iVar3 = iVar3 + 1) {
      puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar3);
      if (*(char *)*puVar9 == 'v') {
        *(char *)*puVar9 = 'V';
        print_user_part_0(lVar8,iVar3);
      }
    }
LAB_00101493:
    BIO_printf(_bio_err,"Trying to update srpvfile.\n");
    iVar3 = save_index(local_d8,&_LC51,lVar8);
    if (iVar3 == 0) {
LAB_001017eb:
      if ((uint)local_d0 == 0) {
        uVar16 = 1;
        goto LAB_00100a84;
      }
    }
    else {
      BIO_printf(_bio_err,"Temporary srpvfile created.\n");
      iVar3 = rotate_index(local_d8,&_LC51,&_LC53);
      if (iVar3 == 0) goto LAB_001017eb;
      BIO_printf(_bio_err,"srpvfile updated.\n");
      if ((uint)local_d0 == 0) {
        uVar16 = 0;
        goto LAB_001007f7;
      }
    }
    uVar16 = 1;
    goto LAB_00100a6c;
  }
  if (!bVar18) goto LAB_0010103d;
LAB_00100fd1:
  for (; iVar4 = OPENSSL_sk_num(*(undefined8 *)(*(long *)(lVar8 + 8) + 8)), iVar3 < iVar4;
      iVar3 = iVar3 + 1) {
    puVar9 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(*(long *)(lVar8 + 8) + 8),iVar3);
    if (*(char *)*puVar9 == 'v') {
      *(char *)*puVar9 = 'V';
    }
  }
  if (uVar17 != 0) goto LAB_00101493;
  iVar3 = save_index(local_d8,&_LC51,lVar8);
  if ((iVar3 != 0) && (iVar3 = rotate_index(local_d8,&_LC51,&_LC53), iVar3 != 0)) goto LAB_0010103d;
  CRYPTO_free(local_88);
  CRYPTO_free(local_80);
  goto LAB_00100938;
}


