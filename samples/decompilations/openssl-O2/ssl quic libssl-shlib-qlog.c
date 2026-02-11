
void default_now(void)

{
  ossl_time_now();
  return;
}



bool filter_match_event(void *param_1,size_t param_2,void *param_3,size_t param_4,char *param_5,
                       char *param_6)

{
  bool bVar1;
  int iVar2;
  size_t __n;
  size_t __n_00;
  
  __n = strlen(param_5);
  if (((param_1 == (void *)0x0) || (bVar1 = false, __n == param_2)) &&
     ((__n_00 = strlen(param_6), param_3 == (void *)0x0 || (bVar1 = false, __n_00 == param_4)))) {
    if ((param_1 != (void *)0x0) && (iVar2 = memcmp(param_1,param_5,__n), iVar2 != 0)) {
      return false;
    }
    bVar1 = true;
    if (param_3 != (void *)0x0) {
      iVar2 = memcmp(param_3,param_6,__n_00);
      return iVar2 == 0;
    }
  }
  return bVar1;
}



void filter_apply(ulong *param_1,int param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  
  iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity","connection_started");
  if (iVar1 == 0) {
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity",
                               "connection_state_updated");
    if (iVar1 != 0) {
      uVar2 = *param_1;
      if (param_2 != 0) {
LAB_0010015b:
        uVar2 = uVar2 | 4;
        *param_1 = uVar2;
        iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity",
                                   "connection_closed");
        if (iVar1 == 0) {
          iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","parameters_set");
          if (iVar1 == 0) goto LAB_00100589;
        }
        else {
LAB_00100193:
          uVar2 = uVar2 | 8;
          *param_1 = uVar2;
          iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","parameters_set");
          if (iVar1 == 0) {
            iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_sent");
            if (iVar1 != 0) goto LAB_001005bc;
            goto LAB_0010062d;
          }
        }
LAB_001001cb:
        uVar2 = uVar2 | 0x10;
        *param_1 = uVar2;
        iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_sent");
        if (iVar1 == 0) {
          iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_received");
          if (iVar1 == 0) goto LAB_0010051d;
LAB_00100234:
          uVar3 = uVar2 | 0x40;
          *param_1 = uVar3;
        }
        else {
LAB_001005bc:
          uVar3 = uVar2 | 0x20;
          *param_1 = uVar3;
          iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_received");
          if (iVar1 != 0) {
            uVar3 = uVar2 | 0x60;
            *param_1 = uVar3;
          }
        }
        iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"recovery","packet_lost");
        if (iVar1 == 0) {
          return;
        }
        goto LAB_00100268;
      }
LAB_001002b3:
      uVar2 = uVar2 & 0xfffffffffffffffb;
      *param_1 = uVar2;
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity","connection_closed")
      ;
      if (iVar1 != 0) goto LAB_001002eb;
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","parameters_set");
      if (iVar1 != 0) goto LAB_001004b4;
LAB_00100589:
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_sent");
      if (iVar1 == 0) goto LAB_0010062d;
      uVar2 = *param_1;
      if (param_2 != 0) goto LAB_001005bc;
      goto LAB_00100354;
    }
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity","connection_closed");
    if (iVar1 == 0) goto LAB_00100481;
    uVar2 = *param_1;
    if (param_2 != 0) goto LAB_00100193;
LAB_001002eb:
    uVar2 = uVar2 & 0xfffffffffffffff7;
    *param_1 = uVar2;
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","parameters_set");
    if (iVar1 != 0) goto LAB_001004b4;
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_sent");
    if (iVar1 != 0) goto LAB_00100354;
LAB_0010062d:
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_received");
    if (iVar1 == 0) goto LAB_0010051d;
    uVar2 = *param_1;
    if (param_2 != 0) goto LAB_00100234;
