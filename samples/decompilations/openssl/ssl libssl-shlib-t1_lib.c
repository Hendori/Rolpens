
int tls_group_ix_cmp(long *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *(ushort *)(*(long *)*param_1 + 0x1c);
  uVar2 = *(ushort *)(*(long *)*param_2 + 0x1c);
  if ((uint)(uVar1 < uVar2) != (uint)(uVar2 < uVar1)) {
    return (uint)(uVar2 < uVar1) - (uint)(uVar1 < uVar2);
  }
  uVar3 = ((long *)*param_1)[1];
  uVar4 = ((long *)*param_2)[1];
  return (uint)(uVar4 < uVar3) - (uint)(uVar3 < uVar4);
}



void free_wrapper(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}



void discover_provider_groups(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  OSSL_PROVIDER_get_capabilities(param_1,"TLS-GROUP",add_provider_groups,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 discover_provider_sigalgs(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  OSSL_PROVIDER_get_capabilities(param_1,"TLS-SIGALG",add_provider_sigalgs,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 add_provider_groups(undefined8 param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long in_FS_OFFSET;
  byte bVar11;
  uint local_38;
  uint local_34;
  long local_30;
  
  bVar11 = 0;
  puVar2 = (undefined8 *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  lVar6 = puVar2[0xd0];
  lVar5 = puVar2[0xcf];
  if (lVar6 == lVar5) {
    if (lVar6 == 0) {
      pvVar4 = CRYPTO_malloc(0x230,"ssl/t1_lib.c",0xee);
    }
    else {
      pvVar4 = CRYPTO_realloc((void *)puVar2[0xce],(int)lVar6 * 0x38 + 0x230,"ssl/t1_lib.c",0xf1);
    }
    if (pvVar4 != (void *)0x0) {
      puVar2[0xce] = pvVar4;
      puVar10 = (undefined8 *)((long)pvVar4 + puVar2[0xd0] * 0x38);
      *puVar10 = 0;
      puVar10[0x45] = 0;
      uVar8 = (ulong)(((int)puVar10 - (int)(undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8)
                      ) + 0x230U >> 3);
      puVar10 = (undefined8 *)((ulong)(puVar10 + 1) & 0xfffffffffffffff8);
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar10 = 0;
        puVar10 = puVar10 + (ulong)bVar11 * -2 + 1;
      }
      puVar2[0xd0] = puVar2[0xd0] + 10;
      lVar5 = puVar2[0xcf];
      goto LAB_00100211;
    }
LAB_00100310:
    uVar9 = 0;
    goto LAB_001002c0;
  }
LAB_00100211:
  pauVar1 = (undefined1 (*) [16])(puVar2[0xce] + lVar5 * 0x38);
  lVar6 = OSSL_PARAM_locate_const(param_1,"tls-group-name");
  if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 4)) {
    ERR_new();
    ERR_set_debug("ssl/t1_lib.c",0x102,"add_provider_groups");
    ERR_set_error(0x14,0x80106,0);
    if (pauVar1 == (undefined1 (*) [16])0x0) goto LAB_00100310;
LAB_0010027a:
    uVar9 = 0;
  }
  else {
    pcVar7 = CRYPTO_strdup(*(char **)(lVar6 + 0x10),"ssl/t1_lib.c",0x105);
    *(char **)*pauVar1 = pcVar7;
    if (pcVar7 == (char *)0x0) goto LAB_0010027a;
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-group-name-internal");
    if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 4)) {
      ERR_new();
      uVar9 = 0x10b;
      goto LAB_00100361;
    }
    pcVar7 = CRYPTO_strdup(*(char **)(lVar6 + 0x10),"ssl/t1_lib.c",0x10e);
    *(char **)(*pauVar1 + 8) = pcVar7;
    if (pcVar7 == (char *)0x0) goto LAB_0010027a;
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-group-id");
    if (((lVar6 == 0) || (iVar3 = OSSL_PARAM_get_uint(lVar6,&local_38), iVar3 == 0)) ||
       (0xffff < local_38)) {
      ERR_new();
      uVar9 = 0x114;
LAB_00100361:
      ERR_set_debug("ssl/t1_lib.c",uVar9,"add_provider_groups");
      ERR_set_error(0x14,0x80106,0);
      goto LAB_0010027a;
    }
    *(short *)(pauVar1[1] + 0xc) = (short)local_38;
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-group-alg");
    if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 4)) {
      ERR_new();
      uVar9 = 0x11b;
      goto LAB_00100361;
    }
    pcVar7 = CRYPTO_strdup(*(char **)(lVar6 + 0x10),"ssl/t1_lib.c",0x11e);
    *(char **)pauVar1[1] = pcVar7;
    if (pcVar7 == (char *)0x0) goto LAB_0010027a;
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-group-sec-bits");
    if ((lVar6 == 0) || (iVar3 = OSSL_PARAM_get_uint(lVar6,pauVar1[1] + 8), iVar3 == 0)) {
      ERR_new();
      uVar9 = 0x124;
      goto LAB_00100361;
    }
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-group-is-kem");
    if ((lVar6 != 0) &&
       ((iVar3 = OSSL_PARAM_get_uint(lVar6,&local_34), iVar3 == 0 || (1 < local_34)))) {
      ERR_new();
      uVar9 = 0x12a;
      goto LAB_00100361;
    }
    pauVar1[3][0] = (byte)local_34 & 1;
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-min-tls");
    if ((lVar6 == 0) || (iVar3 = OSSL_PARAM_get_int(lVar6,pauVar1 + 2), iVar3 == 0)) {
      ERR_new();
      uVar9 = 0x131;
      goto LAB_00100361;
    }
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-max-tls");
    if ((lVar6 == 0) || (iVar3 = OSSL_PARAM_get_int(lVar6,pauVar1[2] + 4), iVar3 == 0)) {
      ERR_new();
      uVar9 = 0x137;
      goto LAB_00100361;
    }
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-min-dtls");
    if ((lVar6 == 0) || (iVar3 = OSSL_PARAM_get_int(lVar6,pauVar1[2] + 8), iVar3 == 0)) {
      ERR_new();
      uVar9 = 0x13d;
      goto LAB_00100361;
    }
    lVar6 = OSSL_PARAM_locate_const(param_1,"tls-max-dtls");
    if ((lVar6 == 0) || (iVar3 = OSSL_PARAM_get_int(lVar6,pauVar1[2] + 0xc), iVar3 == 0)) {
      ERR_new();
      uVar9 = 0x143;
      goto LAB_00100361;
    }
    ERR_set_mark();
    lVar6 = EVP_KEYMGMT_fetch(*puVar2,*(undefined8 *)pauVar1[1],puVar2[0x8e]);
    if (lVar6 != 0) {
      puVar2[0xcf] = puVar2[0xcf] + 1;
      uVar9 = 1;
      EVP_KEYMGMT_free(lVar6);
      ERR_pop_to_mark();
      goto LAB_001002c0;
    }
    ERR_pop_to_mark();
    uVar9 = 1;
  }
  CRYPTO_free(*(void **)*pauVar1);
  CRYPTO_free(*(void **)(*pauVar1 + 8));
  CRYPTO_free(*(void **)pauVar1[1]);
  *(undefined8 *)pauVar1[1] = 0;
  *pauVar1 = (undefined1  [16])0x0;
LAB_001002c0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 add_provider_sigalgs(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int signid;
  void *pvVar6;
  long lVar7;
  char *pcVar8;
  long lVar9;
  ASN1_OBJECT *pAVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  byte bVar14;
  uint local_44;
  long local_40;
  
  bVar14 = 0;
  puVar2 = (undefined8 *)*param_2;
  lVar3 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  lVar7 = puVar2[0xd3];
  lVar9 = puVar2[0xd2];
  if (lVar7 == lVar9) {
    if (lVar7 == 0) {
      pvVar6 = CRYPTO_malloc(0x410,"ssl/t1_lib.c",0x184);
    }
    else {
      pvVar6 = CRYPTO_realloc((void *)puVar2[0xd1],(int)lVar7 * 0x68 + 0x410,"ssl/t1_lib.c",0x187);
    }
    uVar13 = 0;
    if (pvVar6 == (void *)0x0) goto LAB_00100879;
    puVar2[0xd1] = pvVar6;
    puVar12 = (undefined8 *)((long)pvVar6 + puVar2[0xd3] * 0x68);
    *puVar12 = 0;
    puVar12[0x81] = 0;
    uVar11 = (ulong)(((int)puVar12 - (int)(undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8))
                     + 0x410U >> 3);
    puVar12 = (undefined8 *)((ulong)(puVar12 + 1) & 0xfffffffffffffff8);
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar14 * -2 + 1;
    }
    puVar2[0xd3] = puVar2[0xd3] + 10;
    lVar9 = puVar2[0xd2];
  }
  puVar12 = (undefined8 *)(puVar2[0xd1] + lVar9 * 0x68);
  lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-name");
  if ((lVar7 == 0) || (*(int *)(lVar7 + 8) != 4)) {
    ERR_new();
    uVar13 = 0x198;
    goto LAB_00100773;
  }
  CRYPTO_free((void *)puVar12[2]);
  pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x19c);
  puVar12[2] = pcVar8;
  if (pcVar8 == (char *)0x0) {
LAB_00100e0c:
    uVar13 = 0;
  }
  else {
    lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-iana-name");
    if ((lVar7 == 0) || (*(int *)(lVar7 + 8) != 4)) {
      ERR_new();
      uVar13 = 0x1a2;
      goto LAB_00100773;
    }
    CRYPTO_free((void *)*puVar12);
    pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x1a6);
    *puVar12 = pcVar8;
    if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
    lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-code-point");
    if (((lVar7 == 0) || (iVar4 = OSSL_PARAM_get_uint(lVar7,&local_44), iVar4 == 0)) ||
       (0xffff < local_44)) {
      ERR_new();
      uVar13 = 0x1af;
LAB_00100773:
      ERR_set_debug("ssl/t1_lib.c",uVar13,"add_provider_sigalgs");
      ERR_set_error(0x14,0x80106,0);
LAB_0010078e:
      uVar13 = 0;
    }
    else {
      *(short *)(puVar12 + 1) = (short)local_44;
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-sec-bits");
      if ((lVar7 == 0) || (iVar4 = OSSL_PARAM_get_uint(lVar7,puVar12 + 10), iVar4 == 0)) {
        ERR_new();
        uVar13 = 0x1b7;
        goto LAB_00100773;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-oid");
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 8) == 4) {
          CRYPTO_free((void *)puVar12[3]);
          pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x1c3);
          puVar12[3] = pcVar8;
          if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
          goto LAB_00100a1c;
        }
        goto LAB_0010078e;
      }
      puVar12[3] = 0;
LAB_00100a1c:
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-sig-name");
      if (lVar7 == 0) {
        puVar12[4] = 0;
      }
      else {
        if (*(int *)(lVar7 + 8) != 4) goto LAB_0010078e;
        CRYPTO_free((void *)puVar12[4]);
        pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x1cf);
        puVar12[4] = pcVar8;
        if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-sig-oid");
      if (lVar7 == 0) {
        puVar12[5] = 0;
      }
      else {
        if (*(int *)(lVar7 + 8) != 4) goto LAB_0010078e;
        CRYPTO_free((void *)puVar12[5]);
        pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x1db);
        puVar12[5] = pcVar8;
        if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1);
      if (lVar7 == 0) {
        puVar12[6] = 0;
      }
      else {
        if (*(int *)(lVar7 + 8) != 4) goto LAB_0010078e;
        CRYPTO_free((void *)puVar12[6]);
        pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x1e7);
        puVar12[6] = pcVar8;
        if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-hash-oid");
      if (lVar7 == 0) {
        puVar12[7] = 0;
      }
      else {
        if (*(int *)(lVar7 + 8) != 4) goto LAB_0010078e;
        CRYPTO_free((void *)puVar12[7]);
        pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",499);
        puVar12[7] = pcVar8;
        if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-keytype");
      if (lVar7 == 0) {
        puVar12[8] = 0;
      }
      else {
        if (*(int *)(lVar7 + 8) != 4) goto LAB_0010078e;
        CRYPTO_free((void *)puVar12[8]);
        pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x1ff);
        puVar12[8] = pcVar8;
        if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-sigalg-keytype-oid");
      if (lVar7 == 0) {
        puVar12[9] = 0;
      }
      else {
        if (*(int *)(lVar7 + 8) != 4) goto LAB_0010078e;
        CRYPTO_free((void *)puVar12[9]);
        pcVar8 = CRYPTO_strdup(*(char **)(lVar7 + 0x10),"ssl/t1_lib.c",0x20b);
        puVar12[9] = pcVar8;
        if (pcVar8 == (char *)0x0) goto LAB_00100e0c;
      }
      uVar13 = _LC24;
      *(undefined8 *)((long)puVar12 + 0x5c) = _LC24;
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-min-dtls");
      if ((lVar7 != 0) && (iVar4 = OSSL_PARAM_get_int(lVar7,(long)puVar12 + 0x5c), iVar4 == 0)) {
        ERR_new();
        uVar13 = 0x214;
        goto LAB_00100773;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-max-dtls");
      if ((lVar7 != 0) && (iVar4 = OSSL_PARAM_get_int(lVar7,puVar12 + 0xc), iVar4 == 0)) {
        ERR_new();
        uVar13 = 0x219;
        goto LAB_00100773;
      }
      if ((1 < *(int *)(puVar12 + 0xc) + 1U) &&
         (*(int *)((long)puVar12 + 0x5c) < *(int *)(puVar12 + 0xc))) {
        ERR_new();
        uVar13 = 0x21f;
        goto LAB_00100773;
      }
      *(undefined8 *)((long)puVar12 + 0x5c) = uVar13;
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-min-tls");
      if ((lVar7 == 0) || (iVar4 = OSSL_PARAM_get_int(lVar7,(long)puVar12 + 0x54), iVar4 == 0)) {
        ERR_new();
        uVar13 = 0x228;
        goto LAB_00100773;
      }
      lVar7 = OSSL_PARAM_locate_const(param_1,"tls-max-tls");
      if ((lVar7 == 0) || (iVar4 = OSSL_PARAM_get_int(lVar7,puVar12 + 0xb), iVar4 == 0)) {
        ERR_new();
        uVar13 = 0x22d;
        goto LAB_00100773;
      }
      iVar4 = *(int *)(puVar12 + 0xb);
      iVar5 = *(int *)((long)puVar12 + 0x54);
      if (iVar4 + 1U < 2) {
        if ((1 < iVar5 + 1U) && (0x304 < iVar5)) {
LAB_00100e65:
          *(undefined8 *)((long)puVar12 + 0x54) = uVar13;
        }
LAB_00100e69:
        if (*(int *)((long)puVar12 + 0x54) == -1) goto LAB_00100d1c;
      }
      else {
        if (iVar4 < iVar5) {
          ERR_new();
          uVar13 = 0x232;
          goto LAB_00100773;
        }
        if ((1 < iVar5 + 1U) && (0x304 < iVar5)) goto LAB_00100e65;
        if (0x303 < iVar4) goto LAB_00100e69;
        *(undefined8 *)((long)puVar12 + 0x54) = uVar13;
LAB_00100d1c:
        if (*(int *)((long)puVar12 + 0x5c) == -1) {
          uVar13 = 1;
          goto LAB_0010079a;
        }
      }
      ERR_set_mark();
      pcVar8 = (char *)puVar12[8];
      if ((pcVar8 == (char *)0x0) && (pcVar8 = (char *)puVar12[4], pcVar8 == (char *)0x0)) {
        pcVar8 = (char *)puVar12[2];
      }
      lVar7 = EVP_KEYMGMT_fetch(*puVar2,pcVar8,puVar2[0x8e]);
      if (lVar7 == 0) {
LAB_00100d6d:
        ERR_pop_to_mark();
        uVar13 = 1;
      }
      else {
        lVar9 = EVP_KEYMGMT_get0_provider(lVar7);
        if (lVar3 != lVar9) {
LAB_00100d65:
          EVP_KEYMGMT_free(lVar7);
          goto LAB_00100d6d;
        }
        OBJ_create((char *)puVar12[3],(char *)puVar12[2],(char *)0x0);
        iVar4 = OBJ_txt2nid((char *)puVar12[2]);
        if (iVar4 != 0) {
          iVar4 = OBJ_txt2nid((char *)puVar12[2]);
          pAVar10 = OBJ_nid2obj(iVar4);
          if (pAVar10 != (ASN1_OBJECT *)0x0) {
            if ((char *)puVar12[4] != (char *)0x0) {
              OBJ_create((char *)puVar12[5],(char *)puVar12[4],(char *)0x0);
            }
            if ((char *)puVar12[8] != (char *)0x0) {
              OBJ_create((char *)puVar12[9],(char *)puVar12[8],(char *)0x0);
            }
            if ((char *)puVar12[6] != (char *)0x0) {
              OBJ_create((char *)puVar12[7],(char *)puVar12[6],(char *)0x0);
            }
            iVar5 = 0;
            iVar4 = OBJ_txt2nid(pcVar8);
            if ((char *)puVar12[6] != (char *)0x0) {
              iVar5 = OBJ_txt2nid((char *)puVar12[6]);
            }
            puVar1 = puVar12 + 2;
            puVar12 = (undefined8 *)0x0;
            signid = OBJ_txt2nid((char *)*puVar1);
            OBJ_add_sigid(signid,iVar5,iVar4);
            puVar2[0xd2] = puVar2[0xd2] + 1;
            goto LAB_00100d65;
          }
        }
        ERR_new();
        ERR_set_debug("ssl/t1_lib.c",0x269,"add_provider_sigalgs");
        uVar13 = 1;
        ERR_set_error(0x14,0x80106,0);
      }
    }
    if (puVar12 == (undefined8 *)0x0) goto LAB_00100879;
  }
LAB_0010079a:
  CRYPTO_free((void *)*puVar12);
  *puVar12 = 0;
  CRYPTO_free((void *)puVar12[2]);
  puVar12[2] = 0;
  CRYPTO_free((void *)puVar12[3]);
  puVar12[3] = 0;
  CRYPTO_free((void *)puVar12[4]);
  puVar12[4] = 0;
  CRYPTO_free((void *)puVar12[5]);
  puVar12[5] = 0;
  CRYPTO_free((void *)puVar12[6]);
  puVar12[6] = 0;
  CRYPTO_free((void *)puVar12[7]);
  puVar12[7] = 0;
  CRYPTO_free((void *)puVar12[8]);
  puVar12[8] = 0;
  CRYPTO_free((void *)puVar12[9]);
  puVar12[9] = 0;
LAB_00100879:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



int tuple_cb(void *param_1,int param_2,void *param_3)

{
  long lVar1;
  int iVar2;
  char *list;
  void *pvVar3;
  
  if ((param_1 == (void *)0x0 || param_2 < 1) || (param_3 == (void *)0x0)) {
    ERR_new();
    ERR_set_debug("ssl/t1_lib.c",0x5fc,"tuple_cb");
    ERR_set_error(0x14,0x19e,0);
  }
  else {
    if (*(long *)((long)param_3 + 0x28) == *(long *)((long)param_3 + 0x20)) {
      pvVar3 = CRYPTO_realloc(*(void **)((long)param_3 + 0x30),
                              (int)*(long *)((long)param_3 + 0x20) * 8 + 0x100,"ssl/t1_lib.c",0x603)
      ;
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      *(long *)((long)param_3 + 0x20) = *(long *)((long)param_3 + 0x20) + 0x20;
      *(void **)((long)param_3 + 0x30) = pvVar3;
    }
    list = (char *)CRYPTO_malloc(param_2 + 1,"ssl/t1_lib.c",0x60d);
    if (list != (char *)0x0) {
      memcpy(list,param_1,(long)param_2);
      list[param_2] = '\0';
      iVar2 = CONF_parse_list(list,0x3a,1,gid_cb,param_3);
      CRYPTO_free(list);
      lVar1 = *(long *)((long)param_3 + 0x28);
      if (*(long *)(*(long *)((long)param_3 + 0x30) + lVar1 * 8) == 0) {
        return iVar2;
      }
      if (*(long *)((long)param_3 + 0x50) != 0) {
        *(long *)((long)param_3 + 0x28) = lVar1 + 1;
        *(undefined8 *)(*(long *)((long)param_3 + 0x30) + 8 + lVar1 * 8) = 0;
        *(undefined8 *)((long)param_3 + 0x50) = 1;
        return iVar2;
      }
      return iVar2;
    }
  }
  return 0;
}



undefined8 tls1_check_pkey_comp(long param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  
  iVar1 = EVP_PKEY_is_a(param_2,&_LC25);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = EVP_PKEY_get_ec_point_conv_form(param_2);
  if (iVar1 != 0) {
    if (iVar1 == 4) {
      cVar3 = '\0';
    }
    else {
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
          (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0x10000)) && (0x303 < iVar1)) {
        return 1;
      }
      iVar1 = EVP_PKEY_get_field_type(param_2);
      if (iVar1 == 0x196) {
        cVar3 = '\x01';
      }
      else {
        cVar3 = '\x02';
        if (iVar1 != 0x197) {
          return 0;
        }
      }
    }
    pcVar2 = *(char **)(param_1 + 0xa80);
    if (pcVar2 == (char *)0x0) {
      return 1;
    }
    if (*(long *)(param_1 + 0xa78) != 0) {
      pcVar4 = pcVar2 + *(long *)(param_1 + 0xa78);
      do {
        if (*pcVar2 == cVar3) {
          return 1;
        }
        pcVar2 = pcVar2 + 1;
      } while (pcVar2 != pcVar4);
    }
  }
  return 0;
}



