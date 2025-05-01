
undefined8 getivgen(long param_1,void *param_2,ulong param_3)

{
  char *pcVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  ulong __n;
  
  if ((~*(byte *)(param_1 + 0x54) & 0x14) != 0) {
    return 0;
  }
  iVar4 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                    (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
  if (iVar4 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    __n = uVar2;
    if (param_3 <= uVar2) {
      __n = param_3;
    }
    if (param_3 == 0) {
      __n = uVar2;
    }
    memcpy(param_2,(void *)((uVar2 - __n) + param_1 + 0x55),__n);
    lVar3 = *(long *)(param_1 + 0x10);
    pcVar1 = (char *)(param_1 + 0x54 + lVar3);
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 == '\0') {
      pcVar1 = (char *)(param_1 + 0x53 + lVar3);
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = (char *)(param_1 + 0x52 + lVar3);
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = (char *)(param_1 + 0x51 + lVar3);
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = (char *)(param_1 + 0x50 + lVar3);
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = (char *)(param_1 + 0x4f + lVar3);
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = (char *)(param_1 + 0x4e + lVar3);
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  pcVar1 = (char *)(param_1 + 0x4d + lVar3);
                  *pcVar1 = *pcVar1 + '\x01';
                }
              }
            }
          }
        }
      }
    }
    *(undefined4 *)(param_1 + 0x50) = 2;
    return 1;
  }
  return 0;
}



undefined8
gcm_cipher_internal(long param_1,undefined8 *param_2,size_t *param_3,undefined8 *param_4,
                   size_t param_5)

{
  size_t len;
  long *plVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0x28) == -1) {
    if (((*(byte *)(param_1 + 0x54) & 4) != 0) && (iVar6 = *(int *)(param_1 + 0x50), iVar6 != 3)) {
      if (iVar6 == 0) {
        if (((((*(byte *)(param_1 + 0x54) & 1) != 0) &&
             (uVar4 = *(ulong *)(param_1 + 0x10), 0xb < uVar4)) && (0 < (int)uVar4)) &&
           (iVar6 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x55,uVar4 & 0xffffffff,
                                  0), 0 < iVar6)) {
          *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
          *(undefined4 *)(param_1 + 0x50) = 1;
LAB_001002c4:
          iVar6 = (**(code **)(lVar3 + 8))(param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
          if (iVar6 != 0) {
            *(undefined4 *)(param_1 + 0x50) = 2;
            goto LAB_00100179;
          }
        }
      }
      else {
        if (iVar6 == 1) goto LAB_001002c4;
LAB_00100179:
        if (param_4 == (undefined8 *)0x0) {
          if ((((*(byte *)(param_1 + 0x54) & 1) != 0) || (*(long *)(param_1 + 0x18) != -1)) &&
             (iVar6 = (**(code **)(lVar3 + 0x20))(param_1,param_1 + 0xd5), iVar6 != 0)) {
            *(undefined4 *)(param_1 + 0x50) = 3;
            uVar7 = 1;
            param_5 = 0;
            goto LAB_001001ac;
          }
        }
        else {
          if (param_2 == (undefined8 *)0x0) {
            iVar6 = (**(code **)(lVar3 + 0x10))(param_1,param_4,param_5);
          }
          else {
            iVar6 = (**(code **)(lVar3 + 0x18))(param_1,param_4,param_5,param_2);
          }
          if (iVar6 != 0) {
            uVar7 = 1;
            goto LAB_001001ac;
          }
        }
      }
    }
    uVar7 = 0;
    param_5 = 0;
    goto LAB_001001ac;
  }
  iVar6 = ossl_prov_is_running();
  if (((iVar6 == 0) || (bVar2 = *(byte *)(param_1 + 0x54), (bVar2 & 4) == 0)) ||
     ((param_4 != param_2 || (param_5 < 0x18)))) {
LAB_00100310:
    uVar7 = 0;
    param_5 = 0;
  }
  else {
    if ((bVar2 & 1) != 0) {
      plVar1 = (long *)(param_1 + 0x30);
      *plVar1 = *plVar1 + 1;
      if (*plVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x22d,"gcm_tls_cipher")
        ;
        ERR_set_error(0x39,0x7e,0);
      }
      else {
        iVar6 = getivgen(param_1,param_2,8);
        if (iVar6 != 0) goto LAB_0010022f;
      }
      goto LAB_00100310;
    }
    if ((bVar2 & 0x15) != 0x14) goto LAB_00100310;
    *(undefined8 *)(param_1 + 0x4d + *(long *)(param_1 + 0x10)) = *param_2;
    iVar6 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                      (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
    if (iVar6 == 0) goto LAB_00100310;
    *(undefined4 *)(param_1 + 0x50) = 2;
LAB_0010022f:
    param_2 = param_2 + 1;
    len = param_5 - 0x18;
    puVar5 = param_4 + 1;
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      puVar5 = param_2;
    }
    iVar6 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x28))
                      (param_1,param_1 + 0xd5,*(undefined8 *)(param_1 + 0x28),param_4 + 1,len,
                       param_2,(long)puVar5 + len,0x10);
    if (iVar6 == 0) {
      if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
        OPENSSL_cleanse(param_2,len);
      }
      goto LAB_00100310;
    }
    uVar7 = 1;
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
      param_5 = len;
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 3;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
LAB_001001ac:
  *param_3 = param_5;
  return uVar7;
}



