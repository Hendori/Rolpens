
void set_legacy_nid(char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = OBJ_NAME_get(param_1,2);
  if ((*param_2 != -1) && (pcVar2 != (char *)0x0)) {
    iVar1 = EVP_CIPHER_get_nid(pcVar2);
    if ((*param_2 != iVar1) && (*param_2 != 0)) {
      *param_2 = -1;
      return;
    }
    *param_2 = iVar1;
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EVP_CIPHER_CTX * EVP_CIPHER_CTX_new(void)

{
  EVP_CIPHER_CTX *pEVar1;
  
  pEVar1 = (EVP_CIPHER_CTX *)CRYPTO_zalloc(0xc0,"crypto/evp/evp_enc.c",0x4c);
  if (pEVar1 != (EVP_CIPHER_CTX *)0x0) {
    *(undefined4 *)&pEVar1->field_0x6c = 0xffffffff;
  }
  return pEVar1;
}



undefined8
EVP_CipherPipelineUpdate
          (long *param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
          long param_6)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((param_3 == 0) || (param_6 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x2dd,"EVP_CipherPipelineUpdate");
    ERR_set_error(6,0xc0102,0);
    uVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x2e2,"EVP_CipherPipelineUpdate");
      ERR_set_error(6,0x83,0);
      uVar4 = 0;
    }
    else if (*(long *)(lVar1 + 0x78) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x2e7,"EVP_CipherPipelineUpdate");
      ERR_set_error(6,0x94,0);
      uVar4 = 0;
    }
    else {
      pcVar2 = *(code **)(lVar1 + 200);
      if (pcVar2 == (code *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x2ec,"EVP_CipherPipelineUpdate");
        ERR_set_error(6,0xbd,0);
        uVar4 = 0;
      }
      else {
        uVar5 = param_1[0x15];
        uVar3 = 0;
        if (uVar5 != 0) {
          do {
            *(undefined8 *)(param_3 + uVar3 * 8) = 0;
            uVar5 = param_1[0x15];
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar5);
        }
        uVar4 = (*pcVar2)(param_1[0x16],uVar5,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return uVar4;
}



undefined8 EVP_CipherPipelineFinal(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x30f,"EVP_CipherPipelineFinal");
    ERR_set_error(6,0xc0102,0);
  }
  else {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x314,"EVP_CipherPipelineFinal");
      ERR_set_error(6,0x83,0);
    }
    else if (*(long *)(lVar1 + 0x78) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x319,"EVP_CipherPipelineFinal");
      ERR_set_error(6,0x94,0);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xd0);
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
        uVar4 = param_1[0x15];
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            *(undefined8 *)(param_3 + uVar2 * 8) = 0;
            uVar4 = param_1[0x15];
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar4);
        }
                    /* WARNING: Could not recover jumptable at 0x00100269. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1[0x16],uVar4,param_2,param_3,param_4);
        return uVar3;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x31e,"EVP_CipherPipelineFinal");
      ERR_set_error(6,0xbc,0);
    }
  }
  return 0;
}



bool ossl_is_partially_overlapping(long param_1,long param_2,int param_3)

{
  return ((ulong)-(long)param_3 < (ulong)(param_1 - param_2) ||
         (ulong)(param_1 - param_2) < (ulong)(long)param_3) && (0 < param_3 && param_1 != param_2);
}



bool evp_EncryptDecryptUpdate
               (EVP_CIPHER_CTX *param_1,long param_2,uint *param_3,void *param_4,uint param_5)

{
  ulong uVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = EVP_CIPHER_CTX_test_flags(param_1,0x2000);
  pEVar3 = param_1->cipher;
  if (iVar2 == 0) {
    uVar7 = pEVar3->block_size;
    uVar4 = param_5;
    if ((pEVar3->flags & 0x100000) == 0) {
      if ((int)param_5 < 1) goto LAB_00100589;
      goto LAB_001003eb;
    }
LAB_00100500:
    if (uVar7 == 1) {
      iVar2 = ossl_is_partially_overlapping(param_2,param_4,uVar4);
      if (iVar2 != 0) {
        ERR_new();
        uVar5 = 900;
        goto LAB_00100549;
      }
      pEVar3 = param_1->cipher;
    }
    uVar7 = (*pEVar3->cleanup)(param_1);
    if (-1 < (int)uVar7) {
      *param_3 = uVar7;
      return true;
    }
  }
  else {
    uVar1 = pEVar3->flags;
    uVar7 = pEVar3->block_size;
    if ((int)param_5 < 1) {
      if (param_5 == 0) {
        if ((uVar1 & 0x100000) == 0) goto LAB_00100589;
        uVar4 = 0;
      }
      else {
        if ((uVar1 & 0x100000) == 0) {
LAB_00100589:
          *param_3 = 0;
          return param_5 == 0;
        }
        uVar4 = param_5 + 7;
        if (-1 < (int)param_5) {
          uVar4 = param_5;
        }
        uVar4 = (uint)((param_5 & 7) != 0) + ((int)uVar4 >> 3);
      }
      goto LAB_00100500;
    }
    if (0x7ffffff6 < (int)param_5) {
      uVar4 = (uint)((param_5 & 7) != 0) + ((int)param_5 >> 3);
      if ((uVar1 & 0x100000) == 0) goto LAB_001003eb;
      goto LAB_00100500;
    }
    uVar4 = (int)(param_5 + 7) >> 3;
    if ((uVar1 & 0x100000) != 0) goto LAB_00100500;
LAB_001003eb:
    iVar2 = ossl_is_partially_overlapping(param_1->buf_len + param_2,param_4,uVar4);
    if (iVar2 == 0) {
      iVar2 = param_1->buf_len;
      if (iVar2 == 0) {
        if ((param_5 & param_1->block_mask) == 0) {
          iVar2 = (*param_1->cipher->cleanup)(param_1);
          if (iVar2 != 0) {
            *param_3 = param_5;
            return true;
          }
          *param_3 = 0;
          return false;
        }
        if (0x20 < (int)uVar7) {
LAB_0010075d:
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: bl <= (int)sizeof(ctx->buf)","crypto/evp/evp_enc.c",0x3a3);
        }
        *param_3 = 0;
        uVar7 = uVar7 - 1 & param_5;
        uVar4 = param_5 - uVar7;
        if (0 < (int)uVar4) {
LAB_00100663:
          iVar2 = (*param_1->cipher->cleanup)(param_1);
          if (iVar2 == 0) {
            return false;
          }
          *param_3 = *param_3 + uVar4;
          goto LAB_001004a8;
        }
      }
      else {
        if (0x20 < (int)uVar7) goto LAB_0010075d;
        iVar6 = uVar7 - iVar2;
        if ((int)param_5 < iVar6) {
          memcpy(param_1->buf + iVar2,param_4,(long)(int)param_5);
          param_1->buf_len = param_1->buf_len + param_5;
          *param_3 = 0;
          return true;
        }
        uVar4 = -uVar7 & param_5 - iVar6;
        if ((int)(0x7fffffff - uVar7) < (int)uVar4) {
          ERR_new();
          ERR_set_debug("crypto/evp/evp_enc.c",0x3b5,"evp_EncryptDecryptUpdate");
          ERR_set_error(6,0xca,0);
          return false;
        }
        memcpy(param_1->buf + iVar2,param_4,(long)iVar6);
        iVar2 = (*param_1->cipher->cleanup)(param_1);
        if (iVar2 == 0) {
          return false;
        }
        *param_3 = uVar7;
        param_4 = (void *)((long)param_4 + (long)iVar6);
        uVar7 = uVar7 - 1 & param_5 - iVar6;
        if (uVar4 != 0) goto LAB_00100663;
LAB_001004a8:
        if (uVar7 == 0) goto LAB_001004b1;
      }
      memcpy(param_1->buf,(void *)((long)param_4 + (long)(int)uVar4),(long)(int)uVar7);
LAB_001004b1:
      param_1->buf_len = uVar7;
      return true;
    }
    ERR_new();
    uVar5 = 0x395;
LAB_00100549:
    ERR_set_debug("crypto/evp/evp_enc.c",uVar5,"evp_EncryptDecryptUpdate");
    ERR_set_error(6,0xa2,0);
  }
  return false;
}



int EVP_EncryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  EVP_CIPHER *pEVar1;
  int iVar2;
  void *ptr;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x3db,"EVP_EncryptUpdate");
    ERR_set_error(6,0xc0102,0);
    iVar2 = 0;
  }
  else {
    *outl = 0;
    if (ctx->encrypt == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x3e1,"EVP_EncryptUpdate");
      ERR_set_error(6,0x94,0);
      iVar2 = 0;
    }
    else {
      pEVar1 = ctx->cipher;
      if (pEVar1 == (EVP_CIPHER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x3e6,"EVP_EncryptUpdate");
        ERR_set_error(6,0x83,0);
        iVar2 = 0;
      }
      else {
        if (pEVar1[1].do_cipher == (_func_1090 *)0x0) {
          if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
            iVar2 = evp_EncryptDecryptUpdate();
            return iVar2;
          }
          goto LAB_0010095a;
        }
        iVar2 = pEVar1->block_size;
        if ((iVar2 < 1) || (pEVar1[1].ctrl == (_func_1094 *)0x0)) {
          ERR_new();
          uVar3 = 0x3f0;
LAB_00100849:
          ERR_set_debug("crypto/evp/evp_enc.c",uVar3,"EVP_EncryptUpdate");
          ERR_set_error(6,0xbd,0);
        }
        else {
          ptr = (void *)((long)iVar2 + (long)inl);
          if (iVar2 == 1) {
            ptr = (void *)(long)inl;
          }
          iVar2 = (*pEVar1[1].ctrl)((EVP_CIPHER_CTX *)ctx[1].engine,(int)out,(int)&local_18,ptr);
          if (iVar2 != 0) {
            if (local_18 < 0x80000000) {
              *outl = (int)local_18;
              goto LAB_0010081a;
            }
            ERR_new();
            uVar3 = 0x3fa;
            goto LAB_00100849;
          }
        }
        iVar2 = 0;
      }
    }
  }
LAB_0010081a:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
LAB_0010095a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int EVP_EncryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *out,int *outl)

{
  uint uVar1;
  uint uVar2;
  EVP_CIPHER *pEVar3;
  code *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x419,"EVP_EncryptFinal_ex");
    ERR_set_error(6,0xc0102,0);
  }
  else {
    *outl = 0;
    if (ctx->encrypt == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x41f,"EVP_EncryptFinal_ex");
      ERR_set_error(6,0x94,0);
    }
    else {
      pEVar3 = ctx->cipher;
      if (pEVar3 == (EVP_CIPHER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x424,"EVP_EncryptFinal_ex");
        ERR_set_error(6,0x83,0);
      }
      else {
        if (pEVar3[1].do_cipher == (_func_1090 *)0x0) {
          if ((pEVar3->flags & 0x100000) == 0) {
            uVar1 = pEVar3->block_size;
            if (0x20 < uVar1) {
                    /* WARNING: Subroutine does not return */
              OPENSSL_die("assertion failed: b <= sizeof(ctx->buf)","crypto/evp/evp_enc.c",1099);
            }
            if (uVar1 != 1) {
              uVar2 = ctx->buf_len;
              if ((ctx->flags & 0x100) == 0) {
                if (uVar2 < uVar1) {
                  memset(ctx->buf + (int)uVar2,uVar1 - uVar2 & 0xff,(ulong)((uVar1 - uVar2) - 1) + 1
                        );
                }
                iVar5 = (*pEVar3->cleanup)(ctx);
                if (iVar5 != 0) {
                  *outl = uVar1;
                }
                goto LAB_001009f7;
              }
              if (uVar2 != 0) {
                ERR_new();
                ERR_set_debug("crypto/evp/evp_enc.c",0x453,"EVP_EncryptFinal_ex");
                ERR_set_error(6,0x8a,0);
                goto LAB_001009f5;
              }
            }
          }
          else {
            iVar5 = (*pEVar3->cleanup)(ctx);
            if (iVar5 < 0) goto LAB_001009f5;
            *outl = iVar5;
          }
          iVar5 = 1;
          goto LAB_001009f7;
        }
        iVar5 = EVP_CIPHER_CTX_get_block_size();
        if (iVar5 < 1) {
LAB_00100b00:
          ERR_new();
          uVar6 = 0x42d;
        }
        else {
          pcVar4 = (code *)ctx->cipher[1].app_data;
          if (pcVar4 == (code *)0x0) goto LAB_00100b00;
          if (iVar5 == 1) {
            iVar5 = 0;
          }
          iVar5 = (*pcVar4)(ctx[1].engine,out,&local_38,(long)iVar5);
          if (iVar5 == 0) goto LAB_001009f5;
          if (local_38 < 0x80000000) {
            *outl = (int)local_38;
            goto LAB_001009f7;
          }
          ERR_new();
          uVar6 = 0x436;
        }
        ERR_set_debug("crypto/evp/evp_enc.c",uVar6,"EVP_EncryptFinal_ex");
        ERR_set_error(6,0xbc,0);
      }
    }
  }