bool tls1_check_sig_alg(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == -1) || (iVar2 = X509_self_signed(param_2,0), iVar2 != 0)) {
LAB_00101239:
    bVar8 = true;
  }
  else {
    iVar2 = X509_get_signature_nid(param_2);
    if (param_3 == 0) {
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
           (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) &&
         (*(long *)(param_1 + 1000) != 0)) {
        lVar7 = *(long *)(param_1 + 0x3f8);
        bVar8 = true;
      }
      else {
        lVar7 = *(long *)(param_1 + 0x1590);
        bVar8 = false;
      }
      lVar6 = 0;
      if (lVar7 != 0) {
        do {
          if (bVar8) {
            do {
              while( true ) {
                lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x650);
                lVar4 = 0;
                lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x660);
                if (lVar1 == 0) break;
                do {
                  if (*(short *)(*(long *)(param_1 + 1000) + lVar6 * 2) == *(short *)(lVar5 + 0x10))
                  {
                    if (*(int *)(lVar5 + 0x2c) != 0) goto LAB_001012da;
                    goto LAB_001013ae;
                  }
                  lVar4 = lVar4 + 1;
                  lVar5 = lVar5 + 0x48;
                } while (lVar4 != lVar1);
                lVar6 = lVar6 + 1;
                if (lVar6 == lVar7) {
                  bVar8 = false;
                  goto LAB_0010123e;
                }
              }
LAB_001013ae:
              lVar6 = lVar6 + 1;
            } while (lVar7 != lVar6);
            break;
          }
          while (lVar5 = *(long *)(*(long *)(param_1 + 0x1588) + lVar6 * 8), lVar5 == 0) {
            lVar6 = lVar6 + 1;
            if (lVar7 == lVar6) {
              bVar8 = false;
              goto LAB_0010123e;
            }
          }
LAB_001012da:
          if ((*(int *)(lVar5 + 0x24) == iVar2) ||
             (((*(int *)(lVar5 + 0x1c) == 0x390 &&
               (iVar3 = OBJ_find_sigid_algs(iVar2,&local_48,&local_44), iVar3 != 0)) &&
              ((local_44 == 6 && (*(int *)(lVar5 + 0x14) == local_48)))))) goto LAB_00101239;
          lVar6 = lVar6 + 1;
        } while (lVar7 != lVar6);
      }
      bVar8 = false;
    }
    else {
      bVar8 = param_3 == iVar2;
    }
  }
LAB_0010123e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar8;
}



int gid_cb(long param_1,uint param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  short *psVar8;
  ulong *puVar9;
  ulong uVar10;
  char *list;
  size_t sVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  short sVar18;
  char *pcVar19;
  char *pcVar20;
  uint uVar21;
  undefined **ppuVar22;
  long in_FS_OFFSET;
  byte bVar23;
  int local_94;
  undefined8 local_88 [9];
  long local_40;
  
  bVar23 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0 || (int)param_2 < 1) || (param_3 == (long *)0x0)) {
    ERR_new();
    ERR_set_debug("ssl/t1_lib.c",0x4f4,"gid_cb");
    ERR_set_error(0x14,0x19e,0);
LAB_001017e0:
    iVar5 = 0;
    goto LAB_00101726;
  }
  bVar3 = false;
  param_1 = param_1 + 1;
  bVar4 = false;
  local_94 = 0;
LAB_00101478:
  uVar21 = param_2 - 1;
  puVar12 = (undefined4 *)(param_1 + -1);
  pcVar7 = strchr("/:?*-",(int)*(char *)(param_1 + -1));
  if (pcVar7 == (char *)0x0) {
    iVar5 = OPENSSL_strncasecmp(&_LC30,puVar12,1);
    if (iVar5 == 0) goto switchD_001014ab_caseD_2b;
    goto LAB_001014da;
  }
  switch(*pcVar7) {
  case '*':
    if (bVar4) goto switchD_001014ab_caseD_2f;
    bVar4 = true;
    break;
  default:
switchD_001014ab_caseD_2b:
    if (param_2 == 7) {
      iVar5 = OPENSSL_strncasecmp("DEFAULT",puVar12,7);
      if (iVar5 == 0) {
        iVar5 = 0x5e;
        pcVar7 = 
        "?*X25519MLKEM768 / ?*X25519:?secp256r1 / ?X448:?secp384r1:?secp521r1 / ?ffdhe2048:?ffdhe3072"
        ;
LAB_00101848:
        if (local_94 == 0 && !bVar3) {
          list = (char *)CRYPTO_malloc(iVar5,"ssl/t1_lib.c",0x533);
          if (list != (char *)0x0) {
            if ((bVar4) && (*pcVar7 != '*')) {
              *list = '*';
              lVar16 = 1;
              pcVar20 = list + 1;
            }
            else {
              lVar16 = 0;
              pcVar20 = list;
            }
            sVar11 = strlen(pcVar7);
            *(undefined8 *)pcVar20 = *(undefined8 *)pcVar7;
            *(undefined8 *)(pcVar20 + ((sVar11 & 0xffffffff) - 8)) =
                 *(undefined8 *)(pcVar7 + ((sVar11 & 0xffffffff) - 8));
            lVar15 = (long)pcVar20 - (long)((ulong)(pcVar20 + 8) & 0xfffffffffffffff8);
            pcVar19 = pcVar7 + -lVar15;
            puVar14 = (undefined8 *)((ulong)(pcVar20 + 8) & 0xfffffffffffffff8);
            for (uVar17 = (ulong)((uint)((int)sVar11 + (int)lVar15) >> 3); uVar17 != 0;
                uVar17 = uVar17 - 1) {
              *puVar14 = *(undefined8 *)pcVar19;
              pcVar19 = pcVar19 + ((ulong)bVar23 * -2 + 1) * 8;
              puVar14 = puVar14 + (ulong)bVar23 * -2 + 1;
            }
            sVar11 = strlen(pcVar7);
            *(undefined4 *)(param_3 + 0xb) = 1;
            list[lVar16 + sVar11] = '\0';
            param_3[10] = 0;
            iVar5 = CONF_parse_list(list,0x2f,1,tuple_cb,param_3);
            param_3[10] = 1;
            *(undefined4 *)(param_3 + 0xb) = 0;
            CRYPTO_free(list);
            goto LAB_00101726;
          }
          goto LAB_001017e0;
        }
        goto switchD_001014ab_caseD_2f;
      }
    }
    else if ((param_2 == 0xf) &&
            (iVar5 = OPENSSL_strncasecmp("DEFAULT_SUITE_B",puVar12,0xf), iVar5 == 0)) {
      iVar5 = 0x15;
      pcVar7 = "secp256r1:secp384r1";
      goto LAB_00101848;
    }
LAB_001014da:
    iVar5 = (int)param_3[0xb];
    if ((int)param_3[0xb] != 1) {
      iVar5 = local_94;
    }
    if (param_3[2] == param_3[1]) {
      pvVar13 = CRYPTO_realloc((void *)param_3[3],(int)param_3[1] * 2 + 0x40,"ssl/t1_lib.c",0x566);
      if (pvVar13 == (void *)0x0) goto LAB_001017e0;
      param_3[1] = param_3[1] + 0x20;
      param_3[3] = (long)pvVar13;
    }
    if (param_3[8] == param_3[7]) {
      pvVar13 = CRYPTO_realloc((void *)param_3[9],(int)param_3[7] * 2 + 0x40,"ssl/t1_lib.c",0x572);
      if (pvVar13 == (void *)0x0) goto LAB_001017e0;
      param_3[7] = param_3[7] + 0x20;
      param_3[9] = (long)pvVar13;
    }
    if (0x3f < (int)param_2) goto switchD_001014ab_caseD_2f;
    puVar14 = local_88;
    if (7 < param_2) {
      uVar17 = 0;
      do {
        uVar21 = (int)uVar17 + 8;
        uVar10 = (ulong)uVar21;
        *(undefined8 *)((long)local_88 + uVar17) = *(undefined8 *)((long)puVar12 + uVar17);
        uVar17 = uVar10;
      } while (uVar21 < (param_2 & 0xfffffff8));
      puVar14 = (undefined8 *)((long)local_88 + uVar10);
      puVar12 = (undefined4 *)(uVar10 + (long)puVar12);
    }
    lVar16 = 0;
    if ((param_2 & 4) != 0) {
      *(undefined4 *)puVar14 = *puVar12;
      lVar16 = 4;
    }
    if ((param_2 & 2) != 0) {
      *(undefined2 *)((long)puVar14 + lVar16) = *(undefined2 *)((long)puVar12 + lVar16);
      lVar16 = lVar16 + 2;
    }
    if ((param_2 & 1) != 0) {
      *(undefined1 *)((long)puVar14 + lVar16) = *(undefined1 *)((long)puVar12 + lVar16);
    }
    lVar16 = *param_3;
    uVar17 = 0;
    *(undefined1 *)((long)local_88 + (long)(int)param_2) = 0;
    if (*(long *)(lVar16 + 0x678) == 0) {
LAB_001019c0:
      lVar16 = 0;
      ppuVar22 = &name2id_arr;
      while (iVar6 = OPENSSL_strcasecmp(local_88,*ppuVar22), iVar6 != 0) {
        lVar16 = lVar16 + 1;
        ppuVar22 = ppuVar22 + 2;
        if (lVar16 == 7) goto LAB_00101726;
      }
      sVar18 = (&DAT_001096a8)[lVar16 * 8];
      if (sVar18 == 0) goto LAB_00101726;
    }
    else {
      while( true ) {
        iVar6 = OPENSSL_strcasecmp(*(undefined8 *)(*(long *)(lVar16 + 0x670) + uVar17 * 0x38),
                                   local_88);
        if ((iVar6 == 0) ||
           (iVar6 = OPENSSL_strcasecmp(*(undefined8 *)
                                        (*(long *)(lVar16 + 0x670) + 8 + uVar17 * 0x38),local_88),
           iVar6 == 0)) break;
        uVar17 = uVar17 + 1;
        if (*(ulong *)(lVar16 + 0x678) <= uVar17) goto LAB_001019c0;
      }
      sVar18 = *(short *)(*(long *)(lVar16 + 0x670) + 0x1c + uVar17 * 0x38);
      if (sVar18 == 0) goto LAB_001019c0;
    }
    lVar16 = *(long *)(*param_3 + 0x678);
    if (lVar16 == 0) goto LAB_00101726;
    lVar15 = 0;
    psVar8 = (short *)(*(long *)(*param_3 + 0x670) + 0x1c);
    while (*psVar8 != sVar18) {
      lVar15 = lVar15 + 1;
      psVar8 = psVar8 + 0x1c;
      if (lVar16 == lVar15) goto LAB_00101726;
    }
    uVar17 = param_3[2];
    if (bVar3) {
      if (uVar17 != 0) {
        lVar16 = param_3[3];
        uVar10 = 0;
        do {
          if (*(short *)(lVar16 + uVar10 * 2) == sVar18) {
            uVar17 = uVar17 - 1;
            if (uVar10 < uVar17) {
              memmove((void *)(lVar16 + uVar10 * 2),(void *)(lVar16 + 2 + uVar10 * 2),
                      (uVar17 - uVar10) * 2);
            }
            lVar16 = param_3[5];
            puVar2 = (ulong *)param_3[6];
            param_3[2] = uVar17;
            if (lVar16 == 0) goto LAB_001016c4;
            uVar17 = *puVar2;
            lVar15 = 0;
            puVar9 = puVar2;
            if (uVar17 <= uVar10) goto LAB_001016b6;
            *puVar2 = uVar17 - 1;
            goto LAB_001016c9;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
      }
    }
    else {
      uVar10 = 0;
      if (uVar17 != 0) {
        do {
          if (*(short *)(param_3[3] + uVar10 * 2) == sVar18) goto LAB_00101720;
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar17);
      }
      param_3[2] = uVar17 + 1;
      lVar16 = param_3[6];
      *(short *)(param_3[3] + uVar17 * 2) = sVar18;
      plVar1 = (long *)(lVar16 + param_3[5] * 8);
      *plVar1 = *plVar1 + 1;
      if (bVar4) {
        lVar16 = param_3[8];
        param_3[8] = lVar16 + 1;
        *(short *)(param_3[9] + lVar16 * 2) = sVar18;
      }
    }
    goto LAB_00101720;
  case '-':
    if (bVar3) goto switchD_001014ab_caseD_2f;
    bVar3 = true;
    break;
  case '/':
  case ':':
    goto switchD_001014ab_caseD_2f;
  case '?':
    if (local_94 != 0) goto switchD_001014ab_caseD_2f;
    local_94 = 1;
  }
  param_1 = param_1 + 1;
  param_2 = uVar21;
  if (uVar21 == 0) goto switchD_001014ab_caseD_2f;
  goto LAB_00101478;
  while( true ) {
    uVar17 = uVar17 + *puVar9;
    if (uVar10 < uVar17) break;
LAB_001016b6:
    puVar9 = puVar9 + 1;
    lVar15 = lVar15 + 1;
    if (lVar16 == lVar15) goto LAB_001016bf;
  }
  *puVar9 = *puVar9 - 1;
  lVar16 = lVar15;
LAB_001016bf:
  if (uVar17 <= uVar10) goto LAB_001016c4;
LAB_001016c9:
  uVar17 = param_3[8];
  if (uVar17 != 0) {
    lVar16 = param_3[9];
    uVar10 = 0;
    do {
      if (*(short *)(lVar16 + uVar10 * 2) == sVar18) {
        uVar17 = uVar17 - 1;
        if (uVar10 < uVar17) {
          memmove((void *)(lVar16 + uVar10 * 2),(void *)(lVar16 + 2 + uVar10 * 2),
                  (uVar17 - uVar10) * 2);
        }
        param_3[8] = uVar17;
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar17 != uVar10);
  }
LAB_00101720:
  iVar5 = 1;
  goto LAB_00101726;
LAB_001016c4:
  puVar2[lVar16] = puVar2[lVar16] - 1;
  goto LAB_001016c9;
switchD_001014ab_caseD_2f:
  iVar5 = -1;
LAB_00101726:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void get_sigorhash(undefined4 *param_1,int *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = OPENSSL_strcasecmp(param_3,&_LC31);
  if (iVar1 == 0) {
    *param_1 = 6;
    return;
  }
  iVar1 = OPENSSL_strcasecmp(param_3,"RSA-PSS");
  if ((iVar1 == 0) || (iVar1 = OPENSSL_strcasecmp(param_3,&_LC33), iVar1 == 0)) {
    *param_1 = 0x390;
    return;
  }
  iVar1 = OPENSSL_strcasecmp(param_3,&_LC34);
  if (iVar1 == 0) {
    *param_1 = 0x74;
    return;
  }
  iVar1 = OPENSSL_strcasecmp(param_3,"ECDSA");
  if (iVar1 == 0) {
    *param_1 = 0x198;
    return;
  }
  iVar1 = OBJ_sn2nid(param_3);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    return;
  }
  iVar1 = OBJ_ln2nid(param_3);
  *param_2 = iVar1;
  return;
}



bool sig_cb(char *param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  short sVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long in_FS_OFFSET;
  bool bVar13;
  int local_70;
  int local_6c;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_6c = 0;
  if (param_1 != (char *)0x0) {
    bVar13 = *param_1 == '?';
    if (bVar13) {
      param_1 = param_1 + 1;
      param_2 = param_2 + -1;
    }
    if ((*param_3 != 0x3e) && (param_2 < 0x28)) {
      __memcpy_chk(local_68,param_1,(long)param_2,0x28);
      local_68[param_2] = '\0';
      pcVar4 = strchr(local_68,0x2b);
      if (pcVar4 == (char *)0x0) {
        lVar6 = param_3[0x11];
        if (lVar6 == 0) {
          ppuVar12 = &sigalg_lookup_tbl;
          do {
            puVar2 = *ppuVar12;
            if (((ppuVar12[1] != (undefined *)0x0) &&
                (iVar3 = OPENSSL_strcasecmp(local_68), iVar3 == 0)) ||
               (iVar3 = OPENSSL_strcasecmp(local_68,puVar2), iVar3 == 0)) {
              lVar6 = *param_3;
              sVar8 = *(short *)(ppuVar12 + 2);
              *param_3 = lVar6 + 1;
              *(short *)((long)param_3 + lVar6 * 2 + 8) = sVar8;
              goto LAB_00101ce0;
            }
            ppuVar12 = ppuVar12 + 9;
          } while (ppuVar12 != (undefined **)&DAT_00109698);
        }
        else {
          uVar11 = 0;
          if (*(long *)(lVar6 + 0x650) != 0) {
            do {
              puVar9 = (undefined8 *)(*(long *)(lVar6 + 0x660) + uVar11 * 0x48);
              uVar1 = *puVar9;
              if (((puVar9[1] != 0) && (iVar3 = OPENSSL_strcasecmp(local_68), iVar3 == 0)) ||
                 (iVar3 = OPENSSL_strcasecmp(local_68,uVar1), iVar3 == 0)) {
                lVar5 = uVar11 * 0x48 + *(long *)(param_3[0x11] + 0x660);
                if (*(int *)(lVar5 + 0x2c) == 0) goto LAB_00101d04;
                lVar6 = *param_3;
                sVar8 = *(short *)(lVar5 + 0x10);
                *param_3 = lVar6 + 1;
                *(short *)((long)param_3 + lVar6 * 2 + 8) = sVar8;
                goto LAB_00101ce0;
              }
              lVar6 = param_3[0x11];
              uVar11 = uVar11 + 1;
            } while (uVar11 < *(ulong *)(lVar6 + 0x650));
          }
        }
        goto LAB_00101c13;
      }
      *pcVar4 = '\0';
      if (pcVar4[1] != '\0') {
        get_sigorhash(&local_70,&local_6c,local_68);
        get_sigorhash(&local_70,&local_6c,pcVar4 + 1);
        if ((local_70 != 0) && (local_6c != 0)) {
          lVar6 = param_3[0x11];
          if (lVar6 == 0) {
            piVar7 = &DAT_00108df4;
            lVar5 = 0;
            do {
              if ((local_6c == *piVar7) && (local_70 == piVar7[2])) {
                lVar6 = *param_3;
                *param_3 = lVar6 + 1;
                sVar8 = (&DAT_00108df0)[lVar5 * 0x24];
                *(short *)((long)param_3 + lVar6 * 2 + 8) = sVar8;
                goto LAB_00101ce0;
              }
              lVar5 = lVar5 + 1;
              piVar7 = piVar7 + 0x12;
            } while (lVar5 != 0x1f);
          }
          else if (*(long *)(lVar6 + 0x650) != 0) {
            lVar5 = *(long *)(lVar6 + 0x660);
            lVar10 = 0;
            while ((local_6c != *(int *)(lVar5 + 0x14) || (local_70 != *(int *)(lVar5 + 0x1c)))) {
              lVar10 = lVar10 + 1;
              lVar5 = lVar5 + 0x48;
              if (lVar10 == *(long *)(lVar6 + 0x650)) goto LAB_00101c13;
            }
            if (*(int *)(lVar5 + 0x2c) == 0) goto LAB_00101d04;
            lVar6 = *param_3;
            *param_3 = lVar6 + 1;
            sVar8 = *(short *)(lVar5 + 0x10);
            *(short *)((long)param_3 + lVar6 * 2 + 8) = sVar8;
LAB_00101ce0:
            if (lVar6 != 0) {
              lVar5 = 0;
              do {
                if (*(short *)((long)param_3 + lVar5 * 2 + 8) == sVar8) {
                  *param_3 = lVar6;
                  break;
                }
                lVar5 = lVar5 + 1;
              } while (lVar5 != lVar6);
            }
LAB_00101d04:
            bVar13 = true;
          }
        }
        goto LAB_00101c13;
      }
    }
  }
  bVar13 = false;
LAB_00101c13:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar13;
}



undefined8 check_cert_usable_isra_0(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  short sVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_38;
  int local_34;
  long local_30;
  
  pcVar7 = (char *)0x0;
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != 0) {
    pcVar7 = OBJ_nid2sn(param_2);
  }
  iVar4 = EVP_PKEY_digestsign_supports_digest(param_4,*puVar1,pcVar7,puVar1[0x8e]);
  if (0 < iVar4) {
    if (*(long *)(param_1 + 1000) == 0) {
LAB_00101f9d:
      uVar6 = 1;
      goto LAB_00101f3a;
    }
    iVar4 = X509_get_signature_info(param_3,&local_38,&local_34,0,0);
    if ((iVar4 != 0) && (lVar2 = *(long *)(param_1 + 0x3f8), lVar2 != 0)) {
      lVar10 = 0;
      lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x650);
      do {
        sVar8 = *(short *)(*(long *)(param_1 + 1000) + lVar10 * 2);
        if (lVar3 != 0) goto LAB_00101f73;
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar2);
    }
  }
LAB_00101f38:
  uVar6 = 0;
LAB_00101f3a:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
LAB_00101f73:
  lVar9 = 0;
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x660);
  do {
    if (*(short *)(lVar5 + 0x10) == sVar8) {
      if (((*(int *)(lVar5 + 0x2c) != 0) && (*(int *)(lVar5 + 0x14) == local_38)) &&
         (*(int *)(lVar5 + 0x1c) == local_34)) goto LAB_00101f9d;
      break;
    }
    lVar9 = lVar9 + 1;
    lVar5 = lVar5 + 0x48;
  } while (lVar9 != lVar3);
  if (lVar2 == lVar10 + 1) goto LAB_00101f38;
  lVar10 = lVar10 + 1;
  sVar8 = *(short *)(*(long *)(param_1 + 1000) + lVar10 * 2);
  goto LAB_00101f73;
}



