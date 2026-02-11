
undefined8 readbuffer_write(void)

{
  return 0;
}



undefined8 readbuffer_puts(void)

{
  return 0;
}



long readbuffer_callback_ctrl(long param_1,int param_2,fp *param_3)

{
  long lVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return lVar1;
  }
  return 0;
}



undefined8 readbuffer_new(long param_1)

{
  undefined4 *ptr;
  long lVar1;
  
  ptr = (undefined4 *)CRYPTO_zalloc(0x28,"crypto/bio/bf_readbuff.c",0x37);
  if (ptr != (undefined4 *)0x0) {
    *ptr = 0x1000;
    lVar1 = CRYPTO_zalloc(0x1000,"crypto/bio/bf_readbuff.c",0x3c);
    *(long *)(ptr + 2) = lVar1;
    if (lVar1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined4 **)(param_1 + 0x40) = ptr;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



long readbuffer_ctrl(long param_1,int param_2,long param_3,void *param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (param_2 < 0xd) {
    switch(param_2) {
    case 1:
      goto switchD_001000ec_caseD_1;
    case 2:
      if (*(int *)(lVar2 + 0x10) < 1) {
        if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
          lVar2 = BIO_ctrl(*(BIO **)(param_1 + 0x48),2,param_3,param_4);
          return lVar2;
        }
        return 1;
      }
      break;
    case 3:
switchD_001000ec_caseD_3:
      return (long)*(int *)(lVar2 + 0x14);
    case 10:
      if ((long)*(int *)(lVar2 + 0x10) != 0) {
        return (long)*(int *)(lVar2 + 0x10);
      }
      if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
        lVar2 = BIO_ctrl(*(BIO **)(param_1 + 0x48),10,param_3,param_4);
        return lVar2;
      }
      return 0;
    case 0xb:
    case 0xc:
      goto switchD_001000ec_caseD_b;
    }
  }
  else {
    if (param_2 != 0x80) {
      if (param_2 != 0x85) {
        return 0;
      }
      goto switchD_001000ec_caseD_3;
    }
switchD_001000ec_caseD_1:
    iVar1 = *(int *)(lVar2 + 0x10) + *(int *)(lVar2 + 0x14);
    if ((-1 < param_3) && (param_3 <= iVar1)) {
      *(int *)(lVar2 + 0x14) = (int)param_3;
      *(int *)(lVar2 + 0x10) = iVar1 - (int)param_3;
switchD_001000ec_caseD_b:
      return 1;
    }
  }
  return 0;
}



int readbuffer_gets(BIO *param_1,char *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bio_st *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  _func_603 *p_Var7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  
  if ((((param_2 == (char *)0x0) || (param_3 == 0)) ||
      (pbVar3 = param_1->prev_bio, pbVar3 == (bio_st *)0x0)) || (*(long *)&param_1->references == 0)
     ) {
LAB_00100310:
    iVar9 = 0;
  }
  else {
    iVar11 = param_3 + -1;
    BIO_clear_flags(param_1,0xf);
    iVar4 = *(int *)&pbVar3->cb_arg;
    if (iVar4 < 1) {
      iVar6 = *(int *)((long)&pbVar3->cb_arg + 4);
      iVar9 = 0;
LAB_0010026e:
      uVar5 = iVar6 + 0xfff + param_3;
      p_Var7 = pbVar3->callback;
      uVar10 = uVar5 + 0xfff;
      if (-1 < (int)uVar5) {
        uVar10 = uVar5;
      }
      uVar10 = uVar10 & 0xfffff000;
      if (*(int *)&pbVar3->method < (int)uVar10) {
        p_Var7 = (_func_603 *)CRYPTO_realloc(p_Var7,uVar10,"crypto/bio/bf_readbuff.c",0x61);
        if (p_Var7 == (_func_603 *)0x0) goto LAB_00100310;
        pbVar3->callback = p_Var7;
        iVar6 = *(int *)((long)&pbVar3->cb_arg + 4);
        *(uint *)&pbVar3->method = uVar10;
      }
      p_Var7 = p_Var7 + iVar6;
      if (0 < iVar11) {
        pcVar12 = param_2 + iVar11;
        pcVar8 = param_2;
        do {
          iVar11 = BIO_read(*(BIO **)&param_1->references,p_Var7,1);
          if (iVar11 < 1) {
            BIO_copy_next_retry(param_1);
            *pcVar8 = '\0';
            if (iVar9 != 0) {
              return iVar9;
            }
            return iVar11;
          }
          param_2 = pcVar8 + 1;
          iVar9 = iVar9 + 1;
          *pcVar8 = (char)*p_Var7;
          piVar1 = (int *)((long)&pbVar3->cb_arg + 4);
          *piVar1 = *piVar1 + 1;
        } while ((*p_Var7 != (_func_603)0xa) &&
                (p_Var7 = p_Var7 + 1, pcVar8 = param_2, pcVar12 != param_2));
      }
    }
    else {
      iVar6 = *(int *)((long)&pbVar3->cb_arg + 4);
      if (iVar11 < 1) {
        iVar9 = 0;
      }
      else {
        p_Var7 = pbVar3->callback + iVar6;
        iVar9 = 0;
        pcVar8 = param_2;
        do {
          cVar2 = (char)*p_Var7;
          param_2 = pcVar8 + 1;
          iVar9 = iVar9 + 1;
          *pcVar8 = cVar2;
          if (cVar2 == '\n') {
            pbVar3->cb_arg =
                 (char *)CONCAT44(iVar9 + (int)((ulong)pbVar3->cb_arg >> 0x20),
                                  (int)pbVar3->cb_arg - iVar9);
            goto LAB_0010034f;
          }
          iVar4 = *(int *)&pbVar3->cb_arg;
          p_Var7 = p_Var7 + 1;
          iVar6 = iVar11;
          if (iVar4 <= iVar11) {
            iVar6 = iVar4;
          }
          pcVar8 = param_2;
        } while (iVar9 < iVar6);
        iVar4 = iVar4 - iVar9;
        iVar11 = iVar11 - iVar9;
        iVar6 = *(int *)((long)&pbVar3->cb_arg + 4) + iVar9;
      }
      *(int *)&pbVar3->cb_arg = iVar4;
      *(int *)((long)&pbVar3->cb_arg + 4) = iVar6;
      if (iVar11 != 0) {
        param_3 = iVar11 + 1;
        goto LAB_0010026e;
      }
    }
LAB_0010034f:
    *param_2 = '\0';
  }
  return iVar9;
}



