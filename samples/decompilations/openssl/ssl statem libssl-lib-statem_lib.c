
bool ssl_add_cert_to_wpacket(long param_1,undefined8 param_2,X509 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  bool bVar5;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) {
    iVar1 = i2d_X509(param_3,(uchar **)0x0);
    if (iVar1 < 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x3d4,"ssl_add_cert_to_wpacket");
      ossl_statem_fatal(param_1,0x50,0x80007,0);
    }
    else {
      iVar2 = WPACKET_sub_allocate_bytes__(param_2,(long)iVar1,&local_48,3);
      if ((iVar2 != 0) && (iVar2 = i2d_X509(param_3,&local_48), iVar1 == iVar2)) {
        piVar3 = *(int **)(param_1 + 0x18);
        if ((*(byte *)(*(long *)(piVar3 + 0x36) + 0x50) & 8) == 0) {
          uVar4 = 0x1000;
LAB_001001a5:
          if (((0x303 < *piVar3) && (*piVar3 != 0x10000)) || (param_5 != 0)) goto LAB_001001bd;
        }
        bVar5 = true;
        goto LAB_001000d2;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x3da,"ssl_add_cert_to_wpacket");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
  }
  else {
    iVar1 = i2d_X509(param_3,(uchar **)0x0);
    if (-1 < iVar1) {
      iVar2 = WPACKET_sub_allocate_bytes__(param_2,(long)iVar1,&local_48,3);
      if ((iVar2 != 0) && (iVar2 = i2d_X509(param_3,&local_48), iVar1 == iVar2)) {
        piVar3 = *(int **)(param_1 + 0x18);
        uVar4 = 0x9000;
        if ((*(byte *)(*(long *)(piVar3 + 0x36) + 0x50) & 8) == 0) goto LAB_001001a5;
LAB_001001bd:
        iVar1 = tls_construct_extensions(param_1,param_2,uVar4,param_3,(long)param_4);
        bVar5 = iVar1 != 0;
        goto LAB_001000d2;
      }
    }
  }
  bVar5 = false;
LAB_001000d2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}



void ca_dn_cmp(undefined8 *param_1,undefined8 *param_2)

{
  X509_NAME_cmp((X509_NAME *)*param_1,(X509_NAME *)*param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
get_cert_verify_tbs_data_constprop_0
          (long param_1,undefined8 *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  uVar1 = _UNK_00105658;
  uVar10 = __LC1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
      (iVar8 = **(int **)(param_1 + 0x18), iVar8 != 0x10000)) && (0x303 < iVar8)) {
    *param_2 = __LC1;
    param_2[1] = uVar1;
    param_2[2] = uVar10;
    param_2[3] = uVar1;
    param_2[4] = uVar10;
    param_2[5] = uVar1;
    param_2[6] = uVar10;
    param_2[7] = uVar1;
    uVar7 = servercontext_22._32_2_;
    uVar6 = servercontext_22._24_8_;
    uVar5 = servercontext_22._16_8_;
    uVar4 = servercontext_22._8_8_;
    uVar3 = clientcontext_21._24_8_;
    uVar2 = clientcontext_21._16_8_;
    uVar1 = clientcontext_21._8_8_;
    uVar10 = clientcontext_21._0_8_;
    if (*(int *)(param_1 + 0xac) - 0x2bU < 2) {
      param_2[8] = servercontext_22._0_8_;
      param_2[9] = uVar4;
      *(undefined2 *)(param_2 + 0xc) = uVar7;
      param_2[10] = uVar5;
      param_2[0xb] = uVar6;
    }
    else {
      *(undefined2 *)(param_2 + 0xc) = clientcontext_21._32_2_;
      param_2[8] = uVar10;
      param_2[9] = uVar1;
      param_2[10] = uVar2;
      param_2[0xb] = uVar3;
    }
    if ((*(int *)(param_1 + 0xac) == 0x2b) || (*(int *)(param_1 + 0xac) == 0x21)) {
      memcpy((void *)((long)param_2 + 0x62),(void *)(param_1 + 0x888),*(size_t *)(param_1 + 0x8c8));
      local_38 = *(long *)(param_1 + 0x8c8);
    }
    else {
      iVar8 = ssl_handshake_hash(param_1,(void *)((long)param_2 + 0x62),0x40,&local_38);
      if (iVar8 == 0) goto LAB_0010034b;
    }
    *param_3 = param_2;
    *param_4 = local_38 + 0x62;
  }
  else {
    lVar9 = BIO_ctrl(*(BIO **)(param_1 + 0x1a8),3,0,param_3);
    if (lVar9 < 1) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x12e,"get_cert_verify_tbs_data");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_0010034b:
      uVar10 = 0;
      goto LAB_0010025a;
    }
    *param_4 = lVar9;
  }
  uVar10 = 1;
LAB_0010025a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_statem_set_mutator(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    if ((*param_1 & 0x80) != 0) {
      param_1 = (uint *)ossl_quic_obj_get0_handshake_layer();
      if (param_1 != (uint *)0x0) goto LAB_001003dd;
    }
    return 0;
  }
LAB_001003dd:
  *(undefined8 *)(param_1 + 0x34) = param_2;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x36) = param_3;
  return 1;
}



undefined8 ssl3_do_write(long param_1,char param_2)

{
  int iVar1;
  undefined4 extraout_var;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long local_48;
  void *local_40;
  ulong local_38;
  long local_30;
  
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0xf8);
  uVar4 = *(ulong *)(param_1 + 0x108);
  local_48 = 0;
  if (((*(code **)(param_1 + 0xd0) == (code *)0x0) || ((*(byte *)(param_1 + 0xe8) & 1) != 0)) ||
     (param_2 != '\x16')) {
    iVar1 = ssl3_write_bytes(param_1,param_2,*(long *)(param_1 + 0x110) + *(long *)(lVar2 + 8),uVar4
                             ,&local_48);
    if (0 < iVar1) {
      if (param_2 == '\x16') goto LAB_001005c6;
      lVar2 = *(long *)(param_1 + 0x108);
      if (lVar2 == local_48) {
LAB_00100658:
        *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) & 0xfe;
        if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
          (**(code **)(param_1 + 0x4f8))
                    (1,*(undefined4 *)(param_1 + 0x48),param_2,
                     *(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),
                     lVar2 + *(long *)(param_1 + 0x110),uVar3,*(undefined8 *)(param_1 + 0x500));
        }
        uVar3 = 1;
        goto LAB_001004d4;
      }
LAB_001004c1:
      *(long *)(param_1 + 0x110) = *(long *)(param_1 + 0x110) + local_48;
      uVar3 = 0;
      *(long *)(param_1 + 0x108) = lVar2 - local_48;
      goto LAB_001004d4;
    }
  }
  else {
    if (3 < uVar4) {
      iVar1 = (**(code **)(param_1 + 0xd0))
                        (*(long *)(lVar2 + 8),uVar4,&local_40,&local_38,
                         *(undefined8 *)(param_1 + 0xe0));
      if (((iVar1 == 0) || (local_38 < 4)) ||
         (iVar1 = BUF_MEM_grow(*(BUF_MEM **)(param_1 + 0xf8),local_38),
         CONCAT44(extraout_var,iVar1) == 0)) goto LAB_00100648;
      memcpy(*(void **)(*(long *)(param_1 + 0xf8) + 8),local_40,local_38);
      *(ulong *)(param_1 + 0x108) = local_38;
      *(long *)(param_1 + 0x100) = *(long *)(*(long *)(param_1 + 0xf8) + 8) + 4;
      (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xe0));
      *(byte *)(param_1 + 0xe8) = *(byte *)(param_1 + 0xe8) | 1;
      uVar4 = *(ulong *)(param_1 + 0x108);
      lVar2 = *(long *)(param_1 + 0xf8);
    }
    iVar1 = ssl3_write_bytes(param_1,0x16,*(long *)(param_1 + 0x110) + *(long *)(lVar2 + 8),uVar4,
                             &local_48);
    if (0 < iVar1) {
LAB_001005c6:
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
           (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0x10000)) &&
          ((0x303 < iVar1 &&
           ((*(int *)(param_1 + 0xac) - 0x2eU < 2 || (*(int *)(param_1 + 0xac) == 0x25)))))) ||
         (iVar1 = ssl3_finish_mac(param_1,*(long *)(param_1 + 0x110) +
                                          *(long *)(*(long *)(param_1 + 0xf8) + 8),local_48),
         iVar1 != 0)) {
        lVar2 = *(long *)(param_1 + 0x108);
        param_2 = '\x16';
        if (lVar2 == local_48) goto LAB_00100658;
        goto LAB_001004c1;
      }
    }
  }
LAB_00100648:
  uVar3 = 0xffffffff;
LAB_001004d4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 tls_close_construct_packet(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0x101) {
LAB_001006e4:
    iVar1 = WPACKET_get_length(param_2,&local_28);
    if ((iVar1 != 0) && (local_28 < 0x80000000)) {
      *(ulong *)(param_1 + 0x108) = local_28;
      uVar2 = 1;
      *(undefined8 *)(param_1 + 0x110) = 0;
      goto LAB_00100722;
    }
  }
  else {
    iVar1 = WPACKET_close(param_2);
    if (iVar1 != 0) goto LAB_001006e4;
  }
  uVar2 = 0;
LAB_00100722:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 tls_construct_cert_verify(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  EVP_MD_CTX *ctx;
  long lVar6;
  uchar *sigret;
  undefined8 uVar7;
  long in_FS_OFFSET;
  long local_110;
  undefined8 local_108;
  undefined8 local_100;
  size_t local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [168];
  long local_40;
  
  lVar1 = *(long *)(param_1 + 0x3d0);
  puVar2 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  if ((lVar1 == 0) || (*(long *)(param_1 + 0x3d8) == 0)) {
    ERR_new();
    uVar7 = 0x145;
LAB_001007e8:
    ERR_set_debug("ssl/statem/statem_lib.c",uVar7,"tls_construct_cert_verify");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_0010080d:
    sigret = (uchar *)0x0;
    ctx = (EVP_MD_CTX *)0x0;
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x3d8) + 8);
    if ((lVar3 == 0) || (iVar5 = tls1_lookup_md(puVar2,lVar1,&local_110), iVar5 == 0)) {
      ERR_new();
      uVar7 = 0x14b;
      goto LAB_001007e8;
    }
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x151,"tls_construct_cert_verify");
      ossl_statem_fatal(param_1,0x50,0x80006,0);
      goto LAB_0010080d;
    }
    iVar5 = get_cert_verify_tbs_data_constprop_0(param_1,local_e8,&local_f0,&local_100);
    if (iVar5 == 0) {
LAB_00100a17:
      sigret = (uchar *)0x0;
    }
    else {
      if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) != 0) &&
         (iVar5 = WPACKET_put_bytes__(param_2,*(undefined2 *)(lVar1 + 0x10),2), iVar5 == 0)) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_lib.c",0x15c,"tls_construct_cert_verify");
        uVar7 = 0xc0103;
