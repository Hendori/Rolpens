
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long BIO_debug_callback_ex
               (long param_1,uint param_2,long param_3,long param_4,uint param_5,undefined8 param_6,
               uint param_7,undefined8 *param_8)

{
  BIO *b;
  int iVar1;
  size_t sVar2;
  ulong uVar3;
  int iVar4;
  char *buf;
  undefined8 uVar5;
  long lVar6;
  long in_FS_OFFSET;
  char local_148 [264];
  long local_40;
  
  uVar5 = 0;
  lVar6 = (long)(int)param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 != (undefined8 *)0x0) {
    uVar5 = *param_8;
  }
  iVar1 = BIO_snprintf(local_148,0x100,"BIO[%p]: ",param_1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar4 = 0x100 - iVar1;
  buf = local_148 + iVar1;
  if ((int)param_2 < 9) {
    if (0 < (int)param_2) {
      switch(param_2) {
      default:
        BIO_snprintf(buf,(long)iVar4,"Free - %s\n",*(undefined8 *)(*(long *)(param_1 + 8) + 8));
        break;
      case 2:
        uVar3 = (ulong)*(uint *)(param_1 + 0x38);
        uVar5 = *(undefined8 *)(*(uint **)(param_1 + 8) + 2);
        if ((**(uint **)(param_1 + 8) & 0x100) == 0) {
          BIO_snprintf(buf,(long)iVar4,"read(%d,%zu) - %s\n",uVar3,param_4,uVar5);
        }
        else {
          BIO_snprintf(buf,(long)iVar4,"read(%d,%zu) - %s fd=%d\n",uVar3,param_4,uVar5,uVar3);
        }
        break;
      case 3:
        uVar3 = (ulong)*(uint *)(param_1 + 0x38);
        uVar5 = *(undefined8 *)(*(uint **)(param_1 + 8) + 2);
        if ((**(uint **)(param_1 + 8) & 0x100) == 0) {
          BIO_snprintf(buf,(long)iVar4,"write(%d,%zu) - %s\n",uVar3,param_4,uVar5);
        }
        else {
          BIO_snprintf(buf,(long)iVar4,"write(%d,%zu) - %s fd=%d\n",uVar3,param_4,uVar5,uVar3);
        }
        break;
      case 4:
        BIO_snprintf(buf,(long)iVar4,"puts() - %s\n",*(undefined8 *)(*(long *)(param_1 + 8) + 8));
        break;
      case 5:
        BIO_snprintf(buf,(long)iVar4,"gets(%zu) - %s\n",param_4,
                     *(undefined8 *)(*(long *)(param_1 + 8) + 8));
        break;
      case 6:
        BIO_snprintf(buf,(long)iVar4,"ctrl(%d) - %s\n",(ulong)param_5,
                     *(undefined8 *)(*(long *)(param_1 + 8) + 8));
        break;
      case 7:
        BIO_snprintf(buf,(long)iVar4,"recvmmsg(%zu) - %s",*(undefined8 *)(param_3 + 0x10),
                     *(undefined8 *)(*(long *)(param_1 + 8) + 8));
        break;
      case 8:
        BIO_snprintf(buf,(long)iVar4,"sendmmsg(%zu) - %s",*(undefined8 *)(param_3 + 0x10),
                     *(undefined8 *)(*(long *)(param_1 + 8) + 8));
      }
      goto LAB_00100108;
    }
  }
  else if (param_2 - 0x82 < 7) {
    if (param_2 - 0x83 < 6) {
      sVar2 = (size_t)iVar4;
      switch(param_2) {
      case 0x83:
        BIO_snprintf(buf,sVar2,"write return %d processed: %zu\n",(ulong)param_7,uVar5);
        break;
      case 0x84:
        BIO_snprintf(buf,sVar2,"puts return %d processed: %zu\n",(ulong)param_7,uVar5);
        break;
      case 0x85:
        BIO_snprintf(buf,sVar2,"gets return %d processed: %zu\n",(ulong)param_7,uVar5);
        break;
      case 0x86:
        BIO_snprintf(buf,sVar2,"ctrl return %d\n",(ulong)param_7);
        break;
      case 0x87:
        BIO_snprintf(buf,sVar2,"recvmmsg processed: %zu\n",param_4);
        lVar6 = param_4;
        break;
      case 0x88:
        BIO_snprintf(buf,sVar2,"sendmmsg processed: %zu\n",param_4);
        lVar6 = param_4;
      }
    }
    else {
      BIO_snprintf(buf,(long)iVar4,"read return %d processed: %zu\n",(ulong)param_7,uVar5);
    }
    goto LAB_00100108;
  }
  BIO_snprintf(buf,(long)iVar4,"bio callback - unknown type (%d)\n",(ulong)param_2);
LAB_00100108:
  b = *(BIO **)(param_1 + 0x20);
  if (b == (BIO *)0x0) {
    fputs(local_148,_stderr);
  }
  else {
    sVar2 = strlen(local_148);
    BIO_write(b,local_148,(int)sVar2);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long BIO_debug_callback(BIO *bio,int cmd,char *argp,int argi,long argl,long ret)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  BIO_debug_callback_ex();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ret;
}