LAB_001009f5:
  iVar5 = 0;
LAB_001009f7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int EVP_EncryptFinal(EVP_CIPHER_CTX *ctx,uchar *out,int *outl)

{
  int iVar1;
  
  iVar1 = EVP_EncryptFinal_ex(ctx,out,outl);
  return iVar1;
}



int EVP_DecryptUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  _func_1094 *p_Var1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  EVP_CIPHER *pEVar6;
  long lVar7;
  void *ptr;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  uchar *puVar12;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x470,"EVP_DecryptUpdate");
    ERR_set_error(6,0xc0102,0);
    uVar3 = 0;
  }
  else {
    *outl = 0;
    if (ctx->encrypt == 0) {
      pEVar6 = ctx->cipher;
      if (pEVar6 == (EVP_CIPHER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x47b,"EVP_DecryptUpdate");
        ERR_set_error(6,0x83,0);
        uVar3 = 0;
      }
      else if (pEVar6[1].do_cipher == (_func_1090 *)0x0) {
        uVar3 = pEVar6->block_size;
        iVar2 = EVP_CIPHER_CTX_test_flags(ctx,0x2000);
        if (iVar2 == 0) {
          pEVar6 = ctx->cipher;
          if ((pEVar6->flags & 0x100000) == 0) {
            if (inl < 1) goto LAB_00100fc9;
            goto LAB_00100e46;
          }
          goto LAB_00100f70;
        }
        pEVar6 = ctx->cipher;
        uVar10 = pEVar6->flags;
        if (inl < 1) {
          if (inl == 0) {
            if ((uVar10 & 0x100000) == 0) goto LAB_00100fc9;
          }
          else {
            if ((uVar10 & 0x100000) == 0) {
LAB_00100fc9:
              *outl = 0;
              uVar3 = (uint)(inl == 0);
              goto LAB_00100ceb;
            }
            iVar2 = inl + 7;
            if (-1 < inl) {
              iVar2 = inl;
            }
            inl = (uint)((inl & 7U) != 0) + (iVar2 >> 3);
          }
LAB_00100f70:
          if (uVar3 == 1) {
            iVar2 = ossl_is_partially_overlapping(out,in,inl);
            if (iVar2 != 0) {
              ERR_new();
              uVar11 = 0x49f;
LAB_0010100c:
              ERR_set_debug("crypto/evp/evp_enc.c",uVar11,"EVP_DecryptUpdate");
              ERR_set_error(6,0xa2,0);
              uVar3 = 0;
              goto LAB_00100ceb;
            }
            pEVar6 = ctx->cipher;
          }
          iVar2 = (*pEVar6->cleanup)(ctx);
          if (iVar2 < 0) {
            *outl = 0;
            uVar3 = 0;
            goto LAB_00100ceb;
          }
          *outl = iVar2;
        }
        else {
          if (0x7ffffff6 < inl) {
            if ((uVar10 & 0x100000) == 0) goto LAB_00100e46;
            inl = (inl >> 3) + (uint)((inl & 7U) != 0);
            goto LAB_00100f70;
          }
          if ((uVar10 & 0x100000) != 0) {
            inl = inl + 7 >> 3;
            goto LAB_00100f70;
          }
LAB_00100e46:
          if ((ctx->flags & 0x100) != 0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              iVar2 = evp_EncryptDecryptUpdate(ctx,out,outl,in);
              return iVar2;
            }
            goto LAB_001011d4;
          }
          if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
            OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","crypto/evp/evp_enc.c",0x4b4);
          }
          iVar2 = ctx->final_used;
          if (iVar2 != 0) {
            if ((out != in) && (iVar2 = ossl_is_partially_overlapping(out,in,uVar3), iVar2 == 0)) {
              if (0x7fffffff - uVar3 < (-uVar3 & inl)) {
                ERR_new();
                ERR_set_debug("crypto/evp/evp_enc.c",0x4c7,"EVP_DecryptUpdate");
                ERR_set_error(6,0xca,0);
                uVar3 = 0;
                goto LAB_00100ceb;
              }
              if (uVar3 < 8) {
                if ((uVar3 & 4) == 0) {
                  if ((uVar3 != 0) && (*out = ctx->final[0], (uVar3 & 2) != 0)) {
                    *(undefined2 *)(out + ((ulong)uVar3 - 2)) =
                         *(undefined2 *)(ctx->final + ((ulong)uVar3 - 2));
                  }
                }
                else {
                  *(undefined4 *)out = *(undefined4 *)ctx->final;
                  *(undefined4 *)(out + ((ulong)uVar3 - 4)) =
                       *(undefined4 *)(ctx->final + ((ulong)uVar3 - 4));
                }
              }
              else {
                *(undefined8 *)out = *(undefined8 *)ctx->final;
                *(undefined8 *)(out + ((ulong)uVar3 - 8)) =
                     *(undefined8 *)(ctx->final + ((ulong)uVar3 - 8));
                lVar7 = (long)out - ((ulong)(out + 8) & 0xfffffffffffffff8);
                uVar5 = (int)lVar7 + uVar3 & 0xfffffff8;
                if (7 < uVar5) {
                  uVar8 = 0;
                  do {
                    uVar10 = (ulong)uVar8;
                    uVar8 = uVar8 + 8;
                    *(undefined8 *)(((ulong)(out + 8) & 0xfffffffffffffff8) + uVar10) =
                         *(undefined8 *)((long)ctx + uVar10 + (0x88 - lVar7));
                  } while (uVar8 < uVar5);
                }
              }
              out = out + (int)uVar3;
              iVar2 = 1;
              goto LAB_00100eec;
            }
            ERR_new();
            uVar11 = 0x4ba;
            goto LAB_0010100c;
          }
LAB_00100eec:
          iVar4 = evp_EncryptDecryptUpdate(ctx,out,outl,in);
          if (iVar4 == 0) goto LAB_00100d40;
          if ((uVar3 < 2) || (ctx->buf_len != 0)) {
            ctx->final_used = 0;
          }
          else {
            *outl = *outl - uVar3;
            ctx->final_used = 1;
            puVar12 = out + *outl;
            if (uVar3 < 8) {
              if ((uVar3 & 4) == 0) {
                if ((uVar3 != 0) && (ctx->final[0] = *puVar12, (uVar3 & 2) != 0)) {
                  *(undefined2 *)(ctx->final + ((ulong)uVar3 - 2)) =
                       *(undefined2 *)(puVar12 + ((ulong)uVar3 - 2));
                }
              }
              else {
                *(undefined4 *)ctx->final = *(undefined4 *)puVar12;
                *(undefined4 *)(ctx->final + ((ulong)uVar3 - 4)) =
                     *(undefined4 *)(puVar12 + ((ulong)uVar3 - 4));
              }
            }
            else {
              *(undefined8 *)ctx->final = *(undefined8 *)puVar12;
              uVar10 = (ulong)(ctx->final + 8) & 0xfffffffffffffff8;
              *(undefined8 *)(ctx->final + ((ulong)uVar3 - 8)) =
                   *(undefined8 *)(puVar12 + ((ulong)uVar3 - 8));
              lVar7 = (long)ctx + (0x88 - uVar10);
              uVar5 = (int)lVar7 + uVar3 & 0xfffffff8;
              if (7 < uVar5) {
                uVar9 = 0;
                do {
                  uVar8 = (int)uVar9 + 8;
                  *(undefined8 *)(uVar10 + uVar9) = *(undefined8 *)(puVar12 + (uVar9 - lVar7));
                  uVar9 = (ulong)uVar8;
                } while (uVar8 < uVar5);
              }
            }
          }
          if (iVar2 != 0) {
            *outl = *outl + uVar3;
          }
        }
        uVar3 = 1;
      }
      else {
        iVar2 = EVP_CIPHER_CTX_get_block_size();
        p_Var1 = ctx->cipher[1].ctrl;
        if ((iVar2 < 1) || (p_Var1 == (_func_1094 *)0x0)) {
          ERR_new();
          uVar11 = 0x484;
LAB_00100d21:
          ERR_set_debug("crypto/evp/evp_enc.c",uVar11,"EVP_DecryptUpdate");
          ERR_set_error(6,0xbd,0);
        }
        else {
          ptr = (void *)((long)iVar2 + (long)inl);
          if (iVar2 == 1) {
            ptr = (void *)(long)inl;
          }
          uVar3 = (*p_Var1)((EVP_CIPHER_CTX *)ctx[1].engine,(int)out,(int)&local_48,ptr);
          if (uVar3 != 0) {
            if (local_48 < 0x80000000) {
              *outl = (int)local_48;
              goto LAB_00100ceb;
            }
            ERR_new();
            uVar11 = 0x48d;
            goto LAB_00100d21;
          }
        }
LAB_00100d40:
        uVar3 = 0;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x476,"EVP_DecryptUpdate");
      ERR_set_error(6,0x94,0);
      uVar3 = 0;
    }
  }
LAB_00100ceb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_001011d4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int EVP_CipherUpdate(EVP_CIPHER_CTX *ctx,uchar *out,int *outl,uchar *in,int inl)

{
  int iVar1;
  
  if (ctx->encrypt != 0) {
    iVar1 = EVP_EncryptUpdate(ctx,out,outl,in,inl);
    return iVar1;
  }
  iVar1 = EVP_DecryptUpdate(ctx,out,outl,in,inl);
  return iVar1;
}



int EVP_DecryptFinal_ex(EVP_CIPHER_CTX *ctx,uchar *outm,int *outl)

