
long b64_callback_ctrl(BIO *param_1,int param_2,fp *param_3)

{
  BIO *b;
  long lVar1;
  
  b = BIO_next(param_1);
  if (b != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(b,param_2,param_3);
    return lVar1;
  }
  return 0;
}



bool b64_free(long param_1)

{
  void *ptr;
  
  if (param_1 != 0) {
    ptr = (void *)BIO_get_data();
    if (ptr != (void *)0x0) {
      EVP_ENCODE_CTX_free(*(undefined8 *)((long)ptr + 0x20));
      CRYPTO_free(ptr);
      BIO_set_data(param_1,0);
      BIO_set_init(param_1,0);
    }
    return ptr != (void *)0x0;
  }
  return false;
}



undefined8 b64_new(undefined8 param_1)

{
  void *ptr;
  long lVar1;
  
  ptr = (void *)CRYPTO_zalloc(0xa08,"crypto/evp/bio_b64.c",0x46);
  if (ptr != (void *)0x0) {
    *(undefined8 *)((long)ptr + 0x14) = _LC1;
    lVar1 = EVP_ENCODE_CTX_new();
    *(long *)((long)ptr + 0x20) = lVar1;
    if (lVar1 != 0) {
      BIO_set_data(param_1,ptr);
      BIO_set_init(param_1,1);
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



int b64_read(BIO *param_1,void *param_2,int param_3)

{
  uchar *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *outl;
  BIO *b;
  ulong uVar5;
  uchar *puVar6;
  uint inl;
  uchar *in;
  uchar *puVar8;
  int iVar9;
  long in_FS_OFFSET;
  bool bVar10;
  int local_70;
  int local_44;
  long local_40;
  uchar *puVar7;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (void *)0x0) {
    outl = (int *)BIO_get_data(param_1);
    b = BIO_next(param_1);
    if ((outl != (int *)0x0) && (b != (BIO *)0x0)) {
      BIO_clear_flags(param_1,0xf);
      if (outl[4] == 2) {
        iVar3 = *outl;
        if (iVar3 < 1) goto LAB_001003d0;
LAB_001001c5:
        iVar2 = outl[1];
        if (iVar3 < iVar2) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x8d);
        }
        iVar9 = iVar3 - iVar2;
        if (param_3 < iVar3 - iVar2) {
          iVar9 = param_3;
        }
        if (0x5dd < iVar2 + iVar9) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ctx->buf_off + i < (int)sizeof(ctx->buf)",
                      "crypto/evp/bio_b64.c",0x91);
        }
        param_3 = param_3 - iVar9;
        memcpy(param_2,(void *)((long)outl + (long)iVar2 + 0x28),(long)iVar9);
        iVar3 = outl[1];
        outl[1] = iVar3 + iVar9;
        if (iVar3 + iVar9 == *outl) {
          outl[0] = 0;
          outl[1] = 0;
        }
        iVar3 = outl[6];
        local_70 = 0;
        if (iVar3 < 1) {
          local_70 = iVar3;
        }
        param_2 = (void *)((long)param_2 + (long)iVar9);
        if (0 < param_3) goto LAB_00100230;
      }
      else {
        outl[4] = 2;
        outl[0] = 0;
        outl[1] = 0;
        outl[2] = 0;
        EVP_DecodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
        iVar3 = *outl;
        if (0 < iVar3) goto LAB_001001c5;
LAB_001003d0:
        iVar3 = outl[6];
        local_70 = 0;
        if (iVar3 < 1) {
          local_70 = iVar3;
        }
        iVar9 = 0;
        if (param_3 < 1) {
          BIO_copy_next_retry(param_1);
          iVar9 = local_70;
          goto LAB_0010037b;
        }
LAB_00100230:
        puVar1 = (uchar *)((long)outl + 0x606);
        while (0 < iVar3) {
          iVar2 = BIO_read(b,(void *)((long)outl + (long)outl[2] + 0x606),0x400 - outl[2]);
          if (iVar2 < 1) {
            iVar3 = BIO_test_flags(b,8);
            inl = outl[2];
            local_70 = iVar2;
            if (iVar3 == 0) {
              if (inl == 0) {
                iVar3 = EVP_DecodeFinal(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)0x0,&local_44);
                local_70 = -1;
                if (-1 < iVar3) {
                  local_70 = iVar2;
                }
                EVP_DecodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
                outl[6] = local_70;
                inl = outl[2];
                goto LAB_001002d1;
              }
              outl[6] = iVar2;
            }
            else {
LAB_001002d1:
              if (inl == 0) break;
            }
            outl[2] = inl;
            if (outl[5] != 0) {
              iVar3 = 0;
LAB_00100403:
              uVar4 = BIO_test_flags(param_1,-1);
              if ((uVar4 & 0x100) == 0) {
                if (outl[5] == 0) goto LAB_00100268;
                local_44 = 0;
                if (0 < (int)inl) {
                  puVar7 = puVar1;
                  in = puVar1;
                  do {
                    puVar6 = puVar7 + 1;
                    puVar8 = in;
                    if (*puVar7 == '\n') {
                      puVar8 = puVar6;
                      if (outl[3] == 0) {
                        iVar2 = EVP_DecodeUpdate(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)(outl + 10)
                                                 ,&local_44,in,(int)puVar6 - (int)in);
                        EVP_DecodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
                        if ((0 < iVar2) || (local_44 != 0)) {
                          outl[5] = 0;
                          if (puVar1 != in) {
                            inl = inl - ((int)in - (int)puVar1);
                            uVar5 = 0;
                            if (0 < (int)inl) {
                              do {
                                *(uchar *)((long)outl + uVar5 + 0x606) = in[uVar5];
                                uVar5 = uVar5 + 1;
                              } while (uVar5 != inl);
                            }
                          }
                          goto LAB_0010059a;
                        }
                      }
                      else {
                        outl[3] = 0;
                      }
                    }
                    puVar7 = puVar6;
                    in = puVar8;
                  } while (puVar6 != (uchar *)((long)outl + (long)(int)inl + 0x606));
                  if (outl[5] == 0) {
LAB_0010059a:
                    outl[2] = 0;
                    goto LAB_001002f2;
                  }
                  if (puVar8 == puVar1) {
                    if (inl == 0x400) {
                      *(undefined8 *)(outl + 2) = _LC4;
                    }
                  }
                  else if (puVar8 == puVar6) {
                    outl[2] = 0;
                  }
                  else {
                    iVar2 = (int)puVar6 - (int)puVar8;
                    uVar5 = 0;
                    if (0 < iVar2) {
                      do {
                        *(uchar *)((long)outl + uVar5 + 0x606) = puVar8[uVar5];
                        bVar10 = iVar2 - 1 != uVar5;
                        uVar5 = uVar5 + 1;
                      } while (bVar10);
                    }
                    outl[2] = iVar2;
                  }
                }
                if (iVar3 != 0) goto LAB_00100280;
                break;
              }
              outl[2] = 0;
            }
LAB_001002f2:
            iVar3 = EVP_DecodeUpdate(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)(outl + 10),outl,
                                     (uchar *)((long)outl + 0x606),inl);
            outl[1] = 0;
            outl[2] = 0;
            outl[6] = iVar3;
            if (iVar3 < 0) {
              *outl = 0;
              local_70 = 0;
              if (outl[5] == 0) {
                local_70 = iVar3;
              }
              break;
            }
            iVar3 = *outl;
            if (param_3 <= *outl) {
              iVar3 = param_3;
            }
            iVar9 = iVar9 + iVar3;
            memcpy(param_2,outl + 10,(long)iVar3);
            outl[1] = iVar3;
            if (*outl == iVar3) {
              outl[0] = 0;
              outl[1] = 0;
            }
            param_3 = param_3 - iVar3;
            param_2 = (void *)((long)param_2 + (long)iVar3);
            if (param_3 < 1) break;
          }
          else {
            inl = outl[2] + iVar2;
            outl[2] = inl;
            if (outl[5] != 0) goto LAB_00100403;
LAB_00100268:
            if ((0x3ff < (int)inl) || (iVar3 < 1)) goto LAB_001002f2;
          }
