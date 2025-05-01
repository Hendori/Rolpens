
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(void)

{
  __fprintf_chk(_stderr,2,"Usage: %s [flags] pem-file\n",prog);
  fwrite("Flags, with the default being \'-wc\':\n",1,0x25,_stderr);
  fwrite("  -c #  Repeat count\n",1,0x15,_stderr);
  fwrite("  -d    Debugging output (minimal)\n",1,0x23,_stderr);
  fwrite("  -w<T> What to load T is a single character:\n",1,0x2e,_stderr);
  fwrite("          c for cert\n",1,0x15,_stderr);
  fwrite("          p for private key\n",1,0x1c,_stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



void main_cold(void)

{
  perror("gettimeofday");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(uint param_1,char **param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  void *__ptr;
  FILE *__stream;
  size_t sVar4;
  BIO *pBVar5;
  EVP_PKEY *pEVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char **ppcVar14;
  long in_FS_OFFSET;
  timeval local_218;
  timeval local_208;
  rusage local_1f8;
  rusage local_168;
  stat local_d8;
  long local_40;
  
  ppcVar14 = (char **)(ulong)param_1;
  bVar1 = false;
  uVar11 = 100;
  cVar8 = 'c';
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prog = *param_2;
LAB_00100350:
  iVar2 = getopt((int)ppcVar14,param_2,"c:dw:");
  if (iVar2 == -1) {
    ppcVar14 = param_2 + _optind;
    if (*ppcVar14 == (char *)0x0) goto LAB_0010038b;
    iVar2 = stat(*ppcVar14,&local_d8);
    if (iVar2 < 0) {
      perror(*ppcVar14);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    __ptr = CRYPTO_malloc((int)local_d8.st_size + 1,"test/timing_load_creds.c",0x92);
    if (__ptr == (void *)0x0) {
      perror("malloc");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    __stream = fopen(*ppcVar14,"r");
    sVar4 = fread(__ptr,1,CONCAT44(local_d8.st_size._4_4_,(int)local_d8.st_size),__stream);
    if (CONCAT44(local_d8.st_size._4_4_,(int)local_d8.st_size) != sVar4) {
      perror("fread");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    *(undefined1 *)((long)__ptr + CONCAT44(local_d8.st_size._4_4_,(int)local_d8.st_size)) = 0;
    fclose(__stream);
    if (bVar1) {
      __printf_chk(2,">%s<\n",__ptr);
    }
    if (cVar8 == 'c') {
      iVar2 = 10;
      do {
        local_168.ru_utime.tv_sec = 0;
        pBVar5 = BIO_new_mem_buf(__ptr,(int)local_d8.st_size);
        if ((pBVar5 == (BIO *)0x0) ||
           (PEM_read_bio_X509(pBVar5,(X509 **)&local_168,(undefined1 *)0x0,(void *)0x0),
           (X509 *)local_168.ru_utime.tv_sec == (X509 *)0x0)) goto LAB_001007ad;
        X509_free((X509 *)local_168.ru_utime.tv_sec);
        BIO_free(pBVar5);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    else if (cVar8 == 'p') {
      iVar2 = 10;
      do {
        pBVar5 = BIO_new_mem_buf(__ptr,(int)local_d8.st_size);
        if ((pBVar5 == (BIO *)0x0) ||
           (pEVar6 = PEM_read_bio_PrivateKey(pBVar5,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0),
           pEVar6 == (EVP_PKEY *)0x0)) goto LAB_001007ad;
        EVP_PKEY_free(pEVar6);
        BIO_free(pBVar5);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = gettimeofday(&local_218,(__timezone_ptr_t)0x0);
    if (iVar2 < 0) {
      perror("elapsed start");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar2 = getrusage(RUSAGE_SELF,&local_1f8);
    if (iVar2 < 0) {
      perror("start");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (0 < (int)uVar11) {
      if (cVar8 == 'c') {
        do {
          local_168.ru_utime.tv_sec = 0;
          pBVar5 = BIO_new_mem_buf(__ptr,(int)local_d8.st_size);
          if ((pBVar5 == (BIO *)0x0) ||
             (PEM_read_bio_X509(pBVar5,(X509 **)&local_168,(undefined1 *)0x0,(void *)0x0),
             (X509 *)local_168.ru_utime.tv_sec == (X509 *)0x0)) goto LAB_001007ad;
          X509_free((X509 *)local_168.ru_utime.tv_sec);
          BIO_free(pBVar5);
          uVar10 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar10;
        } while (uVar10 != 0);
      }
      else if (cVar8 == 'p') {
        do {
          pBVar5 = BIO_new_mem_buf(__ptr,(int)local_d8.st_size);
          if ((pBVar5 == (BIO *)0x0) ||
             (pEVar6 = PEM_read_bio_PrivateKey
                                 (pBVar5,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0),
             pEVar6 == (EVP_PKEY *)0x0)) {
LAB_001007ad:
            ERR_print_errors_fp(_stderr);
                    /* WARNING: Subroutine does not return */
            exit(1);
          }
          EVP_PKEY_free(pEVar6);
          BIO_free(pBVar5);
          uVar10 = (int)uVar11 - 1;
          uVar11 = (ulong)uVar10;
        } while (uVar10 != 0);
      }
    }
    iVar2 = getrusage(RUSAGE_SELF,&local_168);
    if (iVar2 < 0) {
      perror("getrusage");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    iVar2 = gettimeofday(&local_208,(__timezone_ptr_t)0x0);
    if (iVar2 < 0) {
      perror("gettimeofday");
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    uVar11 = local_168.ru_utime.tv_sec - local_1f8.ru_stime.tv_sec;
    uVar3 = local_168.ru_utime.tv_usec - local_1f8.ru_stime.tv_usec;
    if ((long)uVar3 < 0) {
      uVar11 = uVar11 - 1;
      uVar3 = uVar3 + 1000000;
    }
    lVar7 = local_168.ru_utime.tv_sec - local_1f8.ru_utime.tv_sec;
    lVar13 = local_168.ru_utime.tv_usec - local_1f8.ru_utime.tv_usec;
    if (lVar13 < 0) {
      lVar7 = lVar7 + -1;
      lVar13 = lVar13 + 1000000;
    }
    uVar12 = local_208.tv_sec - local_218.tv_sec;
    uVar9 = local_208.tv_usec - local_218.tv_usec;
    if ((long)uVar9 < 0) {
      uVar12 = uVar12 - 1;
      uVar9 = uVar9 + 1000000;
    }
    __printf_chk(2,"%s %d sec %d microsec\n","user     ",lVar7,lVar13);
    __printf_chk(2,"%s %d sec %d microsec\n","sys      ",uVar11 & 0xffffffff,uVar3 & 0xffffffff);
    if (bVar1) {
      __printf_chk(2,"%s %d sec %d microsec\n","elapsed??",uVar12 & 0xffffffff,uVar9 & 0xffffffff);
    }
    CRYPTO_free(__ptr);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return 0;
  }
  if (iVar2 == 100) goto LAB_00100390;
  if (iVar2 == 0x77) goto LAB_001003a0;
  if (iVar2 != 99) goto LAB_0010038b;
  uVar3 = strtol(_optarg,(char **)0x0,10);
  uVar11 = uVar3 & 0xffffffff;
  if (-1 < (int)uVar3) goto LAB_00100350;
LAB_0010038b:
  usage();
LAB_00100390:
  bVar1 = true;
  goto LAB_00100350;
LAB_001003a0:
  if ((_optarg[1] == '\0') && ((cVar8 = *_optarg, cVar8 == 'c' || (cVar8 == 'p'))))
  goto LAB_00100350;
  goto LAB_0010038b;
}


