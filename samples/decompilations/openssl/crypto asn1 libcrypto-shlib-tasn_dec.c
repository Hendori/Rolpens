
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
          if ((local_58 != param_8) || (local_54 != param_9)) {
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
asn1_check_tlen_constprop_0(long *param_1,byte *param_2,byte *param_3,long *param_4,long param_5)

{
  uchar *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  int iStack_58;
  int local_54;
  long local_50;
  uchar *local_48;
  long local_40;
  
  puVar1 = (uchar *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = puVar1;
  if (param_5 < 1) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x482,"asn1_check_tlen");
    ERR_set_error(0xd,0xe0,0);
    uVar3 = 0;
  }
  else {
    uVar2 = ASN1_get_object(&local_48,&local_50,&iStack_58,&local_54,param_5);
    if ((uVar2 & 0x80) == 0) {
      if ((uVar2 & 1) != 0) {
        local_50 = param_5 - ((long)local_48 - (long)puVar1);
      }
      if (param_2 != (byte *)0x0) {
        *param_2 = (byte)uVar2 & 1;
      }
      if (param_3 != (byte *)0x0) {
        *param_3 = (byte)uVar2 & 0x20;
      }
      if (param_1 != (long *)0x0) {
        *param_1 = local_50;
      }
      *param_4 = (long)local_48;
      uVar3 = 1;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x4a0,"asn1_check_tlen");
      ERR_set_error(0xd,0x66,0);
      uVar3 = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
asn1_collect_constprop_4(BUF_MEM *param_1,long *param_2,long param_3,byte param_4,int param_5)

{
  uchar *puVar1;
  uchar *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  undefined4 extraout_var_00;
  size_t sVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_60;
  int local_5c;
  uchar *local_58;
  size_t local_50;
  uchar *local_48;
  long local_40;
  
  local_58 = (uchar *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < 1) {
LAB_0010073b:
    if ((param_4 & 1) != 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x448,"asn1_collect");
      ERR_set_error(0xd,0x89,0);
      goto LAB_001006b7;
    }
  }
  else {
    if (param_5 == 5) {
      do {
        puVar1 = local_58;
        if (((param_3 != 1) && (*local_58 == '\0')) && (local_58[1] == '\0')) goto LAB_001006e0;
        local_48 = local_58;
        uVar3 = ASN1_get_object(&local_48,(long *)&local_50,&local_60,&local_5c,param_3);
        puVar2 = local_48;
        if ((uVar3 & 0x80) != 0) goto LAB_00100658;
        sVar6 = local_50;
        if ((uVar3 & 1) != 0) {
          sVar6 = param_3 - ((long)local_48 - (long)puVar1);
        }
        local_58 = local_48;
        if ((uVar3 & 0x20) != 0) {
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x43e,"asn1_collect");
          ERR_set_error(0xd,0xc5,0);
          goto LAB_001006b7;
        }
        if (sVar6 != 0) {
          lVar7 = (long)(int)param_1->length;
          iVar4 = BUF_MEM_grow_clean(param_1,lVar7 + sVar6);
          if (CONCAT44(extraout_var_00,iVar4) == 0) goto LAB_00100700;
          memcpy(param_1->data + lVar7,puVar2,sVar6);
          local_58 = puVar2 + sVar6;
        }
        param_3 = param_3 - ((long)local_58 - (long)puVar1);
      } while (0 < param_3);
      goto LAB_0010073b;
    }
    if (param_3 == 1) goto LAB_0010054a;
    while ((*local_58 != '\0' || (local_58[1] != '\0'))) {
LAB_0010054a:
      do {
        puVar1 = local_58;
        local_48 = local_58;
        uVar3 = ASN1_get_object(&local_48,(long *)&local_50,&local_60,&local_5c,param_3);
        puVar2 = local_48;
        if ((uVar3 & 0x80) != 0) goto LAB_00100658;
        sVar6 = local_50;
        if ((uVar3 & 1) != 0) {
          sVar6 = param_3 - ((long)local_48 - (long)puVar1);
        }
        local_58 = local_48;
        if ((uVar3 & 0x20) == 0) {
          if (sVar6 != 0) {
            lVar7 = (long)(int)param_1->length;
            iVar4 = BUF_MEM_grow_clean(param_1,lVar7 + sVar6);
            if (CONCAT44(extraout_var,iVar4) == 0) goto LAB_00100700;
            memcpy(param_1->data + lVar7,puVar2,sVar6);
            local_58 = puVar2 + sVar6;
          }
        }
        else {
          iVar4 = asn1_collect_constprop_4(param_1,&local_58,sVar6,uVar3 & 1,param_5 + 1);
          if (iVar4 == 0) goto LAB_001006b7;
        }
        param_3 = param_3 - ((long)local_58 - (long)puVar1);
        if (param_3 < 1) goto LAB_0010073b;
      } while (param_3 == 1);
    }
LAB_001006e0:
    local_58 = local_58 + 2;
    if ((param_4 & 1) == 0) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x42e,"asn1_collect");
      ERR_set_error(0xd,0x9f,0);
      goto LAB_001006b7;
    }
  }
  *param_2 = (long)local_58;
  uVar5 = 1;
  goto LAB_001006b9;
LAB_00100658:
  ERR_new();
  ERR_set_debug("crypto/asn1/tasn_dec.c",0x4a0,"asn1_check_tlen");
  ERR_set_error(0xd,0x66,0);
  ERR_new();
  ERR_set_debug("crypto/asn1/tasn_dec.c",0x437,"asn1_collect");
  ERR_set_error(0xd,0x8010a,0);
  goto LAB_001006b7;
