
undefined8 FuzzerInitialize(void)

{
  b1 = BN_new();
  b2 = BN_new();
  b3 = BN_new();
  b4 = BN_new();
  b5 = BN_new();
  ctx = BN_CTX_new();
  OPENSSL_init_crypto(2,0);
  ERR_clear_error();
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FuzzerTestOneInput(byte *param_1,ulong param_2)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  BIGNUM *pBVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint n;
  uint uVar14;
  bool bVar15;
  
  if (param_2 < 0x3e801) {
    lVar13 = param_2 - 1;
    if (param_2 == 0) {
      iVar12 = 0;
      iVar3 = 0;
      n = 0;
      uVar14 = 0;
      uVar10 = 0;
      goto LAB_001000e3;
    }
  }
  else {
    lVar13 = 0x3e7ff;
  }
  bVar1 = *param_1;
  param_1 = param_1 + 1;
  n = bVar1 & 0x80;
  uVar14 = bVar1 & 0x40;
  uVar10 = (ulong)(bVar1 & 0x3f) * lVar13;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  lVar11 = SUB168(ZEXT816(0x410410410410411) * auVar2,8);
  uVar10 = lVar11 + (uVar10 - lVar11 >> 1) >> 5;
  iVar3 = (int)uVar10;
  iVar12 = (int)lVar13 - iVar3;
LAB_001000e3:
  pBVar8 = BN_bin2bn(param_1,iVar3,b1);
  if (pBVar8 == b1) {
    BN_set_negative(pBVar8,uVar14);
    pBVar8 = BN_bin2bn(param_1 + uVar10,iVar12,b2);
    if (pBVar8 == b2) {
      BN_set_negative(pBVar8,n);
      uVar14 = BN_is_zero(b2);
      uVar10 = (ulong)uVar14;
      if (uVar14 == 0) {
        iVar3 = BN_div(b3,b4,b1,b2,ctx);
        if (iVar3 == 0) goto LAB_001004f9;
        iVar3 = BN_is_zero(b1);
        if (iVar3 == 0) goto LAB_001003d8;
        iVar3 = BN_is_zero(b3);
        if (iVar3 != 0) goto LAB_00100460;
        goto LAB_001001d8;
      }
LAB_00100148:
      ERR_clear_error();
      return 0;
    }
    OPENSSL_die("assertion failed: BN_bin2bn(buf + l1, l2, b2) == b2","fuzz/bndiv.c",0x4a);
  }
  OPENSSL_die("assertion failed: BN_bin2bn(buf, l1, b1) == b1","fuzz/bndiv.c",0x48);
LAB_001004c9:
  OPENSSL_die("assertion failed: BN_mul(b5, b3, b2, ctx)","fuzz/bndiv.c",0x5c);
LAB_001004e1:
  OPENSSL_die("assertion failed: BN_add(b5, b5, b4)","fuzz/bndiv.c",0x5d);
LAB_001004f9:
  OPENSSL_die("assertion failed: BN_div(b3, b4, b1, b2, ctx)","fuzz/bndiv.c",0x53);
  do {
    iVar3 = BN_is_zero(b4);
    if (iVar3 != 0) break;
LAB_00100341:
    do {
      uVar4 = BN_is_zero(b4);
      uVar5 = BN_is_negative(b4);
      uVar6 = BN_is_negative(b3);
      uVar7 = BN_is_negative(b2);
      uVar9 = BN_is_negative(b1);
      __printf_chk(2,"%d %d %d %d %d %d %d\n",uVar9 & 0xffffffff,uVar7,uVar6,uVar5,uVar4,uVar10,n,
                   uVar9);
      puts("----\n");
      OPENSSL_die("assertion failed: success","fuzz/bndiv.c",0x75);
LAB_001003d8:
      iVar3 = BN_is_negative(b1);
      if (iVar3 == 0) {
        iVar3 = BN_is_negative(b3);
        iVar12 = BN_is_negative(b2);
        if ((iVar3 == iVar12) || (iVar3 = BN_is_zero(b3), iVar3 != 0)) {
          iVar3 = BN_is_negative(b4);
          goto joined_r0x00100459;
        }
LAB_001001d8:
        bVar15 = false;
      }
      else {
        iVar3 = BN_is_negative(b3);
        iVar12 = BN_is_negative(b2);
        if ((iVar3 == iVar12) && (iVar3 = BN_is_zero(b3), iVar3 == 0)) goto LAB_001001d8;
        iVar3 = BN_is_negative(b4);
joined_r0x00100459:
        if (iVar3 == 0) {
          bVar15 = true;
        }
        else {
LAB_00100460:
          iVar3 = BN_is_zero(b4);
          bVar15 = iVar3 != 0;
        }
      }
      iVar3 = BN_mul(b5,b3,b2,ctx);
      if (iVar3 == 0) goto LAB_001004c9;
      iVar3 = BN_add(b5,b5,b4);
      if (iVar3 == 0) goto LAB_001004e1;
      if ((bVar15) && (iVar3 = BN_cmp(b5,b1), iVar3 == 0)) goto LAB_00100148;
      BN_print_fp(_stdout,b1);
      putc(10,_stdout);
      BN_print_fp(_stdout,b2);
      putc(10,_stdout);
      BN_print_fp(_stdout,b3);
      putc(10,_stdout);
      BN_print_fp(_stdout,b4);
      putc(10,_stdout);
      BN_print_fp(_stdout,b5);
      putc(10,_stdout);
      n = BN_cmp(b5,b1);
      iVar3 = BN_is_negative(b3);
      iVar12 = BN_is_negative(b2);
    } while (iVar3 == iVar12);
    iVar3 = BN_is_negative(b4);
  } while (iVar3 == 0);
  uVar10 = 1;
  goto LAB_00100341;
}



void FuzzerCleanup(void)

{
  BN_free(b1);
  BN_free(b2);
  BN_free(b3);
  BN_free(b4);
  BN_free(b5);
  BN_CTX_free(ctx);
  return;
}


