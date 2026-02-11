
bool addr_eq(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = BIO_ADDR_family();
  if (iVar1 != 0) {
    if (param_2 == (void *)0x0) {
      return false;
    }
LAB_00100048:
    iVar1 = memcmp(param_1,param_2,0x70);
    return iVar1 == 0;
  }
  if (param_2 != (void *)0x0) {
    iVar1 = BIO_ADDR_family(param_2);
    if (iVar1 != 0) goto LAB_00100048;
  }
  return true;
}



undefined8 * ossl_qtx_new(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (0x4af < (ulong)param_1[3]) {
    puVar4 = (undefined8 *)CRYPTO_zalloc(0x400,"ssl/quic/quic_record_tx.c",0x78);
    if (puVar4 != (undefined8 *)0x0) {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      puVar4[0x6a] = param_1[2];
      uVar1 = param_1[3];
      *puVar4 = uVar2;
      puVar4[1] = uVar3;
      puVar4[0x6d] = uVar1;
      puVar4[0x6b] = param_1[4];
      puVar4[0x6c] = param_1[5];
    }
    return puVar4;
  }
  return (undefined8 *)0x0;
}



void ossl_qtx_free(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  puVar2 = *(undefined8 **)((long)param_1 + 0x388);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    CRYPTO_free(puVar2);
    puVar2 = puVar1;
  }
  puVar2 = *(undefined8 **)((long)param_1 + 0x370);
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    CRYPTO_free(puVar2);
    puVar2 = puVar1;
  }
  CRYPTO_free(*(void **)((long)param_1 + 0x3b0));
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 1;
    ossl_qrl_enc_level_set_discard((long)param_1 + 0x10,iVar3);
    iVar3 = iVar4;
  } while (iVar4 != 4);
  CRYPTO_free(param_1);
  return;
}



void ossl_qtx_set_mutator(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x3d0) = param_2;
  *(undefined8 *)(param_1 + 0x3d8) = param_3;
  *(undefined8 *)(param_1 + 0x3e0) = param_4;
  return;
}



void ossl_qtx_set_qlog_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x358) = param_2;
  *(undefined8 *)(param_1 + 0x360) = param_3;
  return;
}



undefined8
ossl_qtx_provide_secret
          (undefined8 *param_1,uint param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5
          ,undefined8 param_6)

{
  undefined8 uVar1;
  
  if (3 < param_2) {
    return 0;
  }
  uVar1 = ossl_qrl_enc_level_set_provide_secret
                    (param_1 + 2,*param_1,param_1[1],param_2,param_3,param_4,param_5,param_6,0,1);
  return uVar1;
}



undefined8 ossl_qtx_discard_enc_level(long param_1,uint param_2)

{
  if (3 < param_2) {
    return 0;
  }
  ossl_qrl_enc_level_set_discard(param_1 + 0x10);
  return 1;
}



bool ossl_qtx_is_enc_level_provisioned(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10,param_2,1);
  return lVar1 != 0;
}



undefined8
ossl_qtx_calculate_ciphertext_payload_len
          (long param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = ossl_qrl_enc_level_set_get(param_1 + 0x10,param_2,1);
  if (lVar2 != 0) {
    uVar1 = ossl_qrl_get_suite_cipher_tag_len(*(undefined4 *)(lVar2 + 0x60));
    *param_4 = (ulong)uVar1 + param_3;
    return 1;
  }
  *param_4 = 0;
  return 0;
}



