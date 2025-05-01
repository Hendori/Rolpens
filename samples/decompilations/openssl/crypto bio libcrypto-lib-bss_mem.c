
undefined8 secmem_new(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *ptr;
  long lVar4;
  undefined8 *puVar5;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"crypto/bio/bss_mem.c",0x6f);
  if (ptr != (long *)0x0) {
    lVar4 = BUF_MEM_new_ex(1);
    *ptr = lVar4;
    if (lVar4 == 0) {
      CRYPTO_free(ptr);
    }
    else {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x20,"crypto/bio/bss_mem.c",0x77);
      ptr[1] = (long)puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*ptr;
        uVar2 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        uVar2 = puVar1[2];
        uVar3 = puVar1[3];
        *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        uVar2 = _LC1;
        *(long **)(param_1 + 0x40) = ptr;
        *(undefined8 *)(param_1 + 0x28) = uVar2;
        return 1;
      }
      BUF_MEM_free((BUF_MEM *)*ptr);
      CRYPTO_free(ptr);
    }
  }
  return 0;
}



ulong mem_read(BIO *param_1,void *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  BIO_METHOD *pBVar3;
  
  uVar2 = (ulong)param_3;
  pBVar3 = (BIO_METHOD *)param_1->prev_bio->callback;
  if (((ulong)param_1->ptr & 0x200) != 0) {
    pBVar3 = param_1->prev_bio->method;
  }
  BIO_clear_flags(param_1,0xf);
  uVar1 = *(ulong *)pBVar3;
  if (-1 < (int)param_3) {
    uVar2 = (ulong)param_3;
    if (uVar1 < (ulong)(long)(int)param_3) {
      uVar2 = uVar1 & 0xffffffff;
    }
    if ((param_2 != (void *)0x0) && (0 < (int)uVar2)) {
      __n = (size_t)(int)uVar2;
      memcpy(param_2,pBVar3->name,__n);
      *(ulong *)pBVar3 = *(ulong *)pBVar3 - __n;
      pBVar3->bwrite = pBVar3->bwrite + -__n;
      pBVar3->name = pBVar3->name + __n;
      return uVar2;
    }
  }
  if ((uVar1 == 0) && (uVar2 = (ulong)*(uint *)&param_1->next_bio, *(uint *)&param_1->next_bio != 0)
     ) {
    BIO_set_flags(param_1,9);
    return uVar2;
  }
  return uVar2;
}



undefined8 mem_gets(BIO *param_1,undefined1 *param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  BIO_METHOD *pBVar4;
  
  pBVar4 = (BIO_METHOD *)param_1->prev_bio->callback;
  if (((ulong)param_1->ptr & 0x200) != 0) {
    pBVar4 = param_1->prev_bio->method;
  }
  BIO_clear_flags(param_1,0xf);
  iVar2 = (int)*(undefined8 *)pBVar4;
  if (param_3 <= (int)*(undefined8 *)pBVar4) {
    iVar2 = param_3 + -1;
  }
  if (iVar2 < 1) {
    *param_2 = 0;
    return 0;
  }
  lVar3 = 1;
  do {
    if (pBVar4->name[lVar3 + -1] == '\n') break;
    lVar3 = lVar3 + 1;
  } while (lVar3 != iVar2 + 1);
  uVar1 = mem_read(param_1,param_2);
  if (0 < (int)uVar1) {
    param_2[(int)uVar1] = 0;
  }
  return uVar1;
}



size_t mem_ctrl(long param_1,int param_2,size_t param_3,size_t *param_4)

