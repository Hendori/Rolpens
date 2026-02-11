
long buffer_callback_ctrl(long param_1,int param_2,fp *param_3)

{
  long lVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return lVar1;
  }
  return 0;
}



undefined8 buffer_new(long param_1)

{
  undefined4 *ptr;
  void *pvVar1;
  
  ptr = (undefined4 *)CRYPTO_zalloc(0x28,"crypto/bio/bf_buff.c",0x2f);
  if (ptr != (undefined4 *)0x0) {
    *ptr = 0x1000;
    pvVar1 = CRYPTO_malloc(0x1000,"crypto/bio/bf_buff.c",0x34);
    *(void **)(ptr + 2) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      ptr[1] = 0x1000;
      pvVar1 = CRYPTO_malloc(0x1000,"crypto/bio/bf_buff.c",0x3a);
      *(void **)(ptr + 6) = pvVar1;
      if (pvVar1 != (void *)0x0) {
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined4 **)(param_1 + 0x40) = ptr;
        *(undefined4 *)(param_1 + 0x30) = 0;
        return 1;
      }
      CRYPTO_free(*(void **)(ptr + 2));
      CRYPTO_free(ptr);
      return 0;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



int buffer_gets(BIO *param_1,char *param_2,int param_3)

{
  char cVar1;
  bio_st *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  _func_603 *p_Var8;
  
  param_3 = param_3 + -1;
  iVar6 = 0;
  pbVar2 = param_1->prev_bio;
  BIO_clear_flags(param_1,0xf);
  do {
    p_Var8 = pbVar2->callback;
    iVar3 = *(int *)&pbVar2->cb_arg;
    while (0 < iVar3) {
      iVar5 = *(int *)((long)&pbVar2->cb_arg + 4);
      if (0 < param_3) {
        p_Var8 = p_Var8 + iVar5;
        iVar5 = 0;
        pcVar7 = param_2;
        do {
          cVar1 = (char)*p_Var8;
          param_2 = pcVar7 + 1;
          iVar5 = iVar5 + 1;
          *pcVar7 = cVar1;
          if (cVar1 == '\n') {
            iVar6 = iVar6 + iVar5;
            pbVar2->cb_arg =
                 (char *)CONCAT44(iVar5 + (int)((ulong)pbVar2->cb_arg >> 0x20),
                                  (int)pbVar2->cb_arg - iVar5);
            goto LAB_001001d7;
          }
          iVar3 = *(int *)&pbVar2->cb_arg;
          p_Var8 = p_Var8 + 1;
          iVar4 = param_3;
          if (iVar3 <= param_3) {
            iVar4 = iVar3;
          }
          pcVar7 = param_2;
        } while (iVar5 < iVar4);
        iVar3 = iVar3 - iVar5;
        param_3 = param_3 - iVar5;
        iVar6 = iVar6 + iVar5;
        iVar5 = *(int *)((long)&pbVar2->cb_arg + 4) + iVar5;
      }
      *(int *)&pbVar2->cb_arg = iVar3;
      *(int *)((long)&pbVar2->cb_arg + 4) = iVar5;
      if (param_3 == 0) {
LAB_001001d7:
        *param_2 = '\0';
        return iVar6;
      }
      p_Var8 = pbVar2->callback;
      iVar3 = *(int *)&pbVar2->cb_arg;
    }
    iVar3 = BIO_read(*(BIO **)&param_1->references,p_Var8,*(int *)&pbVar2->method);
    if (iVar3 < 1) {
      BIO_copy_next_retry(param_1);
      *param_2 = '\0';
      if (0 < iVar6) {
        return iVar6;
      }
      if (iVar3 != 0) {
        iVar6 = iVar3;
      }
      return iVar6;
    }
    *(int *)&pbVar2->cb_arg = iVar3;
    *(undefined4 *)((long)&pbVar2->cb_arg + 4) = 0;
  } while( true );
}



int buffer_read(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  BIO *b;
  int iVar4;
  
  if (param_2 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    pbVar1 = param_1->prev_bio;
    iVar4 = 0;
    if ((pbVar1 != (bio_st *)0x0) && (iVar4 = 0, *(long *)&param_1->references != 0)) {
      BIO_clear_flags(param_1,0xf);
      iVar2 = *(int *)&pbVar1->cb_arg;
      if (iVar2 != 0) {
        iVar4 = 0;
        goto LAB_001002a3;
      }
      b = *(BIO **)&param_1->references;
      iVar4 = 0;
      if (*(int *)&pbVar1->method < param_3) {
LAB_00100362:
        while (iVar2 = BIO_read(b,param_2,param_3), 0 < iVar2) {
          iVar4 = iVar4 + iVar2;
          if (param_3 == iVar2) {
            return iVar4;
          }
          b = *(BIO **)&param_1->references;
          param_3 = param_3 - iVar2;
          param_2 = (void *)((long)param_2 + (long)iVar2);
        }
        BIO_copy_next_retry(param_1);
        if (iVar2 == 0) {
          return iVar4;
        }
        if (0 < iVar4) {
          return iVar4;
        }
        return iVar2;
      }
      iVar2 = BIO_read(b,pbVar1->callback,*(int *)&pbVar1->method);
      iVar4 = 0;
      while (0 < iVar2) {
        *(undefined4 *)((long)&pbVar1->cb_arg + 4) = 0;
        *(int *)&pbVar1->cb_arg = iVar2;
LAB_001002a3:
        iVar3 = iVar2;
        if (param_3 <= iVar2) {
          iVar3 = param_3;
        }
        memcpy(param_2,pbVar1->callback + *(int *)((long)&pbVar1->cb_arg + 4),(long)iVar3);
        iVar4 = iVar4 + iVar3;
        pbVar1->cb_arg =
             (char *)CONCAT44((int)((ulong)pbVar1->cb_arg >> 0x20) + iVar3,
                              (int)pbVar1->cb_arg - iVar3);
        if (param_3 <= iVar2) {
          return iVar4;
        }
        param_3 = param_3 - iVar3;
        b = *(BIO **)&param_1->references;
        param_2 = (void *)((long)param_2 + (long)iVar3);
        if (*(int *)&pbVar1->method < param_3) goto LAB_00100362;
        iVar2 = BIO_read(b,pbVar1->callback,*(int *)&pbVar1->method);
      }
      BIO_copy_next_retry(param_1);
      if ((iVar4 < 1) && (iVar2 != 0)) {
        iVar4 = iVar2;
      }
    }
  }
  return iVar4;
}



size_t buffer_ctrl(BIO *param_1,int param_2,size_t param_3,BIO *param_4)

{
  char cVar1;
  bio_st *pbVar2;
  undefined8 uVar3;
  int iVar4;
  _func_603 *p_Var5;
  size_t sVar6;
  long lVar7;
  void *pvVar8;
  _func_603 *p_Var9;
  int iVar10;
  BIO *pBVar11;
  void *ptr;
  int iVar12;
  long in_FS_OFFSET;
  undefined1 local_41;
  long local_40;
  
  pbVar2 = param_1->prev_bio;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x1d < param_2) {
    iVar4 = (int)param_3;
    if (param_2 == 0x75) {
      iVar10 = iVar4;
      iVar12 = iVar4;
      if (param_4 != (BIO *)0x0) {
        if (*(int *)&param_4->method == 0) {
          iVar12 = *(int *)((long)&pbVar2->method + 4);
        }
        else {
          iVar10 = *(int *)&pbVar2->method;
        }
      }
      pvVar8 = *(void **)&pbVar2->init;
      p_Var5 = pbVar2->callback;
      if ((iVar10 < 0x1001) || (*(int *)&pbVar2->method == iVar10)) {
        if (iVar12 < 0x1001) goto LAB_0010085e;
        ptr = pvVar8;
        if (iVar12 != *(int *)((long)&pbVar2->method + 4)) goto LAB_00100886;
      }
      else {
        if (((long)param_3 < 1) ||
           (p_Var5 = (_func_603 *)CRYPTO_malloc(iVar4,"crypto/bio/bf_buff.c",0x143),
           p_Var5 == (_func_603 *)0x0)) goto LAB_0010058b;
        if ((0x1000 < iVar12) && (*(int *)((long)&pbVar2->method + 4) != iVar12)) {
LAB_00100886:
          pvVar8 = CRYPTO_malloc(iVar4,"crypto/bio/bf_buff.c",0x148);
          if (pvVar8 == (void *)0x0) {
            if (pbVar2->callback != p_Var5) {
              sVar6 = 0;
              CRYPTO_free(p_Var5);
              goto LAB_00100458;
            }
            goto LAB_0010058b;
          }
        }
        if (pbVar2->callback != p_Var5) {
          CRYPTO_free(pbVar2->callback);
          pbVar2->callback = p_Var5;
          pbVar2->cb_arg = (char *)0x0;
          *(int *)&pbVar2->method = iVar10;
        }
        ptr = *(void **)&pbVar2->init;
      }
      if (pvVar8 != ptr) {
        CRYPTO_free(ptr);
        *(void **)&pbVar2->init = pvVar8;
        pbVar2->flags = 0;
        pbVar2->retry_reason = 0;
        *(int *)((long)&pbVar2->method + 4) = iVar12;
      }
    }
    else {
      if (param_2 < 0x76) {
        if (param_2 == 0x65) {
          if (*(long *)&param_1->references == 0) goto LAB_0010058b;
          BIO_clear_flags(param_1,0xf);
          sVar6 = BIO_ctrl(*(BIO **)&param_1->references,0x65,param_3,param_4);
          BIO_copy_next_retry(param_1);
        }
        else {
          if (param_2 != 0x74) goto switchD_001003f5_caseD_4;
          if (*(int *)&pbVar2->cb_arg < 1) goto LAB_0010058b;
          sVar6 = 0;
          p_Var5 = pbVar2->callback + *(int *)((long)&pbVar2->cb_arg + 4);
          p_Var9 = p_Var5 + *(int *)&pbVar2->cb_arg;
          do {
            cVar1 = (char)*p_Var5;
            p_Var5 = p_Var5 + 1;
            sVar6 = sVar6 + (cVar1 == '\n');
          } while (p_Var9 != p_Var5);
        }
        goto LAB_00100458;
      }
      if (param_2 != 0x7a) {
switchD_001003f5_caseD_4:
        pBVar11 = *(BIO **)&param_1->references;
        if (pBVar11 != (BIO *)0x0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001004a7:
            sVar6 = BIO_ctrl(pBVar11,param_2,param_3,param_4);
            return sVar6;
          }
          goto LAB_00100909;
        }
        goto LAB_0010058b;
      }
      if ((long)*(int *)&pbVar2->method < (long)param_3) {
        if (((long)param_3 < 1) ||
           (p_Var5 = (_func_603 *)CRYPTO_malloc(iVar4,"crypto/bio/bf_buff.c",0x124),
           p_Var5 == (_func_603 *)0x0)) goto LAB_0010058b;
        CRYPTO_free(pbVar2->callback);
        pbVar2->callback = p_Var5;
      }
      else {
        p_Var5 = pbVar2->callback;
      }
      *(int *)&pbVar2->cb_arg = iVar4;
      *(undefined4 *)((long)&pbVar2->cb_arg + 4) = 0;
      memcpy(p_Var5,param_4,(long)iVar4);
    }
LAB_0010085e:
    sVar6 = 1;
    goto LAB_00100458;
  }
  switch(param_2) {
  case 1:
    pBVar11 = *(BIO **)&param_1->references;
    pbVar2->cb_arg = (char *)0x0;
    pbVar2->flags = 0;
    pbVar2->retry_reason = 0;
    if (pBVar11 != (BIO *)0x0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100909;
      param_2 = 1;
      goto LAB_001004a7;
    }
    goto LAB_0010058b;
  case 2:
    if (*(int *)&pbVar2->cb_arg < 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        pBVar11 = *(BIO **)&param_1->references;
        param_2 = 2;
        goto LAB_001004a7;
      }
      goto LAB_00100909;
    }
