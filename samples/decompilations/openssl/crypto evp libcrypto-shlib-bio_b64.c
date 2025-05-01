
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
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *outl;
  BIO *b;
  long lVar7;
  uint uVar8;
  int iVar9;
  uchar *in;
  uchar *puVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  uchar *puVar15;
  long in_FS_OFFSET;
  bool bVar17;
  int local_78;
  int local_44;
  long local_40;
  uchar *puVar16;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (void *)0x0) {
    outl = (int *)BIO_get_data();
    b = BIO_next(param_1);
    if ((outl != (int *)0x0) && (b != (BIO *)0x0)) {
      BIO_clear_flags(param_1,0xf);
      if (outl[4] == 2) {
        iVar5 = *outl;
      }
      else {
        outl[4] = 2;
        outl[0] = 0;
        outl[1] = 0;
        outl[2] = 0;
        EVP_DecodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
        iVar5 = *outl;
      }
      if (iVar5 < 1) {
        iVar5 = outl[6];
        local_78 = 0;
        if (iVar5 < 1) {
          local_78 = iVar5;
        }
        iVar14 = 0;
        if (0 < param_3) {
LAB_0010023b:
          puVar1 = (uchar *)((long)outl + 0x606);
LAB_00100294:
          if (0 < iVar5) {
            iVar4 = BIO_read(b,(void *)((long)outl + (long)outl[2] + 0x606),0x400 - outl[2]);
            if (0 < iVar4) {
              uVar8 = outl[2] + iVar4;
              outl[2] = uVar8;
              if (outl[5] != 0) goto LAB_00100423;
LAB_00100278:
              if ((0x3ff < (int)uVar8) || (iVar5 < 1)) goto LAB_00100300;
              goto LAB_00100290;
            }
            iVar5 = BIO_test_flags(b,8);
            uVar8 = outl[2];
            local_78 = iVar4;
            if (iVar5 == 0) {
              if (uVar8 == 0) {
                iVar5 = EVP_DecodeFinal(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)0x0,&local_44);
                local_78 = -1;
                if (-1 < iVar5) {
                  local_78 = iVar4;
                }
                EVP_DecodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
                outl[6] = local_78;
                uVar8 = outl[2];
                goto LAB_001002df;
              }
              outl[6] = iVar4;
            }
            else {
LAB_001002df:
              if (uVar8 == 0) goto LAB_00100373;
            }
            outl[2] = uVar8;
            if (outl[5] != 0) {
              iVar5 = 0;
LAB_00100423:
              uVar6 = BIO_test_flags(param_1,-1);
              if ((uVar6 & 0x100) != 0) {
                outl[2] = 0;
                goto LAB_00100300;
              }
              if (outl[5] == 0) goto LAB_00100278;
              local_44 = 0;
              if (0 < (int)uVar8) {
                in = puVar1;
                puVar16 = puVar1;
LAB_001004cb:
                puVar15 = puVar16 + 1;
                puVar10 = in;
                if (*puVar16 != '\n') goto LAB_001004f0;
                puVar10 = puVar15;
                if (outl[3] != 0) {
                  outl[3] = 0;
                  goto LAB_001004f0;
                }
                iVar4 = EVP_DecodeUpdate(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)(outl + 10),
                                         &local_44,in,(int)puVar15 - (int)in);
                EVP_DecodeInit(*(EVP_ENCODE_CTX **)(outl + 8));
                if ((iVar4 < 1) && (local_44 == 0)) goto LAB_001004f0;
                outl[5] = 0;
                if (puVar1 == in) goto LAB_001005d4;
                uVar8 = uVar8 - ((int)in - (int)puVar1);
                uVar13 = (ulong)uVar8;
                if ((int)uVar8 < 1) goto LAB_001005d4;
                if ((uVar8 - 1 < 7) || ((ulong)((long)puVar1 - (long)(in + 1)) < 0xf)) {
                  uVar12 = 0;
                  do {
                    *(uchar *)((long)outl + uVar12 + 0x606) = in[uVar12];
                    uVar12 = uVar12 + 1;
                  } while (uVar13 != uVar12);
                }
                else {
                  if (uVar8 - 1 < 0xf) {
                    uVar6 = 0;
                    goto LAB_001006a3;
                  }
                  lVar7 = 0;
                  do {
                    uVar3 = *(undefined8 *)(in + lVar7 + 8);
                    puVar2 = (undefined8 *)((long)outl + lVar7 + 0x606);
                    *puVar2 = *(undefined8 *)(in + lVar7);
                    puVar2[1] = uVar3;
                    lVar7 = lVar7 + 0x10;
                  } while (lVar7 != (ulong)(uVar8 >> 4) << 4);
                  uVar6 = uVar8 & 0xfffffff0;
                  if ((uVar8 & 0xf) != 0) {
                    uVar13 = (ulong)(uVar8 - uVar6);
                    if (6 < (uVar8 - uVar6) - 1) {
LAB_001006a3:
                      *(undefined8 *)((long)outl + (ulong)uVar6 + 0x606) =
                           *(undefined8 *)(in + uVar6);
                      uVar6 = uVar6 + ((uint)uVar13 & 0xfffffff8);
                      if ((uVar13 & 7) == 0) goto LAB_001005d4;
                    }
                    *(uchar *)((long)outl + (long)(int)uVar6 + 0x606) = in[(int)uVar6];
                    iVar5 = uVar6 + 1;
                    if (iVar5 < (int)uVar8) {
                      *(uchar *)((long)outl + (long)iVar5 + 0x606) = in[iVar5];
                      iVar5 = uVar6 + 2;
                      if (iVar5 < (int)uVar8) {
                        *(uchar *)((long)outl + (long)iVar5 + 0x606) = in[iVar5];
                        iVar5 = uVar6 + 3;
                        if (iVar5 < (int)uVar8) {
                          *(uchar *)((long)outl + (long)iVar5 + 0x606) = in[iVar5];
                          iVar5 = uVar6 + 4;
                          if (iVar5 < (int)uVar8) {
                            *(uchar *)((long)outl + (long)iVar5 + 0x606) = in[iVar5];
                            iVar5 = uVar6 + 5;
                            if (iVar5 < (int)uVar8) {
                              iVar4 = uVar6 + 6;
                              *(uchar *)((long)outl + (long)iVar5 + 0x606) = in[iVar5];
                              if (iVar4 < (int)uVar8) {
                                *(uchar *)((long)outl + (long)iVar4 + 0x606) = in[iVar4];
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_001005d4;
              }
              goto LAB_0010054c;
            }
            goto LAB_00100300;
          }
          goto LAB_00100373;
        }
        BIO_copy_next_retry(param_1);
        iVar14 = local_78;
      }
      else {
        iVar4 = outl[1];
        if (iVar5 < iVar4) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x8d);
        }
        iVar14 = iVar5 - iVar4;
        if (param_3 < iVar5 - iVar4) {
          iVar14 = param_3;
        }
        if (0x5dd < iVar4 + iVar14) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ctx->buf_off + i < (int)sizeof(ctx->buf)",
                      "crypto/evp/bio_b64.c",0x91);
        }
        memcpy(param_2,(void *)((long)outl + (long)iVar4 + 0x28),(long)iVar14);
        iVar5 = outl[1];
        param_3 = param_3 - iVar14;
        outl[1] = iVar5 + iVar14;
        if (iVar5 + iVar14 == *outl) {
          outl[0] = 0;
          outl[1] = 0;
        }
        iVar5 = outl[6];
        local_78 = 0;
        if (iVar5 < 1) {
          local_78 = iVar5;
        }
        param_2 = (void *)((long)param_2 + (long)iVar14);
        if (0 < param_3) goto LAB_0010023b;
LAB_00100373:
        BIO_copy_next_retry(param_1);
        if (iVar14 == 0) {
          iVar14 = local_78;
        }
      }
      goto LAB_00100393;
    }
  }
  iVar14 = 0;
LAB_00100393:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001004f0:
  in = puVar10;
  puVar16 = puVar15;
  if (puVar15 == (uchar *)((long)outl + (long)(int)uVar8 + 0x606)) goto code_r0x001004f5;
  goto LAB_001004cb;
code_r0x001004f5:
  if (outl[5] == 0) {
LAB_001005d4:
    outl[2] = 0;
LAB_00100300:
    iVar5 = EVP_DecodeUpdate(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)(outl + 10),outl,
                             (uchar *)((long)outl + 0x606),uVar8);
    outl[1] = 0;
    outl[2] = 0;
    outl[6] = iVar5;
    if (iVar5 < 0) {
      *outl = 0;
      local_78 = 0;
      if (outl[5] == 0) {
        local_78 = iVar5;
      }
      goto LAB_00100373;
    }
    iVar5 = *outl;
    if (param_3 <= *outl) {
      iVar5 = param_3;
    }
    iVar14 = iVar14 + iVar5;
    memcpy(param_2,outl + 10,(long)iVar5);
    outl[1] = iVar5;
    if (*outl == iVar5) {
      outl[0] = 0;
      outl[1] = 0;
    }
    param_3 = param_3 - iVar5;
    param_2 = (void *)((long)param_2 + (long)iVar5);
    if (param_3 < 1) goto LAB_00100373;
    goto LAB_00100290;
  }
  if (puVar10 == puVar1) {
    if (uVar8 == 0x400) {
      *(undefined8 *)(outl + 2) = _LC4;
    }
  }
  else if (puVar10 == puVar15) {
    outl[2] = 0;
  }
  else {
    uVar13 = (long)puVar15 - (long)puVar10;
    uVar8 = (uint)uVar13;
    if (0 < (int)uVar8) {
      uVar6 = uVar8 - 1;
      if ((uVar6 < 7) || ((ulong)((long)puVar1 - (long)(puVar10 + 1)) < 0xf)) {
        uVar13 = 0;
        do {
          *(uchar *)((long)outl + uVar13 + 0x606) = puVar10[uVar13];
          bVar17 = uVar6 != uVar13;
          uVar13 = uVar13 + 1;
        } while (bVar17);
      }
      else if (uVar6 < 0xf) {
        uVar12 = 0;
        uVar6 = 0;
        uVar11 = uVar8;
LAB_00100871:
        *(undefined8 *)((long)outl + uVar12 + 0x606) = *(undefined8 *)(puVar10 + uVar12);
        uVar6 = uVar6 + (uVar11 & 0xfffffff8);
        if ((uVar11 & 7) != 0) {
LAB_0010088d:
          *(uchar *)((long)outl + (long)(int)uVar6 + 0x606) = puVar10[(int)uVar6];
          iVar4 = uVar6 + 1;
          if (iVar4 < (int)uVar8) {
            *(uchar *)((long)outl + (long)iVar4 + 0x606) = puVar10[iVar4];
            iVar4 = uVar6 + 2;
            if (iVar4 < (int)uVar8) {
              *(uchar *)((long)outl + (long)iVar4 + 0x606) = puVar10[iVar4];
              iVar4 = uVar6 + 3;
              if (iVar4 < (int)uVar8) {
                *(uchar *)((long)outl + (long)iVar4 + 0x606) = puVar10[iVar4];
                iVar4 = uVar6 + 4;
                if (iVar4 < (int)uVar8) {
                  *(uchar *)((long)outl + (long)iVar4 + 0x606) = puVar10[iVar4];
                  iVar4 = uVar6 + 5;
                  if (iVar4 < (int)uVar8) {
                    iVar9 = uVar6 + 6;
                    *(uchar *)((long)outl + (long)iVar4 + 0x606) = puVar10[iVar4];
                    if (iVar9 < (int)uVar8) {
                      *(uchar *)((long)outl + (long)iVar9 + 0x606) = puVar10[iVar9];
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        lVar7 = 0;
        do {
          uVar3 = *(undefined8 *)(puVar10 + lVar7 + 8);
          puVar2 = (undefined8 *)((long)outl + lVar7 + 0x606);
          *puVar2 = *(undefined8 *)(puVar10 + lVar7);
          puVar2[1] = uVar3;
          lVar7 = lVar7 + 0x10;
        } while ((uVar13 >> 4 & 0xfffffff) << 4 != lVar7);
        uVar6 = uVar8 & 0xfffffff0;
        uVar12 = (ulong)uVar6;
        if ((uVar13 & 0xf) != 0) {
          uVar11 = uVar8 - uVar6;
          if (6 < (uVar8 - uVar6) - 1) goto LAB_00100871;
          goto LAB_0010088d;
        }
      }
    }
    outl[2] = uVar8;
  }
LAB_0010054c:
  if (iVar5 == 0) goto LAB_00100373;
LAB_00100290:
  iVar5 = outl[6];
  goto LAB_00100294;
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
LAB_00100c91:
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
            goto LAB_00100c91;
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
        iVar6 = 0;
        while (0 < iVar3) {
          iVar6 = BIO_write(b,(void *)((long)(iVar6 + 0x28) + (long)outl),iVar3);
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
      goto switchD_00100f21_caseD_3;
    case 10:
      if (*outl < outl[1]) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ctx->buf_len >= ctx->buf_off","crypto/evp/bio_b64.c",0x1d5);
      }
      iVar2 = *outl - outl[1];
      if (iVar2 != 0) {
LAB_00100fa5:
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
              if (iVar2 < 0) goto LAB_00100fa5;
            } while (*outl != outl[1]);
          }
          uVar3 = BIO_test_flags(param_1,-1);
          if ((uVar3 & 0x100) != 0) break;
          if ((outl[4] == 0) || (iVar2 = EVP_ENCODE_CTX_num(*(undefined8 *)(outl + 8)), iVar2 == 0))
          goto LAB_00101100;
          outl[1] = 0;
          EVP_EncodeFinal(*(EVP_ENCODE_CTX **)(outl + 8),(uchar *)(outl + 10),outl);
        }
        if (outl[2] == 0) break;
        iVar2 = EVP_EncodeBlock((uchar *)(outl + 10),(uchar *)((long)outl + 0x606),outl[2]);
        outl[1] = 0;
        outl[2] = 0;
        *outl = iVar2;
      }
LAB_00101100:
      iVar2 = 0xb;
LAB_00101022:
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
      if (iVar2 != 0) goto LAB_00100fa5;
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
      goto LAB_00101022;
    }
switchD_00100f21_caseD_3:
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