undefined8 has_usable_cert(long param_1,long param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  size_t __n;
  long *plVar5;
  undefined8 *puVar6;
  
  if (param_3 == -1) {
    param_3 = *(int *)(param_2 + 0x20);
  }
  if ((param_3 < 0) || (*(int *)(param_1 + 0x118) <= param_3)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    pvVar2 = *(void **)(param_1 + 0x1598);
    __n = *(size_t *)(param_1 + 0x15a0);
  }
  else {
    pvVar2 = *(void **)(param_1 + 0x15a8);
    __n = *(size_t *)(param_1 + 0x15b0);
  }
  lVar1 = (long)param_3 * 0x28;
  if ((pvVar2 == (void *)0x0) || (pvVar2 = memchr(pvVar2,2,__n), pvVar2 == (void *)0x0)) {
    lVar3 = *(long *)(param_1 + 0x880);
    plVar5 = (long *)(*(long *)(lVar3 + 0x20) + lVar1);
    if (*plVar5 == 0) {
      return 0;
    }
    if (plVar5[1] == 0) {
      return 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 0x880);
    if (*(long *)(*(long *)(lVar3 + 0x20) + 8 + lVar1) == 0) {
      return 0;
    }
  }
  puVar6 = (undefined8 *)(lVar1 + *(long *)(lVar3 + 0x20));
  uVar4 = check_cert_usable_isra_0(param_1,*(undefined4 *)(param_2 + 0x14),*puVar6,puVar6[1]);
  return uVar4;
}



undefined8 tls1_default_timeout(void)

{
  return 7200000000000;
}



ulong tls1_new(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = ssl3_new();
  if ((int)uVar2 != 0) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x30))(param_1);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}



void tls1_free(uint *param_1)

{
  uint *puVar1;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  puVar1 = param_1;
  if ((*param_1 != 0) &&
     (((*param_1 & 0x80) == 0 ||
      (puVar1 = (uint *)ossl_quic_obj_get0_handshake_layer(), puVar1 == (uint *)0x0)))) {
    return;
  }
  CRYPTO_free(*(void **)(puVar1 + 0x2b2));
  ssl3_free(param_1);
  return;
}



undefined8 tls1_clear(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  puVar3 = param_1;
  if (((*param_1 == 0) ||
      (((*param_1 & 0x80) != 0 &&
       (puVar3 = (uint *)ossl_quic_obj_get0_handshake_layer(), puVar3 != (uint *)0x0)))) &&
     (iVar1 = ssl3_clear(param_1), iVar1 != 0)) {
    uVar2 = **(uint **)(param_1 + 6);
    if (uVar2 == 0x10000) {
      uVar2 = 0x304;
    }
    puVar3[0x12] = uVar2;
    return 1;
  }
  return 0;
}



void ssl_load_groups(SSL_CTX *param_1)

{
  int iVar1;
  
  iVar1 = OSSL_PROVIDER_do_all(param_1->method,discover_provider_groups,param_1);
  if (iVar1 == 0) {
    return;
  }
  SSL_CTX_ctrl(param_1,0x5c,0,
               "?*X25519MLKEM768 / ?*X25519:?secp256r1 / ?X448:?secp384r1:?secp521r1 / ?ffdhe2048:?ffdhe3072"
              );
  return;
}



undefined8 ssl_load_sigalgs(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  iVar3 = OSSL_PROVIDER_do_all(*param_1,discover_provider_sigalgs,param_1);
  if (iVar3 == 0) {
    return 0;
  }
  if (param_1[0xd2] != 0) {
    CRYPTO_free((void *)param_1[0x2c]);
    lVar4 = CRYPTO_zalloc(param_1[0xd2] * 8,"ssl/t1_lib.c",0x2af);
    param_1[0x2c] = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
    if (param_1[0xd2] != 0) {
      lVar6 = 0;
      uVar5 = 0;
      do {
        lVar1 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        puVar2 = (undefined8 *)(param_1[0xd1] + 0x10 + lVar6);
        lVar6 = lVar6 + 0x68;
        iVar3 = OBJ_txt2nid((char *)*puVar2);
        *(int *)(lVar4 + lVar1) = iVar3;
        lVar4 = param_1[0x2c];
        *(undefined4 *)(lVar4 + 4 + lVar1) = 0;
      } while (uVar5 < (ulong)param_1[0xd2]);
    }
  }
  return 1;
}



long tls1_group_id_lookup(long param_1,short param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x678) != 0) {
    lVar1 = *(long *)(param_1 + 0x670);
    lVar2 = 0;
    do {
      if (*(short *)(lVar1 + 0x1c) == param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
      lVar1 = lVar1 + 0x38;
    } while (lVar2 != *(long *)(param_1 + 0x678));
  }
  return 0;
}



undefined8 * tls1_group_id2name(undefined8 param_1,undefined2 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)tls1_group_id_lookup(param_1,param_2);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1;
}



uint tls1_group_id2nid(ushort param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    lVar2 = 0;
    do {
      if (param_1 == (&DAT_00108c04)[lVar2 * 4]) {
        return (&nid_to_group)[lVar2 * 2];
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x2d);
    uVar1 = 0;
    if (param_2 != 0) {
      uVar1 = param_1 | 0x1000000;
    }
  }
  return uVar1;
}



undefined2 tls1_nid2group_id(int param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((&nid_to_group)[lVar1 * 2] == param_1) {
      return (&DAT_00108c04)[lVar1 * 4];
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x2d);
  return 0;
}



void tls1_get_supported_groups(long param_1,long *param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000;
  if (uVar2 == 0x20000) {
    *param_2 = 0x108bec;
LAB_00102472:
    *param_3 = 1;
    return;
  }
  if (uVar2 == 0x30000) {
    *param_2 = (long)&suiteb_curves;
    uVar3 = 2;
  }
  else {
    if (uVar2 == 0x10000) {
      *param_2 = (long)&suiteb_curves;
      goto LAB_00102472;
    }
    if (*(long *)(param_1 + 0xa90) != 0) {
      *param_2 = *(long *)(param_1 + 0xa90);
      *param_3 = *(undefined8 *)(param_1 + 0xa88);
      return;
    }
    *param_2 = *(long *)(lVar1 + 0x298);
    uVar3 = *(undefined8 *)(lVar1 + 0x290);
  }
  *param_3 = uVar3;
  return;
}



void tls1_get_requested_keyshare_groups(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa90) != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0xab0);
    *param_3 = *(undefined8 *)(param_1 + 0xaa8);
    return;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x290);
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x298);
  *param_3 = uVar1;
  return;
}



void tls1_get_group_tuples(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa90) != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0xac0);
    *param_3 = *(undefined8 *)(param_1 + 0xab8);
    return;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x2b0);
  *param_2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x2b8);
  *param_3 = uVar1;
  return;
}



uint tls_valid_group(long param_1,undefined2 param_2,undefined4 param_3,int param_4,int param_5,
                    uint *param_6)

{
  uint uVar1;
  char *__s1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = tls1_group_id_lookup(*(undefined8 *)(param_1 + 8),param_2);
  if (param_6 != (uint *)0x0) {
    *param_6 = 0;
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      uVar3 = *(uint *)(lVar4 + 0x20);
      uVar1 = *(uint *)(lVar4 + 0x24);
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0x28);
      uVar1 = *(uint *)(lVar4 + 0x2c);
    }
    uVar5 = 0;
    if (-1 < (int)(uVar1 | uVar3)) {
      uVar5 = 1;
      if (uVar1 != 0) {
        iVar2 = ssl_version_cmp(param_1,param_3,uVar1);
        uVar5 = (uint)(iVar2 < 1);
      }
      if (uVar3 != 0) {
        uVar3 = ssl_version_cmp(param_1,param_4,uVar3);
        uVar5 = uVar5 & ~uVar3 >> 0x1f;
      }
      if ((((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) &&
          ((param_6 != (uint *)0x0 & (byte)uVar5) != 0)) && (param_4 == 0x304)) {
        *param_6 = (uint)(uVar1 == 0 || 0x303 < (int)uVar1);
      }
      if (((param_5 != 0) &&
          (((__s1 = *(char **)(lVar4 + 0x10), *__s1 != 'E' || (__s1[1] != 'C')) || (__s1[2] != '\0')
           ))) && (iVar2 = strcmp(__s1,"X25519"), iVar2 != 0)) {
        iVar2 = strcmp(__s1,"X448");
        uVar5 = uVar5 & iVar2 == 0;
      }
    }
  }
  return uVar5;
}



undefined8 tls_group_allowed(long param_1,ushort param_2,undefined4 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  ushort local_32;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = tls1_group_id_lookup(*(undefined8 *)(param_1 + 8),param_2);
  uVar3 = 0;
  if (lVar2 != 0) {
    local_32 = param_2 << 8 | param_2 >> 8;
    uVar1 = tls1_group_id2nid(*(undefined2 *)(lVar2 + 0x1c),0);
    uVar3 = ssl_security(param_1,param_3,*(undefined4 *)(lVar2 + 0x18),uVar1,&local_32);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
tls1_get0_implemented_groups
          (int param_1,int param_2,long param_3,long param_4,long param_5,long param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  short sVar10;
  long lVar11;
  
  if (((param_3 == 0) || (param_6 == 0)) || (lVar4 = OPENSSL_sk_new(0x100000), lVar4 == 0)) {
    return 0;
  }
  if (param_4 != 0) {
    iVar3 = 0;
    if (-1 < param_2) {
      iVar3 = param_2;
    }
    lVar11 = 0;
    do {
      if (((*(int *)(param_3 + 0x20) <= iVar3) || (param_2 < 1)) &&
         ((*(int *)(param_3 + 0x24) < 1 || param_1 <= *(int *)(param_3 + 0x24) || (param_1 < 1)))) {
        plVar5 = (long *)CRYPTO_malloc(0x10,"ssl/t1_lib.c",0x3cb);
        if (plVar5 == (long *)0x0) goto LAB_00102920;
        *plVar5 = param_3;
        plVar5[1] = lVar11;
        iVar2 = OPENSSL_sk_push(lVar4,plVar5);
        if (iVar2 < 1) goto LAB_00102920;
      }
      lVar11 = lVar11 + 1;
      param_3 = param_3 + 0x38;
    } while (param_4 != lVar11);
  }
  OPENSSL_sk_sort(lVar4);
  iVar3 = OPENSSL_sk_num(lVar4);
  uVar9 = (ulong)iVar3;
  if (uVar9 != 0) {
    uVar7 = 0;
    sVar10 = 0;
    if (param_5 == 0) {
      do {
        plVar5 = (long *)OPENSSL_sk_value(lVar4,uVar7 & 0xffffffff);
        sVar1 = *(short *)(*plVar5 + 0x1c);
        if ((sVar1 != sVar10) &&
           (iVar3 = OPENSSL_sk_push(param_6,*(undefined8 *)*plVar5), sVar10 = sVar1, iVar3 < 1))
        goto LAB_00102920;
        uVar7 = uVar7 + 1;
      } while (uVar9 != uVar7);
    }
    else {
      do {
        puVar6 = (undefined8 *)OPENSSL_sk_value(lVar4,uVar7 & 0xffffffff);
        iVar3 = OPENSSL_sk_push(param_6,*(undefined8 *)*puVar6);
        if (iVar3 < 1) goto LAB_00102920;
        uVar7 = uVar7 + 1;
      } while (uVar9 != uVar7);
    }
  }
  uVar8 = 1;
LAB_00102922:
  OPENSSL_sk_pop_free(lVar4,free_wrapper);
  return uVar8;
LAB_00102920:
  uVar8 = 0;
  goto LAB_00102922;
}



uint tls1_shared_group(long param_1,uint param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  ulong local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (*(int *)(param_1 + 0x78) != 0) {
    if (param_2 == 0xfffffffe) {
      if ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) != 0) {
        iVar4 = *(int *)(*(long *)(param_1 + 0x300) + 0x18);
        if (iVar4 == 0x300c02b) {
          uVar7 = 0x17;
          goto LAB_00102a89;
        }
        uVar7 = 0x18;
        if (iVar4 == 0x300c02c) goto LAB_00102a89;
        goto LAB_00102a87;
      }
      param_2 = 0;
      bVar1 = *(byte *)(param_1 + 0x9b2);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x9b2);
    }
    if ((bVar1 & 0x40) == 0) {
      local_60 = *(long *)(param_1 + 0xaa0);
      local_50 = *(ulong *)(param_1 + 0xa98);
      tls1_get_supported_groups(param_1,&local_58,&local_48);
    }
    else {
      tls1_get_supported_groups(param_1,&local_60,&local_50);
      local_58 = *(long *)(param_1 + 0xaa0);
      local_48 = *(long *)(param_1 + 0xa98);
    }
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = local_50;
    if (local_50 != 0) {
      do {
        uVar2 = *(ushort *)(local_60 + uVar10 * 2);
        if (local_48 == 0) break;
        lVar6 = 0;
        do {
          if (uVar2 == *(ushort *)(local_58 + lVar6 * 2)) {
            iVar4 = tls_group_allowed(param_1,uVar2,0x20005);
            uVar8 = local_50;
            if (iVar4 != 0) {
              lVar6 = tls1_group_id_lookup(uVar3,uVar2);
              if (lVar6 == 0) goto LAB_00102a87;
              if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
                iVar5 = *(int *)(lVar6 + 0x20);
                iVar4 = *(int *)(lVar6 + 0x24);
              }
              else {
                iVar5 = *(int *)(lVar6 + 0x28);
                iVar4 = *(int *)(lVar6 + 0x2c);
              }
              uVar8 = local_50;
              if (((iVar4 != -1) &&
                  ((iVar5 == 0 ||
                   (iVar5 = ssl_version_cmp(param_1,*(undefined4 *)(param_1 + 0x48)),
                   uVar8 = local_50, -1 < iVar5)))) &&
                 ((iVar4 == 0 ||
                  (iVar4 = ssl_version_cmp(param_1,*(undefined4 *)(param_1 + 0x48),iVar4),
                  uVar8 = local_50, iVar4 < 1)))) {
                uVar7 = (uint)uVar2;
                if (param_2 == uVar9) goto LAB_00102a89;
                uVar9 = uVar9 + 1;
                uVar8 = local_50;
              }
            }
            break;
          }
          lVar6 = lVar6 + 1;
        } while (local_48 != lVar6);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
    uVar7 = uVar9;
    if (param_2 == 0xffffffff) goto LAB_00102a89;
  }
LAB_00102a87:
  uVar7 = 0;
LAB_00102a89:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8
tls1_set_groups(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5,undefined8 *param_6,long param_7,long param_8)

{
  ulong *puVar1;
  ulong uVar2;
  ushort uVar3;
  undefined2 *ptr;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined2 *local_98;
  long *local_90;
  ulong local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_48 = 0;
  if (param_8 == 0) {
    ERR_new();
    ERR_set_debug("ssl/t1_lib.c",0x445,"tls1_set_groups");
    ERR_set_error(0x14,0x10f,0);
  }
  else {
    ptr = (undefined2 *)CRYPTO_malloc((int)param_8 * 2,"ssl/t1_lib.c",0x448);
    if ((ptr == (undefined2 *)0x0) ||
       (local_98 = (undefined2 *)CRYPTO_malloc(2,"ssl/t1_lib.c",0x44a),
       local_98 == (undefined2 *)0x0)) {
      local_90 = (long *)0x0;
      local_98 = (undefined2 *)0x0;
    }
    else {
      local_90 = (long *)CRYPTO_malloc(8,"ssl/t1_lib.c",0x44c);
      if (local_90 != (long *)0x0) {
        lVar6 = 0;
        do {
          uVar3 = tls1_nid2group_id(*(undefined4 *)(param_7 + lVar6 * 4));
          if ((uVar3 & 0xc0) != 0) goto LAB_00102cd0;
          uVar5 = 1L << ((byte)uVar3 & 0x3f);
          if (uVar3 < 0x100) {
            if (uVar3 == 0) goto LAB_00102cd0;
            puVar1 = &local_50;
            uVar2 = local_50;
          }
          else {
            puVar1 = &local_48;
            uVar2 = local_48;
          }
          if ((uVar2 & uVar5) != 0) goto LAB_00102cd0;
          ptr[lVar6] = uVar3;
          lVar6 = lVar6 + 1;
          *puVar1 = uVar2 | uVar5;
        } while (param_8 != lVar6);
        CRYPTO_free((void *)*param_1);
        CRYPTO_free((void *)*param_3);
        CRYPTO_free((void *)*param_5);
        *param_1 = ptr;
        *param_2 = param_8;
        *local_98 = *ptr;
        *param_3 = local_98;
        *param_4 = 1;
        *local_90 = param_8;
        *param_5 = local_90;
        *param_6 = 1;
        uVar4 = 1;
        goto LAB_00102d05;
      }
    }
LAB_00102cd0:
    CRYPTO_free(ptr);
    CRYPTO_free(local_98);
    CRYPTO_free(local_90);
  }
  uVar4 = 0;
LAB_00102d05:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
tls1_set_groups_list
          (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
          undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,byte *param_8)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ushort **ppuVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  long local_a8 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    ERR_new(0,param_2,0);
    uVar11 = 0;
    ERR_set_debug("ssl/t1_lib.c",0x63b,"tls1_set_groups_list");
    ERR_set_error(0x14,0xc0102,0);
    goto LAB_001030fb;
  }
  local_a8[1] = 0x20;
  local_58 = ZEXT816(1);
  local_88 = ZEXT816(0x20);
  local_78 = ZEXT816(0x20) << 0x40;
  local_98 = (undefined1  [16])0x0;
  local_68 = (undefined1  [16])0x0;
  local_a8[0] = param_1;
  pvVar6 = CRYPTO_malloc(0x40,"ssl/t1_lib.c",0x648);
  local_98._8_8_ = pvVar6;
  if (pvVar6 == (void *)0x0) {
LAB_0010319e:
    uVar11 = 0;
  }
  else {
    puVar7 = (undefined8 *)CRYPTO_malloc(local_88._0_4_ * 8,"ssl/t1_lib.c",0x64b);
    auVar3 = local_78;
    local_78._0_8_ = puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_0010319e;
    *puVar7 = 0;
    pvVar6 = CRYPTO_malloc(auVar3._8_4_ * 2,"ssl/t1_lib.c",0x64f);
    local_68._8_8_ = pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_0010319e;
    bVar1 = *param_8;
    if (bVar1 != 0) {
      ppuVar8 = __ctype_b_loc();
LAB_00102f61:
      if ((*(byte *)((long)*ppuVar8 + (ulong)bVar1 * 2 + 1) & 0x20) != 0) goto LAB_00102f50;
      iVar5 = CONF_parse_list((char *)param_8,0x2f,1,tuple_cb,local_a8);
      if (iVar5 == 0) goto LAB_0010319e;
      if (iVar5 != -1) {
        uVar10 = 0;
        if (local_88._8_8_ != 0) {
          uVar9 = 0;
          uVar10 = 0;
          do {
            lVar2 = *(long *)(local_78._0_8_ + uVar9 * 8);
            uVar4 = uVar10;
            if ((lVar2 != 0) && (uVar4 = uVar10 + 1, uVar10 != uVar9)) {
              *(long *)(local_78._0_8_ + uVar10 * 8) = lVar2;
            }
            uVar10 = uVar4;
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulong)local_88._8_8_);
        }
        local_88._8_8_ = uVar10;
        if ((ulong)local_68._0_8_ < 5) {
          if ((local_98._0_8_ != 0) && (local_68._0_8_ == 0)) {
            local_68._0_8_ = 1;
            *(undefined2 *)local_68._8_8_ = 0;
          }
          goto LAB_00103010;
        }
        ERR_new();
        ERR_set_debug("ssl/t1_lib.c",0x676,"tls1_set_groups_list");
        ERR_set_error(0x14,0x80106,"To many keyshares requested in \'%s\' (max = %d)",param_8,4);
        goto LAB_0010319e;
      }
      ERR_new();
      uVar11 = 0;
      ERR_set_debug("ssl/t1_lib.c",0x661,"tls1_set_groups_list");
      ERR_set_error(0x14,0x80106,"Syntax error in \'%s\'",param_8);
      goto LAB_001030c5;
    }
LAB_00103010:
    if ((((param_2 != (undefined8 *)0x0) && (param_4 != (undefined8 *)0x0)) &&
        (param_6 != (undefined8 *)0x0)) &&
       (((param_3 != (undefined8 *)0x0 && (param_5 != (undefined8 *)0x0)) &&
        (param_7 != (undefined8 *)0x0)))) {
      CRYPTO_free((void *)*param_2);
      *param_2 = local_98._8_8_;
      uVar11 = 1;
      pvVar6 = (void *)*param_4;
      *param_3 = local_98._0_8_;
      CRYPTO_free(pvVar6);
      pvVar6 = (void *)*param_6;
      *param_4 = local_68._8_8_;
      *param_5 = local_68._0_8_;
      CRYPTO_free(pvVar6);
      *param_6 = local_78._0_8_;
      *param_7 = local_88._8_8_;
      goto LAB_001030fb;
    }
    uVar11 = 1;
  }
LAB_001030c5:
  CRYPTO_free((void *)local_98._8_8_);
  CRYPTO_free((void *)local_78._0_8_);
  CRYPTO_free((void *)local_68._8_8_);
