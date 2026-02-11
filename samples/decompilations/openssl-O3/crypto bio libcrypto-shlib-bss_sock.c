
undefined8 sock_free(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        BIO_closesocket(*(undefined4 *)(param_1 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    CRYPTO_free(*(void **)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x40) = 0;
    return 1;
  }
  return 0;
}



bool sock_new(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar1 = CRYPTO_zalloc(0x74,"crypto/bio/bss_sock.c",0x5e);
  *(long *)(param_1 + 0x40) = lVar1;
  return lVar1 != 0;
}



ulong sock_ctrl(long param_1,int param_2,long param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  if (param_2 < 0x7c) {
    if (param_2 < 0x5b) {
      if (param_2 == 9) {
        *(int *)(param_1 + 0x2c) = (int)param_3;
        return 1;
      }
      if (9 < param_2) {
        return (ulong)(param_2 - 0xbU < 2);
      }
      if (param_2 == 2) {
        return (ulong)(*(uint *)(param_1 + 0x30) >> 0xb & 1);
      }
      if (param_2 == 8) {
        return (long)*(int *)(param_1 + 0x2c);
      }
    }
    else {
      switch(param_2) {
      case 0x5b:
      case 0x5c:
        if (*(int *)(param_1 + 0x28) != 0) {
          uVar1 = *(undefined4 *)(param_1 + 0x38);
          *(undefined4 *)param_4 = 1;
          *(undefined4 *)(param_4 + 1) = uVar1;
          return 1;
        }
        return 0;
      case 100:
        if ((param_4 != (undefined8 *)0x0) && (param_3 == 2)) {
          uVar3 = BIO_ADDR_sockaddr(param_4);
          iVar2 = BIO_ADDR_make(puVar5,uVar3);
          if ((long)iVar2 == 0) {
            return 0;
          }
          *(undefined4 *)(puVar5 + 0xe) = 1;
          return (long)iVar2;
        }
        break;
      case 0x68:
        if (*(int *)(param_1 + 0x2c) != 0) {
          if (*(int *)(param_1 + 0x28) != 0) {
            BIO_closesocket(*(undefined4 *)(param_1 + 0x38));
          }
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
        uVar1 = *(undefined4 *)param_4;
        *(int *)(param_1 + 0x2c) = (int)param_3;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(undefined4 *)(param_1 + 0x38) = uVar1;
        *(undefined4 *)(puVar5 + 0xe) = 0;
        *puVar5 = 0;
        puVar5[0xd] = 0;
        uVar4 = (ulong)(((int)puVar5 - (int)(undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8)
                        ) + 0x70U >> 3);
        puVar5 = (undefined8 *)((ulong)(puVar5 + 1) & 0xfffffffffffffff8);
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar5 = 0;
          puVar5 = puVar5 + (ulong)bVar6 * -2 + 1;
        }
        return 1;
      case 0x69:
        if (*(int *)(param_1 + 0x28) != 0) {
          if (param_4 != (undefined8 *)0x0) {
            *(undefined4 *)param_4 = *(undefined4 *)(param_1 + 0x38);
          }
          return (long)*(int *)(param_1 + 0x38);
        }
        return 0xffffffffffffffff;
      case 0x7b:
        if ((param_4 != (undefined8 *)0x0) && (param_3 == 2)) {
          *param_4 = puVar5;
          return 1;
        }
      }
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

BIO_METHOD * BIO_s_socket(void)

{
  return (BIO_METHOD *)methods_sockp;
}



BIO * BIO_new_socket(int sock,int close_flag)

{
  BIO_METHOD *type;
  BIO *bp;
  
  type = BIO_s_socket();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_int_ctrl(bp,0x68,(long)close_flag,sock);
  }
  return bp;
}



int BIO_sock_non_fatal_error(int error)

{
  int iVar1;
  
  if (error < 0x74) {
    if (0x46 < error) {
      return (int)((0x181000000001U >> ((ulong)(error - 0x47) & 0x3f) & 1) != 0);
    }
    iVar1 = 1;
    if (error != 4) {
      return (int)(error == 0xb);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int BIO_sock_should_retry(int i)

{
  int iVar1;
  int *piVar2;
  
  if (1 < i + 1U) {
    return 0;
  }
  piVar2 = __errno_location();
  iVar1 = BIO_sock_non_fatal_error(*piVar2);
  return iVar1;
}



ulong sock_read(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int i;
  ulong uVar4;
  
  uVar4 = 0;
  if (param_2 != (void *)0x0) {
    piVar2 = __errno_location();
    *piVar2 = 0;
    uVar3 = read(*(int *)&param_1->next_bio,param_2,(long)param_3);
    uVar4 = uVar3 & 0xffffffff;
    BIO_clear_flags(param_1,0xf);
    i = (int)uVar3;
    if (i < 1) {
      iVar1 = BIO_sock_should_retry(i);
      if (iVar1 == 0) {
        if (i == 0) {
          *(uint *)&param_1->ptr = *(uint *)&param_1->ptr | 0x800;
        }
      }
      else {
        BIO_set_flags(param_1,9);
      }
    }
  }
  return uVar4;
}



ulong sock_write(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  
  piVar2 = __errno_location();
  *piVar2 = 0;
  uVar3 = write(*(int *)&param_1->next_bio,param_2,(long)param_3);
  BIO_clear_flags(param_1,0xf);
  if ((int)uVar3 < 1) {
    iVar1 = BIO_sock_should_retry((int)uVar3);
    if (iVar1 != 0) {
      BIO_set_flags(param_1,10);
    }
  }
  return uVar3 & 0xffffffff;
}



ulong sock_puts(BIO *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  ulong uVar4;
  
  sVar2 = strlen(param_2);
  piVar3 = __errno_location();
  *piVar3 = 0;
  uVar4 = write(*(int *)&param_1->next_bio,param_2,(long)(int)sVar2);
  BIO_clear_flags(param_1,0xf);
  if ((int)uVar4 < 1) {
    iVar1 = BIO_sock_should_retry((int)uVar4);
    if (iVar1 != 0) {
      BIO_set_flags(param_1,10);
    }
  }
  return uVar4 & 0xffffffff;
}