LAB_0010058b:
    sVar6 = 0;
    break;
  case 3:
    sVar6 = (size_t)pbVar2->flags;
    break;
  default:
    goto switchD_001003f5_caseD_4;
  case 10:
    sVar6 = (size_t)*(int *)&pbVar2->cb_arg;
    if (sVar6 == 0) {
      pBVar11 = *(BIO **)&param_1->references;
      if (pBVar11 != (BIO *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 10;
          goto LAB_001004a7;
        }
        goto LAB_00100909;
      }
      goto LAB_0010058b;
    }
    break;
  case 0xb:
    pBVar11 = *(BIO **)&param_1->references;
    if (pBVar11 == (BIO *)0x0) goto LAB_0010058b;
    if (0 < pbVar2->flags) {
      while( true ) {
        BIO_clear_flags(param_1,0xf);
        if (pbVar2->flags < 1) break;
        iVar4 = BIO_write(*(BIO **)&param_1->references,
                          (void *)((long)pbVar2->retry_reason + *(long *)&pbVar2->init),
                          pbVar2->flags);
        sVar6 = (size_t)iVar4;
        BIO_copy_next_retry(param_1);
        if (iVar4 < 1) goto LAB_00100458;
        uVar3._0_4_ = pbVar2->flags;
        uVar3._4_4_ = pbVar2->retry_reason;
        uVar3 = CONCAT44((int)((ulong)uVar3 >> 0x20) + iVar4,(int)uVar3 - iVar4);
        pbVar2->flags = (int)uVar3;
        pbVar2->retry_reason = (int)((ulong)uVar3 >> 0x20);
      }
      pbVar2->flags = 0;
      pbVar2->retry_reason = 0;
      pBVar11 = *(BIO **)&param_1->references;
    }
    sVar6 = BIO_ctrl(pBVar11,0xb,param_3,param_4);
    BIO_copy_next_retry(param_1);
    break;
  case 0xc:
    lVar7 = BIO_int_ctrl(param_4,0x75,(long)*(int *)&pbVar2->method,0);
    if (lVar7 < 1) goto LAB_0010058b;
    lVar7 = BIO_int_ctrl(param_4,0x75,(long)*(int *)((long)&pbVar2->method + 4),1);
    sVar6 = (size_t)(0 < lVar7);
    break;
  case 0xd:
    sVar6 = (size_t)pbVar2->flags;
    if (sVar6 == 0) {
      pBVar11 = *(BIO **)&param_1->references;
      if (pBVar11 != (BIO *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          param_2 = 0xd;
          goto LAB_001004a7;
        }
        goto LAB_00100909;
      }
      goto LAB_0010058b;
    }
    break;
  case 0x1d:
    buffer_read(param_1,&local_41,0);
    sVar6 = (long)*(int *)&pbVar2->cb_arg;
    if ((long)param_3 < (long)*(int *)&pbVar2->cb_arg) {
      sVar6 = param_3;
    }
    memcpy(param_4,pbVar2->callback + *(int *)((long)&pbVar2->cb_arg + 4),sVar6);
  }
