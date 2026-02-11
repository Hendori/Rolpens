
bool tls_construct_client_hello(SSL *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  EVP_MD_CTX *pEVar2;
  SSL_METHOD *pSVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  stack_st_SSL_CIPHER *psVar9;
  long lVar10;
  int *piVar11;
  char *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  void **__src;
  GEN_SESSION_CB __n;
  long in_FS_OFFSET;
  bool bVar16;
  undefined4 local_54;
  long local_48;
  long local_40;
  
  pEVar2 = param_1[3].write_hash;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar3 = param_1->method;
  iVar5 = ssl_set_client_hello_version();
  if (iVar5 == 0) {
    if (((pEVar2 == (EVP_MD_CTX *)0x0) ||
        (iVar5 = ssl_version_supported(param_1,*(undefined4 *)&pEVar2->digest,0), iVar5 == 0)) ||
       (iVar5 = SSL_SESSION_is_resumable(pEVar2), iVar5 == 0)) {
      if (*(int *)&param_1[3].cipher_list_by_id == 0) {
        iVar5 = ssl_get_new_session(param_1,0);
        if (iVar5 == 0) goto LAB_00100373;
        goto LAB_001002e2;
      }
      if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) goto LAB_001000aa;
LAB_00100088:
      plVar8 = &param_1->verify_result;
      do {
        if ((char)*plVar8 != '\0') goto LAB_001000aa;
        plVar8 = (long *)((long)plVar8 + 1);
      } while (plVar8 != (long *)&param_1->references);
LAB_0010030d:
      iVar5 = ssl_fill_hello_random(param_1,0,&param_1->verify_result,0x20,0);
      if (0 < iVar5) goto LAB_001000aa;
      ERR_new();
      pcVar12 = "tls_construct_client_hello";
      uVar14 = 0x4c1;
    }
    else {
LAB_001002e2:
      if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) != 0) goto LAB_00100088;
      if (*(int *)&param_1[3].cipher_list_by_id == 0) goto LAB_0010030d;
LAB_001000aa:
      iVar5 = WPACKET_put_bytes__(param_2,(long)*(int *)((long)&param_1[3].max_cert_list + 4),2);
      if ((iVar5 == 0) || (iVar5 = WPACKET_memcpy(param_2,&param_1->verify_result,0x20), iVar5 == 0)
         ) {
        ERR_new();
        pcVar12 = "tls_construct_client_hello";
        uVar14 = 0x4e8;
      }
      else {
        pEVar2 = param_1[3].write_hash;
        if ((*(int *)((long)&param_1->s2 + 4) == 0) && (*(int *)&pEVar2->digest != 0x304)) {
          __n = (GEN_SESSION_CB)pEVar2[0xc].flags;
          __src = &pEVar2[0xc].md_data;
          if (param_1->state == 0x304) {
            param_1[3].generate_session_id = __n;
            memcpy(param_1[3].sid_ctx + 0xc,__src,(size_t)__n);
          }
          iVar5 = WPACKET_start_sub_packet_len__(param_2,1);
          if (iVar5 != 0) {
            if (__n != (GEN_SESSION_CB)0x0) {
LAB_00100418:
              iVar5 = WPACKET_memcpy(param_2,__src,__n);
              goto joined_r0x00100428;
            }
LAB_00100116:
            iVar5 = WPACKET_close(param_2);
            if (iVar5 != 0) {
              if (((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) ||
                 ((*(ulong *)((long)param_1[1].tlsext_opaque_prf_input + 0x100) < 0x100 &&
                  (iVar5 = WPACKET_sub_memcpy__(param_2), iVar5 != 0)))) {
                iVar5 = WPACKET_start_sub_packet_len__(param_2,2);
                if (iVar5 == 0) {
                  ERR_new();
                  pcVar12 = "tls_construct_client_hello";
                  uVar14 = 0x519;
                }
                else {
                  psVar9 = SSL_get_ciphers(param_1);
                  if ((((*(int *)&param_1[4].expand == 0) &&
                       ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0)) &&
                      (iVar5 = ssl_security(param_1,9,0,0x301,0), iVar5 != 0)) &&
                     (*(int *)&param_1[3].field_0x1ac < 0x302)) {
                    iVar5 = ssl_set_client_disabled(param_1);
                    if (iVar5 == 0) {
LAB_001006e0:
                      ERR_new();
                      ERR_set_debug("ssl/statem/statem_clnt.c",0xfff,"ssl_cipher_list_to_bytes");
                      ossl_statem_fatal(param_1,0x50,0xbf,0);
                      goto LAB_00100373;
                    }
                    if (psVar9 != (stack_st_SSL_CIPHER *)0x0) {
                      bVar16 = true;
                      uVar13 = 0xfffc;
                      goto LAB_001001bc;
                    }
LAB_00100805:
                    ERR_new();
                    pcVar12 = "ssl_cipher_list_to_bytes";
                    uVar14 = 0x1004;
                  }
                  else {
                    iVar5 = ssl_set_client_disabled(param_1);
                    if (iVar5 == 0) goto LAB_001006e0;
                    bVar16 = false;
                    uVar13 = 0xfffe;
                    if (psVar9 == (stack_st_SSL_CIPHER *)0x0) goto LAB_00100805;
LAB_001001bc:
                    if ((param_1[3].references & 0x80) != 0) {
                      uVar13 = uVar13 - 2;
                    }
                    uVar15 = 0;
                    bVar4 = false;
                    for (iVar5 = 0;
                        (iVar6 = OPENSSL_sk_num(psVar9), uVar15 < uVar13 && (iVar5 < iVar6));
                        iVar5 = iVar5 + 1) {
                      lVar10 = OPENSSL_sk_value(psVar9,iVar5);
                      iVar6 = ssl_cipher_disabled(param_1,lVar10,0x10001,0);
                      if (iVar6 == 0) {
                        iVar6 = (*(code *)param_1->wbio[1].prev_bio)(lVar10,param_2,&local_48);
                        if (iVar6 == 0) {
                          ERR_new();
                          pcVar12 = "ssl_cipher_list_to_bytes";
                          uVar14 = 0x1026;
                          goto LAB_00100351;
                        }
                        if (!bVar4) {
                          if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0)
                          {
                            local_54 = *(undefined4 *)(lVar10 + 0x2c);
                            uVar1 = *(undefined4 *)(lVar10 + 0x30);
                          }
                          else {
                            local_54 = *(undefined4 *)(lVar10 + 0x34);
                            uVar1 = *(undefined4 *)(lVar10 + 0x38);
                          }
                          iVar6 = ssl_version_cmp(param_1,uVar1,
                                                  *(undefined4 *)
                                                   ((long)&param_1[1].psk_client_callback + 4));
                          if (-1 < iVar6) {
                            iVar6 = ssl_version_cmp(param_1,local_54,
                                                    *(undefined4 *)
                                                     ((long)&param_1[1].psk_client_callback + 4));
                            bVar4 = iVar6 < 1;
                          }
                        }
                        uVar15 = uVar15 + local_48;
                      }
                    }
                    if ((uVar15 == 0) || (!bVar4)) {
                      pcVar12 = "No ciphers enabled for max supported SSL/TLS version";
                      if (bVar4) {
                        pcVar12 = (char *)0x0;
                      }
                      ERR_new();
                      ERR_set_debug("ssl/statem/statem_clnt.c",0x103d,"ssl_cipher_list_to_bytes");
                      ossl_statem_fatal(param_1,0x50,0xb5,pcVar12);
                      goto LAB_00100373;
                    }
                    if ((bVar16) &&
                       (iVar5 = (*(code *)param_1->wbio[1].prev_bio)(scsv_35,param_2,&local_48),
                       iVar5 == 0)) {
                      ERR_new();
                      pcVar12 = "ssl_cipher_list_to_bytes";
                      uVar14 = 0x1048;
                    }
                    else if (((param_1[3].references & 0x80) == 0) ||
                            (iVar5 = (*(code *)param_1->wbio[1].prev_bio)(scsv_34,param_2,&local_48)
                            , iVar5 != 0)) {
                      iVar5 = WPACKET_close(param_2);
                      if (iVar5 == 0) {
                        ERR_new();
                        pcVar12 = "tls_construct_client_hello";
                        uVar14 = 0x523;
                      }
                      else {
                        iVar5 = WPACKET_start_sub_packet_len__(param_2,1);
                        if (iVar5 == 0) {
                          ERR_new();
                          pcVar12 = "tls_construct_client_hello";
                          uVar14 = 0x529;
                        }
                        else {
                          iVar5 = ssl_allow_compression(param_1);
                          if ((((iVar5 != 0) && (pSVar3[1].ssl_read != (_func_3058 *)0x0)) &&
                              (((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) !=
                                0 || (*(int *)((long)&param_1[1].psk_client_callback + 4) < 0x304)))
                              ) && (iVar5 = OPENSSL_sk_num(), 0 < iVar5)) {
                            iVar6 = 0;
                            do {
                              piVar11 = (int *)OPENSSL_sk_value(pSVar3[1].ssl_read,iVar6);
                              iVar7 = WPACKET_put_bytes__(param_2,(long)*piVar11,1);
                              if (iVar7 == 0) {
                                ERR_new();
                                pcVar12 = "tls_construct_client_hello";
                                uVar14 = 0x535;
                                goto LAB_00100351;
                              }
                              iVar6 = iVar6 + 1;
                            } while (iVar5 != iVar6);
                          }
                          iVar5 = WPACKET_put_bytes__(param_2,0,1);
                          if ((iVar5 != 0) && (iVar5 = WPACKET_close(param_2), iVar5 != 0)) {
                            iVar5 = tls_construct_extensions(param_1,param_2,0x80,0,0);
                            bVar16 = iVar5 != 0;
                            goto LAB_00100375;
                          }
                          ERR_new();
                          pcVar12 = "tls_construct_client_hello";
                          uVar14 = 0x53d;
                        }
                      }
                    }
                    else {
                      ERR_new();
                      pcVar12 = "ssl_cipher_list_to_bytes";
                      uVar14 = 0x1051;
                    }
                  }
                }
              }
              else {
                ERR_new();
                pcVar12 = "tls_construct_client_hello";
                uVar14 = 0x512;
              }
              goto LAB_00100351;
            }
          }
        }
        else if ((param_1->state == 0x304) && (((ulong)param_1[3].client_CA & 0x100000) != 0)) {
          __src = (void **)(param_1[3].sid_ctx + 0xc);
          param_1[3].generate_session_id = (GEN_SESSION_CB)0x20;
          if ((*(int *)&param_1[3].cipher_list_by_id == 0) &&
             (iVar5 = RAND_bytes_ex(*(undefined8 *)pSVar3,__src,0x20), iVar5 < 1)) {
            ERR_new();
            pcVar12 = "tls_construct_client_hello";
            uVar14 = 0x4f7;
            goto LAB_00100351;
          }
          iVar5 = WPACKET_start_sub_packet_len__(param_2,1);
          if (iVar5 != 0) {
            __n = (GEN_SESSION_CB)0x20;
            goto LAB_00100418;
          }
        }
        else {
          iVar5 = WPACKET_start_sub_packet_len__(param_2,1);
joined_r0x00100428:
          if (iVar5 != 0) goto LAB_00100116;
        }
        ERR_new();
        pcVar12 = "tls_construct_client_hello";
        uVar14 = 0x509;
      }
    }
LAB_00100351:
    ERR_set_debug("ssl/statem/statem_clnt.c",uVar14,pcVar12);
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x49d,"tls_construct_client_hello");
    ossl_statem_fatal(param_1,0x50,iVar5,0);
  }
LAB_00100373:
  bVar16 = false;
LAB_00100375:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar16;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 set_client_ciphersuite(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  lVar4 = ssl_get_cipher_by_char(param_1,param_2,0);
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x56f,"set_client_ciphersuite");
    ossl_statem_fatal(param_1,0x2f,0xf8,0);
    return 0;
  }
  iVar2 = ssl_cipher_disabled(param_1,lVar4,0x10003,1);
  if (iVar2 == 0) {
    uVar5 = ssl_get_ciphers_by_id(param_1);
    iVar2 = OPENSSL_sk_find(uVar5,lVar4);
    if (iVar2 < 0) {
      ERR_new();
      uVar8 = 0x57f;
    }
    else {
      piVar1 = *(int **)(param_1 + 0x18);
      uVar3 = *(uint *)(*(long *)(piVar1 + 0x36) + 0x50) & 8;
      if ((((uVar3 != 0) || (*piVar1 == 0x10000)) || (*piVar1 < 0x304)) ||
         ((*(long *)(param_1 + 0x300) == 0 ||
          (*(int *)(*(long *)(param_1 + 0x300) + 0x18) == *(int *)(lVar4 + 0x18))))) {
        lVar7 = *(long *)(param_1 + 0x900);
        if (*(long *)(lVar7 + 0x2f8) != 0) {
          *(ulong *)(lVar7 + 0x300) = (ulong)*(uint *)(*(long *)(lVar7 + 0x2f8) + 0x18);
        }
        if ((*(int *)(param_1 + 0x508) != 0) &&
           (*(ulong *)(lVar7 + 0x300) != (ulong)*(uint *)(lVar4 + 0x18))) {
          if ((uVar3 != 0) || ((*piVar1 == 0x10000 || (*piVar1 < 0x304)))) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0x5a8,"set_client_ciphersuite");
            ossl_statem_fatal(param_1,0x2f,0xc5,0);
            return 0;
          }
          lVar6 = ssl_md(uVar8,*(undefined4 *)(lVar4 + 0x40));
          lVar7 = *(long *)(*(long *)(param_1 + 0x900) + 0x2f8);
          if (lVar7 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0x596,"set_client_ciphersuite");
            ossl_statem_fatal(param_1,0x50,0xc0103,0);
            return 0;
          }
          if ((lVar6 == 0) || (lVar7 = ssl_md(uVar8,*(undefined4 *)(lVar7 + 0x40)), lVar6 != lVar7))
          {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0x59f,"set_client_ciphersuite");
            ossl_statem_fatal(param_1,0x2f,0xda,0);
            return 0;
          }
        }
        *(long *)(param_1 + 0x300) = lVar4;
        return 1;
      }
      ERR_new();
      uVar8 = 0x586;
    }
  }
  else {
    ERR_new();
    uVar8 = 0x577;
  }
  ERR_set_debug("ssl/statem/statem_clnt.c",uVar8,"set_client_ciphersuite");
  ossl_statem_fatal(param_1,0x2f,0x105,0);
  return 0;
}



undefined8 tls_construct_next_proto(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined8 *local_38;
  long local_30;
  
  uVar3 = *(undefined8 *)(param_1 + 0xb08);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined8 *)0x0;
  iVar1 = WPACKET_sub_memcpy__(param_2,*(undefined8 *)(param_1 + 0xb00),uVar3,1);
  if (iVar1 != 0) {
    uVar5 = 0x20 - (ulong)((int)uVar3 + 2U & 0x1f);
    iVar1 = WPACKET_sub_allocate_bytes__(param_2,uVar5,&local_38,1);
    if (iVar1 != 0) {
      uVar4 = (uint)uVar5;
      if (uVar4 < 8) {
        if ((uVar5 & 4) == 0) {
          if ((uVar4 != 0) && (*(undefined1 *)local_38 = 0, (uVar5 & 2) != 0)) {
            *(undefined2 *)((long)local_38 + ((uVar5 & 0xffffffff) - 2)) = 0;
          }
        }
        else {
          *(undefined4 *)local_38 = 0;
          *(undefined4 *)((long)local_38 + ((uVar5 & 0xffffffff) - 4)) = 0;
        }
      }
      else {
        *local_38 = 0;
        *(undefined8 *)((long)local_38 + ((uVar5 & 0xffffffff) - 8)) = 0;
        uVar4 = uVar4 + ((int)local_38 - (int)((ulong)(local_38 + 1) & 0xfffffffffffffff8)) &
                0xfffffff8;
        if (7 < uVar4) {
          uVar2 = 0;
          do {
            uVar5 = (ulong)uVar2;
            uVar2 = uVar2 + 8;
            *(undefined8 *)(((ulong)(local_38 + 1) & 0xfffffffffffffff8) + uVar5) = 0;
          } while (uVar2 < uVar4);
        }
      }
      uVar3 = 1;
      goto LAB_00100bba;
    }
  }
  ERR_new();
  ERR_set_debug("ssl/statem/statem_clnt.c",0xf9c,"tls_construct_next_proto");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  uVar3 = 0;