void ossl_gcm_initctx(undefined8 param_1,undefined4 *param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(byte *)(param_2 + 0x15) = *(byte *)(param_2 + 0x15) | 2;
  *param_2 = 6;
  *(undefined8 *)(param_2 + 6) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 10) = 0xffffffffffffffff;
  *(undefined8 *)(param_2 + 4) = 0xc;
  *(ulong *)(param_2 + 2) = param_3 >> 3;
  *(undefined8 *)(param_2 + 0x3c) = param_4;
  uVar1 = ossl_prov_ctx_get0_libctx();
  *(undefined8 *)(param_2 + 0x3a) = uVar1;
  return;
}



undefined8 ossl_gcm_get_ctx_params(long param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_2;
joined_r0x00100427:
  do {
    if (lVar4 == 0) {
      return 1;
    }
    uVar1 = ossl_param_find_pidx();
    switch(uVar1) {
    case 0x23:
      iVar2 = OSSL_PARAM_set_uint(param_2,*(byte *)(param_1 + 0x54) >> 3 & 1);
      if (iVar2 == 0) {
        return 0;
      }
      lVar4 = param_2[5];
      param_2 = param_2 + 5;
      goto joined_r0x00100427;
    case 0x25:
      if (((0xf < param_2[3] - 1U) || ((*(byte *)(param_1 + 0x54) & 1) == 0)) ||
         (*(long *)(param_1 + 0x18) == -1)) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0xe0,
                      "ossl_gcm_get_ctx_params");
        ERR_set_error(0x39,0x6e,0);
        return 0;
      }
      iVar2 = OSSL_PARAM_set_octet_string(param_2,param_1 + 0xd5);
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0xe4;
LAB_00100608:
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",uVar3,
                      "ossl_gcm_get_ctx_params");
        ERR_set_error(0x39,0x68,0);
        return 0;
      }
      break;
    case 0x26:
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == -1) {
        lVar4 = 0x10;
      }
      iVar2 = OSSL_PARAM_set_size_t(param_2,lVar4);
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0xb1;
        goto LAB_00100608;
      }
      break;
    case 0x28:
      iVar2 = OSSL_PARAM_set_size_t(param_2,*(undefined8 *)(param_1 + 0x20));
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0xd5;
        goto LAB_00100608;
      }
      break;
    case 0x29:
      if (param_2[2] == 0) {
        return 0;
      }
      if ((int)param_2[1] != 5) {
        return 0;
      }
      iVar2 = getivgen(param_1,param_2[2],param_2[3]);
      if (iVar2 == 0) {
        return 0;
      }
      break;
    case 0x34:
      if (*(int *)(param_1 + 0x50) == 0) {
        return 0;
      }
      if ((ulong)param_2[3] < *(ulong *)(param_1 + 0x10)) {
        ERR_new();
        uVar3 = 0xbb;
LAB_00100707:
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",uVar3,
                      "ossl_gcm_get_ctx_params");
        ERR_set_error(0x39,0x6d,0);
        return 0;
      }
      iVar2 = OSSL_PARAM_set_octet_string(param_2,param_1 + 0x55);
      if ((iVar2 == 0) &&
         (iVar2 = OSSL_PARAM_set_octet_ptr(param_2,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10)),
         iVar2 == 0)) {
        ERR_new();
        uVar3 = 0xc0;
        goto LAB_00100608;
      }
      break;
    case 0x35:
      iVar2 = OSSL_PARAM_set_size_t(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0x9f;
        goto LAB_00100608;
      }
      break;
    case 0x36:
      iVar2 = OSSL_PARAM_set_size_t(param_2,*(undefined8 *)(param_1 + 8));
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0xa6;
        goto LAB_00100608;
      }
      break;
    case 0x4b:
      if (*(int *)(param_1 + 0x50) == 0) {
        return 0;
      }
      if ((ulong)param_2[3] < *(ulong *)(param_1 + 0x10)) {
        ERR_new();
        uVar3 = 0xc9;
        goto LAB_00100707;
      }
      iVar2 = OSSL_PARAM_set_octet_string(param_2,param_1 + 0x55);
      if ((iVar2 == 0) &&
         (iVar2 = OSSL_PARAM_set_octet_ptr(param_2,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10)),
         iVar2 == 0)) {
        ERR_new();
        uVar3 = 0xce;
        goto LAB_00100608;
      }
    }
    lVar4 = param_2[5];
    param_2 = param_2 + 5;
  } while( true );
}



