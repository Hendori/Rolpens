
void default_now(void)

{
  ossl_time_now();
  return;
}



void filter_apply(ulong *param_1,int param_2,long *param_3,long param_4,long *param_5,long param_6)

{
  int iVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = param_3 != (long *)0x0;
  bVar3 = param_4 != 0xc && bVar5;
  if (bVar3) {
LAB_00100080:
    if ((param_4 != 9) && (bVar5)) goto joined_r0x00100531;
LAB_00100140:
    bVar3 = param_5 != (long *)0x0;
    bVar4 = param_6 != 0xe && bVar3;
    if (param_6 == 0xe || !bVar3) {
      if ((param_3 == (long *)0x0) || (iVar1 = memcmp(param_3,"transport",9), iVar1 == 0)) {
        if ((param_5 == (long *)0x0) ||
           ((*param_5 == 0x6574656d61726170 && (*(long *)((long)param_5 + 6) == 0x7465735f73726574))
           )) {
          uVar2 = *param_1 & 0xffffffffffffffef;
          if (param_2 != 0) {
            uVar2 = *param_1 | 0x10;
          }
          *param_1 = uVar2;
          if ((param_6 != 0xb) && (bVar3)) goto LAB_00100498;
          if ((param_3 != (long *)0x0) &&
             ((*param_3 != 0x726f70736e617274 || ((char)param_3[1] != 't'))))
          goto joined_r0x00100531;
          if (param_5 == (long *)0x0) goto LAB_001005cc;
LAB_001001f8:
          if ((*param_5 == 0x735f74656b636170) && (*(int *)((long)param_5 + 7) == 0x746e6573))
          goto LAB_001005cc;
          if ((param_6 != 0xf) && (bVar3)) goto joined_r0x00100531;
          if (param_3 == (long *)0x0) goto LAB_00100399;
          if ((*param_3 != 0x726f70736e617274) || ((char)param_3[1] != 't'))
          goto joined_r0x00100531;
          goto LAB_001004ec;
        }
        if (param_6 != 0xb) goto LAB_0010049e;
        if (param_3 == (long *)0x0) goto LAB_00100670;
        if ((*param_3 == 0x726f70736e617274) && ((char)param_3[1] == 't')) goto LAB_001001f8;
      }
joined_r0x00100531:
      if ((param_4 != 8) && (bVar5)) {
        return;
      }
      goto LAB_001003d8;
    }
    if (param_6 != 0xb) {
LAB_00100498:
      bVar3 = true;
LAB_0010049e:
      if ((param_6 != 0xf) && (bVar3)) goto joined_r0x00100531;
      if (param_3 == (long *)0x0) goto LAB_00100399;
      iVar1 = memcmp(param_3,"transport",9);
LAB_001004df:
      if (iVar1 != 0) goto joined_r0x00100531;
LAB_001004e7:
      if (param_5 != (long *)0x0) {
LAB_001004ec:
        if ((*param_5 != 0x725f74656b636170) || (*(long *)((long)param_5 + 7) != 0x6465766965636572)
           ) goto joined_r0x00100531;
      }
      if (param_2 != 0) {
        *param_1 = *param_1 | 0x40;
        goto joined_r0x00100531;
      }
      *param_1 = *param_1 & 0xffffffffffffffbf;
      if ((param_4 != 8) && (bVar5)) {
        return;
      }
      goto LAB_001003df;
    }
    bVar3 = bVar4;
    if (param_3 != (long *)0x0) {
      if ((((*param_3 != 0x726f70736e617274) || ((char)param_3[1] != 't')) ||
          (*param_5 != 0x735f74656b636170)) || (*(int *)((long)param_5 + 7) != 0x746e6573))
      goto joined_r0x00100531;
LAB_001005cc:
      uVar2 = *param_1 & 0xffffffffffffffdf;
      if (param_2 != 0) {
        uVar2 = *param_1 | 0x20;
      }
      *param_1 = uVar2;
      if ((param_6 != 0xf) && (bVar3)) goto joined_r0x00100531;
      if (param_3 != (long *)0x0) {
        iVar1 = memcmp(param_3,"transport",9);
        goto LAB_001004df;
      }
      goto LAB_001004e7;
    }
LAB_00100670:
    if ((*param_5 == 0x735f74656b636170) && (*(int *)((long)param_5 + 7) == 0x746e6573))
    goto LAB_001005cc;
LAB_00100407:
    if (param_5 == (long *)0x0) goto LAB_0010042c;
  }
  else {
    if ((param_6 == 0x12) || (param_5 == (long *)0x0)) {
      if ((param_3 == (long *)0x0) || (iVar1 = memcmp(param_3,"connectivity",0xc), iVar1 == 0)) {
        if (param_5 == (long *)0x0) {
          uVar2 = *param_1 | 2;
          if (param_2 == 0) {
            uVar2 = *param_1 & 0xfffffffffffffffd;
          }
          *param_1 = uVar2;
        }
        else {
          if ((*param_5 != 0x697463656e6e6f63 || param_5[1] != 0x74726174735f6e6f) ||
             ((short)param_5[2] != 0x6465)) goto LAB_0010005b;
          uVar2 = *param_1 & 0xfffffffffffffffd;
          if (param_2 != 0) {
            uVar2 = *param_1 | 2;
          }
          *param_1 = uVar2;
          if (param_6 != 0x18) goto LAB_001002f0;
        }
        if ((param_3 == (long *)0x0) ||
           ((*param_3 == 0x697463656e6e6f63 && ((int)param_3[1] == 0x79746976)))) {
          if (param_5 != (long *)0x0) goto LAB_001000c3;
          goto LAB_00100711;
        }
      }
      goto LAB_00100080;
    }
LAB_0010005b:
    if (param_6 == 0x18) {
      if (param_3 != (long *)0x0) {
        if ((*param_3 == 0x697463656e6e6f63) && ((int)param_3[1] == 0x79746976)) {
LAB_001000c3:
          if ((*param_5 == 0x697463656e6e6f63 && param_5[1] == 0x65746174735f6e6f) &&
             (param_5[2] == 0x646574616470755f)) goto LAB_00100711;
          if (param_6 == 0x11) {
            if (param_3 == (long *)0x0) goto LAB_001000f6;
            if ((*param_3 == 0x697463656e6e6f63) && ((int)param_3[1] == 0x79746976))
            goto LAB_00100334;
          }
        }
        goto LAB_00100080;
      }
      if ((*param_5 == 0x697463656e6e6f63 && param_5[1] == 0x65746174735f6e6f) &&
         (param_5[2] == 0x646574616470755f)) {
LAB_00100711:
        uVar2 = *param_1 & 0xfffffffffffffffb;
        if (param_2 != 0) {
          uVar2 = *param_1 | 4;
        }
        *param_1 = uVar2;
        if (((param_6 == 0x11) || (param_5 == (long *)0x0)) &&
           ((param_3 == (long *)0x0 || (iVar1 = memcmp(param_3,"connectivity",0xc), iVar1 == 0)))) {
          if (param_5 != (long *)0x0) goto LAB_00100334;
LAB_00100368:
          uVar2 = *param_1 & 0xfffffffffffffff7;
          if (param_2 != 0) {
            uVar2 = *param_1 | 8;
          }
          *param_1 = uVar2;
        }
        goto LAB_00100080;
      }
      goto LAB_00100498;
    }
LAB_001002f0:
    if (param_6 != 0x11) goto LAB_00100080;
    if (param_3 != (long *)0x0) {
      iVar1 = memcmp(param_3,"connectivity",0xc);
      if (iVar1 == 0) {
LAB_00100334:
        if ((*param_5 == 0x697463656e6e6f63 && param_5[1] == 0x65736f6c635f6e6f) &&
           ((char)param_5[2] == 'd')) goto LAB_00100368;
      }
      goto LAB_00100080;
    }
LAB_001000f6:
    if ((*param_5 == 0x697463656e6e6f63 && param_5[1] == 0x65736f6c635f6e6f) &&
       ((char)param_5[2] == 'd')) {
      uVar2 = *param_1 | 8;
      if (param_2 == 0) {
        uVar2 = *param_1 & 0xfffffffffffffff7;
      }
      *param_1 = uVar2;
      goto LAB_00100140;
    }
    if (param_5 != (long *)0x0) goto joined_r0x00100531;
LAB_00100399:
    if ((*param_5 == 0x725f74656b636170) && (*(long *)((long)param_5 + 7) == 0x6465766965636572)) {
      if (param_2 != 0) {
        *param_1 = *param_1 | 0x40;
LAB_001003d8:
        bVar3 = param_5 != (long *)0x0;
LAB_001003df:
        if ((param_6 != 0xb) && (bVar3)) {
          return;
        }
        if ((param_3 != (long *)0x0) && (*param_3 != 0x797265766f636572)) {
          return;
        }
        goto LAB_00100407;
      }
      *param_1 = *param_1 & 0xffffffffffffffbf;
    }
    if ((param_6 != 0xb) && (bVar3)) {
      return;
    }
  }
  if ((*param_5 != 0x6c5f74656b636170) || (*(int *)((long)param_5 + 7) != 0x74736f6c)) {
    return;
  }
LAB_0010042c:
  uVar2 = *param_1 | 0x80;
  if (param_2 == 0) {
    uVar2 = *param_1 & 0xffffffffffffff7f;
  }
  *param_1 = uVar2;
  return;
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
    if (pcVar3 == (char *)0x0) goto LAB_00100968;
  }
  if ((char *)param_1[4] != (char *)0x0) {
    pcVar3 = CRYPTO_strdup((char *)param_1[4],"ssl/quic/qlog.c",0x49);
    ptr[4] = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_00100968;
  }
  if ((char *)param_1[5] != (char *)0x0) {
    pcVar3 = CRYPTO_strdup((char *)param_1[5],"ssl/quic/qlog.c",0x4d);
    ptr[5] = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_00100968;
  }
  if ((char *)param_1[10] != (char *)0x0) {
    pcVar3 = CRYPTO_strdup((char *)param_1[10],"ssl/quic/qlog.c",0x52);
    ptr[10] = pcVar3;
    if (pcVar3 == (char *)0x0) goto LAB_00100968;
  }
  iVar2 = ossl_json_init(ptr + 0x13,0,5);
  if (iVar2 != 0) {
    if (ptr[7] == 0) {
      ptr[7] = 0x100000;
      return ptr;
    }
    return ptr;
  }