LAB_00100700:
  ERR_new();
  ERR_set_debug("crypto/asn1/tasn_dec.c",0x455,"collect_data");
  ERR_set_error(0xd,0x80007,0);
LAB_001006b7:
  uVar5 = 0;
LAB_001006b9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



int asn1_d2i_ex_primitive
              (_union_257 *param_1,long *param_2,long param_3,char *param_4,uint param_5,int param_6
              ,char param_7,char *param_8)

{
  code *pcVar1;
  uint type;
  byte *pbVar2;
  byte *__n;
  byte *pbVar3;
  byte *pbVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  ASN1_STRING *a;
  ASN1_STRING *str;
  char *pcVar11;
  size_t sVar12;
  _union_257 *p_Var13;
  undefined8 uVar14;
  long lVar15;
  byte *pbVar16;
  size_t __n_00;
  byte *pbVar17;
  _union_257 *p_Var18;
  size_t sVar19;
  byte *pbVar20;
  long in_FS_OFFSET;
  char local_bd;
  char local_bc;
  byte local_bb;
  char local_ba;
  byte local_b9;
  char local_b8;
  byte local_b7;
  char local_b6;
  char local_b5;
  uint local_b4;
  byte *local_b0;
  byte *local_a8;
  size_t local_a0;
  byte *local_98;
  size_t local_90;
  byte *local_88;
  int local_80;
  undefined4 uStack_7c;
  byte *local_78;
  byte *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_bd = '\0';
  local_68._0_8_ = (byte *)0x0;
  local_68._8_8_ = (byte *)0x0;
  local_58 = (undefined1  [16])0x0;
  if (param_1 == (_union_257 *)0x0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x2c8,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x7d,0);
    goto LAB_00100b58;
  }
  if (*param_4 == '\x05') {
    local_b4 = param_5;
    if (param_5 != 0xfffffffc) {
LAB_00100bfa:
      param_6 = 0;
      param_5 = local_b4;
      goto LAB_00100981;
    }
    param_5 = 0xffffffff;
LAB_00100b66:
    if (param_7 != '\0') {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x2da,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0x7e,0);
      goto LAB_00100b58;
    }
    local_b0 = (byte *)*param_2;
    iVar9 = asn1_check_tlen(0,&local_b4,&local_70,0,0,&local_b0,param_3,0xffffffffffffffff,0,0,
                            param_8);
    if (iVar9 != 0) {
      if ((char)local_70 != '\0') {
        local_b4 = 0xfffffffd;
      }
      goto LAB_00100977;
    }
    ERR_new();
    uVar14 = 0x2e1;
LAB_00100c59:
    ERR_set_debug("crypto/asn1/tasn_dec.c",uVar14,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x8010a,0);
LAB_00100b58:
    iVar9 = 0;
    goto LAB_00100a1f;
  }
  local_b4 = (uint)*(undefined8 *)(param_4 + 8);
  if (local_b4 == 0xfffffffc) {
    if ((int)param_5 < 0) goto LAB_00100b66;
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x2d6,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x7f,0);
    goto LAB_00100b58;
  }
LAB_00100977:
  if (param_5 == 0xffffffff) goto LAB_00100bfa;
LAB_00100981:
  pbVar17 = (byte *)*param_2;
  local_b0 = pbVar17;
  local_70 = pbVar17;
  if (param_3 < 1) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x482,"asn1_check_tlen");
    ERR_set_error(0xd,0xe0,0);
LAB_00100c3b:
    if (param_8 != (char *)0x0) {
LAB_00100c40:
      *param_8 = '\0';
    }
    ERR_new();
    uVar14 = 0x2f0;
    goto LAB_00100c59;
  }
  if (param_8 != (char *)0x0) {
    if (*param_8 != '\0') {
      local_78 = *(byte **)(param_8 + 8);
      uVar8 = *(uint *)(param_8 + 4);
      local_80 = *(int *)(param_8 + 0x14);
      local_88 = (byte *)CONCAT44(local_88._4_4_,*(undefined4 *)(param_8 + 0x10));
      local_70 = pbVar17 + *(int *)(param_8 + 0x18);
      goto LAB_001009f0;
    }
    uVar8 = ASN1_get_object(&local_70,(long *)&local_78,(int *)&local_88,&local_80,param_3);
    *param_8 = '\x01';
    *(uint *)(param_8 + 4) = uVar8;
    iVar9 = (int)local_70 - (int)pbVar17;
    *(byte **)(param_8 + 8) = local_78;
    *(int *)(param_8 + 0x18) = iVar9;
    *(ulong *)(param_8 + 0x10) = CONCAT44(local_80,(uint)local_88);
    if ((uVar8 & 0x81) != 0) goto LAB_001009f0;
    if ((long)(local_78 + iVar9) <= param_3) {
      pbVar20 = local_78;
      if (-1 < (int)param_5) {
        if ((param_5 == (uint)local_88) && (param_6 == local_80)) goto LAB_00100c9b;
        goto LAB_00100a10;
      }
      goto LAB_00100d14;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x499,"asn1_check_tlen");
    ERR_set_error(0xd,0x9b,0);
    goto LAB_00100c40;
  }
  uVar8 = ASN1_get_object(&local_70,(long *)&local_78,(int *)&local_88,&local_80,param_3);
LAB_001009f0:
  if ((uVar8 & 0x80) != 0) {
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x4a0,"asn1_check_tlen");
    ERR_set_error(0xd,0x66,0);
    goto LAB_00100c3b;
  }
  if (-1 < (int)param_5) {
    if ((param_5 != (uint)local_88) || (param_6 != local_80)) {
LAB_00100a10:
      iVar9 = -1;
      if (param_7 != '\0') goto LAB_00100a1f;
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x4aa,"asn1_check_tlen");
      ERR_set_error(0xd,0xa8,0);
      goto LAB_00100c3b;
    }
    if (param_8 != (char *)0x0) {
LAB_00100c9b:
      *param_8 = '\0';
    }
  }
  pbVar20 = (byte *)(param_3 - ((long)local_70 - (long)pbVar17));
  if ((uVar8 & 1) == 0) {
    pbVar20 = local_78;
  }
