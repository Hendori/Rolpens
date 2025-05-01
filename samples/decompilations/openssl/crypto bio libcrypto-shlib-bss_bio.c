
undefined8 bio_free(long param_1)

{
  long *ptr;
  long lVar1;
  undefined8 *puVar2;
  
  if (param_1 != 0) {
    ptr = *(long **)(param_1 + 0x40);
    lVar1 = *ptr;
    if (lVar1 != 0) {
      puVar2 = *(undefined8 **)(lVar1 + 0x40);
      *puVar2 = 0;
      *(undefined4 *)(lVar1 + 0x28) = 0;
      *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
      *ptr = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined1 (*) [16])(ptr + 2) = (undefined1  [16])0x0;
    }
    CRYPTO_free((void *)ptr[5]);
    CRYPTO_free(ptr);
    return 1;
  }
  return 0;
}



undefined8 bio_new(long param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(0x38,"crypto/bio/bss_bio.c",0x4e);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x20) = 0x4400;
    *(long *)(param_1 + 0x40) = lVar1;
    return 1;
  }
  return 0;
}



ulong bio_read(BIO *param_1,void *param_2,int param_3)

{
  _func_601 *p_Var1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong __n;
  
  uVar5 = (ulong)param_3;
  BIO_clear_flags(param_1,0xf);
  if (param_1->num != 0) {
    p_Var1 = param_1->prev_bio->method->destroy;
    *(undefined8 *)(p_Var1 + 0x30) = 0;
    if ((param_2 != (void *)0x0) && (uVar5 != 0)) {
      uVar2 = *(ulong *)(p_Var1 + 0x10);
      if (uVar2 != 0) {
        lVar3 = *(long *)(p_Var1 + 0x18);
        uVar4 = uVar2;
        if (uVar5 < uVar2) {
          uVar2 = uVar5;
          uVar4 = uVar5;
        }
        do {
          while( true ) {
            uVar5 = *(ulong *)(p_Var1 + 0x20);
            if (uVar5 < uVar2 + lVar3) {
              __n = uVar5 - lVar3;
              uVar5 = uVar2 + (lVar3 - uVar5);
            }
            else {
              uVar5 = 0;
              __n = uVar2;
            }
            memcpy(param_2,(void *)(lVar3 + *(long *)(p_Var1 + 0x28)),__n);
            lVar3 = *(long *)(p_Var1 + 0x10);
            *(ulong *)(p_Var1 + 0x10) = lVar3 - __n;
            uVar2 = uVar5;
            if (lVar3 - __n == 0) break;
            lVar3 = *(long *)(p_Var1 + 0x18) + __n;
            if (lVar3 == *(long *)(p_Var1 + 0x20)) {
              lVar3 = 0;
            }
            *(long *)(p_Var1 + 0x18) = lVar3;
            param_2 = (void *)((long)param_2 + __n);
            if (uVar5 == 0) goto LAB_001001bd;
          }
          *(undefined8 *)(p_Var1 + 0x18) = 0;
          lVar3 = 0;
        } while (uVar5 != 0);
LAB_001001bd:
        return uVar4 & 0xffffffff;
      }
      if (*(int *)(p_Var1 + 8) == 0) {
        BIO_set_flags(param_1,9);
        uVar2 = *(ulong *)(p_Var1 + 0x20);
        if (uVar5 < *(ulong *)(p_Var1 + 0x20)) {
          uVar2 = uVar5;
        }
        *(ulong *)(p_Var1 + 0x30) = uVar2;
        return 0xffffffff;
      }
    }
  }
  return 0;
}



