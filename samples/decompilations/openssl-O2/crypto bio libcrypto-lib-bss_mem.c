
undefined8 mem_init(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *ptr;
  long lVar4;
  undefined8 *puVar5;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"crypto/bio/bss_mem.c",0x6f);
  if (ptr != (long *)0x0) {
    lVar4 = BUF_MEM_new_ex(param_2);
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



void mem_new(undefined8 param_1)

{
  mem_init(param_1,0);
  return;
}



void secmem_new(undefined8 param_1)

{
  mem_init(param_1,1);
  return;
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



void mem_buf_sync_part_0_isra_0(long *param_1)

{
  void *__src;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (long *)0x0) {
    __src = (void *)((size_t *)param_1[1])[1];
    if (__src != *(void **)(*param_1 + 8)) {
      memmove(*(void **)(*param_1 + 8),__src,*(size_t *)param_1[1]);
      puVar1 = (undefined8 *)param_1[1];
      puVar2 = (undefined8 *)*param_1;
      *puVar2 = *puVar1;
      puVar1[1] = puVar2[1];
    }
    return;
  }
  return;
}



size_t mem_ctrl(long param_1,int param_2,size_t param_3,size_t *param_4)

{
  size_t *psVar1;
  char *pcVar2;
  char *pcVar3;
  BUF_MEM *pBVar4;
  size_t sVar5;
  undefined4 uVar6;
  size_t sVar7;
  BUF_MEM *pBVar8;
  BUF_MEM *pBVar9;
  uint uVar10;
  BUF_MEM *a;
  
  psVar1 = *(size_t **)(param_1 + 0x40);
  a = (BUF_MEM *)*psVar1;
  pBVar8 = (BUF_MEM *)psVar1[1];
  uVar10 = *(uint *)(param_1 + 0x30) & 0x200;
  pBVar4 = pBVar8;
  pBVar9 = a;
  if (uVar10 != 0) {
    pBVar4 = a;
    pBVar9 = pBVar8;
  }
  pcVar2 = pBVar4->data;
  pcVar3 = pBVar9->data;
  sVar5 = (long)pcVar2 - (long)pcVar3;
  if (pcVar2 == pcVar3) {
    sVar5 = 0;
  }
  sVar7 = pBVar4->length;
  uVar6 = (undefined4)param_3;
  if (0xc < param_2) {
    switch(param_2) {
    case 0x72:
      if ((*(int *)(param_1 + 0x2c) != 0) && (*(int *)(param_1 + 0x28) != 0)) {
        if (uVar10 != 0) {
          a->data = (char *)0x0;
        }
        BUF_MEM_free(a);
        pBVar8 = (BUF_MEM *)psVar1[1];
      }
      sVar5 = *param_4;
      pcVar2 = (char *)param_4[1];
      *(undefined4 *)(param_1 + 0x2c) = uVar6;
      *psVar1 = (size_t)param_4;
      pBVar8->length = sVar5;
      pBVar8->data = pcVar2;
      sVar5 = param_4[3];
      pBVar8->max = param_4[2];
      pBVar8[1].length = sVar5;
      break;
    case 0x73:
      if (param_4 != (size_t *)0x0) {
        if ((uVar10 == 0) && (*(int *)(param_1 + 0x28) != 0)) {
          mem_buf_sync_part_0_isra_0(psVar1);
          a = (BUF_MEM *)*psVar1;
        }
        *param_4 = (size_t)a;
      }
      break;
    default:
      goto switchD_00100325_caseD_4;
    case 0x80:
      if ((-1 < (long)param_3) && ((long)param_3 <= (long)(sVar5 + sVar7))) {
        sVar5 = pBVar9->length;
        pBVar4->data = pcVar3 + param_3;
        pBVar4->length = sVar5 - param_3;
        pBVar4->max = pBVar9->max - param_3;
        return param_3;
      }
      return 0xffffffffffffffff;
    case 0x82:
      *(undefined4 *)(param_1 + 0x38) = uVar6;
      break;
    case 0x85:
      return sVar5;
    }
    goto switchD_00100325_caseD_b;
  }
  switch(param_2) {
  case 1:
    if (a->data != (char *)0x0) {
      if (uVar10 == 0) {
        if ((*(uint *)(param_1 + 0x30) & 0x400) == 0) {
          memset(a->data,0,a->max);
          a->length = 0;
          pBVar8 = (BUF_MEM *)psVar1[1];
          a = (BUF_MEM *)*psVar1;
        }
        pcVar2 = a->data;
        pBVar8->length = a->length;
        pBVar8->data = pcVar2;
        sVar5 = a[1].length;
        pBVar8->max = a->max;
        pBVar8[1].length = sVar5;
      }
      else {
        pcVar2 = pBVar8->data;
        a->length = pBVar8->length;
        a->data = pcVar2;
        sVar5 = pBVar8[1].length;
        a->max = pBVar8->max;
        a[1].length = sVar5;
      }
    }
  case 0xb:
  case 0xc:
switchD_00100325_caseD_b:
    sVar7 = 1;
    break;
  case 2:
    sVar7 = (size_t)(sVar7 == 0);
    break;
  case 3:
    if (param_4 != (size_t *)0x0) {
      *param_4 = (size_t)pcVar2;
    }
    break;
  default:
switchD_00100325_caseD_4:
    sVar7 = 0;
    break;
  case 8:
    sVar7 = (size_t)*(int *)(param_1 + 0x2c);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    goto switchD_00100325_caseD_b;
  case 10:
    break;
  }
  return sVar7;
}



int mem_write(BIO *param_1,void *param_2,int param_3)

{
  bio_st *pbVar1;
  undefined8 uVar2;
  BIO_METHOD *pBVar3;
  _func_603 *p_Var4;
  int iVar5;
  char *pcVar6;
  _func_596 *p_Var7;
  int iVar8;
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
      if (param_1->num != 0) {
        mem_buf_sync_part_0_isra_0(param_1->prev_bio);
      }
      iVar5 = (int)uVar2;
      iVar8 = BUF_MEM_grow_clean((BUF_MEM *)pbVar1->method,(long)(param_3 + iVar5));
      if (CONCAT44(extraout_var,iVar8) != 0) {
        memcpy(pbVar1->method->name + iVar5,param_2,(long)param_3);
        pBVar3 = pbVar1->method;
        p_Var4 = pbVar1->callback;
        pcVar6 = pBVar3->name;
        *(undefined8 *)p_Var4 = *(undefined8 *)pBVar3;
        *(char **)(p_Var4 + 8) = pcVar6;
        p_Var7 = pBVar3->bread;
        *(_func_595 **)(p_Var4 + 0x10) = pBVar3->bwrite;
        *(_func_596 **)(p_Var4 + 0x18) = p_Var7;
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



void mem_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  mem_write(param_1,param_2,sVar1 & 0xffffffff);
  return;
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