LAB_00100280:
          iVar3 = outl[6];
        }
      }
      BIO_copy_next_retry(param_1);
      if (iVar9 == 0) {
        iVar9 = local_70;
      }
      goto LAB_0010037b;
    }
  }
  iVar9 = 0;
LAB_0010037b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}



int b64_write(BIO *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_EAX;
  int *outl;
  BIO *b;
  long lVar4;
  ulong uVar5;
  int iVar6;
  uint local_48;
  int local_44;
  
  outl = (int *)BIO_get_data();
  b = BIO_next(param_1);
  if ((outl != (int *)0x0) && (b != (BIO *)0x0)) {
    BIO_clear_flags(param_1,0xf);
    if (outl[4] != 1) {
      outl[4] = 1;
      outl[0] = 0;
      outl[1] = 0;
      outl[2] = 0;
      EVP_EncodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
    }
    iVar3 = outl[1];
    if (0x5dd < iVar3) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ctx->buf_off < (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c",
                  0x154);
    }
    iVar6 = *outl;
    if (0x5de < iVar6) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c",
                  0x155);
    }
    if (iVar6 < iVar3) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x156);
    }
    for (iVar6 = iVar6 - iVar3; iVar6 != 0; iVar6 = iVar6 - iVar1) {
      iVar1 = BIO_write(b,(void *)((long)(iVar3 + 0x28) + (long)outl),iVar6);
      if (iVar1 < 1) {
        BIO_copy_next_retry(param_1);
        return iVar1;
      }
      if (iVar6 < iVar1) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: i <= n","crypto/evp/bio_b64.c",0x15e);
      }
      iVar3 = outl[1] + iVar1;
      outl[1] = iVar3;
      if (0x5de < iVar3) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)","crypto/evp/bio_b64.c"
                    ,0x160);
      }
      if (*outl < iVar3) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x161);
      }
    }
    outl[0] = 0;
    outl[1] = 0;
    if ((param_2 != (uchar *)0x0) && (0 < (int)param_3)) {
      local_44 = 0;
      do {
        local_48 = 0x400;
        if ((int)param_3 < 0x401) {
          local_48 = param_3;
        }
        uVar2 = BIO_test_flags(param_1,-1);
        if ((uVar2 & 0x100) == 0) {
          EVP_EncodeUpdate(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)(outl + 10),outl,param_2,local_48
                          );
          if (extraout_EAX == 0) {
            if (local_44 != 0) {
              return local_44;
            }
            return -1;
          }
          iVar3 = *outl;
          if (0x5de < iVar3) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                        "crypto/evp/bio_b64.c",0x197);
          }
          if (iVar3 < outl[1]) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",
                        0x198);
          }
