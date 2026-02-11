
void mbedtls_x509_csr_free_part_0(long param_1)

{
  mbedtls_pk_free(param_1 + 0x90);
  free(*(void **)(param_1 + 0x108));
  mbedtls_asn1_free_named_data_list_shallow(*(undefined8 *)(param_1 + 0x80));
  mbedtls_asn1_sequence_free(*(undefined8 *)(param_1 + 0xc0));
  if (*(long *)(param_1 + 0x10) != 0) {
    mbedtls_zeroize_and_free(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
  }
  mbedtls_platform_zeroize(param_1,0x110);
  return;
}



ulong mbedtls_x509_csr_parse_der_internal
                (undefined8 *param_1,long param_2,size_t param_3,code *param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long in_FS_OFFSET;
  int local_c8;
  uint local_c4;
  size_t local_c0;
  long *local_b8;
  long *local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 local_78;
  long local_70;
  long *local_68;
  undefined4 local_58 [2];
  long local_50;
  long *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  if ((param_2 == 0 || param_3 == 0) || (param_1 == (undefined8 *)0x0)) {
    uVar3 = 0xffffd800;
    goto LAB_00100548;
  }
  *param_1 = 0;
  param_1[0x21] = 0;
  puVar4 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x110U >> 3
                      ); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  local_c0 = param_3;
  local_b8 = (long *)calloc(1,param_3);
  if (local_b8 == (long *)0x0) {
    uVar3 = 0xffffd780;
    goto LAB_00100548;
  }
  lVar2 = __memcpy_chk(local_b8,param_2,param_3,param_3);
  param_1[1] = param_3;
  param_1[2] = lVar2;
  lVar2 = param_3 + lVar2;
  iVar1 = mbedtls_asn1_get_tag(&local_b8,lVar2,&local_c0,0x30);
  if (iVar1 != 0) {
    mbedtls_x509_csr_free_part_0(param_1);
    uVar3 = 0xffffde80;
    goto LAB_00100548;
  }
  if (lVar2 - (long)local_b8 != local_c0) {
LAB_00100720:
    mbedtls_x509_csr_free_part_0(param_1);
    uVar3 = 0xffffde1a;
    goto LAB_00100548;
  }
  param_1[5] = local_b8;
  iVar1 = mbedtls_asn1_get_tag(&local_b8,lVar2,&local_c0,0x30);
  if (iVar1 == 0) {
    lVar2 = local_c0 + (long)local_b8;
    param_1[4] = lVar2 - param_1[5];
    iVar1 = mbedtls_asn1_get_int(&local_b8,lVar2,param_1 + 6);
    if (iVar1 == 0) {
LAB_001001bc:
      if (*(int *)(param_1 + 6) != 0) {
        mbedtls_x509_csr_free_part_0(param_1);
        uVar3 = 0xffffda80;
        goto LAB_00100548;
      }
LAB_001001c8:
      *(undefined4 *)(param_1 + 6) = 1;
      param_1[9] = local_b8;
      iVar1 = mbedtls_asn1_get_tag(&local_b8,lVar2,&local_c0,0x30);
      if (iVar1 != 0) {
        mbedtls_x509_csr_free_part_0(param_1);
        uVar3 = (ulong)(iVar1 - 0x2180);
        goto LAB_00100548;
      }
      uVar3 = mbedtls_x509_get_name(&local_b8,local_c0 + (long)local_b8,param_1 + 10);
      if ((int)uVar3 == 0) {
        param_1[8] = (long)local_b8 - param_1[9];
        uVar3 = mbedtls_pk_parse_subpubkey(&local_b8,lVar2,param_1 + 0x12);
        if ((int)uVar3 == 0) {
          iVar1 = mbedtls_asn1_get_tag(&local_b8,lVar2,&local_c0,0xa0);
          if (iVar1 != 0) goto LAB_00100590;
          plVar9 = (long *)(local_c0 + (long)local_b8);
          local_b0 = local_b8;
          plVar6 = local_b8;
          if (local_b8 < plVar9) {
            do {
              local_78 = 0;
              local_70 = 0;
              local_68 = (long *)0x0;
              iVar1 = mbedtls_asn1_get_tag(&local_b0,plVar9,&local_a8,0x30);
              if (iVar1 != 0) {
LAB_00100680:
                uVar3 = (ulong)(iVar1 - 0x2500U);
                if (iVar1 - 0x2500U == 0) goto LAB_00100692;
                goto LAB_00100538;
              }
              plVar6 = (long *)(local_a8 + (long)local_b0);
              iVar1 = mbedtls_asn1_get_tag(&local_b0,plVar6,&local_70,6);
              if (iVar1 != 0) goto LAB_00100680;
              local_68 = local_b0;
              local_78 = 6;
              if (((local_70 == 9) && (*local_b0 == 0x9010df78648862a)) &&
                 ((char)local_b0[1] == '\x0e')) {
                local_b0 = (long *)((long)local_b0 + local_70);
                iVar1 = mbedtls_asn1_get_tag(&local_b0,plVar9,&local_a8,0x31);
                if ((iVar1 != 0) ||
                   (iVar1 = mbedtls_asn1_get_tag(&local_b0,plVar9,&local_a8,0x30), iVar1 != 0))
                goto LAB_00100680;
                plVar5 = (long *)(local_a8 + (long)local_b0);
                plVar7 = local_b0;
                if (local_b0 < plVar5) {
                  do {
                    local_58[0] = 0;
                    local_50 = 0;
                    local_48 = (long *)0x0;
                    local_c8 = 0;
                    local_c4 = 0;
                    iVar1 = mbedtls_asn1_get_tag(&local_b0,plVar5,&local_a0,0x30);
                    if (iVar1 != 0) {
LAB_00100790:
                      uVar3 = (ulong)(iVar1 - 0x2500U);
                      if (iVar1 - 0x2500U == 0) goto LAB_001005d9;
                      goto LAB_00100538;
                    }
                    plVar8 = (long *)(local_a0 + (long)local_b0);
                    iVar1 = mbedtls_asn1_get_tag(&local_b0,plVar8,&local_50,6);
                    if (iVar1 != 0) goto LAB_00100790;
                    local_58[0] = 6;
                    local_48 = local_b0;
                    local_b0 = (long *)((long)local_b0 + local_50);
                    iVar1 = mbedtls_asn1_get_bool(&local_b0,plVar8,&local_c8);
                    if (((iVar1 != -0x62) && (iVar1 != 0)) ||
                       (iVar1 = mbedtls_asn1_get_tag(&local_b0,plVar8,&local_a0,4), iVar1 != 0))
                    goto LAB_00100790;
                    plVar7 = (long *)(local_a0 + (long)local_b0);
                    if (plVar8 != plVar7) goto LAB_001005e4;
                    iVar1 = mbedtls_oid_get_x509_ext_type(local_58,&local_c4);
                    if (iVar1 == 0) {
                      if ((*(uint *)(param_1 + 0x19) & local_c4) != 0) {
                        uVar3 = 0xffffda98;
                        goto LAB_00100538;
                      }
                      *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) | local_c4;
                      if (local_c4 == 0x20) {
                        uVar3 = mbedtls_x509_get_subject_alt_name(&local_b0,plVar7,param_1 + 0x15);
                        plVar7 = local_b0;
                        iVar1 = (int)uVar3;
                      }
                      else if (local_c4 == 0x10000) {
                        uVar3 = mbedtls_x509_get_ns_cert_type(&local_b0,plVar7,(long)param_1 + 0xa4)
                        ;
                        plVar7 = local_b0;
                        iVar1 = (int)uVar3;
                      }
                      else {
                        if (local_c4 != 4) {
                          plVar8 = plVar7;
                          if (local_c8 == 0) goto LAB_001005b1;
                          uVar3 = 0xffffdf80;
                          goto LAB_00100538;
                        }
                        uVar3 = mbedtls_x509_get_key_usage(&local_b0,plVar7,param_1 + 0x14);
                        plVar7 = local_b0;
                        iVar1 = (int)uVar3;
                      }
joined_r0x00100774:
                      plVar8 = plVar7;
                      if (iVar1 != 0) goto LAB_00100538;
                    }
                    else if (param_4 == (code *)0x0) {
                      if (local_c8 != 0) {
                        uVar3 = 0xffffda9e;
                        local_b0 = plVar8;
                        goto LAB_00100538;
                      }
                    }
                    else {
                      uVar3 = (*param_4)(param_5,param_1,local_58,local_c8,local_b0,plVar7);
                      plVar8 = plVar7;
                      iVar1 = local_c8;
                      if ((int)uVar3 != 0) goto joined_r0x00100774;
                    }
LAB_001005b1:
                    local_b0 = plVar8;
                  } while (plVar7 < plVar5);
                }
                if (plVar5 != plVar7) goto LAB_001005e4;
LAB_001005d9:
                if (plVar6 != local_b0) goto LAB_001005e4;
              }
              local_b0 = plVar6;
            } while (plVar6 < plVar9);
          }
          local_b0 = plVar6;
          if (plVar9 == plVar6) {
LAB_00100692:
            plVar6 = (long *)(param_1[1] + param_1[2]);
            local_b8 = (long *)((long)local_b8 + local_c0);
            uVar3 = mbedtls_x509_get_alg(&local_b8,plVar6,param_1 + 0x1a,local_98);
            if ((int)uVar3 == 0) {
              iVar1 = mbedtls_x509_get_sig_alg
                                (param_1 + 0x1a,local_98,param_1 + 0x20,(long)param_1 + 0x104,
                                 param_1 + 0x21);
              if (iVar1 != 0) {
                mbedtls_x509_csr_free_part_0(param_1);
                uVar3 = 0xffffda00;
                goto LAB_00100548;
              }
              uVar3 = mbedtls_x509_get_sig(&local_b8,plVar6,param_1 + 0x1d);
              if ((int)uVar3 == 0) {
                if (local_b8 == plVar6) goto LAB_00100548;
                goto LAB_00100720;
              }
            }
          }
          else {
LAB_001005e4:
            uVar3 = 0xffffda9a;
          }
        }
      }
    }
    else {
      if (iVar1 == -0x62) goto LAB_001001c8;
      uVar3 = (ulong)(iVar1 - 0x2200U);
      if (iVar1 - 0x2200U == 0) goto LAB_001001bc;
    }
LAB_00100538:
    mbedtls_x509_csr_free_part_0(param_1);
    uVar3 = uVar3 & 0xffffffff;
  }
  else {
LAB_00100590:
    mbedtls_x509_csr_free_part_0(param_1);
    uVar3 = (ulong)(iVar1 - 0x2180);
  }
