
undefined8
ccm_cipher_internal(byte *param_1,undefined8 *param_2,ulong *param_3,undefined8 *param_4,
                   ulong param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  
  bVar1 = *param_1;
  if ((bVar1 & 2) == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x90);
  if (*(long *)(param_1 + 0x20) != -1) {
    iVar2 = ossl_prov_is_running();
    if (((iVar2 != 0) && (param_4 != (undefined8 *)0x0)) &&
       ((param_4 == param_2 && (lVar4 = *(long *)(param_1 + 0x10), lVar4 + 8U <= param_5)))) {
      if ((*param_1 & 1) != 0) {
        *param_2 = *(undefined8 *)(param_1 + 0x40);
        lVar4 = *(long *)(param_1 + 0x10);
      }
      lVar4 = param_5 - lVar4;
      uVar5 = lVar4 - 8;
      *(undefined8 *)(param_1 + 0x34) = *param_4;
      iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 8))
                        (param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),uVar5);
      if (iVar2 != 0) {
        *param_1 = *param_1 | 0x10;
        iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x10))
                          (param_1,param_1 + 0x40,*(undefined8 *)(param_1 + 0x20));
        if (iVar2 != 0) {
          if ((*param_1 & 1) == 0) {
            iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x20))
                              (param_1,param_4 + 1,param_2 + 1,uVar5,(long)param_4 + lVar4,
                               *(undefined8 *)(param_1 + 0x10));
            if (iVar2 != 0) {
              uVar3 = 1;
              goto LAB_0010018d;
            }
          }
          else {
            iVar2 = (**(code **)(*(long *)(param_1 + 0x90) + 0x18))
                              (param_1,param_4 + 1,param_2 + 1,uVar5,(long)param_2 + lVar4);
            if (iVar2 != 0) {
              uVar3 = 1;
              uVar5 = lVar4 + *(long *)(param_1 + 0x10);
              goto LAB_0010018d;
            }
          }
        }
      }
    }
    uVar5 = 0;
    uVar3 = 0;
LAB_0010018d:
    *param_3 = uVar5;
    return uVar3;
  }
  if ((param_4 == (undefined8 *)0x0) && (param_2 != (undefined8 *)0x0)) {
    param_5 = 0;
    goto LAB_00100048;
  }
  if ((bVar1 & 4) == 0) goto LAB_00100178;
  if (param_2 == (undefined8 *)0x0) {
    if (param_4 == (undefined8 *)0x0) {
      iVar2 = (**(code **)(lVar4 + 8))(param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),param_5);
      if (iVar2 != 0) {
        *param_1 = *param_1 | 0x10;
        goto LAB_00100048;
      }
    }
    else if ((((bVar1 & 0x10) != 0) || (param_5 == 0)) &&
            (iVar2 = (**(code **)(lVar4 + 0x10))(param_1,param_4,param_5), iVar2 != 0))
    goto LAB_00100048;
  }
  else {
    if ((bVar1 & 0x10) == 0) {
      iVar2 = (**(code **)(lVar4 + 8))(param_1,param_1 + 0x30,0xf - *(long *)(param_1 + 8),param_5);
      if (iVar2 == 0) goto LAB_00100178;
      bVar1 = *param_1 | 0x10;
      *param_1 = bVar1;
    }
    if ((bVar1 & 1) == 0) {
      if (((bVar1 & 8) != 0) &&
         (iVar2 = (**(code **)(lVar4 + 0x20))
                            (param_1,param_4,param_2,param_5,param_1 + 0x40,
                             *(undefined8 *)(param_1 + 0x10)), iVar2 != 0)) {
        *param_1 = *param_1 & 0xe3;
        goto LAB_00100048;
      }
    }
    else {
      iVar2 = (**(code **)(lVar4 + 0x18))(param_1,param_4,param_2,param_5,0,0);
      if (iVar2 != 0) {
        *param_1 = *param_1 | 8;
LAB_00100048:
        uVar3 = 1;
        goto LAB_0010004d;
      }
    }
  }
LAB_00100178:
  param_5 = 0;
  uVar3 = 0;
LAB_0010004d:
  *param_3 = param_5;
  return uVar3;
}



