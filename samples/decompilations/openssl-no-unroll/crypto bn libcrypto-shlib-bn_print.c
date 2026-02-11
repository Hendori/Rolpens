
int BN_print(void *fp,BIGNUM *a)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  
  if (((a->neg == 0) || (iVar2 = BIO_write((BIO *)fp,&_LC0,1), iVar2 == 1)) &&
     ((iVar2 = BN_is_zero(a), iVar2 == 0 || (iVar2 = BIO_write((BIO *)fp,&_LC1,1), iVar2 == 1)))) {
    iVar2 = a->top;
    uVar7 = iVar2 - 1;
    if (-1 < (int)uVar7) {
      lVar8 = (long)(int)uVar7 << 3;
      uVar6 = 0;
      do {
        uVar1 = *(ulong *)((long)a->d + lVar8);
        uVar5 = (uint)(uVar1 >> 0x20);
        if ((int)uVar6 == 0 && uVar5 >> 0x1c == 0) {
          uVar3 = (uint)(byte)(uVar1 >> 0x38);
          if (uVar1 >> 0x38 != 0) goto LAB_001001ff;
          uVar6 = (ulong)(int)(uVar5 >> 0x14);
          if (uVar5 >> 0x14 != 0) goto LAB_00100226;
          uVar3 = (uint)(ushort)(uVar1 >> 0x30);
          uVar6 = (ulong)(int)uVar3;
          if (uVar3 != 0) goto LAB_0010024b;
          uVar6 = (ulong)(int)(uVar5 >> 0xc);
          if (uVar5 >> 0xc != 0) goto LAB_00100274;
          uVar6 = (ulong)(int)(uVar5 >> 8);
          if (uVar5 >> 8 != 0) goto LAB_0010029d;
          uVar6 = (ulong)(int)(uVar5 >> 4);
          if (uVar5 >> 4 != 0) goto LAB_001002c6;
          uVar6 = (ulong)(int)uVar5;
          if (uVar5 != 0) goto LAB_001002eb;
          iVar4 = (int)(uVar1 >> 0x1c);
          uVar6 = (ulong)iVar4;
          if (iVar4 != 0) goto LAB_00100310;
          iVar4 = (int)(uVar1 >> 0x18);
          uVar6 = (ulong)iVar4;
          if (iVar4 != 0) goto LAB_00100339;
          iVar4 = (int)(uVar1 >> 0x14);
          uVar6 = (ulong)iVar4;
          if (iVar4 != 0) goto LAB_00100362;
          iVar4 = (int)(uVar1 >> 0x10);
          uVar6 = (ulong)iVar4;
          if (iVar4 != 0) goto LAB_0010038b;
          iVar4 = (int)(uVar1 >> 0xc);
          uVar6 = (ulong)iVar4;
          if (iVar4 != 0) goto LAB_001003b4;
          iVar4 = (int)(uVar1 >> 8);
          uVar6 = (ulong)iVar4;
          if (iVar4 != 0) goto LAB_001003dd;
          iVar4 = (int)(uVar1 >> 4);
          uVar6 = (ulong)iVar4;
          if (iVar4 != 0) goto LAB_00100406;
          uVar6 = (ulong)(int)uVar1;
          if ((int)uVar1 != 0) goto LAB_0010042b;
        }
        else {
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + (uVar1 >> 0x3c),1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar3 = (byte)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x38) & 0xf;
LAB_001001ff:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + (int)uVar3,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x34) & 0xf);
LAB_00100226:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((ushort)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x30) & 0xf);
LAB_0010024b:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x2c) & 0xf);
LAB_00100274:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x28) & 0xf);
LAB_0010029d:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x24) & 0xf);
LAB_001002c6:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)(*(uint *)((long)a->d + lVar8 + 4) & 0xf);
LAB_001002eb:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = *(ulong *)((long)a->d + lVar8) >> 0x1c & 0xf;
LAB_00100310:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x18) & 0xf);
LAB_00100339:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)(*(ulong *)((long)a->d + lVar8) >> 0x14) & 0xf);
LAB_00100362:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 0x10) & 0xf);
LAB_0010038b:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)(*(ulong *)((long)a->d + lVar8) >> 0xc) & 0xf);
LAB_001003b4:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)((ulong)*(undefined8 *)((long)a->d + lVar8) >> 8) & 0xf);
LAB_001003dd:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)(*(ulong *)((long)a->d + lVar8) >> 4) & 0xf);
LAB_00100406:
          iVar4 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          if (iVar4 != 1) goto LAB_001001c0;
          uVar6 = (ulong)((uint)*(undefined8 *)((long)a->d + lVar8) & 0xf);
LAB_0010042b:
          uVar5 = BIO_write((BIO *)fp,"0123456789ABCDEF" + uVar6,1);
          uVar6 = (ulong)uVar5;
          if (uVar5 != 1) goto LAB_001001c0;
        }
        lVar8 = lVar8 + -8;
      } while (lVar8 != ((long)iVar2 - (ulong)uVar7) * 8 + -0x10);
    }
    iVar2 = 1;
  }
  else {
LAB_001001c0:
    iVar2 = 0;
  }
  return iVar2;
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


