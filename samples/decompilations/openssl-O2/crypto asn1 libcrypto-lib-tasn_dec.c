
undefined8
asn1_check_tlen(long *param_1,int *param_2,undefined1 *param_3,byte *param_4,byte *param_5,
               long *param_6,long param_7,int param_8,int param_9,char param_10,char *param_11)

{
  uchar *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_58;
  int local_54;
  long local_50;
  uchar *local_48;
  long local_40;
  
  puVar1 = (uchar *)*param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = puVar1;
  if (param_7 < 1) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x482,"asn1_check_tlen");
    ERR_set_error(0xd,0xe0,0);
LAB_00100258:
    if (param_11 != (char *)0x0) goto LAB_0010025d;
  }
  else {
    if (param_11 == (char *)0x0) {
      uVar2 = ASN1_get_object(&local_48,&local_50,&local_58,&local_54,param_7);
LAB_0010008f:
      if ((uVar2 & 0x80) == 0) {
        if (-1 < param_8) {
          if ((param_8 != local_58) || (local_54 != param_9)) {
LAB_001000b7:
            uVar3 = 0xffffffff;
            if (param_10 != '\0') goto LAB_001000c5;
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x4aa,"asn1_check_tlen");
            ERR_set_error(0xd,0xa8,0);
            goto LAB_00100258;
          }
          if (param_11 != (char *)0x0) {
LAB_00100347:
            *param_11 = '\0';
          }
        }
        if ((uVar2 & 1) != 0) {
          local_50 = param_7 - ((long)local_48 - (long)puVar1);
        }
LAB_001001d7:
        if (param_4 != (byte *)0x0) {
          *param_4 = (byte)uVar2 & 1;
        }
        if (param_5 != (byte *)0x0) {
          *param_5 = (byte)uVar2 & 0x20;
        }
        if (param_1 != (long *)0x0) {
          *param_1 = local_50;
        }
        if (param_3 != (undefined1 *)0x0) {
          *param_3 = (char)local_54;
        }
        if (param_2 != (int *)0x0) {
          *param_2 = local_58;
        }
        *param_6 = (long)local_48;
        uVar3 = 1;
        goto LAB_001000c5;
      }
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x4a0,"asn1_check_tlen");
      ERR_set_error(0xd,0x66,0);
      goto LAB_00100258;
    }
    if (*param_11 != '\0') {
      local_50 = *(long *)(param_11 + 8);
      uVar2 = *(uint *)(param_11 + 4);
      local_54 = *(int *)(param_11 + 0x14);
      local_58 = *(int *)(param_11 + 0x10);
      local_48 = puVar1 + *(int *)(param_11 + 0x18);
      goto LAB_0010008f;
    }
    uVar2 = ASN1_get_object(&local_48,&local_50,&local_58,&local_54,param_7);
    *param_11 = '\x01';
    *(uint *)(param_11 + 4) = uVar2;
    iVar4 = (int)local_48 - (int)puVar1;
    *(long *)(param_11 + 8) = local_50;
    *(int *)(param_11 + 0x18) = iVar4;
    *(ulong *)(param_11 + 0x10) = CONCAT44(local_54,local_58);
    if ((uVar2 & 0x81) != 0) goto LAB_0010008f;
    if (iVar4 + local_50 <= param_7) {
      if (-1 < param_8) {
        if ((local_58 == param_8) && (param_9 == local_54)) goto LAB_00100347;
        goto LAB_001000b7;
      }
      goto LAB_001001d7;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x499,"asn1_check_tlen");
    ERR_set_error(0xd,0x9b,0);
LAB_0010025d:
    *param_11 = '\0';
  }
  uVar3 = 0;
LAB_001000c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8
asn1_collect_constprop_0(BUF_MEM *param_1,long *param_2,long param_3,byte param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  size_t __n;
  int iVar3;
  undefined4 extraout_var;
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  char local_52;
  char local_51;
  char *local_50;
  size_t local_48;
  long local_40;
  
  local_50 = (char *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
LAB_00100568:
    if ((param_4 & 1) != 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x448,"asn1_collect");
      ERR_set_error(0xd,0x89,0);
      uVar4 = 0;
      goto LAB_0010050c;
    }
  }
  else {
    if (param_3 == 1) goto LAB_001003f0;
    while ((*local_50 != '\0' || (local_50[1] != '\0'))) {
LAB_001003f0:
      do {
        pcVar1 = local_50;
        iVar3 = asn1_check_tlen(&local_48,0,0,&local_51,&local_52,&local_50,param_3,
                                0xffffffffffffffff,0,0,0);
        __n = local_48;
        if (iVar3 == 0) {
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x437,"asn1_collect");
          ERR_set_error(0xd,0x8010a,0);
          uVar4 = 0;
          goto LAB_0010050c;
        }
        if (local_52 == '\0') {
          if (local_48 != 0) {
            lVar5 = (long)(int)param_1->length;
            iVar3 = BUF_MEM_grow_clean(param_1,lVar5 + local_48);
            pcVar2 = local_50;
            if (CONCAT44(extraout_var,iVar3) == 0) {
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x455,"collect_data");
              ERR_set_error(0xd,0x80007,0);
              goto LAB_00100560;
            }
            memcpy(param_1->data + lVar5,local_50,__n);
            local_50 = pcVar2 + __n;
          }
        }
        else {
          if (param_5 == 5) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x43e,"asn1_collect");
            ERR_set_error(0xd,0xc5,0);
            uVar4 = 0;
            goto LAB_0010050c;
          }
          iVar3 = asn1_collect_constprop_0(param_1,&local_50,local_48,(int)local_51,param_5 + 1);
          if (iVar3 == 0) {
LAB_00100560:
            uVar4 = 0;
            goto LAB_0010050c;
          }
        }
        param_3 = param_3 - ((long)local_50 - (long)pcVar1);
        if (param_3 < 1) goto LAB_00100568;
      } while (param_3 == 1);
    }
    local_50 = local_50 + 2;
    if ((param_4 & 1) == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x42e,"asn1_collect");
      ERR_set_error(0xd,0x9f,0);
      uVar4 = 0;
      goto LAB_0010050c;
    }
  }
  *param_2 = (long)local_50;
  uVar4 = 1;
