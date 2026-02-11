
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



NoteGnuProperty_4 * lookup_translation_constprop_1(dword *param_1)

{
  dword dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  NoteGnuProperty_4 *pNVar8;
  
  pNVar8 = (NoteGnuProperty_4 *)&evp_pkey_ctx_translations;
  do {
    dVar1 = pNVar8->descsz;
    if ((((dVar1 != 0xffffffff) != (pNVar8->type == 0xffffffff)) &&
        ((*(uint *)pNVar8->name == 0xffffffff || ((*(uint *)pNVar8->name & param_1[3]) != 0)))) &&
       ((dVar1 == 0xffffffff || ((dVar1 == param_1[1] || (pNVar8->type == param_1[2])))))) {
      if (param_1[4] == 0) {
        if (*(long *)(param_1 + 6) == 0) {
          if (*(long *)(param_1 + 10) == 0) {
            return (NoteGnuProperty_4 *)0x0;
          }
          if ((pNVar8->namesz == 0) || (pNVar8->namesz == *param_1)) {
            lVar4._0_4_ = pNVar8[2].type;
            lVar4._4_1_ = pNVar8[2].name[0];
            lVar4._5_1_ = pNVar8[2].name[1];
            lVar4._6_1_ = pNVar8[2].name[2];
            lVar4._7_1_ = pNVar8[2].name[3];
            if (lVar4 == 0) {
              return pNVar8;
            }
            iVar5 = OPENSSL_strcasecmp();
            if (iVar5 == 0) {
              return pNVar8;
            }
          }
        }
        else if ((pNVar8->namesz & 0xfffffffd) == 0) {
          lVar2._0_4_ = pNVar8[1].type;
          lVar2._4_1_ = pNVar8[1].name[0];
          lVar2._5_1_ = pNVar8[1].name[1];
          lVar2._6_1_ = pNVar8[1].name[2];
          lVar2._7_1_ = pNVar8[1].name[3];
          if ((lVar2 != 0) && (iVar5 = OPENSSL_strcasecmp(), iVar5 == 0)) {
            uVar7 = *(undefined8 *)(param_1 + 6);
            uVar6 = 0;
LAB_001001ae:
            *(undefined8 *)(param_1 + 8) = uVar6;
            *(undefined8 *)(param_1 + 6) = uVar7;
            return pNVar8;
          }
          lVar3._0_4_ = pNVar8[2].namesz;
          lVar3._4_4_ = pNVar8[2].descsz;
          if ((lVar3 != 0) && (iVar5 = OPENSSL_strcasecmp(*(undefined8 *)(param_1 + 8)), iVar5 == 0)
             ) {
            uVar6 = *(undefined8 *)(param_1 + 8);
            uVar7 = 0;
            goto LAB_001001ae;
          }
        }
      }
      else if (param_1[4] == pNVar8[1].namesz) {
        return pNVar8;
      }
    }
    pNVar8 = pNVar8 + 4;
    if (pNVar8 == &NoteGnuProperty_4_00108f00) {
      return (NoteGnuProperty_4 *)0x0;
    }
  } while( true );
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
      pcVar5 = default_fixup_args;
      local_f8._8_8_ = 0;
      local_f8._0_8_ = uVar1;
      local_f8 = local_f8 << 0x40;
      local_108 = (undefined1  [16])0x0;
      local_e8 = (undefined1  [16])0x0;
      local_118 = param_2;
      local_114 = keytype;
      local_110 = keytype;
      local_10c = optype;
      local_d0 = param_2;
      lVar4 = lookup_translation_constprop_1(&local_118);
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
LAB_0010036f:
        if (-1 < iVar2) goto LAB_00100284;
        if (local_60 != (void *)0x0) {
          CRYPTO_free(local_60);
        }
LAB_00100395:
        uVar3 = 0;
        goto LAB_00100397;
      }
      if (local_d0 != 0) {
        iVar2 = EVP_PKEY_CTX_ctrl(param_1,keytype,optype,local_cc,local_bc,local_b8);
        goto LAB_0010036f;
      }
LAB_00100284:
      local_bc = iVar2;
      (*pcVar5)(8,lVar4,&local_d8);
      iVar2 = local_bc;
      if (local_60 != (void *)0x0) {
        CRYPTO_free(local_60);
      }
      if (iVar2 < 1) goto LAB_00100395;
    }
  }
  uVar3 = 1;
LAB_00100397:
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
LAB_001004e1:
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
      goto LAB_001004e1;
    }
    ERR_new();
    uVar1 = 0x149;
  }
  ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar1,"default_check");
  ERR_set_error(6,0x93,0);
  return 0xfffffffe;
}



ulong default_fixup_args(uint param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  size_t sVar7;
  void *pvVar8;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 4) {
    if (param_2 == (int *)0x0) {
      puVar11 = (undefined8 *)param_3[2];
      local_44 = 0;
      uVar12 = param_3[4];
      puVar14 = puVar11;
      if (*(int *)(param_3 + 1) != 2) {
LAB_00100b70:
        local_44 = 0;
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x224,"default_fixup_args");
        ERR_set_error(6,0x93,"[action:%d, state:%d] only setting allowed",
                      *(undefined4 *)(param_3 + 1),4);
        uVar5 = 0;
        goto LAB_00100791;
      }
    }
    else {
      if (*param_2 == 1) {
        ERR_new();
        pcVar9 = "default_check";
        uVar12 = 0x13c;
        goto LAB_00100660;
      }
      puVar10 = *(undefined8 **)(param_2 + 10);
      if ((puVar10 == (undefined8 *)0x0) || (param_2[0xc] == 0)) {
        ERR_new();
        pcVar9 = "default_check";
        uVar12 = 0x141;
LAB_00100d69:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar12,pcVar9);
        ERR_set_error(6,0xc0103,0);
        uVar5 = 0;
        goto LAB_00100791;
      }
      uVar12 = param_3[4];
      puVar14 = (undefined8 *)param_3[2];
      if (*(int *)(param_3 + 1) != 2) goto LAB_00100b70;
LAB_00100726:
      local_44 = 0;
      param_3[2] = puVar10;
      puVar11 = puVar10;
      if (*(int *)(param_3 + 3) != 0) {
        puVar11 = param_3 + 8;
        *(undefined4 *)(param_3 + 8) = 0x786568;
        uVar5 = OPENSSL_strlcat(puVar11,puVar10,0x32);
        if (uVar5 < 4) {
          ERR_new();
          pcVar9 = "default_fixup_args";
          uVar12 = 0x235;
          goto LAB_00100981;
        }
      }
    }
LAB_0010081d:
    uVar6 = EVP_PKEY_CTX_settable_params(*param_3);
    pcVar9 = (char *)param_3[4];
    sVar7 = strlen(pcVar9);
    iVar3 = OSSL_PARAM_allocate_from_text(param_3[6],uVar6,puVar11,pcVar9,sVar7,&local_44);
    if (iVar3 == 0) {
      if (local_44 == 0) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x242,"default_fixup_args");
        ERR_set_error(6,0x93,"[action:%d, state:%d] name=%s, value=%s",*(undefined4 *)(param_3 + 1),
                      4,puVar14,uVar12);
LAB_0010067f:
        uVar5 = 0xfffffffe;
        goto LAB_00100791;
      }
LAB_001007f5:
      uVar5 = 0;
      goto LAB_00100791;
    }
    uVar12 = *(undefined8 *)(param_3[6] + 0x18);
    param_3[0xf] = *(undefined8 *)(param_3[6] + 0x10);
    param_3[0x11] = uVar12;
    goto switchD_00100913_caseD_0;
  }
  if (param_1 < 5) {
    if (param_1 != 1) goto code_r0x001006c4;
    if (param_2 == (int *)0x0) {
      ERR_new();
      pcVar9 = "default_check";
      uVar12 = 0x12a;
LAB_00100660:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar12,pcVar9);
      ERR_set_error(6,0x93,0);
      goto LAB_0010067f;
    }
    lVar13 = *(long *)(param_2 + 10);
    if ((lVar13 == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      pcVar9 = "default_check";
      uVar12 = 0x12f;
LAB_00100981:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar12,pcVar9);
      ERR_set_error(6,0xc0103,0);
      uVar5 = 0xffffffff;
      goto LAB_00100791;
    }
    if (*(int *)(param_3 + 1) == 0) {
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x19d,"default_fixup_args");
      ERR_set_error(6,0x8010c,"[action:%d, state:%d]",*(undefined4 *)(param_3 + 1),1);
      uVar5 = 0;
      goto LAB_00100791;
    }
    if (param_2[3] != 0) {
      puVar2 = (uint *)*param_3;
      uVar1 = *puVar2;
      if (((uVar1 & 0xc1f0) == 0) || (*(long *)(puVar2 + 0xc) != 0)) {
        if ((uVar1 & 0x800) == 0) {
          if ((uVar1 & 0x600) == 0) {
LAB_00100625:
            if ((uVar1 & 0x3000) == 0) goto LAB_00100631;
          }
          if (*(long *)(puVar2 + 0xc) != 0) {
LAB_00100631:
            if ((((uVar1 & 6) == 0) && ((uVar1 & 8) == 0)) || (*(long *)(puVar2 + 10) != 0))
            goto code_r0x00100905;
          }
        }
        else if (*(long *)(puVar2 + 0xc) != 0) {
          if ((uVar1 & 0x600) == 0) goto LAB_00100625;
          goto LAB_00100631;
        }
      }
      ERR_new();
      pcVar9 = "default_fixup_args";
      uVar12 = 0x1b3;
      goto LAB_00100660;
    }
