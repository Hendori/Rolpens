
void rlayer_msg_callback_wrapper(void)

{
  long in_R9;
  
  if (*(code **)(in_R9 + 0x4f8) != (code *)0x0) {
    (**(code **)(in_R9 + 0x4f8))();
    return;
  }
  return;
}



void rlayer_padding_wrapper(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00100059. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xce8))
            (*(undefined8 *)(param_1 + 0x40),param_2,param_3,*(undefined8 *)(param_1 + 0xcf0));
  return;
}



void rlayer_security_wrapper(void)

{
  ssl_security();
  return;
}



undefined8 ossl_early_data_count_ok(long param_1,long param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344);
    if ((uVar2 != 0) ||
       ((*(long *)(param_1 + 0x908) != 0 &&
        (uVar2 = *(uint *)(*(long *)(param_1 + 0x908) + 0x344), uVar2 != 0)))) {
LAB_00100098:
      if ((ulong)*(uint *)(param_1 + 0x1548) + param_2 <= (ulong)(param_3 + uVar2)) {
        *(uint *)(param_1 + 0x1548) = *(uint *)(param_1 + 0x1548) + (int)param_2;
        return 1;
      }
      ERR_new();
      uVar3 = 0xa5;
      goto LAB_001000fa;
    }
    ERR_new();
    ERR_set_debug("ssl/record/rec_layer_s3.c",0x83,"ossl_get_max_early_data");
    ossl_statem_fatal(param_1,0x50,0xc0103,0);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1544);
    if ((*(int *)(param_1 + 0xb18) == 2) &&
       (uVar1 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344), uVar1 < uVar2)) {
      uVar2 = uVar1;
    }
    if (uVar2 != 0) goto LAB_00100098;
  }
  ERR_new();
  uVar3 = 0x9c;
LAB_001000fa:
  ERR_set_debug("ssl/record/rec_layer_s3.c",uVar3,"ossl_early_data_count_ok");
  ossl_statem_fatal(param_1,(-(uint)(param_4 == 0) & 0xffffffba) + 0x50,0xa4,0);
  return 0;
}



void RECORD_LAYER_init(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}



void RECORD_LAYER_read_pending(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001001e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))(*(undefined8 *)(param_1 + 0x28));
  return;
}



bool RECORD_LAYER_processed_read_pending(long param_1)

{
  int iVar1;
  
  if (*(ulong *)(param_1 + 0xb0) <= *(ulong *)(param_1 + 0xb8)) {
    iVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(*(undefined8 *)(param_1 + 0x28));
    return iVar1 != 0;
  }
  return true;
}



bool RECORD_LAYER_write_pending(long param_1)

{
  return *(long *)(param_1 + 0x68) != 0;
}



long ssl3_pending(uint *param_1)

{
  uint *puVar1;
  pitem *ppVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  pitem *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (uint *)0x0) ||
     ((*param_1 != 0 &&
      (((*param_1 & 0x80) == 0 ||
       (param_1 = (uint *)ossl_quic_obj_get0_handshake_layer(), param_1 == (uint *)0x0)))))) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 6) + 0xd8) + 0x50) & 8) != 0) {
      local_28 = pqueue_iterator(*(pqueue *)(*(long *)(param_1 + 0x338) + 8));
      while (ppVar2 = pqueue_next(&local_28), ppVar2 != (pitem *)0x0) {
        lVar4 = lVar4 + *(long *)((long)ppVar2->data + 0x20);
      }
    }
    if (*(long *)(param_1 + 0x342) != 0) {
      puVar1 = param_1 + 0x349;
      lVar3 = 0;
      do {
        if ((char)*puVar1 != '\x17') goto LAB_001002be;
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + *(long *)(puVar1 + 5);
        puVar1 = puVar1 + 0x10;
      } while (*(long *)(param_1 + 0x342) != lVar3);
    }
    lVar3 = (**(code **)(*(long *)(param_1 + 0x31c) + 0x20))(*(undefined8 *)(param_1 + 800));
    lVar4 = lVar4 + lVar3;
  }
LAB_001002be:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4;
}



void SSL_CTX_set_default_read_buffer_len(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x200) = param_2;
  return;
}



void SSL_set_default_read_buffer_len(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  
  if (param_1 != (uint *)0x0) {
    puVar1 = param_1;
    if ((*param_1 == 0) ||
       ((((*param_1 & 0x80) != 0 &&
         (puVar1 = (uint *)ossl_quic_obj_get0_handshake_layer(), puVar1 != (uint *)0x0)) &&
        ((*param_1 & 0x80) == 0)))) {
      *(undefined8 *)(puVar1 + 0x326) = param_2;
    }
    return;
  }
  return;
}



char * SSL_rstate_string_long(SSL *s)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (s != (SSL *)0x0) {
    if (s->version == 0) {
LAB_001003d3:
      pcVar1 = "unknown";
      if ((s[4].options != 0) && (s[4].max_cert_list != 0)) {
        (**(code **)(s[4].options + 0x88))(s[4].max_cert_list,0,&local_18);
        pcVar1 = local_18;
      }
      goto LAB_00100401;
    }
    if ((s->version & 0x80U) != 0) {
      s = (SSL *)ossl_quic_obj_get0_handshake_layer();
      if (s != (SSL *)0x0) goto LAB_001003d3;
    }
  }
  pcVar1 = (char *)0x0;
LAB_00100401:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * SSL_rstate_string(SSL *s)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (s != (SSL *)0x0) {
    if (s->version == 0) {
LAB_00100473:
      pcVar1 = "unknown";
      if ((s[4].options != 0) && (s[4].max_cert_list != 0)) {
        (**(code **)(s[4].options + 0x88))(s[4].max_cert_list,&local_18,0);
        pcVar1 = local_18;
      }
      goto LAB_001004a1;
    }
    if ((s->version & 0x80U) != 0) {
      s = (SSL *)ossl_quic_obj_get0_handshake_layer();
      if (s != (SSL *)0x0) goto LAB_00100473;
    }
  }
  pcVar1 = (char *)0x0;
LAB_001004a1:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ossl_tls_handle_rlayer_return
              (SSL *param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_3 == 0) {
    *(uint *)&param_1->packet = (param_2 == 0) + 2;
    return -1;
  }
  *(undefined4 *)&param_1->packet = 1;
  if (param_3 == -3) {
    if (param_2 != 0) {
      ERR_new();
      ERR_set_debug(param_4,param_5,0);
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      return -1;
    }
    if (((ulong)param_1[3].client_CA & 0x80) == 0) {
      ERR_new();
      ERR_set_debug(param_4,param_5,0);
      ossl_statem_fatal(param_1,0x32,0x126,0);
      return 0;
    }
    SSL_set_shutdown(param_1,2);
    *(undefined4 *)((long)&param_1->mode + 4) = 0;
  }
  else {
    if (param_3 == -2) {
      iVar1 = (**(code **)(param_1[4].options + 0x50))(param_1[4].max_cert_list);
      if (iVar1 == -1) {
        return -1;
      }
      ERR_new();
      ERR_set_debug(param_4,param_5,0);
      ossl_statem_fatal(param_1,iVar1,0x139,0);
      return -1;
    }
    iVar1 = -1;
    if (-1 < param_3) {
      iVar1 = param_3;
    }
    if (param_3 != -1) {
      return iVar1;
    }
  }
  return 0;
}



