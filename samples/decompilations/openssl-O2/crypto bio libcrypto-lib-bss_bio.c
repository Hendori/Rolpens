
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
  code *pcVar1;
  _func_601 *p_Var2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong __n;
  
  uVar6 = (ulong)param_3;
  BIO_clear_flags(param_1,0xf);
  if (param_1->num != 0) {
    p_Var2 = param_1->prev_bio->method->destroy;
    *(undefined8 *)(p_Var2 + 0x30) = 0;
    if ((param_2 != (void *)0x0) && (uVar6 != 0)) {
      uVar4 = *(ulong *)(p_Var2 + 0x10);
      if (uVar4 != 0) {
        uVar5 = uVar4;
        if (uVar6 < uVar4) {
          uVar4 = uVar6;
          uVar5 = uVar6;
        }
        do {
          while( true ) {
            lVar3 = *(long *)(p_Var2 + 0x18);
            uVar6 = *(ulong *)(p_Var2 + 0x20);
            if (uVar6 < lVar3 + uVar4) {
              __n = uVar6 - lVar3;
              uVar6 = uVar4 + (lVar3 - uVar6);
            }
            else {
              uVar6 = 0;
              __n = uVar4;
            }
            memcpy(param_2,(void *)(lVar3 + *(long *)(p_Var2 + 0x28)),__n);
            pcVar1 = p_Var2 + 0x10;
            *(ulong *)pcVar1 = *(long *)pcVar1 - __n;
            uVar4 = uVar6;
            if (*(long *)pcVar1 == 0) break;
            lVar3 = *(long *)(p_Var2 + 0x18) + __n;
            if (lVar3 == *(long *)(p_Var2 + 0x20)) {
              lVar3 = 0;
            }
            *(long *)(p_Var2 + 0x18) = lVar3;
            param_2 = (void *)((long)param_2 + __n);
            if (uVar6 == 0) goto LAB_0010011d;
          }
          *(undefined8 *)(p_Var2 + 0x18) = 0;
        } while (uVar6 != 0);
LAB_0010011d:
        return uVar5 & 0xffffffff;
      }
      if (*(int *)(p_Var2 + 8) == 0) {
        BIO_set_flags(param_1,9);
        uVar4 = *(ulong *)(p_Var2 + 0x20);
        if (uVar6 < *(ulong *)(p_Var2 + 0x20)) {
          uVar4 = uVar6;
        }
        *(ulong *)(p_Var2 + 0x30) = uVar4;
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
          if (pcVar7 + lVar6 == (char *)0x0) goto LAB_00100203;
          pcVar4 = *(char **)&pbVar1->flags;
          __n = pcVar7 + lVar6;
          param_2 = (void *)((long)param_2 + __n_00);
        }
        memcpy(pcVar7 + *(long *)&pbVar1->num,param_2,(size_t)__n);
        pbVar1->cb_arg = pbVar1->cb_arg + (long)__n;
LAB_00100203:
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



long bio_nwrite0_part_0(BIO *param_1,undefined8 *param_2)

{
  bio_st *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pbVar1 = param_1->prev_bio;
  pbVar1->ptr = (void *)0x0;
  if (*(int *)&pbVar1->callback == 0) {
    pcVar2 = pbVar1->cb_arg;
    pcVar3 = *(char **)&pbVar1->flags;
    if (pcVar2 != pcVar3) {
      pcVar6 = *(char **)&pbVar1->init;
      pcVar5 = pcVar2 + (long)pcVar6;
      if (pcVar5 < pcVar3) {
        pcVar6 = pcVar6 + (long)pcVar3;
      }
      else {
        pcVar5 = pcVar5 + -(long)pcVar3;
      }
      pcVar4 = pcVar5;
      if (pcVar6 <= pcVar3) {
        pcVar4 = pcVar2;
      }
      if (param_2 == (undefined8 *)0x0) {
        return (long)pcVar3 - (long)pcVar4;
      }
      *param_2 = pcVar5 + *(long *)&pbVar1->num;
      return (long)pcVar3 - (long)pcVar4;
    }
    BIO_set_flags(param_1,10);
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_bio.c",0x16b,"bio_nwrite0");
    ERR_set_error(0x20,0x7c,0);
  }
  return -1;
}



long bio_nread0_part_0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(**(long **)(param_1 + 0x40) + 0x40);
  lVar2 = *(long *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  if (lVar2 == 0) {
    iVar4 = bio_read(param_1,&local_11,1);
    lVar5 = (long)iVar4;
  }
  else {
    lVar3 = *(long *)(lVar1 + 0x18);
    lVar5 = *(ulong *)(lVar1 + 0x20) - lVar3;
    if ((ulong)(lVar2 + lVar3) <= *(ulong *)(lVar1 + 0x20)) {
      lVar5 = lVar2;
    }
    if (param_2 != (long *)0x0) {
      *param_2 = lVar3 + *(long *)(lVar1 + 0x28);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  void *pvVar8;
  undefined8 uVar9;
  
  pbVar3 = param_1->prev_bio;
  switch(param_2) {
  case 1:
    if (*(long *)&pbVar3->num != 0) {
      pbVar3->cb_arg = (char *)0x0;
      pbVar3->init = 0;
      pbVar3->shutdown = 0;
    }
    break;
  case 2:
    if (pbVar3->method == (BIO_METHOD *)0x0) {
      return (char *)0x1;
    }
    p_Var4 = pbVar3->method->destroy;
    if (*(long *)(p_Var4 + 0x10) == 0) {
      return (char *)(ulong)(*(int *)(p_Var4 + 8) != 0);
    }
    break;
  case 8:
    return (char *)(long)*(int *)&param_1->field_0x2c;
  case 9:
    *(int *)&param_1->field_0x2c = (int)param_3;
    return (char *)0x1;
  case 10:
    if (pbVar3->method != (BIO_METHOD *)0x0) {
      return *(char **)(pbVar3->method->destroy + 0x10);
    }
    break;
  case 0xb:
    return (char *)0x1;
  case 0xc:
    *(undefined8 *)(param_4->destroy + 0x20) = *(undefined8 *)&pbVar3->flags;
    return (char *)0x1;
  case 0xd:
    if (*(long *)&pbVar3->num != 0) {
      return pbVar3->cb_arg;
    }
    break;
  case 0x88:
    if (pbVar3->method == (BIO_METHOD *)0x0) {
      if (param_3 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bss_bio.c",0x1af,"bio_ctrl");
        ERR_set_error(0x20,0x7d,0);
        return (char *)0x0;
      }
      if (*(char **)&pbVar3->flags != param_3) {
        CRYPTO_free(*(void **)&pbVar3->num);
        *(undefined8 *)&pbVar3->num = 0;
        *(char **)&pbVar3->flags = param_3;
        return (char *)0x1;
      }
      return (char *)0x1;
    }
    ERR_new();
    pcVar7 = "bio_ctrl";
    uVar9 = 0x1ac;
    goto LAB_0010048c;
  case 0x89:
    return *(char **)&pbVar3->flags;
  case 0x8a:
    p_Var4 = param_4->destroy;
    if ((pbVar3->method == (BIO_METHOD *)0x0) && (*(long *)p_Var4 == 0)) {
      if (*(long *)&pbVar3->num == 0) {
        uVar9._0_4_ = pbVar3->flags;
        uVar9._4_4_ = pbVar3->retry_reason;
        pvVar8 = CRYPTO_malloc((int)uVar9,"crypto/bio/bss_bio.c",0x26e);
        *(void **)&pbVar3->num = pvVar8;
        if (pvVar8 == (void *)0x0) {
          return (char *)0x0;
        }
        pbVar3->cb_arg = (char *)0x0;
        pbVar3->init = 0;
        pbVar3->shutdown = 0;
      }
      if (*(long *)(p_Var4 + 0x28) == 0) {
        pvVar8 = CRYPTO_malloc((int)*(long *)(p_Var4 + 0x20),"crypto/bio/bss_bio.c",0x276);
        *(void **)(p_Var4 + 0x28) = pvVar8;
        if (pvVar8 == (void *)0x0) {
          return (char *)0x0;
        }
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
      return (char *)0x1;
    }
    ERR_new();
    pcVar7 = "bio_make_pair";
    uVar9 = 0x269;
LAB_0010048c:
    ERR_set_debug("crypto/bio/bss_bio.c",uVar9,pcVar7);
    ERR_set_error(0x20,0x7b,0);
    break;
  case 0x8b:
    if (pbVar3 == (bio_st *)0x0) {
      return (char *)0x1;
    }
    pBVar6 = pbVar3->method;
    if (pBVar6 != (BIO_METHOD *)0x0) {
      p_Var4 = pBVar6->destroy;
      *(undefined8 *)p_Var4 = 0;
      *(undefined4 *)&pBVar6->bgets = 0;
      *(undefined1 (*) [16])(p_Var4 + 0x10) = (undefined1  [16])0x0;
      pbVar3->method = (BIO_METHOD *)0x0;
      param_1->num = 0;
      pbVar3->cb_arg = (char *)0x0;
      pbVar3->init = 0;
      pbVar3->shutdown = 0;
      return (char *)0x1;
    }
    return (char *)0x1;
  case 0x8c:
    if ((pbVar3->method != (BIO_METHOD *)0x0) && (*(int *)&pbVar3->callback == 0)) {
      return (char *)(*(long *)&pbVar3->flags - (long)pbVar3->cb_arg);
    }
    break;
  case 0x8d:
    return (char *)pbVar3->ptr;
  case 0x8e:
    *(undefined4 *)&pbVar3->callback = 1;
    return (char *)0x1;
  case 0x8f:
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      pcVar7 = (char *)bio_nread0_part_0(param_1,param_4);
      return pcVar7;
    }
    break;
  case 0x90:
    if ((long)param_3 < 0) {
      param_3 = (char *)0x7fffffffffffffff;
    }
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      pcVar7 = (char *)bio_nread0_part_0(param_1,param_4);
      if ((long)param_3 <= (long)pcVar7) {
        pcVar7 = param_3;
      }
      if ((long)pcVar7 < 1) {
        return pcVar7;
      }
      p_Var4 = param_1->prev_bio->method->destroy;
      pcVar2 = p_Var4 + 0x10;
      *(long *)pcVar2 = *(long *)pcVar2 - (long)pcVar7;
      if ((*(long *)pcVar2 != 0) &&
         (lVar5 = *(long *)(p_Var4 + 0x18), *(char **)(p_Var4 + 0x18) = pcVar7 + lVar5,
         pcVar7 + lVar5 != *(char **)(p_Var4 + 0x20))) {
        return pcVar7;
      }
      *(undefined8 *)(p_Var4 + 0x18) = 0;
      return pcVar7;
    }
    break;
  case 0x91:
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      pcVar7 = (char *)bio_nwrite0_part_0(param_1,param_4);
      return pcVar7;
    }
    break;
  case 0x92:
    if ((long)param_3 < 0) {
      param_3 = (char *)0x7fffffffffffffff;
    }
    BIO_clear_flags(param_1,0xf);
    if (param_1->num != 0) {
      pcVar7 = (char *)bio_nwrite0_part_0(param_1,param_4);
      if ((long)param_3 <= (long)pcVar7) {
        pcVar7 = param_3;
      }
      if ((long)pcVar7 < 1) {
        return pcVar7;
      }
      ppcVar1 = &param_1->prev_bio->cb_arg;
      *ppcVar1 = *ppcVar1 + (long)pcVar7;
      return pcVar7;
    }
    break;
  case 0x93:
    pbVar3->ptr = (void *)0x0;
    return (char *)0x1;
  }
  return (char *)0x0;
}



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
LAB_001009c0:
    bp = (BIO *)0x0;
  }
  else {
    pBVar2 = BIO_s_bio();
    bp = BIO_new(pBVar2);
    if (bp == (BIO *)0x0) goto LAB_001009c0;
    if ((((writebuf1 == 0) || (lVar4 = BIO_ctrl(pBVar3,0x88,writebuf1,(void *)0x0), (int)lVar4 != 0)
         ) && ((writebuf2 == 0 || (lVar4 = BIO_ctrl(bp,0x88,writebuf2,(void *)0x0), (int)lVar4 != 0)
               ))) && (lVar4 = BIO_ctrl(pBVar3,0x8a,0,bp), (int)lVar4 != 0)) {
      iVar1 = 1;
      pBVar5 = pBVar3;
      pBVar3 = bp;
      goto LAB_00100969;
    }
  }
  pBVar5 = (BIO *)0x0;
  BIO_free(pBVar3);
  pBVar3 = (BIO *)0x0;
  BIO_free(bp);
  iVar1 = 0;
LAB_00100969:
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


