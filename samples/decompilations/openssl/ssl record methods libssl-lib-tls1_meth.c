
bool tls1_allocate_write_buffers(long param_1,char *param_2,long param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x1018) != 0) && (*param_2 == '\x17')) {
    param_3 = param_3 + 1;
    uVar3 = 1;
    uVar2 = 0x45c;
  }
  *param_4 = uVar3;
  iVar1 = tls_setup_write_buffer(param_1,param_3,uVar2,0);
  return iVar1 != 0;
}



undefined8
tls1_initialise_write_packets
          (long param_1,char *param_2,undefined8 param_3,undefined1 *param_4,long param_5,
          undefined8 *param_6,undefined8 *param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  if ((*(int *)(param_1 + 0x1018) != 0) && (*param_2 == '\x17')) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *param_4 = 0x17;
    uVar4 = *param_6;
    uVar2 = param_6[2];
    *(undefined8 *)(param_4 + 8) = 0;
    *(undefined4 *)(param_4 + 4) = uVar1;
    uVar5 = (ulong)(-(int)uVar4 - 5U & 7);
    *(undefined8 *)(param_4 + 0x10) = 0;
    param_6[3] = uVar5;
    iVar3 = WPACKET_init_static_len(param_5,uVar4,uVar2,0);
    if (iVar3 == 0) {
      ERR_new();
      uVar4 = 0x27d;
    }
    else {
      *param_7 = 1;
      iVar3 = WPACKET_allocate_bytes(param_5,uVar5,0);
      if (iVar3 != 0) {
        param_6 = param_6 + 6;
        param_5 = param_5 + 0x38;
        goto LAB_0010008d;
      }
      ERR_new();
      uVar4 = 0x282;
    }
    ERR_set_debug("ssl/record/methods/tls1_meth.c",uVar4,"tls1_initialise_write_packets");
    ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
    return 0;
  }
LAB_0010008d:
  uVar4 = tls_initialise_write_packets_default(param_1,param_2,param_3,0,param_5,param_6);
  return uVar4;
}



undefined8
tls1_set_crypto_state
          (undefined8 *param_1,int param_2,uchar *param_3,undefined8 param_4,uchar *param_5,
          int param_6,uchar *param_7,long param_8,EVP_CIPHER *param_9,int param_10,int param_11,
          undefined8 param_12,COMP_METHOD *param_13)