undefined8
ssl3_write_bytes(SSL *param_1,char param_2,uchar *param_3,stack_st_OCSP_RESPID *param_4,
                ulong *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  _func_3155 *p_Var9;
  ulong uVar10;
  stack_st_OCSP_RESPID *psVar11;
  char *pcVar12;
  _func_3155 *p_Var13;
  uchar *puVar14;
  ulong uVar15;
  _func_3155 *p_Var16;
  long lVar17;
  stack_st_OCSP_RESPID *psVar18;
  long in_FS_OFFSET;
  ulong local_350;
  char local_348 [776];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (SSL *)0x0) && (param_1->version == 0)) {
    psVar18 = (stack_st_OCSP_RESPID *)param_1[4].tlsext_hostname;
    *(undefined4 *)&param_1->packet = 1;
    if (param_4 < psVar18) {
LAB_00100bfb:
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",299,"ssl3_write_bytes");
      ossl_statem_fatal(param_1,0x50,0x10f,0);
    }
    else {
      if (param_1[4].tlsext_ocsp_ids == (stack_st_OCSP_RESPID *)0x0) {
        if (*(int *)&param_1->write_hash == 4) {
LAB_00100b20:
          iVar4 = ossl_early_data_count_ok(param_1,param_4,0,1);
          if (iVar4 == 0) goto LAB_00100782;
          param_1[4].tlsext_hostname = (char *)0x0;
          if (param_1[4].tlsext_ocsp_ids != (stack_st_OCSP_RESPID *)0x0) goto LAB_001006e9;
        }
        else {
          param_1[4].tlsext_hostname = (char *)0x0;
        }
        if ((*(int *)((long)&param_1[4].expand + 4) != -1) ||
           (0 < *(int *)((long)&param_1[3].tlsext_session_ticket + 4))) {
          ossl_statem_set_in_init(param_1,1);
        }
      }
      else {
        if (param_4 < (stack_st_OCSP_RESPID *)
                      ((long)&((param_1[4].tlsext_ocsp_ids)->stack).num +
                      (long)&(psVar18->stack).num)) goto LAB_00100bfb;
        if (*(int *)&param_1->write_hash == 4) goto LAB_00100b20;
        param_1[4].tlsext_hostname = (char *)0x0;
      }
LAB_001006e9:
      iVar4 = SSL_in_init(param_1);
      if (((iVar4 != 0) && (iVar4 = ossl_statem_get_in_handshake(param_1), iVar4 == 0)) &&
         (*(int *)&param_1->write_hash != 6)) {
        uVar8 = (**(code **)&param_1->packet_length)(param_1);
        if ((int)uVar8 < 0) goto LAB_00100790;
        if ((int)uVar8 == 0) goto LAB_00100782;
      }
      if (param_1[4].tlsext_ocsp_ids == (stack_st_OCSP_RESPID *)0x0) {
LAB_0010085f:
        if (psVar18 == (stack_st_OCSP_RESPID *)0x0) {
          param_1[4].tlsext_ocsp_ids = (stack_st_OCSP_RESPID *)0x0;
          *(char *)&param_1[4].tlsext_ocsp_exts = param_2;
          param_1[4].tlsext_ocsp_resp = param_3;
        }
        if (psVar18 == param_4) {
          *param_5 = (ulong)psVar18;
          goto LAB_00100ad7;
        }
        if ((0 < *(int *)((long)&param_1->max_cert_list + 4)) &&
           (uVar8 = (**(code **)&param_1->wbio[1].flags)(param_1), (int)uVar8 < 1))
        goto LAB_00100b00;
        param_4 = (stack_st_OCSP_RESPID *)((long)param_4 - (long)psVar18);
        uVar6 = ssl_get_max_send_fragment(param_1);
        uVar15 = (ulong)uVar6;
        uVar6 = ssl_get_split_send_fragment(param_1);
        local_350 = (ulong)uVar6;
        if ((uVar15 != 0 && local_350 != 0) && (local_350 <= uVar15)) {
          iVar4 = param_1->state;
          if (param_1->state == 0x304) {
            iVar4 = 0x303;
          }
          iVar7 = SSL_get_state(param_1);
          if ((((iVar7 == 0xd) && (*(int *)&param_1[4].expand == 0)) &&
              (iVar7 = SSL_version(param_1), iVar7 >> 8 == 3)) &&
             ((iVar7 = SSL_version(param_1), 0x301 < iVar7 &&
              (*(int *)&param_1[3].cipher_list_by_id == 0)))) {
            iVar4 = 0x301;
          }
          do {
            uVar2._0_4_ = param_1[4].first_packet;
            uVar2._4_4_ = param_1[4].client_version;
            p_Var9 = (_func_3155 *)
                     (**(code **)(param_1[4].mode + 0x28))(uVar2,param_2,param_4,uVar15,&local_350);
            p_Var16 = param_1[3].tlsext_debug_cb;
            p_Var13 = p_Var16;
            if (p_Var9 <= p_Var16) {
              p_Var13 = p_Var9;
            }
            if (p_Var16 != (_func_3155 *)0x0) {
              p_Var9 = p_Var13;
            }
            p_Var16 = (_func_3155 *)0x20;
            if (p_Var9 < (_func_3155 *)0x21) {
              p_Var16 = p_Var9;
            }
            if (uVar15 < local_350) {
              ERR_new();
              uVar8 = 0x1ad;
              goto LAB_00100bdb;
            }
            uVar10 = (ulong)param_4 / (ulong)p_Var16;
            if (uVar10 < local_350) {
              psVar11 = param_4;
              if ((_func_3155 *)((ulong)param_4 % (ulong)p_Var16) == (_func_3155 *)0x0) {
                if (p_Var9 == (_func_3155 *)0x0) goto LAB_001009f4;
              }
              else {
                uVar10 = uVar10 + 1;
              }
              lVar17 = 0;
              p_Var13 = (_func_3155 *)0x0;
              pcVar12 = local_348;
              do {
                pcVar1 = (char *)((long)&(psVar18->stack).num + lVar17);
                p_Var13 = p_Var13 + 1;
                lVar17 = lVar17 + uVar10;
                *(ulong *)(pcVar12 + 0x10) = uVar10;
                *pcVar12 = param_2;
                *(char **)(pcVar12 + 8) = pcVar1 + (long)param_3;
                *(int *)(pcVar12 + 4) = iVar4;
                pcVar12 = pcVar12 + 0x18;
                uVar10 = uVar10 - (p_Var13 == (_func_3155 *)((ulong)param_4 % (ulong)p_Var16));
              } while (p_Var13 < p_Var16);
            }
            else {
              if (p_Var9 != (_func_3155 *)0x0) {
                puVar14 = param_3 + (long)psVar18;
                p_Var13 = (_func_3155 *)0x0;
                pcVar12 = local_348;
                do {
                  p_Var13 = p_Var13 + 1;
                  *(uchar **)(pcVar12 + 8) = puVar14;
                  puVar14 = puVar14 + local_350;
                  *pcVar12 = param_2;
                  *(int *)(pcVar12 + 4) = iVar4;
                  *(ulong *)(pcVar12 + 0x10) = local_350;
                  pcVar12 = pcVar12 + 0x18;
                } while (p_Var13 < p_Var16);
              }
              psVar11 = (stack_st_OCSP_RESPID *)(local_350 * (long)p_Var16);
            }
LAB_001009f4:
            param_1[4].tlsext_ocsp_ids = psVar11;
            uVar3._0_4_ = param_1[4].first_packet;
            uVar3._4_4_ = param_1[4].client_version;
            uVar5 = (**(code **)(param_1[4].mode + 0x30))(uVar3,local_348,p_Var16);
            uVar8 = ossl_tls_handle_rlayer_return(param_1,1,uVar5,"ssl/record/rec_layer_s3.c",0x1d5)
            ;
            if ((int)uVar8 < 1) goto LAB_00100b00;
            psVar11 = param_1[4].tlsext_ocsp_ids;
            if ((psVar11 == param_4) || ((param_2 == '\x17' && ((param_1[3].references & 1) != 0))))
            goto LAB_00100ac1;
            param_4 = (stack_st_OCSP_RESPID *)((long)param_4 - (long)psVar11);
            psVar18 = (stack_st_OCSP_RESPID *)
                      ((long)&(psVar18->stack).num + (long)&(psVar11->stack).num);
          } while( true );
        }
        ERR_new();
        uVar8 = 0x186;
LAB_00100bdb:
        ERR_set_debug("ssl/record/rec_layer_s3.c",uVar8,"ssl3_write_bytes");
        ossl_statem_fatal(param_1,0x50,0xc0103,0);
      }
      else {
        if (((param_1[4].tlsext_ocsp_ids <= param_4) &&
            (((param_1[3].references & 2) != 0 || (param_3 == param_1[4].tlsext_ocsp_resp)))) &&
           (param_2 == *(char *)&param_1[4].tlsext_ocsp_exts)) {
          uVar8._0_4_ = param_1[4].first_packet;
          uVar8._4_4_ = param_1[4].client_version;
          uVar5 = (**(code **)(param_1[4].mode + 0x38))(uVar8);
          uVar8 = ossl_tls_handle_rlayer_return(param_1,1,uVar5,"ssl/record/rec_layer_s3.c",0x156);
          if (0 < (int)uVar8) {
            psVar18 = (stack_st_OCSP_RESPID *)
                      ((long)&(psVar18->stack).num +
                      (long)&((param_1[4].tlsext_ocsp_ids)->stack).num);
            param_1[4].tlsext_ocsp_ids = (stack_st_OCSP_RESPID *)0x0;
            goto LAB_0010085f;
          }
LAB_00100b00:
          param_1[4].tlsext_hostname = (char *)psVar18;
          goto LAB_00100790;
        }
        ERR_new();
        ERR_set_debug("ssl/record/rec_layer_s3.c",0x105,"tls_write_check_pending");
        ossl_statem_fatal(param_1,0x50,0x7f,0);
      }
    }
  }
LAB_00100782:
  uVar8 = 0xffffffff;
LAB_00100790:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
LAB_00100ac1:
  *param_5 = (ulong)((long)&(psVar11->stack).num + (long)&(psVar18->stack).num);
  param_1[4].tlsext_ocsp_ids = (stack_st_OCSP_RESPID *)0x0;
LAB_00100ad7:
  uVar8 = 1;
  goto LAB_00100790;
}



