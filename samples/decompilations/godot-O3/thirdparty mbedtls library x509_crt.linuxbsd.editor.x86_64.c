
int x509_profile_check_key(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  int *piStack_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = mbedtls_pk_get_type(param_2);
  if ((iVar2 == 1) || (iVar2 == 6)) {
    uVar3 = mbedtls_pk_get_bitlen(param_2);
    iVar2 = -(uint)(uVar3 < *(uint *)(param_1 + 0xc));
  }
  else {
    if (iVar2 - 2U < 3) {
      local_38 = *param_2;
      piStack_30 = (int *)param_2[1];
      iVar2 = mbedtls_pk_get_type(&local_38);
      if (2 < iVar2 - 2U) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if (*piStack_30 != 0) {
        iVar2 = -(uint)((1 << ((char)*piStack_30 - 1U & 0x1f) & *(uint *)(param_1 + 8)) == 0);
        goto LAB_0010006f;
      }
    }
    iVar2 = -1;
  }
LAB_0010006f:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 x509_name_cmp(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  do {
    if (((*param_1 != *param_2) || (*(size_t *)(param_1 + 2) != *(size_t *)(param_2 + 2))) ||
       (iVar4 = memcmp(*(void **)(param_1 + 4),*(void **)(param_2 + 4),*(size_t *)(param_2 + 2)),
       iVar4 != 0)) {
      return 0xffffffff;
    }
    iVar4 = param_1[6];
    iVar2 = param_2[6];
    if (((iVar4 != iVar2) || (*(size_t *)(param_1 + 8) != *(size_t *)(param_2 + 8))) ||
       (iVar5 = memcmp(*(void **)(param_1 + 10),*(void **)(param_2 + 10),*(size_t *)(param_2 + 8)),
       iVar5 != 0)) {
      if ((iVar4 != 0xc) && (iVar4 != 0x13)) {
        return 0xffffffff;
      }
      if ((iVar2 != 0xc) && (iVar2 != 0x13)) {
        return 0xffffffff;
      }
      lVar3 = *(long *)(param_2 + 8);
      if (*(long *)(param_1 + 8) != lVar3) {
        return 0xffffffff;
      }
      if (lVar3 != 0) {
        lVar6 = 0;
        do {
          bVar1 = *(byte *)(*(long *)(param_1 + 10) + lVar6);
          if (bVar1 != *(byte *)(*(long *)(param_2 + 10) + lVar6)) {
            if ((bVar1 ^ *(byte *)(*(long *)(param_2 + 10) + lVar6)) != 0x20) {
              return 0xffffffff;
            }
            if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
              return 0xffffffff;
            }
          }
          lVar6 = lVar6 + 1;
        } while (lVar3 != lVar6);
      }
    }
    if ((char)param_1[0xe] != (char)param_2[0xe]) {
      return 0xffffffff;
    }
    param_1 = *(int **)(param_1 + 0xc);
    param_2 = *(int **)(param_2 + 0xc);
    if (param_1 == (int *)0x0 && param_2 == (int *)0x0) {
      return 0;
    }
    if (param_1 == (int *)0x0) {
      return 0xffffffff;
    }
  } while (param_2 != (int *)0x0);
  return 0xffffffff;
}



undefined8 x509_crt_check_cn(long param_1,char *param_2,ulong param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  char *pcVar4;
  size_t sVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 == param_3) {
    if (uVar3 != 0) {
      uVar7 = 0;
      do {
        bVar1 = param_2[uVar7];
        bVar2 = *(byte *)(*(long *)(param_1 + 0x10) + uVar7);
        if ((bVar1 != bVar2) &&
           (((bVar1 ^ bVar2) != 0x20 || (0x19 < (byte)((bVar1 & 0xdf) + 0xbf))))) goto LAB_00100207;
        uVar7 = uVar7 + 1;
      } while (param_3 != uVar7);
    }
    return 0;
  }
LAB_00100207:
  sVar5 = strlen(param_2);
  if ((2 < uVar3) &&
     (((pcVar4 = *(char **)(param_1 + 0x10), *pcVar4 == '*' && (pcVar4[1] == '.')) && (sVar5 != 0)))
     ) {
    sVar6 = 0;
    do {
      if (param_2[sVar6] == '.') {
        if (sVar6 == 0) {
          return 0xffffffff;
        }
        if (sVar5 - sVar6 != uVar3 - 1) {
          return 0xffffffff;
        }
        lVar8 = 0;
        do {
          lVar8 = lVar8 + 1;
          bVar1 = pcVar4[lVar8];
          if (bVar1 != param_2[lVar8 + (sVar6 - 1)]) {
            if ((byte)(bVar1 ^ param_2[lVar8 + (sVar6 - 1)]) != 0x20) {
              return 0xffffffff;
            }
            if (0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) {
              return 0xffffffff;
            }
          }
          if (uVar3 - 1 == lVar8) {
            return 0;
          }
        } while( true );
      }
      sVar6 = sVar6 + 1;
    } while (sVar5 != sVar6);
  }
  return 0xffffffff;
}