{
  undefined8 uVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  long lVar3;
  COMP_CTX *pCVar4;
  ulong uVar5;
  EVP_PKEY *pkey;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  iVar2 = *(int *)((long)param_1 + 0x1c);
  if (param_2 != 3) {
    return 0xfffffffe;
  }
  ctx = EVP_CIPHER_CTX_new();
  param_1[0x204] = ctx;
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/record/methods/tls1_meth.c",0x25,"tls1_set_crypto_state");
    ossl_rlayer_fatal(param_1,0x50,0x80006,0);
    return 0xfffffffe;
  }
  lVar3 = EVP_MD_CTX_new();
  param_1[0x207] = lVar3;
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("ssl/record/methods/tls1_meth.c",0x2d,"tls1_set_crypto_state");
    ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
    return 0xfffffffe;
  }
  uVar8 = (uint)(iVar2 == 1);
  if (param_13 != (COMP_METHOD *)0x0) {
    pCVar4 = COMP_CTX_new(param_13);
    param_1[0x208] = pCVar4;
    if (pCVar4 == (COMP_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls1_meth.c",0x34,"tls1_set_crypto_state");
      ERR_set_error(0x14,0x8e,0);
      return 0xfffffffe;
    }
  }
  uVar5 = EVP_CIPHER_get_flags(param_9);
  if ((uVar5 & 0x200000) == 0) {
    if (param_11 == 0x357) {
      pkey = (EVP_PKEY *)EVP_PKEY_new_raw_private_key_ex(*param_1,&_LC1,param_1[1],param_7,param_8);
    }
    else {
      pkey = EVP_PKEY_new_mac_key(param_11,(ENGINE *)0x0,param_7,(int)param_8);
    }
    if (pkey != (EVP_PKEY *)0x0) {
      uVar7 = param_1[1];
      uVar1 = *param_1;
      uVar6 = EVP_MD_get0_name(param_12);
      iVar2 = EVP_DigestSignInit_ex(param_1[0x207],0,uVar6,uVar1,uVar7,pkey,0);
      if (0 < iVar2) {
        EVP_PKEY_free(pkey);
        goto LAB_001002c8;
      }
    }
    EVP_PKEY_free(pkey);
    ERR_new();
    uVar7 = 0x51;
  }
  else {
LAB_001002c8:
    iVar2 = EVP_CIPHER_get_mode(param_9);
    if (iVar2 == 6) {
      iVar2 = EVP_CipherInit_ex(ctx,param_9,(ENGINE *)0x0,param_3,(uchar *)0x0,uVar8);
      if ((iVar2 == 0) || (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x12,param_6,param_5), iVar2 < 1)) {
        ERR_new();
        uVar7 = 0x5b;
        goto LAB_00100489;
      }
    }
    else {
      iVar2 = EVP_CIPHER_get_mode(param_9);
      if (iVar2 == 7) {
        iVar2 = EVP_CipherInit_ex(ctx,param_9,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,uVar8);
        if ((((iVar2 == 0) || (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,9,0xc,(void *)0x0), iVar2 < 1)) ||
            (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x11,param_10,(void *)0x0), iVar2 < 1)) ||
           ((iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x12,param_6,param_5), iVar2 < 1 ||
            (iVar2 = EVP_CipherInit_ex(ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,param_3,(uchar *)0x0,
                                       uVar8), iVar2 == 0)))) {
          ERR_new();
          uVar7 = 0x67;
          goto LAB_00100489;
        }
      }
      else {
        iVar2 = EVP_CipherInit_ex(ctx,param_9,(ENGINE *)0x0,param_3,param_5,uVar8);
        if (iVar2 == 0) {
          ERR_new();
          uVar7 = 0x6c;
          goto LAB_00100489;
        }
      }
    }
    uVar5 = EVP_CIPHER_get_flags(param_9);
    if ((((uVar5 & 0x200000) == 0) || (param_8 == 0)) ||
       (iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x17,(int)param_8,param_7), 0 < iVar2)) {
      uVar7 = EVP_CIPHER_CTX_get0_cipher(ctx);
      lVar3 = EVP_CIPHER_get0_provider(uVar7);
      if ((lVar3 != 0) &&
         (iVar2 = ossl_set_tls_provider_parameters(param_1,ctx,param_9,param_12), iVar2 == 0)) {
        return 0xfffffffe;
      }
      uVar8 = *(uint *)((long)param_1 + 0x14);
      if (((uVar8 & 0xfffffffd) == 0xfefd || uVar8 == 0x100) || (uVar8 - 0x302 < 2)) {
        uVar7 = EVP_CIPHER_CTX_get0_cipher(ctx);
        iVar2 = EVP_CIPHER_get_mode(uVar7);
        if (iVar2 == 2) {
          iVar2 = EVP_CIPHER_CTX_get_iv_length(ctx);
          if (iVar2 < 0) {
            ERR_new();
            ERR_set_debug("ssl/record/methods/tls1_meth.c",0x8b,"tls1_set_crypto_state");
            ossl_rlayer_fatal(param_1,0x50,0x112,0);
            return 0xfffffffe;
          }
          lVar3 = 0;
          if (1 < iVar2) {
            lVar3 = (long)iVar2;
          }
        }
        else {
          lVar3 = (ulong)(iVar2 - 6U < 2) * 8;
        }
        param_1[0x206] = lVar3;
      }
      return 1;
    }
    ERR_new();
    uVar7 = 0x75;
  }
LAB_00100489:
  ERR_set_debug("ssl/record/methods/tls1_meth.c",uVar7,"tls1_set_crypto_state");
  ERR_set_error(0x14,0xc0103,0);
  return 0xfffffffe;
}



uint tls1_mac(long param_1,long param_2,uchar *param_3,int param_4)