int bio_write(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *__n;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  size_t __n_00;
  int local_40;
  
  __n = (char *)(long)param_3;
  BIO_clear_flags(param_1,0xf);
  iVar2 = param_1->num;
  if (iVar2 != 0) {
    if ((param_2 == (void *)0x0) || (param_3 < 1)) {
      return 0;
    }
    pbVar1 = param_1->prev_bio;
    pbVar1->ptr = (void *)0x0;
    if (*(int *)&pbVar1->callback == 0) {
      pcVar3 = pbVar1->cb_arg;
      pcVar4 = *(char **)&pbVar1->flags;
      if (pcVar3 != pcVar4) {
        pcVar7 = pcVar4 + -(long)pcVar3;
        pcVar5 = __n;
        if (pcVar7 <= __n) {
          __n = pcVar7;
          pcVar5 = pcVar7;
        }
        while( true ) {
          pcVar7 = pcVar3 + *(long *)&pbVar1->init;
          if (pcVar4 <= pcVar7) {
            pcVar7 = pcVar7 + -(long)pcVar4;
          }
          if (__n + (long)pcVar7 <= pcVar4) break;
          lVar6 = (long)__n - (long)pcVar4;
          __n_00 = (long)pcVar4 - (long)pcVar7;
          memcpy(pcVar7 + *(long *)&pbVar1->num,param_2,__n_00);
          pcVar3 = pbVar1->cb_arg + __n_00;
          pbVar1->cb_arg = pcVar3;
          if (pcVar7 + lVar6 == (char *)0x0) goto LAB_001002a3;
          pcVar4 = *(char **)&pbVar1->flags;
          __n = pcVar7 + lVar6;
          param_2 = (void *)((long)param_2 + __n_00);
        }
        memcpy(pcVar7 + *(long *)&pbVar1->num,param_2,(size_t)__n);
        pbVar1->cb_arg = pbVar1->cb_arg + (long)__n;
LAB_001002a3:
        local_40 = (int)pcVar5;
        return local_40;
      }
      BIO_set_flags(param_1,10);
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_bio.c",0x11f,"bio_write");
      ERR_set_error(0x20,0x7c,0);
    }
    iVar2 = -1;
  }
  return iVar2;
}



void bio_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  bio_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
}



char * bio_ctrl(BIO *param_1,undefined4 param_2,char *param_3,BIO_METHOD *param_4)

