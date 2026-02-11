
int convert_bn_memory_constprop_0(long param_1,byte *param_2,int *param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  byte *pbVar6;
  char *__src;
  byte *pbVar7;
  
  if ((param_4 == 0) || (iVar2 = BN_is_zero(param_4), iVar2 != 0)) {
    uVar3 = 0;
    do {
      *param_2 = 0x20;
      while (((~uVar3 & 0xf) != 0 || (uVar3 == 0x3f))) {
        uVar3 = uVar3 + 1;
        if (uVar3 == 0x40) {
          param_2[1] = 0;
          if (param_4 == 0) {
            param_2 = param_2 + -3;
            __src = "NULL";
          }
          else {
            iVar2 = BN_is_negative(param_4);
            __src = "0";
            if (iVar2 != 0) {
              param_2 = param_2 + -1;
              __src = "-0";
            }
          }
          strcpy((char *)param_2,__src);
          return 0;
        }
        param_2 = param_2 + 1;
        *param_2 = 0x20;
      }
      param_2[1] = 0x20;
      uVar3 = uVar3 + 1;
      param_2 = param_2 + 2;
    } while( true );
  }
  lVar5 = 0;
  pbVar6 = param_2;
  while( true ) {
    while( true ) {
      bVar1 = *(byte *)(param_1 + lVar5);
      pbVar6[1] = "0123456789abcdef"[bVar1 & 0xf];
      *pbVar6 = "0123456789abcdef"[bVar1 >> 4];
      if (((~(uint)lVar5 & 7) != 0) || (lVar5 == 0x1f)) break;
      pbVar6[2] = 0x20;
      lVar5 = lVar5 + 1;
      pbVar6 = pbVar6 + 3;
    }
    lVar5 = lVar5 + 1;
    if (lVar5 == 0x20) break;
    pbVar6 = pbVar6 + 2;
  }
  pbVar6[2] = 0;
  iVar2 = 0x40;
  if (*param_3 != 0) {
    bVar1 = *param_2;
    pbVar6 = (byte *)0x0;
    while (pbVar7 = pbVar6, (bVar1 & 0xef) == 0x20) {
      while (pbVar6 = param_2, bVar1 == 0x30) {
        bVar1 = pbVar6[1];
        *pbVar6 = 0x20;
        iVar2 = iVar2 + -1;
        param_2 = pbVar6 + 1;
        pbVar7 = pbVar6;
        if ((bVar1 & 0xef) != 0x20) goto LAB_0010016e;
      }
      param_2 = pbVar6 + 1;
      bVar1 = pbVar6[1];
      pbVar6 = pbVar7;
    }
LAB_0010016e:
    if (bVar1 == 0) {
      if ((0xf < *(byte *)(param_1 + 0x20)) && (iVar4 = BN_is_negative(param_4), iVar4 != 0)) {
        *param_3 = 0;
        iVar2 = iVar2 + 1;
        *pbVar6 = 0x2d;
      }
    }
    else {
      *param_3 = 0;
      iVar4 = BN_is_negative(param_4);
      if (iVar4 != 0) {
        *pbVar6 = 0x2d;
        iVar2 = iVar2 + 1;
      }
    }
  }
  return iVar2;
}



void test_fail_bignum_common(void)

