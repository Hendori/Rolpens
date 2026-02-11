
undefined8 getivgen(long param_1,void *param_2,ulong param_3)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong __n;
  
  if ((~*(byte *)(param_1 + 0x54) & 0x14) != 0) {
    return 0;
  }
  iVar3 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                    (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
  if (iVar3 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x10);
    __n = uVar2;
    if (param_3 <= uVar2) {
      __n = param_3;
    }
    if (param_3 == 0) {
      __n = uVar2;
    }
    memcpy(param_2,(void *)(param_1 + 0x55 + (uVar2 - __n)),__n);
    lVar4 = 7;
    lVar5 = *(long *)(param_1 + 0x10) + param_1;
    do {
      iVar3 = (int)lVar4;
      cVar1 = *(char *)(lVar5 + 0x4d + lVar4) + '\x01';
      *(char *)(lVar5 + 0x4d + lVar4) = cVar1;
      lVar4 = lVar4 + -1;
    } while (iVar3 != 0 && cVar1 == '\0');
    *(undefined4 *)(param_1 + 0x50) = 2;
    return 1;
  }
  return 0;
}



undefined8 setivinv(long param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 0x15) != 0x14) {
    return 0;
  }
  memcpy((void *)(((param_1 + 0x55) - param_3) + *(long *)(param_1 + 0x10)),param_2,param_3);
  iVar1 = (**(code **)(*(long *)(param_1 + 0xf0) + 8))
                    (param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x50) = 2;
    return 1;
  }
  return 0;
}



undefined8
gcm_cipher_internal(long param_1,long param_2,size_t *param_3,long param_4,size_t param_5)

{
  size_t len;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  void *pvVar4;
  int iVar5;
  undefined8 uVar6;
  void *ptr;
  
  lVar2 = *(long *)(param_1 + 0xf0);
  if (*(long *)(param_1 + 0x28) == -1) {
    if (((*(byte *)(param_1 + 0x54) & 4) != 0) && (iVar5 = *(int *)(param_1 + 0x50), iVar5 != 3)) {
      if (iVar5 == 0) {
        if (((((*(byte *)(param_1 + 0x54) & 1) != 0) &&
             (uVar3 = *(ulong *)(param_1 + 0x10), 0 < (int)uVar3)) && (0xb < uVar3)) &&
           (iVar5 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xe8),param_1 + 0x55,uVar3 & 0xffffffff,
                                  0), 0 < iVar5)) {
          *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
          *(undefined4 *)(param_1 + 0x50) = 1;
LAB_001002f4:
          iVar5 = (**(code **)(lVar2 + 8))(param_1,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10));
          if (iVar5 != 0) {
            *(undefined4 *)(param_1 + 0x50) = 2;
            goto LAB_001001c9;
          }
        }
      }
      else {
        if (iVar5 == 1) goto LAB_001002f4;
LAB_001001c9:
        if (param_4 == 0) {
          if ((((*(byte *)(param_1 + 0x54) & 1) != 0) || (*(long *)(param_1 + 0x18) != -1)) &&
             (iVar5 = (**(code **)(lVar2 + 0x20))(param_1,param_1 + 0xd5), iVar5 != 0)) {
            *(undefined4 *)(param_1 + 0x50) = 3;
            uVar6 = 1;
            param_5 = 0;
            goto LAB_001001fc;
          }
        }
        else {
          if (param_2 == 0) {
            iVar5 = (**(code **)(lVar2 + 0x10))(param_1,param_4,param_5);
          }
          else {
            iVar5 = (**(code **)(lVar2 + 0x18))(param_1,param_4,param_5,param_2);
          }
          if (iVar5 != 0) {
            uVar6 = 1;
            goto LAB_001001fc;
          }
        }
      }
    }
    uVar6 = 0;
    param_5 = 0;
    goto LAB_001001fc;
  }
  iVar5 = ossl_prov_is_running();
  if (((iVar5 == 0) || ((*(byte *)(param_1 + 0x54) & 4) == 0)) ||
     ((param_4 != param_2 || (param_5 < 0x18)))) {
LAB_00100340:
    uVar6 = 0;
    param_5 = 0;
  }
  else {
    if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
      plVar1 = (long *)(param_1 + 0x30);
      *plVar1 = *plVar1 + 1;
      if (*plVar1 == 0) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x22d,"gcm_tls_cipher")
        ;
        ERR_set_error(0x39,0x7e,0);
      }
      else {
        iVar5 = getivgen(param_1,param_2,8);
        if (iVar5 != 0) goto LAB_0010025c;
      }
      goto LAB_00100340;
    }
    iVar5 = setivinv(param_1,param_2,8);
    if (iVar5 == 0) goto LAB_00100340;