LAB_00100d14:
  type = local_b4;
  local_b0 = local_70;
  if (local_b4 - 0x10 < 2) {
    if (local_b4 == 0xfffffffd) goto LAB_001013b0;
    if ((uVar8 & 0x20) != 0) goto LAB_001011e2;
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x301,"asn1_d2i_ex_primitive");
    ERR_set_error(0xd,0x9c,0);
    goto LAB_00100b58;
  }
  if (local_b4 == 0xfffffffd) {
LAB_001013b0:
    if (param_8 != (char *)0x0) {
      *param_8 = '\0';
    }
LAB_001011e2:
    pbVar17 = (byte *)*param_2;
    if ((uVar8 & 1) == 0) {
      local_b0 = local_70 + (long)pbVar20;
      pbVar20 = pbVar20 + ((long)local_70 - (long)pbVar17);
      pbVar16 = local_b0;
      goto LAB_00101207;
    }
    local_80 = CONCAT31(local_80._1_3_,1);
    if (0 < (long)pbVar20) {
      iVar9 = 1;
      do {
        pbVar16 = local_70;
        if (((pbVar20 == (byte *)0x1) || (*local_70 != 0)) || (local_70[1] != 0)) {
          iVar10 = asn1_check_tlen_constprop_0(&local_78,&local_80,0,&local_70,pbVar20);
          if (iVar10 == 0) {
            ERR_new();
            pcVar11 = "asn1_find_end";
            uVar14 = 0x3f0;
LAB_00101b70:
            iVar9 = 0;
            ERR_set_debug("crypto/asn1/tasn_dec.c",uVar14,pcVar11);
            ERR_set_error(0xd,0x8010a,0);
            goto LAB_00101104;
          }
          if ((char)local_80 == '\0') {
            local_70 = local_78 + (long)local_70;
          }
          else {
            if (iVar9 == -1) {
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x3f5,"asn1_find_end");
              uVar14 = 0x8010a;
              goto LAB_001010f0;
            }
            iVar9 = iVar9 + 1;
          }
          lVar15 = -((long)local_70 - (long)pbVar16);
          goto LAB_00101452;
        }
        local_70 = local_70 + 2;
        iVar9 = iVar9 + -1;
        if (iVar9 == 0) goto LAB_00101800;
        lVar15 = -2;
LAB_00101452:
        pbVar20 = pbVar20 + lVar15;
      } while (0 < (long)pbVar20);
      if (iVar9 == 0) {
LAB_00101800:
        pbVar20 = local_70 + -(long)pbVar17;
        pbVar16 = local_70;
        local_b0 = local_70;
        goto LAB_00101207;
      }
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x3ff,"asn1_find_end");
    uVar14 = 0x89;
