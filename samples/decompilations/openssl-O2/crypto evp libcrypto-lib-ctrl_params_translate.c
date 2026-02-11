
undefined8 fix_group_ecx(int param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (param_1 == 7) {
    if ((*(byte *)*param_3 & 6) != 0) {
      *(undefined4 *)(param_3 + 1) = 0;
      uVar2 = 1;
      goto LAB_00100062;
    }
  }
  else if (param_1 == 8) {
    iVar1 = OSSL_PARAM_get_utf8_string_ptr(param_3[6],&local_18);
    if (iVar1 != 0) {
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(*param_3 + 0x18),local_18);
      if (iVar1 == 0) {
        *(undefined4 *)((long)param_3 + 0x1c) = 1;
        uVar2 = 1;
        goto LAB_00100062;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x807,"fix_group_ecx");
    ERR_set_error(6,0x80106,0);
    *(undefined4 *)((long)param_3 + 0x1c) = 0;
  }
  uVar2 = 0;
LAB_00100062:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint * lookup_translation(uint *param_1,uint *param_2,long param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = param_2 + param_3 * 0x10;
  do {
    uVar2 = param_2[1];
    if ((((uVar2 != 0xffffffff) != (param_2[2] == 0xffffffff)) &&
        ((param_2[3] == 0xffffffff || ((param_2[3] & param_1[3]) != 0)))) &&
       ((uVar2 == 0xffffffff || ((uVar2 == param_1[1] || (param_2[2] == param_1[2])))))) {
      if (param_1[4] == 0) {
        if (*(long *)(param_1 + 6) == 0) {
          if (*(long *)(param_1 + 10) == 0) {
            return (uint *)0x0;
          }
          if ((*param_2 == 0) || (*param_2 == *param_1)) {
            if (*(long *)(param_2 + 10) == 0) {
              return param_2;
            }
            iVar3 = OPENSSL_strcasecmp();
            if (iVar3 == 0) {
              return param_2;
            }
          }
        }
        else if ((*param_2 & 0xfffffffd) == 0) {
          if ((*(long *)(param_2 + 6) != 0) && (iVar3 = OPENSSL_strcasecmp(), iVar3 == 0)) {
            uVar5 = *(undefined8 *)(param_1 + 6);
            uVar4 = 0;
LAB_001001ae:
            *(undefined8 *)(param_1 + 8) = uVar4;
            *(undefined8 *)(param_1 + 6) = uVar5;
            return param_2;
          }
          if ((*(long *)(param_2 + 8) != 0) &&
             (iVar3 = OPENSSL_strcasecmp(*(undefined8 *)(param_1 + 8)), iVar3 == 0)) {
            uVar4 = *(undefined8 *)(param_1 + 8);
            uVar5 = 0;
            goto LAB_001001ae;
          }
        }
      }
      else if (param_1[4] == param_2[4]) {
        return param_2;
      }
    }
    param_2 = param_2 + 0x10;
    if (param_2 == puVar1) {
      return (uint *)0x0;
    }
  } while( true );
}



void get_cipher_by_name(void)

{
  evp_get_cipherbyname_ex();
  return;
}



void get_cipher_name(void)

{
  EVP_CIPHER_get0_name();
  return;
}



void get_md_by_name(void)

{
  evp_get_digestbyname_ex();
  return;
}



void get_md_name(void)

{
  EVP_MD_get0_name();
  return;
}



undefined8 evp_pkey_ctx_setget_params_to_ctrl(EVP_PKEY_CTX *param_1,int param_2,ulong *param_3)

{
  int keytype;
  ulong uVar1;
  int optype;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  EVP_PKEY_CTX **ppEVar6;
  long in_FS_OFFSET;
  byte bVar7;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  EVP_PKEY_CTX *local_d8;
  int local_d0;
  int local_cc;
  int local_bc;
  void *local_b8;
  ulong *local_a8;
  void *local_60;
  long local_40;
  
  bVar7 = 0;
  keytype = *(int *)(param_1 + 0x74);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  optype = *(int *)param_1;
  if (*(int *)param_1 == 0) {
    optype = -1;
  }
  if (param_3 != (ulong *)0x0) {
    for (; uVar1 = *param_3, uVar1 != 0; param_3 = param_3 + 5) {
      ppEVar6 = &local_d8;
      for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
        *ppEVar6 = (EVP_PKEY_CTX *)0x0;
        ppEVar6 = ppEVar6 + (ulong)bVar7 * -2 + 1;
      }
      local_f8._8_8_ = 0;
      local_f8._0_8_ = uVar1;
      local_f8 = local_f8 << 0x40;
      pcVar5 = default_fixup_args;
      local_108 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_118 = param_2;
      local_114 = keytype;
      local_110 = keytype;
      local_10c = optype;
      local_d0 = param_2;
      lVar4 = lookup_translation(&local_118,evp_pkey_ctx_translations,0x56);
      if (lVar4 != 0) {
        pcVar5 = *(code **)(lVar4 + 0x38);
        if (pcVar5 == (code *)0x0) {
          pcVar5 = default_fixup_args;
        }
        local_cc = *(int *)(lVar4 + 0x10);
      }
      local_d8 = param_1;
      local_a8 = param_3;
      iVar2 = (*pcVar5)(7,lVar4,&local_d8);
      if (iVar2 < 1) {
LAB_001003bb:
        if (-1 < iVar2) goto LAB_001002c4;
        if (local_60 != (void *)0x0) {
          CRYPTO_free(local_60);
        }
LAB_001003e1:
        uVar3 = 0;
        goto LAB_001003e3;
      }
      if (local_d0 != 0) {
        iVar2 = EVP_PKEY_CTX_ctrl(param_1,keytype,optype,local_cc,local_bc,local_b8);
        goto LAB_001003bb;
      }
LAB_001002c4:
      local_bc = iVar2;
      (*pcVar5)(8,lVar4,&local_d8);
      iVar2 = local_bc;
      if (local_60 != (void *)0x0) {
        CRYPTO_free(local_60);
      }
      if (iVar2 < 1) goto LAB_001003e1;
    }
  }
  uVar3 = 1;
LAB_001003e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 default_check_isra_0(uint param_1,int *param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 4) {
    if (param_2 == (int *)0x0) {
      return 1;
    }
    if (*param_2 != 1) {
      if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
      ERR_set_error(6,0xc0103,0);
      return 0;
    }
    ERR_new();
    uVar1 = 0x13c;
  }
  else if (param_1 < 5) {
    if (param_1 != 1) {
      return 1;
    }
    if (param_2 != (int *)0x0) {
      if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) {
        return 1;
      }
      ERR_new();
      uVar1 = 0x12f;
LAB_00100531:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar1,"default_check");
      ERR_set_error(6,0xc0103,0);
      return 0xffffffff;
    }
    ERR_new();
    uVar1 = 0x12a;
  }
  else {
    if (1 < param_1 - 7) {
      return 1;
    }
    if (param_2 != (int *)0x0) {
      if ((param_2[4] != 0) && (param_2[0xc] != 0)) {
        return 1;
      }
      ERR_new();
      uVar1 = 0x14e;
      goto LAB_00100531;
    }
    ERR_new();
    uVar1 = 0x149;
  }
  ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar1,"default_check");
  ERR_set_error(6,0x93,0);
  return 0xfffffffe;
}



