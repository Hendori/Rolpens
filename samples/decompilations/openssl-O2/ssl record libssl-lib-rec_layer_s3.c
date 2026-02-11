
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
                uVar10 = uVar10 - ((_func_3155 *)((ulong)param_4 % (ulong)p_Var16) == p_Var13);
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
                     int param_6,ulong *param_7)

{
  uint *puVar1;
  code cVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  SSL_CTX *pSVar12;
  SSL_CTX *pSVar13;
  long lVar14;
  ulong uVar15;
  BIO *b;
  int *piVar16;
  tls_session_secret_cb_fn ptVar17;
  long lVar18;
  undefined8 uVar19;
  uint uVar20;
  TLS_SESSION_TICKET_EXT *pTVar21;
  _func_3059 *p_Var22;
  _func_3059 *p_Var23;
  SRTP_PROTECTION_PROFILE **ppSVar24;
  _func_3059 *local_48;
  
  if ((param_1 == (SSL *)0x0) || (param_1->version != 0)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)invalidInstructionException();
    (*pcVar6)();
  }
  bVar7 = false;
  if ((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) {
    iVar9 = *(int *)&param_1->wbio->method;
    bVar7 = iVar9 != 0x10000 && 0x303 < iVar9;
  }
  if ((param_2 == '\0') || (param_2 == '\x17')) {
    if ((param_6 != 0) && (param_2 != '\x17')) goto LAB_00101134;
  }
  else {
    if ((param_2 != '\x16') || (param_6 != 0)) {
LAB_00101134:
      ERR_new();
      uVar19 = 0x278;
LAB_00101145:
      ERR_set_debug("ssl/record/rec_layer_s3.c",uVar19,"ssl3_read_bytes");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      return 0xffffffff;
    }
    lVar14 = *(long *)&param_1[4].tlsext_status_expected;
    if (lVar14 != 0) {
      piVar16 = &param_1[4].servername_done;
      if (param_5 == 0) {
LAB_00101861:
        lVar18 = 0;
        do {
          *(undefined1 *)((long)&param_1[4].servername_done + lVar18) =
               *(undefined1 *)((long)piVar16 + lVar18);
          lVar18 = lVar18 + 1;
          uVar15 = param_5;
        } while (lVar14 != lVar18);
      }
      else {
        uVar15 = 0;
        do {
          iVar9 = *piVar16;
          piVar16 = (int *)((long)piVar16 + 1);
          *(char *)((long)param_4 + uVar15) = (char)iVar9;
          uVar15 = uVar15 + 1;
          lVar14 = *(long *)&param_1[4].tlsext_status_expected + -1;
          *(long *)&param_1[4].tlsext_status_expected = lVar14;
          if (param_5 == uVar15) {
            uVar15 = param_5;
            if (lVar14 != 0) goto LAB_00101861;
            break;
          }
        } while (lVar14 != 0);
      }
      if (param_3 != (char *)0x0) {
        *param_3 = '\x16';
      }
LAB_0010154d:
      *param_7 = uVar15;
      return 1;
    }
  }
  iVar9 = ossl_statem_get_in_handshake(param_1);
  if ((iVar9 == 0) && (iVar9 = SSL_in_init(param_1), iVar9 != 0)) {
    uVar15 = (**(code **)&param_1->packet_length)(param_1);
    if ((int)uVar15 < 0) {
      return uVar15;
    }
    if ((int)uVar15 == 0) {
      return 0xffffffff;
    }
  }
  local_48 = (_func_3059 *)0x0;
  pTVar21 = param_1[4].tlsext_session_ticket;
LAB_00100ef7:
  do {
    *(undefined4 *)&param_1->packet = 1;
    if ((TLS_SESSION_TICKET_EXT *)param_1[4].tlsext_opaque_prf_input_len <= pTVar21)
    goto LAB_00101057;
LAB_00100f0b:
    uVar15 = *(ulong *)&param_1[4].tlsext_status_expected;
    ppSVar24 = (SRTP_PROTECTION_PROFILE **)
               (&param_1[4].tls_session_ticket_ext_cb + (long)pTVar21 * 8);
    cVar8 = *(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar21 * 0x40 + 4);
    if (uVar15 == 0) {
LAB_00100f60:
      if (cVar8 == '\x15') {
        if ((int)param_1->mode != 0) {
LAB_001013b6:
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x2d8,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,10,0x91,0);
          return 0xffffffff;
        }
        uVar20 = *(uint *)((long)&param_1->s3 + 4);
        if ((uVar20 & 2) != 0) goto LAB_001014ce;
        goto LAB_00100fb9;
      }
      if ((&param_1[4].initial_ctx)[(long)pTVar21 * 8] != (SSL_CTX *)0x0) {
        param_1[4].tlsext_ocsp_resplen = 0;
      }
      if ((int)param_1->mode != 0) {
        if (cVar8 != '\x16') goto LAB_001013b6;
LAB_00100fa0:
        uVar20 = *(uint *)((long)&param_1->s3 + 4);
        if ((uVar20 & 2) != 0) {
LAB_001014ce:
          *(undefined4 *)&param_1->packet = 1;
          param_1[4].tlsext_session_ticket = (TLS_SESSION_TICKET_EXT *)((long)&pTVar21->length + 1);
          return 0;
        }
        if (param_2 == '\x16') {
          SSL_in_init(param_1);
LAB_001017f8:
          if ((*(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar21 * 0x40 + 4)
               == '\x14') && (*(long *)&param_1[4].tlsext_status_expected != 0)) {
LAB_0010181b:
            ERR_new();
            uVar19 = 0x2fd;
            goto LAB_0010182c;
          }
          goto LAB_0010133d;
        }
        goto LAB_00100fb9;
      }
      uVar20 = *(uint *)((long)&param_1->s3 + 4);
      if ((uVar20 & 2) != 0) goto LAB_001014ce;
      if (param_2 == cVar8) {
LAB_00101307:
        iVar9 = SSL_in_init(param_1);
        if ((iVar9 == 0) || (cVar8 != '\x17')) {
          if (cVar8 == '\x16') goto LAB_001017f8;
        }
        else if ((param_1->tls_session_ticket_ext_cb_arg == (void *)0x0) ||
                (lVar14._0_4_ = param_1[1].server, lVar14._4_4_ = param_1[1].new_session,
                lVar14 == 0)) {
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x2f6,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,10,100,0);
          return 0xffffffff;
        }
LAB_0010133d:
        if (param_3 == (char *)0x0) goto LAB_00101208;
        cVar8 = *(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar21 * 0x40 + 4
                         );
LAB_00101201:
        *param_3 = cVar8;
LAB_00101208:
        if (param_5 == 0) {
          if ((&param_1[4].initial_ctx)[(long)pTVar21 * 8] != (SSL_CTX *)0x0) {
            return 0;
          }
          iVar9 = ssl_release_record(param_1,ppSVar24,0);
          return (ulong)-(uint)(iVar9 == 0);
        }
        pTVar21 = param_1[4].tlsext_session_ticket;
        uVar11 = 0;
        do {
          pSVar13 = (SSL_CTX *)ppSVar24[4];
          if ((SSL_CTX *)(param_5 - uVar11) <= (SSL_CTX *)ppSVar24[4]) {
            pSVar13 = (SSL_CTX *)(param_5 - uVar11);
          }
          memcpy(param_4,(uchar *)((long)ppSVar24[5] + (long)ppSVar24[2]),(size_t)pSVar13);
          param_4 = (void *)((long)param_4 + (long)pSVar13);
          if (param_6 == 0) {
            iVar9 = ssl_release_record(param_1,ppSVar24,pSVar13);
            if (iVar9 == 0) {
              return 0xffffffff;
            }
            if ((SSL_CTX *)ppSVar24[4] == (SSL_CTX *)0x0) {
LAB_001012ac:
              ppSVar24 = ppSVar24 + 8;
              pTVar21 = (TLS_SESSION_TICKET_EXT *)((long)&pTVar21->length + 1);
            }
          }
          else {
            pSVar12 = (SSL_CTX *)ppSVar24[4];
            if (pSVar12 == (SSL_CTX *)0x0) {
              iVar9 = ssl_release_record(param_1,ppSVar24,0);
              if (iVar9 == 0) {
                return 0xffffffff;
              }
              pSVar12 = (SSL_CTX *)ppSVar24[4];
              if (pSVar12 == (SSL_CTX *)0x0) goto LAB_001012ac;
            }
            if (pSVar13 == pSVar12) goto LAB_001012ac;
          }
          if ((param_2 != '\x17') ||
             (uVar15 = (long)&pSVar13->method + uVar11,
             (TLS_SESSION_TICKET_EXT *)param_1[4].tlsext_opaque_prf_input_len <= pTVar21))
          goto LAB_001012be;
          uVar11 = uVar15;
          if (param_5 <= uVar15) goto LAB_0010154d;
        } while( true );
      }
      if (cVar8 != '\x14') goto LAB_00100fb9;
      if (((param_2 == '\x16') && (param_3 != (char *)0x0)) && (!bVar7)) {
        SSL_in_init(param_1);
        cVar8 = *(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar21 * 0x40 + 4
                         );
        if ((cVar8 == '\x14') && (*(long *)&param_1[4].tlsext_status_expected != 0))
        goto LAB_0010181b;
        goto LAB_00101201;
      }
      iVar9 = *(int *)(&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar21 * 8);
      if (iVar9 == 2) goto LAB_00101bb2;
      if (*(int *)&param_1->wbio->method == 0x10000) goto LAB_00101990;
      if ((uVar20 & 1) != 0) goto LAB_00101c01;
LAB_0010138d:
      ERR_new();
      uVar19 = 0x3f3;
LAB_0010182c:
      ERR_set_debug("ssl/record/rec_layer_s3.c",uVar19,"ssl3_read_bytes");
      ossl_statem_fatal(param_1,10,0x85,0);
      return 0xffffffff;
    }
    if (cVar8 != '\x16') {
      if ((((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
          (iVar9 = *(int *)&param_1->wbio->method, iVar9 != 0x10000)) && (0x303 < iVar9)) {
        ERR_new();
        ERR_set_debug("ssl/record/rec_layer_s3.c",0x2c7,"ssl3_read_bytes");
        ossl_statem_fatal(param_1,10,0x125,0);
        return 0xffffffff;
      }
      goto LAB_00100f60;
    }
    if ((&param_1[4].initial_ctx)[(long)pTVar21 * 8] != (SSL_CTX *)0x0) {
      param_1[4].tlsext_ocsp_resplen = 0;
      if ((int)param_1->mode == 0) goto LAB_001012ee;
      goto LAB_00100fa0;
    }
    if ((int)param_1->mode != 0) goto LAB_00100fa0;
LAB_001012ee:
    uVar20 = *(uint *)((long)&param_1->s3 + 4);
    if ((uVar20 & 2) != 0) goto LAB_001014ce;
    if (param_2 == '\x16') goto LAB_00101307;
LAB_00100fb9:
    iVar9 = *(int *)(&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar21 * 8);
    if (iVar9 == 2) {
LAB_00101bb2:
      ERR_new();
      uVar19 = 0x343;
      goto LAB_00101145;
    }
    iVar5 = *(int *)&param_1->wbio->method;
    if (iVar5 == 0x10000) {
      if ((*(int *)&param_1->s2 != 0) || (cVar8 != '\x15')) {
LAB_00101990:
        param_1->state = iVar9;
        ERR_new();
        ERR_set_debug("ssl/record/rec_layer_s3.c",0x350,"ssl3_read_bytes");
        ossl_statem_fatal(param_1,10,0xf4,0);
        return 0xffffffff;
      }
    }
    else if (cVar8 != '\x15') {
      if ((uVar20 & 1) != 0) {
        if (cVar8 != '\x16') {
LAB_00101c01:
          iVar9 = ssl_release_record(param_1,ppSVar24,0);
          if (iVar9 == 0) {
            return 0xffffffff;
          }
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x3cd,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,0xffffffff,0x123,0);
          return 0xffffffff;
        }
        if (((*(byte *)(*(long *)&param_1->wbio[1].ex_data.dummy + 0x50) & 8) == 0) &&
           (0x303 < iVar5)) goto LAB_00101686;
        iVar9 = ssl_release_record(param_1,ppSVar24,0);
        if (iVar9 == 0) {
          return 0xffffffff;
        }
        if ((param_1[3].references & 4) == 0) goto LAB_001018ea;
        goto LAB_0010103c;
      }
      if (cVar8 == '\x16') {
LAB_00101686:
        pSVar13 = (&param_1[4].initial_ctx)[(long)pTVar21 * 8];
        pSVar12 = (SSL_CTX *)(4 - uVar15);
        if (pSVar13 < (SSL_CTX *)(4 - uVar15)) {
          pSVar12 = pSVar13;
        }
        if (pSVar12 != (SSL_CTX *)0x0) {
          memcpy((void *)((long)&param_1[4].servername_done + uVar15),
                 (&param_1[4].next_proto_negotiated)[(long)pTVar21 * 8] +
                 (long)(&param_1[4].tls_session_secret_cb)[(long)pTVar21 * 8],(size_t)pSVar12);
          *(long *)&param_1[4].tlsext_status_expected =
               (long)&pSVar12->method + *(long *)&param_1[4].tlsext_status_expected;
LAB_001016bb:
          iVar9 = ssl_release_record(param_1,ppSVar24,pSVar12);
          if (iVar9 == 0) {
            return 0xffffffff;
          }
          if (*(ulong *)&param_1[4].tlsext_status_expected < 4) goto LAB_0010103c;
          cVar8 = *(char *)((long)&param_1[4].tls_session_ticket_ext_cb_arg +
                           (long)pTVar21 * 0x40 + 4);
          goto LAB_001016ef;
        }
        if (pSVar13 == (SSL_CTX *)0x0) goto LAB_001016bb;
        if (uVar15 < 4) goto LAB_00100ef7;
LAB_00101887:
        iVar9 = ossl_statem_get_in_handshake(param_1);
        if (iVar9 == 0) {
          iVar9 = *(int *)&param_1->write_hash;
          ossl_statem_set_in_init(param_1,1);
          uVar15 = (**(code **)&param_1->packet_length)(param_1);
          if ((int)uVar15 < 0) {
            return uVar15;
          }
          if ((int)uVar15 == 0) {
            return 0xffffffff;
          }
          if (iVar9 == 0xb) {
            return 0xffffffff;
          }
          if (((param_1[3].references & 4) == 0) &&
             (iVar9 = RECORD_LAYER_read_pending(&param_1[4].ex_data.dummy), iVar9 == 0)) {
LAB_001018ea:
            *(undefined4 *)&param_1->packet = 3;
            b = SSL_get_rbio(param_1);
            BIO_clear_flags(b,0xf);
            BIO_set_flags(b,9);
            return 0xffffffff;
          }
          goto LAB_0010103c;
        }
      }
      else {
LAB_001016ef:
        if (cVar8 == '\x14') goto LAB_0010138d;
        if (3 < *(ulong *)&param_1[4].tlsext_status_expected) goto LAB_00101887;
      }
      bVar3 = *(byte *)((long)&param_1[4].tls_session_ticket_ext_cb_arg + (long)pTVar21 * 0x40 + 4);
      if (bVar3 < 0x17) {
        if (0x13 < bVar3) {
          ERR_new();
          ERR_set_debug("ssl/record/rec_layer_s3.c",0x438,"ssl3_read_bytes");
          ossl_statem_fatal(param_1,10,0xc0103,0);
          return 0xffffffff;
        }
      }
      else if (bVar3 == 0x17) {
        iVar9 = ossl_statem_app_data_allowed(param_1);
        if (iVar9 != 0) {
          *(undefined4 *)&param_1->tlsext_debug_cb = 2;
          return 0xffffffff;
        }
        iVar9 = ossl_statem_skip_early_data(param_1);
        if (iVar9 == 0) {
          ERR_new();
          uVar19 = 0x458;
          goto LAB_00101931;
        }
        iVar9 = ossl_early_data_count_ok
                          (param_1,(&param_1[4].initial_ctx)[(long)pTVar21 * 8],0x68,0);
        if (iVar9 == 0) {
          return 0xffffffff;
        }
        iVar9 = ssl_release_record(param_1,ppSVar24,0);
        if (iVar9 == 0) {
          return 0xffffffff;
        }
        goto LAB_0010103c;
      }
      ERR_new();
      uVar19 = 0x42e;
LAB_00101931:
      ERR_set_debug("ssl/record/rec_layer_s3.c",uVar19,"ssl3_read_bytes");
      ossl_statem_fatal(param_1,10,0xf5,0);
      return 0xffffffff;
    }
    if ((undefined1 *)0x7ffffffffffffffd <
        (undefined1 *)((long)&(&param_1[4].initial_ctx)[(long)pTVar21 * 8][-1].srtp_profiles + 6U))
    {
LAB_00101440:
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x362,"ssl3_read_bytes");
      ossl_statem_fatal(param_1,10,0xcd,0);
      return 0xffffffff;
    }
    ptVar17 = (&param_1[4].tls_session_secret_cb)[(long)pTVar21 * 8] +
              (long)(&param_1[4].next_proto_negotiated)[(long)pTVar21 * 8];
    cVar2 = ptVar17[1];
    sVar4 = *(short *)ptVar17;
    if ((&param_1[4].initial_ctx)[(long)pTVar21 * 8] != (SSL_CTX *)0x2) goto LAB_00101440;
    cVar8 = (char)*ptVar17;
    if ((code *)param_1[1].tlsext_opaque_prf_input_len != (code *)0x0) {
      (*(code *)param_1[1].tlsext_opaque_prf_input_len)(0,param_1->state,0x15,ptVar17,2,param_1);
    }
    uVar20 = (uint)(byte)cVar2;
    p_Var22 = (_func_3059 *)param_1[3].info_callback;
    if ((((_func_3059 *)param_1[3].info_callback != (_func_3059 *)0x0) ||
        (p_Var23 = param_1->method[1].ssl_peek, p_Var22 = p_Var23, p_Var23 != (_func_3059 *)0x0)) ||
       (p_Var22 = local_48, local_48 != (_func_3059 *)0x0)) {
      (*p_Var22)(param_1,(void *)0x4004,(uint)(sVar4 << 8) | (uint)(byte)((ushort)sVar4 >> 8));
      p_Var23 = p_Var22;
    }
    if (!bVar7) {
      if (cVar8 == '\x01') goto LAB_001019cb;
      if (uVar20 != 0) {
        if (cVar8 != '\x02') {
          if (uVar20 == 100) goto LAB_00101cab;
          goto LAB_00101622;
        }
        goto LAB_00101bc8;
      }
LAB_00101a7a:
      if (cVar8 != '\x02') {
LAB_00101622:
        ERR_new();
        ERR_set_debug("ssl/record/rec_layer_s3.c",0x3a7,"ssl3_read_bytes");
        ossl_statem_fatal(param_1,0x2f,0xf6,0);
        return 0xffffffff;
      }
      cVar2 = (code)0x0;
      uVar20 = 0;
      iVar9 = 1000;
      goto LAB_00101a94;
    }
    if (uVar20 != 0x5a) {
LAB_00101976:
      if (uVar20 == 0) {
LAB_00101982:
        puVar1 = (uint *)((long)&param_1->s3 + 4);
        *puVar1 = *puVar1 | 2;
        return 0;
      }
LAB_00101bc8:
      iVar9 = uVar20 + 1000;
LAB_00101a94:
      *(uint *)&param_1->max_cert_list = uVar20;
      *(undefined4 *)&param_1->packet = 1;
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x38f,"ssl3_read_bytes");
      ossl_statem_fatal(param_1,0xffffffff,iVar9,"SSL alert number %d",cVar2);
      puVar1 = (uint *)((long)&param_1->s3 + 4);
      *puVar1 = *puVar1 | 2;
      iVar9 = ssl_release_record(param_1,ppSVar24,0);
      if (iVar9 == 0) {
        return 0xffffffff;
      }
      SSL_CTX_remove_session
                (*(SSL_CTX **)&param_1[4].mac_flags,(SSL_SESSION *)param_1[3].write_hash);
      return 0;
    }