LAB_001010f0:
    ERR_set_error(0xd,uVar14,0);
    goto LAB_001010fc;
  }
  if ((uVar8 & 0x20) != 0) {
    if ((local_b4 < 0xb) && ((0x466UL >> ((ulong)local_b4 & 0x3f) & 1) != 0)) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x313,"asn1_d2i_ex_primitive");
      ERR_set_error(0xd,0xc3,0);
      goto LAB_00100b58;
    }
    local_bd = '\x01';
    local_a8 = local_70;
    if (0 < (long)pbVar20) {
      do {
        pbVar17 = local_a8;
        if (((pbVar20 != (byte *)0x1) && (*local_a8 == 0)) && (local_a8[1] == 0)) {
          local_a8 = local_a8 + 2;
          if ((uVar8 & 1) != 0) goto LAB_001018eb;
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x42e,"asn1_collect");
          uVar14 = 0x9f;
          goto LAB_001010f0;
        }
        iVar9 = asn1_check_tlen_constprop_0(&local_a0,&local_bb,&local_bc,&local_a8,pbVar20);
        sVar19 = local_a0;
        if (iVar9 == 0) {
          ERR_new();
          pcVar11 = "asn1_collect";
          uVar14 = 0x437;
          goto LAB_00101b70;
        }
        if (local_bc == '\0') {
          pbVar16 = local_a8;
          if (local_a0 != 0) {
            lVar15 = (long)(int)local_68._0_4_;
            iVar9 = BUF_MEM_grow_clean((BUF_MEM *)local_68,lVar15 + local_a0);
            pbVar16 = local_a8;
            if (CONCAT44(extraout_var_02,iVar9) == 0) {
LAB_001010cc:
              ERR_new();
              pcVar11 = "collect_data";
              uVar14 = 0x455;
              goto LAB_001010dd;
            }
            memcpy((byte *)(local_68._8_8_ + lVar15),local_a8,sVar19);
            pbVar16 = pbVar16 + sVar19;
          }
        }
        else {
          local_98 = local_a8;
          bVar5 = local_bb & 1;
          if (0 < (long)local_a0) {
            do {
              pbVar16 = local_98;
              if (((sVar19 != 1) && (*local_98 == 0)) && (local_98[1] == 0)) {
                local_98 = local_98 + 2;
                pbVar16 = local_98;
                if (bVar5 != 0) goto LAB_00101391;
LAB_001016b8:
                ERR_new();
                ERR_set_debug("crypto/asn1/tasn_dec.c",0x42e,"asn1_collect");
                ERR_set_error(0xd,0x9f,0);
                goto LAB_001010fc;
              }
              iVar9 = asn1_check_tlen_constprop_0(&local_90,&local_b9,&local_ba,&local_98,sVar19);
              sVar12 = local_90;
              if (iVar9 == 0) {
LAB_00101770:
                ERR_new();
                ERR_set_debug("crypto/asn1/tasn_dec.c",0x437,"asn1_collect");
                ERR_set_error(0xd,0x8010a,0);
                goto LAB_001010fc;
              }
              if (local_ba == '\0') {
                pbVar3 = local_98;
                if (local_90 != 0) {
                  lVar15 = (long)(int)local_68._0_4_;
                  iVar9 = BUF_MEM_grow_clean((BUF_MEM *)local_68,lVar15 + local_90);
                  pbVar3 = local_98;
                  if (CONCAT44(extraout_var_01,iVar9) == 0) goto LAB_001010cc;
                  memcpy((byte *)(local_68._8_8_ + lVar15),local_98,sVar12);
                  pbVar3 = pbVar3 + sVar12;
                }
              }
              else {
                local_88 = local_98;
                bVar6 = local_b9 & 1;
                if (0 < (long)local_90) {
                  do {
                    pbVar3 = local_88;
                    if (((sVar12 != 1) && (*local_88 == 0)) && (local_88[1] == 0)) {
                      local_88 = local_88 + 2;
                      pbVar3 = local_88;
                      if (bVar6 == 0) goto LAB_001016b8;
                      goto LAB_00101171;
                    }
                    iVar9 = asn1_check_tlen_constprop_0
                                      (&local_80,&local_b7,&local_b8,&local_88,sVar12);
                    if (iVar9 == 0) goto LAB_00101770;
                    __n_00 = CONCAT44(uStack_7c,local_80);
                    pbVar4 = local_88;
                    if (local_b8 == '\0') {
                      if (__n_00 != 0) {
                        lVar15 = (long)(int)local_68._0_4_;
                        iVar9 = BUF_MEM_grow_clean((BUF_MEM *)local_68,lVar15 + __n_00);
                        pbVar4 = local_88;
                        if (CONCAT44(extraout_var_00,iVar9) == 0) goto LAB_001010cc;
                        memcpy((byte *)(local_68._8_8_ + lVar15),local_88,__n_00);
                        pbVar4 = pbVar4 + __n_00;
                      }
                    }
                    else {
                      bVar7 = local_b7 & 1;
                      while (local_78 = pbVar4, 0 < (long)__n_00) {
                        if (((__n_00 != 1) && (*pbVar4 == 0)) && (pbVar4[1] == 0)) {
                          local_78 = pbVar4 + 2;
                          pbVar4 = local_78;
                          if (bVar7 != 0) goto LAB_00101141;
                          goto LAB_001016b8;
                        }
                        iVar9 = asn1_check_tlen_constprop_0
                                          (&local_70,&local_b5,&local_b6,&local_78,__n_00);
                        __n = local_70;
                        if (iVar9 == 0) goto LAB_00101770;
                        if (local_b6 == '\0') {
                          if (local_70 != (byte *)0x0) {
                            lVar15 = (long)(int)local_68._0_4_;
                            iVar9 = BUF_MEM_grow_clean((BUF_MEM *)local_68,
                                                       (size_t)(local_70 + lVar15));
                            pbVar2 = local_78;
                            if (CONCAT44(extraout_var,iVar9) == 0) goto LAB_001010cc;
                            memcpy((byte *)(local_68._8_8_ + lVar15),local_78,(size_t)__n);
                            local_78 = pbVar2 + (long)__n;
                          }
                        }
                        else {
                          iVar9 = asn1_collect_constprop_4
                                            (local_68,&local_78,local_70,(int)local_b5,4);
                          if (iVar9 == 0) goto LAB_001010fc;
                        }
                        __n_00 = __n_00 - ((long)local_78 - (long)pbVar4);
                        pbVar4 = local_78;
                      }
                      if (bVar7 != 0) goto LAB_00101990;
                    }
LAB_00101141:
                    local_88 = pbVar4;
                    sVar12 = sVar12 - ((long)local_88 - (long)pbVar3);
                  } while (0 < (long)sVar12);
                }
                pbVar3 = local_88;
                if (bVar6 != 0) goto LAB_00101990;
              }
LAB_00101171:
              local_98 = pbVar3;
              sVar19 = sVar19 - ((long)local_98 - (long)pbVar16);
            } while (0 < (long)sVar19);
          }
          pbVar16 = local_98;
          if (bVar5 != 0) {
LAB_00101990:
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x448,"asn1_collect");
            ERR_set_error(0xd,0x89,0);
            goto LAB_001010fc;
          }
        }
LAB_00101391:
        local_a8 = pbVar16;
        pbVar20 = pbVar20 + -((long)local_a8 - (long)pbVar17);
      } while (0 < (long)pbVar20);
    }
    if ((uVar8 & 1) == 0) {
LAB_001018eb:
      pbVar20 = (byte *)local_68._0_8_;
      pbVar16 = local_a8;
      local_b0 = local_a8;
      iVar9 = BUF_MEM_grow_clean((BUF_MEM *)local_68,(size_t)(local_68._0_8_ + 1));
      if (CONCAT44(extraout_var_03,iVar9) != 0) {
        *(byte *)(local_68._8_8_ + (long)pbVar20) = 0;
        pbVar17 = (byte *)local_68._8_8_;
        goto LAB_00101207;
      }
      ERR_new();
      pcVar11 = "asn1_d2i_ex_primitive";
      uVar14 = 0x325;
LAB_001010dd:
      ERR_set_debug("crypto/asn1/tasn_dec.c",uVar14,pcVar11);
      uVar14 = 0x80007;
    }
    else {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x448,"asn1_collect");
      uVar14 = 0x89;
    }
    goto LAB_001010f0;
  }
  local_b0 = local_70 + (long)pbVar20;
  pbVar16 = local_b0;
  pbVar17 = local_70;
