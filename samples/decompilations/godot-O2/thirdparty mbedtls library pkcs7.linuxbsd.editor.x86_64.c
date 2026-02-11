
ulong mbedtls_pkcs7_data_or_hash_verify
                (long param_1,long param_2,undefined8 param_3,ulong param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  void *__ptr;
  long in_FS_OFFSET;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_58 = *(undefined8 *)(param_2 + 0x168);
  uStack_50 = *(undefined8 *)(param_2 + 0x170);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x4d0) == 0) {
    uVar8 = 0xffffaa80;
    goto LAB_00100082;
  }
  iVar6 = mbedtls_x509_time_is_past(param_2 + 0x138);
  if ((iVar6 != 0) || (iVar6 = mbedtls_x509_time_is_future(param_2 + 0x120), iVar6 != 0)) {
    uVar8 = 0xffffa780;
    goto LAB_00100082;
  }
  uVar8 = mbedtls_oid_get_md_alg(param_1 + 0x20,&local_5c);
  if ((int)uVar8 != 0) goto LAB_00100082;
  lVar9 = mbedtls_md_info_from_type(local_5c);
  if (lVar9 == 0) {
LAB_001001b0:
    uVar8 = 0xffffa800;
  }
  else {
    bVar3 = mbedtls_md_get_size(lVar9);
    __ptr = calloc((ulong)bVar3,1);
    if (__ptr == (void *)0x0) {
      uVar8 = 0xffffa880;
      goto LAB_00100082;
    }
    if (param_5 == 0) {
      iVar6 = mbedtls_md(lVar9,param_3,param_4,__ptr);
      if (iVar6 != 0) goto LAB_001001a8;
    }
    else {
      bVar4 = mbedtls_md_get_size(lVar9);
      if (bVar4 != param_4) {
LAB_001001a8:
        free(__ptr);
        goto LAB_001001b0;
      }
      __memcpy_chk(__ptr,param_3,(ulong)bVar4,(ulong)bVar3);
    }
    param_1 = param_1 + 0x4d8;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0xb0);
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
      uVar5 = mbedtls_md_get_size(lVar9);
      uVar7 = mbedtls_pk_verify(&local_58,local_5c,__ptr,uVar5,uVar2,uVar1);
      if (uVar7 == 0) break;
      param_1 = *(long *)(param_1 + 0xc0);
    } while (param_1 != 0);
    free(__ptr);
    uVar8 = (ulong)uVar7;
  }
LAB_00100082:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



int pkcs7_get_signer_info(long *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  void *pvVar1;
  void *__ptr;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  iVar2 = mbedtls_asn1_get_tag(param_1,param_2,&local_50,0x30);
  if (iVar2 == 0) {
    lVar4 = local_50 + *param_1;
    iVar2 = mbedtls_asn1_get_int(param_1,lVar4,param_3);
    if (iVar2 == 0) {
      if (*param_3 == 1) {
LAB_001002a1:
        iVar2 = mbedtls_asn1_get_tag(param_1,lVar4,&local_50,0x30);
        if (iVar2 == 0) {
          lVar3 = *param_1;
          *(long *)(param_3 + 0x1c) = lVar3;
          lVar3 = local_50 + lVar3;
          iVar2 = mbedtls_asn1_get_tag(param_1,lVar3,&local_50,0x30);
          if (iVar2 == 0) {
            iVar2 = mbedtls_x509_get_name(param_1,local_50 + *param_1,param_3 + 8);
            if (iVar2 == 0) {
              *(long *)(param_3 + 0x1a) = *param_1 - *(long *)(param_3 + 0x1c);
              iVar2 = mbedtls_x509_get_serial(param_1,lVar3,param_3 + 2);
              if ((((iVar2 == 0) && (*param_1 == lVar3)) &&
                  ((iVar2 = mbedtls_asn1_get_alg_null(param_1,lVar4,param_3 + 0x1e), iVar2 == 0 ||
                   (iVar2 == 0x5500)))) &&
                 ((((param_3[0x1e] == *param_4 &&
                    (*(size_t *)(param_3 + 0x20) == *(size_t *)(param_4 + 2))) &&
                   (iVar2 = memcmp(*(void **)(param_3 + 0x22),*(void **)(param_4 + 4),
                                   *(size_t *)(param_4 + 2)), iVar2 == 0)) &&
                  ((iVar2 = mbedtls_asn1_get_alg_null(param_1,lVar4,param_3 + 0x24), iVar2 == 0 ||
                   (iVar2 == 0x5500)))))) {
                local_48 = 0;
                iVar2 = mbedtls_asn1_get_tag(param_1,lVar4,&local_48,4);
                if (iVar2 == 0) {
                  lVar3 = *param_1;
                  param_3[0x2a] = 4;
                  *(long *)(param_3 + 0x2e) = lVar3;
                  lVar3 = lVar3 + local_48;
                  *(long *)(param_3 + 0x2c) = local_48;
                  *param_1 = lVar3;
                  if (lVar4 == lVar3) {
                    iVar2 = 0;
                    goto LAB_0010025a;
                  }
                }
              }
            }
            goto LAB_001002d6;
          }
        }
        iVar2 = iVar2 + -0x5680;
        goto LAB_00100231;
      }
    }
    else if ((*param_3 == 1) && (iVar2 == 0x5400)) goto LAB_001002a1;
LAB_001002d6:
    iVar2 = -0x5680;
  }
  else {
    iVar2 = iVar2 + -0x5680;
    if (param_3 == (int *)0x0) goto LAB_0010025a;
  }
LAB_00100231:
  __ptr = *(void **)(param_3 + 0x14);
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)__ptr + 0x30);
    free(__ptr);
    __ptr = pvVar1;
  }
  param_3[0x14] = 0;
  param_3[0x15] = 0;