LAB_00100bba:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 tls_construct_cke_gost(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  EVP_PKEY_CTX *ctx;
  uchar *in;
  EVP_MD_CTX *ctx_00;
  char *name;
  EVP_MD *type;
  undefined8 uVar5;
  long in_FS_OFFSET;
  uint local_174;
  size_t local_170;
  uchar local_168 [32];
  uchar local_148 [264];
  long local_40;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
  lVar4 = tls_get_peer_pkey();
  if (lVar4 == 0) {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xce0,"tls_construct_cke_gost");
    ossl_statem_fatal(param_1,0x28,0x14a,0);
  }
  else {
    ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar2,lVar4,puVar2[0x8e]);
    if (ctx == (EVP_PKEY_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xce9,"tls_construct_cke_gost");
      ossl_statem_fatal(param_1,0x50,0x80006,0);
    }
    else {
      in = (uchar *)CRYPTO_malloc(0x20,"ssl/statem/statem_clnt.c",0xcf4);
      if (in == (uchar *)0x0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xcf6,"tls_construct_cke_gost");
        ossl_statem_fatal(param_1,0x50,0x8000f,0);
LAB_00100ee7:
        ctx_00 = (EVP_MD_CTX *)0x0;
      }
      else {
        iVar3 = EVP_PKEY_encrypt_init(ctx);
        if ((iVar3 < 1) || (iVar3 = RAND_bytes_ex(*puVar2,in,0x20,0), iVar3 < 1)) {
          ERR_new();
          uVar5 = 0xcfe;
LAB_00100ec9:
          ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,"tls_construct_cke_gost");
          ossl_statem_fatal(param_1,0x50,0xc0103,0);
          goto LAB_00100ee7;
        }
        ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
        if (ctx_00 != (EVP_MD_CTX *)0x0) {
          name = OBJ_nid2sn((-(uint)((uVar1 & 0x80) == 0) & 0xffffff53) + 0x3d6);
          type = EVP_get_digestbyname(name);
          iVar3 = EVP_DigestInit(ctx_00,type);
          if (((0 < iVar3) &&
              (iVar3 = EVP_DigestUpdate(ctx_00,(void *)(param_1 + 0x188),0x20), 0 < iVar3)) &&
             (iVar3 = EVP_DigestUpdate(ctx_00,(void *)(param_1 + 0x168),0x20), 0 < iVar3)) {
            iVar3 = EVP_DigestFinal_ex(ctx_00,local_168,&local_174);
            if (0 < iVar3) {
              EVP_MD_CTX_free(ctx_00);
              iVar3 = EVP_PKEY_CTX_ctrl(ctx,-1,0x200,8,8,local_168);
              if (iVar3 < 1) {
                ERR_new();
                uVar5 = 0xd14;
              }
              else {
                local_170 = 0xff;
                iVar3 = EVP_PKEY_encrypt(ctx,local_148,&local_170,in,0x20);
                if (0 < iVar3) {
                  iVar3 = WPACKET_put_bytes__(param_2,0x30,1);
                  if (((iVar3 != 0) &&
                      ((local_170 < 0x80 ||
                       (iVar3 = WPACKET_put_bytes__(param_2,0x81,1), iVar3 != 0)))) &&
                     (iVar3 = WPACKET_sub_memcpy__(param_2,local_148,local_170,1), iVar3 != 0)) {
                    EVP_PKEY_CTX_free(ctx);
                    *(uchar **)(param_1 + 0x3b0) = in;
                    uVar5 = 1;
                    *(undefined8 *)(param_1 + 0x3b8) = 0x20;
                    goto LAB_00100f11;
                  }
                  ERR_new();
                  uVar5 = 0xd24;
                  goto LAB_00100ec9;
                }
                ERR_new();
                uVar5 = 0xd1d;
              }
              ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,"tls_construct_cke_gost");
              ossl_statem_fatal(param_1,0x50,0x112,0);
              goto LAB_00100ee7;
            }
          }
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xd0d,"tls_construct_cke_gost");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
      EVP_PKEY_CTX_free(ctx);
      CRYPTO_clear_free(in,0x20,"ssl/statem/statem_clnt.c",0xd2f);
      EVP_MD_CTX_free(ctx_00);
    }
  }
  uVar5 = 0;
LAB_00100f11:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



ulong ssl3_check_client_certificate(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = tls_choose_sigalg(param_1,0);
  if ((int)uVar2 != 0) {
    if (*(long *)(param_1 + 0x3d0) == 0) {
      return 0;
    }
    uVar2 = 1;
    if ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30001) != 0) {
      iVar1 = tls1_check_chain(param_1,0,0,0,0xfffffffe);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}



undefined8 tls_construct_client_certificate(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0x10000)) && (0x303 < iVar1)) {
    if (*(long *)(param_1 + 0xbb0) == 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0,1);
      if (iVar1 != 0) goto LAB_00101118;
      ERR_new();
      uVar3 = 0xec9;
    }
    else {
      iVar1 = WPACKET_sub_memcpy__
                        (param_2,*(long *)(param_1 + 0xbb0),*(undefined8 *)(param_1 + 3000),1);
      if (iVar1 != 0) goto LAB_00101118;
      ERR_new();
      uVar3 = 0xecd;
    }
LAB_00101201:
    ERR_set_debug("ssl/statem/statem_clnt.c",uVar3,"tls_construct_client_certificate");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
  }
  else {
LAB_00101118:
    uVar3 = 0;
    if (*(int *)(param_1 + 0x340) != 2) {
      uVar3 = **(undefined8 **)(param_1 + 0x880);
    }
    if (*(char *)(param_1 + 0xb50) == '\0') {
      lVar2 = ssl3_output_cert_chain(param_1,param_2,uVar3,0);
      if (lVar2 == 0) {
        return 0;
      }
    }
    else {
      if (*(char *)(param_1 + 0xb50) != '\x02') {
        ERR_new();
        uVar3 = 0xee1;
        goto LAB_00101201;
      }
      lVar2 = tls_output_rpk(param_1,param_2);
      if (lVar2 == 0) {
        return 0;
      }
    }
    lVar2 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
    if ((((((*(byte *)(lVar2 + 0x50) & 8) != 0) ||
          (iVar1 = **(int **)(param_1 + 0x18), iVar1 == 0x10000)) ||
         ((iVar1 < 0x304 || ((*(long *)(param_1 + 0x260) != 0 && (*(long *)(param_1 + 0x2e8) != 0)))
          ))) || ((*(int *)(param_1 + 0xf0) == 0 && ((*(byte *)(param_1 + 0x9b2) & 0x10) == 0)))) ||
       (iVar1 = (**(code **)(lVar2 + 0x10))(param_1,0x92), iVar1 != 0)) {
      return 1;
    }
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xef4,"tls_construct_client_certificate");
    ossl_statem_fatal(param_1,0xffffffff,0x6d,0);
  }
  return 0;
}



undefined8 tls_construct_end_of_early_data(long param_1)

{
  if ((*(uint *)(param_1 + 0xf0) & 0xfffffffb) == 3) {
    *(undefined4 *)(param_1 + 0xf0) = 7;
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/statem/statem_clnt.c",0x105e,"tls_construct_end_of_early_data");
  ossl_statem_fatal(param_1,0x50,0xc0101,0);
  return 0;
}



undefined4 tls_construct_cke_psk_preamble(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  long lVar6;
  size_t len;
  undefined4 uVar7;
  long in_FS_OFFSET;
  long local_370;
  undefined1 *local_368;
  size_t local_360;
  char local_358 [272];
  undefined1 local_248 [520];
  long local_40;
  
  pcVar1 = *(code **)(param_1 + 0x970);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pcVar1 == (code *)0x0) {
    len = 0;
    pcVar5 = (char *)0x0;
    uVar7 = 0;
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xbcd,"tls_construct_cke_psk_preamble");
    ossl_statem_fatal(param_1,0x50,0xe0,0);
    local_370 = 0;
    local_360 = 0;
  }
  else {
    pcVar5 = local_358;
    for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      pcVar5[4] = '\0';
      pcVar5[5] = '\0';
      pcVar5[6] = '\0';
      pcVar5[7] = '\0';
      pcVar5 = pcVar5 + 8;
    }
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a0);
    *pcVar5 = '\0';
    uVar3 = (*pcVar1)(*(undefined8 *)(param_1 + 0x40),uVar2,local_358,0x100,local_248,0x200);
    len = (size_t)uVar3;
    if (uVar3 < 0x201) {
      if (len == 0) {
        pcVar5 = (char *)0x0;
        uVar7 = 0;
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xbdd,"tls_construct_cke_psk_preamble");
        ossl_statem_fatal(param_1,0x28,0xdf,0);
        local_360 = 0;
        local_370 = 0;
      }
      else {
        local_360 = strlen(local_358);
        local_370 = CRYPTO_memdup(local_248,len,"ssl/statem/statem_clnt.c",0xbe7);
        pcVar5 = CRYPTO_strdup(local_358,"ssl/statem/statem_clnt.c",0xbe8);
        if ((local_370 == 0) || (pcVar5 == (char *)0x0)) {
          ERR_new();
          uVar7 = 0;
          ERR_set_debug("ssl/statem/statem_clnt.c",0xbea,"tls_construct_cke_psk_preamble");
          ossl_statem_fatal(param_1,0x50,0x8000f,0);
        }
        else {
          CRYPTO_free(*(void **)(param_1 + 0x3c0));
          *(size_t *)(param_1 + 0x3c8) = len;
          *(long *)(param_1 + 0x3c0) = local_370;
          CRYPTO_free(*(void **)(*(long *)(param_1 + 0x900) + 0x2a8));
          *(char **)(*(long *)(param_1 + 0x900) + 0x2a8) = pcVar5;
          iVar4 = WPACKET_sub_memcpy__(param_2,local_358,local_360,2);
          if (iVar4 == 0) {
            ERR_new();
            pcVar5 = (char *)0x0;
            ERR_set_debug("ssl/statem/statem_clnt.c",0xbf7,"tls_construct_cke_psk_preamble");
            ossl_statem_fatal(param_1,0x50,0xc0103,0);
            local_370 = 0;
            uVar7 = 0;
          }
          else {
            local_370 = 0;
            pcVar5 = (char *)0x0;
            uVar7 = 1;
          }
        }
      }
    }
    else {
      len = 0x200;
      pcVar5 = (char *)0x0;
      uVar7 = 0;
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xbd9,"tls_construct_cke_psk_preamble");
      ossl_statem_fatal(param_1,0x28,0xc0103,0);
      local_370 = 0;
      local_360 = 0;
    }
  }
  local_368 = local_248;
  OPENSSL_cleanse(local_368,len);
  OPENSSL_cleanse(local_358,0x101);
  CRYPTO_clear_free(local_370,len,"ssl/statem/statem_clnt.c",0xc00);
  CRYPTO_clear_free(pcVar5,local_360,"ssl/statem/statem_clnt.c",0xc01);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ossl_statem_client_read_transition(SSL *param_1,int param_2)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  BIO *b;
  bool bVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)&param_1->field_0xac;
  uVar5 = *(uint *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8;
  if (uVar5 == 0) {
    iVar3 = *(int *)&param_1->wbio->method;
    bVar4 = iVar3 != 0x10000 && 0x303 < iVar3;
    if (bVar4) {
      switch(uVar1) {
      case 1:
        if (param_2 == 4) goto LAB_001018bd;
        if (param_2 == 0x18) {
          if (((ulong)param_1->kssl_ctx & 0x2000) == 0) {
            *(undefined4 *)&param_1->field_0xac = 0x31;
            return 1;
          }
        }
        else if ((param_2 == 0xd) && (*(int *)&param_1[4].enc_write_ctx == 1)) {
          *(undefined4 *)&param_1[4].enc_write_ctx = 4;
          iVar3 = tls13_restore_handshake_digest_for_pha(param_1);
          if (iVar3 != 0) goto LAB_0010195f;
        }
        break;
      case 3:
        if (param_2 == 8) {
          *(undefined4 *)&param_1->field_0xac = 0x2a;
          return 1;
        }
        break;
      case 4:
      case 5:
        if (param_2 == 0xf) {
          *(undefined4 *)&param_1->field_0xac = 0x2b;
          return 1;
        }
        break;
      case 8:
switchD_001017d3_caseD_8:
        if (param_2 == 0xb) {
LAB_001019cd:
          *(undefined4 *)&param_1->field_0xac = 4;
          return 1;
        }
        break;
      case 0xd:
        goto switchD_0010173a_caseD_32;
      case 0x2a:
        if (*(int *)&param_1[1].tls_session_ticket_ext_cb == 0) {
          if (param_2 == 0xd) goto LAB_0010195f;
          goto switchD_001017d3_caseD_8;
        }
      case 0x2b:
switchD_0010173a_caseD_b:
        if (param_2 == 0x14) {
LAB_0010192e:
          *(undefined4 *)&param_1->field_0xac = 0xc;
          return 1;
        }
      }
      goto switchD_0010173a_caseD_0;
    }
    switch(uVar1) {
    case 1:
      if (param_2 == 0) goto LAB_0010190d;
      break;
    case 3:
      if (*(int *)&param_1[1].tls_session_ticket_ext_cb == 0) goto LAB_0010197e;
    case 0x14:
switchD_0010173a_caseD_14:
      if (*(int *)&param_1[3].tlsext_session_ticket == 0) {
switchD_0010173a_caseD_a:
        if (param_2 == 0x101) {
          *(undefined4 *)&param_1->field_0xac = 0xb;
          return 1;
        }
        break;
      }
      if (param_2 == 4) {
LAB_001018bd:
        *(undefined4 *)&param_1->field_0xac = 10;
        return 1;
      }
      goto LAB_00101879;
    case 4:
    case 5:
      goto switchD_0010173a_caseD_4;
    case 6:
      goto switchD_0010173a_caseD_6;
    case 7:
      goto switchD_0010173a_caseD_7;
    case 8:
      if (param_2 == 0xe) goto LAB_00101a78;
      break;
    case 10:
      goto switchD_0010173a_caseD_a;
    case 0xb:
      goto switchD_0010173a_caseD_b;
    case 0xd:
      if (param_2 == 2) goto LAB_00101a00;
      goto LAB_00101755;
    case 0x32:
switchD_0010173a_caseD_32:
      if (param_2 == 2) {
LAB_00101a00:
        *(undefined4 *)&param_1->field_0xac = 3;
        return 1;
      }
    }
    goto switchD_0010173a_caseD_0;
  }
  switch(uVar1) {
  case 1:
    bVar4 = true;
    if (param_2 == 0) {
LAB_0010190d:
      *(undefined4 *)&param_1->field_0xac = 0x2d;
      return 1;
    }
    break;
  case 3:
    if (*(int *)&param_1[1].tls_session_ticket_ext_cb != 0) goto switchD_0010173a_caseD_14;
    if (param_2 == 3) {
LAB_001018e7:
      *(undefined4 *)&param_1->field_0xac = 2;
      return 1;
    }
    bVar4 = true;
LAB_0010197e:
    if ((((0x300 < param_1->state) && (param_1[4].bbio != (BIO *)0x0)) &&
        (param_1[3].write_hash[0x10].update != (_func_1088 *)0x0)) && (param_2 == 0x101)) {
      *(undefined4 *)&param_1[1].tls_session_ticket_ext_cb = 1;
      *(undefined4 *)&param_1->field_0xac = 0xb;
      return 1;
    }
    uVar5 = *(uint *)&param_1[1].init_buf[1].data;
    if ((uVar5 & 0x54) == 0) {
      if (param_2 == 0xb) goto LAB_001019cd;
      break;
    }
    sVar2 = param_1[1].init_buf[1].length;
    if ((sVar2 & 0x1a600000000) != 0) {
      if (param_2 == 0xc) goto LAB_00101a19;
      break;
    }
    if (((sVar2 & 0x1c800000000) != 0) && (param_2 == 0xc)) goto LAB_00101a19;
    if (param_2 != 0xd) {
      if (param_2 == 0xe) goto LAB_00101a78;
      break;
    }
    if ((0x300 < param_1->state) && ((uVar5 & 4) != 0)) goto switchD_0010173a_caseD_0;
    goto joined_r0x00101959;
  case 4:
  case 5:
switchD_0010173a_caseD_4:
    if ((*(int *)((long)&param_1[3].tlsext_ecpointformatlist + 4) != 0) && (param_2 == 0x16)) {
      *(undefined4 *)&param_1->field_0xac = 6;
      return 1;
    }
  case 6:
switchD_0010173a_caseD_6:
    sVar2 = param_1[1].init_buf[1].length;
    if ((sVar2 & 0x1a600000000) != 0) {
      if (param_2 == 0xc) goto LAB_00101a19;
LAB_00101879:
      bVar4 = uVar5 != 0;
      break;
    }
    if (((sVar2 & 0x1c800000000) != 0) && (param_2 == 0xc)) {
LAB_00101a19:
      *(undefined4 *)&param_1->field_0xac = 7;
      return 1;
    }
switchD_0010173a_caseD_7:
    if (param_2 != 0xd) {
switchD_001017b3_caseD_8:
      if (param_2 == 0xe) {
LAB_00101a78:
        *(undefined4 *)&param_1->field_0xac = 9;
        return 1;
      }
      goto LAB_00101879;
    }
    uVar5 = *(uint *)&param_1[1].init_buf[1].data;
    if ((param_1->state < 0x301) || ((uVar5 & 4) == 0)) {
joined_r0x00101959:
      if ((uVar5 & 0x50) == 0) {
LAB_0010195f:
        *(undefined4 *)&param_1->field_0xac = 8;
        return 1;
      }
    }
    goto switchD_0010173a_caseD_0;
  case 7:
    goto switchD_0010173a_caseD_7;
  case 8:
    goto switchD_001017b3_caseD_8;
  case 10:
    goto switchD_0010173a_caseD_a;
  case 0xb:
    bVar4 = true;
    if (param_2 == 0x14) goto LAB_0010192e;
    break;
  case 0xd:
    if (param_2 == 2) goto LAB_00101a00;
    bVar4 = true;
    if (param_2 == 3) goto LAB_001018e7;
    break;
  case 0x14:
    goto switchD_0010173a_caseD_14;
  case 0x32:
    if (param_2 == 2) goto LAB_00101a00;
  default:
    bVar4 = true;
  }
LAB_00101755:
  if ((param_2 == 0x101) && (bVar4)) {
    param_1->sid_ctx_length = 0;
    param_1->sid_ctx[0] = '\0';
    param_1->sid_ctx[1] = '\0';
    param_1->sid_ctx[2] = '\0';
    param_1->sid_ctx[3] = '\0';
    *(undefined4 *)&param_1->packet = 3;
    b = SSL_get_rbio(param_1);
    BIO_clear_flags(b,0xf);
    BIO_set_flags(b,9);
  }
  else {
switchD_0010173a_caseD_0:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x1a9,"ossl_statem_client_read_transition");
    ossl_statem_fatal(param_1,10,0xf4,0);
  }
  return 0;
}



