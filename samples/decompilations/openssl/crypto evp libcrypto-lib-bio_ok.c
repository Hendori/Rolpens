
long ok_callback_ctrl(BIO *param_1,int param_2,fp *param_3)

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



undefined8 ok_new(undefined8 param_1)

{
  void *ptr;
  long lVar1;
  
  ptr = (void *)CRYPTO_zalloc(0x1100,"crypto/evp/bio_ok.c",0x87);
  if (ptr != (void *)0x0) {
    *(undefined4 *)((long)ptr + 0x20) = 1;
    *(undefined4 *)((long)ptr + 0x34) = 1;
    lVar1 = EVP_MD_CTX_new();
    *(long *)((long)ptr + 0x28) = lVar1;
    if (lVar1 != 0) {
      BIO_set_init(param_1,0);
      BIO_set_data(param_1,ptr);
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



undefined8 block_out(BIO *param_1)

{
  EVP_MD_CTX *ctx;
  int iVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = (long *)BIO_get_data();
  ctx = (EVP_MD_CTX *)plVar4[5];
  uVar5 = EVP_MD_CTX_get0_md(ctx);
  iVar1 = EVP_MD_get_size(uVar5);
  if (0 < iVar1) {
    uVar2 = (uint)(*plVar4 - 4U);
    *(uint *)(plVar4 + 7) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    iVar3 = EVP_DigestUpdate(ctx,(void *)((long)plVar4 + 0x3c),*plVar4 - 4U);
    if (iVar3 != 0) {
      iVar3 = EVP_DigestFinal_ex(ctx,(uchar *)((long)plVar4 + *plVar4 + 0x38),(uint *)0x0);
      if (iVar3 != 0) {
        *plVar4 = *plVar4 + (long)iVar1;
        *(undefined4 *)(plVar4 + 6) = 1;
        return 1;
      }
    }
  }
  BIO_clear_flags(param_1,0xf);
  return 0;
}



long ok_ctrl(BIO *param_1,int param_2,long param_3,EVP_MD *param_4)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  BIO *bp;
  long lVar3;
  undefined8 uVar4;
  
  pauVar2 = (undefined1 (*) [16])BIO_get_data();
  bp = BIO_next(param_1);
  uVar4 = _LC2;
  if (0xd < param_2) {
    if (param_2 == 0x6f) {
      iVar1 = EVP_DigestInit_ex(*(EVP_MD_CTX **)(pauVar2[2] + 8),param_4,(ENGINE *)0x0);
      if (iVar1 != 0) {
        BIO_set_init(param_1,1);
        return 1;
      }
      return 0;
    }
    if (param_2 == 0x70) {
      iVar1 = BIO_get_init(param_1);
      if (iVar1 != 0) {
        uVar4 = EVP_MD_CTX_get0_md(*(undefined8 *)(pauVar2[2] + 8));
        param_4->type = (int)uVar4;
        param_4->pkey_type = (int)((ulong)uVar4 >> 0x20);
        return 1;
      }
      return 0;
    }
    if (param_2 == 0x65) {
      BIO_clear_flags(param_1,0xf);
      iVar1 = 0x65;
LAB_001001ff:
      lVar3 = BIO_ctrl(bp,iVar1,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return lVar3;
    }
    goto switchD_001001c6_caseD_4;
  }
  switch(param_2) {
  case 1:
    param_2 = 1;
    *pauVar2 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar2[2] = 1;
    *(undefined8 *)pauVar2[3] = uVar4;
    pauVar2[1] = (undefined1  [16])0x0;
    break;
  case 2:
    if (*(int *)pauVar2[2] < 1) {
      return 1;
    }
    param_2 = 2;
    break;
  case 3:
    return (long)*(int *)pauVar2[2];
  case 10:
  case 0xd:
    if ((*(int *)pauVar2[3] != 0) &&
       (lVar3 = *(long *)*pauVar2 - *(long *)(*pauVar2 + 8), 0 < lVar3)) {
      return lVar3;
    }
  default:
switchD_001001c6_caseD_4:
    break;
  case 0xb:
    if (*(int *)pauVar2[3] == 0) {
      iVar1 = block_out(param_1);
      uVar4 = _LC3;
      if (iVar1 == 0) {
        return 0;
      }
      if (*(int *)pauVar2[3] == 0) {
        iVar1 = 0xb;
        *pauVar2 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar2[2] = uVar4;
        goto LAB_001001ff;
      }
    }
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  lVar3 = BIO_ctrl(bp,param_2,param_3,param_4);
  return lVar3;
}



int ok_read(BIO *param_1,void *param_2,int param_3)

{
  uint uVar1;
  EVP_MD_CTX *pEVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  size_t *psVar7;
  BIO *b;
  ulong *puVar8;
  undefined8 uVar9;
  size_t *psVar10;
  EVP_MD *type;
  void *__dest;
  undefined1 *puVar11;
  ulong uVar12;
  size_t sVar13;
  undefined1 uVar14;
  size_t sVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  ulong cnt;
  undefined1 uVar18;
  long in_FS_OFFSET;
  int local_ac;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (void *)0x0) {
    psVar7 = (size_t *)BIO_get_data();
    b = BIO_next(param_1);
    if (((psVar7 != (size_t *)0x0) && (b != (BIO *)0x0)) &&
       (iVar5 = BIO_get_init(param_1), iVar5 != 0)) {
      local_ac = 0;
      do {
        if (param_3 < 1) break;
        sVar13 = *psVar7;
        if ((int)psVar7[6] != 0) {
          iVar5 = (int)sVar13 - (int)psVar7[1];
          if (param_3 < iVar5) {
            iVar5 = param_3;
          }
          sVar15 = (size_t)iVar5;
          memcpy(param_2,(void *)((long)psVar7 + psVar7[1] + 0x38),sVar15);
          local_ac = local_ac + iVar5;
          param_3 = param_3 - iVar5;
          param_2 = (void *)((long)param_2 + sVar15);
          sVar13 = psVar7[1];
          psVar7[1] = sVar15 + sVar13;
          if (sVar15 + sVar13 == *psVar7) {
            uVar12 = psVar7[3];
            psVar7[1] = 0;
            if (uVar12 < psVar7[2]) {
              sVar13 = psVar7[2] - uVar12;
              *psVar7 = sVar13;
              memmove(psVar7 + 7,(void *)((long)psVar7 + uVar12 + 0x38),sVar13);
            }
            else {
              *psVar7 = 0;
            }
            *(undefined4 *)(psVar7 + 6) = 0;
          }
          if (param_3 == 0) break;
          sVar13 = *psVar7;
        }
        iVar5 = BIO_read(b,(void *)((long)psVar7 + sVar13 + 0x38),0x10c4 - (int)sVar13);
        if (iVar5 < 1) break;
        *psVar7 = *psVar7 + (long)iVar5;
        iVar5 = *(int *)((long)psVar7 + 0x34);
        if (iVar5 == 1) {
          psVar10 = (size_t *)BIO_get_data(param_1);
          pEVar2 = (EVP_MD_CTX *)psVar10[5];
          if (pEVar2 != (EVP_MD_CTX *)0x0) {
            type = (EVP_MD *)EVP_MD_CTX_get0_md(pEVar2);
            iVar5 = EVP_MD_get_size(type);
            if (0 < iVar5) {
              __dest = (void *)EVP_MD_CTX_get0_md_data(pEVar2);
              iVar6 = (int)*psVar10 - (int)psVar10[1];
              if (SBORROW4(iVar6,iVar5 * 2) != iVar6 + iVar5 * -2 < 0) {
LAB_00100750:
                iVar5 = *(int *)((long)psVar7 + 0x34);
                goto LAB_00100465;
              }
              iVar6 = EVP_DigestInit_ex(pEVar2,type,(ENGINE *)0x0);
              if (iVar6 != 0) {
                sVar13 = (size_t)iVar5;
                puVar11 = (undefined1 *)
                          memcpy(__dest,(void *)((long)psVar10 + psVar10[1] + 0x38),sVar13);
                uVar12 = 0;
                uVar3 = puVar11[1];
                uVar14 = puVar11[2];
                uVar4 = *puVar11;
                uVar17 = puVar11[3];
                do {
                  uVar18 = uVar17;
                  uVar17 = uVar4;
                  uVar16 = uVar14;
                  uVar14 = uVar3;
                  uVar12 = uVar12 + 4;
                  uVar3 = uVar16;
                  uVar4 = uVar18;
                } while (uVar12 < sVar13);
                puVar11[3] = uVar17;
                puVar11[1] = uVar16;
                puVar11[2] = uVar14;
                *puVar11 = uVar18;
                psVar10[1] = psVar10[1] + sVar13;
                iVar5 = EVP_DigestUpdate(pEVar2,
                                         "The quick brown fox jumped over the lazy dog\'s back.",
                                         0x34);
                if (iVar5 != 0) {
                  iVar5 = EVP_DigestFinal_ex(pEVar2,local_88,(uint *)0x0);
                  if (iVar5 != 0) {
                    sVar15 = psVar10[1];
                    iVar5 = memcmp((void *)((long)psVar10 + sVar15 + 0x38),local_88,sVar13);
                    sVar13 = sVar13 + sVar15;
                    psVar10[1] = sVar13;
                    if (iVar5 == 0) {
                      *(undefined4 *)((long)psVar10 + 0x34) = 0;
                      sVar15 = *psVar10 - sVar13;
                      if (sVar13 != *psVar10) {
                        memmove(psVar10 + 7,(void *)((long)psVar10 + sVar13 + 0x38),sVar15);
                      }
                      *psVar10 = sVar15;
                      psVar10[1] = 0;
                    }
                    else {
                      *(undefined4 *)(psVar10 + 4) = 0;
                    }
                    goto LAB_00100750;
                  }
                }
              }
            }
          }
LAB_00100550:
          BIO_clear_flags(param_1,0xf);
          BIO_clear_flags(param_1,0xf);
          goto LAB_0010056a;
        }
LAB_00100465:
        if (iVar5 == 0) {
          puVar8 = (ulong *)BIO_get_data(param_1);
          pEVar2 = (EVP_MD_CTX *)puVar8[5];
          uVar9 = EVP_MD_CTX_get0_md(pEVar2);
          iVar5 = EVP_MD_get_size(uVar9);
          if (0 < iVar5) {
            uVar1 = (uint)puVar8[7];
            cnt = (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                         uVar1 << 0x18);
            uVar12 = cnt + 4 + (long)iVar5;
            if (*puVar8 < uVar12) goto LAB_00100469;
            iVar6 = EVP_DigestUpdate(pEVar2,(void *)((long)puVar8 + 0x3c),cnt);
            if (iVar6 != 0) {
              iVar6 = EVP_DigestFinal_ex(pEVar2,local_88,(uint *)0x0);
              if (iVar6 != 0) {
                iVar5 = memcmp((void *)((long)puVar8 + cnt + 0x3c),local_88,(long)iVar5);
                if (iVar5 == 0) {
                  puVar8[1] = 4;
                  *(undefined4 *)(puVar8 + 6) = 1;
                  puVar8[2] = *puVar8;
                  puVar8[3] = uVar12;
                  *puVar8 = cnt + 4;
                }
                else {
                  *(undefined4 *)(puVar8 + 4) = 0;
                }
                goto LAB_00100469;
              }
            }
          }
          goto LAB_00100550;
        }
LAB_00100469:
      } while (0 < (int)psVar7[4]);
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      goto LAB_0010056d;
    }
  }
LAB_0010056a:
  local_ac = 0;
LAB_0010056d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_ac;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ok_write(BIO *param_1,void *param_2,int param_3)

{
  void *__dest;
  EVP_MD_CTX *ctx;
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  BIO *b;
  ulong uVar8;
  long *plVar9;
  EVP_MD *type;
  uchar *buf;
  undefined1 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  size_t sVar15;
  void *local_58;
  int local_50;
  
  if (param_3 < 1) {
    return param_3;
  }
  puVar7 = (ulong *)BIO_get_data();
  b = BIO_next(param_1);
  if (((puVar7 != (ulong *)0x0) && (b != (BIO *)0x0)) && (iVar5 = BIO_get_init(param_1), iVar5 != 0)
     ) {
    local_58 = param_2;
    local_50 = param_3;
    if (*(int *)((long)puVar7 + 0x34) == 0) {
LAB_001008da:
      do {
        BIO_clear_flags(param_1,0xf);
        uVar11 = *puVar7;
        uVar8 = puVar7[1];
        iVar5 = (int)uVar11 - (int)uVar8;
        if (((int)puVar7[6] != 0) && (0 < iVar5)) {
          do {
            iVar6 = BIO_write(b,(void *)((long)puVar7 + uVar8 + 0x38),iVar5);
            if (iVar6 < 1) {
              BIO_copy_next_retry(param_1);
              iVar5 = BIO_test_flags(param_1,8);
              if (iVar5 == 0) {
                *(undefined4 *)(puVar7 + 4) = 0;
                return iVar6;
              }
              return iVar6;
            }
            uVar8 = (long)iVar6 + puVar7[1];
            iVar5 = iVar5 - iVar6;
            puVar7[1] = uVar8;
          } while (((int)puVar7[6] != 0) && (0 < iVar5));
          uVar11 = *puVar7;
        }
        *(undefined4 *)(puVar7 + 6) = 0;
        uVar2 = _UNK_00100d68;
        if (uVar11 == uVar8) {
          uVar11 = 4;
          *puVar7 = __LC6;
          puVar7[1] = uVar2;
        }
        if (local_58 == (void *)0x0) {
          return 0;
        }
        sVar15 = (size_t)local_50;
        __dest = (void *)((long)puVar7 + uVar11 + 0x38);
        if (sVar15 + uVar11 < 0x1005) {
          memcpy(__dest,local_58,sVar15);
          uVar11 = *puVar7;
          *puVar7 = uVar11 + sVar15;
          if ((0x1003 < uVar11 + sVar15) && (iVar5 = block_out(param_1), iVar5 == 0))
          goto LAB_00100bb0;
          break;
        }
        iVar5 = 0x1004 - (int)uVar11;
        sVar15 = (size_t)iVar5;
        memcpy(__dest,local_58,sVar15);
        uVar11 = *puVar7;
        local_50 = local_50 - iVar5;
        *puVar7 = uVar11 + sVar15;
        if ((0x1003 < uVar11 + sVar15) && (iVar5 = block_out(param_1), iVar5 == 0))
        goto LAB_00100bb0;
        local_58 = (void *)((long)local_58 + sVar15);
      } while (0 < local_50);
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
      return param_3;
    }
    plVar9 = (long *)BIO_get_data(param_1);
    ctx = (EVP_MD_CTX *)plVar9[5];
    type = (EVP_MD *)EVP_MD_CTX_get0_md(ctx);
    iVar5 = EVP_MD_get_size(type);
    uVar11 = (ulong)iVar5;
    buf = (uchar *)EVP_MD_CTX_get0_md_data(ctx);
    if (0 < iVar5) {
      if (0x1000 < (ulong)((long)(iVar5 * 2) + *plVar9)) goto LAB_001008da;
      iVar6 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
      if ((iVar6 != 0) && (iVar5 = RAND_bytes(buf,iVar5), 0 < iVar5)) {
        memcpy((void *)((long)plVar9 + *plVar9 + 0x38),buf,uVar11);
        lVar1 = *plVar9;
        uVar8 = 0;
        uVar3 = *(undefined1 *)((long)plVar9 + lVar1 + 0x38);
        uVar13 = *(undefined1 *)((long)plVar9 + lVar1 + 0x3b);
        uVar4 = *(undefined1 *)((long)plVar9 + lVar1 + 0x39);
        uVar10 = *(undefined1 *)((long)plVar9 + lVar1 + 0x3a);
        do {
          uVar12 = uVar10;
          uVar10 = uVar4;
          uVar14 = uVar13;
          uVar13 = uVar3;
          uVar8 = uVar8 + 4;
          uVar3 = uVar14;
          uVar4 = uVar12;
        } while (uVar8 < uVar11);
        *(undefined1 *)((long)plVar9 + lVar1 + 0x38) = uVar14;
        *(undefined1 *)((long)plVar9 + lVar1 + 0x3b) = uVar13;
        *(undefined1 *)((long)plVar9 + lVar1 + 0x39) = uVar12;
        *(undefined1 *)((long)plVar9 + lVar1 + 0x3a) = uVar10;
        *plVar9 = *plVar9 + uVar11;
        iVar5 = EVP_DigestUpdate(ctx,"The quick brown fox jumped over the lazy dog\'s back.",0x34);
        if ((iVar5 != 0) &&
           (iVar5 = EVP_DigestFinal_ex(ctx,(uchar *)((long)plVar9 + *plVar9 + 0x38),(uint *)0x0),
           iVar5 != 0)) {
          *plVar9 = *plVar9 + uVar11;
          plVar9[6] = 1;
          goto LAB_001008da;
        }
      }
    }
LAB_00100bb0:
    BIO_clear_flags(param_1,0xf);
  }
  return 0;
}



undefined8 ok_free(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = BIO_get_data();
    EVP_MD_CTX_free(*(undefined8 *)(lVar1 + 0x28));
    CRYPTO_clear_free(lVar1,0x1100,"crypto/evp/bio_ok.c",0xa1);
    BIO_set_data(param_1,0);
    BIO_set_init(param_1,0);
    return 1;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_reliable(void)

{
  return (BIO_METHOD *)methods_ok;
}


