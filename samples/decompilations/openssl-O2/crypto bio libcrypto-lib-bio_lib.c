
ulong bio_call_callback(long param_1,uint param_2,undefined8 param_3,ulong param_4,
                       undefined8 param_5,undefined8 param_6,long param_7,ulong *param_8)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010003b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1 + 0x18))();
    return uVar2;
  }
  uVar1 = param_2 & 0xffffff7f;
  if ((uVar1 - 2 < 2) || (uVar1 == 5)) {
    if (param_4 < 0x80000000) {
      if (param_7 < 1) goto LAB_001000b0;
      if ((param_2 & 0x80) == 0) goto LAB_00100064;
      goto LAB_00100085;
    }
LAB_001000cc:
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if (param_7 < 1) {
LAB_001000b0:
      uVar2 = (**(code **)(param_1 + 0x10))();
      if ((long)uVar2 < 1) {
        return uVar2;
      }
      if (-1 < (char)param_2) {
        return uVar2;
      }
      if (uVar1 == 6) {
        return uVar2;
      }
    }
    else {
      if ((-1 < (char)param_2) || (uVar1 == 6)) {
LAB_00100064:
                    /* WARNING: Could not recover jumptable at 0x0010006e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(param_1 + 0x10))();
        return uVar2;
      }
LAB_00100085:
      if (0x7fffffff < *param_8) goto LAB_001000cc;
      uVar2 = (**(code **)(param_1 + 0x10))();
      if ((long)uVar2 < 1) {
        return uVar2;
      }
    }
    *param_8 = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}



undefined8 bio_read_intern(long param_1,undefined8 param_2,ulong param_3,ulong *param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x10b,"bio_read_intern");
    ERR_set_error(0x20,0xc0102,0);
    return 0xffffffff;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x20) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x10f,"bio_read_intern");
    ERR_set_error(0x20,0x79,0);
    return 0xfffffffe;
  }
  if ((*(long *)(param_1 + 0x10) != 0) || (lVar2 = param_1, *(long *)(param_1 + 0x18) != 0)) {
    lVar2 = 1;
    uVar1 = bio_call_callback(param_1,2,param_2,param_3,0,0);
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    ERR_new(lVar2);
    ERR_set_debug("crypto/bio/bio_lib.c",0x119,"bio_read_intern");
    ERR_set_error(0x20,0x78,0);
    return 0xffffffff;
  }
  uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x20))(param_1,param_2,param_3,param_4);
  if ((int)uVar1 < 1) {
    if ((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) == 0)) {
      return uVar1;
    }
  }
  else {
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + *param_4;
    if ((*(long *)(param_1 + 0x10) == 0) && (*(long *)(param_1 + 0x18) == 0)) goto LAB_0010019d;
  }
  uVar1 = bio_call_callback(param_1,0x82,param_2,param_3,0,0,(long)(int)uVar1,param_4);
  if ((int)uVar1 < 1) {
    return uVar1;
  }
LAB_0010019d:
  if (param_3 < *param_4) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x128,"bio_read_intern");
    ERR_set_error(0x20,0xc0103,0);
    return 0xffffffff;
  }
  return uVar1;
}



undefined8 bio_write_intern(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x156,"bio_write_intern");
    ERR_set_error(0x20,0x79,0);
    uVar1 = 0xfffffffe;
  }
  else {
    if ((*(long *)(param_1 + 0x10) != 0) ||
       (uVar2 = param_2, lVar3 = param_1, *(long *)(param_1 + 0x18) != 0)) {
      lVar3 = 0;
      uVar2 = 1;
      uVar1 = bio_call_callback(param_1,3,param_2,param_3,0,0);
      if ((int)uVar1 < 1) goto LAB_001003a6;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      ERR_new(lVar3,uVar2);
      ERR_set_debug("crypto/bio/bio_lib.c",0x160,"bio_write_intern");
      ERR_set_error(0x20,0x78,0);
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = (**(code **)(*(long *)(param_1 + 8) + 0x10))(param_1,param_2,param_3,&local_38);
      if (0 < (int)uVar1) {
        *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + local_38;
      }
      if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
        uVar1 = bio_call_callback(param_1,0x83,param_2,param_3,0,0,(long)(int)uVar1,&local_38);
      }
      if (param_4 != (long *)0x0) {
        *param_4 = local_38;
      }
    }
  }
LAB_001003a6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined8 * BIO_new_ex(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *obj;
  
  obj = (undefined8 *)CRYPTO_zalloc(0x80,"crypto/bio/bio_lib.c",0x53);
  if (obj != (undefined8 *)0x0) {
    *obj = param_1;
    obj[1] = param_2;
    *(undefined4 *)((long)obj + 0x2c) = 1;
    LOCK();
    *(undefined4 *)(obj + 0xb) = 1;
    UNLOCK();
    iVar1 = CRYPTO_new_ex_data(0xc,obj,(CRYPTO_EX_DATA *)(obj + 0xe));
    if (iVar1 != 0) {
      if (*(code **)(param_2 + 0x48) == (code *)0x0) {
LAB_00100500:
        *(undefined4 *)(obj + 5) = 1;
        return obj;
      }
      iVar1 = (**(code **)(param_2 + 0x48))(obj);
      if (iVar1 != 0) {
        if (*(long *)(param_2 + 0x48) != 0) {
          return obj;
        }
        goto LAB_00100500;
      }
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c",99,"BIO_new_ex");
      ERR_set_error(0x20,0xc0105,0);
      CRYPTO_free_ex_data(0xc,obj,(CRYPTO_EX_DATA *)(obj + 0xe));
    }
    CRYPTO_free(obj);
  }
  return (undefined8 *)0x0;
}



BIO * BIO_new(BIO_METHOD *type)

{
  BIO *pBVar1;
  
  pBVar1 = (BIO *)BIO_new_ex(0,type);
  return pBVar1;
}



int BIO_free(BIO *a)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  
  if (a == (BIO *)0x0) {
    return 0;
  }
  LOCK();
  puVar1 = &a->num_write;
  uVar4 = *puVar1;
  *(int *)puVar1 = (int)*puVar1 + -1;
  UNLOCK();
  if (((int)uVar4 == 1) || ((int)uVar4 + -1 < 1)) {
    if (((a->cb_arg != (char *)0x0) ||
        (lVar3._0_4_ = a->init, lVar3._4_4_ = a->shutdown, lVar3 != 0)) &&
       (iVar5 = bio_call_callback(a,1,0,0,0,0,1,0), iVar5 < 1)) {
      return 0;
    }
    if ((a->callback != (_func_603 *)0x0) &&
       (pcVar2 = *(code **)(a->callback + 0x50), pcVar2 != (code *)0x0)) {
      (*pcVar2)(a);
    }
    CRYPTO_free_ex_data(0xc,a,(CRYPTO_EX_DATA *)(a + 1));
    CRYPTO_free(a);
  }
  return 1;
}



void BIO_set_data(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}



undefined8 BIO_get_data(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



void BIO_set_init(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



undefined4 BIO_get_init(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



void BIO_set_shutdown(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  return;
}



undefined4 BIO_get_shutdown(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c);
}



int BIO_vfree(BIO *a)

{
  int iVar1;
  
  iVar1 = BIO_free(a);
  return iVar1;
}



bool BIO_up_ref(long param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x58);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



void BIO_clear_flags(BIO *b,int flags)

{
  *(uint *)&b->ptr = *(uint *)&b->ptr & ~flags;
  return;
}



int BIO_test_flags(BIO *b,int flags)

{
  return *(uint *)&b->ptr & flags;
}



void BIO_set_flags(BIO *b,int flags)

{
  *(uint *)&b->ptr = *(uint *)&b->ptr | flags;
  return;
}



long BIO_get_callback(bio_st *param_1,int param_2,char *param_3,int param_4,long param_5,
                     long param_6)

{
  return (long)param_1->cb_arg;
}



void BIO_set_callback(BIO *b,callback *callback)

{
  b->cb_arg = (char *)callback;
  return;
}



undefined8 BIO_get_callback_ex(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



void BIO_set_callback_ex(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



void BIO_set_callback_arg(BIO *b,char *arg)

{
  *(char **)&b->flags = arg;
  return;
}



char * BIO_get_callback_arg(BIO *b)

{
  return *(char **)&b->flags;
}



char * BIO_method_name(BIO *b)

{
  return *(char **)(b->callback + 8);
}



int BIO_method_type(BIO *b)

{
  return *(int *)b->callback;
}



int BIO_read(BIO *b,void *data,int len)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (-1 < len) {
    iVar1 = bio_read_intern(b,data,(long)len,local_18);
    if (0 < iVar1) {
      iVar1 = local_18[0];
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool BIO_read_ex(void)

{
  int iVar1;
  
  iVar1 = bio_read_intern();
  return 0 < iVar1;
}



int BIO_write(BIO *b,void *data,int len)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (0 < len) {
    iVar1 = bio_write_intern(b,data,(long)len,local_18);
    if (0 < iVar1) {
      iVar1 = local_18[0];
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool BIO_write_ex(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = bio_write_intern();
  return 0 < iVar1 || param_3 == 0 && param_1 != 0;
}



undefined8
BIO_sendmmsg(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x193,"BIO_sendmmsg");
    ERR_set_error(0x20,0xc0102,0);
    uVar2 = 0;
    goto LAB_0010097e;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x60) == 0)) {
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x199,"BIO_sendmmsg");
    ERR_set_error(0x20,0x79,0);
LAB_001009f8:
    uVar2 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x10) != 0) ||
       (uVar2 = param_2, lVar3 = param_1, *(long *)(param_1 + 0x18) != 0)) {
      lVar3 = 0;
      uVar2 = 1;
      local_68 = param_2;
      local_60 = param_3;
      local_58 = param_4;
      local_50 = param_5;
      local_48 = param_6;
      lVar1 = bio_call_callback(param_1,8,&local_68,0,0,0);
      if (lVar1 == 0) goto LAB_001009f8;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      *param_6 = 0;
      ERR_new(lVar3,uVar2);
      ERR_set_debug("crypto/bio/bio_lib.c",0x1ac,"BIO_sendmmsg");
      ERR_set_error(0x20,0x78,0);
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x60))
                        (param_1,param_2,param_3,param_4,param_5,param_6);
      if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
        uVar2 = bio_call_callback(param_1,0x88,&local_68,(long)(int)uVar2,0,0,(long)(int)uVar2,0);
      }
    }
  }
LAB_0010097e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



undefined8
BIO_recvmmsg(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 *param_6)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x1c2,"BIO_recvmmsg");
    ERR_set_error(0x20,0xc0102,0);
    uVar2 = 0;
    goto LAB_00100b8e;
  }
  if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x68) == 0)) {
    *param_6 = 0;
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x1c8,"BIO_recvmmsg");
    ERR_set_error(0x20,0x79,0);
LAB_00100c08:
    uVar2 = 0;
  }
  else {
    if ((*(long *)(param_1 + 0x10) != 0) ||
       (uVar2 = param_2, lVar3 = param_1, *(long *)(param_1 + 0x18) != 0)) {
      lVar3 = 0;
      uVar2 = 1;
      local_68 = param_2;
      local_60 = param_3;
      local_58 = param_4;
      local_50 = param_5;
      local_48 = param_6;
      lVar1 = bio_call_callback(param_1,7,&local_68,0,0,0);
      if (lVar1 == 0) goto LAB_00100c08;
    }
    if (*(int *)(param_1 + 0x28) == 0) {
      *param_6 = 0;
      ERR_new(lVar3,uVar2);
      ERR_set_debug("crypto/bio/bio_lib.c",0x1db,"BIO_recvmmsg");
      ERR_set_error(0x20,0x78,0);
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x68))
                        (param_1,param_2,param_3,param_4,param_5,param_6);
      if ((*(long *)(param_1 + 0x10) != 0) || (*(long *)(param_1 + 0x18) != 0)) {
        uVar2 = bio_call_callback(param_1,0x87,&local_68,(long)(int)uVar2,0,0,(long)(int)uVar2,0);
      }
    }
  }
LAB_00100b8e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



int BIO_puts(BIO *bp,char *buf)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  BIO *pBVar6;
  ulong local_28;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (bp == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x1f8,"BIO_puts");
    ERR_set_error(0x20,0xc0102,0);
  }
  else {
    if ((bp->callback == (_func_603 *)0x0) || (*(long *)(bp->callback + 0x30) == 0)) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c",0x1fc,"BIO_puts");
      ERR_set_error(0x20,0x79,0);
      uVar5 = 0xfffffffe;
      goto LAB_00100d8b;
    }
    if ((bp->cb_arg != (char *)0x0) ||
       (lVar3._0_4_ = bp->init, lVar3._4_4_ = bp->shutdown, pBVar6 = bp, lVar3 != 0)) {
      pBVar6 = (BIO *)0x1;
      uVar5 = bio_call_callback(bp,4,buf,0,0,0,1,0);
      if ((int)uVar5 < 1) goto LAB_00100d8b;
    }
    if (bp->num == 0) {
      ERR_new(pBVar6);
      ERR_set_debug("crypto/bio/bio_lib.c",0x207,"BIO_puts");
      ERR_set_error(0x20,0x78,0);
    }
    else {
      uVar5 = (**(code **)(bp->callback + 0x30))(bp,buf);
      if ((int)uVar5 < 1) {
        if (bp->cb_arg == (char *)0x0) {
          lVar4._0_4_ = bp->init;
          lVar4._4_4_ = bp->shutdown;
          goto joined_r0x00100de5;
        }
      }
      else {
        local_28 = (ulong)(int)uVar5;
        piVar1 = &(bp->ex_data).dummy;
        *(ulong *)piVar1 = *(long *)piVar1 + local_28;
        if (bp->cb_arg == (char *)0x0) {
          lVar4._0_4_ = bp->init;
          lVar4._4_4_ = bp->shutdown;
joined_r0x00100de5:
          if (lVar4 == 0) goto LAB_00100d8b;
        }
      }
      uVar5 = bio_call_callback(bp,0x84,buf,0,0,0);
      if (((int)uVar5 < 1) || (uVar5 = local_28, local_28 < 0x80000000)) goto LAB_00100d8b;
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c",0x219,"BIO_puts");
      ERR_set_error(0x20,0x66,0);
    }
  }
  uVar5 = 0xffffffff;
LAB_00100d8b:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int BIO_gets(BIO *bp,char *buf,int size)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long in_FS_OFFSET;
  BIO *pBVar6;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if (bp == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x229,"BIO_gets");
    ERR_set_error(0x20,0xc0102,0);
    goto LAB_0010104f;
  }
  if ((bp->callback == (_func_603 *)0x0) || (*(long *)(bp->callback + 0x38) == 0)) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x22d,"BIO_gets");
    ERR_set_error(0x20,0x79,0);
    uVar4 = 0xfffffffe;
    goto LAB_00100fb8;
  }
  if (size < 0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x232,"BIO_gets");
    ERR_set_error(0x20,0x7d,0);
  }
  else {
    if ((bp->cb_arg != (char *)0x0) ||
       (lVar5._0_4_ = bp->init, lVar5._4_4_ = bp->shutdown, pBVar6 = bp, lVar5 != 0)) {
      pBVar6 = (BIO *)0x1;
      uVar4 = bio_call_callback(bp,5,buf,(long)size,0,0,1,0);
      if ((int)uVar4 < 1) goto LAB_00100fb8;
    }
    if (bp->num == 0) {
      ERR_new(pBVar6);
      ERR_set_debug("crypto/bio/bio_lib.c",0x23d,"BIO_gets");
      ERR_set_error(0x20,0x78,0);
    }
    else {
      uVar4 = (**(code **)(bp->callback + 0x38))(bp,buf,size);
      iVar3 = (int)uVar4;
      if (iVar3 < 1) {
        if (bp->cb_arg == (char *)0x0) {
          lVar2._0_4_ = bp->init;
          lVar2._4_4_ = bp->shutdown;
          if (lVar2 == 0) goto LAB_00100fb8;
          lVar5 = (long)iVar3;
        }
        else {
          lVar5 = (long)iVar3;
        }
LAB_00100f87:
        uVar4 = bio_call_callback(bp,0x85,buf,(long)size,0,0,lVar5,&local_28);
        if ((int)uVar4 < 1) goto LAB_00100fb8;
      }
      else {
        local_28 = (ulong)iVar3;
        lVar5 = 1;
        if ((bp->cb_arg != (char *)0x0) ||
           (lVar1._0_4_ = bp->init, lVar1._4_4_ = bp->shutdown, lVar1 != 0)) goto LAB_00100f87;
      }
      uVar4 = local_28;
      if (local_28 <= (ulong)(long)size) goto LAB_00100fb8;
    }
  }
LAB_0010104f:
  uVar4 = 0xffffffff;
LAB_00100fb8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)uVar4;
}



int BIO_indent(BIO *b,int indent,int max)

{
  int iVar1;
  
  if (indent < 0) {
    indent = 0;
  }
  if (indent <= max) {
    max = indent;
  }
  do {
    if (max == 0) {
      return 1;
    }
    max = max + -1;
    iVar1 = BIO_puts(b," ");
  } while (iVar1 == 1);
  return 0;
}



long BIO_ctrl(BIO *bp,int cmd,long larg,void *parg)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  if (bp == (BIO *)0x0) {
    return -1;
  }
  if ((bp->callback == (_func_603 *)0x0) ||
     (pcVar3 = *(code **)(bp->callback + 0x40), pcVar3 == (code *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x29b,"BIO_ctrl");
    ERR_set_error(0x20,0x79,0);
    lVar2 = -2;
  }
  else {
    if ((bp->cb_arg != (char *)0x0) ||
       (lVar2._0_4_ = bp->init, lVar2._4_4_ = bp->shutdown, lVar2 != 0)) {
      lVar2 = bio_call_callback(bp,6,parg,0,cmd,larg,1,0);
      if (lVar2 < 1) {
        return lVar2;
      }
      pcVar3 = *(code **)(bp->callback + 0x40);
    }
    lVar2 = (*pcVar3)(bp,cmd,larg,parg);
    if ((bp->cb_arg == (char *)0x0) &&
       (lVar1._0_4_ = bp->init, lVar1._4_4_ = bp->shutdown, lVar1 == 0)) {
      return lVar2;
    }
    lVar2 = bio_call_callback(bp,0x86,parg,0,cmd,larg,lVar2,0);
  }
  return lVar2;
}



void BIO_get_rpoll_descriptor(BIO *param_1,void *param_2)

{
  BIO_ctrl(param_1,0x5b,0,param_2);
  return;
}



void BIO_get_wpoll_descriptor(BIO *param_1,void *param_2)

{
  BIO_ctrl(param_1,0x5c,0,param_2);
  return;
}



int BIO_get_line(BIO *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  char *data;
  undefined8 uVar5;
  char *pcVar6;
  
  if (param_2 == (char *)0x0) {
    ERR_new();
    uVar5 = 0x25d;
  }
  else {
    if (param_3 < 1) {
      ERR_new();
      ERR_set_debug("crypto/bio/bio_lib.c",0x261,"BIO_get_line");
      ERR_set_error(0x20,0x7d,0);
      return -1;
    }
    *param_2 = '\0';
    if (param_1 != (BIO *)0x0) {
      if (param_1->num == 0) {
        ERR_new();
        ERR_set_debug("crypto/bio/bio_lib.c",0x26b,"BIO_get_line");
        ERR_set_error(0x20,0x78,0);
        return -1;
      }
      iVar2 = 0;
      pcVar6 = param_2 + (param_3 - 1);
      data = param_2;
      do {
        if (data == pcVar6) {
          *pcVar6 = '\0';
          pcVar4 = pcVar6;
          if (iVar2 == 0) {
LAB_00101366:
            lVar3 = BIO_ctrl(param_1,2,0,(void *)0x0);
            if ((int)lVar3 == 0) {
              return iVar2;
            }
          }
          goto LAB_0010133e;
        }
        iVar2 = BIO_read(param_1,data,1);
        if (iVar2 < 1) {
          *data = '\0';
          pcVar4 = data;
          goto LAB_00101366;
        }
        pcVar4 = data + 1;
        cVar1 = *data;
        data = pcVar4;
      } while (cVar1 != '\n');
      *pcVar4 = '\0';
LAB_0010133e:
      return (int)pcVar4 - (int)param_2;
    }
    ERR_new();
    uVar5 = 0x267;
  }
  ERR_set_debug("crypto/bio/bio_lib.c",uVar5,"BIO_get_line");
  ERR_set_error(0x20,0xc0102,0);
  return -1;
}



long BIO_int_ctrl(BIO *bp,int cmd,long larg,int iarg)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = iarg;
  lVar1 = BIO_ctrl(bp,cmd,larg,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * BIO_ptr_ctrl(BIO *bp,int cmd,long larg)

{
  long lVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (char *)0x0;
  lVar1 = BIO_ctrl(bp,cmd,larg,&local_18);
  pcVar2 = (char *)0x0;
  if (0 < lVar1) {
    pcVar2 = local_18;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 bio_wait(BIO *param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  time_t tVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    uVar6 = (ulong)param_3;
    lVar4 = BIO_ctrl(param_1,0x69,0,&local_24);
    if (0 < lVar4) {
      iVar1 = BIO_test_flags(param_1,1);
      uVar3 = BIO_socket_wait(local_24,iVar1,param_2);
      if ((int)uVar3 != -1) goto LAB_001014f2;
    }
    tVar5 = time((time_t *)0x0);
    uVar3 = 0;
    param_2 = param_2 - tVar5;
    if (param_2 < 0) goto LAB_001014f2;
    if (param_2 == 0) {
      uVar2 = 1000;
      if (param_3 < 0x3e9) {
        uVar2 = param_3;
      }
      uVar6 = (ulong)uVar2;
    }
    else if ((ulong)(param_2 * 1000) < uVar6) {
      uVar6 = (ulong)(uint)((int)param_2 * 1000);
    }
    OSSL_sleep(uVar6);
  }
  uVar3 = 1;
LAB_001014f2:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long BIO_callback_ctrl(BIO *b,int cmd,fp *fp)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  fp *local_10;
  
  if (b != (BIO *)0x0) {
    local_10 = fp;
    if (((b->callback != (_func_603 *)0x0) && (pcVar3 = *(code **)(b->callback + 0x58), cmd == 0xe))
       && (pcVar3 != (code *)0x0)) {
      if ((b->cb_arg != (char *)0x0) ||
         (lVar2._0_4_ = b->init, lVar2._4_4_ = b->shutdown, lVar2 != 0)) {
        lVar2 = bio_call_callback(b,6,&local_10,0,0xe,0,1,0);
        if (lVar2 < 1) {
          return lVar2;
        }
        pcVar3 = *(code **)(b->callback + 0x58);
      }
      lVar2 = (*pcVar3)(b,0xe,local_10);
      if ((b->cb_arg == (char *)0x0) &&
         (lVar1._0_4_ = b->init, lVar1._4_4_ = b->shutdown, lVar1 == 0)) {
        return lVar2;
      }
      lVar2 = bio_call_callback(b,0x86,&local_10,0,0xe,0,lVar2,0);
      return lVar2;
    }
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x2b6,"BIO_callback_ctrl");
    ERR_set_error(0x20,0x79,0);
  }
  return -2;
}



size_t BIO_ctrl_pending(BIO *b)

{
  size_t sVar1;
  
  sVar1 = BIO_ctrl(b,10,0,(void *)0x0);
  if ((long)sVar1 < 0) {
    sVar1 = 0;
  }
  return sVar1;
}



size_t BIO_ctrl_wpending(BIO *b)

{
  size_t sVar1;
  
  sVar1 = BIO_ctrl(b,0xd,0,(void *)0x0);
  if ((long)sVar1 < 0) {
    sVar1 = 0;
  }
  return sVar1;
}



BIO * BIO_push(BIO *b,BIO *append)

{
  BIO *pBVar1;
  BIO *parg;
  
  pBVar1 = b;
  if (b == (BIO *)0x0) {
    return append;
  }
  do {
    parg = pBVar1;
    pBVar1 = *(BIO **)&parg->references;
  } while (*(BIO **)&parg->references != (BIO *)0x0);
  *(BIO **)&parg->references = append;
  if (append != (BIO *)0x0) {
    append->num_read = (ulong)parg;
  }
  BIO_ctrl(b,6,0,parg);
  return b;
}



BIO * BIO_pop(BIO *b)

{
  BIO *pBVar1;
  ulong uVar2;
  
  if (b != (BIO *)0x0) {
    pBVar1 = *(BIO **)&b->references;
    BIO_ctrl(b,7,0,b);
    uVar2 = b->num_read;
    if (uVar2 != 0) {
      *(undefined8 *)(uVar2 + 0x48) = *(undefined8 *)&b->references;
    }
    if (*(long *)&b->references != 0) {
      *(ulong *)(*(long *)&b->references + 0x50) = uVar2;
    }
    b->references = 0;
    *(undefined4 *)&b->field_0x4c = 0;
    b->num_read = 0;
    return pBVar1;
  }
  return (BIO *)0x0;
}



BIO * BIO_get_retry_BIO(BIO *bio,int *reason)

{
  int iVar1;
  BIO *b;
  BIO *pBVar2;
  
  pBVar2 = bio;
  do {
    b = bio;
    iVar1 = BIO_test_flags(b,8);
    if (iVar1 == 0) break;
    bio = *(BIO **)&b->references;
    pBVar2 = b;
  } while (*(BIO **)&b->references != (BIO *)0x0);
  if (reason != (int *)0x0) {
    *reason = *(int *)((long)&pBVar2->ptr + 4);
  }
  return pBVar2;
}



int BIO_get_retry_reason(BIO *bio)

{
  return *(int *)((long)&bio->ptr + 4);
}



void BIO_set_retry_reason(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



BIO * BIO_find_type(BIO *b,int bio_type)

{
  uint uVar1;
  
  if (b == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x331,"BIO_find_type");
    ERR_set_error(0x20,0xc0102,0);
    return (BIO *)0x0;
  }
  do {
    if (b->callback != (_func_603 *)0x0) {
      uVar1 = *(uint *)b->callback;
      if ((bio_type & 0xffU) == 0) {
        if ((bio_type & uVar1) != 0) {
          return b;
        }
      }
      else if (bio_type == uVar1) {
        return b;
      }
    }
    b = *(BIO **)&b->references;
  } while (b != (BIO *)0x0);
  return (BIO *)0x0;
}



BIO * BIO_next(BIO *b)

{
  if (b != (BIO *)0x0) {
    return *(BIO **)&b->references;
  }
  return (BIO *)0x0;
}



void BIO_set_next(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



void BIO_free_all(BIO *a)

{
  BIO *pBVar1;
  ulong uVar2;
  
  if (a == (BIO *)0x0) {
    return;
  }
  do {
    uVar2 = a->num_write;
    pBVar1 = *(BIO **)&a->references;
    BIO_free(a);
    if (1 < (int)uVar2) {
      return;
    }
    a = pBVar1;
  } while (pBVar1 != (BIO *)0x0);
  return;
}



BIO * BIO_dup_chain(BIO *in)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  BIO *a;
  long lVar4;
  BIO *b;
  BIO *a_00;
  
  if (in != (BIO *)0x0) {
    a_00 = (BIO *)0x0;
    b = (BIO *)0x0;
    while (a = BIO_new((BIO_METHOD *)in->callback), a != (BIO *)0x0) {
      iVar3 = in->init;
      iVar1 = in->shutdown;
      a->cb_arg = in->cb_arg;
      a->init = iVar3;
      a->shutdown = iVar1;
      iVar3 = in->retry_reason;
      a->flags = in->flags;
      a->retry_reason = iVar3;
      uVar2 = *(undefined4 *)&in->field_0x2c;
      a->num = in->num;
      *(undefined4 *)&a->field_0x2c = uVar2;
      *(undefined4 *)&a->ptr = *(undefined4 *)&in->ptr;
      *(undefined4 *)&a->next_bio = *(undefined4 *)&in->next_bio;
      lVar4 = BIO_ctrl(in,0xc,0,a);
      if ((lVar4 < 1) ||
         (iVar3 = CRYPTO_dup_ex_data(0xc,(CRYPTO_EX_DATA *)(a + 1),(CRYPTO_EX_DATA *)(in + 1)),
         iVar3 == 0)) {
        BIO_free(a);
        break;
      }
      if (a_00 == (BIO *)0x0) {
        in = *(BIO **)&in->references;
        a_00 = a;
      }
      else {
        BIO_push(b,a);
        in = *(BIO **)&in->references;
      }
      b = a;
      if (in == (BIO *)0x0) {
        return a_00;
      }
    }
    BIO_free_all(a_00);
  }
  return (BIO *)0x0;
}



void BIO_copy_next_retry(BIO *b)

{
  int flags;
  
  flags = BIO_test_flags(*(BIO **)&b->references,0xf);
  BIO_set_flags(b,flags);
  *(undefined4 *)((long)&b->ptr + 4) = *(undefined4 *)(*(long *)&b->references + 0x34);
  return;
}



int BIO_set_ex_data(BIO *bio,int idx,void *data)

{
  int iVar1;
  
  iVar1 = CRYPTO_set_ex_data((CRYPTO_EX_DATA *)(bio + 1),idx,data);
  return iVar1;
}



void * BIO_get_ex_data(BIO *bio,int idx)

{
  void *pvVar1;
  
  pvVar1 = CRYPTO_get_ex_data((CRYPTO_EX_DATA *)(bio + 1),idx);
  return pvVar1;
}



ulong BIO_number_read(BIO *bio)

{
  stack_st_void *psVar1;
  
  psVar1 = (stack_st_void *)0x0;
  if (bio != (BIO *)0x0) {
    psVar1 = (bio->ex_data).sk;
  }
  return (ulong)psVar1;
}



ulong BIO_number_written(BIO *bio)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (bio != (BIO *)0x0) {
    uVar1 = *(ulong *)&(bio->ex_data).dummy;
  }
  return uVar1;
}



void bio_free_ex_data(void *param_1)

{
  CRYPTO_free_ex_data(0xc,param_1,(CRYPTO_EX_DATA *)((long)param_1 + 0x70));
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bio_cleanup(void)

{
  bio_sock_cleanup_int();
  CRYPTO_THREAD_lock_free(_bio_lookup_lock);
  _bio_lookup_lock = 0;
  return;
}



int BIO_wait(void)

{
  int iVar1;
  
  iVar1 = bio_wait();
  if (0 < iVar1) {
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/bio/bio_lib.c",0x3ee,"BIO_wait");
  ERR_set_error(0x20,(iVar1 == 0) + 'h',0);
  return iVar1;
}



ulong BIO_do_connect_retry(BIO *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  time_t tVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  
  lVar6 = 0;
  if (0 < param_2) {
    tVar3 = time((time_t *)0x0);
    lVar6 = param_2 + tVar3;
  }
  if (param_1 == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x402,"BIO_do_connect_retry");
    ERR_set_error(0x20,0xc0102,0);
LAB_00101c4d:
    uVar4 = 0xffffffff;
  }
  else {
    if (param_3 < 0) {
      param_3 = 100;
    }
    BIO_ctrl(param_1,0x66,(ulong)(0 < param_2),(void *)0x0);
    do {
      ERR_set_mark();
      uVar4 = BIO_ctrl(param_1,0x65,0,(void *)0x0);
      if (0 < (int)uVar4) {
        ERR_clear_last_mark();
        return uVar4 & 0xffffffff;
      }
      uVar4 = ERR_peek_last_error();
      uVar1 = (uint)uVar4;
      if (-1 < (int)uVar1) {
        iVar2 = BIO_test_flags(param_1,8);
        if (((ulong)(long)(int)uVar1 >> 0x17 == 0x20) &&
           (((uVar5 = uVar1 & 0x7fffff, uVar5 == 0x6e || (uVar5 == 0x80002)) || (uVar5 == 0x67)))) {
          BIO_ctrl(param_1,1,0,(void *)0x0);
          bVar7 = true;
        }
        else {
          bVar7 = iVar2 != 0;
        }
        if (-1 < param_2) goto LAB_00101bdd;
LAB_00101c40:
        ERR_clear_last_mark();
        if (uVar1 == 0) {
          ERR_new();
          ERR_set_debug("crypto/bio/bio_lib.c",0x433,"BIO_do_connect_retry");
          ERR_set_error(0x20,0x67,0);
        }
        goto LAB_00101c4d;
      }
      iVar2 = BIO_test_flags(param_1,8);
      bVar7 = iVar2 != 0;
      if (param_2 < 0) goto LAB_00101c40;
LAB_00101bdd:
      if (!bVar7) goto LAB_00101c40;
      ERR_pop_to_mark();
      uVar1 = bio_wait(param_1,lVar6,param_3);
      uVar4 = (ulong)uVar1;
    } while (0 < (int)uVar1);
    ERR_new();
    ERR_set_debug("crypto/bio/bio_lib.c",0x42c,"BIO_do_connect_retry");
    ERR_set_error(0x20,(-(uVar1 == 0) & 0x2cU) + 0x67,0);
  }
  return uVar4;
}