LAB_00100388:
    *param_1 = uVar2 & 0xffffffffffffffbf;
    uVar3 = uVar2 & 0xffffffffffffffbf;
  }
  else {
    if (param_2 == 0) {
      uVar2 = *param_1 & 0xfffffffffffffffd;
      *param_1 = uVar2;
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity",
                                 "connection_state_updated");
      if (iVar1 != 0) goto LAB_001002b3;
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity","connection_closed")
      ;
      if (iVar1 != 0) goto LAB_001002eb;
    }
    else {
      uVar2 = *param_1 | 2;
      *param_1 = uVar2;
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity",
                                 "connection_state_updated");
      if (iVar1 != 0) goto LAB_0010015b;
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"connectivity","connection_closed")
      ;
      if (iVar1 != 0) goto LAB_00100193;
    }
LAB_00100481:
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","parameters_set");
    if (iVar1 == 0) goto LAB_00100589;
    uVar2 = *param_1;
    if (param_2 != 0) goto LAB_001001cb;
LAB_001004b4:
    uVar2 = uVar2 & 0xffffffffffffffef;
    *param_1 = uVar2;
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_sent");
    if (iVar1 == 0) {
      iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_received");
      if (iVar1 == 0) {
LAB_0010051d:
        iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"recovery","packet_lost");
        if (iVar1 == 0) {
          return;
        }
        uVar3 = *param_1;
        if (param_2 != 0) {
LAB_00100268:
          *param_1 = uVar3 | 0x80;
          return;
        }
        goto LAB_001003c0;
      }
      goto LAB_00100388;
    }
LAB_00100354:
    uVar2 = uVar2 & 0xffffffffffffffdf;
    *param_1 = uVar2;
    iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"transport","packet_received");
    uVar3 = uVar2;
    if (iVar1 != 0) goto LAB_00100388;
  }
  iVar1 = filter_match_event(param_3,param_4,param_5,param_6,"recovery","packet_lost");
  if (iVar1 == 0) {
    return;
  }
LAB_001003c0:
  *param_1 = uVar3 & 0xffffffffffffff7f;
  return;
}



undefined8 validate_name(undefined8 *param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  
  uVar2 = *param_2;
  pcVar3 = (char *)*param_1;
  if (uVar2 == 1) {
    uVar5 = 0;
    if (*pcVar3 == '*') {
      *param_1 = 0;
      *param_2 = 0;
      return 1;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar5 = 0;
  }
  do {
    while( true ) {
      cVar1 = pcVar3[uVar5];
      iVar4 = ossl_ctype_check((int)cVar1,3);
      if (((iVar4 == 0) && (iVar4 = ossl_isdigit((int)cVar1), iVar4 == 0)) && (cVar1 != '_')) break;
      uVar5 = uVar5 + 1;
      if (uVar2 <= uVar5) {
        return 1;
      }
    }
    if (cVar1 != '-') {
      return 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < uVar2);
  return 1;
}



undefined8 * ossl_qlog_new(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *ptr;
  char *pcVar3;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0xf8,"ssl/quic/qlog.c",0x39);
  if (ptr == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  uVar1 = param_1[1];
  pcVar3 = (char *)param_1[3];
  *ptr = *param_1;
  ptr[1] = uVar1;
  *(undefined8 *)((long)ptr + 0xd) = *(undefined8 *)((long)param_1 + 0xd);
  *(undefined4 *)(ptr + 6) = *(undefined4 *)(param_1 + 6);
  ptr[7] = param_1[7];
  ptr[8] = param_1[8];
  ptr[9] = param_1[9];
  if (pcVar3 != (char *)0x0) {
    pcVar3 = CRYPTO_strdup(pcVar3,"ssl/quic/qlog.c",0x45);
    ptr[3] = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_001008a8;
  }
  if ((char *)param_1[4] != (char *)0x0) {
    pcVar3 = CRYPTO_strdup((char *)param_1[4],"ssl/quic/qlog.c",0x49);
    ptr[4] = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_001008a8;
  }
  if ((char *)param_1[5] != (char *)0x0) {
    pcVar3 = CRYPTO_strdup((char *)param_1[5],"ssl/quic/qlog.c",0x4d);
    ptr[5] = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_001008a8;
  }
  if ((char *)param_1[10] != (char *)0x0) {
    pcVar3 = CRYPTO_strdup((char *)param_1[10],"ssl/quic/qlog.c",0x52);
    ptr[10] = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_001008a8;
  }
  iVar2 = ossl_json_init(ptr + 0x13,0,5);
  if (iVar2 != 0) {
    if (ptr[7] == 0) {
      ptr[7] = 0x100000;
      return ptr;
    }
    return ptr;
  }
LAB_001008a8:
  CRYPTO_free((void *)ptr[3]);
  CRYPTO_free((void *)ptr[4]);
  CRYPTO_free((void *)ptr[5]);
  CRYPTO_free((void *)ptr[10]);
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}



void ossl_qlog_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ossl_json_flush_cleanup((long)param_1 + 0x98);
    BIO_free_all(*(BIO **)((long)param_1 + 0x58));
    CRYPTO_free(*(void **)((long)param_1 + 0x18));
    CRYPTO_free(*(void **)((long)param_1 + 0x20));
    CRYPTO_free(*(void **)((long)param_1 + 0x28));
    CRYPTO_free(*(void **)((long)param_1 + 0x50));
    CRYPTO_free(param_1);
    return;
  }
  return;
}