undefined8 ossl_statem_client_write_transition(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  uVar2 = *(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8;
  if (((uVar2 == 0) && (iVar3 = **(int **)(param_1 + 0x18), iVar3 != 0x10000)) && (0x303 < iVar3)) {
    if (uVar1 < 0x12) {
      switch(uVar1) {
      case 1:
        if (*(int *)(param_1 + 0xba4) != -1) {
          *(undefined4 *)(param_1 + 0xac) = 0x2f;
          return 1;
        }
        return 2;
      case 8:
        if (*(int *)(param_1 + 0xba8) != 4) {
          if ((*(byte *)(param_1 + 0x84) & 1) == 0) {
            ERR_new();
            pcVar5 = "ossl_statem_client13_write_transition";
            uVar6 = 0x1d6;
            goto LAB_00101c41;
          }
          goto switchD_00101c98_caseD_a;
        }
LAB_00101f88:
        if ((*(char *)(param_1 + 0xb50) == '\0') && (*(int *)(param_1 + 0xb3c) != 0)) {
          *(undefined4 *)(param_1 + 0xac) = 0xf;
          return 1;
        }
LAB_00101e30:
        *(undefined4 *)(param_1 + 0xac) = 0xe;
        return 1;
      case 10:
        goto switchD_00101c98_caseD_a;
      case 0xc:
        iVar3 = 0x33;
        if (((((*(uint *)(param_1 + 0xf0) & 0xfffffffb) != 3) &&
             (((*(byte *)(param_1 + 0x9b2) & 0x10) == 0 ||
              (iVar3 = 0x12, *(int *)(param_1 + 0x8d0) != 0)))) &&
            (iVar3 = 0x14, *(int *)(param_1 + 0x340) != 0)) &&
           (iVar3 = 0xe, *(char *)(param_1 + 0xb50) == '\0')) {
          iVar3 = 0xf - (uint)(*(int *)(param_1 + 0xb3c) == 0);
        }
        *(int *)(param_1 + 0xac) = iVar3;
        uVar6 = ossl_time_now();
        *(undefined8 *)(param_1 + 0x90) = uVar6;
        return 1;
      case 0xe:
      case 0xf:
        *(uint *)(param_1 + 0xac) = (uint)(*(int *)(param_1 + 0x340) != 1) * 3 + 0x11;
        return 1;
      case 0x11:
        goto switchD_00101c06_caseD_13;
      }
    }
    else if (uVar1 - 0x12 < 0x23) {
      uVar4 = 1L << ((byte)uVar1 & 0x3f);
      if ((uVar4 & 0x2800000100000) != 0) goto switchD_00101c98_caseD_a;
      if ((uVar4 & 0x10000000040000) == 0) {
        if (uVar1 != 0x33) goto switchD_00101c98_caseD_2;
        if ((*(int *)(param_1 + 0xb18) == 2) && ((*(byte *)(param_1 + 0x161) & 0x20) == 0)) {
          *(undefined4 *)(param_1 + 0xac) = 0x34;
          return 1;
        }
      }
      if (*(int *)(param_1 + 0x340) == 0) {
switchD_00101c06_caseD_13:
        *(undefined4 *)(param_1 + 0xac) = 0x14;
        return 1;
      }
      goto LAB_00101f88;
    }
switchD_00101c98_caseD_2:
    ERR_new();
    pcVar5 = "ossl_statem_client13_write_transition";
    uVar6 = 0x1c5;
LAB_00101c41:
    ERR_set_debug("ssl/statem/statem_clnt.c",uVar6,pcVar5);
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    return 0;
  }
  switch(uVar1) {
  case 0:
  case 2:
    break;
  case 1:
    if (*(int *)(param_1 + 0xba0) == 0) {
      return 2;
    }
    break;
  case 3:
    if (((*(byte *)(param_1 + 0x9b2) & 0x10) != 0) && (*(int *)(param_1 + 0xf0) != 7))
    goto switchD_00101c06_caseD_11;
    break;
  default:
    ERR_new();
    pcVar5 = "ossl_statem_client_write_transition";
    uVar6 = 0x22e;
    goto LAB_00101c41;
  case 9:
    uVar6 = ossl_time_now();
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    if (*(int *)(param_1 + 0x340) == 0) goto switchD_00101c06_caseD_e;
    goto LAB_00101e30;
  case 0xc:
    if (*(int *)(param_1 + 0x508) == 0) goto switchD_00101c98_caseD_a;
  case 0x11:
switchD_00101c06_caseD_11:
    *(undefined4 *)(param_1 + 0xac) = 0x12;
    return 1;
  case 0xd:
    if ((*(int *)(param_1 + 0xf0) != 2) || ((*(byte *)(param_1 + 0x161) & 0x20) != 0))
    goto switchD_00101c06_caseD_32;
    if ((*(byte *)(param_1 + 0x9b2) & 0x10) == 0) {
LAB_00101e1a:
      *(undefined4 *)(param_1 + 0xac) = 0x32;
      return 1;
    }
    goto switchD_00101c06_caseD_11;
  case 0xe:
switchD_00101c06_caseD_e:
    *(undefined4 *)(param_1 + 0xac) = 0x10;
    return 1;
  case 0x10:
    *(uint *)(param_1 + 0xac) = (*(int *)(param_1 + 0x340) != 1) + 0x11;
    if ((*(byte *)(param_1 + 0x160) & 0x10) == 0) {
      return 1;
    }
    goto switchD_00101c06_caseD_11;
  case 0x12:
    if (*(int *)(param_1 + 0x8d0) != 1) {
      if (*(int *)(param_1 + 0xf0) == 2) goto LAB_00101e1a;
      if ((uVar2 == 0) && (*(int *)(param_1 + 0x4b4) != 0)) {
        *(undefined4 *)(param_1 + 0xac) = 0x13;
        return 1;
      }
      goto switchD_00101c06_caseD_13;
    }
    break;
  case 0x13:
    goto switchD_00101c06_caseD_13;
  case 0x14:
    if (*(int *)(param_1 + 0x508) == 0) {
      return 2;
    }
switchD_00101c98_caseD_a:
    *(undefined4 *)(param_1 + 0xac) = 1;
    return 1;
  case 0x2d:
    iVar3 = ssl3_renegotiate_check(param_1,1);
    if (iVar3 == 0) goto switchD_00101c98_caseD_a;
    iVar3 = tls_setup_handshake(param_1);
    if (iVar3 == 0) {
      return 0;
    }
    break;
  case 0x32:
switchD_00101c06_caseD_32:
    uVar6 = ossl_time_now();
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    return 2;
  }
  *(undefined4 *)(param_1 + 0xac) = 0xd;
  return 1;
}



ulong ossl_statem_client_pre_work(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  if (uVar1 == 0x12) {
    if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) &&
       (*(int *)(param_1 + 0x508) != 0)) {
      *(undefined4 *)(param_1 + 200) = 0;
    }
  }
  else if (uVar1 < 0x13) {
    if (uVar1 == 1) {
      uVar3 = tls_finish_handshake(param_1,param_2,1,1);
      return uVar3;
    }
    if (uVar1 == 0xd) {
      *(undefined4 *)(param_1 + 0x84) = 0;
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
        uVar3 = 2;
        if (*(int *)(param_1 + 0xb18) == 1) {
          iVar2 = ssl_set_new_record_layer(param_1,0x10000,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
          uVar3 = (ulong)((uint)(iVar2 != 0) * 2);
        }
      }
      else {
        iVar2 = ssl3_init_finished_mac();
        uVar3 = (ulong)((uint)(iVar2 != 0) * 2);
      }
      return uVar3;
    }
  }
  else if ((uVar1 == 0x32) ||
          (((uVar1 == 0x33 && (*(int *)(param_1 + 0xf0) != 7)) && (*(int *)(param_1 + 0xf0) != 0))))
  {
    uVar3 = tls_finish_handshake(param_1,param_2,0,1);
    return uVar3;
  }
  return 2;
}



undefined8
ossl_statem_client_construct_message(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0xd:
    *param_2 = 0x100000;
    *param_3 = 1;
    break;
  case 0xe:
    *param_2 = tls_construct_client_certificate;
    *param_3 = 0xb;
    break;
  default:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x3b3,"ossl_statem_client_construct_message");
    ossl_statem_fatal(param_1,0x50,0xec,0);
    return 0;
  case 0x10:
    *param_2 = tls_construct_client_key_exchange;
    *param_3 = 0x10;
    break;
  case 0x11:
    *param_2 = &tls_construct_cert_verify;
    *param_3 = 0xf;
    break;
  case 0x12:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      puVar1 = &tls_construct_change_cipher_spec;
    }
    else {
      puVar1 = &dtls_construct_change_cipher_spec;
    }
    *param_2 = puVar1;
    *param_3 = 0x101;
    break;
  case 0x13:
    *param_2 = tls_construct_next_proto;
    *param_3 = 0x43;
    break;
  case 0x14:
    *param_2 = &tls_construct_finished;
    *param_3 = 0x14;
    break;
  case 0x2f:
    *param_2 = &tls_construct_key_update;
    *param_3 = 0x18;
    break;
  case 0x33:
    *param_2 = 0;
    *param_3 = 0xffffffff;
    break;
  case 0x34:
    *param_2 = tls_construct_end_of_early_data;
    *param_3 = 5;
  }
  return 1;
}



long ossl_statem_client_max_message_size(long param_1)

{
  int iVar1;
  long lVar2;
  
  switch(*(undefined4 *)(param_1 + 0xac)) {
  default:
    return 0;
  case 2:
    return 0x102;
  case 3:
    lVar2 = 0x10047;
    break;
  case 4:
  case 5:
  case 8:
    return *(long *)(param_1 + 0x9c8);
  case 6:
    return 0x4000;
  case 7:
    return 0x19000;
  case 10:
    lVar2 = 0x10005;
    if (((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
       ((iVar1 = **(int **)(param_1 + 0x18), iVar1 == 0x10000 || (lVar2 = 0x2010a, iVar1 < 0x304))))
    {
      return 0x10005;
    }
    break;
  case 0xb:
    return (ulong)(*(int *)(param_1 + 0x48) == 0x100) * 2 + 1;
  case 0xc:
    return 0x40;
  case 0x2a:
    return 20000;
  case 0x2b:
    return 0x10003;
  case 0x31:
    return 1;
  }
  return lVar2;
}



undefined8 dtls_process_hello_verify(long param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  uVar5 = param_2[1];
  if (uVar5 < 2) {
LAB_00102428:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x551,"dtls_process_hello_verify");
    ossl_statem_fatal(param_1,0x32,0x9f,0);
    return 0;
  }
  lVar2 = *param_2;
  *param_2 = lVar2 + 2;
  param_2[1] = uVar5 - 2;
  if (uVar5 - 2 == 0) goto LAB_00102428;
  bVar1 = *(byte *)(lVar2 + 2);
  uVar6 = (ulong)bVar1;
  if (uVar5 - 3 < uVar6) goto LAB_00102428;
  param_2[1] = (uVar5 - 3) - uVar6;
  puVar3 = *(undefined8 **)(param_1 + 0x4f0);
  *param_2 = lVar2 + 3 + uVar6;
  if (bVar1 < 8) {
    if ((bVar1 & 4) != 0) {
      *(undefined4 *)puVar3 = *(undefined4 *)(lVar2 + 3);
      *(undefined4 *)((long)puVar3 + (uVar6 - 4)) = *(undefined4 *)(lVar2 + -1 + uVar6);
      puVar3 = *(undefined8 **)(param_1 + 0x4f0);
      goto LAB_00102417;
    }
    if (bVar1 == 0) goto LAB_00102417;
    *(undefined1 *)puVar3 = *(undefined1 *)(lVar2 + 3);
    if ((bVar1 & 2) != 0) {
      *(undefined2 *)((long)puVar3 + (uVar6 - 2)) = *(undefined2 *)(lVar2 + 1 + uVar6);
      puVar3 = *(undefined8 **)(param_1 + 0x4f0);
      goto LAB_00102417;
    }
  }
  else {
    *puVar3 = *(undefined8 *)(lVar2 + 3);
    *(undefined8 *)((long)puVar3 + (uVar6 - 8)) = *(undefined8 *)(lVar2 + -5 + uVar6);
    lVar4 = (long)puVar3 - (long)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    puVar7 = (undefined8 *)((lVar2 + 3) - lVar4);
    puVar3 = (undefined8 *)((ulong)(puVar3 + 1) & 0xfffffffffffffff8);
    for (uVar5 = (ulong)((int)lVar4 + (uint)bVar1 >> 3); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  puVar3 = *(undefined8 **)(param_1 + 0x4f0);
LAB_00102417:
  puVar3[0x20] = uVar6;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 tls_process_server_hello(long param_1,long *param_2)

{
  byte *__s1;
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  void *pvVar12;
  uint uVar13;
  byte *pbVar14;
  ulong uVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  ushort uVar20;
  int *piVar21;
  ulong __n;
  long in_FS_OFFSET;
  byte bVar22;
  int local_6c;
  void *local_68;
  void *local_60;
  byte *local_58;
  ulong local_50;
  long local_40;
  
  bVar22 = 0;
  uVar18 = *(undefined8 *)(param_1 + 0x40);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (void *)0x0;
  if ((ulong)param_2[1] < 2) {
    ERR_new();
    uVar18 = 0x5c3;
    goto LAB_001026d1;
  }
  puVar5 = (ushort *)*param_2;
  uVar10 = param_2[1] - 2;
  uVar20 = *puVar5;
  param_2[1] = uVar10;
  *param_2 = (long)(puVar5 + 1);
  uVar20 = uVar20 << 8 | uVar20 >> 8;
  if ((*(int *)(param_1 + 0x48) == 0x304) && (uVar20 == 0x303)) {
    if (0x1f < uVar10) {
      if ((_hrrrandom != *(long *)(puVar5 + 1) ||
           _ssl_set_record_protocol_version != *(long *)(puVar5 + 5)) ||
         (_memcmp != *(long *)(puVar5 + 9) || _tls_validate_all_contexts != *(long *)(puVar5 + 0xd))
         ) goto LAB_0010254d;
      if (*(int *)(param_1 + 0x8d0) != 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0x5cd,"tls_process_server_hello");
        ossl_statem_fatal(param_1,10,0xf4,0);
        goto LAB_001026f6;
      }
      *(undefined4 *)(param_1 + 0x8d0) = 1;
      iVar9 = ssl_set_record_protocol_version(param_1,0x304);
      if (iVar9 != 0) {
        uVar10 = param_2[1];
        if (uVar10 < 0x20) {
          ERR_new();
          uVar18 = 0x5d8;
          goto LAB_001026d1;
        }
        bVar8 = true;
        pbVar14 = (byte *)(*param_2 + 0x20);
        *param_2 = (long)pbVar14;
        goto LAB_00102580;
      }
      ERR_new();
      uVar18 = 0x5d3;
LAB_00103099:
      ERR_set_debug("ssl/statem/statem_clnt.c",uVar18,"tls_process_server_hello");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      goto LAB_001026f6;
    }
LAB_001026c0:
    ERR_new();
    uVar18 = 0x5dd;
LAB_001026d1:
    ERR_set_debug("ssl/statem/statem_clnt.c",uVar18,"tls_process_server_hello");
    ossl_statem_fatal(param_1,0x32,0x9f,0);
  }
  else {
    if (uVar10 < 0x20) goto LAB_001026c0;
LAB_0010254d:
    uVar7 = *(undefined8 *)(puVar5 + 5);
    bVar8 = false;
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(puVar5 + 1);
    *(undefined8 *)(param_1 + 0x170) = uVar7;
    uVar7 = *(undefined8 *)(puVar5 + 0xd);
    *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(puVar5 + 9);
    *(undefined8 *)(param_1 + 0x180) = uVar7;
    pbVar14 = (byte *)(*param_2 + 0x20);
    uVar10 = param_2[1];
    *param_2 = (long)pbVar14;
LAB_00102580:
    param_2[1] = uVar10 - 0x20;
    if (uVar10 - 0x20 == 0) {
LAB_00102750:
      ERR_new();
      uVar18 = 0x5e4;
      goto LAB_001026d1;
    }
    bVar3 = *pbVar14;
    __n = (ulong)bVar3;
    __s1 = pbVar14 + 1;
    if (uVar10 - 0x21 < __n) goto LAB_00102750;
    pbVar2 = __s1 + __n;
    uVar10 = (uVar10 - 0x21) - __n;
    *param_2 = (long)pbVar2;
    param_2[1] = uVar10;
    if (0x20 < __n) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x5ea,"tls_process_server_hello");
      ossl_statem_fatal(param_1,0x2f,300,0);
      goto LAB_001026f6;
    }
    if (uVar10 < 2) {
      ERR_new();
      uVar18 = 0x5ef;
      goto LAB_001026d1;
    }
    *param_2 = (long)(pbVar2 + 2);
    param_2[1] = uVar10 - 2;
    if (uVar10 - 2 == 0) {
      ERR_new();
      uVar18 = 0x5f4;
      goto LAB_001026d1;
    }
    bVar16 = pbVar2[2];
    *param_2 = (long)(pbVar2 + 3);
    lVar11 = uVar10 - 3;
    uVar13 = (uint)bVar16;
    param_2[1] = lVar11;
    if (lVar11 == 0) {
      if (bVar8) goto LAB_00102b18;
      local_58 = (byte *)0x0;
      local_50 = 0;
LAB_00102620:
      iVar9 = tls_collect_extensions(param_1,&local_58,0x300,&local_68,0,1);
      if ((iVar9 == 0) || (iVar9 = ssl_choose_client_version(param_1,uVar20,local_68), iVar9 == 0))
      goto LAB_001026f6;
      piVar21 = *(int **)(param_1 + 0x18);
      if (((*(uint *)(*(long *)(piVar21 + 0x36) + 0x50) & 8) == 0) &&
         ((0x303 < *piVar21 && (bVar16 = 0, *piVar21 != 0x10000)))) {
LAB_001028fe:
        if (uVar13 == 0) {
          if ((*(ulong *)(param_1 + 0x948) == __n) &&
             (iVar9 = memcmp(__s1,(void *)(param_1 + 0x928),__n), iVar9 == 0)) {
            if (!bVar8) {
              if (((bVar16 != 0) || (*piVar21 == 0x10000)) || (*piVar21 < 0x304)) goto LAB_001026b0;
              uVar17 = 0x200;
              goto LAB_00102980;
            }
            iVar9 = set_client_ciphersuite(param_1,pbVar2);
            if (iVar9 != 0) {
              local_60 = (void *)0x0;
              if ((*(int *)(param_1 + 0xf0) != 7) ||
                 (iVar9 = ssl_set_new_record_layer(param_1,0x10000,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0),
                 iVar9 != 0)) {
                (**(code **)(*(long *)(param_1 + 0xc78) + 0x60))
                          (*(undefined8 *)(param_1 + 0xc88),0x304);
                iVar9 = tls_collect_extensions(param_1,&local_58,0x800,&local_60,0,1);
                if ((iVar9 != 0) &&
                   (iVar9 = tls_parse_all_extensions(param_1,0x800,local_60,0,0,1), iVar9 != 0)) {
                  CRYPTO_free(local_60);
                  local_60 = (void *)0x0;
                  if ((*(long *)(param_1 + 0xb28) == 0) && (*(long *)(param_1 + 0x308) != 0)) {
                    ERR_new();
                    ERR_set_debug("ssl/statem/statem_clnt.c",0x743,
                                  "tls_process_as_hello_retry_request");
                    ossl_statem_fatal(param_1,0x2f,0xd6,0);
                  }
                  else {
                    iVar9 = create_synthetic_message_hash(param_1,0,0,0,0);
                    if ((iVar9 != 0) &&
                       (iVar9 = ssl3_finish_mac(param_1,*(undefined8 *)
                                                         (*(long *)(param_1 + 0xf8) + 8),
                                                *(long *)(param_1 + 0x108) + 4), iVar9 != 0)) {
                      uVar17 = 1;
                      goto LAB_0010270b;
                    }
                  }
                }
              }
              CRYPTO_free(local_60);
              uVar17 = 0;
              goto LAB_0010270b;
            }
          }
          else {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0x61a,"tls_process_server_hello");
            ossl_statem_fatal(param_1,0x2f,999,0);
          }
        }
        else {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0x612,"tls_process_server_hello");
          ossl_statem_fatal(param_1,0x2f,0x155,0);
        }
      }
      else {
LAB_001026b0:
        uVar17 = 0x100;
LAB_00102980:
        iVar9 = tls_validate_all_contexts(param_1,uVar17,local_68);
        if (iVar9 == 0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0x62f,"tls_process_server_hello");
          ossl_statem_fatal(param_1,0x2f,0x6e,0);
        }
        else {
          *(undefined4 *)(param_1 + 0x508) = 0;
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
              (iVar9 = **(int **)(param_1 + 0x18), iVar9 != 0x10000)) && (0x303 < iVar9)) {
            iVar9 = RECORD_LAYER_processed_read_pending(param_1 + 0xc58);
            if (iVar9 == 0) {
              iVar9 = tls_parse_extension(param_1,0x1c,0x200,local_68,0,0);
              if (iVar9 != 0) {
                piVar21 = *(int **)(param_1 + 0x900);
LAB_00102a8b:
                if (*(int *)(param_1 + 0x508) == 0) goto LAB_00102c20;
                goto LAB_00102a99;
              }
            }
            else {
              ERR_new();
              ERR_set_debug("ssl/statem/statem_clnt.c",0x63b,"tls_process_server_hello");
              ossl_statem_fatal(param_1,10,0xb6,0);
            }
          }
          else {
            piVar21 = *(int **)(param_1 + 0x900);
            if (((*(int *)(param_1 + 0x48) < 0x301) || (*(code **)(param_1 + 0xae0) == (code *)0x0))
               || (*(long *)(piVar21 + 0xca) == 0)) {
              if ((__n != 0) && (*(ulong *)(piVar21 + 0x94) == __n)) goto LAB_00102bab;
LAB_00102c20:
              if (*(long *)(piVar21 + 0x94) != 0) {
LAB_00102ffe:
                LOCK();
                piVar21 = (int *)(*(long *)(param_1 + 0xb88) + 0x90);
                *piVar21 = *piVar21 + 1;
                UNLOCK();
                iVar9 = ssl_get_new_session(param_1,0);
                if (iVar9 == 0) goto LAB_001026f6;
                piVar21 = *(int **)(param_1 + 0x900);
              }
              piVar6 = *(int **)(param_1 + 0x18);
              iVar9 = *(int *)(param_1 + 0x48);
              lVar11 = *(long *)(piVar6 + 0x36);
              *piVar21 = iVar9;
              if (((((*(byte *)(lVar11 + 0x50) & 8) != 0) || (iVar4 = *piVar6, iVar4 < 0x304)) ||
                  (iVar4 == 0x10000)) && (*(ulong *)(piVar21 + 0x94) = __n, __n != 0)) {
                pbVar1 = (byte *)(piVar21 + 0x96);
                if (bVar3 < 8) {
                  if ((bVar3 & 4) == 0) {
                    if (bVar3 != 0) {
                      *pbVar1 = *__s1;
                      if ((bVar3 & 2) == 0) goto LAB_00102df6;
                      *(undefined2 *)((long)piVar21 + __n + 0x256) =
                           *(undefined2 *)(pbVar14 + (__n - 1));
                      piVar21 = *(int **)(param_1 + 0x900);
                    }
                  }
                  else {
                    *(undefined4 *)pbVar1 = *(undefined4 *)__s1;
                    *(undefined4 *)((long)piVar21 + __n + 0x254) =
                         *(undefined4 *)(pbVar14 + (__n - 3));
                    piVar21 = *(int **)(param_1 + 0x900);
                  }
                }
                else {
                  *(undefined8 *)(piVar21 + 0x96) = *(undefined8 *)__s1;
                  *(undefined8 *)((long)piVar21 + __n + 0x250) =
                       *(undefined8 *)(pbVar14 + (__n - 7));
                  lVar11 = (long)pbVar1 - (long)((ulong)(piVar21 + 0x98) & 0xfffffffffffffff8);
                  pbVar14 = __s1 + -lVar11;
                  puVar19 = (undefined8 *)((ulong)(piVar21 + 0x98) & 0xfffffffffffffff8);
                  for (uVar10 = (ulong)((int)lVar11 + (uint)bVar3 >> 3); uVar10 != 0;
                      uVar10 = uVar10 - 1) {
                    *puVar19 = *(undefined8 *)pbVar14;
                    pbVar14 = pbVar14 + ((ulong)bVar22 * -2 + 1) * 8;
                    puVar19 = puVar19 + (ulong)bVar22 * -2 + 1;
                  }
LAB_00102df6:
                  piVar21 = *(int **)(param_1 + 0x900);
                }
                goto LAB_00102aca;
              }
LAB_00102c65:
              *(ulong *)(param_1 + 0x418) = CONCAT44(iVar9,iVar9);
              iVar9 = set_client_ciphersuite(param_1,pbVar2);
              if (iVar9 != 0) {
                if ((*(int *)(param_1 + 0x508) == 0) ||
                   (*(uint *)(*(long *)(param_1 + 0x900) + 0x2f0) == uVar13)) {
                  if (uVar13 == 0) {
                    lVar11 = 0;
LAB_00102ce3:
                    *(long *)(param_1 + 0x390) = lVar11;
                    iVar9 = tls_parse_all_extensions(param_1,uVar17,local_68,0,0,1);
                    if (iVar9 != 0) {
                      puVar19 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
                      if (((((*(byte *)(puVar19 + 10) & 8) != 0) ||
                           (iVar9 = **(int **)(param_1 + 0x18), iVar9 == 0x10000)) ||
                          (iVar9 < 0x304)) ||
                         (((iVar9 = (*(code *)*puVar19)(param_1), iVar9 != 0 &&
                           (iVar9 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10)
                                    )(param_1,0x91), iVar9 != 0)) &&
                          ((*(int *)(param_1 + 0xf0) != 0 ||
                           (((*(byte *)(param_1 + 0x9b2) & 0x10) != 0 ||
                            (iVar9 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10
                                                 ))(param_1,0x92), iVar9 != 0)))))))) {
                        uVar17 = 3;
                        CRYPTO_free(local_68);
                        goto LAB_0010270b;
                      }
                    }
                  }
                  else {
                    iVar9 = ssl_allow_compression(param_1);
                    if (iVar9 == 0) {
                      ERR_new();
                      ERR_set_debug("ssl/statem/statem_clnt.c",0x6c4,"tls_process_server_hello");
                      ossl_statem_fatal(param_1,0x2f,0x157,0);
                    }
                    else {
                      lVar11 = ssl3_comp_find(*(undefined8 *)(*(long *)(param_1 + 8) + 0x118),uVar13
                                             );
                      if (lVar11 != 0) goto LAB_00102ce3;
                      ERR_new();
                      ERR_set_debug("ssl/statem/statem_clnt.c",0x6cc,"tls_process_server_hello");
                      ossl_statem_fatal(param_1,0x2f,0x101,0);
                    }
                  }
                }
                else {
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_clnt.c",0x6bd,"tls_process_server_hello");
                  ossl_statem_fatal(param_1,0x2f,0x158,0);
                }
              }
            }
            else {
              local_60 = (void *)0x0;
              local_6c = 0x200;
              iVar9 = (**(code **)(param_1 + 0xae0))
                                (uVar18,piVar21 + 0x14,&local_6c,0,&local_60,
                                 *(undefined8 *)(param_1 + 0xae8));
              if ((iVar9 == 0) || (local_6c < 1)) {
                ERR_new();
                uVar18 = 0x667;
                goto LAB_00103099;
              }
              piVar21 = *(int **)(param_1 + 0x900);
              *(long *)(piVar21 + 2) = (long)local_6c;
              pvVar12 = local_60;
              if (local_60 == (void *)0x0) {
                pvVar12 = (void *)ssl_get_cipher_by_char(param_1,pbVar2,0);
                piVar21 = *(int **)(param_1 + 0x900);
              }
              *(void **)(piVar21 + 0xbe) = pvVar12;
              if ((__n == 0) || (*(ulong *)(piVar21 + 0x94) != __n)) goto LAB_00102a8b;
LAB_00102bab:
              iVar9 = memcmp(__s1,piVar21 + 0x96,__n);
              if (iVar9 == 0) {
                *(undefined4 *)(param_1 + 0x508) = 1;
              }
              else if (*(int *)(param_1 + 0x508) == 0) goto LAB_00102ffe;
LAB_00102a99:
              if ((*(size_t *)(param_1 + 0x8d8) == *(size_t *)(piVar21 + 0x9e)) &&
                 (iVar9 = memcmp(piVar21 + 0xa0,(void *)(param_1 + 0x8e0),
                                 *(size_t *)(param_1 + 0x8d8)), iVar9 == 0)) {
LAB_00102aca:
                iVar9 = *piVar21;
                if (*(int *)(param_1 + 0x48) == iVar9) goto LAB_00102c65;
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0x69d,"tls_process_server_hello");
                ossl_statem_fatal(param_1,0x46,0xd2,0);
              }
              else {
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0x677,"tls_process_server_hello");
                ossl_statem_fatal(param_1,0x2f,0x110,0);
              }
            }
          }
        }
      }
    }
    else {
      if (lVar11 != 1) {
        uVar15 = (ulong)(ushort)(*(ushort *)(pbVar2 + 3) << 8 | *(ushort *)(pbVar2 + 3) >> 8);
        if (uVar15 <= uVar10 - 5) {
          pbVar1 = pbVar2 + 5;
          if (uVar15 == uVar10 - 5) {
            *param_2 = (long)(pbVar1 + uVar15);
            param_2[1] = 0;
            local_58 = pbVar1;
            local_50 = uVar15;
            if (!bVar8) goto LAB_00102620;
            piVar21 = *(int **)(param_1 + 0x18);
            bVar16 = -((*(uint *)(*(long *)(piVar21 + 0x36) + 0x50) & 8) != 0) & 8;
            goto LAB_001028fe;
          }
        }
      }
LAB_00102b18:
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x5fd,"tls_process_server_hello");
      ossl_statem_fatal(param_1,0x32,0x10f,0);
    }
  }
