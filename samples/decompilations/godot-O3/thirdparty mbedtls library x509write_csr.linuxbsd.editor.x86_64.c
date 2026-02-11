
int x509write_csr_der_internal_constprop_0
              (undefined8 *param_1,void *param_2,long param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6)

{
  size_t __n;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  void *pvVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_b0;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  undefined8 local_90;
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  local_a0 = (void *)((long)param_2 + param_3);
  iVar1 = mbedtls_x509_write_extensions(&local_a0,param_2,param_1[3]);
  if (iVar1 < 0) goto LAB_001003c0;
  lVar8 = (long)iVar1;
  if (lVar8 != 0) {
    iVar2 = mbedtls_asn1_write_len(&local_a0,param_2,lVar8);
    iVar1 = iVar2;
    if ((iVar2 < 0) || (iVar1 = mbedtls_asn1_write_tag(&local_a0,param_2,0x30), iVar1 < 0))
    goto LAB_001003c0;
    lVar8 = (long)iVar1 + iVar2 + lVar8;
    iVar2 = mbedtls_asn1_write_len(&local_a0,param_2,lVar8);
    iVar1 = iVar2;
    if ((iVar2 < 0) ||
       ((iVar3 = mbedtls_asn1_write_tag(&local_a0,param_2,0x31), iVar1 = iVar3, iVar3 < 0 ||
        (iVar1 = mbedtls_asn1_write_oid(&local_a0,param_2,&_LC0,9), iVar1 < 0)))) goto LAB_001003c0;
    lVar8 = (long)iVar1 + (long)iVar3 + iVar2 + lVar8;
    iVar2 = mbedtls_asn1_write_len(&local_a0,param_2,lVar8);
    iVar1 = iVar2;
    if ((iVar2 < 0) || (iVar1 = mbedtls_asn1_write_tag(&local_a0,param_2,0x30), iVar1 < 0))
    goto LAB_001003c0;
    lVar8 = (long)iVar1 + iVar2 + lVar8;
  }
  iVar2 = mbedtls_asn1_write_len(&local_a0,param_2,lVar8);
  iVar1 = iVar2;
  if (((-1 < iVar2) &&
      (iVar3 = mbedtls_asn1_write_tag(&local_a0,param_2,0xa0), iVar1 = iVar3, -1 < iVar3)) &&
     (iVar1 = mbedtls_pk_write_pubkey_der(*param_1,param_2,(long)local_a0 - (long)param_2),
     -1 < iVar1)) {
    lVar5 = (long)iVar1;
    local_a0 = (void *)((long)local_a0 - lVar5);
    iVar4 = mbedtls_x509_write_names(&local_a0,param_2,param_1[1]);
    iVar1 = iVar4;
    if (-1 < iVar4) {
      iVar1 = mbedtls_asn1_write_int(&local_a0,param_2,0);
      if (-1 < iVar1) {
        lVar8 = (long)iVar1 + (long)iVar4 + (long)iVar3 + iVar2 + lVar8 + lVar5;
        iVar2 = mbedtls_asn1_write_len(&local_a0,param_2,lVar8);
        iVar1 = iVar2;
        if ((-1 < iVar2) &&
           (iVar1 = mbedtls_asn1_write_tag(&local_a0,param_2,0x30), pvVar7 = local_a0, -1 < iVar1))
        {
          __n = (long)iVar1 + iVar2 + lVar8;
          uVar6 = mbedtls_md_info_from_type(*(undefined4 *)(param_1 + 2));
          iVar1 = mbedtls_md(uVar6,pvVar7,__n,local_88);
          if ((iVar1 == 0) &&
             (iVar1 = mbedtls_pk_sign(*param_1,*(undefined4 *)(param_1 + 2),local_88,0,param_4,0x400
                                      ,&local_90,param_5,param_6), iVar1 == 0)) {
            iVar1 = mbedtls_pk_can_do(*param_1,1);
            if (iVar1 == 0) {
              iVar1 = mbedtls_pk_can_do(*param_1,4);
              if (iVar1 == 0) {
                iVar1 = -0x2300;
                goto LAB_001003c0;
              }
              uVar6 = 4;
            }
            else {
              uVar6 = 1;
            }
            iVar1 = mbedtls_oid_get_oid_by_sig_alg
                              (uVar6,*(undefined4 *)(param_1 + 2),&local_b0,&local_a8);
            if (iVar1 == 0) {
              pvVar7 = memmove(param_2,local_a0,__n);
              local_98 = (void *)((long)param_2 + param_3);
              iVar2 = mbedtls_x509_write_sig
                                (&local_98,(long)param_2 + __n,local_b0,local_a8,param_4,local_90,
                                 uVar6,pvVar7);
              iVar1 = iVar2;
              if (-1 < iVar2) {
                local_98 = (void *)((long)local_98 - __n);
                memmove(local_98,param_2,__n);
                iVar3 = mbedtls_asn1_write_len(&local_98,param_2,(long)iVar2 + __n);
                iVar1 = iVar3;
                if ((-1 < iVar3) &&
                   (iVar1 = mbedtls_asn1_write_tag(&local_98,param_2,0x30), -1 < iVar1)) {
                  memset(param_2,0,(long)local_98 - (long)param_2);
                  iVar1 = iVar1 + (int)((long)iVar2 + __n) + iVar3;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_001003c0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



void mbedtls_x509write_csr_init(undefined1 (*param_1) [16])

{
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  return;
}



void mbedtls_x509write_csr_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_asn1_free_named_data_list(param_1 + 8);
    mbedtls_asn1_free_named_data_list(param_1 + 0x18);
    mbedtls_platform_zeroize(param_1,0x20);
    return;
  }
  return;
}



void mbedtls_x509write_csr_set_md_alg(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return;
}



void mbedtls_x509write_csr_set_key(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



void mbedtls_x509write_csr_set_subject_name(long param_1)

{
  mbedtls_x509_string_to_names(param_1 + 8);
  return;
}



void mbedtls_x509write_csr_set_extension(long param_1)

{
  mbedtls_x509_set_extension(param_1 + 0x18);
  return;
}



void mbedtls_x509write_csr_set_subject_alternative_name(long param_1)

{
  mbedtls_x509_write_set_san_common(param_1 + 0x18);
  return;
}



void mbedtls_x509write_csr_set_key_usage(long param_1,undefined1 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_2c [12];
  long *local_20;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = &local_10;
  local_14 = 0;
  local_2c[0] = param_2;
  iVar1 = mbedtls_asn1_write_named_bitstring(&local_20,&local_14,local_2c,8);
  if (iVar1 - 3U < 2) {
    mbedtls_x509_set_extension(param_1 + 0x18,&_LC1,3,0,local_20,(long)iVar1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_x509write_csr_set_ns_cert_type(long param_1,undefined1 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_2c [12];
  long *local_20;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = &local_10;
  local_14 = 0;
  local_2c[0] = param_2;
  iVar1 = mbedtls_asn1_write_named_bitstring(&local_20,&local_14,local_2c,8);
  if (iVar1 - 3U < 2) {
    mbedtls_x509_set_extension(param_1 + 0x18,&_LC2,9,0,local_20,(long)iVar1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
mbedtls_x509write_csr_der
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined4 uVar1;
  void *__ptr;
  
  __ptr = calloc(1,0x400);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffd780;
  }
  else {
    uVar1 = x509write_csr_der_internal_constprop_0(param_1,param_2,param_3,__ptr,param_4,param_5);
    free(__ptr);
  }
  return uVar1;
}



int mbedtls_x509write_csr_pem
              (undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  void *__ptr;
  long in_FS_OFFSET;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  __ptr = calloc(1,0x400);
  if (__ptr == (void *)0x0) {
    iVar1 = -0x2880;
  }
  else {
    iVar1 = x509write_csr_der_internal_constprop_0(param_1,param_2,param_3,__ptr,param_4,param_5);
    free(__ptr);
    if (-1 < iVar1) {
      iVar1 = mbedtls_pem_write_buffer
                        ("-----BEGIN CERTIFICATE REQUEST-----\n",
                         "-----END CERTIFICATE REQUEST-----\n",(param_3 - iVar1) + param_2,
                         (long)iVar1,param_2,param_3,&local_48);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


