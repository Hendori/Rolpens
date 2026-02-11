
undefined8 ossl_ecx_public_from_private(undefined8 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if (uVar1 == 2) {
    iVar2 = ossl_ed25519_public_from_private(*param_1,(long)param_1 + 0x11,param_1[10],param_1[1]);
    if (iVar2 == 0) {
      ERR_new();
      uVar3 = 0x25;
LAB_00100099:
      ERR_set_debug("crypto/ec/ecx_backend.c",uVar3,"ossl_ecx_public_from_private");
      ERR_set_error(0x10,0xa6,0);
      return 0;
    }
  }
  else if (uVar1 < 3) {
    if (uVar1 == 0) {
      ossl_x25519_public_from_private((long)param_1 + 0x11,param_1[10]);
    }
    else {
      ossl_x448_public_from_private((long)param_1 + 0x11,param_1[10]);
    }
  }
  else if ((uVar1 == 3) &&
          (iVar2 = ossl_ed448_public_from_private
                             (*param_1,(long)param_1 + 0x11,param_1[10],param_1[1]), iVar2 == 0)) {
    ERR_new();
    uVar3 = 0x2f;
    goto LAB_00100099;
  }
  return 1;
}



undefined8 ossl_ecx_key_fromdata(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = 0;
  if (param_1 != 0) {
    lVar2 = OSSL_PARAM_locate_const(param_2,&_LC1);
    if (param_3 == 0) {
      if (lVar2 != 0) {
LAB_00100142:
        local_38 = param_1 + 0x11;
        iVar1 = OSSL_PARAM_get_octet_string(lVar2,&local_38,0x39,&local_40);
        if ((iVar1 != 0) && (*(long *)(param_1 + 0x58) == local_40)) {
LAB_001001c4:
          *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | 1;
          uVar4 = 1;
          goto LAB_001001cd;
        }
      }
    }
    else {
      lVar3 = OSSL_PARAM_locate_const(param_2,&_LC2);
      if (lVar3 != 0 || lVar2 != 0) {
        if (lVar3 != 0) {
          iVar1 = OSSL_PARAM_get_octet_string
                            (lVar3,param_1 + 0x50,*(undefined8 *)(param_1 + 0x58),&local_48);
          if (iVar1 == 0) goto LAB_00100168;
          if (*(long *)(param_1 + 0x58) != local_48) {
            CRYPTO_secure_clear_free
                      (*(undefined8 *)(param_1 + 0x50),local_48,"crypto/ec/ecx_backend.c",0x54);
            *(undefined8 *)(param_1 + 0x50) = 0;
            uVar4 = 0;
            goto LAB_001001cd;
          }
        }
        local_38 = param_1 + 0x11;
        if (lVar2 != 0) goto LAB_00100142;
        iVar1 = ossl_ecx_public_from_private(param_1);
        if (iVar1 != 0) goto LAB_001001c4;
      }
    }
  }
LAB_00100168:
  uVar4 = 0;
LAB_001001cd:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 * ossl_ecx_key_dup(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  
  puVar9 = (undefined8 *)CRYPTO_zalloc(0x68,"crypto/ec/ecx_backend.c",0x6f);
  if (puVar9 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = *param_1;
  *(byte *)(puVar9 + 2) = *(byte *)(puVar9 + 2) & 0xfe;
  *puVar9 = uVar1;
  puVar9[0xb] = param_1[0xb];
  *(undefined4 *)(puVar9 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  LOCK();
  *(undefined4 *)((long)puVar9 + 100) = 1;
  UNLOCK();
  if ((char *)param_1[1] != (char *)0x0) {
    pcVar10 = CRYPTO_strdup((char *)param_1[1],"crypto/ec/ecx_backend.c",0x7d);
    puVar9[1] = pcVar10;
    if (pcVar10 == (char *)0x0) goto LAB_0010034c;
  }
  if (((param_2 & 2) != 0) && ((*(byte *)(param_1 + 2) & 1) != 0)) {
    uVar1 = *(undefined8 *)((long)param_1 + 0x11);
    uVar2 = *(undefined8 *)((long)param_1 + 0x19);
    uVar3 = *(undefined8 *)((long)param_1 + 0x21);
    uVar4 = *(undefined8 *)((long)param_1 + 0x29);
    uVar5 = *(undefined8 *)((long)param_1 + 0x31);
    uVar6 = *(undefined8 *)((long)param_1 + 0x39);
    uVar7 = *(undefined8 *)((long)param_1 + 0x3a);
    uVar8 = *(undefined8 *)((long)param_1 + 0x42);
    *(byte *)(puVar9 + 2) = *(byte *)(puVar9 + 2) | 1;
    *(undefined8 *)((long)puVar9 + 0x31) = uVar5;
    *(undefined8 *)((long)puVar9 + 0x39) = uVar6;
    *(undefined8 *)((long)puVar9 + 0x11) = uVar1;
    *(undefined8 *)((long)puVar9 + 0x19) = uVar2;
    *(undefined8 *)((long)puVar9 + 0x21) = uVar3;
    *(undefined8 *)((long)puVar9 + 0x29) = uVar4;
    *(undefined8 *)((long)puVar9 + 0x3a) = uVar7;
    *(undefined8 *)((long)puVar9 + 0x42) = uVar8;
  }
  if ((param_2 & 1) == 0) {
    return puVar9;
  }
  if (param_1[10] == 0) {
    return puVar9;
  }
  lVar11 = ossl_ecx_key_allocate_privkey(puVar9);
  if (lVar11 != 0) {
    memcpy((void *)puVar9[10],(void *)param_1[10],puVar9[0xb]);
    return puVar9;
  }
  ERR_new();
  ERR_set_debug("crypto/ec/ecx_backend.c",0x8b,"ossl_ecx_key_dup");
  ERR_set_error(0x10,0x80010,0);
LAB_0010034c:
  ossl_ecx_key_free(puVar9);
  return (undefined8 *)0x0;
}



long ossl_ecx_key_op(X509_ALGOR *param_1,undefined8 *param_2,int param_3,int param_4,int param_5,
                    undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte bVar11;
  int local_44;
  long local_40;
  
  bVar11 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 2) {
    bVar10 = param_4 == 0x40a;
    if (param_4 == 0x43f) {
LAB_00100688:
      param_4 = 0x43f;
      uVar6 = 2;
      if (bVar10) {
LAB_00100441:
        param_4 = 0x40a;
        uVar6 = 0;
      }
LAB_00100448:
      lVar2 = ossl_ecx_key_new(param_6,uVar6,1,param_7);
      if (lVar2 != 0) {
        if (param_5 == 0) {
          memcpy((void *)(lVar2 + 0x11),param_2,(long)param_3);
          goto LAB_001004c3;
        }
        pbVar3 = (byte *)ossl_ecx_key_allocate_privkey(lVar2);
        if (pbVar3 != (byte *)0x0) {
          if (param_5 == 2) {
            if (param_4 != 0) goto LAB_00100550;
          }
          else {
            if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
              lVar4 = 0x20;
            }
            else {
              lVar4 = (ulong)(param_4 != 0x40b) + 0x38;
            }
            *(undefined8 *)pbVar3 = *param_2;
            *(undefined8 *)(pbVar3 + lVar4 + -8) = *(undefined8 *)((long)param_2 + lVar4 + -8);
            lVar9 = (long)pbVar3 - (long)((ulong)(pbVar3 + 8) & 0xfffffffffffffff8);
            puVar7 = (undefined8 *)((long)param_2 - lVar9);
            puVar8 = (undefined8 *)((ulong)(pbVar3 + 8) & 0xfffffffffffffff8);
            for (uVar5 = (ulong)((uint)((int)lVar4 + (int)lVar9) >> 3); uVar5 != 0;
                uVar5 = uVar5 - 1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + (ulong)bVar11 * -2 + 1;
              puVar8 = puVar8 + (ulong)bVar11 * -2 + 1;
            }
          }
          goto LAB_00100640;
        }
LAB_00100758:
        ERR_new();
        ERR_set_debug("crypto/ec/ecx_backend.c",0xc6,"ossl_ecx_key_op");
        ERR_set_error(0x10,0x80010,0);
        goto LAB_00100590;
      }
LAB_00100720:
      ERR_new();
      ERR_set_debug("crypto/ec/ecx_backend.c",0xbc,"ossl_ecx_key_op");
      ERR_set_error(0x10,0x80010,0);
    }
    else {
      if (bVar10) goto LAB_00100441;
      if (param_4 != 0x40b) goto LAB_00100419;
      lVar2 = ossl_ecx_key_new(param_6,1,1,param_7);
      if (lVar2 == 0) goto LAB_00100720;
      pbVar3 = (byte *)ossl_ecx_key_allocate_privkey(lVar2);
      if (pbVar3 == (byte *)0x0) goto LAB_00100758;
LAB_00100550:
      if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
        iVar1 = RAND_priv_bytes_ex(param_6,pbVar3,0x20,0);
        if (0 < iVar1) {
          if (param_4 == 0x40a) {
            *pbVar3 = *pbVar3 & 0xf8;
            pbVar3[0x1f] = pbVar3[0x1f] & 0x7f | 0x40;
          }
          goto LAB_00100640;
        }
      }
      else if (param_4 == 0x40b) {
        iVar1 = RAND_priv_bytes_ex(param_6,pbVar3,0x38,0);
        if (0 < iVar1) {
          *pbVar3 = *pbVar3 & 0xfc;
          pbVar3[0x37] = pbVar3[0x37] | 0x80;
          goto LAB_00100640;
        }
      }
      else {
        iVar1 = RAND_priv_bytes_ex(param_6,pbVar3,0x39,0);
        if (0 < iVar1) {
LAB_00100640:
          iVar1 = ossl_ecx_public_from_private(lVar2);
          if (iVar1 != 0) goto LAB_001004c3;
          ERR_new();
          ERR_set_debug("crypto/ec/ecx_backend.c",0xda,"ossl_ecx_key_op");
          ERR_set_error(0x10,0xa6,0);
        }
      }
LAB_00100590:
      ossl_ecx_key_free(lVar2);
    }
  }
  else {
    if (param_1 == (X509_ALGOR *)0x0) {
LAB_001003ea:
      if ((param_2 != (undefined8 *)0x0) && (param_4 != 0)) {
        if ((param_4 == 0x40a) || (param_4 == 0x43f)) {
          if (param_3 == 0x20) {
            bVar10 = param_4 == 0x40a;
            if (param_4 == 0x43f) goto LAB_00100688;
            if (bVar10) goto LAB_00100441;
LAB_00100419:
            uVar6 = 3;
            goto LAB_00100448;
          }
        }
        else if (param_4 == 0x40b) {
          uVar6 = 1;
          if (param_3 == 0x38) goto LAB_00100448;
        }
        else if (param_3 == 0x39) goto LAB_00100419;
      }
      ERR_new();
      uVar6 = 0xb5;
    }
    else {
      X509_ALGOR_get0((ASN1_OBJECT **)0x0,&local_44,(void **)0x0,param_1);
      if (local_44 == -1) {
        if (param_4 == 0) {
          param_4 = OBJ_obj2nid(param_1->algorithm);
        }
        else {
          iVar1 = OBJ_obj2nid(param_1->algorithm);
          if (iVar1 != param_4) {
            ERR_new();
            uVar6 = 0xaf;
            goto LAB_001004a1;
          }
        }
        goto LAB_001003ea;
      }
      ERR_new();
      uVar6 = 0xa9;
    }
LAB_001004a1:
    ERR_set_debug("crypto/ec/ecx_backend.c",uVar6,"ossl_ecx_key_op");
    ERR_set_error(0x10,0x66,0);
  }
  lVar2 = 0;
LAB_001004c3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



undefined8
ossl_ecx_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *x;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_44;
  uchar *local_40;
  X509_ALGOR *local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_40,&local_44,&local_38,param_1);
  if (iVar1 != 0) {
    x = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_40,(long)local_44);
    if (x == (ASN1_OCTET_STRING *)0x0) {
      local_40 = (uchar *)0x0;
      local_44 = 0;
    }
    else {
      local_40 = (uchar *)ASN1_STRING_get0_data(x);
      local_44 = ASN1_STRING_length(x);
    }
    uVar2 = ossl_ecx_key_op(local_38,local_40,local_44,0,1,param_2,param_3);
    ASN1_OCTET_STRING_free(x);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