undefined8
ossl_qtx_calculate_plaintext_payload_len
          (long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = ossl_qrl_enc_level_set_get(param_1 + 0x10,param_2,1);
  if (lVar2 != 0) {
    uVar1 = ossl_qrl_get_suite_cipher_tag_len(*(undefined4 *)(lVar2 + 0x60));
    if (uVar1 < param_3) {
      *param_4 = param_3 - uVar1;
      return 1;
    }
  }
  *param_4 = 0;
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_qtx_finish_dgram(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x3b0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = puVar1[2];
    if (lVar4 == 0) {
      puVar2 = *(undefined8 **)(param_1 + 0x378);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = puVar1;
      }
      lVar4 = *(long *)(param_1 + 0x370);
      puVar1[1] = puVar2;
      *puVar1 = 0;
      *(undefined8 **)(param_1 + 0x378) = puVar1;
      if (lVar4 == 0) {
        *(undefined8 **)(param_1 + 0x370) = puVar1;
      }
      *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x380) + 1;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 0x390);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = puVar1;
      }
      lVar3 = *(long *)(param_1 + 0x388);
      puVar1[1] = puVar2;
      *puVar1 = 0;
      *(undefined8 **)(param_1 + 0x390) = puVar1;
      if (lVar3 == 0) {
        *(undefined8 **)(param_1 + 0x388) = puVar1;
      }
      *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) + lVar4;
      lVar4 = *(long *)(param_1 + 0x3a0) + _UNK_00101758;
      *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + __LC1;
      *(long *)(param_1 + 0x3a0) = lVar4;
    }
    *(long *)(param_1 + 0x3c8) = *(long *)(param_1 + 0x3c8) + 1;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3b8) = 0;
  }
  return;
}



undefined8 ossl_qtx_write_pkt(long param_1,undefined8 *param_2)

