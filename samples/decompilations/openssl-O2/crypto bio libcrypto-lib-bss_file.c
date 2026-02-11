
undefined8 file_new(long param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 1;
}



undefined8 file_free(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if ((*(int *)(param_1 + 0x28) != 0) && (*(FILE **)(param_1 + 0x40) != (FILE *)0x0)) {
        fclose(*(FILE **)(param_1 + 0x40));
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    return 1;
  }
  return 0;
}



size_t file_gets(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  size_t sVar2;
  
  *param_2 = '\0';
  pcVar1 = fgets(param_2,param_3,*(FILE **)(param_1 + 0x40));
  sVar2 = 0;
  if ((pcVar1 != (char *)0x0) && (*param_2 != '\0')) {
    sVar2 = strlen(param_2);
  }
  return sVar2;
}



size_t file_read(long param_1,void *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (param_2 != (void *)0x0)) {
    sVar2 = fread(param_2,1,(long)param_3,*(FILE **)(param_1 + 0x40));
    if ((int)sVar2 != 0) {
      return sVar2;
    }
    iVar1 = ferror(*(FILE **)(param_1 + 0x40));
    if (iVar1 != 0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_file.c",0x94,"file_read");
      piVar3 = __errno_location();
      ERR_set_error(2,*piVar3,"calling fread()");
      ERR_new();
      ERR_set_debug("crypto/bio/bss_file.c",0x96,"file_read");
      ERR_set_error(0x20,0x80002,0);
      return 0xffffffff;
    }
  }
  return 0;
}



int file_write(long param_1,void *param_2,int param_3)

{
  size_t sVar1;
  
  if ((*(int *)(param_1 + 0x28) != 0) && (param_2 != (void *)0x0)) {
    sVar1 = fwrite(param_2,(long)param_3,1,*(FILE **)(param_1 + 0x40));
    if ((int)sVar1 != 0) {
      return param_3;
    }
    return 0;
  }
  return 0;
}



ulong file_puts(long param_1,char *param_2)

{
  size_t sVar1;
  size_t sVar2;
  
  sVar1 = strlen(param_2);
  if (*(int *)(param_1 + 0x28) != 0) {
    sVar2 = fwrite(param_2,(long)(int)sVar1,1,*(FILE **)(param_1 + 0x40));
    if ((int)sVar2 != 0) {
      return sVar1 & 0xffffffff;
    }
  }
  return 0;
}



long file_ctrl(BIO *param_1,int param_2,ulong param_3,bio_st *param_4)

