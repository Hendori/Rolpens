
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

BIO * OSSL_CMP_MSG_http_perform(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ASN1_ITEM *it;
  BIO *a;
  undefined8 *puVar3;
  undefined8 uVar4;
  BIO *in;
  long lVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  stack_st_CONF_VALUE *psVar11;
  long in_FS_OFFSET;
  bool bVar12;
  stack_st_CONF_VALUE *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_90 = (stack_st_CONF_VALUE *)0x0;
  local_78 = 0x706d63;
  local_88 = __LC12;
  uStack_80 = _UNK_001005d8;
  it = (ASN1_ITEM *)OSSL_CMP_MSG_it();
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_new();
    ERR_set_debug("crypto/cmp/cmp_http.c",0x3d,"OSSL_CMP_MSG_http_perform");
    ERR_set_error(0x3a,0x67,0);
  }
  else {
    iVar2 = X509V3_add_value("Pragma","no-cache",&local_90);
    if (iVar2 != 0) {
      a = (BIO *)ASN1_item_i2d_mem_bio(it,param_2);
      if (a != (BIO *)0x0) {
        puVar3 = (undefined8 *)OSSL_CMP_CTX_get_transfer_cb_arg(param_1);
        if (*(int *)(param_1 + 0x48) == 0) {
          iVar2 = *(int *)(param_1 + 0x6c);
          if (-1 < iVar2) goto LAB_001000d1;
LAB_001002eb:
          lVar5 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
          bVar12 = lVar5 != 0;
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_0010030b;
LAB_001000e6:
          psVar11 = local_90;
          uVar7 = *(undefined4 *)(param_1 + 100);
          iVar2 = *(int *)(param_1 + 0x60);
          uVar1 = **(uint **)(param_2 + 8);
          if ((puVar3 == (undefined8 *)0x0) && (iVar2 != 0)) goto LAB_00100109;
          uVar4 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
          uVar10 = *(undefined8 *)(param_1 + 0x78);
          if (puVar3 == (undefined8 *)0x0) {
            uVar9 = 0;
          }
          else {
LAB_00100177:
            uVar9 = puVar3[1];
            puVar3 = (undefined8 *)*puVar3;
          }
        }
        else {
          BIO_snprintf(local_68,0x20,"%d");
          iVar2 = *(int *)(param_1 + 0x6c);
          if (iVar2 < 0) goto LAB_001002eb;
LAB_001000d1:
          bVar12 = iVar2 != 0;
          if (*(long *)(param_1 + 0x30) != 0) goto LAB_001000e6;
LAB_0010030b:
          pcVar6 = *(char **)(param_1 + 0x38);
          if (pcVar6 == (char *)0x0) {
            pcVar6 = "";
          }
          else {
            pcVar6 = pcVar6 + (*pcVar6 == '/');
          }
          if (puVar3 != (undefined8 *)0x0) {
            ossl_cmp_print_log(7,param_1,"OSSL_CMP_MSG_http_perform","crypto/cmp/cmp_http.c",0x57,
                               "DEBUG",
                               "using existing connection with CMP server %s%s and HTTP path /%s",
                               *(undefined8 *)(param_1 + 0x40),local_68,pcVar6);
            psVar11 = local_90;
            uVar7 = *(undefined4 *)(param_1 + 100);
            iVar2 = *(int *)(param_1 + 0x60);
            uVar4 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            goto LAB_00100177;
          }
          puVar8 = &_LC0;
          if (bVar12 != false) {
            puVar8 = &_LC1;
          }
          ossl_cmp_print_log(7,param_1,"OSSL_CMP_MSG_http_perform","crypto/cmp/cmp_http.c",0x53,
                             "DEBUG","connecting to CMP server via http%s://%s:%s%s/%s",puVar8,
                             *(undefined8 *)(param_1 + 0x40),local_68,pcVar6);
          psVar11 = local_90;
          iVar2 = *(int *)(param_1 + 0x60);
          uVar1 = **(uint **)(param_2 + 8);
          if (iVar2 == 0) {
            uVar7 = *(undefined4 *)(param_1 + 100);
            uVar4 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            uVar9 = 0;
            goto LAB_0010017e;
          }
          uVar7 = *(undefined4 *)(param_1 + 100);
LAB_00100109:
          psVar11 = local_90;
          if (((((uVar1 & 0xfffffffd) == 0) || (uVar1 == 4)) || (uVar1 == 7)) || (uVar1 == 0x19)) {
            uVar4 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
            puVar3 = (undefined8 *)0x0;
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            uVar9 = 0;
          }
          else {
            uVar4 = OSSL_CMP_CTX_get_http_cb_arg(param_1);
            iVar2 = 0;
            uVar10 = *(undefined8 *)(param_1 + 0x78);
            uVar9 = 0;
            puVar3 = (undefined8 *)0x0;
          }
        }
LAB_0010017e:
        in = (BIO *)OSSL_HTTP_transfer(param_1 + 0x30,*(undefined8 *)(param_1 + 0x40),local_68,
                                       *(undefined8 *)(param_1 + 0x38),bVar12,
                                       *(undefined8 *)(param_1 + 0x50),
                                       *(undefined8 *)(param_1 + 0x58),puVar3,uVar9,uVar10,uVar4,0,
                                       psVar11,&local_88,a,&local_88,1,0x19000,uVar7,iVar2);
        BIO_free(a);
        a = (BIO *)ASN1_item_d2i_bio(it,in,(void *)0x0);
        BIO_free(in);
        if (*(long *)(param_1 + 0x30) == 0) {
          ossl_cmp_print_log(7,param_1,"OSSL_CMP_MSG_http_perform","crypto/cmp/cmp_http.c",0x6d,
                             "DEBUG",&_LC10,"disconnected from CMP server");
        }
        if (a != (BIO *)0x0) {
          ossl_cmp_print_log(7,param_1,"OSSL_CMP_MSG_http_perform","crypto/cmp/cmp_http.c",0x76,
                             "DEBUG",&_LC10,"finished reading response from CMP server");
        }
      }
      OPENSSL_sk_pop_free(local_90,&X509V3_conf_free);
      goto LAB_00100244;
    }
  }
  a = (BIO *)0x0;
LAB_00100244:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