{
  char **ppcVar1;
  code *pcVar2;
  bio_st *pbVar3;
  _func_601 *p_Var4;
  long lVar5;
  BIO_METHOD *pBVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  void *pvVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  undefined1 local_31;
  long local_30;
  
  pbVar3 = param_1->prev_bio;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_2) {
  case 1:
    if (*(long *)&pbVar3->num != 0) {
      pbVar3->cb_arg = (char *)0x0;
      pbVar3->init = 0;
      pbVar3->shutdown = 0;
    }
    break;
  case 2:
    if (pbVar3->method == (BIO_METHOD *)0x0) goto switchD_001003d3_caseD_b;
    p_Var4 = pbVar3->method->destroy;
    if (*(long *)(p_Var4 + 0x10) == 0) {
      pcVar9 = (char *)(ulong)(*(int *)(p_Var4 + 8) != 0);
      goto LAB_0010041a;
    }
    break;
  case 8:
    pcVar9 = (char *)(long)*(int *)&param_1->field_0x2c;
    goto LAB_0010041a;
  case 9:
    *(int *)&param_1->field_0x2c = (int)param_3;
    goto switchD_001003d3_caseD_b;
  case 10:
    if (pbVar3->method != (BIO_METHOD *)0x0) {
      pcVar9 = *(char **)(pbVar3->method->destroy + 0x10);
      goto LAB_0010041a;
    }
    break;
  case 0xb:
    goto switchD_001003d3_caseD_b;
  case 0xc:
    *(undefined8 *)(param_4->destroy + 0x20) = *(undefined8 *)&pbVar3->flags;
    goto switchD_001003d3_caseD_b;
  case 0xd:
    if (*(long *)&pbVar3->num != 0) {
      pcVar9 = pbVar3->cb_arg;
      goto LAB_0010041a;
    }
    break;
  case 0x88:
    if (pbVar3->method == (BIO_METHOD *)0x0) {
      if (param_3 != (char *)0x0) {
        if (*(char **)&pbVar3->flags != param_3) {
          CRYPTO_free(*(void **)&pbVar3->num);
          *(undefined8 *)&pbVar3->num = 0;
          *(char **)&pbVar3->flags = param_3;
        }
        goto switchD_001003d3_caseD_b;
      }
      ERR_new();
      ERR_set_debug("crypto/bio/bss_bio.c",0x1af,"bio_ctrl");
      ERR_set_error(0x20,0x7d,0);
    }
    else {
      ERR_new();
      pcVar11 = "bio_ctrl";
      uVar12 = 0x1ac;
LAB_001003f2:
      ERR_set_debug("crypto/bio/bss_bio.c",uVar12,pcVar11);
      ERR_set_error(0x20,0x7b,0);
    }
    break;
  case 0x89:
    pcVar9 = *(char **)&pbVar3->flags;
    goto LAB_0010041a;
  case 0x8a:
    p_Var4 = param_4->destroy;
    if ((pbVar3->method != (BIO_METHOD *)0x0) || (*(long *)p_Var4 != 0)) {
      ERR_new();
      pcVar11 = "bio_make_pair";
      uVar12 = 0x269;
      goto LAB_001003f2;
    }
    if (*(long *)&pbVar3->num == 0) {
      uVar12._0_4_ = pbVar3->flags;
      uVar12._4_4_ = pbVar3->retry_reason;
      pvVar10 = CRYPTO_malloc((int)uVar12,"crypto/bio/bss_bio.c",0x26e);
      *(void **)&pbVar3->num = pvVar10;
      if (pvVar10 == (void *)0x0) break;
      pbVar3->cb_arg = (char *)0x0;
      pbVar3->init = 0;
      pbVar3->shutdown = 0;
    }
    if (*(long *)(p_Var4 + 0x28) == 0) {
      pvVar10 = CRYPTO_malloc((int)*(long *)(p_Var4 + 0x20),"crypto/bio/bss_bio.c",0x276);
      *(void **)(p_Var4 + 0x28) = pvVar10;
      if (pvVar10 == (void *)0x0) break;
      *(undefined1 (*) [16])(p_Var4 + 0x10) = (undefined1  [16])0x0;
    }
    pbVar3->method = param_4;
    *(undefined4 *)&pbVar3->callback = 0;
    pbVar3->ptr = (void *)0x0;
    *(BIO **)p_Var4 = param_1;
    *(undefined4 *)(p_Var4 + 8) = 0;
    *(long *)(p_Var4 + 0x30) = 0;
    param_1->num = 1;
    *(undefined4 *)&param_4->bgets = 1;
    goto switchD_001003d3_caseD_b;
  case 0x8b:
    if ((pbVar3 != (bio_st *)0x0) && (pBVar6 = pbVar3->method, pBVar6 != (BIO_METHOD *)0x0)) {
      p_Var4 = pBVar6->destroy;
      *(undefined8 *)p_Var4 = 0;
      *(undefined4 *)&pBVar6->bgets = 0;
      *(undefined1 (*) [16])(p_Var4 + 0x10) = (undefined1  [16])0x0;
      pbVar3->method = (BIO_METHOD *)0x0;
      param_1->num = 0;
      pbVar3->cb_arg = (char *)0x0;
      pbVar3->init = 0;
      pbVar3->shutdown = 0;
    }
    goto switchD_001003d3_caseD_b;
  case 0x8c:
    if ((pbVar3->method != (BIO_METHOD *)0x0) && (*(int *)&pbVar3->callback == 0)) {
      pcVar9 = (char *)(*(long *)&pbVar3->flags - (long)pbVar3->cb_arg);
      goto LAB_0010041a;
    }
    break;
  case 0x8d:
    pcVar9 = (char *)pbVar3->ptr;
    goto LAB_0010041a;
  case 0x8e:
    *(undefined4 *)&pbVar3->callback = 1;
    goto switchD_001003d3_caseD_b;
  case 0x8f:
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      p_Var4 = param_1->prev_bio->method->destroy;
      pcVar11 = *(char **)(p_Var4 + 0x10);
      *(undefined8 *)(p_Var4 + 0x30) = 0;
      if (pcVar11 == (char *)0x0) {
        iVar8 = bio_read(param_1,&local_31,1);
        pcVar9 = (char *)(long)iVar8;
      }
      else {
        lVar5 = *(long *)(p_Var4 + 0x18);
        pcVar9 = *(char **)(p_Var4 + 0x20) + -lVar5;
        if (pcVar11 + lVar5 <= *(char **)(p_Var4 + 0x20)) {
          pcVar9 = pcVar11;
        }
        if (param_4 != (BIO_METHOD *)0x0) {
          *(long *)param_4 = lVar5 + *(long *)(p_Var4 + 0x28);
        }
      }
      goto LAB_0010041a;
    }
    break;
  case 0x90:
    if ((long)param_3 < 0) {
      param_3 = (char *)0x7fffffffffffffff;
    }
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      p_Var4 = param_1->prev_bio->method->destroy;
      pcVar11 = *(char **)(p_Var4 + 0x10);
      *(undefined8 *)(p_Var4 + 0x30) = 0;
      if (pcVar11 == (char *)0x0) {
        iVar8 = bio_read(param_1,&local_31,1);
        pcVar9 = (char *)(long)iVar8;
      }
      else {
        lVar5 = *(long *)(p_Var4 + 0x18);
        pcVar9 = *(char **)(p_Var4 + 0x20) + -lVar5;
        if (pcVar11 + lVar5 <= *(char **)(p_Var4 + 0x20)) {
          pcVar9 = pcVar11;
        }
        if (param_4 != (BIO_METHOD *)0x0) {
          *(long *)param_4 = lVar5 + *(long *)(p_Var4 + 0x28);
        }
      }
      if ((long)param_3 <= (long)pcVar9) {
        pcVar9 = param_3;
      }
      if (0 < (long)pcVar9) {
        p_Var4 = param_1->prev_bio->method->destroy;
        pcVar2 = p_Var4 + 0x10;
        *(long *)pcVar2 = *(long *)pcVar2 - (long)pcVar9;
        if ((*(long *)pcVar2 == 0) ||
           (lVar5 = *(long *)(p_Var4 + 0x18), *(char **)(p_Var4 + 0x18) = pcVar9 + lVar5,
           pcVar9 + lVar5 == *(char **)(p_Var4 + 0x20))) {
          *(undefined8 *)(p_Var4 + 0x18) = 0;
        }
      }
      goto LAB_0010041a;
    }
    break;
  case 0x91:
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      pbVar3 = param_1->prev_bio;
      pbVar3->ptr = (void *)0x0;
      if (*(int *)&pbVar3->callback != 0) goto LAB_0010094d;
      pcVar11 = pbVar3->cb_arg;
      pcVar9 = *(char **)&pbVar3->flags;
      if (pcVar11 != pcVar9) {
        pcVar14 = *(char **)&pbVar3->init;
        pcVar13 = pcVar11 + (long)pcVar14;
        if (pcVar13 < pcVar9) {
          pcVar14 = pcVar14 + (long)pcVar9;
        }
        else {
          pcVar13 = pcVar13 + -(long)pcVar9;
        }
        pcVar7 = pcVar13;
        if (pcVar14 <= pcVar9) {
          pcVar7 = pcVar11;
        }
        pcVar9 = pcVar9 + -(long)pcVar7;
        if (param_4 != (BIO_METHOD *)0x0) {
          *(char **)param_4 = pcVar13 + *(long *)&pbVar3->num;
        }
        goto LAB_0010041a;
      }