LAB_001030fb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
LAB_00102f50:
  bVar1 = param_8[1];
  param_8 = param_8 + 1;
  if (bVar1 == 0) goto LAB_00103010;
  goto LAB_00102f61;
}



undefined8 tls1_check_group_id(long param_1,short param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) goto LAB_00103260;
  if (((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) == 0) ||
     (*(long *)(param_1 + 0x300) == 0)) {
LAB_00103290:
    if (param_3 == 0) {
LAB_001032d0:
      iVar1 = tls_group_allowed(param_1,param_2,0x20006);
      if (iVar1 != 0) {
        uVar2 = 1;
        if ((*(int *)(param_1 + 0x78) == 0) || (*(long *)(param_1 + 0xa98) == 0)) goto LAB_00103262;
        lVar3 = 0;
        do {
          if (param_2 == *(short *)(*(long *)(param_1 + 0xaa0) + lVar3 * 2)) {
            uVar2 = 1;
            goto LAB_00103262;
          }
          lVar3 = lVar3 + 1;
        } while (*(long *)(param_1 + 0xa98) != lVar3);
      }
    }
    else {
      tls1_get_supported_groups(param_1,&local_30,&local_28);
      if (local_28 != 0) {
        lVar3 = 0;
        do {
          if (param_2 == *(short *)(local_30 + lVar3 * 2)) goto LAB_001032d0;
          lVar3 = lVar3 + 1;
        } while (local_28 != lVar3);
      }
    }
  }
  else {
    iVar1 = *(int *)(*(long *)(param_1 + 0x300) + 0x18);
    if (iVar1 == 0x300c02b) {
      if (param_2 == 0x17) goto LAB_00103290;
    }
    else if ((param_2 == 0x18) && (iVar1 == 0x300c02c)) goto LAB_00103290;
  }
LAB_00103260:
  uVar2 = 0;
LAB_00103262:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void tls1_get_formatlist(long param_1,long *param_2,long *param_3)

{
  if (*(long *)(param_1 + 0xa70) != 0) {
    *param_2 = *(long *)(param_1 + 0xa70);
    *param_3 = *(long *)(param_1 + 0xa68);
    return;
  }
  *param_2 = (long)&ecformats_default;
  *param_3 = (ulong)((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) == 0) + 2;
  return;
}



ulong tls1_check_ec_tmp_key(long param_1,long param_2)

{
  short sVar1;
  ulong uVar2;
  
  if ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) == 0) {
    sVar1 = tls1_shared_group(param_1,0);
    return (ulong)(sVar1 != 0);
  }
  if (param_2 != 0x300c02b) {
    if (param_2 != 0x300c02c) {
      return 0;
    }
    uVar2 = tls1_check_group_id(param_1,0x18,1);
    return uVar2;
  }
  uVar2 = tls1_check_group_id(param_1,0x17,1);
  return uVar2;
}



undefined8 ssl_setup_sigalgs(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined *puVar6;
  char *s;
  char *s_00;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined4 uVar15;
  EVP_PKEY *pkey;
  undefined8 *ptr;
  long lVar16;
  EVP_PKEY_CTX *ctx;
  undefined8 *puVar17;
  undefined8 *puVar18;
  short *psVar19;
  long lVar20;
  undefined8 uVar21;
  ulong uVar22;
  undefined **ppuVar23;
  long local_50;
  
  uVar21 = 0;
  pkey = EVP_PKEY_new();
  ptr = param_1;
  if (param_1 != (undefined8 *)0x0) {
    uVar5 = *(uint *)(*(long *)(param_1[1] + 0xd8) + 0x50);
    uVar1 = param_1[0xd2] + 0x1f;
    ptr = (undefined8 *)CRYPTO_zalloc(uVar1 * 0x48,"ssl/t1_lib.c",0x88b);
    if (((ptr == (undefined8 *)0x0) || (pkey == (EVP_PKEY *)0x0)) ||
       (lVar16 = CRYPTO_zalloc(uVar1 * 2,"ssl/t1_lib.c",0x88f), lVar16 == 0)) {
      uVar21 = 0;
    }
    else {
      ERR_set_mark();
      ppuVar23 = &sigalg_lookup_tbl;
      puVar18 = ptr;
      do {
        puVar7 = ppuVar23[1];
        puVar8 = ppuVar23[2];
        puVar9 = ppuVar23[3];
        puVar10 = ppuVar23[4];
        puVar11 = ppuVar23[5];
        puVar12 = ppuVar23[6];
        puVar13 = ppuVar23[7];
        puVar6 = ppuVar23[8];
        iVar14 = *(int *)((long)ppuVar23 + 0x14);
        *puVar18 = *ppuVar23;
        puVar18[1] = puVar7;
        puVar18[2] = puVar8;
        puVar18[3] = puVar9;
        puVar18[8] = puVar6;
        puVar18[4] = puVar10;
        puVar18[5] = puVar11;
        puVar18[6] = puVar12;
        puVar18[7] = puVar13;
        if (((iVar14 == 0) || (param_1[(long)*(int *)(ppuVar23 + 3) + 0xae] != 0)) &&
           (iVar14 = EVP_PKEY_set_type(pkey,*(int *)((long)ppuVar23 + 0x1c)), iVar14 != 0)) {
          ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*param_1,pkey,param_1[0x8e]);
          if (ctx == (EVP_PKEY_CTX *)0x0) {
            *(undefined4 *)((long)puVar18 + 0x2c) = 0;
          }
          EVP_PKEY_CTX_free(ctx);
        }
        else {
          *(undefined4 *)((long)puVar18 + 0x2c) = 0;
        }
        ppuVar23 = ppuVar23 + 9;
        puVar18 = puVar18 + 9;
      } while (ppuVar23 != (undefined **)&DAT_00109698);
      if (param_1[0xd2] != 0) {
        uVar22 = 0;
        local_50 = 0;
        puVar18 = ptr + 0x117;
        do {
          puVar17 = (undefined8 *)(local_50 + param_1[0xd1]);
          iVar14 = 0;
          s_00 = (char *)puVar17[2];
          uVar21 = *puVar17;
          uVar3 = *(undefined2 *)(puVar17 + 1);
          s = (char *)puVar17[6];
          *(undefined2 *)(puVar18 + 2) = uVar3;
          *(undefined2 *)(lVar16 + 0x3e + uVar22 * 2) = uVar3;
          *puVar18 = uVar21;
          puVar18[1] = s_00;
          if (s != (char *)0x0) {
            iVar14 = OBJ_txt2nid(s);
          }
          *(int *)((long)puVar18 + 0x14) = iVar14;
          uVar15 = ssl_get_md_idx();
          *(undefined4 *)(puVar18 + 3) = uVar15;
          iVar14 = OBJ_txt2nid(s_00);
          *(int *)((long)puVar18 + 0x1c) = iVar14;
          iVar14 = (int)uVar22;
          uVar22 = uVar22 + 1;
          *(int *)(puVar18 + 4) = iVar14 + 9;
          iVar14 = OBJ_txt2nid(s_00);
          *(undefined4 *)(puVar18 + 5) = 0;
          *(int *)((long)puVar18 + 0x24) = iVar14;
          *(undefined4 *)((long)puVar18 + 0x34) = 0x304;
          *(undefined4 *)(puVar18 + 7) = 0x304;
          *(undefined4 *)((long)puVar18 + 0x3c) = 0xffffffff;
          *(undefined4 *)(puVar18 + 8) = 0xffffffff;
          *(uint *)((long)puVar18 + 0x2c) = (uVar5 >> 3 ^ 1) & 1;
          *(undefined4 *)(puVar18 + 6) = 0;
          local_50 = local_50 + 0x68;
          puVar18 = puVar18 + 9;
        } while (uVar22 < (ulong)param_1[0xd2]);
      }
      ERR_pop_to_mark();
      psVar19 = &tls12_sigalgs;
      lVar20 = 0;
      if (uVar1 == 0) {
        do {
          psVar19 = psVar19 + 1;
        } while (psVar19 != (short *)"/:?*-");
        lVar20 = 0;
      }
      else {
LAB_00103690:
        do {
          sVar4 = *psVar19;
          uVar22 = 0;
          puVar18 = ptr;
          do {
            if (*(short *)(puVar18 + 2) == sVar4) {
              if (*(int *)((long)puVar18 + 0x2c) == 0) {
                psVar19 = psVar19 + 1;
                if (psVar19 == (short *)"/:?*-") goto LAB_001036b9;
                goto LAB_00103690;
              }
              if (*(int *)(puVar18 + 6) == 0) {
                *(undefined4 *)(puVar18 + 6) = 1;
                psVar19 = psVar19 + 1;
                lVar2 = lVar20 + 1;
                *(short *)(lVar16 + lVar20 * 2) = sVar4;
                lVar20 = lVar2;
                if (psVar19 == (short *)"/:?*-") goto LAB_001036b9;
                goto LAB_00103690;
              }
              break;
            }
            uVar22 = uVar22 + 1;
            puVar18 = puVar18 + 9;
          } while (uVar1 != uVar22);
          psVar19 = psVar19 + 1;
        } while (psVar19 != (short *)"/:?*-");
LAB_001036b9:
        if (0x1f < uVar1) {
          puVar18 = ptr + 0x119;
          do {
            if ((*(int *)((long)puVar18 + 0x1c) != 0) && (*(int *)(puVar18 + 4) == 0)) {
              *(undefined2 *)(lVar16 + lVar20 * 2) = *(undefined2 *)puVar18;
              lVar20 = lVar20 + 1;
            }
            puVar18 = puVar18 + 9;
          } while (puVar18 != ptr + uVar1 * 9 + 2);
        }
      }
      param_1[0xcc] = ptr;
      uVar21 = 1;
      param_1[0xca] = uVar1;
      param_1[0xcd] = lVar16;
      param_1[0xcb] = lVar20;
      ptr = (undefined8 *)0x0;
    }
  }
  CRYPTO_free(ptr);
  CRYPTO_free((void *)0x0);
  EVP_PKEY_free(pkey);
  return uVar21;
}



char * SSL_get1_builtin_sigalgs(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  EVP_PKEY *pkey;
  char *__s;
  EVP_PKEY_CTX *ctx;
  size_t sVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined **ppuVar8;
  ulong local_48;
  
  pkey = EVP_PKEY_new();
  __s = (char *)CRYPTO_malloc(100,"ssl/t1_lib.c",0x8fc);
  if (__s == (char *)0x0) {
LAB_00103a01:
    __s = (char *)0x0;
  }
  else {
    ppuVar8 = &sigalg_lookup_tbl;
    *__s = '\0';
    local_48 = 100;
    do {
      while( true ) {
        ERR_set_mark();
        if (*(int *)((long)ppuVar8 + 0x14) == 0) break;
        pcVar5 = OBJ_nid2ln(*(int *)((long)ppuVar8 + 0x14));
        lVar6 = EVP_MD_fetch(param_1,pcVar5,0);
        if (lVar6 != 0) {
          EVP_MD_free(lVar6);
          break;
        }
LAB_0010391f:
        ERR_pop_to_mark();
        ppuVar8 = ppuVar8 + 9;
        if (ppuVar8 == (undefined **)&DAT_00109698) goto LAB_0010392d;
      }
      iVar2 = EVP_PKEY_set_type(pkey,*(int *)((long)ppuVar8 + 0x1c));
      if (iVar2 == 0) goto LAB_0010391f;
      ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_1,pkey,0);
      if (ctx == (EVP_PKEY_CTX *)0x0) {
        ERR_pop_to_mark();
        EVP_PKEY_CTX_free((EVP_PKEY_CTX *)0x0);
      }
      else {
        ERR_pop_to_mark();
        EVP_PKEY_CTX_free(ctx);
        pcVar5 = *ppuVar8;
        if (pcVar5 == (char *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/t1_lib.c",0x937,"SSL_get1_builtin_sigalgs");
          ERR_set_error(0x14,0xc0103,0);
        }
        else {
          sVar3 = strlen(pcVar5);
          sVar4 = strlen(__s);
          if (sVar3 + 1 + sVar4 < local_48) {
            cVar1 = *__s;
          }
          else {
            local_48 = local_48 + 100;
            pcVar7 = (char *)CRYPTO_realloc(__s,(int)local_48,"ssl/t1_lib.c",0x92b);
            if (pcVar7 == (char *)0x0) {
              CRYPTO_free(__s);
              goto LAB_00103a01;
            }
            cVar1 = *pcVar7;
            __s = pcVar7;
          }
          if (cVar1 != '\0') {
            OPENSSL_strlcat(__s,&_LC40,local_48);
          }
          OPENSSL_strlcat(__s,pcVar5,local_48);
        }
      }
      ppuVar8 = ppuVar8 + 9;
    } while (ppuVar8 != (undefined **)&DAT_00109698);
LAB_0010392d:
    EVP_PKEY_free(pkey);
  }
  return __s;
}



undefined8 tls1_lookup_md(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = 0;
  if (*(int *)(param_2 + 0x14) != 0) {
    lVar1 = ssl_md(param_1,*(undefined4 *)(param_2 + 0x18));
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar1;
  }
  return 1;
}



int sigalg_security_bits(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = tls1_lookup_md(param_1,param_2,&local_28);
  if (iVar1 != 0) {
    if (local_28 == 0) {
      iVar1 = 0x80;
      if ((*(short *)(param_2 + 0x10) == 0x807) ||
         (iVar1 = 0xe0, *(short *)(param_2 + 0x10) == 0x808)) goto LAB_00103b02;
      iVar1 = *(int *)(param_2 + 0x20);
      if ((8 < iVar1) && (iVar1 + -8 <= *(int *)(param_1 + 0x690))) {
        iVar1 = *(int *)(*(long *)(param_1 + 0x688) + (long)iVar1 * 0x68 + -0x358);
        goto LAB_00103b02;
      }
    }
    else {
      iVar2 = EVP_MD_get_type();
      iVar1 = EVP_MD_get_size(local_28);
      iVar1 = iVar1 << 2;
      if (0 < iVar1) {
        if (iVar2 == 0x40) {
          iVar1 = 0x40;
        }
        else if (iVar2 == 0x72) {
          iVar1 = 0x43;
        }
        else if (iVar2 == 4) {
          iVar1 = 0x27;
        }
        goto LAB_00103b02;
      }
    }
  }
  iVar1 = 0;
LAB_00103b02:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



undefined8 tls12_get_psigalgs(long param_1,int param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = *(long *)(param_1 + 0x880);
  uVar3 = *(uint *)(lVar1 + 0x1c) & 0x30000;
  if (uVar3 == 0x20000) {
    *param_3 = 0x108b84;
    return 1;
  }
  if (uVar3 == 0x30000) {
    *param_3 = (long)&suiteb_sigalgs;
    return 2;
  }
  if (uVar3 == 0x10000) {
    *param_3 = (long)&suiteb_sigalgs;
    return 1;
  }
  if ((*(int *)(param_1 + 0x78) == param_2) && (*(long *)(lVar1 + 0x50) != 0)) {
    *param_3 = *(long *)(lVar1 + 0x50);
    return *(undefined8 *)(lVar1 + 0x58);
  }
  if (*(long *)(lVar1 + 0x40) != 0) {
    *param_3 = *(long *)(lVar1 + 0x40);
    return *(undefined8 *)(lVar1 + 0x48);
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x658);
  *param_3 = *(long *)(*(long *)(param_1 + 8) + 0x668);
  return uVar2;
}



undefined4 tls_check_sigalg_curve(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x880) + 0x40);
  if (lVar6 == 0) {
    lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x668);
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x658);
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x880) + 0x48);
  }
  if (lVar5 != 0) {
    lVar4 = 0;
    lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x650);
    if (lVar1 == 0) {
      do {
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
    else {
LAB_00103c60:
      do {
        lVar3 = 0;
        lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x660);
        do {
          if (*(short *)(lVar2 + 0x10) == *(short *)(lVar6 + lVar4 * 2)) {
            if (*(int *)(lVar2 + 0x2c) == 0) {
              lVar4 = lVar4 + 1;
              if (lVar5 == lVar4) {
                return 0;
              }
              goto LAB_00103c60;
            }
            if (((*(int *)(lVar2 + 0x1c) == 0x198) && (*(int *)(lVar2 + 0x28) != 0)) &&
               (*(int *)(lVar2 + 0x28) == param_2)) {
              return 1;
            }
            break;
          }
          lVar3 = lVar3 + 1;
          lVar2 = lVar2 + 0x48;
        } while (lVar3 != lVar1);
        lVar4 = lVar4 + 1;
      } while (lVar5 != lVar4);
    }
  }
  return 0;
}



undefined8 SSL_get_peer_signature_type_nid(uint *param_1,undefined4 *param_2)

{
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if ((*param_1 & 0x80) == 0) {
      return 0;
    }
    param_1 = (uint *)ossl_quic_obj_get0_handshake_layer();
    if (param_1 == (uint *)0x0) {
      return 0;
    }
  }
  if (*(long *)(param_1 + 0x100) == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x1c);
  return 1;
}



undefined8 SSL_get_signature_type_nid(uint *param_1,undefined4 *param_2)

{
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if ((*param_1 & 0x80) == 0) {
      return 0;
    }
    param_1 = (uint *)ossl_quic_obj_get0_handshake_layer();
    if (param_1 == (uint *)0x0) {
      return 0;
    }
  }
  if (*(long *)(param_1 + 0xf4) == 0) {
    return 0;
  }
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0xf4) + 0x1c);
  return 1;
}



bool ssl_cipher_disabled(long param_1,SSL_CIPHER *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
    iVar3 = *(int *)((long)&param_2->algorithm_enc + 4);
    uVar4 = (undefined4)param_2->algorithm_mac;
  }
  else {
    iVar3 = *(int *)((long)&param_2->algorithm_mac + 4);
    uVar4 = (undefined4)param_2->algorithm_ssl;
  }
  if ((((*(uint *)((long)&param_2->algorithm_mkey + 4) & *(uint *)(param_1 + 0x410)) == 0) &&
      (((uint)param_2->algorithm_auth & *(uint *)(param_1 + 0x414)) == 0)) &&
     (iVar1 = *(int *)(param_1 + 0x41c), iVar1 != 0)) {
    if ((*(byte *)(param_1 + 0x161) & 0x40) != 0) {
      uVar2 = SSL_CIPHER_get_id(param_2);
      if (2 < (int)uVar2 + 0xfcffecffU) {
        return true;
      }
      iVar1 = *(int *)(param_1 + 0x41c);
    }
    if ((iVar3 == 0x301) && (param_4 != 0)) {
      iVar3 = ((param_2->algorithm_mkey & 0x8400000000) == 0) + 0x300;
    }
    iVar3 = ssl_version_cmp(param_1,iVar3,iVar1);
    if ((iVar3 < 1) &&
       (iVar3 = ssl_version_cmp(param_1,uVar4,*(undefined4 *)(param_1 + 0x418)), -1 < iVar3)) {
      iVar3 = ssl_security(param_1,param_3,*(undefined4 *)((long)&param_2->algo_strength + 4),0,
                           param_2);
      return iVar3 == 0;
    }
  }
  return true;
}



undefined8 tls12_sigalg_allowed(SSL *param_1,undefined4 param_2,long param_3)

{
  BIO *pBVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  stack_st_SSL_CIPHER *psVar7;
  long lVar8;
  long in_FS_OFFSET;
  ushort local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 == 0) || (*(int *)(param_3 + 0x2c) == 0)) goto LAB_00103fb0;
  if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) {
    iVar2 = *(int *)&param_1->wbio->method;
    if ((iVar2 < 0x304) || (iVar2 == 0x10000)) {
      if ((*(int *)&param_1->s2 != 0) || (*(int *)&param_1[1].psk_client_callback < 0x304))
      goto LAB_00103ee0;
      if (*(int *)(param_3 + 0x1c) != 0x74) goto LAB_00103f9a;
    }
    else if (*(int *)(param_3 + 0x1c) != 0x74) {
      if ((*(int *)&param_1->s2 == 0) && (0x303 < *(int *)&param_1[1].psk_client_callback)) {
LAB_00103f9a:
        if ((*(uint *)(param_3 + 0x18) == 10) || (*(uint *)(param_3 + 0x18) < 2)) goto LAB_00103fb0;
      }
      goto LAB_00103ee0;
    }
  }
  else {
LAB_00103ee0:
    iVar2 = ssl_cert_is_disabled(param_1->method,(long)*(int *)(param_3 + 0x20));
    if (iVar2 == 0) {
      if ((1 < *(int *)(param_3 + 0x1c) - 0x3d3U) && (*(int *)(param_3 + 0x1c) != 0x32b)) {
LAB_00103f40:
        uVar3 = sigalg_security_bits(param_1->method,param_3);
        local_42 = *(ushort *)(param_3 + 0x10) << 8 | *(ushort *)(param_3 + 0x10) >> 8;
        uVar6 = ssl_security(param_1,param_2,uVar3,*(undefined4 *)(param_3 + 0x14),&local_42);
        goto LAB_00103fb2;
      }
      pBVar1 = param_1->wbio;
      if (*(int *)&param_1->s2 == 0) {
        if ((*(int *)&pBVar1->method != 0x10000) ||
           (*(int *)((long)&param_1[1].psk_client_callback + 4) < 0x304)) goto LAB_00103f40;
        if ((*(int *)&param_1[1].psk_client_callback < 0x304) &&
           (psVar7 = SSL_get_ciphers(param_1), psVar7 != (stack_st_SSL_CIPHER *)0x0)) {
          iVar4 = OPENSSL_sk_num(psVar7);
          iVar2 = 0;
          if (iVar4 < 1) {
LAB_00104096:
            if (iVar4 != iVar2) goto LAB_00103f40;
          }
          else {
            do {
              lVar8 = OPENSSL_sk_value(psVar7,iVar2);
              iVar5 = ssl_cipher_disabled(param_1,lVar8,0x10001,0);
              if ((iVar5 == 0) && ((*(uint *)(lVar8 + 0x1c) & 0x210) != 0)) goto LAB_00104096;
              iVar2 = iVar2 + 1;
            } while (iVar4 != iVar2);
          }
        }
      }
      else if ((((*(byte *)(*(long *)&pBVar1[1].ex_data.dummy + 0x50) & 8) != 0) ||
               (*(int *)&pBVar1->method == 0x10000)) || (*(int *)&pBVar1->method < 0x304))
      goto LAB_00103f40;
    }
  }