undefined8 ossl_gcm_set_ctx_params(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (long *)0x0) {
LAB_00100828:
    uVar7 = 1;
LAB_0010082d:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar1 = *param_2;
joined_r0x00100775:
  if (lVar1 != 0) {
LAB_00100788:
    uVar4 = ossl_param_find_pidx();
    switch(uVar4) {
    case 0x25:
      local_38 = param_1 + 0xd5;
      iVar5 = OSSL_PARAM_get_octet_string(param_2,&local_38,0x10,&local_40);
      if (iVar5 == 0) {
        ERR_new();
        uVar7 = 0x10b;
        break;
      }
      if ((local_40 == 0) || ((*(byte *)(param_1 + 0x54) & 1) != 0)) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x10f,
                      "ossl_gcm_set_ctx_params");
        ERR_set_error(0x39,0x6e,0);
        uVar7 = 0;
        goto LAB_0010082d;
      }
      lVar1 = param_2[5];
      *(long *)(param_1 + 0x18) = local_40;
joined_r0x00100a59:
      param_2 = param_2 + 5;
      if (lVar1 == 0) goto LAB_00100828;
      goto LAB_00100788;
    default:
      goto switchD_0010079c_caseD_26;
    case 0x27:
      if ((int)param_2[1] == 5) {
        lVar1 = param_2[3];
        puVar2 = (undefined8 *)param_2[2];
        iVar5 = ossl_prov_is_running();
        if ((iVar5 != 0) && (lVar1 == 0xd)) {
          *(undefined8 *)(param_1 + 0xd5) = *puVar2;
          uVar7 = *(undefined8 *)((long)puVar2 + 5);
          *(undefined8 *)(param_1 + 0x28) = 0xd;
          *(undefined8 *)(param_1 + 0xda) = uVar7;
          uVar3 = (ushort)((ulong)uVar7 >> 0x30);
          uVar3 = uVar3 << 8 | uVar3 >> 8;
          if (7 < uVar3) {
            uVar6 = (ulong)uVar3 - 8;
            if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
              if (uVar6 < 0x10) goto LAB_00100975;
              uVar6 = (ulong)uVar3 - 0x18;
            }
            *(undefined8 *)(param_1 + 0x20) = 0x10;
            *(ushort *)(param_1 + 0xe0) = (ushort)uVar6 << 8 | (ushort)uVar6 >> 8;
            local_40 = 0x10;
            goto switchD_0010079c_caseD_26;
          }
        }
LAB_00100975:
        local_40 = 0;
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x12d,
                      "ossl_gcm_set_ctx_params");
        ERR_set_error(0x39,0x6c,0);
        uVar7 = 0;
        goto LAB_0010082d;
      }
      ERR_new();
      uVar7 = 0x128;
      break;
    case 0x2a:
      if ((int)param_2[1] == 5) {
        uVar6 = param_2[3];
        if (uVar6 == 0xffffffffffffffff) {
          memcpy((void *)(param_1 + 0x55),(void *)param_2[2],*(size_t *)(param_1 + 0x10));
          *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x10;
          lVar1 = param_2[5];
          *(undefined4 *)(param_1 + 0x50) = 1;
          goto joined_r0x00100a59;
        }
        if ((3 < uVar6) && (lVar1 = *(long *)(param_1 + 0x10), 7 < (ulong)(lVar1 - (int)uVar6))) {
          pvVar8 = memcpy((void *)(param_1 + 0x55),(void *)param_2[2],uVar6);
          if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
            iVar5 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xe8),(long)pvVar8 + uVar6,lVar1 - uVar6
                                  ,0);
            if (iVar5 < 1) goto LAB_00100a68;
            *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
          }
          *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x10;
          lVar1 = param_2[5];
          *(undefined4 *)(param_1 + 0x50) = 1;
          goto joined_r0x00100a59;
        }