code_r0x00100905:
    switch(param_2[0xc]) {
    case 1:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_int(&local_78,lVar13,(long)param_3 + 0x1c);
      goto LAB_00100a92;
    case 2:
      if ((BIGNUM *)param_3[4] == (BIGNUM *)0x0) {
        puVar11 = (undefined8 *)param_3[6];
        OSSL_PARAM_construct_uint(&local_78,lVar13,(long)param_3 + 0x1c);
        goto LAB_00100aef;
      }
      if (*(int *)(param_3 + 1) != 2) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x1df,"default_fixup_args");
        ERR_set_error(6,0x8010c,"[action:%d, state:%d] trying to get a BIGNUM via ctrl call",
                      *(undefined4 *)(param_3 + 1),1);
        uVar5 = 0;
        goto LAB_00100791;
      }
      iVar4 = BN_num_bits((BIGNUM *)param_3[4]);
      iVar3 = iVar4 + 0xe;
      if (-1 < iVar4 + 7) {
        iVar3 = iVar4 + 7;
      }
      param_3[0x11] = (long)(iVar3 >> 3);
      pvVar8 = CRYPTO_malloc(iVar3 >> 3,"crypto/evp/ctrl_params_translate.c",0x1ce);
      param_3[0xf] = pvVar8;
      if (pvVar8 != (void *)0x0) {
        iVar3 = BN_bn2nativepad(param_3[4],pvVar8,*(undefined4 *)(param_3 + 0x11));
        if (-1 < iVar3) {
          puVar11 = (undefined8 *)param_3[6];
          OSSL_PARAM_construct_BN
                    (&local_78,*(undefined8 *)(param_2 + 10),param_3[0xf],param_3[0x11]);
          goto LAB_00100a58;
        }
        CRYPTO_free((void *)param_3[0xf]);
        uVar5 = 0;
        param_3[0xf] = 0;
        goto LAB_00100791;
      }
      goto LAB_001007f5;
    case 4:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_utf8_string
                (&local_78,lVar13,param_3[4],(long)*(int *)((long)param_3 + 0x1c));
LAB_00100a58:
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
      break;
    case 5:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_octet_string
                (&local_78,lVar13,param_3[4],(long)*(int *)((long)param_3 + 0x1c));
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
      break;
    case 6:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_utf8_ptr
                (&local_78,lVar13,param_3[4],(long)*(int *)((long)param_3 + 0x1c));
LAB_00100aef:
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
      break;
    case 7:
      puVar11 = (undefined8 *)param_3[6];
      OSSL_PARAM_construct_octet_ptr
                (&local_78,lVar13,param_3[4],(long)*(int *)((long)param_3 + 0x1c));
LAB_00100a92:
      *puVar11 = local_78;
      puVar11[1] = uStack_70;
      puVar11[2] = local_68;
      puVar11[3] = uStack_60;
      puVar11[4] = local_58;
    }
    goto switchD_00100913_caseD_0;
  }
  if (param_1 - 7 < 2) {
    if (param_2 == (int *)0x0) {
      ERR_new();
      pcVar9 = "default_check";
      uVar12 = 0x149;
      goto LAB_00100660;
    }
    if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      pcVar9 = "default_check";
      uVar12 = 0x14e;
      goto LAB_00100981;
    }
  }
code_r0x001006c4:
  switch(param_1) {
  case 0:
  case 8:
    uVar1 = *(uint *)((long)param_3 + 0x1c);
    uVar5 = (ulong)uVar1;
    if (*(int *)(param_3 + 1) == 1) {
      iVar3 = param_2[0xc];
      lVar13 = (long)(int)uVar1;
      if (param_1 == 0) {
        lVar13 = param_3[5];
      }
      if (iVar3 == 0) {
        if (*(long *)(param_2 + 0xe) == 0) {
          ERR_new();
          pcVar9 = "default_fixup_args";
          uVar12 = 0x295;
          goto LAB_00100d69;
        }
        iVar3 = *(int *)(param_3[6] + 8);
      }
      switch(iVar3) {
      default:
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x2b1,"default_fixup_args");
        ERR_set_error(6,0x8010c,"[action:%d, state:%d] unsupported OSSL_PARAM data type %d",
                      *(undefined4 *)(param_3 + 1),param_1,param_2[0xc]);
        uVar5 = 0;
        goto LAB_00100791;
      case 1:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = OSSL_PARAM_set_int(param_3[6],uVar1);
          return uVar5;
        }
        break;
      case 2:
        if (param_3[4] == 0) {
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            uVar5 = OSSL_PARAM_set_uint(param_3[6],uVar1);
            return uVar5;
          }
        }
        else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = OSSL_PARAM_set_BN();
          return uVar5;
        }
        break;
      case 4:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = OSSL_PARAM_set_utf8_string(param_3[6],param_3[4]);
          return uVar5;
        }
        break;
      case 5:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = OSSL_PARAM_set_octet_string(param_3[6],param_3[4],lVar13);
          return uVar5;
        }
        break;
      case 7:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = OSSL_PARAM_set_octet_ptr(param_3[6],*(undefined8 *)param_3[4],lVar13);
          return uVar5;
        }
      }
      break;
    }
    goto LAB_00100791;
  default:
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x18c,"default_fixup_args");
    ERR_set_error(6,0xc0101,"[action:%d, state:%d]",*(undefined4 *)(param_3 + 1),param_1);
    goto LAB_001007f5;
  case 2:
    if ((*(int *)(param_3 + 1) == 1) && (param_2[0xc] - 4U < 4)) {
      *(int *)((long)param_3 + 0x1c) = (int)*(undefined8 *)(param_3[6] + 0x20);
    }
  case 5:
switchD_00100913_caseD_0:
    uVar5 = 1;