LAB_001019cb:
    *(uint *)((long)&param_1->mode + 4) = uVar20;
    iVar9 = ssl_release_record(param_1,ppSVar24,0);
    if (iVar9 == 0) {
      return 0xffffffff;
    }
    iVar9 = param_1[4].tlsext_ocsp_resplen + 1;
    param_1[4].tlsext_ocsp_resplen = iVar9;
    if (iVar9 == 5) {
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x37c,"ssl3_read_bytes");
      ossl_statem_fatal(param_1,10,0x199,0);
      return 0xffffffff;
    }
    if (bVar7) {
      if (uVar20 != 0x5a) goto LAB_00101976;
    }
    else {
      if (uVar20 == 0) {
        if (cVar8 != '\x01') goto LAB_00101a7a;
        goto LAB_00101982;
      }
      if (cVar8 == '\x02') {
        iVar9 = uVar20 + 1000;
        goto LAB_00101a94;
      }
      if (uVar20 == 100) {
LAB_00101cab:
        ERR_new();
        ERR_set_debug("ssl/record/rec_layer_s3.c",0x3a0,"ssl3_read_bytes");
        ossl_statem_fatal(param_1,0x28,0x153,0);
        return 0xffffffff;
      }
      if (cVar8 != '\x01') goto LAB_00101622;
    }
    pTVar21 = param_1[4].tlsext_session_ticket;
    local_48 = p_Var23;
  } while( true );