ulong default_fixup_args(int param_1,long param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  char *__s;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  ulong uVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = default_check_isra_0();
  uVar12 = (ulong)uVar3;
  if ((int)uVar3 < 1) goto switchD_0010061e_caseD_5;
  switch(param_1) {
  case 0:
  case 8:
    uVar3 = *(uint *)((long)param_3 + 0x1c);
    uVar12 = (ulong)uVar3;
    if (*(int *)(param_3 + 1) == 1) {
      iVar4 = *(int *)(param_2 + 0x30);
      lVar10 = (long)(int)uVar3;
      if (param_1 == 0) {
        lVar10 = param_3[5];
      }
      if (iVar4 == 0) {
        if (*(long *)(param_2 + 0x38) == 0) {
          ERR_new();
          uVar12 = 0;
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x295,"default_fixup_args");
          ERR_set_error(6,0xc0103,0);
          break;
        }
        iVar4 = *(int *)(param_3[6] + 8);
      }
      switch(iVar4) {
      default:
        ERR_new();
        uVar12 = 0;
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x2b1,"default_fixup_args");
        ERR_set_error(6,0x8010c,"[action:%d, state:%d] unsupported OSSL_PARAM data type %d",
                      *(undefined4 *)(param_3 + 1),param_1,*(undefined4 *)(param_2 + 0x30));
        goto switchD_0010061e_caseD_5;
      case 1:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar12 = OSSL_PARAM_set_int(param_3[6],uVar3);
          return uVar12;
        }
        break;
      case 2:
        if (param_3[4] == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar12 = OSSL_PARAM_set_uint(param_3[6],uVar3);
            return uVar12;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar12 = OSSL_PARAM_set_BN();
          return uVar12;
        }
        break;
      case 4:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar12 = OSSL_PARAM_set_utf8_string(param_3[6],param_3[4]);
          return uVar12;
        }
        break;
      case 5:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar12 = OSSL_PARAM_set_octet_string(param_3[6],param_3[4],lVar10);
          return uVar12;
        }
        break;
      case 7:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar12 = OSSL_PARAM_set_octet_ptr(param_3[6],*(undefined8 *)param_3[4],lVar10);
          return uVar12;
        }
      }
      goto LAB_00100fd1;
    }
    break;
  case 1:
    if (*(int *)(param_3 + 1) == 0) {
      ERR_new();
      uVar12 = 0;
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x19d,"default_fixup_args");
      ERR_set_error(6,0x8010c,"[action:%d, state:%d]",*(undefined4 *)(param_3 + 1),1);
      break;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      puVar1 = (uint *)*param_3;
      uVar3 = *puVar1;
      if (((uVar3 & 0xc1f0) == 0) || (*(long *)(puVar1 + 0xc) != 0)) {
        if ((uVar3 & 0x800) == 0) {
          if ((uVar3 & 0x600) == 0) {
LAB_001006aa:
            if ((uVar3 & 0x3000) == 0) goto LAB_001006b6;
          }
          if (*(long *)(puVar1 + 0xc) != 0) {
LAB_001006b6:
            if ((((uVar3 & 6) == 0) && ((uVar3 & 8) == 0)) || (*(long *)(puVar1 + 10) != 0))
            goto code_r0x001008b3;
          }
        }
        else if (*(long *)(puVar1 + 0xc) != 0) {
          if ((uVar3 & 0x600) == 0) goto LAB_001006aa;
          goto LAB_001006b6;
        }
      }
      ERR_new();
      uVar12 = 0xfffffffe;
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x1b3,"default_fixup_args");
      ERR_set_error(6,0x93,0);
      break;
    }
code_r0x001008b3:
    switch(*(undefined4 *)(param_2 + 0x30)) {
    case 1:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_int(&local_78,*(undefined8 *)(param_2 + 0x28),(long)param_3 + 0x1c);
      goto LAB_001009c5;
    case 2:
      if ((BIGNUM *)param_3[4] == (BIGNUM *)0x0) {
        puVar11 = (undefined8 *)param_3[6];
        OSSL_PARAM_construct_uint(&local_78,*(undefined8 *)(param_2 + 0x28),(long)param_3 + 0x1c);
        goto LAB_00100a2d;
      }
      if (*(int *)(param_3 + 1) == 2) {
        iVar5 = BN_num_bits((BIGNUM *)param_3[4]);
        iVar4 = iVar5 + 0xe;
        if (-1 < iVar5 + 7) {
          iVar4 = iVar5 + 7;
        }
        param_3[0x11] = (long)(iVar4 >> 3);
        pvVar9 = CRYPTO_malloc(iVar4 >> 3,"crypto/evp/ctrl_params_translate.c",0x1ce);
        param_3[0xf] = pvVar9;
        if (pvVar9 == (void *)0x0) goto LAB_001007b5;
        iVar4 = BN_bn2nativepad(param_3[4],pvVar9,*(undefined4 *)(param_3 + 0x11));
        if (-1 < iVar4) {
          puVar11 = (undefined8 *)param_3[6];
          OSSL_PARAM_construct_BN
                    (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[0xf],param_3[0x11]);
          goto LAB_00100aad;
        }
        uVar12 = 0;
        CRYPTO_free((void *)param_3[0xf]);
        param_3[0xf] = 0;
      }
      else {
        ERR_new();
        uVar12 = 0;
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x1df,"default_fixup_args");
        ERR_set_error(6,0x8010c,"[action:%d, state:%d] trying to get a BIGNUM via ctrl call",
                      *(undefined4 *)(param_3 + 1),1);
      }
      break;
    case 4:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_utf8_string
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
LAB_00100aad:
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
      break;
    case 5:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_octet_string
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
      break;
    case 6:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_utf8_ptr
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
LAB_00100a2d:
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
      break;
    case 7:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_octet_ptr
                (&local_78,*(undefined8 *)(param_2 + 0x28),param_3[4],
                 (long)*(int *)((long)param_3 + 0x1c));
LAB_001009c5:
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
    }
    break;
  case 2:
    if ((*(int *)(param_3 + 1) == 1) && (*(int *)(param_2 + 0x30) - 4U < 4)) {
      *(int *)((long)param_3 + 0x1c) = (int)*(undefined8 *)(param_3[6] + 0x20);
    }
    break;
  default:
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x18c,"default_fixup_args");
    ERR_set_error(6,0xc0101,"[action:%d, state:%d]",*(undefined4 *)(param_3 + 1),param_1);