LAB_001009e1:
          lVar4 = (long)(int)local_48;
          local_44 = local_44 + local_48;
        }
        else {
          iVar3 = outl[2];
          if (iVar3 < 1) {
            if ((int)param_3 < 3) {
              if (local_48 != 0) {
                uVar2 = 0;
                do {
                  uVar5 = (ulong)uVar2;
                  uVar2 = uVar2 + 1;
                  *(uchar *)((long)outl + uVar5 + 0x606) = param_2[uVar5];
                } while (uVar2 < local_48);
              }
              outl[2] = local_48;
              return local_44 + local_48;
            }
            local_48 = (local_48 / 3) * 3;
            iVar3 = EVP_EncodeBlock((uchar *)(outl + 10),param_2,local_48);
            *outl = iVar3;
            if (0x5de < iVar3) {
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                          "crypto/evp/bio_b64.c",399);
            }
            if (iVar3 < outl[1]) {
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",
                          400);
            }
            goto LAB_001009e1;
          }
          if (3 < iVar3) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->tmp_len <= 3","crypto/evp/bio_b64.c",0x170);
          }
          local_48 = 3 - iVar3;
          lVar4 = (long)(int)local_48;
          if ((int)param_3 < (int)local_48) {
            local_48 = 1;
            lVar4 = 1;
          }
          if ((uint)lVar4 != 0) {
            uVar2 = 0;
            do {
              uVar5 = (ulong)uVar2;
              uVar2 = uVar2 + 1;
              *(uchar *)((long)outl + uVar5 + (long)iVar3 + 0x606) = param_2[uVar5];
            } while (uVar2 < (uint)lVar4);
            iVar3 = outl[2];
          }
          local_44 = local_44 + local_48;
          iVar3 = local_48 + iVar3;
          outl[2] = iVar3;
          if (iVar3 < 3) {
            return local_44;
          }
          iVar3 = EVP_EncodeBlock((uchar *)(outl + 10),(uchar *)((long)outl + 0x606),iVar3);
          *outl = iVar3;
          if (0x5de < iVar3) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)",
                        "crypto/evp/bio_b64.c",0x17e);
          }
          if (iVar3 < outl[1]) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",
                        0x17f);
          }
          outl[2] = 0;
        }
        outl[1] = 0;
        param_2 = param_2 + lVar4;
        while (0 < iVar3) {
          iVar6 = BIO_write(b,(void *)((long)outl + (long)outl[1] + 0x28),iVar3);
          if (iVar6 < 1) {
            BIO_copy_next_retry(param_1);
            if (local_44 != 0) {
              return local_44;
            }
            return iVar6;
          }
          if (iVar3 < iVar6) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: i <= n","crypto/evp/bio_b64.c",0x1a6);
          }
          iVar3 = iVar3 - iVar6;
          iVar6 = iVar6 + outl[1];
          outl[1] = iVar6;
          if (0x5de < iVar6) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)",
                        "crypto/evp/bio_b64.c",0x1a9);
          }
          if (*outl < iVar6) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",
                        0x1aa);
          }
        }
        outl[0] = 0;
        outl[1] = 0;
        param_3 = param_3 - local_48;
        if ((int)param_3 < 1) {
          return local_44;
        }
      } while( true );
    }
  }
  return 0;
}