LAB_001026f6:
  uVar17 = 0;
  CRYPTO_free(local_68);
LAB_0010270b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar17;
}



undefined8 tls_process_server_rpk(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  iVar1 = tls_process_rpk(param_1,param_2,&local_18);
  if (iVar1 != 0) {
    if (local_18 != 0) {
      EVP_PKEY_free(*(EVP_PKEY **)(*(long *)(param_1 + 0x900) + 0x2b8));
      *(long *)(*(long *)(param_1 + 0x900) + 0x2b8) = local_18;
      uVar2 = 2;
      goto LAB_00103355;
    }
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x76c,"tls_process_server_rpk");
    ossl_statem_fatal(param_1,0x32,0x15c,0);
  }
  uVar2 = 0;
LAB_00103355:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tls_process_server_certificate(long param_1,long *param_2)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  X509 *pXVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  long in_FS_OFFSET;
  X509 *local_70;
  byte *local_68;
  void *local_60;
  ushort *local_58;
  ulong local_50;
  long local_40;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = (X509 *)0x0;
  if (*(char *)(param_1 + 0xb52) == '\x02') {
    uVar13 = tls_process_server_rpk();
    goto LAB_001034e8;
  }
  if (*(char *)(param_1 + 0xb52) == '\0') {
    lVar17 = *(long *)(param_1 + 0x900);
    lVar10 = OPENSSL_sk_new_null();
    *(long *)(lVar17 + 0x2c8) = lVar10;
    if (lVar10 == 0) {
      ERR_new();
      uVar13 = 0x7cc;
LAB_001036f1:
      ERR_set_debug("ssl/statem/statem_clnt.c",uVar13,"tls_process_server_certificate");
      ossl_statem_fatal(param_1,0x50,0x8000f,0);
    }
    else {
      uVar11 = param_2[1];
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
          (iVar9 = **(int **)(param_1 + 0x18), 0x303 < iVar9)) && (iVar9 != 0x10000)) {
        if (uVar11 != 0) {
          uVar11 = uVar11 - 1;
          cVar5 = *(char *)*param_2;
          pbVar15 = (byte *)((char *)*param_2 + 1);
          param_2[1] = uVar11;
          *param_2 = (long)pbVar15;
          if (cVar5 == '\0') goto LAB_00103447;
        }
      }
      else {
        pbVar15 = (byte *)*param_2;
LAB_00103447:
        if (2 < uVar11) {
          bVar2 = *pbVar15;
          bVar3 = pbVar15[1];
          uVar11 = uVar11 - 3;
          pbVar14 = pbVar15 + 3;
          bVar4 = pbVar15[2];
          *param_2 = (long)pbVar14;
          param_2[1] = uVar11;
          if ((((ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4) == uVar11) && (uVar11 != 0)
             ) {
            lVar17 = 0;
            while (2 < uVar11) {
              bVar2 = *pbVar14;
              bVar3 = pbVar14[1];
              uVar11 = uVar11 - 3;
              pbVar15 = pbVar14 + 3;
              bVar4 = pbVar14[2];
              *param_2 = (long)pbVar15;
              param_2[1] = uVar11;
              uVar16 = (ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4;
              if (uVar11 < uVar16) break;
              uVar13 = *puVar7;
              *param_2 = (long)(pbVar15 + uVar16);
              uVar8 = puVar7[0x8e];
              param_2[1] = uVar11 - uVar16;
              local_68 = pbVar15;
              local_70 = (X509 *)X509_new_ex(uVar13,uVar8);
              if (local_70 == (X509 *)0x0) {
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0x7e2,"tls_process_server_certificate");
                ossl_statem_fatal(param_1,0x32,0x8000d,0);
                goto LAB_001034b7;
              }
              pXVar12 = d2i_X509(&local_70,&local_68,uVar16);
              if (pXVar12 == (X509 *)0x0) {
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0x7e7,"tls_process_server_certificate");
                ossl_statem_fatal(param_1,0x2a,0x8000d,0);
                goto LAB_001034b7;
              }
              if (local_68 != pbVar15 + uVar16) {
                ERR_new();
                uVar13 = 0x7ec;
                goto LAB_001036a1;
              }
              if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                  (iVar9 = **(int **)(param_1 + 0x18), 0x303 < iVar9)) && (iVar9 != 0x10000)) {
                local_60 = (void *)0x0;
                if (1 < (ulong)param_2[1]) {
                  uVar11 = param_2[1] - 2;
                  uVar6 = *(ushort *)*param_2;
                  puVar1 = (ushort *)*param_2 + 1;
                  uVar16 = (ulong)(ushort)(uVar6 << 8 | uVar6 >> 8);
                  if (uVar16 <= uVar11) {
                    *param_2 = (long)puVar1 + uVar16;
                    param_2[1] = uVar11 - uVar16;
                    local_58 = puVar1;
                    local_50 = uVar16;
                    iVar9 = tls_collect_extensions(param_1,&local_58,0x1000,&local_60,0,lVar17 == 0)
                    ;
                    if ((iVar9 != 0) &&
                       (iVar9 = tls_parse_all_extensions
                                          (param_1,0x1000,local_60,local_70,lVar17,param_2[1] == 0),
                       iVar9 != 0)) {
                      CRYPTO_free(local_60);
                      goto LAB_00103647;
                    }
                    CRYPTO_free(local_60);
                    goto LAB_001034b7;
                  }
                }
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0x7f5,"tls_process_server_certificate");
                ossl_statem_fatal(param_1,0x32,0x10f,0);
                goto LAB_001034b7;
              }
LAB_00103647:
              iVar9 = OPENSSL_sk_push(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8),local_70);
              if (iVar9 == 0) {
                ERR_new();
                uVar13 = 0x806;
                goto LAB_001036f1;
              }
              uVar11 = param_2[1];
              lVar17 = lVar17 + 1;
              local_70 = (X509 *)0x0;
              if (uVar11 == 0) {
                uVar13 = 2;
                goto LAB_001034e8;
              }
              pbVar14 = (byte *)*param_2;
            }
            ERR_new();
            uVar13 = 0x7db;
LAB_001036a1:
            ERR_set_debug("ssl/statem/statem_clnt.c",uVar13,"tls_process_server_certificate");
            ossl_statem_fatal(param_1,0x32,0x87,0);
            goto LAB_001034b7;
          }
        }
      }
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x7d5,"tls_process_server_certificate");
      ossl_statem_fatal(param_1,0x32,0x9f,0);
    }
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x7c6,"tls_process_server_certificate");
    ossl_statem_fatal(param_1,0x2b,0xf7,0);
  }
LAB_001034b7:
  X509_free(local_70);
  OSSL_STACK_OF_X509_free(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8));
  *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8) = 0;
  uVar13 = 0;
LAB_001034e8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}