LAB_001012be:
  uVar15 = (long)&pSVar13->method + uVar11;
  if (uVar15 != 0) goto LAB_0010154d;
LAB_0010103c:
  *(undefined4 *)&param_1->packet = 1;
  pTVar21 = param_1[4].tlsext_session_ticket;
  if ((TLS_SESSION_TICKET_EXT *)param_1[4].tlsext_opaque_prf_input_len <= pTVar21) {
LAB_00101057:
    uVar15 = 0;
    param_1[4].tlsext_opaque_prf_input_len = 0;
    param_1[4].tlsext_session_ticket = (TLS_SESSION_TICKET_EXT *)0x0;
    do {
      uVar10 = (**(code **)(param_1[4].options + 0x40))
                         (param_1[4].max_cert_list,
                          &param_1[4].tls_session_ticket_ext_cb + uVar15 * 8,
                          &param_1[4].tls_session_ticket_ext_cb_arg + uVar15 * 8,
                          (long)&param_1[4].tls_session_ticket_ext_cb_arg + uVar15 * 0x40 + 4,
                          &param_1[4].tls_session_secret_cb + uVar15 * 8,
                          &param_1[4].initial_ctx + uVar15 * 8);
      uVar11 = ossl_tls_handle_rlayer_return(param_1,0,uVar10,"ssl/record/rec_layer_s3.c",0x2b3);
      if ((int)uVar11 < 1) {
        return uVar11;
      }
      (&param_1[4].next_proto_negotiated)[uVar15 * 8] = (uchar *)0x0;
      param_1[4].tlsext_opaque_prf_input_len = param_1[4].tlsext_opaque_prf_input_len + 1;
      iVar9 = (**(code **)(param_1[4].options + 0x18))(param_1[4].max_cert_list);
    } while ((iVar9 != 0) && (uVar15 = param_1[4].tlsext_opaque_prf_input_len, uVar15 < 0x20));
    pTVar21 = param_1[4].tlsext_session_ticket;
  }
  goto LAB_00100f0b;
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



