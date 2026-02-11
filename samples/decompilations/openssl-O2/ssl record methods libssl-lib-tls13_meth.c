
char tls13_get_record_type(long param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = '\x17';
  if (*(int *)(param_1 + 0x10d0) != 0) {
    cVar1 = (*param_2 != '\x15') * '\x02' + '\x15';
  }
  return cVar1;
}



undefined8 tls13_validate_record_header(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (iVar1 == 0x17) {
LAB_00100044:
    if (*param_2 == 0x303) {
      if (*(ulong *)(param_2 + 2) < 0x4101) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls13_meth.c",0x10c,"tls13_validate_record_header");
      ossl_rlayer_fatal(param_1,0x16,0x96,0);
    }
    else {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls13_meth.c",0x107,"tls13_validate_record_header");
      ossl_rlayer_fatal(param_1,0x32,0x10b,0);
    }
  }
  else {
    if (iVar1 == 0x14) {
      iVar1 = *(int *)(param_1 + 0x1048);
joined_r0x001000a8:
      if (iVar1 != 0) goto LAB_00100044;
    }
    else if (iVar1 == 0x15) {
      iVar1 = *(int *)(param_1 + 0x10d0);
      goto joined_r0x001000a8;
    }
    ERR_new();
    ERR_set_debug("ssl/record/methods/tls13_meth.c",0x102,"tls13_validate_record_header");
    ossl_rlayer_fatal(param_1,10,0x1bb,0);
  }
  return 0;
}



undefined8 tls13_add_record_padding(long param_1,char *param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  if ((*(int *)(param_1 + 0x10d0) == 0) || (*param_2 == '\x15')) {
    iVar3 = WPACKET_put_bytes__(param_3,*param_2,1);
    if (iVar3 == 0) {
      ERR_new();
      uVar6 = 0x14f;
LAB_00100261:
      ERR_set_debug("ssl/record/methods/tls13_meth.c",uVar6,"tls13_add_record_padding");
      ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x104c);
    uVar7 = *(long *)(param_4 + 8) + 1;
    *(ulong *)(param_4 + 8) = uVar7;
    if (uVar7 < uVar2) {
      if (*(code **)(param_1 + 0x1138) == (code *)0x0) {
        uVar4 = *(ulong *)(param_1 + 0x1060);
        if (uVar4 == 0) {
          uVar4 = *(ulong *)(param_1 + 0x1068);
          if (uVar4 == 0) {
            return 1;
          }
          if (1 < (byte)(*param_2 - 0x15U)) {
            return 1;
          }
        }
        else {
          cVar1 = *param_2;
          if ((cVar1 == '\x16') || (cVar1 == '\x15')) {
            uVar4 = *(ulong *)(param_1 + 0x1068);
            if (uVar4 == 0) {
              return 1;
            }
          }
          else if (cVar1 != '\x17') {
            return 1;
          }
        }
        if ((uVar4 & uVar4 - 1) == 0) {
          uVar5 = uVar4 - 1 & uVar7;
        }
        else {
          uVar5 = uVar7 % uVar4;
        }
        if (uVar5 == 0) {
          return 1;
        }
        uVar4 = uVar4 - uVar5;
      }
      else {
        uVar4 = (**(code **)(param_1 + 0x1138))(*(undefined8 *)(param_1 + 0x1118),*param_2,uVar7);
      }
      if (uVar4 != 0) {
        uVar7 = uVar2 - uVar7;
        if (uVar4 < uVar7) {
          uVar7 = uVar4;
        }
        iVar3 = WPACKET_memset(param_3,0,uVar7);
        if (iVar3 == 0) {
          ERR_new();
          uVar6 = 0x18d;
          goto LAB_00100261;
        }
        *(long *)(param_4 + 8) = *(long *)(param_4 + 8) + uVar7;
      }
    }
  }
  return 1;
}