undefined8 ossl_ccm_set_ctx_params(byte *param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (long *)0x0) || (*param_2 == 0)) {
LAB_00100538:
    uVar8 = 1;
    goto LAB_001003f2;
  }
  lVar5 = OSSL_PARAM_locate_const(param_2,&_LC0);
  if (lVar5 == 0) {
LAB_0010031f:
    lVar5 = OSSL_PARAM_locate_const(param_2,"ivlen");
    if (lVar5 == 0) {
LAB_00100375:
      lVar5 = OSSL_PARAM_locate_const(param_2,"tlsaad");
      if (lVar5 == 0) {
LAB_001004f6:
        lVar5 = OSSL_PARAM_locate_const(param_2,"tlsivfixed");
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 8) != 5) {
            ERR_new();
            uVar8 = 0x87;
            goto LAB_00100461;
          }
          if (*(long *)(lVar5 + 0x18) != 4) {
            ERR_new();
            uVar8 = 0x8b;
            goto LAB_001005d0;
          }
          *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)(lVar5 + 0x10);
        }
        goto LAB_00100538;
      }
      if (*(int *)(lVar5 + 8) != 5) {
        ERR_new();
        uVar8 = 0x79;
        goto LAB_00100461;
      }
      lVar1 = *(long *)(lVar5 + 0x18);
      puVar2 = *(undefined8 **)(lVar5 + 0x10);
      iVar4 = ossl_prov_is_running();
      if ((iVar4 == 0) || (lVar1 != 0xd)) {
LAB_001003b2:
        local_38 = 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x40) = *puVar2;
        uVar8 = *(undefined8 *)((long)puVar2 + 5);
        param_1[0x20] = 0xd;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = 0;
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        *(undefined8 *)(param_1 + 0x45) = uVar8;
        uVar3 = (ushort)((ulong)uVar8 >> 0x30);
        uVar3 = uVar3 << 8 | uVar3 >> 8;
        if (uVar3 < 8) goto LAB_001003b2;
        uVar7 = *(ulong *)(param_1 + 0x10);
        uVar6 = (ulong)uVar3 - 8;
        if ((*param_1 & 1) == 0) {
          if (uVar6 < uVar7) goto LAB_001003b2;
          uVar6 = uVar6 - uVar7;
        }
        *(ushort *)(param_1 + 0x4b) = (ushort)uVar6 << 8 | (ushort)uVar6 >> 8;
        local_38 = (long)(int)uVar7;
        if (local_38 != 0) {
          *(long *)(param_1 + 0x28) = local_38;
          goto LAB_001004f6;
        }
      }
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0x7e,
                    "ossl_ccm_set_ctx_params");
      ERR_set_error(0x39,0x73,0);
    }
    else {
      iVar4 = OSSL_PARAM_get_size_t(lVar5,&local_38);
      if (iVar4 == 0) {
        ERR_new();
        uVar8 = 0x68;
        goto LAB_00100461;
      }
      if (0xdU - local_38 < 7) {
        if (*(long *)(param_1 + 8) != 0xf - local_38) {
          *param_1 = *param_1 & 0xfb;
          *(long *)(param_1 + 8) = 0xf - local_38;
        }
        goto LAB_00100375;
      }
      ERR_new();
      uVar8 = 0x6d;
LAB_001005d0:
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",uVar8,
                    "ossl_ccm_set_ctx_params");
      ERR_set_error(0x39,0x6d,0);
    }
  }
  else if (*(int *)(lVar5 + 8) == 5) {
    uVar7 = *(ulong *)(lVar5 + 0x18);
    if ((uVar7 - 4 < 0xd) && ((uVar7 & 1) == 0)) {
      if (*(void **)(lVar5 + 0x10) != (void *)0x0) {
        if ((*param_1 & 1) != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0x5a,
                        "ossl_ccm_set_ctx_params");
          ERR_set_error(0x39,0x78,0);
          goto LAB_001003f0;
        }
        memcpy(param_1 + 0x40,*(void **)(lVar5 + 0x10),uVar7);
        *param_1 = *param_1 | 8;
        uVar7 = *(ulong *)(lVar5 + 0x18);
      }
      *(ulong *)(param_1 + 0x10) = uVar7;
      goto LAB_0010031f;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0x54,
                  "ossl_ccm_set_ctx_params");
    ERR_set_error(0x39,0x76,0);
  }
  else {
    ERR_new();
    uVar8 = 0x50;
LAB_00100461:
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",uVar8,
                  "ossl_ccm_set_ctx_params");
    ERR_set_error(0x39,0x67,0);
  }
LAB_001003f0:
  uVar8 = 0;
LAB_001003f2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ccm_init(byte *param_1,long param_2,long param_3,void *param_4,size_t param_5,undefined8 param_6,
        byte param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    *param_1 = param_7 & 1 | *param_1 & 0xfe;
    if (param_4 != (void *)0x0) {
      if (param_5 != 0xfU - *(long *)(param_1 + 8)) {
        ERR_new();
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0xee,"ccm_init");
        ERR_set_error(0x39,0x6d,0);
        return 0;
      }
      memcpy(param_1 + 0x30,param_4,param_5);
      *param_1 = *param_1 | 4;
    }
    if (param_2 == 0) {
LAB_001006dc:
      uVar2 = ossl_ccm_set_ctx_params(param_1,param_6);
      return uVar2;
    }
    if (*(long *)(param_1 + 0x18) == param_3) {
      iVar1 = (*(code *)**(undefined8 **)(param_1 + 0x90))(param_1,param_2,param_3);
      if (iVar1 != 0) goto LAB_001006dc;
    }
    else {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0xf6,"ccm_init");
      ERR_set_error(0x39,0x69,0);
    }
  }
  return 0;
}