{
  byte bVar1;
  uint uVar2;
  EVP_CIPHER *pEVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (outl == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x4f6,"EVP_DecryptFinal_ex");
    ERR_set_error(6,0xc0102,0);
  }
  else {
    *outl = 0;
    if (ctx->encrypt == 0) {
      pEVar3 = ctx->cipher;
      if (pEVar3 == (EVP_CIPHER *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x501,"EVP_DecryptFinal_ex");
        ERR_set_error(6,0x83,0);
      }
      else {
        if (pEVar3[1].do_cipher == (_func_1090 *)0x0) {
          if ((pEVar3->flags & 0x100000) == 0) {
            uVar2 = pEVar3->block_size;
            uVar6 = (ulong)((uint)ctx->flags & 0x100);
            if ((ctx->flags & 0x100) == 0) {
              if (1 < uVar2) {
                if ((ctx->buf_len == 0) && (ctx->final_used != 0)) {
                  if (0x20 < uVar2) {
                    /* WARNING: Subroutine does not return */
                    OPENSSL_die("assertion failed: b <= sizeof(ctx->final)","crypto/evp/evp_enc.c",
                                0x537);
                  }
                  bVar1 = ctx->final[uVar2 - 1];
                  if ((bVar1 != 0) && (uVar9 = (ulong)uVar2, (int)(uint)bVar1 <= (int)uVar2)) {
                    do {
                      uVar10 = (int)uVar9 - 1;
                      uVar9 = (ulong)uVar10;
                      if (bVar1 != ctx->final[uVar9]) {
                        ERR_new();
                        uVar11 = 0x544;
                        goto LAB_001014fd;
                      }
                    } while ((int)(uVar2 - uVar10) < (int)(uint)bVar1);
                    iVar5 = uVar2 - bVar1;
                    if (iVar5 != 0) {
                      if ((iVar5 - 1U < 7) || ((ulong)((long)outm - (long)(ctx->final + 1)) < 0xf))
                      {
                        do {
                          outm[uVar6] = ctx->final[uVar6];
                          uVar6 = uVar6 + 1;
                        } while (uVar6 != (long)iVar5);
                      }
                      else if (iVar5 - 1U < 0xf) {
                        lVar7 = 0;
                        iVar12 = 0;
                        iVar8 = iVar5;
LAB_00101609:
                        iVar12 = iVar12 + 8;
                        *(undefined8 *)(outm + lVar7) = *(undefined8 *)(ctx->final + lVar7);
                        if (iVar8 != 8) {
LAB_0010161e:
                          outm[iVar12] = ctx->final[iVar12];
                          iVar8 = iVar12 + 1;
                          if (iVar8 < iVar5) {
                            outm[iVar8] = ctx->final[iVar8];
                            iVar8 = iVar12 + 2;
                            if (iVar8 < iVar5) {
                              outm[iVar8] = ctx->final[iVar8];
                              iVar8 = iVar12 + 3;
                              if (iVar8 < iVar5) {
                                outm[iVar8] = ctx->final[iVar8];
                                iVar8 = iVar12 + 4;
                                if (iVar8 < iVar5) {
                                  outm[iVar8] = ctx->final[iVar8];
                                  iVar8 = iVar12 + 5;
                                  if (iVar8 < iVar5) {
                                    iVar12 = iVar12 + 6;
                                    outm[iVar8] = ctx->final[iVar8];
                                    if (iVar12 < iVar5) {
                                      outm[iVar12] = ctx->final[iVar12];
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar11 = *(undefined8 *)(ctx->final + 8);
                        *(undefined8 *)outm = *(undefined8 *)ctx->final;
                        *(undefined8 *)(outm + 8) = uVar11;
                        if (iVar5 != 0x10) {
                          if (6 < iVar5 - 0x11U) {
                            lVar7 = 0x10;
                            iVar12 = 0x10;
                            iVar8 = iVar5 + -0x10;
                            goto LAB_00101609;
                          }
                          iVar12 = 0x10;
                          goto LAB_0010161e;
                        }
                      }
                    }
                    *outl = iVar5;
                    goto LAB_0010132d;
                  }
                  ERR_new();
                  uVar11 = 0x53f;
LAB_001014fd:
                  ERR_set_debug("crypto/evp/evp_enc.c",uVar11,"EVP_DecryptFinal_ex");
                  ERR_set_error(6,100,0);
                }
                else {
                  ERR_new();
                  ERR_set_debug("crypto/evp/evp_enc.c",0x534,"EVP_DecryptFinal_ex");
                  ERR_set_error(6,0x6d,0);
                }
                goto LAB_001012f1;
              }
            }
            else if (ctx->buf_len != 0) {
              ERR_new();
              ERR_set_debug("crypto/evp/evp_enc.c",0x52c,"EVP_DecryptFinal_ex");
              ERR_set_error(6,0x8a,0);
              goto LAB_001012f1;
            }
          }
          else {
            iVar5 = (*pEVar3->cleanup)(ctx);
            if (iVar5 < 0) goto LAB_001012f1;
            *outl = iVar5;
          }
LAB_0010132d:
          iVar5 = 1;
          goto LAB_001012f3;
        }
        iVar5 = EVP_CIPHER_CTX_get_block_size();
        if ((iVar5 < 1) || (pcVar4 = (code *)ctx->cipher[1].app_data, pcVar4 == (code *)0x0)) {
          ERR_new();
          uVar11 = 0x50b;
        }
        else {
          if (iVar5 == 1) {
            iVar5 = 0;
          }
          iVar5 = (*pcVar4)(ctx[1].engine,outm,&local_38,(long)iVar5);
          if (iVar5 == 0) goto LAB_001012f1;
          if (local_38 < 0x80000000) {
            *outl = (int)local_38;
            goto LAB_001012f3;
          }
          ERR_new();
          uVar11 = 0x514;
        }
        ERR_set_debug("crypto/evp/evp_enc.c",uVar11,"EVP_DecryptFinal_ex");
        ERR_set_error(6,0xbc,0);
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x4fc,"EVP_DecryptFinal_ex");
      ERR_set_error(6,0x94,0);
    }
  }
LAB_001012f1:
  iVar5 = 0;
LAB_001012f3:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}



int EVP_CipherFinal_ex(EVP_CIPHER_CTX *ctx,uchar *outm,int *outl)

{
  int iVar1;
  
  if (ctx->encrypt != 0) {
    iVar1 = EVP_EncryptFinal_ex(ctx,outm,outl);
    return iVar1;
  }
  iVar1 = EVP_DecryptFinal_ex(ctx,outm,outl);
  return iVar1;
}



int EVP_DecryptFinal(EVP_CIPHER_CTX *ctx,uchar *outm,int *outl)

{
  int iVar1;
  
  iVar1 = EVP_DecryptFinal_ex(ctx,outm,outl);
  return iVar1;
}



int EVP_CipherFinal(EVP_CIPHER_CTX *ctx,uchar *outm,int *outl)

{
  int iVar1;
  
  if (ctx->encrypt != 0) {
    iVar1 = EVP_EncryptFinal(ctx,outm,outl);
    return iVar1;
  }
  iVar1 = EVP_DecryptFinal(ctx,outm,outl);
  return iVar1;
}



int EVP_CIPHER_CTX_set_padding(EVP_CIPHER_CTX *c,int pad)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_48 = (undefined1  [16])0x0;
  uVar3 = c->flags | 0x100;
  if (pad != 0) {
    uVar3 = c->flags & 0xfffffffffffffeff;
  }
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  c->flags = uVar3;
  local_6c = pad;
  if ((c->cipher == (EVP_CIPHER *)0x0) || (c->cipher[1].do_cipher != (_func_1090 *)0x0)) {
    OSSL_PARAM_construct_uint(&local_a8,"padding",&local_6c);
    local_68._8_8_ = uStack_a0;
    local_68._0_8_ = local_a8;
    local_48._0_8_ = local_88;
    local_58._8_8_ = uStack_90;
    local_58._0_8_ = local_98;
    iVar1 = evp_do_ciph_ctx_setparams(c->cipher,c[1].engine,local_68);
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = 1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int EVP_CIPHER_CTX_ctrl(EVP_CIPHER_CTX *ctx,int type,int arg,void *ptr)

{
  EVP_CIPHER *pEVar1;
  int iVar2;
  long lVar3;
  undefined4 in_register_00000014;
  undefined4 in_register_00000034;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  int local_e4;
  long local_e0;
  undefined8 local_d8 [4];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_30;
  
  local_e0 = (long)arg;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = local_d8;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  if ((ctx == (EVP_CIPHER_CTX *)0x0) || (pEVar1 = ctx->cipher, pEVar1 == (EVP_CIPHER *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x59b,"EVP_CIPHER_CTX_ctrl");
    ERR_set_error(6,0x83,0);
    goto LAB_001018f0;
  }
  if (pEVar1[1].do_cipher == (_func_1090 *)0x0) {
    if ((code *)pEVar1->app_data != (code *)0x0) {
      type = (*(code *)pEVar1->app_data)
                       (ctx,CONCAT44(in_register_00000034,type),CONCAT44(in_register_00000014,arg),
                        ptr);
      goto LAB_00101935;
    }
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x65a,"EVP_CIPHER_CTX_ctrl");
    ERR_set_error(6,0x84,0);
    goto LAB_001018f0;
  }
  switch(type) {
  case 0:
    type = 1;
    goto LAB_001018f2;
  case 1:
    if (-1 < arg) {
      if (ctx->key_len == arg) goto LAB_001018f2;
      OSSL_PARAM_construct_size_t(&local_118,"keylen",&local_e0);
      ctx->key_len = -1;
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_b8 = local_f8;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      goto LAB_001019af;
    }
    break;
  case 2:
    OSSL_PARAM_construct_size_t(&local_118,"keybits",&local_e0);
    goto LAB_00101a34;
  case 3:
    OSSL_PARAM_construct_size_t(&local_118,"keybits",&local_e0);
    goto LAB_00101a84;
  case 4:
    if (-1 < arg) {
      local_e4 = arg;
      OSSL_PARAM_construct_uint(&local_118,"rounds",&local_e4);
      goto LAB_00101ad0;
    }
    break;
  case 5:
    if (-1 < arg) {
      local_e4 = arg;
      OSSL_PARAM_construct_uint(&local_118,"rounds",&local_e4);
      goto LAB_00101b18;
    }
    break;
  case 6:
    OSSL_PARAM_construct_octet_string(&local_118,"randkey",ptr,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_00101a53;
  default:
    goto switchD_001018b5_caseD_7;
  case 9:
    if (-1 < arg) {
      type = 1;
      if (*(int *)&ctx->field_0x6c == arg) goto LAB_001018f2;
      OSSL_PARAM_construct_size_t(&local_118,"ivlen",&local_e0);
      *(undefined4 *)&ctx->field_0x6c = 0xffffffff;
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_b8 = local_f8;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      goto LAB_001019af;
    }
    break;
  case 0x10:
    OSSL_PARAM_construct_octet_string(&local_118,&_LC14,ptr,local_e0);
LAB_00101ad0:
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    local_b8 = local_f8;
    goto LAB_00101a53;
  case 0x11:
    OSSL_PARAM_construct_octet_string(&local_118,&_LC14,ptr,local_e0);
LAB_00101b18:
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_001019af;
  case 0x12:
    OSSL_PARAM_construct_octet_string(&local_118,"tlsivfixed",ptr,local_e0);
LAB_00101990:
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    goto LAB_001019af;
  case 0x13:
    if (arg < 0) {
      local_e0 = 0;
    }
    OSSL_PARAM_construct_octet_string(&local_118,"tlsivgen",ptr,local_e0);
LAB_00101a34:
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
LAB_00101a53:
    type = evp_do_ciph_ctx_getparams(ctx->cipher,ctx[1].engine,local_d8);
    goto LAB_00101935;
  case 0x14:
    if (arg - 2U < 7) {
      local_e0 = (long)(0xf - arg);
      OSSL_PARAM_construct_size_t(&local_118,"ivlen",&local_e0);
      *(undefined4 *)&ctx->field_0x6c = 0xffffffff;
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_b8 = local_f8;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      goto LAB_001019af;
    }
    break;
  case 0x16:
    OSSL_PARAM_construct_octet_string(&local_118,"tlsaad",ptr,local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    type = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].engine,local_d8);
    if (0 < type) {
      OSSL_PARAM_construct_size_t(&local_118,"tlsaadpad",&local_e0);
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_b8 = local_f8;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      type = evp_do_ciph_ctx_getparams(ctx->cipher,ctx[1].engine,local_d8);
      if (type < 1) goto LAB_00101935;
LAB_00101d66:
      type = (int)local_e0;
      goto LAB_001018f2;
    }
    goto LAB_00101935;
  case 0x17:
    if (arg < 0) {
      type = -1;
      goto LAB_001018f2;
    }
    OSSL_PARAM_construct_octet_string(&local_118,"mackey",ptr,local_e0);
LAB_00101a84:
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
LAB_001019af:
    type = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].engine,local_d8);
LAB_00101935:
    if (type != -1) goto LAB_001018f2;
switchD_001018b5_caseD_7:
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x662,"EVP_CIPHER_CTX_ctrl");
    ERR_set_error(6,0x85,0);
    break;
  case 0x18:
    if (-1 < arg) {
      OSSL_PARAM_construct_octet_string(&local_118,"tlsivinv",ptr,local_e0);
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      local_b8 = local_f8;
      goto LAB_001019af;
    }
    break;
  case 0x19:
    if (0x1f < arg) {
      OSSL_PARAM_construct_octet_string
                (&local_118,"tls1multi_aad",*(undefined8 *)((long)ptr + 8),
                 *(undefined8 *)((long)ptr + 0x10));
      local_b8 = local_f8;
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      OSSL_PARAM_construct_uint(&local_118,"tls1multi_interleave",(long)ptr + 0x18);
      local_b0 = local_118;
      uStack_a8 = uStack_110;
      local_90 = local_f8;
      local_a0 = local_108;
      uStack_98 = uStack_100;
      type = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].engine,local_d8);
      if (type < 1) goto LAB_001018f2;
      OSSL_PARAM_construct_size_t(&local_118,"tls1multi_aadpacklen",&local_e0);
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_b8 = local_f8;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      OSSL_PARAM_construct_uint(&local_118,"tls1multi_interleave",(long)ptr + 0x18);
      local_90 = local_f8;
      local_b0 = local_118;
      uStack_a8 = uStack_110;
      local_a0 = local_108;
      uStack_98 = uStack_100;
      OSSL_PARAM_construct_end(&local_118);
      local_88 = local_118;
      uStack_80 = uStack_110;
      local_78 = local_108;
      uStack_70 = uStack_100;
      local_68 = local_f8;
      goto LAB_00101f04;
    }
    break;
  case 0x1a:
                    /* WARNING: Load size is inaccurate */
    OSSL_PARAM_construct_octet_string
              (&local_118,"tls1multi_enc",*ptr,*(undefined8 *)((long)ptr + 0x10));
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    OSSL_PARAM_construct_octet_string
              (&local_118,"tls1multi_encin",*(undefined8 *)((long)ptr + 8),
               *(undefined8 *)((long)ptr + 0x10));
    local_90 = local_f8;
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
    OSSL_PARAM_construct_uint(&local_118,"tls1multi_interleave",(long)ptr + 0x18);
    local_88 = local_118;
    uStack_80 = uStack_110;
    local_68 = local_f8;
    local_78 = local_108;
    uStack_70 = uStack_100;
    type = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].engine,local_d8);
    if (type < 1) goto LAB_001018f2;
    OSSL_PARAM_construct_size_t(&local_118,"tls1multi_enclen",&local_e0);
    local_b8 = local_f8;
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    OSSL_PARAM_construct_end(&local_118);
    local_b0 = local_118;
    uStack_a8 = uStack_110;
    local_a0 = local_108;
    uStack_98 = uStack_100;
LAB_00101ef7:
    local_90 = local_f8;
LAB_00101f04:
    iVar2 = evp_do_ciph_ctx_getparams(ctx->cipher,ctx[1].engine,local_d8);
    if (0 < iVar2) goto LAB_00101d66;
    break;
  case 0x1c:
    OSSL_PARAM_construct_size_t(&local_118,"tls1multi_maxsndfrag",&local_e0);
    local_d8[0] = local_118;
    local_d8[1] = uStack_110;
    local_b8 = local_f8;
    local_d8[2] = local_108;
    local_d8[3] = uStack_100;
    iVar2 = evp_do_ciph_ctx_setparams(ctx->cipher,ctx[1].engine,local_d8);
    if (0 < iVar2) {
      OSSL_PARAM_construct_size_t(&local_118,"tls1multi_maxbufsz",&local_e0);
      local_b8 = local_f8;
      local_d8[0] = local_118;
      local_d8[1] = uStack_110;
      local_d8[2] = local_108;
      local_d8[3] = uStack_100;
      OSSL_PARAM_construct_end(&local_118);
      local_b0 = local_118;
      uStack_a8 = uStack_110;
      local_a0 = local_108;
      uStack_98 = uStack_100;
      goto LAB_00101ef7;
    }
    break;
  case 0x27:
    if (-1 < arg) {
      local_e4 = arg;
      OSSL_PARAM_construct_uint(&local_118,"speed",&local_e4);
      goto LAB_00101990;
    }
  }
LAB_001018f0:
  type = 0;
LAB_001018f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return type;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_CIPHER_get_params(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(code **)(param_1 + 0xe8) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00102178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0xe8))(param_2);
    return uVar1;
  }
  return 0;
}