bool tls13_post_process_record(undefined8 param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (*(int *)(param_2 + 4) != 0x15) {
    if ((*(int *)(param_2 + 4) != 0x17) || (uVar2 == 0)) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls13_meth.c",0x11b,"tls13_post_process_record");
      ossl_rlayer_fatal(param_1,10,0x1bb,0);
      return false;
    }
    pbVar3 = *(byte **)(param_2 + 0x20);
    uVar2 = uVar2 - 1;
    if (uVar2 == 0) {
      *(undefined8 *)(param_2 + 8) = 0;
      *(uint *)(param_2 + 4) = (uint)*pbVar3;
      goto LAB_0010034f;
    }
    do {
      if (pbVar3[uVar2] != 0) {
        pbVar3 = pbVar3 + uVar2;
        break;
      }
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    *(ulong *)(param_2 + 8) = uVar2;
    *(uint *)(param_2 + 4) = (uint)*pbVar3;
  }
  if (0x4000 < uVar2) {
    ERR_new();
    ERR_set_debug("ssl/record/methods/tls13_meth.c",0x129,"tls13_post_process_record");
    ossl_rlayer_fatal(param_1,0x16,0x92,0);
    return false;
  }
LAB_0010034f:
  iVar1 = tls13_common_post_process_record(param_1);
  return iVar1 != 0;
}



bool tls13_cipher(long param_1,int *param_2,long param_3,int param_4)

