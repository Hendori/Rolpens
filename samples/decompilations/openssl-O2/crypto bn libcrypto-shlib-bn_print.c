
int BN_print(void *fp,BIGNUM *a)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if (((a->neg == 0) || (iVar1 = BIO_write((BIO *)fp,&_LC0,1), iVar1 == 1)) &&
     ((iVar1 = BN_is_zero(a), iVar1 == 0 || (iVar1 = BIO_write((BIO *)fp,&_LC1,1), iVar1 == 1)))) {
    iVar1 = a->top;
    uVar3 = iVar1 - 1;
    if (-1 < (int)uVar3) {
      lVar5 = (long)(int)uVar3 << 3;
      uVar2 = 0;
      do {
        iVar6 = 0x3c;
        do {
          uVar4 = (uint)(*(ulong *)((long)a->d + lVar5) >> ((byte)iVar6 & 0x3f)) & 0xf;
          uVar2 = uVar2 | uVar4;
          if ((uVar2 != 0) &&
             (uVar2 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar4,1), uVar2 != 1)) {
            return 0;
          }
          iVar6 = iVar6 + -4;
        } while (iVar6 != -4);
        lVar5 = lVar5 + -8;
      } while (((long)iVar1 - (ulong)uVar3) * 8 + -0x10 != lVar5);
    }
    return 1;
  }
  return 0;
}



int BN_print_fp(FILE *fp,BIGNUM *a)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  
  iVar1 = 0;
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp != (BIO *)0x0) {
    BIO_ctrl(bp,0x6a,0,fp);
    iVar1 = BN_print(bp,a);
    BIO_free(bp);
  }
  return iVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * BN_options(void)

{
  if (init_1 != 0) {
    return data_0;
  }
  init_1 = 1;
  BIO_snprintf(data_0,0x10,"bn(%zu,%zu)",0x40,0x40);
  return data_0;
}


