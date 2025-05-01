
int i2d_SSL_SESSION(SSL_SESSION *in,uchar **pp)

{
  long lVar1;
  char *pcVar2;
  ushort uVar3;
  int iVar4;
  size_t sVar5;
  long lVar6;
  undefined4 **ppuVar7;
  long in_FS_OFFSET;
  undefined1 local_299;
  undefined4 local_298 [2];
  ushort *local_290;
  undefined8 local_288;
  undefined4 local_278 [2];
  uchar *local_270;
  undefined8 local_268;
  undefined4 local_258 [2];
  SSL_SESSION *local_250;
  undefined8 local_248;
  undefined4 local_238 [2];
  uchar *local_230;
  undefined8 local_228;
  undefined4 local_218 [2];
  undefined1 *local_210;
  undefined8 local_208;
  undefined4 local_1f8 [2];
  char *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1d8 [2];
  long local_1d0;
  undefined8 local_1c8;
  undefined4 local_1b8 [2];
  char *local_1b0;
  undefined8 local_1a8;
  undefined4 local_198 [2];
  char *local_190;
  undefined8 local_188;
  undefined4 local_178 [2];
  char *local_170;
  undefined8 local_168;
  undefined4 local_158 [2];
  long local_150;
  undefined8 local_148;
  undefined4 local_138 [2];
  long local_130;
  undefined8 local_128;
  int local_118 [2];
  uchar *local_110 [3];
  undefined4 local_f8;
  int local_f4;
  undefined4 *local_f0 [5];
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined4 local_a8;
  char *local_a0;
  long local_98;
  undefined4 local_90;
  undefined4 *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  ulong local_68;
  undefined4 local_60;
  undefined4 *local_58;
  uint local_50;
  undefined4 *local_48;
  undefined4 local_40;
  int *local_38;
  ushort local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in == (SSL_SESSION *)0x0) {
    iVar4 = 0;
  }
  else {
    lVar1 = *(long *)(in[1].krb5_client_princ + 0x10);
    if (lVar1 == 0) {
      lVar1 = *(long *)(in[1].krb5_client_princ + 0x18);
      iVar4 = 0;
      if (lVar1 == 0) goto LAB_00100464;
      ppuVar7 = local_f0;
      for (lVar6 = 0x17; ppuVar7 = ppuVar7 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
        *ppuVar7 = (undefined4 *)0x0;
      }
      local_f4 = in->ssl_version;
      local_40 = *(undefined4 *)(in[1].krb5_client_princ + 0x20);
      uVar3 = (ushort)lVar1;
    }
    else {
      ppuVar7 = local_f0;
      for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
        *ppuVar7 = (undefined4 *)0x0;
        ppuVar7 = ppuVar7 + 1;
      }
      local_f4 = in->ssl_version;
      local_40 = *(undefined4 *)(in[1].krb5_client_princ + 0x20);
      uVar3 = (ushort)*(undefined4 *)(lVar1 + 0x18);
    }
    local_f8 = 1;
    local_22 = uVar3 << 8 | uVar3 >> 8;
    local_298[0] = 2;
    local_290 = &local_22;
    local_f0[0] = local_298;
    local_288 = 0;
    if (*(int *)(in[1].krb5_client_princ + 8) != 0) {
      local_299 = (undefined1)*(int *)(in[1].krb5_client_princ + 8);
      local_210 = &local_299;
      local_f0[1] = local_218;
      local_218[0] = 1;
      local_208 = 0;
    }
    local_270 = in->session_id + 8;
    local_250 = in + 1;
    local_278[0] = (undefined4)*(undefined8 *)in->key_arg;
    local_230 = in[1].master_key + 0x14;
    local_258[0] = (undefined4)in->tlsext_tick_lifetime_hint;
    local_f0[2] = local_278;
    local_f0[3] = local_258;
    local_268 = 0;
    local_248 = 0;
    local_238[0] = (undefined4)*(undefined8 *)(in[1].master_key + 0xc);
    local_b0 = local_238;
    local_228 = 0;
    local_110[0] = (uchar *)0x0;
    local_c8 = *(ulong *)(in[1].sid_ctx + 0x1c) / 1000000000;
    local_a8 = (undefined4)*(undefined8 *)(in[1].sid_ctx + 0xc);
    local_b8._0_4_ = in[1].sid_ctx_length;
    local_b8._4_1_ = in[1].sid_ctx[0];
    local_b8._5_1_ = in[1].sid_ctx[1];
    local_b8._6_1_ = in[1].sid_ctx[2];
    local_b8._7_1_ = in[1].sid_ctx[3];
    local_c0 = *(ulong *)(in[1].sid_ctx + 0x14) / 1000000000;
    if (*(EVP_PKEY **)(in[1].session_id + 0x18) != (EVP_PKEY *)0x0) {
      local_118[0] = i2d_PUBKEY(*(EVP_PKEY **)(in[1].session_id + 0x18),local_110);
      if ((0 < local_118[0]) && (local_110[0] != (uchar *)0x0)) {
        local_38 = local_118;
      }
    }
    pcVar2 = *(char **)(in[1].krb5_client_princ + 0x38);
    local_a0 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      sVar5 = strlen(pcVar2);
      local_a0 = (char *)local_1f8;
      local_1f8[0] = (undefined4)sVar5;
      local_1e8 = 0;
      local_1f0 = pcVar2;
    }
    if (*(long *)(in[1].krb5_client_princ + 0x40) != 0) {
      local_88 = local_1d8;
      local_1c8 = 0;
      local_1d8[0] = (undefined4)*(undefined8 *)(in[1].krb5_client_princ + 0x48);
      local_1d0 = *(long *)(in[1].krb5_client_princ + 0x40);
    }
    if (*(long *)(in[1].krb5_client_princ + 0x50) != 0) {
      local_98 = *(long *)(in[1].krb5_client_princ + 0x50);
    }
    local_90 = *(undefined4 *)(in[1].krb5_client_princ + 0x58);
    pcVar2 = *(char **)in[1].session_id;
    local_80 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      sVar5 = strlen(pcVar2);
      local_80 = (char *)local_178;
      local_178[0] = (undefined4)sVar5;
      local_168 = 0;
      local_170 = pcVar2;
    }
    pcVar2 = *(char **)(in[1].session_id + 8);
    local_78 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      sVar5 = strlen(pcVar2);
      local_78 = (char *)local_198;
      local_198[0] = (undefined4)sVar5;
      local_188 = 0;
      local_190 = pcVar2;
    }
    pcVar2 = *(char **)(in[1].krb5_client_princ + 0x78);
    local_70 = pcVar2;
    if (pcVar2 != (char *)0x0) {
      sVar5 = strlen(pcVar2);
      local_70 = (char *)local_1b8;
      local_1b8[0] = (undefined4)sVar5;
      local_1a8 = 0;
      local_1b0 = pcVar2;
    }
    local_68 = (ulong)*(uint *)(in[1].krb5_client_princ + 0x90);
    local_60 = *(undefined4 *)(in[1].krb5_client_princ + 0x5c);
    if (*(long *)(in[1].krb5_client_princ + 0x60) == 0) {
      local_58 = (undefined4 *)0x0;
    }
    else {
      local_58 = local_158;
      local_148 = 0;
      local_158[0] = (undefined4)*(undefined8 *)(in[1].krb5_client_princ + 0x68);
      local_150 = *(long *)(in[1].krb5_client_princ + 0x60);
    }
    local_50 = (uint)in[1].krb5_client_princ[0x70];
    if (*(long *)(in[1].krb5_client_princ + 0x80) == 0) {
      local_48 = (undefined4 *)0x0;
    }
    else {
      local_48 = local_138;
      local_128 = 0;
      local_138[0] = (undefined4)*(undefined8 *)(in[1].krb5_client_princ + 0x88);
      local_130 = *(long *)(in[1].krb5_client_princ + 0x80);
    }
    iVar4 = ASN1_item_i2d((ASN1_VALUE *)&local_f8,pp,(ASN1_ITEM *)local_it_1);
    CRYPTO_free(local_110[0]);
  }