undefined8 ssl_release_record(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  if (*param_2 == 0) {
    if ((param_3 == 0) || (lVar4 = param_2[4], lVar4 == param_3)) {
      CRYPTO_free((void *)param_2[3]);
      plVar1 = param_2 + 4;
      *plVar1 = *plVar1 - param_3;
      param_2[3] = 0;
      if (*plVar1 == 0) goto LAB_00100d11;
      goto LAB_00100cc5;
    }
  }
  else {
    if (param_3 == 0) {
      param_3 = param_2[4];
    }
    uVar2 = (**(code **)(*(long *)(param_1 + 0xc70) + 0x48))
                      (*(undefined8 *)(param_1 + 0xc80),*param_2,param_3);
    iVar3 = ossl_tls_handle_rlayer_return(param_1,0,uVar2,"ssl/record/rec_layer_s3.c",0x231);
    if (iVar3 < 1) {
      return 0;
    }
    lVar4 = param_2[4];
    if (lVar4 == param_3) {
      *(long *)(param_1 + 0xd10) = *(long *)(param_1 + 0xd10) + 1;
      param_2[4] = 0;
LAB_00100d11:
      param_2[5] = 0;
      return 1;
    }
  }
  param_2[4] = lVar4 - param_3;
LAB_00100cc5:
  param_2[5] = param_2[5] + param_3;
  return 1;
}



uint RECORD_LAYER_clear(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = 1;
  uVar3 = param_1[0x17];
  if (uVar3 < (ulong)param_1[0x16]) {
    do {
      param_1[0x17] = uVar3 + 1;
      uVar1 = ssl_release_record(*param_1,param_1 + (uVar3 + 3) * 8,0);
      uVar3 = param_1[0x17];
      uVar2 = uVar2 & uVar1;
    } while (uVar3 < (ulong)param_1[0x16]);
  }
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x16) = (undefined1  [16])0x0;
  BIO_free((BIO *)param_1[7]);
  param_1[7] = 0;
  if (param_1[3] != 0) {
    (**(code **)(param_1[3] + 8))(param_1[5]);
  }
  if (param_1[4] != 0) {
    (**(code **)(param_1[4] + 8))(param_1[6]);
  }
  BIO_free((BIO *)param_1[7]);
  param_1[7] = 0;
  *(undefined1 (*) [16])(param_1 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  if (param_1[0x11] != 0) {
    DTLS_RECORD_LAYER_clear(param_1);
  }
  return uVar2;
}



/* WARNING: Type propagation algorithm not settling */