{
  uchar *iv;
  EVP_CIPHER_CTX *ctx;
  void *__src;
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  int local_dc;
  long local_d8;
  int local_d0 [2];
  undefined1 local_c8 [59];
  uchar local_8d [5];
  undefined1 local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    iv = *(uchar **)(param_1 + 0x10c8);
    ctx = *(EVP_CIPHER_CTX **)(param_1 + 0x1020);
    __src = *(void **)(param_1 + 0x10c0);
    if (ctx != (EVP_CIPHER_CTX *)0x0) {
      if (param_2[1] == 0x15) {
LAB_00100552:
        memmove(*(void **)(param_2 + 8),*(void **)(param_2 + 10),*(size_t *)(param_2 + 2));
        *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 8);
        goto LAB_0010056b;
      }
      if (*(long *)(param_1 + 0x1028) == 0) {
        iVar1 = EVP_CIPHER_CTX_get_iv_length(ctx);
        uVar3 = (ulong)iVar1;
        if (iVar1 < 0) {
          ERR_new();
          uVar5 = 0x8a;
          goto LAB_00100589;
        }
      }
      else {
LAB_00100486:
        uVar3 = EVP_MAC_CTX_get_mac_size();
      }
      if (param_4 == 0) {
        if (*(long *)(param_1 + 0x10d8) + 1U <= *(ulong *)(param_2 + 2)) {
          *(ulong *)(param_2 + 2) = *(ulong *)(param_2 + 2) - *(long *)(param_1 + 0x10d8);
          goto LAB_001004ad;
        }
LAB_00100503:
        bVar6 = false;
        goto LAB_00100508;
      }
LAB_001004ad:
      if (uVar3 < 8) {
        ERR_new();
        uVar5 = 0x9d;
        goto LAB_00100589;
      }
      memcpy(iv,__src,uVar3 - 8);
      lVar4 = 0;
      do {
        iv[lVar4 + (uVar3 - 8)] =
             *(byte *)((long)__src + lVar4 + (uVar3 - 8)) ^ *(byte *)(param_1 + 0x1000 + lVar4);
        lVar4 = lVar4 + 1;
      } while (lVar4 != 8);
      iVar1 = tls_increment_sequence_ctr(param_1);
      if (iVar1 == 0) goto LAB_00100503;
      iVar1 = WPACKET_init_static_len(local_c8,local_8d,5);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(local_c8,(long)param_2[1],1);
        if (iVar1 != 0) {
          iVar1 = WPACKET_put_bytes__(local_c8,(long)*param_2,2);
          if (iVar1 != 0) {
            iVar1 = WPACKET_put_bytes__(local_c8,*(long *)(param_1 + 0x10d8) +
                                                 *(long *)(param_2 + 2),2);
            if (iVar1 != 0) {
              iVar1 = WPACKET_get_total_written(local_c8);
              if ((iVar1 != 0) && (local_d8 == 5)) {
                iVar1 = WPACKET_finish(local_c8);
                if (iVar1 != 0) {
                  if (*(long *)(param_1 + 0x1028) == 0) {
                    lVar4 = EVP_CIPHER_CTX_get0_cipher(ctx);
                    if (lVar4 == 0) {
                      ERR_new(0);
                      uVar5 = 0xd2;
                      goto LAB_00100589;
                    }
                    iVar1 = EVP_CIPHER_get_mode();
                    iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)0x0,iv,
                                              param_4);
                    if (iVar2 < 1) {
LAB_0010095c:
                      ERR_new();
                      uVar5 = 0xdb;
                      goto LAB_00100589;
                    }
                    if (param_4 == 0) {
                      iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,*(int *)(param_1 + 0x10d8),
                                                  (void *)(*(long *)(param_2 + 2) +
                                                          *(long *)(param_2 + 8)));
                      if (iVar2 < 1) goto LAB_0010095c;
                    }
                    if (iVar1 == 7) {
                      iVar1 = EVP_CipherUpdate(ctx,(uchar *)0x0,&local_dc,(uchar *)0x0,param_2[2]);
                      if (iVar1 < 1) {
                        bVar6 = false;
                        goto LAB_00100508;
                      }
                    }
                    iVar1 = EVP_CipherUpdate(ctx,(uchar *)0x0,&local_dc,local_8d,5);
                    if (0 < iVar1) {
                      iVar1 = EVP_CipherUpdate(ctx,*(uchar **)(param_2 + 8),&local_dc,
                                               *(uchar **)(param_2 + 10),param_2[2]);
                      if (0 < iVar1) {
                        iVar1 = EVP_CipherFinal_ex(ctx,(uchar *)((long)local_dc +
                                                                *(long *)(param_2 + 8)),local_d0);
                        if ((0 < iVar1) &&
                           ((long)(local_d0[0] + local_dc) == *(long *)(param_2 + 2))) {
                          if (param_4 != 0) {
                            iVar1 = EVP_CIPHER_CTX_ctrl(ctx,0x10,*(int *)(param_1 + 0x10d8),
                                                        (void *)((long)(local_d0[0] + local_dc) +
                                                                *(long *)(param_2 + 8)));
                            if (iVar1 < 1) {
                              ERR_new();
                              uVar5 = 0xf2;
                              goto LAB_00100589;
                            }
                            *(long *)(param_2 + 2) =
                                 *(long *)(param_2 + 2) + *(long *)(param_1 + 0x10d8);
                          }
LAB_0010056b:
                          bVar6 = true;
                          goto LAB_00100508;
                        }
                      }
                    }
                    goto LAB_00100503;
                  }
                  lVar4 = EVP_MAC_CTX_dup();
                  if (lVar4 == 0) {
LAB_001007de:
                    ERR_new();
                    ERR_set_debug("ssl/record/methods/tls13_meth.c",0xbf,"tls13_cipher");
                    ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
                    bVar6 = false;
                  }
                  else {
                    iVar1 = EVP_MAC_update(lVar4,iv,uVar3);
                    if (iVar1 == 0) goto LAB_001007de;
                    iVar1 = EVP_MAC_update(lVar4,local_8d,5);
                    if (iVar1 == 0) goto LAB_001007de;
                    iVar1 = EVP_MAC_update(lVar4,*(undefined8 *)(param_2 + 10),
                                           *(undefined8 *)(param_2 + 2));
                    if (iVar1 == 0) goto LAB_001007de;
                    iVar1 = EVP_MAC_final(lVar4,local_88,local_d0,*(undefined8 *)(param_1 + 0x10d8))
                    ;
                    if (iVar1 == 0) goto LAB_001007de;
                    if (param_4 == 0) {
                      iVar1 = CRYPTO_memcmp(local_88,(void *)(*(long *)(param_2 + 2) +
                                                             *(long *)(param_2 + 8)),
                                            *(size_t *)(param_1 + 0x10d8));
                      bVar6 = iVar1 == 0;
                    }
                    else {
                      memcpy((void *)(*(long *)(param_2 + 2) + *(long *)(param_2 + 8)),local_88,
                             *(size_t *)(param_1 + 0x10d8));
                      *(long *)(param_2 + 2) = *(long *)(param_2 + 2) + *(long *)(param_1 + 0x10d8);
                      bVar6 = true;
                    }
                  }
                  EVP_MAC_CTX_free(lVar4);
                  goto LAB_00100508;
                }
              }
            }
          }
        }
      }
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls13_meth.c",0xb2,"tls13_cipher");
      ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
      WPACKET_cleanup(local_c8);
      bVar6 = false;
      goto LAB_00100508;
    }
    if (*(long *)(param_1 + 0x1028) != 0) {
      if (param_2[1] != 0x15) goto LAB_00100486;
      goto LAB_00100552;
    }
    ERR_new();
    uVar5 = 0x72;
  }
  else {
    ERR_new();
    uVar5 = 0x69;
  }