{
  uchar *in;
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 (*pauVar4) [16];
  EVP_CIPHER_CTX *ctx;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 (*pauVar14) [16];
  long lVar15;
  ulong uVar16;
  uchar *iv;
  uchar *puVar17;
  byte bVar18;
  size_t __n;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  byte *pbVar25;
  long in_FS_OFFSET;
  int local_128;
  int local_108;
  byte *local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  ulong local_c0;
  undefined1 local_b8 [32];
  int local_98 [16];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(param_2 + 6);
  if ((byte *)*param_2 == (byte *)0x0) goto LAB_00100514;
  bVar18 = *(byte *)*param_2;
  if (bVar18 - 1 < 5) {
    iVar9 = *(int *)(CSWTCH_25 + (ulong)(bVar18 - 1) * 4);
    if ((bVar18 & 0xfd) == 4) goto LAB_00100a98;
    if ((iVar9 == 4) || (iVar8 = ossl_qrl_enc_level_set_have_el(param_1 + 0x10), iVar8 != 1))
    goto LAB_00100514;
  }
  else {
    if ((bVar18 & 0xfd) != 4) goto LAB_00100514;
    iVar9 = 4;
LAB_00100a98:
    ossl_qtx_finish_dgram(param_1);
  }
  pauVar14 = *(undefined1 (**) [16])(param_1 + 0x3b0);
  bVar6 = false;
  if ((pauVar14 != (undefined1 (*) [16])0x0) && (*(long *)pauVar14[1] != 0)) {
    iVar8 = addr_eq(pauVar14 + 2,param_2[3]);
    if ((iVar8 == 0) || (iVar8 = addr_eq(*(long *)(param_1 + 0x3b0) + 0x90,param_2[4]), iVar8 == 0))
    {
      bVar6 = false;
      ossl_qtx_finish_dgram(param_1);
      pauVar14 = *(undefined1 (**) [16])(param_1 + 0x3b0);
    }
    else {
      pauVar14 = *(undefined1 (**) [16])(param_1 + 0x3b0);
      bVar6 = true;
    }
  }
  uVar24 = *(ulong *)(param_1 + 0x368);
  if (pauVar14 == (undefined1 (*) [16])0x0) goto LAB_00100a08;
LAB_001004eb:
  if (uVar24 <= *(ulong *)(pauVar14[1] + 8)) {
    if (!bVar6) {
      if (param_2[3] == 0) {
        BIO_ADDR_clear(pauVar14 + 2);
      }
      else {
        iVar8 = BIO_ADDR_copy();
        if (iVar8 == 0) goto LAB_00100514;
      }
      if (param_2[4] == 0) {
        BIO_ADDR_clear(pauVar14 + 9);
      }
      else {
        iVar8 = BIO_ADDR_copy();
        if (iVar8 == 0) goto LAB_00100514;
      }
    }
    pbVar25 = (byte *)*param_2;
    lVar21 = param_2[1];
    uVar24 = param_2[2];
    if (*(code **)(param_1 + 0x3d0) == (code *)0x0) {
      local_e0 = pbVar25;
      local_d8 = lVar21;
      local_d0 = uVar24;
      if ((*pbVar25 & 0xfd) == 4) goto LAB_00100afe;
LAB_001005ef:
      uVar24 = local_d0;
      lVar21 = local_d8;
      pbVar25 = local_e0;
      lVar10 = ossl_qrl_enc_level_set_get(param_1 + 0x10,iVar9,1);
      if (lVar10 == 0) {
        pcVar5 = *(code **)(param_1 + 0x3d8);
        goto joined_r0x00100cc2;
      }
      bVar7 = true;
      uVar19 = 0x15;
    }
    else {
      iVar8 = (**(code **)(param_1 + 0x3d0))
                        (pbVar25,lVar21,uVar24,&local_e0,&local_d8,&local_d0,
                         *(undefined8 *)(param_1 + 0x3e0));
      if (iVar8 == 0) goto LAB_00100514;
      if ((*local_e0 & 0xfd) != 4) goto LAB_001005ef;
LAB_00100afe:
      bVar7 = false;
      lVar10 = 0;
      uVar19 = 7;
      uVar24 = local_d0;
      lVar21 = local_d8;
      pbVar25 = local_e0;
    }
    lVar2 = *(long *)pauVar14[1];
    uVar23 = *(long *)(pauVar14[1] + 8) - lVar2;
    if (uVar23 < uVar19) {
LAB_001009c0:
      pcVar5 = *(code **)(param_1 + 0x3d8);
      *(long *)pauVar14[1] = lVar2;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(*(undefined8 *)(param_1 + 0x3e0));
      }
      if (bVar6) goto code_r0x001009e6;
      goto LAB_00100514;
    }
    if (*pbVar25 == 5) {
      pbVar25[1] = pbVar25[1] & 0xfd | ((byte)*(undefined8 *)(lVar10 + 0x50) & 1) * '\x02';
    }
    if (uVar24 != 0) {
      lVar20 = 0;
      lVar10 = lVar21;
      do {
        lVar20 = lVar20 + *(long *)(lVar10 + 8);
        lVar10 = lVar10 + 0x10;
      } while (uVar24 * 0x10 + lVar21 != lVar10);
      if (lVar20 != 0) {
        if (bVar7) {
          ossl_qtx_calculate_ciphertext_payload_len(param_1,iVar9,lVar20,&local_c8);
          lVar20 = local_c8;
        }
        local_c8 = lVar20;
        pbVar25[0x50] = 0;
        pbVar25[0x51] = 0;
        pbVar25[0x52] = 0;
        pbVar25[0x53] = 0;
        pbVar25[0x54] = 0;
        pbVar25[0x55] = 0;
        pbVar25[0x56] = 0;
        pbVar25[0x57] = 0;
        *(long *)(pbVar25 + 0x48) = local_c8;
        iVar8 = ossl_quic_wire_get_encoded_pkt_hdr_len(pbVar25[8],pbVar25);
        if ((long)iVar8 != 0) {
          if (uVar23 < (ulong)(iVar8 + local_c8)) goto LAB_001009c0;
          if (((*pbVar25 & 0xfd) == 4) ||
             (iVar8 = ossl_quic_wire_encode_pkt_hdr_pn
                                (param_2[5],pbVar25 + 0x32,pbVar25[1] >> 2 & 0xf), iVar8 != 0)) {
            lVar10 = *(long *)pauVar14[1];
            local_c0 = 0;
            in = pauVar14[0x10] + lVar10;
            iVar8 = WPACKET_init_static_len(local_98,in,*(long *)(pauVar14[1] + 8) - lVar10,0);
            if (iVar8 != 0) {
              iVar8 = ossl_quic_wire_encode_pkt_hdr(local_98,pbVar25[8],pbVar25);
              if (iVar8 == 0) {
LAB_00100c9c:
                WPACKET_finish(local_98);
              }
              else {
                iVar8 = WPACKET_get_total_written(local_98,&local_c0);
                if (iVar8 == 0) goto LAB_00100c9c;
                WPACKET_finish(local_98);
                if (*(code **)(param_1 + 1000) != (code *)0x0) {
                  (**(code **)(param_1 + 1000))
                            (1,1,0x201,in,local_c0,*(undefined8 *)(param_1 + 0x3f8),
                             *(undefined8 *)(param_1 + 0x3f0));
                }
                lVar20 = local_c0 + *(long *)pauVar14[1];
                *(long *)pauVar14[1] = lVar20;
                if (!bVar7) {
                  uVar19 = 0;
                  lVar10 = 0;
                  do {
                    plVar11 = (long *)(uVar19 * 0x10 + lVar21);
                    while( true ) {
                      lVar2 = plVar11[1];
                      __n = lVar2 - lVar10;
                      if (__n != 0) break;
                      uVar19 = uVar19 + 1;
                      plVar11 = plVar11 + 2;
                      lVar10 = 0;
                      if (uVar19 == uVar24) goto LAB_001008fa;
                    }
                    memcpy(pauVar14[0x10] + *(long *)pauVar14[1],(void *)(lVar10 + *plVar11),__n);
                    *(size_t *)pauVar14[1] = *(long *)pauVar14[1] + __n;
                    lVar10 = lVar2;
                  } while (uVar19 < uVar24);
LAB_001008fa:
                  uVar24 = local_d0;
                  lVar21 = local_d8;
                  pbVar25 = local_e0;
                  uVar13 = *(undefined8 *)(param_1 + 0x3c8);
                  uVar3 = param_2[5];
                  if (*(code **)(param_1 + 0x358) == (code *)0x0) {
                    uVar12 = 0;
                  }
                  else {
                    uVar12 = (**(code **)(param_1 + 0x358))(*(undefined8 *)(param_1 + 0x360));
                  }
                  ossl_qlog_event_transport_packet_sent(uVar12,pbVar25,uVar3,lVar21,uVar24,uVar13);
                  if (*(code **)(param_1 + 0x3d8) != (code *)0x0) {
                    (**(code **)(param_1 + 0x3d8))(*(undefined8 *)(param_1 + 0x3e0));
                  }
                  pbVar25 = (byte *)*param_2;
                  *(long *)(param_1 + 0x3b8) = *(long *)(param_1 + 0x3b8) + 1;
                  if ((((*pbVar25 & 0xfd) == 4) || (*pbVar25 == 5)) || ((uVar1 & 1) == 0)) {
                    ossl_qtx_finish_dgram(param_1);
                  }
                  uVar13 = 1;
                  goto LAB_00100516;
                }
                uVar19 = param_2[5];
                local_c0 = local_c0 & 0xffffffff00000000;
                local_98[0] = 0;
                lVar15 = ossl_qrl_enc_level_set_get(param_1 + 0x10,iVar9,1);
                if (lVar15 == 0) {
                  ERR_new();
                  uVar13 = 0x1f6;
                  goto LAB_00100fd5;
                }
                uVar23 = *(ulong *)(lVar15 + 0x58);
                uVar16 = ossl_qrl_get_suite_max_pkt(*(undefined4 *)(lVar15 + 0x60));
                if (uVar23 < uVar16) {
                  ctx = *(EVP_CIPHER_CTX **)(lVar15 + 0x30);
                  if (ctx == (EVP_CIPHER_CTX *)0x0) {
                    ERR_new();
                    uVar13 = 0x20a;
LAB_00100fd5:
                    ERR_set_debug("ssl/quic/quic_record_tx.c",uVar13,"qtx_encrypt_into_txe");
                    ERR_set_error(0x14,0xc0103,0);
                  }
                  else {
                    iVar9 = EVP_CIPHER_CTX_get_iv_length(ctx);
                    if (iVar9 < 8) {
                      ERR_new();
                      uVar13 = 0x211;
                      goto LAB_00100fd5;
                    }
                    iv = (uchar *)__memcpy_chk(local_58,lVar15 + 0x6a,(long)iVar9);
                    iVar8 = 0;
                    puVar17 = iv + iVar9;
                    do {
                      bVar18 = (byte)iVar8;
                      iVar8 = iVar8 + 8;
                      puVar17[-1] = puVar17[-1] ^ (byte)(uVar19 >> (bVar18 & 0x3f));
                      puVar17 = puVar17 + -1;
                    } while (iVar8 != 0x40);
                    iVar9 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,iv,1)
                    ;
                    if (iVar9 == 1) {
                      local_128 = (int)lVar20;
                      local_108 = (int)lVar10;
                      lVar10 = 0;
                      iVar9 = EVP_CipherUpdate(ctx,(uchar *)0x0,(int *)&local_c0,in,
                                               local_128 - local_108);
                      uVar19 = 0;
                      if (iVar9 != 1) {
                        ERR_new();
                        uVar13 = 0x221;
                        goto LAB_00100e2a;
                      }
                      do {
                        plVar11 = (long *)(uVar19 * 0x10 + lVar21);
                        while( true ) {
                          lVar20 = plVar11[1];
                          lVar22 = lVar20 - lVar10;
                          if (lVar22 != 0) break;
                          uVar19 = uVar19 + 1;
                          plVar11 = plVar11 + 2;
                          lVar10 = 0;
                          if (uVar19 == uVar24) goto LAB_00100f32;
                        }
                        iVar9 = EVP_CipherUpdate(ctx,pauVar14[0x10] + *(long *)pauVar14[1],
                                                 (int *)&local_c0,(uchar *)(lVar10 + *plVar11),
                                                 (int)lVar22);
                        if (iVar9 != 1) {
                          ERR_new();
                          uVar13 = 0x230;
                          goto LAB_00100e2a;
                        }
                        *(long *)pauVar14[1] = *(long *)pauVar14[1] + lVar22;
                        lVar10 = lVar20;
                      } while (uVar19 < uVar24);
LAB_00100f32:
                      iVar9 = EVP_CipherFinal_ex(ctx,(uchar *)0x0,local_98);
                      if (iVar9 != 1) {
                        ERR_new();
                        uVar13 = 0x23f;
                        goto LAB_00100e2a;
                      }
                      iVar9 = EVP_CIPHER_CTX_ctrl(ctx,0x10,*(int *)(lVar15 + 100),
                                                  pauVar14[0x10] + *(long *)pauVar14[1]);
                      if (iVar9 != 1) {
                        ERR_new();
                        uVar13 = 0x245;
                        goto LAB_00100e2a;
                      }
                      *(ulong *)pauVar14[1] = *(long *)pauVar14[1] + (ulong)*(uint *)(lVar15 + 100);
                      iVar9 = ossl_quic_hdr_protector_encrypt(lVar15,local_b8);
                      if (iVar9 != 0) {
                        *(long *)(lVar15 + 0x58) = *(long *)(lVar15 + 0x58) + 1;
                        goto LAB_001008fa;
                      }
                    }
                    else {
                      ERR_new();
                      uVar13 = 0x21b;
LAB_00100e2a:
                      ERR_set_debug("ssl/quic/quic_record_tx.c",uVar13,"qtx_encrypt_into_txe");
                      ERR_set_error(0x14,0x80006,0);
                    }
                  }
                }
                else {
                  ERR_new();
                  ERR_set_debug("ssl/quic/quic_record_tx.c",0x1ff,"qtx_encrypt_into_txe");
                  ERR_set_error(0x14,0x18b,0);
                }
              }
            }
          }
        }
      }
    }
    pcVar5 = *(code **)(param_1 + 0x3d8);
    *(long *)pauVar14[1] = lVar2;