char tls_post_process_server_certificate(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  EVP_PKEY *pkey;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0xb52) == '\x02') {
    if (*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x77e,"tls_post_process_server_rpk");
      ossl_statem_fatal(param_1,0x2f,0x15e,0);
    }
    else {
      if (*(int *)(param_1 + 0x68) == 8) {
        *(undefined4 *)(param_1 + 0x68) = 1;
      }
      ERR_set_mark();
      iVar3 = ssl_verify_rpk(param_1,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8));
      if (iVar3 < 1) {
        if (*(int *)(param_1 + 0x950) != 0) {
          ERR_clear_last_mark();
          ERR_new();
          pcVar7 = "tls_post_process_server_rpk";
          uVar5 = 0x78a;
          goto LAB_00103b16;
        }
        ERR_pop_to_mark();
      }
      else {
        ERR_pop_to_mark();
        if (*(int *)(param_1 + 0x68) == 8) goto LAB_00103af7;
      }
      lVar6 = ssl_cert_lookup_by_pkey
                        (*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8),auStack_28,
                         *(undefined8 *)(param_1 + 8));
      if (lVar6 == 0) {
        ERR_new();
        pcVar7 = "tls_post_process_server_rpk";
        uVar5 = 0x795;
        goto LAB_00103d51;
      }
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
           (iVar3 = **(int **)(param_1 + 0x18), iVar3 != 0x10000)) && (0x303 < iVar3)) ||
         ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & *(uint *)(lVar6 + 4)) != 0)) {
        X509_free(*(X509 **)(*(long *)(param_1 + 0x900) + 0x2c0));
        lVar6 = *(long *)(param_1 + 0x900);
        *(undefined8 *)(lVar6 + 0x2c0) = 0;
        OPENSSL_sk_pop_free(*(undefined8 *)(lVar6 + 0x2c8),X509_free);
        lVar6 = *(long *)(param_1 + 0x900);
        uVar5 = *(undefined8 *)(param_1 + 0x998);
        *(undefined8 *)(lVar6 + 0x2c8) = 0;
        *(undefined8 *)(lVar6 + 0x2d0) = uVar5;
LAB_00103a38:
        cVar2 = '\x02';
        if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
          iVar3 = **(int **)(param_1 + 0x18);
          if ((iVar3 == 0x10000) || (iVar3 < 0x304)) {
            cVar2 = '\x02';
          }
          else {
            iVar3 = ssl_handshake_hash(param_1,param_1 + 0x888,0x40,param_1 + 0x8c8);
            cVar2 = (iVar3 != 0) * '\x02';
          }
        }
        goto LAB_00103ac5;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x7a0,"tls_post_process_server_rpk");
      ossl_statem_fatal(param_1,0x2f,0x15f,0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x68) == 8) {
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    ERR_set_mark();
    iVar3 = ssl_verify_cert_chain(param_1,*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8));
    if (iVar3 < 1) {
      if (*(int *)(param_1 + 0x950) != 0) {
        ERR_clear_last_mark();
        ERR_new();
        pcVar7 = "tls_post_process_server_certificate";
        uVar5 = 0x83a;
LAB_00103b16:
        ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,pcVar7);
        uVar4 = ssl_x509err2alert(*(undefined4 *)(param_1 + 0x998));
        ossl_statem_fatal(param_1,uVar4,0x86,0);
        goto LAB_00103ac3;
      }
      ERR_pop_to_mark();
    }
    else {
      ERR_pop_to_mark();
      if (*(int *)(param_1 + 0x68) == 8) {
LAB_00103af7:
        cVar2 = '\x04';
        goto LAB_00103ac5;
      }
    }
    uVar5 = OPENSSL_sk_value(*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c8),0);
    pkey = (EVP_PKEY *)X509_get0_pubkey(uVar5);
    if ((pkey == (EVP_PKEY *)0x0) || (iVar3 = EVP_PKEY_missing_parameters(pkey), iVar3 != 0)) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x84b,"tls_post_process_server_certificate");
      ossl_statem_fatal(param_1,0x50,0xef,0);
    }
    else {
      lVar6 = ssl_cert_lookup_by_pkey(pkey,auStack_28,*(undefined8 *)(param_1 + 8));
      if (lVar6 == 0) {
        ERR_new();
        pcVar7 = "tls_post_process_server_certificate";
        uVar5 = 0x852;
LAB_00103d51:
        ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,pcVar7);
        ossl_statem_fatal(param_1,0x2f,0xf7,0);
      }
      else if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
                (iVar3 = **(int **)(param_1 + 0x18), iVar3 != 0x10000)) && (0x303 < iVar3)) ||
              ((*(uint *)(*(long *)(param_1 + 0x300) + 0x20) & *(uint *)(lVar6 + 4)) != 0)) {
        iVar3 = X509_up_ref(uVar5);
        if (iVar3 != 0) {
          X509_free(*(X509 **)(*(long *)(param_1 + 0x900) + 0x2c0));
          lVar6 = *(long *)(param_1 + 0x900);
          uVar1 = *(undefined8 *)(param_1 + 0x998);
          *(undefined8 *)(lVar6 + 0x2c0) = uVar5;
          *(undefined8 *)(lVar6 + 0x2d0) = uVar1;
          EVP_PKEY_free(*(EVP_PKEY **)(lVar6 + 0x2b8));
          *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2b8) = 0;
          goto LAB_00103a38;
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0x862,"tls_post_process_server_certificate");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0x85c,"tls_post_process_server_certificate");
        ossl_statem_fatal(param_1,0x2f,0x17f,0);
      }
    }
  }
LAB_00103ac3:
  cVar2 = '\0';
LAB_00103ac5:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar2;
}



char tls_process_certificate_request(long param_1,long *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  size_t __n;
  ushort uVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  char cVar10;
  long in_FS_OFFSET;
  void *local_60;
  ushort *local_58;
  ulong local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __n = *(long *)(param_1 + 0x118) * 4;
  if (*(void **)(param_1 + 0x408) == (void *)0x0) {
    lVar7 = CRYPTO_zalloc(__n,"ssl/statem/statem_clnt.c",0xa1a);
    *(long *)(param_1 + 0x408) = lVar7;
  }
  else {
    memset(*(void **)(param_1 + 0x408),0,__n);
    lVar7 = *(long *)(param_1 + 0x408);
  }
  if (lVar7 == 0) goto LAB_00104063;
  if ((((*(uint *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar5 = **(int **)(param_1 + 0x18), 0x303 < iVar5)) && (iVar5 != 0x10000)) {
    local_60 = (void *)0x0;
    if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
      cVar10 = '\x01';
      goto LAB_00104066;
    }
    CRYPTO_free(*(void **)(param_1 + 0x348));
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    CRYPTO_free(*(void **)(param_1 + 0xbb0));
    lVar7 = param_2[1];
    pbVar1 = (byte *)*param_2;
    *(undefined8 *)(param_1 + 0xbb0) = 0;
    *(undefined8 *)(param_1 + 3000) = 0;
    cVar10 = '\0';
    if (lVar7 != 0) {
      uVar8 = (ulong)*pbVar1;
      uVar6 = lVar7 - 1;
      pbVar1 = pbVar1 + 1;
      if (uVar8 <= uVar6) {
        *param_2 = (long)(pbVar1 + uVar8);
        pvVar4 = *(void **)(param_1 + 0xbb0);
        param_2[1] = uVar6 - uVar8;
        CRYPTO_free(pvVar4);
        *(undefined8 *)(param_1 + 0xbb0) = 0;
        *(undefined8 *)(param_1 + 3000) = 0;
        if (uVar8 != 0) {
          lVar7 = CRYPTO_memdup(pbVar1,uVar8,"include/internal/packet.h",0x1cf);
          *(long *)(param_1 + 0xbb0) = lVar7;
          if (lVar7 == 0) goto LAB_00104280;
          *(ulong *)(param_1 + 3000) = uVar8;
        }
        if (1 < (ulong)param_2[1]) {
          uVar6 = param_2[1] - 2;
          uVar3 = *(ushort *)*param_2;
          puVar2 = (ushort *)*param_2 + 1;
          uVar8 = (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8);
          if (uVar8 <= uVar6) {
            *param_2 = (long)puVar2 + uVar8;
            param_2[1] = uVar6 - uVar8;
            local_58 = puVar2;
            local_50 = uVar8;
            iVar5 = tls_collect_extensions(param_1,&local_58,0x4000,&local_60,0,1);
            if (iVar5 != 0) {
              iVar5 = tls_parse_all_extensions(param_1,0x4000,local_60,0,0,1);
              if (iVar5 != 0) {
                CRYPTO_free(local_60);
                iVar5 = tls1_process_sigalgs(param_1);
                if (iVar5 == 0) {
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_clnt.c",0xa4a,"tls_process_certificate_request");
                  ossl_statem_fatal(param_1,0x50,0x10f,0);
                  goto LAB_00104066;
                }
                goto LAB_00103fd2;
              }
            }
            CRYPTO_free(local_60);
            goto LAB_00104066;
          }
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xa3c,"tls_process_certificate_request");
        ossl_statem_fatal(param_1,0x32,0x10f,0);
        goto LAB_00104066;
      }
    }
LAB_00104280:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xa37,"tls_process_certificate_request");
    ossl_statem_fatal(param_1,0x32,0x9f,0);
    goto LAB_00104066;
  }
  if (param_2[1] == 0) {
LAB_00104030:
    ERR_new();
    uVar9 = 0xa52;
LAB_00104041:
    ERR_set_debug("ssl/statem/statem_clnt.c",uVar9,"tls_process_certificate_request");
    ossl_statem_fatal(param_1,0x32,0x9f,0);
  }
  else {
    uVar8 = (ulong)*(byte *)*param_2;
    uVar6 = param_2[1] - 1;
    pbVar1 = (byte *)*param_2 + 1;
    if (uVar6 < uVar8) goto LAB_00104030;
    *param_2 = (long)(pbVar1 + uVar8);
    pvVar4 = *(void **)(param_1 + 0x348);
    param_2[1] = uVar6 - uVar8;
    CRYPTO_free(pvVar4);
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    if (uVar8 != 0) {
      lVar7 = CRYPTO_memdup(pbVar1,uVar8,"include/internal/packet.h",0x1cf);
      *(long *)(param_1 + 0x348) = lVar7;
      if (lVar7 == 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xa57,"tls_process_certificate_request");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        goto LAB_00104063;
      }
      *(ulong *)(param_1 + 0x350) = uVar8;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) != 0) {
      if (1 < (ulong)param_2[1]) {
        uVar6 = param_2[1] - 2;
        uVar3 = *(ushort *)*param_2;
        puVar2 = (ushort *)*param_2 + 1;
        uVar8 = (ulong)(ushort)(uVar3 << 8 | uVar3 >> 8);
        if (uVar8 <= uVar6) {
          param_2[1] = uVar6 - uVar8;
          *param_2 = (long)puVar2 + uVar8;
          local_58 = puVar2;
          local_50 = uVar8;
          iVar5 = tls1_save_sigalgs(param_1,&local_58,0);
          if (iVar5 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0xa68,"tls_process_certificate_request");
            ossl_statem_fatal(param_1,0x50,0x168,0);
          }
          else {
            iVar5 = tls1_process_sigalgs(param_1);
            if (iVar5 != 0) goto LAB_00103fbf;
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0xa6d,"tls_process_certificate_request");
            ossl_statem_fatal(param_1,0x50,0x80014,0);
          }
          goto LAB_00104063;
        }
      }
      ERR_new();
      uVar9 = 0xa5f;
      goto LAB_00104041;
    }
LAB_00103fbf:
    iVar5 = parse_ca_names(param_1,param_2);
    if (iVar5 != 0) {
LAB_00103fd2:
      if (param_2[1] == 0) {
        cVar10 = '\x02';
        *(undefined4 *)(param_1 + 0x340) = 1;
        if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
          iVar5 = **(int **)(param_1 + 0x18);
          if ((iVar5 == 0x10000) || (iVar5 < 0x304)) {
            cVar10 = '\x02';
          }
          else {
            cVar10 = (*(int *)(param_1 + 0xba8) != 4) + '\x02';
          }
        }
        goto LAB_00104066;
      }
      ERR_new();
      uVar9 = 0xa7a;
      goto LAB_00104041;
    }
  }
LAB_00104063:
  cVar10 = '\0';
LAB_00104066:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return cVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tls_process_new_session_ticket(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  EVP_MD *type;
  uint uVar12;
  ushort *puVar13;
  ushort uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  long in_FS_OFFSET;
  ulong local_80;
  void *local_60;
  ushort *local_58;
  ulong local_50;
  long local_40;
  
  puVar2 = (uint *)*param_2;
  uVar15 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = *(undefined8 **)(param_1 + 8);
  local_60 = (void *)0x0;
  if (uVar15 < 4) goto LAB_00104560;
  piVar4 = *(int **)(param_1 + 0x18);
  uVar1 = *puVar2;
  *param_2 = (long)(puVar2 + 1);
  uVar8 = uVar15 - 4;
  lVar16 = *(long *)(piVar4 + 0x36);
  param_2[1] = uVar8;
  uVar12 = *(uint *)(lVar16 + 0x50) & 8;
  if (uVar12 == 0) {
    if ((*piVar4 < 0x304) || (*piVar4 == 0x10000)) goto LAB_001044e5;
    if (3 < uVar8) {
      uVar5 = puVar2[1];
      *param_2 = (long)(puVar2 + 2);
      param_2[1] = uVar15 - 8;
      if (uVar15 - 8 == 0) goto LAB_00104560;
      local_80 = (ulong)(byte)puVar2[2];
      if (uVar15 - 9 < local_80) goto LAB_00104560;
      lVar16 = (long)puVar2 + 9;
      uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
      uVar8 = (uVar15 - 9) - local_80;
      *param_2 = lVar16 + local_80;
      param_2[1] = uVar8;
      goto LAB_001044f8;
    }
LAB_00104560:
    ERR_new();
    uVar17 = 0xaa5;
LAB_00104578:
    ERR_set_debug("ssl/statem/statem_clnt.c",uVar17,"tls_process_new_session_ticket");
    ossl_statem_fatal(param_1,0x32,0x9f,0);
LAB_00104596:
    type = (EVP_MD *)0x0;
  }
  else {
LAB_001044e5:
    local_80 = 0;
    lVar16 = 0;
    uVar5 = 0;
LAB_001044f8:
    if (uVar8 < 2) goto LAB_00104560;
    uVar8 = uVar8 - 2;
    uVar14 = *(ushort *)*param_2;
    param_2[1] = uVar8;
    *param_2 = (long)((ushort *)*param_2 + 1);
    uVar14 = uVar14 << 8 | uVar14 >> 8;
    if (uVar12 != 0) {
LAB_00104550:
      if (uVar14 == uVar8) {
LAB_001045ec:
        if (uVar14 != 0) {
          lVar9 = *(long *)(param_1 + 0x900);
          if (*(long *)(lVar9 + 0x250) != 0) goto LAB_0010460b;
          goto LAB_0010468c;
        }
LAB_00104a00:
        uVar17 = 3;
        goto LAB_001045b5;
      }
      goto LAB_00104560;
    }
    if (*piVar4 < 0x304) {
      if (uVar8 != uVar14) goto LAB_00104560;
      goto LAB_001045ec;
    }
    if (*piVar4 == 0x10000) goto LAB_00104550;
    if ((uVar14 == 0) || (uVar8 < uVar14)) goto LAB_00104560;
    lVar9 = *(long *)(param_1 + 0x900);
LAB_0010460b:
    lVar9 = ssl_session_dup(lVar9,0);
    if (lVar9 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xac1,"tls_process_new_session_ticket");
      ossl_statem_fatal(param_1,0x50,0x80014,0);
      goto LAB_00104596;
    }
    if ((((ulong)(*(SSL_CTX **)(param_1 + 0xb88))->new_session_cb & 1) != 0) &&
       ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0 ||
         (iVar6 = **(int **)(param_1 + 0x18), iVar6 == 0x10000)) || (iVar6 < 0x304)))) {
      SSL_CTX_remove_session(*(SSL_CTX **)(param_1 + 0xb88),*(SSL_SESSION **)(param_1 + 0x900));
    }
    SSL_SESSION_free(*(SSL_SESSION **)(param_1 + 0x900));
    *(long *)(param_1 + 0x900) = lVar9;
LAB_0010468c:
    uVar15 = (ulong)uVar14;
    uVar10 = ossl_time_now();
    uVar17 = *(undefined8 *)(param_1 + 0x900);
    *(undefined8 *)(lVar9 + 0x2e0) = uVar10;
    ssl_session_calculate_timeout(uVar17);
    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x900) + 0x328));
    lVar9 = *(long *)(param_1 + 0x900);
    *(undefined8 *)(lVar9 + 0x328) = 0;
    *(undefined8 *)(lVar9 + 0x330) = 0;
    pvVar11 = CRYPTO_malloc((uint)uVar14,"ssl/statem/statem_clnt.c",0xada);
    *(void **)(lVar9 + 0x328) = pvVar11;
    pvVar11 = *(void **)(*(long *)(param_1 + 0x900) + 0x328);
    if (pvVar11 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xadc,"tls_process_new_session_ticket");
      ossl_statem_fatal(param_1,0x50,0x8000f,0);
      goto LAB_00104596;
    }
    if ((ulong)param_2[1] < uVar15) {
      ERR_new();
      uVar17 = 0xae0;
      goto LAB_00104578;
    }
    memcpy(pvVar11,(void *)*param_2,uVar15);
    lVar9 = *(long *)(param_1 + 0x900);
    puVar13 = (ushort *)(uVar15 + *param_2);
    *param_2 = (long)puVar13;
    uVar8 = param_2[1] - uVar15;
    param_2[1] = uVar8;
    *(ulong *)(lVar9 + 0x338) =
         (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18);
    *(ulong *)(lVar9 + 0x330) = uVar15;
    *(uint *)(lVar9 + 0x340) = uVar5;
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar6 = **(int **)(param_1 + 0x18), 0x303 < iVar6)) && (iVar6 != 0x10000)) {
      if (1 < uVar8) {
        uVar18 = (ulong)(ushort)(*puVar13 << 8 | *puVar13 >> 8);
        if (uVar18 <= uVar8 - 2) {
          if (uVar18 == uVar8 - 2) {
            *param_2 = (long)(puVar13 + 1) + uVar18;
            param_2[1] = 0;
            local_58 = puVar13 + 1;
            local_50 = uVar18;
            iVar6 = tls_collect_extensions(param_1,&local_58,0x2000,&local_60,0,1);
            if (iVar6 != 0) {
              iVar6 = tls_parse_all_extensions(param_1,0x2000,local_60,0,0);
              if (iVar6 != 0) goto LAB_001048c0;
            }
            goto LAB_00104596;
          }
        }
      }
      ERR_new();
      uVar17 = 0xaed;
      goto LAB_00104578;
    }
LAB_001048c0:
    type = (EVP_MD *)EVP_MD_fetch(*puVar3,"SHA2-256",puVar3[0x8e]);
    if (type == (EVP_MD *)0x0) {
      ossl_statem_send_fatal(param_1,0x50);
      goto LAB_00104596;
    }
    iVar6 = EVP_Digest(*(void **)(*(long *)(param_1 + 0x900) + 0x328),uVar15,
                       (uchar *)(*(long *)(param_1 + 0x900) + 600),(uint *)&local_58,type,
                       (ENGINE *)0x0);
    if (iVar6 != 0) {
      EVP_MD_free(type);
      lVar9 = *(long *)(param_1 + 0x900);
      *(undefined4 *)(lVar9 + 0x2b0) = 0;
      *(ulong *)(lVar9 + 0x250) = (ulong)local_58 & 0xffffffff;
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
          (iVar6 = **(int **)(param_1 + 0x18), iVar6 < 0x304)) || (iVar6 == 0x10000))
      goto LAB_00104a00;
      uVar17 = ssl_handshake_md(param_1);
      iVar6 = EVP_MD_get_size(uVar17);
      if (iVar6 < 1) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xb25,"tls_process_new_session_ticket");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
      else {
        iVar7 = tls13_hkdf_expand(param_1,uVar17,param_1 + 0x63c,"resumption",10,lVar16,local_80,
                                  *(long *)(param_1 + 0x900) + 0x50,(long)iVar6,1);
        if (iVar7 != 0) {
          *(long *)(*(long *)(param_1 + 0x900) + 8) = (long)iVar6;
          CRYPTO_free(local_60);
          ssl_update_cache(param_1,1);
          uVar17 = 1;
          goto LAB_001045b5;
        }
      }
      goto LAB_00104596;
    }
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xb14,"tls_process_new_session_ticket");
    ossl_statem_fatal(param_1,0x50,0x80006,0);
  }
  EVP_MD_free(type);
  CRYPTO_free(local_60);
  uVar17 = 0;