LAB_0010050c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



int asn1_d2i_ex_primitive
              (_union_257 *param_1,long *param_2,undefined8 param_3,char *param_4,uint param_5,
              undefined4 param_6,char param_7,undefined1 *param_8)

{
  code *pcVar1;
  uint type;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 extraout_var;
  ASN1_STRING *a;
  ASN1_STRING *str;
  _union_257 *p_Var6;
  undefined8 uVar7;
  byte *pbVar8;
  ulong uVar9;
  _union_257 *p_Var10;
  byte *pbVar11;
  long in_FS_OFFSET;
  char local_90;
  char local_8f;
  char local_8e;
  char local_8d;
  uint local_8c;
  byte *local_88;
  byte *local_80;
  long local_78;
  byte *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8e = '\0';
  local_58 = (undefined1  [16])0x0;
  local_68._0_8_ = (byte *)0x0;
  local_68._8_8_ = (byte *)0x0;
  if (param_1 == (_union_257 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x2c8,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x7d,0);
    iVar3 = 0;
    goto LAB_00100810;
  }
  if (*param_4 == '\x05') {
    local_8c = param_5;
    if (param_5 != 0xfffffffc) goto LAB_0010091c;
    param_5 = 0xffffffff;
LAB_00100886:
    if (param_7 != '\0') {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x2da,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0x7e,0);
      iVar3 = 0;
      goto LAB_00100810;
    }
    local_80 = (byte *)*param_2;
    iVar3 = asn1_check_tlen(0,&local_8c,&local_70,0,0,&local_80,param_3,0xffffffffffffffff,0,0,
                            param_8);
    if (iVar3 != 0) {
      if ((char)local_70 != '\0') {
        local_8c = 0xfffffffd;
      }
      goto LAB_001006fb;
    }
    ERR_new();
    uVar7 = 0x2e1;
LAB_00100a51:
    ERR_set_debug("crypto/asn1/tasn_dec.c",uVar7,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x8010a,0);
    iVar3 = 0;
    goto LAB_00100810;
  }
  local_8c = (uint)*(undefined8 *)(param_4 + 8);
  if (local_8c == 0xfffffffc) {
    if (-1 < (int)param_5) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x2d6,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0x7f,0);
      iVar3 = 0;
      goto LAB_00100810;
    }
    goto LAB_00100886;
  }
LAB_001006fb:
  if (param_5 == 0xffffffff) {
LAB_0010091c:
    param_6 = 0;
    param_5 = local_8c;
  }
  local_80 = (byte *)*param_2;
  iVar3 = asn1_check_tlen(&local_88,0,0,&local_8f,&local_90,&local_80,param_3,param_5,param_6,
                          (int)param_7,param_8);
  type = local_8c;
  if (iVar3 == 0) {
    ERR_new();
    uVar7 = 0x2f0;
    goto LAB_00100a51;
  }
  if (iVar3 == -1) goto LAB_00100810;
  uVar9 = (ulong)local_8c;
  if (1 < local_8c - 0x10) {
    if (local_8c == 0xfffffffd) goto LAB_00100b00;
    if (local_90 == '\0') {
      pbVar8 = local_80;
      pbVar11 = local_88;
      local_80 = local_80 + (long)local_88;
      goto LAB_0010079d;
    }
    if ((local_8c < 0xb) && ((0x466UL >> (uVar9 & 0x3f) & 1) != 0)) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x313,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0xc3,0);
      iVar3 = 0;
      goto LAB_00100810;
    }
    local_8e = '\x01';
    iVar3 = asn1_collect_constprop_0((BUF_MEM *)local_68,&local_80,local_88,(int)local_8f,0);
    pbVar11 = (byte *)local_68._0_8_;
    if (iVar3 == 0) {
      iVar3 = 0;
      goto LAB_001007eb;
    }
    iVar3 = BUF_MEM_grow_clean((BUF_MEM *)local_68,(size_t)(local_68._0_8_ + 1));
    if (CONCAT44(extraout_var,iVar3) != 0) {
      *(byte *)(local_68._8_8_ + (long)pbVar11) = 0;
      pbVar8 = (byte *)local_68._8_8_;
      goto LAB_0010079d;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x325,"asn1_d2i_ex_primitive");
    uVar7 = 0x80007;