ulong mbedtls_x509_crt_info(char *param_1,size_t param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *extraout_RDX;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long in_FS_OFFSET;
  ulong local_70;
  char *local_68;
  undefined *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_2;
  local_68 = param_1;
  if (param_4 == 0) {
    iVar1 = snprintf(param_1,param_2,"\nCertificate is uninitialised!\n");
joined_r0x00100906:
    if ((-1 < iVar1) && ((ulong)(long)iVar1 < local_70)) {
      uVar7 = (ulong)(uint)((int)param_2 - ((int)local_70 - iVar1));
      goto LAB_001006b1;
    }
  }
  else {
    iVar1 = __snprintf_chk(param_1,param_2,2,0xffffffffffffffff,"%scert. version     : %d\n",param_3
                           ,*(undefined4 *)(param_4 + 0x38));
    if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
      local_70 = local_70 - uVar7;
      local_68 = local_68 + uVar7;
      iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,"%sserial number     : ",param_3
                            );
      if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
        local_70 = local_70 - uVar7;
        local_68 = local_68 + uVar7;
        iVar1 = mbedtls_x509_serial_gets(local_68,local_70,param_4 + 0x40);
        if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
          local_70 = local_70 - uVar7;
          local_68 = local_68 + uVar7;
          iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,"\n%sissuer name       : ",
                                 param_3);
          if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
            local_70 = local_70 - uVar7;
            local_68 = local_68 + uVar7;
            iVar1 = mbedtls_x509_dn_gets(local_68,local_70,param_4 + 0xa0);
            if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
              local_70 = local_70 - uVar7;
              local_68 = local_68 + uVar7;
              iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                     "\n%ssubject name      : ",param_3);
              if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
                local_70 = local_70 - uVar7;
                local_68 = local_68 + uVar7;
                iVar1 = mbedtls_x509_dn_gets(local_68,local_70,param_4 + 0xe0);
                if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
                  local_70 = local_70 - uVar7;
                  local_68 = local_68 + uVar7;
                  iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                         "\n%sissued  on        : %04d-%02d-%02d %02d:%02d:%02d",
                                         param_3,*(undefined4 *)(param_4 + 0x120),
                                         *(undefined4 *)(param_4 + 0x124),
                                         *(undefined4 *)(param_4 + 0x128),
                                         *(undefined4 *)(param_4 + 300),
                                         *(undefined4 *)(param_4 + 0x130),
                                         *(undefined4 *)(param_4 + 0x134));
                  if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
                    local_70 = local_70 - uVar7;
                    local_68 = local_68 + uVar7;
                    iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                           "\n%sexpires on        : %04d-%02d-%02d %02d:%02d:%02d",
                                           param_3,*(undefined4 *)(param_4 + 0x138),
                                           *(undefined4 *)(param_4 + 0x13c),
                                           *(undefined4 *)(param_4 + 0x140),
                                           *(undefined4 *)(param_4 + 0x144),
                                           *(undefined4 *)(param_4 + 0x148),
                                           *(undefined4 *)(param_4 + 0x14c));
                    if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
                      local_70 = local_70 - uVar7;
                      local_68 = local_68 + uVar7;
                      iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                             "\n%ssigned using      : ",param_3);
                      if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
                        local_70 = local_70 - uVar7;
                        local_68 = local_68 + uVar7;
                        iVar1 = mbedtls_x509_sig_alg_gets
                                          (local_68,local_70,param_4 + 0x58,
                                           *(undefined4 *)(param_4 + 0x2d4),
                                           *(undefined4 *)(param_4 + 0x2d0),
                                           *(undefined8 *)(param_4 + 0x2d8));
                        if ((-1 < iVar1) && (uVar7 = (ulong)iVar1, uVar7 < local_70)) {
                          local_70 = local_70 - uVar7;
                          local_68 = local_68 + uVar7;
                          uVar3 = mbedtls_pk_get_name(param_4 + 0x168);
                          uVar7 = mbedtls_x509_key_size_helper(local_58,0x12,uVar3);
                          if ((int)uVar7 != 0) goto LAB_001006b1;
                          uVar3 = mbedtls_pk_get_bitlen(param_4 + 0x168);
                          iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                 "\n%s%-18s: %d bits",param_3,local_58,uVar3);
                          uVar7 = (ulong)iVar1;
                          if ((-1 < iVar1) && (uVar7 < local_70)) {
                            uVar2 = *(uint *)(param_4 + 0x280);
                            local_70 = local_70 - uVar7;
                            local_68 = local_68 + uVar7;
                            if ((uVar2 & 0x100) != 0) {
                              pcVar4 = "false";
                              if (*(int *)(param_4 + 0x284) != 0) {
                                pcVar4 = "true";
                              }
                              iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                     "\n%sbasic constraints : CA=%s",param_3,pcVar4,
                                                     uVar3);
                              uVar7 = (ulong)iVar1;
                              if ((iVar1 < 0) || (local_70 <= uVar7)) goto LAB_00100950;
                              local_70 = local_70 - uVar7;
                              local_68 = local_68 + uVar7;
                              if (0 < *(int *)(param_4 + 0x288)) {
                                iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                       ", max_pathlen=%d",
                                                       *(int *)(param_4 + 0x288) + -1);
                                uVar7 = (ulong)iVar1;
                                if ((iVar1 < 0) || (local_70 <= uVar7)) goto LAB_00100950;
                                local_70 = local_70 - uVar7;
                                local_68 = local_68 + uVar7;
                              }
                              uVar2 = *(uint *)(param_4 + 0x280);
                            }
                            if ((uVar2 & 0x20) != 0) {
                              iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                     "\n%ssubject alt name  :",param_3);
                              if ((iVar1 < 0) || (uVar7 = (ulong)iVar1, local_70 <= uVar7))
                              goto LAB_00100950;
                              local_70 = local_70 - uVar7;
                              local_68 = local_68 + uVar7;
                              uVar7 = mbedtls_x509_info_subject_alt_name
                                                (&local_68,&local_70,param_4 + 0x1c0,param_3);
                              if ((int)uVar7 != 0) goto LAB_001006b1;
                              uVar2 = *(uint *)(param_4 + 0x280);
                            }
                            if ((uVar2 & 0x10000) != 0) {
                              iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                     "\n%scert. type        : ",param_3);
                              if ((iVar1 < 0) || (uVar7 = (ulong)iVar1, local_70 <= uVar7))
                              goto LAB_00100950;
                              local_70 = local_70 - uVar7;
                              local_68 = local_68 + uVar7;
                              uVar7 = mbedtls_x509_info_cert_type
                                                (&local_68,&local_70,
                                                 *(undefined1 *)(param_4 + 0x2b0));
                              if ((int)uVar7 != 0) goto LAB_001006b1;
                              uVar2 = *(uint *)(param_4 + 0x280);
                            }
                            if ((uVar2 & 4) != 0) {
                              iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                     "\n%skey usage         : ",param_3);
                              if ((iVar1 < 0) || (uVar7 = (ulong)iVar1, local_70 <= uVar7))
                              goto LAB_00100950;
                              local_70 = local_70 - uVar7;
                              local_68 = local_68 + uVar7;
                              uVar7 = mbedtls_x509_info_key_usage
                                                (&local_68,&local_70,
                                                 *(undefined4 *)(param_4 + 0x28c));
                              if ((int)uVar7 != 0) goto LAB_001006b1;
                              uVar2 = *(uint *)(param_4 + 0x280);
                            }
                            if ((uVar2 & 0x800) != 0) {
                              iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                     "\n%sext key usage     : ",param_3);
                              uVar7 = (ulong)iVar1;
                              if ((iVar1 < 0) || (local_70 <= uVar7)) goto LAB_00100950;
                              uVar8 = local_70 - uVar7;
                              pcVar4 = local_68 + uVar7;
                              lVar9 = param_4 + 0x290;
                              puVar5 = &_LC3;
                              local_70 = uVar8;
                              local_68 = pcVar4;
                              do {
                                iVar1 = mbedtls_oid_get_extended_key_usage(lVar9,&local_60);
                                if (iVar1 != 0) {
                                  local_60 = &_LC4;
                                }
                                iVar1 = __snprintf_chk(pcVar4,uVar8,2,0xffffffffffffffff,&_LC20,
                                                       puVar5,local_60);
                                if ((iVar1 < 0) || (uVar7 = (ulong)iVar1, uVar8 <= uVar7))
                                goto LAB_00100950;
                                lVar9 = *(long *)(lVar9 + 0x18);
                                uVar8 = uVar8 - uVar7;
                                pcVar4 = pcVar4 + uVar7;
                                puVar5 = &_LC21;
                              } while (lVar9 != 0);
                              uVar2 = *(uint *)(param_4 + 0x280);
                              local_70 = uVar8;
                              local_68 = pcVar4;
                            }
                            uVar7 = local_70;
                            pcVar4 = local_68;
                            if ((uVar2 & 8) != 0) {
                              iVar1 = __snprintf_chk(local_68,local_70,2,0xffffffffffffffff,
                                                     "\n%scertificate policies : ",param_3);
                              uVar8 = (ulong)iVar1;
                              if ((iVar1 < 0) || (local_70 <= uVar8)) goto LAB_00100950;
                              uVar7 = local_70 - uVar8;
                              param_4 = param_4 + 0x260;
                              pcVar4 = local_68 + uVar8;
                              puVar6 = &_LC3;
                              puVar5 = extraout_RDX;
                              local_70 = uVar7;
                              local_68 = pcVar4;
                              do {
                                iVar1 = mbedtls_oid_get_certificate_policies
                                                  (param_4,&local_60,puVar5);
                                if (iVar1 != 0) {
                                  local_60 = &_LC4;
                                }
                                puVar5 = local_60;
                                iVar1 = __snprintf_chk(pcVar4,uVar7,2,0xffffffffffffffff,&_LC20,
                                                       puVar6);
                                if ((iVar1 < 0) || (uVar8 = (ulong)iVar1, uVar7 <= uVar8))
                                goto LAB_00100950;
                                param_4 = *(long *)(param_4 + 0x18);
                                uVar7 = uVar7 - uVar8;
                                pcVar4 = pcVar4 + uVar8;
                                puVar6 = &_LC21;
                              } while (param_4 != 0);
                            }
                            local_68 = pcVar4;
                            local_70 = uVar7;
                            iVar1 = snprintf(local_68,local_70,"\n");
                            goto joined_r0x00100906;
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
LAB_00100950:
  uVar7 = 0xffffd680;
LAB_001006b1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_x509_crt_verify_info(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  char *pcVar2;
  ulong uVar3;
  uint *puVar4;
  ulong uVar5;
  int local_40;
  
  pcVar2 = "The certificate validity has expired";
  puVar4 = &x509_crt_verify_strings;
  uVar5 = param_2;
  do {
    if ((param_4 & *puVar4) != 0) {
      iVar1 = __snprintf_chk(param_1,uVar5,2,0xffffffffffffffff,"%s%s\n",param_3,pcVar2);
      if (iVar1 < 0) {
        return -0x2980;
      }
      uVar3 = (ulong)iVar1;
      if (uVar5 <= uVar3) {
        return -0x2980;
      }
      uVar5 = uVar5 - uVar3;
      param_1 = param_1 + uVar3;
      param_4 = param_4 ^ *puVar4;
    }
    pcVar2 = *(char **)(puVar4 + 6);
    puVar4 = puVar4 + 4;
    if (pcVar2 == (char *)0x0) {
      if (param_4 != 0) {
        iVar1 = __snprintf_chk(param_1,uVar5,2,0xffffffffffffffff,
                               "%sUnknown reason (this should not happen)\n",param_3);
        if ((iVar1 < 0) || (uVar5 <= (ulong)(long)iVar1)) {
          return -0x2980;
        }
        uVar5 = uVar5 - (long)iVar1;
      }
      local_40 = (int)param_2;
      return local_40 - (int)uVar5;
    }
  } while( true );
}