LAB_001007b5:
    uVar12 = 0;
    break;
  case 4:
    local_44 = 0;
    puVar11 = (undefined8 *)param_3[2];
    uVar2 = param_3[4];
    if (*(int *)(param_3 + 1) == 2) {
      puVar13 = puVar11;
      if (param_2 != 0) {
        puVar13 = *(undefined8 **)(param_2 + 0x28);
        param_3[2] = puVar13;
        if (*(int *)(param_3 + 3) != 0) {
          *(undefined4 *)(param_3 + 8) = 0x786568;
          uVar8 = OPENSSL_strlcat(param_3 + 8,puVar13,0x32);
          puVar13 = param_3 + 8;
          if (uVar8 < 4) {
            ERR_new();
            uVar12 = 0xffffffff;
            ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x235,"default_fixup_args");
            ERR_set_error(6,0xc0103,0);
            break;
          }
        }
      }
      uVar6 = EVP_PKEY_CTX_settable_params(*param_3);
      __s = (char *)param_3[4];
      sVar7 = strlen(__s);
      iVar4 = OSSL_PARAM_allocate_from_text(param_3[6],uVar6,puVar13,__s,sVar7,&local_44);
      if (iVar4 == 0) {
        if (local_44 != 0) goto LAB_001007b5;
        ERR_new();
        uVar12 = 0xfffffffe;
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x242,"default_fixup_args");
        ERR_set_error(6,0x93,"[action:%d, state:%d] name=%s, value=%s",*(undefined4 *)(param_3 + 1),
                      4,puVar11,uVar2);
      }
      else {
        uVar2 = *(undefined8 *)(param_3[6] + 0x18);
        param_3[0xf] = *(undefined8 *)(param_3[6] + 0x10);
        param_3[0x11] = uVar2;
      }
    }
    else {
      ERR_new();
      uVar12 = 0;
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x224,"default_fixup_args");
      ERR_set_error(6,0x93,"[action:%d, state:%d] only setting allowed",*(undefined4 *)(param_3 + 1)
                    ,4);
    }
    break;
  case 5:
    break;
  case 7:
    if (*(int *)(param_3 + 1) != 2) {
      if ((*(int *)(param_3 + 1) == 1) && (*(int *)(param_2 + 0x30) == 7)) {
        param_3[4] = param_3 + 0x10;
      }
      break;
    }
    switch(*(undefined4 *)(param_2 + 0x30)) {
    default:
      ERR_new();
      uVar12 = 0;
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x283,"default_fixup_args");
      ERR_set_error(6,0x8010c,"[action:%d, state:%d] unknown OSSL_PARAM data type %d",
                    *(undefined4 *)(param_3 + 1),7,*(undefined4 *)(param_2 + 0x30));
      goto switchD_0010061e_caseD_5;
    case 1:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = OSSL_PARAM_get_int(param_3[6],(long)param_3 + 0x1c);
        return uVar12;
      }
      break;
    case 2:
      if (param_3[4] == 0) {
        iVar4 = OSSL_PARAM_get_uint(param_3[6],(long)param_3 + 0x1c);
        uVar12 = (ulong)(iVar4 != 0);
      }
      else {
        iVar4 = OSSL_PARAM_get_BN();
        uVar12 = (ulong)(iVar4 != 0);
      }
      goto switchD_0010061e_caseD_5;
    case 4:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = OSSL_PARAM_get_utf8_string(param_3[6],param_3[4],param_3[5]);
        return uVar12;
      }
      break;
    case 5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = OSSL_PARAM_get_octet_string(param_3[6],param_3 + 4,param_3[5],(long)param_3 + 0x1c)
        ;
        return uVar12;
      }
      break;
    case 7:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar12 = OSSL_PARAM_get_octet_ptr(param_3[6],param_3[4],param_3 + 5);
        return uVar12;
      }
    }
    goto LAB_00100fd1;
  }
switchD_0010061e_caseD_5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_00100fd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fix_ecdh_cofactor(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) == 0) {
      if (*(int *)(param_3 + 0x1c) == -2) {
        *(undefined4 *)(param_3 + 8) = 1;
      }
      else {
        *(undefined4 *)(param_3 + 8) = 2;
      }
      uVar1 = default_check_isra_0(1,param_2);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      if ((*(int *)(param_3 + 8) == 2) && (2 < *(int *)(param_3 + 0x1c) + 1U)) {
        return 0xfffffffe;
      }
      uVar1 = default_fixup_args(1,param_2,param_3);
      return uVar1;
    }
  }
  else {
    if (param_1 == 4) {
      *(undefined4 *)(param_3 + 8) = 2;
      uVar1 = default_check_isra_0(4);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      uVar1 = default_fixup_args(4,param_2,param_3);
      return uVar1;
    }
    if (param_1 != 7) {
      if (param_1 == 8) {
        if (*(int *)(param_3 + 8) == 0) {
          *(undefined4 *)(param_3 + 8) = 1;
        }
        uVar1 = default_check_isra_0(8,param_2);
        if ((int)uVar1 < 1) {
          return uVar1;
        }
        uVar1 = default_fixup_args(8,param_2,param_3);
        if ((int)uVar1 < 1) {
          return uVar1;
        }
        if (*(int *)(param_3 + 8) != 1) {
          return uVar1;
        }
        *(int *)(param_3 + 0x1c) = (int)uVar1;
        return uVar1;
      }
      uVar1 = default_check_isra_0();
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      uVar1 = default_fixup_args(param_1,param_2,param_3);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      if (param_1 != 2) {
        return uVar1;
      }
      if (*(int *)(param_3 + 8) != 1) {
        return uVar1;
      }
      if (*(uint *)(param_3 + 0x1c) < 2) {
        return uVar1;
      }
      *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
      return 0xffffffff;
    }
    if (*(int *)(param_3 + 8) != 0) {
      uVar1 = default_check_isra_0(7);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      uVar1 = default_fixup_args(7,param_2,param_3);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      if (*(int *)(param_3 + 8) != 1) {
        return uVar1;
      }
      *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
      return uVar1;
    }
  }
  return 0;
}



undefined8 fix_distid_len(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = default_fixup_args();
  if ((0 < (int)uVar1) &&
     (((param_1 == 2 || (uVar1 = 0, param_1 == 5)) && (uVar1 = 0, *(int *)(param_3 + 8) == 1)))) {
    **(undefined8 **)(param_3 + 0x20) = *(undefined8 *)(param_3 + 0x28);
    return 1;
  }
  return uVar1;
}



undefined8 get_ec_decoded_from_explicit_params(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = EVP_PKEY_get_base_id(uVar2);
  if (iVar1 == 0x198) {
    uVar2 = EVP_PKEY_get0_EC_KEY(uVar2);
    iVar1 = EC_KEY_decoded_from_explicit_params(uVar2);
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x726,"get_ec_decoded_from_explicit_params"
                   );
      ERR_set_error(6,0xa3,0);
    }
    else if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 1) {
      *(int *)(param_3 + 0x1c) = iVar1;
      *(undefined8 *)(param_3 + 0x20) = 0;
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x72c,"get_ec_decoded_from_explicit_params");
    ERR_set_error(6,0xe0,0);
  }
  return 0;
}



undefined8 get_rsa_payload_e(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_e(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 fix_kdf_type(int param_1,undefined8 param_2,long param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *__s;
  
  uVar3 = default_check_isra_0();
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 0) {
      return 0;
    }
    if (*(int *)(param_3 + 0x1c) == -2) {
      *(undefined4 *)(param_3 + 0x1c) = 0x32;
      *(long *)(param_3 + 0x20) = param_3 + 0x40;
      *(undefined4 *)(param_3 + 8) = 1;
    }
    else {
      *(undefined4 *)(param_3 + 8) = 2;
    }
    uVar3 = default_check_isra_0(1,param_2);
    if ((int)uVar3 < 1) {
      return uVar3;
    }
    if (*(int *)(param_3 + 8) == 2) {
LAB_00101437:
      __s = *(char **)(param_4 + 2);
      if (__s != (char *)0x0) {
        do {
          if (*(int *)(param_3 + 0x1c) == *param_4) {
            *(char **)(param_3 + 0x20) = __s;
            sVar4 = strlen(__s);
            *(int *)(param_3 + 0x1c) = (int)sVar4;
            goto LAB_001013ce;
          }
          __s = *(char **)(param_4 + 6);
          param_4 = param_4 + 4;
        } while (__s != (char *)0x0);
      }
      return 0xfffffffe;
    }
  }
  else {
    uVar3 = default_check_isra_0(param_1,param_2);
    if ((int)uVar3 < 1) {
      return uVar3;
    }
    if (param_1 != 8) {
      uVar3 = default_fixup_args(param_1,param_2,param_3);
      if ((int)uVar3 < 1) {
        return uVar3;
      }
      if (param_1 == 2) {
        if (*(int *)(param_3 + 8) != 1) {
          return uVar3;
        }
      }
      else {
        if (param_1 != 7) {
          return uVar3;
        }
        if (*(int *)(param_3 + 8) != 2) {
          if (*(int *)(param_3 + 8) != 1) {
            return uVar3;
          }
          *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
          return uVar3;
        }
      }
      lVar1 = *(long *)(param_4 + 2);
      *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
      do {
        if (lVar1 == 0) {
          uVar3 = 0xffffffff;
LAB_001014c9:
          *(undefined8 *)(param_3 + 0x20) = 0;
          return uVar3;
        }
        iVar2 = OPENSSL_strcasecmp(*(undefined8 *)(param_3 + 0x20));
        if (iVar2 == 0) {
          *(int *)(param_3 + 0x1c) = *param_4;
          uVar3 = 1;
          goto LAB_001014c9;
        }
        lVar1 = *(long *)(param_4 + 6);
        param_4 = param_4 + 4;
      } while( true );
    }
    if (*(int *)(param_3 + 8) == 1) goto LAB_00101437;
  }
LAB_001013ce:
  uVar3 = default_fixup_args(param_1,param_2,param_3);
  return uVar3;
}