LAB_00101207:
  iVar9 = (int)pbVar20;
  local_70 = pbVar17;
  if ((*(long *)(param_4 + 0x20) != 0) &&
     (pcVar1 = *(code **)(*(long *)(param_4 + 0x20) + 0x28), pcVar1 != (code *)0x0)) {
    iVar9 = (*pcVar1)(param_1,pbVar17,(ulong)pbVar20 & 0xffffffff,type,&local_bd,param_4);
    if (iVar9 != 0) goto LAB_00101252;
    goto LAB_00101104;
  }
  a = (ASN1_STRING *)0x0;
  p_Var13 = param_1;
  p_Var18 = (_union_257 *)0x0;
  if (*(long *)(param_4 + 8) == -4) {
    a = param_1->asn1_string;
    if (a == (ASN1_STRING *)0x0) {
      a = (ASN1_STRING *)ASN1_TYPE_new();
      if (a == (ASN1_STRING *)0x0) {
        ASN1_TYPE_free((ASN1_TYPE *)0x0);
        goto LAB_001010fc;
      }
      param_1->asn1_string = a;
    }
    if (type != a->length) {
      ASN1_TYPE_set((ASN1_TYPE *)a,type,(void *)0x0);
    }
    p_Var13 = (_union_257 *)&a->data;
    p_Var18 = param_1;
  }
  switch(type) {
  default:
    if (type == 0x1e) {
      if (((ulong)pbVar20 & 1) == 0) {
LAB_00101a2a:
        str = p_Var13->asn1_string;
        if (str == (ASN1_STRING *)0x0) {
          str = ASN1_STRING_type_new(type);
          if (str == (ASN1_STRING *)0x0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x3a8,__func___3);
            ERR_set_error(0xd,0x8000d,0);
            break;
          }
          p_Var13->asn1_string = str;
        }
        else {
          str->type = type;
        }
        if (local_bd == '\0') {
          iVar9 = ASN1_STRING_set(str,local_70,iVar9);
          if (iVar9 == 0) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x3b6,__func___3);
            ERR_set_error(0xd,0x8000d,0);
            ASN1_STRING_free(str);
            p_Var13->ptr = (char *)0x0;
            break;
          }
        }
        else {
          ASN1_STRING_set0(str,local_70,iVar9);
          local_bd = '\0';
        }
        goto LAB_00101252;
      }
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x395,__func___3);
      ERR_set_error(0xd,0xd6,0);
    }
    else if (type == 0x1c) {
      if (((ulong)pbVar20 & 3) == 0) goto LAB_00101a2a;
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x399,__func___3);
      ERR_set_error(0xd,0xd7,0);
    }
    else if ((type == 0x18) && (iVar9 < 0xf)) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x39d,__func___3);
      ERR_set_error(0xd,0xe8,0);
    }
    else {
      if ((type != 0x17) || (0xc < iVar9)) goto LAB_00101a2a;
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x3a1,__func___3);
      ERR_set_error(0xd,0xe9,0);
    }
    break;
  case 1:
    if (iVar9 != 1) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x36b,__func___3);
      ERR_set_error(0xd,0x6a,0);
      break;
    }
    *(uint *)p_Var13 = (uint)*local_70;
    goto LAB_00101252;
  case 2:
  case 10:
    lVar15 = ossl_c2i_ASN1_INTEGER(p_Var13,&local_70,(long)iVar9);
    if (lVar15 != 0) {
      p_Var13->asn1_string->type = p_Var13->asn1_string->type & 0x100U | type;
      goto LAB_00101252;
    }
    break;
  case 3:
    lVar15 = ossl_c2i_ASN1_BIT_STRING(p_Var13,&local_70,(long)iVar9);
    goto joined_r0x00101620;
  case 5:
    if (iVar9 == 0) {
      *p_Var13 = (_union_257)0x1;
      if (a != (ASN1_STRING *)0x0) {
        (((ASN1_TYPE *)a)->value).ptr = (char *)0x0;
      }
      goto LAB_00101252;
    }
    ERR_new();
    ERR_set_debug("crypto/asn1/tasn_dec.c",0x363,__func___3);
    ERR_set_error(0xd,0x90,0);
    break;
  case 6:
    lVar15 = ossl_c2i_ASN1_OBJECT(p_Var13,&local_70,(long)iVar9);
joined_r0x00101620:
    if (lVar15 == 0) break;
LAB_00101252:
    iVar9 = 1;
    *param_2 = (long)pbVar16;
    goto LAB_00101104;
  }
  ASN1_TYPE_free((ASN1_TYPE *)a);
  if (p_Var18 != (_union_257 *)0x0) {
    p_Var18->ptr = (char *)0x0;
  }
LAB_001010fc:
  iVar9 = 0;
LAB_00101104:
  if (local_bd != '\0') {
    CRYPTO_free((void *)local_68._8_8_);
  }