LAB_00103fb0:
  uVar6 = 0;
LAB_00103fb2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



undefined1 * tls1_get_legacy_sigalg(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  short sVar4;
  undefined1 *puVar5;
  
  iVar1 = (int)param_2;
  param_2 = param_2 & 0xffffffff;
  if (iVar1 == -1) {
    if (*(int *)(param_1 + 0x78) == 0) {
      param_2 = (**(long **)(param_1 + 0x880) - (*(long **)(param_1 + 0x880))[4] >> 3) *
                -0x3333333333333333;
      iVar1 = (int)param_2;
      goto LAB_001040c4;
    }
    if (*(long *)(param_1 + 0x118) == 0) {
      return (undefined1 *)0x0;
    }
    param_2 = 0;
    while ((lVar3 = ssl_cert_lookup_by_idx(param_2,*(undefined8 *)(param_1 + 8)), lVar3 == 0 ||
           ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & *(uint *)(lVar3 + 4)) == 0))) {
      param_2 = param_2 + 1;
      if (*(ulong *)(param_1 + 0x118) <= param_2) {
        return (undefined1 *)0x0;
      }
    }
    iVar1 = (int)param_2;
    if (iVar1 != 4) {
      if (iVar1 == 5) {
        sVar4 = 0x841 - (ushort)(*(long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) + 0xf8) == 0
                                );
        goto LAB_001040f4;
      }
      goto LAB_001040c4;
    }
    sVar4 = -0x1213;
    if (*(int *)(*(long *)(param_1 + 0x300) + 0x20) == 0x20) goto LAB_001040f4;
    lVar3 = *(long *)(*(long *)(param_1 + 0x880) + 0x20);
    if (*(long *)(lVar3 + 0xf8) == 0) {
      if (*(long *)(lVar3 + 0xd0) != 0) {
        iVar1 = 5;
      }
    }
    else {
      iVar1 = 6;
    }
  }
  else {
LAB_001040c4:
    if (8 < (uint)param_2) {
      return (undefined1 *)0x0;
    }
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) == 0 &&
        (uint)param_2 == 0) {
      puVar5 = legacy_rsa_sigalg;
LAB_00104138:
      iVar1 = tls12_sigalg_allowed(param_1,0x5000b,puVar5);
      if (iVar1 == 0) {
        return (undefined1 *)0x0;
      }
      return puVar5;
    }
  }
  sVar4 = *(short *)(tls_default_sigalg + (long)iVar1 * 2);
LAB_001040f4:
  lVar3 = *(long *)(param_1 + 8);
  puVar5 = *(undefined1 **)(lVar3 + 0x660);
  if (*(long *)(lVar3 + 0x650) != 0) {
    lVar2 = 0;
    do {
      if (*(short *)(puVar5 + 0x10) == sVar4) {
        if (*(int *)(puVar5 + 0x2c) == 0) {
          return (undefined1 *)0x0;
        }
        iVar1 = tls1_lookup_md(lVar3,puVar5,0);
        if (iVar1 == 0) {
          return (undefined1 *)0x0;
        }
        goto LAB_00104138;
      }
      lVar2 = lVar2 + 1;
      puVar5 = puVar5 + 0x48;
    } while (lVar2 != *(long *)(lVar3 + 0x650));
  }
  return (undefined1 *)0x0;
}



undefined8 tls1_set_peer_legacy_sigalg(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_18 [2];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = ssl_cert_lookup_by_pkey(param_2,local_18,*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar1 = tls1_get_legacy_sigalg(param_1,local_18[0]);
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x400) = lVar1;
      uVar2 = 1;
      goto LAB_001042bc;
    }
  }
  uVar2 = 0;
LAB_001042bc:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool tls_sigalg_compat(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x2c) == 0) {
    return false;
  }
  iVar3 = **(int **)(param_1 + 0x18);
  if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
    if (iVar3 == 0x10000) {
      iVar3 = *(int *)(param_1 + 0x9bc);
      iVar4 = *(int *)(param_1 + 0x9c0);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x48);
      iVar4 = iVar3;
    }
    iVar1 = *(int *)(param_2 + 0x34);
    iVar2 = *(int *)(param_2 + 0x38);
  }
  else {
    if (iVar3 == 0x1ffff) {
      iVar3 = *(int *)(param_1 + 0x9bc);
      iVar4 = *(int *)(param_1 + 0x9c0);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x48);
      iVar4 = iVar3;
    }
    iVar1 = *(int *)(param_2 + 0x3c);
    iVar2 = *(int *)(param_2 + 0x40);
  }
  if ((((iVar1 != -1) && (iVar2 != -1)) &&
      ((iVar1 == 0 || ((iVar4 == 0 || (iVar4 = ssl_version_cmp(param_1), iVar4 < 1)))))) &&
     ((iVar2 == 0 || ((iVar3 == 0 || (iVar3 = ssl_version_cmp(param_1,iVar2,iVar3), -1 < iVar3))))))
  {
    iVar3 = tls12_sigalg_allowed(param_1,0x5000b,param_2);
    return iVar3 != 0;
  }
  return false;
}



long tls12_shared_sigalgs
               (long param_1,long *param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_48;
  long *local_40;
  
  if (param_4 == 0) {
    return 0;
  }
  local_48 = 0;
  lVar5 = 0;
  local_40 = param_2;
LAB_00104443:
  do {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x650);
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x660);
    if (lVar3 == 0) {
      return local_48;
    }
    lVar2 = 0;
    do {
      if (*(short *)(param_3 + lVar5 * 2) == *(short *)(lVar4 + 0x10)) {
        if (((*(int *)(lVar4 + 0x2c) == 0) ||
            (iVar1 = tls12_sigalg_allowed(param_1,0x5000c,lVar4), iVar1 == 0)) || (param_6 == 0))
        goto LAB_001044a0;
        lVar3 = 0;
        goto LAB_001044e9;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x48;
    } while (lVar2 != lVar3);
    lVar5 = lVar5 + 1;
    if (param_4 == lVar5) {
      return local_48;
    }
  } while( true );
  while (lVar3 = lVar3 + 1, param_6 != lVar3) {
LAB_001044e9:
    if (*(short *)(param_3 + lVar5 * 2) == *(short *)(param_5 + lVar3 * 2)) {
      local_48 = local_48 + 1;
      if (local_40 != (long *)0x0) {
        *local_40 = lVar4;
        local_40 = local_40 + 1;
      }
      break;
    }
  }
LAB_001044a0:
  lVar5 = lVar5 + 1;
  if (param_4 == lVar5) {
    return local_48;
  }
  goto LAB_00104443;
}



undefined8 tls_use_ticket(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x9b1) & 0x40) != 0) {
    return 0;
  }
  uVar1 = ssl_security(param_1,10,0,0,0);
  return uVar1;
}



void ssl_set_sig_mask(uint *param_1,long param_2,undefined4 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  short *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = tls12_get_psigalgs(param_2,1,&local_48);
  if (lVar2 == 0) {
    uVar6 = 0xb;
  }
  else {
    uVar6 = 0xb;
    lVar7 = 0;
LAB_001045a8:
    lVar4 = *(long *)(param_2 + 8);
    do {
      lVar5 = *(long *)(lVar4 + 0x660);
      if (*(long *)(lVar4 + 0x650) == 0) break;
      lVar3 = 0;
      do {
        if (*local_48 == *(short *)(lVar5 + 0x10)) {
          if ((((*(int *)(lVar5 + 0x2c) != 0) &&
               (lVar4 = ssl_cert_lookup_by_idx((long)*(int *)(lVar5 + 0x20),lVar4), lVar4 != 0)) &&
              ((uVar6 & *(uint *)(lVar4 + 4)) != 0)) &&
             (iVar1 = tls12_sigalg_allowed(param_2,param_3,lVar5), iVar1 != 0)) {
            uVar6 = uVar6 & ~*(uint *)(lVar4 + 4);
          }
          local_48 = local_48 + 1;
          lVar7 = lVar7 + 1;
          if (lVar2 != lVar7) goto LAB_001045a8;
          goto LAB_00104620;
        }
        lVar3 = lVar3 + 1;
        lVar5 = lVar5 + 0x48;
      } while (lVar3 != *(long *)(lVar4 + 0x650));
      local_48 = local_48 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar2 != lVar7);
  }
LAB_00104620:
  *param_1 = *param_1 | uVar6;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 ssl_set_client_disabled(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x410) = 0;
  ssl_set_sig_mask(param_1 + 0x414,param_1,0x5000e);
  iVar2 = ssl_get_min_max_version(param_1,param_1 + 0x418,param_1 + 0x41c,0);
  uVar3 = 0;
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 0x970) == 0) {
      *(ulong *)(param_1 + 0x410) = *(ulong *)(param_1 + 0x410) | _LC41;
      bVar1 = *(byte *)(param_1 + 0xc48);
    }
    else {
      bVar1 = *(byte *)(param_1 + 0xc48);
    }
    if ((bVar1 & 0x20) == 0) {
      *(ulong *)(param_1 + 0x410) = *(ulong *)(param_1 + 0x410) | _LC42;
    }
    uVar3 = 1;
  }
  return uVar3;
}



bool tls12_copy_sigalgs(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  
  if (param_4 != 0) {
    bVar5 = false;
    lVar6 = 0;
LAB_00104780:
    while( true ) {
      lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x650);
      lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x660);
      if (lVar1 == 0) break;
      lVar3 = 0;
      do {
        if (*(short *)(param_3 + lVar6 * 2) == *(short *)(lVar4 + 0x10)) {
          if ((*(int *)(lVar4 + 0x2c) != 0) &&
             (iVar2 = tls_sigalg_compat(param_1,lVar4), iVar2 != 0)) {
            iVar2 = WPACKET_put_bytes__(param_2,*(undefined2 *)(param_3 + lVar6 * 2),2);
            if (iVar2 == 0) {
              return false;
            }
            if (bVar5 == false) {
              if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                  (iVar2 = **(int **)(param_1 + 0x18), iVar2 != 0x10000)) && (0x303 < iVar2)) {
                if (*(int *)(lVar4 + 0x1c) != 6) {
                  bVar5 = *(int *)(lVar4 + 0x14) != 0x40 && *(int *)(lVar4 + 0x14) != 0x2a3;
                }
              }
              else {
                bVar5 = true;
              }
            }
          }
          lVar6 = lVar6 + 1;
          if (param_4 == lVar6) goto LAB_0010482d;
          goto LAB_00104780;
        }
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x48;
      } while (lVar3 != lVar1);
      lVar6 = lVar6 + 1;
      if (param_4 == lVar6) {
        if (bVar5 != false) {
          return bVar5;
        }
        goto LAB_0010485a;
      }
    }
LAB_0010482d:
    if (bVar5 != false) {
      return bVar5;
    }
  }
LAB_0010485a:
  ERR_new();
  ERR_set_debug("ssl/t1_lib.c",0xd7f,"tls12_copy_sigalgs");
  ERR_set_error(0x14,0x76,0);
  return false;
}



undefined8 tls1_save_u16(undefined8 *param_1,undefined8 *param_2,ulong *param_3)

{
  ushort uVar1;
  uint uVar2;
  void *ptr;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = (ulong)((uint)uVar3 & 1);
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar3 >> 1;
      ptr = CRYPTO_malloc((uint)uVar3 & 0xfffffffe,"ssl/t1_lib.c",0xddb);
      if (ptr != (void *)0x0) {
        if (uVar5 != 0) {
          uVar3 = param_1[1];
          uVar2 = (uint)uVar3;
          do {
            if ((uVar2 & 1) == uVar3) {
              if (uVar5 != uVar4) {
                CRYPTO_free(ptr);
                return 0;
              }
              break;
            }
            uVar3 = uVar3 - 2;
            uVar1 = *(ushort *)*param_1;
            param_1[1] = uVar3;
            *param_1 = (ushort *)*param_1 + 1;
            *(ushort *)((long)ptr + uVar4 * 2) = uVar1 << 8 | uVar1 >> 8;
            uVar4 = uVar4 + 1;
          } while (uVar5 != uVar4);
        }
        CRYPTO_free((void *)*param_2);
        *param_2 = ptr;
        *param_3 = uVar5;
        return 1;
      }
    }
  }
  return 0;
}



undefined8 tls1_save_sigalgs(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) == 0) {
    return 1;
  }
  if (*(long *)(param_1 + 0x880) != 0) {
    if (param_3 != 0) {
      uVar1 = tls1_save_u16(param_2,param_1 + 1000,param_1 + 0x3f8);
      return uVar1;
    }
    uVar1 = tls1_save_u16(param_2,param_1 + 0x3e0,param_1 + 0x3f0);
    return uVar1;
  }
  return 0;
}



undefined8 tls1_process_sigalgs(long param_1)

{
  int *piVar1;
  void *__s;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  lVar6 = *(long *)(param_1 + 0x880);
  __s = *(void **)(param_1 + 0x408);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = *(uint *)(lVar6 + 0x1c);
  CRYPTO_free(*(void **)(param_1 + 0x1588));
  *(undefined8 *)(param_1 + 0x1588) = 0;
  *(undefined8 *)(param_1 + 0x1590) = 0;
  uVar8 = uVar8 & 0x30000;
  if ((*(int *)(param_1 + 0x78) == 0) && (lVar9 = *(long *)(lVar6 + 0x50), lVar9 != 0)) {
    if (uVar8 == 0) {
      local_50 = *(undefined8 *)(lVar6 + 0x58);
      local_48 = lVar9;
      if ((*(byte *)(param_1 + 0x9b2) & 0x40) == 0) goto LAB_00104b94;
    }
    else {
      local_50 = tls12_get_psigalgs(param_1,0,&local_48);
    }
LAB_00104ae0:
    uVar4 = local_50;
    lVar9 = *(long *)(param_1 + 0x3e0);
    lVar6 = local_48;
    local_50 = *(undefined8 *)(param_1 + 0x3f0);
  }
  else {
    lVar9 = *(long *)(lVar6 + 0x40);
    if ((lVar9 == 0) || (uVar8 != 0)) {
      local_50 = tls12_get_psigalgs(param_1,0,&local_48);
      if (((*(byte *)(param_1 + 0x9b2) & 0x40) == 0) && (uVar8 == 0)) goto LAB_00104b94;
      goto LAB_00104ae0;
    }
    local_50 = *(undefined8 *)(lVar6 + 0x48);
    local_48 = lVar9;
    if ((*(byte *)(param_1 + 0x9b2) & 0x40) != 0) goto LAB_00104ae0;
LAB_00104b94:
    uVar4 = *(undefined8 *)(param_1 + 0x3f0);
    lVar6 = *(long *)(param_1 + 0x3e0);
    lVar9 = local_48;
  }
  lVar3 = tls12_shared_sigalgs(param_1,0,lVar6,uVar4,lVar9,local_50);
  if (lVar3 == 0) {
    *(undefined8 *)(param_1 + 0x1588) = 0;
    *(undefined8 *)(param_1 + 0x1590) = 0;
    if (*(long *)(param_1 + 0x118) != 0) {
      memset(__s,0,*(long *)(param_1 + 0x118) << 2);
    }
  }
  else {
    pvVar5 = CRYPTO_malloc((int)lVar3 * 8,"ssl/t1_lib.c",0xdc2);
    if (pvVar5 == (void *)0x0) {
      uVar4 = 0;
      goto LAB_00104b47;
    }
    lVar6 = tls12_shared_sigalgs(param_1,pvVar5,lVar6,uVar4,lVar9,local_50);
    *(void **)(param_1 + 0x1588) = pvVar5;
    *(long *)(param_1 + 0x1590) = lVar6;
    if (*(long *)(param_1 + 0x118) != 0) {
      memset(__s,0,*(long *)(param_1 + 0x118) << 2);
    }
    if (lVar6 != 0) {
      uVar7 = 0;
      while( true ) {
        lVar6 = *(long *)((long)pvVar5 + uVar7 * 8);
        if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
              (iVar2 = **(int **)(param_1 + 0x18), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
            (*(int *)(lVar6 + 0x1c) != 6)) &&
           ((piVar1 = (int *)((long)__s + (long)*(int *)(lVar6 + 0x20) * 4), *piVar1 == 0 &&
            (iVar2 = ssl_cert_is_disabled(*(undefined8 *)(param_1 + 8)), iVar2 == 0)))) {
          *piVar1 = 0x102;
        }
        uVar7 = uVar7 + 1;
        if (*(ulong *)(param_1 + 0x1590) <= uVar7) break;
        pvVar5 = *(void **)(param_1 + 0x1588);
      }
    }
  }
  uVar4 = 1;
LAB_00104b47:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 tls1_set_server_sigalgs(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  CRYPTO_free(*(void **)(param_1 + 0x1588));
  *(undefined8 *)(param_1 + 0x1588) = 0;
  *(undefined8 *)(param_1 + 0x1590) = 0;
  if (*(void **)(param_1 + 0x408) == (void *)0x0) {
    lVar3 = CRYPTO_zalloc(*(long *)(param_1 + 0x118) * 4,"ssl/t1_lib.c",0xb85);
    *(long *)(param_1 + 0x408) = lVar3;
  }
  else {
    memset(*(void **)(param_1 + 0x408),0,*(long *)(param_1 + 0x118) * 4);
    lVar3 = *(long *)(param_1 + 0x408);
  }
  if (lVar3 == 0) {
    uVar2 = 0;
    goto LAB_00104db3;
  }
  if ((*(long *)(param_1 + 1000) == 0) && (*(long *)(param_1 + 0x3e0) == 0)) {
    uVar6 = 0;
    lVar3 = tls12_get_psigalgs(param_1,1,&local_28);
    if (*(long *)(param_1 + 0x118) != 0) {
      do {
        lVar4 = tls1_get_legacy_sigalg(param_1,uVar6 & 0xffffffff);
        if ((lVar4 != 0) && (lVar3 != 0)) {
          lVar5 = 0;
          do {
            if (*(short *)(lVar4 + 0x10) == *(short *)(local_28 + lVar5 * 2)) {
              *(undefined4 *)(*(long *)(param_1 + 0x408) + uVar6 * 4) = 2;
              break;
            }
            lVar5 = lVar5 + 1;
          } while (lVar3 != lVar5);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(param_1 + 0x118));
    }
  }
  else {
    iVar1 = tls1_process_sigalgs(param_1);
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("ssl/t1_lib.c",0xba3,"tls1_set_server_sigalgs");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      uVar2 = 0;
      goto LAB_00104db3;
    }
    if (*(long *)(param_1 + 0x1588) == 0) {
      ERR_new();
      ERR_set_debug("ssl/t1_lib.c",0xbaa,"tls1_set_server_sigalgs");
      ossl_statem_fatal(param_1,0x28,0x178,0);
      uVar2 = 0;
      goto LAB_00104db3;
    }
  }
  uVar2 = 1;
LAB_00104db3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong SSL_get_sigalgs(uint *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                     undefined4 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  short *psVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) ||
     (((*param_1 & 0x80) != 0 &&
      (param_1 = (uint *)ossl_quic_obj_get0_handshake_layer(), param_1 != (uint *)0x0)))) {
    uVar2 = *(ulong *)(param_1 + 0xfc);
    if ((*(long *)(param_1 + 0xf8) != 0) && (uVar2 < 0x80000000)) {
      uVar6 = uVar2 & 0xffffffff;
      if (param_2 < 0) {
        return uVar6;
      }
      if (param_2 < (int)uVar2) {
        psVar1 = (short *)(*(long *)(param_1 + 0xf8) + (long)param_2 * 2);
        if (param_7 != (undefined1 *)0x0) {
          *param_7 = (char)((ushort)*psVar1 >> 8);
        }
        if (param_6 != (undefined1 *)0x0) {
          *param_6 = (char)*psVar1;
        }
        lVar3 = *(long *)(*(long *)(param_1 + 2) + 0x650);
        lVar5 = *(long *)(*(long *)(param_1 + 2) + 0x660);
        if (lVar3 != 0) {
          lVar7 = 0;
          do {
            if (*psVar1 == *(short *)(lVar5 + 0x10)) {
              if (*(int *)(lVar5 + 0x2c) != 0) {
                if (param_3 != (undefined4 *)0x0) {
                  *param_3 = *(undefined4 *)(lVar5 + 0x1c);
                }
                if (param_4 != (undefined4 *)0x0) {
                  *param_4 = *(undefined4 *)(lVar5 + 0x14);
                }
                if (param_5 == (undefined4 *)0x0) {
                  return uVar6;
                }
                uVar4 = *(undefined4 *)(lVar5 + 0x24);
                goto LAB_0010500b;
              }
              break;
            }
            lVar7 = lVar7 + 1;
            lVar5 = lVar5 + 0x48;
          } while (lVar7 != lVar3);
        }
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = 0;
        }
        if (param_4 == (undefined4 *)0x0) {
          if (param_5 == (undefined4 *)0x0) {
            return uVar6;
          }
          uVar4 = 0;
        }
        else {
          *param_4 = 0;
          if (param_5 == (undefined4 *)0x0) {
            return uVar6;
          }
          uVar4 = 0;
        }
LAB_0010500b:
        *param_5 = uVar4;
        return uVar6;
      }
    }
  }
  return 0;
}