int EVP_CIPHER_CTX_set_params(long *param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if ((*param_1 != 0) && (pcVar1 = *(code **)(*param_1 + 0xf8), pcVar1 != (code *)0x0)) {
    iVar2 = (*pcVar1)(param_1[0x16]);
    if (iVar2 < 1) {
      return iVar2;
    }
    lVar4 = OSSL_PARAM_locate_const(param_2,"keylen");
    if ((lVar4 == 0) || (iVar3 = OSSL_PARAM_get_int(lVar4,param_1 + 0xd), iVar3 != 0)) {
      lVar4 = OSSL_PARAM_locate_const(param_2,"ivlen");
      if (lVar4 == 0) {
        return iVar2;
      }
      iVar3 = OSSL_PARAM_get_int(lVar4,(long)param_1 + 0x6c);
      if (iVar3 != 0) {
        return iVar2;
      }
      *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  }
  return 0;
}



undefined8 EVP_CIPHER_CTX_get_params(long *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((*param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xf0), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0010225f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1[0x16]);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_CIPHER_gettable_params(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x100);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    uVar1 = EVP_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0010229a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_CIPHER_settable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar1 = EVP_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001022e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x110))(0,uVar1);
    return uVar1;
  }
  return 0;
}



int EVP_CIPHER_CTX_set_key_length(EVP_CIPHER_CTX *x,int keylen)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (x->cipher[1].do_cipher == (_func_1090 *)0x0) {
    if ((x->cipher->flags & 0x80) != 0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        iVar1 = EVP_CIPHER_CTX_ctrl(x,1,keylen,(void *)0x0);
        return iVar1;
      }
      goto LAB_001024b6;
    }
    iVar1 = EVP_CIPHER_CTX_get_key_length();
    if (iVar1 != keylen) {
      if ((keylen < 1) || ((x->cipher->flags & 8) == 0)) {
        ERR_new();
        uVar2 = 0x579;
        goto LAB_0010241d;
      }
LAB_0010245a:
      x->key_len = keylen;
    }
LAB_0010245d:
    iVar1 = 1;
  }
  else {
    local_78 = (undefined1  [16])0x0;
    local_68 = (undefined1  [16])0x0;
    local_58 = (undefined1  [16])0x0;
    local_48 = (undefined1  [16])0x0;
    local_38 = (undefined1  [16])0x0;
    iVar1 = EVP_CIPHER_CTX_get_key_length();
    if (iVar1 == keylen) goto LAB_0010245d;
    uVar2 = EVP_CIPHER_settable_ctx_params(x->cipher);
    lVar3 = OSSL_PARAM_locate_const(uVar2,"keylen");
    if (lVar3 == 0) {
      ERR_new();
      uVar2 = 0x55d;
LAB_0010241d:
      ERR_set_debug("crypto/evp/evp_enc.c",uVar2,"EVP_CIPHER_CTX_set_key_length");
      ERR_set_error(6,0x82,0);
    }
    else {
      OSSL_PARAM_construct_size_t(&local_b8,"keylen",local_80);
      local_78._8_8_ = uStack_b0;
      local_78._0_8_ = local_b8;
      local_58._0_8_ = local_98;
      local_68._8_8_ = uStack_a0;
      local_68._0_8_ = local_a8;
      iVar1 = OSSL_PARAM_set_int(local_78,keylen);
      if (iVar1 != 0) {
        iVar1 = evp_do_ciph_ctx_setparams(x->cipher,x[1].engine,local_78);
        if (0 < iVar1) goto LAB_0010245a;
      }
    }
    iVar1 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_001024b6:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 EVP_CIPHER_gettable_ctx_params(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x108) != 0) {
    uVar1 = EVP_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x001024f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x108))(0,uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_CIPHER_CTX_settable_params(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(*param_1 + 0x110) != 0) {
    uVar1 = EVP_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0010254c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x110))(param_1[0x16],uVar1);
    return uVar1;
  }
  return 0;
}



undefined8 EVP_CIPHER_CTX_gettable_params(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (*(long *)(*param_1 + 0x108) != 0) {
    uVar1 = EVP_CIPHER_get0_provider();
    uVar1 = ossl_provider_ctx(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0010259c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x108))(param_1[0x16],uVar1);
    return uVar1;
  }
  return 0;
}



int EVP_CIPHER_CTX_rand_key(EVP_CIPHER_CTX *ctx,uchar *key)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((ctx->cipher->flags & 0x200) == 0) {
    uVar2 = EVP_CIPHER_get0_provider();
    uVar2 = ossl_provider_libctx(uVar2);
    iVar1 = EVP_CIPHER_CTX_get_key_length(ctx);
    uVar3 = 0;
    if (0 < iVar1) {
      iVar1 = RAND_priv_bytes_ex(uVar2,key,(long)iVar1,0);
      uVar3 = (uint)(0 < iVar1);
    }
    return uVar3;
  }
  iVar1 = EVP_CIPHER_CTX_ctrl(ctx,6,0,key);
  return iVar1;
}



void evp_cipher_new(void)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x128,"crypto/evp/evp_enc.c",0x733);
  if (lVar1 != 0) {
    LOCK();
    *(undefined4 *)(lVar1 + 0x80) = 1;
    UNLOCK();
  }
  return;
}



void EVP_CIPHER_fetch(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch(param_1,2,param_2,param_3,evp_cipher_from_algorithm,evp_cipher_up_ref,
                    evp_cipher_free);
  return;
}



void evp_cipher_fetch_from_prov(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_fetch_from_prov
            (param_1,2,param_2,param_3,evp_cipher_from_algorithm,evp_cipher_up_ref,evp_cipher_free);
  return;
}



bool EVP_CIPHER_can_pipeline(long param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(long *)(param_1 + 0xc0) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 200) == 0) {
      return false;
    }
  }
  else {
    if (*(long *)(param_1 + 0xb8) == 0) {
      return false;
    }
    if (*(long *)(param_1 + 200) == 0) {
      return false;
    }
  }
  return *(long *)(param_1 + 0xd0) != 0;
}



undefined8 EVP_CIPHER_up_ref(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    return 1;
  }
  LOCK();
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
  UNLOCK();
  return 1;
}



void evp_cipher_up_ref(void)

{
  EVP_CIPHER_up_ref();
  return;
}



void evp_cipher_free_int(void *param_1)

{
  CRYPTO_free(*(void **)((long)param_1 + 0x68));
  ossl_provider_free(*(undefined8 *)((long)param_1 + 0x78));
  CRYPTO_free(param_1);
  return;
}



void EVP_CIPHER_free(long param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x18) == 0)) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x80);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      evp_cipher_free_int();
      return;
    }
    if (iVar2 + -1 < 1) {
      evp_cipher_free_int();
      return;
    }
  }
  return;
}