LAB_00100df8:
    ERR_set_error(0xd,uVar7,0);
    goto LAB_00100e04;
  }
  if (local_8c == 0xfffffffd) {
LAB_00100b00:
    if (param_8 != (undefined1 *)0x0) {
      *param_8 = 0;
    }
  }
  else if (local_90 == '\0') {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x301,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x9c,0);
    iVar3 = 0;
    goto LAB_00100810;
  }
  pbVar8 = (byte *)*param_2;
  if (local_8f != '\0') {
    local_8d = local_8f;
    iVar3 = 1;
    local_70 = local_80;
    pbVar11 = local_88;
    if (0 < (long)local_88) {
      do {
        pbVar2 = local_70;
        if (((pbVar11 == (byte *)0x1) || (*local_70 != 0)) || (local_70[1] != 0)) {
          iVar4 = asn1_check_tlen(&local_78,0,0,&local_8d,0,&local_70,pbVar11,0xffffffffffffffff,0,0
                                  ,0);
          if (iVar4 == 0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x3f0,"asn1_find_end");
            ERR_set_error(0xd,0x8010a,0);
            iVar3 = 0;
            goto LAB_001007eb;
          }
          if (local_8d == '\0') {
            local_70 = local_70 + local_78;
          }
          else {
            if (iVar3 == -1) {
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x3f5,"asn1_find_end");
              uVar7 = 0x8010a;
              goto LAB_00100df8;
            }
            iVar3 = iVar3 + 1;
          }
          lVar5 = -((long)local_70 - (long)pbVar2);
        }
        else {
          local_70 = local_70 + 2;
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) goto LAB_00100e1f;
          lVar5 = -2;
        }
        pbVar11 = pbVar11 + lVar5;
      } while (0 < (long)pbVar11);
      if (iVar3 == 0) {
LAB_00100e1f:
        local_80 = local_70;
        pbVar11 = local_70 + -(long)pbVar8;
        goto LAB_0010079d;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x3ff,"asn1_find_end");
    uVar7 = 0x89;
    goto LAB_00100df8;
  }
  pbVar11 = local_80 + ((long)local_88 - (long)pbVar8);
  local_80 = local_80 + (long)local_88;
LAB_0010079d:
  iVar3 = (int)pbVar11;
  local_70 = pbVar8;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar1 = *(code **)(*(long *)(param_4 + 0x20) + 0x28), pcVar1 != (code *)0x0)) {
    iVar3 = (*pcVar1)(param_1,pbVar8,(ulong)pbVar11 & 0xffffffff,uVar9,&local_8e,param_4);
    if (iVar3 != 0) goto LAB_001007dd;
    goto LAB_001007eb;
  }
  a = (ASN1_STRING *)0x0;
  p_Var6 = param_1;
  p_Var10 = (_union_257 *)0x0;
  if (*(long *)(param_4 + 8) == -4) {
    a = param_1->asn1_string;
    if (a != (ASN1_STRING *)0x0) {
LAB_00100b1d:
      if (type != a->length) {
        ASN1_TYPE_set((ASN1_TYPE *)a,type,(void *)0x0);
      }
      p_Var6 = (_union_257 *)&a->data;
      p_Var10 = param_1;
      goto LAB_00100a20;
    }
    a = (ASN1_STRING *)ASN1_TYPE_new();
    if (a != (ASN1_STRING *)0x0) {
      param_1->asn1_string = a;
      goto LAB_00100b1d;
    }
    ASN1_TYPE_free((ASN1_TYPE *)0x0);
    goto LAB_00100e04;
  }
LAB_00100a20:
  switch(uVar9) {
  default:
    if (type == 0x1e) {
      if (((ulong)pbVar11 & 1) == 0) {
LAB_00100eca:
        str = p_Var6->asn1_string;
        if (str == (ASN1_STRING *)0x0) {
          str = ASN1_STRING_type_new(type);
          if (str == (ASN1_STRING *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x3a8,__func___3);
            ERR_set_error(0xd,0x8000d,0);
            break;
          }
          p_Var6->asn1_string = str;
        }
        else {
          str->type = type;
        }
        if (local_8e == '\0') {
          iVar3 = ASN1_STRING_set(str,local_70,iVar3);
          if (iVar3 == 0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x3b6,__func___3);
            ERR_set_error(0xd,0x8000d,0);
            ASN1_STRING_free(str);
            p_Var6->ptr = (char *)0x0;
            break;
          }
        }
        else {
          ASN1_STRING_set0(str,local_70,iVar3);
          local_8e = '\0';
        }
        goto LAB_001007dd;
      }
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x395,__func___3);
      ERR_set_error(0xd,0xd6,0);
    }
    else if (type == 0x1c) {
      if (((ulong)pbVar11 & 3) == 0) goto LAB_00100eca;
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x399,__func___3);
      ERR_set_error(0xd,0xd7,0);
    }
    else if ((type == 0x18) && (iVar3 < 0xf)) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x39d,__func___3);
      ERR_set_error(0xd,0xe8,0);
    }
    else {
      if ((type != 0x17) || (0xc < iVar3)) goto LAB_00100eca;
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x3a1,__func___3);
      ERR_set_error(0xd,0xe9,0);
    }
    break;
  case 1:
    if (iVar3 != 1) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x36b,__func___3);
      ERR_set_error(0xd,0x6a,0);
      break;
    }
    *(uint *)p_Var6 = (uint)*local_70;
    goto LAB_001007dd;
  case 2:
  case 10:
    lVar5 = ossl_c2i_ASN1_INTEGER(p_Var6,&local_70,(long)iVar3);
    if (lVar5 != 0) {
      p_Var6->asn1_string->type = p_Var6->asn1_string->type & 0x100U | type;
      goto LAB_001007dd;
    }
    break;
  case 3:
    lVar5 = ossl_c2i_ASN1_BIT_STRING(p_Var6,&local_70,(long)iVar3);
    goto joined_r0x00100d6d;
  case 5:
    if (iVar3 == 0) {
      *p_Var6 = (_union_257)0x1;
      if (a != (ASN1_STRING *)0x0) {
        (((ASN1_TYPE *)a)->value).ptr = (char *)0x0;
      }
      goto LAB_001007dd;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x363,__func___3);
    ERR_set_error(0xd,0x90,0);
    break;
  case 6:
    lVar5 = ossl_c2i_ASN1_OBJECT(p_Var6,&local_70,(long)iVar3);