{
  size_t *psVar1;
  char *pcVar2;
  char *pcVar3;
  size_t *psVar4;
  BUF_MEM *pBVar5;
  size_t sVar6;
  undefined4 uVar7;
  size_t sVar8;
  BUF_MEM *pBVar9;
  BUF_MEM *pBVar10;
  uint uVar11;
  BUF_MEM *a;
  
  psVar1 = *(size_t **)(param_1 + 0x40);
  a = (BUF_MEM *)*psVar1;
  pBVar9 = (BUF_MEM *)psVar1[1];
  uVar11 = *(uint *)(param_1 + 0x30) & 0x200;
  pBVar5 = pBVar9;
  pBVar10 = a;
  if (uVar11 != 0) {
    pBVar5 = a;
    pBVar10 = pBVar9;
  }
  pcVar2 = pBVar5->data;
  pcVar3 = pBVar10->data;
  sVar6 = (long)pcVar2 - (long)pcVar3;
  if (pcVar2 == pcVar3) {
    sVar6 = 0;
  }
  sVar8 = pBVar5->length;
  uVar7 = (undefined4)param_3;
  if (0xc < param_2) {
    switch(param_2) {
    case 0x72:
      if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
        if (uVar11 != 0) {
          a->data = (char *)0x0;
        }
        BUF_MEM_free(a);
        pBVar9 = (BUF_MEM *)psVar1[1];
      }
      sVar6 = *param_4;
      pcVar2 = (char *)param_4[1];
      *(undefined4 *)(param_1 + 0x2c) = uVar7;
      *psVar1 = (size_t)param_4;
      pBVar9->length = sVar6;
      pBVar9->data = pcVar2;
      sVar6 = param_4[3];
      pBVar9->max = param_4[2];
      pBVar9[1].length = sVar6;
      break;
    case 0x73:
      if (param_4 != (size_t *)0x0) {
        if ((uVar11 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
          if (pBVar9->data != a->data) {
            memmove(a->data,pBVar9->data,pBVar9->length);
            psVar4 = (size_t *)psVar1[1];
            a = (BUF_MEM *)*psVar1;
            a->length = *psVar4;
            psVar4[1] = (size_t)a->data;
          }
        }
        *param_4 = (size_t)a;
      }
      break;
    default:
      goto switchD_001002a5_caseD_4;
    case 0x80:
      if ((-1 < (long)param_3) && ((long)param_3 <= (long)(sVar6 + sVar8))) {
        sVar6 = pBVar10->length;
        pBVar5->data = pcVar3 + param_3;
        pBVar5->length = sVar6 - param_3;
        pBVar5->max = pBVar10->max - param_3;
        return param_3;
      }
      return 0xffffffffffffffff;
    case 0x82:
      *(undefined4 *)(param_1 + 0x38) = uVar7;
      break;
    case 0x85:
      return sVar6;
    }
    goto switchD_001002a5_caseD_b;
  }
  switch(param_2) {
  case 1:
    if (a->data != (char *)0x0) {
      if (uVar11 == 0) {
        if ((*(uint *)(param_1 + 0x30) & 0x400) == 0) {
          memset(a->data,0,a->max);
          a->length = 0;
          pBVar9 = (BUF_MEM *)psVar1[1];
          a = (BUF_MEM *)*psVar1;
        }
        pcVar2 = a->data;
        pBVar9->length = a->length;
        pBVar9->data = pcVar2;
        sVar6 = a[1].length;
        pBVar9->max = a->max;
        pBVar9[1].length = sVar6;
      }
      else {
        pcVar2 = pBVar9->data;
        a->length = pBVar9->length;
        a->data = pcVar2;
        sVar6 = pBVar9[1].length;
        a->max = pBVar9->max;
        a[1].length = sVar6;
      }
    }
  case 0xb:
  case 0xc:
switchD_001002a5_caseD_b:
    sVar8 = 1;
    break;
  case 2:
    sVar8 = (size_t)(sVar8 == 0);
    break;
  case 3:
    if (param_4 != (size_t *)0x0) {
      *param_4 = (size_t)pcVar2;
    }
    break;
  default:
switchD_001002a5_caseD_4:
    sVar8 = 0;
    break;
  case 8:
    sVar8 = (size_t)*(int *)(param_1 + 0x2c);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x2c) = uVar7;
    goto switchD_001002a5_caseD_b;
  case 10:
    break;
  }
  return sVar8;
}



undefined8 mem_free(long param_1)