ulong ssl3_read_bytes(SSL *param_1,char param_2,char *param_3,void *param_4,ulong param_5,
                     int param_6,size_t *param_7)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  code cVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  ulong uVar13;
  SSL_CTX *pSVar14;
  SSL_CTX *pSVar15;
  ulong uVar16;
  BIO *b;
  tls_session_secret_cb_fn ptVar17;
  _func_3059 *p_Var18;
  _func_3059 *p_Var19;
  ulong uVar20;
  int *piVar21;
  undefined1 *puVar22;
  size_t sVar23;
  undefined8 uVar24;
  ulong uVar25;
  uint uVar26;
  TLS_SESSION_TICKET_EXT *pTVar27;
  SRTP_PROTECTION_PROFILE **ppSVar28;
  _func_3059 *local_50;
  
  if ((param_1 == (SSL *)0x0) || (param_1->version != 0)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)invalidInstructionException();
    (*pcVar9)();
  }
  bVar10 = false;
  if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) {
    iVar11 = *(int *)&param_1->wbio->method;
    bVar10 = iVar11 != 0x10000 && 0x303 < iVar11;
  }
  if ((param_2 == '\0') || (param_2 == '\x17')) {
    if ((param_6 == 0) || (param_2 == '\x17')) {
LAB_00100ed5:
      iVar11 = ossl_statem_get_in_handshake(param_1);
      if ((iVar11 == 0) && (iVar11 = SSL_in_init(param_1), iVar11 != 0)) {
        uVar16 = (**(code **)&param_1->packet_length)(param_1);
        if ((int)uVar16 < 0) {
          return uVar16;
        }
        if ((int)uVar16 == 0) {
          return 0xffffffff;
        }
      }
      local_50 = (_func_3059 *)0x0;
      pTVar27 = param_1[4].tlsext_session_ticket;
LAB_00100ef5:
      do {
        *(undefined4 *)&param_1->packet = 1;
        if ((TLS_SESSION_TICKET_EXT *)param_1[4].tlsext_opaque_prf_input_len <= pTVar27)
        goto LAB_00101052;
LAB_00100f09:
        uVar16 = *(ulong *)&param_1[4].tlsext_status_expected;
        ppSVar28 = (SRTP_PROTECTION_PROFILE **)
                   (&param_1[4].tls_session_ticket_ext_cb + (long)pTVar27 * 8);
        cVar3 = *(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar27 * 0x40 + 4
                         );
        if (uVar16 == 0) {
LAB_00100f60:
          if (cVar3 == '\x15') {
            if ((int)param_1->mode != 0) {
LAB_00101426:
              ERR_new();
              ERR_set_debug("ssl/record/rec_layer_s3.c",0x2d8,"ssl3_read_bytes");
              ossl_statem_fatal(param_1,10,0x91,0);
              return 0xffffffff;
            }
            uVar26 = *(uint *)((long)&param_1->s3 + 4);
            if ((uVar26 & 2) != 0) goto LAB_0010153e;
            goto LAB_00100fb6;
          }
          if ((&param_1[4].initial_ctx)[(long)pTVar27 * 8] != (SSL_CTX *)0x0) {
            param_1[4].tlsext_ocsp_resplen = 0;
          }
          if ((int)param_1->mode != 0) {
            if (cVar3 != '\x16') goto LAB_00101426;
LAB_00100f9e:
            uVar26 = *(uint *)((long)&param_1->s3 + 4);
            if ((uVar26 & 2) != 0) {
LAB_0010153e:
              *(undefined4 *)&param_1->packet = 1;
              param_1[4].tlsext_session_ticket =
                   (TLS_SESSION_TICKET_EXT *)((long)&pTVar27->length + 1);
              return 0;
            }
            if (param_2 == '\x16') {
              SSL_in_init(param_1);
LAB_00101890:
              if ((*(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg +
                            (long)pTVar27 * 0x40 + 4) == '\x14') &&
                 (*(long *)&param_1[4].tlsext_status_expected != 0)) {
LAB_001018b3:
                ERR_new();
                uVar24 = 0x2fd;
                goto LAB_001018c4;
              }
              goto LAB_001012d0;
            }
            goto LAB_00100fb6;
          }
          uVar26 = *(uint *)((long)&param_1->s3 + 4);
          if ((uVar26 & 2) != 0) goto LAB_0010153e;
          if (param_2 == cVar3) {
LAB_00101294:
            iVar11 = SSL_in_init(param_1);
            if ((iVar11 == 0) || (cVar3 != '\x17')) {
              if (cVar3 == '\x16') goto LAB_00101890;
            }
            else if ((param_1->tls_session_ticket_ext_cb_arg == (void *)0x0) ||
                    (lVar8._0_4_ = param_1[1].server, lVar8._4_4_ = param_1[1].new_session,
                    lVar8 == 0)) {
              ERR_new();
              ERR_set_debug("ssl/record/rec_layer_s3.c",0x2f6,"ssl3_read_bytes");
              ossl_statem_fatal(param_1,10,100,0);
              return 0xffffffff;
            }
LAB_001012d0:
            if (param_3 != (char *)0x0) {
              *param_3 = *(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg +
                                  (long)pTVar27 * 0x40 + 4);
            }
            if (param_5 == 0) {
LAB_00101cff:
              if ((&param_1[4].initial_ctx)[(long)pTVar27 * 8] != (SSL_CTX *)0x0) {
                return 0;
              }
              iVar11 = ssl_release_record(param_1,ppSVar28,0);
              return (ulong)-(uint)(iVar11 == 0);
            }
            pTVar27 = param_1[4].tlsext_session_ticket;
            if (param_2 == '\x17') {
              uVar13 = 0;
              do {
                pSVar15 = (SSL_CTX *)ppSVar28[4];
                if ((SSL_CTX *)(param_5 - uVar13) <= (SSL_CTX *)ppSVar28[4]) {
                  pSVar15 = (SSL_CTX *)(param_5 - uVar13);
                }
                memcpy(param_4,(uchar *)((long)ppSVar28[5] + (long)ppSVar28[2]),(size_t)pSVar15);
                param_4 = (void *)((long)param_4 + (long)pSVar15);
                if (param_6 == 0) {
                  iVar11 = ssl_release_record(param_1,ppSVar28,pSVar15);
                  if (iVar11 == 0) {
                    return 0xffffffff;
                  }
                  if ((SSL_CTX *)ppSVar28[4] == (SSL_CTX *)0x0) goto LAB_0010139d;
LAB_00101332:
                  if ((TLS_SESSION_TICKET_EXT *)param_1[4].tlsext_opaque_prf_input_len <= pTVar27)
                  goto LAB_001013b5;
                }
                else {
                  pSVar14 = (SSL_CTX *)ppSVar28[4];
                  if (pSVar14 == (SSL_CTX *)0x0) {
                    iVar11 = ssl_release_record(param_1,ppSVar28,0);
                    if (iVar11 == 0) {
                      return 0xffffffff;
                    }
                    pSVar14 = (SSL_CTX *)ppSVar28[4];
                    if (pSVar14 == (SSL_CTX *)0x0) goto LAB_0010139d;
                  }
                  if (pSVar15 != pSVar14) goto LAB_00101332;
LAB_0010139d:
                  ppSVar28 = ppSVar28 + 8;
                  pTVar27 = (TLS_SESSION_TICKET_EXT *)((long)&pTVar27->length + 1);
                  if ((TLS_SESSION_TICKET_EXT *)param_1[4].tlsext_opaque_prf_input_len <= pTVar27)
                  goto LAB_001013b5;
                }
                uVar13 = (long)&pSVar15->method + uVar13;
                if (param_5 <= uVar13) goto LAB_001015c0;
              } while( true );
            }
LAB_0010120b:
            uVar13 = (ulong)ppSVar28[4];
            if (param_5 <= ppSVar28[4]) {
              uVar13 = param_5;
            }
            if (param_6 == 0) {
              memcpy(param_4,(void *)((long)ppSVar28[5] + (long)ppSVar28[2]),uVar13);
              sVar23 = uVar13;
LAB_00101a74:
              iVar11 = ssl_release_record(param_1,ppSVar28,sVar23);
              if (iVar11 == 0) {
                return 0xffffffff;
              }
            }
            else {
              memcpy(param_4,(void *)((long)ppSVar28[5] + (long)ppSVar28[2]),uVar13);
              if (ppSVar28[4] == (SRTP_PROTECTION_PROFILE *)0x0) {
                sVar23 = 0;
                goto LAB_00101a74;
              }
            }
            param_4 = (void *)((long)param_4 + uVar13);
            if (uVar13 == 0) goto LAB_00101037;
            goto LAB_001015c0;
          }
          if (cVar3 != '\x14') goto LAB_00100fb6;
          if (((param_2 == '\x16') && (param_3 != (char *)0x0)) && (!bVar10)) {
            SSL_in_init(param_1);
            cVar3 = *(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg +
                             (long)pTVar27 * 0x40 + 4);
            if (cVar3 == '\x14') {
              if (*(long *)&param_1[4].tlsext_status_expected != 0) goto LAB_001018b3;
              *param_3 = '\x14';
            }
            else {
              *param_3 = cVar3;
            }
            if (param_5 == 0) goto LAB_00101cff;
            goto LAB_0010120b;
          }
          iVar11 = *(int *)(&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar27 * 8);
          if (iVar11 != 2) {
            if (*(int *)&param_1->wbio->method == 0x10000) goto LAB_00101a28;
            if ((uVar26 & 1) != 0) goto LAB_00101daf;
            goto LAB_001013fd;
          }
LAB_00101d53:
          ERR_new();
          uVar24 = 0x343;
          goto LAB_00101145;
        }
        if (cVar3 != '\x16') {
          if ((((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
              (iVar11 = *(int *)&param_1->wbio->method, iVar11 != 0x10000)) && (0x303 < iVar11)) {
            ERR_new();
            ERR_set_debug("ssl/record/rec_layer_s3.c",0x2c7,"ssl3_read_bytes");
            ossl_statem_fatal(param_1,10,0x125,0);
            return 0xffffffff;
          }
          goto LAB_00100f60;
        }
        if ((&param_1[4].initial_ctx)[(long)pTVar27 * 8] != (SSL_CTX *)0x0) {
          param_1[4].tlsext_ocsp_resplen = 0;
          if ((int)param_1->mode == 0) goto LAB_0010127c;
          goto LAB_00100f9e;
        }
        if ((int)param_1->mode != 0) goto LAB_00100f9e;
LAB_0010127c:
        uVar26 = *(uint *)((long)&param_1->s3 + 4);
        if ((uVar26 & 2) != 0) goto LAB_0010153e;
        if (param_2 == '\x16') goto LAB_00101294;
LAB_00100fb6:
        iVar11 = *(int *)(&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar27 * 8);
        if (iVar11 == 2) goto LAB_00101d53;
        iVar7 = *(int *)&param_1->wbio->method;
        if (iVar7 == 0x10000) {
          if ((*(int *)&param_1->s2 != 0) || (cVar3 != '\x15')) {
LAB_00101a28:
            param_1->state = iVar11;
            ERR_new();
            ERR_set_debug("ssl/record/rec_layer_s3.c",0x350,"ssl3_read_bytes");
            ossl_statem_fatal(param_1,10,0xf4,0);
            return 0xffffffff;
          }
        }
        else if (cVar3 != '\x15') {
          if ((uVar26 & 1) != 0) {
            if (cVar3 != '\x16') {
LAB_00101daf:
              iVar11 = ssl_release_record(param_1,ppSVar28,0);
              if (iVar11 == 0) {
                return 0xffffffff;
              }
              ERR_new();
              ERR_set_debug("ssl/record/rec_layer_s3.c",0x3cd,"ssl3_read_bytes");
              ossl_statem_fatal(param_1,0xffffffff,0x123,0);
              return 0xffffffff;
            }
            if (((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
               (0x303 < iVar7)) goto LAB_00101700;
            iVar11 = ssl_release_record(param_1,ppSVar28,0);
            if (iVar11 == 0) {
              return 0xffffffff;
            }
            if ((param_1[3].references & 4) == 0) goto LAB_00101c7a;
            goto LAB_00101037;
          }
          if (cVar3 == '\x16') {
LAB_00101700:
            pSVar15 = (&param_1[4].initial_ctx)[(long)pTVar27 * 8];
            pSVar14 = (SSL_CTX *)(4 - uVar16);
            if (pSVar15 < (SSL_CTX *)(4 - uVar16)) {
              pSVar14 = pSVar15;
            }
            if (pSVar14 == (SSL_CTX *)0x0) {
              if (pSVar15 == (SSL_CTX *)0x0) goto LAB_00101732;
              if (uVar16 < 4) goto LAB_00100ef5;
            }
            else {
              memcpy((void *)((long)&param_1[4].servername_done + uVar16),
                     (&param_1[4].next_proto_negotiated)[(long)pTVar27 * 8] +
                     (long)(&param_1[4].tls_session_secret_cb)[(long)pTVar27 * 8],(size_t)pSVar14);
              *(long *)&param_1[4].tlsext_status_expected =
                   (long)&pSVar14->method + *(long *)&param_1[4].tlsext_status_expected;
LAB_00101732:
              iVar11 = ssl_release_record(param_1,ppSVar28);
              if (iVar11 == 0) {
                return 0xffffffff;
              }
              if (*(ulong *)&param_1[4].tlsext_status_expected < 4) goto LAB_00101037;
              if (*(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg +
                           (long)pTVar27 * 0x40 + 4) == '\x14') goto LAB_001013fd;
            }
LAB_00101768:
            iVar11 = ossl_statem_get_in_handshake(param_1);
            if (iVar11 == 0) {
              iVar11 = *(int *)&param_1->write_hash;
              ossl_statem_set_in_init(param_1,1);
              uVar16 = (**(code **)&param_1->packet_length)(param_1);
              if ((int)uVar16 < 0) {
                return uVar16;
              }
              if ((int)uVar16 == 0) {
                return 0xffffffff;
              }
              if (iVar11 == 0xb) {
                return 0xffffffff;
              }
              if (((param_1[3].references & 4) == 0) &&
                 (iVar11 = RECORD_LAYER_read_pending(&param_1[4].ex_data.dummy), iVar11 == 0)) {
LAB_00101c7a:
                *(undefined4 *)&param_1->packet = 3;
                b = SSL_get_rbio(param_1);
                BIO_clear_flags(b,0xf);
                BIO_set_flags(b,9);
                return 0xffffffff;
              }
              goto LAB_00101037;
            }
          }
          else {
            if (cVar3 == '\x14') {
LAB_001013fd:
              ERR_new();
              uVar24 = 0x3f3;
LAB_001018c4:
              ERR_set_debug("ssl/record/rec_layer_s3.c",uVar24,"ssl3_read_bytes");
              ossl_statem_fatal(param_1,10,0x85,0);
              return 0xffffffff;
            }
            if (3 < uVar16) goto LAB_00101768;
          }
          bVar5 = *(byte *)((long)&param_1[4].tls_session_ticket_ext_cb_arg +
                           (long)pTVar27 * 0x40 + 4);
          if (bVar5 < 0x17) {
            if (0x13 < bVar5) {
              ERR_new();
              ERR_set_debug("ssl/record/rec_layer_s3.c",0x438,"ssl3_read_bytes");
              ossl_statem_fatal(param_1,10,0xc0103,0);
              return 0xffffffff;
            }
          }
          else if (bVar5 == 0x17) {
            iVar11 = ossl_statem_app_data_allowed(param_1);
            if (iVar11 != 0) {
              *(undefined4 *)&param_1->tlsext_debug_cb = 2;
              return 0xffffffff;
            }
            iVar11 = ossl_statem_skip_early_data(param_1);
            if (iVar11 == 0) {
              ERR_new();
              uVar24 = 0x458;
              goto LAB_00101961;
            }
            iVar11 = ossl_early_data_count_ok
                               (param_1,(&param_1[4].initial_ctx)[(long)pTVar27 * 8],0x68,0);
            if (iVar11 == 0) {
              return 0xffffffff;
            }
            iVar11 = ssl_release_record(param_1,ppSVar28,0);
            if (iVar11 == 0) {
              return 0xffffffff;
            }
            goto LAB_00101037;
          }
          ERR_new();
          uVar24 = 0x42e;
LAB_00101961:
          ERR_set_debug("ssl/record/rec_layer_s3.c",uVar24,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,10,0xf5,0);
          return 0xffffffff;
        }
        if ((undefined1 *)0x7ffffffffffffffd <
            (undefined1 *)
            ((long)&(&param_1[4].initial_ctx)[(long)pTVar27 * 8][-1].srtp_profiles + 6U)) {
LAB_001014af:
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x362,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,10,0xcd,0);
          return 0xffffffff;
        }
        ptVar17 = (&param_1[4].tls_session_secret_cb)[(long)pTVar27 * 8] +
                  (long)(&param_1[4].next_proto_negotiated)[(long)pTVar27 * 8];
        cVar4 = ptVar17[1];
        sVar6 = *(short *)ptVar17;
        if ((&param_1[4].initial_ctx)[(long)pTVar27 * 8] != (SSL_CTX *)0x2) goto LAB_001014af;
        cVar3 = (char)*ptVar17;
        if ((code *)param_1[1].tlsext_opaque_prf_input_len != (code *)0x0) {
          (*(code *)param_1[1].tlsext_opaque_prf_input_len)
                    (0,param_1->state,0x15,ptVar17,2,param_1,param_1[1].tlsext_session_ticket);
        }
        uVar26 = (uint)(byte)cVar4;
        p_Var18 = (_func_3059 *)param_1[3].info_callback;
        if ((((_func_3059 *)param_1[3].info_callback != (_func_3059 *)0x0) ||
            (p_Var19 = param_1->method[1].ssl_peek, p_Var18 = p_Var19, p_Var19 != (_func_3059 *)0x0)
            ) || (p_Var18 = local_50, local_50 != (_func_3059 *)0x0)) {
          (*p_Var18)(param_1,(void *)0x4004,(uint)(sVar6 << 8) | (uint)(byte)((ushort)sVar6 >> 8));
          p_Var19 = p_Var18;
        }
        if (!bVar10) {
          if (cVar3 == '\x01') goto LAB_00101a90;
          if (uVar26 != 0) {
            if (cVar3 != '\x02') {
              if (uVar26 == 100) goto LAB_00101e34;
              goto LAB_001016a0;
            }
            goto LAB_00101da0;
          }
LAB_00101b5a:
          if (cVar3 != '\x02') {
LAB_001016a0:
            ERR_new();
            ERR_set_debug("ssl/record/rec_layer_s3.c",0x3a7,"ssl3_read_bytes");
            ossl_statem_fatal(param_1,0x2f,0xf6,0);
            return 0xffffffff;
          }
          cVar4 = (code)0x0;
          uVar26 = 0;
          iVar11 = 1000;
          goto LAB_00101b74;
        }
        if (uVar26 != 0x5a) {
LAB_00101a0a:
          if (uVar26 == 0) {
LAB_00101a13:
            puVar2 = (uint *)((long)&param_1->s3 + 4);
            *puVar2 = *puVar2 | 2;
            return 0;
          }
LAB_00101da0:
          iVar11 = uVar26 + 1000;
LAB_00101b74:
          *(uint *)&param_1->max_cert_list = uVar26;
          *(undefined4 *)&param_1->packet = 1;
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x38f,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,0xffffffff,iVar11,"SSL alert number %d",cVar4);
          puVar2 = (uint *)((long)&param_1->s3 + 4);
          *puVar2 = *puVar2 | 2;
          iVar11 = ssl_release_record(param_1,ppSVar28,0);
          if (iVar11 == 0) {
            return 0xffffffff;
          }
          SSL_CTX_remove_session
                    (*(SSL_CTX **)&param_1[4].mac_flags,(SSL_SESSION *)param_1[3].write_hash);
          return 0;
        }
LAB_00101a90:
        *(uint *)((long)&param_1->mode + 4) = uVar26;
        iVar11 = ssl_release_record(param_1,ppSVar28,0);
        if (iVar11 == 0) {
          return 0xffffffff;
        }
        iVar11 = param_1[4].tlsext_ocsp_resplen + 1;
        param_1[4].tlsext_ocsp_resplen = iVar11;
        if (iVar11 == 5) {
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x37c,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,10,0x199,0);
          return 0xffffffff;
        }
        if (bVar10) {
          if (uVar26 != 0x5a) goto LAB_00101a0a;
        }
        else {
          if (uVar26 == 0) {
            if (cVar3 != '\x01') goto LAB_00101b5a;
            goto LAB_00101a13;
          }
          if (cVar3 == '\x02') {
            iVar11 = uVar26 + 1000;
            goto LAB_00101b74;
          }
          if (uVar26 == 100) {
LAB_00101e34:
            ERR_new();
            ERR_set_debug("ssl/record/rec_layer_s3.c",0x3a0,"ssl3_read_bytes");
            ossl_statem_fatal(param_1,0x28,0x153,0);
            return 0xffffffff;
          }
          if (cVar3 != '\x01') goto LAB_001016a0;
        }
        pTVar27 = param_1[4].tlsext_session_ticket;
        local_50 = p_Var19;
      } while( true );
    }
  }
  else if ((param_2 == '\x16') && (param_6 == 0)) {
    uVar16 = *(ulong *)&param_1[4].tlsext_status_expected;
    if (uVar16 == 0) goto LAB_00100ed5;
    piVar1 = &param_1[4].servername_done;
    piVar21 = piVar1;
    if (param_5 == 0) {
LAB_001018f9:
      if (uVar16 - 1 < 3) {
        *(char *)&param_1[4].servername_done = (char)*piVar21;
        uVar13 = param_5;
        if ((uVar16 == 1) ||
           (*(undefined1 *)((long)&param_1[4].servername_done + 1) =
                 *(undefined1 *)((long)piVar21 + 1), uVar16 != 3)) goto LAB_001015b0;
      }
      else {
        if (2 < (ulong)((long)piVar1 - (long)((long)piVar21 + 1))) {
          param_1[4].servername_done = *piVar21;
          puVar22 = (undefined1 *)((long)piVar21 + (uVar16 & 0xfffffffffffffffc));
          uVar13 = param_5;
          if ((uVar16 & 3) != 0) {
            iVar11 = (int)(uVar16 & 0xfffffffffffffffc);
            *(undefined1 *)((long)&param_1[4].servername_done + (uVar16 & 0xfffffffc)) = *puVar22;
            uVar25 = (ulong)(iVar11 + 1);
            if (uVar25 < uVar16) {
              uVar20 = (ulong)(iVar11 + 2);
              *(undefined1 *)((long)&param_1[4].servername_done + uVar25) = puVar22[1];
              if (uVar20 < uVar16) {
                *(undefined1 *)((long)&param_1[4].servername_done + uVar20) = puVar22[2];
              }
            }
          }
          goto LAB_001015b0;
        }
        *(char *)&param_1[4].servername_done = (char)*piVar21;
        *(undefined1 *)((long)&param_1[4].servername_done + 1) = *(undefined1 *)((long)piVar21 + 1);
      }
      *(undefined1 *)((long)&param_1[4].servername_done + 2) = *(undefined1 *)((long)piVar21 + 2);
      uVar13 = param_5;
      if (uVar16 != 3) {
        *(undefined1 *)((long)&param_1[4].servername_done + 3) = *(undefined1 *)((long)piVar21 + 3);
      }
    }
    else {
      uVar13 = 0;
      do {
        iVar11 = *piVar21;
        piVar21 = (int *)((long)piVar21 + 1);
        *(char *)((long)param_4 + uVar13) = (char)iVar11;
        uVar13 = uVar13 + 1;
        uVar16 = *(long *)&param_1[4].tlsext_status_expected - 1;
        *(ulong *)&param_1[4].tlsext_status_expected = uVar16;
        if (param_5 == uVar13) {
          if (uVar16 != 0) goto LAB_001018f9;
          break;
        }
      } while (uVar16 != 0);
    }
LAB_001015b0:
    if (param_3 != (char *)0x0) {
      *param_3 = '\x16';
    }
LAB_001015c0:
    *param_7 = uVar13;
    return 1;
  }
  ERR_new();
  uVar24 = 0x278;
LAB_00101145:
  ERR_set_debug("ssl/record/rec_layer_s3.c",uVar24,"ssl3_read_bytes");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  return 0xffffffff;
LAB_001013b5:
  uVar13 = (long)&pSVar15->method + uVar13;
  if (uVar13 != 0) goto LAB_001015c0;
LAB_00101037:
  *(undefined4 *)&param_1->packet = 1;
  pTVar27 = param_1[4].tlsext_session_ticket;
  if ((TLS_SESSION_TICKET_EXT *)param_1[4].tlsext_opaque_prf_input_len <= pTVar27) {
LAB_00101052:
    uVar16 = 0;
    param_1[4].tlsext_opaque_prf_input_len = 0;
    param_1[4].tlsext_session_ticket = (TLS_SESSION_TICKET_EXT *)0x0;
    do {
      uVar12 = (**(code **)(param_1[4].options + 0x40))
                         (param_1[4].max_cert_list,
                          &param_1[4].tls_session_ticket_ext_cb + uVar16 * 8,
                          &param_1[4].tls_session_ticket_ext_cb_arg + uVar16 * 8,
                          (long)&param_1[4].tls_session_ticket_ext_cb_arg + uVar16 * 0x40 + 4,
                          &param_1[4].tls_session_secret_cb + uVar16 * 8,
                          &param_1[4].initial_ctx + uVar16 * 8);
      uVar13 = ossl_tls_handle_rlayer_return(param_1,0,uVar12,"ssl/record/rec_layer_s3.c",0x2b3);
      if ((int)uVar13 < 1) {
        return uVar13;
      }
      (&param_1[4].next_proto_negotiated)[uVar16 * 8] = (uchar *)0x0;
      param_1[4].tlsext_opaque_prf_input_len = param_1[4].tlsext_opaque_prf_input_len + 1;
      iVar11 = (**(code **)(param_1[4].options + 0x18))(param_1[4].max_cert_list);
    } while ((iVar11 != 0) && (uVar16 = param_1[4].tlsext_opaque_prf_input_len, uVar16 < 0x20));
    pTVar27 = param_1[4].tlsext_session_ticket;
  }
  goto LAB_00100f09;
}