joined_r0x00100d6d:
    if (lVar5 == 0) break;
LAB_001007dd:
    iVar3 = 1;
    *param_2 = (long)local_80;
    goto LAB_001007eb;
  }
  ASN1_TYPE_free((ASN1_TYPE *)a);
  if (p_Var10 == (_union_257 *)0x0) {
LAB_00100e04:
    iVar3 = 0;
  }
  else {
    p_Var10->ptr = (char *)0x0;
    iVar3 = 0;
  }
LAB_001007eb:
  if (local_8e != '\0') {
    CRYPTO_free((void *)local_68._8_8_);
  }
LAB_00100810:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}



ulong ASN1_tag2bit(int tag)

{
  ulong uVar1;
  
  uVar1 = 0;
  if ((uint)tag < 0x1f) {
    uVar1 = *(ulong *)(tag2bit + (long)tag * 8);
  }
  return uVar1;
}



undefined8
asn1_item_embed_d2i(ASN1_VALUE **param_1,long *param_2,char *param_3,ASN1_ITEM *param_4,
                   ulong param_5,undefined8 param_6,char param_7,undefined8 param_8,int param_9,
                   undefined8 param_10,undefined8 param_11)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ASN1_TEMPLATE *pAVar7;
  ulong uVar8;
  uint uVar9;
  code *pcVar10;
  char *pcVar11;
  long lVar12;
  ASN1_TEMPLATE *pAVar13;
  long in_FS_OFFSET;
  char **local_88;
  int local_74;
  char local_69;
  char *local_60 [2];
  char local_4f;
  char local_4e;
  char local_4d;
  uint local_4c;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (char *)0x0;
  local_60[0] = param_3;
  if ((param_1 == (ASN1_VALUE **)0x0) || (param_4 == (ASN1_ITEM *)0x0)) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0xb6,"asn1_item_embed_d2i");
    ERR_set_error(0xd,0xc0102,0);
  }
  else if ((long)param_3 < 1) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0xba,"asn1_item_embed_d2i");
    ERR_set_error(0xd,0xe0,0);
  }
  else {
    pvVar1 = param_4->funcs;
    pcVar10 = (code *)0x0;
    if (pvVar1 != (void *)0x0) {
      pcVar10 = *(code **)((long)pvVar1 + 0x18);
    }
    param_9 = param_9 + 1;
    if (param_9 < 0x1f) {
      iVar3 = (int)param_5;
      switch(param_4->itype) {
      case '\0':
        if (param_4->templates == (ASN1_TEMPLATE *)0x0) {
          iVar3 = (int)param_7;
LAB_00101b8a:
          uVar6 = asn1_d2i_ex_primitive
                            (param_1,param_2,param_3,param_4,param_5,param_6,iVar3,param_8);
          goto LAB_001012e2;
        }
        if ((iVar3 == -1) && (param_7 == '\0')) {
          uVar6 = asn1_template_ex_d2i
                            (param_1,param_2,param_3,param_4->templates,0,param_8,param_9,param_10,
                             param_11);
          goto LAB_001012e2;
        }
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0xd2,"asn1_item_embed_d2i");
        ERR_set_error(0xd,0xaa,0);
        break;
      case '\x01':
      case '\x06':
        local_48 = (char *)*param_2;
        if (iVar3 == -1) {
          param_6 = 0;
          param_5 = 0x10;
        }
        iVar3 = asn1_check_tlen(local_60,0,0,&local_4e,&local_4d,&local_48,param_3,param_5,param_6,
                                (int)param_7,param_8);
        if (iVar3 == 0) {
          ERR_new();
          uVar6 = 0x15d;
LAB_00101b09:
          ERR_set_debug("crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x8010a,0);
        }
        else {
          if (iVar3 == -1) goto LAB_00101ec6;
          if ((pvVar1 == (void *)0x0) || ((*(byte *)((long)pvVar1 + 8) & 4) == 0)) {
            local_69 = local_4e;
          }
          else {
            local_69 = '\x01';
            local_60[0] = param_3 + -((long)local_48 - *param_2);
          }
          if (local_4d == '\0') {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x169,"asn1_item_embed_d2i");
            ERR_set_error(0xd,0x95,0);
            break;
          }
          if ((*param_1 == (ASN1_VALUE *)0x0) &&
             (iVar3 = ossl_asn1_item_ex_new_intern(param_1,param_4,param_10,param_11), iVar3 == 0))
          {
            ERR_new();
            uVar6 = 0x16f;
            goto LAB_00101b09;
          }
          local_88 = &local_48;
          if ((pcVar10 != (code *)0x0) && (iVar3 = (*pcVar10)(4,param_1,param_4,0), iVar3 == 0))
          goto LAB_00101a90;
          lVar12 = 0;
          pAVar13 = param_4->templates;
          if (param_4->tcount < 1) {
LAB_00101dba:
            local_74 = 0;
          }
          else {
            do {
              if (((pAVar13->flags & 0x300) != 0) &&
                 (lVar5 = ossl_asn1_do_adb(*param_1,pAVar13,0), lVar5 != 0)) {
                uVar6 = ossl_asn1_get_field_ptr(param_1,lVar5);
                ossl_asn1_template_free(uVar6,lVar5);
              }
              lVar12 = lVar12 + 1;
              pAVar13 = pAVar13 + 1;
            } while (lVar12 < param_4->tcount);
            pAVar13 = param_4->templates;
            if (param_4->tcount < 1) goto LAB_00101dba;
            local_74 = 0;
            lVar12 = 0;
            do {
              pAVar7 = (ASN1_TEMPLATE *)ossl_asn1_do_adb(*param_1,pAVar13,1);
              if (pAVar7 == (ASN1_TEMPLATE *)0x0) goto LAB_00101720;
              uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7);
              pcVar2 = local_48;
              pcVar11 = local_60[0];
              if (local_60[0] == (char *)0x0) {
                if (local_4e != '\0') goto LAB_00101de9;
                goto LAB_00101970;
              }
              if (((1 < (long)local_60[0]) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
                local_48 = local_48 + 2;
                if (local_4e != '\0') {
                  local_60[0] = local_60[0] + -2;
                  local_4e = '\0';
                  goto LAB_00101970;
                }
                ERR_new();
                ERR_set_debug("crypto/asn1/tasn_dec.c",0x191,"asn1_item_embed_d2i");
                ERR_set_error(0xd,0x9f,0);
                goto LAB_00101720;
              }
              uVar9 = 0;
              if (param_4->tcount + -1 != lVar12) {
                uVar9 = (uint)pAVar7->flags & 1;
              }
              iVar3 = asn1_template_ex_d2i
                                (uVar6,local_88,local_60[0],pAVar7,uVar9,param_8,param_9,param_10,
                                 param_11);
              if (iVar3 == 0) goto LAB_00101a16;
              if (iVar3 == -1) {
                ossl_asn1_template_free(uVar6,pAVar7);
              }
              else {
                local_60[0] = pcVar2 + ((long)pcVar11 - (long)local_48);
              }
              local_74 = local_74 + 1;
              pAVar13 = pAVar13 + 1;
              lVar12 = lVar12 + 1;
            } while (lVar12 < param_4->tcount);
          }
          if (local_4e == '\0') {
LAB_00101970:
            if ((local_69 == '\0') && (local_60[0] != (char *)0x0)) {
LAB_00101e86:
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x1bd,"asn1_item_embed_d2i");
              ERR_set_error(0xd,0x94,0);
              break;
            }
          }
          else {
            if (((long)local_60[0] < 2) || ((*local_48 != '\0' || (local_48[1] != '\0')))) {
LAB_00101de9:
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x1b8,"asn1_item_embed_d2i");
              ERR_set_error(0xd,0x89,0);
              break;
            }
            local_48 = local_48 + 2;
            if (local_69 == '\0') goto LAB_00101e86;
          }
          lVar12 = (long)local_74;
          if (lVar12 < param_4->tcount) {
LAB_001019c4:
            pAVar7 = (ASN1_TEMPLATE *)ossl_asn1_do_adb(*param_1,pAVar13,1);
            if (pAVar7 != (ASN1_TEMPLATE *)0x0) {
              if ((pAVar7->flags & 1) != 0) goto LAB_001019a0;
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x1d1,"asn1_item_embed_d2i");
              ERR_set_error(0xd,0x79,0);
LAB_00101a16:
              ERR_add_error_data(4,"Field=",pAVar7->field_name,", Type=",param_4->sname);
              goto switchD_001012ac_caseD_3;
            }
            break;
          }