LAB_00100a1f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
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
  int local_70;
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
LAB_0010278a:
          uVar6 = asn1_d2i_ex_primitive
                            (param_1,param_2,param_3,param_4,param_5,param_6,iVar3,param_8);
          goto LAB_00101ef2;
        }
        if ((iVar3 == -1) && (param_7 == '\0')) {
          uVar6 = asn1_template_ex_d2i
                            (param_1,param_2,param_3,param_4->templates,0,param_8,param_9,param_10,
                             param_11);
          goto LAB_00101ef2;
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
LAB_00102709:
          ERR_set_debug("crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x8010a,0);
        }
        else {
          if (iVar3 == -1) goto LAB_00102ac6;
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
            goto LAB_00102709;
          }
          local_88 = &local_48;
          if ((pcVar10 != (code *)0x0) && (iVar3 = (*pcVar10)(4,param_1,param_4,0), iVar3 == 0))
          goto LAB_00102690;
          lVar5 = param_4->tcount;
          pAVar13 = param_4->templates;
          lVar12 = 0;
          if (lVar5 < 1) {
LAB_001029ba:
            local_70 = 0;
          }
          else {
            do {
              if ((pAVar13->flags & 0x300) != 0) {
                lVar5 = ossl_asn1_do_adb(*param_1,pAVar13,0);
                if (lVar5 != 0) {
                  uVar6 = ossl_asn1_get_field_ptr(param_1,lVar5);
                  ossl_asn1_template_free(uVar6,lVar5);
                }
                lVar5 = param_4->tcount;
              }
              lVar12 = lVar12 + 1;
              pAVar13 = pAVar13 + 1;
            } while (lVar12 < lVar5);
            pAVar13 = param_4->templates;
            if (lVar5 < 1) goto LAB_001029ba;
            local_70 = 0;
            lVar5 = 0;
            do {
              pAVar7 = (ASN1_TEMPLATE *)ossl_asn1_do_adb(*param_1,pAVar13,1);
              if (pAVar7 == (ASN1_TEMPLATE *)0x0) goto LAB_00102330;
              uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7);
              pcVar2 = local_48;
              pcVar11 = local_60[0];
              if (local_60[0] == (char *)0x0) {
                if (local_4e != '\0') goto LAB_001029e9;
                goto LAB_00102571;
              }
              if (((1 < (long)local_60[0]) && (*local_48 == '\0')) && (local_48[1] == '\0')) {
                local_48 = local_48 + 2;
                if (local_4e != '\0') {
                  local_60[0] = local_60[0] + -2;
                  local_4e = '\0';
                  goto LAB_00102571;
                }
                ERR_new();
                ERR_set_debug("crypto/asn1/tasn_dec.c",0x191,"asn1_item_embed_d2i");
                ERR_set_error(0xd,0x9f,0);
                goto LAB_00102330;
              }
              uVar9 = 0;
              if (param_4->tcount + -1 != lVar5) {
                uVar9 = (uint)pAVar7->flags & 1;
              }
              iVar3 = asn1_template_ex_d2i
                                (uVar6,local_88,local_60[0],pAVar7,uVar9,param_8,param_9,param_10,
                                 param_11);
              if (iVar3 == 0) goto LAB_00102616;
              if (iVar3 == -1) {
                ossl_asn1_template_free(uVar6,pAVar7);
              }
              else {
                local_60[0] = pcVar2 + ((long)pcVar11 - (long)local_48);
              }
              local_70 = local_70 + 1;
              pAVar13 = pAVar13 + 1;
              lVar5 = lVar5 + 1;
            } while (lVar5 < param_4->tcount);
          }
          if (local_4e == '\0') {
LAB_00102571:
            if ((local_69 == '\0') && (local_60[0] != (char *)0x0)) {
LAB_00102a86:
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x1bd,"asn1_item_embed_d2i");
              ERR_set_error(0xd,0x94,0);
              break;
            }
          }
          else {
            if (((long)local_60[0] < 2) || ((*local_48 != '\0' || (local_48[1] != '\0')))) {
LAB_001029e9:
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x1b8,"asn1_item_embed_d2i");
              ERR_set_error(0xd,0x89,0);
              break;
            }
            local_48 = local_48 + 2;
            if (local_69 == '\0') goto LAB_00102a86;
          }
          lVar5 = (long)local_70;
          if (lVar5 < param_4->tcount) {
LAB_001025c4:
            pAVar7 = (ASN1_TEMPLATE *)ossl_asn1_do_adb(*param_1,pAVar13,1);
            if (pAVar7 != (ASN1_TEMPLATE *)0x0) {
              if ((pAVar7->flags & 1) != 0) goto LAB_001025a0;
              ERR_new();
              ERR_set_debug("crypto/asn1/tasn_dec.c",0x1d1,"asn1_item_embed_d2i");
              ERR_set_error(0xd,0x79,0);
LAB_00102616:
              ERR_add_error_data(4,"Field=",pAVar7->field_name,", Type=",param_4->sname);
              goto switchD_00101eba_caseD_3;
            }
            break;
          }
LAB_00102640:
          pcVar11 = local_48;
          iVar3 = ossl_asn1_enc_save(param_1,*param_2,(int)local_48 - (int)*param_2,param_4);
          if ((iVar3 != 0) &&
             ((pcVar10 == (code *)0x0 || (iVar3 = (*pcVar10)(5,param_1,param_4,0), iVar3 != 0))))
          goto LAB_00102769;
