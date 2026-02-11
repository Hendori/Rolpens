
long enc_callback_ctrl(BIO *param_1,int param_2,fp *param_3)

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



bool enc_free(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = BIO_get_data();
    if (lVar1 != 0) {
      EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(lVar1 + 0x18));
      CRYPTO_clear_free(lVar1,0x1150,"crypto/evp/bio_enc.c",0x61);
      BIO_set_data(param_1,0);
      BIO_set_init(param_1,0);
    }
    return lVar1 != 0;
  }
  return false;
}



undefined8 enc_new(undefined8 param_1)

{
  void *ptr;
  EVP_CIPHER_CTX *pEVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x1150,"crypto/evp/bio_enc.c",0x44);
  if (ptr != (void *)0x0) {
    pEVar1 = EVP_CIPHER_CTX_new();
    *(EVP_CIPHER_CTX **)((long)ptr + 0x18) = pEVar1;
    if (pEVar1 != (EVP_CIPHER_CTX *)0x0) {
      *(undefined4 *)((long)ptr + 8) = 1;
      *(undefined4 *)((long)ptr + 0x10) = 1;
      *(long *)((long)ptr + 0x20) = (long)ptr + 0x150;
      *(long *)((long)ptr + 0x28) = (long)ptr + 0x150;
      BIO_set_data(param_1,ptr);
      BIO_set_init(param_1,1);
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



ulong enc_read(BIO *param_1,uchar *param_2,int param_3)

{
  int *out;
  int *data;
  int iVar1;
  uint inl;
  int iVar2;
  int iVar3;
  int *outl;
  BIO *b;
  uchar *puVar4;
  EVP_CIPHER_CTX *ctx;
  uint inl_00;
  uint uVar5;
  size_t __n;
  long in_FS_OFFSET;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (uchar *)0x0) {
    outl = (int *)BIO_get_data();
    b = BIO_next(param_1);
    if ((outl != (int *)0x0) && (b != (BIO *)0x0)) {
      __n = 0;
      if (0 < *outl) {
        iVar1 = *outl - outl[1];
        if (param_3 < iVar1) {
          iVar1 = param_3;
        }
        __n = (size_t)iVar1;
        memcpy(param_2,(void *)((long)outl + (long)outl[1] + 0x30),__n);
        iVar2 = outl[1];
        outl[1] = iVar2 + iVar1;
        if (iVar2 + iVar1 == *outl) {
          outl[0] = 0;
          outl[1] = 0;
        }
        param_2 = param_2 + __n;
        param_3 = param_3 - iVar1;
      }
      iVar1 = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)(outl + 6));
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          iVar1 = 0;
        }
        if (0 < param_3) {
          out = outl + 0xc;
          data = outl + 0x54;
          do {
            if (outl[2] < 1) break;
            puVar4 = *(uchar **)(outl + 8);
            if (puVar4 == *(uchar **)(outl + 10)) {
              *(int **)(outl + 8) = data;
              *(int **)(outl + 10) = data;
              inl = BIO_read(b,data,0x1000);
              if ((int)inl < 1) goto LAB_0010031c;
              puVar4 = *(uchar **)(outl + 8);
              *(long *)(outl + 10) = *(long *)(outl + 10) + (long)(int)inl;
LAB_00100220:
              ctx = *(EVP_CIPHER_CTX **)(outl + 6);
              if (param_3 < 0x101) {
LAB_00100280:
                if (0x100 < (int)inl) {
                  inl = 0x100;
                }
                iVar2 = EVP_CipherUpdate(ctx,(uchar *)out,outl,puVar4,inl);
                if (iVar2 == 0) {
                  BIO_clear_flags(param_1,0xf);
                  outl[4] = 0;
                  goto LAB_00100380;
                }
                iVar2 = *outl;
                outl[2] = 1;
                *(long *)(outl + 8) = *(long *)(outl + 8) + (long)(int)inl;
                puVar4 = param_2;
                if (iVar2 != 0) goto LAB_001002ba;
              }
              else {
                uVar5 = param_3 - iVar1;
                inl_00 = inl;
                if ((int)uVar5 <= (int)inl) {
                  inl_00 = uVar5;
                }
                iVar2 = EVP_CipherUpdate(ctx,param_2,&local_44,puVar4,inl_00);
                if (iVar2 == 0) {
                  BIO_clear_flags(param_1,0xf);
                  goto LAB_00100380;
                }
                inl = inl - uVar5;
                __n = (size_t)(uint)((int)__n + local_44);
                param_2 = param_2 + local_44;
                param_3 = param_3 - local_44;
                if (0 < (int)inl) {
                  ctx = *(EVP_CIPHER_CTX **)(outl + 6);
                  puVar4 = (uchar *)(*(long *)(outl + 8) + (long)(int)uVar5);
                  *(uchar **)(outl + 8) = puVar4;
                  goto LAB_00100280;
                }
                *(undefined8 *)(outl + 8) = *(undefined8 *)(outl + 10);
              }
            }
            else {
              inl = (int)*(uchar **)(outl + 10) - (int)puVar4;
              if (0 < (int)inl) goto LAB_00100220;
LAB_0010031c:
              iVar2 = BIO_test_flags(b,8);
              if (iVar2 != 0) {
                if ((int)__n != 0) {
                  BIO_clear_flags(param_1,0xf);
                  BIO_copy_next_retry(param_1);
                  goto LAB_00100383;
                }
                __n = (size_t)inl;
                break;
              }
              outl[2] = inl;
              iVar3 = EVP_CipherFinal_ex(*(EVP_CIPHER_CTX **)(outl + 6),(uchar *)out,outl);
              outl[1] = 0;
              iVar2 = *outl;
              outl[4] = iVar3;
              puVar4 = param_2;
LAB_001002ba:
              if (param_3 <= iVar2) {
                iVar2 = param_3;
              }
              if (iVar2 < 1) break;
              __n = (size_t)(uint)((int)__n + iVar2);
              param_3 = param_3 - iVar2;
              param_2 = puVar4 + iVar2;
              memcpy(puVar4,out,(long)iVar2);
              outl[1] = iVar2;
            }
          } while (0 < param_3);
        }
        BIO_clear_flags(param_1,0xf);
        BIO_copy_next_retry(param_1);
        if ((int)__n == 0) {
          __n = (size_t)(uint)outl[2];
        }
        goto LAB_00100383;
      }
    }
  }