joined_r0x00100cc2:
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(*(undefined8 *)(param_1 + 0x3e0));
    }
    goto LAB_00100514;
  }
  if (uVar24 < 0xfffffffffffffeff) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_00100514:
  uVar13 = 0;
LAB_00100516:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x001009e6:
  bVar6 = false;
  ossl_qtx_finish_dgram(param_1);
  pauVar14 = *(undefined1 (**) [16])(param_1 + 0x3b0);
  uVar24 = *(ulong *)(param_1 + 0x368);
  if (pauVar14 != (undefined1 (*) [16])0x0) goto LAB_001004eb;
LAB_00100a08:
  pauVar14 = *(undefined1 (**) [16])(param_1 + 0x370);
  if (pauVar14 == (undefined1 (*) [16])0x0) {
    if ((0xfffffffffffffefe < uVar24) ||
       (pauVar14 = (undefined1 (*) [16])
                   CRYPTO_malloc((int)uVar24 + 0x100,"ssl/quic/quic_record_tx.c",0xe0),
       pauVar14 == (undefined1 (*) [16])0x0)) goto LAB_00100514;
    plVar11 = *(long **)(param_1 + 0x378);
    *(ulong *)(pauVar14[1] + 8) = uVar24;
    *(undefined8 *)pauVar14[1] = 0;
    if (plVar11 != (long *)0x0) {
      *plVar11 = (long)pauVar14;
    }
    pauVar4 = *(undefined1 (**) [16])(param_1 + 0x370);
    *(long **)(*pauVar14 + 8) = plVar11;
    *(undefined8 *)*pauVar14 = 0;
    *(undefined1 (**) [16])(param_1 + 0x378) = pauVar14;
    if (pauVar4 == (undefined1 (*) [16])0x0) {
      *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x380) + 1;
      goto LAB_00100a18;
    }
    lVar21 = *(long *)(param_1 + 0x380);
    *(long *)(param_1 + 0x380) = lVar21 + 1;
    if (pauVar14 == pauVar4) goto LAB_00100a18;
    *(long **)(param_1 + 0x378) = plVar11;
    lVar10 = 0;
    if (plVar11 == (long *)0x0) goto LAB_00100a54;
