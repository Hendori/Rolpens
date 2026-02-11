
void hex_convert_memory_constprop_0(long param_1,long param_2,char *param_3)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    lVar2 = 0;
    pcVar3 = param_3;
    do {
      while( true ) {
        bVar1 = *(byte *)(param_1 + lVar2);
        pcVar3[1] = "0123456789abcdef"[bVar1 & 0xf];
        *pcVar3 = "0123456789abcdef"[bVar1 >> 4];
        param_3 = pcVar3 + 2;
        if (((~(uint)lVar2 & 7) != 0) || (param_2 + -1 == lVar2)) break;
        lVar2 = lVar2 + 1;
        pcVar3[2] = ' ';
        param_3 = pcVar3 + 3;
        pcVar3 = param_3;
        if (param_2 == lVar2) goto LAB_00100070;
      }
      lVar2 = lVar2 + 1;
      pcVar3 = param_3;
    } while (param_2 != lVar2);
  }
LAB_00100070:
  *param_3 = '\0';
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_fail_string_common
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,char *param_8,ulong param_9,
               char *param_10,ulong param_11)

{
  ushort *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ushort **ppuVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  undefined1 uVar10;
  ulong uVar11;
  ulong uVar12;
  long in_FS_OFFSET;
  byte local_158 [96];
  byte local_f8 [96];
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = BIO_ctrl(_bio_err,0x51,0,(void *)0x0);
  test_fail_message_prefix(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (param_8 == (char *)0x0) {
    if (param_10 == (char *)0x0) {
      test_printf_stderr("%4s %c NULL\n",&_LC1,0x20);
      goto LAB_00100310;
    }
    if (param_11 == 0) {
      test_printf_stderr("--- %s\n",param_5,0x1000e8);
      test_printf_stderr("+++ %s\n",param_6);
      test_printf_stderr("%4s %c NULL\n",&_LC1,0x2d);
      test_printf_stderr("%4u:%c \'\'\n",0,0x2b);
      goto LAB_00100310;
    }
    param_9 = 0;
  }
  else if (param_10 == (char *)0x0) {
    if (param_9 == 0) {
      test_printf_stderr("--- %s\n",param_5,0x1000e8);
      test_printf_stderr("+++ %s\n",param_6);
      test_printf_stderr("%4u:%c \'\'\n",0,0x2d);
      test_printf_stderr("%4s %c NULL\n",&_LC1,0x2b);
      goto LAB_00100310;
    }
    param_11 = 0;
  }
  else if (param_9 == 0 && param_11 == 0) {
    test_printf_stderr("%4u:%c \'\'\n",0,0x20);
    goto LAB_00100310;
  }
  if ((param_11 != param_9) || (iVar3 = strncmp(param_8,param_10,param_11), iVar3 != 0)) {
    test_printf_stderr("--- %s\n",param_5);
    test_printf_stderr("+++ %s\n");
  }
  iVar3 = 0;
  uVar11 = (0x44 - lVar4) - (0x44 - lVar4) % 0x10;
  do {
    if (param_9 == 0) {
LAB_001001af:
      uVar8 = 0;
      uVar12 = 0;
      if (param_11 != 0) {
        uVar8 = uVar11;
        if (param_11 < uVar11) {
          uVar8 = param_11;
        }
        uVar12 = 0;
        local_f8[uVar8] = 0;
        if (uVar8 != 0) {
LAB_001001f0:
          ppuVar5 = __ctype_b_loc();
          puVar1 = *ppuVar5;
          uVar6 = 0;
          do {
            bVar9 = param_10[uVar6];
            if ((*(byte *)((long)puVar1 + (ulong)bVar9 * 2 + 1) & 0x40) == 0) {
              bVar9 = 0x2e;
            }
            local_f8[uVar6] = bVar9;
            uVar6 = uVar6 + 1;
          } while (uVar6 != uVar8);
          param_11 = param_11 - uVar8;
          if (uVar12 == 0) {
            bVar2 = false;
            if (iVar3 == 0) goto LAB_001003a0;
            goto LAB_00100558;
          }
          uVar6 = uVar12;
          if (uVar8 <= uVar12) {
            uVar6 = uVar8;
          }
          bVar2 = false;
          uVar7 = 0;
          do {
            uVar10 = 0x20;
            if (param_10[uVar7] != param_8[uVar7]) {
              uVar10 = 0x5e;
              bVar2 = true;
            }
            local_98[uVar7] = uVar10;
            uVar7 = uVar7 + 1;
          } while (uVar6 != uVar7);
          local_98[uVar6] = 0;
          if ((uVar8 != uVar12) || (bVar2)) goto LAB_001002a8;
        }
      }
      test_printf_stderr("%4u:  \'%s\'\n",iVar3,local_158);
LAB_001002e3:
      if (param_8 != (char *)0x0) {
        param_8 = param_8 + uVar12;
      }
      if (param_10 != (char *)0x0) {
LAB_001002f2:
        param_10 = param_10 + uVar8;
      }
    }
    else {
      uVar12 = uVar11;
      if (param_9 < uVar11) {
        uVar12 = param_9;
      }
      local_158[uVar12] = 0;
      if (uVar12 == 0) goto LAB_001001af;
      ppuVar5 = __ctype_b_loc();
      puVar1 = *ppuVar5;
      uVar8 = 0;
      do {
        bVar9 = param_8[uVar8];
        if ((*(byte *)((long)puVar1 + (ulong)bVar9 * 2 + 1) & 0x40) == 0) {
          bVar9 = 0x2e;
        }
        local_158[uVar8] = bVar9;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar12);
      param_9 = param_9 - uVar12;
      if (param_11 != 0) {
        uVar8 = uVar11;
        if (param_11 < uVar11) {
          uVar8 = param_11;
        }
        uVar6 = 0;
        bVar2 = false;
        local_f8[uVar8] = 0;
        if (uVar8 == 0) goto LAB_001002a8;
        goto LAB_001001f0;
      }
      uVar8 = 0;
      uVar6 = 0;
      bVar2 = false;
LAB_001002a8:
      bVar2 = (bool)(bVar2 & uVar6 != 0);
      if (iVar3 != 0) {
        test_printf_stderr("%4u:- \'%s\'\n",iVar3,local_158);
LAB_001002d1:
        if (uVar8 != 0) {
LAB_00100558:
          test_printf_stderr("%4u:+ \'%s\'\n",iVar3,local_f8);
        }
        if (!bVar2) goto LAB_001002e3;
LAB_001004bf:
        test_printf_stderr("%4s    %s\n",&_LC1,local_98);
        goto LAB_001002e3;
      }
LAB_001003a0:
      if (param_8 == (char *)0x0) {
        test_printf_stderr("%4s %c NULL\n",&_LC1,0x2d);
LAB_001003c8:
        if (param_10 == (char *)0x0) goto LAB_00100510;
LAB_001003d1:
        if (*param_10 != '\0') goto LAB_001002d1;
        test_printf_stderr("%4u:%c \'\'\n",0,0x2b);
        if (bVar2) goto LAB_001004bf;
        if (param_8 != (char *)0x0) {
          param_8 = param_8 + uVar12;
        }
        goto LAB_001002f2;
      }
      if (*param_8 == '\0') {
        test_printf_stderr("%4u:%c \'\'\n",0,0x2d);
        goto LAB_001003c8;
      }
      if (uVar12 == 0) goto LAB_001003c8;
      test_printf_stderr("%4u:- \'%s\'\n",0,local_158);
      if (param_10 != (char *)0x0) goto LAB_001003d1;
LAB_00100510:
      test_printf_stderr("%4s %c NULL\n",&_LC1,0x2b);
      if (bVar2) goto LAB_001004bf;
      if (param_8 != (char *)0x0) {
        param_8 = param_8 + uVar12;
      }
    }
    iVar3 = iVar3 + (int)uVar11;
  } while (param_9 != 0 || param_11 != 0);
LAB_00100310:
  test_flush_stderr();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



int convert_bn_memory_constprop_0(long param_1,byte *param_2,int *param_3,long param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  char *__src;
  
  if ((param_4 != 0) && (iVar3 = BN_is_zero(param_4), iVar3 == 0)) {
    lVar6 = 0;
    pbVar7 = param_2;
    while( true ) {
      while( true ) {
        bVar2 = *(byte *)(param_1 + lVar6);
        pbVar7[1] = "0123456789abcdef"[bVar2 & 0xf];
        *pbVar7 = "0123456789abcdef"[bVar2 >> 4];
        if (((~(uint)lVar6 & 7) != 0) || (lVar6 == 0x1f)) break;
        pbVar7[2] = 0x20;
        lVar6 = lVar6 + 1;
        pbVar7 = pbVar7 + 3;
      }
      lVar6 = lVar6 + 1;
      if (lVar6 == 0x20) break;
      pbVar7 = pbVar7 + 2;
    }
    pbVar7[2] = 0;
    iVar3 = 0x40;
    if (*param_3 != 0) {
      pbVar7 = (byte *)0x0;
      bVar2 = *param_2;
      while ((bVar2 & 0xef) == 0x20) {
        if (bVar2 == 0x30) {
          *param_2 = 0x20;
          iVar3 = iVar3 + -1;
          pbVar7 = param_2;
        }
        pbVar1 = param_2 + 1;
        param_2 = param_2 + 1;
        bVar2 = *pbVar1;
      }
      if (bVar2 == 0) {
        if ((0xf < *(byte *)(param_1 + 0x20)) && (iVar5 = BN_is_negative(param_4), iVar5 != 0)) {
          *param_3 = 0;
          iVar3 = iVar3 + 1;
          *pbVar7 = 0x2d;
        }
      }
      else {
        *param_3 = 0;
        iVar5 = BN_is_negative(param_4);
        if (iVar5 != 0) {
          *pbVar7 = 0x2d;
          iVar3 = iVar3 + 1;
        }
      }
    }
    return iVar3;
  }
  uVar4 = 0;
  do {
    *param_2 = 0x20;
    if (((~uVar4 & 0xf) == 0) && (uVar4 != 0x3f)) {
      param_2[1] = 0x20;
      pbVar7 = param_2 + 2;
    }
    else {
      pbVar7 = param_2 + 1;
      if (uVar4 == 0x3f) {
        param_2[1] = 0;
        uVar8 = 0xfffffffffffffffc;
        __src = "NULL";
        if (param_4 != 0) {
          iVar3 = BN_is_negative(param_4);
          __src = "0";
          uVar8 = -(ulong)(iVar3 == 0) | 0xfffffffffffffffe;
          if (iVar3 != 0) {
            __src = "-0";
          }
        }
        strcpy((char *)(param_2 + 1 + uVar8),__src);
        return 0;
      }
    }
    param_2 = pbVar7;
    uVar4 = uVar4 + 1;
  } while( true );
}



void test_fail_bignum_common(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *ptr;
  undefined *puVar12;
  long lVar13;
  bool bVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 in_R8;
  char *pcVar19;
  undefined8 in_R9;
  ulong uVar20;
  undefined1 *puVar21;
  long in_FS_OFFSET;
  bool bVar22;
  bool bVar23;
  BIGNUM *in_stack_00000010;
  BIGNUM *in_stack_00000018;
  undefined1 *local_1140;
  undefined4 local_1110;
  undefined4 local_110c;
  char local_1108 [96];
  char local_10a8 [96];
  undefined1 local_1048 [96];
  undefined1 local_fe8 [4008];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1110 = 1;
  local_110c = 1;
  test_fail_message_prefix();
  if (in_stack_00000010 == (BIGNUM *)0x0) {
    if (in_stack_00000018 == (BIGNUM *)0x0) {
      test_printf_stderr(" %*s\n",0x49,"bit position");
      puVar12 = &_LC10;
      pcVar19 = "";
LAB_00100efa:
      test_printf_stderr("%c%*s%s\n",0x20,0x43,puVar12,pcVar19);
    }
    else {
      iVar5 = BN_num_bits(in_stack_00000018);
      iVar6 = BN_is_negative(in_stack_00000018);
      iVar15 = iVar5 + 0xe;
      if (-1 < iVar5 + 7) {
        iVar15 = iVar5 + 7;
      }
      uVar20 = 0;
      uVar10 = (ulong)(int)(((iVar15 >> 3) + 1) - (uint)(iVar6 == 0));
      if (uVar10 != 0) goto LAB_00100999;
      test_printf_stderr("--- %s\n",in_R8);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr(" %*s\n",0x49,"bit position");
      puVar12 = &_LC10;
      pcVar19 = "";
LAB_00100e66:
      test_printf_stderr("%c%*s%s\n",0x2d,0x43,puVar12,pcVar19);
      puVar12 = &_LC10;
      pcVar19 = "";
      if (in_stack_00000018 != (BIGNUM *)0x0) {
        iVar15 = BN_is_negative(in_stack_00000018);
        puVar12 = &_LC12;
        pcVar19 = ":    0";
        if (iVar15 != 0) {
          puVar12 = &_LC11;
        }
      }
      test_printf_stderr("%c%*s%s\n",0x2b,0x43,puVar12,pcVar19);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      test_flush_stderr();
      return;
    }
    goto LAB_001010e3;
  }
  iVar5 = BN_num_bits(in_stack_00000010);
  iVar6 = BN_is_negative(in_stack_00000010);
  iVar15 = iVar5 + 7;
  if (iVar5 + 7 < 0) {
    iVar15 = iVar5 + 0xe;
  }
  iVar15 = ((iVar15 >> 3) + 1) - (uint)(iVar6 == 0);
  uVar20 = (ulong)iVar15;
  if (in_stack_00000018 == (BIGNUM *)0x0) {
    if (uVar20 == 0) {
      test_printf_stderr("--- %s\n",in_R8);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr(" %*s\n",0x49,"bit position");
      iVar15 = BN_is_negative(in_stack_00000010);
      puVar12 = &_LC11;
      pcVar19 = ":    0";
      if (iVar15 == 0) {
        puVar12 = &_LC12;
      }
      goto LAB_00100e66;
    }
    bVar23 = true;
    bVar22 = false;
    uVar11 = uVar20 + 0x1f & 0xffffffffffffffe0;
LAB_00100a6b:
    test_printf_stderr("--- %s\n",in_R8);
    test_printf_stderr("+++ %s\n",in_R9);
    test_printf_stderr(" %*s\n",0x49,"bit position");
    if (uVar11 < 0x7d1) {
LAB_00100ac4:
      ptr = local_fe8;
    }
    else {
LAB_00100f92:
      ptr = (undefined1 *)CRYPTO_malloc((int)uVar11 * 2,"test/testutil/format_output.c",0x12e);
      if (ptr == (undefined1 *)0x0) {
        uVar11 = 2000;
        test_printf_stderr("WARNING: these BIGNUMs have been truncated\n");
        goto LAB_00100ac4;
      }
    }
    puVar21 = (undefined1 *)0x0;
    if (in_stack_00000010 != (BIGNUM *)0x0) goto LAB_00100a30;
  }
  else {
    iVar6 = BN_num_bits(in_stack_00000018);
    iVar7 = BN_is_negative(in_stack_00000018);
    iVar5 = iVar6 + 0xe;
    if (-1 < iVar6 + 7) {
      iVar5 = iVar6 + 7;
    }
    iVar5 = ((iVar5 >> 3) + 1) - (uint)(iVar7 == 0);
    uVar10 = (ulong)iVar5;
    if (iVar5 == 0 && iVar15 == 0) {
      test_printf_stderr(" %*s\n",0x49,"bit position");
      iVar15 = BN_is_negative(in_stack_00000010);
      puVar12 = &_LC11;
      pcVar19 = ":    0";
      if (iVar15 == 0) {
        puVar12 = &_LC12;
      }
      goto LAB_00100efa;
    }
LAB_00100999:
    bVar22 = in_stack_00000010 == (BIGNUM *)0x0;
    bVar23 = in_stack_00000018 == (BIGNUM *)0x0;
    uVar11 = uVar10;
    if (uVar10 < uVar20) {
      uVar11 = uVar20;
    }
    uVar11 = uVar11 + 0x1f & 0xffffffffffffffe0;
    bVar14 = uVar10 != uVar20 || (bVar22 || bVar23);
    if (bVar14) goto LAB_00100a6b;
    iVar15 = BN_cmp(in_stack_00000010,in_stack_00000018);
    bVar22 = bVar14;
    if (iVar15 == 0) {
      test_printf_stderr(" %*s\n",0x49,"bit position");
      if (uVar11 < 0x7d1) goto LAB_00100a1b;
      ptr = (undefined1 *)CRYPTO_malloc((int)uVar11 * 2,"test/testutil/format_output.c",0x12e);
      if (ptr == (undefined1 *)0x0) {
        uVar11 = 2000;
        test_printf_stderr("WARNING: these BIGNUMs have been truncated\n");
        ptr = local_fe8;
        bVar23 = false;
      }
      else {
        bVar23 = false;
      }
    }
    else {
      test_printf_stderr("--- %s\n",in_R8);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr(" %*s\n",0x49,"bit position");
      if (2000 < uVar11) {
        bVar23 = false;
        bVar22 = false;
        goto LAB_00100f92;
      }
LAB_00100a1b:
      ptr = local_fe8;
      bVar23 = false;
    }
LAB_00100a30:
    BN_bn2binpad(in_stack_00000010,ptr,uVar11 & 0xffffffff);
    puVar21 = ptr;
  }
  local_1140 = local_fe8;
  puVar16 = (undefined1 *)0x0;
  if (in_stack_00000018 != (BIGNUM *)0x0) {
    puVar16 = ptr + uVar11;
    BN_bn2binpad(in_stack_00000018,puVar16,uVar11 & 0xffffffff);
  }
  if (uVar11 != 0) {
    do {
      uVar11 = uVar11 - 0x20;
      uVar8 = convert_bn_memory_constprop_0(puVar21,local_1108,&local_1110,in_stack_00000010);
      iVar15 = (int)uVar11 * 8;
      uVar9 = convert_bn_memory_constprop_0(puVar16,local_10a8,&local_110c,in_stack_00000018);
      if (local_1108[0] == '\0') {
        local_1048[0] = 0;
LAB_00100cb8:
        pcVar19 = local_10a8;
        if (uVar9 <= uVar8) {
          pcVar19 = local_1108;
        }
        test_printf_stderr(" %s:% 5d\n",pcVar19,iVar15);
      }
      else {
        bVar2 = false;
        bVar14 = false;
        lVar13 = 0;
        puVar17 = local_1048;
        cVar3 = local_1108[0];
        do {
          cVar1 = local_10a8[lVar13];
          puVar18 = puVar17 + 1;
          if ((cVar1 == cVar3 || cVar1 == ' ') || (cVar3 == ' ')) {
            bVar14 = (bool)(bVar14 | cVar1 != cVar3);
            uVar4 = 0x20;
          }
          else {
            uVar4 = 0x5e;
            bVar2 = true;
            bVar14 = true;
          }
          lVar13 = lVar13 + 1;
          *puVar17 = uVar4;
          cVar3 = local_1108[lVar13];
          puVar17 = puVar18;
        } while (cVar3 != '\0');
        *puVar18 = 0;
        if (!bVar14) goto LAB_00100cb8;
        bVar14 = iVar15 == 0;
        if ((bVar14) && (bVar22)) {
          test_printf_stderr(&_LC20,local_1108);
          if (bVar23) {
LAB_00100dc6:
            test_printf_stderr(&_LC21,local_10a8);
          }
          else {
            test_printf_stderr("+%s:% 5d\n",local_10a8,0);
          }
        }
        else {
          if (((uVar8 != 0) || (bVar14)) &&
             ((test_printf_stderr("-%s:% 5d\n",local_1108,iVar15), bVar14 && (bVar23))))
          goto LAB_00100dc6;
          if (((uVar9 != 0) || (bVar14)) &&
             (((test_printf_stderr("+%s:% 5d\n",local_10a8,iVar15), bVar2 &&
               (((iVar15 == 0 || (uVar8 != 0)) && (in_stack_00000010 != (BIGNUM *)0x0)))) &&
              (in_stack_00000018 != (BIGNUM *)0x0)))) {
            test_printf_stderr(&_LC24,local_1048);
          }
        }
      }
      if (puVar21 != (undefined1 *)0x0) {
        puVar21 = puVar21 + 0x20;
      }
      if (puVar16 != (undefined1 *)0x0) {
        puVar16 = puVar16 + 0x20;
      }
    } while (uVar11 != 0);
  }
  test_flush_stderr();
  if (ptr != local_1140) {
    CRYPTO_free(ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001010e3:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_memory_common(void)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined8 extraout_RDX;
  ulong uVar7;
  undefined8 in_R8;
  undefined8 in_R9;
  ulong uVar8;
  undefined1 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  undefined8 in_stack_00000008;
  void *in_stack_00000010;
  ulong in_stack_00000018;
  void *in_stack_00000020;
  ulong in_stack_00000028;
  int local_174;
  undefined1 local_158 [96];
  undefined1 local_f8 [96];
  undefined2 local_98 [44];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  test_fail_message_prefix();
  if (in_stack_00000010 == (void *)0x0) {
    if (in_stack_00000020 == (void *)0x0) {
      test_printf_stderr("%4s %c%s\n",&_LC1,0x20,&_LC10);
      goto LAB_00101578;
    }
    if (in_stack_00000028 == 0) {
      test_printf_stderr("--- %s\n",in_R8,extraout_RDX,in_stack_00000008);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr("%4s %c%s\n",&_LC1,0x2d,&_LC10);
      test_printf_stderr("%04x %c%s\n",0,0x2b,"empty");
      goto LAB_00101578;
    }
    in_stack_00000018 = 0;
LAB_001011be:
    test_printf_stderr("--- %s\n",in_R8);
    test_printf_stderr("+++ %s\n",in_R9);
  }
  else {
    if (in_stack_00000020 == (void *)0x0) {
      if (in_stack_00000018 == 0) {
        test_printf_stderr("--- %s\n",in_R8,extraout_RDX,in_stack_00000008);
        test_printf_stderr("+++ %s\n",in_R9);
        test_printf_stderr("%04x %c%s\n",0,0x2d,"empty");
        test_printf_stderr("%4s %c%s\n",&_LC1,0x2b,&_LC10);
        goto LAB_00101578;
      }
      in_stack_00000028 = 0;
      goto LAB_001011be;
    }
    if (in_stack_00000018 == 0 && in_stack_00000028 == 0) {
      test_printf_stderr("%04x %c%s\n",0,0x20,"empty");
      goto LAB_00101578;
    }
    if ((in_stack_00000018 != in_stack_00000028) ||
       ((in_stack_00000010 != in_stack_00000020 &&
        (iVar3 = memcmp(in_stack_00000010,in_stack_00000020,in_stack_00000018), iVar3 != 0))))
    goto LAB_001011be;
  }
  local_174 = 0;
  do {
    while (in_stack_00000018 == 0) {
      if (in_stack_00000028 == 0) {
        uVar4 = 0;
        uVar11 = 0;
        uVar7 = 0;
LAB_001014ab:
        test_printf_stderr("%04x: %s\n",local_174,local_158);
      }
      else {
        puVar10 = local_f8;
        uVar11 = 0x20;
        if (in_stack_00000028 < 0x21) {
          uVar11 = in_stack_00000028;
        }
        uVar7 = 0;
        uVar4 = in_stack_00000028 - uVar11;
        hex_convert_memory_constprop_0(in_stack_00000020,uVar11,puVar10);
        bVar2 = false;
        if (local_174 == 0) {
          if (in_stack_00000010 == (void *)0x0) goto LAB_001014d9;
          test_printf_stderr("%04x %c%s\n",0,0x2d,"empty");
          bVar2 = false;
          goto LAB_0010126b;
        }
LAB_0010142e:
        test_printf_stderr("%04x:+%s\n",local_174,puVar10);
        if (bVar2) goto LAB_0010145e;
      }
LAB_00101292:
      if (in_stack_00000010 != (void *)0x0) {
        in_stack_00000010 = (void *)(uVar7 + (long)in_stack_00000010);
      }
      in_stack_00000028 = uVar4;
      if (in_stack_00000020 != (void *)0x0) {
LAB_001012a1:
        in_stack_00000020 = (void *)((long)in_stack_00000020 + uVar11);
        in_stack_00000028 = uVar4;
      }
      local_174 = local_174 + 0x20;
      if (in_stack_00000028 == 0 && in_stack_00000018 == 0) goto LAB_00101578;
    }
    uVar7 = 0x20;
    if (in_stack_00000018 < 0x21) {
      uVar7 = in_stack_00000018;
    }
    hex_convert_memory_constprop_0(in_stack_00000010,uVar7,local_158);
    if (in_stack_00000028 == 0) {
      in_stack_00000018 = in_stack_00000018 - uVar7;
      uVar11 = 0;
      uVar8 = 0;
      bVar2 = false;
      uVar4 = 0;
    }
    else {
      uVar9 = 0x5e;
      uVar11 = 0x20;
      if (in_stack_00000028 < 0x21) {
        uVar11 = in_stack_00000028;
      }
      hex_convert_memory_constprop_0(in_stack_00000020,uVar11,local_f8);
      uVar8 = uVar11;
      if (uVar7 <= uVar11) {
        uVar8 = uVar7;
      }
      bVar2 = false;
      uVar4 = 0;
      puVar5 = local_98;
      do {
        while( true ) {
          puVar6 = puVar5 + 1;
          if (*(char *)((long)in_stack_00000010 + uVar4) ==
              *(char *)((long)in_stack_00000020 + uVar4)) {
            uVar1 = 0x20;
          }
          else {
            bVar2 = true;
            uVar1 = uVar9;
          }
          *puVar5 = CONCAT11(uVar1,uVar1);
          if (((~(uint)uVar4 & 7) != 0) || (uVar8 - 1 == uVar4)) break;
          uVar4 = uVar4 + 1;
          *(undefined1 *)(puVar5 + 1) = 0x20;
          puVar6 = (undefined2 *)((long)puVar5 + 3);
          puVar5 = puVar6;
          if (uVar8 == uVar4) goto LAB_001013bf;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar6;
      } while (uVar8 != uVar4);
LAB_001013bf:
      *(undefined1 *)puVar6 = 0;
      in_stack_00000018 = in_stack_00000018 - uVar7;
      uVar4 = in_stack_00000028 - uVar11;
      if ((uVar7 == uVar11) && (!bVar2)) goto LAB_001014ab;
    }
    bVar2 = (bool)(uVar8 != 0 & bVar2);
    if (local_174 != 0) {
      test_printf_stderr("%04x:-%s\n",local_174,local_158);
      if (uVar11 != 0) {
LAB_00101426:
        puVar10 = local_f8;
        goto LAB_0010142e;
      }
LAB_00101286:
      if (!bVar2) goto LAB_00101292;
LAB_0010145e:
      test_printf_stderr("%4s  %s\n",&_LC1,local_98);
      goto LAB_00101292;
    }
    if (in_stack_00000010 != (void *)0x0) {
      test_printf_stderr("%04x:-%s\n",0,local_158);
LAB_0010126b:
      if (in_stack_00000020 == (void *)0x0) goto LAB_00101510;
LAB_00101274:
      if (in_stack_00000028 != 0) {
        if (uVar11 == 0) goto LAB_00101286;
        goto LAB_00101426;
      }
      if (in_stack_00000020 == (void *)0x0) goto LAB_00101510;
      test_printf_stderr("%04x %c%s\n",0,0x2b,"empty");
      if (bVar2) goto LAB_0010145e;
      if (in_stack_00000010 != (void *)0x0) {
        in_stack_00000010 = (void *)(uVar7 + (long)in_stack_00000010);
      }
      goto LAB_001012a1;
    }
LAB_001014d9:
    test_printf_stderr("%4s %c%s\n",&_LC1,0x2d,&_LC10);
    if (in_stack_00000020 != (void *)0x0) goto LAB_00101274;
LAB_00101510:
    in_stack_00000028 = uVar4;
    test_printf_stderr("%4s %c%s\n",&_LC1,0x2b,&_LC10);
    uVar4 = in_stack_00000028;
    if (bVar2) goto LAB_0010145e;
    if (in_stack_00000010 != (void *)0x0) {
      in_stack_00000010 = (void *)(uVar7 + (long)in_stack_00000010);
    }
    local_174 = local_174 + 0x20;
  } while (in_stack_00000028 != 0 || in_stack_00000018 != 0);
LAB_00101578:
  test_flush_stderr();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_string_message(void)

{
  test_fail_string_common();
  test_printf_stderr(&_LC32);
  return;
}



void test_output_string(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  test_fail_string_common("string",0,0,0,0,0,param_1,param_2,param_3,param_2,param_3);
  return;
}



void test_fail_bignum_message(void)

{
  test_fail_bignum_common();
  test_printf_stderr(&_LC32);
  return;
}



void test_fail_bignum_mono_message(void)

{
  test_fail_bignum_common();
  test_printf_stderr(&_LC32);
  return;
}



void test_output_bignum(undefined8 param_1,BIGNUM *param_2)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  uchar local_50 [8];
  char local_48;
  char local_47 [23];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (BIGNUM *)0x0) {
    iVar1 = BN_is_zero(param_2);
    if (iVar1 == 0) {
      iVar1 = BN_num_bits(param_2);
      if (iVar1 < 0x41) {
        pcVar3 = &local_48;
        iVar1 = BN_bn2bin(param_2,local_50);
        hex_convert_memory_constprop_0(local_50,(long)iVar1,pcVar3);
        do {
          if (local_48 != '0') break;
          local_48 = pcVar3[1];
          pcVar3 = pcVar3 + 1;
        } while (local_48 != '\0');
        iVar1 = BN_is_negative(param_2);
        puVar2 = &_LC1;
        if (iVar1 != 0) {
          puVar2 = &_LC34;
        }
        test_printf_stderr("bignum: \'%s\' = %s0x%s\n",param_1,puVar2,pcVar3);
      }
      else {
        test_fail_bignum_common("bignum",0,0,0,0,0,param_1,param_2,param_2);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001019c7;
    }
    BN_is_negative();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    test_printf_stderr("bignum: \'%s\' = %s\n",param_1);
    return;
  }
LAB_001019c7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_memory_message(void)

{
  test_fail_memory_common();
  test_printf_stderr(&_LC32);
  return;
}



void test_output_memory(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  test_fail_memory_common("memory",0,0,0,0,0,param_1,param_2,param_3,param_2,param_3);
  return;
}