LAB_00100aa8:
        ossl_statem_fatal(param_1,0x50,uVar7,0);
        goto LAB_00100a17;
      }
      uVar7 = puVar2[0x8e];
      uVar4 = *puVar2;
      lVar6 = local_110;
      if (local_110 != 0) {
        lVar6 = EVP_MD_get0_name(local_110);
      }
      iVar5 = EVP_DigestSignInit_ex(ctx,&local_108,lVar6,uVar4,uVar7,lVar3);
      if (iVar5 < 1) {
        ERR_new();
        uVar7 = 0x164;
LAB_00100ba9:
        ERR_set_debug("ssl/statem/statem_lib.c",uVar7,"tls_construct_cert_verify");
        uVar7 = 0x80006;
        goto LAB_00100aa8;
      }
      if ((*(int *)(lVar1 + 0x1c) == 0x390) &&
         ((iVar5 = EVP_PKEY_CTX_set_rsa_padding(local_108,6), iVar5 < 1 ||
          (iVar5 = EVP_PKEY_CTX_set_rsa_pss_saltlen(local_108,0xffffffff), iVar5 < 1)))) {
        ERR_new();
        uVar7 = 0x16c;
        goto LAB_00100ba9;
      }
      uVar7 = local_100;
      if (*(int *)(param_1 + 0x48) == 0x300) {
        iVar5 = EVP_DigestSignUpdate(ctx,local_f0,local_100);
        if ((0 < iVar5) &&
           (iVar5 = EVP_MD_CTX_ctrl(ctx,0x1d,*(undefined4 *)(*(long *)(param_1 + 0x900) + 8),
                                    *(long *)(param_1 + 0x900) + 0x50), 0 < iVar5)) {
          iVar5 = EVP_DigestSignFinal(ctx,(uchar *)0x0,&local_f8);
          if (0 < iVar5) {
            sigret = (uchar *)CRYPTO_malloc((int)local_f8,"ssl/statem/statem_lib.c",0x17e);
            if ((sigret == (uchar *)0x0) ||
               (iVar5 = EVP_DigestSignFinal(ctx,sigret,&local_f8), iVar5 < 1)) {
              ERR_new();
              uVar7 = 0x181;
              goto LAB_00100ad1;
            }
            goto LAB_0010097c;
          }
        }
        ERR_new();
        uVar7 = 0x17b;
        goto LAB_00100ba9;
      }
      iVar5 = EVP_DigestSign(ctx,0);
      if (iVar5 < 1) {
        ERR_new();
        uVar7 = 0x18a;
        goto LAB_00100ba9;
      }
      sigret = (uchar *)CRYPTO_malloc((int)local_f8,"ssl/statem/statem_lib.c",0x18d);
      if ((sigret == (uchar *)0x0) ||
         (iVar5 = EVP_DigestSign(ctx,sigret,&local_f8,local_f0,uVar7), iVar5 < 1)) {
        ERR_new();
        uVar7 = 400;
LAB_00100ad1:
        ERR_set_debug("ssl/statem/statem_lib.c",uVar7,"tls_construct_cert_verify");
        ossl_statem_fatal(param_1,0x50,0x80006,0);
      }
      else {
LAB_0010097c:
        if ((*(int *)(lVar1 + 0x1c) - 0x3d3U < 2) || (*(int *)(lVar1 + 0x1c) == 0x32b)) {
          BUF_reverse(sigret,(uchar *)0x0,local_f8);
        }
        iVar5 = WPACKET_sub_memcpy__(param_2,sigret,local_f8,2);
        if (iVar5 == 0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_lib.c",0x1a1,"tls_construct_cert_verify");
          ossl_statem_fatal(param_1,0x50,0xc0103,0);
        }
        else {
          iVar5 = ssl3_digest_cached_records(param_1,0);
          if (iVar5 != 0) {
            CRYPTO_free(sigret);
            EVP_MD_CTX_free(ctx);
            uVar7 = 1;
            goto LAB_0010082c;
          }
        }
      }
    }
  }
  CRYPTO_free(sigret);
  EVP_MD_CTX_free(ctx);
  uVar7 = 0;
LAB_0010082c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8 tls_construct_finished(long param_1,undefined8 param_2)

{
  void *__src;
  uint uVar1;
  int iVar2;
  ulong __n;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
  uVar1 = *(uint *)(lVar3 + 0x50);
  if (*(int *)(param_1 + 0x78) == 0) {
    if (*(int *)(param_1 + 0xba8) != 4) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
    }
    if ((((((uVar1 & 8) == 0) && (iVar2 = **(int **)(param_1 + 0x18), iVar2 != 0x10000)) &&
         (0x303 < iVar2)) &&
        ((*(int *)(param_1 + 0xf0) != 0 || ((*(byte *)(param_1 + 0x9b2) & 0x10) != 0)))) &&
       (*(int *)(param_1 + 0x340) == 0)) {
      iVar2 = (**(code **)(lVar3 + 0x10))(param_1,0x92);
      if (iVar2 == 0) {
        return 0;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
      if (*(int *)(param_1 + 0x78) != 0) goto LAB_00100e20;
    }
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar4 = *(undefined8 *)(lVar3 + 0x28);
  }
  else {
LAB_00100e20:
    uVar5 = *(undefined8 *)(lVar3 + 0x30);
    uVar4 = *(undefined8 *)(lVar3 + 0x38);
  }
  __src = (void *)(param_1 + 0x1e0);
  __n = (**(code **)(lVar3 + 0x18))(param_1,uVar5,uVar4,__src);
  if (__n != 0) {
    *(ulong *)(param_1 + 0x260) = __n;
    iVar2 = WPACKET_memcpy(param_2,__src,__n);
    if (iVar2 == 0) {
      ERR_new();
      uVar5 = 0x291;
    }
    else {
      if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
           (iVar2 = **(int **)(param_1 + 0x18), iVar2 == 0x10000)) || (iVar2 < 0x304)) &&
         (iVar2 = ssl_log_secret(param_1,"CLIENT_RANDOM",*(long *)(param_1 + 0x900) + 0x50,
                                 *(undefined8 *)(*(long *)(param_1 + 0x900) + 8)), iVar2 == 0)) {
        return 0;
      }
      if (__n < 0x41) {
        if (*(int *)(param_1 + 0x78) == 0) {
          memcpy((void *)(param_1 + 0x420),__src,__n);
          *(ulong *)(param_1 + 0x460) = __n;
        }
        else {
          memcpy((void *)(param_1 + 0x468),__src,__n);
          *(ulong *)(param_1 + 0x4a8) = __n;
        }
        return 1;
      }
      ERR_new();
      uVar5 = 0x2a4;
    }
    ERR_set_debug("ssl/statem/statem_lib.c",uVar5,"tls_construct_finished");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
  }
  return 0;
}



undefined8 tls_construct_key_update(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = WPACKET_put_bytes__(param_2,(long)*(int *)(param_1 + 0xba4),1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0xba4) = 0xffffffff;
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/statem/statem_lib.c",0x2b7,"tls_construct_key_update");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



bool tls_process_key_update(long param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = RECORD_LAYER_processed_read_pending(param_1 + 0xc58);
  if (iVar2 == 0) {
    if (param_2[1] != 0) {
      bVar1 = *(byte *)*param_2;
      lVar3 = param_2[1] + -1;
      *param_2 = (byte *)*param_2 + 1;
      param_2[1] = lVar3;
      if (lVar3 == 0) {
        if (1 < bVar1) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_lib.c",0x2d8,"tls_process_key_update");
          ossl_statem_fatal(param_1,0x2f,0x7a,0);
          return false;
        }
        if (bVar1 == 1) {
          *(undefined4 *)(param_1 + 0xba4) = 0;
        }
        iVar2 = tls13_update_key(param_1,0);
        return iVar2 != 0;
      }
    }
    ERR_new();
    ERR_set_debug("ssl/statem/statem_lib.c",0x2ce,"tls_process_key_update");
    ossl_statem_fatal(param_1,0x32,0x7a,0);
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_lib.c",0x2c8,"tls_process_key_update");
    ossl_statem_fatal(param_1,10,0xb6,0);
  }
  return false;
}



bool ssl3_take_mac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
  }
  lVar1 = (**(code **)(lVar1 + 0x18))(param_1,uVar3,uVar2,param_1 + 0x268);
  *(long *)(param_1 + 0x2e8) = lVar1;
  return lVar1 != 0;
}



undefined8 tls_process_change_cipher_spec(long param_1,long param_2)

{
  short *psVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(param_2 + 8);
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
    if (lVar2 == 0) goto LAB_00101103;
    ERR_new();
    uVar4 = 799;
LAB_0010119b:
    ERR_set_debug("ssl/statem/statem_lib.c",uVar4,"tls_process_change_cipher_spec");
    ossl_statem_fatal(param_1,0x32,0x67,0);
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0x100) {
      if (lVar2 != 2) goto LAB_0010118a;
    }
    else if (lVar2 != 0) {
LAB_0010118a:
      ERR_new();
      uVar4 = 0x31a;
      goto LAB_0010119b;
    }
LAB_00101103:
    if (*(long *)(param_1 + 0x300) == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x326,"tls_process_change_cipher_spec");
      ossl_statem_fatal(param_1,10,0x85,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x1b8) = 1;
      iVar3 = ssl3_do_change_cipher_spec(param_1);
      if (iVar3 != 0) {
        if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) &&
           (*(int *)(param_1 + 0x48) == 0x100)) {
          psVar1 = (short *)(*(long *)(param_1 + 0x4f0) + 0x110);
          *psVar1 = *psVar1 + 1;
        }
        return 3;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x32c,"tls_process_change_cipher_spec");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
  }
  return 0;
}



undefined8 tls_construct_change_cipher_spec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = WPACKET_put_bytes__(param_2,1,1);
  if (iVar1 != 0) {
    return 1;
  }
  ERR_new();
  ERR_set_debug("ssl/statem/statem_lib.c",0x3bf,"tls_construct_change_cipher_spec");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



void tls_get_peer_pkey(long param_1)

{
  long lVar1;
  
  if ((*(long *)(*(long *)(param_1 + 0x900) + 0x2b8) == 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x900) + 0x2c0), lVar1 != 0)) {
    X509_get0_pubkey(lVar1);
    return;
  }
  return;
}