bool RECORD_LAYER_is_sslv2_record(long *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(byte *)(*(long *)(*(long *)(*param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
    bVar1 = (int)param_1[0x19] == 2;
  }
  return bVar1;
}



void ossl_ssl_set_custom_record_layer(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc60) = param_2;
  *(undefined8 *)(param_1 + 0xc68) = param_3;
  return;
}



undefined8
ssl_set_new_record_layer
          (long param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14,undefined4 param_15,undefined8 param_16,long param_17,
          undefined8 param_18)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  BIO *a;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  int iVar8;
  BIO_METHOD *pBVar9;
  BIO *pBVar10;
  long lVar11;
  pitem *ppVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long in_FS_OFFSET;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  undefined8 *local_330;
  undefined8 local_2e0;
  long *local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  uint local_274;
  int local_270;
  int local_26c;
  int local_268;
  uint local_264;
  undefined8 local_260;
  undefined8 local_258 [4];
  undefined8 auStack_238 [7];
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110 [26];
  long local_40;
  
  bVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 8);
  local_260 = 0;
  local_270 = 0;
  local_268 = 0x4000;
  local_26c = 0;
  if (param_3 == 1) {
    local_268 = ssl_get_max_send_fragment();
  }
  if (param_17 != 0) {
    param_17 = *(long *)(param_17 + 0x10);
  }
  local_330 = *(undefined8 **)(param_1 + 0xc60);
  if (local_330 != (undefined8 *)0x0) {
    if (param_3 != 0) {
      local_2e0 = *(undefined8 *)(param_1 + 0x58);
      goto LAB_00102053;
    }
    local_2e0 = *(undefined8 *)(param_1 + 0x50);
    goto LAB_0010255c;
  }
  if (param_4 == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      if (param_3 != 0) {
        local_2e0 = *(undefined8 *)(param_1 + 0x58);
        local_330 = (undefined8 *)&ossl_tls_record_method;
        goto LAB_00102053;
      }
      local_2e0 = *(undefined8 *)(param_1 + 0x50);
      local_330 = (undefined8 *)&ossl_tls_record_method;
    }
    else {
      if (param_3 != 0) {
        local_2e0 = *(undefined8 *)(param_1 + 0x58);
        local_330 = (undefined8 *)&ossl_dtls_record_method;
LAB_00102053:
        OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
        local_1e8 = local_288;
        auStack_238[6] = local_2a8;
        uStack_200 = uStack_2a0;
        local_1f8 = local_298;
        uStack_1f0 = uStack_290;
        OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
        local_1c0 = local_288;
        local_1e0 = local_2a8;
        uStack_1d8 = uStack_2a0;
        local_1d0 = local_298;
        uStack_1c8 = uStack_290;
        goto LAB_001020ed;
      }
      local_2e0 = *(undefined8 *)(param_1 + 0x50);
      local_330 = (undefined8 *)&ossl_dtls_record_method;
    }