LAB_0010025c:
    ptr = (void *)(param_2 + 8);
    len = param_5 - 0x18;
    pvVar4 = ptr;
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
      pvVar4 = (void *)(param_4 + 8);
    }
    iVar5 = (**(code **)(*(long *)(param_1 + 0xf0) + 0x28))
                      (param_1,param_1 + 0xd5,*(undefined8 *)(param_1 + 0x28),(void *)(param_4 + 8),
                       len,ptr,(long)pvVar4 + len,0x10);
    if (iVar5 == 0) {
      if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
        OPENSSL_cleanse(ptr,len);
      }
      goto LAB_00100340;
    }
    uVar6 = 1;
    if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
      param_5 = len;
    }
  }
  *(undefined4 *)(param_1 + 0x50) = 3;
  *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
LAB_001001fc:
  *param_3 = param_5;
  return uVar6;
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
joined_r0x00100457:
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
      goto joined_r0x00100457;
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
LAB_00100638:
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
        goto LAB_00100638;
      }
      break;
    case 0x28:
      iVar2 = OSSL_PARAM_set_size_t(param_2,*(undefined8 *)(param_1 + 0x20));
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0xd5;
        goto LAB_00100638;
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
LAB_00100737:
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
        goto LAB_00100638;
      }
      break;
    case 0x35:
      iVar2 = OSSL_PARAM_set_size_t(param_2,*(undefined8 *)(param_1 + 0x10));
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0x9f;
        goto LAB_00100638;
      }
      break;
    case 0x36:
      iVar2 = OSSL_PARAM_set_size_t(param_2,*(undefined8 *)(param_1 + 8));
      if (iVar2 == 0) {
        ERR_new();
        uVar3 = 0xa6;
        goto LAB_00100638;
      }
      break;
    case 0x4b:
      if (*(int *)(param_1 + 0x50) == 0) {
        return 0;
      }
      if ((ulong)param_2[3] < *(ulong *)(param_1 + 0x10)) {
        ERR_new();
        uVar3 = 0xc9;
        goto LAB_00100737;
      }
      iVar2 = OSSL_PARAM_set_octet_string(param_2,param_1 + 0x55);
      if ((iVar2 == 0) &&
         (iVar2 = OSSL_PARAM_set_octet_ptr(param_2,param_1 + 0x55,*(undefined8 *)(param_1 + 0x10)),
         iVar2 == 0)) {
        ERR_new();
        uVar3 = 0xce;
        goto LAB_00100638;
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
LAB_00100858:
    uVar7 = 1;
LAB_0010085d:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar1 = *param_2;
joined_r0x001007a5:
  if (lVar1 != 0) {
LAB_001007b8:
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
        goto LAB_0010085d;
      }
      lVar1 = param_2[5];
      *(long *)(param_1 + 0x18) = local_40;
joined_r0x00100aa2:
      param_2 = param_2 + 5;
      if (lVar1 == 0) goto LAB_00100858;
      goto LAB_001007b8;
    default:
      goto switchD_001007cc_caseD_26;
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
              if (uVar6 < 0x10) goto LAB_001009a5;
              uVar6 = (ulong)uVar3 - 0x18;
            }
            *(undefined8 *)(param_1 + 0x20) = 0x10;
            *(ushort *)(param_1 + 0xe0) = (ushort)uVar6 << 8 | (ushort)uVar6 >> 8;
            local_40 = 0x10;
            goto switchD_001007cc_caseD_26;
          }
        }