LAB_00100589:
  ERR_set_debug("ssl/record/methods/tls13_meth.c",uVar5,"tls13_cipher");
  ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
  bVar6 = false;
LAB_00100508:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
tls13_set_crypto_state
          (undefined8 *param_1,undefined8 param_2,uchar *param_3,undefined8 param_4,void *param_5,
          size_t param_6,undefined8 param_7,undefined8 param_8,EVP_CIPHER *param_9,int param_10,
          int param_11,long param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  EVP_CIPHER_CTX *ctx;
  long in_FS_OFFSET;
  bool bVar8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar8 = *(int *)((long)param_1 + 0x1c) == 1;
  iVar2 = (int)param_6;
  pvVar4 = CRYPTO_malloc(iVar2,"ssl/record/methods/tls13_meth.c",0x21);
  param_1[0x218] = pvVar4;
  if (pvVar4 != (void *)0x0) {
    pvVar4 = CRYPTO_malloc(iVar2,"ssl/record/methods/tls13_meth.c",0x25);
    param_1[0x219] = pvVar4;
    if (pvVar4 != (void *)0x0) {
      memcpy((void *)param_1[0x218],param_5,param_6);
      iVar1 = EVP_CIPHER_is_a(param_9,&_LC1);
      if (((iVar1 == 0) || (param_11 != 0x357)) || (param_12 == 0)) {
        ctx = EVP_CIPHER_CTX_new();
        param_1[0x204] = ctx;
        if (ctx == (EVP_CIPHER_CTX *)0x0) {
          ERR_new();
          uVar7 = 0x41;
        }
        else {
          iVar1 = EVP_CIPHER_get_mode(param_9);
          iVar3 = EVP_CipherInit_ex(ctx,param_9,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,(uint)bVar8)
          ;
          if ((((0 < iVar3) && (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,9,iVar2,(void *)0x0), 0 < iVar2)) &&
              ((iVar1 != 7 ||
               (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,param_10,(void *)0x0), 0 < iVar2)))) &&
             (iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,param_3,(uchar *)0x0,
                                        (uint)bVar8), 0 < iVar2)) {
LAB_00100c2c:
            uVar7 = 1;
            goto LAB_00100c31;
          }
          ERR_new();
          uVar7 = 0x4e;
        }
      }
      else {
        lVar5 = EVP_MAC_fetch(*param_1,&_LC2,param_1[1]);
        if (lVar5 != 0) {
          lVar6 = EVP_MAC_CTX_new(lVar5);
          param_1[0x205] = lVar6;
          if (lVar6 != 0) {
            EVP_MAC_free(lVar5);
            uVar7 = EVP_MD_get0_name(param_12);
            OSSL_PARAM_construct_utf8_string(&local_c8,"digest",uVar7,0);
            local_78 = local_a8;
            local_98 = local_c8;
            uStack_90 = uStack_c0;
            local_88 = local_b8;
            uStack_80 = uStack_b0;
            OSSL_PARAM_construct_end(&local_c8);
            local_70 = local_c8;
            uStack_68 = uStack_c0;
            local_50 = local_a8;
            local_60 = local_b8;
            uStack_58 = uStack_b0;
            iVar2 = EVP_MAC_init(lVar6,param_3,param_4,&local_98);
            if (iVar2 != 0) goto LAB_00100c2c;
            ERR_new();
            uVar7 = 0x39;
            goto LAB_00100b90;
          }
        }
        EVP_MAC_free(lVar5);
        ERR_new();
        uVar7 = 0x31;
      }
LAB_00100b90:
      ERR_set_debug("ssl/record/methods/tls13_meth.c",uVar7,"tls13_set_crypto_state");
      ERR_set_error(0x14,0xc0103,0);
    }
  }
  uVar7 = 0xfffffffe;
LAB_00100c31:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