undefined8 readbuffer_free(long param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x40) + 8));
    CRYPTO_free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}



int readbuffer_read(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  int iVar2;
  ulong uVar3;
  _func_603 *addr;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((((param_2 == (void *)0x0) || (param_3 == 0)) ||
      (pbVar1 = param_1->prev_bio, pbVar1 == (bio_st *)0x0)) || (*(long *)&param_1->references == 0)
     ) {
LAB_00100550:
    iVar6 = 0;
  }
  else {
    BIO_clear_flags(param_1,0xf);
    addr = pbVar1->callback;
    iVar2 = *(int *)&pbVar1->cb_arg;
    uVar3 = (ulong)*(int *)((long)&pbVar1->cb_arg + 4);
    if (iVar2 != 0) {
      iVar6 = 0;
      goto LAB_001004cf;
    }
    iVar6 = 0;
    while( true ) {
      iVar2 = (int)uVar3;
      uVar5 = iVar2 + 0xfff + param_3;
      uVar7 = uVar5 + 0xfff;
      if (-1 < (int)uVar5) {
        uVar7 = uVar5;
      }
      uVar7 = uVar7 & 0xfffff000;
      if (*(int *)&pbVar1->method < (int)uVar7) {
        addr = (_func_603 *)CRYPTO_realloc(addr,uVar7,"crypto/bio/bf_readbuff.c",0x61);
        if (addr == (_func_603 *)0x0) goto LAB_00100550;
        pbVar1->callback = addr;
        iVar2 = *(int *)((long)&pbVar1->cb_arg + 4);
        *(uint *)&pbVar1->method = uVar7;
      }
      iVar2 = BIO_read(*(BIO **)&param_1->references,addr + iVar2,param_3);
      if (iVar2 < 1) break;
      *(int *)&pbVar1->cb_arg = iVar2;
      addr = pbVar1->callback;
      uVar3 = (ulong)*(int *)((long)&pbVar1->cb_arg + 4);
LAB_001004cf:
      iVar4 = param_3;
      if (iVar2 <= param_3) {
        iVar4 = iVar2;
      }
      memcpy(param_2,addr + uVar3,(long)iVar4);
      uVar3 = (ulong)(uint)(*(int *)((long)&pbVar1->cb_arg + 4) + iVar4);
      iVar6 = iVar6 + iVar4;
      pbVar1->cb_arg =
           (char *)CONCAT44((int)((ulong)pbVar1->cb_arg >> 0x20) + iVar4,(int)pbVar1->cb_arg - iVar4
                           );
      if (param_3 <= iVar2) {
        return iVar6;
      }
      addr = pbVar1->callback;
      param_3 = param_3 - iVar4;
      param_2 = (void *)((long)param_2 + (long)iVar4);
    }
    BIO_copy_next_retry(param_1);
    if ((iVar6 < 1) && (iVar2 != 0)) {
      iVar6 = iVar2;
    }
  }
  return iVar6;
}



undefined1 * BIO_f_readbuffer(void)

{
  return methods_readbuffer;
}