{
  EVP_MD_CTX *in;
  char cVar1;
  int iVar2;
  uint uVar3;
  EVP_MD_CTX *out;
  undefined8 uVar4;
  EVP_MD_CTX *pEVar5;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  size_t local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ushort local_58;
  undefined4 uStack_56;
  undefined2 uStack_52;
  undefined8 local_50;
  uint local_48;
  undefined1 local_44;
  long local_40;
  
  in = *(EVP_MD_CTX **)(param_1 + 0x1038);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = EVP_MD_CTX_get_size_ex(in);
  if (iVar2 < 0) {
    uVar3 = 0;
    goto LAB_001007e8;
  }
  local_b0 = (size_t)iVar2;
  out = in;
  pEVar5 = (EVP_MD_CTX *)0x0;
  if (*(int *)(param_1 + 0x10b4) == 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    uVar3 = 0;
    if ((out != (EVP_MD_CTX *)0x0) && (uVar3 = EVP_MD_CTX_copy(out,in), pEVar5 = out, uVar3 != 0))
    goto LAB_001006e7;
  }
  else {
LAB_001006e7:
    if (*(int *)(param_1 + 0x10) == 0) {
      if (*(int *)(param_1 + 0x10b8) == 0) {
LAB_00100826:
        local_50 = *(undefined8 *)(param_1 + 0x1000);
        goto LAB_0010072e;
      }
      iVar2 = EVP_MD_CTX_ctrl(out,4,0,param_1 + 0x1000);
      if (0 < iVar2) {
        if (*(int *)(param_1 + 0x10) != 0) goto LAB_001006f2;
        goto LAB_00100826;
      }
    }
    else {
LAB_001006f2:
      local_58 = *(ushort *)(param_1 + 0x30) << 8 | *(ushort *)(param_1 + 0x30) >> 8;
      uStack_56 = *(undefined4 *)(param_1 + 0x1002);
      uStack_52 = *(undefined2 *)(param_1 + 0x1006);
      local_50 = CONCAT26(uStack_52,CONCAT42(uStack_56,local_58));
LAB_0010072e:
      local_44 = (undefined1)*(undefined8 *)(param_2 + 8);
      local_48 = (((uint)*(undefined8 *)(param_2 + 8) & 0xff00 | *(uint *)(param_1 + 0x14) & 0xff)
                  << 8 | *(uint *)(param_1 + 0x14) >> 8 & 0xff) << 8 | (uint)*(byte *)(param_2 + 4);
      if ((param_4 == 0) && (*(int *)(param_1 + 0x10b0) == 0)) {
        uVar4 = EVP_CIPHER_CTX_get0_cipher(*(undefined8 *)(param_1 + 0x1020));
        iVar2 = EVP_CIPHER_get_mode(uVar4);
        if ((iVar2 == 2) && (cVar1 = ssl3_cbc_record_digest_supported(out), cVar1 != '\0')) {
          OSSL_PARAM_construct_size_t(&local_e8,"tls-data-size",param_2 + 0x10);
          local_a8 = local_e8;
          uStack_a0 = uStack_e0;
          local_98 = local_d8;
          uStack_90 = uStack_d0;
          local_88 = local_c8;
          OSSL_PARAM_construct_end(&local_e8);
          local_80 = local_e8;
          uStack_78 = uStack_e0;
          local_70 = local_d8;
          uStack_68 = uStack_d0;
          local_60 = local_c8;
          uVar4 = EVP_MD_CTX_get_pkey_ctx(out);
          iVar2 = EVP_PKEY_CTX_set_params(uVar4,&local_a8);
          if (iVar2 == 0) {
            uVar3 = 0;
            out = pEVar5;
            goto LAB_001007e0;
          }
        }
      }
      iVar2 = EVP_DigestSignUpdate(out,&local_50,0xd);
      if (((0 < iVar2) &&
          (iVar2 = EVP_DigestSignUpdate
                             (out,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 8)),
          0 < iVar2)) && (iVar2 = EVP_DigestSignFinal(out,param_3,&local_b0), 0 < iVar2)) {
        uVar3 = 1;
        out = pEVar5;
        if (*(int *)(param_1 + 0x10) == 0) {
          iVar2 = tls_increment_sequence_ctr(param_1);
          uVar3 = (uint)(iVar2 != 0);
        }
        goto LAB_001007e0;
      }
    }
    uVar3 = 0;
    out = pEVar5;
  }
LAB_001007e0:
  EVP_MD_CTX_free(out);
LAB_001007e8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
tls1_cipher(undefined8 *param_1,long param_2,ulong param_3,int param_4,long param_5,long param_6)

