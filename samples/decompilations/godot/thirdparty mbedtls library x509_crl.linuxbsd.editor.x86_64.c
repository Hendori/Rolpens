
int mbedtls_x509_crl_info(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int local_40;
  
  iVar1 = __snprintf_chk(param_1,param_2,2,0xffffffffffffffff,"%sCRL version   : %d",param_3,
                         *(undefined4 *)(param_4 + 0x30));
  if ((-1 < iVar1) && (uVar2 = (ulong)iVar1, uVar2 < param_2)) {
    uVar4 = param_2 - uVar2;
    iVar1 = __snprintf_chk(param_1 + uVar2,uVar4,2,0xffffffffffffffff,"\n%sissuer name   : ",param_3
                          );
    if ((-1 < iVar1) && (uVar3 = (ulong)iVar1, uVar3 < uVar4)) {
      uVar4 = uVar4 - uVar3;
      lVar5 = param_1 + uVar2 + uVar3;
      iVar1 = mbedtls_x509_dn_gets(lVar5,uVar4,param_4 + 0x68);
      if ((-1 < iVar1) && (uVar2 = (ulong)iVar1, uVar2 < uVar4)) {
        uVar4 = uVar4 - uVar2;
        lVar5 = lVar5 + uVar2;
        iVar1 = __snprintf_chk(lVar5,uVar4,2,0xffffffffffffffff,
                               "\n%sthis update   : %04d-%02d-%02d %02d:%02d:%02d",param_3,
                               *(undefined4 *)(param_4 + 0xa8),*(undefined4 *)(param_4 + 0xac),
                               *(undefined4 *)(param_4 + 0xb0),*(undefined4 *)(param_4 + 0xb4),
                               *(undefined4 *)(param_4 + 0xb8),*(undefined4 *)(param_4 + 0xbc));
        if ((-1 < iVar1) && (uVar2 = (ulong)iVar1, uVar2 < uVar4)) {
          uVar4 = uVar4 - uVar2;
          lVar5 = lVar5 + uVar2;
          iVar1 = __snprintf_chk(lVar5,uVar4,2,0xffffffffffffffff,
                                 "\n%snext update   : %04d-%02d-%02d %02d:%02d:%02d",param_3,
                                 *(undefined4 *)(param_4 + 0xc0),*(undefined4 *)(param_4 + 0xc4),
                                 *(undefined4 *)(param_4 + 200),*(undefined4 *)(param_4 + 0xcc),
                                 *(undefined4 *)(param_4 + 0xd0),*(undefined4 *)(param_4 + 0xd4));
          if ((-1 < iVar1) && (uVar2 = (ulong)iVar1, uVar2 < uVar4)) {
            uVar4 = uVar4 - uVar2;
            lVar5 = lVar5 + uVar2;
            lVar6 = param_4 + 0xd8;
            iVar1 = __snprintf_chk(lVar5,uVar4,2,0xffffffffffffffff,"\n%sRevoked certificates:",
                                   param_3);
            if ((-1 < iVar1) && (uVar2 = (ulong)iVar1, uVar2 < uVar4)) {
              uVar4 = uVar4 - uVar2;
              lVar5 = lVar5 + uVar2;
              do {
                if (*(long *)(lVar6 + 8) == 0) break;
                iVar1 = __snprintf_chk(lVar5,uVar4,2,0xffffffffffffffff,"\n%sserial number: ",
                                       param_3);
                if (iVar1 < 0) {
                  return -0x2980;
                }
                uVar2 = (ulong)iVar1;
                if (uVar4 <= uVar2) {
                  return -0x2980;
                }
                uVar4 = uVar4 - uVar2;
                iVar1 = mbedtls_x509_serial_gets(lVar5 + uVar2,uVar4,lVar6 + 0x18);
                if (iVar1 < 0) {
                  return -0x2980;
                }
                uVar3 = (ulong)iVar1;
                if (uVar4 <= uVar3) {
                  return -0x2980;
                }
                uVar4 = uVar4 - uVar3;
                lVar5 = lVar5 + uVar2 + uVar3;
                iVar1 = __snprintf_chk(lVar5,uVar4,2,0xffffffffffffffff,
                                       " revocation date: %04d-%02d-%02d %02d:%02d:%02d",
                                       *(undefined4 *)(lVar6 + 0x30),*(undefined4 *)(lVar6 + 0x34),
                                       *(undefined4 *)(lVar6 + 0x38),*(undefined4 *)(lVar6 + 0x3c),
                                       *(undefined4 *)(lVar6 + 0x40),*(undefined4 *)(lVar6 + 0x44));
                if (iVar1 < 0) {
                  return -0x2980;
                }
                uVar2 = (ulong)iVar1;
                if (uVar4 <= uVar2) {
                  return -0x2980;
                }
                lVar6 = *(long *)(lVar6 + 0x60);
                uVar4 = uVar4 - uVar2;
                lVar5 = lVar5 + uVar2;
              } while (lVar6 != 0);
              iVar1 = __snprintf_chk(lVar5,uVar4,2,0xffffffffffffffff,"\n%ssigned using  : ",param_3
                                    );
              if ((-1 < iVar1) && (uVar2 = (ulong)iVar1, uVar2 < uVar4)) {
                uVar4 = uVar4 - uVar2;
                iVar1 = mbedtls_x509_sig_alg_gets
                                  (lVar5 + uVar2,uVar4,param_4 + 0x38,
                                   *(undefined4 *)(param_4 + 0x18c),*(undefined4 *)(param_4 + 0x188)
                                   ,*(undefined8 *)(param_4 + 400));
                if ((-1 < iVar1) && (uVar3 = (ulong)iVar1, uVar3 < uVar4)) {
                  uVar4 = uVar4 - uVar3;
                  iVar1 = snprintf((char *)(lVar5 + uVar2 + uVar3),uVar4,"\n");
                  if ((-1 < iVar1) && ((ulong)(long)iVar1 < uVar4)) {
                    local_40 = (int)param_2;
                    return local_40 - ((int)uVar4 - iVar1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return -0x2980;
}



void mbedtls_x509_crl_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x33] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x1a0U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_x509_crl_free(void *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  void *__ptr;
  
  __ptr = param_1;
  if (param_1 != (void *)0x0) {
    do {
      free(*(void **)((long)__ptr + 400));
      mbedtls_asn1_free_named_data_list_shallow(*(undefined8 *)((long)__ptr + 0x98));
      lVar3 = *(long *)((long)__ptr + 0x138);
      while (lVar3 != 0) {
        lVar1 = *(long *)(lVar3 + 0x60);
        mbedtls_zeroize_and_free(lVar3,0x68);
        lVar3 = lVar1;
      }
      if (*(long *)((long)__ptr + 0x10) != 0) {
        mbedtls_zeroize_and_free(*(long *)((long)__ptr + 0x10),*(undefined8 *)((long)__ptr + 8));
      }
      pvVar2 = *(void **)((long)__ptr + 0x198);
      mbedtls_platform_zeroize(__ptr,0x1a0);
      if (param_1 != __ptr) {
        free(__ptr);
      }
      __ptr = pvVar2;
    } while (pvVar2 != (void *)0x0);
    return;
  }
  return;
}



ulong mbedtls_x509_crl_parse_der(long param_1,long param_2,size_t param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long in_FS_OFFSET;
  byte bVar11;
  long local_c0;
  byte *local_b8;
  long local_b0;
  int local_a8;
  undefined4 uStack_a4;
  long local_a0;
  undefined1 local_98 [16];
  void *local_88;
  undefined1 local_78 [16];
  void *local_68;
  undefined1 local_58 [16];
  void *local_48;
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (byte *)0x0;
  if ((param_1 == 0) || (param_2 == 0)) {
    uVar3 = 0xffffd800;
    goto LAB_001007ec;
  }
  local_88 = (void *)0x0;
  local_68 = (void *)0x0;
  local_48 = (void *)0x0;
  local_98 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  do {
    lVar10 = param_1;
    if (*(int *)(lVar10 + 0x30) == 0) goto LAB_00100513;
    param_1 = *(long *)(lVar10 + 0x198);
  } while (*(long *)(lVar10 + 0x198) != 0);
  puVar4 = (undefined8 *)calloc(1,0x1a0);
  *(undefined8 **)(lVar10 + 0x198) = puVar4;
  if (puVar4 == (undefined8 *)0x0) {
    mbedtls_x509_crl_free(lVar10);
LAB_00100bc4:
    uVar3 = 0xffffd780;
    goto LAB_001007ec;
  }
  for (lVar2 = 0x34; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (ulong)bVar11 * -2 + 1;
  }
  lVar10 = *(long *)(lVar10 + 0x198);
LAB_00100513:
  if (param_3 == 0) {
LAB_00100b68:
    uVar3 = 0xffffde80;
    goto LAB_001007ec;
  }
  local_b8 = (byte *)calloc(1,param_3);
  if (local_b8 == (byte *)0x0) goto LAB_00100bc4;
  lVar2 = __memcpy_chk(local_b8,param_2,param_3,param_3);
  *(size_t *)(lVar10 + 8) = param_3;
  *(long *)(lVar10 + 0x10) = lVar2;
  lVar2 = param_3 + lVar2;
  iVar1 = mbedtls_asn1_get_tag(&local_b8,lVar2,&local_c0,0x30);
  if (iVar1 != 0) {
    mbedtls_x509_crl_free(lVar10);
    goto LAB_00100b68;
  }
  if (lVar2 - (long)local_b8 != local_c0) {
LAB_001007b3:
    mbedtls_x509_crl_free(lVar10);
    uVar3 = 0xffffde1a;
    goto LAB_001007ec;
  }
  *(byte **)(lVar10 + 0x28) = local_b8;
  iVar1 = mbedtls_asn1_get_tag(&local_b8,lVar2,&local_c0,0x30);
  if (iVar1 != 0) {
    mbedtls_x509_crl_free(lVar10);
    uVar3 = (ulong)(iVar1 - 0x2180);
    goto LAB_001007ec;
  }
  pbVar6 = local_b8 + local_c0;
  *(long *)(lVar10 + 0x20) = (long)pbVar6 - *(long *)(lVar10 + 0x28);
  iVar1 = mbedtls_asn1_get_int(&local_b8,pbVar6,lVar10 + 0x30);
  if (iVar1 == 0) {
LAB_001005db:
    uVar3 = mbedtls_x509_get_alg(&local_b8,pbVar6,lVar10 + 0x38,local_98);
    if ((int)uVar3 == 0) {
      if (1 < *(uint *)(lVar10 + 0x30)) {
        mbedtls_x509_crl_free(lVar10);
        uVar3 = 0xffffda80;
        goto LAB_001007ec;
      }
      *(uint *)(lVar10 + 0x30) = *(uint *)(lVar10 + 0x30) + 1;
      iVar1 = mbedtls_x509_get_sig_alg
                        (lVar10 + 0x38,local_98,lVar10 + 0x188,lVar10 + 0x18c,lVar10 + 400);
      if (iVar1 != 0) {
        mbedtls_x509_crl_free(lVar10);
        uVar3 = 0xffffda00;
        goto LAB_001007ec;
      }
      *(byte **)(lVar10 + 0x60) = local_b8;
      iVar1 = mbedtls_asn1_get_tag(&local_b8,pbVar6,&local_c0,0x30);
      if (iVar1 != 0) {
        mbedtls_x509_crl_free(lVar10);
        uVar3 = (ulong)(iVar1 - 0x2180);
        goto LAB_001007ec;
      }
      uVar3 = mbedtls_x509_get_name(&local_b8,local_b8 + local_c0,lVar10 + 0x68);
      if ((int)uVar3 == 0) {
        *(long *)(lVar10 + 0x58) = (long)local_b8 - *(long *)(lVar10 + 0x60);
        uVar3 = mbedtls_x509_get_time(&local_b8,pbVar6,lVar10 + 0xa8);
        if ((int)uVar3 == 0) {
          uVar3 = mbedtls_x509_get_time(&local_b8,pbVar6,lVar10 + 0xc0);
          if ((((int)uVar3 + 0x2462U & 0xfffffffd) == 0) || ((int)uVar3 == 0)) {
            if (pbVar6 == local_b8) {
LAB_00100714:
              pbVar6 = (byte *)(*(long *)(lVar10 + 8) + *(long *)(lVar10 + 0x10));
              uVar3 = mbedtls_x509_get_alg(&local_b8,pbVar6,local_58,local_78);
              if ((int)uVar3 == 0) {
                if ((*(size_t *)(lVar10 + 0x40) == local_58._8_8_) &&
                   (iVar1 = memcmp(*(void **)(lVar10 + 0x48),local_48,*(size_t *)(lVar10 + 0x40)),
                   iVar1 == 0)) {
                  if ((local_98._8_8_ == local_78._8_8_) &&
                     ((local_98._8_8_ == 0 ||
                      (iVar1 = memcmp(local_88,local_68,local_98._8_8_), iVar1 == 0)))) {
                    uVar3 = mbedtls_x509_get_sig(&local_b8,pbVar6,lVar10 + 0x170);
                    if ((int)uVar3 == 0) {
                      if (local_b8 == pbVar6) goto LAB_001007ec;
                      goto LAB_001007b3;
                    }
                    goto LAB_001007dc;
                  }
                }
                mbedtls_x509_crl_free(lVar10);
                uVar3 = 0xffffd980;
                goto LAB_001007ec;
              }
            }
            else {
              uVar3 = mbedtls_asn1_get_tag(&local_b8,pbVar6,&local_b0,0x30);
              if ((int)uVar3 == 0) {
                pbVar9 = local_b8 + local_b0;
                if (pbVar9 <= local_b8) goto LAB_00100700;
                pbVar8 = local_b8;
                puVar7 = (uint *)(lVar10 + 0xd8);
                do {
                  *puVar7 = (uint)*pbVar8;
                  uVar3 = mbedtls_asn1_get_tag(&local_b8,pbVar9,&local_a8,0x30);
                  if ((int)uVar3 != 0) goto LAB_001007dc;
                  *(byte **)(puVar7 + 4) = local_b8;
                  pbVar8 = local_b8 + CONCAT44(uStack_a4,local_a8);
                  *(long *)(puVar7 + 2) = CONCAT44(uStack_a4,local_a8);
                  uVar3 = mbedtls_x509_get_serial(&local_b8,pbVar8,puVar7 + 6);
                  if (((int)uVar3 != 0) ||
                     (uVar3 = mbedtls_x509_get_time(&local_b8,pbVar8,puVar7 + 0xc), (int)uVar3 != 0)
                     ) goto LAB_001007dc;
                  local_a0 = 0;
                  if (local_b8 < pbVar8) {
                    bVar11 = *local_b8;
                    *(byte **)(puVar7 + 0x16) = local_b8;
                    puVar7[0x12] = (uint)bVar11;
                    iVar1 = mbedtls_asn1_get_tag(&local_b8,pbVar8,puVar7 + 0x14,0x30);
                    if (iVar1 == 0) {
                      pbVar8 = local_b8 + *(long *)(puVar7 + 0x14);
                      for (; local_b8 < pbVar8; local_b8 = local_b8 + local_a0) {
                        iVar1 = mbedtls_asn1_get_tag(&local_b8,pbVar8,&local_a0,0x30);
                        if (iVar1 != 0) goto LAB_001008cf;
                      }
                      if (pbVar8 != local_b8) goto LAB_00100a18;
                    }
                    else if (iVar1 == -0x62) {
                      puVar7[0x16] = 0;
                      puVar7[0x17] = 0;
                    }
                    else {
LAB_001008cf:
                      uVar3 = (ulong)(iVar1 - 0x2500U);
                      if (iVar1 - 0x2500U != 0) goto LAB_001007dc;
                    }
                  }
                  pbVar8 = local_b8;
                  if (pbVar9 <= local_b8) goto LAB_00100700;
                  puVar5 = (uint *)calloc(1,0x68);
                  *(uint **)(puVar7 + 0x18) = puVar5;
                  puVar7 = puVar5;
                } while (puVar5 != (uint *)0x0);
                uVar3 = 0xffffd780;
              }
              else if ((int)uVar3 == -0x62) {
LAB_00100700:
                if (*(int *)(lVar10 + 0x30) != 2) {
LAB_0010070b:
                  if (local_b8 != pbVar6) goto LAB_001007b3;
                  goto LAB_00100714;
                }
                if (pbVar6 == local_b8) goto LAB_00100714;
                uVar3 = mbedtls_x509_get_ext(&local_b8,pbVar6,lVar10 + 0x140,0);
                if ((int)uVar3 == 0) {
                  pbVar9 = (byte *)(*(long *)(lVar10 + 0x148) + *(long *)(lVar10 + 0x150));
                  if (local_b8 < pbVar9) {
                    do {
                      local_a8 = 0;
                      iVar1 = mbedtls_asn1_get_tag(&local_b8,pbVar9,&local_a0,0x30);
                      if (iVar1 != 0) {
LAB_00100b49:
                        uVar3 = (ulong)(iVar1 - 0x2500U);
                        if (iVar1 - 0x2500U != 0) goto LAB_001007dc;
                        goto LAB_0010070b;
                      }
                      pbVar8 = local_b8 + local_a0;
                      iVar1 = mbedtls_asn1_get_tag(&local_b8,pbVar8,&local_a0,6);
                      if (iVar1 != 0) goto LAB_00100b49;
                      local_b8 = local_b8 + local_a0;
                      iVar1 = mbedtls_asn1_get_bool(&local_b8,pbVar8,&local_a8);
                      if (((iVar1 != 0) && (iVar1 != -0x62)) ||
                         (iVar1 = mbedtls_asn1_get_tag(&local_b8,pbVar8,&local_a0,4), iVar1 != 0))
                      goto LAB_00100b49;
                      local_b8 = local_b8 + local_a0;
                      if (pbVar8 != local_b8) goto LAB_00100a18;
                      if (local_a8 != 0) {
                        uVar3 = 0xffffda9e;
                        goto LAB_001007dc;
                      }
                    } while (local_b8 < pbVar9);
                  }
                  if (local_b8 == pbVar9) goto LAB_0010070b;
LAB_00100a18:
                  uVar3 = 0xffffda9a;
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    if (iVar1 == -0x62) {
      *(undefined4 *)(lVar10 + 0x30) = 0;
      goto LAB_001005db;
    }
    uVar3 = (ulong)(iVar1 - 0x2200U);
    if (iVar1 - 0x2200U == 0) goto LAB_001005db;
  }
LAB_001007dc:
  mbedtls_x509_crl_free(lVar10);
  uVar3 = uVar3 & 0xffffffff;
LAB_001007ec:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_x509_crl_parse(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar3 = -0x2800;
  }
  else {
    mbedtls_pem_init(&local_58);
    if (param_3 != 0) {
      bVar1 = false;
      while (*(char *)(param_2 + -1 + param_3) == '\0') {
        iVar3 = mbedtls_pem_read_buffer
                          (&local_58,"-----BEGIN X509 CRL-----","-----END X509 CRL-----",param_2,0,0
                           ,&local_60);
        lVar2 = local_60;
        if (iVar3 != 0) goto LAB_00100c48;
        iVar3 = mbedtls_x509_crl_parse_der(param_1,local_58,local_50);
        param_3 = param_3 - lVar2;
        if (iVar3 != 0) goto LAB_00100c50;
        mbedtls_pem_free(&local_58);
        if (param_3 < 2) goto LAB_00100c79;
        param_2 = param_2 + lVar2;
        bVar1 = true;
        mbedtls_pem_init(&local_58);
      }
      iVar3 = -0x1080;
LAB_00100c48:
      if (bVar1) {
LAB_00100c50:
        mbedtls_pem_free(&local_58);
        goto LAB_00100c79;
      }
    }
    mbedtls_pem_free(&local_58);
    iVar3 = mbedtls_x509_crl_parse_der(param_1,param_2,param_3);
  }
LAB_00100c79:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



int mbedtls_x509_crl_parse_file(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_pk_load_file(param_2,&local_28,&local_30);
  if (iVar1 == 0) {
    iVar1 = mbedtls_x509_crl_parse(param_1,local_28,local_30);
    mbedtls_zeroize_and_free(local_28,local_30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