LAB_00100791:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
    break;
  case 4:
    puVar11 = (undefined8 *)param_3[2];
    local_44 = 0;
    uVar12 = param_3[4];
    if (*(int *)(param_3 + 1) != 2) goto LAB_00100b70;
    puVar14 = puVar11;
    if (param_2 != (int *)0x0) {
      puVar10 = *(undefined8 **)(param_2 + 10);
      goto LAB_00100726;
    }
    goto LAB_0010081d;
  case 7:
    if (*(int *)(param_3 + 1) != 2) {
      if ((*(int *)(param_3 + 1) == 1) && (param_2[0xc] == 7)) {
        param_3[4] = param_3 + 0x10;
      }
      goto switchD_00100913_caseD_0;
    }
    switch(param_2[0xc]) {
    default:
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x283,"default_fixup_args");
      ERR_set_error(6,0x8010c,"[action:%d, state:%d] unknown OSSL_PARAM data type %d",
                    *(undefined4 *)(param_3 + 1),7,param_2[0xc]);
      uVar5 = 0;
      goto LAB_00100791;
    case 1:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = OSSL_PARAM_get_int(param_3[6],(long)param_3 + 0x1c);
        return uVar5;
      }
      break;
    case 2:
      if (param_3[4] == 0) {
        iVar3 = OSSL_PARAM_get_uint(param_3[6],(long)param_3 + 0x1c);
        uVar5 = (ulong)(iVar3 != 0);
      }
      else {
        iVar3 = OSSL_PARAM_get_BN();
        uVar5 = (ulong)(iVar3 != 0);
      }
      goto LAB_00100791;
    case 4:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = OSSL_PARAM_get_utf8_string(param_3[6],param_3[4],param_3[5]);
        return uVar5;
      }
      break;
    case 5:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = OSSL_PARAM_get_octet_string(param_3[6],param_3 + 4,param_3[5],(long)param_3 + 0x1c);
        return uVar5;
      }
      break;
    case 7:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = OSSL_PARAM_get_octet_ptr(param_3[6],param_3[4],param_3 + 5);
        return uVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fix_ecdh_cofactor(int param_1,int *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 1) {
    if (*(int *)(param_3 + 8) != 0) {
      return 0;
    }
    iVar1 = 1;
    if (*(int *)(param_3 + 0x1c) != -2) {
      iVar1 = 2;
    }
    *(int *)(param_3 + 8) = iVar1;
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar2 = 0x12a;
LAB_00101321:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
      ERR_set_error(6,0x93,0);
    }
    else {
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar2 = 0x12f;
LAB_00101291:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0xffffffff;
      }
      if ((iVar1 != 2) || (*(int *)(param_3 + 0x1c) + 1U < 3)) {
        uVar2 = default_fixup_args(1,param_2,param_3);
        return uVar2;
      }
    }
    uVar2 = 0xfffffffe;
  }
  else {
    if (param_1 == 4) {
      *(undefined4 *)(param_3 + 8) = 2;
      if (param_2 == (int *)0x0) {
        uVar2 = default_fixup_args(4,0);
        iVar1 = (int)uVar2;
      }
      else {
        if (*param_2 == 1) {
          ERR_new();
          uVar2 = 0x13c;
          goto LAB_00101321;
        }
        if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
          ERR_new();
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
          ERR_set_error(6,0xc0103,0);
          return 0;
        }
        uVar2 = default_fixup_args(4);
        iVar1 = (int)uVar2;
      }
      if (iVar1 < 1) {
        return uVar2;
      }
    }
    else {
      if (param_1 == 7) {
        if (*(int *)(param_3 + 8) == 0) {
          return 0;
        }
      }
      else {
        if (param_1 != 8) {
          uVar2 = default_fixup_args();
          if ((int)uVar2 < 1) {
            return uVar2;
          }
          if (param_1 != 2) {
            return uVar2;
          }
          if (*(int *)(param_3 + 8) != 1) {
            return uVar2;
          }
          if (1 < *(uint *)(param_3 + 0x1c)) {
            *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
            return 0xffffffff;
          }
          return uVar2;
        }
        if (*(int *)(param_3 + 8) == 0) {
          *(undefined4 *)(param_3 + 8) = 1;
        }
      }
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar2 = 0x149;
        goto LAB_00101321;
      }
      if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar2 = 0x14e;
        goto LAB_00101291;
      }
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      if (param_1 == 7) {
        if (*(int *)(param_3 + 8) == 1) {
          *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
          return uVar2;
        }
        return uVar2;
      }
    }
    if ((param_1 == 8) && (*(int *)(param_3 + 8) == 1)) {
      *(int *)(param_3 + 0x1c) = (int)uVar2;
    }
  }
  return uVar2;
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



undefined8 fix_dh_kdf_type(uint param_1,int *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  char *__s;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar2 = 0x13c;
        goto LAB_001016a1;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
    uVar2 = default_check_isra_0(4,param_2);
    if (0 < (int)uVar2) {
      uVar2 = default_fixup_args(4,param_2,param_3);
      return uVar2;
    }
    return uVar2;
  }
  if (param_1 < 5) {
    if (param_1 == 1) {
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar2 = 0x12a;
LAB_001016a1:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
        ERR_set_error(6,0x93,0);
        return 0xfffffffe;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar2 = 0x12f;
LAB_001014f1:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0xffffffff;
      }
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
      uVar2 = default_check_isra_0(1,param_2);
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      if (*(int *)(param_3 + 8) != 2) goto LAB_0010144b;
LAB_001014a0:
      __s = "";
      piVar3 = &kdf_type_map_6;
      while (*(int *)(param_3 + 0x1c) != *piVar3) {
        __s = *(char **)(piVar3 + 6);
        piVar3 = piVar3 + 4;
        if (__s == (char *)0x0) {
          return 0xfffffffe;
        }
      }
      *(char **)(param_3 + 0x20) = __s;
      sVar4 = strlen(__s);
      *(int *)(param_3 + 0x1c) = (int)sVar4;
LAB_0010144b:
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else if (param_1 - 7 < 2) {
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar2 = 0x149;
      goto LAB_001016a1;
    }
    if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar2 = 0x14e;
      goto LAB_001014f1;
    }
    uVar2 = default_check_isra_0();
    if ((int)uVar2 < 1) {
      return uVar2;
    }
    if (param_1 != 8) {
      uVar2 = default_fixup_args(7,param_2,param_3);
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      if (*(int *)(param_3 + 8) != 2) {
        if (*(int *)(param_3 + 8) == 1) {
          *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
          return uVar2;
        }
        return uVar2;
      }
      goto LAB_001015a5;
    }
    if (*(int *)(param_3 + 8) != 1) goto LAB_0010144b;
    goto LAB_001014a0;
  }
  uVar2 = default_check_isra_0(param_1,param_2);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  uVar2 = default_fixup_args(param_1,param_2,param_3);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if (param_1 != 2) {
    return uVar2;
  }
  if (*(int *)(param_3 + 8) != 1) {
    return uVar2;
  }
LAB_001015a5:
  *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
  puVar5 = &kdf_type_map_6;
  puVar6 = &_LC7;
  do {
    iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(param_3 + 0x20),puVar6);
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 0x1c) = *puVar5;
      uVar2 = 1;
      goto LAB_001015e9;
    }
    puVar6 = *(undefined **)(puVar5 + 6);
    puVar5 = puVar5 + 4;
  } while (puVar6 != (undefined *)0x0);
  uVar2 = 0xffffffff;
LAB_001015e9:
  *(undefined8 *)(param_3 + 0x20) = 0;
  return uVar2;
}



undefined8 fix_hkdf_mode(uint param_1,int *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar2 = 0x13c;
        goto LAB_00101991;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 1) {
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar2 = 0x12a;
LAB_00101991:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
        ERR_set_error(6,0x93,0);
        return 0xfffffffe;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar2 = 0x12f;
LAB_00101919:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0xffffffff;
      }
      if (*(int *)(param_3 + 8) == 2) {
LAB_0010178a:
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
    }
  }
  else if (param_1 - 7 < 2) {
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar2 = 0x149;
      goto LAB_00101991;
    }
    if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar2 = 0x14e;
      goto LAB_00101919;
    }
    if ((*(int *)(param_3 + 8) == 1) && (param_1 == 8)) goto LAB_0010178a;
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
    if (iVar1 != 0) goto LAB_00101887;
    lVar3 = 0;
  }
  else {
    if (param_1 != 2) {
      return 1;
    }
    if (*(int *)(param_3 + 8) != 1) {
      return 1;
    }
    pcVar5 = *(char **)(param_3 + 0x20);
    iVar1 = strcmp(pcVar5,"EXTRACT_AND_EXPAND");
    if (iVar1 == 0) goto LAB_001018d0;
LAB_00101887:
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
    if (param_1 == 2) goto LAB_001018d0;
  }
  *(undefined4 *)(param_3 + 0x1c) = (&str_value_map_15)[lVar3 * 4];
LAB_001018d0:
  *(undefined8 *)(param_3 + 0x20) = 0;
  return 1;
}