undefined8 EVP_CIPHER_CTX_reset(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *ptr;
  byte bVar5;
  
  bVar5 = 0;
  if (param_1 == (long *)0x0) {
    return 1;
  }
  lVar1 = *param_1;
  if (lVar1 == 0) {
LAB_001028fd:
    ptr = (void *)param_1[0xf];
  }
  else {
    if (*(long *)(lVar1 + 0x78) != 0) {
      if (param_1[0x16] != 0) {
        if (*(code **)(lVar1 + 0xd8) != (code *)0x0) {
          (**(code **)(lVar1 + 0xd8))();
        }
        param_1[0x16] = 0;
      }
      if (param_1[0x17] != 0) {
        EVP_CIPHER_free();
      }
      goto LAB_0010286a;
    }
    if ((*(code **)(lVar1 + 0x30) != (code *)0x0) &&
       (uVar2 = (**(code **)(lVar1 + 0x30))(), (int)uVar2 == 0)) {
      return uVar2;
    }
    ptr = (void *)param_1[0xf];
    if ((ptr != (void *)0x0) && (*(int *)(*param_1 + 0x38) != 0)) {
      OPENSSL_cleanse(ptr,(long)*(int *)(*param_1 + 0x38));
      goto LAB_001028fd;
    }
  }
  CRYPTO_free(ptr);
  ENGINE_finish((ENGINE *)param_1[1]);
LAB_0010286a:
  *param_1 = 0;
  param_1[0x17] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0xc0U >> 3)
      ; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
  }
  *(undefined4 *)((long)param_1 + 0x6c) = 0xffffffff;
  return 1;
}



void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *a)

{
  if (a != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_reset();
    CRYPTO_free(a);
    return;
  }
  return;
}



int EVP_CIPHER_CTX_copy(EVP_CIPHER_CTX *out,EVP_CIPHER_CTX *in)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ENGINE *pEVar5;
  void *pvVar6;
  undefined8 uVar7;
  EVP_CIPHER *pEVar8;
  
  if ((in == (EVP_CIPHER_CTX *)0x0) || (pEVar8 = in->cipher, pEVar8 == (EVP_CIPHER *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x6f3,"EVP_CIPHER_CTX_copy");
    ERR_set_error(6,0x6f,0);
  }
  else {
    if (pEVar8[1].do_cipher == (_func_1090 *)0x0) {
      if ((in->engine != (ENGINE *)0x0) && (iVar4 = ENGINE_init(in->engine), iVar4 == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x717,"EVP_CIPHER_CTX_copy");
        ERR_set_error(6,0x80026,0);
        return 0;
      }
      EVP_CIPHER_CTX_reset(out);
      pEVar5 = in->engine;
      out->cipher = in->cipher;
      out->engine = pEVar5;
      iVar4 = in->buf_len;
      uVar7 = *(undefined8 *)in->oiv;
      out->encrypt = in->encrypt;
      out->buf_len = iVar4;
      *(undefined8 *)out->oiv = uVar7;
      uVar7 = *(undefined8 *)in->iv;
      *(undefined8 *)(out->oiv + 8) = *(undefined8 *)(in->oiv + 8);
      *(undefined8 *)out->iv = uVar7;
      uVar7 = *(undefined8 *)in->buf;
      *(undefined8 *)(out->iv + 8) = *(undefined8 *)(in->iv + 8);
      *(undefined8 *)out->buf = uVar7;
      uVar7 = *(undefined8 *)(in->buf + 0x10);
      *(undefined8 *)(out->buf + 8) = *(undefined8 *)(in->buf + 8);
      *(undefined8 *)(out->buf + 0x10) = uVar7;
      iVar4 = in->num;
      uVar2 = *(undefined4 *)&in->field_0x5c;
      *(undefined8 *)(out->buf + 0x18) = *(undefined8 *)(in->buf + 0x18);
      out->num = iVar4;
      *(undefined4 *)&out->field_0x5c = uVar2;
      iVar4 = in->key_len;
      uVar2 = *(undefined4 *)&in->field_0x6c;
      out->app_data = in->app_data;
      out->key_len = iVar4;
      *(undefined4 *)&out->field_0x6c = uVar2;
      pvVar6 = in->cipher_data;
      out->flags = in->flags;
      out->cipher_data = pvVar6;
      iVar4 = in->block_mask;
      uVar7 = *(undefined8 *)in->final;
      out->final_used = in->final_used;
      out->block_mask = iVar4;
      *(undefined8 *)out->final = uVar7;
      uVar7 = *(undefined8 *)(in->final + 0x10);
      *(undefined8 *)(out->final + 8) = *(undefined8 *)(in->final + 8);
      *(undefined8 *)(out->final + 0x10) = uVar7;
      pEVar8 = in[1].cipher;
      *(undefined8 *)(out->final + 0x18) = *(undefined8 *)(in->final + 0x18);
      out[1].cipher = pEVar8;
      iVar4 = in[1].encrypt;
      iVar3 = in[1].buf_len;
      out[1].engine = in[1].engine;
      out[1].encrypt = iVar4;
      out[1].buf_len = iVar3;
      pEVar8 = in->cipher;
      if ((in->cipher_data != (void *)0x0) && (*(int *)&pEVar8->set_asn1_parameters != 0)) {
        pvVar6 = CRYPTO_malloc(*(int *)&pEVar8->set_asn1_parameters,"crypto/evp/evp_enc.c",0x720);
        out->cipher_data = pvVar6;
        if (pvVar6 == (void *)0x0) {
          out->cipher = (EVP_CIPHER *)0x0;
          return 0;
        }
        pEVar8 = in->cipher;
        memcpy(pvVar6,in->cipher_data,(long)*(int *)&pEVar8->set_asn1_parameters);
      }
      if (((pEVar8->flags & 0x400) != 0) &&
         (iVar4 = (*(code *)pEVar8->app_data)(in,8,0,out), iVar4 == 0)) {
        out->cipher = (EVP_CIPHER *)0x0;
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x72b,"EVP_CIPHER_CTX_copy");
        ERR_set_error(6,0x86,0);
        return 0;
      }
      return 1;
    }
    if (*(long *)&pEVar8[2].ctx_size == 0) {
      ERR_new();
      uVar7 = 0x6fb;
    }
    else {
      EVP_CIPHER_CTX_reset();
      pEVar5 = in->engine;
      out->cipher = in->cipher;
      out->engine = pEVar5;
      iVar4 = in->buf_len;
      uVar7 = *(undefined8 *)in->oiv;
      out->encrypt = in->encrypt;
      out->buf_len = iVar4;
      *(undefined8 *)out->oiv = uVar7;
      uVar7 = *(undefined8 *)in->iv;
      *(undefined8 *)(out->oiv + 8) = *(undefined8 *)(in->oiv + 8);
      *(undefined8 *)out->iv = uVar7;
      uVar7 = *(undefined8 *)in->buf;
      *(undefined8 *)(out->iv + 8) = *(undefined8 *)(in->iv + 8);
      *(undefined8 *)out->buf = uVar7;
      uVar7 = *(undefined8 *)(in->buf + 0x10);
      *(undefined8 *)(out->buf + 8) = *(undefined8 *)(in->buf + 8);
      *(undefined8 *)(out->buf + 0x10) = uVar7;
      iVar4 = in->num;
      uVar2 = *(undefined4 *)&in->field_0x5c;
      *(undefined8 *)(out->buf + 0x18) = *(undefined8 *)(in->buf + 0x18);
      out->num = iVar4;
      *(undefined4 *)&out->field_0x5c = uVar2;
      iVar4 = in->key_len;
      uVar2 = *(undefined4 *)&in->field_0x6c;
      out->app_data = in->app_data;
      out->key_len = iVar4;
      *(undefined4 *)&out->field_0x6c = uVar2;
      pvVar6 = in->cipher_data;
      out->flags = in->flags;
      out->cipher_data = pvVar6;
      iVar4 = in->block_mask;
      uVar7 = *(undefined8 *)in->final;
      out->final_used = in->final_used;
      out->block_mask = iVar4;
      *(undefined8 *)out->final = uVar7;
      uVar7 = *(undefined8 *)(in->final + 0x10);
      *(undefined8 *)(out->final + 8) = *(undefined8 *)(in->final + 8);
      *(undefined8 *)(out->final + 0x10) = uVar7;
      pEVar8 = in[1].cipher;
      *(undefined8 *)(out->final + 0x18) = *(undefined8 *)(in->final + 0x18);
      out[1].cipher = pEVar8;
      iVar4 = in[1].encrypt;
      iVar3 = in[1].buf_len;
      out[1].engine = in[1].engine;
      out[1].encrypt = iVar4;
      out[1].buf_len = iVar3;
      lVar1._0_4_ = in[1].encrypt;
      lVar1._4_4_ = in[1].buf_len;
      out[1].engine = (ENGINE *)0x0;
      if ((lVar1 != 0) && (iVar4 = EVP_CIPHER_up_ref(), iVar4 == 0)) {
        out[1].encrypt = 0;
        out[1].buf_len = 0;
        return 0;
      }
      pEVar5 = (ENGINE *)(**(code **)&in->cipher[2].ctx_size)(in[1].engine);
      out[1].engine = pEVar5;
      if (pEVar5 != (ENGINE *)0x0) {
        return 1;
      }
      ERR_new();
      uVar7 = 0x70b;
    }
    ERR_set_debug("crypto/evp/evp_enc.c",uVar7,"EVP_CIPHER_CTX_copy");
    ERR_set_error(6,0xbe,0);
  }
  return 0;
}



EVP_CIPHER_CTX * EVP_CIPHER_CTX_dup(EVP_CIPHER_CTX *param_1)

{
  int iVar1;
  EVP_CIPHER_CTX *out;
  
  out = EVP_CIPHER_CTX_new();
  if (out != (EVP_CIPHER_CTX *)0x0) {
    iVar1 = EVP_CIPHER_CTX_copy(out,param_1);
    if (iVar1 != 0) {
      return out;
    }
    EVP_CIPHER_CTX_free(out);
  }
  return (EVP_CIPHER_CTX *)0x0;
}



int EVP_CipherInit_SKEY(EVP_CIPHER_CTX *param_1,EVP_CIPHER *param_2,uchar *param_3,uchar *param_4,
                       int param_5,int param_6)

