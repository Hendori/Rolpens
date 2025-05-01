
int RAND_load_file(char *file,long max_bytes)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  size_t sVar4;
  int *piVar5;
  long in_FS_OFFSET;
  stat local_5d8;
  undefined1 local_548 [1288];
  long local_40;
  
  iVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (max_bytes != 0) {
    __stream = (FILE *)openssl_fopen(file,&_LC0);
    if (__stream == (FILE *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/rand/randfile.c",0x6b,"RAND_load_file");
      ERR_set_error(0x24,0x79,"Filename=%s",file);
    }
    else {
      iVar1 = fileno(__stream);
      iVar1 = fstat(iVar1,&local_5d8);
      if (-1 < iVar1) {
        if ((max_bytes < 0) && (max_bytes = 0x100, (local_5d8.st_mode & 0xf000) == 0x8000)) {
          max_bytes = local_5d8.st_size;
        }
        iVar1 = 0;
        setbuf(__stream,(char *)0x0);
        do {
          sVar4 = 0x500;
          if (0 < max_bytes) goto LAB_00100105;
LAB_00100118:
          sVar4 = fread(local_548,1,sVar4,__stream);
          iVar3 = (int)sVar4;
          iVar2 = ferror(__stream);
          if ((iVar2 == 0) || (piVar5 = __errno_location(), *piVar5 != 4)) {
            if (iVar3 != 0) goto LAB_001000d9;
            goto LAB_00100160;
          }
          clearerr(__stream);
          if (iVar3 != 0) goto LAB_001000d9;
        } while( true );
      }
      ERR_new();
      ERR_set_debug("crypto/rand/randfile.c",0x72,"RAND_load_file");
      ERR_set_error(0x24,0x71,"Filename=%s",file);
      fclose(__stream);
    }
LAB_001001bc:
    iVar1 = -1;
  }
LAB_00100035:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
LAB_001000d9:
  iVar1 = iVar1 + iVar3;
  RAND_add(local_548,iVar3,(double)iVar3);
  sVar4 = 0x500;
  if (0 < max_bytes) {
    max_bytes = max_bytes - iVar3;
    if (max_bytes < 1) {
LAB_00100160:
      OPENSSL_cleanse(local_548,0x500);
      fclose(__stream);
      iVar3 = RAND_status();
      if (iVar3 != 0) goto LAB_00100035;
      ERR_new();
      ERR_set_debug("crypto/rand/randfile.c",0xaf,"RAND_load_file");
      ERR_set_error(0x24,0x76,"Filename=%s",file);
      goto LAB_001001bc;
    }
LAB_00100105:
    sVar4 = 0x400;
    if (max_bytes < 0x501) {
      sVar4 = max_bytes;
    }
  }
  goto LAB_00100118;
}



int RAND_write_file(char *file)

{
  int iVar1;
  FILE *__s;
  size_t sVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  stat sStack_4c8;
  undefined1 local_438 [1032];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = stat(file,&sStack_4c8);
  if ((iVar1 < 0) || ((sStack_4c8.st_mode & 0xf000) == 0x8000)) {
    iVar1 = RAND_priv_bytes(local_438,0x400);
    if (iVar1 == 1) {
      iVar1 = open(file,0x41,0x180);
      if (iVar1 == -1) {
        __s = (FILE *)openssl_fopen(file);
        if (__s == (FILE *)0x0) {
          ERR_new();
          uVar3 = 0xf9;
          goto LAB_001003a1;
        }
      }
      else {
        __s = fdopen(iVar1,"wb");
        if (__s == (FILE *)0x0) {
          close(iVar1);
          ERR_new();
          uVar3 = 0xd9;
LAB_001003a1:
          ERR_set_debug("crypto/rand/randfile.c",uVar3,"RAND_write_file");
          ERR_set_error(0x24,0x79,"Filename=%s",file);
          goto LAB_001003d0;
        }
      }
      chmod(file,0x180);
      sVar2 = fwrite(local_438,1,0x400,__s);
      iVar1 = (int)sVar2;
      fclose(__s);
      OPENSSL_cleanse(local_438,0x400);
      goto LAB_00100354;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/rand/randfile.c",0xbf,"RAND_write_file");
    ERR_set_error(0x24,0x7a,"Filename=%s",file);
  }
LAB_001003d0:
  iVar1 = -1;
LAB_00100354:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * RAND_file_name(char *file,size_t num)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)ossl_safe_getenv("RANDFILE");
  if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
    pcVar1 = (char *)ossl_safe_getenv(&_LC5);
    if ((pcVar1 != (char *)0x0) && ((*pcVar1 != '\0' && (sVar2 = strlen(pcVar1), sVar2 + 6 < num))))
    {
      memcpy(file,pcVar1,sVar2);
      builtin_strncpy(file + sVar2,"/.rnd",6);
      return file;
    }
  }
  else {
    sVar2 = strlen(pcVar1);
    if (sVar2 + 1 < num) {
      memcpy(file,pcVar1,sVar2 + 1);
      return file;
    }
  }
  return (char *)0x0;
}