ulong fix_rsa_padding_mode(uint param_1,int *param_2,long param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  size_t sVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 4) {
    if (param_2 == (int *)0x0) goto LAB_00101a80;
    if (*param_2 == 1) {
      ERR_new();
      pcVar7 = "default_check";
      uVar8 = 0x13c;
      goto LAB_00101e59;
    }
    if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) goto LAB_00101a80;
    ERR_new();
    uVar9 = 0;
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
    ERR_set_error(6,0xc0103,0);
  }
  else {
    if (param_1 < 5) {
      if (param_1 == 1) {
        if (param_2 == (int *)0x0) {
          ERR_new();
          pcVar7 = "default_check";
          uVar8 = 0x12a;
LAB_00101e59:
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar8,pcVar7);
          ERR_set_error(6,0x93,0);
LAB_00101cb0:
          uVar9 = 0xfffffffe;
          goto LAB_00101bb0;
        }
        if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
          ERR_new();
          uVar8 = 0x12f;
LAB_00101dc1:
          uVar9 = 0xffffffff;
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar8,"default_check");
          ERR_set_error(6,0xc0103,0);
          goto LAB_00101bb0;
        }
        if (*(int *)(param_3 + 8) == 1) {
          *(undefined4 *)(param_3 + 0x1c) = 0x32;
          *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
          *(long *)(param_3 + 0x20) = param_3 + 0x40;
        }
        else if (*(int *)(param_3 + 8) == 2) {
          puVar1 = *(undefined8 **)(param_3 + 0x30);
          OSSL_PARAM_construct_int(&local_68,*(long *)(param_2 + 10),param_3 + 0x1c);
          uVar9 = 1;
          *puVar1 = local_68;
          puVar1[1] = uStack_60;
          puVar1[2] = local_58;
          puVar1[3] = uStack_50;
          puVar1[4] = local_48;
          goto LAB_00101bb0;
        }
      }
    }
    else {
      if (1 < param_1 - 7) goto LAB_00101a80;
      if (param_2 == (int *)0x0) {
        ERR_new();
        pcVar7 = "default_check";
        uVar8 = 0x149;
        goto LAB_00101e59;
      }
      if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar8 = 0x14e;
        goto LAB_00101dc1;
      }
      if ((param_1 != 8) || (*(int *)(param_3 + 8) != 1)) goto LAB_00101a80;
      lVar5 = *(long *)(param_3 + 0x30);
      if (*(int *)(lVar5 + 8) == 1) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar9 = OSSL_PARAM_get_int(lVar5,param_3 + 0x1c);
          return uVar9;
        }
        goto LAB_00101f7a;
      }
      if (*(int *)(lVar5 + 8) == 2) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar9 = OSSL_PARAM_get_uint(lVar5,param_3 + 0x1c);
          return uVar9;
        }
        goto LAB_00101f7a;
      }
      iVar3 = *(int *)(param_3 + 0x1c);
      if (iVar3 != 1) {
        if (iVar3 == 3) {
          lVar5 = 1;
          goto LAB_00101f2a;
        }
        if (iVar3 == 4) {
          lVar5 = 2;
          goto LAB_00101f2a;
        }
        if (iVar3 == 5) {
          lVar5 = 4;
          goto LAB_00101f2a;
        }
        if (iVar3 == 6) {
          lVar5 = 5;
          goto LAB_00101f2a;
        }
        if (iVar3 == 7) {
          lVar5 = 6;
          goto LAB_00101f2a;
        }
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x52c,"fix_rsa_padding_mode");
        ERR_set_error(4,0x76,"[action:%d, state:%d] padding number %d",*(undefined4 *)(param_3 + 8),
                      8,*(undefined4 *)(param_3 + 0x1c));
        goto LAB_00101cb0;
      }
      lVar5 = 0;
LAB_00101f2a:
      pcVar7 = *(char **)(str_value_map_13 + lVar5 * 0x10 + 8);
      if (pcVar7 == (char *)0x0) {
        ERR_new();
        pcVar7 = "fix_rsa_padding_mode";
        uVar8 = 0x536;
        goto LAB_00101e59;
      }
      *(char **)(param_3 + 0x20) = pcVar7;
      sVar6 = strlen(pcVar7);
      *(int *)(param_3 + 0x1c) = (int)sVar6;
    }
LAB_00101a80:
    uVar2 = default_fixup_args(param_1,param_2,param_3);
    uVar9 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      if (*(int *)(param_3 + 8) == 2) {
        if (param_1 != 7) goto LAB_00101bb0;
        pcVar7 = *(char **)(param_3 + 0x20);
        iVar3 = strcmp(pcVar7,"pkcs1");
        if (iVar3 != 0) goto LAB_00101ace;
        uVar4 = 1;
LAB_00101d70:
        *(undefined4 *)(param_3 + 0x1c) = uVar4;
      }
      else {
        if ((param_1 != 2) || (*(int *)(param_3 + 8) != 1)) goto LAB_00101bb0;
        pcVar7 = *(char **)(param_3 + 0x20);
        iVar3 = strcmp(pcVar7,"pkcs1");
        if (iVar3 == 0) {
          uVar4 = 1;
        }
        else {
LAB_00101ace:
          iVar3 = strcmp(pcVar7,"none");
          if (iVar3 != 0) {
            iVar3 = strcmp(pcVar7,"oaep");
            if (iVar3 == 0) {
              lVar5 = 2;
              goto LAB_00101ee0;
            }
            iVar3 = strcmp(pcVar7,"oeap");
            if (iVar3 == 0) {
              lVar5 = 3;
              goto LAB_00101ee0;
            }
            iVar3 = strcmp(pcVar7,"x931");
            if (iVar3 == 0) {
              lVar5 = 4;
              goto LAB_00101ee0;
            }
            iVar3 = strcmp(pcVar7,"pss");
            if (iVar3 == 0) {
              lVar5 = 5;
              goto LAB_00101ee0;
            }
            iVar3 = strcmp(pcVar7,(char *)0x0);
            if (iVar3 == 0) {
              lVar5 = 6;
              goto LAB_00101ee0;
            }
            ERR_new();
            ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x54a,"fix_rsa_padding_mode");
            ERR_set_error(4,0x76,"[action:%d, state:%d] padding name %s",
                          *(undefined4 *)(param_3 + 8),param_1,*(undefined4 *)(param_3 + 0x1c));
            *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
            uVar9 = 0xfffffffe;
            goto LAB_00101b9f;
          }
          lVar5 = 1;
LAB_00101ee0:
          uVar4 = *(undefined4 *)(str_value_map_13 + lVar5 * 0x10);
          if (param_1 != 2) goto LAB_00101d70;
        }
        **(undefined4 **)(param_3 + 0x38) = uVar4;
      }
LAB_00101b9f:
      *(undefined8 *)(param_3 + 0x20) = 0;
    }
  }
LAB_00101bb0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
LAB_00101f7a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong fix_ec_param_enc(uint param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        pcVar3 = "default_check";
        uVar5 = 0x13c;
        goto LAB_00102141;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
LAB_001020fe:
    if (*(int *)(param_3 + 8) != 2) {
      return 0;
    }
    uVar4 = default_fixup_args();
    return uVar4;
  }
  if (param_1 < 5) {
    if (param_1 != 1) goto LAB_001020fe;
    if (param_2 == (int *)0x0) {
      ERR_new();
      pcVar3 = "default_check";
      uVar5 = 0x12a;
      goto LAB_00102141;
    }
    if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar5 = 0x12f;
LAB_00102199:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar5,"default_check");
      ERR_set_error(6,0xc0103,0);
      return 0xffffffff;
    }
    if (*(int *)(param_3 + 8) != 2) {
      return 0;
    }
    if (*(int *)(param_3 + 0x1c) == 0) {
      pcVar3 = "explicit";
LAB_00102005:
      *(char **)(param_3 + 0x20) = pcVar3;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      uVar4 = default_fixup_args(1);
      return uVar4;
    }
    if (*(int *)(param_3 + 0x1c) == 1) {
      pcVar3 = "named_curve";
      goto LAB_00102005;
    }
  }
  else {
    if (1 < param_1 - 7) goto LAB_001020fe;
    if (param_2 == (int *)0x0) {
      ERR_new();
      pcVar3 = "default_check";
      uVar5 = 0x149;
      goto LAB_00102141;
    }
    if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar5 = 0x14e;
      goto LAB_00102199;
    }
    if (*(int *)(param_3 + 8) != 2) {
      return 0;
    }
    uVar1 = default_fixup_args();
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 1) {
      return uVar4;
    }
    if (param_1 != 7) {
      return uVar4;
    }
    pcVar3 = *(char **)(param_3 + 0x20);
    iVar2 = strcmp(pcVar3,"explicit");
    if (iVar2 == 0) {
LAB_001020bb:
      *(int *)(param_3 + 0x1c) = iVar2;
      *(undefined8 *)(param_3 + 0x20) = 0;
      return uVar4;
    }
    iVar2 = strcmp(pcVar3,"named_curve");
    if (iVar2 == 0) {
      iVar2 = 1;
      goto LAB_001020bb;
    }
    *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  ERR_new();
  pcVar3 = "fix_ec_param_enc";
  uVar5 = 0x46b;
LAB_00102141:
  ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar5,pcVar3);
  ERR_set_error(6,0x93,0);
  return 0xfffffffe;
}



int fix_rsa_pss_saltlen(uint param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined8 uVar6;
  char *pcVar7;
  long lVar5;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar6 = 0x13c;
        goto LAB_00102501;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 1) {
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar6 = 0x12a;
LAB_00102501:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar6,"default_check");
        ERR_set_error(6,0x93,0);
        return -2;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar6 = 0x12f;
LAB_001024a1:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar6,"default_check");
        ERR_set_error(6,0xc0103,0);
        return -1;
      }
      if (*(int *)(param_3 + 8) == 1) {
        *(undefined4 *)(param_3 + 0x1c) = 0x32;
        *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(param_3 + 0x20);
        *(long *)(param_3 + 0x20) = param_3 + 0x40;
      }
      else if (*(int *)(param_3 + 8) == 2) goto LAB_00102342;
    }
  }
  else if (param_1 - 7 < 2) {
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar6 = 0x149;
      goto LAB_00102501;
    }
    if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar6 = 0x14e;
      goto LAB_001024a1;
    }
    if ((*(int *)(param_3 + 8) != 1) || (param_1 != 8)) goto LAB_001022d0;