LAB_00100458:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return sVar6;
  }
LAB_00100909:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 buffer_free(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x40);
    CRYPTO_free(*(void **)(lVar1 + 8));
    CRYPTO_free(*(void **)(lVar1 + 0x18));
    CRYPTO_free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}



int buffer_write_part_0(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  pbVar1 = param_1->prev_bio;
  if (pbVar1 == (bio_st *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0;
    if (*(long *)&param_1->references != 0) {
      BIO_clear_flags(param_1,0xf);
      iVar4 = pbVar1->flags;
      iVar6 = pbVar1->retry_reason;
      iVar3 = *(int *)((long)&pbVar1->method + 4);
      iVar5 = iVar4 + iVar6;
      iVar8 = iVar3 - iVar5;
      iVar2 = param_3;
      if (iVar8 < param_3) {
        do {
          if (iVar4 != 0) {
            if (0 < iVar8) {
              param_3 = param_3 - iVar8;
              iVar7 = iVar7 + iVar8;
              memcpy((void *)((long)iVar5 + *(long *)&pbVar1->init),param_2,(long)iVar8);
              iVar6 = pbVar1->retry_reason;
              param_2 = (void *)((long)param_2 + (long)iVar8);
              iVar4 = pbVar1->flags + iVar8;
              pbVar1->flags = iVar4;
            }
            do {
              iVar4 = BIO_write(*(BIO **)&param_1->references,
                                (void *)((long)iVar6 + *(long *)&pbVar1->init),iVar4);
              if (iVar4 < 1) goto LAB_00100aab;
              iVar6 = pbVar1->retry_reason + iVar4;
              iVar4 = pbVar1->flags - iVar4;
              pbVar1->retry_reason = iVar6;
              pbVar1->flags = iVar4;
            } while (iVar4 != 0);
            iVar3 = *(int *)((long)&pbVar1->method + 4);
          }
          pbVar1->retry_reason = 0;
          while (iVar3 <= param_3) {
            iVar4 = BIO_write(*(BIO **)&param_1->references,param_2,param_3);
            if (iVar4 < 1) {
LAB_00100aab:
              BIO_copy_next_retry(param_1);
              if (iVar4 == 0) {
                return iVar7;
              }
              if (0 < iVar7) {
                return iVar7;
              }
              return iVar4;
            }
            iVar7 = iVar7 + iVar4;
            param_2 = (void *)((long)param_2 + (long)iVar4);
            param_3 = param_3 - iVar4;
            if (param_3 == 0) {
              return iVar7;
            }
            iVar3 = *(int *)((long)&pbVar1->method + 4);
          }
          iVar4 = pbVar1->flags;
          iVar6 = pbVar1->retry_reason;
          iVar5 = iVar4 + iVar6;
          iVar8 = iVar3 - iVar5;
        } while (iVar8 < param_3);
        iVar2 = iVar7 + param_3;
      }
      iVar7 = iVar2;
      memcpy((void *)((long)iVar5 + *(long *)&pbVar1->init),param_2,(long)param_3);
      pbVar1->flags = pbVar1->flags + param_3;
    }
  }
  return iVar7;
}



undefined8 buffer_write(undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (0 < param_3)) {
    uVar1 = buffer_write_part_0();
    return uVar1;
  }
  return 0;
}



undefined8 buffer_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_2);
  if (0 < (int)sVar1) {
    uVar2 = buffer_write_part_0(param_1,param_2,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_f_buffer(void)

{
  return (BIO_METHOD *)methods_buffer;
}


