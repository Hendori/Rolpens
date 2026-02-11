
undefined8 OpenSSL_version_num(void)

{
  return 0x30500000;
}



undefined8 OPENSSL_version_major(void)

{
  return 3;
}



undefined8 OPENSSL_version_minor(void)

{
  return 5;
}



undefined8 OPENSSL_version_patch(void)

{
  return 0;
}



undefined * OPENSSL_version_pre_release(void)

{
  return &_LC0;
}



undefined * OPENSSL_version_build_metadata(void)

{
  return &_LC0;
}



char * OpenSSL_version(undefined4 param_1)

{
  long lVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0:
    return "OpenSSL 3.5.0 8 Apr 2025";
  case 1:
    return 
    "compiler: /usr/bin/gcc -fPIC -pthread -m64 -Wa,--noexecstack -Wall -O3 -fno-unroll-loops -DOPENSSL_USE_NODELETE -DL_ENDIAN -DOPENSSL_PIC -DOPENSSL_BUILDING_OPENSSL -DNDEBUG"
    ;
  case 2:
    return "built on: Tue Feb 10 06:10:50 2026 UTC";
  case 3:
    return "platform: linux-x86_64";
  case 4:
    return "OPENSSLDIR: \"/usr/local/ssl\"";
  case 5:
    return "ENGINESDIR: \"/usr/local/lib64/engines-3\"";
  case 6:
  case 7:
    return "3.5.0";
  case 8:
    return "MODULESDIR: \"/usr/local/lib64/ossl-modules\"";
  case 9:
    break;
  case 10:
    return "OSSL_WINCTX: Undefined";
  default:
    return "not available";
  }
  lVar1 = OPENSSL_info(0x3f0);
  pcVar2 = "CPUINFO: N/A";
  if (lVar1 != 0) {
    pcVar2 = &ossl_cpu_info_str;
  }
  return pcVar2;
}