undefined8 ossl_ccm_get_ctx_params(byte *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = OSSL_PARAM_locate(param_2,"ivlen");
  if ((lVar2 == 0) ||
     (iVar1 = OSSL_PARAM_set_size_t(lVar2,0xf - *(long *)(param_1 + 8)), iVar1 != 0)) {
    lVar2 = OSSL_PARAM_locate(param_2,"taglen");
    if ((lVar2 != 0) &&
       (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x10)), iVar1 == 0)) {
      ERR_new();
      uVar3 = 0xa3;
      goto LAB_00100959;
    }
    lVar2 = OSSL_PARAM_locate(param_2,&_LC6);
    if (lVar2 != 0) {
      if (*(ulong *)(lVar2 + 0x18) < 0xfU - *(long *)(param_1 + 8)) {
        ERR_new();
        uVar3 = 0xab;
        goto LAB_001008e9;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x30);
      if ((iVar1 == 0) &&
         (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18)),
         iVar1 == 0)) {
        ERR_new();
        uVar3 = 0xb0;
        goto LAB_00100959;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"updated-iv");
    if (lVar2 != 0) {
      if (*(ulong *)(lVar2 + 0x18) < 0xfU - *(long *)(param_1 + 8)) {
        ERR_new();
        uVar3 = 0xb8;
LAB_001008e9:
        ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
                      "ossl_ccm_get_ctx_params");
        ERR_set_error(0x39,0x6d,0);
        return 0;
      }
      iVar1 = OSSL_PARAM_set_octet_string(lVar2,param_1 + 0x30);
      if ((iVar1 == 0) &&
         (iVar1 = OSSL_PARAM_set_octet_ptr(lVar2,param_1 + 0x30,*(undefined8 *)(lVar2 + 0x18)),
         iVar1 == 0)) {
        ERR_new();
        uVar3 = 0xbd;
        goto LAB_00100959;
      }
    }
    lVar2 = OSSL_PARAM_locate(param_2,"keylen");
    if ((lVar2 == 0) ||
       (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
      lVar2 = OSSL_PARAM_locate(param_2,"tlsaadpad");
      if ((lVar2 == 0) ||
         (iVar1 = OSSL_PARAM_set_size_t(lVar2,*(undefined8 *)(param_1 + 0x28)), iVar1 != 0)) {
        lVar2 = OSSL_PARAM_locate(param_2,&_LC0);
        if (lVar2 == 0) {
          return 1;
        }
        if ((~*param_1 & 9) != 0) {
          ERR_new();
          ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0xd1,
                        "ossl_ccm_get_ctx_params");
          ERR_set_error(0x39,0x77,0);
          return 0;
        }
        if (*(int *)(lVar2 + 8) == 5) {
          iVar1 = (**(code **)(*(long *)(param_1 + 0x90) + 0x28))
                            (param_1,*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x18));
          if (iVar1 == 0) {
            return 0;
          }
          *param_1 = *param_1 & 0xe3;
          return 1;
        }
        ERR_new();
        uVar3 = 0xd5;
      }
      else {
        ERR_new();
        uVar3 = 0xca;
      }
    }
    else {
      ERR_new();
      uVar3 = 0xc4;
    }
  }
  else {
    ERR_new();
    uVar3 = 0x9a;
  }
LAB_00100959:
  ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",uVar3,
                "ossl_ccm_get_ctx_params");
  ERR_set_error(0x39,0x68,0);
  return 0;
}



void ossl_ccm_einit(void)

{
  ccm_init();
  return;
}



void ossl_ccm_dinit(void)

{
  ccm_init();
  return;
}



undefined8 ossl_ccm_stream_update(void)

{
  int iVar1;
  ulong in_RCX;
  ulong in_R9;
  
  if (in_RCX < in_R9) {
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0x114,
                  "ossl_ccm_stream_update");
    ERR_set_error(0x39,0x6a,0);
  }
  else {
    iVar1 = ccm_cipher_internal();
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0x119,
                  "ossl_ccm_stream_update");
    ERR_set_error(0x39,0x66,0);
  }
  return 0;
}



undefined8 ossl_ccm_stream_final(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    iVar1 = ccm_cipher_internal(param_1,param_2,param_3,0,0);
    if (0 < iVar1) {
      *param_3 = 0;
      return 1;
    }
  }
  return 0;
}



undefined8
ossl_ccm_cipher(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,
               undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("providers/implementations/ciphers/ciphercommon_ccm.c",0x139,"ossl_ccm_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
    else {
      iVar1 = ccm_cipher_internal(param_1,param_2,param_3,param_5,param_6);
      if (0 < iVar1) {
        *param_3 = param_6;
        return 1;
      }
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_ccm_initctx(byte *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00100d98;
  uVar1 = __LC10;
  *param_1 = *param_1 & 0xe1;
  *(ulong *)(param_1 + 0x18) = param_2 >> 3;
  param_1[0x20] = 0xff;
  param_1[0x21] = 0xff;
  param_1[0x22] = 0xff;
  param_1[0x23] = 0xff;
  param_1[0x24] = 0xff;
  param_1[0x25] = 0xff;
  param_1[0x26] = 0xff;
  param_1[0x27] = 0xff;
  *(undefined8 *)(param_1 + 0x90) = param_3;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  return;
}