char tls_process_cert_verify(long param_1,long *param_2)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  EVP_MD_CTX *ctx;
  long lVar5;
  long lVar6;
  ulong uVar7;
  uchar *out;
  undefined8 uVar8;
  uint num;
  char cVar9;
  ulong siz;
  long in_FS_OFFSET;
  uchar *local_118;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [168];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_108 = 0;
  local_100 = 0;
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  puVar2 = *(undefined8 **)(param_1 + 8);
  local_f0 = 0;
  if (ctx == (EVP_MD_CTX *)0x0) {
    ERR_new();
    uVar8 = 0x1c7;
LAB_001016c1:
    ERR_set_debug("ssl/statem/statem_lib.c",uVar8,"tls_process_cert_verify");
    ossl_statem_fatal(param_1,0x50,0x80006,0);
  }
  else {
    lVar5 = tls_get_peer_pkey(param_1);
    if (lVar5 == 0) {
      ERR_new();
      uVar8 = 0x1cd;
LAB_00101701:
      ERR_set_debug("ssl/statem/statem_lib.c",uVar8,"tls_process_cert_verify");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
    else {
      lVar6 = ssl_cert_lookup_by_pkey(lVar5,0,puVar2);
      if (lVar6 == 0) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_lib.c",0x1d2,"tls_process_cert_verify");
        ossl_statem_fatal(param_1,0x2f,0xdc,0);
      }
      else if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) == 0) {
        iVar4 = tls1_set_peer_legacy_sigalg(param_1,lVar5);
        if (iVar4 == 0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_lib.c",0x1e3,"tls_process_cert_verify");
          ossl_statem_fatal(param_1,0x50,0x14d,0);
        }
        else {
LAB_001013cc:
          iVar4 = tls1_lookup_md(puVar2,*(undefined8 *)(param_1 + 0x400),&local_108);
          if (iVar4 == 0) {
            ERR_new();
            uVar8 = 0x1e9;
            goto LAB_00101701;
          }
          uVar7 = param_2[1];
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 2) == 0) {
            if (uVar7 != 0x40) {
LAB_001015ea:
              if (uVar7 == 0x80) {
                iVar4 = EVP_PKEY_get_id(lVar5);
                if (iVar4 == 0x3d4) goto LAB_00101870;
                uVar7 = param_2[1];
              }
              goto LAB_00101401;
            }
            iVar4 = EVP_PKEY_get_id(lVar5);
            if ((iVar4 != 0x32b) && (iVar4 = EVP_PKEY_get_id(lVar5), iVar4 != 0x3d3)) {
              uVar7 = param_2[1];
              goto LAB_001015ea;
            }
LAB_00101870:
            uVar7 = param_2[1];
            num = (uint)uVar7;
LAB_0010142c:
            siz = (ulong)num;
            if (uVar7 < siz) {
              ERR_new();
              uVar8 = 0x206;
            }
            else {
              local_118 = (uchar *)*param_2;
              param_2[1] = uVar7 - siz;
              *param_2 = (long)(local_118 + siz);
              if (uVar7 - siz == 0) {
                iVar4 = get_cert_verify_tbs_data_constprop_0(param_1,local_e8,&local_f8,&local_100);
                if (iVar4 == 0) goto LAB_0010164e;
                uVar8 = puVar2[0x8e];
                uVar3 = *puVar2;
                lVar6 = local_108;
                if (local_108 != 0) {
                  lVar6 = EVP_MD_get0_name(local_108);
                }
                iVar4 = EVP_DigestVerifyInit_ex(ctx,&local_f0,lVar6,uVar3,uVar8,lVar5);
                if (iVar4 < 1) {
                  ERR_new();
                  uVar8 = 0x21a;
                  goto LAB_001016c1;
                }
                iVar4 = EVP_PKEY_get_id(lVar5);
                if ((iVar4 - 0x3d3U < 2) || (out = (uchar *)0x0, iVar4 == 0x32b)) {
                  out = (uchar *)CRYPTO_malloc(num,"ssl/statem/statem_lib.c",0x223);
                  if (out == (uchar *)0x0) goto LAB_0010164e;
                  BUF_reverse(out,local_118,siz);
                  local_118 = out;
                }
                if (((*(long *)(param_1 + 0x400) == 0) ||
                    (*(int *)(*(long *)(param_1 + 0x400) + 0x1c) != 0x390)) ||
                   ((iVar4 = EVP_PKEY_CTX_set_rsa_padding(local_f0,6), 0 < iVar4 &&
                    (iVar4 = EVP_PKEY_CTX_set_rsa_pss_saltlen(local_f0,0xffffffff), 0 < iVar4)))) {
                  if (*(int *)(param_1 + 0x48) == 0x300) {
                    iVar4 = EVP_DigestVerifyUpdate(ctx,local_f8,local_100);
                    if ((iVar4 < 1) ||
                       (iVar4 = EVP_MD_CTX_ctrl(ctx,0x1d,*(undefined4 *)
                                                          (*(long *)(param_1 + 0x900) + 8),
                                                *(long *)(param_1 + 0x900) + 0x50), iVar4 < 1)) {
                      ERR_new();
                      uVar8 = 0x238;
                      goto LAB_00101950;
                    }
                    iVar4 = EVP_DigestVerifyFinal(ctx,local_118,siz);
                    if (0 < iVar4) goto LAB_00101533;
                    ERR_new();
                    uVar8 = 0x23c;
                  }
                  else {
                    iVar4 = EVP_DigestVerify(ctx,local_118,siz);
                    if (0 < iVar4) {
LAB_00101533:
                      cVar9 = '\x03';
                      if ((*(int *)(param_1 + 0x78) == 0) &&
                         ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0))
                      {
                        iVar4 = **(int **)(param_1 + 0x18);
                        if ((iVar4 < 0x304) || (iVar4 == 0x10000)) {
                          cVar9 = '\x03';
                        }
                        else {
                          cVar9 = (*(int *)(param_1 + 0x340) != 1) + '\x02';
                        }
                      }
                      goto LAB_00101654;
                    }
                    ERR_new();
                    uVar8 = 0x247;
                  }
                  ERR_set_debug("ssl/statem/statem_lib.c",uVar8,"tls_process_cert_verify");
                  ossl_statem_fatal(param_1,0x33,0x7b,0);
                }
                else {
                  ERR_new();
                  uVar8 = 0x22f;
LAB_00101950:
                  ERR_set_debug("ssl/statem/statem_lib.c",uVar8,"tls_process_cert_verify");
                  ossl_statem_fatal(param_1,0x50,0x80006,0);
                }
                cVar9 = '\0';
                goto LAB_00101654;
              }
              ERR_new();
              uVar8 = 0x20a;
            }
          }
          else {
LAB_00101401:
            if (1 < uVar7) {
              uVar7 = uVar7 - 2;
              uVar1 = *(ushort *)*param_2;
              param_2[1] = uVar7;
              *param_2 = (long)((ushort *)*param_2 + 1);
              num = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
              goto LAB_0010142c;
            }
            ERR_new();
            uVar8 = 0x201;
          }
          ERR_set_debug("ssl/statem/statem_lib.c",uVar8,"tls_process_cert_verify");
          ossl_statem_fatal(param_1,0x32,0x9f,0);
        }
      }
      else if ((ulong)param_2[1] < 2) {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_lib.c",0x1db,"tls_process_cert_verify");
        ossl_statem_fatal(param_1,0x32,0xf0,0);
      }
      else {
        uVar1 = *(ushort *)*param_2;
        param_2[1] = param_2[1] - 2;
        *param_2 = (long)((ushort *)*param_2 + 1);
        iVar4 = tls12_check_peer_sigalg(param_1,uVar1 << 8 | uVar1 >> 8,lVar5);
        if (0 < iVar4) goto LAB_001013cc;
      }
    }
  }
LAB_0010164e:
  cVar9 = '\0';
  out = (uchar *)0x0;
LAB_00101654:
  BIO_free(*(BIO **)(param_1 + 0x1a8));
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  EVP_MD_CTX_free(ctx);
  CRYPTO_free(out);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return cVar9;
}



undefined8 tls_process_rpk(long param_1,long *param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  EVP_PKEY *pkey;
  ulong uVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  void *local_68;
  byte *local_60;
  ushort *local_58;
  ulong local_50;
  long local_40;
  
  puVar5 = *(undefined8 **)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = param_2[1];
  local_68 = (void *)0x0;
  if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
      (iVar8 = **(int **)(param_1 + 0x18), iVar8 < 0x304)) || (iVar8 == 0x10000)) goto LAB_00101a48;
  if (uVar9 == 0) {
LAB_00101ca0:
    ERR_new();
    uVar11 = 0x4ae;
LAB_00101cb1:
    ERR_set_debug("ssl/statem/statem_lib.c",uVar11,"tls_process_rpk");
    ossl_statem_fatal(param_1,0x32,0x11a,0);
LAB_00101ab9:
    uVar11 = 0;
    pkey = (EVP_PKEY *)0x0;
  }
  else {
    uVar10 = (ulong)*(byte *)*param_2;
    if (uVar9 - 1 < uVar10) goto LAB_00101ca0;
    pbVar12 = (byte *)*param_2 + 1;
    uVar9 = (uVar9 - 1) - uVar10;
    param_2[1] = uVar9;
    *param_2 = (long)(pbVar12 + uVar10);
    if (*(int *)(param_1 + 0x78) == 0) {
      if (uVar10 == 0) goto LAB_00101a48;
      ERR_new();
      uVar11 = 0x4bf;
      goto LAB_00101cb1;
    }
    if (*(void **)(param_1 + 0xbb0) != (void *)0x0) {
      if ((*(ulong *)(param_1 + 3000) != uVar10) ||
         (iVar8 = CRYPTO_memcmp(pbVar12,*(void **)(param_1 + 0xbb0),uVar10), iVar8 != 0)) {
        ERR_new();
        uVar11 = 0x4b9;
        goto LAB_00101cb1;
      }
      uVar9 = param_2[1];
LAB_00101a48:
      if (uVar9 < 3) {
LAB_00101a83:
        ERR_new();
        uVar11 = 0x4c7;
LAB_00101a94:
        ERR_set_debug("ssl/statem/statem_lib.c",uVar11,"tls_process_rpk");
        ossl_statem_fatal(param_1,0x32,0x9f,0);
      }
      else {
        pbVar6 = (byte *)*param_2;
        bVar1 = *pbVar6;
        bVar2 = pbVar6[1];
        pbVar12 = pbVar6 + 3;
        bVar3 = pbVar6[2];
        *param_2 = (long)pbVar12;
        uVar14 = (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8 | (ulong)bVar3;
        uVar10 = uVar9 - 3;
        param_2[1] = uVar10;
        if (uVar14 != uVar10) goto LAB_00101a83;
        uVar11 = 1;
        if (uVar14 == 0) goto LAB_00101ad9;
        uVar13 = uVar14;
        if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
            (iVar8 = **(int **)(param_1 + 0x18), iVar8 == 0x10000)) || (iVar8 < 0x304)) {
LAB_00101c13:
          uVar11 = *puVar5;
          param_2[1] = uVar10 - uVar13;
          uVar7 = puVar5[0x8e];
          *param_2 = (long)(pbVar12 + uVar13);
          local_60 = pbVar12;
          pkey = (EVP_PKEY *)d2i_PUBKEY_ex(0,&local_60,uVar13,uVar11,uVar7);
          if ((pkey == (EVP_PKEY *)0x0) || (local_60 != pbVar12 + uVar13)) {
            ERR_new();
            uVar11 = 0x4ef;
LAB_00101c70:
            ERR_set_debug("ssl/statem/statem_lib.c",uVar11,"tls_process_rpk");
            ossl_statem_fatal(param_1,0x32,0x9f,0);
          }
          else {
            iVar8 = EVP_PKEY_missing_parameters(pkey);
            if (iVar8 == 0) {
              if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
                  (iVar8 = **(int **)(param_1 + 0x18), iVar8 < 0x304)) || (iVar8 == 0x10000)) {
LAB_00101e00:
                uVar11 = 1;
                if (param_3 != (undefined8 *)0x0) {
                  *param_3 = pkey;
                  uVar11 = 1;
                  pkey = (EVP_PKEY *)0x0;
                }
                goto LAB_00101abf;
              }
              uVar13 = (uVar14 - 3) - uVar13;
              if (uVar13 == param_2[1]) {
                if ((uVar13 < 2) ||
                   (uVar4 = *(ushort *)*param_2, uVar13 = uVar13 - 2,
                   uVar13 != (ushort)(uVar4 << 8 | uVar4 >> 8))) {
                  ERR_new();
                  uVar11 = 0x500;
                  goto LAB_00101c70;
                }
                local_58 = (ushort *)*param_2 + 1;
                *param_2 = (long)local_58 + uVar13;
                param_2[1] = 0;
                local_50 = uVar13;
                iVar8 = tls_collect_extensions(param_1,&local_58,0x10000,&local_68,0,1);
                if ((iVar8 != 0) &&
                   (iVar8 = tls_parse_all_extensions(param_1,0x10000,local_68,0,0,1), iVar8 != 0))
                goto LAB_00101e00;
              }
              else {
                ERR_new();
                ERR_set_debug("ssl/statem/statem_lib.c",0x4fb,"tls_process_rpk");
                ossl_statem_fatal(param_1,0x32,0x10f,0);
              }
            }
            else {
              ERR_new();
              ERR_set_debug("ssl/statem/statem_lib.c",0x4f3,"tls_process_rpk");
              ossl_statem_fatal(param_1,0x50,0xef,0);
            }
          }
          uVar11 = 0;
          goto LAB_00101abf;
        }
        if (uVar14 < 3) {
          ERR_new();
          uVar11 = 0x4dc;
          goto LAB_00101a94;
        }
        bVar1 = pbVar6[3];
        bVar2 = pbVar6[4];
        pbVar12 = pbVar6 + 6;
        bVar3 = pbVar6[5];
        *param_2 = (long)pbVar12;
        uVar10 = uVar9 - 6;
        param_2[1] = uVar10;
        uVar13 = (ulong)bVar3 | (ulong)bVar1 << 0x10 | (ulong)bVar2 << 8;
        if (uVar13 != 0) {
          if (uVar13 <= uVar10) goto LAB_00101c13;
          ERR_new();
          uVar11 = 0x4e9;
          goto LAB_00101a94;
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_lib.c",0x4e1,"tls_process_rpk");
        ossl_statem_fatal(param_1,0x32,0x15d,0);
      }
      goto LAB_00101ab9;
    }
    if (uVar10 == 0) goto LAB_00101a48;
    ERR_new();
    uVar11 = 0;
    ERR_set_debug("ssl/statem/statem_lib.c",0x4b4,"tls_process_rpk");
    ossl_statem_fatal(param_1,0x32,0x11a,0);
    pkey = (EVP_PKEY *)0x0;
  }
LAB_00101abf:
  CRYPTO_free(local_68);
  EVP_PKEY_free(pkey);
LAB_00101ad9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}