LAB_00100968:
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
        ossl_json_str(lVar1,&_LC14);
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
        ossl_json_str(lVar1,&_LC24);
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
        ossl_json_key(lVar1,&_LC30);
        pcVar6 = "client";
        if (*(int *)(param_1 + 0x30) != 0) {
          pcVar6 = "server";
        }
        ossl_json_str(lVar1,pcVar6);
        ossl_json_key(lVar1,&_LC31);
        ossl_json_str(lVar1,pcVar7);
        ossl_json_object_end(lVar1);
        ossl_json_object_end(lVar1);
        ossl_json_object_end(lVar1);
        *(undefined4 *)(param_1 + 0xf0) = 1;
      }
      ossl_json_object_begin(lVar1);
      ossl_json_key(lVar1,&_LC31);
      ossl_json_str(lVar1,*(undefined8 *)(param_1 + 0x80));
      ossl_json_key(lVar1,&_LC32);
      ossl_json_object_begin(lVar1);
      uVar4 = 1;
      goto LAB_00100f6a;
    }
  }
  uVar4 = 0;
LAB_00100f6a:
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
      ossl_json_key(lVar1,&_LC33);
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
  byte bVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  byte *pbVar5;
  undefined8 uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ulong local_78;
  ulong local_70;
  byte *local_60;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = *(undefined8 *)(param_1 + 0x60);
  sVar4 = strlen((char *)param_2);
  pbVar5 = param_2 + sVar4;
