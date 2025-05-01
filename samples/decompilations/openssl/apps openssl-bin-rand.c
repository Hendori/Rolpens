
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 rand_main(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ushort **ppuVar6;
  size_t sVar7;
  BIO *append;
  BIO *b;
  long lVar8;
  BIO_METHOD *type;
  sbyte sVar9;
  char cVar10;
  char *__s1;
  char *__s;
  ulong uVar11;
  int iVar12;
  int num;
  undefined4 uVar13;
  long in_FS_OFFSET;
  ulong local_68;
  ulong local_48;
  long local_40;
  
  uVar3 = 0;
  iVar12 = 2;
  uVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0xffffffffffffffff;
  uVar2 = opt_init(param_1,param_2,rand_options);
  do {
    while( true ) {
      while( true ) {
        iVar1 = opt_next();
        if (iVar1 == 0) {
          iVar1 = opt_num_rest();
          puVar5 = (undefined8 *)opt_rest();
          if (iVar1 != 1) {
            iVar1 = opt_check_rest_arg(0);
            if (iVar1 == 0) goto switchD_0010007f_caseD_ffffffff;
            local_68 = 0;
            goto LAB_00100358;
          }
          __s1 = (char *)*puVar5;
          iVar1 = strcmp(__s1,"max");
          if (iVar1 == 0) {
            local_68 = 0x1fffffffffffffff;
            goto LAB_00100358;
          }
          cVar10 = *__s1;
          if (cVar10 == '\0') goto LAB_00100487;
          ppuVar6 = __ctype_b_loc();
          iVar1 = 0;
          __s = __s1;
          goto LAB_00100254;
        }
        if (5 < iVar1) break;
        if (-2 < iVar1) {
          switch(iVar1) {
          case 1:
            uVar13 = 0;
            b = (BIO *)0x0;
            append = (BIO *)0x0;
            opt_help(rand_options);
            goto LAB_00100131;
          case 2:
            uVar3 = opt_arg();
            break;
          case 3:
            uVar4 = opt_arg();
            uVar4 = setup_engine_methods(uVar4,0xffffffff,0);
            break;
          case 4:
            iVar12 = 0x8003;
            break;
          case 5:
            iVar12 = 0x8001;
            break;
          case -1:
            goto switchD_0010007f_caseD_ffffffff;
          }
        }
      }
      if (0x5de < iVar1) break;
      if ((0x5dc < iVar1) && (iVar1 = opt_rand(), iVar1 == 0)) goto LAB_0010011a;
    }
  } while ((3 < iVar1 - 0x641U) || (iVar1 = opt_provider(), iVar1 != 0));
LAB_0010011a:
  b = (BIO *)0x0;
  append = (BIO *)0x0;
  goto LAB_0010011f;
  while( true ) {
    cVar10 = __s[1];
    __s = __s + 1;
    iVar1 = iVar1 + 1;
    if (cVar10 == '\0') break;
LAB_00100254:
    if ((*(byte *)((long)*ppuVar6 + (long)cVar10 * 2 + 1) & 8) == 0) {
      if (cVar10 == 'M') {
        uVar11 = 0xfffffffffff;
        sVar9 = 0x14;
LAB_0010028f:
        sVar7 = strlen(__s);
        if (sVar7 == 1) {
          __s1[iVar1] = '\0';
          __s1 = (char *)*puVar5;
          goto LAB_001002d0;
        }
      }
      else {
        if (cVar10 < 'N') {
          if (cVar10 == 'G') {
            uVar11 = 0x3ffffffff;
            sVar9 = 0x1e;
          }
          else {
            uVar11 = 0x3fffffffffffff;
            sVar9 = 10;
            if (cVar10 != 'K') goto LAB_001000de;
          }
          goto LAB_0010028f;
        }
        uVar11 = 0xffffff;
        sVar9 = 0x28;
        if (cVar10 == 'T') goto LAB_0010028f;
      }
LAB_001000de:
      BIO_printf(_bio_err,"Invalid size suffix %s\n",__s);
      goto switchD_0010007f_caseD_ffffffff;
    }
  }
LAB_00100487:
  sVar9 = 0;
  uVar11 = 0xffffffffffffffff;
LAB_001002d0:
  iVar1 = opt_long(__s1,&local_48);
  if ((iVar1 == 0) || ((long)local_48 < 1)) {
switchD_0010007f_caseD_ffffffff:
    BIO_printf(_bio_err,"%s: Use -help for summary.\n",uVar2);
    goto LAB_0010011a;
  }
  local_68 = local_48;
  if (sVar9 != 0) {
    if (uVar11 < local_48) {
      BIO_printf(_bio_err,"%lu bytes with suffix overflows\n");
    }
    else {
      local_68 = local_48 << sVar9;
      if (local_68 >> 0x3d == 0) goto LAB_00100358;
      BIO_printf(_bio_err,"Request exceeds max allowed output\n");
    }
    goto switchD_0010007f_caseD_ffffffff;
  }
LAB_00100358:
  iVar1 = app_RAND_load();
  if ((iVar1 == 0) || (append = (BIO *)bio_open_default(uVar3,0x77,iVar12), append == (BIO *)0x0))
  goto LAB_0010011a;
  if (iVar12 == 0x8003) {
    type = BIO_f_base64();
    b = BIO_new(type);
    if (b != (BIO *)0x0) {
      append = BIO_push(b,append);
      b = (BIO *)app_malloc(0x10000,"buffer for output file");
      if (local_68 != 0) goto LAB_001003b0;
      goto LAB_00100419;
    }
  }
  else {
    b = (BIO *)app_malloc(0x10000,"buffer for output file");
    for (; local_68 != 0; local_68 = local_68 - uVar11) {
LAB_001003b0:
      uVar11 = 0x10000;
      if (local_68 < 0x10001) {
        uVar11 = local_68;
      }
      num = (int)uVar11;
      iVar1 = RAND_bytes((uchar *)b,num);
      if (iVar1 < 1) goto LAB_0010011f;
      if (iVar12 == 0x8001) {
        lVar8 = 0;
        do {
          iVar1 = BIO_printf(append,"%02x",(ulong)*(byte *)((long)&b->method + lVar8));
          if (iVar1 != 2) goto LAB_0010011f;
          lVar8 = lVar8 + 1;
        } while ((int)lVar8 < num);
      }
      else {
        iVar1 = BIO_write(append,b,num);
        if (iVar1 != num) goto LAB_0010011f;
      }
    }
    if (iVar12 == 0x8001) {
      BIO_puts(append,"\n");
    }
LAB_00100419:
    lVar8 = BIO_ctrl(append,0xb,0,(void *)0x0);
    uVar13 = 0;
    if (0 < (int)lVar8) goto LAB_00100131;
  }
LAB_0010011f:
  uVar13 = 1;
  ERR_print_errors(_bio_err);
LAB_00100131:
  CRYPTO_free(b);
  release_engine(uVar4);
  BIO_free_all(append);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