LAB_00102342:
    iVar1 = *(int *)(param_3 + 0x1c);
    if (iVar1 == -1) {
      pcVar7 = "digest";
LAB_00102562:
      strncpy((char *)(param_3 + 0x40),pcVar7,0x31);
      *(undefined1 *)(param_3 + 0x71) = 0;
    }
    else {
      if (iVar1 == -3) {
        pcVar7 = "max";
        goto LAB_00102562;
      }
      if (iVar1 == -2) {
        pcVar7 = "auto";
        goto LAB_00102562;
      }
      BIO_snprintf((char *)(param_3 + 0x40),0x32,"%d");
    }
    *(char **)(param_3 + 0x20) = (char *)(param_3 + 0x40);
    sVar4 = strlen((char *)(param_3 + 0x40));
    *(int *)(param_3 + 0x1c) = (int)sVar4;
  }
LAB_001022d0:
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
    if (param_1 != 2) {
      return iVar1;
    }
    if (*(int *)(param_3 + 8) != 1) {
      return iVar1;
    }
  }
  pcVar7 = *(char **)(param_3 + 0x20);
  iVar2 = strcmp(pcVar7,"digest");
  if (iVar2 == 0) {
    lVar5 = 0;
  }
  else {
    iVar2 = strcmp(pcVar7,"max");
    if (iVar2 == 0) {
      lVar5 = 1;
    }
    else {
      iVar2 = strcmp(pcVar7,"auto");
      if (iVar2 != 0) {
        lVar5 = strtol(pcVar7,(char **)0x0,10);
        uVar3 = (undefined4)lVar5;
        goto LAB_00102471;
      }
      lVar5 = 2;
    }
  }
  uVar3 = (&str_value_map_14)[lVar5 * 4];
LAB_00102471:
  if (param_1 == 2) {
    **(undefined4 **)(param_3 + 0x38) = uVar3;
  }
  else {
    *(undefined4 *)(param_3 + 0x1c) = uVar3;
  }
  *(undefined8 *)(param_3 + 0x20) = 0;
  return iVar1;
}



int fix_ec_paramgen_curve_nid(uint param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = (char *)0x0;
  if (param_1 == 4) {
    if (param_2 == (int *)0x0) goto LAB_00102706;
    if (*param_2 == 1) {
      ERR_new();
      uVar4 = 0x13c;
      goto LAB_001027d1;
    }
    if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) goto LAB_00102706;
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
    ERR_set_error(6,0xc0103,0);
LAB_00102760:
    iVar1 = 0;
  }
  else {
    if (param_1 < 5) {
      if (param_1 == 1) {
        if (param_2 != (int *)0x0) {
          if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) {
            if (*(int *)(param_3 + 8) == 2) {
              pcVar3 = OBJ_nid2sn(*(int *)(param_3 + 0x1c));
              *(char **)(param_3 + 0x20) = pcVar3;
              *(undefined4 *)(param_3 + 0x1c) = 0;
              iVar1 = default_fixup_args(1,param_2);
              goto LAB_00102713;
            }
            goto LAB_00102760;
          }
          ERR_new();
          uVar4 = 0x12f;
LAB_00102779:
          iVar1 = -1;
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar4,"default_check");
          ERR_set_error(6,0xc0103,0);
          goto LAB_00102713;
        }
        ERR_new();
        uVar4 = 0x12a;
LAB_001027d1:
        iVar1 = -2;
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar4,"default_check");
        ERR_set_error(6,0x93,0);
        goto LAB_00102713;
      }
LAB_00102706:
      if (*(int *)(param_3 + 8) != 2) goto LAB_00102760;
    }
    else {
      if (1 < param_1 - 7) goto LAB_00102706;
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar4 = 0x149;
        goto LAB_001027d1;
      }
      if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar4 = 0x14e;
        goto LAB_00102779;
      }
      if (*(int *)(param_3 + 8) != 2) goto LAB_00102760;
      if (param_1 == 7) {
        local_18 = (char *)(param_3 + 0x40);
        *(undefined8 *)(param_3 + 0x28) = 0x32;
        *(char ***)(param_3 + 0x20) = &local_18;
        iVar1 = default_fixup_args(7);
        if (0 < iVar1) {
          iVar2 = OBJ_sn2nid(local_18);
          *(int *)(param_3 + 0x1c) = iVar2;
          *(undefined8 *)(param_3 + 0x20) = 0;
        }
        goto LAB_00102713;
      }
    }
    iVar1 = default_fixup_args();
  }
LAB_00102713:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 fix_dh_nid(uint param_1,int *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar1 = 0x13c;
        goto LAB_001029d9;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
  }
  else if (param_1 < 5) {
    if (param_1 == 1) {
      if (param_2 != (int *)0x0) {
        if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) {
          if (*(int *)(param_3 + 8) != 2) {
            return 0;
          }
          uVar1 = ossl_ffc_uid_to_dh_named_group(*(undefined4 *)(param_3 + 0x1c));
          lVar2 = ossl_ffc_named_group_get_name(uVar1);
          *(long *)(param_3 + 0x20) = lVar2;
          if (lVar2 == 0) {
            ERR_new();
            ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x3f0,"fix_dh_nid");
            ERR_set_error(6,0xde,0);
            return 0;
          }
          *(undefined4 *)(param_3 + 0x1c) = 0;
          uVar1 = default_fixup_args(1);
          return uVar1;
        }
        ERR_new();
        uVar1 = 0x12f;
LAB_00102981:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar1,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0xffffffff;
      }
      ERR_new();
      uVar1 = 0x12a;
LAB_001029d9:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar1,"default_check");
      ERR_set_error(6,0x93,0);
      return 0xfffffffe;
    }
  }
  else if (param_1 - 7 < 2) {
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar1 = 0x149;
      goto LAB_001029d9;
    }
    if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar1 = 0x14e;
      goto LAB_00102981;
    }
  }
  if (*(int *)(param_3 + 8) != 2) {
    return 0;
  }
  uVar1 = default_fixup_args(param_1);
  return uVar1;
}



undefined8 fix_dh_nid5114(uint param_1,int *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar2 = 0x13c;
        goto LAB_00102c71;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
    if (*(int *)(param_3 + 8) != 2) {
      return 0;
    }
    if (*(char **)(param_3 + 0x20) == (char *)0x0) {
      return 0;
    }
    uVar1 = strtol(*(char **)(param_3 + 0x20),(char **)0x0,10);
    uVar2 = ossl_ffc_uid_to_dh_named_group(uVar1 & 0xffffffff);
    lVar3 = ossl_ffc_named_group_get_name(uVar2);
    *(long *)(param_3 + 0x20) = lVar3;
    if (lVar3 != 0) {
LAB_00102b6f:
      *(undefined4 *)(param_3 + 0x1c) = 0;
      goto LAB_00102afd;
    }
    ERR_new();
    uVar2 = 0x417;
LAB_00102baa:
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"fix_dh_nid5114");
    ERR_set_error(6,0xde,0);
  }
  else {
    if (param_1 < 5) {
      if (param_1 == 1) {
        if (param_2 == (int *)0x0) {
          ERR_new();
          uVar2 = 0x12a;
LAB_00102c71:
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
          ERR_set_error(6,0x93,0);
          return 0xfffffffe;
        }
        if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
          ERR_new();
          uVar2 = 0x12f;
LAB_00102be1:
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
          ERR_set_error(6,0xc0103,0);
          return 0xffffffff;
        }
        if (*(int *)(param_3 + 8) != 2) {
          return 0;
        }
        uVar2 = ossl_ffc_uid_to_dh_named_group(*(undefined4 *)(param_3 + 0x1c));
        lVar3 = ossl_ffc_named_group_get_name(uVar2);
        *(long *)(param_3 + 0x20) = lVar3;
        if (lVar3 != 0) goto LAB_00102b6f;
        ERR_new();
        uVar2 = 0x40b;
        goto LAB_00102baa;
      }
    }
    else if (param_1 - 7 < 2) {
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar2 = 0x149;
        goto LAB_00102c71;
      }
      if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar2 = 0x14e;
        goto LAB_00102be1;
      }
    }
    if (*(int *)(param_3 + 8) == 2) {
LAB_00102afd:
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}



undefined8 fix_dh_paramgen_type(uint param_1,int *param_2,long param_3)