undefined8 ossl_qlog_flush(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = ossl_json_flush(param_1 + 0x98);
    return uVar1;
  }
  return 1;
}



undefined8 ossl_qlog_set_sink_bio(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    ossl_qlog_flush();
    BIO_free_all(*(BIO **)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = param_2;
    ossl_json_set0_sink(param_1 + 0x98,param_2);
    return 1;
  }
  return 0;
}



undefined8 ossl_qlog_set_sink_file(long param_1,FILE *param_2)

{
  int iVar1;
  BIO *a;
  
  if ((param_1 != 0) && (a = BIO_new_fp(param_2,1), a != (BIO *)0x0)) {
    iVar1 = ossl_qlog_set_sink_bio(param_1,a);
    if (iVar1 != 0) {
      return 1;
    }
    BIO_free_all(a);
  }
  return 0;
}



undefined8 ossl_qlog_set_sink_filename(long param_1,char *param_2)

{
  int iVar1;
  BIO *a;
  
  if ((param_1 != 0) && (a = BIO_new_file(param_2,"wb"), a != (BIO *)0x0)) {
    iVar1 = ossl_qlog_set_sink_bio(param_1,a);
    if (iVar1 != 0) {
      return 1;
    }
    BIO_free_all(a);
  }
  return 0;
}



undefined8 ossl_qlog_set_event_type_enabled(long param_1,uint param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((param_1 != 0) && (param_2 < 8)) {
    uVar1 = 1L << ((byte)param_2 & 0x3f);
    uVar2 = *(ulong *)(param_1 + 0x60) | uVar1;
    if (param_3 == 0) {
      uVar2 = ~uVar1 & *(ulong *)(param_1 + 0x60);
    }
    *(ulong *)(param_1 + 0x60) = uVar2;
    return 1;
  }
  return 0;
}



bool ossl_qlog_enabled(long param_1,uint param_2)

{
  if (param_1 != 0) {
    return (*(uint *)(param_1 + 0x60 + (ulong)(param_2 >> 6) * 8) &
           (uint)(1L << ((byte)param_2 & 0x3f))) != 0;
  }
  return false;
}