uint mbedtls_x509_crt_check_key_usage(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x280) & 4;
  if (uVar1 != 0) {
    if ((~*(uint *)(param_1 + 0x28c) & param_2 & 0xffff7ffe) == 0) {
      return -(uint)((~param_2 & *(uint *)(param_1 + 0x28c) & 0x8001) != 0) & 0xffffd800;
    }
    uVar1 = 0xffffd800;
  }
  return uVar1;
}



uint mbedtls_x509_crt_check_extended_key_usage(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x280) & 0x800;
  if (uVar2 == 0) {
    return uVar2;
  }
  param_1 = param_1 + 0x290;
  while( true ) {
    sVar1 = *(size_t *)(param_1 + 8);
    if (sVar1 == param_3) {
      uVar2 = memcmp(*(void **)(param_1 + 0x10),param_2,param_3);
      if (uVar2 == 0) {
        return uVar2;
      }
    }
    if ((sVar1 == 4) && (**(int **)(param_1 + 0x10) == 0x251d55)) break;
    param_1 = *(long *)(param_1 + 0x18);
    if (param_1 == 0) {
      return 0xffffd800;
    }
  }
  return 0;
}



undefined8 mbedtls_x509_crt_is_revoked(long param_1,long param_2)

{
  int iVar1;
  
  param_2 = param_2 + 0xd8;
  while( true ) {
    if (*(size_t *)(param_2 + 0x20) == 0) {
      return 0;
    }
    if ((*(size_t *)(param_1 + 0x48) == *(size_t *)(param_2 + 0x20)) &&
       (iVar1 = memcmp(*(void **)(param_1 + 0x50),*(void **)(param_2 + 0x28),
                       *(size_t *)(param_1 + 0x48)), iVar1 == 0)) break;
    param_2 = *(long *)(param_2 + 0x60);
    if (param_2 == 0) {
      return 0;
    }
  }
  return 1;
}



long mbedtls_x509_crt_parse_cn_inet_pton(char *param_1,void *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = strchr(param_1,0x3a);
  if (pcVar2 != (char *)0x0) {
    iVar1 = inet_pton(10,param_1,param_2);
    return (ulong)(iVar1 == 1) << 4;
  }
  iVar1 = inet_pton(2,param_1,param_2);
  return (ulong)(iVar1 == 1) << 2;
}



int x509_crt_verify_restartable_ca_cb_constprop_0_isra_0
              (long param_1,long param_2,ulong param_3,uint *param_4,char *param_5,uint *param_6,
              code *param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  time_t tVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint *__n;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uint *puVar20;
  uint *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined8 uVar23;
  int local_1cc;
  long local_1c8;
  uint *local_1b8;
  uint local_1a4;
  uint local_168 [8];
  undefined1 local_148 [16];
  undefined8 local_138;
  uint local_130 [38];
  undefined8 local_98 [2];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_6 = 0;
  puVar10 = &local_138;
  do {
    *puVar10 = 0;
    puVar11 = puVar10 + 2;
    *(undefined4 *)(puVar10 + 1) = 0xffffffff;
    puVar10 = puVar11;
  } while (local_98 != puVar11);
  if (param_4 == (uint *)0x0) {
    iVar7 = -0x2800;
  }
  else {
    if (param_5 == (char *)0x0) {
LAB_0010104c:
      uVar9 = 0;
    }
    else {
      lVar18 = param_1 + 0xe0;
      sVar12 = strlen(param_5);
      if ((*(byte *)(param_1 + 0x280) & 0x20) == 0) {
        do {
          if ((((*(long *)(lVar18 + 8) == 3) && (**(short **)(lVar18 + 0x10) == 0x455)) &&
              ((char)(*(short **)(lVar18 + 0x10))[1] == '\x03')) &&
             (iVar7 = x509_crt_check_cn(lVar18 + 0x18,param_5,sVar12), iVar7 == 0))
          goto LAB_0010104c;
          lVar18 = *(long *)(lVar18 + 0x30);
        } while (lVar18 != 0);
      }
      else {
        puVar21 = (uint *)(param_1 + 0x1c0);
        bVar3 = false;
        puVar20 = puVar21;
        bVar4 = false;
        do {
          while (bVar22 = bVar4, uVar9 = *puVar20 & 0x1f, uVar9 != 6) {
            if (uVar9 == 7) {
              bVar3 = true;
            }
            else if ((uVar9 == 2) && (iVar7 = x509_crt_check_cn(puVar20,param_5,sVar12), iVar7 == 0)
                    ) goto LAB_0010104c;
            puVar20 = *(uint **)(puVar20 + 6);
            bVar4 = bVar22;
            if (puVar20 == (uint *)0x0) goto LAB_001018bc;
          }
          puVar20 = *(uint **)(puVar20 + 6);
          bVar22 = true;
          bVar4 = true;
        } while (puVar20 != (uint *)0x0);
LAB_001018bc:
        if (bVar3) {
          __n = (uint *)mbedtls_x509_crt_parse_cn_inet_pton(param_5,local_148);
          puVar20 = puVar21;
          puVar5 = __n;
          while (puVar5 != (uint *)0x0) {
            if ((((*puVar20 & 0x1f) == 7) && (__n == *(uint **)(puVar20 + 2))) &&
               (iVar7 = memcmp(*(void **)(puVar20 + 4),local_148,(size_t)__n), iVar7 == 0))
            goto LAB_0010104c;
            puVar20 = *(uint **)(puVar20 + 6);
            puVar5 = puVar20;
          }
        }
        if (bVar22) {
          do {
            if ((((*puVar21 & 0x1f) == 6) && (sVar12 == *(size_t *)(puVar21 + 2))) &&
               (iVar7 = memcmp(*(void **)(puVar21 + 4),param_5,sVar12), iVar7 == 0))
            goto LAB_0010104c;
            puVar21 = *(uint **)(puVar21 + 6);
          } while (puVar21 != (uint *)0x0);
        }
      }
      uVar9 = 4;
    }
    iVar7 = mbedtls_pk_get_type(param_1 + 0x168);
    if ((iVar7 == 0) || ((1 << ((char)iVar7 - 1U & 0x1f) & param_4[1]) == 0)) {
      uVar9 = uVar9 | 0x8000;
    }
    iVar7 = x509_profile_check_key(param_4,param_1 + 0x168);
    if (iVar7 != 0) {
      uVar9 = uVar9 | 0x10000;
    }
    tVar13 = time((time_t *)0x0);
    iVar7 = mbedtls_x509_time_gmtime(tVar13);
    if (iVar7 == 0) {
      local_1b8 = local_130;
      bVar3 = false;
      local_1a4 = 0;
      local_1cc = 0;
LAB_00101108:
      *(long *)(local_1b8 + -2) = param_1;
      uVar8 = local_1a4 + 1;
      *local_1b8 = 0;
      iVar7 = mbedtls_x509_time_cmp(param_1 + 0x138,local_168);
      if (iVar7 < 0) {
        *local_1b8 = 1;
      }
      iVar7 = mbedtls_x509_time_cmp(param_1 + 0x120,local_168);
      if (0 < iVar7) {
        *local_1b8 = *local_1b8 | 0x200;
      }
      if (!bVar3) {
        if ((*(int *)(param_1 + 0x2d0) == 0) ||
           ((1 << ((char)*(int *)(param_1 + 0x2d0) - 1U & 0x1f) & *param_4) == 0)) {
          *local_1b8 = *local_1b8 | 0x4000;
        }
        if ((*(int *)(param_1 + 0x2d4) == 0) ||
           ((1 << ((char)*(int *)(param_1 + 0x2d4) - 1U & 0x1f) & param_4[1]) == 0)) {
          *local_1b8 = *local_1b8 | 0x8000;
        }
        lVar18 = param_2;
        if ((uVar8 == 1) && (iVar7 = x509_name_cmp(param_1 + 0xa0,param_1 + 0xe0), iVar7 == 0)) {
          if (param_2 == 0) goto LAB_00101357;
          sVar12 = *(size_t *)(param_1 + 0x10);
          lVar17 = param_2;
          do {
            if ((sVar12 == *(size_t *)(lVar17 + 0x10)) &&
               (iVar7 = memcmp(*(void **)(param_1 + 0x18),*(void **)(lVar17 + 0x18),sVar12),
               iVar7 == 0)) {
              uVar15 = 0;
              goto LAB_00101704;
            }
            lVar17 = *(long *)(lVar17 + 0x2e0);
          } while (lVar17 != 0);
          bVar3 = true;
        }
        else {
          if (param_2 == 0) goto LAB_00101357;
          bVar3 = true;
        }
LAB_001011e0:
        local_1c8 = 0;
        bVar4 = false;
LAB_001012de:
        iVar7 = x509_name_cmp(param_1 + 0xa0,lVar18 + 0xe0);
        if (iVar7 == 0) {
          if ((!bVar3) || (2 < *(int *)(lVar18 + 0x38))) {
            if (*(int *)(lVar18 + 0x284) == 0) goto LAB_001012d2;
            if ((*(byte *)(lVar18 + 0x280) & 4) == 0) goto LAB_00101203;
            if ((*(uint *)(lVar18 + 0x28c) & 4) == 0) goto LAB_001012d2;
            if ((*(uint *)(lVar18 + 0x28c) & 0x8001) == 0) goto LAB_00101203;
            lVar18 = *(long *)(lVar18 + 0x2e0);
            lVar17 = local_1c8;
            bVar22 = bVar4;
            goto joined_r0x00101336;
          }
LAB_00101203:
          if ((0 < *(int *)(lVar18 + 0x288)) &&
             ((ulong)(long)*(int *)(lVar18 + 0x288) < (ulong)(uVar8 - local_1cc)))
          goto LAB_001012d2;
          uVar14 = mbedtls_md_info_from_type(*(undefined4 *)(param_1 + 0x2d0));
          uVar6 = mbedtls_md_get_size(uVar14);
          iVar7 = mbedtls_md(uVar14,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),
                             local_88);
          if (iVar7 == 0) {
            iVar7 = mbedtls_pk_can_do(lVar18 + 0x168,*(undefined4 *)(param_1 + 0x2d4));
            if (iVar7 == 0) goto LAB_00101680;
            iVar7 = mbedtls_pk_verify_ext
                              (*(undefined4 *)(param_1 + 0x2d4),*(undefined8 *)(param_1 + 0x2d8),
                               lVar18 + 0x168,*(undefined4 *)(param_1 + 0x2d0),local_88,uVar6,
                               *(undefined8 *)(param_1 + 0x2c8),*(undefined8 *)(param_1 + 0x2c0));
            bVar22 = iVar7 == 0;
            bVar1 = !bVar22;
          }
          else {
LAB_00101680:
            bVar1 = true;
            bVar22 = false;
          }
          if ((bVar3) && (bVar1)) goto LAB_001012d2;
          iVar7 = mbedtls_x509_time_cmp(lVar18 + 0x138,local_168);
          if ((-1 < iVar7) &&
             (iVar7 = mbedtls_x509_time_cmp(lVar18 + 0x120,local_168), lVar17 = lVar18, iVar7 < 1))
          goto LAB_001013b2;
          if (local_1c8 == 0) {
            local_1c8 = lVar18;
            bVar4 = bVar22;
          }
        }
LAB_001012d2:
        lVar18 = *(long *)(lVar18 + 0x2e0);
        lVar17 = local_1c8;
        bVar22 = bVar4;
joined_r0x00101336:
        local_1c8 = lVar17;
        bVar4 = bVar22;
        if (lVar18 == 0) goto LAB_00101340;
        goto LAB_001012de;
      }
LAB_0010166b:
      uVar15 = (ulong)local_1a4;
LAB_00101704:
      local_130[0] = local_130[0] | uVar9;
      puVar10 = &local_138 + uVar15 * 2;
      goto LAB_00101735;
    }
LAB_0010180b:
    iVar7 = -0x3000;
  }
