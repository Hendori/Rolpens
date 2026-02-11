
undefined4 wbuf_flush(undefined8 *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  
  lVar1 = param_1[3];
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar1 == 0) {
      param_1[3] = 0;
      if (param_2 == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = 1;
        BIO_ctrl((BIO *)*param_1,0xb,0,(void *)0x0);
      }
LAB_00100084:
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    iVar3 = BIO_write_ex(*param_1,param_1[1],lVar1);
    if (iVar3 == 0) {
      memmove((void *)param_1[1],(void *)param_1[1],param_1[3]);
      param_1[3] = 0;
      uVar4 = 0;
      goto LAB_00100084;
    }
    lVar1 = param_1[3];
  } while( true );
}



undefined8 json_push(long param_1,uint param_2)

{
  ulong uVar1;
  byte bVar2;
  byte *pbVar3;
  void *pvVar4;
  byte bVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (1 < param_2) {
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 0x48);
  uVar1 = *(ulong *)(param_1 + 0x50);
  if (uVar6 < uVar1) {
    pvVar4 = *(void **)(param_1 + 8);
    goto LAB_00100103;
  }
  if (uVar1 == 0) {
    uVar7 = 0x10;
LAB_0010014b:
    pvVar4 = (void *)(param_1 + 0x11);
LAB_0010014f:
    *(void **)(param_1 + 8) = pvVar4;
  }
  else {
    uVar7 = uVar1 * 2;
    if (uVar1 < uVar7) {
      if (uVar7 < 0x11) goto LAB_0010014b;
      pvVar4 = *(void **)(param_1 + 8);
      if (pvVar4 == (void *)(param_1 + 0x11)) {
        *(undefined8 *)(param_1 + 8) = 0;
        pvVar4 = (void *)0x0;
      }
      pvVar4 = CRYPTO_realloc(pvVar4,(int)uVar7,"ssl/quic/json_enc.c",0x82);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      uVar6 = *(ulong *)(param_1 + 0x48);
      goto LAB_0010014f;
    }
    pvVar4 = *(void **)(param_1 + 8);
  }
  *(ulong *)(param_1 + 0x50) = uVar7;
LAB_00100103:
  pbVar3 = (byte *)((long)pvVar4 + uVar6);
  bVar2 = (byte)(1 << (*(byte *)(param_1 + 5) & 0x1f));
  bVar5 = ~bVar2 & *pbVar3;
  if (param_2 != 0) {
    bVar5 = *pbVar3 | bVar2;
  }
  *pbVar3 = bVar5;
  bVar2 = *(char *)(param_1 + 5) + 1U & 7;
  *(byte *)(param_1 + 5) = bVar2;
  if (bVar2 == 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ossl_json_init(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  puVar5 = (undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8);
  for (uVar4 = (ulong)(((int)param_1 -
                       (int)(undefined8 *)((ulong)(param_1 + 3) & 0xfffffffffffffff8)) + 0x58U >> 3)
      ; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *param_1 = param_3;
  pvVar3 = CRYPTO_malloc(0x1000,"ssl/quic/json_enc.c",0x18);
  *(void **)(param_1 + 0xc) = pvVar3;
  uVar2 = _UNK_001012f8;
  uVar1 = __LC1;
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)(param_1 + 10) = param_2;
    *(undefined1 *)((long)param_1 + 6) = 2;
    *(undefined8 *)(param_1 + 0xe) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
  }
  return pvVar3 != (void *)0x0;
}



void ossl_json_cleanup(long param_1)

{
  CRYPTO_free(*(void **)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(void **)(param_1 + 8) != (void *)(param_1 + 0x11)) {
    CRYPTO_free(*(void **)(param_1 + 8));
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



undefined8 ossl_json_reset(long param_1)

{
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 (*) [16])(param_1 + 0x40) = (undefined1  [16])0x0;
  return 1;
}



void ossl_json_flush(long param_1)

{
  wbuf_flush(param_1 + 0x28,1);
  return;
}



undefined4 ossl_json_flush_cleanup(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = ossl_json_flush();
  ossl_json_cleanup(param_1);
  return uVar1;
}



undefined8 ossl_json_set0_sink(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return 1;
}



undefined1 ossl_json_in_error(long param_1)

{
  return *(undefined1 *)(param_1 + 4);
}



void json_indent(byte *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  param_1[0x10] = 0;
  if ((*param_1 & 2) == 0) {
    return;
  }
  iVar1 = ossl_json_in_error();
  if (iVar1 == 0) {
    json_write_char_part_0(param_1,10);
  }
  lVar3 = ((ulong)param_1[5] + *(long *)(param_1 + 0x48) * 8) * 4;
  if (lVar3 != 0) {
    lVar2 = 0;
    do {
      iVar1 = ossl_json_in_error(param_1);
      if (iVar1 == 0) {
        json_write_str_part_0(param_1,&_LC2);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != lVar3);
  }
  return;
}



void json_write_str_part_0(long param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    json_indent();
  }
  cVar1 = *param_2;
  pcVar2 = param_2 + 1;
  do {
    if (cVar1 == '\0') {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x40);
    if (*(long *)(param_1 + 0x38) == lVar4) {
      iVar3 = wbuf_flush(param_1 + 0x28,0);
      if (iVar3 == 0) {
        *(undefined1 *)(param_1 + 4) = 1;
        return;
      }
      lVar4 = *(long *)(param_1 + 0x40);
    }
    *(long *)(param_1 + 0x40) = lVar4 + 1;
    *(char *)(*(long *)(param_1 + 0x30) + lVar4) = cVar1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while( true );
}



void json_write_char_part_0(long param_1,undefined1 param_2)

{
  int iVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    json_indent();
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x38) == lVar2) {
    iVar1 = wbuf_flush(param_1 + 0x28,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
    lVar2 = *(long *)(param_1 + 0x40);
  }
  *(long *)(param_1 + 0x40) = lVar2 + 1;
  *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar2) = param_2;
  return;
}



void json_post_item(byte *param_1)

{
  int iVar1;
  
  param_1[6] = 2;
  if (param_1[5] != 0 || *(long *)(param_1 + 0x48) != 0) {
    return;
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  iVar1 = ossl_json_in_error();
  if (iVar1 == 0) {
    json_write_char_part_0(param_1,10);
    return;
  }
  return;
}



void composite_end(long param_1,uint param_2,char param_3)

{
  char cVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  
  cVar1 = *(char *)(param_1 + 0x10);
  iVar3 = ossl_json_in_error();
  if (iVar3 != 0) {
    return;
  }
  cVar6 = *(char *)(param_1 + 5);
  lVar2 = *(long *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x10) = 0;
  if (cVar6 == '\0') {
    if (lVar2 == 0) goto LAB_001005b0;
    lVar4 = lVar2 + -1;
    bVar5 = 7;
  }
  else {
    bVar5 = cVar6 - 1;
    lVar4 = lVar2;
  }
  if ((param_2 != (*(byte *)(*(long *)(param_1 + 8) + lVar4) >> (bVar5 & 0x1f) & 1)) ||
     ((param_2 == 0 && (*(char *)(param_1 + 6) == '\x01')))) {
LAB_001005b0:
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  if (lVar2 == 0) {
    if (cVar6 == '\0') goto LAB_001005b0;
  }
  else if (cVar6 == '\0') {
    cVar6 = '\a';
    *(long *)(param_1 + 0x48) = lVar2 + -1;
    goto LAB_00100574;
  }
  cVar6 = cVar6 + -1;
LAB_00100574:
  *(char *)(param_1 + 5) = cVar6;
  if (cVar1 == '\0') {
    json_indent(param_1);
  }
  iVar3 = ossl_json_in_error(param_1);
  if (iVar3 == 0) {
    json_write_char_part_0(param_1,(int)param_3);
  }
  json_post_item(param_1);
  return;
}



void json_write_qstring_inner_part_0(undefined8 param_1,uint *param_2,ulong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = ossl_json_in_error();
  if (iVar5 == 0) {
    json_write_char_part_0(param_1,0x22);
  }
  uVar8 = local_48;
  if (param_4 != 0) {
    param_3 = strlen((char *)param_2);
    uVar8 = local_48;
  }
  do {
    local_48 = uVar8;
    if (param_3 == 0) {
      iVar5 = ossl_json_in_error(param_1);
      if (iVar5 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          json_write_char_part_0(param_1,0x22);
          return;
        }
      }
      else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    bVar1 = (byte)*param_2;
    local_48._2_2_ = (undefined2)(uVar8 >> 0x10);
    if ((char)bVar1 < '#') {
      if ((char)bVar1 < '\b') {
switchD_00100695_caseD_b:
        uVar8 = (uint)bVar1;
        if ((byte)(bVar1 + 0x3e) < 0x1e) {
          if ((param_3 == 1) || (0x3f < (byte)(*(byte *)((long)param_2 + 1) + 0x80)))
          goto LAB_001006c4;
          param_3 = param_3 - 1;
          puVar9 = &local_48;
          local_48 = CONCAT22(local_48._2_2_,(short)*param_2) & 0xff00ffff;
          param_2 = (uint *)((long)param_2 + 1);
          uVar8 = local_48;
        }
        else {
          if ((byte)(bVar1 + 0x20) < 0x10) {
            if (((2 < param_3) &&
                (bVar2 = *(byte *)((long)param_2 + 1), (byte)(bVar2 + 0x80) < 0x40)) &&
               ((byte)(*(byte *)((long)param_2 + 2) + 0x80) < 0x40)) {
              if (bVar1 == 0xe0) {
                if (0x9f < bVar2) goto LAB_00100865;
              }
              else {
                if ((bVar1 != 0xed) || (bVar2 < 0xa0)) {
LAB_00100865:
                  param_3 = param_3 - 2;
                  puVar9 = &local_48;
                  local_48 = (uint)(uint3)*param_2;
                  param_2 = (uint *)((long)param_2 + 2);
                  uVar8 = local_48;
                  goto LAB_00100720;
                }
                uVar8 = 0xed;
              }
            }
          }
          else {
            if (4 < (byte)(bVar1 + 0x10)) goto LAB_001007c9;
            if ((((3 < param_3) &&
                 (bVar2 = *(byte *)((long)param_2 + 1), (byte)(bVar2 + 0x80) < 0x40)) &&
                ((byte)(*(byte *)((long)param_2 + 2) + 0x80) < 0x40)) &&
               ((byte)(*(byte *)((long)param_2 + 3) + 0x80) < 0x40)) {
              if (bVar1 == 0xf0) {
                if (0x8f < bVar2) goto LAB_0010093b;
              }
              else {
                if ((bVar1 != 0xf4) || (bVar2 < 0x90)) {
LAB_0010093b:
                  uVar8 = *param_2;
                  local_44 = 0;
                  param_2 = (uint *)((long)param_2 + 3);
                  param_3 = param_3 - 3;
                  puVar9 = &local_48;
                  goto LAB_00100720;
                }
                uVar8 = 0xf4;
              }
            }
          }
LAB_001006c4:
          puVar9 = &local_48;
          iVar5 = 0xc;
          local_48 = CONCAT22(local_48._2_2_,0x755c);
          puVar7 = puVar9;
          do {
            uVar6 = (int)uVar8 >> ((byte)iVar5 & 0x1f) & 0xf;
            cVar3 = (char)uVar6;
            cVar4 = cVar3 + 'W';
            if (uVar6 < 10) {
              cVar4 = cVar3 + '0';
            }
            iVar5 = iVar5 + -4;
            *(char *)((long)puVar7 + 2) = cVar4;
            puVar7 = (undefined4 *)((long)puVar7 + 1);
          } while (iVar5 != -4);
          local_42 = 0;
          uVar8 = local_48;
        }
      }
      else {
        switch(bVar1) {
        case 8:
          puVar9 = (undefined4 *)&_LC5;
          break;
        case 9:
          puVar9 = (undefined4 *)&_LC4;
          break;
        case 10:
          puVar9 = (undefined4 *)&_LC3;
          break;
        default:
          goto switchD_00100695_caseD_b;
        case 0xc:
          puVar9 = (undefined4 *)&_LC6;
          break;
        case 0xd:
          puVar9 = (undefined4 *)&_LC9;
          break;
        case 0x22:
          puVar9 = (undefined4 *)&_LC7;
        }
      }
LAB_00100720:
      local_48 = uVar8;
      iVar5 = ossl_json_in_error(param_1);
      if (iVar5 == 0) {
        json_write_str_part_0(param_1,puVar9);
      }
    }
    else {
      puVar9 = (undefined4 *)&_LC8;
      if (bVar1 == 0x5c) goto LAB_00100720;
LAB_001007c9:
      uVar8 = (uint)bVar1;
      if (0x5e < (byte)(bVar1 - 0x20)) goto LAB_001006c4;
      iVar5 = ossl_json_in_error(param_1);
      if (iVar5 == 0) {
        json_write_char_part_0(param_1,(int)(char)bVar1);
      }
    }
    param_2 = (uint *)((long)param_2 + 1);
    param_3 = param_3 - 1;
    uVar8 = local_48;
  } while( true );
}



undefined8 json_pre_item(byte *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  
  iVar1 = ossl_json_in_error();
  if (iVar1 != 0) {
    return 0;
  }
  if (param_1[6] == 1) {
    return 1;
  }
  if (param_1[6] == 2) {
    lVar2 = *(long *)(param_1 + 0x48);
    if (param_1[5] == 0) {
      if (lVar2 == 0) {
        if (((*param_1 & 1) != 0) && (iVar1 = ossl_json_in_error(param_1), iVar1 == 0)) {
          json_write_char_part_0(param_1,0x1e);
        }
        goto LAB_001009f5;
      }
      lVar2 = lVar2 + -1;
      uVar3 = 7;
    }
    else {
      uVar3 = param_1[5] - 1;
    }
    if ((*(byte *)(*(long *)(param_1 + 8) + lVar2) >> (uVar3 & 0x1f) & 1) != 0) {
      iVar1 = ossl_json_in_error(param_1);
      if (iVar1 == 0) {
        json_write_char_part_0(param_1,0x2c);
      }
      iVar1 = ossl_json_in_error(param_1);
      if (iVar1 != 0) {
        return 0;
      }
      json_indent(param_1);
LAB_001009f5:
      param_1[6] = 1;
      return 1;
    }
  }
  param_1[4] = 1;
  return 0;
}



void json_u64(byte *param_1,ulong param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char local_34 [4];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_3 == 0) && ((*param_1 & 4) != 0)) && (param_2 >> 0x35 != 0)) {
    iVar3 = json_pre_item();
    if (iVar3 == 0) goto LAB_00100ab0;
    iVar3 = ossl_json_in_error(param_1);
    if (iVar3 == 0) {
      json_write_char_part_0(param_1,0x22);
    }
    bVar2 = true;
LAB_00100b10:
    local_34[1] = 0;
    pcVar4 = local_34 + 1;
    do {
      pcVar4 = pcVar4 + -1;
      *pcVar4 = (char)param_2 + (char)(param_2 / 10) * -10 + '0';
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
    iVar3 = ossl_json_in_error(param_1);
    if (iVar3 == 0) {
      json_write_str_part_0(param_1,pcVar4);
    }
    if (bVar2) {
      iVar3 = ossl_json_in_error(param_1);
      if (iVar3 == 0) {
        json_write_char_part_0(param_1,0x22);
      }
    }
  }
  else {
    iVar3 = json_pre_item(param_1);
    if (iVar3 == 0) {
LAB_00100ab0:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00100ba8;
    }
    if (param_2 != 0) {
      bVar2 = false;
      goto LAB_00100b10;
    }
    iVar3 = ossl_json_in_error(param_1);
    if (iVar3 == 0) {
      json_write_str_part_0(param_1,&_LC11);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    json_post_item(param_1);
    return;
  }
LAB_00100ba8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_json_object_begin(long param_1)

{
  int iVar1;
  
  iVar1 = json_pre_item();
  if ((iVar1 == 0) || (iVar1 = json_push(param_1,0), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  iVar1 = ossl_json_in_error(param_1);
  if (iVar1 == 0) {
    json_write_char_part_0(param_1,0x7b);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



void ossl_json_object_end(undefined8 param_1)

{
  composite_end(param_1,0,0x7d);
  return;
}



void ossl_json_array_begin(long param_1)

{
  int iVar1;
  
  iVar1 = json_pre_item();
  if ((iVar1 == 0) || (iVar1 = json_push(param_1,1), iVar1 == 0)) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  iVar1 = ossl_json_in_error(param_1);
  if (iVar1 == 0) {
    json_write_char_part_0(param_1,0x5b);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



void ossl_json_array_end(undefined8 param_1)

{
  composite_end(param_1,1,0x5d);
  return;
}



void ossl_json_key(byte *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  iVar2 = ossl_json_in_error();
  if (iVar2 == 0) {
    lVar1 = *(long *)(param_1 + 0x48);
    if (param_1[5] == 0) {
      if ((lVar1 == 0) || (*(char *)(*(long *)(param_1 + 8) + lVar1 + -1) < '\0'))
      goto LAB_00100d1b;
    }
    else if ((*(byte *)(*(long *)(param_1 + 8) + lVar1) >> (param_1[5] - 1 & 0x1f) & 1) != 0)
    goto LAB_00100d1b;
    if (param_1[6] == 2) {
      iVar2 = ossl_json_in_error(param_1);
      if (iVar2 == 0) {
        json_write_char_part_0(param_1,0x2c);
      }
      param_1[6] = 0;
    }
    json_indent(param_1);
    if (param_1[6] != 0) {
LAB_00100d1b:
      param_1[4] = 1;
      return;
    }
    iVar2 = ossl_json_in_error(param_1);
    if (iVar2 == 0) {
      json_write_qstring_inner_part_0(param_1,param_2,0,1);
      iVar2 = ossl_json_in_error(param_1);
    }
    else {
      iVar2 = ossl_json_in_error(param_1);
    }
    if (iVar2 == 0) {
      iVar2 = ossl_json_in_error(param_1);
      if (iVar2 == 0) {
        json_write_char_part_0(param_1,0x3a);
      }
      if (((*param_1 & 2) != 0) && (iVar2 = ossl_json_in_error(param_1), iVar2 == 0)) {
        json_write_char_part_0(param_1,0x20);
      }
      param_1[6] = 1;
      return;
    }
  }
  return;
}



void ossl_json_null(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = json_pre_item();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = ossl_json_in_error(param_1);
  if (iVar1 == 0) {
    json_write_str_part_0(param_1,&_LC12);
  }
  json_post_item(param_1);
  return;
}



void ossl_json_bool(undefined8 param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = json_pre_item();
  if (iVar1 == 0) {
    return;
  }
  pcVar2 = "true";
  if (param_2 < 1) {
    pcVar2 = "false";
  }
  iVar1 = ossl_json_in_error(param_1);
  if (iVar1 != 0) {
    json_post_item(param_1);
    return;
  }
  json_write_str_part_0(param_1,pcVar2);
  json_post_item(param_1);
  return;
}



void ossl_json_u64(undefined8 param_1,undefined8 param_2)

{
  json_u64(param_1,param_2,0);
  return;
}



void ossl_json_i64(byte *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  
  if (-1 < param_2) {
    ossl_json_u64();
    return;
  }
  iVar2 = json_pre_item();
  if (iVar2 == 0) {
    return;
  }
  if ((*param_1 & 4) == 0) {
    bVar1 = false;
LAB_00100ec4:
    iVar2 = ossl_json_in_error(param_1);
    if (iVar2 == 0) {
      json_write_char_part_0(param_1,0x2d);
    }
    if (param_2 == -0x8000000000000000) goto LAB_00100eef;
  }
  else {
    if (0x3ffffffffffffe < param_2 + 0x1fffffffffffffU) {
      iVar2 = ossl_json_in_error(param_1);
      if (iVar2 == 0) {
        json_write_char_part_0(param_1,0x22);
      }
      bVar1 = true;
      goto LAB_00100ec4;
    }
    iVar2 = ossl_json_in_error(param_1);
    if (iVar2 != 0) {
      json_u64(param_1,-param_2,1);
      return;
    }
    json_write_char_part_0(param_1,0x2d);
    bVar1 = false;
  }
  param_2 = -param_2;
LAB_00100eef:
  json_u64(param_1,param_2,1);
  if (((bVar1) && (iVar2 = ossl_json_in_error(param_1), iVar2 == 0)) &&
     (iVar2 = ossl_json_in_error(param_1), iVar2 == 0)) {
    json_write_char_part_0(param_1,0x22);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_json_f64(double param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  char local_48 [40];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = json_pre_item();
  if (iVar1 != 0) {
    if ((__LC16 < (double)((ulong)param_1 & __LC15)) || (NAN(param_1))) {
      *(undefined1 *)(param_2 + 4) = 1;
    }
    else {
      BIO_snprintf(local_48,0x20,"%1.17g");
      iVar1 = ossl_json_in_error(param_2);
      if (iVar1 == 0) {
        json_write_str_part_0(param_2,local_48);
        json_post_item(param_2);
      }
      else {
        json_post_item(param_2);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ossl_json_str(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = json_pre_item();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = ossl_json_in_error(param_1);
  if (iVar1 == 0) {
    json_write_qstring_inner_part_0(param_1,param_2,0,1);
  }
  json_post_item(param_1);
  return;
}



void ossl_json_str_len(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = json_pre_item();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = ossl_json_in_error(param_1);
  if (iVar1 == 0) {
    json_write_qstring_inner_part_0(param_1,param_2,param_3,0);
  }
  json_post_item(param_1);
  return;
}



void ossl_json_str_hex(undefined8 param_1,byte *param_2,long param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  
  iVar3 = json_pre_item();
  if (iVar3 == 0) {
    return;
  }
  iVar3 = ossl_json_in_error(param_1);
  if (iVar3 == 0) {
    json_write_char_part_0(param_1,0x22);
  }
  pbVar5 = param_2 + param_3;
  if (param_2 < pbVar5) {
    do {
      bVar1 = *param_2;
      bVar4 = bVar1 >> 4;
      cVar2 = bVar4 + 0x57;
      if (bVar4 < 10) {
        cVar2 = bVar4 + 0x30;
      }
      iVar3 = ossl_json_in_error(param_1);
      if (iVar3 == 0) {
        json_write_char_part_0(param_1,cVar2);
      }
      cVar2 = (bVar1 & 0xf) + 0x30;
      if (9 < (bVar1 & 0xf)) {
        cVar2 = (bVar1 & 0xf) + 0x57;
      }
      iVar3 = ossl_json_in_error(param_1);
      if (iVar3 == 0) {
        json_write_char_part_0(param_1,cVar2);
      }
      param_2 = param_2 + 1;
    } while (pbVar5 != param_2);
  }
  iVar3 = ossl_json_in_error(param_1);
  if (iVar3 == 0) {
    json_write_char_part_0(param_1,0x22);
  }
  json_post_item(param_1);
  return;
}