LAB_00100986:
      BIO_set_flags(param_1,10);
LAB_0010097d:
      pcVar9 = (char *)0xffffffffffffffff;
      goto LAB_0010041a;
    }
    break;
  case 0x92:
    if ((long)param_3 < 0) {
      param_3 = (char *)0x7fffffffffffffff;
    }
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      pbVar3 = param_1->prev_bio;
      pbVar3->ptr = (void *)0x0;
      if (*(int *)&pbVar3->callback == 0) {
        pcVar11 = pbVar3->cb_arg;
        pcVar13 = *(char **)&pbVar3->flags;
        if (pcVar11 != pcVar13) {
          pcVar14 = *(char **)&pbVar3->init;
          pcVar9 = pcVar11 + (long)pcVar14;
          if (pcVar9 < pcVar13) {
            pcVar14 = pcVar14 + (long)pcVar13;
          }
          else {
            pcVar9 = pcVar9 + -(long)pcVar13;
          }
          if (pcVar13 < pcVar14) {
            pcVar11 = pcVar9;
          }
          if (param_4 != (BIO_METHOD *)0x0) {
            *(char **)param_4 = pcVar9 + *(long *)&pbVar3->num;
          }
          pcVar9 = pcVar13 + -(long)pcVar11;
          if ((long)param_3 < (long)(pcVar13 + -(long)pcVar11)) {
            pcVar9 = param_3;
          }
          if (0 < (long)pcVar9) {
            ppcVar1 = &param_1->prev_bio->cb_arg;
            *ppcVar1 = *ppcVar1 + (long)pcVar9;
          }
          goto LAB_0010041a;
        }
        goto LAB_00100986;
      }
LAB_0010094d:
      ERR_new();
      ERR_set_debug("crypto/bio/bss_bio.c",0x16b,"bio_nwrite0");
      ERR_set_error(0x20,0x7c,0);
      goto LAB_0010097d;
    }
    break;
  case 0x93:
    pbVar3->ptr = (void *)0x0;
switchD_001003d3_caseD_b:
    pcVar9 = (char *)0x1;
    goto LAB_0010041a;
  }
  pcVar9 = (char *)0x0;
LAB_0010041a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_bio(void)

{
  return (BIO_METHOD *)methods_biop;
}