LAB_0010255c:
    OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
    local_1e8 = local_288;
    auStack_238[6] = local_2a8;
    uStack_200 = uStack_2a0;
    local_1f8 = local_298;
    uStack_1f0 = uStack_290;
    OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
    local_1c0 = local_288;
    local_1e0 = local_2a8;
    uStack_1d8 = uStack_2a0;
    local_1d0 = local_298;
    uStack_1c8 = uStack_290;
LAB_001025f6:
    local_2d0 = (undefined8 *)(param_1 + 0xc80);
    local_2d8 = (long *)(param_1 + 0xc70);
    OSSL_PARAM_construct_size_t(&local_2a8,"read_buffer_len",param_1 + 0xc98);
    local_198 = local_288;
    local_1b8 = local_2a8;
    uStack_1b0 = uStack_2a0;
    local_1a8 = local_298;
    uStack_1a0 = uStack_290;
    OSSL_PARAM_construct_int(&local_2a8,"read_ahead",param_1 + 0xca0);
    local_170 = local_288;
    local_190 = local_2a8;
    uStack_188 = uStack_2a0;
    local_180 = local_298;
    uStack_178 = uStack_290;
    OSSL_PARAM_construct_end(&local_2a8);
    local_148 = local_288;
    local_168 = local_2a8;
    uStack_160 = uStack_2a0;
    local_158 = local_298;
    uStack_150 = uStack_290;
    local_274 = (uint)(*(ulong *)(param_1 + 0x160) >> 8) & 1;
    if ((*(uint *)(param_1 + 0x578) & 1) != 0) {
      local_270 = 1;
    }
    if ((*(uint *)(param_1 + 0x578) & 4) == 0) {
      if ((*(ulong *)(param_1 + 0x160) & 0x100) == 0) goto LAB_00102207;
LAB_00102709:
      local_2a8 = local_168;
      uStack_2a0 = uStack_160;
      local_298 = local_158;
      uStack_290 = uStack_150;
      local_288 = local_148;
      OSSL_PARAM_construct_int(&local_2a8,"use_etm",&local_274);
      local_118 = local_288;
      local_138 = local_2a8;
      uStack_130 = uStack_2a0;
      puVar15 = local_110;
      local_128 = local_298;
      uStack_120 = uStack_290;
      if (local_270 == 0) goto LAB_00102216;
LAB_00102769:
      OSSL_PARAM_construct_int(&local_2a8,"stream_mac",&local_270);
      puVar16 = puVar15 + 5;
      *puVar15 = local_2a8;
      puVar15[1] = uStack_2a0;
      puVar15[2] = local_298;
      puVar15[3] = uStack_290;
      puVar15[4] = local_288;
      if (local_26c == 0) goto LAB_00102225;
LAB_001027bd:
      OSSL_PARAM_construct_int(&local_2a8,"tlstree",&local_26c);
      puVar15 = puVar16 + 5;
      *puVar16 = local_2a8;
      puVar16[1] = uStack_2a0;
      puVar16[2] = local_298;
      puVar16[3] = uStack_290;
      puVar16[4] = local_288;
      if (param_3 == 0) goto LAB_0010222d;
LAB_0010280a:
      if (local_268 == 0x4000) {
        puVar16 = puVar15;
        if (*(int *)(param_1 + 0x78) == 0) {
LAB_0010282c:
          bVar20 = param_3 == 1 && param_4 == 1;
          if (param_3 != 1 || param_4 != 1) {
            OSSL_PARAM_construct_end(&local_2a8);
            *puVar16 = local_2a8;
            puVar16[1] = uStack_2a0;
            goto LAB_0010285c;
          }
          local_264 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344);
          if ((local_264 != 0) ||
             ((*(long *)(param_1 + 0x908) != 0 &&
              (local_264 = *(uint *)(*(long *)(param_1 + 0x908) + 0x344), local_264 != 0))))
          goto LAB_00103046;
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x83,"ossl_get_max_early_data");
          ossl_statem_fatal(param_1,0x50,0xc0103,0);
          local_264 = 0;
          OSSL_PARAM_construct_end(&local_2a8);
          *puVar16 = local_2a8;
          puVar16[1] = uStack_2a0;
          puVar16[2] = local_298;
          puVar16[3] = uStack_290;
          puVar16[4] = local_288;
        }
        else {
          OSSL_PARAM_construct_end(&local_2a8);
          *puVar15 = local_2a8;
          puVar15[1] = uStack_2a0;
          puVar15[2] = local_298;
          puVar15[3] = uStack_290;
          puVar15[4] = local_288;
          bVar20 = param_4 != 0;
        }
      }
      else {
        OSSL_PARAM_construct_uint(&local_2a8,"max_frag_len",&local_268);
        iVar8 = *(int *)(param_1 + 0x78);
        puVar16 = puVar15 + 5;
        *puVar15 = local_2a8;
        puVar15[1] = uStack_2a0;
        puVar15[2] = local_298;
        puVar15[3] = uStack_290;
        puVar15[4] = local_288;
        if (iVar8 == 0) goto LAB_0010282c;
        OSSL_PARAM_construct_end(&local_2a8);
        puVar15[5] = local_2a8;
        puVar15[6] = uStack_2a0;
LAB_0010285c:
        puVar16[2] = local_298;
        puVar16[3] = uStack_290;
        bVar20 = param_4 != 0;
        puVar16[4] = local_288;
      }