uint SSL_get_shared_sigalgs
               (uint *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5,undefined1 *param_6,undefined1 *param_7)

{
  long lVar1;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if ((*param_1 & 0x80) == 0) {
      return 0;
    }
    param_1 = (uint *)ossl_quic_obj_get0_handshake_layer();
    if (param_1 == (uint *)0x0) {
      return 0;
    }
  }
  if ((((*(long *)(param_1 + 0x562) != 0) && (-1 < param_2)) &&
      (*(ulong *)(param_1 + 0x564) < 0x80000000)) && (param_2 < (int)*(ulong *)(param_1 + 0x564))) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x562) + (long)param_2 * 8);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + 0x14);
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(lVar1 + 0x1c);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(lVar1 + 0x24);
    }
    if (param_6 != (undefined1 *)0x0) {
      *param_6 = (char)*(undefined2 *)(lVar1 + 0x10);
    }
    if (param_7 != (undefined1 *)0x0) {
      *param_7 = *(undefined1 *)(lVar1 + 0x11);
    }
    return param_1[0x564];
  }
  return 0;
}



undefined8 tls1_set_raw_sigalgs(long param_1,void *param_2,long param_3,int param_4)

{
  void *__dest;
  undefined8 uVar1;
  
  __dest = CRYPTO_malloc((int)(param_3 * 2),"ssl/t1_lib.c",0xeff);
  if (__dest == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    memcpy(__dest,param_2,param_3 * 2);
    if (param_4 == 0) {
      CRYPTO_free(*(void **)(param_1 + 0x40));
      *(void **)(param_1 + 0x40) = __dest;
      *(long *)(param_1 + 0x48) = param_3;
    }
    else {
      CRYPTO_free(*(void **)(param_1 + 0x50));
      *(void **)(param_1 + 0x50) = __dest;
      *(long *)(param_1 + 0x58) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}



undefined8 tls1_set_sigalgs_list(long param_1,long param_2,char *param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_b8;
  undefined1 local_b0 [128];
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = 0;
  if (param_1 != 0) {
    local_30 = param_1;
  }
  iVar1 = CONF_parse_list(param_3,0x3a,1,sig_cb,&local_b8);
  if (iVar1 != 0) {
    if (local_b8 != 0) {
      uVar2 = 1;
      if (param_2 != 0) {
        uVar2 = tls1_set_raw_sigalgs(param_2,local_b0,local_b8,param_4);
      }
      goto LAB_00105287;
    }
    ERR_new();
    ERR_set_debug("ssl/t1_lib.c",0xef1,"tls1_set_sigalgs_list");
    ERR_set_error(0x14,0x80106,"No valid signature algorithms in \'%s\'",param_3);
  }
  uVar2 = 0;
LAB_00105287:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tls1_set_sigalgs(long param_1,long param_2,ulong param_3,int param_4)

{
  void *ptr;
  undefined **ppuVar1;
  ulong uVar2;
  
  uVar2 = (ulong)((uint)param_3 & 1);
  if (((param_3 & 1) == 0) &&
     (ptr = CRYPTO_malloc((uint)param_3 & 0xfffffffe,"ssl/t1_lib.c",0xf17), ptr != (void *)0x0)) {
    if (param_3 != 0) {
      do {
        ppuVar1 = &sigalg_lookup_tbl;
        while ((*(int *)((long)ppuVar1 + 0x14) != *(int *)(param_2 + uVar2 * 4) ||
               (*(int *)((long)ppuVar1 + 0x1c) != *(int *)(param_2 + 4 + uVar2 * 4)))) {
          ppuVar1 = ppuVar1 + 9;
          if (ppuVar1 == (undefined **)&DAT_00109698) {
            CRYPTO_free(ptr);
            return 0;
          }
        }
        *(undefined2 *)((long)ptr + uVar2) = *(undefined2 *)(ppuVar1 + 2);
        uVar2 = uVar2 + 2;
      } while (uVar2 < param_3);
    }
    if (param_4 == 0) {
      CRYPTO_free(*(void **)(param_1 + 0x40));
      *(void **)(param_1 + 0x40) = ptr;
      *(ulong *)(param_1 + 0x48) = param_3 >> 1;
    }
    else {
      CRYPTO_free(*(void **)(param_1 + 0x50));
      *(void **)(param_1 + 0x50) = ptr;
      *(ulong *)(param_1 + 0x58) = param_3 >> 1;
    }
    return 1;
  }
  return 0;
}



long ssl_get_auto_dh(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  BIGNUM *a;
  EVP_PKEY_CTX *ctx;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  if (*(int *)(*(long *)(param_1 + 0x880) + 0x18) == 2) {
    iVar2 = 0x50;
  }
  else if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0x14) == 0) {
    lVar5 = *(long *)(param_1 + 0x3d8);
    if (lVar5 == 0) goto LAB_00105564;
    iVar2 = EVP_PKEY_get_security_bits(*(undefined8 *)(lVar5 + 8));
  }
  else {
    iVar2 = 0x50;
    if (*(int *)(*(long *)(param_1 + 0x300) + 0x44) == 0x100) {
      iVar2 = 0x80;
    }
  }
  iVar3 = ssl_get_security_level_bits(param_1,0,0);
  if (iVar3 <= iVar2) {
    iVar3 = iVar2;
  }
  if (iVar3 < 0xc0) {
    if (0x97 < iVar3) {
      a = (BIGNUM *)BN_get_rfc3526_prime_4096();
      goto LAB_00105508;
    }
    if (0x7f < iVar3) {
      a = (BIGNUM *)BN_get_rfc3526_prime_3072();
      goto LAB_00105508;
    }
    if (iVar3 < 0x70) {
      a = (BIGNUM *)BN_get_rfc2409_prime_1024();
      goto LAB_00105508;
    }
    a = (BIGNUM *)BN_get_rfc3526_prime_2048();
    if (a != (BIGNUM *)0x0) goto LAB_0010550d;
LAB_001054d0:
    lVar4 = 0;
    ctx = (EVP_PKEY_CTX *)0x0;
    lVar5 = 0;
  }
  else {
    a = (BIGNUM *)BN_get_rfc3526_prime_8192(0);
LAB_00105508:
    if (a == (BIGNUM *)0x0) goto LAB_001054d0;
LAB_0010550d:
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(*puVar1,&_LC44,puVar1[0x8e]);
    if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_001054d0;
    lVar4 = 0;
    iVar2 = EVP_PKEY_fromdata_init(ctx);
    lVar5 = 0;
    if ((((iVar2 == 1) && (lVar4 = OSSL_PARAM_BLD_new(), lVar4 != 0)) &&
        (iVar2 = OSSL_PARAM_BLD_push_BN(lVar4,&_LC45,a), lVar5 = 0, iVar2 != 0)) &&
       ((iVar2 = OSSL_PARAM_BLD_push_uint(lVar4,&_LC46,2), iVar2 != 0 &&
        (lVar5 = OSSL_PARAM_BLD_to_param(lVar4), lVar5 != 0)))) {
      EVP_PKEY_fromdata(ctx,&local_38,0x84,lVar5);
    }
  }
  OSSL_PARAM_free(lVar5);
  OSSL_PARAM_BLD_free(lVar4);
  EVP_PKEY_CTX_free(ctx);
  BN_free(a);
  lVar5 = local_38;
LAB_00105564:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar5;
}



undefined8
ssl_security_cert(long param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined4 local_3c;
  int local_38;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)(param_4 != 0) << 0xc;
  if (param_5 == 0) {
    lVar3 = X509_get0_pubkey(param_3);
    uVar1 = 0xffffffff;
    if (lVar3 != 0) {
      uVar1 = EVP_PKEY_get_security_bits(lVar3);
    }
    if (param_1 == 0) {
      iVar2 = ssl_ctx_security(param_2,uVar6 | 0x60011,uVar1,0,param_3);
    }
    else {
      iVar2 = ssl_security(param_1);
    }
    uVar4 = 0x18d;
  }
  else {
    lVar3 = X509_get0_pubkey(param_3);
    uVar1 = 0xffffffff;
    if (lVar3 != 0) {
      uVar1 = EVP_PKEY_get_security_bits(lVar3);
    }
    if (param_1 == 0) {
      iVar2 = ssl_ctx_security(param_2,uVar6 | 0x60010,uVar1,0,param_3);
    }
    else {
      iVar2 = ssl_security(param_1);
    }
    uVar4 = 399;
  }
  if (iVar2 != 0) {
    uVar5 = X509_get_extension_flags(param_3);
    if ((uVar5 & 0x2000) == 0) {
      iVar2 = X509_get_signature_info(param_3,&local_38,&local_34,&local_3c,0);
      if (iVar2 == 0) {
        local_3c = 0xffffffff;
      }
      if (local_38 == 0) {
        local_38 = local_34;
      }
      if (param_1 == 0) {
        iVar2 = ssl_ctx_security(param_2,uVar6 | 0x60012,local_3c,local_38,param_3);
      }
      else {
        iVar2 = ssl_security(param_1);
      }
      uVar4 = 0x18e;
      if (iVar2 == 0) goto LAB_001056d8;
    }
    uVar4 = 1;
  }
LAB_001056d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ssl_security_cert_chain(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_3 == 0) {
    param_3 = OPENSSL_sk_value(param_2,0);
    if (param_3 == 0) {
      return 0xc0103;
    }
    iVar4 = 1;
  }
  iVar1 = ssl_security_cert(param_1,0,param_3,param_4,1);
  if (iVar1 == 1) {
    for (; iVar2 = OPENSSL_sk_num(param_2), iVar4 < iVar2; iVar4 = iVar4 + 1) {
      uVar3 = OPENSSL_sk_value(param_2,iVar4);
      iVar2 = ssl_security_cert(param_1,0,uVar3,param_4,0);
      if (iVar2 != 1) {
        return iVar2;
      }
    }
  }
  return iVar1;
}



undefined8 SSL_CTX_set_tlsext_max_fragment_length(long param_1,byte param_2)

{
  if (param_2 < 5) {
    *(byte *)(param_1 + 0x27c) = param_2;
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/t1_lib.c",0x12a7,"SSL_CTX_set_tlsext_max_fragment_length");
  ERR_set_error(0x14,0xe8,0);
  return 0;
}



undefined8 SSL_set_tlsext_max_fragment_length(uint *param_1,byte param_2)

{
  uint *puVar1;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  puVar1 = param_1;
  if (*param_1 != 0) {
    if (((*param_1 & 0x80) == 0) ||
       (puVar1 = (uint *)ossl_quic_obj_get0_handshake_layer(), puVar1 == (uint *)0x0)) {
      return 0;
    }
    if ((*param_1 & 0x80) != 0) {
      if (param_2 != 0) {
        return 0;
      }
      goto LAB_00105954;
    }
  }
  if (4 < param_2) {
    ERR_new();
    ERR_set_debug("ssl/t1_lib.c",0x12b9,"SSL_set_tlsext_max_fragment_length");
    ERR_set_error(0x14,0xe8,0);
    return 0;
  }
LAB_00105954:
  *(byte *)(puVar1 + 0x2cd) = param_2;
  return 1;
}



char SSL_SESSION_get_max_fragment_length(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x358);
  if (*(char *)(param_1 + 0x358) == -1) {
    cVar1 = '\0';
  }
  return cVar1;
}



long * ssl_hmac_new(undefined8 *param_1)

{
  int iVar1;
  long *ptr;
  long lVar2;
  long lVar3;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"ssl/t1_lib.c",0x12cd);
  if (ptr != (long *)0x0) {
    if ((param_1[0x4c] == 0) && (param_1[0x4b] != 0)) {
      iVar1 = ssl_hmac_old_new(ptr);
      if (iVar1 != 0) {
        return ptr;
      }
      lVar3 = *ptr;
      lVar2 = 0;
    }
    else {
      lVar2 = EVP_MAC_fetch(*param_1,&_LC47,param_1[0x8e]);
      if (lVar2 == 0) {
        lVar3 = *ptr;
      }
      else {
        lVar3 = EVP_MAC_CTX_new(lVar2);
        *ptr = lVar3;
        if (lVar3 != 0) {
          EVP_MAC_free(lVar2);
          return ptr;
        }
      }
    }
    EVP_MAC_CTX_free(lVar3);
    EVP_MAC_free(lVar2);
    CRYPTO_free(ptr);
  }
  return (long *)0x0;
}



void ssl_hmac_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_MAC_CTX_free(*param_1);
    ssl_hmac_old_free(param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ssl_hmac_get0_EVP_MAC_CTX(undefined8 *param_1)

{
  return *param_1;
}



undefined8 ssl_hmac_init(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_1 != 0) {
    OSSL_PARAM_construct_utf8_string(&local_b8,"digest",param_4,0);
    local_68 = local_98;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    local_78 = local_a8;
    uStack_70 = uStack_a0;
    OSSL_PARAM_construct_end(&local_b8);
    local_60 = local_b8;
    uStack_58 = uStack_b0;
    local_40 = local_98;
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    iVar1 = EVP_MAC_init(*param_1,param_2,param_3,&local_88);
    uVar2 = 1;
    if (iVar1 != 0) goto LAB_00105bfd;
  }
  uVar2 = 0;
  if (param_1[1] != 0) {
    uVar2 = ssl_hmac_old_init(param_1,param_2,param_3,param_4);
  }
LAB_00105bfd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl_hmac_update(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = EVP_MAC_update(*param_1);
    return uVar1;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = ssl_hmac_old_update();
  return uVar1;
}



undefined8 ssl_hmac_final(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = EVP_MAC_final(*param_1);
    return uVar1;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = ssl_hmac_old_final();
  return uVar1;
}



undefined8 ssl_hmac_size(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = EVP_MAC_CTX_get_mac_size(*param_1);
    return uVar1;
  }
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = ssl_hmac_old_size();
  return uVar1;
}



uint tls_decrypt_ticket(long param_1,long *param_2,ulong param_3,void *param_4,size_t param_5,
                       undefined8 *param_6)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  EVP_CIPHER_CTX *ctx;
  undefined8 uVar7;
  size_t len;
  uchar *out;
  SSL_SESSION *ses;
  EVP_CIPHER *cipher;
  ulong uVar8;
  long in_FS_OFFSET;
  code *local_c0;
  uint local_b4;
  int local_98;
  int local_94;
  uchar *local_90;
  undefined1 local_88 [72];
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0xb88);
  puVar2 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
          (iVar4 = **(int **)(param_1 + 0x18), iVar4 < 0x304)) || (iVar4 == 0x10000)) &&
        (*(long *)(param_1 + 0xae0) != 0)) || (param_3 < 0x20)) {
      ctx = (EVP_CIPHER_CTX *)0x0;
      lVar6 = 0;
      local_b4 = 4;
      ses = (SSL_SESSION *)0x0;
      goto LAB_00105d53;
    }
    lVar6 = ssl_hmac_new(lVar1);
    if ((lVar6 == 0) || (ctx = EVP_CIPHER_CTX_new(), ctx == (EVP_CIPHER_CTX *)0x0)) {
      ctx = (EVP_CIPHER_CTX *)0x0;
      local_b4 = 0;
    }
    else {
      local_c0 = *(code **)(lVar1 + 0x260);
      if (local_c0 == (code *)0x0) {
        local_c0 = *(code **)(lVar1 + 600);
        if (local_c0 != (code *)0x0) {
          uVar7 = ssl_hmac_get0_HMAC_CTX(lVar6);
          goto LAB_00105e3b;
        }
        if (*param_2 != *(long *)(lVar1 + 0x240) || param_2[1] != *(long *)(lVar1 + 0x248))
        goto LAB_00106030;
        local_b4 = 0;
        cipher = (EVP_CIPHER *)EVP_CIPHER_fetch(*puVar2,"AES-256-CBC",puVar2[0x8e]);
        if (((cipher != (EVP_CIPHER *)0x0) &&
            (iVar4 = ssl_hmac_init(lVar6,*(undefined8 *)(lVar1 + 0x250),0x20,"SHA256"), 0 < iVar4))
           && (iVar4 = EVP_DecryptInit_ex(ctx,cipher,(ENGINE *)0x0,
                                          (uchar *)(*(long *)(lVar1 + 0x250) + 0x20),
                                          (uchar *)(param_2 + 2)), 0 < iVar4)) {
          EVP_CIPHER_free(cipher);
          lVar1 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
          if ((*(byte *)(lVar1 + 0x50) & 8) == 0) {
            iVar4 = **(int **)(param_1 + 0x18);
            local_b4 = (uint)(0x303 < iVar4) &
                       (uint)CONCAT71((int7)((ulong)lVar1 >> 8),iVar4 != 0x10000);
          }
          goto LAB_00105e76;
        }
        EVP_CIPHER_free(cipher);
      }
      else {
        uVar7 = ssl_hmac_get0_EVP_MAC_CTX(lVar6);
LAB_00105e3b:
        iVar4 = (*local_c0)(*(undefined8 *)(param_1 + 0x40),param_2,param_2 + 2,ctx,uVar7,0);
        if (-1 < iVar4) {
          if (iVar4 == 0) {
LAB_00106030:
            local_b4 = 4;
            ses = (SSL_SESSION *)0x0;
            goto LAB_00105d53;
          }
          local_b4 = (uint)(iVar4 == 2);
LAB_00105e76:
          len = ssl_hmac_size(lVar6);
          if ((len != 0) && (iVar4 = EVP_CIPHER_CTX_get_iv_length(ctx), -1 < iVar4)) {
            if (param_3 <= (long)(iVar4 + 0x10) + len) goto LAB_00106030;
            param_3 = param_3 - len;
            iVar5 = ssl_hmac_update(lVar6,param_2,param_3);
            if (0 < iVar5) {
              iVar5 = ssl_hmac_final(lVar6,local_88,0,0x40);
              if (0 < iVar5) {
                iVar5 = CRYPTO_memcmp(local_88,(void *)((long)param_2 + param_3),len);
                if (iVar5 != 0) goto LAB_00106030;
                param_3 = param_3 - (long)(iVar4 + 0x10);
                local_90 = (uchar *)((long)param_2 + (long)iVar4 + 0x10);
                out = (uchar *)CRYPTO_malloc((int)param_3,"ssl/t1_lib.c",0xc80);
                if ((out != (uchar *)0x0) &&
                   (iVar4 = EVP_DecryptUpdate(ctx,out,&local_98,local_90,(int)param_3), 0 < iVar4))
                {
                  iVar4 = EVP_DecryptFinal(ctx,out + local_98,&local_94);
                  if (iVar4 < 1) {
                    ses = (SSL_SESSION *)0x0;
                    local_b4 = 4;
                    CRYPTO_free(out);
                    goto LAB_00105d53;
                  }
                  local_98 = local_94 + local_98;
                  local_90 = out;
                  ses = (SSL_SESSION *)
                        d2i_SSL_SESSION_ex(0,&local_90,(long)local_98,*puVar2,puVar2[0x8e]);
                  local_98 = local_98 - ((int)local_90 - (int)out);
                  CRYPTO_free(out);
                  if (ses == (SSL_SESSION *)0x0) {
                    ERR_clear_error();
                  }
                  else {
                    if (local_98 == 0) {
                      if (param_5 != 0) {
                        memcpy(ses + 1,param_4,param_5);
                        ses->tlsext_tick_lifetime_hint = param_5;
                      }
                      local_b4 = local_b4 + 5;
                      goto LAB_00105d53;
                    }
                    SSL_SESSION_free(ses);
                  }
                  goto LAB_00106030;
                }
                CRYPTO_free(out);
              }
            }
          }
        }
      }
      local_b4 = 1;
    }
    EVP_CIPHER_CTX_free(ctx);
    ssl_hmac_free(lVar6);
    lVar1 = *(long *)(param_1 + 0xae0);
    ses = (SSL_SESSION *)0x0;
    goto joined_r0x00105fde;
  }
  ctx = (EVP_CIPHER_CTX *)0x0;
  lVar6 = 0;
  local_b4 = 3;
  ses = (SSL_SESSION *)0x0;