{
  ulong uVar1;
  char *__s;
  size_t sVar2;
  undefined8 uVar3;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar3 = 0x13c;
        goto LAB_00102e79;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
    if (*(int *)(param_3 + 8) == 2) {
      uVar1 = strtol(*(char **)(param_3 + 0x20),(char **)0x0,10);
      __s = (char *)ossl_dh_gen_type_id2name(uVar1 & 0xffffffff);
      *(char **)(param_3 + 0x20) = __s;
      if (__s != (char *)0x0) {
        sVar2 = strlen(__s);
        *(int *)(param_3 + 0x1c) = (int)sVar2;
        goto LAB_00102dfb;
      }
      ERR_new();
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x436,"fix_dh_paramgen_type");
      ERR_set_error(6,0xde,0);
    }
  }
  else {
    if (param_1 < 5) {
      if (param_1 == 1) {
        if (param_2 == (int *)0x0) {
          ERR_new();
          uVar3 = 0x12a;
LAB_00102e79:
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar3,"default_check");
          ERR_set_error(6,0x93,0);
          return 0xfffffffe;
        }
        if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
          ERR_new();
          uVar3 = 0x12f;
LAB_00102d78:
          ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar3,"default_check");
          ERR_set_error(6,0xc0103,0);
          return 0xffffffff;
        }
      }
    }
    else if (param_1 - 7 < 2) {
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar3 = 0x149;
        goto LAB_00102e79;
      }
      if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar3 = 0x14e;
        goto LAB_00102d78;
      }
    }
    if (*(int *)(param_3 + 8) == 2) {
LAB_00102dfb:
      uVar3 = default_fixup_args(param_1,param_2,param_3);
      return uVar3;
    }
  }
  return 0;
}



ulong fix_oid(uint param_1,int *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  ASN1_OBJECT *pAVar3;
  undefined8 uVar4;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 != 1) {
        if ((*(long *)(param_2 + 10) != 0) && (param_2[0xc] != 0)) {
          uVar2 = default_fixup_args(4);
          return uVar2;
        }
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
      ERR_new();
      uVar4 = 0x13c;
LAB_001030f1:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar4,"default_check");
      ERR_set_error(6,0x93,0);
      return 0xfffffffe;
    }
  }
  else {
    if (param_1 < 5) {
      if (param_1 != 1) {
        uVar1 = default_fixup_args();
        uVar2 = (ulong)uVar1;
        if ((int)uVar1 < 1) {
          return uVar2;
        }
        if (param_1 != 2) {
          return uVar2;
        }
        if (*(int *)(param_3 + 8) != 1) {
          return uVar2;
        }
LAB_0010316f:
        pAVar3 = OBJ_txt2obj(*(char **)(param_3 + 0x20),0);
        *(ASN1_OBJECT **)(param_3 + 0x20) = pAVar3;
        return uVar2;
      }
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar4 = 0x12a;
        goto LAB_001030f1;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar4 = 0x12f;
LAB_00103059:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar4,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0xffffffff;
      }
      if (*(int *)(param_3 + 8) != 2) goto LAB_00102f63;
    }
    else {
      if (1 < param_1 - 7) goto LAB_00102f63;
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar4 = 0x149;
        goto LAB_001030f1;
      }
      if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar4 = 0x14e;
        goto LAB_00103059;
      }
      if (param_1 != 8) {
        uVar1 = default_fixup_args(7,param_2,param_3);
        uVar2 = (ulong)uVar1;
        if ((int)uVar1 < 1) {
          return uVar2;
        }
        if (*(int *)(param_3 + 8) != 2) {
          return uVar2;
        }
        goto LAB_0010316f;
      }
      if (*(int *)(param_3 + 8) != 1) {
        uVar1 = default_fixup_args(8,param_2,param_3);
        return (ulong)uVar1;
      }
    }
    OBJ_obj2txt((char *)(param_3 + 0x40),0x32,*(ASN1_OBJECT **)(param_3 + 0x20),0);
    *(char **)(param_3 + 0x20) = (char *)(param_3 + 0x40);
    *(undefined4 *)(param_3 + 0x1c) = 0;
  }
LAB_00102f63:
  uVar1 = default_fixup_args(param_1,param_2,param_3);
  return (ulong)uVar1;
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



undefined8 get_rsa_payload_c3(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [8];
  long local_80;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00103328:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (1 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_80 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_80;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_0010339d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00103328;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010339d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e7(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [32];
  long local_b8;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00103428:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (4 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_b8 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_b8;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_0010349d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00103428;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010349d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f7(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_88 [32];
  long local_68;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00103518:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (4 < uVar2) {
      iVar1 = RSA_get0_multi_prime_factors(uVar3,auStack_88);
      if (((iVar1 != 0) && (local_68 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_68;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00103582;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00103518;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00103582:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_0010392e;
    }
  }
  uVar3 = 0;
LAB_0010392e:
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
        goto LAB_00103b3a;
      }
    }
  }
  else {
    if (iVar1 < 0x199) {
      if (iVar1 == 0x1c) {
LAB_00103af8:
        iVar1 = *(int *)(*(long *)(param_3 + 0x30) + 8);
        if (iVar1 == 2) {
          uVar5 = EVP_PKEY_get0_DH(uVar5);
          uVar5 = DH_get0_pub_key(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
        }
        else {
          if (iVar1 != 5) goto LAB_00103a8c;
          uVar5 = EVP_PKEY_get0_DH(uVar5);
          uVar5 = ossl_dh_key2buf(uVar5,&local_48,0,1);
          *(undefined8 *)(param_3 + 0x28) = uVar5;
          *(void **)(param_3 + 0x20) = local_48;
        }
LAB_00103b3a:
        uVar2 = default_fixup_args(param_1,param_2,param_3);
        CRYPTO_free(local_48);
        goto LAB_00103a8e;
      }
      if (iVar1 == 0x74) {
        if (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2) {
          uVar5 = EVP_PKEY_get0_DSA(uVar5);
          uVar5 = DSA_get0_pub_key(uVar5);
          *(undefined8 *)(param_3 + 0x20) = uVar5;
          goto LAB_00103b3a;
        }
        goto LAB_00103a8c;
      }
    }
    else if (iVar1 == 0x398) goto LAB_00103af8;
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x678,"get_payload_public_key");
    ERR_set_error(6,0xe0,0);
  }
LAB_00103a8c:
  uVar2 = 0;
LAB_00103a8e:
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
      goto LAB_00103de0;
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
        goto LAB_00103de0;
      }
    }
  }
  __s = *(char **)(param_3 + 0x20);
LAB_00103de0:
  if (__s != (char *)0x0) {
    sVar2 = strlen(__s);
    *(int *)(param_3 + 0x1c) = (int)sVar2;
    uVar3 = default_fixup_args(param_1,param_2,param_3);
    return uVar3;
  }
  return 1;
}



ulong fix_md(undefined8 param_1,int *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar2 = (uint)param_1;
  if (uVar2 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar8 = 0x13c;
        goto LAB_00104101;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
  }
  else {
    if (4 < uVar2) {
      if (uVar2 - 7 < 2) {
        if (param_2 == (int *)0x0) {
          ERR_new();
          uVar8 = 0x149;
          goto LAB_00104101;
        }
        if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
          ERR_new();
          uVar8 = 0x14e;
          goto LAB_00104009;
        }
        if (uVar2 != 8) {
          uVar2 = default_fixup_args(7,param_2,param_3);
          uVar6 = (ulong)uVar2;
          if ((int)uVar2 < 1) {
            return uVar6;
          }
          if ((int)param_3[1] != 2) {
            return uVar6;
          }
          lVar7 = evp_get_digestbyname_ex(*(undefined8 *)(*param_3 + 8),param_3[4]);
          *(undefined4 *)((long)param_3 + 0x1c) = 0;
          param_3[4] = lVar7;
          return uVar6;
        }
        if ((int)param_3[1] == 1) {
          pcVar4 = "";
          if (param_3[4] != 0) {
            pcVar4 = (char *)EVP_MD_get0_name(param_3[4]);
          }
          param_3[4] = (long)pcVar4;
          sVar5 = strlen(pcVar4);
          *(int *)((long)param_3 + 0x1c) = (int)sVar5;
          uVar2 = default_fixup_args(8,param_2,param_3);
          return (ulong)uVar2;
        }
      }
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return (ulong)uVar2;
    }
    if (uVar2 != 1) {
      uVar3 = default_fixup_args();
      uVar6 = (ulong)uVar3;
      if ((int)uVar3 < 1) {
        return uVar6;
      }
      if (uVar2 != 2) {
        return uVar6;
      }
      if ((int)param_3[1] != 1) {
        return uVar6;
      }
      puVar1 = (undefined8 *)param_3[7];
      uVar8 = evp_get_digestbyname_ex(*(undefined8 *)(*param_3 + 8),param_3[4]);
      *puVar1 = uVar8;
      *(undefined4 *)((long)param_3 + 0x1c) = 1;
      return uVar6;
    }
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar8 = 0x12a;
LAB_00104101:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar8,"default_check");
      ERR_set_error(6,0x93,0);
      return 0xfffffffe;
    }
    if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar8 = 0x12f;