LAB_001045b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tls_process_cert_status_body(long param_1,long *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  void *__src;
  void *__dest;
  undefined8 uVar8;
  ulong __n;
  
  lVar5 = param_2[1];
  if (lVar5 == 0) {
LAB_00104b6c:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xb4d,"tls_process_cert_status_body");
    ossl_statem_fatal(param_1,0x32,0x149,0);
    return 0;
  }
  pcVar6 = (char *)*param_2;
  cVar1 = *pcVar6;
  *param_2 = (long)(pcVar6 + 1);
  param_2[1] = lVar5 - 1U;
  if (cVar1 != '\x01') goto LAB_00104b6c;
  if (2 < lVar5 - 1U) {
    bVar2 = pcVar6[1];
    bVar3 = pcVar6[2];
    bVar4 = pcVar6[3];
    *param_2 = (long)(pcVar6 + 4);
    param_2[1] = lVar5 - 4U;
    __n = (ulong)bVar2 << 0x10 | (ulong)bVar3 << 8 | (ulong)bVar4;
    if (__n == lVar5 - 4U) {
      __dest = CRYPTO_malloc((int)__n,"ssl/statem/statem_clnt.c",0xb55);
      *(void **)(param_1 + 0xa50) = __dest;
      if (__dest == (void *)0x0) {
        *(undefined8 *)(param_1 + 0xa58) = 0;
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xb58,"tls_process_cert_status_body");
        ossl_statem_fatal(param_1,0x50,0x8000f,0);
        return 0;
      }
      *(ulong *)(param_1 + 0xa58) = __n;
      uVar7 = param_2[1];
      __src = (void *)*param_2;
      if (__n <= uVar7) {
        memcpy(__dest,__src,__n);
        *param_2 = (long)__src + __n;
        param_2[1] = uVar7 - __n;
        return 1;
      }
      ERR_new();
      uVar8 = 0xb5d;
      goto LAB_00104bfd;
    }
  }
  ERR_new();
  uVar8 = 0xb52;
LAB_00104bfd:
  ERR_set_debug("ssl/statem/statem_clnt.c",uVar8,"tls_process_cert_status_body");
  ossl_statem_fatal(param_1,0x32,0x9f,0);
  return 0;
}



byte tls_process_cert_status(void)

{
  int iVar1;
  
  iVar1 = tls_process_cert_status_body();
  return -(iVar1 != 0) & 3;
}



uint ossl_gost18_cke_cipher_nid(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0x4a4;
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x24);
  if ((uVar1 & 0x400000) == 0) {
    uVar2 = -(uint)((uVar1 & 0x800000) != 0) & 0x3f5;
  }
  return uVar2;
}



undefined8 ossl_gost_ukm(long param_1,uchar *param_2)

{
  int iVar1;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  undefined8 uVar2;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)
         ssl_evp_md_fetch(**(undefined8 **)(param_1 + 8),0x3d6,(*(undefined8 **)(param_1 + 8))[0x8e]
                         );
  if (type != (EVP_MD *)0x0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx != (EVP_MD_CTX *)0x0) {
      iVar1 = EVP_DigestInit(ctx,type);
      if (0 < iVar1) {
        iVar1 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x188),0x20);
        if (0 < iVar1) {
          iVar1 = EVP_DigestUpdate(ctx,(void *)(param_1 + 0x168),0x20);
          if (0 < iVar1) {
            iVar1 = EVP_DigestFinal_ex(ctx,param_2,&local_34);
            if (0 < iVar1) {
              EVP_MD_CTX_free(ctx);
              ssl_evp_md_free(type);
              uVar2 = 1;
              goto LAB_00104e02;
            }
          }
        }
      }
    }
    EVP_MD_CTX_free(ctx);
    ssl_evp_md_free(type);
  }
  uVar2 = 0;
LAB_00104e02:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tls_construct_client_key_exchange(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ushort *in;
  size_t __n;
  EVP_PKEY *pkey;
  uchar *in_00;
  long lVar6;
  EVP_PKEY_CTX *pEVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  uchar *local_78;
  uchar *local_70;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  if (((uVar1 & 0x1c8) == 0) || (iVar4 = tls_construct_cke_psk_preamble(), iVar4 != 0)) {
    if ((uVar1 & 0x41) == 0) {
      if ((uVar1 & 0x102) == 0) {
        if ((uVar1 & 0x84) == 0) {
          if ((uVar1 & 0x10) == 0) {
            if ((uVar1 & 0x200) == 0) {
              if ((uVar1 & 0x20) == 0) {
                if ((uVar1 & 8) != 0) goto LAB_00104eb1;
                ERR_new();
                pcVar8 = "tls_construct_client_key_exchange";
                uVar5 = 0xdfc;
              }
              else {
                local_70 = (uchar *)0x0;
                if (*(BIGNUM **)(param_1 + 0xc18) != (BIGNUM *)0x0) {
                  iVar3 = BN_num_bits(*(BIGNUM **)(param_1 + 0xc18));
                  iVar4 = iVar3 + 0xe;
                  if (-1 < iVar3 + 7) {
                    iVar4 = iVar3 + 7;
                  }
                  iVar4 = WPACKET_sub_allocate_bytes__(param_2,(long)(iVar4 >> 3),&local_70,2);
                  if (iVar4 != 0) {
                    BN_bn2bin(*(BIGNUM **)(param_1 + 0xc18),local_70);
                    CRYPTO_free(*(void **)(*(long *)(param_1 + 0x900) + 0x360));
                    lVar6 = *(long *)(param_1 + 0x900);
                    pcVar8 = CRYPTO_strdup(*(char **)(param_1 + 0xbf0),"ssl/statem/statem_clnt.c",
                                           0xdcd);
                    *(char **)(lVar6 + 0x360) = pcVar8;
                    if (*(long *)(*(long *)(param_1 + 0x900) + 0x360) == 0) {
                      ERR_new();
                      pcVar8 = "tls_construct_cke_srp";
                      uVar5 = 0xdcf;
                      goto LAB_001056e2;
                    }
                    goto LAB_00104eb1;
                  }
                }
                ERR_new();
                pcVar8 = "tls_construct_cke_srp";
                uVar5 = 0xdc7;
              }
            }
            else {
              local_78 = (uchar *)0x0;
              iVar4 = ossl_gost18_cke_cipher_nid(param_1);
              puVar2 = *(undefined8 **)(param_1 + 8);
              if (iVar4 != 0) {
                iVar3 = ossl_gost_ukm(param_1,local_68);
                if (iVar3 < 1) {
                  uVar5 = 0;
                  in_00 = (uchar *)0x0;
                  pEVar7 = (EVP_PKEY_CTX *)0x0;
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_clnt.c",0xd72,"tls_construct_cke_gost18");
                  ossl_statem_fatal(param_1,0x50,0xc0103,0);
                }
                else {
                  in_00 = (uchar *)CRYPTO_malloc(0x20,"ssl/statem/statem_clnt.c",0xd78);
                  if (in_00 == (uchar *)0x0) {
                    ERR_new();
                    pEVar7 = (EVP_PKEY_CTX *)0x0;
                    uVar5 = 0x20;
                    ERR_set_debug("ssl/statem/statem_clnt.c",0xd7a,"tls_construct_cke_gost18");
                    ossl_statem_fatal(param_1,0x50,0x8000f,0);
                  }
                  else {
                    iVar3 = RAND_bytes_ex(*puVar2,in_00,0x20,0);
                    if (iVar3 < 1) {
                      ERR_new();
                      ERR_set_debug("ssl/statem/statem_clnt.c",0xd7f,"tls_construct_cke_gost18");
                      ossl_statem_fatal(param_1,0x50,0xc0103,0);
                    }
                    else {
                      lVar6 = tls_get_peer_pkey(param_1);
                      if (lVar6 == 0) {
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_clnt.c",0xd85,"tls_construct_cke_gost18");
                        ossl_statem_fatal(param_1,0x28,0x14a,0);
                      }
                      else {
                        pEVar7 = (EVP_PKEY_CTX *)
                                 EVP_PKEY_CTX_new_from_pkey(*puVar2,lVar6,puVar2[0x8e]);
                        if (pEVar7 != (EVP_PKEY_CTX *)0x0) {
                          iVar3 = EVP_PKEY_encrypt_init(pEVar7);
                          if (iVar3 < 1) {
                            ERR_new();
                            ERR_set_debug("ssl/statem/statem_clnt.c",0xd93,
                                          "tls_construct_cke_gost18");
                            ossl_statem_fatal(param_1,0x50,0xc0103,0);
                          }
                          else {
                            iVar3 = EVP_PKEY_CTX_ctrl(pEVar7,-1,0x200,8,0x20,local_68);
                            if (iVar3 < 1) {
                              ERR_new();
                              uVar5 = 0xd9a;
                            }
                            else {
                              iVar4 = EVP_PKEY_CTX_ctrl(pEVar7,-1,0x200,0xc,iVar4,(void *)0x0);
                              if (0 < iVar4) {
                                iVar4 = EVP_PKEY_encrypt(pEVar7,(uchar *)0x0,(size_t *)&local_70,
                                                         in_00,0x20);
                                if (iVar4 < 1) {
                                  ERR_new();
                                  uVar5 = 0xda5;
                                }
                                else {
                                  iVar4 = WPACKET_allocate_bytes(param_2,local_70,&local_78);
                                  if ((iVar4 != 0) &&
                                     (iVar4 = EVP_PKEY_encrypt(pEVar7,local_78,(size_t *)&local_70,
                                                               in_00,0x20), 0 < iVar4)) {
                                    EVP_PKEY_CTX_free(pEVar7);
                                    *(uchar **)(param_1 + 0x3b0) = in_00;
                                    *(undefined8 *)(param_1 + 0x3b8) = 0x20;
                                    goto LAB_00104eb1;
                                  }
                                  ERR_new();
                                  uVar5 = 0xdab;
                                }
                                ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,
                                              "tls_construct_cke_gost18");
                                ossl_statem_fatal(param_1,0x50,0x80006,0);
                                goto LAB_001059f9;
                              }
                              ERR_new();
                              uVar5 = 0xda0;
                            }
                            ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,
                                          "tls_construct_cke_gost18");
                            ossl_statem_fatal(param_1,0x50,0x112,0);
                          }
LAB_001059f9:
                          uVar5 = 0x20;
                          goto LAB_001058fe;
                        }
                        ERR_new();
                        ERR_set_debug("ssl/statem/statem_clnt.c",0xd8e,"tls_construct_cke_gost18");
                        ossl_statem_fatal(param_1,0x50,0x80006,0);
                      }
                    }
                    uVar5 = 0x20;
                    pEVar7 = (EVP_PKEY_CTX *)0x0;
                  }
                }
LAB_001058fe:
                EVP_PKEY_CTX_free(pEVar7);
                CRYPTO_clear_free(in_00,uVar5,"ssl/statem/statem_clnt.c",0xdb7);
                goto LAB_00104ed0;
              }
              ERR_new();
              pcVar8 = "tls_construct_cke_gost18";
              uVar5 = 0xd6d;
            }
            goto LAB_00105251;
          }
          iVar4 = tls_construct_cke_gost(param_1,param_2);
          if (iVar4 == 0) goto LAB_00104ed0;
LAB_00104eb1:
          uVar5 = 1;
          goto LAB_00104f34;
        }
        local_70 = (uchar *)0x0;
        lVar6 = *(long *)(param_1 + 0x4e0);
        if (lVar6 == 0) {
          ERR_new();
          pcVar8 = "tls_construct_cke_ecdhe";
          uVar5 = 0xca7;
          goto LAB_00105251;
        }
        pkey = (EVP_PKEY *)ssl_generate_pkey(param_1,lVar6);
        if (pkey != (EVP_PKEY *)0x0) {
          iVar4 = ssl_derive(param_1,pkey,lVar6,0);
          if (iVar4 == 0) goto LAB_0010532c;
          lVar6 = EVP_PKEY_get1_encoded_public_key(pkey,&local_70,0xcc5);
          if (lVar6 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0xcba,"tls_construct_cke_ecdhe");
            uVar5 = 0x80010;
          }
          else {
            iVar4 = WPACKET_sub_memcpy__(param_2,local_70,lVar6,1);
            if (iVar4 != 0) {
LAB_00105538:
              CRYPTO_free(local_70);
              EVP_PKEY_free(pkey);
              goto LAB_00104eb1;
            }
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0xcbf,"tls_construct_cke_ecdhe");
            uVar5 = 0xc0103;
          }
          ossl_statem_fatal(param_1,0x50,uVar5,0);
          goto LAB_0010532c;
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xcad,"tls_construct_cke_ecdhe");
        ossl_statem_fatal(param_1,0x50,0x80014,0);
      }
      else {
        local_78 = (uchar *)0x0;
        lVar6 = *(long *)(param_1 + 0x4e0);
        local_70 = (uchar *)0x0;
        if (lVar6 == 0) {
          ERR_new();
          uVar5 = 0xc6a;
        }
        else {
          pkey = (EVP_PKEY *)ssl_generate_pkey(param_1,lVar6);
          if (pkey != (EVP_PKEY *)0x0) {
            iVar4 = ssl_derive(param_1,pkey,lVar6,0);
            if (iVar4 != 0) {
              lVar6 = EVP_PKEY_get1_encoded_public_key(pkey,&local_70,0xc99);
              if (lVar6 == 0) {
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0xc7e,"tls_construct_cke_dhe");
                ossl_statem_fatal(param_1,0x50,0xc0103,0);
                EVP_PKEY_free(pkey);
                goto LAB_00104ed0;
              }
              iVar4 = EVP_PKEY_get_size(pkey);
              __n = iVar4 - lVar6;
              if (__n == 0) {
LAB_001051b5:
                iVar4 = WPACKET_sub_memcpy__(param_2,local_70,lVar6,2);
                if (iVar4 != 0) goto LAB_00105538;
                ERR_new();
                uVar5 = 0xc93;
              }
              else {
                iVar4 = WPACKET_sub_allocate_bytes__(param_2,__n,&local_78,2);
                if (iVar4 != 0) {
                  memset(local_78,0,__n);
                  goto LAB_001051b5;
                }
                ERR_new();
                uVar5 = 0xc8c;
              }
              ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,"tls_construct_cke_dhe");
              ossl_statem_fatal(param_1,0x50,0xc0103,0);
            }
LAB_0010532c:
            CRYPTO_free(local_70);
            EVP_PKEY_free(pkey);
            goto LAB_00104ed0;
          }
          ERR_new();
          uVar5 = 0xc70;
        }
        ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,"tls_construct_cke_dhe");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
      CRYPTO_free(local_70);
      EVP_PKEY_free((EVP_PKEY *)0x0);
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 8);
      local_78 = (uchar *)0x0;
      if ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x900) + 0x2c0) == 0)) {
        ERR_new();
        pcVar8 = "tls_construct_cke_rsa";
        uVar5 = 0xc18;
      }
      else {
        lVar6 = tls_get_peer_pkey(param_1);
        if (lVar6 == 0) {
          ERR_new();
          pcVar8 = "tls_construct_cke_rsa";
          uVar5 = 0xc1d;
        }
        else {
          iVar4 = EVP_PKEY_is_a(lVar6,&_LC4);
          if (iVar4 != 0) {
            in = (ushort *)CRYPTO_malloc(0x30,"ssl/statem/statem_clnt.c",0xc27);
            if (in == (ushort *)0x0) {
              ERR_new();
              pcVar8 = "tls_construct_cke_rsa";
              uVar5 = 0xc29;
LAB_001056e2:
              ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,pcVar8);
              ossl_statem_fatal(param_1,0x50,0x8000f,0);
              goto LAB_00104ed0;
            }
            *in = *(ushort *)(param_1 + 0x9d4) << 8 | *(ushort *)(param_1 + 0x9d4) >> 8;
            iVar4 = RAND_bytes_ex(*puVar2,in + 1,0x2e,0);
            if (iVar4 < 1) {
              ERR_new();
              ERR_set_debug("ssl/statem/statem_clnt.c",0xc30,"tls_construct_cke_rsa");
              ossl_statem_fatal(param_1,0x50,0x80024,0);
LAB_001055ef:
              pEVar7 = (EVP_PKEY_CTX *)0x0;
            }
            else {
              if ((0x300 < *(int *)(param_1 + 0x48)) &&
                 (iVar4 = WPACKET_start_sub_packet_len__(param_2,2), iVar4 == 0)) {
                ERR_new();
                uVar5 = 0xc36;
LAB_001055d1:
                ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,"tls_construct_cke_rsa");
                ossl_statem_fatal(param_1,0x50,0xc0103,0);
                goto LAB_001055ef;
              }
              pEVar7 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar2,lVar6,puVar2[0x8e]);
              if ((pEVar7 == (EVP_PKEY_CTX *)0x0) ||
                 (iVar4 = EVP_PKEY_encrypt_init(pEVar7), iVar4 < 1)) {
LAB_00105280:
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0xc3d,"tls_construct_cke_rsa");
                ossl_statem_fatal(param_1,0x50,0x80006,0);
              }
              else {
                iVar4 = EVP_PKEY_encrypt(pEVar7,(uchar *)0x0,(size_t *)&local_70,(uchar *)in,0x30);
                if (iVar4 < 1) goto LAB_00105280;
                iVar4 = WPACKET_allocate_bytes(param_2,local_70,&local_78);
                if ((iVar4 != 0) &&
                   (iVar4 = EVP_PKEY_encrypt(pEVar7,local_78,(size_t *)&local_70,(uchar *)in,0x30),
                   0 < iVar4)) {
                  EVP_PKEY_CTX_free(pEVar7);
                  if ((*(int *)(param_1 + 0x48) < 0x301) ||
                     (iVar4 = WPACKET_close(param_2), iVar4 != 0)) {
                    iVar4 = ssl_log_rsa_client_key_exchange(param_1,local_78,local_70,in,0x30);
                    if (iVar4 != 0) {
                      *(ushort **)(param_1 + 0x3b0) = in;
                      *(undefined8 *)(param_1 + 0x3b8) = 0x30;
                      goto LAB_00104eb1;
                    }
                    goto LAB_001055ef;
                  }
                  ERR_new();
                  uVar5 = 0xc4a;
                  goto LAB_001055d1;
                }
                ERR_new();
                ERR_set_debug("ssl/statem/statem_clnt.c",0xc42,"tls_construct_cke_rsa");
                ossl_statem_fatal(param_1,0x50,0x77,0);
              }
            }
            CRYPTO_clear_free(in,0x30,"ssl/statem/statem_clnt.c",0xc59);
            EVP_PKEY_CTX_free(pEVar7);
            goto LAB_00104ed0;
          }
          ERR_new();
          pcVar8 = "tls_construct_cke_rsa";
          uVar5 = 0xc22;
        }
      }