{
  undefined8 *ptr;
  BUF_MEM *a;
  
  if (param_1 != 0) {
    ptr = *(undefined8 **)(param_1 + 0x40);
    if (((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
       (ptr != (undefined8 *)0x0)) {
      a = (BUF_MEM *)*ptr;
      if ((*(byte *)(param_1 + 0x31) & 2) != 0) {
        a->data = (char *)0x0;
      }
      BUF_MEM_free(a);
    }
    CRYPTO_free((void *)ptr[1]);
    CRYPTO_free(ptr);
    return 1;
  }
  return 0;
}



undefined8 mem_new(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *ptr;
  long lVar4;
  undefined8 *puVar5;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"crypto/bio/bss_mem.c",0x6f);
  if (ptr != (long *)0x0) {
    lVar4 = BUF_MEM_new_ex(0);
    *ptr = lVar4;
    if (lVar4 == 0) {
      CRYPTO_free(ptr);
    }
    else {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x20,"crypto/bio/bss_mem.c",0x77);
      ptr[1] = (long)puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)*ptr;
        uVar2 = puVar1[1];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        uVar2 = puVar1[2];
        uVar3 = puVar1[3];
        *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
        uVar2 = _LC1;
        *(long **)(param_1 + 0x40) = ptr;
        *(undefined8 *)(param_1 + 0x28) = uVar2;
        return 1;
      }
      BUF_MEM_free((BUF_MEM *)*ptr);
      CRYPTO_free(ptr);
    }
  }
  return 0;
}



int mem_write(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  undefined8 uVar2;
  BIO_METHOD *pBVar3;
  _func_603 *p_Var4;
  bio_st *pbVar5;
  char *pcVar6;
  char *__dest;
  int iVar7;
  _func_596 *p_Var8;
  int iVar9;
  undefined4 extraout_var;
  
  pbVar1 = param_1->prev_bio;
  if (((ulong)param_1->ptr & 0x200) == 0) {
    BIO_clear_flags(param_1,0xf);
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("crypto/bio/bss_mem.c",0xe4,"mem_write");
      ERR_set_error(0x20,0xc0102,0);
    }
    else {
      uVar2 = *(undefined8 *)pbVar1->callback;
      if ((param_1->num != 0) && (pbVar5 = param_1->prev_bio, pbVar5 != (bio_st *)0x0)) {
        pcVar6 = *(char **)(pbVar5->callback + 8);
        __dest = pbVar5->method->name;
        if (pcVar6 != __dest) {
          memmove(__dest,pcVar6,*(size_t *)pbVar5->callback);
          p_Var4 = pbVar5->callback;
          pBVar3 = pbVar5->method;
          *(undefined8 *)pBVar3 = *(undefined8 *)p_Var4;
          *(char **)(p_Var4 + 8) = pBVar3->name;
        }
      }
      iVar7 = (int)uVar2;
      iVar9 = BUF_MEM_grow_clean((BUF_MEM *)pbVar1->method,(long)(param_3 + iVar7));
      if (CONCAT44(extraout_var,iVar9) != 0) {
        memcpy(pbVar1->method->name + iVar7,param_2,(long)param_3);
        pBVar3 = pbVar1->method;
        p_Var4 = pbVar1->callback;
        pcVar6 = pBVar3->name;
        *(undefined8 *)p_Var4 = *(undefined8 *)pBVar3;
        *(char **)(p_Var4 + 8) = pcVar6;
        p_Var8 = pBVar3->bread;
        *(_func_595 **)(p_Var4 + 0x10) = pBVar3->bwrite;
        *(_func_596 **)(p_Var4 + 0x18) = p_Var8;
        return param_3;
      }
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_mem.c",0xdd,"mem_write");
    ERR_set_error(0x20,0x7e,0);
  }
  return -1;
}



ulong mem_puts(BIO *param_1,char *param_2)

