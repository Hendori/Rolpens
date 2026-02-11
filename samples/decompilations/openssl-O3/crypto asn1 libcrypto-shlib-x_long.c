
int long_i2c(ulong *param_1,byte *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  int iVar10;
  
  uVar8 = *param_1;
  if (*(ulong *)(param_4 + 0x28) == uVar8) {
    iVar10 = -1;
  }
  else {
    bVar9 = 0;
    if ((long)uVar8 < 0) {
      uVar8 = ~uVar8;
      bVar9 = 0xff;
    }
    lVar2 = 0x40;
    uVar5 = 0;
    uVar7 = uVar8;
    do {
      uVar5 = (uVar5 + 1) - (uint)(uVar7 == 0);
      uVar7 = uVar7 >> 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar6 = (int)(uVar5 + 7) >> 3;
    if ((uVar5 & 7) == 0) {
      iVar10 = iVar6 + 1;
      if (param_2 == (byte *)0x0) {
        return iVar10;
      }
      *param_2 = bVar9;
      param_2 = param_2 + 1;
    }
    else {
      iVar10 = iVar6;
      if (param_2 == (byte *)0x0) {
        return iVar6;
      }
    }
    uVar5 = iVar6 - 1;
    if (-1 < (int)uVar5) {
      pbVar3 = param_2 + (int)uVar5;
      do {
        pbVar4 = pbVar3 + -1;
        bVar1 = (byte)uVar8;
        uVar8 = uVar8 >> 8;
        *pbVar3 = bVar9 ^ bVar1;
        pbVar3 = pbVar4;
      } while (pbVar4 != param_2 + (((long)iVar6 + -2) - (ulong)uVar5));
    }
  }
  return iVar10;
}



void long_print(BIO *param_1,undefined8 *param_2)

{
  BIO_printf(param_1,"%ld\n",*param_2);
  return;
}



undefined8 long_new(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x28);
  return 1;
}



void long_free(undefined8 *param_1,long param_2)

{
  *param_1 = *(undefined8 *)(param_2 + 0x28);
  return;
}



undefined8
long_c2i(ulong *param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5,long param_6
        )

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
LAB_0010020c:
      uVar2 = 0;
LAB_0010020e:
      if (*(ulong *)(param_6 + 0x28) != uVar2) {
LAB_00100214:
        *param_1 = uVar2;
        return 1;
      }
    }
    else {
      if (-1 < (char)*param_2) {
        if (param_3 == 1) {
          uVar2 = (ulong)*param_2;
          goto LAB_0010020e;
        }
        goto LAB_0010020c;
      }
      if (param_3 == 1) {
        uVar2 = (ulong)(byte)~*param_2;
      }
      else {
        uVar2 = 0;
      }
LAB_001001e7:
      uVar2 = ~uVar2;
      if (*(ulong *)(param_6 + 0x28) != uVar2) goto LAB_00100214;
    }
    ERR_new();
    uVar4 = 0xb6;
  }
  else {
    bVar1 = *param_2;
    if (bVar1 == 0) {
      uVar3 = 0;
      if (param_3 + -1 < 9) {
LAB_0010029e:
        param_3 = param_3 + -1;
        param_2 = param_2 + 1;
        uVar2 = *param_2 ^ uVar3;
        if ((uVar2 & 0x80) == 0) {
          ERR_new();
          ERR_set_debug("crypto/asn1/x_long.c",0xa6,__func___1);
          ERR_set_error(0xd,0xdd,0);
          return 0;
        }
        if (param_3 != 1) goto LAB_00100150;
LAB_001001e2:
        if (uVar3 != 0) goto LAB_001001e7;
        goto LAB_0010020e;
      }
    }
    else if (bVar1 == 0xff) {
      if (param_3 + -1 < 9) {
        uVar3 = 0xff;
        goto LAB_0010029e;
      }
    }
    else if (param_3 < 9) {
      if ((char)bVar1 < '\0') {
        uVar3 = 0xff;
        uVar2 = (ulong)(byte)~bVar1;
      }
      else {
        uVar2 = (ulong)*param_2;
        uVar3 = 0;
      }
LAB_00100150:
      uVar2 = param_2[1] ^ uVar3 | uVar2 << 8;
      if ((((param_3 != 2) && (uVar2 = uVar2 << 8 | param_2[2] ^ uVar3, param_3 != 3)) &&
          (uVar2 = param_2[3] ^ uVar3 | uVar2 << 8, param_3 != 4)) &&
         (((uVar2 = param_2[4] ^ uVar3 | uVar2 << 8, param_3 != 5 &&
           (uVar2 = param_2[5] ^ uVar3 | uVar2 << 8, param_3 != 6)) &&
          ((uVar2 = uVar2 << 8 | param_2[6] ^ uVar3, param_3 == 8 &&
           (uVar2 = param_2[7] ^ uVar3 | uVar2 << 8, (long)uVar2 < 0)))))) {
        ERR_new();
        uVar4 = 0xb0;
        goto LAB_00100265;
      }
      goto LAB_001001e2;
    }
    ERR_new();
    uVar4 = 0x9b;
  }
LAB_00100265:
  ERR_set_debug("crypto/asn1/x_long.c",uVar4,__func___1);
  ERR_set_error(0xd,0x80,0);
  return 0;
}



undefined1 * LONG_it(void)

{
  return local_it_2;
}



undefined1 * ZLONG_it(void)

{
  return local_it_0;
}


