
uint sanitize_line(short *param_1,uint param_2,uint param_3,int param_4)

{
  char cVar1;
  long lVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  short *psVar11;
  long in_FS_OFFSET;
  
  uVar7 = (ulong)(int)param_2;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  psVar11 = param_1;
  if ((param_4 == 0) || ((int)param_2 < 4)) {
    if ((param_3 & 2) != 0) {
      if (-1 < (int)param_2) goto LAB_0010006a;
LAB_00100090:
      iVar5 = param_2 + 1;
      psVar11 = (short *)((long)iVar5 + (long)param_1);
LAB_0010009a:
      uVar8 = iVar5 + 1;
LAB_0010009e:
      lVar6 = (long)(int)uVar8;
      goto LAB_001000a1;
    }
    if ((param_3 & 4) != 0) {
      if ((int)param_2 < 1) goto LAB_001001ea;
      goto LAB_00100148;
    }
    if ((int)param_2 < 1) {
LAB_001001ea:
      lVar6 = 1;
      uVar8 = 1;
      goto LAB_001000a1;
    }
  }
  else {
    if ((*param_1 == -0x4411) && ((char)param_1[1] == -0x41)) {
      param_2 = param_2 - 3;
      memmove(param_1,(char *)((long)param_1 + 3),(long)(int)param_2);
      *(char *)((long)param_1 + (uVar7 - 3)) = '\0';
      if ((param_3 & 2) != 0) {
        uVar7 = (ulong)param_2;
LAB_0010006a:
        psVar3 = (short *)((long)(int)uVar7 + (long)param_1);
        do {
          psVar11 = psVar3;
          param_2 = (uint)uVar7;
          if (' ' < (char)*psVar11) goto LAB_00100090;
          uVar7 = (ulong)(param_2 - 1);
          psVar3 = (short *)((long)psVar11 + -1);
        } while (param_2 - 1 != 0xffffffff);
        iVar5 = 0;
        goto LAB_0010009a;
      }
      uVar7 = (ulong)(int)param_2;
    }
    else if ((param_3 & 2) != 0) goto LAB_0010006a;
    if ((param_3 & 4) != 0) {
LAB_00100148:
      uVar8 = 0;
      do {
        uVar9 = uVar8;
        iVar5 = ossl_ctype_check((int)(char)*psVar11,0x400);
        uVar8 = uVar9 + 1;
        if (((iVar5 == 0) || ((char)*psVar11 == '\r')) || ((char)*psVar11 == '\n'))
        goto LAB_0010009e;
        psVar11 = (short *)((long)psVar11 + 1);
      } while (param_2 != uVar8);
      lVar10 = (long)(int)uVar8;
      uVar8 = uVar9 + 2;
      lVar6 = (long)(int)uVar8;
      psVar11 = (short *)((long)param_1 + lVar10);
      goto LAB_001000a1;
    }
  }
  iVar4 = 0;
  do {
    iVar5 = iVar4;
    cVar1 = (char)*psVar11;
    if ((cVar1 == '\n') || (cVar1 == '\r')) goto LAB_0010009a;
    iVar4 = ossl_ctype_check((int)cVar1,0x40);
    if (iVar4 != 0) {
      *(char *)psVar11 = ' ';
    }
    psVar11 = (short *)((long)psVar11 + 1);
    iVar4 = iVar5 + 1;
  } while (iVar5 + 1 != (int)uVar7);
  uVar8 = iVar5 + 2;
  lVar6 = (long)(int)uVar8;
  psVar11 = (short *)((long)param_1 + uVar7);
LAB_001000a1:
  *(char *)psVar11 = '\n';
  *(char *)((long)param_1 + lVar6) = '\0';
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



int PEM_def_callback(char *buf,int num,int w,void *key)

{
  int iVar1;
  size_t sVar2;
  char *prompt;
  
  if (key == (void *)0x0) {
    prompt = EVP_get_pw_prompt();
    if (prompt == (char *)0x0) {
      prompt = "Enter PEM pass phrase:";
    }
    iVar1 = EVP_read_pw_string_min(buf,(uint)(w != 0) << 2,num,prompt,w);
    if (iVar1 == 0) {
      sVar2 = strlen(buf);
      return (int)sVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/pem/pem_lib.c",0x3e,"PEM_def_callback");
    ERR_set_error(9,0x6d,0);
    memset(buf,0,(ulong)(uint)num);
    num = -1;
  }
  else {
    sVar2 = strlen((char *)key);
    if ((int)sVar2 < num) {
      num = (int)sVar2;
    }
    memcpy(buf,key,(long)num);
  }
  return num;
}



void PEM_proc_type(char *buf,int type)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strlen(buf);
  pcVar2 = "MIC-ONLY";
  if (((type != 0x14) && (pcVar2 = "MIC-CLEAR", type != 0x1e)) && (pcVar2 = "ENCRYPTED", type != 10)
     ) {
    pcVar2 = "BAD-TYPE";
  }
  BIO_snprintf(buf + sVar1,0x400 - sVar1,"Proc-Type: 4,%s\n",pcVar2);
  return;
}



void PEM_dek_info(char *buf,char *type,int len,char *str)

{
  int iVar1;
  size_t sVar2;
  byte *pbVar3;
  char *buf_00;
  int iVar4;
  
  sVar2 = strlen(buf);
  iVar4 = 0x400 - (int)sVar2;
  iVar1 = BIO_snprintf(buf + sVar2,(long)iVar4,"DEK-Info: %s,",type);
  if (0 < iVar1) {
    iVar4 = iVar4 - iVar1;
    buf_00 = buf + sVar2 + iVar1;
    if (0 < len) {
      pbVar3 = (byte *)(str + len);
      do {
        iVar1 = BIO_snprintf(buf_00,(long)iVar4,"%02X",(ulong)(byte)*str);
        if (iVar1 < 1) {
          return;
        }
        iVar4 = iVar4 - iVar1;
        str = (char *)((byte *)str + 1);
        buf_00 = buf_00 + iVar1;
      } while ((byte *)str != pbVar3);
    }
    if (1 < iVar4) {
      buf_00[0] = '\n';
      buf_00[1] = '\0';
      return;
    }
  }
  return;
}



void * PEM_ASN1_read(undefined1 *d2i,char *name,FILE *fp,void **x,undefined1 *cb,void *u)

{
  BIO_METHOD *type;
  BIO *bp;
  void *pvVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    pvVar1 = (void *)0x0;
    ERR_set_debug("crypto/pem/pem_lib.c",0x74,"PEM_ASN1_read");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,fp);
    pvVar1 = PEM_ASN1_read_bio(d2i,name,bp,x,cb,u);
    BIO_free(bp);
  }
  return pvVar1;
}