undefined4
ssl_set_new_record_layer
          (long param_1,undefined4 param_2,int param_3,int param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
          undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14,undefined4 param_15,undefined8 param_16,long param_17,
          undefined8 param_18)

{
  undefined8 *puVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  BIO_METHOD *pBVar5;
  BIO *pBVar6;
  NoteGnuProperty_4 *pNVar7;
  pitem *ppVar8;
  long lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  BIO *a;
  undefined8 *puVar14;
  long in_FS_OFFSET;
  bool bVar15;
  byte bVar16;
  undefined8 local_2c8;
  undefined8 *local_2c0;
  long *local_2b8;
  undefined8 *local_2b0;
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
  undefined8 local_258 [10];
  undefined8 local_208;
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
  
  bVar16 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 8);
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
  puVar14 = *(undefined8 **)(param_1 + 0xc60);
  if (puVar14 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      local_2c8 = *(undefined8 *)(param_1 + 0x50);
      goto LAB_001023a4;
    }
    local_2c8 = *(undefined8 *)(param_1 + 0x58);
    goto LAB_00101e9a;
  }
  if (param_4 == 0) {
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      if (param_3 == 0) {
        puVar14 = (undefined8 *)&ossl_tls_record_method;
        local_2c8 = *(undefined8 *)(param_1 + 0x50);
        goto LAB_001023a4;
      }
      puVar14 = (undefined8 *)&ossl_tls_record_method;
      local_2c8 = *(undefined8 *)(param_1 + 0x58);
    }
    else {
      if (param_3 == 0) {
        puVar14 = (undefined8 *)&ossl_dtls_record_method;
        local_2c8 = *(undefined8 *)(param_1 + 0x50);
LAB_001023a4:
        OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
        local_208 = local_2a8;
        uStack_200 = uStack_2a0;
        local_1e8 = local_288;
        local_1f8 = local_298;
        uStack_1f0 = uStack_290;
        OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
        local_1c0 = local_288;
        local_1e0 = local_2a8;
        uStack_1d8 = uStack_2a0;
        local_1d0 = local_298;
        uStack_1c8 = uStack_290;
        puVar12 = puVar14;
        goto LAB_00102435;
      }
      puVar14 = (undefined8 *)&ossl_dtls_record_method;
      local_2c8 = *(undefined8 *)(param_1 + 0x58);
    }