LAB_00104009:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar8,"default_check");
      ERR_set_error(6,0xc0103,0);
      return 0xffffffff;
    }
    if ((int)param_3[1] == 1) {
      *(undefined4 *)((long)param_3 + 0x1c) = 0x32;
      param_3[7] = param_3[4];
      param_3[4] = (long)(param_3 + 8);
      uVar2 = default_fixup_args(1);
      return (ulong)uVar2;
    }
    if ((int)param_3[1] == 2) {
      if (param_3[4] == 0) {
        pcVar4 = OBJ_nid2sn(*(int *)((long)param_3 + 0x1c));
      }
      else {
        pcVar4 = (char *)EVP_MD_get0_name();
      }
      param_3[4] = (long)pcVar4;
      sVar5 = strlen(pcVar4);
      *(int *)((long)param_3 + 0x1c) = (int)sVar5;
      uVar2 = default_fixup_args(1,param_2,param_3);
      return (ulong)uVar2;
    }
  }
  uVar6 = default_fixup_args(param_1,param_2,param_3);
  return uVar6;
}



ulong fix_cipher(undefined8 param_1,int *param_2,long *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar2 = (uint)param_1;
  if (uVar2 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar8 = 0x13c;
        goto LAB_00104461;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
  }
  else {
    if (4 < uVar2) {
      if (uVar2 - 7 < 2) {
        if (param_2 == (int *)0x0) {
          ERR_new();
          uVar8 = 0x149;
          goto LAB_00104461;
        }
        if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
          ERR_new();
          uVar8 = 0x14e;
          goto LAB_00104369;
        }
        if (uVar2 != 8) {
          uVar2 = default_fixup_args(7,param_2,param_3);
          uVar6 = (ulong)uVar2;
          if ((int)uVar2 < 1) {
            return uVar6;
          }
          if ((int)param_3[1] != 2) {
            return uVar6;
          }
          lVar7 = evp_get_cipherbyname_ex(*(undefined8 *)(*param_3 + 8),param_3[4]);
          *(undefined4 *)((long)param_3 + 0x1c) = 0;
          param_3[4] = lVar7;
          return uVar6;
        }
        if ((int)param_3[1] == 1) {
          pcVar4 = "";
          if (param_3[4] != 0) {
            pcVar4 = (char *)EVP_CIPHER_get0_name(param_3[4]);
          }
          param_3[4] = (long)pcVar4;
          sVar5 = strlen(pcVar4);
          *(int *)((long)param_3 + 0x1c) = (int)sVar5;
          uVar2 = default_fixup_args(8,param_2,param_3);
          return (ulong)uVar2;
        }
      }
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return (ulong)uVar2;
    }
    if (uVar2 != 1) {
      uVar3 = default_fixup_args();
      uVar6 = (ulong)uVar3;
      if ((int)uVar3 < 1) {
        return uVar6;
      }
      if (uVar2 != 2) {
        return uVar6;
      }
      if ((int)param_3[1] != 1) {
        return uVar6;
      }
      puVar1 = (undefined8 *)param_3[7];
      uVar8 = evp_get_cipherbyname_ex(*(undefined8 *)(*param_3 + 8),param_3[4]);
      *puVar1 = uVar8;
      *(undefined4 *)((long)param_3 + 0x1c) = 1;
      return uVar6;
    }
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar8 = 0x12a;
LAB_00104461:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar8,"default_check");
      ERR_set_error(6,0x93,0);
      return 0xfffffffe;
    }
    if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar8 = 0x12f;
LAB_00104369:
      ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar8,"default_check");
      ERR_set_error(6,0xc0103,0);
      return 0xffffffff;
    }
    if ((int)param_3[1] == 1) {
      *(undefined4 *)((long)param_3 + 0x1c) = 0x32;
      param_3[7] = param_3[4];
      param_3[4] = (long)(param_3 + 8);
      uVar2 = default_fixup_args(1);
      return (ulong)uVar2;
    }
    if ((int)param_3[1] == 2) {
      if (param_3[4] == 0) {
        pcVar4 = OBJ_nid2sn(*(int *)((long)param_3 + 0x1c));
      }
      else {
        pcVar4 = (char *)EVP_CIPHER_get0_name();
      }
      param_3[4] = (long)pcVar4;
      sVar5 = strlen(pcVar4);
      *(int *)((long)param_3 + 0x1c) = (int)sVar5;
      uVar2 = default_fixup_args(1,param_2,param_3);
      return (ulong)uVar2;
    }
  }
  uVar6 = default_fixup_args(param_1,param_2,param_3);
  return uVar6;
}



undefined8 fix_ec_kdf_type(uint param_1,int *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  char *__s;
  
  if (param_1 == 4) {
    if (param_2 != (int *)0x0) {
      if (*param_2 == 1) {
        ERR_new();
        uVar2 = 0x13c;
        goto LAB_001047d1;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",0x141,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0;
      }
    }
    uVar2 = default_check_isra_0(4,param_2);
    if (0 < (int)uVar2) {
      uVar2 = default_fixup_args(4,param_2,param_3);
      return uVar2;
    }
    return uVar2;
  }
  if (param_1 < 5) {
    if (param_1 == 1) {
      if (param_2 == (int *)0x0) {
        ERR_new();
        uVar2 = 0x12a;
LAB_001047d1:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
        ERR_set_error(6,0x93,0);
        return 0xfffffffe;
      }
      if ((*(long *)(param_2 + 10) == 0) || (param_2[0xc] == 0)) {
        ERR_new();
        uVar2 = 0x12f;
LAB_00104621:
        ERR_set_debug("crypto/evp/ctrl_params_translate.c",uVar2,"default_check");
        ERR_set_error(6,0xc0103,0);
        return 0xffffffff;
      }
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
      uVar2 = default_check_isra_0(1,param_2);
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      if (*(int *)(param_3 + 8) != 2) goto LAB_0010457b;
LAB_001045d0:
      __s = "";
      piVar3 = &kdf_type_map_11;
      while (*(int *)(param_3 + 0x1c) != *piVar3) {
        __s = *(char **)(piVar3 + 6);
        piVar3 = piVar3 + 4;
        if (__s == (char *)0x0) {
          return 0xfffffffe;
        }
      }
      *(char **)(param_3 + 0x20) = __s;
      sVar4 = strlen(__s);
      *(int *)(param_3 + 0x1c) = (int)sVar4;
LAB_0010457b:
      uVar2 = default_fixup_args(param_1,param_2,param_3);
      return uVar2;
    }
  }
  else if (param_1 - 7 < 2) {
    if (param_2 == (int *)0x0) {
      ERR_new();
      uVar2 = 0x149;
      goto LAB_001047d1;
    }
    if ((param_2[4] == 0) || (param_2[0xc] == 0)) {
      ERR_new();
      uVar2 = 0x14e;
      goto LAB_00104621;
    }
    uVar2 = default_check_isra_0();
    if ((int)uVar2 < 1) {
      return uVar2;
    }
    if (param_1 != 8) {
      uVar2 = default_fixup_args(7,param_2,param_3);
      if ((int)uVar2 < 1) {
        return uVar2;
      }
      if (*(int *)(param_3 + 8) != 2) {
        if (*(int *)(param_3 + 8) == 1) {
          *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
          return uVar2;
        }
        return uVar2;
      }
      goto LAB_001046d5;
    }
    if (*(int *)(param_3 + 8) != 1) goto LAB_0010457b;
    goto LAB_001045d0;
  }
  uVar2 = default_check_isra_0(param_1,param_2);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  uVar2 = default_fixup_args(param_1,param_2,param_3);
  if ((int)uVar2 < 1) {
    return uVar2;
  }
  if (param_1 != 2) {
    return uVar2;
  }
  if (*(int *)(param_3 + 8) != 1) {
    return uVar2;
  }
LAB_001046d5:
  *(undefined4 *)(param_3 + 0x1c) = 0xffffffff;
  puVar5 = &kdf_type_map_11;
  puVar6 = &_LC7;
  do {
    iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(param_3 + 0x20),puVar6);
    if (iVar1 == 0) {
      *(undefined4 *)(param_3 + 0x1c) = *puVar5;
      uVar2 = 1;
      goto LAB_00104719;
    }
    puVar6 = *(undefined **)(puVar5 + 6);
    puVar5 = puVar5 + 4;
  } while (puVar6 != (undefined *)0x0);
  uVar2 = 0xffffffff;
