
char * EC_POINT_point2hex(EC_GROUP *param_1,EC_POINT *param_2,point_conversion_form_t form,
                         BN_CTX *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined4 in_register_00000014;
  long lVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  void *local_38;
  long local_30;
  
  pcVar3 = (char *)0x0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (void *)0x0;
  lVar2 = EC_POINT_point2buf(param_1,param_2,CONCAT44(in_register_00000014,form),&local_38,param_4);
  if (lVar2 != 0) {
    pcVar3 = (char *)CRYPTO_malloc((int)lVar2 * 2 + 2,"crypto/ec/ec_print.c",0x1d);
    if (pcVar3 != (char *)0x0) {
      lVar5 = 0;
      pcVar6 = pcVar3;
      do {
        puVar1 = (undefined1 *)((long)local_38 + lVar5);
        lVar5 = lVar5 + 1;
        lVar4 = ossl_to_hex(pcVar6,*puVar1);
        pcVar6 = pcVar6 + lVar4;
      } while (lVar2 != lVar5);
      *pcVar6 = '\0';
    }
    CRYPTO_free(local_38);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



EC_POINT * EC_POINT_hex2point(EC_GROUP *param_1,char *param_2,EC_POINT *param_3,BN_CTX *param_4)

{
  int iVar1;
  size_t sVar2;
  uchar *buf;
  EC_POINT *p;
  long in_FS_OFFSET;
  size_t local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if ((param_1 != (EC_GROUP *)0x0) && (param_2 != (char *)0x0)) {
    p = param_3;
    if (param_3 == (EC_POINT *)0x0) {
      p = EC_POINT_new(param_1);
      if (p == (EC_POINT *)0x0) {
        CRYPTO_clear_free(0,local_48,"crypto/ec/ec_print.c",0x48);
        goto LAB_0010017f;
      }
    }
    sVar2 = strlen(param_2);
    buf = (uchar *)CRYPTO_malloc((int)(sVar2 >> 1),"crypto/ec/ec_print.c",0x3f);
    if (buf == (uchar *)0x0) {
LAB_0010015d:
      CRYPTO_clear_free(buf,local_48,"crypto/ec/ec_print.c",0x48);
    }
    else {
      iVar1 = OPENSSL_hexstr2buf_ex(buf,sVar2 >> 1,&local_48,param_2,0);
      if (iVar1 == 0) goto LAB_0010015d;
      iVar1 = EC_POINT_oct2point(param_1,p,buf,local_48,param_4);
      CRYPTO_clear_free(buf,local_48,"crypto/ec/ec_print.c",0x48);
      if (iVar1 != 0) goto LAB_001001bc;
    }
    if (p != param_3) {
      EC_POINT_clear_free(p);
    }
  }
LAB_0010017f:
  p = (EC_POINT *)0x0;
LAB_001001bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return p;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