int BIO_new_bio_pair(BIO **bio1,size_t writebuf1,BIO **bio2,size_t writebuf2)

{
  int iVar1;
  BIO_METHOD *pBVar2;
  BIO *pBVar3;
  BIO *bp;
  long lVar4;
  BIO *pBVar5;
  
  pBVar2 = BIO_s_bio();
  pBVar3 = BIO_new(pBVar2);
  if (pBVar3 == (BIO *)0x0) {
LAB_00100a80:
    bp = (BIO *)0x0;
  }
  else {
    pBVar2 = BIO_s_bio();
    bp = BIO_new(pBVar2);
    if (bp == (BIO *)0x0) goto LAB_00100a80;
    if ((((writebuf1 == 0) || (lVar4 = BIO_ctrl(pBVar3,0x88,writebuf1,(void *)0x0), (int)lVar4 != 0)
         ) && ((writebuf2 == 0 || (lVar4 = BIO_ctrl(bp,0x88,writebuf2,(void *)0x0), (int)lVar4 != 0)
               ))) && (lVar4 = BIO_ctrl(pBVar3,0x8a,0,bp), (int)lVar4 != 0)) {
      iVar1 = 1;
      pBVar5 = pBVar3;
      pBVar3 = bp;
      goto LAB_00100a29;
    }
  }
  pBVar5 = (BIO *)0x0;
  BIO_free(pBVar3);
  pBVar3 = (BIO *)0x0;
  BIO_free(bp);
  iVar1 = 0;
LAB_00100a29:
  *bio1 = pBVar5;
  *bio2 = pBVar3;
  return iVar1;
}



size_t BIO_ctrl_get_write_guarantee(BIO *b)

{
  size_t sVar1;
  
  sVar1 = BIO_ctrl(b,0x8c,0,(void *)0x0);
  return sVar1;
}



size_t BIO_ctrl_get_read_request(BIO *b)

{
  size_t sVar1;
  
  sVar1 = BIO_ctrl(b,0x8d,0,(void *)0x0);
  return sVar1;
}



int BIO_ctrl_reset_read_request(BIO *b)

{
  long lVar1;
  
  lVar1 = BIO_ctrl(b,0x93,0,(void *)0x0);
  return (int)(lVar1 != 0);
}



int BIO_nread0(BIO *bio,char **buf)

{
  int iVar1;
  long lVar2;
  
  if (bio->num == 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_bio.c",0x2eb,"BIO_nread0");
    ERR_set_error(0x20,0x78,0);
    iVar1 = -2;
  }
  else {
    lVar2 = BIO_ctrl(bio,0x8f,0,buf);
    iVar1 = (int)lVar2;
    if (0x7fffffff < lVar2) {
      iVar1 = 0x7fffffff;
    }
  }
  return iVar1;
}



int BIO_nread(BIO *bio,char **buf,int num)

{
  int iVar1;
  long lVar2;
  
  if (bio->num == 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_bio.c",0x2fb,"BIO_nread");
    ERR_set_error(0x20,0x78,0);
    iVar1 = -2;
  }
  else {
    lVar2 = BIO_ctrl(bio,0x90,(long)num,buf);
    iVar1 = (int)lVar2;
    if (0 < iVar1) {
      (bio->ex_data).sk = (stack_st_void *)((long)&(((bio->ex_data).sk)->stack).num + (long)iVar1);
    }
  }
  return iVar1;
}



int BIO_nwrite0(BIO *bio,char **buf)

{
  int iVar1;
  long lVar2;
  
  if (bio->num == 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_bio.c",0x30a,"BIO_nwrite0");
    ERR_set_error(0x20,0x78,0);
    iVar1 = -2;
  }
  else {
    lVar2 = BIO_ctrl(bio,0x91,0,buf);
    iVar1 = (int)lVar2;
    if (0x7fffffff < lVar2) {
      iVar1 = 0x7fffffff;
    }
  }
  return iVar1;
}



int BIO_nwrite(BIO *bio,char **buf,int num)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  if (bio->num == 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_bio.c",0x31a,"BIO_nwrite");
    ERR_set_error(0x20,0x78,0);
    iVar2 = -2;
  }
  else {
    lVar3 = BIO_ctrl(bio,0x92,(long)num,buf);
    iVar2 = (int)lVar3;
    if (0 < iVar2) {
      piVar1 = &(bio->ex_data).dummy;
      *(long *)piVar1 = *(long *)piVar1 + (long)iVar2;
    }
  }
  return iVar2;
}