LAB_00104719:
  *(undefined8 *)(param_3 + 0x20) = 0;
  return uVar2;
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



undefined8 get_rsa_payload_f6(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_88 [24];
  long local_70;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00104b08:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (3 < uVar2) {
      iVar1 = RSA_get0_multi_prime_factors(uVar3,auStack_88);
      if (((iVar1 != 0) && (local_70 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_70;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00104b72;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00104b08;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00104b72:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f3(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00104be8:
    uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (iVar1 != 0) {
      iVar1 = RSA_get0_multi_prime_factors(uVar2,local_88);
      if (((iVar1 != 0) && (local_88[0] != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_88[0];
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = default_fixup_args(param_1,param_2,param_3);
          return uVar2;
        }
        goto LAB_00104c4d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00104be8;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00104c4d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f8(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_88 [40];
  long local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00104cc8:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (5 < uVar2) {
      iVar1 = RSA_get0_multi_prime_factors(uVar3,auStack_88);
      if (((iVar1 != 0) && (local_60 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_60;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00104d32;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00104cc8;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00104d32:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f10(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_88 [56];
  long local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00104da8:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (7 < uVar2) {
      iVar1 = RSA_get0_multi_prime_factors(uVar3,auStack_88);
      if (((iVar1 != 0) && (local_50 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_50;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00104e12;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00104da8;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00104e12:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f9(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_88 [48];
  long local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00104e88:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (6 < uVar2) {
      iVar1 = RSA_get0_multi_prime_factors(uVar3,auStack_88);
      if (((iVar1 != 0) && (local_58 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_58;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00104ef2;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00104e88;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00104ef2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f5(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_88 [16];
  long local_78;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00104f68:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (2 < uVar2) {
      iVar1 = RSA_get0_multi_prime_factors(uVar3,auStack_88);
      if (((iVar1 != 0) && (local_78 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_78;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00104fd2;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00104f68;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00104fd2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_f4(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_88 [8];
  long local_80;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105048:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (1 < uVar2) {
      iVar1 = RSA_get0_multi_prime_factors(uVar3,auStack_88);
      if (((iVar1 != 0) && (local_80 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_80;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_001050b2;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105048;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001050b2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c2(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  long local_88 [11];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105138:
    uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (iVar1 != 0) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar2,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_88[0] != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_88[0];
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = default_fixup_args(param_1,param_2,param_3);
          return uVar2;
        }
        goto LAB_001051a9;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105138;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001051a9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c6(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [32];
  long local_68;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105228:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (4 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_68 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_68;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_0010529d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105228;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010529d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c4(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [16];
  long local_78;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105328:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (2 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_78 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_78;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_0010539d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105328;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010539d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c9(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [56];
  long local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105428:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (7 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_50 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_50;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_001054a0;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105428;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001054a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c7(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [40];
  long local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105528:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (5 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_60 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_60;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_0010559d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105528;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010559d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c8(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [48];
  long local_58;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105628:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (6 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_58 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_58;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_001056a0;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105628;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001056a0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_c5(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [80];
  undefined1 local_88 [24];
  long local_70;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105728:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (3 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_70 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_70;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_0010579d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105728;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010579d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e4(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [8];
  long local_d0;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105828:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (1 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_d0 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_d0;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_0010589d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105828;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_0010589d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e3(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_d8 [10];
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105928:
    uVar2 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    iVar1 = RSA_get_multi_prime_extra_count(uVar2);
    if (iVar1 != 0) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar2,local_d8,local_88);
      if (((iVar1 != 0) && (local_d8[0] != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_d8[0];
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar2 = default_fixup_args(param_1,param_2,param_3);
          return uVar2;
        }
        goto LAB_00105998;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105928;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00105998:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e8(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [40];
  long local_b0;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105a18:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (5 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_b0 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_b0;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00105a8d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105a18;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00105a8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e5(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [16];
  long local_c8;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105b18:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (2 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_c8 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_c8;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00105b8d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105b18;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00105b8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e10(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [56];
  long local_a0;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105c18:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (7 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_a0 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_a0;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00105c8d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105c18;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00105c8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e6(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [24];
  long local_c0;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105d18:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (3 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_c0 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_c0;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00105d8d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105d18;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00105d8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 get_rsa_payload_e9(undefined4 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_d8 [48];
  long local_a8;
  undefined1 local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
  if (iVar1 == 6) {
LAB_00105e18:
    uVar3 = EVP_PKEY_get0_RSA(*(undefined8 *)(param_3 + 0x20));
    uVar2 = RSA_get_multi_prime_extra_count(uVar3);
    if (6 < uVar2) {
      iVar1 = RSA_get0_multi_prime_crt_params(uVar3,auStack_d8,local_88);
      if (((iVar1 != 0) && (local_a8 != 0)) && (*(int *)(*(long *)(param_3 + 0x30) + 8) == 2)) {
        *(long *)(param_3 + 0x20) = local_a8;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = default_fixup_args(param_1,param_2,param_3);
          return uVar3;
        }
        goto LAB_00105e8d;
      }
    }
  }
  else {
    iVar1 = EVP_PKEY_get_base_id(*(undefined8 *)(param_3 + 0x20));
    if (iVar1 == 0x390) goto LAB_00105e18;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00105e8d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  piVar2 = (int *)lookup_translation_constprop_1(&local_168);
  if (piVar2 == (int *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/evp/ctrl_params_translate.c",0xaa6,"evp_pkey_ctx_ctrl_to_param");
    iVar1 = -2;
    ERR_set_error(6,0x93,0);
    goto LAB_0010602d;
  }
  if (((*(int **)(param_1 + 0x78) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0x78), iVar1 != piVar2[1])) && (iVar1 != piVar2[2])) {
    iVar1 = -1;
    goto LAB_0010602d;
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
LAB_0010600a:
      if (iVar1 < 1) goto LAB_0010600f;
    }
    else if (local_d0 == 2) {
      iVar1 = evp_pkey_ctx_set_params_strict(param_1,local_a8);
      goto LAB_0010600a;
    }
    local_bc = iVar1;
    (*pcVar5)(2,piVar2,&local_d8);
    iVar1 = local_bc;
  }
LAB_0010600f:
  if (local_60 != (void *)0x0) {
    CRYPTO_free(local_60);
  }
LAB_0010602d:
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
  uVar7 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  local_154 = CONCAT44(uVar7,uVar7);
  local_148._8_8_ = 0;
  local_148._0_8_ = param_2;
  local_148 = local_148 << 0x40;
  local_138._8_8_ = 0;
  local_138._0_8_ = param_2;
  local_158 = 2;
  piVar2 = (int *)lookup_translation_constprop_1(&local_158);
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



undefined4 evp_pkey_get_params_to_ctrl(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  uint *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  byte bVar7;
  undefined8 local_d8;
  uint local_d0;
  undefined8 local_b8;
  long *local_a8;
  void *local_60;
  long local_40;
  
  bVar7 = 0;
  uVar3 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long *)0x0) {
LAB_00106425:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_0010634b:
  lVar1 = *param_2;
  if (lVar1 != 0) {
    puVar6 = &local_d8;
    for (lVar4 = 0x12; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + (ulong)bVar7 * -2 + 1;
    }
    puVar5 = &evp_pkey_translations;
    do {
      if (((((puVar5[1] != 0xffffffff) != (puVar5[2] == 0xffffffff)) && (puVar5[3] == 0xffffffff))
          && ((puVar5[1] + 1 < 2 || (puVar5[2] == 0)))) && (*puVar5 < 2)) {
        if (*(long *)(puVar5 + 10) == 0) goto LAB_001063cb;
        iVar2 = OPENSSL_strcasecmp(lVar1);
        if (iVar2 == 0) goto LAB_001063cb;
      }
      puVar5 = puVar5 + 0x10;
      if (puVar5 == &evp_pkey_ctx_translations) goto LAB_00106420;
    } while( true );
  }
  goto LAB_00106425;
LAB_001063cb:
  if (*(code **)(puVar5 + 0xe) != (code *)0x0) {
    local_d0 = *puVar5;
    local_b8 = param_1;
    local_a8 = param_2;
    if (local_d0 == 1) {
      uVar3 = (**(code **)(puVar5 + 0xe))(0,puVar5,&local_d8);
      if (local_60 != (void *)0x0) {
        CRYPTO_free(local_60);
      }
      param_2 = param_2 + 5;
      goto LAB_0010634b;
    }
  }
LAB_00106420:
  uVar3 = 0xfffffffe;
  goto LAB_00106425;
}