LAB_00101e9a:
    OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
    local_1e8 = local_288;
    local_208 = local_2a8;
    uStack_200 = uStack_2a0;
    local_1f8 = local_298;
    uStack_1f0 = uStack_290;
    OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
    local_1c0 = local_288;
    local_1e0 = local_2a8;
    uStack_1d8 = uStack_2a0;
    local_1d0 = local_298;
    uStack_1c8 = uStack_290;
LAB_00101f2b:
    local_2b0 = (undefined8 *)(param_1 + 0xc88);
    local_2b8 = (long *)(param_1 + 0xc78);
    OSSL_PARAM_construct_size_t(&local_2a8,"block_padding",param_1 + 0xcf8);
    local_1b8 = local_2a8;
    uStack_1b0 = uStack_2a0;
    local_198 = local_288;
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
    local_274 = (uint)(*(long *)(param_1 + 0x160) >> 10) & 1;
    local_168 = local_2a8;
    uStack_160 = uStack_2a0;
    local_158 = local_298;
    uStack_150 = uStack_290;
    if ((*(uint *)(param_1 + 0x578) & 2) != 0) {
      local_270 = 1;
    }
    puVar12 = puVar14;
    if ((*(uint *)(param_1 + 0x578) & 8) != 0) {
LAB_0010201f:
      local_26c = 1;
      local_168 = local_2a8;
      uStack_160 = uStack_2a0;
      local_158 = local_298;
      uStack_150 = uStack_290;
      local_148 = local_288;
    }
    if (local_274 == 0) goto LAB_0010203a;