undefined8 tls_output_rpk(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  X509_PUBKEY *a;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  if (param_3 == (long *)0x0) {
LAB_001020b0:
    if (*(int *)(param_1 + 0x78) == 0) {
      iVar2 = WPACKET_sub_memcpy__(param_2,0,0,3);
      uVar4 = 1;
      if (iVar2 != 0) goto LAB_0010206e;
      ERR_new();
      uVar4 = 0x537;
    }
    else {
      ERR_new();
      uVar4 = 0x532;
    }
LAB_001020e9:
    ERR_set_debug("ssl/statem/statem_lib.c",uVar4,"tls_output_rpk");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_00102107:
    uVar4 = 0;
  }
  else {
    lVar1 = *param_3;
    if (lVar1 == 0) {
      if ((EVP_PKEY *)param_3[1] == (EVP_PKEY *)0x0) goto LAB_001020b0;
      iVar2 = i2d_PUBKEY((EVP_PKEY *)param_3[1],&local_38);
    }
    else {
      a = (X509_PUBKEY *)X509_get_X509_PUBKEY(lVar1);
      if (a == (X509_PUBKEY *)0x0) {
        ERR_new();
        uVar4 = 0x528;
        goto LAB_001020e9;
      }
      iVar2 = i2d_X509_PUBKEY(a,&local_38);
    }
    if (iVar2 < 1) {
      ERR_new();
      uVar4 = 0x53e;
      goto LAB_001020e9;
    }
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
         (iVar3 = **(int **)(param_1 + 0x18), 0x303 < iVar3)) && (iVar3 != 0x10000)) &&
       (iVar3 = WPACKET_start_sub_packet_len__(param_2,3), iVar3 == 0)) {
      ERR_new();
      uVar4 = 0x548;
      goto LAB_001020e9;
    }
    iVar2 = WPACKET_sub_memcpy__(param_2,local_38,(long)iVar2,3);
    if (iVar2 == 0) {
      ERR_new();
      uVar4 = 0x54e;
      goto LAB_001020e9;
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar2 = **(int **)(param_1 + 0x18), iVar2 != 0x10000)) && (0x303 < iVar2)) {
      iVar2 = tls_construct_extensions(param_1,param_2,0x10000,lVar1,0);
      if (iVar2 != 0) {
        iVar2 = WPACKET_close(param_2);
        if (iVar2 == 0) {
          ERR_new();
          uVar4 = 0x55e;
          goto LAB_001020e9;
        }
        goto LAB_00102051;
      }
      goto LAB_00102107;
    }
LAB_00102051:
    uVar4 = 1;
  }
  CRYPTO_free(local_38);
LAB_0010206e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



undefined8 ssl3_output_cert_chain(long param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  X509 *x509;
  int iVar2;
  int iVar3;
  int iVar4;
  X509_STORE_CTX *ctx;
  undefined8 uVar5;
  undefined8 uVar6;
  X509_STORE *store;
  
  iVar2 = WPACKET_start_sub_packet_len__(param_2,3);
  if (iVar2 == 0) {
    if (param_4 != 0) {
      return 0;
    }
    ERR_new();
    uVar6 = 0x56e;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if ((param_3 != (undefined8 *)0x0) && (x509 = (X509 *)*param_3, x509 != (X509 *)0x0)) {
      store = (X509_STORE *)param_3[2];
      if (((store == (X509_STORE *)0x0) &&
          ((store = (X509_STORE *)puVar1[0x22], (*(byte *)(param_1 + 0x9b8) & 8) == 0 &&
           (store == (X509_STORE *)0x0)))) &&
         ((store = *(X509_STORE **)(*(long *)(param_1 + 0x880) + 0x70), store != (X509_STORE *)0x0
          || (store = (X509_STORE *)puVar1[5], store != (X509_STORE *)0x0)))) {
        ctx = (X509_STORE_CTX *)X509_STORE_CTX_new_ex(*puVar1,puVar1[0x8e]);
        if (ctx == (X509_STORE_CTX *)0x0) {
          if (param_4 != 0) {
            return 0;
          }
          ERR_new();
          uVar6 = 0x40b;
LAB_00102482:
          ERR_set_debug("ssl/statem/statem_lib.c",uVar6,"ssl_add_cert_chain");
          ossl_statem_fatal(param_1,0x50,0x8000b,0);
          return 0;
        }
        iVar2 = X509_STORE_CTX_init(ctx,store,x509,(stack_st_X509 *)0x0);
        if (iVar2 == 0) {
          X509_STORE_CTX_free(ctx);
          if (param_4 != 0) {
            return 0;
          }
          ERR_new();
          uVar6 = 0x411;
          goto LAB_00102482;
        }
        X509_verify_cert(ctx);
        ERR_clear_error();
        uVar6 = X509_STORE_CTX_get0_chain(ctx);
        iVar2 = ssl_security_cert_chain(param_1,uVar6,0,0);
        if (iVar2 != 1) {
          X509_STORE_CTX_free(ctx);
          if (param_4 != 0) {
            return 0;
          }
          ERR_new();
          uVar6 = 0x428;
          goto LAB_00102285;
        }
        iVar2 = OPENSSL_sk_num(uVar6);
        if (0 < iVar2) {
          iVar3 = 0;
          do {
            uVar5 = OPENSSL_sk_value(uVar6,iVar3);
            iVar4 = ssl_add_cert_to_wpacket(param_1,param_2,uVar5,iVar3,param_4);
            if (iVar4 == 0) {
              X509_STORE_CTX_free(ctx);
              return 0;
            }
            iVar3 = iVar3 + 1;
          } while (iVar2 != iVar3);
        }
        X509_STORE_CTX_free(ctx);
      }
      else {
        iVar2 = ssl_security_cert_chain(param_1,store,x509,0);
        if (iVar2 != 1) {
          if (param_4 != 0) {
            return 0;
          }
          ERR_new();
          uVar6 = 0x43a;
LAB_00102285:
          ERR_set_debug("ssl/statem/statem_lib.c",uVar6,"ssl_add_cert_chain");
          ossl_statem_fatal(param_1,0x50,iVar2,0);
          return 0;
        }
        iVar3 = ssl_add_cert_to_wpacket(param_1,param_2,x509,0,param_4);
        iVar2 = 0;
        while( true ) {
          if (iVar3 == 0) {
            return 0;
          }
          iVar3 = OPENSSL_sk_num(store);
          if (iVar3 <= iVar2) break;
          uVar6 = OPENSSL_sk_value(store,iVar2);
          iVar3 = ssl_add_cert_to_wpacket(param_1,param_2,uVar6,iVar2 + 1,param_4);
          iVar2 = iVar2 + 1;
        }
      }
    }
    iVar2 = WPACKET_close(param_2);
    if (iVar2 != 0) {
      return 1;
    }
    if (param_4 != 0) {
      return 0;
    }
    ERR_new();
    uVar6 = 0x577;
  }
  ERR_set_debug("ssl/statem/statem_lib.c",uVar6,"ssl3_output_cert_chain");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}



undefined8 tls_finish_handshake(long param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  SSL_CTX *pSVar7;
  code *pcVar8;
  
  piVar6 = *(int **)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0xc0);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 8);
  if (param_3 != 0) {
    if ((*(uint *)(*(long *)(piVar6 + 0x36) + 0x50) & 8) == 0) {
      BUF_MEM_free(*(BUF_MEM **)(param_1 + 0xf8));
      *(undefined8 *)(param_1 + 0xf8) = 0;
      iVar5 = ssl_free_wbio_buffer(param_1);
    }
    else {
      iVar5 = ssl_free_wbio_buffer(param_1);
    }
    if (iVar5 == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x5a0,"tls_finish_handshake");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      return 0;
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    piVar6 = *(int **)(param_1 + 0x18);
  }
  if (((((*(byte *)(*(long *)(piVar6 + 0x36) + 0x50) & 8) == 0) && (0x303 < *piVar6)) &&
      (*piVar6 != 0x10000)) && ((*(int *)(param_1 + 0x78) == 0 && (*(int *)(param_1 + 0xba8) == 4)))
     ) {
    *(undefined4 *)(param_1 + 0xba8) = 1;
  }
  if (iVar1 == 0) {
    pcVar8 = *(code **)(param_1 + 0x960);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = *(code **)(lVar3 + 0x120);
      ossl_statem_set_in_init(param_1,0);
      if (pcVar8 == (code *)0x0) goto joined_r0x001026f1;
    }
    else {
      ossl_statem_set_in_init(param_1,0);
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0x10000)) &&
       ((0x303 < iVar1 && ((*(long *)(param_1 + 0x260) != 0 && (*(long *)(param_1 + 0x2e8) != 0)))))
       ) goto joined_r0x001026f1;
  }
  else {
    *(undefined4 *)(param_1 + 0xba0) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xa60) = 0;
    ssl3_cleanup_key_block(param_1);
    piVar6 = *(int **)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x78) == 0) {
      if ((((*(byte *)(*(long *)(piVar6 + 0x36) + 0x50) & 8) == 0) && (*piVar6 != 0x10000)) &&
         (0x303 < *piVar6)) {
        pSVar7 = *(SSL_CTX **)(param_1 + 0xb88);
        if (((ulong)pSVar7->new_session_cb & 1) != 0) {
          SSL_CTX_remove_session(pSVar7,*(SSL_SESSION **)(param_1 + 0x900));
          pSVar7 = *(SSL_CTX **)(param_1 + 0xb88);
        }
      }
      else {
        ssl_update_cache(param_1,1);
        pSVar7 = *(SSL_CTX **)(param_1 + 0xb88);
      }
      if (*(int *)(param_1 + 0x508) != 0) {
        LOCK();
        piVar6 = (int *)((long)&pSVar7->app_verify_callback + 4);
        *piVar6 = *piVar6 + 1;
        UNLOCK();
        pSVar7 = *(SSL_CTX **)(param_1 + 0xb88);
      }
      *(undefined **)(param_1 + 0x70) = &ossl_statem_connect;
      LOCK();
      piVar6 = &(pSVar7->stats).sess_miss;
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    else {
      if ((((*(byte *)(*(long *)(piVar6 + 0x36) + 0x50) & 8) != 0) || (*piVar6 == 0x10000)) ||
         (*piVar6 < 0x304)) {
        ssl_update_cache(param_1,2);
      }
      LOCK();
      *(int *)(lVar3 + 0x8c) = *(int *)(lVar3 + 0x8c) + 1;
      UNLOCK();
      *(undefined **)(param_1 + 0x70) = &ossl_statem_accept;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) != 0) {
      lVar4 = *(long *)(param_1 + 0x4f0);
      *(undefined2 *)(lVar4 + 0x110) = 0;
      *(undefined4 *)(lVar4 + 0x10c) = 0;
      dtls1_clear_received_buffer(param_1);
    }
    pcVar8 = *(code **)(param_1 + 0x960);
    if (pcVar8 == (code *)0x0) {
      pcVar8 = *(code **)(lVar3 + 0x120);
      ossl_statem_set_in_init(param_1,0);
      if (pcVar8 == (code *)0x0) goto joined_r0x001026f1;
    }
    else {
      ossl_statem_set_in_init(param_1,0);
    }
  }
  (*pcVar8)(uVar2,0x20,1);
joined_r0x001026f1:
  if (param_4 == 0) {
    ossl_statem_set_in_init(param_1,1);
    return 2;
  }
  return 1;
}