undefined8
ossl_qlog_event_try_begin
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  __pid_t _Var3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char acStack_b8 [136];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x68) == 0)) {
    iVar2 = ossl_qlog_enabled(param_1);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x68) = param_2;
      lVar1 = param_1 + 0x98;
      *(undefined8 *)(param_1 + 0x80) = param_5;
      *(undefined8 *)(param_1 + 0x70) = param_3;
      *(undefined8 *)(param_1 + 0x78) = param_4;
      uVar4 = (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x88) = uVar4;
      if (*(int *)(param_1 + 0xf0) == 0) {
        ossl_json_object_begin(lVar1);
        ossl_json_key(lVar1,"qlog_version");
        ossl_json_str(lVar1,&_LC15);
        ossl_json_key(lVar1,"qlog_format");
        ossl_json_str(lVar1,"JSON-SEQ");
        if (*(long *)(param_1 + 0x18) != 0) {
          ossl_json_key(lVar1,"title");
          ossl_json_str(lVar1,*(undefined8 *)(param_1 + 0x18));
          CRYPTO_free(*(void **)(param_1 + 0x18));
          *(undefined8 *)(param_1 + 0x18) = 0;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          ossl_json_key(lVar1,"description");
          ossl_json_str(lVar1,*(undefined8 *)(param_1 + 0x20));
          CRYPTO_free(*(void **)(param_1 + 0x20));
          *(undefined8 *)(param_1 + 0x20) = 0;
        }
        ossl_json_key(lVar1,"trace");
        ossl_json_object_begin(lVar1);
        ossl_json_key(lVar1,"common_fields");
        ossl_json_object_begin(lVar1);
        ossl_json_key(lVar1,"time_format");
        ossl_json_str(lVar1,"delta");
        ossl_json_key(lVar1,"protocol_type");
        ossl_json_array_begin(lVar1);
        ossl_json_str(lVar1,&_LC25);
        ossl_json_array_end(lVar1);
        if (*(long *)(param_1 + 0x28) != 0) {
          ossl_json_key(lVar1,"group_id");
          ossl_json_str(lVar1,*(undefined8 *)(param_1 + 0x28));
          CRYPTO_free(*(void **)(param_1 + 0x28));
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
        ossl_json_key(lVar1,"system_info");
        ossl_json_object_begin(lVar1);
        if (*(long *)(param_1 + 0x48) == 0) {
          ossl_json_key(lVar1,"process_id");
          _Var3 = getpid();
          ossl_json_u64(lVar1,(long)_Var3);
        }
        else {
          ossl_json_key(lVar1,"process_id");
          ossl_json_u64(lVar1,*(undefined8 *)(param_1 + 0x48));
        }
        ossl_json_object_end(lVar1);
        ossl_json_object_end(lVar1);
        ossl_json_key(lVar1,"vantage_point");
        ossl_json_object_begin(lVar1);
        pcVar7 = *(undefined1 **)(param_1 + 0x50);
        if (*(undefined1 **)(param_1 + 0x50) == (undefined1 *)0x0) {
          lVar5 = OpenSSL_version(3);
          uVar4 = OpenSSL_version(7);
          BIO_snprintf(acStack_b8,0x80,"OpenSSL/%s (%s)",uVar4,lVar5 + 10);
          pcVar7 = acStack_b8;
        }
        ossl_json_key(lVar1,&_LC31);
        pcVar6 = "client";
        if (*(int *)(param_1 + 0x30) != 0) {
          pcVar6 = "server";
        }
        ossl_json_str(lVar1,pcVar6);
        ossl_json_key(lVar1,&_LC32);
        ossl_json_str(lVar1,pcVar7);
        ossl_json_object_end(lVar1);
        ossl_json_object_end(lVar1);
        ossl_json_object_end(lVar1);
        *(undefined4 *)(param_1 + 0xf0) = 1;
      }
      ossl_json_object_begin(lVar1);
      ossl_json_key(lVar1,&_LC32);
      ossl_json_str(lVar1,*(undefined8 *)(param_1 + 0x80));
      ossl_json_key(lVar1,&_LC33);
      ossl_json_object_begin(lVar1);
      uVar4 = 1;
      goto LAB_00100eaa;
    }
  }
  uVar4 = 0;
LAB_00100eaa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_qlog_event_end(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x68) != 0) {
      lVar1 = param_1 + 0x98;
      ossl_json_object_end(lVar1);
      ossl_json_key(lVar1,&_LC34);
      if (*(int *)(param_1 + 0xf4) == 0) {
        ossl_json_u64(lVar1,*(ulong *)(param_1 + 0x88) / 1000000);
        *(undefined4 *)(param_1 + 0xf4) = 1;
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
      }
      else {
        uVar2 = 0;
        if (*(ulong *)(param_1 + 0x90) <= *(ulong *)(param_1 + 0x88)) {
          uVar2 = (*(ulong *)(param_1 + 0x88) - *(ulong *)(param_1 + 0x90)) / 1000000;
        }
        ossl_json_u64(lVar1,uVar2);
        *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
      }
      ossl_json_object_end(lVar1);
      *(undefined4 *)(param_1 + 0x68) = 0;
    }
    return;
  }
  return;
}



