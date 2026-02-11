
undefined8 tls_dump_gets(void)

{
  return 0xffffffff;
}



undefined8 tls_dump_free(undefined8 param_1)

{
  BIO_set_init(param_1,0);
  return 1;
}



undefined8 tls_dump_new(undefined8 param_1)

{
  BIO_set_init(param_1,1);
  return 1;
}



long tls_dump_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  BIO *bp;
  long lVar1;
  
  bp = BIO_next(param_1);
  if ((param_2 != 0xc) && (bp != (BIO *)0x0)) {
    lVar1 = BIO_ctrl(bp,param_2,param_3,param_4);
    return lVar1;
  }
  return 0;
}



undefined8 always_retry_ctrl(BIO *param_1,int param_2)

{
  if (param_2 != 0xb) {
    return 0;
  }
  BIO_set_flags(param_1,10);
  return 0;
}



undefined4 always_retry_puts(BIO *param_1)

{
  BIO_set_flags(param_1,10);
  return retry_err;
}



undefined4 always_retry_read(BIO *param_1)

{
  BIO_set_flags(param_1,9);
  return retry_err;
}



undefined4 always_retry_write(BIO *param_1)

{
  BIO_set_flags(param_1,10);
  return retry_err;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int tls_dump_read(BIO *param_1,char *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BIO *pBVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  
  pBVar5 = BIO_next(param_1);
  iVar3 = BIO_read(pBVar5,param_2,param_3);
  pBVar5 = BIO_next(param_1);
  iVar4 = BIO_test_flags(pBVar5,0xf);
  BIO_clear_flags(param_1,0xf);
  BIO_set_flags(param_1,iVar4);
  if (0 < iVar3) {
    puts("---- START OF PACKET ----");
    iVar4 = iVar3;
    while( true ) {
      puts("*---- START OF RECORD ----");
      if (iVar4 < 0xd) break;
      cVar1 = *param_2;
      __printf_chk(2,"** Record Content-type: %d\n",cVar1);
      __printf_chk(2,"** Record Version: %02x%02x\n",param_2[1],param_2[2]);
      uVar9 = *(ushort *)(param_2 + 3) << 8 | *(ushort *)(param_2 + 3) >> 8;
      pcVar11 = param_2 + 5;
      __printf_chk(2,"** Record Epoch: %d\n",uVar9);
      __printf_chk(2,"** Record Sequence: ");
      do {
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        __printf_chk(2,&_LC8,cVar2);
      } while (param_2 + 0xb != pcVar11);
      iVar4 = iVar4 + -0xd;
      uVar6 = *(ushort *)(param_2 + 0xb) << 8 | *(ushort *)(param_2 + 0xb) >> 8;
      __printf_chk(2,"\n** Record Length: %d\n",uVar6);
      uVar7 = (uint)uVar6;
      if (cVar1 == '\x16') {
        puts("**---- START OF HANDSHAKE MESSAGE FRAGMENT ----");
        if (uVar9 == 0) {
          if ((iVar4 < 0xc) || (uVar6 < 0xc)) {
LAB_00100420:
            puts("**---- HANDSHAKE MESSAGE FRAGMENT TRUNCATED ----");
          }
          else {
            __printf_chk(2,"*** Message Type: %d\n",param_2[0xd]);
            uVar12 = (uint)(byte)param_2[0xe] << 0x10 | (uint)(byte)param_2[0xf] << 8 |
                     (uint)(byte)param_2[0x10];
            __printf_chk(2,"*** Message Length: %d\n",uVar12);
            __printf_chk(2,"*** Message sequence: %d\n",
                         *(ushort *)(param_2 + 0x11) << 8 | *(ushort *)(param_2 + 0x11) >> 8);
            uVar8 = (uint)(byte)param_2[0x13] << 0x10 | (uint)(byte)param_2[0x14] << 8 |
                    (uint)(byte)param_2[0x15];
            __printf_chk(2,"*** Message Fragment offset: %d\n",uVar8);
            uVar10 = (uint)(byte)param_2[0x16] << 0x10 | (uint)(byte)param_2[0x17] << 8 |
                     (uint)(byte)param_2[0x18];
            __printf_chk(2,"*** Message Fragment len: %d\n",uVar10);
            if (uVar12 < uVar8 + uVar10) {
              puts("***---- HANDSHAKE MESSAGE FRAGMENT INVALID ----");
            }
            else {
              if (uVar7 < uVar10) goto LAB_00100420;
              puts("**---- END OF HANDSHAKE MESSAGE FRAGMENT ----");
            }
          }
        }
        else {
          puts("**---- HANDSHAKE MESSAGE FRAGMENT ENCRYPTED ----");
        }
      }
      if (iVar4 < (int)uVar7) break;
      iVar4 = iVar4 - uVar7;
      param_2 = param_2 + (int)(uVar6 + 0xd);
      puts("*---- END OF RECORD ----");
      if (iVar4 == 0) goto LAB_001003fc;
      if (iVar3 != iVar4) {
        puts("*");
      }
    }
    puts("*---- RECORD TRUNCATED ----");
LAB_001003fc:
    puts("---- END OF PACKET ----\n");
    fflush(_stdout);
  }
  return iVar3;
}



long maybe_retry_ctrl(BIO *param_1,int param_2,long param_3,void *param_4)

{
  int *piVar1;
  long lVar2;
  BIO *bp;
  
  piVar1 = (int *)BIO_get_data();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (param_2 == 0xb) {
    if (*piVar1 != 0) {
      *piVar1 = *piVar1 + -1;
      goto LAB_001004b3;
    }
    BIO_set_flags(param_1,10);
    lVar2 = -1;
  }
  else {
    if (param_2 != 0x8000) {
LAB_001004b3:
      bp = BIO_next(param_1);
      lVar2 = BIO_ctrl(bp,param_2,param_3,param_4);
      return lVar2;
    }
    *piVar1 = (int)param_3;
    lVar2 = 1;
  }
  return lVar2;
}



int maybe_retry_write(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  BIO *b;
  
  piVar2 = (int *)BIO_get_data();
  if (piVar2 != (int *)0x0) {
    if (*piVar2 != 0) {
      *piVar2 = *piVar2 + -1;
      b = BIO_next(param_1);
      iVar1 = BIO_write(b,param_2,param_3);
      return iVar1;
    }
    BIO_set_flags(param_1,10);
  }
  return -1;
}



void mempacket_free(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    CRYPTO_free((void *)*param_1);
  }
  CRYPTO_free(param_1);
  return;
}



undefined8 always_retry_free(undefined8 param_1)

{
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}



undefined8 maybe_retry_free(undefined8 param_1)

{
  void *ptr;
  
  ptr = (void *)BIO_get_data();
  CRYPTO_free(ptr);
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}



undefined8 mempacket_test_free(undefined8 param_1)

{
  undefined8 *ptr;
  
  ptr = (undefined8 *)BIO_get_data();
  OPENSSL_sk_pop_free(*ptr,mempacket_free);
  CRYPTO_free(ptr);
  BIO_set_data(param_1,0);
  BIO_set_init(param_1,0);
  return 1;
}



undefined8 maybe_retry_new(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = CRYPTO_zalloc(4,"test/helpers/ssltestlib.c",0x355);
  if (lVar1 != 0) {
    BIO_set_data(param_1,lVar1);
    BIO_set_init(param_1,1);
    return 1;
  }
  return 0;
}



undefined8 mempacket_test_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  undefined8 uVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x30,"test/helpers/ssltestlib.c",0x13e);
  iVar1 = test_ptr("test/helpers/ssltestlib.c",0x13e,"ctx = OPENSSL_zalloc(sizeof(*ctx))",ptr);
  if (iVar1 != 0) {
    uVar2 = OPENSSL_sk_new_null();
    *ptr = uVar2;
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x140,"ctx->pkts = sk_MEMPACKET_new_null()",uVar2);
    if (iVar1 != 0) {
      ptr[4] = 0xffffffff00000000;
      BIO_set_init(param_1,1);
      BIO_set_data(param_1,ptr);
      return 1;
    }
    CRYPTO_free(ptr);
  }
  return 0;
}