LAB_00100a68:
        ERR_new();
        uVar7 = 0x139;
      }
      else {
        ERR_new();
        uVar7 = 0x135;
      }
      break;
    case 0x2b:
      if ((((void *)param_2[2] != (void *)0x0) && ((int)param_2[1] == 5)) &&
         ((*(byte *)(param_1 + 0x54) & 0x15) == 0x14)) {
        memcpy((void *)(((param_1 + 0x55) - param_2[3]) + *(long *)(param_1 + 0x10)),
               (void *)param_2[2],param_2[3]);
        iVar5 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                          (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
        if (iVar5 != 0) {
          lVar1 = param_2[5];
          *(undefined4 *)(param_1 + 0x50) = 2;
          goto joined_r0x00100a59;
        }
      }
      uVar7 = 0;
      goto LAB_0010082d;
    case 0x35:
      iVar5 = OSSL_PARAM_get_size_t(param_2,&local_40);
      if (iVar5 != 0) {
        if (0x7f < local_40 - 1U) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x11b,
                        "ossl_gcm_set_ctx_params");
          ERR_set_error(0x39,0x6d,0);
          uVar7 = 0;
          goto LAB_0010082d;
        }
        if (local_40 != *(long *)(param_1 + 0x10)) {
          if (*(int *)(param_1 + 0x50) != 0) {
            *(undefined4 *)(param_1 + 0x50) = 3;
          }
          lVar1 = param_2[5];
          *(long *)(param_1 + 0x10) = local_40;
          goto joined_r0x0010089b;
        }
        goto switchD_0010079c_caseD_26;
      }
      ERR_new();
      uVar7 = 0x117;
    }
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",uVar7,
                  "ossl_gcm_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    uVar7 = 0;
    goto LAB_0010082d;
  }
  goto LAB_00100828;
switchD_0010079c_caseD_26:
  lVar1 = param_2[5];
joined_r0x0010089b:
  param_2 = param_2 + 5;
  goto joined_r0x00100775;
}