void ossl_qlog_group_begin(long param_1,long param_2)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_object_begin(param_1 + 0x98);
  return;
}



void ossl_qlog_group_end(long param_1)

{
  ossl_json_object_end(param_1 + 0x98);
  return;
}



void ossl_qlog_array_begin(long param_1,long param_2)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_array_begin(param_1 + 0x98);
  return;
}



void ossl_qlog_array_end(long param_1)

{
  ossl_json_array_end(param_1 + 0x98);
  return;
}



void ossl_qlog_override_time(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x88) = param_2;
  return;
}



void ossl_qlog_str(long param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_str(param_1 + 0x98,param_3);
  return;
}



void ossl_qlog_str_len(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_str_len(param_1 + 0x98,param_3,param_4);
  return;
}



void ossl_qlog_u64(long param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_u64(param_1 + 0x98,param_3);
  return;
}



void ossl_qlog_i64(long param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_i64(param_1 + 0x98,param_3);
  return;
}



void ossl_qlog_bool(long param_1,long param_2,undefined4 param_3)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_bool(param_1 + 0x98,param_3);
  return;
}



void ossl_qlog_bin(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    ossl_json_key(param_1 + 0x98);
  }
  ossl_json_str_hex(param_1 + 0x98,param_3,param_4);
  return;
}



undefined8 ossl_qlog_set_filter(long param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long in_FS_OFFSET;
  bool bVar10;
  byte *local_68;
  byte *local_60;
  long local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x60);
  sVar6 = strlen((char *)param_2);
  pbVar1 = param_2 + sVar6;
LAB_0010129f:
  do {
    while( true ) {
      bVar2 = *param_2;
      if (((0x20 < bVar2) || ((0x100002600U >> ((ulong)bVar2 & 0x3f) & 1) == 0)) ||
         (pbVar1 <= param_2)) break;
      param_2 = param_2 + 1;
    }
    pbVar9 = param_2;
    if (pbVar1 == param_2) {
      *(undefined8 *)(param_1 + 0x60) = local_48;
      uVar7 = 1;
      goto LAB_00101493;
    }
    for (; ((0x20 < *pbVar9 || ((0x100002600U >> ((ulong)*pbVar9 & 0x3f) & 1) == 0)) &&
           (pbVar9 < pbVar1)); pbVar9 = pbVar9 + 1) {
    }
    if (param_2 == pbVar9) {
      bVar10 = true;
      iVar4 = ossl_ctype_check(0xffffffff,3);
      pbVar8 = param_2;
      if (iVar4 == 0) {
        iVar4 = ossl_isdigit(0xffffffff);
        if (iVar4 != 0) goto LAB_00101429;
        uVar7 = 0;
        goto LAB_00101493;
      }
    }
    else {
      if ((bVar2 - 0x2b & 0xfd) == 0) {
        if (param_2 + 1 == pbVar9) {
          iVar4 = ossl_ctype_check(0xffffffff,3);
          if (iVar4 != 0) {
LAB_00101478:
            uVar7 = 0;
LAB_00101493:
            if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return uVar7;
          }
          iVar4 = ossl_isdigit(0xffffffff);
          if (iVar4 == 0) {
            uVar7 = 0;
            goto LAB_00101493;
          }
        }
        else {
          bVar3 = param_2[1];
          iVar4 = (int)(char)bVar3;
          iVar5 = ossl_ctype_check(iVar4,3);
          if ((((iVar5 == 0) && (iVar5 = ossl_isdigit(iVar4), iVar5 == 0)) &&
              (bVar3 != 0x5f && bVar3 != 0x2d)) && (iVar4 != 0x2a)) goto LAB_00101478;
        }
        bVar10 = bVar2 == 0x2b;
        param_2 = param_2 + 1;
      }
      else {
        iVar5 = (int)(char)bVar2;
        iVar4 = ossl_ctype_check(iVar5,3);
        if (((iVar4 == 0) && (iVar4 = ossl_isdigit(iVar5), iVar4 == 0)) &&
           ((bVar2 != 0x5f && (iVar5 != 0x2a)))) {
          uVar7 = 0;
          goto LAB_00101493;
        }
LAB_00101429:
        bVar10 = true;
      }
      if (((long)pbVar9 - (long)param_2 == 1) && (*param_2 == 0x2a)) {
        filter_apply(&local_48,bVar10,0,0,0,0);
        param_2 = pbVar9;
        goto LAB_0010129f;
      }
      pbVar8 = param_2;
      if (param_2 < pbVar9) {
        while (*pbVar8 != 0x3a) {
          pbVar8 = pbVar8 + 1;
          if (pbVar8 == pbVar9) goto LAB_00101478;
        }
      }
    }
    if (pbVar8 == pbVar9) goto LAB_00101478;
    local_60 = pbVar8 + 1;
    local_58 = (long)pbVar8 - (long)param_2;
    local_50 = (long)pbVar9 - (long)local_60;
    local_68 = param_2;
    iVar4 = validate_name(&local_68,&local_58);
    if ((iVar4 == 0) || (iVar4 = validate_name(&local_60,&local_50), iVar4 == 0)) goto LAB_00101478;
    filter_apply(&local_48,bVar10,local_68,local_58,local_60,local_50);
    param_2 = pbVar9;
  } while( true );
}