LAB_00100a44:
    *plVar11 = lVar10;
    lVar10 = *(long *)*pauVar14;
  }
  else {
LAB_00100a18:
    lVar10 = *(long *)*pauVar14;
    plVar11 = *(long **)(*pauVar14 + 8);
    *(long *)(param_1 + 0x370) = lVar10;
    lVar21 = *(long *)(param_1 + 0x380) + -1;
    if (*(undefined1 (**) [16])(param_1 + 0x378) == pauVar14) {
      *(long **)(param_1 + 0x378) = plVar11;
    }
    if (plVar11 != (long *)0x0) goto LAB_00100a44;
  }
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar11;
  }
LAB_00100a54:
  *(long *)(param_1 + 0x380) = lVar21;
  *pauVar14 = (undefined1  [16])0x0;
  uVar24 = *(ulong *)(param_1 + 0x368);
  *(undefined1 (**) [16])(param_1 + 0x3b0) = pauVar14;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)pauVar14[1] = 0;
  goto LAB_001004eb;
}



undefined8 ossl_qtx_flush_net(long param_1)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  long local_560;
  ulong local_550;
  long local_548 [161];
  long local_40;
  
  plVar6 = *(long **)(param_1 + 0x388);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar6 != (long *)0x0) {
    if (*(long *)(param_1 + 0x350) == 0) {
LAB_001013d9:
      uVar4 = 0xfffffffe;
      goto LAB_0010138a;
    }
    local_560 = 0;
    do {
      uVar9 = 0;
      plVar8 = local_548;
      do {
        plVar7 = plVar6 + 4;
        *plVar8 = (long)(plVar6 + 0x20);
        lVar5 = plVar6[2];
        plVar8[4] = 0;
        plVar8[1] = lVar5;
        iVar3 = BIO_ADDR_family(plVar7);
        if (iVar3 == 0) {
          plVar7 = (long *)0x0;
        }
        plVar8[2] = (long)plVar7;
        plVar7 = plVar6 + 0x12;
        iVar3 = BIO_ADDR_family(plVar7);
        plVar6 = (long *)*plVar6;
        if (iVar3 == 0) {
          plVar7 = (long *)0x0;
        }
        uVar9 = uVar9 + 1;
        plVar8[3] = (long)plVar7;
      } while ((plVar6 != (long *)0x0) && (plVar8 = plVar8 + 5, uVar9 < 0x20));
      ERR_set_mark();
      iVar3 = BIO_sendmmsg(*(undefined8 *)(param_1 + 0x350),local_548,0x28,uVar9,0,&local_550);
      if (iVar3 == 0) {
        uVar9 = ERR_peek_last_error();
        iVar3 = BIO_err_is_non_fatal(uVar9 & 0xffffffff);
        if (iVar3 == 0) {
          ERR_clear_last_mark();
          goto LAB_001013d9;
        }
        ERR_pop_to_mark();
        break;
      }
      if (local_550 == 0) {
        ERR_clear_last_mark();
        break;
      }
      ERR_clear_last_mark();
      if (local_550 != 0) {
        uVar9 = 0;
        plVar6 = local_548;
        do {
          if (*(code **)(param_1 + 1000) != (code *)0x0) {
            (**(code **)(param_1 + 1000))
                      (1,1,0x200,*plVar6,plVar6[1],*(undefined8 *)(param_1 + 0x3f8),
                       *(undefined8 *)(param_1 + 0x3f0));
          }
          pauVar2 = *(undefined1 (**) [16])(param_1 + 0x388);
          lVar5 = *(long *)*pauVar2;
          plVar8 = *(long **)(*pauVar2 + 8);
          *(long *)(param_1 + 0x388) = lVar5;
          if (pauVar2 == *(undefined1 (**) [16])(param_1 + 0x390)) {
            *(long **)(param_1 + 0x390) = plVar8;
          }
          if (plVar8 != (long *)0x0) {
            *plVar8 = lVar5;
            lVar5 = *(long *)*pauVar2;
          }
          if (lVar5 != 0) {
            *(long **)(lVar5 + 8) = plVar8;
          }
          *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + -1;
          *pauVar2 = (undefined1  [16])0x0;
          lVar5 = *(long *)pauVar2[1];
          puVar1 = *(undefined8 **)(param_1 + 0x378);
          *(long *)(param_1 + 0x3a0) = *(long *)(param_1 + 0x3a0) + -1;
          *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) - lVar5;
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = pauVar2;
          }
          lVar5 = *(long *)(param_1 + 0x370);
          *(undefined8 **)(*pauVar2 + 8) = puVar1;
          *(undefined8 *)*pauVar2 = 0;
          *(undefined1 (**) [16])(param_1 + 0x378) = pauVar2;
          if (lVar5 == 0) {
            *(undefined1 (**) [16])(param_1 + 0x370) = pauVar2;
          }
          uVar9 = uVar9 + 1;
          *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x380) + 1;
          plVar6 = plVar6 + 5;
        } while (uVar9 < local_550);
        local_560 = local_560 + local_550;
      }
      plVar6 = *(long **)(param_1 + 0x388);
    } while (plVar6 != (long *)0x0);
    if (local_560 == 0) {
      uVar4 = 0xffffffff;
      goto LAB_0010138a;
    }
  }
  uVar4 = 1;