LAB_0010025a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_pkcs7_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0xb3] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x5a0U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



undefined8 mbedtls_pkcs7_signed_data_verify(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = mbedtls_pkcs7_data_or_hash_verify();
    return uVar1;
  }
  return 0xffffa900;
}



undefined8 mbedtls_pkcs7_signed_hash_verify(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = mbedtls_pkcs7_data_or_hash_verify();
    return uVar1;
  }
  return 0xffffa900;
}



void mbedtls_pkcs7_free(long param_1)

{
  void *__ptr;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    free(*(void **)(param_1 + 0x10));
    mbedtls_x509_crt_free(param_1 + 0x40);
    mbedtls_x509_crl_free(param_1 + 0x330);
    __ptr = *(void **)(param_1 + 0x598);
    pvVar2 = *(void **)(param_1 + 0x528);
    while (pvVar2 != (void *)0x0) {
      pvVar1 = *(void **)((long)pvVar2 + 0x30);
      free(pvVar2);
      pvVar2 = pvVar1;
    }
    *(undefined8 *)(param_1 + 0x528) = 0;
    while (__ptr != (void *)0x0) {
      pvVar2 = *(void **)((long)__ptr + 0xc0);
      pvVar1 = *(void **)((long)__ptr + 0x50);
      while (pvVar1 != (void *)0x0) {
        pvVar3 = *(void **)((long)pvVar1 + 0x30);
        free(pvVar1);
        pvVar1 = pvVar3;
      }
      free(__ptr);
      __ptr = pvVar2;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}



int mbedtls_pkcs7_parse_der(long param_1,undefined8 param_2,size_t param_3)

{
  long lVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  void *__ptr;
  int iVar4;
  long *plVar5;
  void *pvVar6;
  void *pvVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long in_FS_OFFSET;
  undefined1 local_8c [4];
  long *local_88;
  size_t local_80;
  long *local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined1 local_58 [16];
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if (param_1 == 0) {
    iVar9 = -0x5700;
    goto LAB_00100643;
  }
  plVar5 = (long *)calloc(1,param_3);
  *(long **)(param_1 + 0x10) = plVar5;
  local_88 = plVar5;
  if (plVar5 == (long *)0x0) {
    iVar9 = -0x5780;
  }
  else {
    __memcpy_chk(plVar5,param_2,param_3,param_3);
    *(size_t *)(param_1 + 8) = param_3;
    plVar5 = (long *)((long)plVar5 + param_3);
    iVar4 = mbedtls_asn1_get_tag(&local_88,plVar5,&local_80,0x30);
    iVar9 = iVar4 + -0x5300;
    if (iVar4 == 0) {
      if ((long)plVar5 - (long)local_88 != local_80) {
LAB_00100635:
        iVar9 = -0x5366;
        goto LAB_0010063b;
      }
      iVar9 = mbedtls_asn1_get_tag(&local_88,plVar5,&local_80,6);
      if (iVar9 == 0) {
        if (local_80 == 9) {
          if ((*local_88 == 0x7010df78648862a) && ((char)local_88[1] == '\x02')) {
            local_88 = (long *)((long)local_88 + 9);
            iVar9 = mbedtls_asn1_get_tag(&local_88,plVar5,&local_80,0xa0);
            if (iVar9 == 0) {
              if ((long)plVar5 - (long)local_88 != local_80) {
                iVar9 = -0x54e6;
                goto LAB_0010063b;
              }
            }
            else {
              iVar9 = iVar9 + -0x5480;
              if (iVar9 != 0) goto LAB_00100730;
            }
            if (plVar5 == (long *)(local_80 + (long)local_88)) goto LAB_001007b2;
          }
          else if (((((*local_88 == 0x7010df78648862a) && ((char)local_88[1] == '\x01')) ||
                    ((*local_88 == 0x7010df78648862a && ((char)local_88[1] == '\x06')))) ||
                   ((*local_88 == 0x7010df78648862a && ((char)local_88[1] == '\x03')))) ||
                  (((*local_88 == 0x7010df78648862a && ((char)local_88[1] == '\x04')) ||
                   ((*local_88 == 0x7010df78648862a && ((char)local_88[1] == '\x05'))))))
          goto LAB_00100717;
        }
        iVar9 = -0x5700;
        goto LAB_0010063b;
      }
      if (iVar9 != -0x62) goto LAB_00100730;
      local_88 = *(long **)(param_1 + 0x10);
      plVar5 = (long *)((long)local_88 + param_3);
      local_80 = param_3;
LAB_001007b2:
      local_70 = 0;
      local_78 = local_88;
      iVar4 = mbedtls_asn1_get_tag(&local_78,plVar5,&local_70,0x30);
      iVar9 = iVar4 + -0x5300;
      if (iVar4 != 0) {
LAB_00100958:
        if (iVar9 != 0) goto LAB_00100730;
LAB_00100961:
        iVar9 = 2;
        goto LAB_00100643;
      }
      if (plVar5 != (long *)(local_70 + (long)local_78)) goto LAB_00100635;
      iVar9 = mbedtls_asn1_get_int(&local_78,plVar5,param_1 + 0x18);
      if (iVar9 == 0) {
        if (*(int *)(param_1 + 0x18) != 1) {
LAB_00100c74:
          iVar9 = -0x5400;
          goto LAB_0010063b;
        }
      }
      else {
        iVar9 = iVar9 + -0x5400;
        if (*(int *)(param_1 + 0x18) != 1) goto LAB_00100c74;
        if (iVar9 != 0) goto LAB_00100730;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_58._8_8_;
      local_58 = auVar3 << 0x40;
      lVar1 = param_1 + 0x20;
      iVar9 = mbedtls_asn1_get_tag(&local_78,plVar5,local_58,0x31);
      if (iVar9 == 0) {
        plVar10 = (long *)(local_58._0_8_ + (long)local_78);
        iVar9 = mbedtls_asn1_get_alg_null(&local_78,plVar10,lVar1);
        if (iVar9 != 0) goto LAB_001009c7;
        if (plVar10 != local_78) goto LAB_00100717;
      }
      else {
LAB_001009c7:
        iVar9 = iVar9 + -0x5500;
        if (iVar9 != 0) goto LAB_00100730;
      }
      iVar9 = -0x5500;
      iVar4 = mbedtls_oid_get_md_alg(lVar1,local_8c);
      if (iVar4 != 0) goto LAB_0010063b;
      local_48 = (long *)0x0;
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      iVar9 = mbedtls_asn1_get_tag(&local_78,plVar5,&local_60,0x30);
      if (iVar9 == 0) {
        plVar10 = (long *)(local_60 + (long)local_78);
        iVar9 = mbedtls_asn1_get_tag(&local_78,plVar10,&local_60,6);
        if (iVar9 != 0) goto LAB_001009fa;
        local_58._0_4_ = 6;
        plVar8 = (long *)((long)local_78 + local_60);
        local_58._8_8_ = local_60;
        local_48 = local_78;
        if (((local_60 == 9) && (*local_78 == 0x7010df78648862a)) && ((char)local_78[1] == '\x01'))
        {
          iVar9 = 0;
          local_78 = plVar8;
          if (plVar10 == plVar8) {
            mbedtls_x509_crt_init(param_1 + 0x40);
            local_68 = 0;
            local_60 = 0;
            iVar4 = mbedtls_asn1_get_tag(&local_78,plVar5,&local_68);
            plVar10 = local_78;
            if (iVar4 != -0x62) {
              iVar9 = iVar4 + -0x5300;
              if (iVar4 == 0) {
                plVar8 = (long *)(local_68 + (long)local_78);
                iVar9 = mbedtls_asn1_get_tag(&local_78,plVar8,&local_60);
                if (iVar9 == 0) {
                  if (plVar8 != (long *)(local_60 + (long)local_78)) goto LAB_00100717;
                  iVar9 = mbedtls_x509_crt_parse_der(param_1 + 0x40,plVar10,local_68);
                  if (iVar9 < 0) {
                    iVar9 = -0x5580;
                    goto LAB_0010063b;
                  }
                  iVar9 = 1;
                  local_78 = plVar8;
                  goto LAB_00100b15;
                }
                iVar9 = iVar9 + -0x5580;
              }
              if (iVar9 < 0) goto LAB_0010063b;
            }
LAB_00100b15:
            *(int *)(param_1 + 0x38) = iVar9;
            *(undefined4 *)(param_1 + 0x328) = 0;
            local_60 = 0;
            iVar9 = mbedtls_asn1_get_tag(&local_78,plVar5,&local_60,0x31);
            if (iVar9 == 0) {
              iVar9 = 0;
              if (local_60 != 0) {
                plVar10 = (long *)(local_60 + (long)local_78);
                iVar9 = pkcs7_get_signer_info(&local_78,plVar10,(void *)(param_1 + 0x4d8),lVar1);
                if (iVar9 != 0) goto LAB_00100c9b;
                iVar9 = 1;
                pvVar7 = (void *)(param_1 + 0x4d8);
                while (plVar10 != local_78) {
                  pvVar6 = calloc(1,200);
                  if (pvVar6 == (void *)0x0) {
                    iVar9 = -0x5780;
LAB_00100c03:
                    pvVar7 = *(void **)(param_1 + 0x528);
                    while (pvVar7 != (void *)0x0) {
                      pvVar6 = *(void **)((long)pvVar7 + 0x30);
                      free(pvVar7);
                      pvVar7 = pvVar6;
                    }
                    *(undefined8 *)(param_1 + 0x528) = 0;
                    pvVar7 = *(void **)(param_1 + 0x598);
                    while (pvVar7 != (void *)0x0) {
                      pvVar6 = *(void **)((long)pvVar7 + 0xc0);
                      __ptr = *(void **)((long)pvVar7 + 0x50);
                      while (__ptr != (void *)0x0) {
                        pvVar2 = *(void **)((long)__ptr + 0x30);
                        free(__ptr);
                        __ptr = pvVar2;
                      }
                      free(pvVar7);
                      pvVar7 = pvVar6;
                    }
                    *(undefined8 *)(param_1 + 0x598) = 0;
                    goto LAB_00100c9b;
                  }
                  iVar4 = pkcs7_get_signer_info(&local_78,plVar10,pvVar6,lVar1);
                  if (iVar4 != 0) {
                    free(pvVar6);
                    iVar9 = iVar4;
                    goto LAB_00100c03;
                  }
                  iVar9 = iVar9 + 1;
                  *(void **)((long)pvVar7 + 0xc0) = pvVar6;
                  pvVar7 = pvVar6;
                }
              }
            }
            else {
              iVar9 = iVar9 + -0x5680;
LAB_00100c9b:
              if (iVar9 < 0) goto LAB_0010063b;
            }
            *(int *)(param_1 + 0x4d0) = iVar9;
            iVar9 = -0x5300;
            if (local_78 != plVar5) goto LAB_0010063b;
            goto LAB_00100961;
          }
          iVar4 = mbedtls_asn1_get_tag(&local_78,plVar10,&local_70,0xa0);
          iVar9 = iVar4 + -0x5480;
          if (iVar4 != 0) goto LAB_00100958;
          plVar8 = local_78;
          if (plVar10 == (long *)(local_70 + (long)local_78)) {
LAB_00100717:
            iVar9 = -0x5380;
            goto LAB_0010063b;
          }
        }
      }
      else {
LAB_001009fa:
        iVar9 = iVar9 + -0x5480;
        plVar8 = local_78;
        if (iVar9 != 0) goto LAB_00100730;
      }
      local_78 = plVar8;
      iVar9 = -0x5480;
    }
    else {
LAB_00100730:
      if (-1 < iVar9) goto LAB_00100643;
    }
  }
LAB_0010063b:
  mbedtls_pkcs7_free(param_1);
LAB_00100643:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}