LAB_00101a40:
          pcVar11 = local_48;
          iVar3 = ossl_asn1_enc_save(param_1,*param_2,(int)local_48 - (int)*param_2,param_4);
          if ((iVar3 != 0) &&
             ((pcVar10 == (code *)0x0 || (iVar3 = (*pcVar10)(5,param_1,param_4,0), iVar3 != 0))))
          goto LAB_00101b69;
LAB_00101a90:
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x1e1,"asn1_item_embed_d2i");
          ERR_set_error(0xd,100,0);
        }
        break;
      case '\x02':
        if (iVar3 == -1) {
          if ((pcVar10 == (code *)0x0) || (iVar3 = (*pcVar10)(4,param_1,param_4,0), iVar3 != 0)) {
            if (*param_1 == (ASN1_VALUE *)0x0) {
              iVar3 = ossl_asn1_item_ex_new_intern(param_1,param_4,param_10,param_11);
              if (iVar3 == 0) {
                ERR_new();
                uVar6 = 0x120;
                goto LAB_00101b09;
              }
              lVar12 = param_4->tcount;
            }
            else {
              iVar3 = ossl_asn1_get_choice_selector(param_1);
              lVar12 = param_4->tcount;
              if ((-1 < iVar3) && (iVar3 < lVar12)) {
                pAVar7 = param_4->templates;
                uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7 + iVar3);
                ossl_asn1_template_free(uVar6,pAVar7 + iVar3);
                ossl_asn1_set_choice_selector(param_1,0xffffffff,param_4);
                lVar12 = param_4->tcount;
              }
            }
            pAVar7 = param_4->templates;
            local_48 = (char *)*param_2;
            if (lVar12 < 1) {
              iVar3 = 0;
              lVar5 = 0;
            }
            else {
              lVar5 = 0;
              do {
                uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7);
                iVar4 = asn1_template_ex_d2i
                                  (uVar6,&local_48,param_3,pAVar7,1,param_8,param_9,param_10,
                                   param_11);
                iVar3 = (int)lVar5;
                if (iVar4 != -1) {
                  if (iVar4 < 1) {
                    ossl_asn1_template_free(uVar6,pAVar7);
                    ERR_new();
                    ERR_set_debug("crypto/asn1/tasn_dec.c",0x138,"asn1_item_embed_d2i");
                    ERR_set_error(0xd,0x8010a,0);
                    if (pAVar7 != (ASN1_TEMPLATE *)0x0) goto LAB_00101a16;
                    goto LAB_00101720;
                  }
                  lVar12 = param_4->tcount;
                  goto LAB_00101655;
                }
                lVar12 = param_4->tcount;
                lVar5 = lVar5 + 1;
                pAVar7 = pAVar7 + 1;
              } while (lVar5 < lVar12);
              iVar3 = iVar3 + 1;
            }
