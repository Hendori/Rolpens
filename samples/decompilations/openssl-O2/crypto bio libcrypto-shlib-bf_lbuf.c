
long linebuffer_callback_ctrl(long param_1,int param_2,fp *param_3)

{
  long lVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    lVar1 = BIO_callback_ctrl(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return lVar1;
  }
  return 0;
}



undefined8 linebuffer_new(long param_1)

{
  undefined8 *ptr;
  void *pvVar1;
  
  ptr = (undefined8 *)CRYPTO_malloc(0x10,"crypto/bio/bf_lbuf.c",0x3c);
  if (ptr != (undefined8 *)0x0) {
    pvVar1 = CRYPTO_malloc(0x2800,"crypto/bio/bf_lbuf.c",0x3e);
    *ptr = pvVar1;
    if (pvVar1 != (void *)0x0) {
      ptr[1] = 0x2800;
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(undefined8 **)(param_1 + 0x40) = ptr;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



ulong linebuffer_ctrl(BIO *param_1,int param_2,long param_3,BIO *param_4)

{
  bio_st *pbVar1;
  BIO_METHOD *__src;
  int iVar2;
  BIO_METHOD *__dest;
  ulong uVar3;
  long lVar4;
  int iVar5;
  BIO *pBVar6;
  
  pbVar1 = param_1->prev_bio;
  if (param_2 < 0xe) {
    switch(param_2) {
    case 1:
      pBVar6 = *(BIO **)&param_1->references;
      *(undefined4 *)((long)&pbVar1->callback + 4) = 0;
      if (pBVar6 == (BIO *)0x0) {
        return 0;
      }
      param_2 = 1;
      break;
    default:
      goto switchD_001000e3_caseD_2;
    case 3:
      return (long)*(int *)((long)&pbVar1->callback + 4);
    case 0xb:
      pBVar6 = *(BIO **)&param_1->references;
      if (pBVar6 == (BIO *)0x0) {
        return 0;
      }
      if (0 < *(int *)((long)&pbVar1->callback + 4)) {
        while( true ) {
          BIO_clear_flags(param_1,0xf);
          iVar2 = *(int *)((long)&pbVar1->callback + 4);
          if (iVar2 < 1) break;
          iVar2 = BIO_write(*(BIO **)&param_1->references,pbVar1->method,iVar2);
          BIO_copy_next_retry(param_1);
          if (iVar2 < 1) {
            return (long)iVar2;
          }
          iVar5 = *(int *)((long)&pbVar1->callback + 4);
          if (iVar2 < iVar5) {
            memmove(pbVar1->method,(void *)((long)&pbVar1->method->type + (long)iVar2),
                    (long)(iVar5 - iVar2));
            iVar5 = *(int *)((long)&pbVar1->callback + 4);
          }
          *(int *)((long)&pbVar1->callback + 4) = iVar5 - iVar2;
        }
        *(undefined4 *)((long)&pbVar1->callback + 4) = 0;
        pBVar6 = *(BIO **)&param_1->references;
      }
      iVar2 = 0xb;
LAB_001001d4:
      uVar3 = BIO_ctrl(pBVar6,iVar2,param_3,param_4);
      BIO_copy_next_retry(param_1);
      return uVar3;
    case 0xc:
      lVar4 = BIO_int_ctrl(param_4,0x75,(long)*(int *)&pbVar1->callback,1);
      return (ulong)(0 < lVar4);
    case 0xd:
      uVar3 = (ulong)*(int *)((long)&pbVar1->callback + 4);
      if (uVar3 != 0) {
        return uVar3;
      }
      pBVar6 = *(BIO **)&param_1->references;
      if (pBVar6 == (BIO *)0x0) {
        return 0;
      }
      param_2 = 0xd;
    }
  }
  else {
    if (param_2 == 0x65) {
      if (*(long *)&param_1->references == 0) {
        return 0;
      }
      BIO_clear_flags(param_1,0xf);
      pBVar6 = *(BIO **)&param_1->references;
      iVar2 = 0x65;
      goto LAB_001001d4;
    }
    if (param_2 == 0x75) {
      if (0x7fffffff < param_3) {
        return 0;
      }
      iVar2 = (int)param_3;
      if ((0x2800 < iVar2) && (*(int *)&pbVar1->callback != iVar2)) {
        __dest = (BIO_METHOD *)CRYPTO_malloc(iVar2,"crypto/bio/bf_lbuf.c",0xeb);
        if (__dest == (BIO_METHOD *)0x0) {
          return 0;
        }
        __src = pbVar1->method;
        if (__src != __dest) {
          iVar5 = *(int *)((long)&pbVar1->callback + 4);
          if (iVar2 < iVar5) {
            *(int *)((long)&pbVar1->callback + 4) = iVar2;
            iVar5 = iVar2;
          }
          memcpy(__dest,__src,(long)iVar5);
          CRYPTO_free(pbVar1->method);
          pbVar1->method = __dest;
          *(int *)&pbVar1->callback = iVar2;
        }
      }
      return 1;
    }
switchD_001000e3_caseD_2:
    pBVar6 = *(BIO **)&param_1->references;
    if (pBVar6 == (BIO *)0x0) {
      return 0;
    }
  }
  uVar3 = BIO_ctrl(pBVar6,param_2,param_3,param_4);
  return uVar3;
}



int linebuffer_gets(long param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if (*(BIO **)(param_1 + 0x48) != (BIO *)0x0) {
    iVar1 = BIO_gets(*(BIO **)(param_1 + 0x48),param_2,param_3);
    return iVar1;
  }
  return 0;
}



int linebuffer_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != (void *)0x0) {
    iVar1 = 0;
    if (*(BIO **)&param_1->references != (BIO *)0x0) {
      iVar1 = BIO_read(*(BIO **)&param_1->references,param_2,param_3);
      BIO_clear_flags(param_1,0xf);
      BIO_copy_next_retry(param_1);
    }
    return iVar1;
  }
  return 0;
}



undefined8 linebuffer_free(long param_1)

{
  if (param_1 != 0) {
    CRYPTO_free((void *)**(undefined8 **)(param_1 + 0x40));
    CRYPTO_free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    return 1;
  }
  return 0;
}



int linebuffer_write_part_0(BIO *param_1,char *param_2,int param_3)

{
  int *piVar1;
  bio_st *pbVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  size_t __n;
  char *pcVar8;
  void *__dest;
  int iVar9;
  size_t __n_00;
  int local_4c;
  int local_40;
  
  pbVar2 = param_1->prev_bio;
  if (pbVar2 == (bio_st *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = 0;
    if (*(long *)&param_1->references != 0) {
      BIO_clear_flags(param_1,0xf);
      local_4c = param_3;
      do {
        pcVar8 = param_2 + local_4c;
        pcVar6 = param_2;
        if (param_2 < pcVar8) {
          do {
            if (*pcVar6 == '\n') {
              pcVar8 = pcVar6 + 1;
              bVar3 = true;
              goto LAB_001004dc;
            }
            pcVar6 = pcVar6 + 1;
          } while (pcVar6 != pcVar8);
          bVar3 = false;
        }
        else {
          bVar3 = false;
          pcVar8 = param_2;
        }
LAB_001004dc:
        iVar7 = *(int *)((long)&pbVar2->callback + 4);
        while( true ) {
          __n = (long)pcVar8 - (long)param_2;
          iVar5 = (int)__n;
          if ((!bVar3) && (iVar4 = *(int *)&pbVar2->callback, (long)__n <= (long)(iVar4 - iVar7)))
          goto LAB_00100654;
          if (iVar7 < 1) break;
          iVar4 = iVar7;
          if (0 < (long)__n) {
            __dest = (void *)((long)&pbVar2->method->type + (long)iVar7);
            iVar9 = *(int *)&pbVar2->callback - iVar7;
            __n_00 = (size_t)iVar9;
            if ((long)__n_00 < (long)__n) {
              memcpy(__dest,param_2,__n_00);
              local_4c = local_4c - iVar9;
              iVar4 = *(int *)((long)&pbVar2->callback + 4) + iVar9;
              local_40 = local_40 + iVar9;
              *(int *)((long)&pbVar2->callback + 4) = iVar4;
              param_2 = param_2 + __n_00;
            }
            else {
              memcpy(__dest,param_2,__n);
              local_4c = local_4c - iVar5;
              iVar4 = *(int *)((long)&pbVar2->callback + 4) + iVar5;
              local_40 = local_40 + iVar5;
              *(int *)((long)&pbVar2->callback + 4) = iVar4;
              param_2 = pcVar8;
            }
          }
          iVar5 = BIO_write(*(BIO **)&param_1->references,pbVar2->method,iVar4);
          if (iVar5 < 1) {
            *(int *)((long)&pbVar2->callback + 4) = iVar7;
            BIO_copy_next_retry(param_1);
            if (iVar5 == 0) {
              return local_40;
            }
            if (local_40 < 1) {
              return iVar5;
            }
            return local_40;
          }
          iVar7 = *(int *)((long)&pbVar2->callback + 4);
          if (iVar5 < iVar7) {
            memmove(pbVar2->method,(void *)((long)&pbVar2->method->type + (long)iVar5),
                    (long)(iVar7 - iVar5));
            iVar7 = *(int *)((long)&pbVar2->callback + 4);
          }
          iVar7 = iVar7 - iVar5;
          *(int *)((long)&pbVar2->callback + 4) = iVar7;
        }
        if (bVar3) {
          if (0 < (long)__n) goto LAB_00100685;
        }
        else {
          iVar4 = *(int *)&pbVar2->callback;
LAB_00100654:
          if (((long)__n <= (long)iVar4) || ((long)__n < 1)) break;
LAB_00100685:
          iVar7 = BIO_write(*(BIO **)&param_1->references,param_2,iVar5);
          if (iVar7 < 1) {
            BIO_copy_next_retry(param_1);
            if (iVar7 == 0) {
              return local_40;
            }
            if (local_40 < 1) {
              return iVar7;
            }
            return local_40;
          }
          local_40 = local_40 + iVar7;
          local_4c = local_4c - iVar7;
          param_2 = param_2 + iVar7;
        }
        if (local_4c < 1) {
          return local_40;
        }
      } while (bVar3);
      if (0 < local_4c) {
        memcpy((void *)((long)&pbVar2->method->type + (long)*(int *)((long)&pbVar2->callback + 4)),
               param_2,(long)local_4c);
        piVar1 = (int *)((long)&pbVar2->callback + 4);
        *piVar1 = *piVar1 + local_4c;
        local_40 = local_40 + local_4c;
      }
    }
  }
  return local_40;
}



undefined8 linebuffer_write(undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (0 < param_3)) {
    uVar1 = linebuffer_write_part_0();
    return uVar1;
  }
  return 0;
}



undefined8 linebuffer_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  sVar1 = strlen(param_2);
  if (0 < (int)sVar1) {
    uVar2 = linebuffer_write_part_0(param_1,param_2,sVar1 & 0xffffffff);
    return uVar2;
  }
  return 0;
}



undefined1 * BIO_f_linebuffer(void)

{
  return methods_linebuffer;
}