long b64_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  int *outl;
  BIO *bp;
  long lVar4;
  
  outl = (int *)BIO_get_data();
  bp = BIO_next(param_1);
  uVar1 = _LC4;
  if ((outl == (int *)0x0) || (bp == (BIO *)0x0)) {
    return 0;
  }
  if (param_2 < 0xe) {
    switch(param_2) {
    case 1:
      outl[6] = 1;
      param_2 = 1;
      *(undefined8 *)(outl + 4) = uVar1;
      break;
    case 2:
      if (outl[6] < 1) {
        return 1;
      }
      param_2 = 2;
      break;
    default:
      goto switchD_00100c71_caseD_3;
    case 10:
      if (*outl < outl[1]) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x1d5);
      }
      iVar2 = *outl - outl[1];
      if (iVar2 != 0) {
LAB_00100cf5:
        return (long)iVar2;
      }
      param_2 = 10;
      break;
    case 0xb:
      while( true ) {
        while( true ) {
          if (*outl != outl[1]) {
            do {
              iVar2 = b64_write(param_1,0,0);
              if (iVar2 < 0) goto LAB_00100cf5;
            } while (*outl != outl[1]);
          }
          uVar3 = BIO_test_flags(param_1,-1);
          if ((uVar3 & 0x100) != 0) break;
          if ((outl[4] == 0) || (iVar2 = EVP_ENCODE_CTX_num(*(undefined8 *)(outl + 8)), iVar2 == 0))
          goto LAB_00100e50;
          outl[1] = 0;
          EVP_EncodeFinal(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)(outl + 10),outl);
        }
        if (outl[2] == 0) break;
        iVar2 = EVP_EncodeBlock((uchar *)(outl + 10),(uchar *)((long)outl + 0x606),outl[2]);
        outl[1] = 0;
        outl[2] = 0;
        *outl = iVar2;
      }
LAB_00100e50:
      iVar2 = 0xb;
LAB_00100d72:
      lVar4 = BIO_ctrl(bp,iVar2,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return lVar4;
    case 0xc:
      return 1;
    case 0xd:
      if (*outl < outl[1]) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x1cc);
      }
      iVar2 = *outl - outl[1];
      if (iVar2 != 0) goto LAB_00100cf5;
      if ((outl[4] != 0) && (iVar2 = EVP_ENCODE_CTX_num(*(undefined8 *)(outl + 8)), iVar2 != 0)) {
        return 1;
      }
      param_2 = 0xd;
    }
  }
  else {
    if (param_2 == 0x65) {
      BIO_clear_flags(param_1,0xf);
      iVar2 = 0x65;
      goto LAB_00100d72;
    }
switchD_00100c71_caseD_3:
  }
  lVar4 = BIO_ctrl(bp,param_2,param_3,param_4);
  return lVar4;
}



void b64_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  b64_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_base64(void)

{
  return (BIO_METHOD *)methods_b64;
}