LAB_00102880:
      while( true ) {
        if (((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) || (!bVar20))
        {
          uVar6 = 0;
        }
        else {
          uVar6 = dtls1_get_epoch(param_1,2);
        }
        local_258[0] = rlayer_dispatch._0_8_;
        local_258[1] = rlayer_dispatch._8_8_;
        if (*(long *)(param_1 + 0x4f8) == 0) {
          lVar11 = 3;
          lVar17 = 2;
          lVar13 = 1;
        }
        else {
          lVar11 = 4;
          lVar17 = 3;
          lVar13 = 2;
          local_258[2] = rlayer_dispatch._16_8_;
          local_258[3] = rlayer_dispatch._24_8_;
        }
        lVar3 = *(long *)(param_1 + 0xce8);
        local_258[lVar13 * 2] = rlayer_dispatch._32_8_;
        local_258[lVar13 * 2 + 1] = rlayer_dispatch._40_8_;
        if (lVar3 != 0) {
          local_258[lVar17 * 2] = rlayer_dispatch._48_8_;
          local_258[lVar17 * 2 + 1] = rlayer_dispatch._56_8_;
          lVar17 = lVar11;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x78);
        local_258[lVar17 * 2] = rlayer_dispatch._64_8_;
        local_258[lVar17 * 2 + 1] = rlayer_dispatch._72_8_;
        iVar8 = (*(code *)*local_330)
                          (*puVar2,puVar2[0x8e],param_2,uVar1,param_3,param_4,uVar6,param_5,param_6,
                           param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                           param_15,param_16,param_17,param_18,0,local_2e0,0,0,0,&local_138,
                           local_258 + 10,local_258,param_1,*(undefined8 *)(param_1 + 0xc68),
                           &local_260);
        BIO_free((BIO *)0x0);
        if (iVar8 != -1) break;
        puVar15 = (undefined8 *)*local_2d8;
        if ((puVar15 == (undefined8 *)0x0) ||
           (bVar19 = puVar15 == local_330, local_330 = puVar15, bVar19)) goto LAB_00102f70;
      }
      if (iVar8 == 1) {
        if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
          lVar17 = *local_2d8;
          if (lVar17 != 0) goto LAB_00102e1f;
        }
        else {
          ppVar12 = pqueue_peek(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x120));
          if ((ppVar12 == (pitem *)0x0) && (*local_2d8 != 0)) {
            iVar8 = (**(code **)(*local_2d8 + 8))(*local_2d0);
            if (iVar8 == 0) goto LAB_001031d1;
            *local_2d0 = local_260;
            *local_2d8 = (long)local_330;
            goto LAB_00102e57;
          }
        }
        *local_2d0 = local_260;
        *local_2d8 = (long)local_330;
        goto LAB_00102e57;
      }
      if (iVar8 != -2) goto LAB_001024d5;
LAB_00102a62:
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x592,"ssl_set_new_record_layer");
      ossl_statem_fatal(param_1,0x50,0x139,0);
    }
    else {
LAB_001021ec:
      local_26c = 1;
      local_168 = local_2a8;
      uStack_160 = uStack_2a0;
      local_158 = local_298;
      uStack_150 = uStack_290;
      local_148 = local_288;
LAB_001021f7:
      if (local_274 != 0) goto LAB_00102709;
LAB_00102207:
      puVar15 = &local_138;
      local_2a8 = local_168;
      uStack_2a0 = uStack_160;
      local_298 = local_158;
      uStack_290 = uStack_150;
      local_288 = local_148;
      if (local_270 != 0) goto LAB_00102769;
LAB_00102216:
      puVar16 = puVar15;
      if (local_26c != 0) goto LAB_001027bd;
LAB_00102225:
      puVar15 = puVar16;
      if (param_3 != 0) goto LAB_0010280a;
LAB_0010222d:
      if ((*(long *)(param_1 + 0x900) == 0) ||
         (bVar5 = *(char *)(*(long *)(param_1 + 0x900) + 0x358) - 1, 3 < bVar5)) {
        if (local_268 == 0x4000) {
          puVar16 = puVar15;
          if (*(int *)(param_1 + 0x78) == 0) {
            OSSL_PARAM_construct_end(&local_2a8);
            puVar16 = &local_2a8;
            for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
              *(undefined4 *)puVar15 = *(undefined4 *)puVar16;
              puVar16 = (undefined8 *)((long)puVar16 + (ulong)bVar21 * -8 + 4);
              puVar15 = (undefined8 *)((long)puVar15 + (ulong)bVar21 * -8 + 4);
            }
            goto LAB_001022f9;
          }
        }
        else {
          OSSL_PARAM_construct_uint(&local_2a8,"max_frag_len",&local_268);
          iVar8 = *(int *)(param_1 + 0x78);
          *puVar15 = local_2a8;
          puVar15[1] = uStack_2a0;
          puVar15[2] = local_298;
          puVar15[3] = uStack_290;
          puVar15[4] = local_288;
          puVar16 = puVar15 + 5;
          if (iVar8 == 0) goto LAB_00102c87;
        }
LAB_001022b0:
        if (1 < param_4 - 1U) {
LAB_001022c0:
          OSSL_PARAM_construct_end(&local_2a8);
          *puVar16 = local_2a8;
          puVar16[1] = uStack_2a0;
          puVar16[2] = local_298;
          puVar16[3] = uStack_290;
          puVar16[4] = local_288;
          goto LAB_001022f9;
        }
        local_264 = *(uint *)(param_1 + 0x1544);
        if ((*(int *)(param_1 + 0xb18) == 2) &&
           (uVar7 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344), uVar7 < local_264)) {
          local_264 = uVar7;
        }
        if (local_264 == 0) goto LAB_001022c0;
LAB_00103046:
        OSSL_PARAM_construct_uint32(&local_2a8,"max_early_data",&local_264);
        *puVar16 = local_2a8;
        puVar16[1] = uStack_2a0;
        puVar16[2] = local_298;
        puVar16[3] = uStack_290;
        puVar16[4] = local_288;
        OSSL_PARAM_construct_end(&local_2a8);
        puVar16[5] = local_2a8;
        puVar16[6] = uStack_2a0;
        bVar20 = param_4 != 0;
        puVar16[7] = local_298;
        puVar16[8] = uStack_290;
        puVar16[9] = local_288;
        if (param_3 != 0) goto LAB_00102880;
      }
      else {
        local_268 = 0x200 << (bVar5 & 0x1f);
        OSSL_PARAM_construct_uint(&local_2a8,"max_frag_len",&local_268);
        *puVar15 = local_2a8;
        puVar15[1] = uStack_2a0;
        puVar15[2] = local_298;
        puVar15[3] = uStack_290;
        puVar15[4] = local_288;
        puVar16 = puVar15 + 5;
        if (*(int *)(param_1 + 0x78) != 0) goto LAB_001022b0;
LAB_00102c87:
        OSSL_PARAM_construct_end(&local_2a8);
        puVar15[5] = local_2a8;
        puVar15[6] = uStack_2a0;
        puVar15[7] = local_298;
        puVar15[8] = uStack_290;
        puVar15[9] = local_288;
      }