undefined8 tls_get_message_header(long param_1,uint *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  char local_39;
  long local_38;
  long local_30;
  
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar1 = *(byte **)(*(long *)(param_1 + 0xf8) + 8);
LAB_00102920:
  do {
    uVar2 = *(ulong *)(param_1 + 0x108);
    while (3 < uVar2) {
      uVar4 = (uint)*pbVar1;
      if ((((*(int *)(param_1 + 0x78) != 0) || (*(int *)(param_1 + 0xac) == 1)) || (*pbVar1 != 0))
         || (pbVar1[1] != 0)) {
LAB_00102a28:
        *param_2 = uVar4;
        *(uint *)(param_1 + 0x2f8) = (uint)*pbVar1;
        iVar5 = RECORD_LAYER_is_sslv2_record(param_1 + 0xc58);
        if (iVar5 == 0) {
          *(ulong *)(param_1 + 0x2f0) =
               (ulong)pbVar1[1] << 0x10 | (ulong)pbVar1[2] << 8 | (ulong)pbVar1[3];
          lVar3 = *(long *)(*(long *)(param_1 + 0xf8) + 8);
          *(undefined8 *)(param_1 + 0x108) = 0;
          *(long *)(param_1 + 0x100) = lVar3 + 4;
        }
        else {
          *(long *)(param_1 + 0x2f0) = *(long *)(param_1 + 0xd38) + 4;
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0xf8) + 8);
          *(undefined8 *)(param_1 + 0x108) = 4;
          *(undefined8 *)(param_1 + 0x100) = uVar6;
        }
        goto LAB_00102a87;
      }
      uVar4 = (uint)pbVar1[2];
      if (pbVar1[2] != 0) {
        uVar4 = 0;
        goto LAB_00102a28;
      }
      if (pbVar1[3] != 0) goto LAB_00102a28;
      *(undefined8 *)(param_1 + 0x108) = 0;
      if (*(code **)(param_1 + 0x4f8) == (code *)0x0) goto LAB_00102920;
      (**(code **)(param_1 + 0x4f8))
                (0,*(undefined4 *)(param_1 + 0x48),0x16,pbVar1,4,uVar6,
                 *(undefined8 *)(param_1 + 0x500));
      uVar2 = *(ulong *)(param_1 + 0x108);
    }
    iVar5 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                      (param_1,0x16,&local_39,pbVar1 + uVar2,4 - uVar2,0,&local_38);
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0x68) = 3;
LAB_00102aef:
      uVar6 = 0;
LAB_00102a8c:
      if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar6;
    }
    if (local_39 == '\x14') {
      if (((*(long *)(param_1 + 0x108) == 0) && (local_38 == 1)) && (*pbVar1 == 1)) {
        if ((*(int *)(param_1 + 0xac) == 0) && ((*(byte *)(param_1 + 0x161) & 8) != 0))
        goto LAB_00102aef;
        lVar3 = *(long *)(param_1 + 0xf8);
        *param_2 = 0x101;
        *(undefined4 *)(param_1 + 0x2f8) = 0x101;
        *(undefined8 *)(param_1 + 0x108) = 0;
        uVar6 = *(undefined8 *)(lVar3 + 8);
        *(undefined8 *)(param_1 + 0x2f0) = 1;
        *(undefined8 *)(param_1 + 0x100) = uVar6;
LAB_00102a87:
        uVar6 = 1;
      }
      else {
        ERR_new();
        ERR_set_debug("ssl/statem/statem_lib.c",0x618,"tls_get_message_header");
        ossl_statem_fatal(param_1,10,0x67,0);
        uVar6 = 0;
      }
      goto LAB_00102a8c;
    }
    if (local_39 != '\x16') {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x62d,"tls_get_message_header");
      ossl_statem_fatal(param_1,10,0x85,0);
      uVar6 = 0;
      goto LAB_00102a8c;
    }
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + local_38;
  } while( true );
}



undefined8 tls_get_message_body(long param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  uVar4 = 1;
  uVar5 = *(ulong *)(param_1 + 0x108);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_1 + 0x2f8) == 0x101) goto LAB_00102c91;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  lVar2 = *(long *)(param_1 + 0x100);
  for (lVar6 = *(long *)(param_1 + 0x2f0) - uVar5; lVar6 != 0; lVar6 = lVar6 - local_48) {
    iVar3 = (**(code **)(*(long *)(param_1 + 0x18) + 0x80))
                      (param_1,0x16,0,lVar2 + uVar5,lVar6,0,&local_48);
    if (iVar3 < 1) {
      *(undefined4 *)(param_1 + 0x68) = 3;
      goto LAB_00102c8c;
    }
    uVar5 = *(long *)(param_1 + 0x108) + local_48;
    *(ulong *)(param_1 + 0x108) = uVar5;
  }
  if ((**(char **)(*(long *)(param_1 + 0xf8) + 8) == '\x14') &&
     (iVar3 = ssl3_take_mac(param_1), iVar3 == 0)) {
LAB_00102c8c:
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    iVar3 = RECORD_LAYER_is_sslv2_record(param_1 + 0xc58);
    if (iVar3 == 0) {
      uVar5 = *(ulong *)(param_1 + 0x108);
      iVar3 = *(int *)(param_1 + 0x2f8);
      if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
            (iVar1 = **(int **)(param_1 + 0x18), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
          ((iVar3 != 4 && (iVar3 != 0x18)))) &&
         (((lVar2 = *(long *)(*(long *)(param_1 + 0xf8) + 8), iVar3 != 2 ||
           ((uVar5 < 0x26 ||
            (*(long *)(lVar2 + 6) != 0x11619ae574ad21cf ||
             *(long *)(lVar2 + 0xe) != -0x6e479ae1fd73e242)))) ||
          (*(long *)(lVar2 + 0x16) != 0x5e8cbb7a1611a2c2 ||
           *(long *)(lVar2 + 0x1e) != -0x63cc57371df661f9)))) {
        iVar3 = ssl3_finish_mac(param_1,lVar2,uVar5 + 4);
        if (iVar3 == 0) goto LAB_00102c8c;
        uVar5 = *(ulong *)(param_1 + 0x108);
      }
      if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
        (**(code **)(param_1 + 0x4f8))
                  (0,*(undefined4 *)(param_1 + 0x48),0x16,
                   *(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),uVar5 + 4,uVar4,
                   *(undefined8 *)(param_1 + 0x500));
        uVar5 = *(ulong *)(param_1 + 0x108);
      }
    }
    else {
      iVar3 = ssl3_finish_mac(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),
                              *(undefined8 *)(param_1 + 0x108));
      if (iVar3 == 0) goto LAB_00102c8c;
      uVar5 = *(ulong *)(param_1 + 0x108);
      if (*(code **)(param_1 + 0x4f8) != (code *)0x0) {
        (**(code **)(param_1 + 0x4f8))
                  (0,2,0,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),uVar5,uVar4,
                   *(undefined8 *)(param_1 + 0x500));
        uVar5 = *(ulong *)(param_1 + 0x108);
      }
    }
    uVar4 = 1;
  }
LAB_00102c91:
  *param_2 = uVar5;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 ssl_x509err2alert(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_1 == 0x32) {
    return 0x28;
  }
  puVar1 = x509table;
  do {
    puVar2 = puVar1;
    if (*(int *)(puVar2 + 8) == param_1) break;
    puVar1 = puVar2 + 8;
  } while (*(int *)(puVar2 + 8) != 0);
  return *(undefined4 *)(puVar2 + 0xc);
}



undefined8 ssl_allow_compression(long param_1)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x9b2) & 2) != 0) {
    return 0;
  }
  uVar1 = ssl_security(param_1,0xf,0,0,0);
  return uVar1;
}



int ssl_version_cmp(long param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != param_3) {
    if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      return ((param_3 <= param_2) - 1) + (uint)(param_3 <= param_2);
    }
    if (param_2 == 0x100) {
      param_2 = 0xff00;
      if (param_3 == 0x100) {
        return 1;
      }
    }
    else if (param_3 == 0x100) {
      param_3 = 0xff00;
    }
    iVar1 = ((param_2 <= param_3) - 1) + (uint)(param_2 <= param_3);
  }
  return iVar1;
}



uint ssl_method_error(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *param_2;
  if (((*(int *)(param_1 + 0x9bc) == 0) || (iVar2 = ssl_version_cmp(param_1,uVar1), -1 < iVar2)) &&
     (iVar2 = ssl_security(param_1,9,0,uVar1,0), iVar2 != 0)) {
    if ((*(int *)(param_1 + 0x9c0) != 0) && (iVar2 = ssl_version_cmp(param_1,uVar1), 0 < iVar2)) {
      return 0xa6;
    }
    uVar3 = 0x102;
    if (((*(ulong *)(param_1 + 0x9b0) & *(ulong *)(param_2 + 2)) == 0) &&
       (uVar3 = 0, (*(byte *)(param_2 + 1) & 2) != 0)) {
      uVar3 = -(uint)((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) != 0) & 0x9e;
    }
    return uVar3;
  }
  return 0x18c;
}



bool ssl_version_supported(long param_1,ulong param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  ulong uVar7;
  size_t __n;
  undefined4 *puVar8;
  code *pcVar9;
  ulong uVar10;
  
  if (**(int **)(param_1 + 0x18) == 0x10000) {
    iVar3 = 0x304;
    puVar8 = &tls_version_table;
  }
  else {
    if (**(int **)(param_1 + 0x18) != 0x1ffff) {
      iVar3 = ssl_version_cmp(param_1,param_2,*(undefined4 *)(param_1 + 0x48));
      return iVar3 == 0;
    }
    iVar3 = 0xfefd;
    puVar8 = &dtls_version_table;
  }
  do {
    iVar3 = ssl_version_cmp(param_1,param_2 & 0xffffffff,iVar3);
    if (0 < iVar3) {
      return false;
    }
    pcVar9 = *(code **)(puVar8 + 4);
    if (*(int *)(param_1 + 0x78) == 0) {
      pcVar9 = *(code **)(puVar8 + 2);
    }
    if ((pcVar9 != (code *)0x0) &&
       (iVar3 = ssl_version_cmp(param_1,param_2 & 0xffffffff,*puVar8), iVar3 == 0)) {
      uVar5 = (*pcVar9)();
      iVar3 = ssl_method_error(param_1,uVar5);
      if (iVar3 == 0) {
        if ((*(int *)(param_1 + 0x78) == 0) || ((int)param_2 != 0x304)) {
LAB_001030f9:
          if (param_3 != (undefined8 *)0x0) {
            uVar5 = (*pcVar9)();
            *param_3 = uVar5;
          }
          return true;
        }
        if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0xb88) != 0)) {
          if ((((*(long *)(*(long *)(param_1 + 8) + 0x230) != 0) ||
               (*(long *)(*(long *)(param_1 + 0xb88) + 0x230) != 0)) ||
              (*(long *)(param_1 + 0x978) != 0)) ||
             ((*(long *)(param_1 + 0x980) != 0 ||
              (*(long *)(*(long *)(param_1 + 0x880) + 0x60) != 0)))) goto LAB_001030f9;
          uVar7 = *(ulong *)(param_1 + 0x118);
          if (uVar7 != 0) {
            uVar10 = 0;
            do {
              if (((uVar10 != 2) && (2 < uVar10 - 4)) &&
                 ((iVar3 = (int)uVar10, -1 < iVar3 && (iVar3 < (int)uVar7)))) {
                if (*(int *)(param_1 + 0x78) == 0) {
                  pvVar6 = *(void **)(param_1 + 0x1598);
                  __n = *(size_t *)(param_1 + 0x15a0);
                }
                else {
                  pvVar6 = *(void **)(param_1 + 0x15a8);
                  __n = *(size_t *)(param_1 + 0x15b0);
                }
                lVar2 = *(long *)(*(long *)(param_1 + 0x880) + 0x20);
                plVar1 = (long *)(lVar2 + (long)iVar3 * 0x28);
                if ((((pvVar6 != (void *)0x0) &&
                     (pvVar6 = memchr(pvVar6,2,__n), pvVar6 != (void *)0x0)) || (*plVar1 != 0)) &&
                   (plVar1[1] != 0)) {
                  if (uVar10 != 3) goto LAB_001030f9;
                  uVar4 = ssl_get_EC_curve_nid(*(undefined8 *)(lVar2 + 0x80));
                  iVar3 = tls_check_sigalg_curve(param_1,uVar4);
                  if (iVar3 != 0) goto LAB_001030f9;
                  uVar7 = *(ulong *)(param_1 + 0x118);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar7);
          }
        }
      }
    }
    iVar3 = puVar8[6];
    puVar8 = puVar8 + 6;
    if (iVar3 == 0) {
      return false;
    }
  } while( true );
}



bool ssl_check_version_downgrade(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  iVar2 = **(int **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x48) == iVar2) {
    return true;
  }
  piVar5 = &tls_version_table;
  piVar3 = (int *)TLS_method();
  if (iVar2 != *piVar3) {
    iVar2 = **(int **)(param_1 + 0x10);
    piVar3 = (int *)DTLS_method();
    if (iVar2 != *piVar3) {
      return false;
    }
    piVar5 = &dtls_version_table;
  }
