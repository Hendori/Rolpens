
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void readx509(void *param_1,int param_2)

{
  BIO *bp;
  long in_FS_OFFSET;
  X509 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (X509 *)0x0;
  bp = BIO_new_mem_buf(param_1,param_2);
  if (bp != (BIO *)0x0) {
    PEM_read_bio_X509(bp,&local_18,(undefined1 *)0x0,(void *)0x0);
    if (local_18 != (X509 *)0x0) {
      X509_free(local_18);
      BIO_free(bp);
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  ERR_print_errors_fp(_stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void readpkey(void *param_1,int param_2)

{
  BIO *bp;
  EVP_PKEY *pkey;
  
  bp = BIO_new_mem_buf(param_1,param_2);
  if (bp != (BIO *)0x0) {
    pkey = PEM_read_bio_PrivateKey(bp,(EVP_PKEY **)0x0,(undefined1 *)0x0,(void *)0x0);
    if (pkey != (EVP_PKEY *)0x0) {
      EVP_PKEY_free(pkey);
      BIO_free(bp);
      return;
    }
  }
  ERR_print_errors_fp(_stderr);
                    /* WARNING: Subroutine does not return */
  exit(1);
}



void print_timeval_isra_0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  __printf_chk(2,"%s %d sec %d microsec\n",param_1,param_2,param_3);
  return;
}



void main_cold(void)

{
  perror("elapsed start");
                    /* WARNING: Subroutine does not return */
  exit(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 main(int param_1,char **param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  void *__ptr;
  FILE *__stream;
  size_t sVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  timeval local_218;
  timeval local_208;
  rusage local_1f8;
  rusage local_168;
  stat local_d8;
  long local_40;
  
  bVar1 = false;
  uVar12 = 100;
  cVar7 = 'c';
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  prog = *param_2;
LAB_00100440:
  iVar2 = getopt(param_1,param_2,"c:dw:");
  if (iVar2 != -1) {
    if (iVar2 == 100) goto LAB_00100488;
    if (iVar2 == 0x77) goto LAB_00100490;
    if (iVar2 != 99) goto LAB_0010047c;
    uVar3 = strtol(_optarg,(char **)0x0,10);
    uVar12 = uVar3 & 0xffffffff;
    if (-1 < (int)uVar3) goto LAB_00100440;
    goto LAB_0010047c;
  }
  param_2 = param_2 + _optind;
  if (*param_2 == (char *)0x0) goto LAB_0010047c;
  iVar2 = stat(*param_2,&local_d8);
  if (iVar2 < 0) {
    perror(*param_2);
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  __ptr = CRYPTO_malloc((int)local_d8.st_size + 1,"test/timing_load_creds.c",0x92);
  if (__ptr == (void *)0x0) {
    perror("malloc");
                    /* WARNING: Subroutine does not return */
    exit(1);
  }
  __stream = fopen(*param_2,"r");
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
  iVar2 = 10;
  if (cVar7 == 'c') {
    do {
      readx509(__ptr);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  else {
    do {
      if (cVar7 == 'p') goto LAB_001006e0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
LAB_0010057e:
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
  if (0 < (int)uVar12) {
    if (cVar7 == 'c') {
      do {
        readx509(__ptr,(int)local_d8.st_size);
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar11;
      } while (uVar11 != 0);
    }
    else {
      do {
        if (cVar7 == 'p') goto LAB_00100720;
        uVar11 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar11;
      } while (uVar11 != 0);
    }
  }
LAB_001005c7:
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
  lVar13 = local_168.ru_utime.tv_sec - local_1f8.ru_stime.tv_sec;
  lVar5 = local_168.ru_utime.tv_usec - local_1f8.ru_stime.tv_usec;
  if (lVar5 < 0) {
    lVar13 = lVar13 + -1;
    lVar5 = lVar5 + 1000000;
  }
  lVar10 = local_168.ru_utime.tv_sec - local_1f8.ru_utime.tv_sec;
  lVar6 = local_168.ru_utime.tv_usec - local_1f8.ru_utime.tv_usec;
  if (lVar6 < 0) {
    lVar10 = lVar10 + -1;
    lVar6 = lVar6 + 1000000;
  }
  lVar9 = local_208.tv_sec - local_218.tv_sec;
  lVar8 = local_208.tv_usec - local_218.tv_usec;
  if (lVar8 < 0) {
    lVar9 = lVar9 + -1;
    lVar8 = lVar8 + 1000000;
  }
  print_timeval_isra_0("user     ",lVar10,lVar6);
  print_timeval_isra_0("sys      ",lVar13,lVar5);
  if (bVar1) {
    print_timeval_isra_0("elapsed??",lVar9,lVar8);
  }
  CRYPTO_free(__ptr);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
LAB_00100490:
  if ((_optarg[1] == '\0') && ((cVar7 = *_optarg, cVar7 == 'c' || (cVar7 == 'p'))))
  goto LAB_00100440;
LAB_0010047c:
  usage();
LAB_00100488:
  bVar1 = true;
  goto LAB_00100440;
LAB_001006e0:
  do {
    readpkey(__ptr);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  goto LAB_0010057e;
LAB_00100720:
  do {
    readpkey(__ptr,(int)local_d8.st_size);
    uVar11 = (int)uVar12 - 1;
    uVar12 = (ulong)uVar11;
  } while (uVar11 != 0);
  goto LAB_001005c7;
}