void fix_ec_kdf_type(void)

{
  fix_kdf_type();
  return;
}



void fix_dh_kdf_type(void)

{
  fix_kdf_type();
  return;
}



ulong fix_cipher_md(int param_1,undefined8 param_2,long *param_3,code *param_4,code *param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ulong uVar3;
  size_t sVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  
  uVar2 = default_check_isra_0();
  uVar3 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    if (param_1 == 1) {
      if ((int)param_3[1] == 1) {
        *(undefined4 *)((long)param_3 + 0x1c) = 0x32;
        param_3[7] = param_3[4];
        param_3[4] = (long)(param_3 + 8);
      }
      else {
        if ((int)param_3[1] != 2) {
          uVar3 = default_fixup_args(1,param_2,param_3);
          return uVar3;
        }
        if (param_3[4] == 0) {
          pcVar7 = OBJ_nid2sn(*(int *)((long)param_3 + 0x1c));
        }
        else {
          pcVar7 = (char *)(*param_4)();
        }
        param_3[4] = (long)pcVar7;
        sVar4 = strlen(pcVar7);
        *(int *)((long)param_3 + 0x1c) = (int)sVar4;
      }
      uVar2 = default_fixup_args(1,param_2,param_3);
      uVar3 = (ulong)uVar2;
    }
    else if (param_1 == 8) {
      if ((int)param_3[1] == 1) {
        pcVar7 = "";
        if (param_3[4] != 0) {
          pcVar7 = (char *)(*param_4)(param_3[4]);
        }
        param_3[4] = (long)pcVar7;
        sVar4 = strlen(pcVar7);
        *(int *)((long)param_3 + 0x1c) = (int)sVar4;
      }
      uVar2 = default_fixup_args(8,param_2,param_3);
      uVar3 = (ulong)uVar2;
    }
    else {
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      uVar3 = (ulong)uVar2;
      if (0 < (int)uVar2) {
        if (param_1 == 2) {
          if ((int)param_3[1] == 1) {
            puVar1 = (undefined8 *)param_3[7];
            uVar5 = (*param_5)(*(undefined8 *)(*param_3 + 8),param_3[4]);
            *puVar1 = uVar5;
            *(undefined4 *)((long)param_3 + 0x1c) = 1;
          }
        }
        else if ((param_1 == 7) && ((int)param_3[1] == 2)) {
          lVar6 = (*param_5)(*(undefined8 *)(*param_3 + 8),param_3[4]);
          *(undefined4 *)((long)param_3 + 0x1c) = 0;
          param_3[4] = lVar6;
        }
      }
    }
  }
  return uVar3;
}



void fix_cipher(void)

{
  fix_cipher_md();
  return;
}



void fix_md(void)

{
  fix_cipher_md();
  return;
}



undefined8 fix_hkdf_mode(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  
  uVar2 = default_check_isra_0();
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 == 1) goto LAB_001017f5;
  }
  else if ((*(int *)(param_3 + 8) == 1) && (param_1 == 8)) {
LAB_001017f5:
    iVar1 = *(int *)(param_3 + 0x1c);
    if (iVar1 == 0) {
      pcVar5 = "EXTRACT_AND_EXPAND";
    }
    else if (iVar1 == 1) {
      pcVar5 = "EXTRACT_ONLY";
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      pcVar5 = "EXPAND_ONLY";
    }
    *(char **)(param_3 + 0x20) = pcVar5;
    sVar4 = strlen(pcVar5);
    *(int *)(param_3 + 0x1c) = (int)sVar4;
  }
  uVar2 = default_fixup_args(param_1,param_2,param_3);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 != 7) {
      return 1;
    }
    pcVar5 = *(char **)(param_3 + 0x20);
    iVar1 = strcmp(pcVar5,"EXTRACT_AND_EXPAND");
    if (iVar1 != 0) goto LAB_00101837;
    lVar3 = 0;
  }
  else {
    if (*(int *)(param_3 + 8) != 1) {
      return 1;
    }
    if (param_1 != 2) {
      return 1;
    }
    pcVar5 = *(char **)(param_3 + 0x20);
    iVar1 = strcmp(pcVar5,"EXTRACT_AND_EXPAND");
    if (iVar1 == 0) goto LAB_0010187c;
LAB_00101837:
    iVar1 = strcmp(pcVar5,"EXTRACT_ONLY");
    if (iVar1 == 0) {
      lVar3 = 1;
    }
    else {
      iVar1 = strcmp(pcVar5,"EXPAND_ONLY");
      if (iVar1 != 0) {
        return 0;
      }
      lVar3 = 2;
    }
    if (param_1 == 2) goto LAB_0010187c;
  }
  *(undefined4 *)(param_3 + 0x1c) = (&str_value_map_15)[lVar3 * 4];
LAB_0010187c:
  *(undefined8 *)(param_3 + 0x20) = 0;
  return 1;
}



ulong fix_rsa_padding_mode(int param_1,long param_2,long param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  int *piVar6;
  ulong uVar7;
  long lVar8;
  undefined **ppuVar9;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = default_check_isra_0();
  uVar7 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    if (param_1 == 1) {
      if (*(int *)(param_3 + 8) == 1) {
        *(undefined4 *)(param_3 + 0x1c) = 0x32;
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
        *(long *)(param_3 + 0x20) = param_3 + 0x40;
      }
      else if (*(int *)(param_3 + 8) == 2) {
        puVar2 = *(undefined8 **)(param_3 + 0x30);
        OSSL_PARAM_construct_int(&local_78,*(undefined8 *)(param_2 + 0x28),param_3 + 0x1c);
        *puVar2 = local_78;
        puVar2[1] = uStack_70;
        puVar2[2] = local_68;
        puVar2[3] = uStack_60;
        puVar2[4] = local_58;
        uVar7 = 1;
        goto LAB_00101a20;
      }
    }
    else if ((param_1 == 8) && (*(int *)(param_3 + 8) == 1)) {
      lVar8 = *(long *)(param_3 + 0x30);
      if (*(int *)(lVar8 + 8) == 1) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = OSSL_PARAM_get_int(lVar8,param_3 + 0x1c);
          return uVar7;
        }
        goto LAB_00101c02;
      }
      if (*(int *)(lVar8 + 8) == 2) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = OSSL_PARAM_get_uint(lVar8,param_3 + 0x1c);
          return uVar7;
        }
        goto LAB_00101c02;
      }
      lVar8 = 0;
      piVar6 = &str_value_map_13;
      do {
        if (*(int *)(param_3 + 0x1c) == *piVar6) {
          pcVar1 = (&PTR_s_pkcs1_00104a48)[lVar8 * 2];
          if (pcVar1 != (char *)0x0) {
            *(char **)(param_3 + 0x20) = pcVar1;
            sVar5 = strlen(pcVar1);
            *(int *)(param_3 + 0x1c) = (int)sVar5;
            goto LAB_00101943;
          }
          ERR_new();
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x536,"fix_rsa_padding_mode");
          ERR_set_error(6,0x93,0);
          goto LAB_00101b4b;
        }
        lVar8 = lVar8 + 1;
        piVar6 = piVar6 + 4;
      } while (lVar8 != 7);
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x52c,"fix_rsa_padding_mode");
      ERR_set_error(4,0x76,"[action:%d, state:%d] padding number %d",*(undefined4 *)(param_3 + 8),8,
                    *(undefined4 *)(param_3 + 0x1c));