LAB_001032e0:
  do {
    if (*(code **)(piVar5 + 4) != (code *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(piVar5 + 4))();
      uVar1 = *puVar4;
      if ((((*(int *)(param_1 + 0x9bc) == 0) || (iVar2 = ssl_version_cmp(param_1,uVar1), -1 < iVar2)
           ) && (iVar2 = ssl_security(param_1,9,0,uVar1,0), iVar2 != 0)) &&
         ((*(int *)(param_1 + 0x9c0) == 0 || (iVar2 = ssl_version_cmp(param_1,uVar1), iVar2 < 1))))
      {
        if ((*(ulong *)(param_1 + 0x9b0) & *(ulong *)(puVar4 + 2)) == 0) {
          if (((puVar4[1] & 2) == 0) ||
             ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) == 0)) {
            return *(int *)(param_1 + 0x48) == *piVar5;
          }
          piVar3 = piVar5 + 6;
          piVar5 = piVar5 + 6;
          if (*piVar3 == 0) {
            return false;
          }
          goto LAB_001032e0;
        }
      }
    }
    piVar3 = piVar5 + 6;
    piVar5 = piVar5 + 6;
    if (*piVar3 == 0) {
      return false;
    }
  } while( true );
}



undefined8 ssl_set_version_bound(int param_1,int param_2,int *param_3)

{
  if (param_2 == 0) {
    *param_3 = 0;
  }
  else {
    if (param_2 != 0x100) {
      if (param_2 < 0xfefd) {
        if (4 < param_2 - 0x300U) {
          return 0;
        }
        if (param_1 != 0x10000) {
          return 1;
        }
        goto LAB_00103410;
      }
      if (0xfeff < param_2) {
        return 0;
      }
    }
    if ((param_1 != 0x10000) && (param_1 == 0x1ffff)) {
LAB_00103410:
      *param_3 = param_2;
      return 1;
    }
  }
  return 1;
}



undefined8 ssl_choose_server_version(long param_1,long param_2,uint *param_3)

