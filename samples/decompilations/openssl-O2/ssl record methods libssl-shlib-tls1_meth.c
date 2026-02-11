
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
tls1_cipher(undefined8 *param_1,long param_2,long param_3,int param_4,long param_5,long param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  EVP_CIPHER_CTX *ctx;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  undefined1 *ptr;
  ulong *puVar19;
  byte *pbVar20;
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
  undefined8 local_2e8 [32];
  undefined1 local_1e8 [416];
  ushort local_48;
  undefined4 local_46;
  undefined2 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    ERR_new();
    uVar7 = 0xb5;
LAB_00100cf1:
    ERR_set_debug("ssl/record/methods/tls1_meth.c",uVar7,"tls1_cipher");
    ossl_rlayer_fatal(param_1,0x50,0xc0103,0);
  }
  else {
    lVar5 = EVP_MD_CTX_get0_md(param_1[0x207]);
    if ((lVar5 != 0) && (iVar3 = EVP_MD_CTX_get_size_ex(param_1[0x207]), iVar3 < 0)) {
      ERR_new();
      uVar7 = 0xbd;
      goto LAB_00100cf1;
    }
    ctx = (EVP_CIPHER_CTX *)param_1[0x204];
    if (ctx == (EVP_CIPHER_CTX *)0x0) {
      ERR_new();
      uVar7 = 0xc3;
      goto LAB_00100cf1;
    }
    lVar5 = EVP_CIPHER_CTX_get0_cipher(ctx);
    if ((param_4 != 0) &&
       ((((uVar14 = *(uint *)((long)param_1 + 0x14),
          (uVar14 & 0xfffffffd) == 0xfefd || uVar14 == 0x100 || (uVar14 - 0x302 < 2)) &&
         (iVar3 = EVP_CIPHER_get_mode(lVar5), iVar3 == 2)) &&
        (iVar3 = EVP_CIPHER_get_iv_length(lVar5), 1 < iVar3)))) {
      lVar6 = 0;
      plVar18 = (long *)(param_2 + 0x20);
      do {
        if (*plVar18 != plVar18[1]) {
          ERR_new();
          uVar7 = 0xd5;
          goto LAB_00100cf1;
        }
        iVar4 = RAND_bytes_ex(*param_1,plVar18[1],(long)iVar3,0);
        if (iVar4 < 1) {
          ERR_new();
          uVar7 = 0xd9;
          goto LAB_00100cf1;
        }
        lVar6 = lVar6 + 1;
        plVar18 = plVar18 + 9;
      } while (param_3 != lVar6);
    }
    if (lVar5 == 0) {
      ERR_new();
      uVar7 = 0xe0;
      goto LAB_00100cf1;
    }
    lVar6 = EVP_CIPHER_get0_provider(lVar5);
    uVar7 = EVP_CIPHER_CTX_get0_cipher(ctx);
    iVar3 = EVP_CIPHER_get_block_size(uVar7);
    uVar8 = (ulong)iVar3;
    if (uVar8 == 0) {
      ERR_new();
      ERR_set_debug("ssl/record/methods/tls1_meth.c",0xe9,"tls1_cipher");
      ossl_rlayer_fatal(param_1,0x50,0xba,0);
      goto LAB_00100c80;
    }
    if (param_3 == 1) {
LAB_00100a92:
      ptr = local_1e8;
      pbVar20 = (byte *)(param_2 + 4);
      puVar1 = ptr + param_3 * 0xd;
      iVar3 = 0;
      puVar19 = local_3e8;
      do {
        *puVar19 = *(ulong *)(pbVar20 + 4);
        uVar7 = EVP_CIPHER_CTX_get0_cipher(ctx);
        uVar9 = EVP_CIPHER_get_flags(uVar7);
        if ((uVar9 & 0x200000) == 0) {
          if (uVar8 == 1) {
            if (param_4 == 0) goto LAB_00100c66;
          }
          else {
            if (param_4 == 0) {
LAB_00100c66:
              uVar9 = *puVar19;
              goto LAB_00100c69;
            }
            if (lVar6 == 0) {
              uVar9 = *puVar19;
              uVar16 = uVar8 - uVar9 % uVar8;
              if (0x100 < uVar16) {
                ERR_new();
                uVar7 = 0x129;
                goto LAB_00100cf1;
              }
              uVar10 = uVar9 + uVar16;
              if (uVar9 < uVar10) {
                do {
                  *(char *)(*(long *)(pbVar20 + 0x24) + uVar9) = (char)uVar16 + -1;
                  uVar9 = uVar9 + 1;
                  uVar10 = *puVar19 + uVar16;
                } while (uVar9 < uVar10);
              }
              *(ulong *)(pbVar20 + 4) = *(long *)(pbVar20 + 4) + uVar16;
              *puVar19 = uVar10;
            }
          }
        }
        else {
          if (*(int *)(param_1 + 2) == 0) {
            __memcpy_chk(ptr,param_1 + 0x200,8,(long)&local_48 - (long)ptr);
            iVar3 = tls_increment_sequence_ctr(param_1);
            if (iVar3 == 0) goto LAB_00100c80;
          }
          else {
            local_48 = *(ushort *)(param_1 + 6) << 8 | *(ushort *)(param_1 + 6) >> 8;
            local_46 = *(undefined4 *)((long)param_1 + 0x1002);
            local_42 = *(undefined2 *)((long)param_1 + 0x1006);
            __memcpy_chk(ptr,&local_48,8,(long)&local_48 - (long)ptr);
          }
          uVar7 = *(undefined8 *)(pbVar20 + 4);
          uVar14 = *(uint *)((long)param_1 + 0x14);
          ptr[0xc] = (char)uVar7;
          *(uint *)(ptr + 8) =
               (((uint)uVar7 & 0xff00 | uVar14 & 0xff) << 8 | uVar14 >> 8 & 0xff) << 8 |
               (uint)*pbVar20;
          iVar3 = EVP_CIPHER_CTX_ctrl(ctx,0x16,0xd,ptr);
          if (iVar3 < 1) {
            ERR_new();
            uVar7 = 0x117;
            goto LAB_00100cf1;
          }
          uVar9 = *puVar19;
          if (param_4 != 0) {
            *(long *)(pbVar20 + 4) = *(long *)(pbVar20 + 4) + (long)iVar3;
            *puVar19 = uVar9 + (long)iVar3;
            goto LAB_00100bb0;
          }
LAB_00100c69:
          if ((uVar9 == 0) || (uVar9 % uVar8 != 0)) goto LAB_00100c80;
        }
LAB_00100bb0:
        ptr = ptr + 0xd;
        pbVar20 = pbVar20 + 0x48;
        puVar19 = puVar19 + 1;
      } while (ptr != puVar1);
      if (param_3 != 1) {
        puVar2 = local_2e8 + param_3;
        puVar15 = (undefined8 *)(param_2 + 0x20);
        puVar12 = local_2e8;
        do {
          uVar7 = *puVar15;
          puVar11 = puVar12 + 1;
          puVar15 = puVar15 + 9;
          *puVar12 = uVar7;
          puVar12 = puVar11;
        } while (puVar11 != puVar2);
        local_4a8 = (int)param_3;
        iVar4 = EVP_CIPHER_CTX_ctrl(ctx,0x22,local_4a8,local_2e8);
        puVar12 = (undefined8 *)(param_2 + 0x28);
        puVar15 = local_2e8;
        if (iVar4 < 1) {
          ERR_new();
          uVar7 = 0x142;
        }
        else {
          do {
            uVar7 = *puVar12;
            puVar11 = puVar15 + 1;
            puVar12 = puVar12 + 9;
            *puVar15 = uVar7;
            puVar15 = puVar11;
          } while (puVar11 != puVar2);
          iVar4 = EVP_CIPHER_CTX_ctrl(ctx,0x23,local_4a8,local_2e8);
          if ((0 < iVar4) && (iVar4 = EVP_CIPHER_CTX_ctrl(ctx,0x24,local_4a8,local_3e8), 0 < iVar4))
          {
            if ((*(int *)(param_1 + 2) == 0) && (*(int *)(param_1 + 0x217) != 0)) goto LAB_00100e80;
            if (lVar6 == 0) goto LAB_0010108d;
LAB_00100ec8:
            ERR_new();
            uVar7 = 0x16a;
            goto LAB_00100cf1;
          }
          ERR_new();
          uVar7 = 0x14d;
        }
        goto LAB_00100d5c;
      }
      if ((*(int *)(param_1 + 2) == 0) && (*(int *)(param_1 + 0x217) != 0)) {
LAB_00100e80:
        uVar14 = 0;
        if (param_4 != 0) {
          uVar14 = (uint)(*(int *)(param_1 + 0x216) == 0);
        }
        iVar4 = EVP_CIPHER_CTX_ctrl(ctx,0x2a,uVar14,param_1 + 0x200);
        if (iVar4 < 1) {
          ERR_new();
          uVar7 = 0x160;
          goto LAB_00100cf1;
        }
        if (lVar6 == 0) goto LAB_0010108d;
        if (param_3 != 1) goto LAB_00100ec8;
LAB_00101035:
        iVar3 = EVP_CipherUpdate(ctx,*(uchar **)(param_2 + 0x20),&local_43c,
                                 *(uchar **)(param_2 + 0x28),(uint)local_3e8[0]);
        if (iVar3 != 0) {
          *(long *)(param_2 + 8) = (long)local_43c;
          if (param_4 == 0) {
            iVar3 = EVP_CIPHER_get_mode(lVar5);
            if (iVar3 == 6) {
              lVar5 = _UNK_001015d8 + *(long *)(param_2 + 0x28);
              *(long *)(param_2 + 0x20) = __LC3 + *(long *)(param_2 + 0x20);
              *(long *)(param_2 + 0x28) = lVar5;
            }
            else {
              iVar3 = EVP_CIPHER_get_mode(lVar5);
              if (iVar3 == 7) {
                lVar5 = _UNK_001015d8 + *(long *)(param_2 + 0x28);
                *(long *)(param_2 + 0x20) = __LC3 + *(long *)(param_2 + 0x20);
                *(long *)(param_2 + 0x28) = lVar5;
              }
              else if ((uVar8 != 1) &&
                      ((uVar14 = *(uint *)((long)param_1 + 0x14),
                       (uVar14 & 0xfffffffd) == 0xfefd || uVar14 == 0x100 || (uVar14 - 0x302 < 2))))
              {
                *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) - uVar8;
                *(ulong *)(param_2 + 0x20) = uVar8 + *(long *)(param_2 + 0x20);
                *(ulong *)(param_2 + 0x28) = uVar8 + *(long *)(param_2 + 0x28);
              }
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
              iVar3 = EVP_CIPHER_CTX_get_params(ctx,&local_438);
              if (iVar3 == 0) {
                ERR_new();
                uVar7 = 0x193;
                goto LAB_00100cf1;
              }
            }
          }
LAB_00101077:
          uVar7 = 1;
          goto LAB_00100c82;
        }
      }
      else {
        if (lVar6 != 0) goto LAB_00101035;
LAB_0010108d:
        iVar4 = EVP_Cipher(ctx,*(uchar **)(param_2 + 0x20),*(uchar **)(param_2 + 0x28),
                           (uint)local_3e8[0]);
        uVar7 = EVP_CIPHER_CTX_get0_cipher(ctx);
        uVar9 = EVP_CIPHER_get_flags(uVar7);
        if ((uVar9 & 0x100000) == 0) {
          if (iVar4 == 0) goto LAB_00100c80;
LAB_001010ce:
          if (param_4 == 0) {
            if (iVar3 != 0) {
              param_6 = (long)iVar3;
            }
            puVar19 = (ulong *)(param_2 + 8);
            lVar6 = param_5;
            do {
              iVar3 = EVP_CIPHER_get_mode(lVar5);
              if ((iVar3 == 6) || (iVar3 = EVP_CIPHER_get_mode(lVar5), iVar3 == 7)) {
                uVar9 = puVar19[3] + __LC3;
                uVar16 = puVar19[4] + _UNK_001015d8;
                *puVar19 = *puVar19 - 8;
                puVar19[3] = uVar9;
                puVar19[4] = uVar16;
              }
              else if ((uVar8 != 1) &&
                      ((uVar14 = *(uint *)((long)param_1 + 0x14),
                       (uVar14 & 0xfffffffd) == 0xfefd || uVar14 == 0x100 || (uVar14 - 0x302 < 2))))
              {
                if (*puVar19 < uVar8) goto LAB_00100c80;
                puVar19[3] = puVar19[3] + uVar8;
                puVar19[4] = puVar19[4] + uVar8;
                *puVar19 = *puVar19 - uVar8;
                puVar19[1] = puVar19[1] - uVar8;
              }
              uVar7 = *param_1;
              uVar9 = EVP_CIPHER_get_flags(lVar5);
              if (param_5 == 0) {
                lVar17 = 0;
                lVar13 = 0;
              }
              else {
                lVar17 = lVar6 + 8;
                lVar13 = lVar6;
              }
              iVar3 = tls1_cbc_remove_padding_and_mac
                                (puVar19,puVar19[1],puVar19[3],lVar13,lVar17,uVar8,param_6,
                                 (uint)(uVar9 >> 0x15) & 1,uVar7);
              if (iVar3 == 0) goto LAB_00100c80;
              lVar6 = lVar6 + 0x10;
              puVar19 = puVar19 + 9;
            } while (lVar6 != param_3 * 0x10 + param_5);
          }
          goto LAB_00101077;
        }
        if (-1 < iVar4) goto LAB_001010ce;
      }
    }
    else {
      uVar7 = EVP_CIPHER_CTX_get0_cipher(ctx);
      uVar9 = EVP_CIPHER_get_flags(uVar7);
      if ((uVar9 & 0x800000) != 0) goto LAB_00100a92;
      ERR_new();
      uVar7 = 0xf4;
LAB_00100d5c:
      ERR_set_debug("ssl/record/methods/tls1_meth.c",uVar7,"tls1_cipher");
      ossl_rlayer_fatal(param_1,0x50,0x196,0);
    }
  }
LAB_00100c80:
  uVar7 = 0;
LAB_00100c82:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