{
  ulong uVar1;
  code *pcVar2;
  int iVar3;
  ENGINE *pEVar4;
  EVP_CIPHER *pEVar5;
  undefined8 uVar6;
  _func_1089 *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  ASN1_TYPE *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == -1) {
    param_6 = param_1->encrypt;
  }
  else {
    param_1->encrypt = (uint)(param_6 != 0);
  }
  if (param_2 == (EVP_CIPHER *)0x0) {
    param_2 = param_1->cipher;
    if (param_2 != (EVP_CIPHER *)0x0) {
      if ((param_1->engine != (ENGINE *)0x0) || (*(int *)&param_2->init == 2)) goto LAB_00102ec3;
      goto LAB_00102dd6;
    }
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",500,"evp_cipher_init_skey_internal");
    ERR_set_error(6,0x83,0);
LAB_00102ef3:
    iVar3 = 0;
  }
  else {
    if ((param_1->engine != (ENGINE *)0x0) || (*(int *)&param_2->init == 2)) {
LAB_00102ec3:
      ERR_new();
      uVar6 = 0x1ff;
LAB_00102ed4:
      ERR_set_debug("crypto/evp/evp_enc.c",uVar6,"evp_cipher_init_skey_internal");
      ERR_set_error(6,0x86,0);
      goto LAB_00102ef3;
    }
    pEVar5 = param_1->cipher;
    if (pEVar5 != (EVP_CIPHER *)0x0) {
      if (*(code **)&pEVar5->ctx_size != (code *)0x0) {
        iVar3 = (**(code **)&pEVar5->ctx_size)(param_1);
        if (iVar3 == 0) goto LAB_00102ef3;
        pEVar5 = param_1->cipher;
      }
      CRYPTO_clear_free(param_1->cipher_data,(long)*(int *)&pEVar5->set_asn1_parameters,
                        "crypto/evp/evp_enc.c",0x209);
      param_1->cipher_data = (void *)0x0;
      if (param_1->cipher != (EVP_CIPHER *)0x0) {
        uVar1 = param_1->flags;
        EVP_CIPHER_CTX_reset(param_1);
        param_1->encrypt = param_6;
        param_1->flags = uVar1;
      }
    }
LAB_00102dd6:
    if (param_2[1].do_cipher == (_func_1090 *)0x0) {
      ERR_new();
      uVar6 = 0x21b;
      goto LAB_00102ed4;
    }
    if (param_2 != *(EVP_CIPHER **)&param_1[1].encrypt) {
      iVar3 = EVP_CIPHER_up_ref(param_2);
      if (iVar3 == 0) {
        ERR_new();
        uVar6 = 0x221;
        goto LAB_00102ed4;
      }
      uVar6._0_4_ = param_1[1].encrypt;
      uVar6._4_4_ = param_1[1].buf_len;
      EVP_CIPHER_free(uVar6);
      *(EVP_CIPHER **)&param_1[1].encrypt = param_2;
    }
    pEVar4 = param_1[1].engine;
    param_1->cipher = param_2;
    if (pEVar4 == (ENGINE *)0x0) {
      pcVar2 = *(code **)&param_2[1].ctx_size;
      uVar6 = ossl_provider_ctx(param_2[1].do_cipher);
      pEVar4 = (ENGINE *)(*pcVar2)(uVar6);
      param_1[1].engine = pEVar4;
      if (pEVar4 == (ENGINE *)0x0) {
        ERR_new();
        uVar6 = 0x22d;
        goto LAB_00102ed4;
      }
    }
    if ((param_3 != (uchar *)0x0) &&
       (param_1->cipher[1].do_cipher != *(_func_1090 **)(*(long *)(param_3 + 0x18) + 0x18))) {
      ERR_new();
      uVar6 = 0x233;
      goto LAB_00102ed4;
    }
    if (((param_1->flags & 0x100) != 0) &&
       (iVar3 = EVP_CIPHER_CTX_set_padding(param_1,0), iVar3 == 0)) goto LAB_00102ef3;
    if (param_4 == (uchar *)0x0) {
      param_5 = 0;
    }
    pEVar5 = param_1->cipher;
    if (param_6 == 0) {
      UNRECOVERED_JUMPTABLE = pEVar5[3].init;
      if (UNRECOVERED_JUMPTABLE != (_func_1089 *)0x0) {
LAB_00102e67:
        if (param_3 != (uchar *)0x0) {
          param_3 = *(uchar **)(param_3 + 0x10);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102ea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          iVar3 = (*UNRECOVERED_JUMPTABLE)
                            ((EVP_CIPHER_CTX *)param_1[1].engine,param_3,param_4,param_5);
          return iVar3;
        }
        goto LAB_00103140;
      }
      local_50 = (ASN1_TYPE *)0x0;
      local_48 = 0;
      if (param_3 != (uchar *)0x0) {
        iVar3 = EVP_SKEY_get0_raw_key(param_3,&local_50,&local_48);
        if (iVar3 == 0) {
          ERR_new();
          uVar6 = 0x263;
          goto LAB_00102ed4;
        }
        pEVar5 = param_1->cipher;
      }
      iVar3 = (*pEVar5[1].get_asn1_parameters)((EVP_CIPHER_CTX *)param_1[1].engine,local_50);
    }
    else {
      UNRECOVERED_JUMPTABLE = (_func_1089 *)pEVar5[3].flags;
      if (UNRECOVERED_JUMPTABLE != (_func_1089 *)0x0) goto LAB_00102e67;
      local_50 = (ASN1_TYPE *)0x0;
      local_48 = 0;
      if (param_3 != (uchar *)0x0) {
        iVar3 = EVP_SKEY_get0_raw_key(param_3,&local_50,&local_48);
        if (iVar3 == 0) {
          ERR_new();
          uVar6 = 0x24e;
          goto LAB_00102ed4;
        }
        pEVar5 = param_1->cipher;
      }
      iVar3 = (*pEVar5[1].set_asn1_parameters)((EVP_CIPHER_CTX *)param_1[1].engine,local_50);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
LAB_00103140:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int evp_cipher_init_internal
              (EVP_CIPHER_CTX *param_1,EVP_CIPHER *param_2,ENGINE *param_3,ASN1_TYPE *param_4,
              uchar *param_5,int param_6,char param_7,long param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  _func_1090 *p_Var3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  EVP_CIPHER *pEVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  EVP_CIPHER *pEVar12;
  void *pvVar13;
  ENGINE *pEVar14;
  uint uVar15;
  ulong uVar16;
  _func_1089 *UNRECOVERED_JUMPTABLE;
  uint uVar17;
  char *pcVar18;
  long lVar19;
  _func_1092 *UNRECOVERED_JUMPTABLE_00;
  uint uVar20;
  long in_FS_OFFSET;
  byte bVar21;
  ENGINE *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90 [10];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 == -1) {
    uVar20 = param_1->encrypt;
    if (param_2 != (EVP_CIPHER *)0x0) goto LAB_001031bb;
LAB_001035fd:
    pEVar9 = param_1->cipher;
    if (pEVar9 != (EVP_CIPHER *)0x0) {
      pEVar12 = pEVar9;
      if (param_7 == '\0') {
        bVar4 = false;
        if (param_1->engine == (ENGINE *)0x0) goto LAB_00103622;
        goto LAB_001032c7;
      }
      goto LAB_001033ed;
    }
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x76,"evp_cipher_init_internal");
    ERR_set_error(6,0x83,0);
    goto LAB_001035c0;
  }
  uVar20 = (uint)(param_6 != 0);
  param_1->encrypt = (uint)(param_6 != 0);
  if (param_2 == (EVP_CIPHER *)0x0) goto LAB_001035fd;
LAB_001031bb:
  if (param_7 == '\0') {
    if (param_1->engine == (ENGINE *)0x0) {
      if (param_3 == (ENGINE *)0x0) {
LAB_00103359:
        local_c0 = ENGINE_get_cipher_engine(param_2->nid);
        if (param_1->engine == (ENGINE *)0x0) {
          pEVar9 = param_1->cipher;
          if (local_c0 != (ENGINE *)0x0) goto LAB_001031f4;
LAB_0010337d:
          if (*(int *)&param_2->init != 2) {
            pEVar12 = param_2;
            if (pEVar9 == (EVP_CIPHER *)0x0) goto LAB_001033ed;
            if (*(code **)&pEVar9->ctx_size != (code *)0x0) {
              iVar5 = (**(code **)&pEVar9->ctx_size)(param_1);
              if (iVar5 == 0) goto LAB_001035c0;
              pEVar9 = param_1->cipher;
            }
            CRYPTO_clear_free(param_1->cipher_data,(long)*(int *)&pEVar9->set_asn1_parameters,
                              "crypto/evp/evp_enc.c",0xa7);
            param_1->cipher_data = (void *)0x0;
            goto LAB_001033d0;
          }
          if (*(EVP_CIPHER **)&param_1[1].encrypt == pEVar9) {
            param_1->cipher = (EVP_CIPHER *)0x0;
            EVP_CIPHER_free(pEVar9);
            param_1[1].encrypt = 0;
            param_1[1].buf_len = 0;
            local_c0 = (ENGINE *)0x0;
            goto LAB_0010322a;
          }
          EVP_CIPHER_free();
          pEVar9 = param_1->cipher;
          param_1[1].encrypt = 0;
          param_1[1].buf_len = 0;
          if (pEVar9 != (EVP_CIPHER *)0x0) {
            uVar8 = param_1->flags;
            param_3 = (ENGINE *)0x0;
            EVP_CIPHER_CTX_reset(param_1);
            param_1->encrypt = uVar20;
            param_1->flags = uVar8;
            goto LAB_00103274;
          }
LAB_0010370c:
          param_3 = (ENGINE *)0x0;
        }
        else {
          pEVar9 = param_1->cipher;
          if (pEVar9 == *(EVP_CIPHER **)&param_1[1].encrypt) {
            param_1->cipher = (EVP_CIPHER *)0x0;
            EVP_CIPHER_free(pEVar9);
            param_1[1].encrypt = 0;
            param_1[1].buf_len = 0;
            goto LAB_0010322a;
          }
          EVP_CIPHER_free();
          pEVar9 = param_1->cipher;
          param_1[1].encrypt = 0;
          param_1[1].buf_len = 0;
          if (pEVar9 != (EVP_CIPHER *)0x0) goto LAB_00103230;
LAB_00103700:
          param_3 = local_c0;
          if (local_c0 == (ENGINE *)0x0) goto LAB_0010370c;
LAB_0010325d:
          param_2 = ENGINE_get_cipher(param_3,param_2->nid);
          if (param_2 == (EVP_CIPHER *)0x0) {
            ERR_new();
            uVar7 = 0x173;
            goto LAB_001035a1;
          }
        }
LAB_00103274:
        iVar5 = *(int *)&param_2->set_asn1_parameters;
        param_1->engine = param_3;
        param_1->cipher = param_2;
        if (iVar5 == 0) {
          param_1->cipher_data = (void *)0x0;
          pEVar9 = param_2;
        }
        else {
          pvVar13 = (void *)CRYPTO_zalloc((long)iVar5,"crypto/evp/evp_enc.c",0x184);
          param_1->cipher_data = pvVar13;
          if (pvVar13 == (void *)0x0) {
            param_1->cipher = (EVP_CIPHER *)0x0;
            goto LAB_001035c0;
          }
          pEVar9 = param_1->cipher;
        }
        iVar5 = param_2->key_len;
        param_1->flags = param_1->flags & 1;
        param_1->key_len = iVar5;
        if ((pEVar9->flags & 0x40) == 0) goto LAB_001032c7;
        iVar5 = EVP_CIPHER_CTX_ctrl(param_1,0,0,(void *)0x0);
        if (iVar5 < 1) {
          param_1->cipher = (EVP_CIPHER *)0x0;
          ERR_new();
          uVar7 = 0x192;
LAB_001035a1:
          ERR_set_debug("crypto/evp/evp_enc.c",uVar7,"evp_cipher_init_internal");
          ERR_set_error(6,0x86,0);
          goto LAB_001035c0;
        }
      }
      else {
        pEVar9 = param_1->cipher;
        bVar4 = true;
LAB_00103622:
        if (param_3 != (ENGINE *)0x0) {
          local_c0 = (ENGINE *)0x0;
          goto LAB_001031f9;
        }
        if (bVar4) goto LAB_0010337d;
        pEVar12 = pEVar9;
        if ((pEVar9 == (EVP_CIPHER *)0x0) || (*(int *)&pEVar9->init != 2)) goto LAB_001033ed;
        if (*(EVP_CIPHER **)&param_1[1].encrypt == pEVar9) {
          param_1->cipher = (EVP_CIPHER *)0x0;
          EVP_CIPHER_free();
          param_1[1].encrypt = 0;
          param_1[1].buf_len = 0;
        }
        else {
          EVP_CIPHER_free(*(EVP_CIPHER **)&param_1[1].encrypt);
          param_1[1].encrypt = 0;
          param_1[1].buf_len = 0;
        }
      }
LAB_001032bb:
      pEVar9 = param_1->cipher;
      if (pEVar9 == (EVP_CIPHER *)0x0) goto LAB_001035c0;
    }
    else {
      pEVar9 = param_1->cipher;
      if ((pEVar9 == (EVP_CIPHER *)0x0) || (param_2->nid != pEVar9->nid)) {
        if (param_3 == (ENGINE *)0x0) goto LAB_00103359;
        local_c0 = (ENGINE *)0x0;
LAB_001031f4:
        bVar4 = true;
LAB_001031f9:
        if (*(EVP_CIPHER **)&param_1[1].encrypt == pEVar9) {
          param_1->cipher = (EVP_CIPHER *)0x0;
        }
        EVP_CIPHER_free();
        param_1[1].encrypt = 0;
        param_1[1].buf_len = 0;
        if (!bVar4) goto LAB_001032bb;
LAB_0010322a:
        if (param_1->cipher != (EVP_CIPHER *)0x0) {
LAB_00103230:
          uVar8 = param_1->flags;
          EVP_CIPHER_CTX_reset(param_1);
          param_1->encrypt = uVar20;
          param_1->flags = uVar8;
        }
        if (param_3 == (ENGINE *)0x0) goto LAB_00103700;
        iVar5 = ENGINE_init(param_3);
        if (iVar5 != 0) goto LAB_0010325d;
        ERR_new();
        uVar7 = 0x163;
        goto LAB_001035a1;
      }
    }
LAB_001032c7:
    if (((pEVar9->block_size - 8U & 0xfffffff7) != 0) && (pEVar9->block_size != 1)) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16"
                  ,"crypto/evp/evp_enc.c",0x19e);
    }
    if ((param_1->flags & 1) == 0) {
      uVar7 = EVP_CIPHER_CTX_get0_cipher(param_1);
      iVar5 = EVP_CIPHER_get_mode(uVar7);
      if (iVar5 == 0x10002) {
        ERR_new();
        ERR_set_debug("crypto/evp/evp_enc.c",0x1a4,"evp_cipher_init_internal");
        ERR_set_error(6,0xaa,0);
        goto LAB_001035c0;
      }
    }
    uVar7 = EVP_CIPHER_CTX_get0_cipher(param_1);
    uVar8 = EVP_CIPHER_get_flags(uVar7);
    if ((uVar8 & 0x10) == 0) {
      uVar7 = EVP_CIPHER_CTX_get0_cipher(param_1);
      iVar5 = EVP_CIPHER_get_mode(uVar7);
      if (iVar5 < 5) {
        if (iVar5 < 3) {
          if (iVar5 != 2) {
            if (-1 < iVar5) goto LAB_001032fe;
            goto LAB_001035c0;
          }
        }
        else {
          param_1->num = 0;
        }
        uVar6 = EVP_CIPHER_CTX_get_iv_length(param_1);
        if (0x10 < uVar6) {
          ERR_new();
          uVar7 = 0x1b9;
LAB_00103d13:
          ERR_set_debug("crypto/evp/evp_enc.c",uVar7,"evp_cipher_init_internal");
          ERR_set_error(6,0xc2,0);
          goto LAB_001035c0;
        }
        if (param_5 != (uchar *)0x0) {
          if (uVar6 < 8) {
            if ((uVar6 & 4) == 0) {
              if ((uVar6 != 0) && (param_1->oiv[0] = *param_5, (uVar6 & 2) != 0)) {
                *(undefined2 *)(param_1->oiv + ((ulong)uVar6 - 2)) =
                     *(undefined2 *)(param_5 + ((ulong)uVar6 - 2));
              }
            }
            else {
              *(undefined4 *)param_1->oiv = *(undefined4 *)param_5;
              *(undefined4 *)(param_1->oiv + ((ulong)uVar6 - 4)) =
                   *(undefined4 *)(param_5 + ((ulong)uVar6 - 4));
            }
          }
          else {
            uVar8 = (ulong)(param_1->oiv + 8) & 0xfffffffffffffff8;
            *(undefined8 *)param_1->oiv = *(undefined8 *)param_5;
            *(undefined8 *)(param_1->oiv + ((ulong)uVar6 - 8)) =
                 *(undefined8 *)(param_5 + ((ulong)uVar6 - 8));
            lVar19 = (long)param_1 + (0x18 - uVar8);
            uVar15 = (int)lVar19 + uVar6 & 0xfffffff8;
            if (7 < uVar15) {
              uVar17 = 0;
              do {
                uVar16 = (ulong)uVar17;
                uVar17 = uVar17 + 8;
                *(undefined8 *)(uVar8 + uVar16) = *(undefined8 *)(param_5 + (uVar16 - lVar19));
              } while (uVar17 < uVar15);
            }
          }
        }
        if (uVar6 < 8) {
          if ((uVar6 & 4) == 0) {
            if ((uVar6 != 0) && (param_1->iv[0] = param_1->oiv[0], (uVar6 & 2) != 0)) {
              *(undefined2 *)(param_1->oiv + (ulong)uVar6 + 0xe) =
                   *(undefined2 *)(param_1->oiv + ((ulong)uVar6 - 2));
            }
          }
          else {
            *(undefined4 *)param_1->iv = *(undefined4 *)param_1->oiv;
            *(undefined4 *)(param_1->oiv + (ulong)uVar6 + 0xc) =
                 *(undefined4 *)(param_1->oiv + ((ulong)uVar6 - 4));
          }
        }
        else {
          *(undefined8 *)param_1->iv = *(undefined8 *)param_1->oiv;
          *(undefined8 *)(param_1->oiv + (ulong)uVar6 + 8) =
               *(undefined8 *)(param_1->oiv + ((ulong)uVar6 - 8));
          uVar8 = (ulong)(param_1->iv + 8) & 0xfffffffffffffff8;
          lVar19 = (long)param_1 + (0x28 - uVar8);
          uVar6 = uVar6 + (int)lVar19 & 0xfffffff8;
          if (7 < uVar6) {
            uVar15 = 0;
            do {
              uVar16 = (ulong)uVar15;
              uVar15 = uVar15 + 8;
              *(undefined8 *)(uVar8 + uVar16) =
                   *(undefined8 *)((long)param_1 + uVar16 + (0x18 - lVar19));
            } while (uVar15 < uVar6);
          }
        }
      }
      else {
        if (iVar5 != 5) goto LAB_001035c0;
        param_1->num = 0;
        if (param_5 != (uchar *)0x0) {
          uVar6 = EVP_CIPHER_CTX_get_iv_length(param_1);
          if (0xf < uVar6 - 1) {
            ERR_new();
            uVar7 = 0x1c7;
            goto LAB_00103d13;
          }
          if (uVar6 < 8) {
            if ((uVar6 & 4) == 0) {
              if ((uVar6 != 0) && (param_1->iv[0] = *param_5, (uVar6 & 2) != 0)) {
                *(undefined2 *)(param_1->oiv + (ulong)uVar6 + 0xe) =
                     *(undefined2 *)(param_5 + ((ulong)uVar6 - 2));
              }
            }
            else {
              *(undefined4 *)param_1->iv = *(undefined4 *)param_5;
              *(undefined4 *)(param_1->oiv + (ulong)uVar6 + 0xc) =
                   *(undefined4 *)(param_5 + ((ulong)uVar6 - 4));
            }
          }
          else {
            *(undefined8 *)param_1->iv = *(undefined8 *)param_5;
            *(undefined8 *)(param_1->oiv + (ulong)uVar6 + 8) =
                 *(undefined8 *)(param_5 + ((ulong)uVar6 - 8));
            uVar8 = (ulong)(param_1->iv + 8) & 0xfffffffffffffff8;
            lVar19 = (long)param_1 + (0x28 - uVar8);
            uVar6 = uVar6 + (int)lVar19 & 0xfffffff8;
            if (7 < uVar6) {
              uVar16 = 0;
              do {
                uVar15 = (int)uVar16 + 8;
                *(undefined8 *)(uVar8 + uVar16) = *(undefined8 *)(param_5 + (uVar16 - lVar19));
                uVar16 = (ulong)uVar15;
              } while (uVar15 < uVar6);
            }
          }
        }
      }
    }