{
  byte bVar1;
  int *piVar2;
  long lVar3;
  byte *pbVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ushort uVar11;
  int *piVar12;
  byte *pbVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  uint local_5c;
  undefined8 local_48;
  long local_40;
  
  piVar2 = *(int **)(param_1 + 0x18);
  iVar8 = *(int *)(param_2 + 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = *piVar2;
  *(int *)(param_1 + 0x9d4) = iVar8;
  if (iVar6 == 0x10000) {
    piVar12 = &tls_version_table;
LAB_001034b6:
    lVar10 = *(long *)(param_2 + 0x288);
    if (*(int *)(lVar10 + 0x308) == 0) goto LAB_001034cb;
    if ((*(byte *)(*(long *)(piVar2 + 0x36) + 0x50) & 8) != 0) goto LAB_001034d5;
LAB_001035f1:
    lVar3 = *(long *)(lVar10 + 0x300);
    pbVar4 = *(byte **)(lVar10 + 0x2f8);
    local_48 = 0;
    *(undefined4 *)(lVar10 + 0x30c) = 1;
    if (lVar3 == 0) {
LAB_00103628:
      uVar9 = 0x9f;
      goto LAB_00103553;
    }
    bVar1 = *pbVar4;
    uVar14 = (ulong)bVar1;
    if (lVar3 - 1U != uVar14) goto LAB_00103628;
    *(undefined8 *)(lVar10 + 0x300) = 0;
    *(byte **)(lVar10 + 0x2f8) = pbVar4 + uVar14 + 1;
    uVar9 = 0x124;
    if (iVar8 < 0x301) goto LAB_00103553;
    if (uVar14 < 2) {
      if (lVar3 != 1) goto LAB_00103628;
    }
    else {
      local_5c = 0;
      pbVar13 = pbVar4;
      do {
        uVar11 = *(ushort *)(pbVar13 + 1) << 8 | *(ushort *)(pbVar13 + 1) >> 8;
        iVar8 = ssl_version_cmp(param_1,uVar11,local_5c);
        if ((0 < iVar8) && (iVar8 = ssl_version_supported(param_1,uVar11,&local_48), iVar8 != 0)) {
          local_5c = (uint)uVar11;
        }
        pbVar13 = pbVar13 + 2;
      } while ((byte *)0x1 < pbVar4 + (uVar14 - (long)pbVar13));
      if ((bVar1 & 1) != 0) goto LAB_00103628;
      if (local_5c != 0) {
        if (*(int *)(param_1 + 0x8d0) == 0) {
          if (local_5c == 0x303) {
            iVar8 = ssl_version_supported(param_1,0x304,0);
            uVar7 = (uint)(iVar8 != 0);
          }
          else {
            uVar7 = 0;
            if ((((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) &&
                (local_5c < 0x303)) && (iVar8 = ssl_version_supported(param_1,0x303,0), iVar8 != 0))
            {
              uVar7 = 2;
            }
          }
          *param_3 = uVar7;
          *(uint *)(param_1 + 0x48) = local_5c;
          *(undefined8 *)(param_1 + 0x18) = local_48;
          iVar8 = ssl_set_record_protocol_version(param_1);
          if (iVar8 == 0) {
            uVar9 = 0xc0103;
            goto LAB_00103553;
          }
          goto LAB_001035d8;
        }
        if (local_5c == 0x304) {
          uVar9 = 0;
          goto LAB_00103553;
        }
      }
    }
  }
  else {
    if (iVar6 == 0x1ffff) {
      piVar12 = &dtls_version_table;
      goto LAB_001034b6;
    }
    if (((*(byte *)(*(long *)(piVar2 + 0x36) + 0x50) & 8) != 0) || (iVar6 < 0x304)) {
      iVar8 = ssl_version_cmp(param_1,iVar8,*(undefined4 *)(param_1 + 0x48));
      uVar9 = 0x10a;
      if (iVar8 < 0) goto LAB_00103553;
      *param_3 = 0;
LAB_001035d8:
      uVar9 = 0;
      goto LAB_00103553;
    }
    lVar10 = *(long *)(param_2 + 0x288);
    if (*(int *)(lVar10 + 0x308) != 0) goto LAB_001035f1;
    piVar12 = &tls_version_table;
LAB_001034cb:
    if (*(int *)(param_1 + 0x8d0) == 0) {
LAB_001034d5:
      iVar6 = ssl_version_cmp(param_1,iVar8,0x304);
      if (-1 < iVar6) {
        iVar8 = 0x303;
      }
      if (*piVar12 != 0) {
        bVar5 = false;
        do {
          if ((*(long *)(piVar12 + 4) != 0) && (iVar6 = ssl_version_cmp(param_1,iVar8), -1 < iVar6))
          {
            uVar9 = (**(code **)(piVar12 + 4))();
            iVar6 = ssl_method_error(param_1,uVar9);
            if (iVar6 == 0) {
              if (*piVar12 == 0x303) {
                iVar8 = ssl_version_supported(param_1,0x304,0);
                uVar7 = 1;
                if (iVar8 == 0) goto LAB_00103683;
              }
              else {
                if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) &&
                   (*piVar12 < 0x303)) {
                  iVar8 = ssl_version_supported(param_1,0x303,0);
                  uVar7 = 2;
                  if (iVar8 != 0) goto LAB_00103685;
                }
LAB_00103683:
                uVar7 = 0;
              }
LAB_00103685:
              *param_3 = uVar7;
              iVar8 = *piVar12;
              *(undefined8 *)(param_1 + 0x18) = uVar9;
              *(int *)(param_1 + 0x48) = iVar8;
              iVar8 = ssl_set_record_protocol_version(param_1);
              uVar9 = 0xc0103;
              if (iVar8 != 0) {
                uVar9 = 0;
              }
              goto LAB_00103553;
            }
            bVar5 = true;
          }
          piVar2 = piVar12 + 6;
          piVar12 = piVar12 + 6;
        } while (*piVar2 != 0);
        if (bVar5) goto LAB_0010354e;
      }
      uVar9 = 0x18c;
      goto LAB_00103553;
    }
  }
LAB_0010354e:
  uVar9 = 0x102;
LAB_00103553:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



undefined8 ssl_get_min_max_version(long param_1,int *param_2,int *param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int *piVar6;
  int iVar7;
  int local_44;
  
  if (**(int **)(param_1 + 0x18) == 0x10000) {
    piVar6 = &tls_version_table;
LAB_001038b9:
    *param_2 = 0;
    if (param_4 != (int *)0x0) {
      *param_4 = 0;
    }
    if (*piVar6 == 0) {
      *param_3 = 0;
    }
    else {
      local_44 = 0;
      bVar1 = true;
      iVar7 = 0;
LAB_00103908:
      do {
        if (*(code **)(piVar6 + 2) == (code *)0x0) {
          bVar1 = true;
          iVar7 = 0;
        }
        else {
          piVar4 = (int *)(**(code **)(piVar6 + 2))();
          if ((iVar7 == 0) && (bVar1)) {
            iVar7 = *piVar6;
          }
          iVar3 = *piVar4;
          if (((((*(int *)(param_1 + 0x9bc) == 0) ||
                (iVar2 = ssl_version_cmp(param_1,iVar3), -1 < iVar2)) &&
               (iVar2 = ssl_security(param_1,9,0,iVar3,0), iVar2 != 0)) &&
              ((*(int *)(param_1 + 0x9c0) == 0 ||
               (iVar3 = ssl_version_cmp(param_1,iVar3), iVar3 < 1)))) &&
             (((*(ulong *)(param_1 + 0x9b0) & *(ulong *)(piVar4 + 2)) == 0 &&
              (((*(byte *)(piVar4 + 1) & 2) == 0 ||
               ((*(uint *)(*(long *)(param_1 + 0x880) + 0x1c) & 0x30000) == 0)))))) {
            if (bVar1) {
              if ((param_4 != (int *)0x0) && (iVar7 != 0)) {
                *param_4 = iVar7;
              }
              local_44 = *piVar4;
              piVar6 = piVar6 + 6;
              bVar1 = false;
              *param_2 = local_44;
              if (*piVar6 == 0) break;
              goto LAB_00103908;
            }
            *param_2 = *piVar4;
          }
          else {
            bVar1 = true;
          }
        }
        piVar4 = piVar6 + 6;
        piVar6 = piVar6 + 6;
      } while (*piVar4 != 0);
      *param_3 = local_44;
      if (local_44 != 0) goto LAB_001039ea;
    }
    uVar5 = 0xbf;
  }
  else {
    if (**(int **)(param_1 + 0x18) == 0x1ffff) {
      piVar6 = &dtls_version_table;
      goto LAB_001038b9;
    }
    iVar7 = *(int *)(param_1 + 0x48);
    *param_3 = iVar7;
    *param_2 = iVar7;
    if (param_4 != (int *)0x0) {
      return 0xc0103;
    }
LAB_001039ea:
    uVar5 = 0;
  }
  return uVar5;
}



undefined8 tls_setup_handshake(SSL *param_1)

{
  int *piVar1;
  _func_3069 **pp_Var2;
  undefined4 uVar3;
  SSL_METHOD *pSVar4;
  BIO *pBVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  stack_st_SSL_CIPHER *psVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  long local_30;
  
  pSVar4 = param_1->method;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = ssl3_init_finished_mac();
  if (iVar7 != 0) {
    param_1[3].tlsext_debug_arg = (void *)0x0;
    param_1[3].tlsext_hostname = (char *)0x0;
    *(undefined1 (*) [16])((long)&param_1[3].tlsext_hostname + 5) = (undefined1  [16])0x0;
    iVar7 = ssl_get_min_max_version(param_1,&local_38,&local_34);
    if (iVar7 == 0) {
      if (pSVar4[6].ssl_shutdown == (_func_3061 *)0x0) {
        iVar7 = ssl_version_cmp(param_1,local_34,
                                (-(uint)((*(uint *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50)
                                         & 8) == 0) & 0xffff0403) + 0xfeff);
        if (iVar7 < 1) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_lib.c",0xa7,"tls_setup_handshake");
          ossl_statem_fatal(param_1,0x28,0x129,
                            "The max supported SSL/TLS version needs the MD5-SHA1 digest but it is not available in the loaded providers. Use (D)TLSv1.2 or above, or load different providers"
                           );
        }
        else {
          uVar9 = *(uint *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8;
          iVar7 = ssl_version_cmp(param_1,local_38,(-(uint)(uVar9 == 0) & 0xffff0406) + 0xfefd);
          if ((-1 < iVar7) ||
             (lVar12 = SSL_ctrl(param_1,0x7b,(-(ulong)(uVar9 == 0) & 0xffffffffffff0406) + 0xfefd,
                                (void *)0x0), (int)lVar12 != 0)) goto LAB_00103b14;
          ERR_new();
          ERR_set_debug("ssl/statem/statem_lib.c",0xb9,"tls_setup_handshake");
          ossl_statem_fatal(param_1,0x28,0xc0103,0);
        }
      }
      else {
LAB_00103b14:
        if (*(int *)&param_1->s2 == 0) {
          if ((param_1->tls_session_ticket_ext_cb_arg == (void *)0x0) ||
             (lVar12._0_4_ = param_1[1].server, lVar12._4_4_ = param_1[1].new_session, lVar12 == 0))
          {
            LOCK();
            piVar1 = (int *)(*(long *)&param_1[4].mac_flags + 0x78);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          else {
            LOCK();
            piVar1 = (int *)(*(long *)&param_1[4].mac_flags + 0x7c);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          pBVar5 = param_1->wbio;
          *(undefined4 *)&param_1[1].tls_session_ticket_ext_cb = 0;
          param_1->verify_result = 0;
          (param_1->ex_data).sk = (stack_st_void *)0x0;
          *(undefined1 (*) [16])&(param_1->ex_data).dummy = (undefined1  [16])0x0;
          lVar12 = *(long *)&pBVar5[1].ex_data.dummy;
          param_1[1].read_ahead = 0;
          if ((*(byte *)(lVar12 + 0x50) & 8) != 0) {
            param_1->mac_flags = 1;
          }
LAB_00103b80:
          uVar10 = 1;
          goto LAB_00103ab2;
        }
        psVar11 = SSL_get_ciphers(param_1);
        for (iVar7 = 0; iVar8 = OPENSSL_sk_num(psVar11), iVar7 < iVar8; iVar7 = iVar7 + 1) {
          lVar12 = OPENSSL_sk_value(psVar11,iVar7);
          if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) {
            uVar3 = *(undefined4 *)(lVar12 + 0x30);
            iVar8 = ssl_version_cmp(param_1,local_34,*(undefined4 *)(lVar12 + 0x2c));
          }
          else {
            uVar3 = *(undefined4 *)(lVar12 + 0x38);
            iVar8 = ssl_version_cmp(param_1,local_34,*(undefined4 *)(lVar12 + 0x34));
          }
          if ((-1 < iVar8) && (iVar8 = ssl_version_cmp(param_1,local_34,uVar3), iVar8 < 1)) {
            if ((param_1->tls_session_ticket_ext_cb_arg == (void *)0x0) ||
               (lVar6._0_4_ = param_1[1].server, lVar6._4_4_ = param_1[1].new_session, lVar6 == 0))
            {
              LOCK();
              piVar1 = (int *)(*(long *)&param_1[4].mac_flags + 0x84);
              *piVar1 = *piVar1 + 1;
              UNLOCK();
            }
            else {
              LOCK();
              pp_Var2 = &pSVar4->ssl_ctx_ctrl;
              *(int *)pp_Var2 = *(int *)pp_Var2 + 1;
              UNLOCK();
              *(undefined4 *)&param_1[1].enc_write_ctx = 0;
            }
            goto LAB_00103b80;
          }
        }
        ERR_new();
        ERR_set_debug("ssl/statem/statem_lib.c",0xd6,"tls_setup_handshake");
        ossl_statem_fatal(param_1,0x28,0xb5,"No ciphers enabled for max supported SSL/TLS version");
      }
    }
    else {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x9b,"tls_setup_handshake");
      ossl_statem_fatal(param_1,0x46,0xbf,0);
    }
  }
  uVar10 = 0;
LAB_00103ab2:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ssl_choose_client_version(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  undefined4 local_3c;
  int local_38;
  int local_34;
  long local_30;
  
  uVar1 = *(undefined4 *)(param_1 + 0x48);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(param_1 + 0x48) = param_2;
  iVar2 = tls_parse_extension(param_1,0x13,0x300,param_3,0,0);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x48) = uVar1;
  }
  else if ((*(int *)(param_1 + 0x8d0) == 0) || (*(int *)(param_1 + 0x48) == 0x304)) {
    iVar2 = **(int **)(param_1 + 0x18);
    if (iVar2 == 0x10000) {
      piVar4 = &tls_version_table;
    }
    else {
      if (iVar2 != 0x1ffff) {
        if (iVar2 == *(int *)(param_1 + 0x48)) {
          iVar2 = ssl_set_record_protocol_version(param_1);
          if (iVar2 != 0) {
LAB_00104026:
            uVar3 = 1;
            goto LAB_00103ec9;
          }
          ERR_new();
          uVar3 = 0x923;
LAB_001040f1:
          ERR_set_debug("ssl/statem/statem_lib.c",uVar3,"ssl_choose_client_version");
          ossl_statem_fatal(param_1,0x50,0xc0103,0);
          goto LAB_00103ec7;
        }
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        ERR_new();
        uVar3 = 0x918;
        goto LAB_00103ea5;
      }
      piVar4 = &dtls_version_table;
    }
    iVar2 = ssl_get_min_max_version(param_1,&local_3c,&local_38,&local_34);
    if (iVar2 == 0) {
      iVar2 = ssl_version_cmp(param_1,*(undefined4 *)(param_1 + 0x48),local_3c);
      if (iVar2 < 0) {
LAB_00104050:
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        ERR_new();
        uVar3 = 0x938;
      }
      else {
        iVar2 = ssl_version_cmp(param_1,*(undefined4 *)(param_1 + 0x48),local_38);
        if (0 < iVar2) goto LAB_00104050;
        if ((*(byte *)(param_1 + 0x9b8) & 0x80) == 0) {
          local_34 = local_38;
        }
        iVar2 = *(int *)(param_1 + 0x48);
        if (iVar2 == 0x303) {
          if ((local_34 < 0x304) || (*(long *)(param_1 + 0x180) != _tls12downgrade))
          goto LAB_00103ff4;
          *(undefined4 *)(param_1 + 0x48) = uVar1;
          ERR_new();
          uVar3 = 0x946;
LAB_00103fb5:
          ERR_set_debug("ssl/statem/statem_lib.c",uVar3,"ssl_choose_client_version");
          ossl_statem_fatal(param_1,0x2f,0x175,0);
          goto LAB_00103ec7;
        }
        if (((((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) &&
             (iVar2 < 0x303)) && (iVar2 < local_34)) &&
           (_tls11downgrade == *(long *)(param_1 + 0x180))) {
          *(undefined4 *)(param_1 + 0x48) = uVar1;
          ERR_new();
          uVar3 = 0x952;
          goto LAB_00103fb5;
        }
LAB_00103ff4:
        for (; *piVar4 != 0; piVar4 = piVar4 + 6) {
          if ((iVar2 == *piVar4) && (*(code **)(piVar4 + 2) != (code *)0x0)) {
            uVar3 = (**(code **)(piVar4 + 2))();
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            iVar2 = ssl_set_record_protocol_version(param_1,*(undefined4 *)(param_1 + 0x48));
            if (iVar2 != 0) goto LAB_00104026;
            ERR_new();
            uVar3 = 0x95e;
            goto LAB_001040f1;
          }
        }
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        ERR_new();
        uVar3 = 0x965;
      }
      ERR_set_debug("ssl/statem/statem_lib.c",uVar3,"ssl_choose_client_version");
      ossl_statem_fatal(param_1,0x46,0x102,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x932,"ssl_choose_client_version");
      ossl_statem_fatal(param_1,0x46,iVar2,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    ERR_new();
    uVar3 = 0x910;
LAB_00103ea5:
    ERR_set_debug("ssl/statem/statem_lib.c",uVar3,"ssl_choose_client_version");
    ossl_statem_fatal(param_1,0x46,0x10a,0);
  }
LAB_00103ec7:
  uVar3 = 0;
LAB_00103ec9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ssl_set_client_hello_version(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined1 auStack_18 [4];
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) {
    uVar3 = ssl_get_min_max_version(param_1,auStack_18,&local_14,0);
    if ((int)uVar3 != 0) goto LAB_00104210;
    lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0xd8);
    *(int *)(param_1 + 0x48) = local_14;
    if ((*(byte *)(lVar1 + 0x50) & 8) == 0) {
      if (0x303 < local_14) {
        local_14 = 0x303;
      }
    }
    else if ((local_14 == 0x100) &&
            (iVar2 = ssl_set_record_protocol_version(param_1,0x100), iVar2 == 0)) goto LAB_0010420e;
    *(int *)(param_1 + 0x9d4) = local_14;
  }
LAB_0010420e:
  uVar3 = 0;
LAB_00104210:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
check_in_list(undefined8 param_1,short param_2,long param_3,ulong param_4,int param_5,ulong *param_6
             )

{
  int iVar1;
  ulong uVar2;
  
  if ((param_3 != 0) && (param_4 != 0)) {
    if (param_5 == 0) {
      uVar2 = 0;
      do {
        if (*(short *)(param_3 + uVar2 * 2) == param_2) {
          if (param_6 == (ulong *)0x0) {
            return 1;
          }
          goto LAB_001042cf;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_4);
    }
    else {
      uVar2 = 0;
      do {
        if ((param_2 == *(short *)(param_3 + uVar2 * 2)) &&
           (iVar1 = tls_group_allowed(param_1,param_2,0x20006), iVar1 != 0)) {
          if (param_6 != (ulong *)0x0) {
LAB_001042cf:
            *param_6 = uVar2;
          }
          return 1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_4);
    }
  }
  return 0;
}



bool create_synthetic_message_hash
               (long param_1,undefined1 *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined8 local_90 [2];
  undefined4 local_7c;
  undefined1 local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_7c = 0;
  local_90[0] = param_3;
  if (param_2 == (undefined1 *)0x0) {
    local_90[0] = 0;
    iVar1 = ssl3_digest_cached_records(param_1,0);
    if (iVar1 != 0) {
      param_2 = local_78;
      iVar1 = ssl_handshake_hash(param_1,param_2,0x40,local_90);
      if (iVar1 != 0) goto LAB_00104370;
    }
  }
  else {
LAB_00104370:
    iVar1 = ssl3_init_finished_mac(param_1);
    if (iVar1 != 0) {
      local_7c = CONCAT31(local_7c._1_3_,0xfe);
      local_7c = CONCAT13((char)local_90[0],(undefined3)local_7c);
      iVar1 = ssl3_finish_mac(param_1,&local_7c,4);
      if ((iVar1 != 0) && (iVar1 = ssl3_finish_mac(param_1,param_2,local_90[0]), iVar1 != 0)) {
        bVar2 = true;
        if (param_4 == 0) goto LAB_0010437e;
        iVar1 = ssl3_finish_mac(param_1,param_4,param_5);
        if (iVar1 != 0) {
          iVar1 = ssl3_finish_mac(param_1,*(undefined8 *)(*(long *)(param_1 + 0xf8) + 8),
                                  *(long *)(param_1 + 0x2f0) + 4);
          bVar2 = iVar1 != 0;
          goto LAB_0010437e;
        }
      }
    }
  }
  bVar2 = false;
LAB_0010437e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}



undefined8 parse_ca_names(long param_1,long *param_2)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  X509_NAME *a;
  ulong uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  ushort *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = OPENSSL_sk_new();
  if (lVar3 == 0) {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_lib.c",0xa70,"parse_ca_names");
    ossl_statem_fatal(param_1,0x50,0x8000f,0);
  }
  else {
    if (1 < (ulong)param_2[1]) {
      uVar1 = *(ushort *)*param_2;
      uVar4 = param_2[1] - 2;
      uVar5 = (ulong)(ushort)(uVar1 << 8 | uVar1 >> 8);
      if (uVar5 <= uVar4) {
        puVar6 = (ushort *)*param_2 + 1;
        param_2[1] = uVar4 - uVar5;
        *param_2 = (long)puVar6 + uVar5;
        do {
          if (uVar5 == 0) {
            OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x358),X509_NAME_free);
            *(long *)(param_1 + 0x358) = lVar3;
            uVar7 = 1;
            goto LAB_001045cf;
          }
          if (uVar5 == 1) {
LAB_00104566:
            ERR_new();
            uVar7 = 0xa7f;
            goto LAB_00104591;
          }
          uVar4 = (ulong)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
          if (uVar5 - 2 < uVar4) goto LAB_00104566;
          local_48 = puVar6 + 1;
          uVar5 = (uVar5 - 2) - uVar4;
          puVar6 = (ushort *)((long)local_48 + uVar4);
          a = d2i_X509_NAME((X509_NAME **)0x0,(uchar **)&local_48,uVar4);
          if (a == (X509_NAME *)0x0) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_lib.c",0xa85,"parse_ca_names");
            ossl_statem_fatal(param_1,0x32,0x8000d,0);
            goto LAB_001045b3;
          }
          if (local_48 != puVar6) {
            ERR_new();
            ERR_set_debug("ssl/statem/statem_lib.c",0xa89,"parse_ca_names");
            ossl_statem_fatal(param_1,0x32,0x83,0);
            goto LAB_001045b6;
          }
          iVar2 = OPENSSL_sk_push(lVar3,a);
        } while (iVar2 != 0);
        ERR_new();
        ERR_set_debug("ssl/statem/statem_lib.c",0xa8e,"parse_ca_names");
        ossl_statem_fatal(param_1,0x50,0x8000f,0);
        goto LAB_001045b6;
      }
    }
    ERR_new();
    uVar7 = 0xa75;
LAB_00104591:
    ERR_set_debug("ssl/statem/statem_lib.c",uVar7,"parse_ca_names");
    ossl_statem_fatal(param_1,0x32,0x9f,0);
  }
LAB_001045b3:
  a = (X509_NAME *)0x0;
LAB_001045b6:
  OPENSSL_sk_pop_free(lVar3,X509_NAME_free);
  X509_NAME_free(a);
  uVar7 = 0;
LAB_001045cf:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



stack_st_X509_NAME * get_ca_names(SSL *param_1)

{
  int iVar1;
  stack_st_X509_NAME *psVar2;
  
  if (*(int *)&param_1->s2 != 0) {
    psVar2 = SSL_get_client_CA_list(param_1);
    if (psVar2 != (stack_st_X509_NAME *)0x0) {
      iVar1 = OPENSSL_sk_num(psVar2);
      if (iVar1 != 0) {
        return psVar2;
      }
    }
  }
  psVar2 = (stack_st_X509_NAME *)SSL_get0_CA_list(param_1);
  return psVar2;
}



undefined8 construct_ca_names(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  X509_NAME *a;
  undefined8 uVar4;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = WPACKET_start_sub_packet_len__(param_3,2);
  if (iVar1 == 0) {
    ERR_new();
    uVar4 = 0xab5;
  }
  else {
    if ((param_2 != 0) && ((*(byte *)(param_1 + 0x9b1) & 2) == 0)) {
      for (iVar1 = 0; iVar3 = OPENSSL_sk_num(param_2), iVar1 < iVar3; iVar1 = iVar1 + 1) {
        a = (X509_NAME *)OPENSSL_sk_value(param_2);
        if ((((a == (X509_NAME *)0x0) || (iVar3 = i2d_X509_NAME(a,(uchar **)0x0), iVar3 < 0)) ||
            (iVar2 = WPACKET_sub_allocate_bytes__(param_3,(long)iVar3,&local_48,2), iVar2 == 0)) ||
           (iVar2 = i2d_X509_NAME(a,&local_48), iVar2 != iVar3)) {
          ERR_new();
          uVar4 = 0xac6;
          goto LAB_00104861;
        }
      }
    }
    iVar1 = WPACKET_close(param_3);
    if (iVar1 != 0) {
      uVar4 = 1;
      goto LAB_00104831;
    }
    ERR_new();
    uVar4 = 0xacd;
  }
LAB_00104861:
  ERR_set_debug("ssl/statem/statem_lib.c",uVar4,"construct_ca_names");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  uVar4 = 0;
LAB_00104831:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



long construct_key_exchange_tbs(long param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar9 = param_4 + 0x40;
  puVar8 = (undefined8 *)CRYPTO_malloc((int)lVar9,"ssl/statem/statem_lib.c",0xad9);
  if (puVar8 == (undefined8 *)0x0) {
    ERR_new();
    lVar9 = 0;
    ERR_set_debug("ssl/statem/statem_lib.c",0xadc,"construct_key_exchange_tbs");
    ossl_statem_fatal(param_1,0x50,0x8000f,0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 400);
    uVar2 = *(undefined8 *)(param_1 + 0x198);
    uVar3 = *(undefined8 *)(param_1 + 0x1a0);
    uVar4 = *(undefined8 *)(param_1 + 0x168);
    uVar5 = *(undefined8 *)(param_1 + 0x170);
    uVar6 = *(undefined8 *)(param_1 + 0x178);
    uVar7 = *(undefined8 *)(param_1 + 0x180);
    *puVar8 = *(undefined8 *)(param_1 + 0x188);
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    puVar8[4] = uVar4;
    puVar8[5] = uVar5;
    puVar8[6] = uVar6;
    puVar8[7] = uVar7;
    memcpy(puVar8 + 8,param_3,param_4);
    *param_2 = puVar8;
  }
  return lVar9;
}



undefined8 tls13_save_handshake_digest_for_pha(long param_1)

{
  int iVar1;
  EVP_MD_CTX *out;
  
  if (*(long *)(param_1 + 0xbc8) != 0) {
    return 1;
  }
  iVar1 = ssl3_digest_cached_records(param_1,1);
  if (iVar1 != 0) {
    out = (EVP_MD_CTX *)EVP_MD_CTX_new();
    *(EVP_MD_CTX **)(param_1 + 0xbc8) = out;
    if (out == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0xaf5,"tls13_save_handshake_digest_for_pha");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
    }
    else {
      iVar1 = EVP_MD_CTX_copy_ex(out,*(EVP_MD_CTX **)(param_1 + 0x1b0));
      if (iVar1 != 0) {
        return 1;
      }
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0xafa,"tls13_save_handshake_digest_for_pha");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      EVP_MD_CTX_free(*(undefined8 *)(param_1 + 0xbc8));
      *(undefined8 *)(param_1 + 0xbc8) = 0;
    }
  }
  return 0;
}



undefined8 tls_process_finished(long param_1,undefined8 *param_2)

{
  void *b;
  int iVar1;
  ulong len;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_38 [8];
  long local_30;
  
  bVar6 = true;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x260) != 0) {
    bVar6 = *(long *)(param_1 + 0x2e8) == 0;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
LAB_00104af0:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
      iVar4 = **(int **)(param_1 + 0x18);
      if (iVar4 < 0x304) goto LAB_00104b38;
      if (iVar4 != 0x10000) {
        iVar4 = RECORD_LAYER_processed_read_pending(param_1 + 0xc58);
        if (iVar4 != 0) {
          ERR_new();
          ERR_set_debug("ssl/statem/statem_lib.c",0x362,"tls_process_finished");
          ossl_statem_fatal(param_1,10,0xb6,0);
          uVar5 = 0;
          goto LAB_00104c00;
        }
        if ((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) == 0) {
          iVar4 = **(int **)(param_1 + 0x18);
          goto LAB_00104b38;
        }
      }
    }