LAB_0010253d:
    local_2a8 = local_168;
    uStack_2a0 = uStack_160;
    local_298 = local_158;
    uStack_290 = uStack_150;
    local_288 = local_148;
    OSSL_PARAM_construct_int(&local_2a8,"use_etm",&local_274);
    local_138 = local_2a8;
    uStack_130 = uStack_2a0;
    local_128 = local_298;
    uStack_120 = uStack_290;
    puVar14 = local_110;
    local_118 = local_288;
    if (local_270 != 0) goto LAB_0010259c;
LAB_0010204b:
    puVar13 = puVar14;
    if (local_26c == 0) goto LAB_0010205c;
LAB_001025f6:
    puVar14 = puVar13 + 5;
    OSSL_PARAM_construct_int(&local_2a8,"tlstree",&local_26c);
    *puVar13 = local_2a8;
    puVar13[1] = uStack_2a0;
    puVar13[2] = local_298;
    puVar13[3] = uStack_290;
    puVar13[4] = local_288;
    if (param_3 != 0) goto LAB_00102647;
LAB_00102064:
    if ((*(long *)(param_1 + 0x900) == 0) ||
       (bVar16 = *(char *)(*(long *)(param_1 + 0x900) + 0x358) - 1, 3 < bVar16)) {
      if (local_268 != 0x4000) {
        OSSL_PARAM_construct_uint(&local_2a8,"max_frag_len",&local_268);
        *puVar14 = local_2a8;
        puVar14[1] = uStack_2a0;
        puVar14[2] = local_298;
        puVar14[3] = uStack_290;
        goto LAB_001020d0;
      }
      iVar4 = *(int *)(param_1 + 0x78);
      local_2c0 = puVar14;
    }
    else {
      local_268 = 0x200 << (bVar16 & 0x1f);
      OSSL_PARAM_construct_uint(&local_2a8,"max_frag_len",&local_268);
      *puVar14 = local_2a8;
      puVar14[1] = uStack_2a0;
      puVar14[2] = local_298;
      puVar14[3] = uStack_290;
LAB_001020d0:
      local_2c0 = puVar14 + 5;
      iVar4 = *(int *)(param_1 + 0x78);
      puVar14[4] = local_288;
    }
    if ((iVar4 == 0) || (1 < param_4 - 1U)) goto LAB_00102123;
    local_264 = *(uint *)(param_1 + 0x1544);
    if ((*(int *)(param_1 + 0xb18) == 2) &&
       (uVar3 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344), uVar3 < local_264)) {
      local_264 = uVar3;
    }
    if (local_264 == 0) goto LAB_00102123;
  }
  else {
    uVar11 = *(undefined8 *)(param_1 + 0x58);
    local_2c8 = *(undefined8 *)(param_1 + 0x50);
    puVar12 = *(undefined8 **)(param_1 + 0xc70);
    puVar14 = *(undefined8 **)(param_1 + 0xc78);
    if (param_3 != 0) {
      if (puVar14 == (undefined8 *)0x0) goto LAB_00102910;
      OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
      puVar12 = &local_2a8;
      puVar13 = &local_208;
      for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined4 *)puVar13 = *(undefined4 *)puVar12;
        puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar16 * -8 + 4);
        puVar13 = (undefined8 *)((long)puVar13 + (ulong)bVar16 * -8 + 4);
      }
      OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
      puVar12 = &local_2a8;
      puVar13 = &local_1e0;
      for (lVar9 = 10; local_2c8 = uVar11, lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined4 *)puVar13 = *(undefined4 *)puVar12;
        puVar12 = (undefined8 *)((long)puVar12 + (ulong)bVar16 * -8 + 4);
        puVar13 = (undefined8 *)((long)puVar13 + (ulong)bVar16 * -8 + 4);
      }
      goto LAB_00101f2b;
    }
    if (puVar12 == (undefined8 *)0x0) {
LAB_00102910:
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x4fd,"ssl_set_new_record_layer");
      ERR_set_error(0x14,0xc0103,0);