LAB_00102690:
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
                goto LAB_00102709;
              }
              lVar5 = param_4->tcount;
            }
            else {
              iVar3 = ossl_asn1_get_choice_selector(param_1);
              lVar5 = param_4->tcount;
              if ((-1 < iVar3) && (iVar3 < lVar5)) {
                pAVar7 = param_4->templates;
                uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7 + iVar3);
                ossl_asn1_template_free(uVar6,pAVar7 + iVar3);
                ossl_asn1_set_choice_selector(param_1,0xffffffff,param_4);
                lVar5 = param_4->tcount;
              }
            }
            pAVar7 = param_4->templates;
            local_48 = (char *)*param_2;
            if (lVar5 < 1) {
              iVar3 = 0;
              lVar12 = 0;
            }
            else {
              lVar12 = 0;
              do {
                uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7);
                iVar4 = asn1_template_ex_d2i
                                  (uVar6,&local_48,param_3,pAVar7,1,param_8,param_9,param_10,
                                   param_11);
                iVar3 = (int)lVar12;
                if (iVar4 != -1) {
                  if (iVar4 < 1) {
                    ossl_asn1_template_free(uVar6,pAVar7);
                    ERR_new();
                    ERR_set_debug("crypto/asn1/tasn_dec.c",0x138,"asn1_item_embed_d2i");
                    ERR_set_error(0xd,0x8010a,0);
                    if (pAVar7 != (ASN1_TEMPLATE *)0x0) goto LAB_00102616;
                    goto LAB_00102330;
                  }
                  lVar5 = param_4->tcount;
                  goto LAB_00102265;
                }
                lVar5 = param_4->tcount;
                lVar12 = lVar12 + 1;
                pAVar7 = pAVar7 + 1;
              } while (lVar12 < lVar5);
              iVar3 = iVar3 + 1;
            }
LAB_00102265:
            if (lVar12 == lVar5) {
              if (param_7 != '\0') {
                ASN1_item_ex_free(param_1,param_4);
                goto LAB_00102ac6;
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
            goto LAB_00102690;
LAB_00102769:
            *param_2 = (long)pcVar11;
            uVar6 = 1;
            goto LAB_00101ef2;
          }
          goto LAB_00102690;
        }
        ERR_new();
        uVar6 = 0x110;
LAB_00102399:
        ERR_set_debug("crypto/asn1/tasn_dec.c",uVar6,"asn1_item_embed_d2i");
        ERR_set_error(0xd,0xe6,0);
        break;
      default:
        goto switchD_00101eba_caseD_3;
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
        goto LAB_00101ef2;
      case '\x05':
        if (iVar3 != -1) {
          ERR_new();
          uVar6 = 0xe2;
          goto LAB_00102399;
        }
        local_48 = (char *)*param_2;
        iVar3 = asn1_check_tlen(0,&local_4c,&local_4f,0,0,&local_48,param_3,0xffffffffffffffff,0,1,
                                param_8);
        if (iVar3 == 0) {
          ERR_new();
          uVar6 = 0xeb;
          goto LAB_00102709;
        }
        if (local_4f == '\0') {
          uVar8 = ASN1_tag2bit(local_4c);
          if ((uVar8 & param_4->utype) != 0) {
            param_6 = 0;
            param_5 = (ulong)local_4c;
            iVar3 = 0;
            goto LAB_0010278a;
          }
          if (param_7 != '\0') goto LAB_00102ac6;
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0xfd,"asn1_item_embed_d2i");
          ERR_set_error(0xd,0x8c,0);
        }
        else {
          if (param_7 != '\0') {
LAB_00102ac6:
            uVar6 = 0xffffffff;
            goto LAB_00101ef2;
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
LAB_00102330:
    ERR_add_error_data(2,"Type=",param_4->sname);
  }
switchD_00101eba_caseD_3:
  uVar6 = 0;
LAB_00101ef2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001025a0:
  pAVar13 = pAVar13 + 1;
  lVar5 = lVar5 + 1;
  uVar6 = ossl_asn1_get_field_ptr(param_1,pAVar7);
  ossl_asn1_template_free(uVar6,pAVar7);
  if (param_4->tcount <= lVar5) goto LAB_00102640;
  goto LAB_001025c4;
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
LAB_00102d2b:
    iVar9 = 0;
    goto LAB_00102d30;
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
            if (local_59 == '\0') goto LAB_00102e5b;
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x29b,"asn1_template_noexp_d2i");
            ERR_set_error(0xd,0x89,0);
            iVar9 = 0;
            goto LAB_00102d30;
          }
          if (((pcVar11 != (char *)0x1) && (*pcVar3 == '\0')) && (pcVar3[1] == '\0')) {
            local_50 = pcVar3 + 2;
            if (local_59 != '\0') goto LAB_00102e5b;
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x283,"asn1_template_noexp_d2i");
            ERR_set_error(0xd,0x9f,0);
            goto LAB_00102d2b;
          }
          local_48 = (ASN1_VALUE *)0x0;
          uVar4 = (*(code *)param_4[4])();
          iVar9 = asn1_item_embed_d2i(&local_48,&local_50,pcVar11,uVar4,0xffffffff,0,0,param_6,
                                      param_7,param_8,param_9);
          if (iVar9 < 1) {
            ERR_new();
            ERR_set_debug("crypto/asn1/tasn_dec.c",0x28e,"asn1_template_noexp_d2i");
            uVar4 = 0x8010a;
            goto LAB_00102f94;
          }
          pcVar11 = pcVar3 + ((long)pcVar11 - (long)local_50);
          local_70[0] = pcVar11;
          iVar9 = OPENSSL_sk_push(*ppppppplVar7,local_48);
          pcVar3 = local_50;
        } while (iVar9 != 0);
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x295,"asn1_template_noexp_d2i");
        uVar4 = 0x8000f;
LAB_00102f94:
        ERR_set_error(0xd,uVar4,0);
        pAVar6 = (ASN1_ITEM *)(*(code *)param_4[4])();
        ASN1_item_free(local_48,pAVar6);
        iVar9 = 0;
      }
    }
    goto LAB_00102d30;
  }
  if ((uVar1 & 8) == 0) {
    uVar4 = (*(code *)param_4[4])();
    iVar9 = asn1_item_embed_d2i(ppppppplVar7,&local_50,param_3,uVar4,0xffffffff,0,iVar9,param_6,
                                param_7,param_8,param_9);
    if (iVar9 == 0) {
      ERR_new();
      uVar4 = 0x2ad;
      goto LAB_00102ec1;
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
LAB_00102ec1:
      ERR_set_debug("crypto/asn1/tasn_dec.c",uVar4,"asn1_template_noexp_d2i");
      ERR_set_error(0xd,0x8010a,0);
      iVar9 = 0;
      goto LAB_00102d30;
    }
  }
  if (iVar9 == -1) {
    iVar9 = -1;
  }
  else {
LAB_00102e5b:
    *param_2 = local_50;
    iVar9 = 1;
  }