LAB_001022f9:
      do {
        a = *(BIO **)(param_1 + 0xc90);
        uVar7 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8;
        if ((uVar7 == 0) || (param_4 == 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = dtls1_get_epoch(param_1,1);
          uVar7 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8;
        }
        if (uVar7 == 0) {
          pBVar9 = BIO_s_mem();
          pBVar10 = BIO_new(pBVar9);
        }
        else {
          pBVar9 = (BIO_METHOD *)BIO_s_dgram_mem();
          pBVar10 = BIO_new(pBVar9);
        }
        uVar4 = rlayer_dispatch._8_8_;
        uVar14 = rlayer_dispatch._0_8_;
        if (pBVar10 == (BIO *)0x0) {
          ERR_new();
          uVar14 = 0x569;
          goto LAB_001024e6;
        }
        *(BIO **)(param_1 + 0xc90) = pBVar10;
        local_258[0] = uVar14;
        local_258[1] = uVar4;
        if (*(long *)(param_1 + 0x4f8) == 0) {
          lVar11 = 3;
          lVar17 = 2;
          lVar13 = 1;
        }
        else {
          lVar11 = 4;
          lVar17 = 3;
          lVar13 = 2;
          local_258[2] = rlayer_dispatch._16_8_;
          local_258[3] = rlayer_dispatch._24_8_;
        }
        lVar3 = *(long *)(param_1 + 0xce8);
        local_258[lVar13 * 2] = rlayer_dispatch._32_8_;
        local_258[lVar13 * 2 + 1] = rlayer_dispatch._40_8_;
        if (lVar3 != 0) {
          local_258[lVar17 * 2] = rlayer_dispatch._48_8_;
          local_258[lVar17 * 2 + 1] = rlayer_dispatch._56_8_;
          lVar17 = lVar11;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x78);
        local_258[lVar17 * 2] = rlayer_dispatch._64_8_;
        local_258[lVar17 * 2 + 1] = rlayer_dispatch._72_8_;
        iVar8 = (*(code *)*local_330)
                          (*puVar2,puVar2[0x8e],param_2,uVar1,0,param_4,uVar6,param_5,param_6,
                           param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                           param_15,param_16,param_17,param_18,a,local_2e0,pBVar10,0,0,&local_138,
                           local_258 + 10,local_258,param_1,*(undefined8 *)(param_1 + 0xc68),
                           &local_260);
        BIO_free(a);
        if (iVar8 != -1) {
          if (iVar8 != 1) {
            if (iVar8 == -2) goto LAB_00102a62;
            goto LAB_001024d5;
          }
          if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
            lVar17 = *local_2d8;
            if (lVar17 != 0) goto LAB_00102e1f;
            *local_2d0 = local_260;
            *local_2d8 = (long)local_330;
          }
          else {
            if ((*local_2d8 != 0) && (iVar8 = (**(code **)(*local_2d8 + 8))(*local_2d0), iVar8 == 0)
               ) goto LAB_001031d1;
            *local_2d0 = local_260;
            *local_2d8 = (long)local_330;
          }
          goto LAB_00102f03;
        }
        puVar15 = (undefined8 *)*local_2d8;
      } while ((puVar15 != local_330) && (local_330 = puVar15, puVar15 != (undefined8 *)0x0));
LAB_00102f70:
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x59e,"ssl_set_new_record_layer");
      ossl_statem_fatal(param_1,0x50,0x142,0);
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_1 + 0x58);
    local_2e0 = *(undefined8 *)(param_1 + 0x50);
    local_330 = *(undefined8 **)(param_1 + 0xc78);
    puVar15 = *(undefined8 **)(param_1 + 0xc70);
    if (param_3 != 0) {
      if (local_330 == (undefined8 *)0x0) goto LAB_00102b7d;
      OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
      puVar15 = &local_2a8;
      puVar16 = local_258 + 10;
      for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
        *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
        puVar15 = (undefined8 *)((long)puVar15 + (ulong)bVar21 * -8 + 4);
        puVar16 = (undefined8 *)((long)puVar16 + ((ulong)bVar21 * -2 + 1) * 4);
      }
      OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
      puVar15 = &local_2a8;
      puVar16 = &local_1e0;
      for (lVar17 = 10; local_2e0 = uVar14, lVar17 != 0; lVar17 = lVar17 + -1) {
        *(undefined4 *)puVar16 = *(undefined4 *)puVar15;
        puVar15 = (undefined8 *)((long)puVar15 + (ulong)bVar21 * -8 + 4);
        puVar16 = (undefined8 *)((long)puVar16 + (ulong)bVar21 * -8 + 4);
      }
LAB_001020ed:
      local_2d0 = (undefined8 *)(param_1 + 0xc88);
      local_2d8 = (long *)(param_1 + 0xc78);
      OSSL_PARAM_construct_size_t(&local_2a8,"block_padding",param_1 + 0xcf8);
      local_198 = local_288;
      local_1b8 = local_2a8;
      uStack_1b0 = uStack_2a0;
      local_1a8 = local_298;
      uStack_1a0 = uStack_290;
      OSSL_PARAM_construct_size_t(&local_2a8,"hs_padding",param_1 + 0xd00);
      local_170 = local_288;
      local_190 = local_2a8;
      uStack_188 = uStack_2a0;
      local_180 = local_298;
      uStack_178 = uStack_290;
      OSSL_PARAM_construct_end(&local_2a8);
      local_148 = local_288;
      local_168 = local_2a8;
      uStack_160 = uStack_2a0;
      local_158 = local_298;
      uStack_150 = uStack_290;
      local_274 = (uint)(*(long *)(param_1 + 0x160) >> 10) & 1;
      if ((*(uint *)(param_1 + 0x578) & 2) != 0) {
        local_270 = 1;
      }
      if ((*(uint *)(param_1 + 0x578) & 8) != 0) goto LAB_001021ec;
      goto LAB_001021f7;
    }
    if (puVar15 != (undefined8 *)0x0) {
      OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
      puVar16 = &local_2a8;
      puVar18 = local_258 + 10;
      for (lVar17 = 10; lVar17 != 0; lVar17 = lVar17 + -1) {
        *(undefined4 *)puVar18 = *(undefined4 *)puVar16;
        puVar16 = (undefined8 *)((long)puVar16 + (ulong)bVar21 * -8 + 4);
        puVar18 = (undefined8 *)((long)puVar18 + ((ulong)bVar21 * -2 + 1) * 4);
      }
      OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
      puVar16 = &local_2a8;
      puVar18 = &local_1e0;
      for (lVar17 = 10; local_330 = puVar15, lVar17 != 0; lVar17 = lVar17 + -1) {
        *(undefined4 *)puVar18 = *(undefined4 *)puVar16;
        puVar16 = (undefined8 *)((long)puVar16 + (ulong)bVar21 * -8 + 4);
        puVar18 = (undefined8 *)((long)puVar18 + (ulong)bVar21 * -8 + 4);
      }
      goto LAB_001025f6;
    }
LAB_00102b7d:
    ERR_new();
    ERR_set_debug("ssl/record/rec_layer_s3.c",0x4fd,"ssl_set_new_record_layer");
    ERR_set_error(0x14,0xc0103,0);
  }
  goto LAB_00102508;
LAB_001024d5:
  ERR_new();
  uVar14 = 0x5a6;
  goto LAB_001024e6;
LAB_00102e1f:
  iVar8 = (**(code **)(lVar17 + 8))(*local_2d0);
  if (iVar8 != 0) {
    *local_2d0 = local_260;
    *local_2d8 = (long)local_330;
    if (param_3 == 0) {
LAB_00102f03:
      lVar17 = *(long *)(param_1 + 0xc70);
      uVar14 = *(undefined8 *)(param_1 + 0xc80);
    }
    else {
LAB_00102e57:
      lVar17 = *(long *)(param_1 + 0xc78);
      uVar14 = *(undefined8 *)(param_1 + 0xc88);
    }
    if (((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) &&
       (*(code **)(lVar17 + 0x70) != (code *)0x0)) {
      (**(code **)(lVar17 + 0x70))(uVar14,1);
    }
    if ((*(long *)(param_1 + 0x9e8) != 0) && (*(code **)(lVar17 + 0x78) != (code *)0x0)) {
      (**(code **)(lVar17 + 0x78))(uVar14);
    }
    uVar14 = 1;
    goto LAB_0010250a;
  }
LAB_001031d1:
  ERR_new();
  uVar14 = 0x5b7;
LAB_001024e6:
  ERR_set_debug("ssl/record/rec_layer_s3.c",uVar14,"ssl_set_new_record_layer");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
LAB_00102508:
  uVar14 = 0;
LAB_0010250a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar14;
}



uint RECORD_LAYER_reset(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = RECORD_LAYER_clear();
  uVar2 = ssl_set_new_record_layer
                    (*param_1,(-(uint)((*(uint *)(*(long *)(*(long *)(*param_1 + 0x18) + 0xd8) +
                                                 0x50) & 8) == 0) & 0xffff0001) + 0x1ffff,0,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0);
  uVar3 = ssl_set_new_record_layer
                    (*param_1,(-(uint)((*(uint *)(*(long *)(*(long *)(*param_1 + 0x18) + 0xd8) +
                                                 0x50) & 8) == 0) & 0xffff0001) + 0x1ffff,1,0,0,0,0,
                     0,0,0,0,0,0,0,0,0,0,0);
  return uVar3 & uVar1 & uVar2;
}



undefined8 ssl_set_record_protocol_version(long param_1)

{
  if (*(long *)(param_1 + 0xc70) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0xc78) != 0) {
    (**(code **)(*(long *)(param_1 + 0xc70) + 0x60))
              (*(undefined8 *)(param_1 + 0xc80),*(undefined4 *)(param_1 + 0x48));
    (**(code **)(*(long *)(param_1 + 0xc78) + 0x60))
              (*(undefined8 *)(param_1 + 0xc88),*(undefined4 *)(param_1 + 0x48));
    return 1;
  }
  return 0;
}



void ssl3_read_bytes_cold(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}


