
bool ASN1_buf_print(BIO *param_1,long param_2,long param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      iVar1 = BIO_indent(param_1,param_4,0x80);
      if (iVar1 == 0) {
        return false;
      }
      do {
        puVar2 = &_LC0;
        if (param_3 + -1 != lVar3) {
          puVar2 = &_LC1;
        }
        iVar1 = BIO_printf(param_1,"%02x%s",(ulong)*(byte *)(param_2 + lVar3),puVar2);
        if (iVar1 < 1) {
          return false;
        }
        lVar3 = lVar3 + 1;
        if (param_3 == lVar3) goto LAB_001000d0;
      } while (0x1111111111111111 < (ulong)(lVar3 * -0x1111111111111111));
      iVar1 = BIO_puts(param_1,"\n");
      if (iVar1 < 1) {
        return false;
      }
    } while( true );
  }
LAB_001000d0:
  iVar1 = BIO_write(param_1,&_LC2,1);
  return 0 < iVar1;
}



int ASN1_bn_print(BIO *bp,char *number,BIGNUM *num,uchar *buf,int off)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  uchar *puVar7;
  uchar *puVar8;
  char *pcVar9;
  
  uVar4 = 1;
  if (num != (BIGNUM *)0x0) {
    iVar3 = BN_is_negative(num);
    pcVar9 = "-";
    if (iVar3 == 0) {
      pcVar9 = "";
    }
    uVar4 = BIO_indent(bp,off,0x80);
    if (uVar4 != 0) {
      iVar3 = BN_is_zero(num);
      if (iVar3 == 0) {
        iVar3 = BN_num_bits(num);
        if (iVar3 < 0x41) {
          puVar6 = (undefined8 *)bn_get_words();
          uVar2 = *puVar6;
          puVar6 = (undefined8 *)bn_get_words(num);
          iVar3 = BIO_printf(bp,"%s %s%lu (%s0x%lx)\n",number,pcVar9,*puVar6,pcVar9,uVar2);
          uVar4 = (uint)(0 < iVar3);
        }
        else {
          iVar5 = BN_num_bits(num);
          iVar3 = iVar5 + 0xe;
          if (-1 < iVar5 + 7) {
            iVar3 = iVar5 + 7;
          }
          iVar3 = (iVar3 >> 3) + 1;
          puVar7 = (uchar *)CRYPTO_malloc(iVar3,"crypto/asn1/t_pkey.c",0x49);
          uVar4 = 0;
          if (puVar7 != (uchar *)0x0) {
            cVar1 = *pcVar9;
            *puVar7 = '\0';
            pcVar9 = " (Negative)";
            if (cVar1 != '-') {
              pcVar9 = "";
            }
            iVar5 = BIO_printf(bp,"%s%s\n",number,pcVar9);
            if (0 < iVar5) {
              iVar5 = BN_bn2bin(num,puVar7 + 1);
              puVar8 = puVar7 + 1;
              if ((char)puVar7[1] < '\0') {
                iVar5 = iVar5 + 1;
                puVar8 = puVar7;
              }
              iVar5 = ASN1_buf_print(bp,puVar8,(long)iVar5,off + 4);
              uVar4 = (uint)(iVar5 != 0);
            }
          }
          CRYPTO_clear_free(puVar7,(long)iVar3,"crypto/asn1/t_pkey.c",0x5b);
        }
      }
      else {
        iVar3 = BIO_printf(bp,"%s 0\n",number);
        uVar4 = (uint)(0 < iVar3);
      }
    }
  }
  return uVar4;
}