LAB_0010234d:
      uVar10 = 0;
LAB_0010234f:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar10;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    OSSL_PARAM_construct_uint64(&local_2a8,"options",param_1 + 0x9b0);
    puVar14 = &local_2a8;
    puVar13 = &local_208;
    for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined4 *)puVar13 = *(undefined4 *)puVar14;
      puVar14 = (undefined8 *)((long)puVar14 + (ulong)bVar16 * -8 + 4);
      puVar13 = (undefined8 *)((long)puVar13 + (ulong)bVar16 * -8 + 4);
    }
    OSSL_PARAM_construct_uint32(&local_2a8,&_LC14,param_1 + 0x9b8);
    puVar14 = &local_2a8;
    puVar13 = &local_1e0;
    for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined4 *)puVar13 = *(undefined4 *)puVar14;
      puVar14 = (undefined8 *)((long)puVar14 + (ulong)bVar16 * -8 + 4);
      puVar13 = (undefined8 *)((long)puVar13 + (ulong)bVar16 * -8 + 4);
    }
LAB_00102435:
    local_2b0 = (undefined8 *)(param_1 + 0xc80);
    local_2b8 = (long *)(param_1 + 0xc70);
    OSSL_PARAM_construct_size_t(&local_2a8,"read_buffer_len",param_1 + 0xc98);
    local_1b8 = local_2a8;
    uStack_1b0 = uStack_2a0;
    local_198 = local_288;
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
    local_158 = local_298;
    uStack_150 = uStack_290;
    local_168 = local_2a8;
    uStack_160 = uStack_2a0;
    local_274 = (uint)(*(ulong *)(param_1 + 0x160) >> 8) & 1;
    if ((*(uint *)(param_1 + 0x578) & 1) != 0) {
      local_270 = 1;
    }
    if ((*(uint *)(param_1 + 0x578) & 4) != 0) goto LAB_0010201f;
    if ((*(ulong *)(param_1 + 0x160) & 0x100) != 0) goto LAB_0010253d;
LAB_0010203a:
    puVar14 = &local_138;
    local_2a8 = local_168;
    uStack_2a0 = uStack_160;
    local_298 = local_158;
    uStack_290 = uStack_150;
    local_288 = local_148;
    if (local_270 == 0) goto LAB_0010204b;
LAB_0010259c:
    puVar13 = puVar14 + 5;
    OSSL_PARAM_construct_int(&local_2a8,"stream_mac",&local_270);
    *puVar14 = local_2a8;
    puVar14[1] = uStack_2a0;
    puVar14[2] = local_298;
    puVar14[3] = uStack_290;
    puVar14[4] = local_288;
    if (local_26c != 0) goto LAB_001025f6;
LAB_0010205c:
    puVar14 = puVar13;
    if (param_3 == 0) goto LAB_00102064;
LAB_00102647:
    if (local_268 == 0x4000) {
      iVar4 = *(int *)(param_1 + 0x78);
      local_2c0 = puVar14;
    }
    else {
      OSSL_PARAM_construct_uint(&local_2a8,"max_frag_len",&local_268);
      *puVar14 = local_2a8;
      puVar14[1] = uStack_2a0;
      puVar14[2] = local_298;
      puVar14[3] = uStack_290;
      puVar14[4] = local_288;
      iVar4 = *(int *)(param_1 + 0x78);
      local_2c0 = puVar14 + 5;
    }
    if (((iVar4 != 0) || (param_3 != 1)) || (param_4 != 1)) goto LAB_00102123;
    local_264 = *(uint *)(*(long *)(param_1 + 0x900) + 0x344);
    if ((local_264 == 0) &&
       ((*(long *)(param_1 + 0x908) == 0 ||
        (local_264 = *(uint *)(*(long *)(param_1 + 0x908) + 0x344), local_264 == 0)))) {
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x83,"ossl_get_max_early_data");
      ossl_statem_fatal(param_1,0x50,0xc0103,0);
      local_264 = 0;
      goto LAB_00102123;
    }
  }
  OSSL_PARAM_construct_uint32(&local_2a8,"max_early_data",&local_264);
  *local_2c0 = local_2a8;
  local_2c0[1] = uStack_2a0;
  local_2c0[2] = local_298;
  local_2c0[3] = uStack_290;
  local_2c0[4] = local_288;
  local_2c0 = local_2c0 + 5;
LAB_00102123:
  OSSL_PARAM_construct_end(&local_2a8);
  *local_2c0 = local_2a8;
  local_2c0[1] = uStack_2a0;
  local_2c0[2] = local_298;
  local_2c0[3] = uStack_290;
  local_2c0[4] = local_288;