LAB_00105d53:
  EVP_CIPHER_CTX_free(ctx);
  ssl_hmac_free(lVar6);
  pcVar3 = *(code **)(*(long *)(param_1 + 0xb88) + 0x430);
  if (pcVar3 == (code *)0x0) {
    if (*(long *)(param_1 + 0xae0) != 0) goto LAB_00105d88;
    if (4 < local_b4) goto LAB_00105f86;
  }
  else {
    uVar8 = 0x10;
    if (param_3 < 0x11) {
      uVar8 = param_3;
    }
    iVar4 = (*pcVar3)(param_1,ses,param_2,uVar8,local_b4,
                      *(undefined8 *)(*(long *)(param_1 + 0xb88) + 0x438));
    if (iVar4 == 2) {
      if (1 < local_b4 - 3) {
        local_b4 = 4;
      }
      SSL_SESSION_free(ses);
      lVar1 = *(long *)(param_1 + 0xae0);
      ses = (SSL_SESSION *)0x0;
joined_r0x00105fc3:
      if (lVar1 == 0) goto LAB_00105f70;
    }
    else {
      if (iVar4 < 3) {
        if (iVar4 != 1) goto LAB_00105fd0;
        local_b4 = 2;
        SSL_SESSION_free(ses);
        lVar1 = *(long *)(param_1 + 0xae0);
        ses = (SSL_SESSION *)0x0;
      }
      else if (iVar4 - 3U < 2) {
        lVar1 = *(long *)(param_1 + 0xae0);
        if (local_b4 - 5 < 2) {
          if (iVar4 != 3) {
            local_b4 = 6;
            goto joined_r0x00105fc3;
          }
          local_b4 = 5;
        }
        else {
          local_b4 = 1;
        }
      }
      else {
LAB_00105fd0:
        lVar1 = *(long *)(param_1 + 0xae0);
        local_b4 = 1;
      }
joined_r0x00105fde:
      if (lVar1 == 0) goto LAB_00105db0;
    }
LAB_00105d88:
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
        (iVar4 = **(int **)(param_1 + 0x18), iVar4 == 0x10000)) || (iVar4 < 0x304))
    goto LAB_00105db0;
    if (local_b4 < 5) {
      if (local_b4 < 3) goto LAB_00105db0;
    }
    else {
LAB_00105f86:
      if (local_b4 != 6) {
        local_b4 = 5;
        goto LAB_00105db0;
      }
    }
  }
LAB_00105f70:
  *(undefined4 *)(param_1 + 0xa60) = 1;
LAB_00105db0:
  *param_6 = ses;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_b4;
}



undefined8 tls_get_ticket_from_client(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x48);
  *param_3 = 0;
  *(undefined4 *)(param_1 + 0xa60) = 0;
  if (iVar2 < 0x301) {
    return 2;
  }
  iVar2 = tls_use_ticket();
  if ((iVar2 != 0) && (lVar1 = *(long *)(param_2 + 0x288), *(int *)(lVar1 + 0x100) != 0)) {
    uVar3 = tls_decrypt_ticket(param_1,*(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0xf8),
                               param_2 + 0x30,*(undefined8 *)(param_2 + 0x28),param_3);
    return uVar3;
  }
  return 2;
}



int ssl_get_EC_curve_nid(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  char acStack_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = EVP_PKEY_get_group_name(param_1,acStack_48,0x32,0);
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = OBJ_txt2nid(acStack_48);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 tls12_check_peer_sigalg(long param_1,ushort param_2,undefined8 param_3)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ushort *puVar9;
  long lVar10;
  undefined8 uVar11;
  long in_FS_OFFSET;
  ushort *local_60;
  long local_58;
  int local_50 [3];
  ushort local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  iVar3 = EVP_PKEY_get_id(param_3);
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    if (iVar3 != 0x74) {
      if (iVar3 == 6) {
        iVar3 = 0x390;
      }
      goto LAB_001065a0;
    }
    ERR_new();
    uVar11 = 0xa8e;
  }
  else {
LAB_001065a0:
    lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x650);
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x660);
    lVar8 = 0;
    if (lVar7 != 0) {
      do {
        if (param_2 == *(ushort *)(lVar10 + 0x10)) {
          if ((*(int *)(lVar10 + 0x2c) != 0) &&
             (iVar4 = tls_sigalg_compat(param_1,lVar10), iVar4 != 0)) {
            if (iVar3 == -1) {
              iVar3 = *(int *)(lVar10 + 0x1c);
              if (iVar3 == -1) {
                ERR_new();
                ERR_set_debug("ssl/t1_lib.c",0xaa3,"tls12_check_peer_sigalg");
                ossl_statem_fatal(param_1,0x2f,0x172,0);
                uVar5 = 0xffffffff;
                goto LAB_00106696;
              }
              if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                  (iVar4 = **(int **)(param_1 + 0x18), iVar4 != 0x10000)) && (0x303 < iVar4))
              goto LAB_0010661c;
LAB_001066ff:
              uVar11 = *(undefined8 *)(param_1 + 8);
              iVar4 = iVar3;
              if (iVar3 == 0x390) {
                iVar4 = EVP_PKEY_get_id(param_3);
              }
            }
            else {
              if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                  (iVar4 = **(int **)(param_1 + 0x18), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
LAB_0010661c:
                if ((*(int *)(lVar10 + 0x14) != 0x40) && (*(int *)(lVar10 + 0x14) != 0x2a3))
                goto LAB_00106630;
LAB_0010664d:
                ERR_new();
                uVar11 = 0xaaf;
                goto LAB_00106671;
              }
LAB_00106630:
              if (*(int *)(lVar10 + 0x1c) == iVar3) goto LAB_001066ff;
              if ((iVar3 != 6) || (*(int *)(lVar10 + 0x1c) != 0x390)) goto LAB_0010664d;
              uVar11 = *(undefined8 *)(param_1 + 8);
              iVar3 = 6;
              iVar4 = 6;
            }
            iVar4 = ssl_cert_lookup_by_nid(iVar4,local_50,uVar11);
            if ((iVar4 == 0) || (*(int *)(lVar10 + 0x20) != local_50[0])) {
              ERR_new();
              uVar11 = 0xab7;
              goto LAB_00106671;
            }
            if (iVar3 == 0x198) {
              iVar3 = tls1_check_pkey_comp(param_1,param_3);
              if (iVar3 == 0) {
                ERR_new();
                ERR_set_debug("ssl/t1_lib.c",0xabf,"tls12_check_peer_sigalg");
                ossl_statem_fatal(param_1,0x2f,0xa2,0);
                goto LAB_00106693;
              }
              if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
                iVar3 = **(int **)(param_1 + 0x18);
                if (((iVar3 == 0x10000) || (iVar3 < 0x304)) &&
                   ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) == 0)) {
LAB_001069a2:
                  if ((iVar3 != 0x10000) && (0x303 < iVar3)) goto LAB_00106753;
                  goto LAB_001069b4;
                }
LAB_00106976:
                iVar3 = ssl_get_EC_curve_nid(param_3);
                if ((*(int *)(lVar10 + 0x28) == iVar3) || (*(int *)(lVar10 + 0x28) == 0)) {
                  if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0)
                  goto LAB_001069b4;
                  iVar3 = **(int **)(param_1 + 0x18);
                  goto LAB_001069a2;
                }
                ERR_new();
                uVar11 = 0xac9;
              }
              else {
                if ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) != 0)
                goto LAB_00106976;
LAB_001069b4:
                uVar6 = ssl_get_EC_curve_nid(param_3);
                if (uVar6 != 0) {
                  uVar2 = tls1_nid2group_id(uVar6);
                  uVar6 = (uint)uVar2;
                }
                iVar3 = tls1_check_group_id(param_1,uVar6,1);
                if (iVar3 != 0) {
                  if (((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) == 0) ||
                     ((param_2 & 0xfeff) == 0x403)) goto LAB_00106753;
                  ERR_new();
                  uVar11 = 0xad7;
                  goto LAB_001068b6;
                }
                ERR_new();
                uVar11 = 0xad0;
              }
              ERR_set_debug("ssl/t1_lib.c",uVar11,"tls12_check_peer_sigalg");
              ossl_statem_fatal(param_1,0x2f,0x17a,0);
              goto LAB_00106693;
            }
            if ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) != 0) {
              ERR_new();
              uVar11 = 0xade;
              goto LAB_001068b6;
            }
LAB_00106753:
            lVar7 = tls12_get_psigalgs(param_1,1,&local_60);
            puVar9 = local_60;
            if (lVar7 == 0) goto LAB_0010688b;
            bVar1 = false;
            lVar8 = 0;
            goto LAB_00106796;
          }
          break;
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0x48;
      } while (lVar8 != lVar7);
    }
    ERR_new();
    uVar11 = 0xa99;
  }
LAB_00106671:
  ERR_set_debug("ssl/t1_lib.c",uVar11,"tls12_check_peer_sigalg");
  ossl_statem_fatal(param_1,0x2f,0x172,0);
  goto LAB_00106693;
  while( true ) {
    lVar8 = lVar8 + 1;
    puVar9 = puVar9 + 1;
    bVar1 = true;
    if (lVar7 == lVar8) break;
LAB_00106796:
    if (*puVar9 == param_2) {
      if (bVar1) {
        local_60 = puVar9;
      }
      puVar9 = local_60;
      if (lVar7 != lVar8) goto LAB_001067ae;
      break;
    }
  }
LAB_0010688b:
  local_60 = puVar9;
  if ((*(int *)(lVar10 + 0x14) == 0x40) &&
     ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30001) == 0)) {
LAB_001067ae:
    iVar3 = tls1_lookup_md(*(undefined8 *)(param_1 + 8),lVar10,&local_58);
    if (iVar3 == 0) {
      ERR_new();
      ERR_set_debug("ssl/t1_lib.c",0xaef,"tls12_check_peer_sigalg");
      ossl_statem_fatal(param_1,0x28,0x170,0);
      goto LAB_00106693;
    }
    local_42 = param_2 << 8 | param_2 >> 8;
    iVar3 = sigalg_security_bits(*(undefined8 *)(param_1 + 8),lVar10);
    if (iVar3 != 0) {
      uVar5 = 0;
      if (local_58 != 0) {
        uVar5 = EVP_MD_get_type();
      }
      iVar3 = ssl_security(param_1,0x5000d,iVar3,uVar5,&local_42);
      if (iVar3 != 0) {
        *(long *)(param_1 + 0x400) = lVar10;
        uVar5 = 1;
        goto LAB_00106696;
      }
    }
    ERR_new();
    uVar11 = 0xafd;
  }
  else {
    ERR_new();
    uVar11 = 0xaeb;
  }
LAB_001068b6:
  ERR_set_debug("ssl/t1_lib.c",uVar11,"tls12_check_peer_sigalg");
  ossl_statem_fatal(param_1,0x28,0x172,0);
LAB_00106693:
  uVar5 = 0;
LAB_00106696:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



long find_sig_alg(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long in_FS_OFFSET;
  int local_50;
  int local_48;
  undefined4 uStack_44;
  long local_40;
  
  uVar6 = *(ulong *)(param_1 + 0x1590);
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (uVar6 != 0) {
    if (param_3 == 0) {
      iVar2 = -1;
      uVar7 = 0;
      do {
        lVar8 = *(long *)(*(long *)(param_1 + 0x1588) + uVar7 * 8);
        if ((((*(int *)(lVar8 + 0x14) != 0x40) && (*(int *)(lVar8 + 0x14) != 0x2a3)) &&
            (*(int *)(lVar8 + 0x1c) != 0x74)) && (*(int *)(lVar8 + 0x1c) != 6)) {
          iVar3 = tls_sigalg_compat(param_1,lVar8);
          if (((iVar3 != 0) && (iVar3 = tls1_lookup_md(uVar1,lVar8,0), iVar3 != 0)) &&
             (iVar3 = has_usable_cert(param_1,lVar8,0xffffffff), iVar3 != 0)) {
            lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                              (long)*(int *)(lVar8 + 0x20) * 0x28 + 8);
            if (*(int *)(lVar8 + 0x1c) == 0x198) {
              if (iVar2 == -1) {
                iVar2 = ssl_get_EC_curve_nid(lVar5);
              }
              uVar6 = *(ulong *)(param_1 + 0x1590);
              if ((*(int *)(lVar8 + 0x28) != iVar2) && (*(int *)(lVar8 + 0x28) != 0))
              goto LAB_00106d90;
              break;
            }
            if (*(int *)(lVar8 + 0x1c) != 0x390) goto LAB_00106cc2;
            if ((((lVar5 != 0) && (iVar3 = tls1_lookup_md(uVar1,lVar8,&local_48), iVar3 != 0)) &&
                (CONCAT44(uStack_44,local_48) != 0)) && (iVar3 = EVP_MD_get_size(), 0 < iVar3)) {
              iVar3 = EVP_PKEY_get_size(lVar5);
              iVar4 = EVP_MD_get_size(CONCAT44(uStack_44,local_48));
              if (iVar4 * 2 + 2 <= iVar3) goto LAB_00106cc2;
            }
          }
          uVar6 = *(ulong *)(param_1 + 0x1590);
        }
LAB_00106d90:
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    else {
      local_50 = -1;
      uVar7 = 0;
      do {
        lVar8 = *(long *)(*(long *)(param_1 + 0x1588) + uVar7 * 8);
        if (((*(int *)(lVar8 + 0x14) != 0x2a3) && (*(int *)(lVar8 + 0x14) != 0x40)) &&
           ((*(int *)(lVar8 + 0x1c) != 0x74 && (*(int *)(lVar8 + 0x1c) != 6)))) {
          iVar2 = tls_sigalg_compat(param_1,lVar8);
          if ((((iVar2 != 0) && (iVar2 = tls1_lookup_md(uVar1,lVar8,0), iVar2 != 0)) &&
              (lVar5 = ssl_cert_lookup_by_pkey(param_3,&local_48,*(undefined8 *)(param_1 + 8)),
              lVar5 != 0)) &&
             ((*(int *)(lVar8 + 0x20) == local_48 &&
              (iVar2 = check_cert_usable_isra_0
                                 (param_1,*(undefined4 *)(lVar8 + 0x14),param_2,param_3), iVar2 != 0
              )))) {
            if (*(int *)(lVar8 + 0x1c) == 0x198) {
              if (local_50 == -1) {
                local_50 = ssl_get_EC_curve_nid(param_3);
              }
              uVar6 = *(ulong *)(param_1 + 0x1590);
              if ((local_50 != *(int *)(lVar8 + 0x28)) && (*(int *)(lVar8 + 0x28) != 0))
              goto LAB_00106c00;
              break;
            }
            if (*(int *)(lVar8 + 0x1c) != 0x390) goto LAB_00106cc2;
            iVar2 = tls1_lookup_md(uVar1,lVar8,&local_48);
            if (((iVar2 != 0) && (CONCAT44(uStack_44,local_48) != 0)) &&
               (iVar2 = EVP_MD_get_size(), 0 < iVar2)) {
              iVar2 = EVP_PKEY_get_size(param_3);
              iVar3 = EVP_MD_get_size(CONCAT44(uStack_44,local_48));
              if (iVar3 * 2 + 2 <= iVar2) goto LAB_00106cc2;
            }
          }
          uVar6 = *(ulong *)(param_1 + 0x1590);
        }
LAB_00106c00:
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
    goto LAB_00106c0d;
  }
  goto LAB_00106e4a;
LAB_00106cc2:
  uVar6 = *(ulong *)(param_1 + 0x1590);
LAB_00106c0d:
  if (uVar7 != uVar6) goto LAB_00106c16;
LAB_00106e4a:
  lVar8 = 0;
LAB_00106c16:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar8;
}



undefined8 tls_choose_sigalg(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  int iVar16;
  long in_FS_OFFSET;
  short *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 0x3d0) = (undefined1  [16])0x0;
  uVar2 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50);
  if ((((uVar2 & 8) == 0) && (iVar6 = **(int **)(param_1 + 0x18), iVar6 != 0x10000)) &&
     (0x303 < iVar6)) {
    lVar11 = find_sig_alg(param_1,0,0);
    if (lVar11 == 0) {
      if (param_2 == 0) goto LAB_00107128;
      ERR_new();
      uVar14 = 0x1221;
LAB_001073ae:
      ERR_set_debug("ssl/t1_lib.c",uVar14,"tls_choose_sigalg");
      ossl_statem_fatal(param_1,0x28,0x76,0);
      uVar14 = 0;
      goto LAB_0010712d;
    }
LAB_00107355:
    uVar12 = (ulong)*(int *)(lVar11 + 0x20);
LAB_0010719e:
    lVar10 = (*(long **)(param_1 + 0x880))[4] + uVar12 * 0x28;
    *(long *)(param_1 + 0x3d8) = lVar10;
    **(long **)(param_1 + 0x880) = lVar10;
    *(long *)(param_1 + 0x3d0) = lVar11;
  }
  else if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0xab) != 0) {
    if (*(int *)(param_1 + 0x78) == 0) {
      lVar11 = (*(long **)(param_1 + 0x880))[4];
      iVar6 = (int)(**(long **)(param_1 + 0x880) - lVar11 >> 3) * -0x33333333;
      if ((-1 < iVar6) && (iVar6 < *(int *)(param_1 + 0x118))) {
        plVar1 = (long *)(lVar11 + (long)iVar6 * 0x28);
        if ((((*(void **)(param_1 + 0x1598) != (void *)0x0) &&
             (pvVar8 = memchr(*(void **)(param_1 + 0x1598),2,*(size_t *)(param_1 + 0x15a0)),
             pvVar8 != (void *)0x0)) || (*plVar1 != 0)) && (plVar1[1] != 0)) goto LAB_00106ef8;
      }
    }
    else {
LAB_00106ef8:
      if ((uVar2 & 2) == 0) {
        lVar11 = tls1_get_legacy_sigalg(param_1,0xffffffff);
        if (lVar11 != 0) goto LAB_00107355;
        if (param_2 != 0) {
          ERR_new();
          ERR_set_debug("ssl/t1_lib.c",0x1295,"tls_choose_sigalg");
          ossl_statem_fatal(param_1,0x50,0x76,0);
          uVar14 = 0;
          goto LAB_0010712d;
        }
      }
      else if (*(long *)(param_1 + 0x3e0) == 0) {
        lVar11 = tls1_get_legacy_sigalg(param_1,0xffffffff);
        if (lVar11 == 0) {
          if (param_2 != 0) {
            ERR_new();
            uVar14 = 0x127d;
            goto LAB_001073ae;
          }
        }
        else {
          lVar10 = tls12_get_psigalgs(param_1,1,&local_48);
          if (lVar10 != 0) {
            lVar13 = 0;
            do {
              if ((*(short *)(lVar11 + 0x10) == *local_48) &&
                 (iVar6 = has_usable_cert(param_1,lVar11,*(undefined4 *)(lVar11 + 0x20)), iVar6 != 0
                 )) {
                if (lVar13 != lVar10) goto LAB_00107355;
                break;
              }
              local_48 = local_48 + 1;
              lVar13 = lVar13 + 1;
            } while (lVar10 != lVar13);
          }
          if (param_2 != 0) {
            ERR_new();
            ERR_set_debug("ssl/t1_lib.c",0x128c,"tls_choose_sigalg");
            ossl_statem_fatal(param_1,0x28,0x172,0);
            uVar14 = 0;
            goto LAB_0010712d;
          }
        }
      }
      else {
        uVar14 = *(undefined8 *)(param_1 + 8);
        iVar6 = -1;
        if ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) != 0) {
          iVar6 = ssl_get_EC_curve_nid
                            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) + 0x80));
        }
        uVar7 = *(ulong *)(param_1 + 0x1590);
        uVar15 = 0;
        uVar12 = 0xffffffffffffffff;
        if (uVar7 != 0) {
          do {
            while (lVar11 = *(long *)(*(long *)(param_1 + 0x1588) + uVar15 * 8),
                  *(int *)(lVar11 + 0x2c) != 0) {
              iVar5 = **(int **)(param_1 + 0x18);
              if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
                if (iVar5 == 0x10000) {
                  iVar5 = *(int *)(param_1 + 0x9bc);
                  iVar4 = *(int *)(param_1 + 0x9c0);
                }
                else {
                  iVar5 = *(int *)(param_1 + 0x48);
                  iVar4 = iVar5;
                }
                iVar3 = *(int *)(lVar11 + 0x34);
                iVar16 = *(int *)(lVar11 + 0x38);
              }
              else {
                if (iVar5 == 0x1ffff) {
                  iVar5 = *(int *)(param_1 + 0x9bc);
                  iVar4 = *(int *)(param_1 + 0x9c0);
                }
                else {
                  iVar5 = *(int *)(param_1 + 0x48);
                  iVar4 = iVar5;
                }
                iVar3 = *(int *)(lVar11 + 0x3c);
                iVar16 = *(int *)(lVar11 + 0x40);
              }
              if ((iVar3 == -1) || (iVar16 == -1)) break;
              if ((((iVar3 == 0) || ((iVar4 == 0 || (iVar4 = ssl_version_cmp(param_1), iVar4 < 1))))
                  && ((iVar16 == 0 ||
                      ((iVar5 == 0 || (iVar5 = ssl_version_cmp(param_1,iVar16,iVar5), -1 < iVar5))))
                     )) && (iVar5 = tls12_sigalg_allowed(param_1,0x5000b,lVar11), iVar5 != 0)) {
                if (*(int *)(param_1 + 0x78) != 0) {
                  iVar5 = *(int *)(lVar11 + 0x20);
                  uVar12 = (ulong)iVar5;
                  piVar9 = (int *)ssl_cert_lookup_by_idx(uVar12,*(undefined8 *)(param_1 + 8));
                  if (((piVar9 != (int *)0x0) &&
                      ((piVar9[1] & *(uint *)(*(long *)(param_1 + 0x300) + 0x20)) != 0)) &&
                     ((*piVar9 != 0x390 || ((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) & 1) == 0)
                      ))) {
                    if (*(int *)(param_1 + 0x78) == 0) {
                      if (*(char *)(param_1 + 0xb50) == '\x02') goto LAB_0010727a;
LAB_00107216:
                      lVar10 = *(long *)(param_1 + 0x408);
LAB_0010721d:
                      if ((*(byte *)(lVar10 + uVar12 * 4) & 1) == 0) goto LAB_0010722d;
                    }
                    else {
                      if (*(char *)(param_1 + 0xb52) != '\x02') goto LAB_00107216;
LAB_0010727a:
                      plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) + uVar12 * 0x28
                                       );
                      lVar10 = *(long *)(param_1 + 0x408);
                      if ((plVar1[1] == 0) || (*plVar1 != 0)) goto LAB_0010721d;
                      if ((*(uint *)(lVar10 + uVar12 * 4) & 0x1000) == 0) {
                        uVar7 = *(ulong *)(param_1 + 0x1590);
                        uVar12 = 0xffffffffffffffff;
                        break;
                      }
                    }
                    if (iVar5 != -1) goto LAB_00107016;
                  }
LAB_0010722d:
                  uVar7 = *(ulong *)(param_1 + 0x1590);
                  uVar12 = 0xffffffffffffffff;
                  break;
                }
                uVar12 = (ulong)*(int *)(lVar11 + 0x20);
                if (*(int *)(lVar11 + 0x20) !=
                    (int)(**(long **)(param_1 + 0x880) - (*(long **)(param_1 + 0x880))[4] >> 3) *
                    -0x33333333) goto LAB_00107178;