LAB_00100548:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_x509_csr_parse_der(void)

{
  mbedtls_x509_csr_parse_der_internal();
  return;
}



void mbedtls_x509_csr_parse_der_with_ext_cb(void)

{
  mbedtls_x509_csr_parse_der_internal();
  return;
}



int mbedtls_x509_csr_parse(long param_1,long param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == 0 || param_3 == 0) || (param_1 == 0)) {
    iVar1 = -0x2800;
    goto LAB_00100973;
  }
  if (*(char *)(param_2 + -1 + param_3) == '\0') {
    mbedtls_pem_init(&local_58);
    iVar1 = mbedtls_pem_read_buffer
                      (&local_58,"-----BEGIN CERTIFICATE REQUEST-----",
                       "-----END CERTIFICATE REQUEST-----",param_2,0,0,local_60);
    if (iVar1 == -0x1080) {
      iVar1 = mbedtls_pem_read_buffer
                        (&local_58,"-----BEGIN NEW CERTIFICATE REQUEST-----",
                         "-----END NEW CERTIFICATE REQUEST-----",param_2,0,0,local_60);
      if (iVar1 == 0) goto LAB_00100935;
    }
    else {
      if (iVar1 != 0) {
        mbedtls_pem_free(&local_58,0x1008c1);
        goto LAB_00100973;
      }
LAB_00100935:
      iVar1 = mbedtls_x509_csr_parse_der_internal(param_1,local_58,local_50,0,0);
    }
    mbedtls_pem_free(&local_58);
    if (iVar1 != -0x1080) goto LAB_00100973;
  }
  iVar1 = mbedtls_x509_csr_parse_der_internal(param_1,param_2,param_3,0,0);
