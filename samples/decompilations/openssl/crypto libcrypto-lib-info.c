
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_info_strings_ossl_(void)

{
  char *pcVar1;
  size_t sVar2;
  
  BIO_snprintf(&ossl_cpu_info_str,0x100,
               "CPUINFO: OPENSSL_ia32cap=0x%.16llx:0x%.16llx:0x%.16llx:0x%.16llx:0x%.16llx",
               _OPENSSL_ia32cap_P,_BIO_snprintf,_getenv,_strlen,_OPENSSL_strlcat);
  pcVar1 = getenv("OPENSSL_ia32cap");
  if (pcVar1 != (char *)0x0) {
    sVar2 = strlen(&ossl_cpu_info_str);
    BIO_snprintf(&ossl_cpu_info_str + sVar2,0x100 - sVar2," env:%s",pcVar1);
  }
  if (seeds_0 != '\0') {
    OPENSSL_strlcat(&seeds_0,&_LC3,0x200);
  }
  OPENSSL_strlcat(&seeds_0,"os-specific",0x200);
  seed_sources = &seeds_0;
  return;
}



undefined2 * OPENSSL_info(undefined4 param_1)

{
  undefined2 *puVar1;
  
  CRYPTO_THREAD_run_once(&init_info,0x100000);
  switch(param_1) {
  case 0x3e9:
    puVar1 = (undefined2 *)ossl_get_openssldir();
    return puVar1;
  case 0x3ea:
    puVar1 = (undefined2 *)ossl_get_enginesdir();
    return puVar1;
  case 0x3eb:
    puVar1 = (undefined2 *)ossl_get_modulesdir();
    return puVar1;
  case 0x3ec:
    return (undefined2 *)&_LC5;
  case 0x3ed:
    return (undefined2 *)&_LC6;
  case 0x3ee:
    return &list_sep_1;
  case 0x3ef:
    return seed_sources;
  case 0x3f0:
    break;
  case 0x3f1:
    puVar1 = (undefined2 *)ossl_get_wininstallcontext();
    return puVar1;
  default:
    return (undefined2 *)0x0;
  }
  puVar1 = (undefined2 *)&DAT_001001c9;
  if (ossl_cpu_info_str == '\0') {
    puVar1 = (undefined2 *)0x0;
  }
  return puVar1;
}