LAB_00104b50:
    if (*(int *)(param_1 + 0x1b8) == 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x368,"tls_process_finished");
      ossl_statem_fatal(param_1,10,0x9a,0);
      uVar5 = 0;
      goto LAB_00104c00;
    }
  }
  else {
    pcVar3 = *(code **)(*(long *)(param_1 + 0xc70) + 0x68);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0xc80),0);
    }
    if (*(int *)(param_1 + 0xba8) != 4) {
      *(undefined4 *)(param_1 + 0xc0) = 1;
    }
    if (((*(byte *)(*(long *)(*(int **)(param_1 + 0x18) + 0x36) + 0x50) & 8) != 0) ||
       (iVar4 = **(int **)(param_1 + 0x18), iVar4 == 0x10000)) goto LAB_00104b50;
    if (0x303 < iVar4) {
      iVar4 = tls13_save_handshake_digest_for_pha(param_1);
      if (iVar4 == 0) {
        uVar5 = 0;
        goto LAB_00104c00;
      }
      goto LAB_00104af0;
    }
LAB_00104b38:
    if ((iVar4 == 0x10000) || (iVar4 < 0x304)) goto LAB_00104b50;
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  len = *(ulong *)(param_1 + 0x2e8);
  if (len == param_2[1]) {
    b = (void *)(param_1 + 0x268);
    iVar4 = CRYPTO_memcmp((void *)*param_2,b,len);
    if (iVar4 != 0) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x37e,"tls_process_finished");
      ossl_statem_fatal(param_1,0x33,0x95,0);
      uVar5 = 0;
      goto LAB_00104c00;
    }
    if (0x40 < len) {
      ERR_new();
      ERR_set_debug("ssl/statem/statem_lib.c",0x386,"tls_process_finished");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      uVar5 = 0;
      goto LAB_00104c00;
    }
    iVar4 = *(int *)(param_1 + 0x78);
    if (iVar4 == 0) {
      memcpy((void *)(param_1 + 0x468),b,len);
      *(ulong *)(param_1 + 0x4a8) = len;
    }
    else {
      memcpy((void *)(param_1 + 0x420),b,len);
      *(ulong *)(param_1 + 0x460) = len;
    }
    lVar2 = *(long *)(*(int **)(param_1 + 0x18) + 0x36);
    if ((((*(byte *)(lVar2 + 0x50) & 8) == 0) &&
        (iVar1 = **(int **)(param_1 + 0x18), iVar1 != 0x10000)) && (0x303 < iVar1)) {
      if (iVar4 == 0) {
        iVar4 = (**(code **)(lVar2 + 8))(param_1,param_1 + 0x5fc,param_1 + 0x5bc,0,auStack_38);
        if ((iVar4 == 0) ||
           (iVar4 = (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x10))(param_1,0x111)
           , iVar4 == 0)) goto LAB_00104c5b;
        iVar4 = tls_process_initial_server_flight(param_1);
        if (iVar4 == 0) {
          uVar5 = 0;
          goto LAB_00104c00;
        }
      }
      else if ((*(int *)(param_1 + 0xba8) != 4) &&
              (iVar4 = (**(code **)(lVar2 + 0x10))(param_1,0x121), iVar4 == 0)) {
        uVar5 = 0;
        goto LAB_00104c00;
      }
    }
    if ((((bVar6) && (*(long *)(param_1 + 0x260) != 0)) && (*(long *)(param_1 + 0x2e8) != 0)) &&
       (pcVar3 = *(code **)(*(long *)(param_1 + 0xc70) + 0x70), pcVar3 != (code *)0x0)) {
      (*pcVar3)(*(undefined8 *)(param_1 + 0xc80),0);
    }
    uVar5 = 1;
  }
  else {
    ERR_new();
    ERR_set_debug("ssl/statem/statem_lib.c",0x370,"tls_process_finished");
    ossl_statem_fatal(param_1,0x32,0x6f,0);
LAB_00104c5b:
    uVar5 = 0;
  }
LAB_00104c00:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



undefined8 tls13_restore_handshake_digest_for_pha(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(EVP_MD_CTX **)(param_1 + 0xbc8) == (EVP_MD_CTX *)0x0) {
    ERR_new();
    uVar2 = 0xb0a;
  }
  else {
    iVar1 = EVP_MD_CTX_copy_ex(*(EVP_MD_CTX **)(param_1 + 0x1b0),*(EVP_MD_CTX **)(param_1 + 0xbc8));
    if (iVar1 != 0) {
      return 1;
    }
    ERR_new();
    uVar2 = 0xb0f;
  }
  ERR_set_debug("ssl/statem/statem_lib.c",uVar2,"tls13_restore_handshake_digest_for_pha");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0;
}