{
  FILE *__stream;
  int iVar1;
  long lVar2;
  bio_st *pbVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined1 local_34 [4];
  long local_30;
  
  __stream = (FILE *)param_1->prev_bio;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)param_3;
  if (0xc < param_2) {
    switch(param_2) {
    case 0x6a:
      if (((*(int *)&param_1->field_0x2c != 0) && (param_1->num != 0)) && (__stream != (FILE *)0x0))
      {
        fclose(__stream);
        *(undefined4 *)&param_1->ptr = 0;
      }
      param_1->prev_bio = param_4;
      param_1->num = 1;
      *(uint *)&param_1->field_0x2c = uVar6 & 1;
      break;
    case 0x6b:
      if (param_4 != (bio_st *)0x0) {
        param_4->method = (BIO_METHOD *)__stream;
      }
      break;
    case 0x6c:
      if (*(int *)&param_1->field_0x2c != 0) {
        if ((param_1->num != 0) && (__stream != (FILE *)0x0)) {
          fclose(__stream);
          param_1->prev_bio = (bio_st *)0x0;
          *(undefined4 *)&param_1->ptr = 0;
        }
        param_1->num = 0;
      }
      *(uint *)&param_1->field_0x2c = uVar6 & 1;
      if ((param_3 & 8) == 0) {
        if ((~param_3 & 6) == 0) {
          OPENSSL_strlcpy(local_34,&_LC4,4);
        }
        else if ((param_3 & 4) == 0) {
          if ((param_3 & 2) == 0) {
            ERR_new();
            ERR_set_debug("crypto/bio/bss_file.c",0x111,"file_ctrl");
            ERR_set_error(0x20,0x65,0);
            lVar2 = 0;
            goto LAB_001002c8;
          }
          OPENSSL_strlcpy(local_34,&_LC6,4);
        }
        else {
          OPENSSL_strlcpy(local_34,&_LC5,4);
        }
      }
      else if ((param_3 & 2) == 0) {
        OPENSSL_strlcpy(local_34,&_LC3,4);
      }
      else {
        OPENSSL_strlcpy(local_34,&_LC2,4);
      }
      pbVar3 = (bio_st *)openssl_fopen(param_4);
      if (pbVar3 == (bio_st *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bss_file.c",0x120,"file_ctrl");
        piVar4 = __errno_location();
        ERR_set_error(2,*piVar4,"calling fopen(%s, %s)",param_4,local_34);
        ERR_new();
        uVar5 = 0x123;
LAB_001004c0:
        ERR_set_debug("crypto/bio/bss_file.c",uVar5,"file_ctrl");
        ERR_set_error(0x20,0x80002,0);
        goto switchD_0010027e_caseD_4;
      }
      param_1->prev_bio = pbVar3;
      param_1->num = 1;
      BIO_clear_flags(param_1,0);
      break;
    default:
switchD_0010027e_caseD_4:
      lVar2 = 0;
      goto LAB_001002c8;
    case 0x80:
switchD_0010027e_caseD_1:
      iVar1 = fseek(__stream,param_3,0);
      lVar2 = (long)iVar1;
      goto LAB_001002c8;
    case 0x85:
switchD_0010027e_caseD_3:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        lVar2 = ftell(__stream);
        return lVar2;
      }
      goto LAB_001005fc;
    }
    goto switchD_0010027e_caseD_c;
  }
  switch(param_2) {
  case 1:
    goto switchD_0010027e_caseD_1;
  case 2:
    iVar1 = feof(__stream);
    lVar2 = (long)iVar1;
    goto LAB_001002c8;
  case 3:
    goto switchD_0010027e_caseD_3;
  default:
    goto switchD_0010027e_caseD_4;
  case 8:
    lVar2 = (long)*(int *)&param_1->field_0x2c;
    goto LAB_001002c8;
  case 9:
    *(uint *)&param_1->field_0x2c = uVar6;
    break;
  case 0xb:
    iVar1 = fflush(__stream);
    if (iVar1 == -1) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_file.c",0x13d,"file_ctrl");
      piVar4 = __errno_location();
      ERR_set_error(2,*piVar4,"calling fflush()");
      ERR_new();
      uVar5 = 0x13f;
      goto LAB_001004c0;
    }
    break;
  case 0xc:
    break;
  }
switchD_0010027e_caseD_c:
  lVar2 = 1;
LAB_001002c8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
LAB_001005fc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_file(void)

{
  return (BIO_METHOD *)methods_filep;
}



BIO * BIO_new_file(char *filename,char *mode)

{
  FILE *__stream;
  char *pcVar1;
  BIO_METHOD *type;
  BIO *b;
  uint *puVar2;
  
  __stream = (FILE *)openssl_fopen();
  pcVar1 = strchr(mode,0x62);
  if (__stream == (FILE *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_file.c",0x43,"BIO_new_file");
    puVar2 = (uint *)__errno_location();
    ERR_set_error(2,*puVar2,"calling fopen(%s, %s)",filename,mode);
    if ((*puVar2 & 0xfffffffb) == 2) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_file.c",0x4b,"BIO_new_file");
      b = (BIO *)0x0;
      ERR_set_error(0x20,0x80,0);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_file.c",0x4d,"BIO_new_file");
      b = (BIO *)0x0;
      ERR_set_error(0x20,0x80002,0);
    }
  }
  else {
    type = BIO_s_file();
    b = BIO_new(type);
    if (b == (BIO *)0x0) {
      b = (BIO *)0x0;
      fclose(__stream);
    }
    else {
      BIO_clear_flags(b,0);
      BIO_ctrl(b,0x6a,(long)(int)((-(uint)(pcVar1 == (char *)0x0) & 0x10) + 1),__stream);
    }
  }
  return b;
}



BIO * BIO_new_fp(FILE *stream,int close_flag)

{
  BIO_METHOD *type;
  BIO *b;
  
  type = BIO_s_file();
  b = BIO_new(type);
  if (b != (BIO *)0x0) {
    BIO_set_flags(b,0);
    BIO_ctrl(b,0x6a,(long)close_flag,stream);
  }
  return b;
}