undefined8
ossl_gcm_dinit(long param_1,long param_2,long param_3,void *param_4,size_t param_5,
              undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe;
    if (param_4 != (void *)0x0) {
      if (0x7f < param_5 - 1) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x3e,"gcm_init");
        ERR_set_error(0x39,0x6d,0);
        return 0;
      }
      *(size_t *)(param_1 + 0x10) = param_5;
      memcpy((void *)(param_1 + 0x55),param_4,param_5);
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
    if (param_2 == 0) {
LAB_00100c57:
      uVar2 = ossl_gcm_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 8)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xf0))(param_1,param_2,param_3);
      if (iVar1 != 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        goto LAB_00100c57;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x48,"gcm_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



undefined8
ossl_gcm_einit(long param_1,long param_2,long param_3,void *param_4,size_t param_5,
              undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 1;
    if (param_4 != (void *)0x0) {
      if (0x7f < param_5 - 1) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x3e,"gcm_init");
        ERR_set_error(0x39,0x6d,0);
        return 0;
      }
      *(size_t *)(param_1 + 0x10) = param_5;
      memcpy((void *)(param_1 + 0x55),param_4,param_5);
      *(undefined4 *)(param_1 + 0x50) = 1;
    }
    if (param_2 == 0) {
LAB_00100d77:
      uVar2 = ossl_gcm_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (param_3 == *(long *)(param_1 + 8)) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xf0))(param_1,param_2,param_3);
      if (iVar1 != 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        goto LAB_00100d77;
      }
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x48,"gcm_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



undefined8
ossl_gcm_stream_update
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
          undefined8 param_5,ulong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_6 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x155,
                    "ossl_gcm_stream_update");
      ERR_set_error(0x39,0x6a,0);
      uVar2 = 0;
    }
    else {
      iVar1 = gcm_cipher_internal();
      if (iVar1 < 1) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x15a,
                      "ossl_gcm_stream_update");
        ERR_set_error(0x39,0x66,0);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
    return uVar2;
  }
  *param_3 = 0;
  return 1;
}



undefined8 ossl_gcm_stream_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = ossl_prov_is_running();
  if (iVar4 == 0) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0x28) != -1) {
    ossl_prov_is_running();
    *(undefined4 *)(param_1 + 0x50) = 3;
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
    *param_3 = 0;
    return 0;
  }
  bVar1 = *(byte *)(param_1 + 0x54);
  if (((bVar1 & 4) == 0) || (iVar4 = *(int *)(param_1 + 0x50), iVar4 == 3)) goto LAB_00100f20;
  if (iVar4 == 0) {
    if (((((bVar1 & 1) == 0) || (uVar3 = *(ulong *)(param_1 + 0x10), (int)uVar3 < 1)) ||
        (uVar3 < 0xc)) ||
       (iVar4 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x55,uVar3 & 0xffffffff,0),
       iVar4 < 1)) goto LAB_00100f20;
    *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
    *(undefined4 *)(param_1 + 0x50) = 1;
LAB_00100fe0:
    iVar4 = (**(code **)(lVar2 + 8))(param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
    if (iVar4 == 0) goto LAB_00100f20;
    *(undefined4 *)(param_1 + 0x50) = 2;
    bVar1 = *(byte *)(param_1 + 0x54);
  }
  else if (iVar4 == 1) goto LAB_00100fe0;
  if ((((bVar1 & 1) != 0) || (*(long *)(param_1 + 0x18) != -1)) &&
     (iVar4 = (**(code **)(lVar2 + 0x20))(param_1,param_1 + 0xd5), iVar4 != 0)) {
    *(undefined4 *)(param_1 + 0x50) = 3;
    *param_3 = 0;
    return 1;
  }
LAB_00100f20:
  *param_3 = 0;
  return 0;
}



undefined8
ossl_gcm_cipher(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,
               undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x17b,"ossl_gcm_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
    else {
      iVar1 = gcm_cipher_internal(param_1,param_2,param_3,param_5,param_6);
      if (0 < iVar1) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return 0;
}