LAB_00101b4b:
      uVar7 = 0xfffffffe;
      goto LAB_00101a20;
    }
LAB_00101943:
    uVar3 = default_fixup_args(param_1,param_2,param_3);
    uVar7 = (ulong)uVar3;
    if (0 < (int)uVar3) {
      if (*(int *)(param_3 + 8) == 2) {
        if (param_1 == 7) goto LAB_0010197a;
      }
      else if ((param_1 == 2) && (*(int *)(param_3 + 8) == 1)) {
LAB_0010197a:
        pcVar1 = *(char **)(param_3 + 0x20);
        ppuVar9 = &PTR_s_pkcs1_00104a48;
        lVar8 = 0;
        do {
          iVar4 = strcmp(pcVar1,*ppuVar9);
          if (iVar4 == 0) {
            if (param_1 == 2) {
              **(undefined4 **)(param_3 + 0x38) = (&str_value_map_13)[lVar8 * 4];
            }
            else {
              *(undefined4 *)(param_3 + 0x1c) = (&str_value_map_13)[lVar8 * 4];
            }
            goto LAB_00101b71;
          }
          lVar8 = lVar8 + 1;
          ppuVar9 = ppuVar9 + 2;
        } while (lVar8 != 7);
        ERR_new();
        uVar7 = 0xfffffffe;
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x54a,"fix_rsa_padding_mode");
        ERR_set_error(4,0x76,"[action:%d, state:%d] padding name %s",*(undefined4 *)(param_3 + 8),
                      param_1,*(undefined4 *)(param_3 + 0x1c));
        *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
LAB_00101b71:
        *(undefined8 *)(param_3 + 0x20) = 0;
      }
    }
  }
LAB_00101a20:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
LAB_00101c02:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong fix_ec_param_enc(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = default_check_isra_0();
  if ((int)uVar1 < 1) {
    return (ulong)uVar1;
  }
  if (*(int *)(param_3 + 8) != 2) {
    return 0;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 0x1c) == 0) {
      pcVar3 = "explicit";
LAB_00101ca2:
      *(char **)(param_3 + 0x20) = pcVar3;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      uVar4 = default_fixup_args(1,param_2,param_3);
      return uVar4;
    }
    if (*(int *)(param_3 + 0x1c) == 1) {
      pcVar3 = "named_curve";
      goto LAB_00101ca2;
    }
LAB_00101d40:
    ERR_new();
    uVar4 = 0xfffffffe;
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x46b,"fix_ec_param_enc");
    ERR_set_error(6,0x93,0);
  }
  else {
    uVar1 = default_fixup_args(param_1,param_2,param_3);
    uVar4 = (ulong)uVar1;
    if (param_1 != 7) {
      return uVar4;
    }
    if ((int)uVar1 < 1) {
      return uVar4;
    }
    pcVar3 = *(char **)(param_3 + 0x20);
    iVar2 = strcmp(pcVar3,"explicit");
    if (iVar2 != 0) {
      iVar2 = strcmp(pcVar3,"named_curve");
      if (iVar2 != 0) {
        *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
        *(undefined8 *)(param_3 + 0x20) = 0;
        goto LAB_00101d40;
      }
      iVar2 = 1;
    }
    *(int *)(param_3 + 0x1c) = iVar2;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  return uVar4;
}



int fix_rsa_pss_saltlen(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  char *pcVar6;
  long lVar5;
  
  iVar1 = default_check_isra_0();
  if (iVar1 < 1) {
    return iVar1;
  }
  iVar1 = *(int *)(param_3 + 8);
  if (param_1 == 1) {
    if (iVar1 == 1) {
      *(undefined4 *)(param_3 + 0x1c) = 0x32;
      *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
      *(long *)(param_3 + 0x20) = param_3 + 0x40;
    }
    else if (iVar1 == 2) goto LAB_00101e12;
  }
  else if ((iVar1 == 1) && (param_1 == 8)) {
LAB_00101e12:
    iVar1 = *(int *)(param_3 + 0x1c);
    if (iVar1 == -1) {
      pcVar6 = "digest";
LAB_00101f0f:
      strncpy((char *)(param_3 + 0x40),pcVar6,0x31);
      *(undefined1 *)(param_3 + 0x71) = 0;
    }
    else {
      if (iVar1 == -3) {
        pcVar6 = "max";
        goto LAB_00101f0f;
      }
      if (iVar1 == -2) {
        pcVar6 = "auto";
        goto LAB_00101f0f;
      }
      BIO_snprintf((char *)(param_3 + 0x40),0x32,"%d");
    }
    *(char **)(param_3 + 0x20) = (char *)(param_3 + 0x40);
    sVar4 = strlen((char *)(param_3 + 0x40));
    *(int *)(param_3 + 0x1c) = (int)sVar4;
  }
  iVar1 = default_fixup_args(param_1,param_2,param_3);
  if (iVar1 < 1) {
    return iVar1;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 != 7) {
      return iVar1;
    }
  }
  else {
    if (*(int *)(param_3 + 8) != 1) {
      return iVar1;
    }
    if (param_1 != 2) {
      return iVar1;
    }
  }
  pcVar6 = *(char **)(param_3 + 0x20);
  iVar2 = strcmp(pcVar6,"digest");
  if (iVar2 == 0) {
    lVar5 = 0;
  }
  else {
    iVar2 = strcmp(pcVar6,"max");
    if (iVar2 == 0) {
      lVar5 = 1;
    }
    else {
      iVar2 = strcmp(pcVar6,"auto");
      if (iVar2 != 0) {
        lVar5 = strtol(pcVar6,(char **)0x0,10);
        uVar3 = (undefined4)lVar5;
        goto LAB_00101ee2;
      }
      lVar5 = 2;
    }
  }
  uVar3 = (&str_value_map_14)[lVar5 * 4];
LAB_00101ee2:
  if (param_1 == 2) {
    **(undefined4 **)(param_3 + 0x38) = uVar3;
  }
  else {
    *(undefined4 *)(param_3 + 0x1c) = uVar3;
  }
  *(undefined8 *)(param_3 + 0x20) = 0;
  return iVar1;
}