LAB_00101810:
  *param_6 = 0xffffffff;
  goto LAB_00101786;
LAB_00101340:
  if (lVar17 != 0) goto LAB_001013b2;
  if (bVar3) {
LAB_00101357:
    if (*(long *)(param_1 + 0x2e0) != 0) {
      bVar3 = false;
      lVar18 = *(long *)(param_1 + 0x2e0);
      goto LAB_001011e0;
    }
  }
  local_130[(ulong)local_1a4 * 4] = local_130[(ulong)local_1a4 * 4] | 8;
  goto LAB_0010166b;
LAB_001013b2:
  if (uVar8 != 1) {
    iVar7 = x509_name_cmp(param_1 + 0xa0,param_1 + 0xe0);
    local_1cc = local_1cc + (uint)(iVar7 == 0);
    if ((!bVar3) && (8 < uVar8)) goto LAB_0010180b;
  }
  if (!bVar22) {
    *local_1b8 = *local_1b8 | 8;
  }
  lVar18 = lVar17 + 0x168;
  iVar7 = x509_profile_check_key(param_4,lVar18);
  if (iVar7 != 0) {
    *local_1b8 = *local_1b8 | 0x10000;
  }
  uVar15 = param_3;
  if (param_3 != 0) {
    uVar16 = 0;
    do {
      if ((*(int *)(uVar15 + 0x30) != 0) &&
         (iVar7 = x509_name_cmp(uVar15 + 0x68,lVar17 + 0xe0), iVar7 == 0)) {
        if (((*(byte *)(lVar17 + 0x280) & 4) == 0) ||
           (((*(uint *)(lVar17 + 0x28c) & 2) != 0 && ((*(uint *)(lVar17 + 0x28c) & 0x8001) == 0))))
        {
          if ((*(int *)(uVar15 + 0x188) == 0) ||
             ((1 << ((char)*(int *)(uVar15 + 0x188) - 1U & 0x1f) & *param_4) == 0)) {
            uVar16 = uVar16 | 0x20000;
          }
          if ((*(int *)(uVar15 + 0x18c) == 0) ||
             ((1 << ((char)*(int *)(uVar15 + 0x18c) - 1U & 0x1f) & param_4[1]) == 0)) {
            uVar16 = uVar16 | 0x40000;
          }
          uVar14 = mbedtls_md_info_from_type();
          uVar6 = mbedtls_md_get_size(uVar14);
          iVar7 = mbedtls_md(uVar14,*(undefined8 *)(uVar15 + 0x28),*(undefined8 *)(uVar15 + 0x20),
                             local_88);
          if (iVar7 == 0) {
            iVar7 = x509_profile_check_key(param_4,lVar18);
            uVar14 = *(undefined8 *)(uVar15 + 0x178);
            uVar23 = *(undefined8 *)(uVar15 + 0x180);
            if (iVar7 != 0) {
              uVar16 = uVar16 | 0x10000;
            }
            iVar7 = mbedtls_pk_verify_ext
                              (*(undefined4 *)(uVar15 + 0x18c),*(undefined8 *)(uVar15 + 400),lVar18,
                               *(undefined4 *)(uVar15 + 0x188),local_88,uVar6);
            if (iVar7 == 0) {
              iVar7 = mbedtls_x509_time_cmp(uVar15 + 0xc0,local_168,uVar23,uVar14);
              lVar19 = uVar15 + 0xd8;
              uVar2 = uVar16;
              if (iVar7 < 0) {
                uVar2 = uVar16 | 0x20;
              }
              iVar7 = mbedtls_x509_time_cmp(uVar15 + 0xa8,local_168);
              uVar16 = uVar2 | 0x400;
              if (iVar7 < 1) {
                uVar16 = uVar2;
              }
              do {
                if (*(size_t *)(lVar19 + 0x20) == 0) break;
                if ((*(size_t *)(param_1 + 0x48) == *(size_t *)(lVar19 + 0x20)) &&
                   (iVar7 = memcmp(*(void **)(param_1 + 0x50),*(void **)(lVar19 + 0x28),
                                   *(size_t *)(param_1 + 0x48)), iVar7 == 0)) {
                  uVar15 = (ulong)(uVar16 | 2);
                  goto LAB_001015e8;
                }
                lVar19 = *(long *)(lVar19 + 0x60);
              } while (lVar19 != 0);
              goto LAB_00101610;
            }
          }
        }
        uVar15 = (ulong)(uVar16 | 0x10);
        goto LAB_001015e8;
      }
LAB_00101610:
      uVar15 = *(ulong *)(uVar15 + 0x198);
    } while (uVar15 != 0);
    uVar15 = (ulong)uVar16;
  }