LAB_00105251:
      ERR_set_debug("ssl/statem/statem_clnt.c",uVar5,pcVar8);
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
  }
LAB_00104ed0:
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x3b0),*(undefined8 *)(param_1 + 0x3b8),
                    "ssl/statem/statem_clnt.c",0xe02);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  CRYPTO_clear_free(*(undefined8 *)(param_1 + 0x3c0),*(undefined8 *)(param_1 + 0x3c8),
                    "ssl/statem/statem_clnt.c",0xe06);
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
LAB_00104f34:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 tls_client_key_exchange_post_work(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + 0x3b0);
  uVar4 = *(undefined8 *)(param_1 + 0x3b8);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  if ((uVar1 & 0x20) == 0) {
    if ((lVar3 == 0) && ((uVar1 & 8) == 0)) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xe21,"tls_client_key_exchange_post_work");
      ossl_statem_fatal(param_1,0x50,0x80106,0);
    }
    else {
      iVar2 = ssl_generate_master_secret(param_1,lVar3,uVar4,1);
      if (iVar2 != 0) {
        return 1;
      }
      uVar4 = 0;
      lVar3 = 0;
    }
  }
  else {
    iVar2 = srp_generate_client_master_secret();
    if (iVar2 != 0) {
      return 1;
    }
  }
  CRYPTO_clear_free(lVar3,uVar4,"ssl/statem/statem_clnt.c",0xe4f);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  return 0;
}



char ossl_statem_client_post_work(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + 0x108) = 0;
  switch(*(undefined4 *)(param_1 + 0xac)) {
  case 0xd:
    if ((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x1540) != 0)) {
      if (((*(byte *)(param_1 + 0x9b2) & 0x10) == 0) &&
         (iVar3 = tls13_change_cipher_state(param_1,0x52), iVar3 == 0)) {
        return '\0';
      }
    }
    else {
      iVar3 = statem_flush(param_1);
      if (iVar3 == 0) {
        return '\x04';
      }
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x9d0) = 1;
    }
    break;
  case 0xe:
  case 0xf:
  case 0x11:
  case 0x13:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
    break;
  case 0x10:
    iVar3 = tls_client_key_exchange_post_work();
    return (iVar3 != 0) * '\x02';
  case 0x12:
    puVar1 = *(undefined8 **)(*(int **)(param_1 + 0x18) + 0x36);
    if (((((*(byte *)(puVar1 + 10) & 8) != 0) ||
         (iVar3 = **(int **)(param_1 + 0x18), iVar3 == 0x10000)) || (iVar3 < 0x304)) &&
       (*(int *)(param_1 + 0x8d0) != 1)) {
      if ((*(int *)(param_1 + 0xf0) == 2) && (*(int *)(param_1 + 0x1540) != 0)) {
        iVar3 = tls13_change_cipher_state(param_1,0x52);
        return (iVar3 != 0) * '\x02';
      }
      lVar4 = *(long *)(param_1 + 0x900);
      puVar2 = *(undefined4 **)(param_1 + 0x390);
      *(undefined8 *)(lVar4 + 0x2f8) = *(undefined8 *)(param_1 + 0x300);
      uVar5 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        uVar5 = *puVar2;
      }
      *(undefined4 *)(lVar4 + 0x2f0) = uVar5;
      iVar3 = (*(code *)*puVar1)(param_1);
      if (iVar3 == 0) {
        return '\0';
      }
      uVar6 = 0x12;
      lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
LAB_00105d81:
      iVar3 = (**(code **)(lVar4 + 0x10))(param_1,uVar6);
      return (iVar3 != 0) * '\x02';
    }
    break;
  case 0x14:
    iVar3 = statem_flush();
    if (iVar3 != 1) {
      return '\x05';
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar3 = **(int **)(param_1 + 0x18), iVar3 != 0x10000)) && (0x303 < iVar3)) {
      iVar3 = tls13_save_handshake_digest_for_pha(param_1);
      if (iVar3 == 0) {
        return '\0';
      }
      if (*(int *)(param_1 + 0xba8) != 4) {
        uVar6 = 0x112;
        lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
        goto LAB_00105d81;
      }
    }
    break;
  case 0x2f:
    iVar3 = statem_flush();
    if (iVar3 != 1) {
      return '\x04';
    }
    iVar3 = tls13_update_key(param_1,1);
    return (iVar3 != 0) * '\x02';
  default:
    return '\x02';
  }
  return '\x02';
}



undefined8 ssl3_check_cert_and_algorithm(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
  uVar2 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  if ((uVar1 & 0xab) != 0) {
    uVar4 = tls_get_peer_pkey();
    lVar5 = ssl_cert_lookup_by_pkey(uVar4,&local_28,*(undefined8 *)(param_1 + 8));
    if ((lVar5 == 0) || ((uVar1 & *(uint *)(lVar5 + 4)) == 0)) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xf74,"ssl3_check_cert_and_algorithm");
      ossl_statem_fatal(param_1,0x28,0xdd,0);
      uVar4 = 0;
      goto LAB_00105eb3;
    }
    if (((uVar2 & 0x41) != 0) && (local_28 != 0)) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xf79,"ssl3_check_cert_and_algorithm");
      ossl_statem_fatal(param_1,0x28,0xa9,0);
      uVar4 = 0;
      goto LAB_00105eb3;
    }
    if (((uVar2 & 2) != 0) && (*(long *)(param_1 + 0x4e0) == 0)) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xf7f,"ssl3_check_cert_and_algorithm");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      uVar4 = 0;
      goto LAB_00105eb3;
    }
    if ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) && ((*(uint *)(lVar5 + 4) & 8) != 0)) {
      iVar3 = ssl_check_srvr_ecc_cert_and_alg
                        (*(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2c0),param_1);
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xf8a,"ssl3_check_cert_and_algorithm");
        ossl_statem_fatal(param_1,0x28,0x130,0);
        uVar4 = 0;
        goto LAB_00105eb3;
      }
    }
  }
  uVar4 = 1;
LAB_00105eb3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tls_process_key_exchange(long param_1,long *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  ushort *puVar3;
  byte bVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  EVP_PKEY *pEVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  BIGNUM *pBVar15;
  BIGNUM *a;
  BIGNUM *a_00;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  char *pcVar22;
  long lVar23;
  undefined8 uVar24;
  ushort *puVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  long in_FS_OFFSET;
  uint local_90;
  long local_88;
  EVP_PKEY_CTX *local_78;
  long local_68;
  undefined8 local_58;
  long local_50;
  EVP_PKEY *local_48;
  long local_40;
  
  puVar6 = *(undefined8 **)(param_1 + 8);
  uVar16 = param_2[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  uVar10 = *(uint *)(*(long *)(param_1 + 0x300) + 0x1c);
  lVar19 = *param_2;
  EVP_PKEY_free(*(EVP_PKEY **)(param_1 + 0x4e0));
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  local_90 = uVar10 & 0x1c8;
  if ((uVar10 & 0x1c8) == 0) {
joined_r0x001061ce:
    if ((uVar10 & 0x20) != 0) {
      if (1 < (ulong)param_2[1]) {
        uVar28 = *(ushort *)*param_2;
        uVar21 = param_2[1] - 2;
        puVar25 = (ushort *)*param_2 + 1;
        uVar28 = uVar28 << 8 | uVar28 >> 8;
        uVar14 = (ulong)uVar28;
        if (uVar14 <= uVar21) {
          puVar2 = (ushort *)((long)puVar25 + uVar14);
          uVar21 = uVar21 - uVar14;
          *param_2 = (long)puVar2;
          param_2[1] = uVar21;
          if (1 < uVar21) {
            uVar27 = *puVar2 << 8 | *puVar2 >> 8;
            uVar14 = (ulong)uVar27;
            if (uVar14 <= uVar21 - 2) {
              lVar20 = (uVar21 - 2) - uVar14;
              pbVar1 = (byte *)((long)(puVar2 + 1) + uVar14);
              param_2[1] = lVar20;
              *param_2 = (long)pbVar1;
              if (lVar20 != 0) {
                bVar4 = *pbVar1;
                uVar21 = (ulong)bVar4;
                if (uVar21 <= lVar20 - 1U) {
                  uVar14 = (lVar20 - 1U) - uVar21;
                  puVar3 = (ushort *)(pbVar1 + 1 + uVar21);
                  param_2[1] = uVar14;
                  *param_2 = (long)puVar3;
                  if (1 < uVar14) {
                    uVar26 = *puVar3 << 8 | *puVar3 >> 8;
                    uVar21 = (ulong)uVar26;
                    if (uVar21 <= uVar14 - 2) {
                      param_2[1] = (uVar14 - 2) - uVar21;
                      *param_2 = (long)((long)(puVar3 + 1) + uVar21);
                      pBVar15 = BN_bin2bn((uchar *)puVar25,(uint)uVar28,(BIGNUM *)0x0);
                      *(BIGNUM **)(param_1 + 0xbf8) = pBVar15;
                      if (pBVar15 != (BIGNUM *)0x0) {
                        pBVar15 = BN_bin2bn((uchar *)(puVar2 + 1),(uint)uVar27,(BIGNUM *)0x0);
                        *(BIGNUM **)(param_1 + 0xc00) = pBVar15;
                        if (pBVar15 != (BIGNUM *)0x0) {
                          pBVar15 = BN_bin2bn(pbVar1 + 1,(uint)bVar4,(BIGNUM *)0x0);
                          *(BIGNUM **)(param_1 + 0xc08) = pBVar15;
                          if (pBVar15 != (BIGNUM *)0x0) {
                            pBVar15 = BN_bin2bn((uchar *)(puVar3 + 1),(uint)uVar26,(BIGNUM *)0x0);
                            *(BIGNUM **)(param_1 + 0xc10) = pBVar15;
                            if (pBVar15 != (BIGNUM *)0x0) {
                              iVar11 = srp_verify_server_param(param_1);
                              if (iVar11 != 0) {
                                uVar10 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
                                if ((uVar10 & 3) != 0) {
                                  lVar20 = tls_get_peer_pkey(param_1);
                                  goto LAB_00106717;
                                }
                                goto LAB_00106359;
                              }
                              goto LAB_001063b0;
                            }
                          }
                        }
                      }
                      ERR_new();
                      ERR_set_debug("ssl/statem/statem_clnt.c",0x8c7,"tls_process_ske_srp");
                      ossl_statem_fatal(param_1,0x50,0x80003,0);
                      goto LAB_001063b0;
                    }
                  }
                }
              }
            }
          }
        }
      }
      ERR_new();
      pcVar22 = "tls_process_ske_srp";
      uVar13 = 0x8b7;
      goto LAB_001063f1;
    }
    if ((uVar10 & 0x102) == 0) {
      if ((uVar10 & 0x84) == 0) {
        if (uVar10 != 0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0x99f,"tls_process_key_exchange");
          ossl_statem_fatal(param_1,10,0xf4,0);
          goto LAB_001063b0;
        }
        if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 0x44) != 0) goto LAB_001060fb;
LAB_00106370:
        iVar11 = ssl3_check_cert_and_algorithm(param_1);
        if (iVar11 != 0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0xa01,"tls_process_key_exchange");
          ossl_statem_fatal(param_1,0x32,0x186,0);
        }
        goto LAB_001063b0;
      }
      lVar20 = param_2[1];
      if (lVar20 != 0) {
        pcVar22 = (char *)*param_2;
        cVar5 = *pcVar22;
        *param_2 = (long)(pcVar22 + 1);
        param_2[1] = lVar20 - 1U;
        if (1 < lVar20 - 1U) {
          uVar28 = *(ushort *)(pcVar22 + 1);
          *param_2 = (long)(pcVar22 + 3);
          param_2[1] = lVar20 + -3;
          if (cVar5 == '\x03') {
            uVar28 = uVar28 << 8 | uVar28 >> 8;
            iVar11 = tls1_check_group_id(param_1,uVar28,1);
            if (iVar11 != 0) {
              lVar20 = ssl_generate_param_group(param_1,uVar28);
              *(long *)(param_1 + 0x4e0) = lVar20;
              if (lVar20 == 0) {
                ERR_new(0);
                ERR_set_debug("ssl/statem/statem_clnt.c",0x955,"tls_process_ske_ecdhe");
                ossl_statem_fatal(param_1,0x50,0x13a,0);
                goto LAB_001063b0;
              }
              if (param_2[1] != 0) {
                uVar14 = (ulong)*(byte *)*param_2;
                uVar21 = param_2[1] - 1;
                if (uVar14 <= uVar21) {
                  *param_2 = (long)((byte *)*param_2 + uVar14 + 1);
                  param_2[1] = uVar21 - uVar14;
                  iVar11 = EVP_PKEY_set1_encoded_public_key();
                  if (0 < iVar11) {
                    uVar10 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
                    if ((uVar10 & 9) != 0) {
                      lVar20 = tls_get_peer_pkey(param_1);
                      *(uint *)(*(long *)(param_1 + 0x900) + 0x308) = (uint)uVar28;
                      goto LAB_00106717;
                    }
                    *(uint *)(*(long *)(param_1 + 0x900) + 0x308) = (uint)uVar28;
                    goto LAB_00106359;
                  }
                  ERR_new();
                  ERR_set_debug("ssl/statem/statem_clnt.c",0x962,"tls_process_ske_ecdhe");
                  ossl_statem_fatal(param_1,0x2f,0x132,0);
                  goto LAB_001063b0;
                }
              }
              ERR_new(lVar20);
              pcVar22 = "tls_process_ske_ecdhe";
              uVar13 = 0x95b;
              goto LAB_001063f1;
            }
          }
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0x950,"tls_process_ske_ecdhe");
          ossl_statem_fatal(param_1,0x2f,0x17a,0);
          goto LAB_001063b0;
        }
      }
      ERR_new();
      pcVar22 = "tls_process_ske_ecdhe";
      uVar13 = 0x947;
LAB_00106a41:
      ERR_set_debug("ssl/statem/statem_clnt.c",uVar13,pcVar22);
      ossl_statem_fatal(param_1,0x32,0xa0,0);
      goto LAB_001063b0;
    }
    puVar7 = *(undefined8 **)(param_1 + 8);
    local_48 = (EVP_PKEY *)0x0;
    if ((ulong)param_2[1] < 2) {
LAB_00106920:
      ERR_new();
      pcVar22 = "tls_process_ske_dhe";
      uVar13 = 0x8e9;
      goto LAB_001063f1;
    }
    uVar28 = *(ushort *)*param_2;
    uVar21 = param_2[1] - 2;
    puVar25 = (ushort *)*param_2 + 1;
    uVar28 = uVar28 << 8 | uVar28 >> 8;
    uVar14 = (ulong)uVar28;
    if (uVar21 < uVar14) goto LAB_00106920;
    puVar2 = (ushort *)((long)puVar25 + uVar14);
    uVar21 = uVar21 - uVar14;
    *param_2 = (long)puVar2;
    param_2[1] = uVar21;
    if (uVar21 < 2) goto LAB_00106920;
    uVar27 = *puVar2 << 8 | *puVar2 >> 8;
    uVar14 = (ulong)uVar27;
    if (uVar21 - 2 < uVar14) goto LAB_00106920;
    uVar21 = (uVar21 - 2) - uVar14;
    puVar3 = (ushort *)((long)(puVar2 + 1) + uVar14);
    param_2[1] = uVar21;
    *param_2 = (long)puVar3;
    if (uVar21 < 2) goto LAB_00106920;
    uVar26 = *puVar3 << 8 | *puVar3 >> 8;
    uVar14 = (ulong)uVar26;
    if (uVar21 - 2 < uVar14) goto LAB_00106920;
    param_2[1] = (uVar21 - 2) - uVar14;
    *param_2 = (long)(puVar3 + 1) + uVar14;
    pBVar15 = BN_bin2bn((uchar *)puVar25,(uint)uVar28,(BIGNUM *)0x0);
    a = BN_bin2bn((uchar *)(puVar2 + 1),(uint)uVar27,(BIGNUM *)0x0);
    a_00 = BN_bin2bn((uchar *)(puVar3 + 1),(uint)uVar26,(BIGNUM *)0x0);
    if ((pBVar15 == (BIGNUM *)0x0 || a == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) {
      ERR_new();
      lVar20 = 0;
      ERR_set_debug("ssl/statem/statem_clnt.c",0x8f3,"tls_process_ske_dhe");
      ossl_statem_fatal(param_1,0x50,0x80003,0);
      bVar8 = false;
      local_88 = 0;
      local_68 = 0;
      local_78 = (EVP_PKEY_CTX *)0x0;
    }
    else {
      local_88 = OSSL_PARAM_BLD_new();
      if ((((local_88 == 0) ||
           (iVar11 = OSSL_PARAM_BLD_push_BN(local_88,&_LC5,pBVar15), iVar11 == 0)) ||
          (iVar11 = OSSL_PARAM_BLD_push_BN(local_88,&_LC6,a), iVar11 == 0)) ||
         ((iVar11 = OSSL_PARAM_BLD_push_BN(local_88,&_LC7,a_00), iVar11 == 0 ||
          (local_68 = OSSL_PARAM_BLD_to_param(local_88), local_68 == 0)))) {
        ERR_new();
        lVar20 = 0;
        ERR_set_debug("ssl/statem/statem_clnt.c",0x8fe,"tls_process_ske_dhe");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
        bVar8 = false;
        local_68 = 0;
        local_78 = (EVP_PKEY_CTX *)0x0;
      }
      else {
        local_78 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_name(*puVar7,&_LC8,puVar7[0x8e]);
        if (local_78 == (EVP_PKEY_CTX *)0x0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0x904,"tls_process_ske_dhe");
          uVar13 = 0xc0103;
          uVar24 = 0x50;
        }
        else {
          iVar11 = EVP_PKEY_fromdata_init(local_78);
          if ((iVar11 < 1) ||
             (iVar11 = EVP_PKEY_fromdata(local_78,&local_48,0x87,local_68), iVar11 < 1)) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0x909,"tls_process_ske_dhe");
            uVar13 = 0x66;
            uVar24 = 0x50;
          }
          else {
            EVP_PKEY_CTX_free(local_78);
            local_78 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(*puVar7,local_48,puVar7[0x8e]);
            if (((local_78 != (EVP_PKEY_CTX *)0x0) &&
                (iVar11 = EVP_PKEY_param_check_quick(local_78), iVar11 == 1)) &&
               (iVar11 = EVP_PKEY_public_check(local_78), pEVar9 = local_48, iVar11 == 1)) {
              uVar12 = EVP_PKEY_get_security_bits(local_48);
              iVar11 = ssl_security(param_1,0x40007,uVar12,0,pEVar9);
              pEVar9 = local_48;
              if (iVar11 == 0) {
                ERR_new();
                lVar20 = 0;
                ERR_set_debug("ssl/statem/statem_clnt.c",0x91f,"tls_process_ske_dhe");
                ossl_statem_fatal(param_1,0x28,0x18a,0);
                bVar8 = false;
              }
              else {
                lVar20 = 0;
                local_48 = (EVP_PKEY *)0x0;
                *(EVP_PKEY **)(param_1 + 0x4e0) = pEVar9;
                bVar8 = true;
                if ((*(byte *)(*(long *)(param_1 + 0x300) + 0x20) & 3) != 0) {
                  lVar20 = tls_get_peer_pkey(param_1);
                }
              }
              goto LAB_001066c0;
            }
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0x918,"tls_process_ske_dhe");
            uVar13 = 0x66;
            uVar24 = 0x2f;
          }
        }
        lVar20 = 0;
        ossl_statem_fatal(param_1,uVar24,uVar13,0);
        bVar8 = false;
      }
    }