{
  char cVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *ptr;
  undefined *puVar11;
  long lVar12;
  bool bVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined8 in_R8;
  char *pcVar18;
  undefined8 in_R9;
  ulong uVar19;
  undefined1 *puVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
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
      puVar11 = &_LC0;
      pcVar18 = "";
LAB_00100853:
      test_printf_stderr("%c%*s%s\n",0x20,0x43,puVar11,pcVar18);
    }
    else {
      iVar4 = BN_num_bits(in_stack_00000018);
      iVar5 = BN_is_negative(in_stack_00000018);
      iVar14 = iVar4 + 0xe;
      if (-1 < iVar4 + 7) {
        iVar14 = iVar4 + 7;
      }
      uVar19 = 0;
      uVar9 = (ulong)(int)(((iVar14 >> 3) + 1) - (uint)(iVar5 == 0));
      if (uVar9 != 0) goto LAB_001002d9;
      test_printf_stderr("--- %s\n",in_R8);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr(" %*s\n",0x49,"bit position");
      puVar11 = &_LC0;
      pcVar18 = "";
LAB_001007bf:
      test_printf_stderr("%c%*s%s\n",0x2d,0x43,puVar11,pcVar18);
      puVar11 = &_LC0;
      pcVar18 = "";
      if (in_stack_00000018 != (BIGNUM *)0x0) {
        iVar14 = BN_is_negative(in_stack_00000018);
        puVar11 = &_LC2;
        pcVar18 = ":    0";
        if (iVar14 != 0) {
          puVar11 = &_LC1;
        }
      }
      test_printf_stderr("%c%*s%s\n",0x2b,0x43,puVar11,pcVar18);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      test_flush_stderr();
      return;
    }
    goto LAB_00100a3c;
  }
  iVar4 = BN_num_bits(in_stack_00000010);
  iVar5 = BN_is_negative(in_stack_00000010);
  iVar14 = iVar4 + 7;
  if (iVar4 + 7 < 0) {
    iVar14 = iVar4 + 0xe;
  }
  iVar14 = ((iVar14 >> 3) + 1) - (uint)(iVar5 == 0);
  uVar19 = (ulong)iVar14;
  if (in_stack_00000018 == (BIGNUM *)0x0) {
    if (uVar19 == 0) {
      test_printf_stderr("--- %s\n",in_R8);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr(" %*s\n",0x49,"bit position");
      iVar14 = BN_is_negative(in_stack_00000010);
      puVar11 = &_LC1;
      pcVar18 = ":    0";
      if (iVar14 == 0) {
        puVar11 = &_LC2;
      }
      goto LAB_001007bf;
    }
    bVar22 = true;
    bVar21 = false;
    uVar10 = uVar19 + 0x1f & 0xffffffffffffffe0;
LAB_001003ab:
    test_printf_stderr("--- %s\n",in_R8);
    test_printf_stderr("+++ %s\n",in_R9);
    test_printf_stderr(" %*s\n",0x49,"bit position");
    if (uVar10 < 0x7d1) {
LAB_00100404:
      ptr = local_fe8;
    }
    else {
LAB_001008eb:
      ptr = (undefined1 *)CRYPTO_malloc((int)uVar10 * 2,"test/testutil/format_output.c",0x12e);
      if (ptr == (undefined1 *)0x0) {
        uVar10 = 2000;
        test_printf_stderr("WARNING: these BIGNUMs have been truncated\n");
        goto LAB_00100404;
      }
    }
    puVar20 = (undefined1 *)0x0;
    if (in_stack_00000010 != (BIGNUM *)0x0) goto LAB_00100370;
  }
  else {
    iVar5 = BN_num_bits(in_stack_00000018);
    iVar6 = BN_is_negative(in_stack_00000018);
    iVar4 = iVar5 + 0xe;
    if (-1 < iVar5 + 7) {
      iVar4 = iVar5 + 7;
    }
    iVar4 = ((iVar4 >> 3) + 1) - (uint)(iVar6 == 0);
    uVar9 = (ulong)iVar4;
    if (iVar4 == 0 && iVar14 == 0) {
      test_printf_stderr(" %*s\n",0x49,"bit position");
      iVar14 = BN_is_negative(in_stack_00000010);
      puVar11 = &_LC1;
      pcVar18 = ":    0";
      if (iVar14 == 0) {
        puVar11 = &_LC2;
      }
      goto LAB_00100853;
    }
LAB_001002d9:
    bVar21 = in_stack_00000010 == (BIGNUM *)0x0;
    bVar22 = in_stack_00000018 == (BIGNUM *)0x0;
    uVar10 = uVar9;
    if (uVar9 < uVar19) {
      uVar10 = uVar19;
    }
    uVar10 = uVar10 + 0x1f & 0xffffffffffffffe0;
    bVar13 = uVar9 != uVar19 || (bVar21 || bVar22);
    if (bVar13) goto LAB_001003ab;
    iVar14 = BN_cmp(in_stack_00000010,in_stack_00000018);
    bVar21 = bVar13;
    if (iVar14 == 0) {
      test_printf_stderr(" %*s\n",0x49,"bit position");
      if (uVar10 < 0x7d1) goto LAB_0010035b;
      ptr = (undefined1 *)CRYPTO_malloc((int)uVar10 * 2,"test/testutil/format_output.c",0x12e);
      if (ptr == (undefined1 *)0x0) {
        uVar10 = 2000;
        test_printf_stderr("WARNING: these BIGNUMs have been truncated\n");
        ptr = local_fe8;
        bVar22 = false;
      }
      else {
        bVar22 = false;
      }
    }
    else {
      test_printf_stderr("--- %s\n",in_R8);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr(" %*s\n",0x49,"bit position");
      if (2000 < uVar10) {
        bVar22 = false;
        bVar21 = false;
        goto LAB_001008eb;
      }
LAB_0010035b:
      ptr = local_fe8;
      bVar22 = false;
    }
LAB_00100370:
    BN_bn2binpad(in_stack_00000010,ptr,uVar10 & 0xffffffff);
    puVar20 = ptr;
  }
  local_1140 = local_fe8;
  puVar15 = (undefined1 *)0x0;
  if (in_stack_00000018 != (BIGNUM *)0x0) {
    puVar15 = ptr + uVar10;
    BN_bn2binpad(in_stack_00000018,puVar15,uVar10 & 0xffffffff);
  }
  if (uVar10 != 0) {
    do {
      uVar10 = uVar10 - 0x20;
      uVar7 = convert_bn_memory_constprop_0(puVar20,local_1108,&local_1110,in_stack_00000010);
      iVar14 = (int)uVar10 * 8;
      uVar8 = convert_bn_memory_constprop_0(puVar15,local_10a8,&local_110c,in_stack_00000018);
      if (local_1108[0] == '\0') {
        local_1048[0] = 0;
LAB_00100530:
        pcVar18 = local_10a8;
        if (uVar8 <= uVar7) {
          pcVar18 = local_1108;
        }
        test_printf_stderr(" %s:% 5d\n",pcVar18,iVar14);
      }
      else {
        bVar2 = false;
        bVar13 = false;
        lVar12 = 0;
        puVar16 = local_1048;
        cVar3 = local_1108[0];
        do {
          while( true ) {
            cVar1 = local_10a8[lVar12];
            puVar17 = puVar16 + 1;
            if ((cVar1 == cVar3 || cVar1 == ' ') || (cVar3 == ' ')) break;
            lVar12 = lVar12 + 1;
            *puVar16 = 0x5e;
            cVar3 = local_1108[lVar12];
            if (cVar3 == '\0') {
              *puVar17 = 0;
              bVar2 = true;
              goto LAB_001005f6;
            }
            bVar13 = true;
            bVar2 = true;
            puVar16 = puVar17;
          }
          *puVar16 = 0x20;
          lVar12 = lVar12 + 1;
          bVar13 = (bool)(bVar13 | cVar1 != cVar3);
          cVar3 = local_1108[lVar12];
          puVar16 = puVar17;
        } while (cVar3 != '\0');
        *puVar17 = 0;
        if (!bVar13) goto LAB_00100530;
LAB_001005f6:
        bVar13 = iVar14 == 0;
        if ((bVar13) && (bVar21)) {
          test_printf_stderr(&_LC14,local_1108);
          if (bVar22) {
LAB_0010070e:
            test_printf_stderr(&_LC15,local_10a8);
          }
          else {
            test_printf_stderr("+%s:% 5d\n",local_10a8,0);
          }
        }
        else {
          if (((uVar7 != 0) || (bVar13)) &&
             ((test_printf_stderr("-%s:% 5d\n",local_1108,iVar14), bVar13 && (bVar22))))
          goto LAB_0010070e;
          if (((uVar8 != 0) || (bVar13)) &&
             ((test_printf_stderr("+%s:% 5d\n",local_10a8,iVar14), bVar2 &&
              (((iVar14 == 0 || (uVar7 != 0)) &&
               (in_stack_00000010 != (BIGNUM *)0x0 && in_stack_00000018 != (BIGNUM *)0x0)))))) {
            test_printf_stderr(&_LC18,local_1048);
          }
        }
      }
      if (puVar20 != (undefined1 *)0x0) {
        puVar20 = puVar20 + 0x20;
      }
      if (puVar15 != (undefined1 *)0x0) {
        puVar15 = puVar15 + 0x20;
      }
    } while (uVar10 != 0);
  }
  test_flush_stderr();
  if (ptr != local_1140) {
    CRYPTO_free(ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100a3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_fail_string_common
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,char *param_8,ulong param_9,
               char *param_10,ulong param_11)

{
  ushort *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  ushort **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  byte local_158 [96];
  byte local_f8 [96];
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = BIO_ctrl(_bio_err,0x51,0,(void *)0x0);
  test_fail_message_prefix(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  if (param_8 == (char *)0x0) {
    if (param_10 == (char *)0x0) {
      test_printf_stderr("%4s %c NULL\n",&_LC4,0x20);
      goto LAB_00100cf3;
    }
    if (param_11 == 0) {
      test_printf_stderr("--- %s\n",param_5,0x100ae3);
      test_printf_stderr("+++ %s\n",param_6);
      test_printf_stderr("%4s %c NULL\n",&_LC4,0x2d);
      test_printf_stderr("%4u:%c \'\'\n",0,0x2b);
      goto LAB_00100cf3;
    }
    param_9 = 0;
  }
  else if (param_10 == (char *)0x0) {
    param_11 = 0;
    if (param_9 == 0) {
      test_printf_stderr("--- %s\n",param_5,0x100ae3);
      test_printf_stderr("+++ %s\n",param_6);
      test_printf_stderr("%4u:%c \'\'\n",0,0x2d);
      test_printf_stderr("%4s %c NULL\n",&_LC4,0x2b);
      goto LAB_00100cf3;
    }
  }
  else if (param_11 == 0 && param_9 == 0) {
    test_printf_stderr("%4u:%c \'\'\n",0,0x20);
    goto LAB_00100cf3;
  }
  if ((param_11 != param_9) || (iVar4 = strncmp(param_8,param_10,param_11), iVar4 != 0)) {
    test_printf_stderr("--- %s\n",param_5);
    test_printf_stderr("+++ %s\n",param_6);
  }
  iVar4 = 0;
  uVar10 = (0x44 - lVar5) - (0x44 - lVar5) % 0x10;
  do {
    if (param_9 == 0) {
LAB_00100ba7:
      uVar9 = 0;
      uVar11 = 0;
      if (param_11 != 0) {
        uVar9 = uVar10;
        if (param_11 < uVar10) {
          uVar9 = param_11;
        }
        uVar11 = 0;
        local_f8[uVar9] = 0;
        if (uVar9 != 0) {
LAB_00100bea:
          ppuVar6 = __ctype_b_loc();
          puVar1 = *ppuVar6;
          uVar7 = 0;
          do {
            while ((*(byte *)((long)puVar1 + (ulong)(byte)param_10[uVar7] * 2 + 1) & 0x40) != 0) {
              local_f8[uVar7] = param_10[uVar7];
              uVar7 = uVar7 + 1;
              if (uVar7 == uVar9) goto joined_r0x00100de3;
            }
            local_f8[uVar7] = 0x2e;
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar9);
joined_r0x00100de3:
          param_11 = param_11 - uVar9;
          if (uVar11 == 0) {
            bVar2 = false;
            if (iVar4 == 0) goto LAB_00100df8;
            goto LAB_00100fe0;
          }
          uVar7 = uVar11;
          if (uVar9 <= uVar11) {
            uVar7 = uVar9;
          }
          uVar8 = 0;
          bVar3 = false;
          do {
            while (bVar2 = bVar3, param_10[uVar8] != param_8[uVar8]) {
              local_98[uVar8] = 0x5e;
              uVar8 = uVar8 + 1;
              bVar2 = true;
              bVar3 = true;
              if (uVar7 == uVar8) goto LAB_00100c72;
            }
            local_98[uVar8] = 0x20;
            uVar8 = uVar8 + 1;
            bVar3 = bVar2;
          } while (uVar7 != uVar8);
LAB_00100c72:
          local_98[uVar7] = 0;
          if ((uVar9 != uVar11) || (bVar2)) goto LAB_00100c88;
        }
      }
      test_printf_stderr("%4u:  \'%s\'\n",iVar4,local_158);
LAB_00100cc3:
      if (param_8 != (char *)0x0) {
        param_8 = param_8 + uVar11;
      }
      if (param_10 != (char *)0x0) {
LAB_00100cd4:
        param_10 = param_10 + uVar9;
      }
    }
    else {
      uVar11 = uVar10;
      if (param_9 < uVar10) {
        uVar11 = param_9;
      }
      local_158[uVar11] = 0;
      if (uVar11 == 0) goto LAB_00100ba7;
      ppuVar6 = __ctype_b_loc();
      puVar1 = *ppuVar6;
      uVar9 = 0;
      do {
        while ((*(byte *)((long)puVar1 + (ulong)(byte)param_8[uVar9] * 2 + 1) & 0x40) != 0) {
          local_158[uVar9] = param_8[uVar9];
          uVar9 = uVar9 + 1;
          if (uVar9 == uVar11) goto LAB_00100efa;
        }
        local_158[uVar9] = 0x2e;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar11);
LAB_00100efa:
      param_9 = param_9 - uVar11;
      if (param_11 != 0) {
        uVar9 = uVar10;
        if (param_11 < uVar10) {
          uVar9 = param_11;
        }
        uVar7 = 0;
        bVar2 = false;
        local_f8[uVar9] = 0;
        if (uVar9 == 0) goto LAB_00100c88;
        goto LAB_00100bea;
      }
      uVar9 = 0;
      uVar7 = 0;
      bVar2 = false;
LAB_00100c88:
      bVar2 = (bool)(bVar2 & uVar7 != 0);
      if (iVar4 != 0) {
        test_printf_stderr("%4u:- \'%s\'\n",iVar4,local_158);
LAB_00100cb1:
        if (uVar9 != 0) {
LAB_00100fe0:
          test_printf_stderr("%4u:+ \'%s\'\n",iVar4,local_f8);
        }
        if (!bVar2) goto LAB_00100cc3;
LAB_00100f37:
        test_printf_stderr("%4s    %s\n",&_LC4,local_98);
        goto LAB_00100cc3;
      }
LAB_00100df8:
      if (param_8 == (char *)0x0) {
        test_printf_stderr("%4s %c NULL\n",&_LC4,0x2d);
LAB_00100e20:
        if (param_10 == (char *)0x0) goto LAB_00100f90;
LAB_00100e29:
        if (*param_10 != '\0') goto LAB_00100cb1;
        test_printf_stderr("%4u:%c \'\'\n",0,0x2b);
        if (bVar2) goto LAB_00100f37;
        if (param_8 != (char *)0x0) {
          param_8 = param_8 + uVar11;
        }
        goto LAB_00100cd4;
      }
      if (*param_8 == '\0') {
        test_printf_stderr("%4u:%c \'\'\n",0,0x2d);
        goto LAB_00100e20;
      }
      if (uVar11 == 0) goto LAB_00100e20;
      test_printf_stderr("%4u:- \'%s\'\n",0,local_158);
      if (param_10 != (char *)0x0) goto LAB_00100e29;
LAB_00100f90:
      test_printf_stderr("%4s %c NULL\n",&_LC4,0x2b);
      if (bVar2) goto LAB_00100f37;
      if (param_8 != (char *)0x0) {
        param_8 = param_8 + uVar11;
      }
    }
    iVar4 = iVar4 + (int)uVar10;
  } while (param_9 != 0 || param_11 != 0);
LAB_00100cf3:
  test_flush_stderr();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void test_fail_memory_common(void)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  char *pcVar9;
  undefined8 extraout_RDX;
  undefined1 uVar10;
  ulong uVar11;
  bool bVar12;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  bool bVar13;
  undefined8 in_stack_00000008;
  void *in_stack_00000010;
  ulong in_stack_00000018;
  void *in_stack_00000020;
  ulong in_stack_00000028;
  ulong local_188;
  int local_17c;
  ulong local_178;
  char local_158 [96];
  char local_f8 [96];
  undefined2 local_98 [44];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  test_fail_message_prefix();
  if (in_stack_00000010 == (void *)0x0) {
    if (in_stack_00000020 == (void *)0x0) {
      test_printf_stderr("%4s %c%s\n",&_LC4,0x20,&_LC0);
      goto LAB_001015f0;
    }
    if (in_stack_00000028 == 0) {
      test_printf_stderr("--- %s\n",in_R8,extraout_RDX,in_stack_00000008);
      test_printf_stderr("+++ %s\n",in_R9);
      test_printf_stderr("%4s %c%s\n",&_LC4,0x2d,&_LC0);
      test_printf_stderr("%04x %c%s\n",0,0x2b,"empty");
      goto LAB_001015f0;
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
        test_printf_stderr("%4s %c%s\n",&_LC4,0x2b,&_LC0);
        goto LAB_001015f0;
      }
      in_stack_00000028 = 0;
      goto LAB_001011be;
    }
    if (in_stack_00000018 == 0 && in_stack_00000028 == 0) {
      test_printf_stderr("%04x %c%s\n",0,0x20,"empty");
      goto LAB_001015f0;
    }
    if ((in_stack_00000018 != in_stack_00000028) ||
       ((in_stack_00000010 != in_stack_00000020 &&
        (iVar2 = memcmp(in_stack_00000010,in_stack_00000020,in_stack_00000018), iVar2 != 0))))
    goto LAB_001011be;
  }
  local_17c = 0;
  do {
    if (in_stack_00000018 == 0) {
      if (in_stack_00000028 == 0) {
        local_188 = 0;
        uVar5 = 0;
        local_178 = in_stack_00000018;
        uVar11 = in_stack_00000028;
      }
      else {
        local_178 = 0;
        uVar11 = 0;
LAB_00101288:
        uVar5 = 0x20;
        if (in_stack_00000028 < 0x21) {
          uVar5 = in_stack_00000028;
        }
        uVar3 = 0;
        pcVar9 = local_f8;
        do {
          while( true ) {
            bVar1 = *(byte *)((long)in_stack_00000020 + uVar3);
            pcVar9[1] = "0123456789abcdef"[bVar1 & 0xf];
            *pcVar9 = "0123456789abcdef"[bVar1 >> 4];
            pcVar6 = pcVar9 + 2;
            if (((~(uint)uVar3 & 7) != 0) || (uVar5 - 1 == uVar3)) break;
            uVar3 = uVar3 + 1;
            pcVar9[2] = ' ';
            pcVar6 = pcVar9 + 3;
            pcVar9 = pcVar6;
            if (uVar3 == uVar5) goto LAB_00101303;
          }
          uVar3 = uVar3 + 1;
          pcVar9 = pcVar6;
        } while (uVar3 != uVar5);
LAB_00101303:
        *pcVar6 = '\0';
        local_188 = in_stack_00000028 - uVar5;
        if (uVar11 == 0) {
          if (local_17c == 0) {
            bVar13 = in_stack_00000018 == 0;
            bVar12 = bVar13 || in_stack_00000010 == (void *)0x0;
            in_stack_00000018 = local_178;
            if (!bVar13 && in_stack_00000010 != (void *)0x0) goto joined_r0x00101698;
            bVar12 = false;
            goto LAB_00101720;
          }
          bVar12 = false;
          goto LAB_00101634;
        }
        uVar3 = uVar11;
        if (uVar5 <= uVar11) {
          uVar3 = uVar5;
        }
        bVar12 = false;
        uVar4 = 0;
        puVar7 = local_98;
        do {
          while( true ) {
            uVar10 = 0x5e;
            puVar8 = puVar7 + 1;
            if (*(char *)((long)in_stack_00000010 + uVar4) ==
                *(char *)((long)in_stack_00000020 + uVar4)) {
              uVar10 = 0x20;
            }
            else {
              bVar12 = true;
            }
            *puVar7 = CONCAT11(uVar10,uVar10);
            if (((~(uint)uVar4 & 7) != 0) || (uVar3 - 1 == uVar4)) break;
            uVar4 = uVar4 + 1;
            *(undefined1 *)(puVar7 + 1) = 0x20;
            puVar8 = (undefined2 *)((long)puVar7 + 3);
            puVar7 = puVar8;
            if (uVar3 == uVar4) goto LAB_001013b0;
          }
          uVar4 = uVar4 + 1;
          puVar7 = puVar8;
        } while (uVar3 != uVar4);
LAB_001013b0:
        *(undefined1 *)puVar8 = 0;
        if ((uVar5 != uVar11) || (bVar12)) goto joined_r0x00101562;
      }
      in_stack_00000028 = uVar11;
      test_printf_stderr("%04x: %s\n",local_17c,local_158);
      uVar11 = in_stack_00000028;
      in_stack_00000018 = local_178;
LAB_00101245:
      if (in_stack_00000010 != (void *)0x0) {
        in_stack_00000010 = (void *)(uVar11 + (long)in_stack_00000010);
      }
      if (in_stack_00000020 != (void *)0x0) {
LAB_00101254:
        in_stack_00000020 = (void *)((long)in_stack_00000020 + uVar5);
      }
    }
    else {
      uVar11 = 0x20;
      if (in_stack_00000018 < 0x21) {
        uVar11 = in_stack_00000018;
      }
      uVar5 = 0;
      pcVar9 = local_158;
      do {
        while( true ) {
          bVar1 = *(byte *)((long)in_stack_00000010 + uVar5);
          pcVar9[1] = "0123456789abcdef"[bVar1 & 0xf];
          *pcVar9 = "0123456789abcdef"[bVar1 >> 4];
          pcVar6 = pcVar9 + 2;
          if (((~(uint)uVar5 & 7) != 0) || (uVar11 - 1 == uVar5)) break;
          uVar5 = uVar5 + 1;
          pcVar9[2] = ' ';
          pcVar6 = pcVar9 + 3;
          pcVar9 = pcVar6;
          if (uVar11 == uVar5) goto LAB_00101532;
        }
        uVar5 = uVar5 + 1;
        pcVar9 = pcVar6;
      } while (uVar11 != uVar5);
LAB_00101532:
      *pcVar6 = '\0';
      local_178 = in_stack_00000018 - uVar11;
      if (in_stack_00000028 != 0) goto LAB_00101288;
      local_188 = 0;
      uVar5 = 0;
      bVar12 = false;
joined_r0x00101562:
      if (local_17c != 0) {
        test_printf_stderr("%04x:-%s\n",local_17c,local_158);
LAB_0010158f:
        in_stack_00000018 = local_178;
        if (uVar5 != 0) {
LAB_00101634:
          test_printf_stderr("%04x:+%s\n",local_17c,local_f8);
          in_stack_00000018 = local_178;
        }
        if (bVar12) {
LAB_001015b7:
          test_printf_stderr("%4s  %s\n",&_LC4,local_98);
        }
        goto LAB_00101245;
      }
      if (in_stack_00000018 == 0) {
LAB_00101720:
        if (in_stack_00000010 == (void *)0x0) goto LAB_001013f6;
        test_printf_stderr("%04x %c%s\n",0,0x2d,"empty");
        in_stack_00000018 = local_178;
      }
      else if (in_stack_00000010 == (void *)0x0) {
LAB_001013f6:
        test_printf_stderr("%4s %c%s\n",&_LC4,0x2d,&_LC0);
        in_stack_00000018 = local_178;
      }
      else {
        test_printf_stderr("%04x:-%s\n",0,local_158);
        in_stack_00000018 = local_178;
      }
joined_r0x00101698:
      if (in_stack_00000020 != (void *)0x0) {
        local_178 = in_stack_00000018;
        if (in_stack_00000028 != 0) goto LAB_0010158f;
        if (in_stack_00000020 == (void *)0x0) goto LAB_0010169e;
        test_printf_stderr("%04x %c%s\n",0,0x2b,"empty");
        if (bVar12) goto LAB_001015b7;
        if (in_stack_00000010 != (void *)0x0) {
          in_stack_00000010 = (void *)(uVar11 + (long)in_stack_00000010);
        }
        goto LAB_00101254;
      }
LAB_0010169e:
      test_printf_stderr("%4s %c%s\n",&_LC4,0x2b,&_LC0);
      if (bVar12) goto LAB_001015b7;
      if (in_stack_00000010 != (void *)0x0) {
        in_stack_00000010 = (void *)(uVar11 + (long)in_stack_00000010);
      }
    }
    local_17c = local_17c + 0x20;
    in_stack_00000028 = local_188;
  } while (local_188 != 0 || in_stack_00000018 != 0);
LAB_001015f0:
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
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long in_FS_OFFSET;
  byte local_50 [8];
  char local_48;
  char local_47 [23];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (BIGNUM *)0x0) {
    iVar2 = BN_is_zero(param_2);
    if (iVar2 == 0) {
      iVar2 = BN_num_bits(param_2);
      if (iVar2 < 0x41) {
        iVar2 = BN_bn2bin(param_2,local_50);
        lVar7 = (long)iVar2;
        if (lVar7 == 0) {
          pcVar6 = &local_48;
        }
        else {
          lVar3 = 0;
          pcVar5 = &local_48;
          do {
            while( true ) {
              bVar1 = local_50[lVar3];
              pcVar5[1] = "0123456789abcdef"[bVar1 & 0xf];
              *pcVar5 = "0123456789abcdef"[bVar1 >> 4];
              pcVar6 = pcVar5 + 2;
              if (((~(uint)lVar3 & 7) != 0) || (lVar3 == lVar7 + -1)) break;
              lVar3 = lVar3 + 1;
              pcVar5[2] = ' ';
              pcVar6 = pcVar5 + 3;
              pcVar5 = pcVar6;
              if (lVar7 == lVar3) goto LAB_00101a88;
            }
            lVar3 = lVar3 + 1;
            pcVar5 = pcVar6;
          } while (lVar7 != lVar3);
        }
LAB_00101a88:
        *pcVar6 = '\0';
        pcVar6 = &local_48;
        do {
          if (local_48 != '0') break;
          local_48 = pcVar6[1];
          pcVar6 = pcVar6 + 1;
        } while (local_48 != '\0');
        iVar2 = BN_is_negative(param_2);
        puVar4 = &_LC4;
        if (iVar2 != 0) {
          puVar4 = &_LC34;
        }
        test_printf_stderr("bignum: \'%s\' = %s0x%s\n",param_1,puVar4,pcVar6);
      }
      else {
        test_fail_bignum_common("bignum",0,0,0,0,0,param_1,param_2,param_2);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00101b3d;
    }
    BN_is_negative();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    test_printf_stderr("bignum: \'%s\' = %s\n",param_1);
    return;
  }
LAB_00101b3d:
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