LAB_001015e8:
  *local_1b8 = *local_1b8 | (uint)uVar15;
  local_1b8 = local_1b8 + 4;
  param_1 = lVar17;
  local_1a4 = uVar8;
  goto LAB_00101108;
  while( true ) {
    *param_6 = *param_6 | local_168[0];
    puVar10 = puVar10 + -2;
    if (uVar8 == 0) break;
LAB_00101735:
    local_168[0] = *(uint *)(puVar10 + 1);
    uVar8 = uVar8 - 1;
    if ((param_7 != (code *)0x0) &&
       (iVar7 = (*param_7)(param_8,*puVar10,uVar8,local_168), iVar7 != 0)) {
      if (iVar7 != -0x2700) goto LAB_00101810;
      goto LAB_0010180b;
    }
  }
  iVar7 = 0;
  if (*param_6 != 0) {
    iVar7 = -0x2700;
  }
LAB_00101786:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
}



void mbedtls_x509_crt_verify(void)

{
  x509_crt_verify_restartable_ca_cb_constprop_0_isra_0();
  return;
}



void mbedtls_x509_crt_verify_with_profile(void)

{
  x509_crt_verify_restartable_ca_cb_constprop_0_isra_0();
  return;
}



void mbedtls_x509_crt_verify_restartable(void)

{
  x509_crt_verify_restartable_ca_cb_constprop_0_isra_0();
  return;
}



void mbedtls_x509_crt_init(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[0x5c] = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 1) & 0xfffffffffffffff8)) + 0x2e8U >> 3
                      ); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}



void mbedtls_x509_crt_free(int *param_1)

{
  int *piVar1;
  int *__ptr;
  
  __ptr = param_1;
  if (param_1 == (int *)0x0) {
    return;
  }
  do {
    mbedtls_pk_free(__ptr + 0x5a);
    free(*(void **)(__ptr + 0xb6));
    mbedtls_asn1_free_named_data_list_shallow(*(undefined8 *)(__ptr + 0x34));
    mbedtls_asn1_free_named_data_list_shallow(*(undefined8 *)(__ptr + 0x44));
    mbedtls_asn1_sequence_free(*(undefined8 *)(__ptr + 0xaa));
    mbedtls_asn1_sequence_free(*(undefined8 *)(__ptr + 0x76));
    mbedtls_asn1_sequence_free(*(undefined8 *)(__ptr + 0x9e));
    mbedtls_asn1_sequence_free(*(undefined8 *)(__ptr + 0x8a));
    if ((*(long *)(__ptr + 6) != 0) && (*__ptr != 0)) {
      mbedtls_zeroize_and_free(*(long *)(__ptr + 6),*(undefined8 *)(__ptr + 4));
    }
    piVar1 = *(int **)(__ptr + 0xb8);
    mbedtls_platform_zeroize(__ptr,0x2e8);
    if (param_1 != __ptr) {
      free(__ptr);
    }
    __ptr = piVar1;
  } while (piVar1 != (int *)0x0);
  return;
}