long ossl_qlog_new_from_env(byte *param_1)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t __n;
  void *__dest;
  long lVar6;
  size_t n;
  ulong uVar7;
  char *local_50;
  
  pcVar4 = (char *)ossl_safe_getenv("QLOGDIR");
  pcVar5 = (char *)ossl_safe_getenv("OSSL_QFILTER");
  if (((param_1 != (byte *)0x0) && (pcVar4 != (char *)0x0)) && (__n = strlen(pcVar4), __n != 0)) {
    bVar1 = *param_1;
    n = (ulong)bVar1 * 2 + 0xf;
    lVar6 = __n + n;
    if ((*pcVar4 == '\0') || (pcVar4[__n - 1] != '/')) {
      __dest = CRYPTO_malloc((int)lVar6,"ssl/quic/qlog.c",0x7c);
      if (__dest == (void *)0x0) {
        return 0;
      }
      memcpy(__dest,pcVar4,__n);
      n = (ulong)bVar1 * 2 + 0xe;
      *(undefined1 *)((long)__dest + __n) = 0x2f;
      __n = __n + 1;
    }
    else {
      __dest = CRYPTO_malloc((int)lVar6,"ssl/quic/qlog.c",0x7c);
      if (__dest == (void *)0x0) {
        return 0;
      }
      memcpy(__dest,pcVar4,__n);
    }
    if (*param_1 != 0) {
      uVar7 = 0;
      do {
        lVar2 = uVar7 + 1;
        uVar7 = uVar7 + 1;
        iVar3 = BIO_snprintf((char *)((long)__dest + __n),lVar6 - __n,"%02x",(ulong)param_1[lVar2]);
        __n = __n + (long)iVar3;
      } while (uVar7 < *param_1);
      n = lVar6 - __n;
    }
    pcVar4 = "client";
    if (*(int *)(param_1 + 0x30) != 0) {
      pcVar4 = "server";
    }
    BIO_snprintf((char *)((long)__dest + __n),n,"_%s.sqlog",pcVar4);
    lVar6 = ossl_qlog_new(param_1);
    if ((lVar6 != 0) && (iVar3 = ossl_qlog_set_sink_filename(lVar6,__dest), iVar3 != 0)) {
      if (pcVar5 == (char *)0x0) {
        local_50 = "*";
      }
      else {
        local_50 = "*";
        if (*pcVar5 != '\0') {
          local_50 = pcVar5;
        }
      }
      iVar3 = ossl_qlog_set_filter(lVar6,local_50);
      if (iVar3 != 0) {
        CRYPTO_free(__dest);
        return lVar6;
      }
    }
    CRYPTO_free(__dest);
    ossl_qlog_free(lVar6);
  }
  return 0;
}