LAB_0010138a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_qtx_pop_net(long param_1,long *param_2)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  uVar5 = 0;
  lVar7 = *(long *)(param_1 + 0x388);
  if (lVar7 != 0) {
    *param_2 = lVar7 + 0x100;
    lVar6 = *(long *)(lVar7 + 0x10);
    param_2[4] = 0;
    param_2[1] = lVar6;
    iVar4 = BIO_ADDR_family(lVar7 + 0x20);
    lVar6 = lVar7 + 0x20;
    if (iVar4 == 0) {
      lVar6 = 0;
    }
    param_2[2] = lVar6;
    iVar4 = BIO_ADDR_family(lVar7 + 0x90);
    pauVar1 = *(undefined1 (**) [16])(param_1 + 0x388);
    lVar7 = lVar7 + 0x90;
    if (iVar4 == 0) {
      lVar7 = 0;
    }
    lVar6 = *(long *)*pauVar1;
    plVar2 = *(long **)(*pauVar1 + 8);
    param_2[3] = lVar7;
    *(long *)(param_1 + 0x388) = lVar6;
    if (pauVar1 == *(undefined1 (**) [16])(param_1 + 0x390)) {
      *(long **)(param_1 + 0x390) = plVar2;
    }
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar6;
      lVar6 = *(long *)*pauVar1;
    }
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar2;
    }
    *(long *)(param_1 + 0x398) = *(long *)(param_1 + 0x398) + -1;
    *pauVar1 = (undefined1  [16])0x0;
    lVar7 = *(long *)pauVar1[1];
    puVar3 = *(undefined8 **)(param_1 + 0x378);
    *(long *)(param_1 + 0x3a0) = *(long *)(param_1 + 0x3a0) + -1;
    *(long *)(param_1 + 0x3a8) = *(long *)(param_1 + 0x3a8) - lVar7;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = pauVar1;
    }
    lVar7 = *(long *)(param_1 + 0x370);
    *(undefined8 **)(*pauVar1 + 8) = puVar3;
    *(undefined8 *)*pauVar1 = 0;
    *(undefined1 (**) [16])(param_1 + 0x378) = pauVar1;
    if (lVar7 == 0) {
      *(undefined1 (**) [16])(param_1 + 0x370) = pauVar1;
    }
    *(long *)(param_1 + 0x380) = *(long *)(param_1 + 0x380) + 1;
    uVar5 = 1;
  }
  return uVar5;
}