LAB_001009a5:
        local_40 = 0;
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x12d,
                      "ossl_gcm_set_ctx_params");
        ERR_set_error(0x39,0x6c,0);
        uVar7 = 0;
        goto LAB_0010085d;
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
          goto joined_r0x00100aa2;
        }
        if ((3 < uVar6) && (lVar1 = *(long *)(param_1 + 0x10), 7 < (ulong)(lVar1 - (int)uVar6))) {
          pvVar8 = memcpy((void *)(param_1 + 0x55),(void *)param_2[2],uVar6);
          if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
            iVar5 = RAND_bytes_ex(*(undefined8 *)(param_1 + 0xe8),(long)pvVar8 + uVar6,lVar1 - uVar6
                                  ,0);
            if (iVar5 < 1) goto LAB_00100a48;
            *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 8;
          }
          *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 0x10;
          lVar1 = param_2[5];
          *(undefined4 *)(param_1 + 0x50) = 1;
          goto joined_r0x00100aa2;
        }
LAB_00100a48:
        ERR_new();
        uVar7 = 0x139;
      }
      else {
        ERR_new();
        uVar7 = 0x135;
      }
      break;
    case 0x2b:
      if (((param_2[2] == 0) || ((int)param_2[1] != 5)) ||
         (iVar5 = setivinv(param_1,param_2[2],param_2[3]), iVar5 == 0)) {
        uVar7 = 0;
        goto LAB_0010085d;
      }
      goto switchD_001007cc_caseD_26;
    case 0x35:
      iVar5 = OSSL_PARAM_get_size_t(param_2,&local_40);
      if (iVar5 != 0) {
        if (0x7f < local_40 - 1U) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",0x11b,
                        "ossl_gcm_set_ctx_params");
          ERR_set_error(0x39,0x6d,0);
          uVar7 = 0;
          goto LAB_0010085d;
        }
        if (local_40 != *(long *)(param_1 + 0x10)) {
          if (*(int *)(param_1 + 0x50) != 0) {
            *(undefined4 *)(param_1 + 0x50) = 3;
          }
          lVar1 = param_2[5];
          *(long *)(param_1 + 0x10) = local_40;
          goto joined_r0x001008cb;
        }
        goto switchD_001007cc_caseD_26;
      }
      ERR_new();
      uVar7 = 0x117;
    }
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_gcm.c",uVar7,
                  "ossl_gcm_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
    uVar7 = 0;
    goto LAB_0010085d;
  }
  goto LAB_00100858;
switchD_001007cc_caseD_26:
  lVar1 = param_2[5];
joined_r0x001008cb:
  param_2 = param_2 + 5;
  goto joined_r0x001007a5;
}



undefined8
gcm_init(long param_1,long param_2,long param_3,void *param_4,size_t param_5,undefined8 param_6,
        byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x54) = param_7 & 1 | *(byte *)(param_1 + 0x54) & 0xfe;
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
LAB_00100c4c:
      uVar2 = ossl_gcm_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (*(long *)(param_1 + 8) == param_3) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0xf0))(param_1,param_2,param_3);
      if (iVar1 != 0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
        goto LAB_00100c4c;
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



void ossl_gcm_einit(void)

{
  gcm_init();
  return;
}



void ossl_gcm_dinit(void)

{
  gcm_init();
  return;
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



undefined8 ossl_gcm_stream_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = gcm_cipher_internal(param_1,param_2,param_3,0,0);
    if (0 < iVar1) {
      *param_3 = 0;
      return 1;
    }
  }
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


