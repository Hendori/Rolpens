
undefined8 mbedtls_x509_string_to_names(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte bVar11;
  int iVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  ulong __size;
  char *pcVar15;
  undefined1 *puVar16;
  byte *pbVar17;
  long in_FS_OFFSET;
  undefined8 local_198;
  ulong local_178;
  byte *local_170;
  undefined4 local_168 [2];
  size_t local_160;
  void *local_158;
  undefined1 local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar7 = strlen((char *)param_2);
  local_168[0] = 5;
  local_160 = 0;
  local_158 = (void *)0x0;
  pbVar1 = param_2 + sVar7;
  local_178 = 0;
  mbedtls_asn1_free_named_data_list(param_1);
  if (pbVar1 < param_2) {
    local_198 = 0xffffdc80;
  }
  else {
    bVar4 = false;
    puVar16 = (undefined1 *)0x0;
    local_198 = 0xffffdc80;
    bVar3 = true;
    pbVar13 = param_2;
    do {
      while (bVar11 = *pbVar13, !bVar3) {
LAB_001000a0:
        if ((bVar11 == 0x2c) && (pbVar13[-1] != 0x5c)) {
LAB_00100116:
          if (pbVar13 != param_2) {
            bVar11 = *param_2;
            if (bVar11 == 0x23) {
              pbVar10 = pbVar13 + (-1 - (long)param_2);
              uVar8 = (ulong)((uint)pbVar10 & 1);
              if ((((ulong)pbVar10 & 1) == 0) &&
                 (__size = (ulong)pbVar10 >> 1, pbVar13 + (-3 - (long)param_2) < (byte *)0x208)) {
                pbVar10 = (byte *)calloc(1,__size);
                if (pbVar10 != (byte *)0x0) {
                  do {
                    bVar11 = param_2[uVar8 * 2 + 1];
                    iVar6 = (int)(char)bVar11;
                    if ((byte)(bVar11 - 0x30) < 10) {
                      bVar11 = param_2[uVar8 * 2 + 2];
                      iVar6 = iVar6 + -0x30;
                      if (9 < (byte)(bVar11 - 0x30)) goto joined_r0x001004dd;
LAB_00100462:
                      bVar11 = bVar11 - 0x30;
                    }
                    else {
                      if ((byte)(bVar11 + 0x9f) < 6) {
                        bVar11 = param_2[uVar8 * 2 + 2];
                        iVar6 = iVar6 + -0x57;
joined_r0x001004d4:
                        if ((byte)(bVar11 - 0x30) < 10) goto LAB_00100462;
joined_r0x001004dd:
                        if ((byte)(bVar11 + 0x9f) < 6) {
                          bVar11 = bVar11 + 0xa9;
                          goto LAB_00100465;
                        }
                      }
                      else {
                        if ((byte)(bVar11 + 0xbf) < 6) {
                          bVar11 = param_2[uVar8 * 2 + 2];
                          iVar6 = iVar6 + -0x37;
                          goto joined_r0x001004d4;
                        }
                        bVar11 = param_2[uVar8 * 2 + 2];
                        if (((byte)(bVar11 - 0x30) < 10) || ((byte)(bVar11 + 0x9f) < 6))
                        goto LAB_001004f4;
                        iVar6 = -1;
                      }
                      if ((5 < (byte)(bVar11 + 0xbf)) || (bVar11 = bVar11 - 0x37, iVar6 == -1))
                      goto LAB_001004f4;
                    }
LAB_00100465:
                    pbVar10[uVar8] = (byte)(iVar6 << 4) | bVar11;
                    uVar8 = uVar8 + 1;
                  } while (uVar8 < __size);
                  bVar11 = *pbVar10;
                  uVar5 = (uint)bVar11;
                  local_170 = pbVar10 + 1;
                  iVar6 = mbedtls_asn1_get_len(&local_170,pbVar10 + __size,&local_178);
                  if ((iVar6 == 0) && (local_178 < 0x101)) {
                    if ((bVar11 < 0x20) &&
                       (((0x50581000U >> (bVar11 & 0x1f) & 1) != 0 && (local_178 != 0)))) {
                      pbVar17 = local_170;
                      do {
                        if (*pbVar17 == 0) goto LAB_001004f4;
                        pbVar17 = pbVar17 + 1;
                      } while (local_170 + local_178 != pbVar17);
                    }
                    memcpy(local_148,local_170,local_178);
                    free(pbVar10);
                    goto LAB_00100369;
                  }
LAB_001004f4:
                  free(pbVar10);
                  goto LAB_001004fc;
                }
                local_198 = 0xffffd780;
              }
              else {
LAB_001004fc:
                local_198 = 0xffffdc80;
              }
              free(local_158);
              goto LAB_001000dd;
            }
            if (!bVar4) {
              pbVar10 = param_2 + ((int)pbVar13 - (int)param_2);
              if (param_2 < pbVar10) {
                puVar14 = local_148;
                do {
                  puVar14 = puVar14 + 1;
                  uVar5 = (uint)bVar11;
                  pbVar17 = param_2;
                  if (bVar11 != 0x5c) goto LAB_00100170;
                  pbVar17 = param_2 + 2;
                  if (pbVar17 < pbVar10) {
                    bVar11 = param_2[1];
                    iVar6 = (int)(char)bVar11;
                    bVar2 = param_2[2];
                    iVar12 = (int)(char)bVar2;
                    if ((byte)(bVar11 - 0x30) < 10) {
                      iVar6 = iVar6 + -0x30;
                      if ((byte)(bVar2 - 0x30) < 10) {
                        uVar5 = iVar12 - 0x30U | iVar6 * 0x10;
                        if (uVar5 == 0) goto LAB_001001d8;
                      }
                      else {
LAB_00100250:
                        if ((byte)(bVar2 + 0x9f) < 6) {
                          uVar5 = iVar12 - 0x57;
                        }
                        else {
                          if (5 < (byte)(bVar2 + 0xbf)) goto LAB_001001f0;
                          uVar5 = iVar12 - 0x37;
                        }
                        uVar5 = iVar6 << 4 | uVar5;
                      }
                    }
                    else {
                      if ((byte)(bVar11 + 0x9f) < 6) {
                        iVar6 = iVar6 + -0x57;
                      }
                      else {
                        if (5 < (byte)(bVar11 + 0xbf)) goto LAB_001001f0;
                        iVar6 = iVar6 + -0x37;
                      }
                      if (9 < (byte)(bVar2 - 0x30)) goto LAB_00100250;
                      uVar5 = (int)(char)bVar2 - 0x30U | iVar6 << 4;
                    }
                  }
                  else {
LAB_001001f0:
                    pbVar17 = param_2 + 1;
                    if (pbVar10 <= pbVar17) goto LAB_001001d8;
                    uVar5 = (uint)(char)param_2[1];
                    pcVar15 = strchr(" ,=+<>#;\"\\",uVar5);
                    if (pcVar15 == (char *)0x0) goto LAB_001001d8;
                  }
LAB_00100170:
                  puVar14[-1] = (char)uVar5;
                  uVar8 = (long)puVar14 - (long)local_148;
                  if (uVar8 == 0x100) goto LAB_001001d8;
                  param_2 = pbVar17 + 1;
                  if (pbVar10 <= param_2) goto LAB_0010035f;
                  bVar11 = pbVar17[1];
                } while( true );
              }
              uVar8 = 0;
LAB_0010035f:
              uVar5 = *(uint *)(puVar16 + 0x18);
              local_178 = uVar8;
LAB_00100369:
              lVar9 = mbedtls_asn1_store_named_data(param_1,local_158,local_160,local_148);
              free(local_158);
              local_158 = (void *)0x0;
              if (lVar9 != 0) {
                *(uint *)(lVar9 + 0x18) = uVar5;
                pbVar10 = pbVar13;
                if (pbVar13 < pbVar1) {
                  do {
                    pbVar17 = pbVar10 + 1;
                    pbVar13 = pbVar10;
                    if (pbVar10[1] != 0x20) break;
                    pbVar13 = pbVar1;
                    pbVar10 = pbVar17;
                  } while (pbVar1 != pbVar17);
                }
                param_2 = pbVar13 + 1;
                local_198 = 0;
                bVar3 = true;
                pbVar13 = param_2;
                goto LAB_001000b0;
              }
              local_198 = 0xffffd780;
              goto LAB_001000dd;
            }
          }
LAB_001001d8:
          free(local_158);
LAB_001001e2:
          local_198 = 0xffffdc80;
          goto LAB_001000dd;
        }
LAB_001000a4:
        if (pbVar1 == pbVar13) goto LAB_00100116;
        bVar3 = false;
        pbVar13 = pbVar13 + 1;
LAB_001000b0:
        if (pbVar1 < pbVar13) goto LAB_001000ce;
      }
      if (bVar11 == 0x3d) {
        pcVar15 = "CN";
        puVar16 = x509_attrs;
        sVar7 = (long)pbVar13 - (long)param_2;
        do {
          if ((sVar7 == *(size_t *)(puVar16 + 8)) &&
             (iVar6 = strncmp(pcVar15,(char *)param_2,sVar7), iVar6 == 0)) {
            pcVar15 = *(char **)(puVar16 + 0x10);
            sVar7 = strlen(pcVar15);
            local_160 = sVar7;
            local_158 = calloc(1,sVar7);
            __memcpy_chk(local_158,pcVar15,sVar7,sVar7);
            param_2 = pbVar13 + 1;
            bVar4 = false;
            goto LAB_001000a4;
          }
          pcVar15 = *(char **)(puVar16 + 0x20);
          puVar16 = puVar16 + 0x20;
        } while (pcVar15 != (char *)0x0);
        iVar6 = mbedtls_oid_from_numeric_string(local_168,param_2,sVar7);
        if (iVar6 == 0) {
          bVar11 = *pbVar13;
          param_2 = pbVar13 + 1;
          puVar16 = (undefined1 *)0x0;
          bVar4 = bVar3;
          goto LAB_001000a0;
        }
        goto LAB_001001e2;
      }
      pbVar13 = pbVar13 + 1;
    } while (pbVar13 <= pbVar1);
  }
LAB_001000ce:
  if (local_158 != (void *)0x0) {
    free(local_158);
  }
LAB_001000dd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_198;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 mbedtls_x509_set_extension(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 in_CL;
  void *in_R8;
  size_t in_R9;
  
  if (in_R9 != 0xffffffffffffffff) {
    lVar1 = mbedtls_asn1_store_named_data();
    if (lVar1 == 0) {
      uVar2 = 0xffffd780;
    }
    else {
      **(undefined1 **)(lVar1 + 0x28) = in_CL;
      memcpy((void *)(*(long *)(lVar1 + 0x28) + 1),in_R8,in_R9);
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffd800;
}



ulong mbedtls_x509_write_names(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_3 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    do {
      uVar1 = *(undefined8 *)(param_3 + 0x10);
      uVar2 = *(undefined8 *)(param_3 + 8);
      uVar3 = mbedtls_asn1_write_tagged_string
                        (param_1,param_2,*(undefined4 *)(param_3 + 0x18),
                         *(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x20));
      if ((int)uVar3 < 0) {
        return (ulong)uVar3;
      }
      uVar4 = mbedtls_asn1_write_oid(param_1,param_2,uVar1,uVar2);
      if ((int)uVar4 < 0) goto LAB_001007d0;
      lVar7 = (long)(int)uVar4;
      uVar5 = mbedtls_asn1_write_len(param_1,param_2,(int)uVar3 + lVar7);
      if ((int)uVar5 < 0) {
        return (ulong)uVar5;
      }
      uVar4 = mbedtls_asn1_write_tag(param_1,param_2,0x30);
      if ((int)uVar4 < 0) goto LAB_001007d0;
      lVar7 = (long)(int)uVar4 + (long)(int)uVar5 + (int)uVar3 + lVar7;
      uVar3 = mbedtls_asn1_write_len(param_1,param_2,lVar7);
      if ((int)uVar3 < 0) {
        return (ulong)uVar3;
      }
      uVar4 = mbedtls_asn1_write_tag(param_1,param_2,0x31);
      if ((int)uVar4 < 0) goto LAB_001007d0;
      uVar8 = (long)(int)uVar4 + (int)uVar3 + lVar7;
      iVar6 = (int)uVar8;
      if (iVar6 < 0) {
        return uVar8 & 0xffffffff;
      }
      param_3 = *(long *)(param_3 + 0x30);
      lVar9 = lVar9 + iVar6;
    } while (param_3 != 0);
  }
  uVar3 = mbedtls_asn1_write_len(param_1,param_2,lVar9);
  uVar8 = (ulong)uVar3;
  if (-1 < (int)uVar3) {
    uVar4 = mbedtls_asn1_write_tag(param_1,param_2,0x30);
    if ((int)uVar4 < 0) {
LAB_001007d0:
      uVar8 = (ulong)uVar4;
    }
    else {
      uVar8 = (ulong)(uVar4 + uVar3 + (int)lVar9);
    }
  }
  return uVar8;
}



int mbedtls_x509_write_sig
              (ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,void *param_5,
              ulong param_6,int param_7)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *param_1;
  if ((param_2 <= uVar1) && (param_6 <= uVar1 - param_2)) {
    *param_1 = uVar1 - param_6;
    memcpy((void *)(uVar1 - param_6),param_5,param_6);
    uVar1 = *param_1;
    if (uVar1 != param_2 && -1 < (long)(uVar1 - param_2)) {
      *param_1 = uVar1 - 1;
      *(undefined1 *)(uVar1 - 1) = 0;
      iVar2 = mbedtls_asn1_write_len(param_1,param_2,param_6 + 1);
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar3 = mbedtls_asn1_write_tag(param_1,param_2,3);
      if (iVar3 < 0) {
        return iVar3;
      }
      iVar4 = mbedtls_asn1_write_algorithm_identifier_ext
                        (param_1,param_2,param_3,param_4,0,param_7 != 4);
      if (iVar4 < 0) {
        return iVar4;
      }
      return iVar4 + iVar3 + iVar2 + (int)(param_6 + 1);
    }
  }
  return -0x6c;
}



ulong mbedtls_x509_write_extensions(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    do {
      iVar1 = mbedtls_asn1_write_raw_buffer
                        (param_1,param_2,*(long *)(param_3 + 0x28) + 1,
                         *(long *)(param_3 + 0x20) + -1);
      uVar4 = (ulong)iVar1;
      if (iVar1 < 0) goto LAB_00100a62;
      uVar2 = mbedtls_asn1_write_len(param_1,param_2,*(long *)(param_3 + 0x20) + -1);
      if ((int)uVar2 < 0) {
        uVar4 = (ulong)uVar2;
        goto LAB_00100a62;
      }
      uVar3 = mbedtls_asn1_write_tag(param_1,param_2,4);
      if ((int)uVar3 < 0) goto LAB_00100a60;
      lVar6 = (long)(int)uVar3 + uVar4 + (long)(int)uVar2;
      if (**(char **)(param_3 + 0x28) != '\0') {
        iVar1 = mbedtls_asn1_write_bool(param_1,param_2,1);
        uVar4 = (ulong)iVar1;
        if (iVar1 < 0) goto LAB_00100a62;
        lVar6 = lVar6 + uVar4;
      }
      iVar1 = mbedtls_asn1_write_raw_buffer
                        (param_1,param_2,*(undefined8 *)(param_3 + 0x10),
                         *(undefined8 *)(param_3 + 8));
      uVar4 = (ulong)iVar1;
      if (iVar1 < 0) goto LAB_00100a62;
      uVar2 = mbedtls_asn1_write_len(param_1,param_2,*(undefined8 *)(param_3 + 8));
      if ((int)uVar2 < 0) {
        uVar4 = (ulong)uVar2;
        goto LAB_00100a62;
      }
      uVar3 = mbedtls_asn1_write_tag(param_1,param_2,6);
      if ((int)uVar3 < 0) {
LAB_00100a60:
        uVar4 = (ulong)uVar3;
        goto LAB_00100a62;
      }
      lVar6 = (long)(int)uVar3 + (long)(int)uVar2 + uVar4 + lVar6;
      iVar1 = mbedtls_asn1_write_len(param_1,param_2,lVar6);
      uVar4 = (ulong)iVar1;
      if (iVar1 < 0) goto LAB_00100a62;
      uVar3 = mbedtls_asn1_write_tag(param_1,param_2,0x30);
      if ((int)uVar3 < 0) goto LAB_00100a60;
      uVar4 = (long)(int)uVar3 + uVar4 + lVar6;
      iVar1 = (int)uVar4;
      uVar4 = uVar4 & 0xffffffff;
      if (iVar1 < 0) goto LAB_00100a62;
      param_3 = *(long *)(param_3 + 0x30);
      uVar5 = uVar5 + (long)iVar1;
    } while (param_3 != 0);
    uVar4 = uVar5 & 0xffffffff;
  }
LAB_00100a62:
  return uVar4 & 0xffffffff;
}


