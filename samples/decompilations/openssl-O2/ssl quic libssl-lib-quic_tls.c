
undefined8 quic_unprocessed_read_pending(void)

{
  return 0;
}



undefined8 quic_get_max_records(void)

{
  return 1;
}



undefined4 quic_get_alert_code(long param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



void quic_set_plain_alerts(void)

{
  return;
}



void quic_set_max_pipelines(void)

{
  return;
}



undefined8 quic_set_options(void)

{
  return 1;
}



undefined8 quic_get_compression(void)

{
  return 0;
}



undefined8 quic_alloc_buffers(void)

{
  return 1;
}



undefined8 add_transport_params_cb(void)

{
  undefined8 *in_RCX;
  undefined8 *in_R8;
  long in_stack_00000018;
  
  *in_RCX = *(undefined8 *)(in_stack_00000018 + 0x80);
  *in_R8 = *(undefined8 *)(in_stack_00000018 + 0x88);
  *(byte *)(in_stack_00000018 + 0xa8) = *(byte *)(in_stack_00000018 + 0xa8) | 8;
  return 1;
}



void free_transport_params_cb(void)

{
  return;
}



void parse_transport_params_cb(void)

{
  undefined8 in_RCX;
  undefined8 in_R8;
  long in_stack_00000018;
  
                    /* WARNING: Could not recover jumptable at 0x001000d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_stack_00000018 + 0x48))(in_RCX,in_R8,*(undefined8 *)(in_stack_00000018 + 0x50));
  return;
}



undefined8 quic_increment_sequence_ctr(long *param_1)

{
  if (param_1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0x50;
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x231,"quic_increment_sequence_ctr");
    ERR_set_error(0x14,0xc0101,0);
    *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
    return 0;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_tls.c",0x231,"quic_increment_sequence_ctr");
  ERR_set_error(0x14,0xc0101,0);
  return 0;
}



undefined8 quic_get_max_record_overhead(long *param_1)

{
  if (param_1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0x50;
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x22b,"quic_get_max_record_overhead");
    ERR_set_error(0x14,0xc0101,0);
    *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
    return 0;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_tls.c",0x22b,"quic_get_max_record_overhead");
  ERR_set_error(0x14,0xc0101,0);
  return 0;
}



undefined8 quic_app_data_pending(long *param_1)

{
  if (param_1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 7) = 0x50;
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x225,"quic_app_data_pending");
    ERR_set_error(0x14,0xc0101,0);
    *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
    return 0;
  }
  ERR_new();
  ERR_set_debug("ssl/quic/quic_tls.c",0x225,"quic_app_data_pending");
  ERR_set_error(0x14,0xc0101,0);
  return 0;
}



undefined8 quic_release_record(long *param_1,long *param_2,ulong param_3)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[8];
  if (uVar1 != 0) {
    uVar3 = param_1[9];
    if ((uVar3 <= uVar1 && param_3 <= uVar3) && (param_1 == param_2)) {
      if (uVar3 != param_3) {
LAB_001002c7:
        param_1[9] = uVar3 - param_3;
        return 1;
      }
      iVar2 = (**(code **)(*param_1 + 0x28))(uVar1,*(undefined8 *)(*param_1 + 0x30));
      if (iVar2 != 0) {
        param_1[8] = 0;
        uVar3 = param_1[9];
        goto LAB_001002c7;
      }
      *(undefined4 *)(param_1 + 7) = 0x50;
      ERR_new();
      uVar4 = 0x1ad;
      goto LAB_00100318;
    }
  }
  *(undefined4 *)(param_1 + 7) = 0x50;
  ERR_new();
  uVar4 = 0x1a6;
LAB_00100318:
  ERR_set_debug("ssl/quic/quic_tls.c",uVar4,"quic_release_record");
  ERR_set_error(0x14,0xc0103,0);
  *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  return 0xfffffffe;
}



undefined8 quic_set1_bio(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (uVar1 = BIO_up_ref(param_2), (int)uVar1 == 0)) {
    return uVar1;
  }
  BIO_free(*(BIO **)(param_1 + 0x10));
  *(long *)(param_1 + 0x10) = param_2;
  return 1;
}



undefined8
quic_read_record(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined1 *param_4,
                undefined8 param_5,ushort *param_6)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char local_45 [3];
  ushort local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1[8] == 0) && (param_1[9] == 0)) {
    BIO_clear_flags((BIO *)param_1[2],0xf);
    iVar2 = (**(code **)(*param_1 + 0x18))(param_5,param_6,*(undefined8 *)(*param_1 + 0x20));
    if (iVar2 != 0) {
      if (*(long *)param_6 == 0) {
        BIO_set_flags((BIO *)param_1[2],9);
        uVar3 = 0;
      }
      else {
        *param_2 = param_1;
        *param_3 = 0x304;
        *param_4 = 0x16;
        lVar1 = *(long *)param_6;
        param_1[8] = lVar1;
        param_1[9] = lVar1;
        if ((code *)param_1[10] != (code *)0x0) {
          local_45[0] = '\x17' - ((int)param_1[1] == 0);
          local_45[1] = '\x03';
          local_45[2] = '\x03';
          local_42 = *param_6 << 8 | *param_6 >> 8;
          (*(code *)param_1[10])(0,0x304,0x100,local_45,5,param_1[0xb]);
          (*(code *)param_1[10])(0,0x304,0x101,param_4,1,param_1[0xb]);
        }
        uVar3 = 1;
      }
      goto LAB_001004b5;
    }
    *(undefined4 *)(param_1 + 7) = 0x50;
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x174,"quic_read_record");
    ERR_set_error(0x14,0xc0103,0);
    *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  }
  uVar3 = 0xfffffffe;
LAB_001004b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 quic_write_records(long *param_1,byte *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  long local_30;
  uint local_28;
  undefined1 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 1) {
    BIO_clear_flags((BIO *)param_1[2],0xf);
    if ((code *)param_1[10] == (code *)0x0) {
LAB_001005e2:
      bVar3 = *param_2;
      if (bVar3 != 0x15) goto LAB_001005ee;
LAB_0010068b:
      if (*(long *)(param_2 + 0x10) == 2) {
        iVar4 = (**(code **)(*param_1 + 0x68))
                          (*(undefined8 *)(*param_1 + 0x70),
                           *(undefined1 *)(*(long *)(param_2 + 8) + 1));
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 7) = 0x50;
          ERR_new();
          ERR_set_debug("ssl/quic/quic_tls.c",0x130,"quic_write_records");
          uVar6 = 0xc0103;
          goto LAB_00100621;
        }
LAB_001006b0:
        uVar6 = 1;
        goto LAB_00100640;
      }
      *(undefined4 *)(param_1 + 7) = 0x50;
      ERR_new();
      ERR_set_debug("ssl/quic/quic_tls.c",0x126,"quic_write_records");
      uVar6 = 0x180;
    }
    else {
      local_28 = 0x17;
      if ((int)param_1[1] == 0) {
        local_28 = (uint)*param_2;
      }
      local_24 = (undefined1)*(undefined8 *)(param_2 + 0x10);
      local_28 = (((uint)*(undefined8 *)(param_2 + 0x10) & 0xff00 | *(uint *)(param_2 + 4) & 0xff)
                  << 8 | *(uint *)(param_2 + 4) >> 8 & 0xff) << 8 | local_28;
      (*(code *)param_1[10])(1,0x304,0x100,&local_28,5,param_1[0xb]);
      if ((int)param_1[1] == 0) goto LAB_001005e2;
      (*(code *)param_1[10])(1,0x304,0x101,param_2,1,param_1[0xb]);
      bVar3 = *param_2;
      if (bVar3 == 0x15) goto LAB_0010068b;
LAB_001005ee:
      if (bVar3 == 0x16) {
        iVar4 = (**(code **)(*param_1 + 8))
                          (param_1[3] + *(long *)(param_2 + 8),
                           *(long *)(param_2 + 0x10) - param_1[3],&local_30,
                           *(undefined8 *)(*param_1 + 0x10));
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 7) = 0x50;
          ERR_new();
          ERR_set_debug("ssl/quic/quic_tls.c",0x13e,"quic_write_records");
          uVar6 = 0xc0103;
        }
        else {
          uVar5 = local_30 + param_1[3];
          if (uVar5 == *(ulong *)(param_2 + 0x10)) {
            param_1[3] = 0;
            goto LAB_001006b0;
          }
          if (uVar5 < *(ulong *)(param_2 + 0x10)) {
            lVar1 = *(long *)param_2;
            lVar2 = *(long *)(param_2 + 8);
            param_1[3] = uVar5;
            param_1[4] = lVar1;
            param_1[5] = lVar2;
            param_1[6] = *(long *)(param_2 + 0x10);
            BIO_set_flags((BIO *)param_1[2],10);
            uVar6 = 0;
            goto LAB_00100640;
          }
          *(undefined4 *)(param_1 + 7) = 0x50;
          ERR_new();
          ERR_set_debug("ssl/quic/quic_tls.c",0x147,"quic_write_records");
          uVar6 = 0xc0103;
        }
      }
      else {
        *(undefined4 *)(param_1 + 7) = 0x50;
        ERR_new();
        ERR_set_debug("ssl/quic/quic_tls.c",0x15c,"quic_write_records");
        uVar6 = 0xc0103;
      }
    }
LAB_00100621:
    ERR_set_error(0x14,uVar6,0);
    *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  }
  else {
    if (param_1 != (long *)0x0) {
      *(undefined4 *)(param_1 + 7) = 0x50;
      ERR_new();
      ERR_set_debug("ssl/quic/quic_tls.c",0xfa,"quic_write_records");
      uVar6 = 0xc0103;
      goto LAB_00100621;
    }
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0xfa,"quic_write_records");
    ERR_set_error(0x14,0xc0103,0);
  }
  uVar6 = 0xfffffffe;
LAB_00100640:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quic_retry_write_records(long param_1)

{
  quic_write_records(param_1,param_1 + 0x20,1);
  return;
}



void quic_get_state(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if ((*(byte *)(*param_1 + 0xa8) & 2) == 0) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = &_LC2;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = "read header";
    }
  }
  else {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = "unknown";
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = "unknown";
      return;
    }
  }
  return;
}



undefined8 quic_set_protocol_version(long *param_1,int param_2)

{
  if (param_2 == 0x304) {
    return 1;
  }
  if (param_1 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x1bf,"quic_set_protocol_version");
    ERR_set_error(0x14,0xc0103,0);
  }
  else {
    *(undefined4 *)(param_1 + 7) = 0x50;
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x1bf,"quic_set_protocol_version");
    ERR_set_error(0x14,0xc0103,0);
    *(byte *)(*param_1 + 0xa8) = *(byte *)(*param_1 + 0xa8) | 2;
  }
  return 0;
}



undefined8 quic_free_buffers(void)

{
  return 1;
}



undefined8 quic_processed_read_pending(void)

{
  return 0;
}



void quic_set_first_handshake(void)

{
  return;
}



void quic_set_max_frag_len(void)

{
  return;
}



undefined8 quic_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    BIO_free(*(BIO **)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return 1;
  }
  return 1;
}



undefined8 quic_new_record_layer(void)

{
  int *piVar1;
  BIO *a;
  int iVar2;
  long *ptr;
  long lVar3;
  int in_R8D;
  int in_R9D;
  undefined8 uVar4;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000078;
  long in_stack_00000088;
  int *in_stack_000000b8;
  long in_stack_000000c0;
  long in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  
  ptr = (long *)CRYPTO_zalloc(0x60,"ssl/quic/quic_tls.c",0x6f);
  if (ptr == (long *)0x0) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x74,"quic_new_record_layer");
    ERR_set_error(0x14,0xc0103,0);
    return 0;
  }
  *(int *)(ptr + 1) = in_R9D;
  *ptr = in_stack_000000c8;
  if ((in_stack_00000088 == 0) || (iVar2 = BIO_up_ref(in_stack_00000088), iVar2 != 0)) {
    BIO_free((BIO *)ptr[2]);
    ptr[2] = in_stack_00000088;
    ptr[0xb] = in_stack_000000c0;
    *in_stack_000000d0 = ptr;
    if (in_stack_000000b8 != (int *)0x0) {
      iVar2 = *in_stack_000000b8;
      while (iVar2 != 0) {
        if (iVar2 == 2) {
          ptr[10] = *(long *)(in_stack_000000b8 + 2);
        }
        piVar1 = in_stack_000000b8 + 4;
        in_stack_000000b8 = in_stack_000000b8 + 4;
        iVar2 = *piVar1;
      }
    }
    if (in_R9D == 0) {
      return 1;
    }
    lVar3 = *ptr;
    uVar4 = 0;
    if (*(int *)(lVar3 + 0x7c) != 0) {
      iVar2 = EVP_CIPHER_is_a(in_stack_00000050,"AES-128-GCM");
      if (iVar2 == 0) {
        uVar4 = 2;
        iVar2 = EVP_CIPHER_is_a(in_stack_00000050,"AES-256-GCM");
        if (iVar2 != 0) goto LAB_00100bee;
        uVar4 = 3;
        iVar2 = EVP_CIPHER_is_a(in_stack_00000050,"CHACHA20-POLY1305");
        if (iVar2 != 0) goto LAB_00100bee;
        *(undefined4 *)(ptr + 7) = 0x50;
        ERR_new();
        ERR_set_debug("ssl/quic/quic_tls.c",0xa6,"quic_new_record_layer");
        uVar4 = 0xf9;
        goto LAB_00100b58;
      }
      uVar4 = 1;
LAB_00100bee:
      iVar2 = EVP_MD_up_ref(in_stack_00000078);
      if (iVar2 == 0) {
        *(undefined4 *)(ptr + 7) = 0x50;
        ERR_new();
        uVar4 = 0xad;
        goto LAB_00100b49;
      }
      lVar3 = *ptr;
    }
    iVar2 = (**(code **)(lVar3 + 0x38))
                      (in_R9D,in_R8D != 0,uVar4,in_stack_00000078,in_stack_00000010,
                       in_stack_00000018);
    if (iVar2 != 0) {
      return 1;
    }
    *(undefined4 *)(ptr + 7) = 0x50;
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0xb9,"quic_new_record_layer");
    ERR_set_error(0x14,0xc0103,0);
    *(byte *)(*ptr + 0xa8) = *(byte *)(*ptr + 0xa8) | 2;
    EVP_MD_free(in_stack_00000078);
  }
  else {
    *(undefined4 *)(ptr + 7) = 0x50;
    ERR_new();
    uVar4 = 0x7b;
LAB_00100b49:
    ERR_set_debug("ssl/quic/quic_tls.c",uVar4,"quic_new_record_layer");
    uVar4 = 0xc0103;
LAB_00100b58:
    ERR_set_error(0x14,uVar4,0);
    *(byte *)(*ptr + 0xa8) = *(byte *)(*ptr + 0xa8) | 2;
  }
  a = (BIO *)ptr[2];
  *in_stack_000000d0 = 0;
  BIO_free(a);
  CRYPTO_free(ptr);
  return 0;
}



undefined8 * ossl_quic_tls_new(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *ptr;
  long lVar15;
  
  if (((param_1[1] == 0) || (param_1[3] == 0)) || (param_1[5] == 0)) {
    ERR_new();
    ERR_set_debug("ssl/quic/quic_tls.c",0x27c,"ossl_quic_tls_new");
    ERR_set_error(0x14,0xc0102,0);
  }
  else {
    ptr = (undefined8 *)CRYPTO_zalloc(0xb0,"ssl/quic/quic_tls.c",0x280);
    if (ptr != (undefined8 *)0x0) {
      if (*(int *)((long)param_1 + 0x7c) != 0) {
        lVar15 = OSSL_ERR_STATE_new();
        ptr[0x12] = lVar15;
        if (lVar15 == 0) {
          CRYPTO_free(ptr);
          return (undefined8 *)0x0;
        }
      }
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      uVar4 = param_1[4];
      uVar5 = param_1[5];
      uVar6 = param_1[6];
      uVar7 = param_1[7];
      uVar8 = param_1[8];
      uVar9 = param_1[9];
      uVar10 = param_1[10];
      uVar11 = param_1[0xb];
      *ptr = *param_1;
      ptr[1] = uVar1;
      uVar1 = param_1[0xc];
      uVar12 = param_1[0xd];
      uVar13 = param_1[0xe];
      uVar14 = param_1[0xf];
      ptr[2] = uVar2;
      ptr[3] = uVar3;
      ptr[4] = uVar4;
      ptr[5] = uVar5;
      ptr[6] = uVar6;
      ptr[7] = uVar7;
      ptr[8] = uVar8;
      ptr[9] = uVar9;
      ptr[10] = uVar10;
      ptr[0xb] = uVar11;
      ptr[0xc] = uVar1;
      ptr[0xd] = uVar12;
      ptr[0xe] = uVar13;
      ptr[0xf] = uVar14;
      return ptr;
    }
  }
  return (undefined8 *)0x0;
}



void ossl_quic_tls_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OSSL_ERR_STATE_free(*(undefined8 *)((long)param_1 + 0x90));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_quic_tls_configure(long *param_1)

{
  int iVar1;
  long lVar2;
  BIO_METHOD *type;
  BIO *rbio;
  SSL *pSVar3;
  undefined8 uVar4;
  SSL *ssl;
  
  pSVar3 = (SSL *)*param_1;
  if (pSVar3 != (SSL *)0x0) {
    ssl = pSVar3;
    if (pSVar3->version != 0) {
      if (((pSVar3->version & 0x80U) == 0) ||
         (pSVar3 = (SSL *)ossl_quic_obj_get0_handshake_layer(pSVar3), pSVar3 == (SSL *)0x0))
      goto LAB_00100f78;
      ssl = (SSL *)*param_1;
    }
    lVar2 = SSL_ctrl(ssl,0x7b,0x304,(void *)0x0);
    if (lVar2 != 0) {
      type = BIO_s_null();
      rbio = BIO_new(type);
      if (rbio != (BIO *)0x0) {
        SSL_set_bio((SSL *)*param_1,rbio,rbio);
        SSL_clear_options(*param_1,0x100000);
        ossl_ssl_set_custom_record_layer(pSVar3,quic_tls_record_method,param_1);
        iVar1 = ossl_tls_add_custom_ext_intern
                          (0,*(long *)&pSVar3[3].packet_length + 0x80,(int)param_1[0xf] != 0,0x39,
                           0x4a0,add_transport_params_cb,free_transport_params_cb,param_1,
                           parse_transport_params_cb,param_1);
        if (iVar1 == 0) {
          return 0;
        }
        pSVar3->kssl_ctx = (KSSL_CTX *)((ulong)pSVar3->kssl_ctx | 0x2000);
        return 1;
      }
      ERR_new();
      uVar4 = 0x2ce;
      goto LAB_00100f89;
    }
  }
LAB_00100f78:
  ERR_new();
  uVar4 = 0x2ca;
LAB_00100f89:
  ERR_set_debug("ssl/quic/quic_tls.c",uVar4,"ossl_quic_tls_configure");
  ERR_set_error(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")",1,1,
                "internal error");
  if (*(int *)((long)param_1 + 0x7c) != 0) {
    OSSL_ERR_STATE_save_to_mark(param_1[0x12]);
    *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
    param_1[0x13] = 1;
    param_1[0x14] = (long)"internal error";
    ERR_pop_to_mark();
  }
  return 0;
}



undefined8 ossl_quic_tls_tick(undefined8 *param_1)

{
  SSL *s;
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_2c;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(byte *)(param_1 + 0x15) & 2) == 0) {
    ERR_set_mark();
    bVar1 = *(byte *)(param_1 + 0x15);
    if ((bVar1 & 1) == 0) {
      puVar4 = (uint *)*param_1;
      if ((puVar4 == (uint *)0x0) ||
         ((*puVar4 != 0 &&
          (((*puVar4 & 0x80) == 0 ||
           (puVar4 = (uint *)ossl_quic_obj_get0_handshake_layer(puVar4), puVar4 == (uint *)0x0))))))
      {
        ERR_new();
        uVar5 = 0x310;
      }
      else {
        if (*(int *)(param_1 + 0xf) == 0) {
          if ((*(long *)(puVar4 + 700) == 0) || (*(long *)(puVar4 + 0x2be) == 0)) {
            ERR_new();
            ERR_set_debug("ssl/quic/quic_tls.c",0x31e,"ossl_quic_tls_tick");
            ERR_set_error(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")",
                          0x178,0x178,"ALPN must be configured when using QUIC");
            if (*(int *)((long)param_1 + 0x7c) != 0) {
              OSSL_ERR_STATE_save_to_mark(param_1[0x12]);
              *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
              param_1[0x13] = 0x178;
              param_1[0x14] = "ALPN must be configured when using QUIC";
              ERR_pop_to_mark();
            }
            goto LAB_00101053;
          }
        }
        else if (*(long *)(*(long *)(puVar4 + 2) + 0x2c0) == 0) {
          ERR_new();
          uVar5 = 0x31b;
          goto LAB_00101209;
        }
        iVar2 = ossl_quic_tls_configure(param_1);
        if (iVar2 != 0) {
          iVar2 = *(int *)(param_1 + 0xf);
          s = (SSL *)*param_1;
          *(ulong *)(puVar4 + 0x58) = *(ulong *)(puVar4 + 0x58) | 0x4000;
          if (iVar2 == 0) {
            SSL_set_connect_state(s);
          }
          else {
            SSL_set_accept_state(s);
          }
          bVar1 = *(byte *)(param_1 + 0x15) | 1;
          *(byte *)(param_1 + 0x15) = bVar1;
          goto LAB_001010f7;
        }
        ERR_new();
        uVar5 = 0x323;
      }
LAB_00101209:
      ERR_set_debug("ssl/quic/quic_tls.c",uVar5,"ossl_quic_tls_tick");
      ERR_set_error(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")",1,1,
                    "internal error");
      if (*(int *)((long)param_1 + 0x7c) != 0) {
        OSSL_ERR_STATE_save_to_mark(param_1[0x12]);
        *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
        param_1[0x13] = 1;
        param_1[0x14] = "internal error";
        ERR_pop_to_mark();
      }
    }
    else {
LAB_001010f7:
      if ((bVar1 & 4) == 0) {
        iVar2 = SSL_do_handshake((SSL *)*param_1);
      }
      else {
        iVar2 = SSL_read((SSL *)*param_1,(void *)0x0,0);
      }
      if (iVar2 < 1) {
        iVar3 = ERR_count_to_mark();
        iVar2 = ossl_ssl_get_error(*param_1,iVar2,0 < iVar3);
        if (iVar2 < 5) {
          if (iVar2 < 2) {
LAB_0010136c:
            ERR_new();
            uVar5 = 0x346;
            goto LAB_00101209;
          }
        }
        else if (1 < iVar2 - 0xbU) goto LAB_0010136c;
LAB_001012b0:
        ERR_pop_to_mark();
        uVar5 = 1;
        goto LAB_00101055;
      }
      if ((*(byte *)(param_1 + 0x15) & 4) != 0) goto LAB_001012b0;
      SSL_get0_alpn_selected(*param_1,&local_28,&local_2c);
      if ((local_28 != 0) && (local_2c != 0)) {
        *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 4;
        ERR_pop_to_mark();
        uVar5 = (*(code *)param_1[0xb])(param_1[0xc]);
        goto LAB_00101055;
      }
      ERR_new();
      ERR_set_debug("ssl/quic/quic_tls.c",0x34e,"ossl_quic_tls_tick");
      ERR_set_error(0x14,0x189,"handshake layer error, error code %llu (0x%llx) (\"%s\")",0x178,
                    0x178,"no application protocol negotiated");
      if (*(int *)((long)param_1 + 0x7c) != 0) {
        OSSL_ERR_STATE_save_to_mark(param_1[0x12]);
        *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) | 2;
        param_1[0x13] = 0x178;
        param_1[0x14] = "no application protocol negotiated";
        ERR_pop_to_mark();
      }
    }
  }
LAB_00101053:
  uVar5 = 0;
LAB_00101055:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



bool ossl_quic_tls_set_transport_params(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  
  bVar1 = (*(byte *)(param_1 + 0xa8) & 8) == 0;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x80) = param_2;
    *(undefined8 *)(param_1 + 0x88) = param_3;
  }
  return bVar1;
}



byte ossl_quic_tls_get_error
               (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xa8);
  if ((bVar1 & 2) != 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x98);
    *param_3 = *(undefined8 *)(param_1 + 0xa0);
    *param_4 = *(undefined8 *)(param_1 + 0x90);
    bVar1 = *(byte *)(param_1 + 0xa8);
  }
  return bVar1 >> 1 & 1;
}



bool ossl_quic_tls_is_cert_request(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  bool bVar3;
  
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)0x0) {
    if (*puVar1 == 0) {
      return puVar1[0xbe] == 0xd;
    }
    if ((*puVar1 & 0x80) != 0) {
      lVar2 = ossl_quic_obj_get0_handshake_layer();
      bVar3 = false;
      if (lVar2 != 0) {
        bVar3 = *(int *)(lVar2 + 0x2f8) == 0xd;
      }
      return bVar3;
    }
  }
  return false;
}



bool ossl_quic_tls_has_bad_max_early_data(undefined8 *param_1)

{
  SSL_SESSION *pSVar1;
  
  pSVar1 = SSL_get_session((SSL *)*param_1);
  return *(int *)(pSVar1[1].krb5_client_princ + 0x5c) - 1U < 0xfffffffe;
}



undefined8 ossl_quic_tls_set_early_data_enabled(undefined8 *param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)*param_1;
  if (((puVar2 != (uint *)0x0) &&
      (((*puVar2 == 0 ||
        (((*puVar2 & 0x80) != 0 &&
         (puVar2 = (uint *)ossl_quic_obj_get0_handshake_layer(puVar2), puVar2 != (uint *)0x0)))) &&
       ((*(byte *)((long)puVar2 + 0x161) & 0x20) != 0)))) &&
     (iVar1 = SSL_in_before(*param_1), iVar1 != 0)) {
    if (param_2 == 0) {
      puVar2[0x550] = 0;
      puVar2[0x3c] = 0;
    }
    else if (puVar2[0x1e] == 0) {
      if (((*(long *)(puVar2 + 0x240) == 0) || (*(int *)(*(long *)(puVar2 + 0x240) + 0x344) != -1))
         && (*(long *)(puVar2 + 0x262) == 0)) {
        return 0;
      }
      puVar2[0x3c] = 2;
    }
    else {
      puVar2[0x550] = 0xffffffff;
      puVar2[0x3c] = 9;
    }
    return 1;
  }
  return 0;
}