LAB_00101655:
            if (lVar12 == lVar5) {
              if (param_7 != '\0') {
                ASN1_item_ex_free(param_1,param_4);
                goto LAB_00101ec6;
              }
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x144,"asn1_item_embed_d2i");
              ERR_set_error(0xd,0x8f,0);
              break;
            }
            ossl_asn1_set_choice_selector(param_1,iVar3,param_4);
            pcVar11 = local_48;
            if ((pcVar10 != (code *)0x0) &&
               (iVar3 = (*pcVar10)(5,param_1,param_4,0), pcVar11 = local_48, iVar3 == 0))
            goto LAB_00101a90;
LAB_00101b69:
            *param_2 = (long)pcVar11;
            uVar6 = 1;
            goto LAB_001012e2;
          }
          goto LAB_00101a90;
        }
        ERR_new();
        uVar6 = 0x110;
LAB_00101789:
        ERR_set_debug("crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
        ERR_set_error(0xd,0xe6,0);
        break;
      default:
        goto switchD_001012ac_caseD_3;
      case '\x04':
        if (*(code **)((long)pvVar1 + 0x40) == (code *)0x0) {
          uVar6 = (**(code **)((long)pvVar1 + 0x20))
                            (param_1,param_2,param_3,param_4,param_5,param_6,(int)param_7,param_8);
        }
        else {
          uVar6 = (**(code **)((long)pvVar1 + 0x40))
                            (param_1,param_2,param_3,param_4,param_5,param_6,(int)param_7,param_8,
                             param_10,param_11);
        }
        goto LAB_001012e2;
      case '\x05':
        if (iVar3 != -1) {
          ERR_new();
          uVar6 = 0xe2;
          goto LAB_00101789;
        }
        local_48 = (char *)*param_2;
        iVar3 = asn1_check_tlen(0,&local_4c,&local_4f,0,0,&local_48,param_3,0xffffffffffffffff,0,1,
                                param_8);
        if (iVar3 == 0) {
          ERR_new();
          uVar6 = 0xeb;
          goto LAB_00101b09;
        }
        if (local_4f == '\0') {
          uVar8 = ASN1_tag2bit(local_4c);
          if ((uVar8 & param_4->utype) != 0) {
            param_6 = 0;
            param_5 = (ulong)local_4c;
            iVar3 = 0;
            goto LAB_00101b8a;
          }
          if (param_7 != '\0') goto LAB_00101ec6;
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0xfd,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x8c,0);
        }
        else {
          if (param_7 != '\0') {
LAB_00101ec6:
            uVar6 = 0xffffffff;
            goto LAB_001012e2;
          }
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0xf4,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x8b,0);
        }
      }
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0xc4,"asn1_item_embed_d2i");
      ERR_set_error(0xd,0xc9,0);
    }