LAB_001032fe:
    pEVar9 = param_1->cipher;
    if ((param_4 != (ASN1_TYPE *)0x0) || ((pEVar9->flags & 0x20) != 0)) {
      iVar5 = (*pEVar9->do_cipher)(param_1,(uchar *)param_4,param_5,(size_t)uVar20);
      if (iVar5 == 0) goto LAB_001035c0;
      pEVar9 = param_1->cipher;
    }
    iVar5 = pEVar9->block_size;
    param_1->buf_len = 0;
    param_1->final_used = 0;
    param_1->block_mask = iVar5 + -1;
LAB_00103346:
    iVar5 = 1;
  }
  else {
LAB_001033d0:
    pEVar12 = param_2;
    if (param_1->cipher != (EVP_CIPHER *)0x0) {
      uVar8 = param_1->flags;
      EVP_CIPHER_CTX_reset(param_1);
      param_1->encrypt = uVar20;
      param_1->flags = uVar8;
    }
LAB_001033ed:
    if (pEVar12[1].do_cipher == (_func_1090 *)0x0) {
      pcVar18 = "NULL";
      if (pEVar12->nid != 0) {
        pcVar18 = OBJ_nid2sn(pEVar12->nid);
      }
      pEVar12 = (EVP_CIPHER *)EVP_CIPHER_fetch(0,pcVar18,&_LC27);
      if (pEVar12 == (EVP_CIPHER *)0x0) goto LAB_001035c0;
      uVar1._0_4_ = param_1[1].encrypt;
      uVar1._4_4_ = param_1[1].buf_len;
      EVP_CIPHER_free(uVar1);
      p_Var3 = pEVar12[1].do_cipher;
      *(EVP_CIPHER **)&param_1[1].encrypt = pEVar12;
      if (p_Var3 != (_func_1090 *)0x0) goto LAB_00103438;
      ERR_new();
      uVar7 = 0xcf;
      goto LAB_001035a1;
    }
    if (*(EVP_CIPHER **)&param_1[1].encrypt != pEVar12) {
      iVar5 = EVP_CIPHER_up_ref(pEVar12);
      if (iVar5 == 0) {
        ERR_new();
        uVar7 = 0xd5;
        goto LAB_001035a1;
      }
      uVar7._0_4_ = param_1[1].encrypt;
      uVar7._4_4_ = param_1[1].buf_len;
      EVP_CIPHER_free(uVar7);
      *(EVP_CIPHER **)&param_1[1].encrypt = pEVar12;
    }
LAB_00103438:
    param_1->cipher = pEVar12;
    if ((param_7 == '\0') || (iVar5 = EVP_CIPHER_can_pipeline(pEVar12), iVar5 != 0)) {
      if (param_1[1].engine == (ENGINE *)0x0) {
        pcVar2 = *(code **)&param_1->cipher[1].ctx_size;
        uVar7 = ossl_provider_ctx(pEVar12[1].do_cipher);
        pEVar14 = (ENGINE *)(*pcVar2)(uVar7);
        param_1[1].engine = pEVar14;
        if (pEVar14 == (ENGINE *)0x0) {
          ERR_new();
          uVar7 = 0xe7;
          goto LAB_001035a1;
        }
      }
      if (((param_1->flags & 0x100) == 0) ||
         (iVar5 = EVP_CIPHER_CTX_set_padding(param_1,0), iVar5 != 0)) {
        if (param_8 != 0) {
          puVar10 = &local_b8;
          for (lVar19 = 0xf; lVar19 != 0; lVar19 = lVar19 + -1) {
            *puVar10 = 0;
            puVar10 = puVar10 + (ulong)bVar21 * -2 + 1;
          }
          puVar10 = (undefined8 *)OSSL_PARAM_locate_const(param_8,"keylen");
          if (puVar10 == (undefined8 *)0x0) {
            puVar11 = (undefined8 *)OSSL_PARAM_locate_const(param_8,"ivlen");
            puVar10 = &local_b8;
            if (puVar11 != (undefined8 *)0x0) goto LAB_001034cd;
          }
          else {
            local_b8 = *puVar10;
            uStack_b0 = puVar10[1];
            local_a8 = puVar10[2];
            uStack_a0 = puVar10[3];
            local_98 = puVar10[4];
            puVar11 = (undefined8 *)OSSL_PARAM_locate_const(param_8,"ivlen");
            puVar10 = local_90;
            if (puVar11 != (undefined8 *)0x0) {
LAB_001034cd:
              uVar7 = puVar11[1];
              *puVar10 = *puVar11;
              puVar10[1] = uVar7;
              uVar7 = puVar11[3];
              puVar10[2] = puVar11[2];
              puVar10[3] = uVar7;
              puVar10[4] = puVar11[4];
            }
            iVar5 = EVP_CIPHER_CTX_set_params(param_1,&local_b8);
            if (iVar5 == 0) {
              ERR_new();
              ERR_set_debug("crypto/evp/evp_enc.c",0x112,"evp_cipher_init_internal");
              ERR_set_error(6,0xdd,0);
              goto LAB_001035c0;
            }
          }
        }
        if (param_7 == '\0') {
          pEVar9 = param_1->cipher;
          if (uVar20 == 0) {
            UNRECOVERED_JUMPTABLE_00 = (_func_1092 *)pEVar9[1].get_asn1_parameters;
            if (UNRECOVERED_JUMPTABLE_00 != (_func_1092 *)0x0) goto LAB_0010351d;
            if ((param_4 == (ASN1_TYPE *)0x0) &&
               (UNRECOVERED_JUMPTABLE = pEVar9[3].init, UNRECOVERED_JUMPTABLE != (_func_1089 *)0x0))
            goto LAB_00103981;
            ERR_new();
            uVar7 = 0x143;
          }
          else {
            UNRECOVERED_JUMPTABLE_00 = pEVar9[1].set_asn1_parameters;
            if (UNRECOVERED_JUMPTABLE_00 != (_func_1092 *)0x0) {
LAB_0010351d:
              if (param_5 != (uchar *)0x0) {
                EVP_CIPHER_CTX_get_iv_length(param_1);
              }
              if (param_4 != (ASN1_TYPE *)0x0) {
                EVP_CIPHER_CTX_get_key_length(param_1);
              }
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00103587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                iVar5 = (*UNRECOVERED_JUMPTABLE_00)((EVP_CIPHER_CTX *)param_1[1].engine,param_4);
                return iVar5;
              }
              goto LAB_00103e11;
            }
            if ((param_4 == (ASN1_TYPE *)0x0) &&
               (UNRECOVERED_JUMPTABLE = (_func_1089 *)pEVar9[3].flags,
               UNRECOVERED_JUMPTABLE != (_func_1089 *)0x0)) {
LAB_00103981:
              iVar5 = 0;
              if (param_5 != (uchar *)0x0) {
                iVar5 = EVP_CIPHER_CTX_get_iv_length(param_1);
              }
              if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001039d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                iVar5 = (*UNRECOVERED_JUMPTABLE)
                                  ((EVP_CIPHER_CTX *)param_1[1].engine,(uchar *)0x0,param_5,iVar5);
                return iVar5;
              }
              goto LAB_00103e11;
            }
            ERR_new();
            uVar7 = 0x129;
          }
          goto LAB_001035a1;
        }
        goto LAB_00103346;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0xe0,"evp_cipher_init_internal");
      ERR_set_error(6,0xe6,0);
    }
