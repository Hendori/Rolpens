
int mbedtls_x509write_crt_set_key_identifier(long param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined1 *local_860;
  undefined8 local_858 [256];
  undefined1 local_58 [20];
  undefined1 local_44 [4];
  long local_40;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_860 = local_44;
  puVar5 = local_858;
  for (lVar4 = 0x102; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  if (param_2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  *(undefined4 *)puVar5 = 0;
  iVar1 = mbedtls_pk_write_pubkey(&local_860,local_858,uVar3);
  if (-1 < iVar1) {
    uVar3 = mbedtls_md_info_from_type(5);
    iVar1 = mbedtls_md(uVar3,(0x814 - (long)iVar1) + (long)local_858,(long)iVar1,local_58);
    if (((iVar1 == 0) &&
        (local_860 = local_58, iVar2 = mbedtls_asn1_write_len(&local_860,local_858,0x14),
        iVar1 = iVar2, -1 < iVar2)) &&
       (iVar1 = mbedtls_asn1_write_tag(&local_860,local_858,param_3), -1 < iVar1)) {
      lVar4 = (long)iVar2 + 0x14 + (long)iVar1;
      if (param_2 == 0) {
        iVar1 = mbedtls_x509_set_extension
                          (param_1 + 0x68,&_LC0,3,0,(long)local_858 + (0x814 - lVar4),lVar4);
      }
      else {
        iVar2 = mbedtls_asn1_write_len(&local_860,local_858,lVar4);
        iVar1 = iVar2;
        if ((-1 < iVar2) && (iVar1 = mbedtls_asn1_write_tag(&local_860,local_858,0x30), -1 < iVar1))
        {
          iVar1 = mbedtls_x509_set_extension
                            (param_1 + 0x68,&_LC1,3,0,
                             (long)local_858 + (0x814 - ((long)iVar1 + iVar2 + lVar4)));
        }
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



int x509_write_time_constprop_0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((*param_3 < '2') || (((*param_3 == '2' && (param_3[1] == '0')) && (param_3[2] < '5')))) {
    iVar1 = mbedtls_asn1_write_raw_buffer(param_1,param_2,param_3 + 2,0xd);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar1);
    uVar4 = 0x17;
    if (iVar2 < 0) {
      return iVar2;
    }
  }
  else {
    iVar1 = mbedtls_asn1_write_raw_buffer(param_1,param_2,param_3,0xf);
    if (iVar1 < 0) {
      return iVar1;
    }
    iVar2 = mbedtls_asn1_write_len(param_1,param_2,(long)iVar1);
    if (iVar2 < 0) {
      return iVar2;
    }
    uVar4 = 0x18;
  }
  iVar3 = mbedtls_asn1_write_tag(param_1,param_2,uVar4);
  if (-1 < iVar3) {
    iVar3 = iVar3 + iVar2 + iVar1;
  }
  return iVar3;
}



void mbedtls_x509write_crt_init(undefined4 *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  puVar2 = (undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8);
  for (uVar1 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8)) + 0x70U >> 3)
      ; uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = 2;
  return;
}



void mbedtls_x509write_crt_free(long param_1)

{
  if (param_1 != 0) {
    mbedtls_asn1_free_named_data_list(param_1 + 0x30);
    mbedtls_asn1_free_named_data_list(param_1 + 0x38);
    mbedtls_asn1_free_named_data_list(param_1 + 0x68);
    mbedtls_platform_zeroize(param_1,0x70);
    return;
  }
  return;
}



void mbedtls_x509write_crt_set_version(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return;
}



void mbedtls_x509write_crt_set_md_alg(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



void mbedtls_x509write_crt_set_subject_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}



void mbedtls_x509write_crt_set_issuer_key(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



void mbedtls_x509write_crt_set_subject_name(long param_1)

{
  mbedtls_x509_string_to_names(param_1 + 0x30);
  return;
}



void mbedtls_x509write_crt_set_issuer_name(long param_1)

{
  mbedtls_x509_string_to_names(param_1 + 0x38);
  return;
}



undefined8 mbedtls_x509write_crt_set_serial_raw(long param_1,void *param_2,size_t param_3)

{
  if (param_3 < 0x15) {
    *(size_t *)(param_1 + 0x18) = param_3;
    memcpy((void *)(param_1 + 4),param_2,param_3);
    return 0;
  }
  return 0xffffd800;
}



undefined8 mbedtls_x509write_crt_set_validity(long param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  
  sVar1 = strlen(param_2);
  if ((sVar1 == 0xe) && (sVar1 = strlen(param_3), sVar1 == 0xe)) {
    strncpy((char *)(param_1 + 0x44),param_2,0xf);
    strncpy((char *)(param_1 + 0x54),param_3,0xe);
    *(undefined1 *)(param_1 + 0x52) = 0x5a;
    *(undefined1 *)(param_1 + 0x62) = 0x5a;
    return 0;
  }
  return 0xffffd800;
}



void mbedtls_x509write_crt_set_subject_alternative_name(long param_1)

{
  mbedtls_x509_write_set_san_common(param_1 + 0x68);
  return;
}



void mbedtls_x509write_crt_set_extension(long param_1)

{
  mbedtls_x509_set_extension(param_1 + 0x68);
  return;
}



ulong mbedtls_x509write_crt_set_basic_constraints(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long in_FS_OFFSET;
  long *local_58;
  undefined8 local_49;
  undefined1 local_41;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = local_40;
  local_41 = 0;
  local_49 = 0;
  if (param_2 == 0) {
LAB_00100570:
    lVar4 = 0;
  }
  else {
    if (0x7f < param_3) {
      uVar3 = 0xffffd800;
      goto LAB_00100549;
    }
    if (param_2 == 0) goto LAB_00100570;
    if (param_3 < 0) {
      lVar4 = 0;
    }
    else {
      uVar1 = mbedtls_asn1_write_int(&local_58,&local_49);
      uVar3 = (ulong)uVar1;
      lVar4 = (long)(int)uVar1;
      if ((int)uVar1 < 0) goto LAB_00100549;
    }
    uVar1 = mbedtls_asn1_write_bool(&local_58,&local_49,1);
    uVar3 = (ulong)uVar1;
    if ((int)uVar1 < 0) goto LAB_00100549;
    lVar4 = lVar4 + (int)uVar1;
  }
  iVar2 = mbedtls_asn1_write_len(&local_58,&local_49,lVar4);
  uVar3 = (ulong)iVar2;
  if (-1 < iVar2) {
    uVar1 = mbedtls_asn1_write_tag(&local_58,&local_49,0x30);
    if ((int)uVar1 < 0) {
      uVar3 = (ulong)uVar1;
    }
    else {
      uVar1 = mbedtls_x509_set_extension
                        (param_1 + 0x68,&_LC2,3,param_2,
                         (long)local_40 - ((long)(int)uVar1 + uVar3 + lVar4));
      uVar3 = (ulong)uVar1;
    }
  }
LAB_00100549:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void mbedtls_x509write_crt_set_subject_key_identifier(undefined8 param_1)

{
  mbedtls_x509write_crt_set_key_identifier(param_1,0,4);
  return;
}



void mbedtls_x509write_crt_set_authority_key_identifier(undefined8 param_1)

{
  mbedtls_x509write_crt_set_key_identifier(param_1,1,0x80);
  return;
}



undefined8 mbedtls_x509write_crt_set_key_usage(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long *local_20;
  undefined2 local_17;
  undefined4 local_15;
  undefined1 local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_15 = 0;
  local_11 = 0;
  local_17 = 0;
  if ((param_2 & 0xffff7f00) == 0) {
    local_20 = &local_10;
    local_17 = (undefined2)param_2;
    uVar2 = mbedtls_asn1_write_named_bitstring(&local_20,&local_15,&local_17,9);
    iVar1 = (int)uVar2;
    if (-1 < iVar1) {
      if (iVar1 - 3U < 3) {
        uVar2 = mbedtls_x509_set_extension(param_1 + 0x68,&_LC3,3,1,local_20,(long)iVar1);
      }
      else {
        uVar2 = 0xffffde80;
      }
    }
  }
  else {
    uVar2 = 0xffffdf80;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int mbedtls_x509write_crt_set_ext_key_usage(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  undefined1 *local_150;
  undefined8 local_148 [32];
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_150 = local_48;
  puVar8 = local_148;
  for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (param_2 == (int *)0x0) {
LAB_00100792:
    iVar4 = -0x2800;
  }
  else {
    lVar6 = 0;
    piVar1 = param_2;
    piVar7 = (int *)0x0;
    do {
      do {
        piVar5 = piVar1;
        piVar1 = *(int **)(piVar5 + 6);
      } while (*(int **)(piVar5 + 6) != piVar7);
      if (*piVar5 != 6) goto LAB_00100792;
      iVar2 = mbedtls_asn1_write_raw_buffer
                        (&local_150,local_148,*(undefined8 *)(piVar5 + 4),
                         *(undefined8 *)(piVar5 + 2));
      iVar4 = iVar2;
      if (iVar2 < 0) goto LAB_00100798;
      iVar3 = mbedtls_asn1_write_len(&local_150,local_148,*(undefined8 *)(piVar5 + 2));
      iVar4 = iVar3;
      if (iVar3 < 0) goto LAB_00100798;
      iVar4 = mbedtls_asn1_write_tag(&local_150,local_148,6);
      if (iVar4 < 0) goto LAB_00100798;
      lVar6 = lVar6 + iVar2 + (long)iVar3 + (long)iVar4;
      piVar1 = param_2;
      piVar7 = piVar5;
    } while (piVar5 != param_2);
    iVar2 = mbedtls_asn1_write_len(&local_150,local_148,lVar6);
    iVar4 = iVar2;
    if (-1 < iVar2) {
      iVar4 = mbedtls_asn1_write_tag(&local_150,local_148,0x30);
      if (-1 < iVar4) {
        iVar4 = mbedtls_x509_set_extension
                          (param_1 + 0x68,&_LC4,3,1,local_150,(long)iVar4 + iVar2 + lVar6);
      }
    }
  }
LAB_00100798:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



void mbedtls_x509write_crt_set_ns_cert_type(long param_1,undefined1 param_2)

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
    mbedtls_x509_set_extension(param_1 + 0x68,&_LC5,9,0,local_20,(long)iVar1);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong mbedtls_x509write_crt_der
                (int *param_1,void *param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  size_t sVar13;
  undefined8 uVar14;
  void *pvVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  long in_FS_OFFSET;
  char *local_4b0;
  undefined8 local_4a8;
  char *local_4a0;
  char *local_498;
  undefined8 local_490;
  undefined1 local_488 [64];
  undefined1 local_448 [1032];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4a8 = 0;
  local_4a0 = (char *)((long)param_2 + param_3);
  iVar2 = mbedtls_pk_can_do(*(undefined8 *)(param_1 + 10),1);
  if (iVar2 == 0) {
    iVar2 = mbedtls_pk_can_do(*(undefined8 *)(param_1 + 10),4);
    if (iVar2 == 0) {
      uVar17 = 0xffffdd00;
      goto LAB_00100d50;
    }
    iVar2 = 4;
  }
  else {
    iVar2 = 1;
  }
  uVar3 = mbedtls_oid_get_oid_by_sig_alg(iVar2,param_1[0x10],&local_4b0,&local_4a8);
  uVar17 = (ulong)uVar3;
  if (uVar3 != 0) goto LAB_00100d50;
  lVar18 = 0;
  if (*param_1 == 2) {
    uVar3 = mbedtls_x509_write_extensions(&local_4a0,param_2,*(undefined8 *)(param_1 + 0x1a));
    uVar17 = (ulong)uVar3;
    if ((int)uVar3 < 0) goto LAB_00100d50;
    uVar4 = mbedtls_asn1_write_len(&local_4a0,param_2,(long)(int)uVar3);
    uVar17 = (ulong)uVar4;
    if ((int)uVar4 < 0) goto LAB_00100d50;
    uVar6 = mbedtls_asn1_write_tag(&local_4a0,param_2,0x30);
    if (-1 < (int)uVar6) {
      lVar18 = (long)(int)uVar6 + (long)(int)uVar4 + (long)(int)uVar3;
      uVar3 = mbedtls_asn1_write_len(&local_4a0,param_2,lVar18);
      uVar17 = (ulong)uVar3;
      if ((int)uVar3 < 0) goto LAB_00100d50;
      uVar6 = mbedtls_asn1_write_tag(&local_4a0,param_2,0xa3);
      if (-1 < (int)uVar6) {
        lVar18 = (long)(int)uVar6 + (int)uVar3 + lVar18;
        goto LAB_00100976;
      }
    }
  }
  else {
LAB_00100976:
    uVar3 = mbedtls_pk_write_pubkey_der
                      (*(undefined8 *)(param_1 + 8),param_2,(long)local_4a0 - (long)param_2);
    uVar17 = (ulong)uVar3;
    if ((int)uVar3 < 0) goto LAB_00100d50;
    local_4a0 = local_4a0 + -(long)(int)uVar3;
    uVar4 = mbedtls_x509_write_names(&local_4a0,param_2,*(undefined8 *)(param_1 + 0xc));
    uVar17 = (ulong)uVar4;
    if ((int)uVar4 < 0) goto LAB_00100d50;
    uVar5 = x509_write_time_constprop_0(&local_4a0,param_2,param_1 + 0x15);
    uVar17 = (ulong)uVar5;
    if ((int)uVar5 < 0) goto LAB_00100d50;
    uVar6 = x509_write_time_constprop_0(&local_4a0,param_2,param_1 + 0x11);
    if (-1 < (int)uVar6) {
      uVar7 = mbedtls_asn1_write_len(&local_4a0,param_2,(long)(int)uVar5 + (long)(int)uVar6);
      if ((int)uVar7 < 0) {
        uVar17 = (ulong)uVar7;
        goto LAB_00100d50;
      }
      uVar8 = mbedtls_asn1_write_tag(&local_4a0,param_2,0x30);
      if ((int)uVar8 < 0) {
        uVar17 = (ulong)uVar8;
        goto LAB_00100d50;
      }
      uVar9 = mbedtls_x509_write_names(&local_4a0,param_2,*(undefined8 *)(param_1 + 0xe));
      if ((int)uVar9 < 0) {
        uVar17 = (ulong)uVar9;
        goto LAB_00100d50;
      }
      sVar13 = strlen(local_4b0);
      uVar16 = 0;
      uVar10 = mbedtls_asn1_write_algorithm_identifier_ext
                         (&local_4a0,param_2,local_4b0,sVar13,0,iVar2 != 4);
      uVar17 = (ulong)uVar10;
      if ((int)uVar10 < 0) goto LAB_00100d50;
      uVar11 = mbedtls_asn1_write_raw_buffer
                         (&local_4a0,param_2,param_1 + 1,*(undefined8 *)(param_1 + 6));
      uVar17 = (ulong)uVar11;
      if ((int)uVar11 < 0) goto LAB_00100d50;
      lVar18 = (long)(int)uVar11 +
               (long)(int)uVar10 +
               (long)(int)uVar9 +
               (long)(int)uVar8 +
               (long)(int)uVar7 +
               (int)uVar3 + lVar18 + (long)(int)uVar4 + (long)(int)uVar5 + (long)(int)uVar6;
      if (*local_4a0 < '\0') {
        if ((long)local_4a0 - (long)param_2 < 1) {
          uVar17 = 0xffffd680;
          goto LAB_00100d50;
        }
        local_4a0[-1] = '\0';
        local_4a0 = local_4a0 + -1;
        iVar12 = mbedtls_asn1_write_len(&local_4a0,param_2,*(long *)(param_1 + 6) + 1);
        uVar17 = (ulong)iVar12;
        if (iVar12 < 0) goto LAB_00100d50;
        lVar18 = lVar18 + 1 + uVar17;
      }
      else {
        iVar12 = mbedtls_asn1_write_len(&local_4a0,param_2,*(undefined8 *)(param_1 + 6));
        uVar17 = (ulong)iVar12;
        if (iVar12 < 0) goto LAB_00100d50;
        lVar18 = lVar18 + uVar17;
      }
      iVar12 = mbedtls_asn1_write_tag(&local_4a0,param_2,2);
      uVar17 = (ulong)iVar12;
      if (iVar12 < 0) goto LAB_00100d50;
      lVar18 = lVar18 + uVar17;
      if (*param_1 != 0) {
        uVar3 = mbedtls_asn1_write_int(&local_4a0,param_2);
        uVar17 = (ulong)uVar3;
        if ((int)uVar3 < 0) goto LAB_00100d50;
        uVar4 = mbedtls_asn1_write_len(&local_4a0,param_2,(long)(int)uVar3);
        uVar17 = (ulong)uVar4;
        if ((int)uVar4 < 0) goto LAB_00100d50;
        uVar6 = mbedtls_asn1_write_tag(&local_4a0,param_2,0xa0);
        if ((int)uVar6 < 0) goto LAB_00100e20;
        lVar18 = (long)(int)uVar6 + (int)uVar3 + lVar18 + (long)(int)uVar4;
      }
      uVar3 = mbedtls_asn1_write_len(&local_4a0,param_2,lVar18);
      uVar17 = (ulong)uVar3;
      if ((int)uVar3 < 0) goto LAB_00100d50;
      uVar6 = mbedtls_asn1_write_tag(&local_4a0,param_2,0x30);
      pcVar1 = local_4a0;
      if (-1 < (int)uVar6) {
        sVar13 = (long)(int)uVar6 + (int)uVar3 + lVar18;
        uVar14 = mbedtls_md_info_from_type(param_1[0x10]);
        uVar3 = mbedtls_md(uVar14,pcVar1,sVar13,local_488);
        uVar17 = (ulong)uVar3;
        if (uVar3 == 0) {
          uVar3 = mbedtls_pk_sign(*(undefined8 *)(param_1 + 10),param_1[0x10],local_488,0,local_448,
                                  0x400,&local_490,param_4,param_5,uVar16);
          uVar17 = (ulong)uVar3;
          if (uVar3 == 0) {
            pvVar15 = memmove(param_2,local_4a0,sVar13);
            local_4a0 = (char *)((long)param_2 + sVar13);
            local_498 = (char *)((long)param_2 + param_3);
            uVar3 = mbedtls_x509_write_sig
                              (&local_498,local_4a0,local_4b0,local_4a8,local_448,local_490,iVar2,
                               pvVar15);
            uVar17 = (ulong)uVar3;
            if (-1 < (int)uVar3) {
              local_4a0 = local_498 + -sVar13;
              memmove(local_4a0,param_2,sVar13);
              uVar4 = mbedtls_asn1_write_len(&local_4a0,param_2,(long)(int)uVar3 + sVar13);
              uVar17 = (ulong)uVar4;
              if (-1 < (int)uVar4) {
                uVar6 = mbedtls_asn1_write_tag(&local_4a0,param_2,0x30);
                uVar17 = (long)(int)uVar6 + (long)(int)uVar4 + (long)(int)uVar3 + sVar13 &
                         0xffffffff;
                if ((int)uVar6 < 0) {
                  uVar17 = (ulong)uVar6;
                }
              }
            }
          }
        }
        goto LAB_00100d50;
      }
    }
  }
LAB_00100e20:
  uVar17 = (ulong)uVar6;
LAB_00100d50:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17 & 0xffffffff;
}



void mbedtls_x509write_crt_pem(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = mbedtls_x509write_crt_der();
  if (-1 < iVar1) {
    mbedtls_pem_write_buffer
              ("-----BEGIN CERTIFICATE-----\n","-----END CERTIFICATE-----\n",
               (param_3 - iVar1) + param_2,(long)iVar1,param_2,param_3,local_28);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