LAB_00102d30:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar9;
}



undefined8
asn1_template_ex_d2i
          (long param_1,undefined8 *param_2,long param_3,ulong *param_4,char param_5,char *param_6,
          undefined4 param_7,undefined8 param_8,undefined8 param_9)

{
  uchar *puVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uchar *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  int local_90;
  int local_60;
  uint local_5c;
  uchar *local_58;
  long local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_00103327:
    uVar5 = 0;
  }
  else {
    puVar1 = (uchar *)*param_2;
    uVar2 = *param_4;
    local_58 = puVar1;
    if ((uVar2 & 0x10) == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = asn1_template_noexp_d2i();
        return uVar5;
      }
      goto LAB_00103577;
    }
    local_48 = puVar1;
    if (param_3 < 1) {
      ERR_new();
      ERR_set_debug("crypto/asn1/tasn_dec.c",0x482,"asn1_check_tlen");
      ERR_set_error(0xd,0xe0,0);
LAB_001032f3:
      if (param_6 != (char *)0x0) {
LAB_001032f8:
        *param_6 = '\0';
      }
      ERR_new();
      uVar5 = 0x20d;
LAB_0010330f:
      ERR_set_debug("crypto/asn1/tasn_dec.c",uVar5,"asn1_template_ex_d2i");
      ERR_set_error(0xd,0x8010a,0);
      goto LAB_00103327;
    }
    local_90 = (int)param_4[1];
    if (param_6 == (char *)0x0) {
      uVar3 = ASN1_get_object(&local_48,&local_50,&local_60,(int *)&local_5c,param_3);
LAB_001030ec:
      if ((uVar3 & 0x80) != 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x4a0,"asn1_check_tlen");
        ERR_set_error(0xd,0x66,0);
        goto LAB_001032f3;
      }
      if (local_90 < 0) {
LAB_00103390:
        lVar7 = param_3 - ((long)local_48 - (long)puVar1);
        if ((uVar3 & 1) == 0) {
          lVar7 = local_50;
        }
        goto LAB_00103230;
      }
LAB_00103104:
      if ((local_90 == local_60) && (((uint)uVar2 & 0xc0) == local_5c)) {
        if (param_6 != (char *)0x0) {
          *param_6 = '\0';
        }
        goto LAB_00103390;
      }
      uVar5 = 0xffffffff;
      if (param_5 == '\0') {
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x4aa,"asn1_check_tlen");
        ERR_set_error(0xd,0xa8,0);
        goto LAB_001032f3;
      }
    }
    else {
      if (*param_6 != '\0') {
        local_50 = *(long *)(param_6 + 8);
        uVar3 = *(uint *)(param_6 + 4);
        local_5c = *(uint *)(param_6 + 0x14);
        local_60 = *(int *)(param_6 + 0x10);
        local_48 = puVar1 + *(int *)(param_6 + 0x18);
        goto LAB_001030ec;
      }
      uVar3 = ASN1_get_object(&local_48,&local_50,&local_60,(int *)&local_5c,param_3);
      *param_6 = '\x01';
      *(uint *)(param_6 + 4) = uVar3;
      iVar4 = (int)local_48 - (int)puVar1;
      *(long *)(param_6 + 8) = local_50;
      *(int *)(param_6 + 0x18) = iVar4;
      *(ulong *)(param_6 + 0x10) = CONCAT44(local_5c,local_60);
      if ((uVar3 & 0x81) != 0) goto LAB_001030ec;
      if (param_3 < iVar4 + local_50) {
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x499,"asn1_check_tlen");
        ERR_set_error(0xd,0x9b,0);
        goto LAB_001032f8;
      }
      lVar7 = local_50;
      if (-1 < local_90) goto LAB_00103104;
LAB_00103230:
      puVar1 = local_48;
      local_58 = local_48;
      if ((uVar3 & 0x20) == 0) {
        ERR_new();
        ERR_set_debug("crypto/asn1/tasn_dec.c",0x212,"asn1_template_ex_d2i");
        ERR_set_error(0xd,0x78,0);
        uVar5 = 0;
      }
      else {
        iVar4 = asn1_template_noexp_d2i
                          (param_1,&local_58,lVar7,param_4,0,param_6,param_7,param_8,param_9);
        if (iVar4 == 0) {
          ERR_new();
          uVar5 = 0x219;
          goto LAB_0010330f;
        }
        if ((uVar3 & 1) == 0) {
          puVar6 = local_58;
          if (lVar7 == (long)local_58 - (long)puVar1) goto LAB_00103409;
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x229,"asn1_template_ex_d2i");
          ERR_set_error(0xd,0x77,0);
          uVar5 = 0;
        }
        else if (((lVar7 - ((long)local_58 - (long)puVar1) < 2) || (*local_58 != '\0')) ||
                (local_58[1] != '\0')) {
          ERR_new();
          ERR_set_debug("crypto/asn1/tasn_dec.c",0x221,"asn1_template_ex_d2i");
          ERR_set_error(0xd,0x89,0);
          uVar5 = 0;
        }
        else {
          puVar6 = local_58 + 2;
LAB_00103409:
          *param_2 = puVar6;
          uVar5 = 1;
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_00103577:
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