int mbedtls_x509_crt_parse_der_internal
              (undefined4 *param_1,byte *param_2,long param_3,int param_4,code *param_5,
              undefined8 param_6)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  long lVar9;
  undefined4 *puVar10;
  long lVar11;
  uint uVar12;
  size_t __size;
  byte *pbVar13;
  undefined4 *puVar14;
  undefined4 *__ptr;
  byte *pbVar15;
  byte *pbVar16;
  undefined4 *puVar17;
  long in_FS_OFFSET;
  byte bVar18;
  byte *local_160;
  int local_e0;
  uint local_dc;
  long local_d8;
  byte *local_d0;
  long local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  void *local_a8;
  undefined1 local_98 [16];
  void *local_88;
  undefined1 local_78 [16];
  void *local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  long local_50;
  byte *local_48;
  long local_40;
  
  bVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (byte *)0x0)) {
    iVar3 = -0x2800;
    goto LAB_00101d60;
  }
  puVar14 = (undefined4 *)0x0;
  puVar17 = param_1;
  do {
    __ptr = puVar17;
    if (__ptr[0xe] == 0) goto LAB_00101c17;
    puVar14 = __ptr;
    puVar17 = *(undefined4 **)(__ptr + 0xb8);
  } while (*(undefined4 **)(__ptr + 0xb8) != (undefined4 *)0x0);
  puVar7 = (undefined8 *)calloc(1,0x2e8);
  *(undefined8 **)(__ptr + 0xb8) = puVar7;
  if (puVar7 == (undefined8 *)0x0) {
    iVar3 = -0x2880;
    goto LAB_00101d60;
  }
  local_a8 = (void *)0x0;
  for (lVar11 = 0x5d; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + (ulong)bVar18 * -2 + 1;
  }
  local_88 = (void *)0x0;
  local_68 = (void *)0x0;
  puVar7 = (undefined8 *)(__ptr + 0xb8);
  local_b8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  __ptr = (undefined4 *)*puVar7;
  if ((undefined4 *)*puVar7 == (undefined4 *)0x0) {
    __ptr = (undefined4 *)0x0;
    iVar4 = -0x2800;
  }
  else {
LAB_00101c17:
    local_68 = (void *)0x0;
    local_78 = (undefined1  [16])0x0;
    local_88 = (void *)0x0;
    local_98 = (undefined1  [16])0x0;
    local_a8 = (void *)0x0;
    local_b8 = (undefined1  [16])0x0;
    local_d8 = param_3;
    local_d0 = param_2;
    iVar3 = mbedtls_asn1_get_tag(&local_d0,param_2 + param_3,&local_d8,0x30);
    lVar11 = local_d8;
    if (iVar3 == 0) {
      local_160 = local_d0 + local_d8;
      __size = (long)local_160 - (long)param_2;
      *(size_t *)(__ptr + 4) = __size;
      if (param_4 == 0) {
        *(byte **)(__ptr + 6) = param_2;
        *__ptr = 0;
      }
      else {
        local_d0 = (byte *)calloc(1,__size);
        *(byte **)(__ptr + 6) = local_d0;
        if (local_d0 == (byte *)0x0) {
          iVar4 = -0x2880;
          local_d0 = (byte *)0x0;
          goto LAB_00101d44;
        }
        lVar9 = __memcpy_chk(local_d0,param_2,__size,__size);
        local_160 = (byte *)(lVar9 + __size);
        *__ptr = 1;
        local_d0 = (byte *)((__size - lVar11) + lVar9);
      }
      *(byte **)(__ptr + 0xc) = local_d0;
      iVar4 = mbedtls_asn1_get_tag(&local_d0,local_160,&local_d8,0x30);
      iVar3 = 0;
      if (iVar4 == 0) {
        pbVar6 = local_d0 + local_d8;
        *(long *)(__ptr + 10) = (long)pbVar6 - *(long *)(__ptr + 0xc);
        iVar5 = mbedtls_asn1_get_tag(&local_d0,pbVar6,&local_58,0xa0);
        if (iVar5 == 0) {
          pbVar16 = local_d0 + CONCAT44(uStack_54,local_58);
          iVar4 = mbedtls_asn1_get_int(&local_d0,pbVar16,__ptr + 0xe);
          if (iVar4 != 0) {
            iVar4 = iVar4 + -0x2200;
            goto LAB_00101d29;
          }
          if (pbVar16 == local_d0) goto LAB_00101e6f;
          iVar4 = -0x2266;
        }
        else {
          iVar4 = iVar5 + -0x2180;
          if (iVar5 == -0x62) {
            __ptr[0xe] = 0;
          }
          else {
LAB_00101d29:
            if (iVar4 != 0) goto LAB_00101d32;
          }
LAB_00101e6f:
          iVar4 = mbedtls_x509_get_serial(&local_d0,pbVar6,__ptr + 0x10);
          if (iVar4 == 0) {
            iVar4 = mbedtls_x509_get_alg(&local_d0,pbVar6,__ptr + 0x16,local_b8);
            if (iVar4 == 0) {
              if (2 < (uint)__ptr[0xe]) {
                iVar4 = -0x2580;
                mbedtls_x509_crt_free(__ptr);
                goto LAB_00101d44;
              }
              __ptr[0xe] = __ptr[0xe] + 1;
              iVar4 = mbedtls_x509_get_sig_alg
                                (__ptr + 0x16,local_b8,__ptr + 0xb4,__ptr + 0xb5,__ptr + 0xb6);
              if (iVar4 != 0) goto LAB_00101d32;
              *(byte **)(__ptr + 0x20) = local_d0;
              iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar6,&local_d8,0x30);
              if (iVar4 != 0) goto LAB_00102360;
              iVar4 = mbedtls_x509_get_name(&local_d0,local_d0 + local_d8,__ptr + 0x28);
              if (iVar4 == 0) {
                *(long *)(__ptr + 0x1e) = (long)local_d0 - *(long *)(__ptr + 0x20);
                iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar6,&local_58,0x30);
                if (iVar4 == 0) {
                  pbVar16 = local_d0 + CONCAT44(uStack_54,local_58);
                  iVar4 = mbedtls_x509_get_time(&local_d0,pbVar16,__ptr + 0x48);
                  if (((iVar4 == 0) &&
                      (iVar4 = mbedtls_x509_get_time(&local_d0,pbVar16,__ptr + 0x4e), iVar4 == 0))
                     && (iVar4 = -0x2466, pbVar16 == local_d0)) goto LAB_00101fe2;
                }
                else {
                  iVar4 = iVar4 + -0x2400;
                  if (iVar4 == 0) {
LAB_00101fe2:
                    *(byte **)(__ptr + 0x26) = local_d0;
                    iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar6,&local_d8,0x30);
                    if (iVar4 != 0) goto LAB_00102360;
                    if ((local_d8 == 0) ||
                       (iVar4 = mbedtls_x509_get_name(&local_d0,local_d0 + local_d8,__ptr + 0x38),
                       iVar4 == 0)) {
                      *(byte **)(__ptr + 0x58) = local_d0;
                      *(long *)(__ptr + 0x24) = (long)local_d0 - *(long *)(__ptr + 0x26);
                      iVar4 = mbedtls_pk_parse_subpubkey(&local_d0,pbVar6,__ptr + 0x5a);
                      if (iVar4 == 0) {
                        *(long *)(__ptr + 0x56) = (long)local_d0 - *(long *)(__ptr + 0x58);
                        uVar12 = __ptr[0xe] - 2;
                        if (1 < uVar12) {
LAB_001024d9:
                          if (pbVar6 == local_d0) goto LAB_001024e4;
LAB_001025d8:
                          iVar4 = -0x21e6;
                          mbedtls_x509_crt_free(__ptr);
                          goto LAB_00101d44;
                        }
                        if (pbVar6 != local_d0) {
                          __ptr[0x5e] = (uint)*local_d0;
                          iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar6,__ptr + 0x60,0xa1);
                          if (iVar4 == 0) {
                            *(byte **)(__ptr + 0x62) = local_d0;
                            local_d0 = local_d0 + *(long *)(__ptr + 0x60);
                            uVar12 = __ptr[0xe] - 2;
                          }
                          else {
                            if ((iVar4 != -0x62) && (iVar4 = iVar4 + -0x2180, iVar4 != 0))
                            goto LAB_00101d32;
                            uVar12 = __ptr[0xe] - 2;
                          }
                        }
                        if (1 < uVar12) goto LAB_001024d9;
                        if (pbVar6 != local_d0) {
                          __ptr[100] = (uint)*local_d0;
                          iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar6,__ptr + 0x66,0xa2);
                          if (iVar4 == 0) {
                            *(byte **)(__ptr + 0x68) = local_d0;
                            local_d0 = local_d0 + *(long *)(__ptr + 0x66);
                          }
                          else if ((iVar4 != -0x62) && (iVar4 = iVar4 + -0x2180, iVar4 != 0))
                          goto LAB_00101d32;
                          if (__ptr[0xe] != 3) goto LAB_001024d9;
                          if (pbVar6 != local_d0) {
                            iVar4 = mbedtls_x509_get_ext(&local_d0,pbVar6,__ptr + 0x6a,3);
                            if (iVar4 == 0) {
                              pbVar13 = (byte *)(*(long *)(__ptr + 0x6c) + *(long *)(__ptr + 0x6e));
                              pbVar16 = local_d0;
                              if (local_d0 < pbVar13) {
LAB_001021cc:
                                local_58 = 0;
                                local_50 = 0;
                                local_48 = (byte *)0x0;
                                local_e0 = 0;
                                local_dc = 0;
                                iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar13,&local_c8,0x30);
                                if (iVar4 != 0) {
LAB_001024ad:
                                  iVar4 = iVar4 + -0x2500;
                                  if (iVar4 != 0) goto LAB_00101d32;
                                  goto LAB_001024d9;
                                }
                                pbVar15 = local_d0 + local_c8;
                                iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar15,&local_50,6);
                                if (iVar4 != 0) goto LAB_001024ad;
                                local_58 = 6;
                                local_48 = local_d0;
                                local_d0 = local_d0 + local_50;
                                iVar4 = mbedtls_asn1_get_bool(&local_d0,pbVar15,&local_e0);
                                if (((iVar4 != -0x62) && (iVar4 != 0)) ||
                                   (iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar15,&local_c8),
                                   pbVar1 = local_d0, iVar4 != 0)) goto LAB_001024ad;
                                pbVar8 = local_d0 + local_c8;
                                if (pbVar15 != pbVar8) goto LAB_0010272a;
                                iVar4 = mbedtls_oid_get_x509_ext_type(&local_58);
                                pbVar16 = pbVar8;
                                pbVar2 = pbVar8;
                                if (iVar4 == 0) {
                                  if ((__ptr[0xa0] & local_dc) != 0) {
                                    iVar4 = -0x2500;
                                    goto LAB_00101d32;
                                  }
                                  __ptr[0xa0] = __ptr[0xa0] | local_dc;
                                  if (0x20 < (int)local_dc) {
                                    if (local_dc == 0x800) {
                                      iVar4 = mbedtls_asn1_get_sequence_of
                                                        (&local_d0,pbVar15,__ptr + 0xa4,6);
                                      if (iVar4 == 0) {
                                        pbVar16 = local_d0;
                                        pbVar2 = local_d0;
                                        if (*(long *)(__ptr + 0xa8) != 0) goto LAB_001026f1;
                                        iVar4 = -0x2564;
                                        goto LAB_00101d32;
                                      }
LAB_00102999:
                                      iVar4 = iVar4 + -0x2500;
                                    }
                                    else {
                                      if (local_dc != 0x10000) {
                                        if (local_dc != 0x100) goto switchD_001026e6_caseD_3;
                                        *(undefined8 *)(__ptr + 0xa1) = 0;
                                        iVar4 = mbedtls_asn1_get_tag
                                                          (&local_d0,pbVar15,&local_c0,0x30);
                                        if (iVar4 != 0) goto LAB_001027e1;
                                        pbVar16 = local_d0;
                                        pbVar2 = local_d0;
                                        if (pbVar8 == local_d0) goto LAB_001026f1;
                                        iVar4 = mbedtls_asn1_get_bool(&local_d0,pbVar8,__ptr + 0xa1)
                                        ;
                                        if (iVar4 != 0) {
                                          if ((iVar4 != -0x62) ||
                                             (iVar4 = mbedtls_asn1_get_int
                                                                (&local_d0,pbVar8,__ptr + 0xa1),
                                             iVar4 != 0)) goto LAB_001027e1;
                                          if (__ptr[0xa1] != 0) {
                                            __ptr[0xa1] = 1;
                                          }
                                        }
                                        pbVar16 = local_d0;
                                        pbVar2 = local_d0;
                                        if (pbVar8 != local_d0) {
                                          iVar4 = mbedtls_asn1_get_int
                                                            (&local_d0,pbVar8,__ptr + 0xa2);
                                          if (iVar4 != 0) goto LAB_001027e1;
                                          if (pbVar8 != local_d0) goto LAB_0010272a;
                                          if (__ptr[0xa2] != 0x7fffffff) {
                                            __ptr[0xa2] = __ptr[0xa2] + 1;
                                            pbVar16 = local_d0;
                                            pbVar2 = local_d0;
                                            goto LAB_001026f1;
                                          }
                                          iVar4 = -0x2564;
                                          goto LAB_00101d32;
                                        }
                                        goto LAB_001026f1;
                                      }
                                      iVar4 = mbedtls_x509_get_ns_cert_type
                                                        (&local_d0,pbVar15,__ptr + 0xac);
                                    }
joined_r0x001029a3:
                                    pbVar16 = local_d0;
                                    pbVar2 = local_d0;
                                    if (iVar4 == 0) goto LAB_001026f1;
                                    goto LAB_00101d32;
                                  }
                                  if ((int)local_dc < 1) {
switchD_001026e6_caseD_3:
                                    if (local_e0 == 0) goto LAB_001026f1;
                                    iVar4 = -0x2080;
                                    goto LAB_00101d32;
                                  }
                                  switch(local_dc) {
                                  case 1:
                                    local_c0 = 0;
                                    iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar8,&local_c0,0x30);
                                    if (iVar4 == 0) {
                                      if (pbVar8 != local_d0 + local_c0) goto LAB_0010272a;
                                      iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar8,&local_c0,0x80);
                                      if (iVar4 == 0) {
                                        *(long *)(__ptr + 0x80) = local_c0;
                                        *(byte **)(__ptr + 0x82) = local_d0;
                                        local_d0 = local_d0 + local_c0;
                                        __ptr[0x7e] = 4;
                                      }
                                      else if (iVar4 != -0x62) goto LAB_001027e1;
                                      if (pbVar8 <= local_d0) {
LAB_00102a53:
                                        pbVar16 = local_d0;
                                        pbVar2 = local_d0;
                                        if (pbVar8 == local_d0) break;
                                        goto LAB_0010272a;
                                      }
                                      iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar8,&local_c0,0xa1);
                                      if (iVar4 == 0) {
                                        iVar4 = mbedtls_x509_get_subject_alt_name_ext
                                                          (&local_d0,local_d0 + local_c0,
                                                           __ptr + 0x84);
                                        if (iVar4 != 0) goto LAB_00101d32;
                                        iVar4 = mbedtls_asn1_get_tag
                                                          (&local_d0,pbVar8,&local_c0,0x82);
                                        if (iVar4 == 0) {
                                          *(long *)(__ptr + 0x8e) = local_c0;
                                          *(byte **)(__ptr + 0x90) = local_d0;
                                          local_d0 = local_d0 + local_c0;
                                          __ptr[0x8c] = 2;
                                          goto LAB_00102a53;
                                        }
                                      }
                                    }
LAB_001027e1:
                                    iVar4 = iVar4 + -0x2500;
                                    goto joined_r0x001029a3;
                                  case 2:
                                    local_c0 = 0;
                                    iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar15,&local_c0,4);
                                    if (iVar4 != 0) goto LAB_00102999;
                                    *(long *)(__ptr + 0x7a) = local_c0;
                                    *(byte **)(__ptr + 0x7c) = local_d0;
                                    local_d0 = local_d0 + local_c0;
                                    __ptr[0x78] = 4;
                                    pbVar16 = local_d0;
                                    pbVar2 = local_d0;
                                    if (pbVar15 != local_d0) goto LAB_0010272a;
                                    break;
                                  default:
                                    goto switchD_001026e6_caseD_3;
                                  case 4:
                                    iVar4 = mbedtls_x509_get_key_usage
                                                      (&local_d0,pbVar8,__ptr + 0xa3);
                                    pbVar8 = local_d0;
                                    iVar5 = iVar4;
                                    goto joined_r0x00102b96;
                                  case 8:
                                    iVar4 = mbedtls_asn1_get_tag(&local_d0,pbVar8,&local_c0,0x30);
                                    if (iVar4 == 0) {
                                      if ((pbVar8 != local_d0 + local_c0) || (local_c0 == 0))
                                      goto LAB_0010272a;
                                      iVar4 = 0;
                                      puVar17 = __ptr + 0x98;
                                      do {
                                        if (pbVar8 <= local_d0) {
                                          *(undefined8 *)(puVar17 + 6) = 0;
                                          if (pbVar8 == local_d0) goto LAB_00102cfc;
                                          goto LAB_0010272a;
                                        }
                                        iVar5 = mbedtls_asn1_get_tag
                                                          (&local_d0,pbVar8,&local_c0,0x30);
                                        if (iVar5 != 0) {
LAB_00102cf2:
                                          iVar4 = iVar5 + -0x2500;
                                          goto LAB_00102cfc;
                                        }
                                        pbVar15 = local_d0 + local_c0;
                                        iVar5 = mbedtls_asn1_get_tag(&local_d0,pbVar15,&local_c0,6);
                                        lVar11 = local_c0;
                                        pbVar16 = local_d0;
                                        if (iVar5 != 0) goto LAB_00102cf2;
                                        if (local_c0 == 4) {
                                          if (*(int *)local_d0 != 0x201d55) {
                                            iVar4 = -0x2080;
                                          }
                                        }
                                        else {
                                          iVar4 = -0x2080;
                                        }
                                        puVar10 = puVar17;
                                        if (*(long *)(puVar17 + 4) != 0) {
                                          if (*(long *)(puVar17 + 6) != 0) {
                                            iVar4 = -0x2500;
                                            goto LAB_00102d05;
                                          }
                                          puVar10 = (undefined4 *)calloc(1,0x20);
                                          *(undefined4 **)(puVar17 + 6) = puVar10;
                                          if (puVar10 == (undefined4 *)0x0) {
                                            iVar4 = -0x256a;
                                            goto LAB_00102d05;
                                          }
                                        }
                                        *(byte **)(puVar10 + 4) = pbVar16;
                                        local_d0 = pbVar16 + lVar11;
                                        *puVar10 = 6;
                                        *(long *)(puVar10 + 2) = lVar11;
                                        if (local_d0 < pbVar15) {
                                          iVar5 = mbedtls_asn1_get_tag
                                                            (&local_d0,pbVar15,&local_c0,0x30);
                                          if (iVar5 != 0) goto LAB_00102cf2;
                                          local_d0 = local_d0 + local_c0;
                                        }
                                        puVar17 = puVar10;
                                      } while (pbVar15 == local_d0);
                                      iVar4 = -0x2566;
                                    }
                                    else {
                                      iVar4 = iVar4 + -0x2500;
LAB_00102cfc:
                                      pbVar16 = local_d0;
                                      pbVar2 = local_d0;
                                      if (iVar4 == 0) break;
                                    }
LAB_00102d05:
                                    if ((((iVar4 != -0x2080) || (param_5 == (code *)0x0)) ||
                                        (iVar5 = (*param_5)(param_6,__ptr,&local_58,local_e0,pbVar1,
                                                            pbVar8), pbVar16 = local_d0,
                                        pbVar2 = local_d0, iVar5 != 0)) &&
                                       ((local_e0 != 0 ||
                                        (pbVar16 = local_d0, pbVar2 = local_d0, iVar4 != -0x2080))))
                                    goto LAB_00101d32;
                                    break;
                                  case 0x20:
                                    iVar4 = mbedtls_x509_get_subject_alt_name
                                                      (&local_d0,pbVar8,__ptr + 0x70);
                                    pbVar8 = local_d0;
                                    iVar5 = iVar4;
joined_r0x00102b96:
                                    pbVar16 = pbVar8;
                                    pbVar2 = pbVar8;
                                    if (iVar5 != 0) goto LAB_00101d32;
                                  }
                                }
                                else {
                                  if (param_5 == (code *)0x0) {
                                    pbVar2 = pbVar15;
                                    if (local_e0 == 0) goto LAB_001026f1;
                                    iVar4 = -0x2562;
                                    local_d0 = pbVar15;
                                    goto LAB_00101d32;
                                  }
                                  iVar4 = (*param_5)(param_6,__ptr,&local_58,local_e0,local_d0,
                                                     pbVar8);
                                  iVar5 = local_e0;
                                  if (iVar4 != 0) goto joined_r0x00102b96;
                                }
LAB_001026f1:
                                local_d0 = pbVar2;
                                if (pbVar13 <= pbVar16) goto LAB_00102719;
                                goto LAB_001021cc;
                              }
LAB_00102719:
                              if (pbVar13 == pbVar16) goto LAB_001024d9;
LAB_0010272a:
                              iVar4 = -0x2566;
                            }
                            goto LAB_00101d32;
                          }
                        }