LAB_001035c0:
    iVar5 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
LAB_00103e11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void EVP_CipherInit_ex2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 param_5,undefined8 param_6)

{
  evp_cipher_init_internal(param_1,param_2,0,param_3,param_4,param_5,0,param_6);
  return;
}



void EVP_EncryptInit_ex2(void)

{
  EVP_CipherInit_ex2();
  return;
}



void EVP_DecryptInit_ex2(void)

{
  EVP_CipherInit_ex2();
  return;
}



int EVP_CipherInit(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,uchar *key,uchar *iv,int enc)

{
  int iVar1;
  
  if (cipher != (EVP_CIPHER *)0x0) {
    EVP_CIPHER_CTX_reset();
  }
  iVar1 = evp_cipher_init_internal(ctx,cipher,0,key,iv,enc,0,0);
  return iVar1;
}



int EVP_EncryptInit(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,uchar *key,uchar *iv)

{
  int iVar1;
  
  iVar1 = EVP_CipherInit(ctx,cipher,key,iv,1);
  return iVar1;
}



int EVP_DecryptInit(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,uchar *key,uchar *iv)

{
  int iVar1;
  
  iVar1 = EVP_CipherInit(ctx,cipher,key,iv,0);
  return iVar1;
}



int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,ENGINE *impl,uchar *key,uchar *iv,
                     int enc)

{
  int iVar1;
  
  iVar1 = evp_cipher_init_internal();
  return iVar1;
}



int EVP_EncryptInit_ex(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,ENGINE *impl,uchar *key,uchar *iv)

{
  int iVar1;
  
  iVar1 = EVP_CipherInit_ex(ctx,cipher,impl,key,iv,1);
  return iVar1;
}



int EVP_DecryptInit_ex(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,ENGINE *impl,uchar *key,uchar *iv)

{
  int iVar1;
  
  iVar1 = EVP_CipherInit_ex(ctx,cipher,impl,key,iv,0);
  return iVar1;
}



undefined8
EVP_CipherPipelineEncryptInit
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_5 < 0x21) {
    param_1[0x15] = param_5;
    iVar1 = evp_cipher_init_internal(param_1,param_2,0,0,0,1);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0xb8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00103feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0xb8))
                          (param_1[0x16],param_3,param_4,param_5,param_6,param_7);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x2a1,"EVP_CipherPipelineEncryptInit");
      ERR_set_error(6,0x86,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x296,"EVP_CipherPipelineEncryptInit");
    ERR_set_error(6,0xe7,0);
  }
  return 0;
}



undefined8
EVP_CipherPipelineDecryptInit
          (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
          undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_5 < 0x21) {
    param_1[0x15] = param_5;
    iVar1 = evp_cipher_init_internal(param_1,param_2,0,0,0,0);
    if (iVar1 != 0) {
      if (*(code **)(*param_1 + 0xc0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001040f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*param_1 + 0xc0))
                          (param_1[0x16],param_3,param_4,param_5,param_6,param_7);
        return uVar2;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/evp_enc.c",0x2bf,"EVP_CipherPipelineDecryptInit");
      ERR_set_error(6,0x86,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x2b4,"EVP_CipherPipelineDecryptInit");
    ERR_set_error(6,0xe7,0);
  }
  return 0;
}



void evp_cipher_free(void)

{
  EVP_CIPHER_free();
  return;
}



/* WARNING: Removing unreachable block (ram,0x001045e8) */

int * evp_cipher_from_algorithm(int param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = *(int **)(param_2 + 0x10);
  piVar3 = (int *)evp_cipher_new();
  if (piVar3 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x764,"evp_cipher_from_algorithm");
    ERR_set_error(6,0x80006,0);
    return (int *)0x0;
  }
  *piVar3 = 0;
  iVar1 = evp_names_do_all(param_3,param_1,0x100000);
  if ((iVar1 == 0) || (*piVar3 == -1)) {
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x76c,"evp_cipher_from_algorithm");
    ERR_set_error(6,0xc0103,0);
    EVP_CIPHER_free(piVar3);
    return (int *)0x0;
  }
  piVar3[0x18] = param_1;
  lVar4 = ossl_algorithm_get1_first_name();
  *(long *)(piVar3 + 0x1a) = lVar4;
  if (lVar4 == 0) {
LAB_001042ff:
    EVP_CIPHER_free(piVar3);
  }
  else {
    *(undefined8 *)(piVar3 + 0x1c) = *(undefined8 *)(param_2 + 0x18);
    iVar1 = *piVar9;
    if (iVar1 != 0) {
      iVar7 = 0;
      iVar6 = 0;
      iVar8 = 0;
      iVar5 = 0;
      iVar2 = 0;
      do {
        switch(iVar1) {
        case 1:
          if (*(long *)(piVar3 + 0x22) == 0) {
            iVar7 = iVar7 + 1;
            *(undefined8 *)(piVar3 + 0x22) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 2:
          if (*(long *)(piVar3 + 0x24) == 0) {
            iVar5 = 1;
            *(undefined8 *)(piVar3 + 0x24) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 3:
          if (*(long *)(piVar3 + 0x26) == 0) {
            iVar8 = 1;
            *(undefined8 *)(piVar3 + 0x26) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 4:
          if (*(long *)(piVar3 + 0x28) == 0) {
            iVar2 = iVar2 + 1;
            *(undefined8 *)(piVar3 + 0x28) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 5:
          if (*(long *)(piVar3 + 0x2a) == 0) {
            iVar2 = iVar2 + 1;
            *(undefined8 *)(piVar3 + 0x2a) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 6:
          if (*(long *)(piVar3 + 0x2c) == 0) {
            *(undefined8 *)(piVar3 + 0x2c) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 7:
          if (*(long *)(piVar3 + 0x36) == 0) {
            iVar7 = iVar7 + 1;
            *(undefined8 *)(piVar3 + 0x36) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 8:
          if (*(long *)(piVar3 + 0x38) == 0) {
            *(undefined8 *)(piVar3 + 0x38) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 9:
          if (*(long *)(piVar3 + 0x3a) == 0) {
            *(undefined8 *)(piVar3 + 0x3a) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 10:
          if (*(long *)(piVar3 + 0x3c) == 0) {
            *(undefined8 *)(piVar3 + 0x3c) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0xb:
          if (*(long *)(piVar3 + 0x3e) == 0) {
            *(undefined8 *)(piVar3 + 0x3e) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0xc:
          if (*(long *)(piVar3 + 0x40) == 0) {
            *(undefined8 *)(piVar3 + 0x40) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0xd:
          if (*(long *)(piVar3 + 0x42) == 0) {
            *(undefined8 *)(piVar3 + 0x42) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0xe:
          if (*(long *)(piVar3 + 0x44) == 0) {
            *(undefined8 *)(piVar3 + 0x44) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0xf:
          if (*(long *)(piVar3 + 0x2e) == 0) {
            iVar6 = iVar6 + 1;
            *(undefined8 *)(piVar3 + 0x2e) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0x10:
          if (*(long *)(piVar3 + 0x30) == 0) {
            iVar6 = iVar6 + 1;
            *(undefined8 *)(piVar3 + 0x30) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0x11:
          if (*(long *)(piVar3 + 0x32) == 0) {
            iVar6 = iVar6 + 1;
            *(undefined8 *)(piVar3 + 0x32) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0x12:
          if (*(long *)(piVar3 + 0x34) == 0) {
            iVar6 = iVar6 + 1;
            *(undefined8 *)(piVar3 + 0x34) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0x13:
          if (*(long *)(piVar3 + 0x46) == 0) {
            iVar5 = 1;
            *(undefined8 *)(piVar3 + 0x46) = *(undefined8 *)(piVar9 + 2);
          }
          break;
        case 0x14:
          if (*(long *)(piVar3 + 0x48) == 0) {
            iVar8 = 1;
            *(undefined8 *)(piVar3 + 0x48) = *(undefined8 *)(piVar9 + 2);
          }
        }
        iVar1 = piVar9[4];
        piVar9 = piVar9 + 4;
      } while (iVar1 != 0);
      iVar2 = iVar5 + iVar8 + iVar2;
      if (iVar2 == 0) {
        if (*(long *)(piVar3 + 0x2c) != 0) goto LAB_0010427b;
        if (iVar6 == 0) goto LAB_00104610;
LAB_0010427f:
        if (((2 < iVar6) && (*(long *)(piVar3 + 0x32) != 0)) && (*(long *)(piVar3 + 0x34) != 0)) {
LAB_001042a4:
          if (iVar7 == 2) {
            if ((param_3 == 0) || (iVar1 = ossl_provider_up_ref(param_3), iVar1 != 0)) {
              *(long *)(piVar3 + 0x1e) = param_3;
              iVar1 = evp_cipher_cache_constants(piVar3);
              if (iVar1 != 0) {
                return piVar3;
              }
              ERR_new();
              ERR_set_debug("crypto/evp/evp_enc.c",0x802,"evp_cipher_from_algorithm");
              ERR_set_error(6,0xe1,0);
            }
            goto LAB_001042ff;
          }
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
LAB_0010427b:
        if (iVar6 != 0) goto LAB_0010427f;
        goto LAB_001042a4;
      }
    }
LAB_00104610:
    ERR_new();
    ERR_set_debug("crypto/evp/evp_enc.c",0x7f9,"evp_cipher_from_algorithm");
    ERR_set_error(6,0xc1,0);
    EVP_CIPHER_free(piVar3);
  }
  return (int *)0x0;
}



void EVP_CIPHER_do_all_provided(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  evp_generic_do_all(param_1,2,param_2,param_3,evp_cipher_from_algorithm,evp_cipher_up_ref,
                     evp_cipher_free);
  return;
}