LAB_00101348:
  do {
    bVar1 = *param_2;
    for (pbVar8 = param_2;
        ((bVar1 < 0x21 && ((0x100002600U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) && (pbVar8 < pbVar5));
        pbVar8 = pbVar8 + 1) {
      bVar1 = pbVar8[1];
    }
    param_2 = pbVar8;
    if (pbVar5 == pbVar8) {
      *(undefined8 *)(param_1 + 0x60) = local_48;
      uVar6 = 1;
      goto LAB_001014a2;
    }
    for (; ((0x20 < *param_2 || ((0x100002600U >> ((ulong)*param_2 & 0x3f) & 1) == 0)) &&
           (param_2 < pbVar5)); param_2 = param_2 + 1) {
    }
    if (pbVar8 == param_2) {
      iVar3 = ossl_ctype_check(0xffffffff,3);
      if ((iVar3 != 0) || (iVar3 = ossl_isdigit(0xffffffff), iVar3 == 0)) goto LAB_001014a0;
LAB_001015e0:
      bVar11 = true;
    }
    else {
      if ((bVar1 - 0x2b & 0xfd) != 0) {
        iVar7 = (int)(char)bVar1;
        iVar3 = ossl_ctype_check(iVar7,3);
        if ((((iVar3 != 0) || (iVar3 = ossl_isdigit(iVar7), iVar3 != 0)) || (bVar1 == 0x5f)) ||
           (iVar7 == 0x2a)) goto LAB_001015e0;
        goto LAB_001014a0;
      }
      if (pbVar8 + 1 == param_2) {
        iVar3 = ossl_ctype_check(0xffffffff,3);
        if ((iVar3 != 0) || (iVar3 = ossl_isdigit(0xffffffff), iVar3 == 0)) goto LAB_001014a0;
      }
      else {
        bVar2 = pbVar8[1];
        iVar7 = (int)(char)bVar2;
        iVar3 = ossl_ctype_check(iVar7,3);
        if (((iVar3 == 0) &&
            ((iVar3 = ossl_isdigit(iVar7), iVar3 == 0 && (bVar2 != 0x5f && bVar2 != 0x2d)))) &&
           (iVar7 != 0x2a)) goto LAB_001014a0;
      }
      bVar11 = bVar1 == 0x2b;
      pbVar8 = pbVar8 + 1;
    }
    if (((long)param_2 - (long)pbVar8 == 1) && (*pbVar8 == 0x2a)) {
      filter_apply(&local_48,bVar11,0,0,0,0);
      goto LAB_00101348;
    }
    pbVar9 = pbVar8;
    if (param_2 <= pbVar8) {
LAB_001014a0:
      uVar6 = 0;
LAB_001014a2:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar6;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    while (*pbVar9 != 0x3a) {
      pbVar9 = pbVar9 + 1;
      if (pbVar9 == param_2) goto LAB_001014a0;
    }
    if (pbVar9 == param_2) goto LAB_001014a0;
    local_60 = pbVar9 + 1;
    local_70 = (long)pbVar9 - (long)pbVar8;
    local_78 = (long)param_2 - (long)local_60;
    if (local_70 == 1) {
      if (*pbVar8 != 0x2a) goto LAB_001014d2;
      local_70 = 0;
      pbVar8 = (byte *)0x0;
    }
    else {
      if (local_70 == 0) goto LAB_001014a0;
LAB_001014d2:
      uVar10 = 0;
      do {
        while( true ) {
          bVar1 = pbVar8[uVar10];
          iVar3 = ossl_ctype_check((int)(char)bVar1,3);
          if (((iVar3 == 0) && (iVar3 = ossl_isdigit((int)(char)bVar1), iVar3 == 0)) &&
             (bVar1 != 0x5f)) break;
          uVar10 = uVar10 + 1;
          if (local_70 <= uVar10) goto LAB_00101530;
        }
        if (bVar1 != 0x2d) goto LAB_001014a0;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_70);
    }
LAB_00101530:
    if (local_78 == 1) {
      if (pbVar9[1] != 0x2a) goto LAB_00101546;
      local_78 = 0;
      local_60 = (byte *)0x0;
    }
    else {
      if (local_78 == 0) goto LAB_001014a0;
LAB_00101546:
      uVar10 = 0;
      do {
        while( true ) {
          bVar1 = pbVar9[uVar10 + 1];
          iVar3 = ossl_ctype_check((int)(char)bVar1,3);
          if (((iVar3 == 0) && (iVar3 = ossl_isdigit((int)(char)bVar1), iVar3 == 0)) &&
             (bVar1 != 0x5f)) break;
          uVar10 = uVar10 + 1;
          if (local_78 <= uVar10) goto LAB_001015a3;
        }
        if (bVar1 != 0x2d) goto LAB_001014a0;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_78);
    }
LAB_001015a3:
    filter_apply(&local_48,bVar11,pbVar8,local_70,local_60,local_78);
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
        pcVar4 = "*";
      }
      else {
        pcVar4 = "*";
        if (*pcVar5 != '\0') {
          pcVar4 = pcVar5;
        }
      }
      iVar3 = ossl_qlog_set_filter(lVar6,pcVar4);
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