LAB_001066c0:
    OSSL_PARAM_BLD_free(local_88);
    OSSL_PARAM_free(local_68);
    EVP_PKEY_free(local_48);
    EVP_PKEY_CTX_free(local_78);
    BN_free(pBVar15);
    BN_free(a);
    BN_free(a_00);
    if (!bVar8) goto LAB_001063b0;
LAB_00106717:
    if (lVar20 == 0) {
      uVar10 = *(uint *)(*(long *)(param_1 + 0x300) + 0x20);
LAB_00106359:
      if ((uVar10 & 0x44) != 0 || local_90 != 0) goto LAB_001060fb;
      goto LAB_00106370;
    }
    local_50 = 0;
    uVar21 = param_2[1];
    lVar23 = uVar16 - uVar21;
    if ((uVar16 < uVar21) || (lVar23 < 0)) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x9b2,"tls_process_key_exchange");
      ossl_statem_fatal(param_1,0x32,0xc0103,0);
      goto LAB_001063b0;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) != 0) {
      if (1 < uVar21) {
        uVar28 = *(ushort *)*param_2;
        param_2[1] = uVar21 - 2;
        *param_2 = (long)((ushort *)*param_2 + 1);
        iVar11 = tls12_check_peer_sigalg(param_1,uVar28 << 8 | uVar28 >> 8,lVar20);
        if (0 < iVar11) goto LAB_0010678d;
        goto LAB_001063b0;
      }
      ERR_new();
      pcVar22 = "tls_process_key_exchange";
      uVar13 = 0x9ba;
      goto LAB_00106a41;
    }
    iVar11 = tls1_set_peer_legacy_sigalg(param_1,lVar20);
    if (iVar11 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x9c2,"tls_process_key_exchange");
      ossl_statem_fatal(param_1,0x50,0x14d,0);
      goto LAB_001063b0;
    }
LAB_0010678d:
    iVar11 = tls1_lookup_md(puVar6,*(undefined8 *)(param_1 + 0x400),&local_50);
    if (iVar11 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x9c8,"tls_process_key_exchange");
      ossl_statem_fatal(param_1,0x50,0x129,0);
      goto LAB_001063b0;
    }
    if ((ulong)param_2[1] < 2) {
LAB_00106c00:
      ERR_new();
      pcVar22 = "tls_process_key_exchange";
      uVar13 = 0x9d2;
      goto LAB_001063f1;
    }
    uVar28 = *(ushort *)*param_2;
    puVar25 = (ushort *)*param_2 + 1;
    uVar16 = param_2[1] - 2;
    uVar21 = (ulong)(ushort)(uVar28 << 8 | uVar28 >> 8);
    if (uVar16 < uVar21) goto LAB_00106c00;
    lVar17 = uVar16 - uVar21;
    *param_2 = (long)puVar25 + uVar21;
    param_2[1] = lVar17;
    if (lVar17 != 0) goto LAB_00106c00;
    lVar17 = EVP_MD_CTX_new();
    if (lVar17 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0x9d8,"tls_process_key_exchange");
      ossl_statem_fatal(param_1,0x50,0x80006,0);
      goto LAB_001063b0;
    }
    uVar13 = puVar6[0x8e];
    uVar24 = *puVar6;
    lVar18 = local_50;
    if (local_50 != 0) {
      lVar18 = EVP_MD_get0_name(local_50);
    }
    iVar11 = EVP_DigestVerifyInit_ex(lVar17,&local_58,lVar18,uVar24,uVar13,lVar20);
    if (iVar11 < 1) {
      ERR_new();
      uVar13 = 0x9e0;
LAB_00106dee:
      ERR_set_debug("ssl/statem/statem_clnt.c",uVar13,"tls_process_key_exchange");
      ossl_statem_fatal(param_1,0x50,0x80006,0);
    }
    else {
      if (((*(long *)(param_1 + 0x400) != 0) &&
          (*(int *)(*(long *)(param_1 + 0x400) + 0x1c) == 0x390)) &&
         ((iVar11 = EVP_PKEY_CTX_set_rsa_padding(local_58,6), iVar11 < 1 ||
          (iVar11 = EVP_PKEY_CTX_set_rsa_pss_saltlen(local_58,0xffffffff), iVar11 < 1)))) {
        ERR_new();
        uVar13 = 0x9e7;
        goto LAB_00106dee;
      }
      lVar19 = construct_key_exchange_tbs(param_1,&local_48,lVar19,lVar23);
      if (lVar19 != 0) {
        iVar11 = EVP_DigestVerify(lVar17,puVar25,uVar21,local_48,lVar19);
        CRYPTO_free(local_48);
        if (0 < iVar11) {
          EVP_MD_CTX_free(lVar17);
          goto LAB_00106106;
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0x9f6,"tls_process_key_exchange");
        ossl_statem_fatal(param_1,0x33,0x7b,0);
      }
    }
  }
  else {
    if (1 < (ulong)param_2[1]) {
      uVar28 = *(ushort *)*param_2;
      uVar21 = param_2[1] - 2;
      puVar25 = (ushort *)*param_2 + 1;
      uVar14 = (ulong)(ushort)(uVar28 << 8 | uVar28 >> 8);
      if (uVar14 <= uVar21) {
        *param_2 = (long)puVar25 + uVar14;
        param_2[1] = uVar21 - uVar14;
        if (0x100 < uVar14) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0x89a,"tls_process_ske_psk_preamble");
          ossl_statem_fatal(param_1,0x28,0x92,0);
          goto LAB_001063b0;
        }
        lVar20 = *(long *)(param_1 + 0x900);
        if (uVar14 == 0) {
          CRYPTO_free(*(void **)(lVar20 + 0x2a0));
          *(undefined8 *)(*(long *)(param_1 + 0x900) + 0x2a0) = 0;
        }
        else {
          CRYPTO_free(*(void **)(lVar20 + 0x2a0));
          lVar23 = CRYPTO_strndup(puVar25,uVar14,"include/internal/packet.h",0x1e6);
          *(long *)(lVar20 + 0x2a0) = lVar23;
          if (lVar23 == 0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_clnt.c",0x8a3,"tls_process_ske_psk_preamble");
            ossl_statem_fatal(param_1,0x50,0xc0103,0);
            goto LAB_001063b0;
          }
        }
        if ((uVar10 & 0x48) == 0) goto joined_r0x001061ce;
LAB_001060fb:
        if (param_2[1] != 0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_clnt.c",0xa08,"tls_process_key_exchange");
          ossl_statem_fatal(param_1,0x32,0x99,0);
          goto LAB_001063b0;
        }
LAB_00106106:
        uVar13 = 3;
        goto LAB_001063bc;
      }
    }
    ERR_new();
    pcVar22 = "tls_process_ske_psk_preamble";
    uVar13 = 0x88f;
LAB_001063f1:
    ERR_set_debug("ssl/statem/statem_clnt.c",uVar13,pcVar22);
    ossl_statem_fatal(param_1,0x32,0x9f,0);
LAB_001063b0:
    lVar17 = 0;
  }
  EVP_MD_CTX_free(lVar17);
  uVar13 = 0;
LAB_001063bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



uint tls_process_initial_server_flight(long param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  lVar1 = *(long *)(param_1 + 8);
  iVar3 = ssl3_check_cert_and_algorithm();
  if (iVar3 == 0) {
LAB_00107130:
    uVar4 = 0;
  }
  else {
    if ((*(int *)(param_1 + 0xa28) != -1) &&
       (pcVar2 = *(code **)(lVar1 + 0x268), pcVar2 != (code *)0x0)) {
      iVar3 = (*pcVar2)(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(lVar1 + 0x270));
      if (iVar3 == 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xb8d,"tls_process_initial_server_flight");
        ossl_statem_fatal(param_1,0x71,0x148,0);
        goto LAB_00107130;
      }
      if (iVar3 < 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xb92,"tls_process_initial_server_flight");
        ossl_statem_fatal(param_1,0x50,0x131,0);
        return 0;
      }
    }
    if ((*(long *)(param_1 + 0xb68) != 0) && (iVar3 = ssl_validate_ct(param_1), iVar3 == 0)) {
      return ~*(uint *)(param_1 + 0x950) & 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}



bool tls_process_server_done(long param_1,long param_2)

{
  int iVar1;
  
  if (*(long *)(param_2 + 8) != 0) {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xba8,"tls_process_server_done");
    ossl_statem_fatal(param_1,0x32,0x9f,0);
    return false;
  }
  if (((*(byte *)(*(long *)(param_1 + 0x300) + 0x1c) & 0x20) != 0) &&
     (iVar1 = ssl_srp_calc_a_param_intern(), iVar1 < 1)) {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0xbae,"tls_process_server_done");
    ossl_statem_fatal(param_1,0x50,0x169,0);
    return false;
  }
  iVar1 = tls_process_initial_server_flight(param_1);
  return iVar1 != 0;
}



undefined8 tls_process_hello_req(SSL *param_1,long param_2)

{
  if (*(long *)(param_2 + 8) == 0) {
    if (((ulong)param_1[3].client_CA & 0x40000000) == 0) {
      if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) {
        SSL_renegotiate_abbreviated(param_1);
      }
      else {
        SSL_renegotiate(param_1);
      }
    }
    else {
      ssl3_send_alert(param_1,1,100);
    }
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/statem/statem_clnt.c",0xfac,"tls_process_hello_req");
  ossl_statem_fatal(param_1,0x32,0x9f,0);
  return 0;
}



undefined8 ossl_statem_client_process_message(long param_1,long *param_2)

{
  ulong uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  long in_FS_OFFSET;
  void *local_40;
  ushort *local_38;
  ulong local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  switch(*(undefined4 *)(param_1 + 0xac)) {
  default:
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x441,"ossl_statem_client_process_message");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    uVar5 = 0;
    goto LAB_00107355;
  case 2:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = dtls_process_hello_verify();
      return uVar5;
    }
    break;
  case 3:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_server_hello();
      return uVar5;
    }
    break;
  case 4:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_server_certificate();
      return uVar5;
    }
    break;
  case 6:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_cert_status();
      return uVar5;
    }
    break;
  case 7:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_key_exchange();
      return uVar5;
    }
    break;
  case 8:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_certificate_request();
      return uVar5;
    }
    break;
  case 9:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_server_done();
      return uVar5;
    }
    break;
  case 10:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_new_session_ticket();
      return uVar5;
    }
    break;
  case 0xb:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_change_cipher_spec();
      return uVar5;
    }
    break;
  case 0xc:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_finished();
      return uVar5;
    }
    break;
  case 0x2a:
    local_40 = (void *)0x0;
    if ((ulong)param_2[1] < 2) {
LAB_001075e0:
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xfcc,"tls_process_encrypted_extensions");
      ossl_statem_fatal(param_1,0x32,0x9f,0);
    }
    else {
      uVar1 = param_2[1] - 2;
      uVar2 = *(ushort *)*param_2;
      uVar4 = (ulong)(ushort)(uVar2 << 8 | uVar2 >> 8);
      if (uVar1 < uVar4) goto LAB_001075e0;
      puVar6 = (ushort *)*param_2 + 1;
      if (uVar4 != uVar1) goto LAB_001075e0;
      *param_2 = (long)puVar6 + uVar4;
      param_2[1] = 0;
      local_38 = puVar6;
      local_30 = uVar4;
      iVar3 = tls_collect_extensions(param_1,&local_38,0x400,&local_40,0,1);
      if ((iVar3 != 0) &&
         (iVar3 = tls_parse_all_extensions(param_1,0x400,local_40,0,0,1), iVar3 != 0)) {
        CRYPTO_free(local_40);
        uVar5 = 3;
        goto LAB_00107355;
      }
    }
    CRYPTO_free(local_40);
    uVar5 = 0;
LAB_00107355:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar5;
    }
    break;
  case 0x2b:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_cert_verify();
      return uVar5;
    }
    break;
  case 0x2d:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_hello_req();
      return uVar5;
    }
    break;
  case 0x31:
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = tls_process_key_update();
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ssl_do_client_cert_cb(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(long *)(lVar1 + 0x208) != 0) && (iVar2 = tls_engine_load_ssl_client_cert(), iVar2 != 0)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 200);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0010768e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  return;
}



undefined8 tls_prepare_client_certificate(SSL *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  X509 *local_30;
  EVP_PKEY *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = (X509 *)0x0;
  local_28 = (EVP_PKEY *)0x0;
  if (param_2 == 4) {
    pcVar1 = *(code **)(*(long *)&param_1[3].packet_length + 0x60);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(long *)&param_1[3].packet_length + 0x68));
      if (iVar2 < 0) {
        *(undefined4 *)&param_1->packet = 4;
        uVar3 = 4;
        goto LAB_001077a0;
      }
      if (iVar2 == 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_clnt.c",0xe79,"tls_prepare_client_certificate");
        ossl_statem_fatal(param_1,0x50,0xea,0);
        uVar3 = 0;
        goto LAB_001077a0;
      }
      *(undefined4 *)&param_1->packet = 1;
    }
    iVar2 = ssl3_check_client_certificate(param_1);
    if (iVar2 == 0) goto LAB_001076e1;
LAB_00107783:
    uVar3 = 1;
    if (*(int *)&param_1[4].enc_write_ctx == 4) goto LAB_001077a0;
  }
  else {
    if (param_2 != 5) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xebb,"tls_prepare_client_certificate");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_001077f3:
      uVar3 = 0;
      goto LAB_001077a0;
    }
LAB_001076e1:
    iVar2 = ssl_do_client_cert_cb(param_1,&local_30,&local_28);
    if (iVar2 < 0) {
      *(undefined4 *)&param_1->packet = 4;
      uVar3 = 5;
      goto LAB_001077a0;
    }
    *(undefined4 *)&param_1->packet = 1;
    if (iVar2 != 1) {
      X509_free(local_30);
      EVP_PKEY_free(local_28);
      if (iVar2 == 0) goto LAB_00107731;
LAB_00107725:
      iVar2 = ssl3_check_client_certificate(param_1);
      if (iVar2 == 0) goto LAB_00107731;
LAB_00107764:
      if (((((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) != 0) ||
           (iVar2 = *(int *)&param_1->wbio->method, iVar2 == 0x10000)) || (iVar2 < 0x304)) ||
         (((ulong)param_1[3].client_CA & 0x100000000) != 0)) {
        *(undefined4 *)((long)&param_1[4].s2 + 4) = 0;
      }
      goto LAB_00107783;
    }
    if ((local_28 == (EVP_PKEY *)0x0) || (local_30 == (X509 *)0x0)) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_clnt.c",0xe9b,"tls_prepare_client_certificate");
      ERR_set_error(0x14,0x6a,0);
      X509_free(local_30);
      EVP_PKEY_free(local_28);
    }
    else {
      iVar2 = SSL_use_certificate(param_1,local_30);
      if ((iVar2 != 0) && (iVar2 = SSL_use_PrivateKey(param_1,local_28), iVar2 != 0)) {
        X509_free(local_30);
        EVP_PKEY_free(local_28);
        goto LAB_00107725;
      }
      X509_free(local_30);
      EVP_PKEY_free(local_28);
    }
LAB_00107731:
    if (param_1->state != 0x300) {
      param_1[1].read_ahead = 2;
      *(undefined4 *)((long)&param_1[4].s2 + 4) = 0;
      iVar2 = ssl3_digest_cached_records(param_1,0);
      if (iVar2 == 0) goto LAB_001077f3;
      goto LAB_00107764;
    }
    param_1[1].read_ahead = 0;
    ssl3_send_alert(param_1,1,0x29);
  }
  uVar3 = 2;
LAB_001077a0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 ossl_statem_client_post_process_message(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  if (uVar1 != 8) {
    if (uVar1 < 9) {
      if (uVar1 - 4 < 2) {
        uVar2 = tls_post_process_server_certificate();
        return uVar2;
      }
    }
    else if (uVar1 == 0x2b) goto LAB_00107a38;
    ERR_new();
    ERR_set_debug("ssl/statem/statem_clnt.c",0x481,"ossl_statem_client_post_process_message");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
    return 0;
  }
LAB_00107a38:
  uVar2 = tls_prepare_client_certificate(param_1);
  return uVar2;
}