int fix_ec_paramgen_curve_nid(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (char *)0x0;
  iVar1 = default_check_isra_0();
  if ((0 < iVar1) && (iVar1 = 0, *(int *)(param_3 + 8) == 2)) {
    if (param_1 == 1) {
      pcVar3 = OBJ_nid2sn(*(int *)(param_3 + 0x1c));
      *(char **)(param_3 + 0x20) = pcVar3;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      iVar1 = default_fixup_args(1,param_2,param_3);
    }
    else if (param_1 == 7) {
      local_38 = (char *)(param_3 + 0x40);
      *(char ***)(param_3 + 0x20) = &local_38;
      *(undefined8 *)(param_3 + 0x28) = 0x32;
      iVar1 = default_fixup_args(7,param_2,param_3);
      if (0 < iVar1) {
        iVar2 = OBJ_sn2nid(local_38);
        *(undefined8 *)(param_3 + 0x20) = 0;
        *(int *)(param_3 + 0x1c) = iVar2;
      }
    }
    else {
      iVar1 = default_fixup_args(param_1,param_2,param_3);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fix_dh_nid(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = default_check_isra_0();
  if (0 < (int)uVar1) {
    if (*(int *)(param_3 + 8) == 2) {
      if (param_1 != 1) {
LAB_00102094:
        uVar1 = default_fixup_args(param_1,param_2,param_3);
        return uVar1;
      }
      uVar1 = ossl_ffc_uid_to_dh_named_group(*(undefined4 *)(param_3 + 0x1c));
      lVar2 = ossl_ffc_named_group_get_name(uVar1);
      *(long *)(param_3 + 0x20) = lVar2;
      if (lVar2 != 0) {
        *(undefined4 *)(param_3 + 0x1c) = 0;
        goto LAB_00102094;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x3f0,"fix_dh_nid");
      ERR_set_error(6,0xde,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 fix_dh_nid5114(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = default_check_isra_0();
  if ((int)uVar1 < 1) {
    return uVar1;
  }
  if (*(int *)(param_3 + 8) != 2) {
    return 0;
  }
  if (param_1 == 1) {
    uVar1 = ossl_ffc_uid_to_dh_named_group(*(undefined4 *)(param_3 + 0x1c));
    lVar3 = ossl_ffc_named_group_get_name(uVar1);
    *(long *)(param_3 + 0x20) = lVar3;
    if (lVar3 == 0) {
      ERR_new();
      uVar1 = 0x40b;
LAB_001021ca:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar1,"fix_dh_nid5114");
      ERR_set_error(6,0xde,0);
      return 0;
    }
  }
  else {
    if (param_1 != 4) goto LAB_00102189;
    if (*(char **)(param_3 + 0x20) == (char *)0x0) {
      return 0;
    }
    uVar2 = strtol(*(char **)(param_3 + 0x20),(char **)0x0,10);
    uVar1 = ossl_ffc_uid_to_dh_named_group(uVar2 & 0xffffffff);
    lVar3 = ossl_ffc_named_group_get_name(uVar1);
    *(long *)(param_3 + 0x20) = lVar3;
    if (lVar3 == 0) {
      ERR_new();
      uVar1 = 0x417;
      goto LAB_001021ca;
    }
  }
  *(undefined4 *)(param_3 + 0x1c) = 0;
LAB_00102189:
  uVar1 = default_fixup_args(param_1,param_2,param_3);
  return uVar1;
}



undefined8 fix_dh_paramgen_type(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  
  uVar1 = default_check_isra_0();
  if (0 < (int)uVar1) {
    if (*(int *)(param_3 + 8) == 2) {
      if (param_1 != 4) {
LAB_00102234:
        uVar1 = default_fixup_args(param_1,param_2,param_3);
        return uVar1;
      }
      uVar2 = strtol(*(char **)(param_3 + 0x20),(char **)0x0,10);
      __s = (char *)ossl_dh_gen_type_id2name(uVar2 & 0xffffffff);
      *(char **)(param_3 + 0x20) = __s;
      if (__s != (char *)0x0) {
        sVar3 = strlen(__s);
        *(int *)(param_3 + 0x1c) = (int)sVar3;
        goto LAB_00102234;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x436,"fix_dh_paramgen_type");
      ERR_set_error(6,0xde,0);
    }
    uVar1 = 0;
  }
  return uVar1;
}



ulong fix_oid(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ASN1_OBJECT *pAVar3;
  
  uVar1 = default_check_isra_0();
  if ((int)uVar1 < 1) {
    return (ulong)uVar1;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 2) {
      uVar2 = default_fixup_args(1,param_2,param_3);
      return uVar2;
    }
LAB_00102390:
    OBJ_obj2txt((char *)(param_3 + 0x40),0x32,*(ASN1_OBJECT **)(param_3 + 0x20),0);
    *(char **)(param_3 + 0x20) = (char *)(param_3 + 0x40);
    *(undefined4 *)(param_3 + 0x1c) = 0;
    uVar1 = default_fixup_args(param_1,param_2,param_3);
    return (ulong)uVar1;
  }
  if (param_1 == 8) {
    if (*(int *)(param_3 + 8) == 1) goto LAB_00102390;
    uVar1 = default_fixup_args(8,param_2,param_3);
    uVar2 = (ulong)uVar1;
  }
  else {
    uVar1 = default_fixup_args(param_1,param_2,param_3);
    uVar2 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      if (param_1 == 7) {
        if (*(int *)(param_3 + 8) == 2) {
LAB_00102368:
          pAVar3 = OBJ_txt2obj(*(char **)(param_3 + 0x20),0);
          *(ASN1_OBJECT **)(param_3 + 0x20) = pAVar3;
          return uVar2;
        }
      }
      else if (param_1 == 2) {
        if (*(int *)(param_3 + 8) != 1) {
          return uVar2;
        }
        goto LAB_00102368;
      }
    }
  }
  return uVar2;
}



undefined4 get_payload_public_key_ec(undefined4 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  EC_KEY *key;
  undefined8 uVar4;
  BN_CTX *ctx;
  EC_POINT *pEVar5;
  EC_GROUP *pEVar6;
  BIGNUM *pBVar7;
  BIGNUM *local_48;
  
  key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(*(undefined8 *)(param_3 + 0x20));
  *(undefined8 *)(param_3 + 0x20) = 0;
  if (key == (EC_KEY *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x692,"get_payload_public_key_ec");
    ERR_set_error(6,0xe0,0);
    return 0;
  }
  uVar4 = ossl_ec_key_get_libctx(key);
  ctx = (BN_CTX *)BN_CTX_new_ex(uVar4);
  if (ctx == (BN_CTX *)0x0) {
    return 0;
  }
  pEVar5 = EC_KEY_get0_public_key(key);
  pEVar6 = EC_KEY_get0_group(key);
  if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2) {
    local_48 = BN_CTX_get(ctx);
    pBVar7 = BN_CTX_get(ctx);
    if ((((pBVar7 != (BIGNUM *)0x0) &&
         (iVar2 = EC_POINT_get_affine_coordinates(pEVar6,pEVar5,local_48,pBVar7,ctx), iVar2 != 0))
        && (pcVar1 = (char *)**(undefined8 **)(param_3 + 0x30), *pcVar1 == 'q')) &&
       ((pcVar1[1] == 'x' || (local_48 = pBVar7, pcVar1[1] == 'y')))) {
      *(BIGNUM **)(param_3 + 0x20) = local_48;
      uVar3 = default_fixup_args(param_1,param_2,param_3);
      goto LAB_0010246e;
    }
  }
  uVar3 = 0;
LAB_0010246e:
  BN_CTX_free(ctx);
  return uVar3;
}



undefined4 get_payload_public_key(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  EC_KEY *key;
  BN_CTX *c;
  EC_GROUP *pEVar3;
  EC_POINT *pEVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  void *local_48;
  long local_40;
  
  uVar5 = *(undefined8 *)(param_3 + 0x20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_3 + 0x20) = 0;
  local_48 = (void *)0x0;
  iVar1 = EVP_PKEY_get_base_id(uVar5);
  if (iVar1 == 0x198) {
    if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 5) {
      key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(uVar5);
      uVar5 = ossl_ec_key_get_libctx(key);
      c = (BN_CTX *)BN_CTX_new_ex(uVar5);
      pEVar3 = EC_KEY_get0_group(key);
      pEVar4 = EC_KEY_get0_public_key(key);
      if (c != (BN_CTX *)0x0) {
        uVar5 = EC_POINT_point2buf(pEVar3,pEVar4,2,&local_48,c);
        *(undefined8 *)(param_3 + 0x28) = uVar5;
        *(void **)(param_3 + 0x20) = local_48;
        BN_CTX_free(c);
        goto LAB_0010267a;
      }
    }
  }
  else {
    if (iVar1 < 0x199) {
      if (iVar1 == 0x1c) {
LAB_00102638:
        iVar1 = *(int *)(*(long *)(param_3 + 0x30) + 8);
        if (iVar1 == 2) {
          uVar5 = EVP_PKEY_get0_DH(uVar5);
          uVar5 = DH_get0_pub_key(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
        }
        else {
          if (iVar1 != 5) goto LAB_001025cc;
          uVar5 = EVP_PKEY_get0_DH(uVar5);
          uVar5 = ossl_dh_key2buf(uVar5,&local_48,0,1);
          *(undefined8 *)(param_3 + 0x28) = uVar5;
          *(void **)(param_3 + 0x20) = local_48;
        }
LAB_0010267a:
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        CRYPTO_free(local_48);
        goto LAB_001025ce;
      }
      if (iVar1 == 0x74) {
        if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2) {
          uVar5 = EVP_PKEY_get0_DSA(uVar5);
          uVar5 = DSA_get0_pub_key(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
          goto LAB_0010267a;
        }
        goto LAB_001025cc;
      }
    }
    else if (iVar1 == 0x398) goto LAB_00102638;
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x678,"get_payload_public_key");
    ERR_set_error(6,0xe0,0);
  }
LAB_001025cc:
  uVar2 = 0;
LAB_001025ce:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_payload_private_key(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  EC_KEY *key;
  BIGNUM *pBVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  if (*(int *)(*(long *)(param_3 + 0x30) + 8) != 2) {
    return 0;
  }
  iVar1 = EVP_PKEY_get_base_id(uVar3);
  if (iVar1 == 0x1c) {
    uVar3 = EVP_PKEY_get0_DH(uVar3);
    pBVar2 = (BIGNUM *)DH_get0_priv_key(uVar3);
  }
  else {
    if (iVar1 != 0x198) {
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x63b,"get_payload_private_key");
      ERR_set_error(6,0xe0,0);
      return 0;
    }
    key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(uVar3);
    pBVar2 = EC_KEY_get0_private_key(key);
  }
  *(BIGNUM **)(param_3 + 0x20) = pBVar2;
  uVar3 = default_fixup_args(param_1,param_2,param_3);
  return uVar3;
}



undefined8 get_payload_group_name(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  EC_KEY *key;
  EC_GROUP *group;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_3 + 0x20) = 0;
  iVar1 = EVP_PKEY_get_base_id(uVar3);
  if (iVar1 == 0x1c) {
    uVar3 = EVP_PKEY_get0_DH(uVar3);
    iVar1 = DH_get_nid(uVar3);
    if (iVar1 != 0) {
      uVar3 = ossl_ffc_uid_to_dh_named_group(iVar1);
      __s = (char *)ossl_ffc_named_group_get_name(uVar3);
      *(char **)(param_3 + 0x20) = __s;
      goto LAB_00102920;
    }
  }
  else {
    if (iVar1 != 0x198) {
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x60e,"get_payload_group_name");
      ERR_set_error(6,0xe0,0);
      return 0;
    }
    key = (EC_KEY *)EVP_PKEY_get0_EC_KEY(uVar3);
    group = EC_KEY_get0_group(key);
    if (group != (EC_GROUP *)0x0) {
      iVar1 = EC_GROUP_get_curve_name(group);
      if (iVar1 != 0) {
        __s = (char *)OSSL_EC_curve_nid2name(iVar1);
        *(char **)(param_3 + 0x20) = __s;
        goto LAB_00102920;
      }
    }
  }
  __s = *(char **)(param_3 + 0x20);
LAB_00102920:
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    *(int *)(param_3 + 0x1c) = (int)sVar2;
    uVar3 = default_fixup_args(param_1,param_2,param_3);
    return uVar3;
  }
  return 1;
}