LAB_001024e4:
                        iVar4 = mbedtls_x509_get_alg(&local_d0,local_160,local_78,local_98);
                        if (iVar4 == 0) {
                          if ((*(size_t *)(__ptr + 0x18) == local_78._8_8_) &&
                             (iVar4 = memcmp(*(void **)(__ptr + 0x1a),local_68,
                                             *(size_t *)(__ptr + 0x18)), iVar4 == 0)) {
                            if (local_b8._0_4_ == local_98._0_4_) {
                              if ((local_b8._8_8_ == local_98._8_8_) &&
                                 ((local_b8._8_8_ == 0 ||
                                  (iVar4 = memcmp(local_a8,local_88,local_b8._8_8_), iVar4 == 0))))
                              {
                                iVar4 = mbedtls_x509_get_sig(&local_d0,local_160,__ptr + 0xae);
                                if (iVar4 == 0) {
                                  if (local_160 == local_d0) goto LAB_00101d60;
                                  goto LAB_001025d8;
                                }
                                goto LAB_00101d32;
                              }
                            }
                          }
                          iVar4 = -0x2680;
                          mbedtls_x509_crt_free(__ptr);
                          goto LAB_00101d44;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_00101d32:
        mbedtls_x509_crt_free(__ptr);
      }
      else {
LAB_00102360:
        iVar4 = iVar4 + -0x2180;
        mbedtls_x509_crt_free(__ptr);
        if (iVar4 == 0) goto LAB_00101d60;
      }
    }
    else {
      iVar4 = -0x2180;
      mbedtls_x509_crt_free(__ptr);
    }