{
  undefined1 *puVar1;
  EVP_CIPHER_CTX *ctx;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  byte *pbVar16;
  undefined1 *ptr;
  long in_FS_OFFSET;
  int local_4a8;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  int local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  ulong local_3e8 [32];
  undefined8 local_2e8 [4];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [416];
  ushort local_48;
  undefined4 local_46;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    ERR_new();
    uVar6 = 0xb5;
LAB_00100cf1:
    ERR_set_debug("ssl/record/methods/tls1_meth.c",uVar6,"tls1_cipher");
    ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
  }
  else {
    lVar4 = EVP_MD_CTX_get0_md(param_1[0x207]);
    if ((lVar4 != 0) && (iVar2 = EVP_MD_CTX_get_size_ex(param_1[0x207]), iVar2 < 0)) {
      ERR_new();
      uVar6 = 0xbd;
      goto LAB_00100cf1;
    }
    ctx = (EVP_CIPHER_CTX *)param_1[0x204];
    if (ctx == (EVP_CIPHER_CTX *)0x0) {
      ERR_new();
      uVar6 = 0xc3;
      goto LAB_00100cf1;
    }
    lVar4 = EVP_CIPHER_CTX_get0_cipher(ctx);
    if ((param_4 != 0) &&
       ((((uVar10 = *(uint *)((long)param_1 + 0x14),
          (uVar10 & 0xfffffffd) == 0xfefd || uVar10 == 0x100 || (uVar10 - 0x302 < 2)) &&
         (iVar2 = EVP_CIPHER_get_mode(lVar4), iVar2 == 2)) &&
        (iVar2 = EVP_CIPHER_get_iv_length(lVar4), 1 < iVar2)))) {
      uVar7 = 0;
      plVar12 = (long *)(param_2 + 0x20);
      do {
        if (*plVar12 != plVar12[1]) {
          ERR_new();
          uVar6 = 0xd5;
          goto LAB_00100cf1;
        }
        iVar3 = RAND_bytes_ex(*param_1,plVar12[1],(long)iVar2,0);
        if (iVar3 < 1) {
          ERR_new();
          uVar6 = 0xd9;
          goto LAB_00100cf1;
        }
        uVar7 = uVar7 + 1;
        plVar12 = plVar12 + 9;
      } while (param_3 != uVar7);
    }
    if (lVar4 == 0) {
      ERR_new();
      uVar6 = 0xe0;
      goto LAB_00100cf1;
    }
    lVar5 = EVP_CIPHER_get0_provider(lVar4);
    uVar6 = EVP_CIPHER_CTX_get0_cipher(ctx);
    iVar2 = EVP_CIPHER_get_block_size(uVar6);
    uVar7 = (ulong)iVar2;
    if (uVar7 == 0) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls1_meth.c",0xe9,"tls1_cipher");
      ossl_rlayer_fatal(param_1,0x50,0xba,0);
      goto LAB_00100c80;
    }
    if (param_3 == 1) {
LAB_00100a97:
      ptr = local_1e8;
      iVar2 = 0;
      pbVar16 = (byte *)(param_2 + 4);
      puVar1 = ptr + param_3 * 0xd;
      puVar15 = local_3e8;
      do {
        *puVar15 = *(ulong *)(pbVar16 + 4);
        uVar6 = EVP_CIPHER_CTX_get0_cipher(ctx);
        uVar8 = EVP_CIPHER_get_flags(uVar6);
        if ((uVar8 & 0x200000) == 0) {
          if (uVar7 == 1 || param_4 == 0) {
            if (param_4 == 0) {
              uVar8 = *puVar15;
LAB_00100c68:
              if ((uVar8 == 0) || (uVar8 % uVar7 != 0)) goto LAB_00100c80;
            }
          }
          else if (lVar5 == 0) {
            uVar8 = *puVar15;
            uVar11 = uVar7 - uVar8 % uVar7;
            if (0x100 < uVar11) {
              ERR_new();
              uVar6 = 0x129;
              goto LAB_00100cf1;
            }
            uVar9 = uVar8 + uVar11;
            if (uVar8 < uVar9) {
              do {
                *(char *)(*(long *)(pbVar16 + 0x24) + uVar8) = (char)uVar11 + -1;
                uVar8 = uVar8 + 1;
                uVar9 = *puVar15 + uVar11;
              } while (uVar8 < uVar9);
            }
            *(ulong *)(pbVar16 + 4) = *(long *)(pbVar16 + 4) + uVar11;
            *puVar15 = uVar9;
          }
        }
        else {
          if (*(int *)(param_1 + 2) == 0) {
            __memcpy_chk(ptr,param_1 + 0x200,8,(long)&local_48 - (long)ptr);
            iVar2 = tls_increment_sequence_ctr(param_1);
            if (iVar2 == 0) goto LAB_00100c80;
          }
          else {
            local_48 = *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
            local_46 = *(undefined4 *)((long)param_1 + 0x1002);
            local_42 = *(undefined2 *)((long)param_1 + 0x1006);
            __memcpy_chk(ptr,&local_48,8,(long)&local_48 - (long)ptr);
          }
          uVar6 = *(undefined8 *)(pbVar16 + 4);
          uVar10 = *(uint *)((long)param_1 + 0x14);
          ptr[0xc] = (char)uVar6;
          *(uint *)(ptr + 8) =
               (((uint)uVar6 & 0xff00 | uVar10 & 0xff) << 8 | uVar10 >> 8 & 0xff) << 8 |
               (uint)*pbVar16;
          iVar2 = EVP_CIPHER_CTX_ctrl(ctx,0x16,0xd,ptr);
          if (iVar2 < 1) {
            ERR_new();
            uVar6 = 0x117;
            goto LAB_00100cf1;
          }
          uVar8 = *puVar15;
          if (param_4 == 0) goto LAB_00100c68;
          *(long *)(pbVar16 + 4) = *(long *)(pbVar16 + 4) + (long)iVar2;
          *puVar15 = uVar8 + (long)iVar2;
        }
        pbVar16 = pbVar16 + 0x48;
        puVar15 = puVar15 + 1;
        ptr = ptr + 0xd;
      } while (puVar1 != ptr);
      if (param_3 != 1) {
        uVar8 = param_3 >> 1;
        local_2e8[1] = *(undefined8 *)(param_2 + 0x68);
        local_2e8[0] = *(undefined8 *)(param_2 + 0x20);
        if (uVar8 != 1) {
          local_2e8[3] = *(undefined8 *)(param_2 + 0xf8);
          local_2e8[2] = *(undefined8 *)(param_2 + 0xb0);
          if (uVar8 != 2) {
            uStack_2c0 = *(undefined8 *)(param_2 + 0x188);
            local_2c8 = *(undefined8 *)(param_2 + 0x140);
            if (uVar8 != 3) {
              uStack_2b0 = *(undefined8 *)(param_2 + 0x218);
              local_2b8 = *(undefined8 *)(param_2 + 0x1d0);
              if (uVar8 != 4) {
                uStack_2a0 = *(undefined8 *)(param_2 + 0x2a8);
                local_2a8 = *(undefined8 *)(param_2 + 0x260);
                if (uVar8 != 5) {
                  uStack_290 = *(undefined8 *)(param_2 + 0x338);
                  local_298 = *(undefined8 *)(param_2 + 0x2f0);
                  if (uVar8 != 6) {
                    uStack_280 = *(undefined8 *)(param_2 + 0x3c8);
                    local_288 = *(undefined8 *)(param_2 + 0x380);
                    if (uVar8 != 7) {
                      uStack_270 = *(undefined8 *)(param_2 + 0x458);
                      local_278 = *(undefined8 *)(param_2 + 0x410);
                      if (uVar8 != 8) {
                        uStack_260 = *(undefined8 *)(param_2 + 0x4e8);
                        local_268 = *(undefined8 *)(param_2 + 0x4a0);
                        if (uVar8 != 9) {
                          uStack_250 = *(undefined8 *)(param_2 + 0x578);
                          local_258 = *(undefined8 *)(param_2 + 0x530);
                          if (uVar8 != 10) {
                            uStack_240 = *(undefined8 *)(param_2 + 0x608);
                            local_248 = *(undefined8 *)(param_2 + 0x5c0);
                            if (uVar8 != 0xb) {
                              uStack_230 = *(undefined8 *)(param_2 + 0x698);
                              local_238 = *(undefined8 *)(param_2 + 0x650);
                              if (uVar8 != 0xc) {
                                uStack_220 = *(undefined8 *)(param_2 + 0x728);
                                local_228 = *(undefined8 *)(param_2 + 0x6e0);
                                if (uVar8 != 0xd) {
                                  uStack_210 = *(undefined8 *)(param_2 + 0x7b8);
                                  local_218 = *(undefined8 *)(param_2 + 0x770);
                                  if (uVar8 != 0xe) {
                                    uStack_200 = *(undefined8 *)(param_2 + 0x848);
                                    local_208 = *(undefined8 *)(param_2 + 0x800);
                                    if (uVar8 != 0xf) {
                                      uStack_1f0 = *(undefined8 *)(param_2 + 0x8d8);
                                      local_1f8 = *(undefined8 *)(param_2 + 0x890);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        uVar11 = param_3 & 0xfffffffffffffffe;
        if ((param_3 & 1) != 0) {
          local_2e8[uVar11] = *(undefined8 *)(param_2 + 0x20 + uVar11 * 0x48);
        }
        local_4a8 = (int)param_3;
        iVar3 = EVP_CIPHER_CTX_ctrl(ctx,0x22,local_4a8,local_2e8);
        if (iVar3 < 1) {
          ERR_new();
          uVar6 = 0x142;
        }
        else {
          local_2e8[1] = *(undefined8 *)(param_2 + 0x70);
          local_2e8[0] = *(undefined8 *)(param_2 + 0x28);
          if (uVar8 != 1) {
            local_2e8[3] = *(undefined8 *)(param_2 + 0x100);
            local_2e8[2] = *(undefined8 *)(param_2 + 0xb8);
            if (uVar8 != 2) {
              uStack_2c0 = *(undefined8 *)(param_2 + 400);
              local_2c8 = *(undefined8 *)(param_2 + 0x148);
              if (uVar8 != 3) {
                uStack_2b0 = *(undefined8 *)(param_2 + 0x220);
                local_2b8 = *(undefined8 *)(param_2 + 0x1d8);
                if (uVar8 != 4) {
                  uStack_2a0 = *(undefined8 *)(param_2 + 0x2b0);
                  local_2a8 = *(undefined8 *)(param_2 + 0x268);
                  if (uVar8 != 5) {
                    uStack_290 = *(undefined8 *)(param_2 + 0x340);
                    local_298 = *(undefined8 *)(param_2 + 0x2f8);
                    if (uVar8 != 6) {
                      uStack_280 = *(undefined8 *)(param_2 + 0x3d0);
                      local_288 = *(undefined8 *)(param_2 + 0x388);
                      if (uVar8 != 7) {
                        uStack_270 = *(undefined8 *)(param_2 + 0x460);
                        local_278 = *(undefined8 *)(param_2 + 0x418);
                        if (uVar8 != 8) {
                          uStack_260 = *(undefined8 *)(param_2 + 0x4f0);
                          local_268 = *(undefined8 *)(param_2 + 0x4a8);
                          if (uVar8 != 9) {
                            uStack_250 = *(undefined8 *)(param_2 + 0x580);
                            local_258 = *(undefined8 *)(param_2 + 0x538);
                            if (uVar8 != 10) {
                              uStack_240 = *(undefined8 *)(param_2 + 0x610);
                              local_248 = *(undefined8 *)(param_2 + 0x5c8);
                              if (uVar8 != 0xb) {
                                uStack_230 = *(undefined8 *)(param_2 + 0x6a0);
                                local_238 = *(undefined8 *)(param_2 + 0x658);
                                if (uVar8 != 0xc) {
                                  uStack_220 = *(undefined8 *)(param_2 + 0x730);
                                  local_228 = *(undefined8 *)(param_2 + 0x6e8);
                                  if (uVar8 != 0xd) {
                                    uStack_210 = *(undefined8 *)(param_2 + 0x7c0);
                                    local_218 = *(undefined8 *)(param_2 + 0x778);
                                    if (uVar8 != 0xe) {
                                      uStack_200 = *(undefined8 *)(param_2 + 0x850);
                                      local_208 = *(undefined8 *)(param_2 + 0x808);
                                      if (uVar8 != 0xf) {
                                        uStack_1f0 = *(undefined8 *)(param_2 + 0x8e0);
                                        local_1f8 = *(undefined8 *)(param_2 + 0x898);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if ((param_3 & 1) != 0) {
            local_2e8[uVar11] = *(undefined8 *)(param_2 + 0x28 + uVar11 * 0x48);
          }
          iVar3 = EVP_CIPHER_CTX_ctrl(ctx,0x23,local_4a8,local_2e8);
          if ((0 < iVar3) && (iVar3 = EVP_CIPHER_CTX_ctrl(ctx,0x24,local_4a8,local_3e8), 0 < iVar3))
          {
            if ((*(int *)(param_1 + 2) == 0) && (*(int *)(param_1 + 0x217) != 0)) goto LAB_0010128d;
            if (lVar5 == 0) goto LAB_00101491;
LAB_001012d7:
            ERR_new();
            uVar6 = 0x16a;
            goto LAB_00100cf1;
          }
          ERR_new();
          uVar6 = 0x14d;
        }
        goto LAB_00100d5c;
      }
      if ((*(int *)(param_1 + 2) == 0) && (*(int *)(param_1 + 0x217) != 0)) {
LAB_0010128d:
        uVar10 = 0;
        if (param_4 != 0) {
          uVar10 = (uint)(*(int *)(param_1 + 0x216) == 0);
        }
        iVar3 = EVP_CIPHER_CTX_ctrl(ctx,0x2a,uVar10,param_1 + 0x200);
        if (iVar3 < 1) {
          ERR_new();
          uVar6 = 0x160;
          goto LAB_00100cf1;
        }
        if (lVar5 == 0) goto LAB_00101491;
        if (param_3 != 1) goto LAB_001012d7;
LAB_00101437:
        iVar2 = EVP_CipherUpdate(ctx,*(uchar **)(param_2 + 0x20),&local_43c,
                                 *(uchar **)(param_2 + 0x28),(uint)local_3e8[0]);
        if (iVar2 != 0) {
          *(long *)(param_2 + 8) = (long)local_43c;
          if (param_4 == 0) {
            iVar2 = EVP_CIPHER_get_mode(lVar4);
            if ((iVar2 == 6) || (iVar2 = EVP_CIPHER_get_mode(lVar4), iVar2 == 7)) {
              lVar4 = _UNK_00101ab8 + *(long *)(param_2 + 0x28);
              *(long *)(param_2 + 0x20) = __LC3 + *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x28) = lVar4;
            }
            else if ((uVar7 != 1) &&
                    ((uVar10 = *(uint *)((long)param_1 + 0x14),
                     (uVar10 & 0xfffffffd) == 0xfefd || uVar10 == 0x100 || (uVar10 - 0x302 < 2)))) {
              *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) - uVar7;
              *(ulong *)(param_2 + 0x20) = uVar7 + *(long *)(param_2 + 0x20);
              *(ulong *)(param_2 + 0x28) = uVar7 + *(long *)(param_2 + 0x28);
            }
            if (param_5 != 0) {
              *(undefined4 *)(param_5 + 8) = 0;
              OSSL_PARAM_construct_octet_ptr(&local_478,"tls-mac",param_5,param_6);
              local_418 = local_458;
              local_438 = local_478;
              uStack_430 = uStack_470;
              local_428 = local_468;
              uStack_420 = uStack_460;
              OSSL_PARAM_construct_end(&local_478);
              local_3f0 = local_458;
              local_410 = local_478;
              uStack_408 = uStack_470;
              local_400 = local_468;
              uStack_3f8 = uStack_460;
              iVar2 = EVP_CIPHER_CTX_get_params(ctx,&local_438);
              if (iVar2 == 0) {
                ERR_new();
                uVar6 = 0x193;
                goto LAB_00100cf1;
              }
            }
          }
LAB_0010147b:
          uVar6 = 1;
          goto LAB_00100c82;
        }
      }
      else {
        if (lVar5 != 0) goto LAB_00101437;
LAB_00101491:
        iVar3 = EVP_Cipher(ctx,*(uchar **)(param_2 + 0x20),*(uchar **)(param_2 + 0x28),
                           (uint)local_3e8[0]);
        uVar6 = EVP_CIPHER_CTX_get0_cipher(ctx);
        uVar8 = EVP_CIPHER_get_flags(uVar6);
        if ((uVar8 & 0x100000) == 0) {
          if (iVar3 == 0) goto LAB_00100c80;
LAB_001014d2:
          if (param_4 == 0) {
            lVar5 = (long)iVar2;
            if (iVar2 == 0) {
              lVar5 = param_6;
            }
            if (param_5 == 0) {
              puVar14 = (ulong *)(param_2 + 8);
              puVar15 = puVar14 + param_3 * 9;
              do {
                iVar2 = EVP_CIPHER_get_mode(lVar4);
                if ((iVar2 == 6) || (iVar2 = EVP_CIPHER_get_mode(lVar4), iVar2 == 7)) {
                  uVar8 = puVar14[3] + __LC3;
                  uVar11 = puVar14[4] + _UNK_00101ab8;
                  *puVar14 = *puVar14 - 8;
                  puVar14[3] = uVar8;
                  puVar14[4] = uVar11;
                }
                else if ((uVar7 != 1) &&
                        ((uVar10 = *(uint *)((long)param_1 + 0x14),
                         (uVar10 & 0xfffffffd) == 0xfefd || uVar10 == 0x100 || (uVar10 - 0x302 < 2))
                        )) {
                  if (*puVar14 < uVar7) goto LAB_00100c80;
                  puVar14[3] = puVar14[3] + uVar7;
                  puVar14[4] = puVar14[4] + uVar7;
                  *puVar14 = *puVar14 - uVar7;
                  puVar14[1] = puVar14[1] - uVar7;
                }
                uVar6 = *param_1;
                uVar8 = EVP_CIPHER_get_flags(lVar4);
                iVar2 = tls1_cbc_remove_padding_and_mac
                                  (puVar14,puVar14[1],puVar14[3],0,0,uVar7,lVar5,
                                   (uint)(uVar8 >> 0x15) & 1,uVar6);
                if (iVar2 == 0) goto LAB_00100c80;
                puVar14 = puVar14 + 9;
              } while (puVar15 != puVar14);
            }
            else {
              puVar15 = (ulong *)(param_2 + 8);
              lVar13 = param_3 * 0x10 + param_5;
              do {
                iVar2 = EVP_CIPHER_get_mode(lVar4);
                if ((iVar2 == 6) || (iVar2 = EVP_CIPHER_get_mode(lVar4), iVar2 == 7)) {
                  uVar8 = puVar15[3] + __LC3;
                  uVar11 = puVar15[4] + _UNK_00101ab8;
                  *puVar15 = *puVar15 - 8;
                  puVar15[3] = uVar8;
                  puVar15[4] = uVar11;
                }
                else if ((uVar7 != 1) &&
                        ((uVar10 = *(uint *)((long)param_1 + 0x14),
                         (uVar10 & 0xfffffffd) == 0xfefd || uVar10 == 0x100 || (uVar10 - 0x302 < 2))
                        )) {
                  if (*puVar15 < uVar7) goto LAB_00100c80;
                  puVar15[3] = puVar15[3] + uVar7;
                  puVar15[4] = puVar15[4] + uVar7;
                  *puVar15 = *puVar15 - uVar7;
                  puVar15[1] = puVar15[1] - uVar7;
                }
                uVar6 = *param_1;
                uVar8 = EVP_CIPHER_get_flags(lVar4);
                iVar2 = tls1_cbc_remove_padding_and_mac
                                  (puVar15,puVar15[1],puVar15[3],param_5,param_5 + 8,uVar7,lVar5,
                                   (uint)(uVar8 >> 0x15) & 1,uVar6);
                if (iVar2 == 0) goto LAB_00100c80;
                puVar15 = puVar15 + 9;
                param_5 = param_5 + 0x10;
              } while (lVar13 != param_5);
            }
          }
          goto LAB_0010147b;
        }
        if (-1 < iVar3) goto LAB_001014d2;
      }
    }
    else {
      uVar6 = EVP_CIPHER_CTX_get0_cipher(ctx);
      uVar8 = EVP_CIPHER_get_flags(uVar6);
      if ((uVar8 & 0x800000) != 0) goto LAB_00100a97;
      ERR_new();
      uVar6 = 0xf4;
LAB_00100d5c:
      ERR_set_debug("ssl/record/methods/tls1_meth.c",uVar6,"tls1_cipher");
      ossl_rlayer_fatal(param_1,0x50,0x196,0);
    }
  }
LAB_00100c80:
  uVar6 = 0;
LAB_00100c82:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}