undefined8 get_dh_dsa_payload_g(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 0x1c) {
    uVar2 = EVP_PKEY_get0_DH(*(undefined8 *)(param_3 + 0x20));
    lVar3 = DH_get0_g(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      return 0;
    }
    uVar2 = EVP_PKEY_get0_DSA(*(undefined8 *)(param_3 + 0x20));
    lVar3 = DSA_get0_g(uVar2);
  }
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_dh_dsa_payload_q(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 0x1c) {
    uVar2 = EVP_PKEY_get0_DH(*(undefined8 *)(param_3 + 0x20));
    lVar3 = DH_get0_q(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      return 0;
    }
    uVar2 = EVP_PKEY_get0_DSA(*(undefined8 *)(param_3 + 0x20));
    lVar3 = DSA_get0_q(uVar2);
  }
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8
get_rsa_payload_coefficient(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  long local_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  if (param_4 == 0) {
    lVar3 = RSA_get0_iqmp();
LAB_00102ae7:
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_00102b84;
    }
  }
  else {
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (param_4 - 1U < (ulong)(long)iVar1) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar2,auStack_d8,local_88);
      if (iVar1 != 0) {
        lVar3 = local_88[param_4 - 1U];
        goto LAB_00102ae7;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102b84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c9(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,8);
  return uVar2;
}



undefined8 get_rsa_payload_c8(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,7);
  return uVar2;
}



undefined8 get_rsa_payload_c7(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,6);
  return uVar2;
}



undefined8 get_rsa_payload_c6(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,5);
  return uVar2;
}



undefined8 get_rsa_payload_c5(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,4);
  return uVar2;
}



undefined8 get_rsa_payload_c4(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,3);
  return uVar2;
}



undefined8 get_rsa_payload_c3(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,2);
  return uVar2;
}



undefined8 get_rsa_payload_c2(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_coefficient(param_1,param_2,param_3,1);
  return uVar2;
}



undefined8 get_rsa_payload_factor(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long alStack_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  if (param_4 == 0) {
    lVar3 = RSA_get0_p(uVar2);
LAB_00102ed7:
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_00102f6e;
    }
  }
  else {
    if (param_4 == 1) {
      lVar3 = RSA_get0_q(uVar2);
      goto LAB_00102ed7;
    }
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (param_4 - 2U < (ulong)(long)iVar1) {
      iVar1 = RSA_get0_multi_prime_factors(uVar2,alStack_88);
      if (iVar1 != 0) {
        lVar3 = alStack_88[param_4 - 2U];
        goto LAB_00102ed7;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102f6e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f10(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,9);
  return uVar2;
}



undefined8 get_rsa_payload_f9(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,8);
  return uVar2;
}



undefined8 get_rsa_payload_f8(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,7);
  return uVar2;
}



undefined8 get_rsa_payload_f7(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,6);
  return uVar2;
}



undefined8 get_rsa_payload_f6(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,5);
  return uVar2;
}



undefined8 get_rsa_payload_f5(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,4);
  return uVar2;
}



undefined8 get_rsa_payload_f4(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,3);
  return uVar2;
}



undefined8 get_rsa_payload_f3(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_factor(param_1,param_2,param_3,2);
  return uVar2;
}



undefined8 get_rsa_payload_exponent(undefined4 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long alStack_d8 [10];
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  if (param_4 == 0) {
    lVar3 = RSA_get0_dmp1(uVar2);
LAB_001032cd:
    if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
      *(long *)(param_3 + 0x20) = lVar3;
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        return uVar2;
      }
      goto LAB_0010337c;
    }
  }
  else {
    if (param_4 == 1) {
      lVar3 = RSA_get0_dmq1(uVar2);
      goto LAB_001032cd;
    }
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (param_4 - 2U < (ulong)(long)iVar1) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar2,alStack_d8,local_88);
      if (iVar1 != 0) {
        lVar3 = alStack_d8[param_4 - 2U];
        goto LAB_001032cd;
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010337c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e10(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,9);
  return uVar2;
}



undefined8 get_rsa_payload_e9(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,8);
  return uVar2;
}



undefined8 get_rsa_payload_e8(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,7);
  return uVar2;
}



undefined8 get_rsa_payload_e7(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,6);
  return uVar2;
}



undefined8 get_rsa_payload_e6(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,5);
  return uVar2;
}



undefined8 get_rsa_payload_e5(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,4);
  return uVar2;
}



undefined8 get_rsa_payload_e4(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,3);
  return uVar2;
}



undefined8 get_rsa_payload_e3(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 != 6) {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 != 0x390) {
      return 0;
    }
  }
  uVar2 = get_rsa_payload_exponent(param_1,param_2,param_3,2);
  return uVar2;
}