int PEM_do_header(EVP_CIPHER_INFO *cipher,uchar *data,long *len,undefined1 *callback,void *u)

{
  int iVar1;
  EVP_MD *md;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  int local_48c;
  uchar local_488 [64];
  uchar local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48c = (int)*len;
  if (0x7fffffff < *len) {
    ERR_new();
    ERR_set_debug("crypto/pem/pem_lib.c",0x1c9,"PEM_do_header");
    ERR_set_error(9,0x80,0);
    goto LAB_00100592;
  }
  if (cipher->cipher == (EVP_CIPHER *)0x0) {
    iVar1 = 1;
    goto LAB_00100594;
  }
  if (callback == (undefined1 *)0x0) {
    iVar1 = PEM_def_callback((char *)local_448,0x400,0,u);
  }
  else {
    iVar1 = (*(code *)callback)();
  }
  if (iVar1 < 0) {
    ERR_new();
    ERR_set_debug("crypto/pem/pem_lib.c",0x1d5,"PEM_do_header");
    ERR_set_error(9,0x68,0);
  }
  else {
    md = EVP_md5();
    iVar1 = EVP_BytesToKey(cipher->cipher,md,cipher->iv,local_448,iVar1,1,local_488,(uchar *)0x0);
    if (iVar1 != 0) {
      ctx = EVP_CIPHER_CTX_new();
      if (ctx != (EVP_CIPHER_CTX *)0x0) {
        iVar1 = EVP_DecryptInit_ex(ctx,cipher->cipher,(ENGINE *)0x0,local_488,cipher->iv);
        if (iVar1 == 0) {
LAB_001005e9:
          ERR_new();
          ERR_set_debug("crypto/pem/pem_lib.c",0x1f0,"PEM_do_header");
          ERR_set_error(9,0x65,0);
          iVar1 = 0;
        }
        else {
          iVar1 = EVP_DecryptUpdate(ctx,data,&local_48c,data,local_48c);
          if (iVar1 == 0) goto LAB_001005e9;
          *len = (long)local_48c;
          iVar1 = EVP_DecryptFinal_ex(ctx,data + local_48c,&local_48c);
          if (iVar1 == 0) goto LAB_001005e9;
          *len = *len + (long)local_48c;
        }
        EVP_CIPHER_CTX_free(ctx);
        OPENSSL_cleanse(local_448,0x400);
        OPENSSL_cleanse(local_488,0x40);
        goto LAB_00100594;
      }
    }
  }
LAB_00100592:
  iVar1 = 0;
LAB_00100594:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PEM_get_EVP_CIPHER_INFO(char *header,EVP_CIPHER_INFO *cipher)

{
  uchar *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  EVP_CIPHER *pEVar6;
  char *pcVar7;
  char *__s;
  uint uVar8;
  long lVar9;
  
  cipher->cipher = (EVP_CIPHER *)0x0;
  cipher->iv[0] = '\0';
  cipher->iv[1] = '\0';
  cipher->iv[2] = '\0';
  cipher->iv[3] = '\0';
  cipher->iv[4] = '\0';
  cipher->iv[5] = '\0';
  cipher->iv[6] = '\0';
  cipher->iv[7] = '\0';
  cipher->iv[8] = '\0';
  cipher->iv[9] = '\0';
  cipher->iv[10] = '\0';
  cipher->iv[0xb] = '\0';
  cipher->iv[0xc] = '\0';
  cipher->iv[0xd] = '\0';
  cipher->iv[0xe] = '\0';
  cipher->iv[0xf] = '\0';
  if (header == (char *)0x0) {
    return 1;
  }
  if ((*header == '\0') || (*header == '\n')) {
LAB_001007c0:
    iVar3 = 1;
  }
  else {
    iVar3 = strncmp(header,"Proc-Type:",10);
    if (iVar3 != 0) {
      ERR_new();
      ERR_set_debug("crypto/pem/pem_lib.c",0x213,"PEM_get_EVP_CIPHER_INFO");
      ERR_set_error(9,0x6b,0);
      return 0;
    }
    sVar5 = strspn(header + 10," \t");
    pcVar7 = header + 10 + sVar5;
    if ((*pcVar7 != '4') || (pcVar7[1] != ',')) {
      return 0;
    }
    pcVar7 = pcVar7 + 2;
    sVar5 = strspn(pcVar7," \t");
    iVar3 = strncmp(pcVar7 + sVar5,"ENCRYPTED",9);
    if (iVar3 == 0) {
      pcVar7 = pcVar7 + sVar5 + 9;
      sVar5 = strspn(pcVar7," \t\r\n");
      if (sVar5 != 0) {
        sVar5 = strspn(pcVar7," \t\r");
        pcVar7 = pcVar7 + sVar5;
        if (*pcVar7 != '\n') {
          ERR_new();
          ERR_set_debug("crypto/pem/pem_lib.c",0x224,"PEM_get_EVP_CIPHER_INFO");
          ERR_set_error(9,0x70,0);
          return 0;
        }
        iVar3 = strncmp(pcVar7 + 1,"DEK-Info:",9);
        if (iVar3 != 0) {
          ERR_new();
          ERR_set_debug("crypto/pem/pem_lib.c",0x22d,"PEM_get_EVP_CIPHER_INFO");
          ERR_set_error(9,0x69,0);
          return 0;
        }
        sVar5 = strspn(pcVar7 + 10," \t");
        __s = pcVar7 + 10 + sVar5;
        sVar5 = strcspn(__s," \t,");
        pcVar7 = __s + sVar5;
        cVar2 = *pcVar7;
        *pcVar7 = '\0';
        pEVar6 = EVP_get_cipherbyname(__s);
        cipher->cipher = pEVar6;
        *pcVar7 = cVar2;
        sVar5 = strspn(pcVar7," \t");
        pcVar7 = pcVar7 + sVar5;
        if (pEVar6 == (EVP_CIPHER *)0x0) {
          ERR_new();
          ERR_set_debug("crypto/pem/pem_lib.c",0x23f,"PEM_get_EVP_CIPHER_INFO");
          ERR_set_error(9,0x72,0);
          return 0;
        }
        iVar3 = EVP_CIPHER_get_iv_length(pEVar6);
        if (iVar3 < 1) {
          if ((iVar3 == 0) && (*pcVar7 == ',')) {
            ERR_new();
            ERR_set_debug("crypto/pem/pem_lib.c",0x247,"PEM_get_EVP_CIPHER_INFO");
            ERR_set_error(9,0x82,0);
            return 0;
          }
        }
        else {
          if (*pcVar7 != ',') {
            ERR_new();
            ERR_set_debug("crypto/pem/pem_lib.c",0x244,"PEM_get_EVP_CIPHER_INFO");
            ERR_set_error(9,0x81,0);
            return 0;
          }
          pcVar7 = pcVar7 + 1;
        }
        uVar4 = EVP_CIPHER_get_iv_length(pEVar6);
        if (0 < (int)uVar4) {
          memset(cipher->iv,0,(ulong)uVar4);
          lVar9 = 0;
          do {
            iVar3 = OPENSSL_hexchar2int(pcVar7[lVar9]);
            if (iVar3 < 0) {
              ERR_new();
              ERR_set_debug("crypto/pem/pem_lib.c",0x25d,"load_iv");
              ERR_set_error(9,0x67,0);
              return 0;
            }
            uVar8 = (uint)lVar9;
            lVar9 = lVar9 + 1;
            puVar1 = cipher->iv + ((int)uVar8 >> 1);
            *puVar1 = *puVar1 | (byte)(iVar3 << ((byte)(~uVar8 << 2) & 4));
          } while ((int)lVar9 < (int)(uVar4 * 2));
        }
        goto LAB_001007c0;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/pem/pem_lib.c",0x21f,"PEM_get_EVP_CIPHER_INFO");
    ERR_set_error(9,0x6a,0);
    iVar3 = 0;
  }
  return iVar3;
}



int PEM_write_bio(BIO *bp,char *name,char *hdr,uchar *data,long len)

{
  int iVar1;
  int extraout_EAX;
  int iVar2;
  int iVar3;
  EVP_ENCODE_CTX *ctx;
  size_t sVar4;
  uchar *out;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  int *local_70;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
  if (ctx == (EVP_ENCODE_CTX *)0x0) {
    out = (uchar *)0x0;
    uVar5 = 0x80006;
  }
  else {
    EVP_EncodeInit(ctx);
    sVar4 = strlen(name);
    iVar1 = BIO_write(bp,"-----BEGIN ",0xb);
    if (iVar1 == 0xb) {
      iVar3 = (int)sVar4;
      iVar1 = BIO_write(bp,name,iVar3);
      if ((iVar1 == iVar3) && (iVar1 = BIO_write(bp,"-----\n",6), iVar1 == 6)) {
        if (hdr != (char *)0x0) {
          sVar4 = strlen(hdr);
          iVar1 = (int)sVar4;
          if ((0 < iVar1) &&
             ((iVar6 = BIO_write(bp,hdr,iVar1), iVar6 != iVar1 ||
              (iVar1 = BIO_write(bp,&_LC17,1), iVar1 != 1)))) goto LAB_00100ba1;
        }
        out = (uchar *)CRYPTO_malloc(0x2000,"crypto/pem/pem_lib.c",0x29a);
        if (out == (uchar *)0x0) {
          iVar1 = 0;
          goto LAB_00100bdb;
        }
        if (len < 1) {
          iVar1 = 0;
        }
        else {
          iVar6 = 0;
          iVar1 = 0;
          do {
            lVar7 = 0x1400;
            if (len < 0x1401) {
              lVar7 = len;
            }
            EVP_EncodeUpdate(ctx,out,&local_44,data + iVar6,(int)lVar7);
            if (extraout_EAX == 0) {
              uVar5 = 0x80006;
              goto LAB_00100bb0;
            }
            if ((local_44 != 0) && (iVar2 = BIO_write(bp,out,local_44), iVar2 != local_44))
            goto LAB_00100d44;
            len = len - lVar7;
            iVar1 = iVar1 + local_44;
            iVar6 = iVar6 + (int)lVar7;
          } while (0 < len);
        }
        local_70 = &local_44;
        EVP_EncodeFinal(ctx,out,local_70);
        if ((((local_44 < 1) || (iVar6 = BIO_write(bp,out,local_44), iVar6 == local_44)) &&
            (iVar6 = BIO_write(bp,"-----END ",9), iVar6 == 9)) &&
           ((iVar6 = BIO_write(bp,name,iVar3), iVar6 == iVar3 &&
            (iVar3 = BIO_write(bp,"-----\n",6), iVar3 == 6)))) {
          iVar1 = iVar1 + local_44;
          goto LAB_00100bdb;
        }
LAB_00100d44:
        uVar5 = 0x80020;
        goto LAB_00100bb0;
      }
    }
LAB_00100ba1:
    uVar5 = 0x80020;
    out = (uchar *)0x0;
  }
LAB_00100bb0:
  ERR_new();
  ERR_set_debug("crypto/pem/pem_lib.c",700,"PEM_write_bio");
  iVar1 = 0;
  ERR_set_error(9,uVar5,0);
LAB_00100bdb:
  EVP_ENCODE_CTX_free(ctx);
  CRYPTO_clear_free(out,0x2000,"crypto/pem/pem_lib.c",0x2be);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



bool PEM_ASN1_write_bio_internal
               (code *param_1,code *param_2,undefined8 param_3,char *param_4,BIO *param_5,
               undefined8 param_6,EVP_CIPHER *param_7,uchar *param_8,int param_9,code *param_10,
               void *param_11)

{
  int iVar1;
  char *__s;
  EVP_MD *md;
  EVP_CIPHER_CTX *ctx;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  long in_FS_OFFSET;
  uchar *local_4e8;
  long local_4e0;
  uchar *local_4d8;
  int local_4a8;
  int local_4a4;
  uchar *local_4a0;
  uchar local_498 [16];
  uchar local_488 [64];
  uchar local_448 [1032];
  long local_40;
  
  local_4d8 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4a8 = 0;
  local_4a4 = 0;
  if (param_7 == (EVP_CIPHER *)0x0) {
    __s = (char *)0x0;
LAB_00101003:
    if (param_2 == (code *)0x0 && param_1 == (code *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/pem/pem_lib.c",0x15d,"PEM_ASN1_write_bio_internal");
      uVar3 = 0x6d;
      uVar4 = 0xf;
      goto LAB_00100f5d;
    }
    if (param_1 == (code *)0x0) {
      iVar1 = (*param_2)(param_6,0,param_3);
    }
    else {
      iVar1 = (*param_1)(param_6,0);
    }
    if (0 < iVar1) {
      local_4e8 = (uchar *)CRYPTO_malloc(iVar1 + 0x20,"crypto/pem/pem_lib.c",0x168);
      local_4e0 = (long)iVar1;
      if (local_4e8 == (uchar *)0x0) {
        ctx = (EVP_CIPHER_CTX *)0x0;
        bVar5 = false;
        goto LAB_00100f8c;
      }
      local_4a0 = local_4e8;
      if (param_1 == (code *)0x0) {
        local_4a8 = (*param_2)(param_6,&local_4a0,param_3);
      }
      else {
        local_4a8 = (*param_1)(param_6);
      }
      if (param_7 == (EVP_CIPHER *)0x0) {
        local_448[0] = '\0';
        ctx = (EVP_CIPHER_CTX *)0x0;
LAB_001012c2:
        local_4a8 = PEM_write_bio(param_5,param_4,(char *)local_448,local_4e8,(long)local_4a8);
        bVar5 = 0 < local_4a8;
      }
      else {
        if (param_8 == (uchar *)0x0) {
          if (param_10 == (code *)0x0) {
            param_9 = PEM_def_callback((char *)local_448,0x400,1,param_11);
          }
          else {
            param_9 = (*param_10)();
          }
          local_4d8 = local_448;
          if (0 < param_9) goto LAB_00101094;
          ERR_new();
          ERR_set_debug("crypto/pem/pem_lib.c",0x175,"PEM_ASN1_write_bio_internal");
          ERR_set_error(9,0x6f,0);
        }
        else {
LAB_00101094:
          iVar1 = EVP_CIPHER_get_iv_length(param_7);
          iVar1 = RAND_bytes(local_498,iVar1);
          if (0 < iVar1) {
            md = EVP_md5();
            iVar1 = EVP_BytesToKey(param_7,md,local_498,local_4d8,param_9,1,local_488,(uchar *)0x0);
            if (iVar1 != 0) {
              if (local_4d8 == local_448) {
                OPENSSL_cleanse(local_448,0x400);
              }
              local_448[0] = '\0';
              PEM_proc_type((char *)local_448,10);
              iVar1 = EVP_CIPHER_get_iv_length(param_7);
              PEM_dek_info((char *)local_448,__s,iVar1,(char *)local_498);
              ctx = EVP_CIPHER_CTX_new();
              if (ctx != (EVP_CIPHER_CTX *)0x0) {
                iVar1 = EVP_EncryptInit_ex(ctx,param_7,(ENGINE *)0x0,local_488,local_498);
                if (((iVar1 == 0) ||
                    (iVar1 = EVP_EncryptUpdate(ctx,local_4e8,&local_4a4,local_4e8,local_4a8),
                    iVar1 == 0)) ||
                   (iVar1 = EVP_EncryptFinal_ex(ctx,local_4e8 + local_4a4,&local_4a8), iVar1 == 0))
                {
                  bVar5 = false;
                  goto LAB_00100f8c;
                }
                local_4a8 = local_4a4 + local_4a8;
                goto LAB_001012c2;
              }
            }
          }
        }
        bVar5 = false;
        ctx = (EVP_CIPHER_CTX *)0x0;
      }
      goto LAB_00100f8c;
    }
    ERR_new();
    ERR_set_debug("crypto/pem/pem_lib.c",0x163,"PEM_ASN1_write_bio_internal");
    ERR_set_error(9,0x8000d,0);
  }
  else {
    __s = (char *)EVP_CIPHER_get0_name(param_7);
    if (((__s != (char *)0x0) && (iVar1 = EVP_CIPHER_get_iv_length(param_7), iVar1 != 0)) &&
       (iVar1 = EVP_CIPHER_get_iv_length(param_7), iVar1 < 0x11)) {
      sVar2 = strlen(__s);
      iVar1 = EVP_CIPHER_get_iv_length(param_7);
      if (sVar2 + 0x24 + (long)(iVar1 * 2) < 0x401) goto LAB_00101003;
    }
    ERR_new();
    ERR_set_debug("crypto/pem/pem_lib.c",0x157,"PEM_ASN1_write_bio_internal");
    uVar3 = 0x71;
    uVar4 = 9;
LAB_00100f5d:
    ERR_set_error(uVar4,uVar3,0);
  }
  bVar5 = false;
  ctx = (EVP_CIPHER_CTX *)0x0;
  local_4e8 = (uchar *)0x0;
  local_4e0 = 0;
LAB_00100f8c:
  OPENSSL_cleanse(local_488,0x40);
  OPENSSL_cleanse(local_498,0x10);
  EVP_CIPHER_CTX_free(ctx);
  OPENSSL_cleanse(local_448,0x400);
  CRYPTO_clear_free(local_4e8,local_4e0,"crypto/pem/pem_lib.c",0x1a5);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int PEM_ASN1_write_bio(undefined1 *i2d,char *name,BIO *bp,void *x,EVP_CIPHER *enc,uchar *kstr,
                      int klen,undefined1 *cb,void *u)

{
  int iVar1;
  
  iVar1 = PEM_ASN1_write_bio_internal(i2d,0,0,name,bp,x,enc,kstr,klen,cb,u);
  return iVar1;
}



int PEM_ASN1_write(undefined1 *i2d,char *name,FILE *fp,void *x,EVP_CIPHER *enc,uchar *kstr,int klen,
                  undefined1 *callback,void *u)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pem/pem_lib.c",0x135,"PEM_ASN1_write");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = PEM_ASN1_write_bio(i2d,name,bp,x,enc,kstr,klen,callback,u);
    BIO_free(bp);
  }
  return iVar1;
}



void PEM_ASN1_write_bio_ctx
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,undefined8 param_10)

{
  PEM_ASN1_write_bio_internal
            (0,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}



int PEM_write(FILE *fp,char *name,char *hdr,uchar *data,long len)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pem/pem_lib.c",0x270,"PEM_write");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = PEM_write_bio(bp,name,hdr,data,len);
    BIO_free(bp);
  }
  return iVar1;
}



undefined4
PEM_read_bio_ex(BIO *param_1,undefined8 *param_2,long *param_3,long *param_4,long *param_5,
               uint param_6)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  BIO_METHOD *pBVar8;
  char *pcVar9;
  size_t __n;
  EVP_ENCODE_CTX *ctx;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  bool bVar18;
  BIO *local_a8;
  BIO *local_98;
  BIO *local_90;
  char *local_88;
  int local_50;
  int local_4c;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_5 = 0;
  uVar4 = param_6 & 1;
  *param_3 = 0;
  *param_2 = 0;
  *param_4 = 0;
  if ((~param_6 & 6) == 0) {
    ERR_new();
    uVar16 = 0;
    ctx = (EVP_ENCODE_CTX *)0x0;
    ERR_set_debug("crypto/pem/pem_lib.c",0x3c3,"PEM_read_bio_ex");
    ERR_set_error(9,0x80106,0);
    local_88 = (char *)0x0;
    local_a8 = (BIO *)0x0;
    local_90 = (BIO *)0x0;
  }
  else {
    if (uVar4 == 0) {
      pBVar8 = BIO_s_mem();
      local_90 = BIO_new(pBVar8);
      local_a8 = BIO_new(pBVar8);
      if ((local_90 != (BIO *)0x0) && (local_a8 != (BIO *)0x0)) {
        pcVar9 = (char *)CRYPTO_malloc(0x100,"crypto/pem/pem_lib.c",0x315);
        if (pcVar9 != (char *)0x0) {
LAB_001016a0:
          uVar14 = 1;
          uVar15 = param_6 & 0xfffffffb;
          while (iVar5 = BIO_gets(param_1,pcVar9,0xff), 0 < iVar5) {
            iVar5 = sanitize_line(pcVar9,iVar5,uVar15,uVar14);
            iVar6 = strncmp(pcVar9,"-----BEGIN ",0xb);
            if ((5 < iVar5) && (iVar6 == 0)) {
              iVar6 = strncmp(pcVar9 + (long)iVar5 + -6,"-----\n",6);
              if (iVar6 == 0) {
                iVar6 = iVar5 + -0x10;
                pcVar9[(long)iVar5 + -6] = '\0';
                if (uVar4 == 0) {
                  local_88 = (char *)CRYPTO_malloc(iVar6,"crypto/pem/pem_lib.c",0x32b);
                  if (local_88 == (char *)0x0) goto LAB_00101a68;
                  memcpy(local_88,pcVar9 + 0xb,(long)iVar6);
                  CRYPTO_free(pcVar9);
                  pcVar9 = (char *)CRYPTO_malloc(0x100,"crypto/pem/pem_lib.c",0x355);
                  if (pcVar9 == (char *)0x0) goto LAB_00101b49;
                }
                else {
                  local_88 = (char *)CRYPTO_secure_malloc();
                  if (local_88 == (char *)0x0) goto LAB_0010196b;
                  memcpy(local_88,pcVar9 + 0xb,(long)iVar6);
                  CRYPTO_secure_clear_free(pcVar9,0x100,"crypto/pem/pem_lib.c");
                  pcVar9 = (char *)CRYPTO_secure_malloc(0x100,"crypto/pem/pem_lib.c",0x355);
                  if (pcVar9 == (char *)0x0) goto LAB_00101bdb;
                }
                pcVar3 = local_88;
                iVar5 = 0;
                bVar18 = false;
                local_98 = local_90;
                bVar1 = false;
                goto LAB_00101855;
              }
            }
            uVar14 = 0;
          }
          ERR_new();
          ERR_set_debug("crypto/pem/pem_lib.c",0x31d,"get_name");
          ERR_set_error(9,0x6c,0);
          if (uVar4 != 0) {
LAB_0010196b:
            CRYPTO_secure_clear_free(pcVar9,0x100,"crypto/pem/pem_lib.c",0x332);
            goto LAB_00101981;
          }
LAB_00101a68:
          CRYPTO_free(pcVar9);
        }
        uVar16 = 0;
        EVP_ENCODE_CTX_free(0);
        local_88 = (char *)0x0;
        goto LAB_00101a49;
      }
    }
    else {
      pBVar8 = (BIO_METHOD *)BIO_s_secmem();
      local_90 = BIO_new(pBVar8);
      local_a8 = BIO_new(pBVar8);
      if ((local_90 != (BIO *)0x0) && (local_a8 != (BIO *)0x0)) {
        pcVar9 = (char *)CRYPTO_secure_malloc(0x100,"crypto/pem/pem_lib.c",0x315);
        if (pcVar9 != (char *)0x0) goto LAB_001016a0;
LAB_00101981:
        uVar16 = 0;
        EVP_ENCODE_CTX_free(0);
        local_88 = (char *)0x0;
        goto LAB_00101994;
      }
    }
    ERR_new();
    uVar16 = 0;
    ctx = (EVP_ENCODE_CTX *)0x0;
    ERR_set_debug("crypto/pem/pem_lib.c",0x3cb,"PEM_read_bio_ex");
    ERR_set_error(9,0x80020,0);
    local_88 = (char *)0x0;
  }
LAB_00101a35:
  EVP_ENCODE_CTX_free(ctx);
  if (uVar4 == 0) {
LAB_00101a49:
    CRYPTO_free(local_88);
    goto LAB_001019a9;
  }
  goto LAB_00101994;
LAB_00101855:
  iVar6 = BIO_gets(param_1,pcVar9,0xff);
  if (iVar6 < 1) {
    ERR_new();
    uVar14 = 0x35d;
LAB_00101b0e:
    ERR_set_debug("crypto/pem/pem_lib.c",uVar14,"get_header_and_data");
    ERR_set_error(9,0x66,0);
    if (uVar4 != 0) goto LAB_00101bc5;
    goto LAB_00101b38;
  }
  bVar17 = false;
  if (iVar6 == 0xfe) {
    bVar17 = pcVar9[0xfd] != '\n';
  }
  uVar13 = uVar15;
  if (iVar5 == 0) {
    pvVar11 = memchr(pcVar9,0x3a,(long)iVar6);
    if (pvVar11 == (void *)0x0) {
      iVar7 = strncmp(pcVar9,"-----END ",9);
      uVar13 = param_6;
      if (iVar7 == 0) {
        uVar13 = uVar15;
      }
    }
    else {
      iVar5 = 1;
    }
  }
  else {
    iVar7 = strncmp(pcVar9,"-----END ",9);
    if ((iVar7 != 0) && (uVar13 = param_6, iVar5 == 1)) {
      uVar13 = uVar15;
    }
  }
  iVar6 = sanitize_line(pcVar9,iVar6,uVar13,0);
  if (*pcVar9 == '\n') {
    bVar2 = !bVar1;
    bVar1 = bVar17;
    if (bVar2) {
      if (iVar5 == 2) {
        ERR_new();
        uVar14 = 0x37a;
        goto LAB_00101b0e;
      }
      local_98 = local_a8;
      iVar5 = 2;
    }
    goto LAB_00101855;
  }
  iVar7 = strncmp(pcVar9,"-----END ",9);
  if (iVar7 == 0) {
    __n = strlen(local_88);
    iVar6 = strncmp(pcVar9 + 9,local_88,__n);
    if ((iVar6 != 0) || (iVar6 = strncmp(pcVar9 + 9 + __n,"-----\n",6), iVar6 != 0)) {
      ERR_new();
      uVar14 = 0x389;
      goto LAB_00101b0e;
    }
    if (iVar5 == 0) {
      if (uVar4 == 0) {
        CRYPTO_free(pcVar9);
      }
      else {
        CRYPTO_secure_clear_free(pcVar9,0x100,"crypto/pem/pem_lib.c",0x3aa);
      }
      local_90 = local_a8;
      local_a8 = local_98;
    }
    else if (uVar4 == 0) {
      CRYPTO_free(pcVar9);
    }
    else {
      CRYPTO_secure_clear_free(pcVar9,0x100,"crypto/pem/pem_lib.c",0x3aa);
    }
    BIO_ctrl(local_a8,0x73,0,&local_48);
    local_50 = (int)*local_48;
    if (local_50 != 0) {
      ctx = (EVP_ENCODE_CTX *)EVP_ENCODE_CTX_new();
      if (ctx != (EVP_ENCODE_CTX *)0x0) {
        EVP_DecodeInit(ctx);
        iVar5 = EVP_DecodeUpdate(ctx,(uchar *)local_48[1],&local_50,(uchar *)local_48[1],local_50);
        if ((iVar5 < 0) ||
           (iVar5 = EVP_DecodeFinal(ctx,(uchar *)((long)local_50 + local_48[1]),&local_4c),
           iVar5 < 0)) {
          ERR_new();
          uVar16 = 0;
          ERR_set_debug("crypto/pem/pem_lib.c",0x3e6,"PEM_read_bio_ex");
          ERR_set_error(9,100,0);
          goto LAB_00101a35;
        }
        local_50 = local_4c + local_50;
        *local_48 = (long)local_50;
        lVar10 = BIO_ctrl(local_90,3,0,(void *)0x0);
        iVar5 = (int)lVar10;
        if (uVar4 == 0) {
          pvVar11 = CRYPTO_malloc(iVar5 + 1,"crypto/pem/pem_lib.c",0x3ed);
          *param_3 = (long)pvVar11;
          pvVar12 = CRYPTO_malloc(local_50,"crypto/pem/pem_lib.c",0x3ee);
          pvVar11 = (void *)*param_3;
          *param_4 = (long)pvVar12;
          if ((pvVar11 != (void *)0x0) && (pvVar12 != (void *)0x0)) goto LAB_00101e1c;
LAB_00101f7a:
          CRYPTO_free(pvVar11);
          *param_3 = 0;
          CRYPTO_free((void *)*param_4);
        }
        else {
          lVar10 = CRYPTO_secure_malloc();
          *param_3 = lVar10;
          lVar10 = CRYPTO_secure_malloc((long)local_50,"crypto/pem/pem_lib.c",0x3ee);
          pvVar11 = (void *)*param_3;
          *param_4 = lVar10;
          if ((pvVar11 != (void *)0x0) && (lVar10 != 0)) {
LAB_00101e1c:
            if (iVar5 == 0) {
LAB_00101e3a:
              *(undefined1 *)((long)pvVar11 + (long)iVar5) = 0;
              iVar5 = BIO_read(local_a8,(void *)*param_4,local_50);
              if (iVar5 == local_50) {
                uVar16 = 1;
                *param_5 = (long)iVar5;
                local_88 = (char *)0x0;
                *param_2 = pcVar3;
                goto LAB_00101a35;
              }
            }
            else {
              iVar6 = BIO_read(local_90,pvVar11,iVar5);
              if (iVar6 == iVar5) {
                pvVar11 = (void *)*param_3;
                goto LAB_00101e3a;
              }
            }
            pvVar11 = (void *)*param_3;
            if (uVar4 == 0) goto LAB_00101f7a;
          }
          CRYPTO_secure_clear_free(pvVar11,0,"crypto/pem/pem_lib.c",0x3fd);
          *param_3 = 0;
          CRYPTO_secure_clear_free(*param_4,0,"crypto/pem/pem_lib.c",0x3ff);
        }
        uVar16 = 0;
        *param_4 = 0;
        goto LAB_00101a35;
      }
      ERR_new();
      ERR_set_debug("crypto/pem/pem_lib.c",0x3dd,"PEM_read_bio_ex");
      ERR_set_error(9,0x80006,0);
    }
    uVar16 = 0;
    ctx = (EVP_ENCODE_CTX *)0x0;
    goto LAB_00101a35;
  }
  if (bVar18) {
    ERR_new();
    uVar14 = 0x393;
    goto LAB_00101b0e;
  }
  iVar7 = BIO_puts(local_98,pcVar9);
  if ((iVar7 < 0) || ((bVar1 = bVar17, iVar5 == 2 && (bVar18 = iVar6 != 0x41, 0x41 < iVar6))))
  goto LAB_00101bb4;
  goto LAB_00101855;
LAB_00101bb4:
  if (uVar4 == 0) {
LAB_00101b38:
    CRYPTO_free(pcVar9);
LAB_00101b49:
    uVar16 = 0;
    EVP_ENCODE_CTX_free(0);
    goto LAB_00101a49;
  }
LAB_00101bc5:
  CRYPTO_secure_clear_free(pcVar9,0x100,"crypto/pem/pem_lib.c",0x3aa);
LAB_00101bdb:
  uVar16 = 0;
  EVP_ENCODE_CTX_free(0);
LAB_00101994:
  CRYPTO_secure_clear_free(local_88,0,"crypto/pem/pem_lib.c",0x403);
LAB_001019a9:
  BIO_free(local_90);
  BIO_free(local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}



int PEM_read_bio(BIO *bp,char **name,char **header,uchar **data,long *len)

{
  int iVar1;
  
  iVar1 = PEM_read_bio_ex();
  return iVar1;
}



int PEM_read(FILE *fp,char **name,char **header,uchar **data,long *len)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("crypto/pem/pem_lib.c",0x2ca,"PEM_read");
    ERR_set_error(9,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = PEM_read_bio(bp,name,header,data,len);
    BIO_free(bp);
  }
  return iVar1;
}



int ossl_pem_check_suffix(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  char *__s1;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  iVar1 = 0;
  if ((int)sVar3 + 1 < (int)sVar2) {
    __s1 = param_1 + ((long)(int)sVar2 - (long)(int)sVar3);
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = 0;
    if (__s1[-1] == ' ') {
      iVar1 = ((int)__s1 + -1) - (int)param_1;
    }
  }
  return iVar1;
}



undefined8
pem_bytes_read_bio_flags
          (undefined8 *param_1,long *param_2,undefined8 *param_3,char *param_4,undefined8 param_5,
          undefined1 *param_6,void *param_7,uint param_8)

{
  char *str;
  int iVar1;
  int iVar2;
  EVP_PKEY_ASN1_METHOD *pEVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  uint uVar7;
  long in_FS_OFFSET;
  char *local_80;
  char *local_78;
  uchar *local_70;
  long local_68;
  ENGINE *local_60;
  EVP_CIPHER_INFO local_58;
  long local_40;
  
  uVar7 = param_8 & 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (char *)0x0;
  local_78 = (char *)0x0;
  local_70 = (uchar *)0x0;
  local_68 = 0;
  pcVar6 = (char *)0x0;
LAB_00102227:
  do {
    while( true ) {
      while( true ) {
        if (uVar7 == 0) {
          CRYPTO_free(pcVar6);
          CRYPTO_free(local_78);
          CRYPTO_free(local_70);
        }
        else {
          CRYPTO_secure_clear_free(pcVar6,0,"crypto/pem/pem_lib.c",0xfe);
          CRYPTO_secure_clear_free(local_78,0,"crypto/pem/pem_lib.c",0xff);
          CRYPTO_secure_clear_free(local_70,local_68,"crypto/pem/pem_lib.c",0x100);
        }
        iVar1 = PEM_read_bio_ex(param_5,&local_80,&local_78,&local_70,&local_68,param_8);
        str = local_80;
        if (iVar1 == 0) {
          uVar4 = ERR_peek_error();
          uVar7 = (uint)uVar4 & 0x7fffffff;
          if ((uVar4 & 0x80000000) == 0) {
            uVar7 = (uint)uVar4 & 0x7fffff;
          }
          if (uVar7 == 0x6c) {
            ERR_add_error_data(2,"Expecting: ",param_4);
          }
          goto LAB_00102350;
        }
        iVar1 = strcmp(local_80,param_4);
        if (iVar1 == 0) goto LAB_001022f0;
        iVar1 = strcmp(param_4,"ANY PRIVATE KEY");
        if (iVar1 != 0) break;
        iVar1 = strcmp(str,"ENCRYPTED PRIVATE KEY");
        if (((iVar1 == 0) || (iVar1 = strcmp(str,"PRIVATE KEY"), iVar1 == 0)) ||
           ((iVar1 = ossl_pem_check_suffix(), pcVar6 = local_80, 0 < iVar1 &&
            ((pEVar3 = EVP_PKEY_asn1_find_str((ENGINE **)0x0,str,iVar1), pcVar6 = local_80,
             pEVar3 != (EVP_PKEY_ASN1_METHOD *)0x0 && (*(long *)(pEVar3 + 0xb8) != 0))))))
        goto LAB_001022f0;
      }
      iVar1 = strcmp(param_4,"PARAMETERS");
      if (iVar1 != 0) break;
      iVar1 = ossl_pem_check_suffix(str);
      pcVar6 = local_80;
      if ((0 < iVar1) &&
         (pEVar3 = EVP_PKEY_asn1_find_str(&local_60,str,iVar1), pcVar6 = local_80,
         pEVar3 != (EVP_PKEY_ASN1_METHOD *)0x0)) {
        if (*(long *)(pEVar3 + 0x70) != 0) {
          ENGINE_finish(local_60);
          goto LAB_001022f0;
        }
        ENGINE_finish(local_60);
        pcVar6 = local_80;
      }
    }
    iVar1 = strcmp(str,"X9.42 DH PARAMETERS");
    if ((((iVar1 == 0) && (iVar1 = strcmp(param_4,"DH PARAMETERS"), iVar1 == 0)) ||
        ((iVar1 = strcmp(str,"X509 CERTIFICATE"), iVar1 == 0 &&
         (iVar2 = strcmp(param_4,"CERTIFICATE"), iVar2 == 0)))) ||
       ((iVar2 = strcmp(str,"NEW CERTIFICATE REQUEST"), iVar2 == 0 &&
        (iVar2 = strcmp(param_4,"CERTIFICATE REQUEST"), iVar2 == 0)))) break;
    iVar2 = strcmp(str,"CERTIFICATE");
    pcVar6 = str;
    if (iVar2 == 0) {
      iVar1 = strcmp(param_4,"TRUSTED CERTIFICATE");
      if ((iVar1 == 0) || (iVar1 = strcmp(param_4,"PKCS7"), iVar1 == 0)) break;
    }
    else {
      if (((iVar1 == 0) && (iVar1 = strcmp(param_4,"TRUSTED CERTIFICATE"), iVar1 == 0)) ||
         ((iVar1 = strcmp(str,"PKCS #7 SIGNED DATA"), iVar1 == 0 &&
          (iVar1 = strcmp(param_4,"PKCS7"), iVar1 == 0)))) break;
      iVar1 = strcmp(str,"PKCS7");
      if (iVar1 != 0) goto LAB_00102227;
    }
    iVar1 = strcmp(param_4,"CMS");
  } while (iVar1 != 0);
LAB_001022f0:
  iVar1 = PEM_get_EVP_CIPHER_INFO(local_78,&local_58);
  if (iVar1 == 0) {
    if (uVar7 != 0) goto LAB_00102689;
LAB_0010231b:
    CRYPTO_free(local_80);
    CRYPTO_free(local_78);
    CRYPTO_free(local_70);
  }
  else {
    iVar1 = PEM_do_header(&local_58,local_70,&local_68,param_6,param_7);
    if (iVar1 != 0) {
      *param_1 = local_70;
      *param_2 = local_68;
      if (param_3 == (undefined8 *)0x0) {
        if (uVar7 == 0) {
          CRYPTO_free(local_80);
          CRYPTO_free(local_78);
        }
        else {
          CRYPTO_secure_clear_free(local_80,0,"crypto/pem/pem_lib.c",0x116);
          CRYPTO_secure_clear_free(local_78,0,"crypto/pem/pem_lib.c",0x117);
        }
      }
      else {
        *param_3 = local_80;
        if (uVar7 == 0) {
          CRYPTO_free(local_78);
        }
        else {
          CRYPTO_secure_clear_free(local_78,0,"crypto/pem/pem_lib.c",0x117);
        }
      }
      uVar5 = 1;
      goto LAB_00102352;
    }
    if (uVar7 == 0) goto LAB_0010231b;
LAB_00102689:
    CRYPTO_secure_clear_free(local_80,0,"crypto/pem/pem_lib.c",0x116);
    CRYPTO_secure_clear_free(local_78,0,"crypto/pem/pem_lib.c",0x117);
    CRYPTO_secure_clear_free(local_70,local_68,"crypto/pem/pem_lib.c",0x119);
  }
LAB_00102350:
  uVar5 = 0;
LAB_00102352:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int PEM_bytes_read_bio(uchar **pdata,long *plen,char **pnm,char *name,BIO *bp,undefined1 *cb,void *u
                      )

{
  int iVar1;
  
  iVar1 = pem_bytes_read_bio_flags();
  return iVar1;
}



void PEM_bytes_read_bio_secmem(void)

{
  pem_bytes_read_bio_flags();
  return;
}