void ossl_qtx_set_bio(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x350) = param_2;
  return;
}



bool ossl_qtx_set_mdpl(long param_1,ulong param_2)

{
  if (0x4af < param_2) {
    *(ulong *)(param_1 + 0x368) = param_2;
  }
  return 0x4af < param_2;
}



undefined8 ossl_qtx_get_mdpl(long param_1)

{
  return *(undefined8 *)(param_1 + 0x368);
}



undefined8 ossl_qtx_get_queue_len_datagrams(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3a0);
}



undefined8 ossl_qtx_get_queue_len_bytes(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3a8);
}



undefined8 ossl_qtx_get_cur_dgram_len_bytes(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x3b0) != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x3b0) + 0x10);
  }
  return uVar1;
}



undefined8 ossl_qtx_get_unflushed_pkt_count(long param_1)

{
  return *(undefined8 *)(param_1 + 0x3b8);
}



void ossl_qtx_trigger_key_update(long param_1)

{
  ossl_qrl_enc_level_set_key_update(param_1 + 0x10,3);
  return;
}



undefined8 ossl_qtx_get_cur_epoch_pkt_count(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10,param_2,1);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x58);
  }
  return 0xffffffffffffffff;
}



undefined8 ossl_qtx_get_max_epoch_pkt_count(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10,param_2,1);
  if (lVar1 != 0) {
    uVar2 = ossl_qrl_get_suite_max_pkt(*(undefined4 *)(lVar1 + 0x60));
    return uVar2;
  }
  return 0xffffffffffffffff;
}



void ossl_qtx_set_msg_callback(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 1000) = param_2;
  *(undefined8 *)(param_1 + 0x3f8) = param_3;
  return;
}



void ossl_qtx_set_msg_callback_arg(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x3f0) = param_2;
  return;
}



undefined8 ossl_qtx_get_key_epoch(long param_1)

{
  long lVar1;
  
  lVar1 = ossl_qrl_enc_level_set_get(param_1 + 0x10,3,1);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x50);
  }
  return 0;
}