LAB_00100464:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



SSL_SESSION *
d2i_SSL_SESSION_ex(long *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  SSL_SESSION *pSVar1;
  ushort uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uchar *puVar6;
  EVP_PKEY *pkey;
  void *pvVar7;
  uint uVar8;
  ASN1_VALUE *val;
  long lVar9;
  SSL_SESSION *ses;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  uchar *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  byte bVar16;
  uchar *local_50;
  undefined8 local_48;
  long local_40;
  
  bVar16 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)*param_2;
  val = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_50,param_3,(ASN1_ITEM *)local_it_1);
  if (val == (ASN1_VALUE *)0x0) {
    ses = (SSL_SESSION *)0x0;
    goto LAB_00100630;
  }
  if (param_1 == (long *)0x0) {
    ses = SSL_SESSION_new();
    if (ses != (SSL_SESSION *)0x0) goto LAB_0010058e;
    ASN1_item_free(val,(ASN1_ITEM *)local_it_1);
LAB_00100646:
    SSL_SESSION_free(ses);
  }
  else {
    ses = (SSL_SESSION *)*param_1;
    if (ses == (SSL_SESSION *)0x0) {
      ses = SSL_SESSION_new();
      if (ses != (SSL_SESSION *)0x0) goto LAB_0010058e;
      ASN1_item_free(val,(ASN1_ITEM *)local_it_1);
    }
    else {
LAB_0010058e:
      if (*(int *)val == 1) {
        iVar3 = *(int *)(val + 4);
        if ((iVar3 >> 8 == 3 || iVar3 >> 8 == 0xfe) || (iVar3 == 0x100)) {
          ses->ssl_version = iVar3;
          *(undefined4 *)(ses[1].krb5_client_princ + 0x20) = *(undefined4 *)(val + 0xb8);
          if (**(int **)(val + 8) == 2) {
            uVar2 = **(ushort **)(*(int **)(val + 8) + 2);
            *(ulong *)(ses[1].krb5_client_princ + 0x18) =
                 (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8) | 0x3000000;
            lVar9 = ssl3_get_cipher_by_id();
            *(long *)(ses[1].krb5_client_princ + 0x10) = lVar9;
            if (lVar9 != 0) {
              puVar4 = *(uint **)(val + 0x20);
              if (puVar4 == (uint *)0x0) {
LAB_00100778:
                lVar9 = 0;
              }
              else {
                uVar8 = *puVar4;
                uVar12 = (ulong)uVar8;
                if (uVar8 == 0) goto LAB_00100778;
                if (0x20 < uVar8) goto LAB_00100630;
                piVar5 = *(int **)(puVar4 + 2);
                pSVar1 = ses + 1;
                if (uVar8 < 8) {
                  if ((uVar8 & 4) == 0) {
                    if (uVar8 == 0) goto LAB_00100736;
                    *(char *)&pSVar1->ssl_version = (char)*piVar5;
                    if ((uVar8 & 2) == 0) goto LAB_00100734;
                    *(undefined2 *)((long)&ses->tlsext_tick_lifetime_hint + uVar12 + 6) =
                         *(undefined2 *)((long)piVar5 + (uVar12 - 2));
                    lVar9 = (long)(int)*puVar4;
                  }
                  else {
                    pSVar1->ssl_version = *piVar5;
                    *(undefined4 *)((long)&ses->tlsext_tick_lifetime_hint + uVar12 + 4) =
                         *(undefined4 *)((long)piVar5 + (uVar12 - 4));
                    lVar9 = (long)(int)*puVar4;
                  }
                }
                else {
                  iVar3 = piVar5[1];
                  ses[1].ssl_version = piVar5[0];
                  ses[1].key_arg_length = iVar3;
                  *(undefined8 *)((long)&ses->tlsext_tick_lifetime_hint + (ulong)uVar8) =
                       *(undefined8 *)((long)piVar5 + ((ulong)uVar8 - 8));
                  uVar12 = (ulong)ses[1].key_arg & 0xfffffffffffffff8;
                  lVar9 = (long)pSVar1 - uVar12;
                  uVar8 = uVar8 + (int)lVar9 & 0xfffffff8;
                  if (7 < uVar8) {
                    uVar11 = 0;
                    do {
                      uVar15 = (ulong)uVar11;
                      uVar11 = uVar11 + 8;
                      *(undefined8 *)(uVar12 + uVar15) =
                           *(undefined8 *)((long)piVar5 + (uVar15 - lVar9));
                    } while (uVar11 < uVar8);
                  }
LAB_00100734:
                  uVar8 = *puVar4;
LAB_00100736:
                  lVar9 = (long)(int)uVar8;
                }
              }
              puVar4 = *(uint **)(val + 0x18);
              ses->tlsext_tick_lifetime_hint = lVar9;
              if (puVar4 == (uint *)0x0) {
LAB_00100838:
                lVar9 = 0;
              }
              else {
                uVar8 = *puVar4;
                if (uVar8 == 0) goto LAB_00100838;
                if (0x200 < uVar8) goto LAB_00100630;
                puVar6 = *(uchar **)(puVar4 + 2);
                puVar13 = ses->session_id + 8;
                if (uVar8 < 8) {
                  if ((uVar8 & 4) == 0) {
                    if (uVar8 != 0) {
                      *puVar13 = *puVar6;
                      if ((uVar8 & 2) != 0) {
                        *(undefined2 *)(ses->session_id + (ulong)uVar8 + 6) =
                             *(undefined2 *)(puVar6 + ((ulong)uVar8 - 2));
                        lVar9 = (long)(int)*puVar4;
                        goto LAB_0010083a;
                      }
                      uVar8 = *puVar4;
                    }
                    goto LAB_001007d0;
                  }
                  *(undefined4 *)puVar13 = *(undefined4 *)puVar6;
                  *(undefined4 *)(ses->session_id + (ulong)uVar8 + 4) =
                       *(undefined4 *)(puVar6 + ((ulong)uVar8 - 4));
                  lVar9 = (long)(int)*puVar4;
                }
                else {
                  *(undefined8 *)(ses->session_id + 8) = *(undefined8 *)puVar6;
                  *(undefined8 *)(ses->session_id + uVar8) =
                       *(undefined8 *)(puVar6 + ((ulong)uVar8 - 8));
                  puVar14 = (undefined8 *)((ulong)(ses->session_id + 0x10) & 0xfffffffffffffff8);
                  lVar9 = (long)puVar13 - (long)puVar14;
                  puVar13 = puVar6 + -lVar9;
                  for (uVar12 = (ulong)((int)lVar9 + uVar8 >> 3); uVar12 != 0; uVar12 = uVar12 - 1)
                  {
                    *puVar14 = *(undefined8 *)puVar13;
                    puVar13 = puVar13 + ((ulong)bVar16 * -2 + 1) * 8;
                    puVar14 = puVar14 + (ulong)bVar16 * -2 + 1;
                  }
                  uVar8 = *puVar4;
LAB_001007d0:
                  lVar9 = (long)(int)uVar8;
                }
              }
LAB_0010083a:
              *(long *)ses->key_arg = lVar9;
              if (*(long *)(val + 0x30) == 0) {
                uVar10 = ossl_time_now();
                *(undefined8 *)(ses[1].sid_ctx + 0x1c) = uVar10;
              }
              else {
                *(long *)(ses[1].sid_ctx + 0x1c) = *(long *)(val + 0x30) * 1000000000;
              }
              lVar9 = 3000000000;
              if (*(long *)(val + 0x38) != 0) {
                lVar9 = *(long *)(val + 0x38) * 1000000000;
              }
              *(long *)(ses[1].sid_ctx + 0x14) = lVar9;
              ssl_session_calculate_timeout(ses);
              X509_free(*(X509 **)&ses[1].sid_ctx_length);
              uVar10 = *(undefined8 *)(val + 0x40);
              pkey = *(EVP_PKEY **)(ses[1].session_id + 0x18);
              ses[1].sid_ctx_length = (int)uVar10;
              ses[1].sid_ctx[0] = (char)((ulong)uVar10 >> 0x20);
              ses[1].sid_ctx[1] = (char)((ulong)uVar10 >> 0x28);
              ses[1].sid_ctx[2] = (char)((ulong)uVar10 >> 0x30);
              ses[1].sid_ctx[3] = (char)((ulong)uVar10 >> 0x38);
              *(undefined8 *)(val + 0x40) = 0;
              EVP_PKEY_free(pkey);
              piVar5 = *(int **)(val + 0xc0);
              ses[1].session_id[0x18] = '\0';
              ses[1].session_id[0x19] = '\0';
              ses[1].session_id[0x1a] = '\0';
              ses[1].session_id[0x1b] = '\0';
              ses[1].session_id[0x1c] = '\0';
              ses[1].session_id[0x1d] = '\0';
              ses[1].session_id[0x1e] = '\0';
              ses[1].session_id[0x1f] = '\0';
              if (piVar5 != (int *)0x0) {
                local_48 = *(undefined8 *)(piVar5 + 2);
                lVar9 = d2i_PUBKEY_ex(0,&local_48,(long)*piVar5,param_4,param_5);
                *(long *)(ses[1].session_id + 0x18) = lVar9;
                if (lVar9 == 0) goto LAB_00100630;
              }
              puVar4 = *(uint **)(val + 0x48);
              if (puVar4 == (uint *)0x0) {
LAB_00100940:
                lVar9 = 0;
              }
              else {
                uVar8 = *puVar4;
                if (uVar8 == 0) goto LAB_00100940;
                if (0x20 < uVar8) goto LAB_00100630;
                puVar6 = *(uchar **)(puVar4 + 2);
                puVar13 = ses[1].master_key + 0x14;
                if (uVar8 < 8) {
                  if ((uVar8 & 4) == 0) {
                    if (uVar8 == 0) goto LAB_00100937;
                    *puVar13 = *puVar6;
                    if ((uVar8 & 2) == 0) goto LAB_00100935;
                    *(undefined2 *)(ses[1].master_key + (ulong)uVar8 + 0x12) =
                         *(undefined2 *)(puVar6 + ((ulong)uVar8 - 2));
                    lVar9 = (long)(int)*puVar4;
                  }
                  else {
                    *(undefined4 *)puVar13 = *(undefined4 *)puVar6;
                    *(undefined4 *)(ses[1].master_key + (ulong)uVar8 + 0x10) =
                         *(undefined4 *)(puVar6 + ((ulong)uVar8 - 4));
                    lVar9 = (long)(int)*puVar4;
                  }
                }
                else {
                  *(undefined8 *)(ses[1].master_key + 0x14) = *(undefined8 *)puVar6;
                  *(undefined8 *)(ses[1].master_key + (ulong)uVar8 + 0xc) =
                       *(undefined8 *)(puVar6 + ((ulong)uVar8 - 8));
                  uVar12 = (ulong)(ses[1].master_key + 0x1c) & 0xfffffffffffffff8;
                  lVar9 = (long)puVar13 - uVar12;
                  uVar8 = uVar8 + (int)lVar9 & 0xfffffff8;
                  if (uVar8 < 8) {
LAB_00100935:
                    uVar8 = *puVar4;
                  }
                  else {
                    uVar11 = 0;
                    do {
                      uVar15 = (ulong)uVar11;
                      uVar11 = uVar11 + 8;
                      *(undefined8 *)(uVar12 + uVar15) = *(undefined8 *)(puVar6 + (uVar15 - lVar9));
                    } while (uVar11 < uVar8);
                    uVar8 = *puVar4;
                  }
LAB_00100937:
                  lVar9 = (long)(int)uVar8;
                }
              }
              *(long *)(ses[1].master_key + 0xc) = lVar9;
              piVar5 = *(int **)(val + 0x58);
              pvVar7 = *(void **)(ses[1].krb5_client_princ + 0x38);
              *(long *)(ses[1].sid_ctx + 0xc) = (long)*(int *)(val + 0x50);
              CRYPTO_free(pvVar7);
              ses[1].krb5_client_princ[0x38] = '\0';
              ses[1].krb5_client_princ[0x39] = '\0';
              ses[1].krb5_client_princ[0x3a] = '\0';
              ses[1].krb5_client_princ[0x3b] = '\0';
              ses[1].krb5_client_princ[0x3c] = '\0';
              ses[1].krb5_client_princ[0x3d] = '\0';
              ses[1].krb5_client_princ[0x3e] = '\0';
              ses[1].krb5_client_princ[0x3f] = '\0';
              if (piVar5 != (int *)0x0) {
                lVar9 = CRYPTO_strndup(*(undefined8 *)(piVar5 + 2),(long)*piVar5,"ssl/ssl_asn1.c",
                                       0xeb);
                *(long *)(ses[1].krb5_client_princ + 0x38) = lVar9;
                if (lVar9 == 0) goto LAB_00100630;
              }
              piVar5 = *(int **)(val + 0x78);
              CRYPTO_free(*(void **)ses[1].session_id);
              ses[1].session_id[0] = '\0';
              ses[1].session_id[1] = '\0';
              ses[1].session_id[2] = '\0';
              ses[1].session_id[3] = '\0';
              ses[1].session_id[4] = '\0';
              ses[1].session_id[5] = '\0';
              ses[1].session_id[6] = '\0';
              ses[1].session_id[7] = '\0';
              if (piVar5 != (int *)0x0) {
                lVar9 = CRYPTO_strndup(*(undefined8 *)(piVar5 + 2),(long)*piVar5,"ssl/ssl_asn1.c",
                                       0xeb);
                *(long *)ses[1].session_id = lVar9;
                if (lVar9 == 0) goto LAB_00100630;
              }
              piVar5 = *(int **)(val + 0x80);
              CRYPTO_free(*(void **)(ses[1].session_id + 8));
              ses[1].session_id[8] = '\0';
              ses[1].session_id[9] = '\0';
              ses[1].session_id[10] = '\0';
              ses[1].session_id[0xb] = '\0';
              ses[1].session_id[0xc] = '\0';
              ses[1].session_id[0xd] = '\0';
              ses[1].session_id[0xe] = '\0';
              ses[1].session_id[0xf] = '\0';
              if (piVar5 != (int *)0x0) {
                lVar9 = CRYPTO_strndup(*(undefined8 *)(piVar5 + 2),(long)*piVar5,"ssl/ssl_asn1.c",
                                       0xeb);
                *(long *)(ses[1].session_id + 8) = lVar9;
                if (lVar9 == 0) goto LAB_00100630;
              }
              pvVar7 = *(void **)(ses[1].krb5_client_princ + 0x40);
              *(undefined8 *)(ses[1].krb5_client_princ + 0x50) = *(undefined8 *)(val + 0x60);
              *(undefined4 *)(ses[1].krb5_client_princ + 0x58) = *(undefined4 *)(val + 0x68);
              CRYPTO_free(pvVar7);
              piVar5 = *(int **)(val + 0x70);
              if (piVar5 == (int *)0x0) {
                ses[1].krb5_client_princ[0x40] = '\0';
                ses[1].krb5_client_princ[0x41] = '\0';
                ses[1].krb5_client_princ[0x42] = '\0';
                ses[1].krb5_client_princ[0x43] = '\0';
                ses[1].krb5_client_princ[0x44] = '\0';
                ses[1].krb5_client_princ[0x45] = '\0';
                ses[1].krb5_client_princ[0x46] = '\0';
                ses[1].krb5_client_princ[0x47] = '\0';
              }
              else {
                *(undefined8 *)(ses[1].krb5_client_princ + 0x40) = *(undefined8 *)(piVar5 + 2);
                *(long *)(ses[1].krb5_client_princ + 0x48) = (long)*piVar5;
                piVar5[2] = 0;
                piVar5[3] = 0;
              }
              piVar5 = *(int **)(val + 0x10);
              if (piVar5 == (int *)0x0) {
                uVar8 = 0;
              }
              else {
                if (*piVar5 != 1) {
                  ERR_new();
                  ERR_set_debug("ssl/ssl_asn1.c",0x17e,"d2i_SSL_SESSION_ex");
                  ERR_set_error(0x14,0x10f,0);
                  goto LAB_00100630;
                }
                uVar8 = (uint)**(byte **)(piVar5 + 2);
              }
              *(uint *)(ses[1].krb5_client_princ + 8) = uVar8;
              piVar5 = *(int **)(val + 0x88);
              CRYPTO_free(*(void **)(ses[1].krb5_client_princ + 0x78));
              ses[1].krb5_client_princ[0x78] = '\0';
              ses[1].krb5_client_princ[0x79] = '\0';
              ses[1].krb5_client_princ[0x7a] = '\0';
              ses[1].krb5_client_princ[0x7b] = '\0';
              ses[1].krb5_client_princ[0x7c] = '\0';
              ses[1].krb5_client_princ[0x7d] = '\0';
              ses[1].krb5_client_princ[0x7e] = '\0';
              ses[1].krb5_client_princ[0x7f] = '\0';
              if (piVar5 != (int *)0x0) {
                lVar9 = CRYPTO_strndup(*(undefined8 *)(piVar5 + 2),(long)*piVar5,"ssl/ssl_asn1.c",
                                       0xeb);
                *(long *)(ses[1].krb5_client_princ + 0x78) = lVar9;
                if (lVar9 == 0) goto LAB_00100630;
              }
              pvVar7 = *(void **)(ses[1].krb5_client_princ + 0x60);
              *(int *)(ses[1].krb5_client_princ + 0x90) = (int)*(undefined8 *)(val + 0x90);
              *(undefined4 *)(ses[1].krb5_client_princ + 0x5c) = *(undefined4 *)(val + 0x98);
              CRYPTO_free(pvVar7);
              piVar5 = *(int **)(val + 0xa0);
              if (piVar5 == (int *)0x0) {
                ses[1].krb5_client_princ[0x60] = '\0';
                ses[1].krb5_client_princ[0x61] = '\0';
                ses[1].krb5_client_princ[0x62] = '\0';
                ses[1].krb5_client_princ[99] = '\0';
                ses[1].krb5_client_princ[100] = '\0';
                ses[1].krb5_client_princ[0x65] = '\0';
                ses[1].krb5_client_princ[0x66] = '\0';
                ses[1].krb5_client_princ[0x67] = '\0';
                ses[1].krb5_client_princ[0x68] = '\0';
                ses[1].krb5_client_princ[0x69] = '\0';
                ses[1].krb5_client_princ[0x6a] = '\0';
                ses[1].krb5_client_princ[0x6b] = '\0';
                ses[1].krb5_client_princ[0x6c] = '\0';
                ses[1].krb5_client_princ[0x6d] = '\0';
                ses[1].krb5_client_princ[0x6e] = '\0';
                ses[1].krb5_client_princ[0x6f] = '\0';
              }
              else {
                *(undefined8 *)(ses[1].krb5_client_princ + 0x60) = *(undefined8 *)(piVar5 + 2);
                *(long *)(ses[1].krb5_client_princ + 0x68) = (long)*piVar5;
                piVar5[2] = 0;
                piVar5[3] = 0;
              }
              pvVar7 = *(void **)(ses[1].krb5_client_princ + 0x80);
              ses[1].krb5_client_princ[0x70] = (uchar)*(undefined4 *)(val + 0xa8);
              CRYPTO_free(pvVar7);
              piVar5 = *(int **)(val + 0xb0);
              if (piVar5 == (int *)0x0) {
                ses[1].krb5_client_princ[0x80] = '\0';
                ses[1].krb5_client_princ[0x81] = '\0';
                ses[1].krb5_client_princ[0x82] = '\0';
                ses[1].krb5_client_princ[0x83] = '\0';
                ses[1].krb5_client_princ[0x84] = '\0';
                ses[1].krb5_client_princ[0x85] = '\0';
                ses[1].krb5_client_princ[0x86] = '\0';
                ses[1].krb5_client_princ[0x87] = '\0';
                ses[1].krb5_client_princ[0x88] = '\0';
                ses[1].krb5_client_princ[0x89] = '\0';
                ses[1].krb5_client_princ[0x8a] = '\0';
                ses[1].krb5_client_princ[0x8b] = '\0';
                ses[1].krb5_client_princ[0x8c] = '\0';
                ses[1].krb5_client_princ[0x8d] = '\0';
                ses[1].krb5_client_princ[0x8e] = '\0';
                ses[1].krb5_client_princ[0x8f] = '\0';
              }
              else {
                *(undefined8 *)(ses[1].krb5_client_princ + 0x80) = *(undefined8 *)(piVar5 + 2);
                *(long *)(ses[1].krb5_client_princ + 0x88) = (long)*piVar5;
                piVar5[2] = 0;
                piVar5[3] = 0;
              }
              ASN1_item_free(val,(ASN1_ITEM *)local_it_1);
              if ((param_1 != (long *)0x0) && (*param_1 == 0)) {
                *param_1 = (long)ses;
              }
              *param_2 = local_50;
              goto LAB_00100650;
            }
          }
          else {
            ERR_new();
            ERR_set_debug("ssl/ssl_asn1.c",0x12e,"d2i_SSL_SESSION_ex");
            ERR_set_error(0x14,0x89,0);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("ssl/ssl_asn1.c",0x125,"d2i_SSL_SESSION_ex");
          ERR_set_error(0x14,0x103,0);
        }
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/ssl_asn1.c",0x11e,"d2i_SSL_SESSION_ex");
        ERR_set_error(0x14,0xfe,0);
      }
LAB_00100630:
      ASN1_item_free(val,(ASN1_ITEM *)local_it_1);
      if (param_1 == (long *)0x0) goto LAB_00100646;
    }
    if ((SSL_SESSION *)*param_1 != ses) goto LAB_00100646;
  }
  ses = (SSL_SESSION *)0x0;
LAB_00100650:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ses;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



SSL_SESSION * d2i_SSL_SESSION(SSL_SESSION **a,uchar **pp,long length)

{
  SSL_SESSION *pSVar1;
  
  pSVar1 = (SSL_SESSION *)d2i_SSL_SESSION_ex();
  return pSVar1;
}