{
  bio_st *pbVar1;
  undefined8 uVar2;
  BIO_METHOD *pBVar3;
  _func_603 *p_Var4;
  bio_st *pbVar5;
  char *pcVar6;
  char *__dest;
  int iVar7;
  _func_596 *p_Var8;
  int iVar9;
  int iVar10;
  size_t sVar11;
  undefined4 extraout_var;
  
  sVar11 = strlen(param_2);
  pbVar1 = param_1->prev_bio;
  if (((ulong)param_1->ptr & 0x200) == 0) {
    iVar9 = (int)sVar11;
    BIO_clear_flags(param_1,0xf);
    if (iVar9 == 0) {
      return sVar11 & 0xffffffff;
    }
    uVar2 = *(undefined8 *)pbVar1->callback;
    if ((param_1->num != 0) && (pbVar5 = param_1->prev_bio, pbVar5 != (bio_st *)0x0)) {
      pcVar6 = *(char **)(pbVar5->callback + 8);
      __dest = pbVar5->method->name;
      if (pcVar6 != __dest) {
        memmove(__dest,pcVar6,*(size_t *)pbVar5->callback);
        p_Var4 = pbVar5->callback;
        pBVar3 = pbVar5->method;
        *(undefined8 *)pBVar3 = *(undefined8 *)p_Var4;
        *(char **)(p_Var4 + 8) = pBVar3->name;
      }
    }
    iVar7 = (int)uVar2;
    iVar10 = BUF_MEM_grow_clean((BUF_MEM *)pbVar1->method,(long)(iVar9 + iVar7));
    if (CONCAT44(extraout_var,iVar10) != 0) {
      memcpy(pbVar1->method->name + iVar7,param_2,(long)iVar9);
      pBVar3 = pbVar1->method;
      p_Var4 = pbVar1->callback;
      pcVar6 = pBVar3->name;
      *(undefined8 *)p_Var4 = *(undefined8 *)pBVar3;
      *(char **)(p_Var4 + 8) = pcVar6;
      p_Var8 = pBVar3->bread;
      *(_func_595 **)(p_Var4 + 0x10) = pBVar3->bwrite;
      *(_func_596 **)(p_Var4 + 0x18) = p_Var8;
      return sVar11 & 0xffffffff;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_mem.c",0xdd,"mem_write");
    ERR_set_error(0x20,0x7e,0);
  }
  return 0xffffffff;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_mem(void)

{
  return (BIO_METHOD *)mem_method;
}



undefined1 * BIO_s_secmem(void)

{
  return secmem_method;
}



BIO * BIO_new_mem_buf(void *buf,int len)

{
  _func_603 *p_Var1;
  char *pcVar2;
  _func_596 *p_Var3;
  BIO_METHOD *pBVar4;
  BIO *pBVar5;
  _func_595 *p_Var6;
  
  if (buf == (void *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bss_mem.c",0x5a,"BIO_new_mem_buf");
    ERR_set_error(0x20,0xc0102,0);
    pBVar5 = (BIO *)0x0;
  }
  else {
    p_Var6 = (_func_595 *)(long)len;
    if (len < 0) {
      p_Var6 = (_func_595 *)strlen((char *)buf);
    }
    pBVar4 = BIO_s_mem();
    pBVar5 = BIO_new(pBVar4);
    if (pBVar5 != (BIO *)0x0) {
      pBVar4 = pBVar5->prev_bio->method;
      p_Var1 = pBVar5->prev_bio->callback;
      pBVar4->name = (char *)buf;
      *(_func_595 **)pBVar4 = p_Var6;
      pcVar2 = pBVar4->name;
      pBVar4->bwrite = p_Var6;
      *(size_t *)p_Var1 = *(size_t *)pBVar4;
      *(char **)(p_Var1 + 8) = pcVar2;
      p_Var3 = pBVar4->bread;
      *(_func_595 **)(p_Var1 + 0x10) = pBVar4->bwrite;
      *(_func_596 **)(p_Var1 + 0x18) = p_Var3;
      *(uint *)&pBVar5->ptr = *(uint *)&pBVar5->ptr | 0x200;
      *(undefined4 *)&pBVar5->next_bio = 0;
    }
  }
  return pBVar5;
}