ulong mempacket_test_ctrl(undefined8 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  
  puVar2 = (undefined8 *)BIO_get_data();
  if (0xb < param_2) {
    if (param_2 == 0x18000) {
      return (long)*(int *)((long)puVar2 + 0x24);
    }
    if (param_2 < 0x18001) {
      if (param_2 == 0x8000) {
        *(undefined4 *)(puVar2 + 4) = param_3;
      }
      else {
        if (param_2 != 0x10000) goto switchD_001007aa_caseD_3;
        *(undefined4 *)((long)puVar2 + 0x24) = param_3;
      }
    }
    else {
      if (param_2 != 0x20000) goto switchD_001007aa_caseD_3;
      *(undefined4 *)(puVar2 + 5) = param_3;
    }
    goto switchD_001007aa_caseD_b;
  }
  switch(param_2) {
  case 2:
    iVar1 = OPENSSL_sk_num(*puVar2);
    return (ulong)(iVar1 == 0);
  case 8:
    iVar1 = BIO_get_shutdown(param_1);
    return (long)iVar1;
  case 9:
    BIO_set_shutdown(param_1,param_3);
  case 0xb:
switchD_001007aa_caseD_b:
    uVar3 = 1;
    break;
  case 10:
    lVar4 = OPENSSL_sk_value(*puVar2,0);
    if (lVar4 != 0) {
      return (long)*(int *)(lVar4 + 8);
    }
  default:
switchD_001007aa_caseD_3:
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 mempacket_test_gets(void)

{
  return 0xffffffff;
}



undefined4 always_retry_gets(BIO *param_1)

{
  BIO_set_flags(param_1,9);
  return retry_err;
}



undefined8 always_retry_new(undefined8 param_1)

{
  BIO_set_init(param_1,1);
  return 1;
}



int tls_dump_write(BIO *param_1,void *param_2,int param_3)

{
  int iVar1;
  int flags;
  BIO *pBVar2;
  
  pBVar2 = BIO_next(param_1);
  iVar1 = BIO_write(pBVar2,param_2,param_3);
  pBVar2 = BIO_next(param_1);
  flags = BIO_test_flags(pBVar2,0xf);
  BIO_clear_flags(param_1,0xf);
  BIO_set_flags(param_1,flags);
  return iVar1;
}



int tls_dump_puts(BIO *param_1,char *param_2)

{
  int iVar1;
  int flags;
  size_t sVar2;
  BIO *pBVar3;
  
  sVar2 = strlen(param_2);
  pBVar3 = BIO_next(param_1);
  iVar1 = BIO_write(pBVar3,param_2,(int)sVar2);
  pBVar3 = BIO_next(param_1);
  flags = BIO_test_flags(pBVar3,0xf);
  BIO_clear_flags(param_1,0xf);
  BIO_set_flags(param_1,flags);
  return iVar1;
}



uint mempacket_test_read(BIO *param_1,void *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *ptr;
  ulong uVar4;
  uint uVar5;
  ushort uVar6;
  void *__dest;
  int iVar7;
  
  puVar3 = (undefined8 *)BIO_get_data();
  BIO_clear_flags(param_1,0xf);
  ptr = (undefined8 *)OPENSSL_sk_value(*puVar3,0);
  if ((ptr == (undefined8 *)0x0) || (*(int *)((long)ptr + 0xc) != *(int *)(puVar3 + 2))) {
    BIO_set_flags(param_1,9);
LAB_00100b58:
    param_3 = 0xffffffff;
  }
  else {
    OPENSSL_sk_shift(*puVar3);
    uVar5 = *(uint *)(ptr + 1);
    *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 1;
    __dest = (void *)*ptr;
    if ((int)uVar5 <= (int)param_3) {
      param_3 = uVar5;
    }
    if ((*(int *)(ptr + 2) != 2) &&
       (((*(int *)(puVar3 + 3) != 0 || (-1 < *(int *)((long)puVar3 + 0x24))) && (0 < (int)uVar5))))
    {
      do {
        while( true ) {
          if ((int)uVar5 < 0xd) goto LAB_00100b58;
          uVar6 = *(ushort *)((long)__dest + 3) << 8 | *(ushort *)((long)__dest + 3) >> 8;
          if (*(ushort *)(puVar3 + 1) == uVar6) {
            uVar2 = *(uint *)((long)puVar3 + 0xc);
            uVar4 = 10;
            do {
              *(char *)((long)__dest + uVar4) = (char)uVar2;
              uVar2 = uVar2 >> 8;
              uVar4 = (ulong)((int)uVar4 - 1);
            } while (uVar2 != 0);
          }
          else {
            *(ushort *)(puVar3 + 1) = uVar6;
            *(undefined4 *)((long)puVar3 + 0xc) = 0;
            *(undefined1 *)((long)__dest + 10) = 0;
          }
          iVar7 = (ushort)(*(ushort *)((long)__dest + 0xb) << 8 |
                          *(ushort *)((long)__dest + 0xb) >> 8) + 0xd;
          if ((int)uVar5 < iVar7) goto LAB_00100b58;
          iVar1 = *(int *)((long)puVar3 + 0xc);
          uVar2 = uVar5 - iVar7;
          if ((*(int *)((long)puVar3 + 0x24) == iVar1) && (*(uint *)(puVar3 + 4) == (uint)uVar6))
          break;
          __dest = (void *)((long)__dest + (long)iVar7);
LAB_00100a6a:
          *(int *)((long)puVar3 + 0xc) = iVar1 + 1;
          uVar5 = uVar2;
          if ((int)uVar2 < 1) goto LAB_00100aec;
        }
        if (iVar7 < (int)uVar5) {
          memmove(__dest,(void *)((long)iVar7 + (long)__dest),(ulong)uVar2);
          *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
        }
        else {
          *(undefined4 *)((long)puVar3 + 0x24) = 0xffffffff;
        }
        param_3 = param_3 - iVar7;
        if (param_3 == 0) {
          BIO_set_flags(param_1,9);
          iVar1 = *(int *)((long)puVar3 + 0xc);
          goto LAB_00100a6a;
        }
        *(int *)((long)puVar3 + 0xc) = *(int *)((long)puVar3 + 0xc) + 1;
        uVar5 = uVar2;
      } while (0 < (int)uVar2);
LAB_00100aec:
      __dest = (void *)*ptr;
    }
    memcpy(param_2,__dest,(long)(int)param_3);
    if ((void *)*ptr != (void *)0x0) {
      CRYPTO_free((void *)*ptr);
    }
    CRYPTO_free(ptr);
  }
  return param_3;
}



long bio_f_tls_dump_filter(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = method_tls_dump;
  if ((((((method_tls_dump == 0) &&
         (method_tls_dump = BIO_meth_new(0x280,"TLS dump filter"), method_tls_dump != 0)) &&
        (iVar1 = BIO_meth_set_write(method_tls_dump,tls_dump_write), iVar1 != 0)) &&
       ((iVar1 = BIO_meth_set_read(method_tls_dump,tls_dump_read), iVar1 != 0 &&
        (iVar1 = BIO_meth_set_puts(method_tls_dump,tls_dump_puts), iVar1 != 0)))) &&
      ((iVar1 = BIO_meth_set_gets(method_tls_dump,0x100000), iVar1 != 0 &&
       ((iVar1 = BIO_meth_set_ctrl(method_tls_dump,tls_dump_ctrl), iVar1 != 0 &&
        (iVar1 = BIO_meth_set_create(method_tls_dump,tls_dump_new), iVar1 != 0)))))) &&
     (iVar1 = BIO_meth_set_destroy(method_tls_dump,tls_dump_free), iVar1 != 0)) {
    lVar2 = method_tls_dump;
  }
  return lVar2;
}



void bio_f_tls_dump_filter_free(void)

{
  BIO_meth_free(method_tls_dump);
  return;
}



long bio_s_mempacket_test(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = meth_mem;
  if (meth_mem == 0) {
    meth_mem = BIO_meth_new(0x81,"Mem Packet Test");
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x127,
                     "meth_mem = BIO_meth_new(BIO_TYPE_MEMPACKET_TEST, \"Mem Packet Test\")",
                     meth_mem);
    if (iVar1 != 0) {
      iVar1 = BIO_meth_set_write(meth_mem,mempacket_test_write);
      iVar1 = test_true("test/helpers/ssltestlib.c",0x129,
                        "BIO_meth_set_write(meth_mem, mempacket_test_write)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BIO_meth_set_read(meth_mem,mempacket_test_read);
        iVar1 = test_true("test/helpers/ssltestlib.c",0x12a,
                          "BIO_meth_set_read(meth_mem, mempacket_test_read)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BIO_meth_set_puts(meth_mem,mempacket_test_puts);
          iVar1 = test_true("test/helpers/ssltestlib.c",299,
                            "BIO_meth_set_puts(meth_mem, mempacket_test_puts)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BIO_meth_set_gets(meth_mem,mempacket_test_gets);
            iVar1 = test_true("test/helpers/ssltestlib.c",300,
                              "BIO_meth_set_gets(meth_mem, mempacket_test_gets)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BIO_meth_set_ctrl(meth_mem,mempacket_test_ctrl);
              iVar1 = test_true("test/helpers/ssltestlib.c",0x12d,
                                "BIO_meth_set_ctrl(meth_mem, mempacket_test_ctrl)",iVar1 != 0);
              if (iVar1 != 0) {
                iVar1 = BIO_meth_set_create(meth_mem,mempacket_test_new);
                iVar1 = test_true("test/helpers/ssltestlib.c",0x12e,
                                  "BIO_meth_set_create(meth_mem, mempacket_test_new)",iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BIO_meth_set_destroy(meth_mem,mempacket_test_free);
                  iVar1 = test_true("test/helpers/ssltestlib.c",0x12f,
                                    "BIO_meth_set_destroy(meth_mem, mempacket_test_free)",iVar1 != 0
                                   );
                  if (iVar1 != 0) {
                    lVar2 = meth_mem;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}



void bio_s_mempacket_test_free(void)

{
  BIO_meth_free(meth_mem);
  return;
}



undefined8 mempacket_swap_epoch(void)

{
  undefined8 uVar1;
  int iVar2;
  int num;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  void *__src;
  int iVar7;
  void *__src_00;
  
  puVar4 = (undefined8 *)BIO_get_data();
  iVar2 = OPENSSL_sk_num(*puVar4);
  if ((0 < iVar2) &&
     (puVar5 = (undefined8 *)OPENSSL_sk_value(*puVar4,iVar2 + -1), puVar5 != (undefined8 *)0x0)) {
    iVar7 = *(int *)(puVar5 + 1);
    if (0xc < iVar7) {
      pvVar6 = (void *)*puVar5;
      __src_00 = (void *)0x0;
      num = 0;
      while( true ) {
        __src = pvVar6;
        iVar3 = (ushort)(*(ushort *)((long)__src + 0xb) << 8 | *(ushort *)((long)__src + 0xb) >> 8)
                + 0xd;
        if (iVar7 < iVar3) break;
        if (*(ushort *)(puVar4 + 1) !=
            (ushort)(*(ushort *)((long)__src + 3) << 8 | *(ushort *)((long)__src + 3) >> 8)) {
          if (__src_00 == (void *)0x0) {
            return 0;
          }
          pvVar6 = CRYPTO_malloc(num,"test/helpers/ssltestlib.c",0x1ce);
          if (pvVar6 == (void *)0x0) {
            return 0;
          }
          memcpy(pvVar6,__src_00,(long)num);
          memmove(__src_00,__src,(long)iVar7);
          *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) - num;
          iVar7 = *(int *)((long)puVar5 + 0xc);
          puVar5 = (undefined8 *)CRYPTO_malloc(0x18,"test/helpers/ssltestlib.c",0x1df);
          if (puVar5 == (undefined8 *)0x0) {
            CRYPTO_free(pvVar6);
            return 0;
          }
          *(undefined4 *)(puVar5 + 2) = 1;
          uVar1 = *puVar4;
          *(int *)(puVar5 + 1) = num;
          *(int *)((long)puVar5 + 0xc) = iVar7 + 1;
          *puVar5 = pvVar6;
          iVar2 = OPENSSL_sk_insert(uVar1,puVar5,iVar2);
          if (iVar2 < 1) {
            CRYPTO_free(pvVar6);
            CRYPTO_free(puVar5);
            return 0;
          }
          return 1;
        }
        iVar7 = iVar7 - iVar3;
        pvVar6 = (void *)((long)iVar3 + (long)__src);
        __src_00 = __src;
        num = iVar3;
        if (iVar7 < 0xd) {
          return 0;
        }
      }
    }
  }
  return 0;
}



undefined8 mempacket_move_packet(undefined8 param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar3 = (undefined8 *)BIO_get_data();
  iVar2 = OPENSSL_sk_num(*puVar3);
  if ((((param_3 < iVar2) && (param_2 < param_3)) &&
      (lVar4 = OPENSSL_sk_value(*puVar3,param_3), lVar4 != 0)) &&
     (lVar5 = OPENSSL_sk_delete(*puVar3,param_3), lVar4 == lVar5)) {
    uVar1 = *puVar3;
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) - (param_3 - param_2);
    iVar2 = OPENSSL_sk_insert(uVar1,lVar4,param_2);
    if (0 < iVar2) {
      while (param_2 = param_2 + 1, param_2 <= param_3) {
        lVar4 = OPENSSL_sk_value(*puVar3,param_2);
        *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      }
      return 1;
    }
  }
  return 0;
}



int mempacket_test_inject
              (undefined8 param_1,void *param_2,int param_3,int param_4,undefined4 param_5)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong __n;
  long in_FS_OFFSET;
  long local_58 [5];
  
  local_58[3] = *(long *)(in_FS_OFFSET + 0x28);
  puVar7 = (undefined8 *)BIO_get_data();
  iVar10 = (ushort)(*(ushort *)((long)param_2 + 0xb) << 8 | *(ushort *)((long)param_2 + 0xb) >> 8) +
           0xd;
  if (puVar7 != (undefined8 *)0x0) {
    __n = (ulong)param_3;
    uVar13 = (ulong)iVar10;
    if (uVar13 <= __n) {
      if (iVar10 == param_3) {
        if (param_4 < 0) {
          *(undefined4 *)((long)puVar7 + 0x1c) = 1;
          bVar4 = false;
          bVar3 = false;
          iVar5 = 1;
        }
        else {
          if (*(int *)((long)puVar7 + 0x1c) != 0) goto LAB_001013ce;
          *(undefined4 *)(puVar7 + 3) = 1;
LAB_00101442:
          bVar4 = false;
          bVar3 = false;
          iVar5 = 1;
        }
      }
      else {
        if ((0 < *(int *)(puVar7 + 5)) && (param_4 != -1)) goto LAB_001013ce;
        if (param_4 < 0) {
          *(undefined4 *)((long)puVar7 + 0x1c) = 1;
        }
        else {
          if (*(int *)((long)puVar7 + 0x1c) != 0) goto LAB_001013ce;
          *(undefined4 *)(puVar7 + 3) = 1;
        }
        if (*(int *)(puVar7 + 5) < 1) goto LAB_00101442;
        bVar4 = true;
        bVar3 = true;
        iVar5 = 3;
      }
      puVar8 = (undefined8 *)0x0;
      lVar11 = 0;
      do {
        iVar6 = (int)lVar11;
        if (iVar5 <= iVar6) goto LAB_001012df;
        puVar8 = (undefined8 *)CRYPTO_malloc(0x18,"test/helpers/ssltestlib.c",0x23e);
        local_58[lVar11] = (long)puVar8;
        iVar5 = test_ptr("test/helpers/ssltestlib.c",0x23e,
                         "allpkts[i] = OPENSSL_malloc(sizeof(*thispkt))",puVar8);
        if (iVar5 == 0) goto LAB_00101375;
        pvVar9 = CRYPTO_malloc(param_3,"test/helpers/ssltestlib.c",0x242);
        *puVar8 = pvVar9;
        iVar5 = test_ptr("test/helpers/ssltestlib.c",0x242,"thispkt->data = OPENSSL_malloc(inl)",
                         pvVar9);
        if (iVar5 == 0) goto LAB_00101375;
        if ((iVar6 == 2) || (!bVar3)) {
          memcpy((void *)*puVar8,param_2,__n);
          iVar5 = param_3;
        }
        else {
          memcpy((void *)*puVar8,(void *)((long)param_2 + uVar13),__n - uVar13);
          iVar5 = param_3 - iVar10;
        }
        *(int *)(puVar8 + 1) = iVar5;
        iVar5 = param_4;
        if (param_4 < 0) {
          iVar5 = *(int *)((long)puVar7 + 0x14) + iVar6;
        }
        *(int *)((long)puVar8 + 0xc) = iVar5;
        lVar11 = lVar11 + 1;
        iVar5 = 3;
        *(undefined4 *)(puVar8 + 2) = param_5;
      } while (bVar4);
      iVar5 = 1;
LAB_001012df:
      for (iVar10 = 0; iVar6 = OPENSSL_sk_num(*puVar7), iVar10 < iVar6; iVar10 = iVar10 + 1) {
        lVar11 = OPENSSL_sk_value(*puVar7,iVar10);
        iVar6 = test_ptr("test/helpers/ssltestlib.c",599,
                         "looppkt = sk_MEMPACKET_value(ctx->pkts, i)",lVar11);
        if (iVar6 == 0) goto LAB_00101375;
        uVar2 = *(uint *)(lVar11 + 0xc);
        if (*(uint *)((long)puVar8 + 0xc) < uVar2) {
          iVar5 = OPENSSL_sk_insert(*puVar7,puVar8,iVar10);
          if (iVar5 == 0) goto LAB_00101375;
          if (-1 < param_4) goto LAB_001013d3;
          iVar5 = *(int *)((long)puVar7 + 0x14);
          goto LAB_001014f4;
        }
        if (uVar2 == *(uint *)((long)puVar8 + 0xc)) {
          if (*(int *)((long)puVar7 + 0x1c) == 0) goto LAB_00101375;
          *(int *)((long)puVar7 + 0x14) = *(int *)((long)puVar7 + 0x14) + 1;
          *(uint *)((long)puVar8 + 0xc) = uVar2 + 1;
        }
      }
      plVar12 = local_58;
      plVar1 = plVar12 + iVar5;
      do {
        iVar10 = OPENSSL_sk_push(*puVar7,*plVar12);
        if (iVar10 == 0) goto LAB_00101375;
        if (param_4 < 0) {
          *(int *)((long)puVar7 + 0x14) = *(int *)((long)puVar7 + 0x14) + 1;
        }
        plVar12 = plVar12 + 1;
      } while (plVar1 != plVar12);
      goto LAB_001013d3;
    }
  }
  goto LAB_001013ce;
  while (iVar5 = *(int *)((long)puVar7 + 0x14), *(int *)(lVar11 + 0xc) == iVar5) {
LAB_001014f4:
    *(int *)((long)puVar7 + 0x14) = iVar5 + 1;
    iVar10 = iVar10 + 1;
    lVar11 = OPENSSL_sk_value(*puVar7,iVar10);
    if (lVar11 == 0) break;
  }
  goto LAB_001013d3;
LAB_00101375:
  lVar11 = 0;
  iVar10 = (0 < *(int *)(puVar7 + 5)) + 1 + (uint)(0 < *(int *)(puVar7 + 5));
  do {
    if (iVar10 <= (int)lVar11) break;
    puVar8 = (undefined8 *)local_58[lVar11];
    pvVar9 = (void *)*puVar8;
    if (pvVar9 != (void *)0x0) {
      CRYPTO_free(pvVar9);
    }
    lVar11 = lVar11 + 1;
    CRYPTO_free(puVar8);
    iVar10 = 3;
  } while (0 < *(int *)(puVar7 + 5));
LAB_001013ce:
  param_3 = -1;
LAB_001013d3:
  if (local_58[3] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}



void mempacket_test_write(void)

{
  mempacket_test_inject();
  return;
}



void mempacket_test_puts(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  mempacket_test_inject(param_1,param_2,sVar1 & 0xffffffff,0xffffffff,0);
  return;
}



long bio_s_always_retry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = meth_always_retry;
  if (meth_always_retry == 0) {
    meth_always_retry = BIO_meth_new(0x82,"Always Retry");
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x2db,
                     "meth_always_retry = BIO_meth_new(BIO_TYPE_ALWAYS_RETRY, \"Always Retry\")",
                     meth_always_retry);
    if (iVar1 != 0) {
      iVar1 = BIO_meth_set_write(meth_always_retry,always_retry_write);
      iVar1 = test_true("test/helpers/ssltestlib.c",0x2dd,
                        "BIO_meth_set_write(meth_always_retry, always_retry_write)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BIO_meth_set_read(meth_always_retry,always_retry_read);
        iVar1 = test_true("test/helpers/ssltestlib.c",0x2df,
                          "BIO_meth_set_read(meth_always_retry, always_retry_read)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BIO_meth_set_puts(meth_always_retry,always_retry_puts);
          iVar1 = test_true("test/helpers/ssltestlib.c",0x2e1,
                            "BIO_meth_set_puts(meth_always_retry, always_retry_puts)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BIO_meth_set_gets(meth_always_retry,always_retry_gets);
            iVar1 = test_true("test/helpers/ssltestlib.c",0x2e3,
                              "BIO_meth_set_gets(meth_always_retry, always_retry_gets)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = BIO_meth_set_ctrl(meth_always_retry,always_retry_ctrl);
              iVar1 = test_true("test/helpers/ssltestlib.c",0x2e5,
                                "BIO_meth_set_ctrl(meth_always_retry, always_retry_ctrl)",iVar1 != 0
                               );
              if (iVar1 != 0) {
                iVar1 = BIO_meth_set_create(meth_always_retry,always_retry_new);
                iVar1 = test_true("test/helpers/ssltestlib.c",0x2e7,
                                  "BIO_meth_set_create(meth_always_retry, always_retry_new)",
                                  iVar1 != 0);
                if (iVar1 != 0) {
                  iVar1 = BIO_meth_set_destroy(meth_always_retry,always_retry_free);
                  iVar1 = test_true("test/helpers/ssltestlib.c",0x2e9,
                                    "BIO_meth_set_destroy(meth_always_retry, always_retry_free)",
                                    iVar1 != 0);
                  if (iVar1 != 0) {
                    lVar2 = meth_always_retry;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return lVar2;
}



void bio_s_always_retry_free(void)

{
  BIO_meth_free(meth_always_retry);
  return;
}



void set_always_retry_err_val(undefined4 param_1)

{
  retry_err = param_1;
  return;
}



long bio_s_maybe_retry(void)

{
  int iVar1;
  long lVar2;
  
  lVar2 = meth_maybe_retry;
  if (meth_maybe_retry == 0) {
    meth_maybe_retry = BIO_meth_new(0x283,"Maybe Retry");
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x33f,
                     "meth_maybe_retry = BIO_meth_new(BIO_TYPE_MAYBE_RETRY, \"Maybe Retry\")",
                     meth_maybe_retry);
    if (iVar1 != 0) {
      iVar1 = BIO_meth_set_write(meth_maybe_retry,maybe_retry_write);
      iVar1 = test_true("test/helpers/ssltestlib.c",0x341,
                        "BIO_meth_set_write(meth_maybe_retry, maybe_retry_write)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = BIO_meth_set_ctrl(meth_maybe_retry,maybe_retry_ctrl);
        iVar1 = test_true("test/helpers/ssltestlib.c",0x343,
                          "BIO_meth_set_ctrl(meth_maybe_retry, maybe_retry_ctrl)",iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = BIO_meth_set_create(meth_maybe_retry,maybe_retry_new);
          iVar1 = test_true("test/helpers/ssltestlib.c",0x345,
                            "BIO_meth_set_create(meth_maybe_retry, maybe_retry_new)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = BIO_meth_set_destroy(meth_maybe_retry,maybe_retry_free);
            iVar1 = test_true("test/helpers/ssltestlib.c",0x347,
                              "BIO_meth_set_destroy(meth_maybe_retry, maybe_retry_free)",iVar1 != 0)
            ;
            if (iVar1 != 0) {
              lVar2 = meth_maybe_retry;
            }
          }
        }
      }
    }
  }
  return lVar2;
}



void bio_s_maybe_retry_free(void)

{
  BIO_meth_free(meth_maybe_retry);
  return;
}



undefined8
create_ssl_ctx_pair(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5
                   ,long *param_6,long *param_7,char *param_8,char *param_9)

{
  SSL_CTX *pSVar1;
  int iVar2;
  long lVar3;
  SSL_CTX *pSVar4;
  SSL_CTX *ctx;
  
  if (param_6 == (long *)0x0) {
    if (param_7 == (long *)0x0) {
      return 1;
    }
    ctx = (SSL_CTX *)*param_7;
    if (ctx != (SSL_CTX *)0x0) {
      if (0 < param_4) goto LAB_00101bc0;
LAB_00101a35:
      if (0 < param_5) {
LAB_00101a3a:
        lVar3 = SSL_CTX_ctrl(ctx,0x7c,(long)param_5,(void *)0x0);
        pSVar4 = (SSL_CTX *)0x0;
        iVar2 = test_true("test/helpers/ssltestlib.c",0x3c2,
                          "SSL_CTX_set_max_proto_version(clientctx, max_proto_version)",lVar3 != 0);
        if (iVar2 == 0) goto LAB_00101c3f;
        goto LAB_00101a74;
      }
      goto LAB_00101a7c;
    }
    ctx = (SSL_CTX *)SSL_CTX_new_ex(param_1,0);
    iVar2 = test_ptr("test/helpers/ssltestlib.c",0x3a5,
                     "clientctx = SSL_CTX_new_ex(libctx, NULL, cm)");
    if (iVar2 == 0) goto LAB_001019ef;
    if (ctx == (SSL_CTX *)0x0) {
LAB_00101ecd:
      ctx = (SSL_CTX *)0x0;
      goto LAB_00101a81;
    }
    if (param_4 < 1) goto LAB_00101a35;
LAB_00101bc0:
    SSL_CTX_ctrl(ctx,0x7b,(long)param_4,(void *)0x0);
    iVar2 = test_true("test/helpers/ssltestlib.c",0x3bf,
                      "SSL_CTX_set_min_proto_version(clientctx, min_proto_version)");
    if (iVar2 == 0) {
LAB_00101c3f:
      pSVar4 = (SSL_CTX *)0x0;
    }
    else {
      if (0 < param_5) {
        lVar3 = SSL_CTX_ctrl(ctx,0x7c,(long)param_5,(void *)0x0);
        iVar2 = test_true("test/helpers/ssltestlib.c",0x3c2,
                          "SSL_CTX_set_max_proto_version(clientctx, max_proto_version)",lVar3 != 0);
        if (iVar2 == 0) goto LAB_00101c3f;
      }
      pSVar4 = (SSL_CTX *)0x0;
LAB_00101b27:
      if ((param_8 == (char *)0x0 || param_9 == (char *)0x0) || (pSVar4 == (SSL_CTX *)0x0)) {
LAB_00101a74:
        if (param_6 != (long *)0x0) goto LAB_00101a79;
        goto LAB_00101a7c;
      }
LAB_00101960:
      iVar2 = SSL_CTX_use_certificate_file(pSVar4,param_8,1);
      iVar2 = test_int_eq("test/helpers/ssltestlib.c",0x3c7,
                          "SSL_CTX_use_certificate_file(serverctx, certfile, SSL_FILETYPE_PEM)",
                          &_LC59,iVar2,1);
      if (iVar2 != 0) {
        iVar2 = SSL_CTX_use_PrivateKey_file(pSVar4,param_9,1);
        iVar2 = test_int_eq("test/helpers/ssltestlib.c",0x3c9,
                            "SSL_CTX_use_PrivateKey_file(serverctx, privkeyfile, SSL_FILETYPE_PEM)",
                            &_LC59,iVar2,1);
        if (iVar2 != 0) {
          iVar2 = SSL_CTX_check_private_key(pSVar4);
          iVar2 = test_int_eq("test/helpers/ssltestlib.c",0x3cc,
                              "SSL_CTX_check_private_key(serverctx)",&_LC59,iVar2,1);
          if (iVar2 != 0) goto LAB_00101a74;
        }
      }
    }
    if (param_6 != (long *)0x0) {
LAB_001019e0:
      if (*param_6 == 0) goto LAB_00101d88;
    }
  }
  else {
    pSVar1 = (SSL_CTX *)*param_6;
    pSVar4 = pSVar1;
    if (pSVar1 == (SSL_CTX *)0x0) {
      pSVar4 = (SSL_CTX *)SSL_CTX_new_ex(param_1,0,param_2);
      iVar2 = test_ptr("test/helpers/ssltestlib.c",0x39c,
                       "serverctx = SSL_CTX_new_ex(libctx, NULL, sm)",pSVar4);
      if (iVar2 == 0) {
LAB_00101d31:
        ctx = (SSL_CTX *)0x0;
        goto LAB_001019e0;
      }
      SSL_CTX_set_options(pSVar4,0x100);
      iVar2 = test_true("test/helpers/ssltestlib.c",0x39d,
                        "SSL_CTX_set_options(serverctx, SSL_OP_ALLOW_CLIENT_RENEGOTIATION)");
      if (iVar2 == 0) goto LAB_00101d31;
      if (param_7 == (long *)0x0) {
        if (pSVar4 == (SSL_CTX *)0x0) {
          *param_6 = 0;
          return 1;
        }
        ctx = (SSL_CTX *)0x0;
        goto LAB_0010192b;
      }
      ctx = (SSL_CTX *)*param_7;
      if (ctx == (SSL_CTX *)0x0) {
        ctx = (SSL_CTX *)SSL_CTX_new_ex(param_1,0,param_3);
        iVar2 = test_ptr("test/helpers/ssltestlib.c",0x3a5,
                         "clientctx = SSL_CTX_new_ex(libctx, NULL, cm)");
        if (iVar2 == 0) goto LAB_00101d78;
        if (pSVar4 == (SSL_CTX *)0x0) {
          if (ctx == (SSL_CTX *)0x0) {
            *param_6 = 0;
            goto LAB_00101ecd;
          }
          if (0 < param_4) goto LAB_00101bc0;
          pSVar4 = (SSL_CTX *)0x0;
          goto joined_r0x00101f31;
        }
        goto LAB_0010192b;
      }
      if (pSVar4 != (SSL_CTX *)0x0) goto LAB_0010192b;
      pSVar4 = pSVar1;
      if (0 < param_4) goto LAB_00101bc0;
joined_r0x00101f31:
      if (0 < param_5) goto LAB_00101a3a;
LAB_00101a79:
      *param_6 = (long)pSVar4;
LAB_00101a7c:
      if (param_7 == (long *)0x0) {
        return 1;
      }
LAB_00101a81:
      *param_7 = (long)ctx;
      return 1;
    }
    if (param_7 == (long *)0x0) {
      ctx = (SSL_CTX *)0x0;
LAB_0010192b:
      if (param_4 < 1) {
        if (0 < param_5) {
LAB_00101c5b:
          SSL_CTX_ctrl(pSVar4,0x7c,(long)param_5,(void *)0x0);
          iVar2 = test_true("test/helpers/ssltestlib.c",0x3ba,
                            "SSL_CTX_set_max_proto_version(serverctx, max_proto_version)");
          if (iVar2 == 0) goto LAB_001019e0;
          if (ctx != (SSL_CTX *)0x0) {
            if (0 < param_4) {
              SSL_CTX_ctrl(ctx,0x7b,(long)param_4,(void *)0x0);
              iVar2 = test_true("test/helpers/ssltestlib.c",0x3bf,
                                "SSL_CTX_set_min_proto_version(clientctx, min_proto_version)");
              if (iVar2 == 0) goto LAB_001019e0;
            }
            lVar3 = SSL_CTX_ctrl(ctx,0x7c,(long)param_5,(void *)0x0);
            iVar2 = test_true("test/helpers/ssltestlib.c",0x3c2,
                              "SSL_CTX_set_max_proto_version(clientctx, max_proto_version)",
                              lVar3 != 0);
            goto joined_r0x00101b21;
          }
LAB_00101ea8:
          ctx = (SSL_CTX *)0x0;
        }
        if ((param_9 == (char *)0x0) || (param_8 == (char *)0x0)) goto LAB_00101a79;
        goto LAB_00101960;
      }
      SSL_CTX_ctrl(pSVar4,0x7b,(long)param_4,(void *)0x0);
      iVar2 = test_true("test/helpers/ssltestlib.c",0x3b7,
                        "SSL_CTX_set_min_proto_version(serverctx, min_proto_version)");
      if (iVar2 == 0) goto LAB_001019e0;
      if (0 < param_5) goto LAB_00101c5b;
      if (ctx == (SSL_CTX *)0x0) goto LAB_00101ea8;
      lVar3 = SSL_CTX_ctrl(ctx,0x7b,(long)param_4,(void *)0x0);
      iVar2 = test_true("test/helpers/ssltestlib.c",0x3bf,
                        "SSL_CTX_set_min_proto_version(clientctx, min_proto_version)",lVar3 != 0);
joined_r0x00101b21:
      if (iVar2 != 0) goto LAB_00101b27;
      goto LAB_001019e0;
    }
    ctx = (SSL_CTX *)*param_7;
    if (ctx != (SSL_CTX *)0x0) goto LAB_0010192b;
    ctx = (SSL_CTX *)SSL_CTX_new_ex(param_1,0);
    iVar2 = test_ptr("test/helpers/ssltestlib.c",0x3a5,
                     "clientctx = SSL_CTX_new_ex(libctx, NULL, cm)");
    if (iVar2 != 0) goto LAB_0010192b;
LAB_00101d78:
    if (*param_6 != 0) goto LAB_001019ef;
LAB_00101d88:
    SSL_CTX_free(pSVar4);
  }
  if (param_7 == (long *)0x0) {
    return 0;
  }
LAB_001019ef:
  if (*param_7 != 0) {
    return 0;
  }
  SSL_CTX_free(ctx);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool wait_until_sock_readable(int param_1)

{
  long lVar1;
  ulong uVar2;
  __fd_mask *p_Var3;
  long in_FS_OFFSET;
  timeval local_c8;
  ulong local_b8 [17];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var3 = (__fd_mask *)local_b8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *p_Var3 = 0;
    p_Var3 = p_Var3 + 1;
  }
  lVar1 = __fdelt_chk((long)param_1);
  uVar2 = 1L << ((byte)param_1 & 0x3f);
  local_b8[lVar1] = local_b8[lVar1] | uVar2;
  local_c8.tv_sec = __LC64;
  local_c8.tv_usec = _UNK_00104458;
  select(param_1 + 1,(fd_set *)local_b8,(fd_set *)0x0,(fd_set *)0x0,&local_c8);
  lVar1 = __fdelt_chk((long)param_1);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (uVar2 & local_b8[lVar1]) != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 create_test_sockets(int *param_1,int *param_2,int param_3,long param_4)

{
  bool bVar1;
  int __fd;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  socklen_t local_5c;
  sockaddr local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_5c = 0x10;
  local_58.sa_data[0] = '\0';
  local_58.sa_data[1] = '\0';
  local_58.sa_data[2] = '\0';
  local_58.sa_data[3] = '\0';
  local_58.sa_data[4] = '\0';
  local_58.sa_data[5] = '\0';
  local_58.sa_family = 2;
  local_58.sa_data[6] = '\0';
  local_58.sa_data[7] = '\0';
  local_58.sa_data[8] = '\0';
  local_58.sa_data[9] = '\0';
  local_58.sa_data[10] = '\0';
  local_58.sa_data[0xb] = '\0';
  local_58.sa_data[0xc] = '\0';
  local_58.sa_data[0xd] = '\0';
  local_58.sa_data._2_4_ = inet_addr("127.0.0.1");
  uVar6 = 0x11;
  if (param_3 == 1) {
    uVar6 = 6;
  }
  uVar7 = 0;
  __fd = BIO_socket(2,param_3,uVar6,0);
  if (__fd == -1) goto LAB_0010219c;
  iVar2 = bind(__fd,&local_58,0x10);
  if ((((iVar2 < 0) || (iVar2 = getsockname(__fd,&local_58,&local_5c), iVar2 < 0)) ||
      ((param_4 != 0 &&
       (iVar2 = BIO_ADDR_rawmake(param_4,local_58.sa_family,local_58.sa_data + 2,4,
                                 local_58.sa_data._0_2_), iVar2 == 0)))) ||
     (((param_3 == 1 && (iVar2 = listen(__fd,1), iVar2 < 0)) ||
      (iVar2 = BIO_socket(2,param_3,uVar6,0), iVar2 == -1)))) {
LAB_001021f0:
    uVar7 = 0;
  }
  else {
    iVar3 = BIO_socket_nbio(__fd,1);
    if (iVar3 == 0) {
LAB_001021e0:
      close(iVar2);
      goto LAB_001021f0;
    }
    if (param_3 == 2) {
      iVar3 = __fd;
      __fd = -1;
    }
    else {
      bVar1 = false;
      while (iVar3 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), iVar3 == -1) {
        piVar5 = __errno_location();
        if ((*piVar5 != 0xb) || ((!bVar1 && (iVar3 = connect(iVar2,&local_58,0x10), iVar3 < 0))))
        goto LAB_001021e0;
        bVar1 = true;
      }
      if ((!bVar1) && (iVar4 = connect(iVar2,&local_58,0x10), iVar4 < 0)) {
        close(iVar2);
        close(iVar3);
        goto LAB_001021f0;
      }
    }
    iVar4 = BIO_socket_nbio(iVar2,1);
    if ((iVar4 == 0) || (iVar4 = BIO_socket_nbio(iVar3,1), iVar4 == 0)) {
      uVar7 = 0;
      close(iVar2);
      close(iVar3);
    }
    else {
      uVar7 = 1;
      *param_1 = iVar2;
      *param_2 = iVar3;
    }
    if (__fd == -1) goto LAB_0010219c;
  }
  close(__fd);
LAB_0010219c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8
create_ssl_objects2(SSL_CTX *param_1,SSL_CTX *param_2,long *param_3,long *param_4,int param_5,
                   int param_6)

{
  int iVar1;
  BIO *rbio;
  BIO *rbio_00;
  undefined8 uVar2;
  SSL *s;
  SSL *s_00;
  undefined8 extraout_RDX;
  long in_FS_OFFSET;
  bool bVar3;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  s_00 = (SSL *)*param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  if (s_00 == (SSL *)0x0) {
    s_00 = SSL_new(param_1);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x44a,"serverssl = SSL_new(serverctx)",s_00);
    if (iVar1 != 0) goto LAB_00102317;
    rbio_00 = (BIO *)0x0;
    rbio = (BIO *)0x0;
    s = (SSL *)0x0;
  }
  else {
LAB_00102317:
    s = (SSL *)*param_4;
    if (s == (SSL *)0x0) {
      s = SSL_new(param_2);
      iVar1 = test_ptr("test/helpers/ssltestlib.c",0x44e,"clientssl = SSL_new(clientctx)",s);
      if (iVar1 == 0) {
        rbio_00 = (BIO *)0x0;
        rbio = (BIO *)0x0;
        goto LAB_00102353;
      }
    }
    rbio_00 = (BIO *)0x0;
    rbio = BIO_new_socket(param_5,0);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x451,
                     "s_to_c_bio = BIO_new_socket(sfd, BIO_NOCLOSE)",rbio);
    if (iVar1 != 0) {
      rbio_00 = BIO_new_socket(param_6,0);
      iVar1 = test_ptr("test/helpers/ssltestlib.c",0x452,
                       "c_to_s_bio = BIO_new_socket(cfd, BIO_NOCLOSE)",rbio_00);
      if (iVar1 != 0) {
        iVar1 = SSL_get_rpoll_descriptor(s);
        bVar3 = true;
        if (iVar1 == 0) {
          iVar1 = SSL_get_wpoll_descriptor(s,local_58,extraout_RDX,1);
          iVar1 = test_false("test/helpers/ssltestlib.c",0x456,
                             "SSL_get_wpoll_descriptor(clientssl, &wdesc)",iVar1 != 0);
          bVar3 = iVar1 == 0;
        }
        iVar1 = test_false("test/helpers/ssltestlib.c",0x455,
                           "SSL_get_rpoll_descriptor(clientssl, &rdesc) || !TEST_false(SSL_get_wpoll_descriptor(clientssl, &wdesc))"
                           ,bVar3);
        if (iVar1 != 0) {
          SSL_set_bio(s,rbio_00,rbio_00);
          SSL_set_bio(s_00,rbio,rbio);
          iVar1 = SSL_get_rpoll_descriptor(s,local_68);
          iVar1 = test_true("test/helpers/ssltestlib.c",0x45c,
                            "SSL_get_rpoll_descriptor(clientssl, &rdesc)",iVar1 != 0);
          if (iVar1 != 0) {
            iVar1 = SSL_get_wpoll_descriptor(s,local_58);
            iVar1 = test_true("test/helpers/ssltestlib.c",0x45d,
                              "SSL_get_wpoll_descriptor(clientssl, &wdesc)",iVar1 != 0);
            if (iVar1 != 0) {
              iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x45e,"rdesc.type",
                                  "BIO_POLL_DESCRIPTOR_TYPE_SOCK_FD",local_68._0_4_,1);
              if (iVar1 != 0) {
                iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x45f,"wdesc.type",
                                    "BIO_POLL_DESCRIPTOR_TYPE_SOCK_FD",local_58._0_4_,1);
                if (iVar1 != 0) {
                  iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x460,"rdesc.value.fd",&_LC76,
                                      local_68._8_4_,param_6);
                  if (iVar1 != 0) {
                    iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x461,"wdesc.value.fd",&_LC76,
                                        local_58._8_4_,param_6);
                    if (iVar1 != 0) {
                      iVar1 = SSL_get_rpoll_descriptor(s_00,local_68);
                      iVar1 = test_true("test/helpers/ssltestlib.c",0x464,
                                        "SSL_get_rpoll_descriptor(serverssl, &rdesc)",iVar1 != 0);
                      if (iVar1 != 0) {
                        iVar1 = SSL_get_wpoll_descriptor(s_00,local_58);
                        iVar1 = test_true("test/helpers/ssltestlib.c",0x465,
                                          "SSL_get_wpoll_descriptor(serverssl, &wdesc)",iVar1 != 0);
                        if (iVar1 != 0) {
                          iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x466,"rdesc.type",
                                              "BIO_POLL_DESCRIPTOR_TYPE_SOCK_FD",local_68._0_4_,1);
                          if (iVar1 != 0) {
                            iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x467,"wdesc.type",
                                                "BIO_POLL_DESCRIPTOR_TYPE_SOCK_FD",local_58._0_4_,1)
                            ;
                            if (iVar1 != 0) {
                              iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x468,"rdesc.value.fd"
                                                  ,&_LC81,local_68._8_4_,param_5);
                              if (iVar1 != 0) {
                                iVar1 = test_int_eq("test/helpers/ssltestlib.c",0x469,
                                                    "wdesc.value.fd",&_LC81,local_58._8_4_,param_5);
                                if (iVar1 != 0) {
                                  *param_3 = (long)s_00;
                                  *param_4 = (long)s;
                                  uVar2 = 1;
                                  goto LAB_00102375;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00102353:
  SSL_free(s_00);
  SSL_free(s);
  BIO_free(rbio);
  BIO_free(rbio_00);
  uVar2 = 0;
LAB_00102375:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
create_ssl_objects(SSL_CTX *param_1,SSL_CTX *param_2,long *param_3,long *param_4,BIO *param_5,
                  BIO *param_6)

{
  int iVar1;
  BIO_METHOD *pBVar2;
  BIO *append;
  BIO *append_00;
  SSL *ssl;
  SSL *ssl_00;
  
  ssl_00 = (SSL *)*param_3;
  if (ssl_00 == (SSL *)0x0) {
    ssl_00 = SSL_new(param_1);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x48c,"serverssl = SSL_new(serverctx)",ssl_00);
    if (iVar1 == 0) {
      append_00 = (BIO *)0x0;
      append = (BIO *)0x0;
      ssl = (SSL *)0x0;
      goto LAB_00102930;
    }
  }
  ssl = (SSL *)*param_4;
  if (ssl == (SSL *)0x0) {
    ssl = SSL_new(param_2);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x490,"clientssl = SSL_new(clientctx)",ssl);
    if (iVar1 == 0) {
      append_00 = (BIO *)0x0;
      append = (BIO *)0x0;
      goto LAB_00102930;
    }
  }
  iVar1 = SSL_is_dtls(ssl);
  if (iVar1 == 0) {
    pBVar2 = BIO_s_mem();
    append_00 = (BIO *)0x0;
    append = BIO_new(pBVar2);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x498,"s_to_c_bio = BIO_new(BIO_s_mem())",append);
    if (iVar1 == 0) goto LAB_00102930;
    pBVar2 = BIO_s_mem();
    append_00 = BIO_new(pBVar2);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x499,"c_to_s_bio = BIO_new(BIO_s_mem())");
  }
  else {
    pBVar2 = (BIO_METHOD *)bio_s_mempacket_test();
    append_00 = (BIO *)0x0;
    append = BIO_new(pBVar2);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x494,
                     "s_to_c_bio = BIO_new(bio_s_mempacket_test())",append);
    if (iVar1 == 0) goto LAB_00102930;
    pBVar2 = (BIO_METHOD *)bio_s_mempacket_test();
    append_00 = BIO_new(pBVar2);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x495,
                     "c_to_s_bio = BIO_new(bio_s_mempacket_test())");
  }
  if (iVar1 != 0) {
    if (param_5 != (BIO *)0x0) {
      append = BIO_push(param_5,append);
      iVar1 = test_ptr("test/helpers/ssltestlib.c",0x49e,
                       "s_to_c_bio = BIO_push(s_to_c_fbio, s_to_c_bio)");
      if (iVar1 == 0) goto LAB_00102930;
    }
    if (param_6 != (BIO *)0x0) {
      append_00 = BIO_push(param_6,append_00);
      iVar1 = test_ptr("test/helpers/ssltestlib.c",0x4a1,
                       "c_to_s_bio = BIO_push(c_to_s_fbio, c_to_s_bio)");
      if (iVar1 == 0) goto LAB_00102930;
    }
    BIO_ctrl(append,0x82,-1,(void *)0x0);
    BIO_ctrl(append_00,0x82,-1,(void *)0x0);
    iVar1 = BIO_up_ref(append);
    if (iVar1 != 0) {
      iVar1 = BIO_up_ref(append_00);
      if (iVar1 != 0) {
        SSL_set_bio(ssl_00,append_00,append);
        SSL_set_bio(ssl,append,append_00);
        *param_3 = (long)ssl_00;
        *param_4 = (long)ssl;
        return 1;
      }
      BIO_free(append);
    }
  }
LAB_00102930:
  SSL_free(ssl_00);
  SSL_free(ssl);
  BIO_free(append);
  BIO_free(append_00);
  BIO_free(param_5);
  BIO_free(param_6);
  return 0;
}



undefined8 create_bare_ssl_connection(SSL *param_1,SSL *param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int ret_code;
  int iVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  int local_84;
  undefined8 local_80;
  int local_78;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = SSL_is_dtls();
  if (param_5 == 0) {
    local_80 = 0;
LAB_00102aae:
    bVar4 = 0;
    iVar8 = -1;
    bVar5 = 0;
    ret_code = -1;
    local_78 = 0;
    local_84 = param_5;
    do {
      bVar1 = iVar8 < 1;
      bVar6 = (bool)((bVar5 ^ 1) & bVar1);
      if (bVar6) {
        do {
          iVar8 = SSL_connect(param_2);
          if (0 < iVar8) {
            iVar9 = 3;
            bVar1 = false;
            goto LAB_00102b1b;
          }
          iVar9 = SSL_get_error(param_2,iVar8);
        } while (iVar9 == 3);
        bVar1 = bVar6;
        if (iVar9 != 2) {
          test_info("test/helpers/ssltestlib.c",0x4ed,"SSL_connect() failed %d, %d",iVar8,iVar9);
          if (param_3 != 1) {
            test_openssl_errors();
          }
          bVar5 = 1;
        }
      }
      else {
        iVar9 = 3;
      }
LAB_00102b1b:
      bVar6 = param_3 == iVar9 && param_3 != 0;
      if (bVar6) {
LAB_00102dcb:
        uVar10 = 0;
        goto LAB_00102c4e;
      }
      bVar2 = ret_code < 1;
      bVar3 = (bool)((bVar4 ^ 1) & bVar2);
      if (bVar3) {
        bVar2 = bVar3;
        if (local_84 == 0) {
LAB_00102c73:
          do {
            ret_code = SSL_accept(param_1);
            if (0 < ret_code) {
              local_84 = 0;
              iVar9 = 3;
              bVar2 = bVar6;
              goto LAB_00102b7f;
            }
            iVar9 = SSL_get_error(param_1,ret_code);
          } while (iVar9 == 3);
          if ((iVar9 - 2U & 0xfffffffd) == 0) {
            local_84 = 0;
            goto LAB_00102b7f;
          }
          local_84 = 0;
        }
        else {
          ret_code = DTLSv1_listen(param_1,local_80);
          if (-1 < ret_code) {
            if (ret_code == 0) {
              iVar9 = 2;
              goto LAB_00102b7f;
            }
            goto LAB_00102c73;
          }
          iVar9 = 1;
        }
        test_info("test/helpers/ssltestlib.c",0x50f,"SSL_accept() failed %d, %d",ret_code);
        if (param_3 != 1) {
          test_openssl_errors();
        }
        bVar4 = 1;
      }
      else {
        iVar9 = 3;
      }
LAB_00102b7f:
      if (((param_3 == iVar9) && (param_3 != 0)) || ((bool)(bVar5 & bVar4))) goto LAB_00102dcb;
      if ((param_4 != 0) && (iVar7 != 0)) {
        if ((0 < ret_code) && ((bVar1 && (iVar9 = SSL_read(param_1,local_58,0x14), 0 < iVar9)))) {
          uVar10 = 0;
          test_info("test/helpers/ssltestlib.c",0x51f,"Unexpected SSL_read() success!");
          goto LAB_00102c4e;
        }
        if (((0 < iVar8) && (bVar2)) && (iVar9 = SSL_read(param_2,local_58,0x14), 0 < iVar9)) {
          uVar10 = 0;
          test_info("test/helpers/ssltestlib.c",0x526,"Unexpected SSL_read() success!");
          goto LAB_00102c4e;
        }
      }
      local_78 = local_78 + 1;
      if (local_78 == 1000000) {
        test_info("test/helpers/ssltestlib.c",0x52c,"No progress made");
        goto LAB_00102dcb;
      }
      if (((local_78 < 0x33) && (iVar7 != 0)) &&
         (((uint)(local_78 * -0x33333333) >> 1 | (uint)((local_78 * -0x33333333 & 1U) != 0) << 0x1f)
          < 0x1999999a)) {
        OSSL_sleep(0x32);
      }
    } while ((bVar1) || (bVar2));
    uVar10 = 1;
LAB_00102c4e:
    BIO_ADDR_free(local_80);
  }
  else {
    if (iVar7 == 0) {
      test_error("test/helpers/ssltestlib.c",0x4d6,"DTLSv1_listen requested for non-DTLS object\n");
    }
    else {
      local_80 = BIO_ADDR_new();
      iVar8 = test_ptr("test/helpers/ssltestlib.c",0x4da,&_LC89);
      if (iVar8 != 0) goto LAB_00102aae;
    }
    uVar10 = 0;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



undefined8 create_ssl_connection(undefined8 param_1,SSL *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 local_49;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = create_bare_ssl_connection();
  if (iVar1 == 0) {
LAB_00102f08:
    uVar3 = 0;
  }
  else {
    iVar1 = 2;
    while( true ) {
      iVar2 = SSL_read_ex(param_2,&local_49,1,&local_48);
      if (iVar2 < 1) {
        iVar2 = SSL_get_error(param_2,0);
        iVar2 = test_int_eq("test/helpers/ssltestlib.c",0x557,"SSL_get_error(clientssl, 0)",
                            "SSL_ERROR_WANT_READ",iVar2,2);
      }
      else {
        iVar2 = test_ulong_eq("test/helpers/ssltestlib.c",0x555,"readbytes",&_LC94,local_48,0);
      }
      if (iVar2 == 0) goto LAB_00102f08;
      if (iVar1 == 1) break;
      iVar1 = 1;
    }
    uVar3 = 1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void shutdown_ssl_connection(SSL *param_1,SSL *param_2)

{
  SSL_shutdown(param_2);
  SSL_shutdown(param_1);
  SSL_free(param_1);
  SSL_free(param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

SSL_SESSION * create_a_psk(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  SSL_SESSION *ses;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = __LC105;
  uStack_60 = _UNK_00104468;
  local_58 = __LC106;
  uStack_50 = _UNK_00104478;
  local_48 = __LC107;
  uStack_40 = _UNK_00104488;
  if (param_2 == 0x30) {
    uVar2 = SSL_CIPHER_find(param_1,&_LC98);
LAB_00102fea:
    ses = SSL_SESSION_new();
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x581,&_LC100,ses);
    if ((iVar1 != 0) &&
       (iVar1 = test_ptr("test/helpers/ssltestlib.c",0x582,"cipher",uVar2), iVar1 != 0)) {
      iVar1 = SSL_SESSION_set1_master_key(ses,&local_68,param_2);
      iVar1 = test_true("test/helpers/ssltestlib.c",0x583,
                        "SSL_SESSION_set1_master_key(sess, key, mdsize)",iVar1 != 0);
      if (iVar1 != 0) {
        iVar1 = SSL_SESSION_set_cipher(ses,uVar2);
        iVar1 = test_true("test/helpers/ssltestlib.c",0x584,"SSL_SESSION_set_cipher(sess, cipher)",
                          iVar1 != 0);
        if (iVar1 != 0) {
          iVar1 = SSL_SESSION_set_protocol_version(ses,0x304);
          iVar1 = test_true("test/helpers/ssltestlib.c",0x585,
                            "SSL_SESSION_set_protocol_version(sess, TLS1_3_VERSION)",iVar1 != 0);
          if (iVar1 != 0) goto LAB_001030ca;
        }
      }
    }
    SSL_SESSION_free(ses);
  }
  else if (param_2 == 0x20) {
    uVar2 = SSL_CIPHER_find(param_1,&_LC99);
    goto LAB_00102fea;
  }
  ses = (SSL_SESSION *)0x0;
LAB_001030ca:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ses;
}



ENGINE * ssl_ctx_add_large_cert_chain(undefined8 param_1,SSL_CTX *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  BIO *bp;
  X509 *pXVar3;
  long lVar4;
  ENGINE *pEVar5;
  long in_FS_OFFSET;
  X509 *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (X509 *)0x0;
  bp = BIO_new_file(param_3,"r");
  iVar1 = test_ptr("test/helpers/ssltestlib.c",0x599,"certbio = BIO_new_file(cert_file, \"r\")",bp);
  if (iVar1 != 0) {
    local_38 = (X509 *)X509_new_ex(param_1,0);
    iVar1 = test_ptr("test/helpers/ssltestlib.c",0x59c,"chaincert = X509_new_ex(libctx, NULL)");
    if ((iVar1 != 0) &&
       (pXVar3 = PEM_read_bio_X509(bp,&local_38,(undefined1 *)0x0,(void *)0x0),
       pXVar3 != (X509 *)0x0)) {
      BIO_free(bp);
      iVar1 = i2d_X509(local_38,(uchar **)0x0);
      if (iVar1 * 0x28 < 0x5556) {
        OPENSSL_die("assertion failed: certlen * NUM_EXTRA_CERTS > (SSL3_RT_MAX_PLAIN_LENGTH * 4) / 3"
                    ,"test/helpers/ssltestlib.c",0x5ac);
        pEVar5 = ENGINE_by_id("dasync");
        iVar1 = test_ptr("test/helpers/ssltestlib.c",0x5c3,"e = ENGINE_by_id(\"dasync\")",pEVar5);
        if (iVar1 != 0) {
          iVar1 = ENGINE_init(pEVar5);
          iVar1 = test_true("test/helpers/ssltestlib.c",0x5c6,"ENGINE_init(e)",iVar1 != 0);
          if (iVar1 == 0) {
            ENGINE_free(pEVar5);
          }
          else {
            iVar1 = ENGINE_register_ciphers(pEVar5);
            iVar1 = test_true("test/helpers/ssltestlib.c",0x5cb,"ENGINE_register_ciphers(e)",
                              iVar1 != 0);
            if (iVar1 != 0) {
              return pEVar5;
            }
            ENGINE_free(pEVar5);
          }
        }
        return (ENGINE *)0x0;
      }
      iVar1 = 0x28;
      do {
        iVar2 = X509_up_ref(local_38);
        if (iVar2 == 0) {
LAB_0010323a:
          pEVar5 = (ENGINE *)0x0;
          bp = (BIO *)0x0;
          goto LAB_00103172;
        }
        lVar4 = SSL_CTX_ctrl(param_2,0xe,0,local_38);
        if (lVar4 == 0) {
          X509_free(local_38);
          goto LAB_0010323a;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      pEVar5 = (ENGINE *)0x1;
      bp = (BIO *)0x0;
      goto LAB_00103172;
    }
  }
  pEVar5 = (ENGINE *)0x0;
LAB_00103172:
  BIO_free(bp);
  X509_free(local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pEVar5;
}



ENGINE * load_dasync(void)

{
  int iVar1;
  ENGINE *e;
  
  e = ENGINE_by_id("dasync");
  iVar1 = test_ptr("test/helpers/ssltestlib.c",0x5c3,"e = ENGINE_by_id(\"dasync\")",e);
  if (iVar1 != 0) {
    iVar1 = ENGINE_init(e);
    iVar1 = test_true("test/helpers/ssltestlib.c",0x5c6,"ENGINE_init(e)",iVar1 != 0);
    if (iVar1 == 0) {
      ENGINE_free(e);
    }
    else {
      iVar1 = ENGINE_register_ciphers(e);
      iVar1 = test_true("test/helpers/ssltestlib.c",0x5cb,"ENGINE_register_ciphers(e)",iVar1 != 0);
      if (iVar1 != 0) {
        return e;
      }
      ENGINE_free(e);
    }
  }
  return (ENGINE *)0x0;
}