LAB_00100973:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_x509_csr_parse_file(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_pk_load_file(param_2,&local_28,&local_30);
  if (iVar1 == 0) {
    iVar1 = mbedtls_x509_csr_parse(param_1,local_28,local_30);
    mbedtls_zeroize_and_free(local_28,local_30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_x509_csr_info(char *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong local_50;
  char *local_48;
  undefined1 local_3e [14];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = param_2;
  local_48 = param_1;
  iVar1 = __snprintf_chk(param_1,param_2,2,0xffffffffffffffff,"%sCSR version   : %d",param_3,
                         *(undefined4 *)(param_4 + 0x30));
  if (-1 < iVar1) {
    uVar4 = (ulong)iVar1;
    if (uVar4 < local_50) {
      local_50 = local_50 - uVar4;
      local_48 = local_48 + uVar4;
      iVar1 = __snprintf_chk(local_48,local_50,2,0xffffffffffffffff,"\n%ssubject name  : ",param_3);
      if (-1 < iVar1) {
        uVar4 = (ulong)iVar1;
        if (uVar4 < local_50) {
          local_50 = local_50 - uVar4;
          local_48 = local_48 + uVar4;
          iVar1 = mbedtls_x509_dn_gets(local_48,local_50,param_4 + 0x50);
          if (-1 < iVar1) {
            uVar4 = (ulong)iVar1;
            if (uVar4 < local_50) {
              local_50 = local_50 - uVar4;
              local_48 = local_48 + uVar4;
              iVar1 = __snprintf_chk(local_48,local_50,2,0xffffffffffffffff,"\n%ssigned using  : ",
                                     param_3);
              if (-1 < iVar1) {
                uVar4 = (ulong)iVar1;
                if (uVar4 < local_50) {
                  local_50 = local_50 - uVar4;
                  local_48 = local_48 + uVar4;
                  iVar1 = mbedtls_x509_sig_alg_gets
                                    (local_48,local_50,param_4 + 0xd0,
                                     *(undefined4 *)(param_4 + 0x104),
                                     *(undefined4 *)(param_4 + 0x100),
                                     *(undefined8 *)(param_4 + 0x108));
                  if (-1 < iVar1) {
                    uVar4 = (ulong)iVar1;
                    if (uVar4 < local_50) {
                      local_50 = local_50 - uVar4;
                      local_48 = local_48 + uVar4;
                      uVar3 = mbedtls_pk_get_name(param_4 + 0x90);
                      uVar4 = mbedtls_x509_key_size_helper(local_3e,0xe,uVar3);
                      if ((int)uVar4 != 0) goto LAB_00100be2;
                      uVar3 = mbedtls_pk_get_bitlen(param_4 + 0x90);
                      iVar1 = __snprintf_chk(local_48,local_50,2,0xffffffffffffffff,
                                             "\n%s%-14s: %d bits\n",param_3,local_3e,uVar3);
                      if (-1 < iVar1) {
                        uVar4 = (ulong)iVar1;
                        if (uVar4 < local_50) {
                          uVar2 = *(uint *)(param_4 + 200);
                          local_50 = local_50 - uVar4;
                          local_48 = local_48 + uVar4;
                          if ((uVar2 & 0x20) == 0) {
LAB_00100c6d:
                            if ((uVar2 & 0x10000) == 0) {
LAB_00100c78:
                              if ((uVar2 & 4) == 0) {
LAB_00100c80:
                                uVar4 = local_50;
                                if (uVar2 == 0) {
LAB_00100c84:
                                  uVar4 = (ulong)(uint)((int)param_2 - (int)uVar4);
                                  goto LAB_00100be2;
                                }
                                iVar1 = snprintf(local_48,local_50,"\n");
                                if (-1 < iVar1) {
                                  if ((ulong)(long)iVar1 < local_50) {
                                    uVar4 = local_50 - (long)iVar1;
                                    goto LAB_00100c84;
                                  }
                                }
                              }
                              else {
                                iVar1 = __snprintf_chk(local_48,local_50,2,0xffffffffffffffff,
                                                       "\n%skey usage         : ",param_3);
                                if (-1 < iVar1) {
                                  uVar4 = (ulong)iVar1;
                                  if (uVar4 < local_50) {
                                    local_50 = local_50 - uVar4;
                                    local_48 = local_48 + uVar4;
                                    uVar4 = mbedtls_x509_info_key_usage
                                                      (&local_48,&local_50,
                                                       *(undefined4 *)(param_4 + 0xa0));
                                    if ((int)uVar4 != 0) goto LAB_00100be2;
                                    uVar2 = *(uint *)(param_4 + 200);
                                    goto LAB_00100c80;
                                  }
                                }
                              }
                            }
                            else {
                              iVar1 = __snprintf_chk(local_48,local_50,2,0xffffffffffffffff,
                                                     "\n%scert. type        : ",param_3);
                              if (-1 < iVar1) {
                                uVar4 = (ulong)iVar1;
                                if (uVar4 < local_50) {
                                  local_50 = local_50 - uVar4;
                                  local_48 = local_48 + uVar4;
                                  uVar4 = mbedtls_x509_info_cert_type
                                                    (&local_48,&local_50,
                                                     *(undefined1 *)(param_4 + 0xa4));
                                  if ((int)uVar4 != 0) goto LAB_00100be2;
                                  uVar2 = *(uint *)(param_4 + 200);
                                  goto LAB_00100c78;
                                }
                              }
                            }
                          }
                          else {
                            iVar1 = __snprintf_chk(local_48,local_50,2,0xffffffffffffffff,
                                                   "\n%ssubject alt name  :",param_3);
                            if (-1 < iVar1) {
                              uVar4 = (ulong)iVar1;
                              if (uVar4 < local_50) {
                                local_50 = local_50 - uVar4;
                                local_48 = local_48 + uVar4;
                                uVar4 = mbedtls_x509_info_subject_alt_name
                                                  (&local_48,&local_50,param_4 + 0xa8,param_3);
                                if ((int)uVar4 != 0) goto LAB_00100be2;
                                uVar2 = *(uint *)(param_4 + 200);
                                goto LAB_00100c6d;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = 0xffffd680;
LAB_00100be2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_x509_csr_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x21] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x110U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_x509_csr_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_x509_csr_free_part_0();
    return;
  }
  return;
}