LAB_00101d44:
    if (puVar14 != (undefined4 *)0x0) {
      *(undefined8 *)(puVar14 + 0xb8) = 0;
    }
    iVar3 = iVar4;
    if (param_1 == __ptr) goto LAB_00101d60;
  }
  free(__ptr);
  iVar3 = iVar4;
LAB_00101d60:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_x509_crt_parse_der_nocopy(void)

{
  mbedtls_x509_crt_parse_der_internal();
  return;
}



void mbedtls_x509_crt_parse_der_with_ext_cb(void)

{
  mbedtls_x509_crt_parse_der_internal();
  return;
}



void mbedtls_x509_crt_parse_der(void)

{
  mbedtls_x509_crt_parse_der_internal();
  return;
}



ulong mbedtls_x509_crt_parse(long param_1,char *param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  uint local_70;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (param_2 == (char *)0x0)) {
    uVar2 = 0xffffd800;
  }
  else {
    if (((param_3 == 0) || (param_2[param_3 - 1] != '\0')) ||
       (pcVar3 = strstr(param_2,"-----BEGIN CERTIFICATE-----"), pcVar3 == (char *)0x0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar4 = mbedtls_x509_crt_parse_der_internal(param_1,param_2,param_3,1,0,0);
        return uVar4;
      }
      goto LAB_0010310b;
    }
    if (param_3 != 1) {
      uVar5 = 0;
      local_70 = 0;
      bVar1 = false;
      do {
        mbedtls_pem_init(&local_58);
        uVar2 = mbedtls_pem_read_buffer
                          (&local_58,"-----BEGIN CERTIFICATE-----","-----END CERTIFICATE-----",
                           param_2,0,0);
        if (uVar2 == 0) {
          param_3 = param_3 - local_60;
          uVar2 = mbedtls_x509_crt_parse_der_internal(param_1,local_58,local_50,1);
          mbedtls_pem_free(&local_58);
          if (uVar2 == 0) {
            bVar1 = true;
          }
          else {
            if (uVar2 == 0xffffd780) goto LAB_00102fd7;
            if (uVar5 != 0) {
              uVar2 = uVar5;
            }
            uVar5 = uVar2;
            local_70 = local_70 + 1;
          }
        }
        else {
          if (uVar2 == 0xffffeb80) goto LAB_00102fd7;
          if (uVar2 == 0xffffef80) break;
          mbedtls_pem_free(&local_58);
          param_3 = param_3 - local_60;
          if (uVar5 != 0) {
            uVar2 = uVar5;
          }
          uVar5 = uVar2;
          local_70 = local_70 + 1;
        }
        param_2 = param_2 + local_60;
      } while (1 < param_3);
      uVar2 = local_70;
      if ((bVar1) || (uVar2 = uVar5, uVar5 != 0)) goto LAB_00102fd7;
    }
    uVar2 = 0xffffd880;
  }
LAB_00102fd7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar2;
  }
LAB_0010310b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_x509_crt_parse_file(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_pk_load_file(param_2,&local_28,&local_30);
  if (iVar1 == 0) {
    iVar1 = mbedtls_x509_crt_parse(param_1,local_28,local_30);
    mbedtls_zeroize_and_free(local_28,local_30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_x509_crt_parse_path(undefined8 param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  DIR *__dirp;
  dirent64 *pdVar3;
  int *piVar4;
  long lVar5;
  int iVar6;
  stat64 *psVar7;
  int iVar8;
  long in_FS_OFFSET;
  byte bVar9;
  stat64 sStack_2d8;
  char local_248 [520];
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __dirp = opendir(param_2);
  if (__dirp == (DIR *)0x0) {
    iVar8 = -0x2900;
  }
  else {
    psVar7 = &sStack_2d8;
    for (lVar5 = 0x12; iVar8 = 0, lVar5 != 0; lVar5 = lVar5 + -1) {
      psVar7->st_dev = 0;
      psVar7 = (stat64 *)((long)psVar7 + ((ulong)bVar9 * -2 + 1) * 8);
    }
    do {
      while( true ) {
        pdVar3 = readdir64(__dirp);
        if (pdVar3 == (dirent64 *)0x0) goto LAB_0010329c;
        uVar1 = __snprintf_chk(local_248,0x200,2,0x200,"%s/%s",param_2,pdVar3->d_name);
        if (0x1ff < uVar1) {
          iVar8 = -0x2980;
          goto LAB_0010329c;
        }
        iVar2 = stat64(local_248,&sStack_2d8);
        if (iVar2 == -1) break;
        if ((sStack_2d8.st_mode & 0xf000) == 0x8000) {
          iVar2 = mbedtls_x509_crt_parse_file(param_1,local_248);
          iVar6 = iVar8 + 1;
          iVar8 = iVar8 + iVar2;
          if (iVar2 < 0) {
            iVar8 = iVar6;
          }
        }
      }
      piVar4 = __errno_location();
    } while (*piVar4 == 2);
    iVar8 = -0x2900;
LAB_0010329c:
    closedir(__dirp);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar8;
}



undefined4 mbedtls_x509_crt_get_ca_istrue(long param_1)

{
  if ((*(byte *)(param_1 + 0x281) & 1) != 0) {
    return *(undefined4 *)(param_1 + 0x284);
  }
  return 0xffffdb00;
}



void x509_profile_check_key_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


