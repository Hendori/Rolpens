
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void app_RAND_load_conf(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char *file;
  
  file = (char *)app_conf_try_string(param_1,param_2,"RANDFILE");
  if (file != (char *)0x0) {
    iVar1 = RAND_load_file(file,-1);
    if (iVar1 < 0) {
      BIO_printf(_bio_err,"Can\'t load %s into RNG\n",file);
      ERR_print_errors(_bio_err);
    }
    if ((save_rand_file == (char *)0x0) &&
       (save_rand_file = CRYPTO_strdup(file,"apps/lib/app_rand.c",0x1f),
       save_rand_file == (char *)0x0)) {
      BIO_printf(_bio_err,"Can\'t duplicate %s\n",file);
      ERR_print_errors(_bio_err);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 app_RAND_load(void)

{
  bool bVar1;
  int iVar2;
  char *file;
  char cVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  iVar5 = 0;
  do {
    iVar2 = OPENSSL_sk_num(randfiles);
    if (iVar2 <= iVar5) {
      OPENSSL_sk_free(randfiles);
      return uVar6;
    }
    bVar1 = true;
    file = (char *)OPENSSL_sk_value(randfiles,iVar5);
    cVar3 = *file;
    do {
      pcVar4 = file;
      if ((cVar3 != ':') && (cVar3 != '\0')) {
        do {
          cVar3 = pcVar4[1];
          pcVar4 = pcVar4 + 1;
          if (cVar3 == '\0') break;
        } while (cVar3 != ':');
      }
      *pcVar4 = '\0';
      iVar2 = RAND_load_file(file,-1);
      if (iVar2 < 0) {
        BIO_printf(_bio_err,"Can\'t load %s into RNG\n",file);
        bVar1 = false;
        ERR_print_errors(_bio_err);
      }
      if (cVar3 == '\0') break;
      cVar3 = pcVar4[1];
      file = pcVar4 + 1;
    } while (cVar3 != '\0');
    if (!bVar1) {
      uVar6 = 0;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool app_RAND_write(void)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if (save_rand_file != (char *)0x0) {
    iVar1 = RAND_write_file(save_rand_file);
    if (iVar1 == -1) {
      BIO_printf(_bio_err,"Cannot write random bytes:\n");
      ERR_print_errors(_bio_err);
    }
    bVar2 = iVar1 != -1;
    CRYPTO_free(save_rand_file);
    save_rand_file = (char *)0x0;
  }
  return bVar2;
}



bool opt_rand(int param_1)

{
  int iVar1;
  char *str;
  undefined8 uVar2;
  bool bVar3;
  
  if (param_1 != 0x5dd) {
    bVar3 = true;
    if (param_1 == 0x5de) {
      CRYPTO_free(save_rand_file);
      str = (char *)opt_arg();
      save_rand_file = CRYPTO_strdup(str,"apps/lib/app_rand.c",0x75);
      bVar3 = save_rand_file != (char *)0x0;
    }
    return bVar3;
  }
  if (randfiles == 0) {
    randfiles = OPENSSL_sk_new_null();
    if (randfiles == 0) {
      return false;
    }
  }
  uVar2 = opt_arg();
  iVar1 = OPENSSL_sk_push(randfiles,uVar2);
  return iVar1 != 0;
}