LAB_00102163:
  uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8;
  bVar15 = uVar3 != 0 && param_4 != 0;
  if (param_3 == 0) {
    a = *(BIO **)(param_1 + 0xc90);
    uVar2 = 0;
    if (bVar15) {
      uVar2 = dtls1_get_epoch(param_1,1);
      uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8;
    }
    if (uVar3 == 0) {
      pBVar5 = BIO_s_mem();
      pBVar6 = BIO_new(pBVar5);
    }
    else {
      pBVar5 = (BIO_METHOD *)BIO_s_dgram_mem();
      pBVar6 = BIO_new(pBVar5);
    }
    if (pBVar6 != (BIO *)0x0) {
      *(BIO **)(param_1 + 0xc90) = pBVar6;
      goto LAB_001021c4;
    }
    ERR_new();
    uVar11 = 0x569;
  }
  else {
    if (bVar15) {
      a = (BIO *)0x0;
      uVar2 = dtls1_get_epoch(param_1);
      pBVar6 = (BIO *)0x0;
    }
    else {
      uVar2 = 0;
      pBVar6 = (BIO *)0x0;
      a = (BIO *)0x0;
    }
LAB_001021c4:
    pNVar7 = (NoteGnuProperty_4 *)&rlayer_dispatch;
    lVar9 = 0;
LAB_001021ff:
    do {
      if (pNVar7->namesz == 2) {
        if (*(long *)(param_1 + 0x4f8) == 0) {
          pNVar7 = pNVar7 + 1;
          if (pNVar7 == &NoteGnuProperty_4_00103070) break;
          goto LAB_001021ff;
        }
LAB_001021df:
        uVar11 = *(undefined8 *)&pNVar7->type;
        local_258[lVar9 * 2] = *(undefined8 *)pNVar7;
        local_258[lVar9 * 2 + 1] = uVar11;
        lVar9 = lVar9 + 1;
      }
      else if ((pNVar7->namesz != 4) || (*(long *)(param_1 + 0xce8) != 0)) goto LAB_001021df;
      pNVar7 = pNVar7 + 1;
    } while (pNVar7 != &NoteGnuProperty_4_00103070);
    iVar4 = (*(code *)*puVar12)(*puVar1,puVar1[0x8e],param_2,*(undefined4 *)(param_1 + 0x78),param_3
                                ,param_4,uVar2,param_5,param_6,param_7,param_8,param_9,param_10,
                                param_11,param_12,param_13,param_14,param_15,param_16,param_17,
                                param_18,a,local_2c8,pBVar6,0,0,&local_138,&local_208,local_258,
                                param_1,*(undefined8 *)(param_1 + 0xc68),&local_260);
    BIO_free(a);
    if (iVar4 == -1) {
      puVar14 = (undefined8 *)*local_2b8;
      if ((puVar14 == (undefined8 *)0x0) || (bVar15 = puVar14 == puVar12, puVar12 = puVar14, bVar15)
         ) goto LAB_00102b20;
      goto LAB_00102163;
    }
    if (iVar4 != 1) {
      if (iVar4 != -2) {
        ERR_new();
        uVar11 = 0x5a6;
        goto LAB_001028b9;
      }
      ERR_new();
      ERR_set_debug("ssl/record/rec_layer_s3.c",0x592,"ssl_set_new_record_layer");
      ossl_statem_fatal(param_1,0x50,0x139,0);
      goto LAB_0010234d;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0xd8) + 0x50) & 8) == 0) {
      if ((*local_2b8 == 0) || (iVar4 = (**(code **)(*local_2b8 + 8))(*local_2b0), iVar4 != 0)) {
        *local_2b0 = local_260;
        *local_2b8 = (long)puVar12;
        if (param_3 == 0) {
LAB_00102a40:
          lVar9 = *(long *)(param_1 + 0xc70);
          uVar11 = *(undefined8 *)(param_1 + 0xc80);
        }
        else {
LAB_00102816:
          lVar9 = *(long *)(param_1 + 0xc78);
          uVar11 = *(undefined8 *)(param_1 + 0xc88);
        }
        if (((*(long *)(param_1 + 0x260) == 0) || (*(long *)(param_1 + 0x2e8) == 0)) &&
           (*(code **)(lVar9 + 0x70) != (code *)0x0)) {
          (**(code **)(lVar9 + 0x70))(uVar11,1);
        }
        uVar10 = 1;
        if ((*(long *)(param_1 + 0x9e8) != 0) && (*(code **)(lVar9 + 0x78) != (code *)0x0)) {
          (**(code **)(lVar9 + 0x78))(uVar11);
        }
        goto LAB_0010234f;
      }
    }
    else if (param_3 == 0) {
      if ((*local_2b8 == 0) || (iVar4 = (**(code **)(*local_2b8 + 8))(*local_2b0), iVar4 != 0)) {
        *local_2b0 = local_260;
        *local_2b8 = (long)puVar12;
        goto LAB_00102a40;
      }
    }
    else {
      ppVar8 = pqueue_peek(*(pqueue *)(*(long *)(param_1 + 0x4f0) + 0x120));
      if (((ppVar8 != (pitem *)0x0) || (*local_2b8 == 0)) ||
         (iVar4 = (**(code **)(*local_2b8 + 8))(*local_2b0), iVar4 != 0)) {
        *local_2b0 = local_260;
        *local_2b8 = (long)puVar12;
        goto LAB_00102816;
      }
    }
    ERR_new();
    uVar11 = 0x5b7;
  }
LAB_001028b9:
  ERR_set_debug("ssl/record/rec_layer_s3.c",uVar11,"ssl_set_new_record_layer");
  ossl_statem_fatal(param_1,0x50,0xc0103,0);
  goto LAB_0010234d;
LAB_00102b20:
  ERR_new();
  ERR_set_debug("ssl/record/rec_layer_s3.c",0x59e,"ssl_set_new_record_layer");
  ossl_statem_fatal(param_1,0x50,0x142,0);
  goto LAB_0010234d;
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