LAB_00101720:
    ERR_add_error_data(2,"Type=",param_4->sname);
  }
switchD_001012ac_caseD_3:
  uVar6 = 0;
LAB_001012e2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001019a0:
  pAVar13 = pAVar13 + 1;
  lVar12 = lVar12 + 1;
  uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7);
  ossl_asn1_template_free(uVar6,pAVar7);
  if (param_4->tcount <= lVar12) goto LAB_00101a40;
  goto LAB_001019c4;
}



/* WARNING: Type propagation algorithm not settling */

int asn1_template_noexp_d2i
              (long *******param_1,undefined8 *param_2,char *param_3,ulong *param_4,char param_5,
              undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long ******pppppplVar5;
  ASN1_ITEM *pAVar6;
  long *******ppppppplVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  long in_FS_OFFSET;
  char *local_70 [2];
  char local_59;
  long *******local_58;
  char *local_50;
  ASN1_VALUE *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70[0] = param_3;
  if (param_1 == (long *******)0x0) {
LAB_0010212b:
    iVar9 = 0;
    goto LAB_00102130;
  }
  uVar1 = *param_4;
  local_50 = (char *)*param_2;
  uVar10 = (uint)uVar1 & 0xc0;
  ppppppplVar7 = param_1;
  if ((uVar1 & 0x1000) != 0) {
    ppppppplVar7 = (long *******)&local_58;
    local_58 = param_1;
  }
  iVar9 = (int)param_5;
  if ((uVar1 & 6) != 0) {
    if ((uVar1 & 8) == 0) {
      uVar8 = 0x10;
      uVar10 = (uint)uVar1 & 2;
      if ((uVar1 & 2) != 0) {
        uVar10 = 0;
        uVar8 = 0x11;
      }
    }
    else {
      uVar8 = (undefined4)param_4[1];
    }
    iVar9 = asn1_check_tlen(local_70,0,0,&local_59,0,&local_50,param_3,uVar8,uVar10,iVar9,param_6);
    if (iVar9 == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x265,"asn1_template_noexp_d2i");
      ERR_set_error(0xd,0x8010a,0);
    }
    else if (iVar9 != -1) {
      pppppplVar5 = *ppppppplVar7;
      if (pppppplVar5 == (long ******)0x0) {
        pppppplVar5 = (long ******)OPENSSL_sk_new_null();
        *ppppppplVar7 = pppppplVar5;
      }
      else {
        while (iVar9 = OPENSSL_sk_num(pppppplVar5), 0 < iVar9) {
          local_48 = (ASN1_VALUE *)OPENSSL_sk_pop(pppppplVar5);
          pAVar6 = (ASN1_ITEM *)(*(code *)param_4[4])();
          ASN1_item_ex_free(&local_48,pAVar6);
        }
        pppppplVar5 = *ppppppplVar7;
      }
      if (pppppplVar5 == (long ******)0x0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x278,"asn1_template_noexp_d2i");
        ERR_set_error(0xd,0x8000f,0);
        iVar9 = 0;
      }
      else {
        pcVar11 = local_70[0];
        pcVar3 = local_50;
        do {
          local_50 = pcVar3;
          if ((long)pcVar11 < 1) {
            if (local_59 == '\0') goto LAB_0010225b;
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x29b,"asn1_template_noexp_d2i");
            ERR_set_error(0xd,0x89,0);
            iVar9 = 0;
            goto LAB_00102130;
          }
          if (((pcVar11 != (char *)0x1) && (*pcVar3 == '\0')) && (pcVar3[1] == '\0')) {
            local_50 = pcVar3 + 2;
            if (local_59 != '\0') goto LAB_0010225b;
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x283,"asn1_template_noexp_d2i");
            ERR_set_error(0xd,0x9f,0);
            goto LAB_0010212b;
          }
          local_48 = (ASN1_VALUE *)0x0;
          uVar4 = (*(code *)param_4[4])();
          iVar9 = asn1_item_embed_d2i(&local_48,&local_50,pcVar11,uVar4,0xffffffff,0,0,param_6,
                                      param_7,param_8,param_9);
          if (iVar9 < 1) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x28e,"asn1_template_noexp_d2i");
            uVar4 = 0x8010a;
            goto LAB_00102394;
          }
          pcVar11 = pcVar3 + ((long)pcVar11 - (long)local_50);
          local_70[0] = pcVar11;
          iVar9 = OPENSSL_sk_push(*ppppppplVar7,local_48);
          pcVar3 = local_50;
        } while (iVar9 != 0);
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x295,"asn1_template_noexp_d2i");
        uVar4 = 0x8000f;