undefined8 get_dh_dsa_payload_p(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  iVar1 = EVP_PKEY_get_base_id(uVar2);
  if (iVar1 == 0x1c) {
    uVar2 = EVP_PKEY_get0_DH(uVar2);
    lVar3 = DH_get0_p(uVar2);
  }
  else {
    if (iVar1 != 0x74) {
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x6db,"get_dh_dsa_payload_p");
      ERR_set_error(6,0xe0,0);
      return 0;
    }
    uVar2 = EVP_PKEY_get0_DSA(uVar2);
    lVar3 = DSA_get0_p(uVar2);
  }
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_rsa_payload_n(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_n(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_rsa_payload_d(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_d(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_rsa_payload_f1(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_p(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_rsa_payload_f2(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_q(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_rsa_payload_e1(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_dmp1(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_rsa_payload_e2(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_dmq1(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



undefined8 get_rsa_payload_c1(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if ((iVar1 != 6) &&
     (iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20)), iVar1 != 0x390)) {
    return 0;
  }
  uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
  lVar3 = RSA_get0_iqmp(uVar2);
  if ((lVar3 != 0) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
    *(long *)(param_3 + 0x20) = lVar3;
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}



int evp_pkey_ctx_ctrl_to_param
              (long param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
              undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  undefined4 local_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined1 auStack_154 [12];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  long local_d8;
  int local_d0;
  undefined4 local_cc;
  int local_bc;
  undefined8 local_b8;
  undefined1 *local_a8;
  void *local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_168 = 0;
  auStack_154 = SUB1612((undefined1  [16])0x0,4);
  local_148 = (undefined1  [16])0x0;
  local_138 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  plVar4 = &local_d8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *plVar4 = 0;
    plVar4 = plVar4 + 1;
  }
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_e8 = (undefined1  [16])0x0;
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0x74);
  }
  uStack_164 = CONCAT44(param_2,param_2);
  uStack_15c = param_3;
  local_158 = param_4;
  piVar2 = (int *)lookup_translation(&local_168,evp_pkey_ctx_translations,0x56);
  if (piVar2 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0xaa6,"evp_pkey_ctx_ctrl_to_param");
    iVar1 = -2;
    ERR_set_error(6,0x93,0);
    goto LAB_00103c19;
  }
  if (((*(int **)(param_1 + 0x78) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0x78), iVar1 != piVar2[1])) && (iVar1 != piVar2[2])) {
    iVar1 = -1;
    goto LAB_00103c19;
  }
  pcVar5 = *(code **)(piVar2 + 0xe);
  if (pcVar5 == (code *)0x0) {
    pcVar5 = default_fixup_args;
  }
  local_d0 = *piVar2;
  local_a8 = local_128;
  local_d8 = param_1;
  local_cc = param_4;
  local_bc = param_5;
  local_b8 = param_6;
  iVar1 = (*pcVar5)(1,piVar2,&local_d8);
  if (0 < iVar1) {
    if (local_d0 == 1) {
      iVar1 = evp_pkey_ctx_get_params_strict(param_1,local_a8);
LAB_00103bf6:
      if (iVar1 < 1) goto LAB_00103bfb;
    }
    else if (local_d0 == 2) {
      iVar1 = evp_pkey_ctx_set_params_strict(param_1,local_a8);
      goto LAB_00103bf6;
    }
    local_bc = iVar1;
    (*pcVar5)(2,piVar2,&local_d8);
    iVar1 = local_bc;
  }
LAB_00103bfb:
  if (local_60 != (void *)0x0) {
    CRYPTO_free(local_60);
  }
LAB_00103c19:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int evp_pkey_ctx_ctrl_str_to_param(int *param_1,ulong param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  long lVar4;
  int **ppiVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 local_158;
  undefined8 local_154;
  int local_14c;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  int *local_c8;
  int local_c0;
  ulong local_b8;
  uint local_b0;
  undefined4 local_ac;
  char *local_a8;
  undefined1 *local_98;
  void *local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_128 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  ppiVar5 = &local_c8;
  for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
    *ppiVar5 = (int *)0x0;
    ppiVar5 = ppiVar5 + 1;
  }
  local_14c = *param_1;
  local_e8 = (undefined1  [16])0x0;
  local_d8 = (undefined1  [16])0x0;
  if (local_14c == 0) {
    local_14c = -1;
  }
  local_148._8_8_ = 0;
  local_148._0_8_ = param_2;
  local_148 = local_148 << 0x40;
  local_138._8_8_ = 0;
  local_138._0_8_ = param_2;
  uVar7 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  local_154 = CONCAT44(uVar7,uVar7);
  local_158 = 2;
  piVar2 = (int *)lookup_translation(&local_158,evp_pkey_ctx_translations,0x56);
  if (piVar2 == (int *)0x0) {
    local_c0 = 2;
    pcVar6 = default_fixup_args;
  }
  else {
    pcVar6 = *(code **)(piVar2 + 0xe);
    if (pcVar6 == (code *)0x0) {
      pcVar6 = default_fixup_args;
    }
    local_c0 = *piVar2;
    local_b0 = (uint)(local_138._0_8_ != 0);
  }
  local_b8 = param_2;
  sVar3 = strlen(param_3);
  local_ac = (undefined4)sVar3;
  local_98 = local_118;
  local_c8 = param_1;
  local_a8 = param_3;
  iVar1 = (*pcVar6)(4,piVar2,&local_c8);
  if ((0 < iVar1) &&
     ((local_c0 != 2 || (iVar1 = evp_pkey_ctx_set_params_strict(param_1,local_98), 0 < iVar1)))) {
    iVar1 = (*pcVar6)(5,piVar2,&local_c8);
  }
  if (local_50 != (void *)0x0) {
    CRYPTO_free(local_50);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 evp_pkey_ctx_set_params_to_ctrl(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0;
  }
  uVar1 = evp_pkey_ctx_setget_params_to_ctrl(param_1,2,param_2);
  return uVar1;
}



undefined8 evp_pkey_ctx_get_params_to_ctrl(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    return 0;
  }
  uVar1 = evp_pkey_ctx_setget_params_to_ctrl(param_1,1,param_2);
  return uVar1;
}



ulong evp_pkey_get_params_to_ctrl(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined4 local_118;
  undefined1 local_114 [16];
  undefined1 local_104 [16];
  undefined4 local_f4;
  long lStack_f0;
  undefined4 uStack_e8;
  undefined1 auStack_e4 [12];
  undefined8 local_d8;
  int local_d0;
  undefined8 local_b8;
  long *local_a8;
  void *local_60;
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 1;
  lVar5 = lStack_f0;
  if (param_2 != (long *)0x0) {
    lVar2 = *param_2;
    while (lStack_f0 = lVar2, lStack_f0 != 0) {
      puVar6 = &local_d8;
      for (lVar5 = 0x12; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
      }
      local_f4 = 0;
      local_118 = 1;
      local_114 = (undefined1  [16])0x0;
      local_104 = (undefined1  [16])0x0;
      uStack_e8 = 0;
      auStack_e4 = SUB1612((undefined1  [16])0x0,4);
      piVar4 = (int *)lookup_translation(&local_118,evp_pkey_translations,0x29);
      if (((piVar4 == (int *)0x0) || (*(code **)(piVar4 + 0xe) == (code *)0x0)) ||
         (local_d0 = *piVar4, local_b8 = param_1, local_a8 = param_2, local_d0 != 1)) {
        uVar3 = 0xfffffffe;
        lVar5 = lStack_f0;
        break;
      }
      uVar3 = (**(code **)(piVar4 + 0xe))(0,piVar4,&local_d8);
      if (local_60 != (void *)0x0) {
        CRYPTO_free(local_60);
        uVar3 = uVar3 & 0xffffffff;
      }
      plVar1 = param_2 + 5;
      param_2 = param_2 + 5;
      lVar5 = lStack_f0;
      lVar2 = *plVar1;
    }
  }
  lStack_f0 = lVar5;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