LAB_00107016:
                iVar5 = has_usable_cert(param_1,lVar11,uVar12 & 0xffffffff);
                if (iVar5 != 0) {
                  if (*(int *)(lVar11 + 0x1c) != 0x390) {
LAB_00107038:
                    uVar7 = *(ulong *)(param_1 + 0x1590);
                    if ((iVar6 != -1) && (*(int *)(lVar11 + 0x28) != iVar6)) break;
                    goto LAB_0010718c;
                  }
                  lVar10 = *(long *)(*(long *)(*(long *)(param_1 + 0x880) + 0x20) +
                                     (long)(int)uVar12 * 0x28 + 8);
                  if ((((lVar10 != 0) &&
                       (iVar5 = tls1_lookup_md(uVar14,lVar11,&local_48), iVar5 != 0)) &&
                      (local_48 != (short *)0x0)) && (iVar5 = EVP_MD_get_size(), 0 < iVar5)) {
                    iVar5 = EVP_PKEY_get_size(lVar10);
                    iVar4 = EVP_MD_get_size(local_48);
                    if (iVar4 * 2 + 2 <= iVar5) goto LAB_00107038;
                  }
                }
              }
LAB_00107178:
              uVar7 = *(ulong *)(param_1 + 0x1590);
              uVar15 = uVar15 + 1;
              if (uVar7 <= uVar15) goto LAB_0010718c;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar7);
LAB_0010718c:
          if (uVar15 == uVar7) goto LAB_00107380;
LAB_00107195:
          if ((int)uVar12 == -1) goto LAB_00107355;
          goto LAB_0010719e;
        }
LAB_00107380:
        if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0xa0) != 0) {
          lVar11 = tls1_get_legacy_sigalg(param_1,0xffffffff);
          if (lVar11 == 0) {
            if (param_2 != 0) {
              ERR_new();
              uVar14 = 0x1263;
              goto LAB_001073ae;
            }
            goto LAB_00107128;
          }
          uVar12 = (ulong)*(int *)(lVar11 + 0x20);
          if (*(long *)(param_1 + 0x1590) != 0) goto LAB_00107195;
        }
        if (param_2 != 0) {
          ERR_new();
          uVar14 = 0x126f;
          goto LAB_001073ae;
        }
      }
    }
  }
LAB_00107128:
  uVar14 = 1;
LAB_0010712d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



uint tls1_check_chain(SSL *param_1,X509 *param_2,long param_3,long param_4,uint param_5)

{
  undefined8 *puVar1;
  _func_3080 *p_Var2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  BIO *pBVar14;
  undefined8 uVar15;
  _func_3150 *p_Var16;
  X509_NAME *pXVar17;
  X509 *a;
  X509_NAME *pXVar18;
  _func_3053 *p_Var19;
  long *plVar20;
  _func_3080 *p_Var21;
  _func_3150 *p_Var22;
  char cVar23;
  ulong uVar24;
  long in_FS_OFFSET;
  uint *local_70;
  undefined8 local_60;
  ulong local_48;
  long local_40;
  
  uVar24 = (ulong)param_5;
  puVar1 = *(undefined8 **)&param_1[3].packet_length;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = *(uint *)((long)puVar1 + 0x1c);
  if (param_5 == 0xffffffff) {
    if (((param_2 == (X509 *)0x0) || (param_3 == 0)) ||
       (lVar13 = ssl_cert_lookup_by_pkey(param_3,&local_48,param_1->method), lVar13 == 0))
    goto LAB_00107814;
    uVar24 = local_48 & 0xffffffff;
    local_70 = (uint *)(*(long *)&param_1[1].error + (long)(int)local_48 * 4);
    uVar8 = *(uint *)((long)puVar1 + 0x1c) & 0x30001;
    uVar5 = (-(uint)(uVar8 == 0) & 0xfffff960) + 0xef0;
    if ((uVar7 & 0x30000) == 0) {
      uVar3 = 1;
      uVar7 = 0;
      uVar5 = (-(uint)(uVar8 == 0) & 0xfffff960) + 0x6f0;
LAB_001076a0:
      iVar6 = SSL_version(param_1);
      if (((iVar6 >> 8 == 3) && (iVar6 = SSL_version(param_1), uVar3 != 0)) && (0x302 < iVar6)) {
LAB_00107bf4:
        local_60 = 0;
        uVar8 = uVar7;
        if ((param_1[1].generate_session_id == (GEN_SESSION_CB)0x0) &&
           (param_1[1].session == (SSL_SESSION *)0x0)) {
          switch(uVar24) {
          case 0:
            local_60 = 0x41;
            iVar6 = 6;
            break;
          default:
            local_60 = 0xffffffff;
            goto LAB_00107c0a;
          case 2:
            local_60 = 0x71;
            iVar6 = 0x74;
            break;
          case 3:
            local_60 = 0x1a0;
            iVar6 = 0x198;
            break;
          case 4:
            local_60 = 0x327;
            iVar6 = 0x32b;
            break;
          case 5:
            local_60 = 0x3d9;
            iVar6 = 0x3d3;
            break;
          case 6:
            local_60 = 0x3da;
            iVar6 = 0x3d4;
          }
          if (puVar1[8] == 0) goto LAB_00107c0a;
          lVar13 = puVar1[9];
          if (lVar13 != 0) {
            lVar12 = 0;
            p_Var2 = param_1->method[6].ssl_ctx_callback_ctrl;
            if (p_Var2 == (_func_3080 *)0x0) {
              do {
                lVar12 = lVar12 + 1;
              } while (lVar13 != lVar12);
            }
            else {
              do {
                p_Var21 = (_func_3080 *)0x0;
                p_Var19 = param_1->method[7].ssl_new;
                do {
                  if (*(short *)(p_Var19 + 0x10) == *(short *)(puVar1[8] + lVar12 * 2)) {
                    if (((*(int *)(p_Var19 + 0x2c) != 0) && (*(int *)(p_Var19 + 0x14) == 0x40)) &&
                       (*(int *)(p_Var19 + 0x1c) == iVar6)) {
                      if (lVar13 != lVar12) goto LAB_00107c0a;
                      goto LAB_00107fa1;
                    }
                    break;
                  }
                  p_Var21 = p_Var21 + 1;
                  p_Var19 = p_Var19 + 0x48;
                } while (p_Var2 != p_Var21);
                lVar12 = lVar12 + 1;
              } while (lVar13 != lVar12);
            }
          }
LAB_00107fa1:
          if (uVar5 != 0) {
LAB_00107e31:
            lVar13 = X509_get0_pubkey(param_2);
            if (lVar13 == 0) {
              iVar6 = *(int *)&param_1->s2;
              goto joined_r0x00107d5b;
            }
            goto LAB_001076d6;
          }
LAB_00107faa:
          uVar5 = 0;
          goto LAB_0010793a;
        }
LAB_00107c0a:
        if ((((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
            (iVar6 = *(int *)&param_1->wbio->method, iVar6 != 0x10000)) && (0x303 < iVar6)) {
          lVar13 = find_sig_alg(param_1,param_2,param_3);
          uVar8 = uVar7 | 0x10;
          if (lVar13 == 0) {
            uVar8 = uVar7;
          }
        }
        else {
          iVar6 = tls1_check_sig_alg(param_1,param_2,local_60);
          if (iVar6 == 0) {
            if (uVar5 == 0) goto LAB_00107faa;
          }
          else {
            uVar8 = uVar7 | 0x10;
          }
        }
        uVar7 = uVar8 | 0x20;
        for (iVar6 = 0; iVar10 = OPENSSL_sk_num(param_4), iVar6 < iVar10; iVar6 = iVar6 + 1) {
          uVar15 = OPENSSL_sk_value(param_4,iVar6);
          iVar10 = tls1_check_sig_alg(param_1,uVar15,local_60);
          if (iVar10 == 0) {
            if (uVar5 == 0) goto LAB_0010793a;
            goto LAB_00107e31;
          }
        }
        lVar13 = X509_get0_pubkey(param_2);
        uVar8 = uVar8 | 0x20;
        if (lVar13 != 0) goto LAB_001076d6;
LAB_00107703:
        if (uVar5 == 0) goto LAB_0010793a;
LAB_0010770c:
        iVar6 = *(int *)&param_1->s2;
        uVar8 = uVar7;
      }
      else {
        if (uVar5 != 0) {
          uVar7 = uVar7 | 0x30;
LAB_00107bb4:
          lVar13 = X509_get0_pubkey(param_2);
          uVar8 = uVar7;
          if (lVar13 != 0) goto LAB_001076d6;
          goto LAB_0010770c;
        }
        lVar13 = X509_get0_pubkey(param_2);
        uVar8 = uVar7;
        if (lVar13 == 0) goto LAB_0010793a;
LAB_001076d6:
        uVar7 = uVar8;
        iVar6 = EVP_PKEY_is_a(lVar13,&_LC25);
        if (iVar6 != 0) {
          iVar6 = tls1_check_pkey_comp(param_1,lVar13);
          if (iVar6 != 0) {
            uVar4 = 0;
            uVar8 = ssl_get_EC_curve_nid(lVar13);
            if (uVar8 != 0) {
              uVar4 = tls1_nid2group_id(uVar8,uVar8);
              uVar8 = (uint)uVar4;
            }
            iVar6 = tls1_check_group_id(param_1,uVar8,*(int *)&param_1->s2 == 0);
            if (iVar6 != 0) {
              if ((*(uint *)(*(long *)&param_1[3].packet_length + 0x1c) & 0x30000) == 0)
              goto LAB_00107a40;
              if (uVar4 == 0x17) {
                iVar6 = 0x31a;
              }
              else {
                iVar6 = 0x31b;
                if (uVar4 != 0x18) goto LAB_00107703;
              }
              if (param_1[8].rbio != (BIO *)0x0) {
                pBVar14 = (BIO *)0x0;
                do {
                  if (*(int *)(*(long *)(&(param_1[8].method)->version + (long)pBVar14 * 2) + 0x24)
                      == iVar6) goto LAB_00107a40;
                  pBVar14 = (BIO *)((long)&pBVar14->method + 1);
                } while (param_1[8].rbio != pBVar14);
              }
            }
          }
          goto LAB_00107703;
        }
LAB_00107a40:
        iVar6 = *(int *)&param_1->s2;
        uVar8 = uVar7 | 0x40;
      }
      if (iVar6 == 0) {
LAB_00107719:
        iVar6 = 0;
        goto LAB_0010771e;
      }
      if (uVar3 != 0) goto LAB_00107a61;
LAB_0010772e:
      uVar8 = uVar8 | 0x600;
LAB_00107734:
      if (uVar5 != 0) goto LAB_00107739;
    }
    else {
      iVar6 = X509_chain_check_suiteb(0,param_2,param_4,uVar7 & 0x30000);
      if (iVar6 == 0) {
        uVar3 = 1;
        uVar7 = 0x800;
        goto LAB_001076a0;
      }
      iVar6 = SSL_version(param_1);
      if (iVar6 >> 8 == 3) {
        iVar6 = SSL_version(param_1);
        if (iVar6 < 0x303) {
          uVar7 = 0x30;
          uVar3 = 1;
          goto LAB_00107bb4;
        }
        uVar7 = 0;
        uVar3 = 1;
        goto LAB_00107bf4;
      }
      lVar13 = X509_get0_pubkey(param_2);
      if (lVar13 != 0) {
        uVar3 = 1;
        uVar8 = 0x30;
        goto LAB_001076d6;
      }
      iVar6 = *(int *)&param_1->s2;
      uVar3 = 1;
      uVar8 = 0x30;
joined_r0x00107d5b:
      if (iVar6 == 0) goto LAB_00107719;
LAB_00107a61:
      uVar7 = uVar8 | 0x80;
      for (iVar6 = 0; iVar10 = OPENSSL_sk_num(param_4), iVar6 < iVar10; iVar6 = iVar6 + 1) {
        uVar15 = OPENSSL_sk_value(param_4,iVar6);
        lVar13 = X509_get0_pubkey(uVar15);
        if (lVar13 == 0) {
LAB_00107b06:
          if (uVar5 == 0) goto LAB_0010793a;
          if (*(int *)&param_1->s2 == 0) goto LAB_00107b24;
          uVar8 = uVar8 | 0x600;
          goto LAB_00107739;
        }
        iVar10 = EVP_PKEY_is_a(lVar13,&_LC25);
        if (iVar10 != 0) {
          iVar10 = tls1_check_pkey_comp(param_1,lVar13);
          if (iVar10 != 0) {
            uVar9 = ssl_get_EC_curve_nid(lVar13);
            if (uVar9 != 0) {
              uVar4 = tls1_nid2group_id(uVar9,uVar9);
              uVar9 = (uint)uVar4;
            }
            iVar10 = tls1_check_group_id(param_1,uVar9,*(int *)&param_1->s2 == 0);
            if (iVar10 != 0) goto LAB_00107ad2;
          }
          goto LAB_00107b06;
        }
LAB_00107ad2:
      }
      iVar6 = *(int *)&param_1->s2;
LAB_0010771e:
      uVar8 = uVar8 | 0x80;
      if ((uVar3 == 0) || (iVar6 != 0)) goto LAB_0010772e;
LAB_00107b24:
      iVar6 = EVP_PKEY_is_a(param_3,&_LC31);
      cVar23 = '\x01';
      if (iVar6 == 0) {
        iVar6 = EVP_PKEY_is_a(param_3,&_LC34);
        cVar23 = '\x02';
        if (iVar6 != 0) goto LAB_00107b46;
        iVar6 = EVP_PKEY_is_a(param_3,&_LC25);
        if (iVar6 != 0) {
          cVar23 = '@';
          goto LAB_00107b46;
        }
LAB_00107b7c:
        lVar13 = *(long *)&param_1[1].hit;
        uVar8 = uVar8 | 0x400;
        if (lVar13 != 0) goto LAB_00107b8b;
LAB_00107ba1:
        uVar8 = uVar8 | 0x200;
        goto LAB_00107734;
      }
LAB_00107b46:
      p_Var16 = param_1[1].msg_callback;
      if (param_1[1].msg_callback_arg != (void *)0x0) {
        p_Var22 = (_func_3150 *)((long)param_1[1].msg_callback_arg + (long)p_Var16);
        do {
          if (*p_Var16 == (_func_3150)cVar23) goto LAB_00107b7c;
          p_Var16 = p_Var16 + 1;
        } while (p_Var16 != p_Var22);
      }
      uVar7 = uVar8;
      if (uVar5 == 0) goto LAB_0010793a;
      lVar13 = *(long *)&param_1[1].hit;
      if (lVar13 == 0) {
        uVar8 = uVar8 | 0x200;
      }
      else {
LAB_00107b8b:
        iVar6 = OPENSSL_sk_num(lVar13);
        if (iVar6 == 0) goto LAB_00107ba1;
        pXVar17 = X509_get_issuer_name(param_2);
        for (iVar6 = 0; iVar10 = OPENSSL_sk_num(lVar13), iVar6 < iVar10; iVar6 = iVar6 + 1) {
          pXVar18 = (X509_NAME *)OPENSSL_sk_value(lVar13,iVar6);
          iVar10 = X509_NAME_cmp(pXVar17,pXVar18);
          if (iVar10 == 0) goto LAB_00107ba1;
        }
        for (iVar6 = 0; iVar10 = OPENSSL_sk_num(param_4), iVar6 < iVar10; iVar6 = iVar6 + 1) {
          a = (X509 *)OPENSSL_sk_value(param_4,iVar6);
          pXVar17 = X509_get_issuer_name(a);
          for (iVar10 = 0; iVar11 = OPENSSL_sk_num(lVar13), iVar10 < iVar11; iVar10 = iVar10 + 1) {
            pXVar18 = (X509_NAME *)OPENSSL_sk_value(lVar13,iVar10);
            iVar11 = X509_NAME_cmp(pXVar17,pXVar18);
            if (iVar11 == 0) goto LAB_00107ba1;
          }
        }
        uVar7 = uVar8;
        if (uVar5 == 0) goto LAB_0010793a;
      }
LAB_00107739:
      uVar7 = uVar8;
      if ((~uVar8 & uVar5) != 0) goto LAB_0010793a;
    }
    uVar7 = uVar8 | 1;
    iVar6 = SSL_version(param_1);
joined_r0x00107759:
    if ((iVar6 >> 8 == 3) && (iVar6 = SSL_version(param_1), 0x302 < iVar6)) {
      uVar7 = *local_70 & 0x102 | uVar7;
    }
    else {
      uVar7 = uVar7 | 0x102;
    }
    if (uVar5 != 0) goto LAB_00107816;
    if ((uVar7 & 1) != 0) {
      *local_70 = uVar7;
      goto LAB_00107816;
    }
    *local_70 = *local_70 & 0x102;
  }
  else {
    lVar13 = puVar1[4];
    if (param_5 == 0xfffffffe) {
      plVar20 = (long *)*puVar1;
      uVar5 = (int)((long)plVar20 - lVar13 >> 3) * -0x33333333;
      uVar24 = (ulong)uVar5;
      lVar12 = (long)(int)uVar5;
    }
    else {
      lVar12 = (long)(int)param_5;
      plVar20 = (long *)(lVar13 + lVar12 * 0x28);
    }
    param_2 = (X509 *)*plVar20;
    uVar3 = uVar7 & 0x30001;
    local_70 = (uint *)(*(long *)&param_1[1].error + lVar12 * 4);
    param_3 = plVar20[1];
    param_4 = plVar20[2];
    if (*(int *)&param_1->s2 == 0) {
      cVar23 = (char)param_1[4].read_ahead;
    }
    else {
      cVar23 = *(char *)((long)&param_1[4].read_ahead + 2);
    }
    if (((cVar23 != '\x02') || (plVar20 = (long *)(lVar13 + lVar12 * 0x28), plVar20[1] == 0)) ||
       (*plVar20 != 0)) {
      if ((param_2 != (X509 *)0x0) && (param_3 != 0)) {
        if ((uVar7 & 0x30000) == 0) {
          uVar7 = 0;
          uVar5 = 0;
        }
        else {
          uVar5 = X509_chain_check_suiteb(0,param_2,param_4,uVar7 & 0x30000);
          uVar7 = 0x800;
          if (uVar5 != 0) goto LAB_00107930;
        }
        goto LAB_001076a0;
      }
LAB_00107930:
      uVar7 = 0;
      uVar5 = 0;
LAB_0010793a:
      iVar6 = SSL_version(param_1);
      goto joined_r0x00107759;
    }
    iVar6 = EVP_PKEY_is_a(param_3,&_LC25);
    if ((iVar6 == 0) || (iVar6 = tls1_check_pkey_comp(param_1,param_3), iVar6 != 0)) {
      *local_70 = 0x1000;
      uVar7 = 0x1000;
      goto LAB_00107816;
    }
  }
LAB_00107814:
  uVar7 = 0;
LAB_00107816:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



void tls1_set_cert_validity(undefined8 param_1)

{
  tls1_check_chain(param_1,0,0,0,0);
  tls1_check_chain(param_1,0,0,0,1);
  tls1_check_chain(param_1,0,0,0,2);
  tls1_check_chain(param_1,0,0,0,3);
  tls1_check_chain(param_1,0,0,0,4);
  tls1_check_chain(param_1,0,0,0,5);
  tls1_check_chain(param_1,0,0,0,6);
  tls1_check_chain(param_1,0,0,0,7);
  tls1_check_chain(param_1,0,0,0,8);
  return;
}



undefined8 SSL_check_chain(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if ((*param_1 & 0x80) != 0) {
      lVar1 = ossl_quic_obj_get0_handshake_layer();
      if (lVar1 != 0) {
        uVar2 = tls1_check_chain(lVar1,param_2,param_3,param_4,0xffffffff);
        return uVar2;
      }
    }
    return 0;
  }
  uVar2 = tls1_check_chain();
  return uVar2;
}



undefined8 tls13_set_encoded_pub_key(undefined8 param_1,char *param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = EVP_PKEY_is_a(param_1,&_LC44);
  if (iVar1 == 0) {
    iVar1 = EVP_PKEY_is_a(param_1,&_LC25);
    if ((iVar1 == 0) || ((2 < param_3 && (*param_2 == '\x04')))) goto LAB_00108290;
  }
  else {
    iVar1 = EVP_PKEY_get_bits(param_1);
    if ((0 < iVar1) && ((ulong)(long)iVar1 >> 3 == param_3)) {
LAB_00108290:
      uVar2 = EVP_PKEY_set1_encoded_public_key(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}