LAB_00100380:
  __n = 0;
LAB_00100383:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __n & 0xffffffff;
}



int enc_write(BIO *param_1,uchar *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *outl;
  BIO *b;
  int iVar3;
  int iVar4;
  
  outl = (int *)BIO_get_data();
  b = BIO_next(param_1);
  if ((outl != (int *)0x0) && (b != (BIO *)0x0)) {
    BIO_clear_flags(param_1,0xf);
    iVar4 = outl[1];
    for (iVar3 = *outl - iVar4; 0 < iVar3; iVar3 = iVar3 - iVar1) {
      iVar1 = BIO_write(b,(void *)((long)outl + (long)iVar4 + 0x30),iVar3);
      if (iVar1 < 1) {
        BIO_copy_next_retry(param_1);
        return iVar1;
      }
      iVar4 = outl[1] + iVar1;
      outl[1] = iVar4;
    }
    if ((param_2 != (uchar *)0x0) && (0 < param_3)) {
      outl[1] = 0;
      iVar4 = param_3;
      while( true ) {
        iVar3 = 0x1000;
        if (iVar4 < 0x1001) {
          iVar3 = iVar4;
        }
        iVar1 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(outl + 6),(uchar *)(outl + 0xc),outl,param_2,
                                 iVar3);
        if (iVar1 == 0) break;
        iVar4 = iVar4 - iVar3;
        iVar1 = *outl;
        iVar2 = 0;
        outl[1] = 0;
        param_2 = param_2 + iVar3;
        for (; 0 < iVar1; iVar1 = iVar1 - iVar3) {
          iVar3 = BIO_write(b,(void *)((long)outl + (long)iVar2 + 0x30),iVar1);
          if (iVar3 < 1) {
            BIO_copy_next_retry(param_1);
            if (param_3 != iVar4) {
              iVar3 = param_3 - iVar4;
            }
            return iVar3;
          }
          iVar2 = iVar3 + outl[1];
          outl[1] = iVar2;
        }
        outl[0] = 0;
        outl[1] = 0;
        if (iVar4 < 1) {
          BIO_copy_next_retry(param_1);
          return param_3;
        }
      }
      BIO_clear_flags(param_1,0xf);
      outl[4] = 0;
    }
  }
  return 0;
}