LAB_00102394:
        ERR_set_error(0xd,uVar4,0);
        pAVar6 = (ASN1_ITEM *)(*(code *)param_4[4])();
        ASN1_item_free(local_48,pAVar6);
        iVar9 = 0;
      }
    }
    goto LAB_00102130;
  }
  if ((uVar1 & 8) == 0) {
    uVar4 = (*(code *)param_4[4])();
    iVar9 = asn1_item_embed_d2i(ppppppplVar7,&local_50,param_3,uVar4,0xffffffff,0,iVar9,param_6,
                                param_7,param_8,param_9);
    if (iVar9 == 0) {
      ERR_new();
      uVar4 = 0x2ad;
      goto LAB_001022c1;
    }
  }
  else {
    uVar2 = param_4[1];
    uVar4 = (*(code *)param_4[4])();
    iVar9 = asn1_item_embed_d2i(ppppppplVar7,&local_50,param_3,uVar4,uVar2 & 0xffffffff,uVar1 & 0xc0
                                ,iVar9,param_6,param_7,param_8,param_9);
    if (iVar9 == 0) {
      ERR_new();
      uVar4 = 0x2a4;
LAB_001022c1:
      ERR_set_debug("crypto/asn1/tasn_dec.c",uVar4,"asn1_template_noexp_d2i");
      ERR_set_error(0xd,0x8010a,0);
      iVar9 = 0;
      goto LAB_00102130;
    }
  }
  if (iVar9 == -1) {
    iVar9 = -1;
  }
  else {
LAB_0010225b:
    *param_2 = local_50;
    iVar9 = 1;
  }
LAB_00102130:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}



undefined8
asn1_template_ex_d2i
          (long param_1,undefined8 *param_2,undefined8 param_3,ulong *param_4,char param_5,
          undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  char local_52;
  char local_51;
  long local_50;
  char *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_001025b0:
    uVar3 = 0;
  }
  else {
    local_48 = (char *)*param_2;
    if ((*param_4 & 0x10) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = asn1_template_noexp_d2i();
        return uVar3;
      }
      goto LAB_00102707;
    }
    uVar3 = asn1_check_tlen(&local_50,0,0,&local_52,&local_51,&local_48,param_3,param_4[1],
                            (uint)*param_4 & 0xc0,(int)param_5,param_6);
    pcVar4 = local_48;
    lVar1 = local_50;
    if ((int)uVar3 == 0) {
      ERR_new();
      uVar3 = 0x20d;
LAB_00102591:
      ERR_set_debug("crypto/asn1/tasn_dec.c",uVar3,"asn1_template_ex_d2i");
      ERR_set_error(0xd,0x8010a,0);
      goto LAB_001025b0;
    }
    if ((int)uVar3 != -1) {
      if (local_51 == '\0') {
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x212,"asn1_template_ex_d2i");
        ERR_set_error(0xd,0x78,0);
        uVar3 = 0;
      }
      else {
        iVar2 = asn1_template_noexp_d2i
                          (param_1,&local_48,local_50,param_4,0,param_6,param_7,param_8,param_9);
        if (iVar2 == 0) {
          ERR_new();
          uVar3 = 0x219;
          goto LAB_00102591;
        }
        local_50 = lVar1 - ((long)local_48 - (long)pcVar4);
        if (local_52 == '\0') {
          pcVar4 = local_48;
          if (local_50 == 0) goto LAB_001026a5;
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x229,"asn1_template_ex_d2i");
          ERR_set_error(0xd,0x77,0);
          uVar3 = 0;
        }
        else if (((local_50 < 2) || (*local_48 != '\0')) || (local_48[1] != '\0')) {
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x221,"asn1_template_ex_d2i");
          ERR_set_error(0xd,0x89,0);
          uVar3 = 0;
        }
        else {
          pcVar4 = local_48 + 2;
LAB_001026a5:
          *param_2 = pcVar4;
          uVar3 = 1;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_00102707:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int ASN1_item_ex_d2i(ASN1_VALUE **pval,uchar **in,long len,ASN1_ITEM *it,int tag,int aclass,char opt
                    ,ASN1_TLC *ctx)

{
  int iVar1;
  
  if ((pval != (ASN1_VALUE **)0x0) && (it != (ASN1_ITEM *)0x0)) {
    iVar1 = asn1_item_embed_d2i();
    if (0 < iVar1) {
      return iVar1;
    }
    ASN1_item_ex_free(pval,it);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
  ERR_set_error(0xd,0xc0102,0);
  return 0;
}



ASN1_VALUE *
ASN1_item_d2i_ex(ASN1_VALUE **param_1,undefined8 param_2,undefined8 param_3,ASN1_ITEM *param_4)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  long in_FS_OFFSET;
  ASN1_VALUE *local_50;
  undefined1 local_48;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_50 = (ASN1_VALUE *)0x0;
  if (param_1 == (ASN1_VALUE **)0x0) {
    param_1 = &local_50;
  }
  if (param_4 == (ASN1_ITEM *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x73,"asn1_item_ex_d2i_intern");
    ERR_set_error(0xd,0xc0102,0);
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    iVar1 = asn1_item_embed_d2i(param_1);
    if (iVar1 < 1) {
      ASN1_item_ex_free(param_1,param_4);
      pAVar2 = (ASN1_VALUE *)0x0;
    }
    else {
      pAVar2 = *param_1;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ASN1_VALUE * ASN1_item_d2i(ASN1_VALUE **val,uchar **in,long len,ASN1_ITEM *it)

{
  ASN1_VALUE *pAVar1;
  
  pAVar1 = (ASN1_VALUE *)ASN1_item_d2i_ex();
  return pAVar1;
}