long enc_ctrl(BIO *param_1,int param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int *outl;
  BIO *bp;
  long lVar3;
  EVP_CIPHER_CTX *out;
  int iVar4;
  
  outl = (int *)BIO_get_data();
  bp = BIO_next(param_1);
  if (outl == (int *)0x0) goto LAB_001007b0;
  if (0xd < param_2) {
    if (param_2 == 0x71) {
      return (long)outl[4];
    }
    if (param_2 == 0x81) {
      *param_4 = *(undefined8 *)(outl + 6);
      BIO_set_init(param_1,1);
      return 1;
    }
    if (param_2 == 0x65) {
      BIO_clear_flags(param_1,0xf);
      iVar1 = 0x65;
LAB_00100749:
      lVar3 = BIO_ctrl(bp,iVar1,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return lVar3;
    }
switchD_00100704_caseD_3:
LAB_001007d1:
    lVar3 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar3;
  }
  switch(param_2) {
  case 1:
    *(undefined8 *)(outl + 3) = _LC1;
    iVar1 = EVP_CIPHER_CTX_is_encrypting(*(undefined8 *)(outl + 6));
    iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(outl + 6),(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                              (uchar *)0x0,(uchar *)0x0,iVar1);
    if (iVar1 != 0) {
      param_2 = 1;
      goto LAB_001007d1;
    }
    goto LAB_001007b0;
  case 2:
    if (outl[2] < 1) {
      return 1;
    }
    param_2 = 2;
    goto LAB_001007d1;
  default:
    goto switchD_00100704_caseD_3;
  case 10:
    lVar3 = (long)(*outl - outl[1]);
    if (lVar3 < 1) {
      param_2 = 10;
      goto LAB_001007d1;
    }
    break;
  case 0xb:
    iVar1 = *outl;
    do {
      iVar4 = outl[1];
      if (iVar1 == iVar4) {
        do {
          if (outl[3] != 0) {
            iVar1 = 0xb;
            goto LAB_00100749;
          }
          outl[3] = 1;
          outl[1] = 0;
          iVar1 = EVP_CipherFinal_ex(*(EVP_CIPHER_CTX **)(outl + 6),(uchar *)(outl + 0xc),outl);
          outl[4] = iVar1;
          if ((long)iVar1 < 1) {
            return (long)iVar1;
          }
          iVar1 = *outl;
          iVar4 = outl[1];
        } while (iVar1 == iVar4);
      }
      iVar4 = iVar1 - iVar4;
      iVar2 = enc_write(param_1,0,0);
    } while ((-1 < iVar2) && (iVar1 = *outl, iVar1 - outl[1] != iVar4));
    lVar3 = (long)iVar2;
    break;
  case 0xc:
    lVar3 = BIO_get_data(param_4);
    out = EVP_CIPHER_CTX_new();
    *(EVP_CIPHER_CTX **)(lVar3 + 0x18) = out;
    if (out != (EVP_CIPHER_CTX *)0x0) {
      iVar1 = EVP_CIPHER_CTX_copy(out,*(EVP_CIPHER_CTX **)(outl + 6));
      if ((long)iVar1 != 0) {
        BIO_set_init(param_4,1);
        return (long)iVar1;
      }
      return 0;
    }
LAB_001007b0:
    lVar3 = 0;
    break;
  case 0xd:
    lVar3 = (long)(*outl - outl[1]);
    if (lVar3 < 1) {
      param_2 = 0xd;
      goto LAB_001007d1;
    }
  }
  return lVar3;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_cipher(void)

{
  return (BIO_METHOD *)methods_enc;
}



void BIO_set_cipher(BIO *b,EVP_CIPHER *c,uchar *k,uchar *i,int enc)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  uchar *puVar5;
  int iVar6;
  undefined4 in_register_00000084;
  long in_R9;
  undefined1 auVar8 [16];
  EVP_CIPHER *pEVar7;
  
  lVar3 = CONCAT44(in_register_00000084,enc);
  puVar5 = i;
  pEVar7 = c;
  lVar2 = BIO_get_data();
  iVar6 = (int)pEVar7;
  iVar1 = (int)puVar5;
  if (lVar2 != 0) {
    auVar8 = BIO_get_callback_ex(b);
    pcVar4 = auVar8._0_8_;
    if (pcVar4 == (code *)0x0) {
      pcVar4 = (code *)BIO_get_callback(b,iVar6,auVar8._8_8_,iVar1,lVar3,in_R9);
      if (pcVar4 == (code *)0x0) {
        BIO_set_init(b,1);
        EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 0x18),c,(ENGINE *)0x0,k,i,enc);
      }
      else {
        lVar3 = (*pcVar4)(b,6,c,4,(long)enc,0);
        if (0 < lVar3) {
          BIO_set_init(b,1);
          iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 0x18),c,(ENGINE *)0x0,k,i,enc);
          if (iVar1 != 0) {
            (*pcVar4)(b,6,c,4,(long)enc,1);
          }
        }
      }
    }
    else {
      lVar3 = (*pcVar4)(b,6,c,0,4,(long)enc,1,0);
      if (0 < lVar3) {
        BIO_set_init(b,1);
        iVar1 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(lVar2 + 0x18),c,(ENGINE *)0x0,k,i,enc);
        if (iVar1 != 0) {
          (*pcVar4)(b,0x86,c,0,4,(long)enc,1,0);
          return;
        }
      }
    }
  }
  return;
}


