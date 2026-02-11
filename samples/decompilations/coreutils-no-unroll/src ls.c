
ulong calc_req_mask_cold(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 dev_ino_compare(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = param_1[1] ^ param_2[1] | *param_1 ^ *param_2;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 == 0);
}



void sighandler(int param_1)

{
  if (interrupt_signal == 0) {
    interrupt_signal = param_1;
  }
  return;
}



undefined4 get_funky_string(undefined8 *param_1,long *param_2,undefined4 param_3,long *param_4)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  long lVar7;
  byte *pbVar8;
  bool bVar9;
  
  pbVar4 = (byte *)*param_2;
  pbVar5 = (byte *)*param_1;
  if ((char)param_3 != '\0') {
    bVar2 = *pbVar4;
    lVar7 = 0;
    bVar6 = 0;
LAB_00100108:
    bVar9 = false;
    pbVar8 = pbVar5;
    do {
      pbVar3 = pbVar4;
      if (bVar9) {
        while ((byte)(bVar2 - 0x30) < 8) {
          pbVar4 = pbVar4 + 1;
          bVar6 = (bVar2 - 0x30) + bVar6 * '\b';
          bVar2 = *pbVar4;
        }
        *pbVar8 = bVar6;
        bVar2 = *pbVar4;
        pbVar8 = pbVar8 + 1;
        lVar7 = lVar7 + 1;
        pbVar3 = pbVar4;
      }
      while (bVar2 != 0x5c) {
        if ((char)bVar2 < ']') {
          if (bVar2 == 0x3d) {
            *param_1 = pbVar8;
            *param_2 = (long)pbVar3;
            *param_4 = lVar7;
            return param_3;
          }
          if (((char)bVar2 < '>') && ((bVar2 == 0 || (bVar2 == 0x3a)))) goto LAB_0010015d;
        }
        else if (bVar2 == 0x5e) {
          bVar2 = pbVar3[1];
          if ((byte)(bVar2 - 0x40) < 0x3f) {
            pbVar4 = pbVar3 + 2;
            pbVar5 = pbVar8 + 1;
            lVar7 = lVar7 + 1;
            *pbVar8 = bVar2 & 0x1f;
            bVar2 = pbVar3[2];
          }
          else {
            pbVar4 = pbVar3 + 1;
            if (bVar2 != 0x3f) goto LAB_0010025e;
            *pbVar8 = 0x7f;
            pbVar5 = pbVar8 + 1;
            bVar2 = pbVar3[1];
            lVar7 = lVar7 + 1;
          }
          goto LAB_00100108;
        }
        *pbVar8 = bVar2;
        lVar7 = lVar7 + 1;
        pbVar8 = pbVar8 + 1;
        bVar2 = pbVar3[1];
        pbVar3 = pbVar3 + 1;
      }
      bVar2 = pbVar3[1];
      if (bVar2 == 0) goto LAB_001003dc;
      bVar6 = bVar2 - 0x30;
      switch(bVar6) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        bVar9 = true;
        goto LAB_00100206;
      case 0xf:
        bVar2 = 0x7f;
        break;
      case 0x28:
      case 0x48:
        goto switchD_001001e8_caseD_28;
      case 0x2f:
        bVar2 = 0x20;
        break;
      case 0x31:
        bVar2 = 7;
        break;
      case 0x32:
        bVar2 = 8;
        break;
      case 0x35:
        bVar2 = 0x1b;
        break;
      case 0x36:
        bVar2 = 0xc;
        break;
      case 0x3e:
        bVar2 = 10;
        break;
      case 0x42:
        bVar2 = 0xd;
        break;
      case 0x44:
        bVar2 = 9;
        break;
      case 0x46:
        bVar2 = 0xb;
      }
      bVar6 = bVar2;
      *pbVar8 = bVar6;
      pbVar8 = pbVar8 + 1;
      lVar7 = lVar7 + 1;
      bVar9 = false;
LAB_00100206:
      bVar2 = pbVar3[2];
      pbVar4 = pbVar3 + 2;
    } while( true );
  }
  bVar6 = *pbVar4;
  lVar7 = 0;
LAB_0010009d:
  do {
    cVar1 = bVar6 + 0xa4;
    bVar9 = bVar6 == 0x5c;
    pbVar3 = pbVar4;
    pbVar8 = pbVar5;
    while (!bVar9) {
      if (bVar9 || SBORROW1(bVar6,'\\') != cVar1 < '\0') {
        if ((bVar6 == 0) || (bVar6 == 0x3a)) {
LAB_0010015d:
          *param_1 = pbVar8;
          *param_2 = (long)pbVar3;
          *param_4 = lVar7;
          return 1;
        }
      }
      else if (bVar6 == 0x5e) {
        bVar6 = pbVar3[1];
        if ((byte)(bVar6 - 0x40) < 0x3f) {
          pbVar4 = pbVar3 + 2;
          pbVar5 = pbVar8 + 1;
          lVar7 = lVar7 + 1;
          *pbVar8 = bVar6 & 0x1f;
          bVar6 = pbVar3[2];
        }
        else {
          pbVar4 = pbVar3 + 1;
          if (bVar6 != 0x3f) {
LAB_0010025e:
            *param_1 = pbVar8;
            *param_2 = (long)pbVar4;
            *param_4 = lVar7;
            return 0;
          }
          *pbVar8 = 0x7f;
          pbVar5 = pbVar8 + 1;
          bVar6 = pbVar3[1];
          lVar7 = lVar7 + 1;
        }
        goto LAB_0010009d;
      }
      pbVar3 = pbVar3 + 1;
      *pbVar8 = bVar6;
      lVar7 = lVar7 + 1;
      pbVar8 = pbVar8 + 1;
      bVar6 = *pbVar3;
      cVar1 = bVar6 + 0xa4;
      bVar9 = cVar1 == '\0';
    }
    bVar6 = pbVar3[1];
    if (bVar6 == 0) {
LAB_001003dc:
      *param_1 = pbVar8;
      *param_2 = (long)(pbVar3 + 2);
      *param_4 = lVar7;
      return 0;
    }
    bVar2 = bVar6 - 0x30;
    switch(bVar2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      bVar9 = true;
      goto LAB_001001a6;
    case 0xf:
      bVar6 = 0x7f;
      break;
    case 0x28:
    case 0x48:
      goto switchD_001000fb_caseD_28;
    case 0x2f:
      bVar6 = 0x20;
      break;
    case 0x31:
      bVar6 = 7;
      break;
    case 0x32:
      bVar6 = 8;
      break;
    case 0x35:
      bVar6 = 0x1b;
      break;
    case 0x36:
      bVar6 = 0xc;
      break;
    case 0x3e:
      bVar6 = 10;
      break;
    case 0x42:
      bVar6 = 0xd;
      break;
    case 0x44:
      bVar6 = 9;
      break;
    case 0x46:
      bVar6 = 0xb;
    }
    bVar2 = bVar6;
    *pbVar8 = bVar2;
    pbVar8 = pbVar8 + 1;
    lVar7 = lVar7 + 1;
    bVar9 = false;
LAB_001001a6:
    bVar6 = pbVar3[2];
    pbVar4 = pbVar3 + 2;
    pbVar5 = pbVar8;
    if (bVar9) {
      while ((byte)(bVar6 - 0x30) < 8) {
        bVar2 = (bVar6 - 0x30) + bVar2 * '\b';
        pbVar4 = pbVar4 + 1;
        bVar6 = *pbVar4;
      }
      *pbVar8 = bVar2;
      bVar6 = *pbVar4;
      lVar7 = lVar7 + 1;
      pbVar5 = pbVar8 + 1;
    }
  } while( true );
switchD_001001e8_caseD_28:
  bVar2 = pbVar3[2];
  pbVar4 = pbVar3 + 2;
  bVar6 = 0;
  while( true ) {
    while ((char)bVar2 < 'G') {
      if ((char)bVar2 < 'A') {
        if (9 < (byte)(bVar2 - 0x30)) goto LAB_001004d0;
        pbVar4 = pbVar4 + 1;
        bVar6 = (bVar2 - 0x30) + bVar6 * '\x10';
        bVar2 = *pbVar4;
      }
      else {
        pbVar4 = pbVar4 + 1;
        bVar6 = (bVar2 - 0x37) + bVar6 * '\x10';
        bVar2 = *pbVar4;
      }
    }
    if (5 < (byte)(bVar2 + 0x9f)) break;
    pbVar4 = pbVar4 + 1;
    bVar6 = bVar2 + 0xa9 + bVar6 * '\x10';
    bVar2 = *pbVar4;
  }
LAB_001004d0:
  *pbVar8 = bVar6;
  pbVar5 = pbVar8 + 1;
  bVar2 = *pbVar4;
  lVar7 = lVar7 + 1;
  goto LAB_00100108;
switchD_001000fb_caseD_28:
  pbVar4 = pbVar3 + 2;
  bVar2 = pbVar3[2];
  bVar6 = 0;
  while( true ) {
    while ((char)bVar2 < 'G') {
      if ((char)bVar2 < 'A') {
        if (9 < (byte)(bVar2 - 0x30)) goto LAB_00100500;
        pbVar4 = pbVar4 + 1;
        bVar6 = (bVar2 - 0x30) + bVar6 * '\x10';
        bVar2 = *pbVar4;
      }
      else {
        pbVar4 = pbVar4 + 1;
        bVar6 = (bVar2 - 0x37) + bVar6 * '\x10';
        bVar2 = *pbVar4;
      }
    }
    if (5 < (byte)(bVar2 + 0x9f)) break;
    pbVar4 = pbVar4 + 1;
    bVar6 = bVar2 + 0xa9 + bVar6 * '\x10';
    bVar2 = *pbVar4;
  }
LAB_00100500:
  *pbVar8 = bVar6;
  pbVar5 = pbVar8 + 1;
  bVar6 = *pbVar4;
  lVar7 = lVar7 + 1;
  goto LAB_0010009d;
}



byte get_type_indicator(char param_1,uint param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_1 == '\0') {
    if (param_3 != 5) {
      if ((param_3 == 3) || (param_3 == 9)) {
        return 0x2f;
      }
      if (indicator_style == 1) {
        return 0;
      }
      if (param_3 != 6) {
        if (param_3 != 1) {
          bVar1 = 0x3d;
          if (param_3 != 7) {
            bVar1 = param_3 == 9;
          }
          return bVar1;
        }
        return 0x7c;
      }
      return 0x40;
    }
  }
  else {
    uVar2 = param_2 & 0xf000;
    if (uVar2 == 0x8000) {
      if (indicator_style == 3) {
        return -((param_2 & 0x49) != 0) & 0x2a;
      }
    }
    else {
      if (uVar2 == 0x4000) {
        return 0x2f;
      }
      if (indicator_style != 1) {
        if (uVar2 == 0xa000) {
          return 0x40;
        }
        if (uVar2 != 0x1000) {
          bVar1 = 0x3d;
          if (uVar2 != 0xc000) {
            bVar1 = 0;
          }
          return bVar1;
        }
        return 0x7c;
      }
    }
  }
  return 0;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void dev_ino_free(void *__ptr)

{
  free(__ptr);
  return;
}



ulong calc_req_mask(ulong *param_1,ulong param_2)

{
  uint uVar1;
  
  if (print_inode == '\0') {
    uVar1 = -(uint)print_block_size & 0x400 | 2;
  }
  else {
    uVar1 = -(uint)print_block_size & 0x400 | 0x102;
  }
  if (format == 0) {
    if ((print_owner == '\0') && (print_author == '\0')) {
      uVar1 = uVar1 | *(uint *)(CSWTCH_914 + (ulong)time_type * 4) | 0x204;
    }
    else {
      uVar1 = uVar1 | *(uint *)(CSWTCH_914 + (ulong)time_type * 4) | 0x20c;
    }
    uVar1 = -(uint)print_group & 0x10 | uVar1;
  }
  switch(sort_type) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 6:
    return (ulong)uVar1;
  case 3:
    return (ulong)uVar1 | 0x200;
  case 5:
    return (ulong)(uVar1 | *(uint *)(CSWTCH_914 + (ulong)time_type * 4));
  default:
    return *param_1 % param_2;
  }
}



long decode_line_length(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = xstrtoumax(param_1,0,0,&local_18,&_LC1);
  lVar2 = 0;
  if (((uVar1 != 1) && (lVar2 = -1, uVar1 < 2)) && (lVar2 = local_18, local_18 < 0)) {
    lVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar2;
}



uint stdout_isatty(void)

{
  uint uVar1;
  
  if (-1 < (char)out_tty_16) {
    return out_tty_16 & 1;
  }
  uVar1 = isatty(1);
  out_tty_16 = (char)uVar1;
  return uVar1 & 1;
}



void abformat_init(void)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long in_FS_OFFSET;
  long local_6b8 [2];
  int local_6a8 [12];
  int local_678 [12];
  char local_648 [1536];
  undefined1 local_48 [8];
  long local_40;
  
  lVar17 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    pcVar6 = *(char **)((long)&long_time_format + lVar17);
    cVar3 = *pcVar6;
    while (cVar3 != '\0') {
      cVar1 = pcVar6[1];
      if (cVar3 == '%') {
        if (cVar1 == '%') {
          cVar1 = pcVar6[2];
          pcVar6 = pcVar6 + 1;
        }
        else if (cVar1 == 'b') {
          *(char **)((long)local_6b8 + lVar17) = pcVar6;
          if (lVar17 != 8) goto LAB_00100a8c;
          goto LAB_0010083f;
        }
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar1;
    }
    *(undefined8 *)((long)local_6b8 + lVar17) = 0;
    if (lVar17 == 8) break;
LAB_00100a8c:
    lVar17 = 8;
  }
LAB_0010083f:
  if ((local_6b8[0] != 0) || (local_6b8[1] != 0)) {
    lVar17 = 0;
    iVar14 = 0;
    do {
      pcVar6 = (char *)rpl_nl_langinfo((int)lVar17 + 0x2000e);
      sVar7 = strnlen(pcVar6,0x80);
      local_678[lVar17] = (int)sVar7;
      if ((sVar7 == 0x80) || (pcVar8 = strchr(pcVar6,0x25), pcVar8 != (char *)0x0))
      goto LAB_00100ab4;
      uVar9 = __strcpy_chk(local_648 + lVar17 * 0x80,pcVar6,lVar17 * -0x80 + 0x600);
      iVar4 = gnu_mbswidth(uVar9,3);
      local_6a8[lVar17] = iVar4;
      if (iVar4 < 0) goto LAB_00100ab4;
      if (iVar14 < iVar4) {
        iVar14 = iVar4;
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0xc);
    lVar17 = 0;
    pcVar6 = local_648;
    do {
      while( true ) {
        iVar16 = iVar14 - *(int *)((long)local_6a8 + lVar17);
        iVar4 = *(int *)((long)local_678 + lVar17);
        if (0x80 - iVar4 <= iVar16) goto LAB_00100ab4;
        lVar15 = (long)iVar16;
        if ((int)*pcVar6 - 0x30U < 10) break;
        uVar11 = (long)iVar4 + lVar17 * 0x20;
        uVar10 = 0x600;
        if (0x5ff < uVar11) {
          uVar10 = uVar11;
        }
        lVar17 = lVar17 + 4;
        __memset_chk(local_648 + uVar11,0x20,lVar15,uVar10 - uVar11);
        pcVar6[iVar4 + iVar16] = '\0';
        pcVar6 = pcVar6 + 0x80;
        if (lVar17 == 0x30) goto LAB_0010098f;
      }
      uVar10 = lVar17 * 0x20 + lVar15;
      uVar11 = 0x600;
      if (0x5ff < uVar10) {
        uVar11 = uVar10;
      }
      lVar13 = lVar17 + 4;
      __memmove_chk(local_648 + uVar10,pcVar6,(long)iVar4,uVar11 - uVar10);
      __memset_chk(pcVar6,0x20,lVar15,lVar17 * -0x20 + 0x600);
      pcVar6[iVar16 + iVar4] = '\0';
      lVar17 = lVar13;
      pcVar6 = pcVar6 + 0x80;
    } while (lVar13 != 0x30);
LAB_0010098f:
    puVar12 = abformat;
    lVar17 = 0;
    while( true ) {
      puVar2 = (&long_time_format)[lVar17];
      lVar15 = local_6b8[lVar17];
      if (lVar15 == 0) {
        pcVar6 = puVar12;
        do {
          uVar5 = snprintf(pcVar6,0x80,"%s",puVar2);
          if (0x7f < uVar5) goto LAB_00100ab4;
          pcVar6 = pcVar6 + 0x80;
        } while (pcVar6 != puVar12 + 0x600);
      }
      else {
        if (0x80 < lVar15 - (long)puVar2) goto LAB_00100ab4;
        lVar13 = 0x600;
        pcVar6 = puVar12;
        while( true ) {
          uVar5 = __snprintf_chk(pcVar6,0x80,2,lVar13,"%.*s%s%s",lVar15 - (long)puVar2 & 0xffffffff,
                                 puVar2,local_48 + -lVar13,lVar15 + 2);
          if (0x7f < uVar5) goto LAB_00100ab4;
          lVar13 = lVar13 + -0x80;
          if (lVar13 == 0) break;
          pcVar6 = puVar12 + (0x600 - lVar13);
        }
      }
      puVar12 = puVar12 + 0x600;
      if (lVar17 != 0) break;
      lVar17 = 1;
    }
    use_abformat = 1;
  }
LAB_00100ab4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void do_statx(undefined8 param_1,undefined8 param_2,ulong *param_3,uint param_4,uint param_5)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 uStack_128;
  byte local_127;
  undefined4 local_124;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  ushort local_10c;
  ulong local_108;
  undefined8 local_100;
  ulong local_f8;
  ulong local_e8;
  uint local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  ulong local_c8;
  uint local_c0;
  ulong local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = statx(param_1,param_2,param_4 | 0x800,param_5,&uStack_128);
  if (-1 < iVar1) {
    *param_3 = ((ulong)local_9c & 0xffffff00) << 0xc |
               ((ulong)local_a0 & 0xfffff000) << 0x20 | (ulong)((local_a0 & 0xfff) << 8) |
               (ulong)(byte)local_9c;
    param_3[1] = local_108;
    *(undefined4 *)(param_3 + 4) = local_110;
    param_3[2] = (ulong)local_118;
    param_3[3] = CONCAT44(local_114,(uint)local_10c);
    auVar2._8_4_ = local_124;
    auVar2._0_8_ = local_100;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_3 + 6) = auVar2;
    param_3[5] = ((ulong)local_a4 & 0xffffff00) << 0xc |
                 ((ulong)local_a8 & 0xfffff000) << 0x20 | (ulong)((local_a8 & 0xfff) << 8) |
                 (ulong)(byte)local_a4;
    param_3[10] = (ulong)local_e0;
    param_3[8] = local_f8;
    param_3[0xc] = (ulong)local_b0;
    param_3[9] = local_e8;
    param_3[0xe] = (ulong)local_c0;
    param_3[0xb] = local_b8;
    param_3[0xd] = local_c8;
    if ((param_5 & 0x800) != 0) {
      if ((local_127 & 8) == 0) {
        *(undefined4 *)(param_3 + 0xb) = 0xffffffff;
        *(undefined4 *)((long)param_3 + 0x5c) = 0xffffffff;
        *(undefined4 *)(param_3 + 0xc) = 0xffffffff;
        *(undefined4 *)((long)param_3 + 100) = 0xffffffff;
      }
      else {
        auVar3._8_4_ = local_d0;
        auVar3._0_8_ = local_d8;
        auVar3._12_4_ = 0;
        *(undefined1 (*) [16])(param_3 + 0xb) = auVar3;
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_column_info(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  lVar9 = column_info_alloc_3;
  if (column_info_alloc_3 < (long)param_1) {
    puVar10 = &column_info_alloc_3;
    lVar8 = column_info_alloc_3 + 1;
    puVar5 = (undefined8 *)
             xpalloc(column_info,&column_info_alloc_3,param_1 - column_info_alloc_3,
                     0xffffffffffffffff,0x18);
    lVar7 = column_info_alloc_3 - lVar9;
    if ((SCARRY8(column_info_alloc_3,lVar8)) ||
       (lVar6 = (column_info_alloc_3 + lVar8) * lVar7,
       SEXT816(lVar6) != SEXT816(column_info_alloc_3 + lVar8) * SEXT816(lVar7))) {
      puVar3 = column_info;
      column_info = puVar5;
      xalloc_die();
      strcmp((char *)*puVar3,(char *)*puVar10);
      return;
    }
    column_info = puVar5;
    lVar7 = xinmalloc(lVar6 >> 1,8);
    puVar5 = column_info;
    if (lVar9 < column_info_alloc_3) {
      lVar8 = lVar8 * 8;
      lVar9 = column_info_alloc_3 * 8;
      do {
        *(long *)((long)puVar5 + lVar8 * 3 + -8) = lVar7;
        lVar7 = lVar7 + lVar8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != lVar9 + 8);
    }
  }
  uVar2 = _UNK_00111c28;
  uVar1 = __LC4;
  puVar5 = column_info;
  if ((long)param_1 < 1) {
    return;
  }
  lVar9 = 3;
  uVar4 = 0;
  uVar11 = 1;
  *(undefined1 *)column_info = 1;
  puVar10 = (undefined8 *)puVar5[2];
  puVar5[1] = 3;
  do {
    puVar10[uVar4] = 3;
    lVar8 = lVar9;
    do {
      lVar9 = lVar8 + 3;
      if (uVar11 == param_1) {
        return;
      }
      uVar11 = uVar11 + 1;
      puVar10 = (undefined8 *)puVar5[lVar8 + 2];
      *(undefined1 *)(puVar5 + lVar8) = 1;
      puVar5[lVar8 + 1] = lVar9;
      puVar3 = puVar10;
      do {
        *puVar3 = uVar1;
        puVar3[1] = uVar2;
        puVar3 = puVar3 + 2;
      } while (puVar10 + (uVar11 & 0xfffffffffffffffe) != puVar3);
      lVar8 = lVar9;
    } while ((uVar11 & 1) == 0);
    uVar4 = uVar11 & 0xfffffffffffffffe;
  } while( true );
}



void strcmp_name(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void rev_strcmp_name(undefined8 *param_1,undefined8 *param_2)

{
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



byte * file_escape(byte *param_1,char param_2)

{
  byte bVar1;
  ulong uVar2;
  size_t sVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  
  sVar3 = strlen((char *)param_1);
  uVar2 = (sVar3 + 1) * 3;
  pbVar4 = (byte *)xnmalloc(3);
  bVar1 = *param_1;
  pbVar8 = pbVar4;
  uVar6 = uVar2;
  do {
    while( true ) {
      if (bVar1 == 0) {
        *pbVar8 = 0;
        return pbVar4;
      }
      param_1 = param_1 + 1;
      uVar7 = uVar6;
      if (uVar6 <= uVar2) {
        uVar7 = uVar2;
      }
      if ((bVar1 != 0x2f) || (param_2 == '\0')) break;
      *pbVar8 = 0x2f;
      uVar5 = (uVar7 - uVar6) + 1;
      if (uVar5 < uVar7) {
        uVar5 = uVar7;
      }
      uVar6 = ((uVar6 - 1) - uVar7) + uVar5;
LAB_00100f62:
      bVar1 = *param_1;
      pbVar8 = pbVar8 + 1;
    }
    if ((&RFC3986)[bVar1] != '\0') {
      *pbVar8 = bVar1;
      uVar5 = (uVar7 - uVar6) + 1;
      if (uVar5 < uVar7) {
        uVar5 = uVar7;
      }
      uVar6 = ((uVar6 - 1) - uVar7) + uVar5;
      goto LAB_00100f62;
    }
    __sprintf_chk(pbVar8,2,uVar6,"%%%02x",bVar1);
    uVar5 = (uVar7 + 3) - uVar6;
    if (uVar5 < uVar7) {
      uVar5 = uVar7;
    }
    pbVar8 = pbVar8 + 3;
    uVar6 = (uVar6 - (uVar7 + 3)) + uVar5;
    bVar1 = *param_1;
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * indent(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  char *in_RAX;
  char *pcVar3;
  ulong uVar5;
  char *pcVar4;
  
  if (param_2 <= param_1) {
    return in_RAX;
  }
  do {
    while( true ) {
      uVar5 = tabsize;
      uVar1 = param_1 + 1;
      pcVar3 = _stdout->_IO_write_ptr;
      if ((tabsize == 0) || (param_2 / tabsize <= uVar1 / tabsize)) break;
      if (pcVar3 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar3 + 1;
        *pcVar3 = '\t';
      }
      else {
        __overflow(_stdout,9);
        uVar5 = tabsize;
      }
      pcVar3 = (char *)(param_1 / uVar5);
      param_1 = (uVar5 + param_1) - param_1 % uVar5;
      if (param_2 <= param_1) {
        return pcVar3;
      }
    }
    if (pcVar3 < _stdout->_IO_write_end) {
      pcVar4 = pcVar3 + 1;
      _stdout->_IO_write_ptr = pcVar4;
      *pcVar3 = ' ';
    }
    else {
      uVar2 = __overflow(_stdout,0x20);
      pcVar4 = (char *)(ulong)uVar2;
    }
    param_1 = uVar1;
  } while (uVar1 < param_2);
  return pcVar4;
}



void stophandler(void)

{
  if (interrupt_signal == 0) {
    stop_signal_count = stop_signal_count + 1;
  }
  return;
}



void file_failure(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = quotearg_style(4,param_3);
  piVar2 = __errno_location();
  error(0,*piVar2,param_2,uVar1);
  if (param_1 == '\0') {
    if (exit_status == 0) {
      exit_status = 1;
      return;
    }
  }
  else {
    exit_status = 2;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dired_dump_obstack(char *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  
  lVar1 = *(long *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x10);
  if (7 < (ulong)(lVar1 - lVar2)) {
    if (lVar1 == lVar2) {
      *(byte *)(param_2 + 0x50) = *(byte *)(param_2 + 0x50) | 2;
    }
    lVar4 = lVar1 + (-lVar1 & *(ulong *)(param_2 + 0x30));
    if ((ulong)(*(long *)(param_2 + 0x20) - *(long *)(param_2 + 8)) <
        (ulong)(lVar4 - *(long *)(param_2 + 8))) {
      lVar4 = *(long *)(param_2 + 0x20);
    }
    uVar5 = 0;
    *(long *)(param_2 + 0x10) = lVar4;
    *(long *)(param_2 + 0x18) = lVar4;
    fputs_unlocked(param_1,_stdout);
    do {
      lVar4 = uVar5 * 8;
      uVar5 = uVar5 + 1;
      __printf_chk(2,&_LC6,*(undefined8 *)(lVar2 + lVar4));
    } while (uVar5 < (ulong)(lVar1 - lVar2) >> 3);
    pcVar3 = _stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pcVar3) {
      __overflow(_stdout,10);
      return;
    }
    _stdout->_IO_write_ptr = pcVar3 + 1;
    *pcVar3 = '\n';
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dired_outbuf(void *param_1,size_t param_2)

{
  dired_pos = dired_pos + param_2;
  fwrite_unlocked(param_1,1,param_2,_stdout);
  return;
}



void signal_setup(char param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  long in_FS_OFFSET;
  _union_1457 local_d8 [17];
  undefined4 local_50;
  long local_40;
  
  piVar3 = &sig_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == '\0') {
    do {
      while( true ) {
        iVar1 = *piVar3;
        iVar2 = sigismember((sigset_t *)caught_signals,iVar1);
        if (iVar2 == 0) break;
        piVar3 = piVar3 + 1;
        signal(iVar1,(__sighandler_t)0x0);
        if (piVar3 == (int *)&DAT_0010b310) goto LAB_001012eb;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)&DAT_0010b310);
  }
  else {
    piVar4 = &sig_4;
    sigemptyset((sigset_t *)caught_signals);
    do {
      iVar1 = *piVar4;
      sigaction(iVar1,(sigaction *)0x0,(sigaction *)local_d8);
      if (local_d8[0].sa_handler != (__sighandler_t)0x1) {
        sigaddset((sigset_t *)caught_signals,iVar1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)&DAT_0010b310);
    local_50 = 0x10000000;
    local_d8[1] = (_union_1457)caught_signals._0_8_;
    local_d8[2] = (_union_1457)caught_signals._8_8_;
    local_d8[3] = (_union_1457)caught_signals._16_8_;
    local_d8[4] = (_union_1457)caught_signals._24_8_;
    local_d8[5] = (_union_1457)caught_signals._32_8_;
    local_d8[6] = (_union_1457)caught_signals._40_8_;
    local_d8[7] = (_union_1457)caught_signals._48_8_;
    local_d8[8] = (_union_1457)caught_signals._56_8_;
    local_d8[9] = (_union_1457)caught_signals._64_8_;
    local_d8[10] = (_union_1457)caught_signals._72_8_;
    local_d8[0xb] = (_union_1457)caught_signals._80_8_;
    local_d8[0xc] = (_union_1457)caught_signals._88_8_;
    local_d8[0xd] = (_union_1457)caught_signals._96_8_;
    local_d8[0xe] = (_union_1457)caught_signals._104_8_;
    local_d8[0xf] = (_union_1457)caught_signals._112_8_;
    local_d8[0x10] = (_union_1457)caught_signals._120_8_;
    do {
      iVar1 = *piVar3;
      iVar2 = sigismember((sigset_t *)caught_signals,iVar1);
      if (iVar2 != 0) {
        local_d8[0].sa_handler = stophandler;
        if (iVar1 != 0x14) {
          local_d8[0].sa_handler = sighandler;
        }
        sigaction(iVar1,(sigaction *)local_d8,(sigaction *)0x0);
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)&DAT_0010b310);
  }
LAB_001012eb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void put_indicator(size_t *param_1)

{
  __pid_t _Var1;
  
  if (used_color == '\0') {
    used_color = '\x01';
    _Var1 = tcgetpgrp(1);
    if (-1 < _Var1) {
      signal_setup(1);
    }
    if (DAT_00111ac8 == 0) {
      put_indicator(&color_indicator);
      put_indicator(&DAT_00111ad0);
      put_indicator(&DAT_00111ab0);
    }
    else {
      put_indicator(&DAT_00111ac0);
    }
  }
  fwrite_unlocked((void *)param_1[1],*param_1,1,_stdout);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_signals(void)

{
  int __sig;
  long in_FS_OFFSET;
  sigset_t sStack_b8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  while ((interrupt_signal != 0 || (stop_signal_count != 0))) {
    if (used_color != '\0') {
      put_indicator(&color_indicator);
      put_indicator(&DAT_00111ab0);
    }
    fflush_unlocked(_stdout);
    sigprocmask(0,(sigset_t *)caught_signals,&sStack_b8);
    __sig = interrupt_signal;
    if (stop_signal_count == 0) {
      signal(interrupt_signal,(__sighandler_t)0x0);
    }
    else {
      stop_signal_count = stop_signal_count + -1;
      __sig = 0x13;
    }
    raise(__sig);
    sigprocmask(2,&sStack_b8,(sigset_t *)0x0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong quote_name_buf_constprop_0
                (undefined8 *param_1,uint *param_2,undefined8 param_3,int param_4,ulong *param_5,
                byte *param_6)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  bool bVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  unkbyte10 Var26;
  undefined4 uVar27;
  undefined4 uVar28;
  byte bVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  size_t sVar33;
  ushort **ppuVar34;
  uint *puVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  uint *puVar39;
  uint *puVar40;
  uint *puVar41;
  uint *puVar42;
  ulong unaff_R13;
  long in_FS_OFFSET;
  undefined4 uVar43;
  undefined1 auVar46 [16];
  undefined4 uVar47;
  short sVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  long lVar53;
  long lVar54;
  undefined4 uVar62;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined4 uVar63;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  uint *local_180;
  bool local_161;
  byte bStack_139;
  byte bStack_12a;
  byte bStack_11b;
  byte bStack_10c;
  byte bStack_fd;
  byte bStack_ee;
  byte bStack_df;
  byte bStack_d0;
  byte bStack_c1;
  byte bStack_b2;
  byte bStack_a3;
  byte bStack_94;
  byte bStack_85;
  byte bStack_76;
  byte bStack_67;
  wchar_t local_4c;
  mbstate_t local_48;
  long local_40;
  undefined1 auVar44 [12];
  undefined1 auVar45 [16];
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_180 = (uint *)*param_1;
  uVar30 = get_quoting_style(param_3);
  if ((uVar30 < 3 & qmark_funny_chars) == 0) {
    if (param_4 == 0) {
      uVar32 = strlen((char *)param_2);
      local_161 = false;
      local_180 = param_2;
    }
    else {
      bVar5 = false;
LAB_00101d32:
      uVar32 = quotearg_buffer(local_180,0x2000,param_2,0xffffffffffffffff,param_3);
      if (0x1fff < uVar32) {
        local_180 = (uint *)xmalloc(uVar32 + 1);
        quotearg_buffer(local_180,uVar32 + 1,param_2,0xffffffffffffffff,param_3);
      }
      local_161 = true;
      if ((byte)*param_2 == (byte)*local_180) {
        sVar33 = strlen((char *)param_2);
        local_161 = uVar32 != sVar33;
      }
      if (bVar5) goto LAB_00101bd0;
    }
    if (param_5 == (ulong *)0x0) {
      if (align_variable_outer_quotes == 0) {
        *param_6 = 0;
        goto LAB_00101b5a;
      }
LAB_00101b3d:
      bVar29 = (local_161 ^ 1U) & cwd_some_quoted;
      goto LAB_00101b4b;
    }
    sVar33 = __ctype_get_mb_cur_max();
    if (sVar33 < 2) {
      puVar1 = (uint *)((long)local_180 + uVar32);
      if (local_180 < puVar1) {
        ppuVar34 = __ctype_b_loc();
        puVar2 = *ppuVar34;
        if (uVar32 - 1 < 0xf) {
          unaff_R13 = 0;
          puVar35 = local_180;
        }
        else {
          lVar53 = 0;
          lVar54 = 0;
          puVar35 = (uint *)((uVar32 & 0xfffffffffffffff0) + (long)local_180);
          puVar42 = local_180;
          do {
            uVar30 = *puVar42;
            uVar19 = puVar42[1];
            uVar20 = puVar42[2];
            uVar21 = puVar42[3];
            puVar42 = puVar42 + 4;
            bStack_67 = (byte)(uVar30 >> 8);
            bStack_76 = (byte)(uVar30 >> 0x10);
            bStack_85 = (byte)(uVar30 >> 0x18);
            bStack_94 = (byte)uVar19;
            bStack_a3 = (byte)(uVar19 >> 8);
            bStack_b2 = (byte)(uVar19 >> 0x10);
            bStack_c1 = (byte)(uVar19 >> 0x18);
            bStack_d0 = (byte)uVar20;
            bStack_df = (byte)(uVar20 >> 8);
            bStack_ee = (byte)(uVar20 >> 0x10);
            bStack_fd = (byte)(uVar20 >> 0x18);
            bStack_10c = (byte)uVar21;
            bStack_12a = (byte)(uVar21 >> 0x10);
            bVar5 = (puVar2[bStack_76] & _UNK_00111c34) != 0;
            bVar6 = (puVar2[bStack_85] & _UNK_00111c36) != 0;
            bStack_11b = (byte)(uVar21 >> 8);
            bStack_139 = (byte)(uVar21 >> 0x18);
            uVar3 = (ushort)((puVar2[uVar30 & 0xff] & __LC7) != 0);
            uVar4 = (ushort)((puVar2[bStack_67] & _UNK_00111c32) != 0);
            sVar52 = -(ushort)bVar6;
            uVar7 = (ushort)((puVar2[bStack_94] & _UNK_00111c38) != 0);
            uVar8 = (ushort)((puVar2[bStack_a3] & _UNK_00111c3a) != 0);
            uVar9 = (ushort)((puVar2[bStack_b2] & _UNK_00111c3c) != 0);
            uVar10 = (ushort)((puVar2[bStack_c1] & _UNK_00111c3e) != 0);
            uVar11 = (ushort)(uVar3 != 0);
            uVar13 = (ushort)bVar6;
            uVar15 = (ushort)(uVar7 != 0);
            uVar17 = (ushort)(uVar8 != 0);
            bVar6 = (puVar2[bStack_ee] & _UNK_00111c34) != 0;
            bVar23 = (puVar2[bStack_fd] & _UNK_00111c36) != 0;
            uVar27 = CONCAT22(-uVar13,sVar52);
            Var26 = CONCAT64(CONCAT42(uVar27,-(ushort)bVar5),CONCAT22(-(ushort)bVar5,sVar52));
            auVar24._4_8_ = (long)((unkuint10)Var26 >> 0x10);
            auVar24._2_2_ = -(ushort)(uVar4 != 0);
            auVar24._0_2_ = -uVar4;
            uVar62 = CONCAT22(-uVar11,-uVar3);
            auVar55._4_12_ = auVar24;
            uVar47 = CONCAT22(-uVar15,-uVar7);
            auVar48._0_8_ = CONCAT26(-uVar17,CONCAT24(-uVar8,uVar47));
            auVar48._8_2_ = -uVar9;
            auVar48._10_2_ = -(ushort)(uVar9 != 0);
            auVar49._12_2_ = -uVar10;
            auVar49._0_12_ = auVar48;
            auVar49._14_2_ = -(ushort)(uVar10 != 0);
            iVar31 = (int)((unkuint10)Var26 >> 0x10);
            uVar3 = (ushort)((puVar2[bStack_d0] & __LC7) != 0);
            uVar4 = (ushort)((puVar2[bStack_df] & _UNK_00111c32) != 0);
            sVar52 = -(ushort)bVar23;
            uVar7 = (ushort)((puVar2[bStack_10c] & _UNK_00111c38) != 0);
            uVar8 = (ushort)((puVar2[bStack_11b] & _UNK_00111c3a) != 0);
            uVar9 = (ushort)((puVar2[bStack_12a] & _UNK_00111c3c) != 0);
            uVar10 = (ushort)((puVar2[bStack_139] & _UNK_00111c3e) != 0);
            uVar12 = (ushort)(uVar3 != 0);
            uVar14 = (ushort)bVar23;
            uVar16 = (ushort)(uVar7 != 0);
            uVar18 = (ushort)(uVar8 != 0);
            uVar28 = CONCAT22(-uVar14,sVar52);
            Var26 = CONCAT64(CONCAT42(uVar28,-(ushort)bVar6),CONCAT22(-(ushort)bVar6,sVar52));
            auVar25._4_8_ = (long)((unkuint10)Var26 >> 0x10);
            auVar25._2_2_ = -(ushort)(uVar4 != 0);
            auVar25._0_2_ = -uVar4;
            uVar63 = CONCAT22(-uVar12,-uVar3);
            auVar58._4_12_ = auVar25;
            uVar43 = CONCAT22(-uVar16,-uVar7);
            auVar44._0_8_ = CONCAT26(-uVar18,CONCAT24(-uVar8,uVar43));
            auVar44._8_2_ = -uVar9;
            auVar44._10_2_ = -(ushort)(uVar9 != 0);
            auVar45._12_2_ = -uVar10;
            auVar45._0_12_ = auVar44;
            auVar45._14_2_ = -(ushort)(uVar10 != 0);
            auVar60._4_4_ = -(uint)(iVar31 < 0);
            auVar60._0_4_ = iVar31;
            auVar60._8_4_ = uVar27;
            auVar60._12_4_ = -(uint)(uVar13 != 0);
            auVar56._0_8_ = auVar55._0_8_;
            auVar56._8_4_ = auVar24._0_4_;
            auVar56._12_4_ = -(uint)(auVar24._0_4_ < 0);
            auVar57._4_4_ = -(uint)(auVar48._8_4_ < 0);
            auVar57._0_4_ = auVar48._8_4_;
            auVar57._8_4_ = auVar49._12_4_;
            auVar57._12_4_ = -(uint)(auVar49._12_4_ < 0);
            auVar50._8_4_ = (int)((ulong)auVar48._0_8_ >> 0x20);
            auVar50._0_8_ = auVar48._0_8_;
            auVar50._12_4_ = -(uint)(uVar17 != 0);
            iVar31 = (int)((unkuint10)Var26 >> 0x10);
            auVar51._4_4_ = -(uint)(iVar31 < 0);
            auVar51._0_4_ = iVar31;
            auVar51._8_4_ = uVar28;
            auVar51._12_4_ = -(uint)(uVar14 != 0);
            auVar59._0_8_ = auVar58._0_8_;
            auVar59._8_4_ = auVar25._0_4_;
            auVar59._12_4_ = -(uint)(auVar25._0_4_ < 0);
            auVar61._8_4_ = (int)((ulong)auVar44._0_8_ >> 0x20);
            auVar61._0_8_ = auVar44._0_8_;
            auVar61._12_4_ = -(uint)(uVar18 != 0);
            auVar46._0_8_ = CONCAT44(-(uint)(auVar44._8_4_ < 0),auVar44._8_4_);
            auVar46._8_4_ = auVar45._12_4_;
            auVar46._12_4_ = -(uint)(auVar45._12_4_ < 0);
            lVar53 = (lVar53 - auVar46._0_8_) +
                     ((SUB168(auVar51 & __LC8,0) - CONCAT44(-(uint)(uVar12 != 0),uVar63)) -
                     CONCAT44(-(uint)(uVar16 != 0),uVar43)) +
                     (SUB168(auVar57 & __LC8,0) - CONCAT44(-(uint)(uVar15 != 0),uVar47)) +
                     (SUB168(auVar60 & __LC8,0) - CONCAT44(-(uint)(uVar11 != 0),uVar62));
            lVar54 = (lVar54 - auVar46._8_8_) +
                     ((SUB168(auVar51 & __LC8,8) - auVar59._8_8_) - auVar61._8_8_) +
                     (SUB168(auVar57 & __LC8,8) - auVar50._8_8_) +
                     (SUB168(auVar60 & __LC8,8) - auVar56._8_8_);
          } while (puVar35 != puVar42);
          unaff_R13 = lVar53 + lVar54;
          if (uVar32 == (uVar32 & 0xfffffffffffffff0)) goto joined_r0x00101f4c;
        }
        unaff_R13 = (unaff_R13 + 1) - (ulong)((puVar2[(byte)*puVar35] & 0x4000) == 0);
        if ((((((uint *)((long)puVar35 + 1) < puVar1) &&
              (unaff_R13 = (unaff_R13 + 1) -
                           (ulong)((puVar2[*(byte *)((long)puVar35 + 1)] & 0x4000) == 0),
              (uint *)((long)puVar35 + 2) < puVar1)) &&
             ((unaff_R13 = (unaff_R13 + 1) -
                           (ulong)((puVar2[*(byte *)((long)puVar35 + 2)] & 0x4000) == 0),
              (uint *)((long)puVar35 + 3) < puVar1 &&
              (((unaff_R13 = (unaff_R13 + 1) -
                             (ulong)((puVar2[*(byte *)((long)puVar35 + 3)] & 0x4000) == 0),
                puVar35 + 1 < puVar1 &&
                (unaff_R13 = (unaff_R13 + 1) - (ulong)((puVar2[(byte)puVar35[1]] & 0x4000) == 0),
                (uint *)((long)puVar35 + 5) < puVar1)) &&
               (unaff_R13 = (unaff_R13 + 1) -
                            (ulong)((puVar2[*(byte *)((long)puVar35 + 5)] & 0x4000) == 0),
               (uint *)((long)puVar35 + 6) < puVar1)))))) &&
            ((unaff_R13 = (unaff_R13 + 1) -
                          (ulong)((puVar2[*(byte *)((long)puVar35 + 6)] & 0x4000) == 0),
             (uint *)((long)puVar35 + 7) < puVar1 &&
             (unaff_R13 = (unaff_R13 + 1) -
                          (ulong)((puVar2[*(byte *)((long)puVar35 + 7)] & 0x4000) == 0),
             puVar35 + 2 < puVar1)))) &&
           ((unaff_R13 = (unaff_R13 + 1) - (ulong)((puVar2[(byte)puVar35[2]] & 0x4000) == 0),
            (uint *)((long)puVar35 + 9) < puVar1 &&
            (((unaff_R13 = (unaff_R13 + 1) -
                           (ulong)((puVar2[*(byte *)((long)puVar35 + 9)] & 0x4000) == 0),
              (uint *)((long)puVar35 + 10) < puVar1 &&
              (unaff_R13 = (unaff_R13 + 1) -
                           (ulong)((puVar2[*(byte *)((long)puVar35 + 10)] & 0x4000) == 0),
              (uint *)((long)puVar35 + 0xb) < puVar1)) &&
             ((unaff_R13 = (unaff_R13 + 1) -
                           (ulong)((puVar2[*(byte *)((long)puVar35 + 0xb)] & 0x4000) == 0),
              puVar35 + 3 < puVar1 &&
              ((unaff_R13 = (unaff_R13 + 1) - (ulong)((puVar2[(byte)puVar35[3]] & 0x4000) == 0),
               (uint *)((long)puVar35 + 0xd) < puVar1 &&
               (unaff_R13 = (unaff_R13 + 1) -
                            (ulong)((puVar2[*(byte *)((long)puVar35 + 0xd)] & 0x4000) == 0),
               (uint *)((long)puVar35 + 0xe) < puVar1)))))))))) {
          unaff_R13 = (unaff_R13 + 1) -
                      (ulong)((puVar2[*(byte *)((long)puVar35 + 0xe)] & 0x4000) == 0);
        }
      }
      else {
        unaff_R13 = 0;
      }
    }
    else {
      iVar31 = mbsnwidth(local_180,uVar32,3);
      unaff_R13 = (ulong)iVar31;
    }
joined_r0x00101f4c:
    if (align_variable_outer_quotes != 0) goto LAB_00101b3d;
    *param_6 = 0;
  }
  else {
    if (param_4 != 0) {
      bVar5 = true;
      goto LAB_00101d32;
    }
    uVar32 = strlen((char *)param_2);
    if (0x1fff < uVar32) {
      local_180 = (uint *)xmalloc(uVar32 + 1);
    }
    memcpy(local_180,param_2,uVar32 + 1);
    local_161 = false;
LAB_00101bd0:
    unaff_R13 = uVar32;
    sVar33 = __ctype_get_mb_cur_max();
    puVar1 = (uint *)((long)local_180 + unaff_R13);
    if (sVar33 < 2) {
      uVar32 = unaff_R13;
      if (local_180 < puVar1) {
        ppuVar34 = __ctype_b_loc();
        puVar35 = local_180;
        do {
          if ((*(byte *)((long)*ppuVar34 + (ulong)(byte)*puVar35 * 2 + 1) & 0x40) == 0) {
            *(byte *)puVar35 = 0x3f;
          }
          puVar35 = (uint *)((long)puVar35 + 1);
        } while (puVar35 != puVar1);
      }
    }
    else if (local_180 < puVar1) {
      unaff_R13 = 0;
      puVar35 = local_180;
      puVar42 = local_180;
      do {
        bVar29 = (byte)*puVar42;
        puVar39 = (uint *)((long)puVar35 + 1);
        if ((char)bVar29 < '`') {
          if ('@' < (char)bVar29) goto LAB_00101c20;
          if ('#' < (char)bVar29) {
            if (0x1a < (byte)(bVar29 - 0x25)) goto LAB_00101c4d;
            goto LAB_00101c20;
          }
          if ('\x1f' < (char)bVar29) goto LAB_00101c20;
LAB_00101c4d:
          local_48.__count = 0;
          local_48.__value = (_union_27)0x0;
          while (uVar32 = rpl_mbrtoc32(&local_4c,puVar42,(long)puVar1 - (long)puVar42,&local_48),
                uVar32 != 0xffffffffffffffff) {
            if (uVar32 == 0xfffffffffffffffe) {
              unaff_R13 = unaff_R13 + 1;
              *(byte *)puVar35 = 0x3f;
              goto LAB_00101fb5;
            }
            uVar37 = 1;
            if (uVar32 != 0) {
              uVar37 = uVar32;
            }
            iVar31 = wcwidth(local_4c);
            if (iVar31 < 0) {
              *(byte *)puVar35 = 0x3f;
              unaff_R13 = unaff_R13 + 1;
            }
            else {
              if (uVar37 - 1 < 7) {
                uVar32 = 0;
LAB_00101d08:
                do {
                  *(byte *)((long)puVar35 + uVar32) = *(byte *)((long)puVar42 + uVar32);
                  uVar32 = uVar32 + 1;
                } while (uVar37 != uVar32);
              }
              else {
                uVar32 = 0;
                if ((ulong)((long)puVar35 - (long)((long)puVar42 + 1)) < 0xf) goto LAB_00101d08;
                if (uVar37 - 1 < 0xf) {
                  uVar36 = 0;
                  uVar32 = uVar37;
                  puVar40 = puVar35;
                  puVar41 = puVar42;
LAB_00101e77:
                  *(undefined8 *)((long)puVar35 + uVar36) = *(undefined8 *)((long)puVar42 + uVar36);
                  uVar38 = uVar32 & 0xfffffffffffffff8;
                  puVar41 = (uint *)((long)puVar41 + uVar38);
                  puVar40 = (uint *)((long)puVar40 + uVar38);
                  uVar38 = uVar32 - uVar38;
                  if ((uVar32 & 7) != 0) {
LAB_00101e99:
                    *(byte *)puVar40 = (byte)*puVar41;
                    if (((((uVar38 != 1) &&
                          (*(byte *)((long)puVar40 + 1) = *(byte *)((long)puVar41 + 1), uVar38 != 2)
                          ) && (*(byte *)((long)puVar40 + 2) = *(byte *)((long)puVar41 + 2),
                               uVar38 != 3)) &&
                        ((*(byte *)((long)puVar40 + 3) = *(byte *)((long)puVar41 + 3), uVar38 != 4
                         && (*(byte *)(puVar40 + 1) = (byte)puVar41[1], uVar38 != 5)))) &&
                       (*(byte *)((long)puVar40 + 5) = *(byte *)((long)puVar41 + 5), uVar38 != 6)) {
                      puVar39 = (uint *)((long)puVar35 + uVar37);
                      unaff_R13 = unaff_R13 + (long)iVar31;
                      *(byte *)((long)puVar40 + 6) = *(byte *)((long)puVar41 + 6);
                      goto LAB_00101c7d;
                    }
                  }
                }
                else {
                  uVar36 = uVar37 & 0xfffffffffffffff0;
                  do {
                    uVar22 = *(undefined8 *)((byte *)((long)puVar42 + uVar32) + 8);
                    *(undefined8 *)((long)puVar35 + uVar32) =
                         *(undefined8 *)((long)puVar42 + uVar32);
                    *(undefined8 *)((byte *)((long)puVar35 + uVar32) + 8) = uVar22;
                    uVar32 = uVar32 + 0x10;
                  } while (uVar36 != uVar32);
                  puVar41 = (uint *)((long)puVar42 + uVar36);
                  puVar40 = (uint *)((long)puVar35 + uVar36);
                  uVar38 = uVar37 - uVar36;
                  if (uVar37 != uVar36) {
                    uVar32 = uVar38;
                    if (6 < uVar38 - 1) goto LAB_00101e77;
                    goto LAB_00101e99;
                  }
                }
              }
              puVar39 = (uint *)((long)puVar35 + uVar37);
              unaff_R13 = unaff_R13 + (long)iVar31;
            }
LAB_00101c7d:
            puVar42 = (uint *)((long)puVar42 + uVar37);
            iVar31 = mbsinit(&local_48);
            if (iVar31 != 0) goto LAB_00101c2e;
            puVar35 = puVar39;
            puVar39 = (uint *)((long)puVar39 + 1);
          }
          puVar42 = (uint *)((long)puVar42 + 1);
          unaff_R13 = unaff_R13 + 1;
          *(byte *)puVar35 = 0x3f;
        }
        else {
          if (0x1d < (byte)(bVar29 + 0x9f)) goto LAB_00101c4d;
LAB_00101c20:
          *(byte *)puVar35 = bVar29;
          puVar42 = (uint *)((long)puVar42 + 1);
          unaff_R13 = unaff_R13 + 1;
        }
LAB_00101c2e:
        puVar35 = puVar39;
      } while (puVar42 < puVar1);
LAB_00101fb5:
      uVar32 = (long)puVar39 - (long)local_180;
    }
    else {
      unaff_R13 = 0;
      uVar32 = 0;
    }
    bVar29 = align_variable_outer_quotes;
    if (align_variable_outer_quotes != 0) goto LAB_00101b3d;
LAB_00101b4b:
    *param_6 = bVar29;
    if (param_5 == (ulong *)0x0) goto LAB_00101b5a;
  }
  *param_5 = unaff_R13;
LAB_00101b5a:
  *param_1 = local_180;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar32;
}



long quote_name_width(undefined1 *param_1,undefined8 param_2,undefined4 param_3)

{
  long in_FS_OFFSET;
  byte local_2039;
  undefined1 *local_2038;
  long local_2030;
  undefined1 local_2028 [8200];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2038 = local_2028;
  quote_name_buf_constprop_0(&local_2038,param_1,param_2,param_3,&local_2030,&local_2039);
  if ((local_2038 != param_1) && (local_2038 != local_2028)) {
    free(local_2038);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_2039 + local_2030;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long length_of_file_name_and_frills(undefined8 *param_1)

{
  char cVar1;
  long lVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined1 auStack_2b8 [664];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (print_inode == '\0') {
    lVar5 = 0;
LAB_001021c2:
    if (print_block_size != '\0') {
      if (format != 4) goto LAB_00102141;
      lVar2 = 2;
      if (*(char *)(param_1 + 0x17) != '\0') {
        pcVar4 = (char *)human_readable(param_1[0xb],auStack_2b8,human_output_opts,0x200,
                                        output_block_size);
        sVar3 = strlen(pcVar4);
        lVar2 = sVar3 + 1;
      }
LAB_0010214c:
      lVar5 = lVar5 + lVar2;
    }
    if (print_scontext != '\0') {
      if (format == 4) {
        sVar3 = strlen((char *)param_1[0x16]);
      }
      else {
LAB_00102229:
        sVar3 = (size_t)scontext_width;
      }
      lVar5 = lVar5 + sVar3 + 1;
      lVar2 = param_1[0x19];
      goto joined_r0x00102241;
    }
  }
  else {
    if (format == 4) {
      pcVar4 = (char *)umaxtostr(param_1[4],auStack_2b8);
      sVar3 = strlen(pcVar4);
      lVar5 = sVar3 + 1;
      goto LAB_001021c2;
    }
    lVar5 = (long)inode_number_width + 1;
    if (print_block_size != '\0') {
LAB_00102141:
      lVar2 = (long)block_size_width + 1;
      goto LAB_0010214c;
    }
    if (print_scontext != '\0') goto LAB_00102229;
  }
  lVar2 = param_1[0x19];
joined_r0x00102241:
  if (lVar2 == 0) {
    lVar2 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
  }
  lVar5 = lVar5 + lVar2;
  if (indicator_style != 0) {
    cVar1 = get_type_indicator(*(undefined1 *)(param_1 + 0x17),*(undefined4 *)(param_1 + 6),
                               *(undefined4 *)(param_1 + 0x15));
    lVar5 = (lVar5 + 1) - (ulong)(cVar1 == '\0');
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void rev_xstrcoll_version(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int iVar1;
  
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  iVar1 = filevercmp(__s1,__s2);
  if (iVar1 == 0) {
    strcmp(__s1,__s2);
    return;
  }
  return;
}



void strcmp_size(undefined8 *param_1,undefined8 *param_2)

{
  if ((long)param_1[9] < (long)param_2[9] == (long)param_2[9] < (long)param_1[9]) {
    strcmp((char *)*param_1,(char *)*param_2);
    return;
  }
  return;
}



void rev_strcmp_size(undefined8 *param_1,undefined8 *param_2)

{
  if ((long)param_2[9] < (long)param_1[9] == (long)param_1[9] < (long)param_2[9]) {
    strcmp((char *)*param_2,(char *)*param_1);
    return;
  }
  return;
}



void xstrcoll_version(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int iVar1;
  
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  iVar1 = filevercmp(__s1,__s2);
  if (iVar1 == 0) {
    strcmp(__s1,__s2);
    return;
  }
  return;
}



void rev_strcmp_btime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 == 0) {
    strcmp((char *)*param_2,(char *)*param_1);
    return;
  }
  return;
}



void strcmp_ctime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_1[0x11] < (long)param_2[0x11]) -
      (uint)((long)param_2[0x11] < (long)param_1[0x11])) +
      ((uint)((long)param_1[0x10] < (long)param_2[0x10]) -
      (uint)((long)param_2[0x10] < (long)param_1[0x10])) * 2 == 0) {
    strcmp((char *)*param_1,(char *)*param_2);
    return;
  }
  return;
}



void rev_strcmp_mtime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 == 0) {
    strcmp((char *)*param_2,(char *)*param_1);
    return;
  }
  return;
}



void strcmp_atime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_1[0xd] < (long)param_2[0xd]) -
      (uint)((long)param_2[0xd] < (long)param_1[0xd])) +
      ((uint)((long)param_1[0xc] < (long)param_2[0xc]) -
      (uint)((long)param_2[0xc] < (long)param_1[0xc])) * 2 == 0) {
    strcmp((char *)*param_1,(char *)*param_2);
    return;
  }
  return;
}



void rev_strcmp_atime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_2[0xd] < (long)param_1[0xd]) -
      (uint)((long)param_1[0xd] < (long)param_2[0xd])) +
      ((uint)((long)param_2[0xc] < (long)param_1[0xc]) -
      (uint)((long)param_1[0xc] < (long)param_2[0xc])) * 2 == 0) {
    strcmp((char *)*param_2,(char *)*param_1);
    return;
  }
  return;
}



void strcmp_btime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 == 0) {
    strcmp((char *)*param_1,(char *)*param_2);
    return;
  }
  return;
}



void rev_strcmp_ctime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_2[0x11] < (long)param_1[0x11]) -
      (uint)((long)param_1[0x11] < (long)param_2[0x11])) +
      ((uint)((long)param_2[0x10] < (long)param_1[0x10]) -
      (uint)((long)param_1[0x10] < (long)param_2[0x10])) * 2 == 0) {
    strcmp((char *)*param_2,(char *)*param_1);
    return;
  }
  return;
}



void strcmp_mtime(undefined8 *param_1,undefined8 *param_2)

{
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 == 0) {
    strcmp((char *)*param_1,(char *)*param_2);
    return;
  }
  return;
}



void xstrcoll_name(undefined8 *param_1,undefined8 *param_2)

{
  char *__s2;
  char *__s1;
  int *piVar1;
  
  __s2 = (char *)*param_2;
  __s1 = (char *)*param_1;
  piVar1 = __errno_location();
  *piVar1 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_xstrcoll_name(undefined8 *param_1,undefined8 *param_2)

{
  char *__s2;
  char *__s1;
  int *piVar1;
  
  __s2 = (char *)*param_1;
  __s1 = (char *)*param_2;
  piVar1 = __errno_location();
  *piVar1 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_xstrcoll_size(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if ((long)param_2[9] < (long)param_1[9] == (long)param_1[9] < (long)param_2[9]) {
    __s1 = (char *)*param_2;
    __s2 = (char *)*param_1;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void xstrcoll_size(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if ((long)param_1[9] < (long)param_2[9] == (long)param_2[9] < (long)param_1[9]) {
    __s1 = (char *)*param_1;
    __s2 = (char *)*param_2;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void xstrcoll_mtime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 == 0) {
    __s1 = (char *)*param_1;
    __s2 = (char *)*param_2;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void xstrcoll_ctime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_1[0x11] < (long)param_2[0x11]) -
      (uint)((long)param_2[0x11] < (long)param_1[0x11])) +
      ((uint)((long)param_1[0x10] < (long)param_2[0x10]) -
      (uint)((long)param_2[0x10] < (long)param_1[0x10])) * 2 == 0) {
    __s1 = (char *)*param_1;
    __s2 = (char *)*param_2;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void xstrcoll_atime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_1[0xd] < (long)param_2[0xd]) -
      (uint)((long)param_2[0xd] < (long)param_1[0xd])) +
      ((uint)((long)param_1[0xc] < (long)param_2[0xc]) -
      (uint)((long)param_2[0xc] < (long)param_1[0xc])) * 2 == 0) {
    __s1 = (char *)*param_1;
    __s2 = (char *)*param_2;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void rev_xstrcoll_mtime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 == 0) {
    __s1 = (char *)*param_2;
    __s2 = (char *)*param_1;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void xstrcoll_btime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 == 0) {
    __s1 = (char *)*param_1;
    __s2 = (char *)*param_2;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void rev_xstrcoll_btime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 == 0) {
    __s1 = (char *)*param_2;
    __s2 = (char *)*param_1;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void rev_xstrcoll_ctime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_2[0x11] < (long)param_1[0x11]) -
      (uint)((long)param_1[0x11] < (long)param_2[0x11])) +
      ((uint)((long)param_2[0x10] < (long)param_1[0x10]) -
      (uint)((long)param_1[0x10] < (long)param_2[0x10])) * 2 == 0) {
    __s1 = (char *)*param_2;
    __s2 = (char *)*param_1;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void rev_xstrcoll_atime(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  
  if (((uint)((long)param_2[0xd] < (long)param_1[0xd]) -
      (uint)((long)param_1[0xd] < (long)param_2[0xd])) +
      ((uint)((long)param_2[0xc] < (long)param_1[0xc]) -
      (uint)((long)param_1[0xc] < (long)param_2[0xc])) * 2 == 0) {
    __s1 = (char *)*param_2;
    __s2 = (char *)*param_1;
    piVar1 = __errno_location();
    *piVar1 = 0;
    strcoll(__s1,__s2);
    return;
  }
  return;
}



void rev_xstrcoll_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  
  __s = (char *)*param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
  }
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = strcoll(__s1,__s2);
  if (iVar1 == 0) {
    strcoll(__s,__s_00);
    return;
  }
  return;
}



void sort_files(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = cwd_n_used;
  if (sorted_file_alloc < (ulong)((cwd_n_used >> 1) + cwd_n_used)) {
    free(sorted_file);
    sorted_file = (long *)xinmalloc(lVar9,0x18);
    sorted_file_alloc = cwd_n_used * 3;
    if (cwd_n_used < 1) goto LAB_00102d8b;
LAB_00102bba:
    lVar9 = cwd_n_used;
    plVar2 = sorted_file + cwd_n_used;
    plVar5 = sorted_file;
    lVar8 = cwd_file;
    do {
      *plVar5 = lVar8;
      plVar5 = plVar5 + 1;
      lVar8 = lVar8 + 0xd0;
    } while (plVar2 != plVar5);
    if (sort_type != 2) goto LAB_00102bf2;
LAB_00102ceb:
    lVar8 = 0;
    do {
      while( true ) {
        puVar3 = (undefined8 *)sorted_file[lVar8];
        if (puVar3[0x19] != 0) break;
        lVar8 = lVar8 + 1;
        uVar7 = quote_name_width(*puVar3,filename_quoting_options,
                                 *(undefined4 *)((long)puVar3 + 0xc4));
        lVar9 = cwd_n_used;
        puVar3[0x19] = uVar7;
        if (lVar9 <= lVar8) goto LAB_00102c00;
      }
      lVar8 = lVar8 + 1;
      puVar3[0x19] = puVar3[0x19];
    } while (lVar8 < lVar9);
  }
  else {
    if (0 < cwd_n_used) goto LAB_00102bba;
LAB_00102d8b:
    lVar9 = cwd_n_used;
    if (sort_type == 2) goto LAB_00102c09;
LAB_00102bf2:
    if (((line_length != 0) && (format - 2U < 2)) && (0 < lVar9)) goto LAB_00102ceb;
  }
LAB_00102c00:
  if (sort_type == 6) {
    return;
  }
LAB_00102c09:
  iVar4 = _setjmp((__jmp_buf_tag *)failed_strcoll);
  lVar9 = cwd_n_used;
  plVar2 = sorted_file;
  uVar1 = sort_type;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    if (sort_type == 4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("sort_type != sort_version","src/ls.c",0x1017,"sort_files");
    }
    if (0 < cwd_n_used) {
      plVar5 = sorted_file + cwd_n_used;
      plVar6 = sorted_file;
      lVar8 = cwd_file;
      do {
        *plVar6 = lVar8;
        plVar6 = plVar6 + 1;
        lVar8 = lVar8 + 0xd0;
      } while (plVar5 != plVar6);
    }
    iVar4 = 1;
  }
  if (uVar1 == 5) {
    uVar1 = time_type + 5;
  }
  mpsort(plVar2,lVar9,
         *(undefined8 *)
          (sort_functions +
          ((ulong)directories_first +
          ((ulong)sort_reverse + ((long)iVar4 + (ulong)uVar1 * 2) * 2) * 2) * 8));
  return;
}



int strcmp_width(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = param_1[0x19];
  if (lVar2 == 0) {
    lVar2 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
  }
  lVar1 = param_2[0x19];
  if (lVar1 == 0) {
    lVar1 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
  }
  iVar3 = (int)lVar2 - (int)lVar1;
  if (iVar3 == 0) {
    iVar3 = strcmp((char *)*param_1,(char *)*param_2);
    return iVar3;
  }
  return iVar3;
}



int rev_strcmp_width(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = param_2[0x19];
  if (lVar2 == 0) {
    lVar2 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
  }
  lVar1 = param_1[0x19];
  if (lVar1 == 0) {
    lVar1 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
  }
  iVar3 = (int)lVar2 - (int)lVar1;
  if (iVar3 == 0) {
    iVar3 = strcmp((char *)*param_2,(char *)*param_1);
    return iVar3;
  }
  return iVar3;
}



void rev_strcmp_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s = (char *)*param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_00102f4c;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
LAB_00102f4c:
  strcmp(__s,__s_00);
  return;
}



void strcmp_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  
  __s = (char *)*param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_00102fcc;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
LAB_00102fcc:
  strcmp(__s,__s_00);
  return;
}



int rev_xstrcoll_width(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = param_2[0x19];
  if (lVar3 == 0) {
    lVar3 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
  }
  lVar2 = param_1[0x19];
  if (lVar2 == 0) {
    lVar2 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
  }
  iVar4 = (int)lVar3 - (int)lVar2;
  if (iVar4 == 0) {
    piVar1 = __errno_location();
    __s1 = (char *)*param_2;
    __s2 = (char *)*param_1;
    *piVar1 = 0;
    iVar4 = strcoll(__s1,__s2);
    return iVar4;
  }
  return iVar4;
}



int xstrcoll_width(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = param_1[0x19];
  if (lVar3 == 0) {
    lVar3 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
  }
  lVar2 = param_2[0x19];
  if (lVar2 == 0) {
    lVar2 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
  }
  iVar4 = (int)lVar3 - (int)lVar2;
  if (iVar4 == 0) {
    piVar1 = __errno_location();
    __s1 = (char *)*param_1;
    __s2 = (char *)*param_2;
    *piVar1 = 0;
    iVar4 = strcoll(__s1,__s2);
    return iVar4;
  }
  return iVar4;
}



void xstrcoll_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  
  __s = (char *)*param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
  }
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = strcoll(__s1,__s2);
  if (iVar1 == 0) {
    strcoll(__s,__s_00);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void format_user_or_group(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  bool bVar5;
  
  if (param_1 != (char *)0x0) {
    iVar2 = gnu_mbswidth(param_1,3);
    iVar4 = 0;
    if (-1 < iVar2) {
      iVar2 = (int)param_3 - iVar2;
      iVar4 = 0;
      if (-1 < iVar2) {
        iVar4 = iVar2;
      }
    }
    sVar3 = strlen(param_1);
    dired_outbuf(param_1,sVar3);
    do {
      dired_pos = dired_pos + 1;
      pcVar1 = _stdout->_IO_write_ptr;
      if (pcVar1 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = ' ';
      }
      else {
        __overflow(_stdout,0x20);
      }
      bVar5 = iVar4 != 0;
      iVar4 = iVar4 + -1;
    } while (bVar5);
    return;
  }
  iVar4 = __printf_chk(2,"%*ju ",param_3,param_2);
  dired_pos = dired_pos + iVar4;
  return;
}



void extract_dirs_from_files(long param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  char *pcVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  void *__ptr;
  long *plVar10;
  long lVar11;
  
  if (param_1 == 0) {
    lVar6 = cwd_n_used;
    if (cwd_n_used < 1) {
      cwd_n_used = 0;
      return;
    }
    do {
      lVar6 = lVar6 + -1;
      plVar5 = (long *)sorted_file[lVar6];
      if (((int)plVar5[0x15] == 3) || ((int)plVar5[0x15] == 9)) {
        lVar8 = plVar5[1];
        lVar11 = *plVar5;
        plVar10 = (long *)xmalloc(0x20);
        if (lVar8 != 0) {
          lVar8 = xstrdup(lVar8);
        }
        plVar10[1] = lVar8;
        if (lVar11 != 0) {
          lVar11 = xstrdup(lVar11);
        }
        lVar8 = plVar5[0x15];
        *plVar10 = lVar11;
        *(undefined1 *)(plVar10 + 2) = param_2;
        plVar10[3] = (long)pending_dirs;
        pending_dirs = plVar10;
        if ((int)lVar8 == 9) {
          free((void *)*plVar5);
          free((void *)plVar5[1]);
          free((void *)plVar5[2]);
        }
      }
    } while (lVar6 != 0);
  }
  else {
    if (active_dir_set != 0) {
      plVar5 = (long *)xmalloc(0x20);
      lVar6 = xstrdup(param_1);
      *plVar5 = 0;
      plVar5[1] = lVar6;
      *(undefined1 *)(plVar5 + 2) = 0;
      plVar5[3] = (long)pending_dirs;
      pending_dirs = plVar5;
    }
    lVar6 = cwd_n_used;
    if (cwd_n_used < 1) {
      cwd_n_used = 0;
      return;
    }
    do {
      while( true ) {
        lVar6 = lVar6 + -1;
        puVar3 = (undefined8 *)sorted_file[lVar6];
        if ((*(int *)(puVar3 + 0x15) == 9) || (*(int *)(puVar3 + 0x15) == 3)) break;
LAB_001032d0:
        if (lVar6 == 0) goto LAB_001033a0;
      }
      pcVar4 = (char *)*puVar3;
      pcVar7 = (char *)last_component(pcVar4);
      if (*pcVar7 == '.') {
        if ((pcVar7[(ulong)(pcVar7[1] == '.') + 1] == '/') ||
           (pcVar7[(ulong)(pcVar7[1] == '.') + 1] == '\0')) goto LAB_001032d0;
        cVar1 = *pcVar4;
      }
      else {
        cVar1 = *pcVar4;
      }
      if (cVar1 == '/') {
        lVar8 = puVar3[1];
        plVar5 = (long *)xmalloc(0x20);
        if (lVar8 != 0) {
          lVar8 = xstrdup(lVar8);
        }
        plVar5[1] = lVar8;
        lVar8 = xstrdup(pcVar4);
        *(undefined1 *)(plVar5 + 2) = param_2;
        *plVar5 = lVar8;
        plVar5[3] = (long)pending_dirs;
        pending_dirs = plVar5;
      }
      else {
        __ptr = (void *)file_name_concat(param_1,pcVar4,0);
        lVar8 = puVar3[1];
        plVar5 = (long *)xmalloc(0x20);
        if (lVar8 != 0) {
          lVar8 = xstrdup(lVar8);
        }
        plVar5[1] = lVar8;
        lVar8 = xstrdup(__ptr);
        *(undefined1 *)(plVar5 + 2) = param_2;
        *plVar5 = lVar8;
        plVar5[3] = (long)pending_dirs;
        pending_dirs = plVar5;
        free(__ptr);
      }
      if (*(int *)(puVar3 + 0x15) != 9) goto LAB_001032d0;
      free((void *)*puVar3);
      free((void *)puVar3[1]);
      free((void *)puVar3[2]);
    } while (lVar6 != 0);
  }
LAB_001033a0:
  plVar5 = sorted_file;
  if (cwd_n_used < 1) {
    cwd_n_used = 0;
    return;
  }
  plVar10 = sorted_file + cwd_n_used;
  cwd_n_used = 0;
  plVar9 = sorted_file;
  do {
    iVar2 = *(int *)(*plVar9 + 0xa8);
    plVar5[cwd_n_used] = *plVar9;
    plVar9 = plVar9 + 1;
    cwd_n_used = cwd_n_used + (ulong)(iVar2 != 9);
  } while (plVar9 != plVar10);
  return;
}



void xstrcoll_df_width(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char *__s1;
  char *__s2;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar5 = true;
    if (iVar3 == 9 || iVar3 == 3) goto LAB_001035d9;
  }
  else {
    bVar5 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar3 == 9 || iVar3 == 3) {
      if (!bVar5) {
        return;
      }
      goto LAB_001035d9;
    }
  }
  if (bVar5 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001035d9:
  if (param_1[0x19] == 0) {
    iVar3 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
    lVar1 = param_2[0x19];
  }
  else {
    lVar1 = param_2[0x19];
    iVar3 = (int)param_1[0x19];
  }
  if (lVar1 == 0) {
    iVar2 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
  }
  else {
    iVar2 = (int)lVar1;
  }
  if (iVar3 != iVar2) {
    return;
  }
  piVar4 = __errno_location();
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  *piVar4 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_strcmp_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103702;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103702;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103702:
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void xstrcoll_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s2;
  char *__s1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_001037c9;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_001037c9;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001037c9:
  __s2 = (char *)*param_2;
  __s1 = (char *)*param_1;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_xstrcoll_df_ctime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_0010388a;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_0010388a;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_0010388a:
  if (((uint)((long)param_2[0x11] < (long)param_1[0x11]) -
      (uint)((long)param_1[0x11] < (long)param_2[0x11])) +
      ((uint)((long)param_2[0x10] < (long)param_1[0x10]) -
      (uint)((long)param_1[0x10] < (long)param_2[0x10])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void xstrcoll_df_version(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (bVar2) goto LAB_00103979;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar2) {
      if (!bVar3) {
        return;
      }
      goto LAB_00103979;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103979:
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  iVar1 = filevercmp(__s1,__s2);
  if (iVar1 == 0) {
    strcmp(__s1,__s2);
    return;
  }
  return;
}



void strcmp_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103a32;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103a32;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103a32:
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void xstrcoll_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00103b02;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00103b02;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103b02:
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void strcmp_df_ctime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103bf2;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103bf2;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103bf2:
  if (((uint)((long)param_1[0x11] < (long)param_2[0x11]) -
      (uint)((long)param_2[0x11] < (long)param_1[0x11])) +
      ((uint)((long)param_1[0x10] < (long)param_2[0x10]) -
      (uint)((long)param_2[0x10] < (long)param_1[0x10])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void xstrcoll_df_ctime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00103cca;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00103cca;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103cca:
  if (((uint)((long)param_1[0x11] < (long)param_2[0x11]) -
      (uint)((long)param_2[0x11] < (long)param_1[0x11])) +
      ((uint)((long)param_1[0x10] < (long)param_2[0x10]) -
      (uint)((long)param_2[0x10] < (long)param_1[0x10])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_strcmp_df_atime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103dc2;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103dc2;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103dc2:
  if (((uint)((long)param_2[0xd] < (long)param_1[0xd]) -
      (uint)((long)param_1[0xd] < (long)param_2[0xd])) +
      ((uint)((long)param_2[0xc] < (long)param_1[0xc]) -
      (uint)((long)param_1[0xc] < (long)param_2[0xc])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void rev_strcmp_df_ctime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103e92;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103e92;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103e92:
  if (((uint)((long)param_2[0x11] < (long)param_1[0x11]) -
      (uint)((long)param_1[0x11] < (long)param_2[0x11])) +
      ((uint)((long)param_2[0x10] < (long)param_1[0x10]) -
      (uint)((long)param_1[0x10] < (long)param_2[0x10])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void rev_strcmp_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103f59;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103f59;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103f59:
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void strcmp_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103fe9;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103fe9;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103fe9:
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void strcmp_df_btime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00104082;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00104082;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104082:
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void xstrcoll_df_btime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00104152;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00104152;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104152:
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void strcmp_df_width(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar4 = true;
    if (iVar3 == 9 || iVar3 == 3) goto LAB_00104249;
  }
  else {
    bVar4 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar3 == 9 || iVar3 == 3) {
      if (!bVar4) {
        return;
      }
      goto LAB_00104249;
    }
  }
  if (bVar4 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104249:
  if (param_1[0x19] == 0) {
    iVar3 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
    lVar1 = param_2[0x19];
  }
  else {
    lVar1 = param_2[0x19];
    iVar3 = (int)param_1[0x19];
  }
  if (lVar1 == 0) {
    iVar2 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
  }
  else {
    iVar2 = (int)lVar1;
  }
  if (iVar3 != iVar2) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void rev_strcmp_df_width(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar4 = true;
    if (iVar3 == 9 || iVar3 == 3) goto LAB_00104369;
  }
  else {
    bVar4 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar3 == 9 || iVar3 == 3) {
      if (!bVar4) {
        return;
      }
      goto LAB_00104369;
    }
  }
  if (bVar4 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104369:
  if (param_2[0x19] == 0) {
    iVar3 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
    lVar1 = param_1[0x19];
  }
  else {
    lVar1 = param_1[0x19];
    iVar3 = (int)param_2[0x19];
  }
  if (lVar1 == 0) {
    iVar2 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
  }
  else {
    iVar2 = (int)lVar1;
  }
  if (iVar3 != iVar2) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void rev_xstrcoll_df_version(undefined8 *param_1,undefined8 *param_2)

{
  char *__s1;
  char *__s2;
  int iVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = *(int *)(param_1 + 0x15) == 3 || *(int *)(param_1 + 0x15) == 9;
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (bVar2) goto LAB_00104479;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar2) {
      if (!bVar3) {
        return;
      }
      goto LAB_00104479;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104479:
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  iVar1 = filevercmp(__s1,__s2);
  if (iVar1 == 0) {
    strcmp(__s1,__s2);
    return;
  }
  return;
}



void rev_strcmp_df_size(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00104529;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00104529;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104529:
  if ((long)param_2[9] < (long)param_1[9] != (long)param_1[9] < (long)param_2[9]) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void xstrcoll_df_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_001045e9;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_001045e9;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001045e9:
  __s = (char *)*param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
  }
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = strcoll(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
  strcoll(__s,__s_00);
  return;
}



void strcmp_df_atime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_001046e2;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_001046e2;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001046e2:
  if (((uint)((long)param_1[0xd] < (long)param_2[0xd]) -
      (uint)((long)param_2[0xd] < (long)param_1[0xd])) +
      ((uint)((long)param_1[0xc] < (long)param_2[0xc]) -
      (uint)((long)param_2[0xc] < (long)param_1[0xc])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void xstrcoll_df_atime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_001047b2;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_001047b2;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001047b2:
  if (((uint)((long)param_1[0xd] < (long)param_2[0xd]) -
      (uint)((long)param_2[0xd] < (long)param_1[0xd])) +
      ((uint)((long)param_1[0xc] < (long)param_2[0xc]) -
      (uint)((long)param_2[0xc] < (long)param_1[0xc])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_xstrcoll_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_001048a2;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_001048a2;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001048a2:
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_xstrcoll_df_atime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00104992;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00104992;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104992:
  if (((uint)((long)param_2[0xd] < (long)param_1[0xd]) -
      (uint)((long)param_1[0xd] < (long)param_2[0xd])) +
      ((uint)((long)param_2[0xc] < (long)param_1[0xc]) -
      (uint)((long)param_1[0xc] < (long)param_2[0xc])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void strcmp_df_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 != 3 && iVar1 != 9) goto LAB_00104ae0;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 != 3 && iVar1 != 9) {
LAB_00104ae0:
      if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
        return;
      }
    }
    else if (!bVar2) {
      return;
    }
  }
  __s = (char *)*param_1;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_2;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_00104ace;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
LAB_00104ace:
  strcmp(__s,__s_00);
  return;
}



void rev_strcmp_df_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 != 3 && iVar1 != 9) goto LAB_00104be0;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 != 3 && iVar1 != 9) {
LAB_00104be0:
      if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
        return;
      }
    }
    else if (!bVar2) {
      return;
    }
  }
  __s = (char *)*param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
    if (__s1 == (char *)0x0) goto LAB_00104bce;
  }
  else if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
LAB_00104bce:
  strcmp(__s,__s_00);
  return;
}



void rev_xstrcoll_df_btime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00104c82;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00104c82;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104c82:
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 != 0) {
    return;
  }
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_strcmp_df_btime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00104d72;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00104d72;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104d72:
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void xstrcoll_df_size(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00104e39;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00104e39;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104e39:
  if ((long)param_1[9] < (long)param_2[9] != (long)param_2[9] < (long)param_1[9]) {
    return;
  }
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void strcmp_df_size(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00104ef9;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00104ef9;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104ef9:
  if ((long)param_1[9] < (long)param_2[9] != (long)param_2[9] < (long)param_1[9]) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void rev_xstrcoll_df_size(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00104f99;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00104f99;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104f99:
  if ((long)param_2[9] < (long)param_1[9] != (long)param_1[9] < (long)param_2[9]) {
    return;
  }
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_xstrcoll_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s2;
  char *__s1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00105059;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00105059;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00105059:
  __s2 = (char *)*param_1;
  __s1 = (char *)*param_2;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_xstrcoll_df_extension(undefined8 *param_1,undefined8 *param_2)

{
  char *__s;
  char *__s_00;
  int iVar1;
  char *__s1;
  char *__s2;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar3 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00105129;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00105129;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00105129:
  __s = (char *)*param_2;
  __s1 = strrchr(__s,0x2e);
  __s_00 = (char *)*param_1;
  __s2 = strrchr(__s_00,0x2e);
  if (__s2 == (char *)0x0) {
    __s2 = "";
  }
  if (__s1 == (char *)0x0) {
    __s1 = "";
  }
  piVar2 = __errno_location();
  *piVar2 = 0;
  iVar1 = strcoll(__s1,__s2);
  if (iVar1 != 0) {
    return;
  }
  strcoll(__s,__s_00);
  return;
}



void rev_xstrcoll_df_width(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  char *__s1;
  char *__s2;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  iVar3 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar5 = true;
    if (iVar3 == 9 || iVar3 == 3) goto LAB_00105229;
  }
  else {
    bVar5 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar3 == 9 || iVar3 == 3) {
      if (!bVar5) {
        return;
      }
      goto LAB_00105229;
    }
  }
  if (bVar5 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00105229:
  if (param_2[0x19] == 0) {
    iVar3 = quote_name_width(*param_2,filename_quoting_options,*(undefined4 *)((long)param_2 + 0xc4)
                            );
    lVar1 = param_1[0x19];
  }
  else {
    lVar1 = param_1[0x19];
    iVar3 = (int)param_2[0x19];
  }
  if (lVar1 == 0) {
    iVar2 = quote_name_width(*param_1,filename_quoting_options,*(undefined4 *)((long)param_1 + 0xc4)
                            );
  }
  else {
    iVar2 = (int)lVar1;
  }
  if (iVar3 != iVar2) {
    return;
  }
  piVar4 = __errno_location();
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  *piVar4 = 0;
  strcoll(__s1,__s2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long quote_name(byte *param_1,undefined8 param_2,undefined4 param_3,long param_4,char param_5,
               long param_6,long param_7)

{
  byte bVar1;
  byte *pbVar2;
  byte *__ptr;
  size_t sVar3;
  void *__ptr_00;
  char *pcVar4;
  undefined *puVar5;
  long *plVar6;
  byte *pbVar7;
  size_t sVar8;
  char cVar9;
  long in_FS_OFFSET;
  byte local_2051;
  byte *local_2050;
  byte local_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_2050 = local_2048;
  sVar3 = quote_name_buf_constprop_0(&local_2050,param_1,param_2,param_3,0,&local_2051);
  if ((local_2051 != 0) && (param_5 != '\0')) {
    dired_pos = dired_pos + 1;
    pcVar4 = _stdout->_IO_write_ptr;
    if (pcVar4 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar4 + 1;
      *pcVar4 = ' ';
    }
    else {
      __overflow(_stdout,0x20);
    }
  }
  if (param_4 != 0) {
    if ((DAT_00111ae0 != 0) &&
       (((2 < DAT_00111ae0 || (DAT_00111ae8[DAT_00111ae0 - 1] != '0')) || (*DAT_00111ae8 != '0'))))
    {
      put_indicator(&color_indicator);
      put_indicator(&DAT_00111ab0);
    }
    put_indicator(&color_indicator);
    put_indicator(param_4);
    put_indicator(&DAT_00111ab0);
  }
  __ptr = local_2050;
  cVar9 = align_variable_outer_quotes;
  pbVar7 = local_2050;
  sVar8 = sVar3;
  if (param_7 == 0) {
    cVar9 = '\0';
  }
  else {
    if (align_variable_outer_quotes != '\0') {
      if ((cwd_some_quoted == '\x01') && (local_2051 == 0)) {
        bVar1 = *local_2050;
        pbVar7 = local_2050 + 1;
        pbVar2 = (byte *)_stdout->_IO_write_ptr;
        sVar8 = sVar3 - 2;
        if (pbVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar1;
        }
        else {
          __overflow(_stdout,(uint)bVar1);
        }
      }
      else {
        cVar9 = '\0';
      }
    }
    __ptr_00 = (void *)file_escape(hostname,0);
    pcVar4 = (char *)file_escape(param_7,1);
    puVar5 = &_LC12;
    if (*pcVar4 == '/') {
      puVar5 = &_LC1;
    }
    __printf_chk(2,&_LC13,__ptr_00,puVar5);
    free(__ptr_00);
    free(pcVar4);
  }
  if (param_6 == 0) {
    fwrite_unlocked(pbVar7,1,sVar8,_stdout);
    dired_pos = dired_pos + sVar3;
  }
  else {
    if (dired != '\0') {
      plVar6 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar6) < 8) {
        rpl_obstack_newchunk(param_6,8);
        plVar6 = *(long **)(param_6 + 0x18);
      }
      *plVar6 = dired_pos;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
    fwrite_unlocked(pbVar7,1,sVar8,_stdout);
    dired_pos = dired_pos + sVar3;
    if (dired != '\0') {
      plVar6 = *(long **)(param_6 + 0x18);
      if ((ulong)(*(long *)(param_6 + 0x20) - (long)plVar6) < 8) {
        rpl_obstack_newchunk(param_6,8);
        plVar6 = *(long **)(param_6 + 0x18);
      }
      *plVar6 = dired_pos;
      *(long *)(param_6 + 0x18) = *(long *)(param_6 + 0x18) + 8;
    }
  }
  if ((param_7 != 0) && (fwrite_unlocked(&_LC14,1,6,_stdout), cVar9 != '\0')) {
    bVar1 = __ptr[sVar3 - 1];
    pbVar7 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar7 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar7 + 1);
      *pbVar7 = bVar1;
    }
    else {
      __overflow(_stdout,(uint)bVar1);
    }
  }
  if ((param_1 != __ptr) && (__ptr != local_2048)) {
    free(__ptr);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_2051 + sVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long print_name_with_quoting(undefined8 *param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  size_t __n;
  uint uVar3;
  int iVar4;
  long lVar5;
  size_t sVar6;
  size_t *psVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  char *__s;
  char cVar11;
  
  if (param_2 == 0) {
    __s = (char *)*param_1;
    if (print_with_color != '\0') {
      uVar3 = (uint)*(byte *)((long)param_1 + 0xb9);
      if ((color_symlink_as_referent == '\0') || (*(byte *)((long)param_1 + 0xb9) == 0)) {
        uVar9 = *(uint *)(param_1 + 6);
      }
      else {
        uVar9 = *(uint *)((long)param_1 + 0xac);
      }
LAB_001057ff:
      cVar11 = *(char *)(param_1 + 0x17);
      if (cVar11 == '\0') goto LAB_0010580b;
LAB_0010586e:
      uVar10 = uVar9 & 0xf000;
      if (uVar10 == 0x8000) {
        if ((((uVar9 & 0x800) == 0) || (DAT_00111ba0 == 0)) ||
           ((DAT_00111ba0 < 3 &&
            ((PTR___compound_literal_11_00111ba8[DAT_00111ba0 - 1] == '0' &&
             (*PTR___compound_literal_11_00111ba8 == '0')))))) {
          if (((uVar9 & 0x400) == 0) ||
             ((DAT_00111bb0 == 0 ||
              (((DAT_00111bb0 < 3 && (PTR___compound_literal_12_00111bb8[DAT_00111bb0 - 1] == '0'))
               && (*PTR___compound_literal_12_00111bb8 == '0')))))) {
            if (*(char *)(param_1 + 0x18) == '\0') {
              if ((((uVar9 & 0x49) == 0) || (DAT_00111b80 == 0)) ||
                 ((DAT_00111b80 < 3 &&
                  ((PTR___compound_literal_9_00111b88[DAT_00111b80 - 1] == '0' &&
                   (*PTR___compound_literal_9_00111b88 == '0')))))) {
                if (((ulong)param_1[5] < 2) ||
                   ((_DAT_00111c00 == 0 ||
                    (((_DAT_00111c00 < 3 && (_DAT_00111c08[_DAT_00111c00 - 1] == '0')) &&
                     (*_DAT_00111c08 == '0')))))) goto LAB_00105a70;
                lVar5 = 0x160;
              }
              else {
                lVar5 = 0xe0;
              }
            }
            else {
              lVar5 = 0x150;
            }
          }
          else {
            lVar5 = 0x110;
          }
        }
        else {
          lVar5 = 0x100;
        }
        goto LAB_001058e5;
      }
      if (uVar10 != 0x4000) {
        if (uVar10 != 0xa000) {
          lVar5 = 0x80;
          if (((uVar10 != 0x1000) && (lVar5 = 0x90, uVar10 != 0xc000)) &&
             ((lVar5 = 0xa0, uVar10 != 0x6000 && (lVar5 = 0xd0, uVar10 == 0x2000)))) {
            lVar5 = 0xb0;
          }
          goto LAB_001058e5;
        }
        uVar9 = 7;
        goto LAB_0010582b;
      }
      if (((~uVar9 & 0x202) == 0) && (DAT_00111be0 != 0)) {
        lVar5 = 0x140;
        if (DAT_00111be0 < 3) {
          if ((PTR___compound_literal_15_00111be8[DAT_00111be0 - 1] == '0') &&
             (*PTR___compound_literal_15_00111be8 == '0')) goto LAB_00105c0f;
          lVar5 = 0x140;
        }
      }
      else {
LAB_00105c0f:
        if (((uVar9 & 2) == 0) || (DAT_00111bd0 == 0)) {
LAB_00105c50:
          lVar5 = 0x60;
          if ((((uVar9 & 0x200) != 0) && ((DAT_00111bc0 != 0 && (lVar5 = 0x120, DAT_00111bc0 < 3))))
             && ((PTR___compound_literal_13_00111bc8[DAT_00111bc0 - 1] != '0' ||
                 (lVar5 = 0x60, *PTR___compound_literal_13_00111bc8 != '0')))) {
            lVar5 = 0x120;
          }
        }
        else {
          lVar5 = 0x130;
          if (DAT_00111bd0 < 3) {
            if ((PTR___compound_literal_14_00111bd8[DAT_00111bd0 - 1] == '0') &&
               (*PTR___compound_literal_14_00111bd8 == '0')) goto LAB_00105c50;
            lVar5 = 0x130;
          }
        }
      }
LAB_001058e5:
      psVar7 = (size_t *)((long)&color_indicator + lVar5);
LAB_001058ef:
      uVar8 = *(undefined4 *)((long)param_1 + 0xc4);
      if (psVar7[1] == 0) {
        if (DAT_00111ae0 == 0) goto LAB_00105752;
        if (DAT_00111ae0 < 3) {
          cVar11 = DAT_00111ae8[DAT_00111ae0 - 1];
          cVar2 = *DAT_00111ae8;
          lVar5 = quote_name(__s,filename_quoting_options,uVar8,0,param_2 ^ 1,param_3,param_1[2]);
          process_signals();
          if (cVar11 == '0' && cVar2 == '0') {
            return lVar5;
          }
          goto LAB_0010592d;
        }
        psVar7 = (size_t *)0x0;
      }
      lVar5 = quote_name(__s,filename_quoting_options,uVar8,psVar7,param_2 ^ 1,param_3,param_1[2]);
      process_signals();
LAB_0010592d:
      if (DAT_00111ac8 == 0) {
        put_indicator(&color_indicator);
        put_indicator(&DAT_00111ad0);
        put_indicator(&DAT_00111ab0);
      }
      else {
        put_indicator(&DAT_00111ac0);
      }
      if (line_length == 0) {
        return lVar5;
      }
      uVar1 = lVar5 + -1 + param_4;
      if (param_4 / line_length == uVar1 / line_length) {
        return lVar5;
      }
      put_indicator(&DAT_00111c10,param_4 / line_length,uVar1 % line_length);
      return lVar5;
    }
  }
  else {
    __s = (char *)param_1[1];
    if (print_with_color != '\0') {
      uVar9 = *(uint *)((long)param_1 + 0xac);
      if (*(char *)((long)param_1 + 0xb9) == '\0') {
        if ((DAT_00111b60 == 0) ||
           (((DAT_00111b60 < 3 && (DAT_00111b68[DAT_00111b60 - 1] == '0')) && (*DAT_00111b68 == '0')
            ))) {
          uVar3 = 0xffffffff;
          goto LAB_001057ff;
        }
        lVar5 = 0xc0;
        goto LAB_001058e5;
      }
      cVar11 = *(char *)(param_1 + 0x17);
      uVar3 = 0;
      if (cVar11 != '\0') goto LAB_0010586e;
LAB_0010580b:
      uVar9 = *(uint *)(filetype_indicator_5 + (ulong)*(uint *)(param_1 + 0x15) * 4);
      cVar11 = uVar9 == 7;
      if (uVar9 == 5) {
LAB_00105a70:
        sVar6 = strlen(__s);
        psVar7 = color_ext_list;
        if (color_ext_list == (size_t *)0x0) {
          lVar5 = 0x50;
          goto LAB_001058e5;
        }
        do {
          __n = *psVar7;
          if (__n <= sVar6) {
            if ((char)psVar7[4] == '\0') {
              iVar4 = c_strncasecmp();
            }
            else {
              iVar4 = strncmp(__s + (sVar6 - __n),(char *)psVar7[1],__n);
            }
            if (iVar4 == 0) {
              psVar7 = psVar7 + 2;
              goto LAB_001058ef;
            }
          }
          psVar7 = (size_t *)psVar7[5];
        } while (psVar7 != (size_t *)0x0);
        uVar9 = 5;
      }
      else {
LAB_0010582b:
        if ((((uVar3 == 0) && (cVar11 != '\0')) && (uVar9 = 0xd, color_symlink_as_referent == '\0'))
           && ((uVar9 = 7, DAT_00111b70 != 0 && (uVar9 = 0xd, DAT_00111b70 < 3)))) {
          if ((DAT_00111b78[DAT_00111b70 - 1] == '0') && (*DAT_00111b78 == '0')) {
            uVar9 = 7;
          }
          else {
            uVar9 = 0xd;
          }
        }
      }
      lVar5 = (ulong)uVar9 << 4;
      goto LAB_001058e5;
    }
  }
  uVar8 = *(undefined4 *)((long)param_1 + 0xc4);
LAB_00105752:
  lVar5 = quote_name(__s,filename_quoting_options,uVar8,0,param_2 ^ 1,param_3,param_1[2]);
  process_signals();
  return lVar5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_file_name_and_frills_isra_0(long param_1,undefined8 param_2,char *param_3)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *extraout_RDX;
  long in_FS_OFFSET;
  undefined1 auStack_2b8 [664];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((print_with_color != '\0') && (DAT_00111ae0 != 0)) &&
     ((2 < DAT_00111ae0 ||
      ((DAT_00111ae8[DAT_00111ae0 - 1] != '0' || (param_3 = DAT_00111ae8, *DAT_00111ae8 != '0'))))))
  {
    put_indicator(&color_indicator);
    put_indicator(&DAT_00111ae0);
    put_indicator(&DAT_00111ab0);
    param_3 = extraout_RDX;
  }
  if (print_inode != '\0') {
    puVar3 = &_LC15;
    if ((*(char *)(param_1 + 0xb8) != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar3 = (undefined1 *)umaxtostr(*(long *)(param_1 + 0x20),auStack_2b8,param_3,&_LC15);
    }
    uVar4 = 0;
    if (format != 4) {
      uVar4 = inode_number_width;
    }
    __printf_chk(2,&_LC16,uVar4,puVar3);
  }
  if (print_block_size != '\0') {
    puVar3 = &_LC15;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      puVar3 = (undefined1 *)
               human_readable(*(undefined8 *)(param_1 + 0x58),auStack_2b8,human_output_opts,0x200,
                              output_block_size);
    }
    uVar4 = 0;
    if (format != 4) {
      uVar4 = block_size_width;
    }
    __printf_chk(2,&_LC16,uVar4,puVar3);
  }
  if (print_scontext != '\0') {
    uVar4 = 0;
    if (format != 4) {
      uVar4 = scontext_width;
    }
    __printf_chk(2,&_LC16,uVar4,*(undefined8 *)(param_1 + 0xb0));
  }
  print_name_with_quoting(param_1,0,0,param_2);
  if (indicator_style != 0) {
    bVar2 = get_type_indicator(*(undefined1 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x30),
                               *(undefined4 *)(param_1 + 0xa8));
    if (bVar2 != 0) {
      dired_pos = dired_pos + 1;
      pbVar1 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar1 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
        *pbVar1 = bVar2;
      }
      else {
        __overflow(_stdout,(uint)bVar2);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_with_separator(char param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  byte *pbVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  
  lVar6 = 0;
  uVar8 = 0;
  if (0 < cwd_n_used) {
    do {
      uVar1 = *(undefined8 *)(sorted_file + lVar6 * 8);
      if (line_length == 0) {
        uVar4 = uVar8;
        if (lVar6 != 0) {
          uVar7 = uVar8 + 2;
LAB_00106008:
          uVar8 = uVar8 + 2;
          uVar5 = 0x20;
          uVar4 = uVar7;
          bVar9 = 0x20;
          goto LAB_00106013;
        }
      }
      else {
        uVar4 = length_of_file_name_and_frills(uVar1);
        if (lVar6 == 0) {
          uVar4 = uVar8 + uVar4;
        }
        else {
          uVar7 = uVar4 + uVar8 + 2;
          if ((line_length == 0) || ((uVar7 < line_length && (uVar8 <= -uVar4 - 3))))
          goto LAB_00106008;
          uVar5 = (uint)(char)eolbyte;
          uVar8 = 0;
          bVar9 = eolbyte;
LAB_00106013:
          pcVar2 = _stdout->_IO_write_ptr;
          if (pcVar2 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar2 + 1;
            *pcVar2 = param_1;
          }
          else {
            __overflow(_stdout,(int)param_1);
          }
          pbVar3 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar3 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
            *pbVar3 = bVar9;
          }
          else {
            __overflow(_stdout,uVar5 & 0xff);
          }
        }
      }
      lVar6 = lVar6 + 1;
      print_file_name_and_frills_isra_0(uVar1,uVar8);
      uVar8 = uVar4;
    } while (lVar6 < cwd_n_used);
  }
  bVar9 = eolbyte;
  pbVar3 = (byte *)_stdout->_IO_write_ptr;
  if (_stdout->_IO_write_end <= pbVar3) {
    __overflow(_stdout,(uint)eolbyte);
    return;
  }
  _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
  *pbVar3 = bVar9;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_long_format(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  _IO_FILE *p_Var5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  int iVar19;
  undefined1 *puVar20;
  ulong uVar21;
  char *pcVar22;
  char *pcVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined8 local_1340;
  ulong local_1338;
  ulong uStack_1330;
  undefined1 local_1328 [16];
  int local_1318;
  undefined1 local_12e8 [16];
  int local_12d8;
  undefined1 local_12a4;
  undefined8 local_12a3;
  undefined2 local_129b;
  undefined1 local_1299;
  undefined1 local_1298 [32];
  undefined1 local_1278 [1008];
  char local_e88 [3656];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    local_1299 = 0;
    local_129b = 0x3f3f;
    local_12a4 = filetype_letter[*(uint *)(param_1 + 0xa8)];
    local_12a3 = 0x3f3f3f3f3f3f3f3f;
    if (any_has_acl != '\0') goto LAB_00106606;
LAB_00106171:
    local_129b = local_129b & 0xff;
  }
  else {
    filemodestring(param_1 + 0x18,&local_12a4);
    if (any_has_acl == '\0') goto LAB_00106171;
LAB_00106606:
    iVar7 = *(int *)(param_1 + 0xbc);
    if (iVar7 == 2) {
      local_129b = CONCAT11(0x2e,(undefined1)local_129b);
    }
    else if (iVar7 == 3) {
      local_129b = CONCAT11(0x2b,(undefined1)local_129b);
    }
    else if (iVar7 == 1) {
      local_129b = CONCAT11(0x3f,(undefined1)local_129b);
    }
  }
  if (time_type == 2) {
    local_1338 = *(ulong *)(param_1 + 0x60);
    uStack_1330 = *(ulong *)(param_1 + 0x68);
LAB_0010619d:
    bVar24 = true;
  }
  else {
    if (time_type < 3) {
      if (time_type == 0) {
        local_1338 = *(ulong *)(param_1 + 0x70);
        uStack_1330 = *(ulong *)(param_1 + 0x78);
      }
      else {
        local_1338 = *(ulong *)(param_1 + 0x80);
        uStack_1330 = *(ulong *)(param_1 + 0x88);
      }
      goto LAB_0010619d;
    }
    local_1338 = *(ulong *)(param_1 + 0x70);
    uStack_1330 = *(ulong *)(param_1 + 0x78);
    bVar24 = (local_1338 & uStack_1330) != 0xffffffffffffffff;
  }
  if (print_inode == '\0') {
    pcVar17 = local_e88;
    uVar21 = 0xe3b;
    uVar14 = 0xe3b;
  }
  else {
    puVar20 = &_LC15;
    if ((*(char *)(param_1 + 0xb8) != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar20 = (undefined1 *)umaxtostr(*(long *)(param_1 + 0x20),local_1278);
    }
    iVar7 = __sprintf_chk(local_e88,2,0xe3b,&_LC16,inode_number_width,puVar20);
    uVar21 = (ulong)iVar7;
    pcVar17 = local_e88 + uVar21;
    uVar14 = 0xe3b;
    if (0xe3a < uVar21) {
      uVar14 = uVar21;
    }
    uVar14 = uVar14 - uVar21;
    uVar21 = 0xe3b;
    if (0xe3a < uVar14) {
      uVar21 = uVar14;
    }
  }
  if (print_block_size != '\0') {
    pcVar22 = "?";
    if (*(char *)(param_1 + 0xb8) != '\0') {
      pcVar22 = (char *)human_readable(*(undefined8 *)(param_1 + 0x58),local_1278,human_output_opts,
                                       0x200,output_block_size);
    }
    iVar7 = gnu_mbswidth(pcVar22,3);
    pcVar23 = pcVar17;
    if ((-1 < iVar7) && (0 < block_size_width - iVar7)) {
      pcVar18 = pcVar17;
      do {
        uVar21 = 0xe3b;
        if (0xe3a < uVar14) {
          uVar21 = uVar14;
        }
        uVar12 = (uVar21 - uVar14) + 1;
        if (uVar12 < uVar21) {
          uVar12 = uVar21;
        }
        pcVar16 = pcVar18 + 1;
        uVar14 = ((uVar14 - 1) - uVar21) + uVar12;
        *pcVar18 = ' ';
        pcVar23 = pcVar17 + (uint)(block_size_width - iVar7);
        pcVar18 = pcVar16;
      } while (pcVar16 != pcVar17 + (uint)(block_size_width - iVar7));
    }
    do {
      pcVar18 = pcVar23;
      pcVar17 = pcVar18 + 1;
      uVar21 = 0xe3b;
      if (0xe3a < uVar14) {
        uVar21 = uVar14;
      }
      uVar12 = (uVar21 - uVar14) + 1;
      if (uVar12 < uVar21) {
        uVar12 = uVar21;
      }
      cVar1 = *pcVar22;
      uVar14 = ((uVar14 - 1) - uVar21) + uVar12;
      *pcVar18 = cVar1;
      pcVar23 = pcVar17;
      pcVar22 = pcVar22 + 1;
    } while (cVar1 != '\0');
    *pcVar18 = ' ';
    uVar21 = 0xe3b;
    if (0xe3a < uVar14) {
      uVar21 = uVar14;
    }
  }
  puVar20 = &_LC15;
  if (*(char *)(param_1 + 0xb8) != '\0') {
    puVar20 = (undefined1 *)umaxtostr(*(undefined8 *)(param_1 + 0x28),local_1278);
  }
  iVar7 = __sprintf_chk(pcVar17,2,uVar14,"%s %*s ",&local_12a4,nlink_width,puVar20);
  p_Var5 = _stdout;
  pcVar17 = pcVar17 + iVar7;
  if (dired != '\0') {
    dired_pos = dired_pos + 2;
    pcVar22 = _stdout->_IO_write_ptr;
    if (pcVar22 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar22 + 1;
      *pcVar22 = ' ';
    }
    else {
      iVar19 = __overflow(_stdout,0x20);
      if (iVar19 == -1) goto LAB_00106348;
    }
    pcVar22 = p_Var5->_IO_write_ptr;
    if (pcVar22 < p_Var5->_IO_write_end) {
      p_Var5->_IO_write_ptr = pcVar22 + 1;
      *pcVar22 = ' ';
    }
    else {
      __overflow(p_Var5,0x20);
    }
  }
LAB_00106348:
  if ((((print_owner == '\0') && (print_group == '\0')) && (print_author == '\0')) &&
     (print_scontext == '\0')) {
    lVar9 = (long)iVar7 + uVar21;
    uVar12 = lVar9 - uVar14;
    if (uVar12 < uVar21) {
      uVar12 = uVar21;
    }
    uVar12 = (uVar14 - lVar9) + uVar12;
    uVar14 = 0xe3b;
    if (0xe3a < uVar12) {
      uVar14 = uVar12;
    }
  }
  else {
    dired_outbuf(local_e88,(long)pcVar17 - (long)local_e88);
    uVar4 = owner_width;
    if (print_owner != '\0') {
      puVar20 = &_LC15;
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar20 = (undefined1 *)0x0, numeric_ids == '\0'))
      {
        puVar20 = (undefined1 *)getuser(uVar2);
      }
      format_user_or_group(puVar20,uVar2,uVar4);
    }
    uVar4 = group_width;
    if (print_group != '\0') {
      puVar20 = &_LC15;
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar20 = (undefined1 *)0x0, numeric_ids == '\0'))
      {
        puVar20 = (undefined1 *)getgroup(uVar2);
      }
      format_user_or_group(puVar20,uVar2,uVar4);
    }
    uVar4 = author_width;
    if (print_author != '\0') {
      puVar20 = &_LC15;
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar20 = (undefined1 *)0x0, numeric_ids == '\0'))
      {
        puVar20 = (undefined1 *)getuser(uVar2);
      }
      format_user_or_group(puVar20,uVar2,uVar4);
    }
    if (print_scontext != '\0') {
      format_user_or_group(*(undefined8 *)(param_1 + 0xb0),0,scontext_width);
    }
    uVar12 = 0xe3b;
    pcVar17 = local_e88;
    uVar14 = 0xe3b;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    pcVar22 = "?";
LAB_0010640b:
    iVar7 = gnu_mbswidth(pcVar22,3);
    pcVar23 = pcVar17;
    if ((-1 < iVar7) && (0 < file_size_width - iVar7)) {
      pcVar18 = pcVar17;
      do {
        uVar14 = 0xe3b;
        if (0xe3a < uVar12) {
          uVar14 = uVar12;
        }
        uVar21 = (uVar14 - uVar12) + 1;
        if (uVar21 < uVar14) {
          uVar21 = uVar14;
        }
        pcVar16 = pcVar18 + 1;
        uVar12 = ((uVar12 - 1) - uVar14) + uVar21;
        *pcVar18 = ' ';
        pcVar18 = pcVar16;
        pcVar23 = pcVar17 + (uint)(file_size_width - iVar7);
      } while (pcVar16 != pcVar17 + (uint)(file_size_width - iVar7));
    }
    do {
      pcVar17 = pcVar23;
      uVar14 = 0xe3b;
      if (0xe3a < uVar12) {
        uVar14 = uVar12;
      }
      uVar21 = (uVar14 - uVar12) + 1;
      if (uVar21 < uVar14) {
        uVar21 = uVar14;
      }
      pcVar23 = pcVar17 + 1;
      cVar1 = *pcVar22;
      uVar12 = ((uVar12 - 1) - uVar14) + uVar21;
      *pcVar17 = cVar1;
      pcVar22 = pcVar22 + 1;
    } while (cVar1 != '\0');
    *pcVar17 = ' ';
  }
  else {
    if ((*(uint *)(param_1 + 0x30) & 0xb000) != 0x2000) {
      pcVar22 = (char *)human_readable(*(undefined8 *)(param_1 + 0x48),local_1278,
                                       file_human_output_opts,1,file_output_block_size);
      goto LAB_0010640b;
    }
    iVar19 = file_size_width - (major_device_number_width + 2 + minor_device_number_width);
    uVar10 = umaxtostr((uint)((*(ulong *)(param_1 + 0x40) >> 0x14) << 8) |
                       (uint)*(ulong *)(param_1 + 0x40) & 0xff,local_1278);
    iVar7 = minor_device_number_width;
    uVar11 = umaxtostr((uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfffff000 |
                       (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 8) & 0xfff,local_1298);
    if (iVar19 < 0) {
      iVar19 = 0;
    }
    iVar7 = __sprintf_chk(pcVar17,2,uVar12,"%*s, %*s ",iVar19 + major_device_number_width,uVar11,
                          iVar7,uVar10);
    lVar9 = (long)iVar7 + uVar14;
    uVar21 = lVar9 - uVar12;
    if (uVar21 < uVar14) {
      uVar21 = uVar14;
    }
    pcVar23 = pcVar17 + iVar7;
    uVar12 = (uVar12 - lVar9) + uVar21;
  }
  *pcVar23 = '\x01';
  if ((*(char *)(param_1 + 0xb8) == '\0') || (!bVar24)) {
LAB_001064bf:
    puVar20 = &_LC15;
LAB_001064c6:
    if (width_2 < 0) {
      local_1340 = 0;
      lVar9 = localtime_rz(localtz,&local_1340,local_12e8);
      if (lVar9 != 0) {
        puVar13 = long_time_format;
        if (use_abformat != '\0') {
          puVar13 = abformat + (long)local_12d8 * 0x80;
        }
        lVar9 = nstrftime(local_1278,0x3e9,puVar13,local_12e8,localtz,0);
        if (lVar9 != 0) {
          width_2 = mbsnwidth(local_1278,lVar9,3);
        }
      }
      if (width_2 < 0) {
        width_2 = 0;
      }
    }
    iVar7 = __sprintf_chk(pcVar23,2,uVar12,&_LC16,width_2,puVar20);
    pcVar23 = pcVar23 + iVar7;
  }
  else {
    lVar9 = localtime_rz(localtz,&local_1338,local_1328);
    if (lVar9 == 0) {
LAB_00106c70:
      if (*pcVar23 != '\0') {
        if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_001064bf;
        puVar20 = (undefined1 *)imaxtostr(local_1338,local_1298);
        goto LAB_001064c6;
      }
    }
    else {
      bVar24 = (long)uStack_1330 < DAT_0010ab78;
      uVar8 = (uint)(DAT_0010ab78 < (long)uStack_1330);
      iVar7 = (uint)bVar24 - (uint)(DAT_0010ab78 < (long)uStack_1330);
      if ((int)(iVar7 + ((uint)((long)local_1338 < current_time) -
                        (uint)(current_time < (long)local_1338)) * 2) < 0) {
        gettime(&current_time);
        bVar24 = (long)uStack_1330 < DAT_0010ab78;
        uVar8 = (uint)(DAT_0010ab78 < (long)uStack_1330);
        iVar7 = bVar24 - uVar8;
      }
      uVar8 = ((uVar8 - bVar24) +
               ((uint)(current_time < (long)local_1338) - (uint)((long)local_1338 < current_time)) *
               2 & iVar7 + ((uint)((long)local_1338 < current_time + -0xf0c2ac) -
                           (uint)(current_time + -0xf0c2ac < (long)local_1338)) * 2) >> 0x1f;
      if (use_abformat == '\0') {
        puVar20 = (&long_time_format)[uVar8];
      }
      else {
        puVar20 = abformat +
                  ((ulong)((uint)((long)((ulong)uVar8 << 0x3f) >> 0x3f) & 0xc) + (long)local_1318) *
                  0x80;
      }
      lVar9 = nstrftime(pcVar23,0x3e9,puVar20,local_1328,localtz);
      if (lVar9 == 0) goto LAB_00106c70;
      pcVar23 = pcVar23 + lVar9;
    }
    *pcVar23 = ' ';
    pcVar23 = pcVar23 + 1;
  }
  lVar15 = (long)pcVar23 - (long)local_e88;
  dired_outbuf(local_e88,lVar15);
  lVar9 = print_name_with_quoting(param_1,0,dired_obstack,lVar15);
  p_Var5 = _stdout;
  if (*(int *)(param_1 + 0xa8) == 6) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_0010653c;
    dired_pos = dired_pos + 4;
    pcVar17 = _stdout->_IO_write_ptr;
    if (pcVar17 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar17 + 1;
      *pcVar17 = ' ';
LAB_00106674:
      pcVar17 = p_Var5->_IO_write_ptr;
      if (pcVar17 < p_Var5->_IO_write_end) {
        p_Var5->_IO_write_ptr = pcVar17 + 1;
        *pcVar17 = '-';
      }
      else {
        iVar7 = __overflow(p_Var5,0x2d);
        if (iVar7 == -1) goto LAB_001066bf;
      }
      pcVar17 = p_Var5->_IO_write_ptr;
      if (pcVar17 < p_Var5->_IO_write_end) {
        p_Var5->_IO_write_ptr = pcVar17 + 1;
        *pcVar17 = '>';
      }
      else {
        iVar7 = __overflow(p_Var5,0x3e);
        if (iVar7 == -1) goto LAB_001066bf;
      }
      pcVar17 = p_Var5->_IO_write_ptr;
      if (pcVar17 < p_Var5->_IO_write_end) {
        p_Var5->_IO_write_ptr = pcVar17 + 1;
        *pcVar17 = ' ';
      }
      else {
        __overflow(p_Var5,0x20);
      }
    }
    else {
      iVar7 = __overflow(_stdout,0x20);
      if (iVar7 != -1) goto LAB_00106674;
    }
LAB_001066bf:
    print_name_with_quoting(param_1,1,0,lVar15 + 4 + lVar9);
    if (indicator_style == 0) goto LAB_0010653c;
    bVar6 = get_type_indicator(1,*(undefined4 *)(param_1 + 0xac),0);
  }
  else {
    if (indicator_style == 0) goto LAB_0010653c;
    bVar6 = get_type_indicator(*(undefined1 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x30));
  }
  if (bVar6 != 0) {
    dired_pos = dired_pos + 1;
    pbVar3 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = bVar6;
    }
    else {
      __overflow(_stdout,(uint)bVar6);
    }
  }
LAB_0010653c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_current_files(void)

{
  ulong *puVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long local_40;
  
  switch(format) {
  case 0:
    lVar13 = 0;
    if ((long)cwd_n_used < 1) {
      return;
    }
    do {
      while( true ) {
        if (((print_with_color != '\0') && (DAT_00111ae0 != 0)) &&
           ((2 < DAT_00111ae0 || ((DAT_00111ae8[DAT_00111ae0 - 1] != '0' || (*DAT_00111ae8 != '0')))
            ))) {
          put_indicator(&color_indicator);
          put_indicator(&DAT_00111ae0);
          put_indicator(&DAT_00111ab0);
        }
        print_long_format(sorted_file[lVar13]);
        uVar12 = cwd_n_used;
        bVar4 = eolbyte;
        dired_pos = dired_pos + 1;
        pbVar3 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar3 < _stdout->_IO_write_end) break;
        __overflow(_stdout,(uint)eolbyte);
        lVar13 = lVar13 + 1;
        if ((long)cwd_n_used <= lVar13) {
          return;
        }
      }
      lVar13 = lVar13 + 1;
      _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
      *pbVar3 = bVar4;
    } while (lVar13 < (long)uVar12);
    return;
  case 1:
    lVar13 = 0;
    if (0 < (long)cwd_n_used) {
      do {
        while( true ) {
          print_file_name_and_frills_isra_0(sorted_file[lVar13],0);
          uVar12 = cwd_n_used;
          bVar4 = eolbyte;
          pbVar3 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar3 < _stdout->_IO_write_end) break;
          __overflow(_stdout,(uint)eolbyte);
          lVar13 = lVar13 + 1;
          if ((long)cwd_n_used <= lVar13) {
            return;
          }
        }
        lVar13 = lVar13 + 1;
        _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
        *pbVar3 = bVar4;
      } while (lVar13 < (long)uVar12);
    }
    return;
  case 2:
    if (line_length != 0) {
      uVar12 = cwd_n_used;
      if ((max_idx != 0) && (max_idx < cwd_n_used)) {
        uVar12 = max_idx;
      }
      init_column_info(uVar12);
      uVar19 = cwd_n_used;
      if (0 < (long)cwd_n_used) {
        lVar13 = 0;
        do {
          lVar5 = length_of_file_name_and_frills(sorted_file[lVar13]);
          uVar19 = cwd_n_used;
          uVar8 = line_length;
          if (0 < (long)uVar12) {
            uVar9 = 0;
            pcVar15 = column_info;
            do {
              uVar10 = uVar9 + 1;
              if (*pcVar15 != '\0') {
                uVar7 = lVar13 / ((long)(uVar9 + uVar19) / (long)uVar10);
                puVar1 = (ulong *)(*(long *)(pcVar15 + 0x10) + uVar7 * 8);
                uVar2 = *puVar1;
                uVar9 = lVar5 + (ulong)(uVar9 != uVar7) * 2;
                if (uVar2 < uVar9) {
                  *(ulong *)(pcVar15 + 8) = *(long *)(pcVar15 + 8) + (uVar9 - uVar2);
                  *puVar1 = uVar9;
                  *pcVar15 = *(ulong *)(pcVar15 + 8) < uVar8;
                }
              }
              pcVar15 = pcVar15 + 0x18;
              uVar9 = uVar10;
            } while (uVar12 != uVar10);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (long)uVar19);
      }
      if ((long)uVar12 < 2) {
        pcVar15 = column_info + uVar12 * 0x18 + -0x18;
      }
      else {
        pcVar14 = column_info + uVar12 * 0x18 + -0x18;
        do {
          pcVar15 = pcVar14;
          if (*pcVar14 != '\0') break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar14 + -0x18;
          pcVar15 = column_info;
        } while (uVar12 != 1);
      }
      local_40 = 0;
      lVar13 = ((long)uVar19 / (long)uVar12 + 1) - (ulong)((long)uVar19 % (long)uVar12 == 0);
      if (lVar13 < 1) {
        return;
      }
      do {
        lVar17 = 0;
        lVar5 = local_40;
        lVar6 = 0;
        while( true ) {
          uVar16 = sorted_file[lVar5];
          lVar18 = length_of_file_name_and_frills();
          lVar11 = *(long *)(*(long *)(pcVar15 + 0x10) + lVar17);
          lVar17 = lVar17 + 8;
          print_file_name_and_frills_isra_0(uVar16,lVar6);
          bVar4 = eolbyte;
          if ((long)(cwd_n_used - lVar13) <= lVar5) break;
          lVar11 = lVar11 + lVar6;
          lVar5 = lVar5 + lVar13;
          indent(lVar18 + lVar6,lVar11);
          lVar6 = lVar11;
        }
        pbVar3 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar3 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
          *pbVar3 = bVar4;
        }
        else {
          __overflow(_stdout,(uint)eolbyte);
        }
        local_40 = local_40 + 1;
      } while (lVar13 != local_40);
      return;
    }
    break;
  case 3:
    if (line_length != 0) {
      uVar12 = cwd_n_used;
      if ((max_idx != 0) && (max_idx < cwd_n_used)) {
        uVar12 = max_idx;
      }
      lVar13 = 0;
      init_column_info(uVar12);
      if (0 < (long)cwd_n_used) {
        do {
          lVar5 = length_of_file_name_and_frills(sorted_file[lVar13]);
          uVar19 = line_length;
          if (0 < (long)uVar12) {
            uVar8 = 0;
            pcVar15 = column_info;
            do {
              uVar9 = uVar8 + 1;
              if (*pcVar15 != '\0') {
                puVar1 = (ulong *)(*(long *)(pcVar15 + 0x10) + (lVar13 % (long)uVar9) * 8);
                uVar8 = lVar5 + (ulong)(lVar13 % (long)uVar9 != uVar8) * 2;
                uVar10 = *puVar1;
                if (uVar10 < uVar8) {
                  *(ulong *)(pcVar15 + 8) = *(long *)(pcVar15 + 8) + (uVar8 - uVar10);
                  *puVar1 = uVar8;
                  *pcVar15 = *(ulong *)(pcVar15 + 8) < uVar19;
                }
              }
              pcVar15 = pcVar15 + 0x18;
              uVar8 = uVar9;
            } while (uVar12 != uVar9);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (long)cwd_n_used);
      }
      if ((long)uVar12 < 2) {
        pcVar15 = column_info + uVar12 * 0x18 + -0x18;
      }
      else {
        pcVar14 = column_info + uVar12 * 0x18 + -0x18;
        do {
          pcVar15 = pcVar14;
          if (*pcVar14 != '\0') break;
          uVar12 = uVar12 - 1;
          pcVar14 = pcVar14 + -0x18;
          pcVar15 = column_info;
        } while (uVar12 != 1);
      }
      uVar16 = *sorted_file;
      lVar6 = length_of_file_name_and_frills(uVar16);
      lVar17 = 1;
      lVar13 = **(long **)(pcVar15 + 0x10);
      print_file_name_and_frills_isra_0(uVar16,0);
      lVar5 = 0;
      if (1 < (long)cwd_n_used) {
        do {
          bVar4 = eolbyte;
          lVar11 = lVar17 % (long)uVar12;
          if (lVar11 == 0) {
            pbVar3 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar3 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
              *pbVar3 = bVar4;
            }
            else {
              __overflow(_stdout,(uint)eolbyte);
            }
            lVar18 = 0;
          }
          else {
            lVar18 = lVar13 + lVar5;
            indent(lVar5 + lVar6,lVar18);
          }
          uVar16 = sorted_file[lVar17];
          lVar17 = lVar17 + 1;
          print_file_name_and_frills_isra_0(uVar16,lVar18);
          lVar6 = length_of_file_name_and_frills(uVar16);
          lVar13 = *(long *)(*(long *)(pcVar15 + 0x10) + lVar11 * 8);
          lVar5 = lVar18;
        } while (lVar17 < (long)cwd_n_used);
      }
      bVar4 = eolbyte;
      pbVar3 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar3 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
        *pbVar3 = bVar4;
        return;
      }
      __overflow(_stdout,(uint)eolbyte);
      return;
    }
    break;
  case 4:
    uVar16 = 0x2c;
    goto LAB_00107005;
  default:
    return;
  }
  uVar16 = 0x20;
LAB_00107005:
  print_with_separator(uVar16);
  return;
}



undefined8 gobble_file_constprop_0(char *param_1,uint param_2,byte param_3,char *param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  undefined8 uVar13;
  size_t sVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  undefined1 *puVar23;
  undefined1 *puVar25;
  uint uVar26;
  undefined8 *puVar27;
  byte bVar28;
  uint uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  byte bVar31;
  undefined1 auStack_3f8 [4];
  uint local_3f4;
  uint local_3f0;
  uint local_3ec;
  uint local_3e8;
  uint local_3e4;
  uint *local_3e0;
  undefined1 **local_3d8;
  uint local_3d0;
  bool local_3c9;
  undefined8 local_3c8;
  char *local_3c0;
  undefined1 *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  uint local_3a0;
  undefined1 local_39c [164];
  undefined1 local_2f8 [32];
  char local_2d8 [664];
  long local_40;
  undefined1 *puVar24;
  
  bVar28 = 0;
  puVar24 = auStack_3f8;
  puVar23 = auStack_3f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cwd_n_used == cwd_n_alloc) {
    cwd_file = xpalloc(cwd_file,&cwd_n_alloc,1,0xffffffffffffffff,0xd0);
  }
  puVar1 = (undefined8 *)(cwd_file + cwd_n_used * 0xd0);
  *puVar1 = 0;
  puVar1[0x19] = 0;
  puVar27 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar18 = (ulong)(((int)puVar1 - (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)
                        ) + 0xd0U >> 3); uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar27 = 0;
    puVar27 = puVar27 + (ulong)bVar28 * -2 + 1;
  }
  *(uint *)(puVar1 + 0x15) = param_2;
  puVar1[0x16] = &UNKNOWN_SECURITY_CONTEXT;
  bVar30 = cwd_some_quoted == '\0';
  *(undefined4 *)((long)puVar1 + 0xc4) = 0xffffffff;
  if ((bVar30) && (align_variable_outer_quotes != '\0')) {
    sVar9 = quotearg_buffer(local_2d8,2,param_1,0xffffffffffffffff,filename_quoting_options);
    if ((*param_1 == local_2d8[0]) &&
       (local_3c0 = (char *)sVar9, sVar9 = strlen(param_1), local_3c0 == (char *)sVar9)) {
      *(undefined4 *)((long)puVar1 + 0xc4) = 0;
      goto LAB_001074fd;
    }
    *(undefined4 *)((long)puVar1 + 0xc4) = 1;
    cwd_some_quoted = '\x01';
    if (param_3 == 0) goto LAB_00107658;
LAB_00107506:
    puVar25 = auStack_3f8;
    pcVar20 = param_1;
    if ((*param_1 == '/') || (puVar25 = auStack_3f8, pcVar20 = param_1, param_4 == (char *)0x0)) {
LAB_00107ec8:
      local_3c0 = pcVar20;
      pcVar20 = local_3c0;
      uVar7 = dereference;
      if (print_hyperlink != '\0') {
LAB_0010780c:
        local_3c0 = pcVar20;
        pcVar20 = local_3c0;
        *(undefined8 *)(puVar25 + -8) = 0x10781d;
        lVar16 = canonicalize_filename_mode(pcVar20,2);
        puVar1[2] = lVar16;
        pcVar20 = local_3c0;
        uVar7 = dereference;
        if (lVar16 == 0) {
          *(undefined8 *)(puVar25 + -8) = 0x1086bc;
          uVar17 = dcgettext(0,"error canonicalizing %s",5);
          pcVar20 = local_3c0;
          *(undefined8 *)(puVar25 + -8) = 0x1086d1;
          file_failure(param_3,uVar17,pcVar20);
          pcVar20 = local_3c0;
          uVar7 = dereference;
        }
      }
joined_r0x00107747:
      local_3c0 = pcVar20;
      dereference = uVar7;
      pcVar20 = local_3c0;
      if (3 < uVar7) goto LAB_0010774d;
      if (uVar7 < 2) {
LAB_00107849:
        local_3c0 = pcVar20;
        *(undefined8 *)(puVar25 + -8) = 0x10784e;
        uVar6 = calc_req_mask();
        pcVar20 = local_3c0;
        bVar31 = 0;
        *(undefined8 *)(puVar25 + -8) = 0x10786d;
        iVar8 = do_statx(0xffffff9c,pcVar20,puVar1 + 3,0x100,uVar6);
        goto joined_r0x00107774;
      }
      *(undefined8 *)(puVar25 + -8) = 0x107ee5;
      uVar6 = calc_req_mask();
      pcVar20 = local_3c0;
      if (param_3 == 0) goto LAB_00107849;
      *(undefined8 *)(puVar25 + -8) = 0x107f0b;
      iVar8 = do_statx(0xffffff9c,pcVar20,puVar1 + 3,0,uVar6);
      if (uVar7 != 2) {
        if (-1 < iVar8) {
          pcVar20 = local_3c0;
          if ((*(uint *)(puVar1 + 6) & 0xf000) != 0x4000) goto LAB_00107849;
          goto LAB_00107f2f;
        }
        *(undefined8 *)(puVar25 + -8) = 0x108512;
        piVar15 = __errno_location();
        pcVar20 = local_3c0;
        if ((*piVar15 == 2) || (*piVar15 == 0x28)) goto LAB_00107849;
        *(undefined8 *)(puVar25 + -8) = 0x10853c;
        uVar17 = dcgettext(0,"cannot access %s",5);
        pcVar20 = local_3c0;
        *(undefined8 *)(puVar25 + -8) = 0x108550;
        uVar13 = quotearg_style(4,pcVar20);
        iVar8 = *piVar15;
        *(undefined8 *)(puVar25 + -8) = 0x108562;
        error(0,iVar8,uVar17,uVar13);
        goto LAB_00107f80;
      }
LAB_00107f2f:
      bVar31 = param_3;
      if (iVar8 != 0) {
        *(undefined8 *)(puVar25 + -8) = 0x107f4d;
        uVar17 = dcgettext(0,"cannot access %s",5);
        pcVar20 = local_3c0;
        *(undefined8 *)(puVar25 + -8) = 0x107f61;
        uVar13 = quotearg_style(4,pcVar20);
        *(undefined8 *)(puVar25 + -8) = 0x107f69;
        piVar15 = __errno_location();
        iVar8 = *piVar15;
        *(undefined8 *)(puVar25 + -8) = 0x107f7a;
        error(0,iVar8,uVar17,uVar13);
        goto LAB_00107f80;
      }
      goto LAB_00107875;
    }
    uVar6 = 1;
LAB_00107520:
    local_3c8 = CONCAT44(local_3c8._4_4_,uVar6);
    local_3c0 = (char *)strlen(param_1);
    sVar9 = strlen(param_4);
    uVar18 = (long)local_3c0 + 0x19U + sVar9;
    puVar25 = auStack_3f8;
    while (puVar24 != auStack_3f8 + -(uVar18 & 0xfffffffffffff000)) {
      puVar23 = puVar25 + -0x1000;
      *(undefined8 *)(puVar25 + -8) = *(undefined8 *)(puVar25 + -8);
      puVar24 = puVar25 + -0x1000;
      puVar25 = puVar25 + -0x1000;
    }
    uVar18 = (ulong)((uint)uVar18 & 0xff0);
    lVar16 = -uVar18;
    if (uVar18 != 0) {
      *(undefined8 *)(puVar23 + -8) = *(undefined8 *)(puVar23 + -8);
    }
    cVar4 = *param_4;
    pcVar20 = (char *)((ulong)(puVar23 + lVar16 + 0xf) & 0xfffffffffffffff0);
    cVar5 = cVar4;
    if (cVar4 == '.') {
      cVar5 = param_4[1];
    }
    pcVar11 = pcVar20;
    pcVar22 = param_4;
    if (cVar5 != '\0') {
      do {
        pcVar21 = pcVar22;
        pcVar10 = pcVar11;
        pcVar22 = pcVar21 + 1;
        pcVar11 = pcVar10 + 1;
        *pcVar10 = cVar4;
        cVar4 = *pcVar22;
      } while (cVar4 != '\0');
      if ((param_4 < pcVar22) && (*pcVar21 != '/')) {
        *pcVar11 = '/';
        pcVar11 = pcVar10 + 2;
      }
    }
    cVar4 = *param_1;
    pcVar22 = param_1;
    while (cVar4 != '\0') {
      pcVar22 = pcVar22 + 1;
      *pcVar11 = cVar4;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar22;
    }
    *pcVar11 = '\0';
    puVar25 = puVar23 + lVar16;
    if ((int)local_3c8 != 0) goto LAB_00107ec8;
    puVar25 = puVar23 + lVar16;
    uVar7 = (uint)print_scontext;
    bVar28 = format_needs_capability;
LAB_00107628:
    local_3c0 = pcVar20;
    bVar31 = dereference == 4;
    if (param_3 != 0) goto LAB_001078b6;
LAB_0010763c:
    bVar28 = param_2 == 5 & bVar28;
    local_3c9 = param_2 == 6;
  }
  else {
LAB_001074fd:
    if (param_3 != 0) goto LAB_00107506;
LAB_00107658:
    if (print_hyperlink != '\0') {
      puVar25 = auStack_3f8;
      pcVar20 = param_1;
      if ((*param_1 != '/') &&
         (uVar6 = 1, puVar25 = auStack_3f8, pcVar20 = param_1, param_4 != (char *)0x0))
      goto LAB_00107520;
      goto LAB_0010780c;
    }
    if (((format_needs_stat != '\0') ||
        ((bVar30 = param_2 == 0, format_needs_type != '\0' && (bVar30)))) ||
       ((((param_2 == 3 || (bVar30)) && (print_with_color != '\0')) &&
        ((((DAT_00111bd0 != 0 &&
           (((2 < DAT_00111bd0 || (PTR___compound_literal_14_00111bd8[DAT_00111bd0 - 1] != '0')) ||
            (*PTR___compound_literal_14_00111bd8 != '0')))) ||
          ((DAT_00111bc0 != 0 &&
           (((2 < DAT_00111bc0 || (PTR___compound_literal_13_00111bc8[DAT_00111bc0 - 1] != '0')) ||
            (*PTR___compound_literal_13_00111bc8 != '0')))))) ||
         ((DAT_00111be0 != 0 &&
          (((2 < DAT_00111be0 || (PTR___compound_literal_15_00111be8[DAT_00111be0 - 1] != '0')) ||
           (*PTR___compound_literal_15_00111be8 != '0')))))))))) {
LAB_00107720:
      pcVar20 = param_1;
      uVar7 = dereference;
      puVar25 = auStack_3f8;
      if ((*param_1 != '/') &&
         (uVar6 = 1, pcVar20 = param_1, puVar25 = auStack_3f8, param_4 != (char *)0x0))
      goto LAB_00107520;
      goto joined_r0x00107747;
    }
    if (print_inode != '\0') {
      if ((param_2 == 6) || (bVar30)) goto LAB_001076bb;
      goto LAB_00107720;
    }
    if ((format_needs_type == '\0') || (param_2 != 6)) {
LAB_001084b0:
      if (((param_2 == 5) || (bVar30)) &&
         ((indicator_style == 3 ||
          ((print_with_color != '\0' &&
           (((DAT_00111b80 != 0 &&
             (((2 < DAT_00111b80 || (PTR___compound_literal_9_00111b88[DAT_00111b80 - 1] != '0')) ||
              (*PTR___compound_literal_9_00111b88 != '0')))) ||
            (((DAT_00111ba0 != 0 &&
              (((2 < DAT_00111ba0 || (PTR___compound_literal_11_00111ba8[DAT_00111ba0 - 1] != '0'))
               || (*PTR___compound_literal_11_00111ba8 != '0')))) ||
             ((DAT_00111bb0 != 0 &&
              (((2 < DAT_00111bb0 || (PTR___compound_literal_12_00111bb8[DAT_00111bb0 - 1] != '0'))
               || (*PTR___compound_literal_12_00111bb8 != '0')))))))))))))) goto LAB_00107720;
      uVar7 = (uint)print_scontext;
      if ((print_scontext | format_needs_capability) == 0) {
        puVar25 = auStack_3f8;
        uVar7 = (uint)(print_scontext | format_needs_capability);
        pcVar20 = param_1;
        bVar28 = 0;
      }
      else {
        puVar25 = auStack_3f8;
        pcVar20 = param_1;
        bVar28 = format_needs_capability;
        if ((*param_1 != '/') &&
           (uVar6 = 0, puVar25 = auStack_3f8, pcVar20 = param_1, param_4 != (char *)0x0))
        goto LAB_00107520;
      }
      goto LAB_00107628;
    }
LAB_001076bb:
    if (dereference != 4) {
      if (((color_symlink_as_referent == '\0') && (check_symlink_mode == '\0')) &&
         (print_inode == '\0')) goto LAB_001084b0;
      puVar25 = auStack_3f8;
      pcVar20 = param_1;
      if ((*param_1 != '/') &&
         (uVar6 = 1, puVar25 = auStack_3f8, pcVar20 = param_1, param_4 != (char *)0x0))
      goto LAB_00107520;
      goto LAB_00107849;
    }
    puVar25 = auStack_3f8;
    pcVar20 = param_1;
    if ((*param_1 != '/') &&
       (uVar6 = 1, puVar25 = auStack_3f8, pcVar20 = param_1, param_4 != (char *)0x0))
    goto LAB_00107520;
LAB_0010774d:
    local_3c0 = pcVar20;
    *(undefined8 *)(puVar25 + -8) = 0x107752;
    uVar6 = calc_req_mask();
    pcVar20 = local_3c0;
    bVar31 = 1;
    *(undefined8 *)(puVar25 + -8) = 0x107772;
    iVar8 = do_statx(0xffffff9c,pcVar20,puVar1 + 3,0,uVar6);
joined_r0x00107774:
    if (iVar8 != 0) {
      *(undefined8 *)(puVar25 + -8) = 0x10778d;
      uVar17 = dcgettext(0,"cannot access %s",5);
      pcVar20 = local_3c0;
      *(undefined8 *)(puVar25 + -8) = 0x1077a1;
      uVar13 = quotearg_style(4,pcVar20);
      *(undefined8 *)(puVar25 + -8) = 0x1077a9;
      piVar15 = __errno_location();
      iVar8 = *piVar15;
      *(undefined8 *)(puVar25 + -8) = 0x1077ba;
      error(0,iVar8,uVar17,uVar13);
      if (param_3 == 0) {
        if (exit_status == 0) {
          exit_status = 1;
        }
        *(undefined8 *)(puVar25 + -8) = 0x1077d9;
        uVar17 = xstrdup(param_1);
        cwd_n_used = cwd_n_used + 1;
        *puVar1 = uVar17;
      }
      else {
LAB_00107f80:
        exit_status = 2;
      }
      uVar17 = 0;
      goto LAB_00107b85;
    }
LAB_00107875:
    *(undefined1 *)(puVar1 + 0x17) = 1;
    bVar28 = format_needs_capability;
    uVar7 = (uint)print_scontext;
    param_2 = (uint)(char)d_type_filetype[*(uint *)(puVar1 + 6) >> 0xc & 0xf];
    *(uint *)(puVar1 + 0x15) = param_2;
    if (param_3 == 0) goto LAB_0010763c;
LAB_001078b6:
    if (param_2 != 3) goto LAB_0010763c;
    if (immediate_dirs == '\0') {
      *(undefined4 *)(puVar1 + 0x15) = 9;
      param_2 = 9;
      local_3c9 = false;
      bVar28 = 0;
    }
    else {
      local_3c9 = false;
      bVar28 = 0;
      param_2 = 3;
    }
  }
  local_3d8 = (undefined1 **)CONCAT71(local_3d8._1_7_,bVar28);
  local_3d0 = format;
  uVar7 = format == 0 | uVar7;
  bVar28 = (byte)uVar7 | bVar28;
  local_3c8 = CONCAT71(local_3c8._1_7_,bVar28);
  if (bVar28 == 0) {
    if ((check_symlink_mode != '\0') && (local_3c9 != false)) goto LAB_00107a9b;
    uVar17 = puVar1[0xb];
LAB_00107b27:
    if (print_block_size != '\0') goto LAB_00107c40;
LAB_00107b34:
    if (print_scontext != 0) {
LAB_00107b3d:
      pcVar20 = (char *)puVar1[0x16];
      *(undefined8 *)(puVar25 + -8) = 0x107b49;
      sVar9 = strlen(pcVar20);
      if (scontext_width < (int)sVar9) {
        scontext_width = (int)sVar9;
      }
      if (format == 0) goto LAB_00107ccc;
    }
  }
  else {
    local_3e4 = (uint)bVar31 << 0x11 | uVar7 << 0x10 | (uint)(byte)filetype_d_type[param_2];
    cVar4 = *(char *)(puVar1 + 0x17);
    *(undefined8 *)(puVar25 + -8) = 0x107947;
    puVar12 = (uint *)__errno_location();
    pcVar20 = local_3c0;
    uVar26 = local_3e4;
    uVar29 = unsupported_scontext_err_10;
    uVar7 = unsupported_return_9;
    local_3e0 = puVar12;
    if (((cVar4 == '\0') || (unsupported_cached_13 == '\0')) || (puVar1[3] != unsupported_device_12)
       ) {
      local_3d0 = CONCAT31(local_3d0._1_3_,(char)local_3d8);
      *puVar12 = 0;
      local_3d8 = &local_3b8;
      *(undefined8 *)(puVar25 + -8) = 0x1079b3;
      uVar7 = file_has_aclinfo(pcVar20,&local_3b8,uVar26);
      uVar26 = *puVar12;
      ppuVar3 = local_3d8;
      uVar19 = format;
      uVar29 = local_3a0;
      cVar4 = (char)local_3d0;
      if (*(char *)(puVar1 + 0x17) == '\0') goto LAB_00107e40;
      if ((int)uVar7 < 1) {
        local_3f4 = format;
        local_3f0 = CONCAT31(local_3f0._1_3_,(char)local_3d0);
        local_3ec = local_3a0;
        local_3e8 = uVar7;
        local_3d0 = uVar26;
        *(undefined8 *)(puVar25 + -8) = 0x107e17;
        cVar5 = acl_errno_valid(uVar26);
        uVar7 = local_3e8;
        uVar29 = local_3ec;
        cVar4 = (char)local_3f0;
        uVar26 = local_3d0;
        ppuVar3 = local_3d8;
        uVar19 = local_3f4;
        if (cVar5 == '\0') {
          if ((local_3e4 & 0x10000) != 0) {
            local_3f0 = local_3f4;
            local_3ec = CONCAT31(local_3ec._1_3_,cVar4);
            local_3e8 = local_3d0;
            local_3e4 = uVar7;
            local_3d0 = uVar29;
            *(undefined8 *)(puVar25 + -8) = 0x108214;
            cVar5 = acl_errno_valid(uVar29);
            uVar26 = local_3e8;
            ppuVar3 = local_3d8;
            uVar19 = local_3f0;
            uVar29 = local_3d0;
            uVar7 = local_3e4;
            cVar4 = (char)local_3ec;
            if (cVar5 != '\0') goto LAB_00107e40;
          }
          unsupported_return_9 = uVar7;
          unsupported_scontext_err_10 = uVar29;
          unsupported_scontext_11 = local_3a8;
          unsupported_cached_13 = '\x01';
          unsupported_device_12 = puVar1[3];
          ppuVar3 = local_3d8;
          uVar29 = unsupported_scontext_err_10;
          uVar7 = unsupported_return_9;
        }
        goto LAB_00107e40;
      }
      uVar26 = 3;
      cVar5 = '\0';
      bVar30 = local_3a0 != 0;
    }
    else {
      local_3b8 = local_39c;
      local_3a0 = unsupported_scontext_err_10;
      uVar26 = 0x5f;
      local_3b0 = 0;
      local_3a8 = unsupported_scontext_11;
      *puVar12 = 0x5f;
      ppuVar3 = &local_3b8;
      uVar19 = local_3d0;
      cVar4 = (char)local_3d8;
LAB_00107e40:
      local_3d8 = ppuVar3;
      if ((int)uVar7 < 0) {
        uVar26 = (uint)(uVar26 == 0xd || uVar26 == 2);
      }
      else {
        uVar26 = 0;
      }
      cVar5 = (char)uVar26;
      bVar30 = uVar29 != 0;
      bVar2 = (int)uVar7 < 1;
      if (bVar30 && bVar2) {
        local_3c8 = CONCAT71(local_3c8._1_7_,cVar5);
        bVar30 = bVar30 && bVar2;
      }
      else {
        uVar26 = 3 - (uVar29 == 0 && bVar2);
      }
    }
    pcVar20 = local_3c0;
    *(uint *)((long)puVar1 + 0xbc) = uVar26;
    any_has_acl = any_has_acl | (byte)local_3c8;
    if (((uVar19 == 0) && ((int)uVar7 < 0)) && (cVar5 == '\0')) {
      local_3c8 = CONCAT71(local_3c8._1_7_,cVar4);
      *(undefined8 *)(puVar25 + -8) = 0x108680;
      uVar17 = quotearg_n_style_colon(0,3,pcVar20);
      uVar7 = *local_3e0;
      *(undefined8 *)(puVar25 + -8) = 0x10869c;
      error(0,uVar7,&_LC3,uVar17);
      cVar4 = (char)local_3c8;
    }
    else if (((bVar30 & print_scontext & uVar29 != 0x5f) != 0) && (uVar29 != 0x3d)) {
      local_3c8 = CONCAT71(local_3c8._1_7_,cVar4);
      *(undefined8 *)(puVar25 + -8) = 0x1086f0;
      uVar17 = quotearg_n_style_colon(0,3,pcVar20);
      uVar7 = local_3a0;
      *(undefined8 *)(puVar25 + -8) = 0x108709;
      error(0,uVar7,&_LC3,uVar17);
      cVar4 = (char)local_3c8;
    }
    ppuVar3 = local_3d8;
    if (cVar4 != '\0') {
      *(undefined8 *)(puVar25 + -8) = 0x107a4a;
      cVar4 = aclinfo_has_xattr(ppuVar3,"security.capability");
      if (cVar4 != '\0') {
        lVar16 = puVar1[3];
        if ((*(char *)(puVar1 + 0x17) == '\0') ||
           ((unsupported_cached_8 != '\0' && (lVar16 == unsupported_device_7)))) {
          *local_3e0 = 0x5f;
        }
        else {
          *local_3e0 = 0x5f;
          *(undefined8 *)(puVar25 + -8) = 0x10812f;
          cVar4 = acl_errno_valid(0x5f);
          if (cVar4 == '\0') {
            unsupported_cached_8 = '\x01';
            unsupported_device_7 = lVar16;
          }
        }
        *(undefined1 *)(puVar1 + 0x18) = 0;
      }
    }
    ppuVar3 = local_3d8;
    puVar1[0x16] = local_3a8;
    local_3a8 = 0;
    *(undefined8 *)(puVar25 + -8) = 0x107a77;
    aclinfo_free(ppuVar3);
    if ((format == 0 || check_symlink_mode != '\0') && (local_3c9 != false)) {
LAB_00107a9b:
      pcVar20 = local_3c0;
      uVar17 = puVar1[9];
      *(undefined8 *)(puVar25 + -8) = 0x107aab;
      pcVar20 = (char *)areadlink_with_size(pcVar20,uVar17);
      puVar1[1] = pcVar20;
      if (pcVar20 == (char *)0x0) {
        *(undefined8 *)(puVar25 + -8) = 0x108373;
        uVar13 = dcgettext(0,"cannot read symbolic link %s",5);
        pcVar20 = local_3c0;
        *(undefined8 *)(puVar25 + -8) = 0x108387;
        local_3c8 = quotearg_style(4,pcVar20);
        *(undefined8 *)(puVar25 + -8) = 0x108393;
        piVar15 = __errno_location();
        uVar17 = local_3c8;
        iVar8 = *piVar15;
        *(undefined8 *)(puVar25 + -8) = 0x1083a8;
        error(0,iVar8,uVar13,uVar17);
        if (param_3 == 0) {
          if (exit_status == 0) {
            exit_status = 1;
          }
        }
        else {
          exit_status = 2;
        }
        pcVar20 = (char *)puVar1[1];
        if (pcVar20 == (char *)0x0) goto LAB_00107b1b;
      }
      if (*(int *)((long)puVar1 + 0xc4) == 0) {
        *(undefined8 *)(puVar25 + -8) = 0x108172;
        sVar9 = quotearg_buffer(local_2d8,2,pcVar20,0xffffffffffffffff,filename_quoting_options);
        if (*pcVar20 == local_2d8[0]) {
          *(undefined8 *)(puVar25 + -8) = 0x108350;
          sVar14 = strlen(pcVar20);
          if (sVar9 != sVar14) goto LAB_00108185;
        }
        else {
LAB_00108185:
          *(undefined4 *)((long)puVar1 + 0xc4) = 0xffffffff;
        }
        if (puVar1[1] == 0) goto LAB_00107b1b;
      }
      pcVar20 = local_3c0;
      if ((1 < indicator_style) || (check_symlink_mode != '\0')) {
        *(undefined8 *)(puVar25 + -8) = 0x107afc;
        iVar8 = do_statx(0xffffff9c,pcVar20,&local_3b8,0,2);
        if (iVar8 == 0) {
          *(undefined1 *)((long)puVar1 + 0xb9) = 1;
          *(uint *)((long)puVar1 + 0xac) = local_3a0;
        }
      }
    }
LAB_00107b1b:
    uVar17 = puVar1[0xb];
    if (format != 0) goto LAB_00107b27;
LAB_00107c40:
    *(undefined8 *)(puVar25 + -8) = 0x107c61;
    uVar13 = human_readable(uVar17,local_2d8,human_output_opts,0x200,output_block_size);
    *(undefined8 *)(puVar25 + -8) = 0x107c6e;
    iVar8 = gnu_mbswidth(uVar13,3);
    if (block_size_width < iVar8) {
      block_size_width = iVar8;
    }
    if (format != 0) goto LAB_00107b34;
    if (print_owner != '\0') {
      uVar6 = *(undefined4 *)((long)puVar1 + 0x34);
      if (numeric_ids == '\0') {
        *(undefined8 *)(puVar25 + -8) = 0x108400;
        lVar16 = getuser(uVar6);
        if (lVar16 == 0) goto LAB_00108041;
        *(undefined8 *)(puVar25 + -8) = 0x108416;
        iVar8 = gnu_mbswidth(lVar16,3);
      }
      else {
LAB_00108041:
        *(undefined8 *)(puVar25 + -8) = 0x108062;
        iVar8 = __snprintf_chk(0,0,2,0xffffffffffffffff,&_LC23,uVar6);
      }
      if (owner_width < iVar8) {
        owner_width = iVar8;
      }
    }
    if (print_group != '\0') {
      uVar6 = *(undefined4 *)(puVar1 + 7);
      if (numeric_ids == '\0') {
        *(undefined8 *)(puVar25 + -8) = 0x1083d8;
        lVar16 = getgroup(uVar6);
        if (lVar16 == 0) goto LAB_00107ff1;
        *(undefined8 *)(puVar25 + -8) = 0x1083ee;
        iVar8 = gnu_mbswidth(lVar16,3);
      }
      else {
LAB_00107ff1:
        *(undefined8 *)(puVar25 + -8) = 0x108012;
        iVar8 = __snprintf_chk(0,0,2,0xffffffffffffffff,&_LC23,uVar6);
      }
      if (group_width < iVar8) {
        group_width = iVar8;
      }
    }
    if (print_author != '\0') {
      uVar6 = *(undefined4 *)((long)puVar1 + 0x34);
      if (numeric_ids == '\0') {
        *(undefined8 *)(puVar25 + -8) = 0x108428;
        lVar16 = getuser(uVar6);
        if (lVar16 == 0) goto LAB_00107fa1;
        *(undefined8 *)(puVar25 + -8) = 0x10843e;
        iVar8 = gnu_mbswidth(lVar16,3);
      }
      else {
LAB_00107fa1:
        *(undefined8 *)(puVar25 + -8) = 0x107fc2;
        iVar8 = __snprintf_chk(0,0,2,0xffffffffffffffff,&_LC23,uVar6);
      }
      if (author_width < iVar8) {
        author_width = iVar8;
      }
    }
    if (print_scontext != 0) goto LAB_00107b3d;
    if (format != 0) goto joined_r0x00107b6c;
LAB_00107ccc:
    uVar13 = puVar1[5];
    *(undefined8 *)(puVar25 + -8) = 0x107cdc;
    pcVar20 = (char *)umaxtostr(uVar13,local_2f8);
    *(undefined8 *)(puVar25 + -8) = 0x107ce4;
    sVar9 = strlen(pcVar20);
    if (nlink_width < (int)sVar9) {
      nlink_width = (int)sVar9;
    }
    if ((param_2 - 2 & 0xfffffffd) == 0) {
      uVar13 = puVar1[8];
      *(undefined8 *)(puVar25 + -8) = 0x107d29;
      pcVar20 = (char *)umaxtostr((uint)((ulong)uVar13 >> 0x20) & 0xfffff000 |
                                  (uint)((ulong)uVar13 >> 8) & 0xfff,local_2d8);
      *(undefined8 *)(puVar25 + -8) = 0x107d31;
      sVar9 = strlen(pcVar20);
      if (major_device_number_width < (int)sVar9) {
        major_device_number_width = (int)sVar9;
      }
      uVar18 = puVar1[8];
      *(undefined8 *)(puVar25 + -8) = 0x107d58;
      pcVar20 = (char *)umaxtostr((uint)((uVar18 >> 0x14) << 8) | (uint)uVar18 & 0xff,local_2d8);
      *(undefined8 *)(puVar25 + -8) = 0x107d60;
      sVar9 = strlen(pcVar20);
      if (minor_device_number_width < (int)sVar9) {
        minor_device_number_width = (int)sVar9;
      }
      iVar8 = minor_device_number_width + 2 + major_device_number_width;
      if (file_size_width < iVar8) {
LAB_00107d88:
        file_size_width = iVar8;
      }
    }
    else {
      uVar13 = puVar1[9];
      *(undefined8 *)(puVar25 + -8) = 0x1080a2;
      uVar13 = human_readable(uVar13,local_2d8,file_human_output_opts,1,file_output_block_size);
      *(undefined8 *)(puVar25 + -8) = 0x1080af;
      iVar8 = gnu_mbswidth(uVar13,3);
      if (file_size_width < iVar8) goto LAB_00107d88;
    }
  }
joined_r0x00107b6c:
  if (print_inode != '\0') {
    uVar13 = puVar1[4];
    *(undefined8 *)(puVar25 + -8) = 0x107db0;
    pcVar20 = (char *)umaxtostr(uVar13,local_2d8);
    *(undefined8 *)(puVar25 + -8) = 0x107db8;
    sVar9 = strlen(pcVar20);
    if (inode_number_width < (int)sVar9) {
      inode_number_width = (int)sVar9;
    }
  }
  *(undefined8 *)(puVar25 + -8) = 0x107b7a;
  uVar13 = xstrdup(param_1);
  cwd_n_used = cwd_n_used + 1;
  *puVar1 = uVar13;
LAB_00107b85:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar25 + -8) = 0x108666;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_dir(char *param_1,char *param_2,char param_3)

{
  long *plVar1;
  char cVar2;
  _IO_FILE *p_Var3;
  char cVar4;
  FILE *pFVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  DIR *__dirp;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  dirent *pdVar13;
  char *pcVar14;
  size_t sVar15;
  char *pcVar16;
  size_t sVar17;
  long lVar18;
  void *__ptr;
  char *pcVar19;
  undefined **ppuVar20;
  long *plVar21;
  long in_FS_OFFSET;
  bool bVar22;
  undefined *puStack_440;
  char *pcStack_438;
  char *apcStack_430 [4];
  char *pcStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  char *pcStack_3f0;
  char *pcStack_3e8;
  undefined1 auStack_3e0 [16];
  undefined8 uStack_3c8;
  undefined8 *puStack_3b8;
  long local_388;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined1 local_2d7 [663];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar8 = __errno_location();
  *piVar8 = 0;
  __dirp = opendir(param_1);
  if (__dirp == (DIR *)0x0) {
    uVar11 = dcgettext(0,"cannot open directory %s",5);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      file_failure(param_3,uVar11,param_1);
      return;
    }
    goto LAB_00109138;
  }
  if (active_dir_set != 0) {
    iVar6 = dirfd(__dirp);
    if (iVar6 < 0) {
      iVar6 = do_statx(0xffffff9c,param_1,&local_368,0,0x100);
      uVar11 = local_368;
      uVar12 = uStack_360;
    }
    else {
      iVar6 = do_statx(iVar6,&_LC1,&local_368,0x1000,0x100);
      uVar11 = local_368;
      uVar12 = uStack_360;
    }
    if (iVar6 < 0) {
      uVar11 = dcgettext(0,"cannot determine device and inode of %s",5);
      uVar12 = quotearg_style(4,param_1);
      error(0,*piVar8,uVar11,uVar12);
      if (param_3 == '\0') {
        if (exit_status == 0) {
          exit_status = 1;
        }
      }
      else {
        exit_status = 2;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        closedir(__dirp);
        return;
      }
      goto LAB_00109138;
    }
    puVar9 = (undefined8 *)xmalloc(0x10);
    lVar18 = active_dir_set;
    *puVar9 = uVar12;
    puVar9[1] = uVar11;
    puVar10 = (undefined8 *)hash_insert(lVar18,puVar9);
    iVar6 = (int)lVar18;
    if (puVar10 == (undefined8 *)0x0) {
      xalloc_die();
      uVar11 = _program_name;
      ppuVar20 = &puStack_440;
      uStack_3c8 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      puStack_3b8 = puVar9;
      if (iVar6 == 0) {
        pcVar16 = "ls";
        uVar12 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
        __printf_chk(2,uVar12,uVar11);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "\nMandatory arguments to long options are mandatory for short options too.\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --block-size=SIZE      with -l, scale sizes by SIZE when printing them;\n                             e.g., \'--block-size=M\'; see SIZE format below\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -B, --ignore-backups       do not list implied entries ending with ~\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -c                         with -lt: sort by, and show, ctime (time of last\n                             change of file status information);\n                             with -l: show ctime and sort by name;\n                             otherwise: sort by ctime, newest first\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -C                         list entries by columns\n      --color[=WHEN]         color the output WHEN; more info below\n  -d, --directory            list directories themselves, not their contents\n  -D, --dired                generate output designed for Emacs\' dired mode\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -f                         same as -a -U\n  -F, --classify[=WHEN]      append indicator (one of */=>@|) to entries WHEN\n      --file-type            likewise, except do not append \'*\'\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --format=WORD          across,horizontal (-x), commas (-m), long (-l),\n                             single-column (-1), verbose (-l), vertical (-C)\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,"      --full-time            like -l --time-style=full-iso\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -g                         like -l, but do not list owner\n",
                                    5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --group-directories-first\n                             group directories before files\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -G, --no-group             in a long listing, don\'t print group names\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -h, --human-readable       with -l and -s, print sizes like 1K 234M 2G etc.\n      --si                   likewise, but use powers of 1000 not 1024\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                             (overridden by -a or -A)\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,"      --hyperlink[=WHEN]     hyperlink file names WHEN\n",5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --indicator-style=WORD\n                             append indicator with style WORD to entry names:\n                             none (default), slash (-p),\n                             file-type (--file-type), classify (-F)\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -k, --kibibytes            default to 1024-byte blocks for file system usage;\n                             used only with -s and per directory totals\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,"  -l                         use a long listing format\n",5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -L, --dereference          when showing file information for a symbolic\n                             link, show information for the file the link\n                             references rather than for the link itself\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -m                         fill width with a comma separated list of entries\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print entry names without quoting\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -q, --hide-control-chars   print ? instead of nongraphic characters\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --show-control-chars   show nongraphic characters as-is (the default,\n                             unless program is \'ls\' and output is a terminal)\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -Q, --quote-name           enclose entry names in double quotes\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --quoting-style=WORD   use quoting style WORD for entry names:\n                             literal, locale, shell, shell-always,\n                             shell-escape, shell-escape-always, c, escape\n                             (overrides QUOTING_STYLE environment variable)\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -S                         sort by file size, largest first\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --sort=WORD            change default \'name\' sort to WORD:\n                               none (-U), size (-S), time (-t),\n                               version (-v), extension (-X), name, width\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --time=WORD            select which timestamp used to display or sort;\n                               access time (-u): atime, access, use;\n                               metadata change time (-c): ctime, status;\n                               modified time (default): mtime, modification;\n                               birth time: birth, creation;\n                             with -l, WORD determines which time to show;\n                             with --sort=time, sort by WORD (newest first)\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "      --time-style=TIME_STYLE\n                             time/date format with -l; see TIME_STYLE below\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -t                         sort by time, newest first; see --time\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -u                         with -lt: sort by, and show, access time;\n                             with -l: show access time and sort by name;\n                             otherwise: sort by access time, newest first\n\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,"  -U                         do not sort directory entries\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -v                         natural sort of (version) numbers within text\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n      --zero                 end each output line with NUL, not newline\n  -1                         list one file per line\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,"      --version     output version information and exit\n",5)
        ;
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "\nThe TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\nFORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\nthen FORMAT1 applies to non-recent files and FORMAT2 to recent files.\nTIME_STYLE prefixed with \'posix-\' takes effect only outside the POSIX locale.\nAlso the TIME_STYLE environment variable sets the default style to use.\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "\nThe WHEN argument defaults to \'always\' and can also be \'auto\' or \'never\'.\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors(1) command to set it.\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        pFVar5 = _stdout;
        pcVar14 = (char *)dcgettext(0,
                                    "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n"
                                    ,5);
        fputs_unlocked(pcVar14,pFVar5);
        if ((_ls_mode != 1) && (pcVar16 = "vdir", _ls_mode == 2)) {
          pcVar16 = "dir";
        }
        pcVar14 = "[";
        puStack_440 = &_LC33;
        pcStack_438 = "test invocation";
        apcStack_430[0] = "coreutils";
        apcStack_430[1] = "Multi-call invocation";
        apcStack_430[2] = "sha224sum";
        apcStack_430[3] = "sha2 utilities";
        pcStack_410 = "sha256sum";
        pcStack_408 = "sha2 utilities";
        pcStack_400 = "sha384sum";
        pcStack_3f8 = "sha2 utilities";
        pcStack_3f0 = "sha512sum";
        pcStack_3e8 = "sha2 utilities";
        auStack_3e0 = (undefined1  [16])0x0;
        do {
          iVar7 = strcmp(pcVar16,pcVar14);
          if (iVar7 == 0) break;
          pcVar14 = *(char **)((long)ppuVar20 + 0x10);
          ppuVar20 = (undefined **)((long)ppuVar20 + 0x10);
        } while (pcVar14 != (char *)0x0);
        pcVar14 = *(char **)((long)ppuVar20 + 8);
        if (*(char **)((long)ppuVar20 + 8) == (char *)0x0) {
          pcVar14 = pcVar16;
        }
        uVar11 = dcgettext(0,"\n%s online help: <%s>\n",5);
        __printf_chk(2,uVar11,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        pcVar19 = setlocale(5,(char *)0x0);
        if ((pcVar19 != (char *)0x0) &&
           (iVar7 = strncmp(pcVar19,"en_",3), pFVar5 = _stdout, iVar7 != 0)) {
          pcVar19 = (char *)dcgettext(0,
                                      "Report any translation bugs to <https://translationproject.org/team/>\n"
                                      ,5);
          fputs_unlocked(pcVar19,pFVar5);
        }
        iVar7 = strcmp(pcVar16,"[");
        pcVar19 = "test";
        if (iVar7 != 0) {
          pcVar19 = pcVar16;
        }
        uVar11 = dcgettext(0,"Full documentation <%s%s>\n",5);
        __printf_chk(2,uVar11,"https://www.gnu.org/software/coreutils/",pcVar19);
        pcVar19 = "";
        if (pcVar16 == pcVar14) {
          pcVar19 = " invocation";
        }
        uVar11 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
        __printf_chk(2,uVar11,pcVar14,pcVar19);
      }
      else {
        uVar12 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
        __fprintf_chk(_stderr,2,uVar12,uVar11);
      }
                    /* WARNING: Subroutine does not return */
      exit(iVar6);
    }
    if (puVar9 == puVar10) {
      puVar9 = (undefined8 *)dev_ino_obstack._24_8_;
      if ((ulong)(dev_ino_obstack._32_8_ - dev_ino_obstack._24_8_) < 0x10) {
        rpl_obstack_newchunk(dev_ino_obstack,0x10);
        puVar9 = (undefined8 *)dev_ino_obstack._24_8_;
      }
      dev_ino_obstack._24_8_ = puVar9 + 2;
      *puVar9 = uVar12;
      puVar9[1] = uVar11;
      goto LAB_00108880;
    }
    free(puVar9);
    uVar11 = quotearg_n_style_colon(0,3,param_1);
    uVar12 = dcgettext(0,"%s: not listing already-listed directory",5);
    error(0,0,uVar12,uVar11);
    closedir(__dirp);
    exit_status = 2;
    goto LAB_00108b2b;
  }
LAB_00108880:
  if (0 < cwd_n_used) {
    plVar1 = sorted_file + cwd_n_used;
    plVar21 = sorted_file;
    do {
      puVar9 = (undefined8 *)*plVar21;
      plVar21 = plVar21 + 1;
      free((void *)*puVar9);
      free((void *)puVar9[1]);
      free((void *)puVar9[2]);
    } while (plVar1 != plVar21);
  }
  cVar4 = dired;
  cwd_some_quoted = 0;
  cwd_n_used = 0;
  any_has_acl = 0;
  inode_number_width = 0;
  block_size_width = 0;
  nlink_width = 0;
  owner_width = 0;
  group_width = 0;
  author_width = 0;
  scontext_width = 0;
  major_device_number_width = 0;
  minor_device_number_width = 0;
  file_size_width = 0;
  if (recursive == '\0') {
    if (print_dir_name == '\0') goto LAB_001089ff;
    if (first_0 == '\0') goto LAB_00108f30;
LAB_0010895e:
    first_0 = '\0';
    p_Var3 = _stdout;
    cVar4 = dired;
  }
  else {
    if (first_0 != '\0') goto LAB_0010895e;
LAB_00108f30:
    dired_pos = dired_pos + 1;
    pcVar14 = _stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pcVar14) {
      __overflow(_stdout,10);
      goto LAB_0010895e;
    }
    first_0 = '\0';
    _stdout->_IO_write_ptr = pcVar14 + 1;
    *pcVar14 = '\n';
    p_Var3 = _stdout;
  }
  _stdout = p_Var3;
  cVar2 = print_hyperlink;
  if (cVar4 != '\0') {
    dired_pos = dired_pos + 2;
    pcVar14 = p_Var3->_IO_write_ptr;
    if (pcVar14 < p_Var3->_IO_write_end) {
      p_Var3->_IO_write_ptr = pcVar14 + 1;
      *pcVar14 = ' ';
    }
    else {
      iVar6 = __overflow(p_Var3,0x20);
      cVar2 = print_hyperlink;
      if (iVar6 == -1) goto joined_r0x00108fb6;
    }
    pcVar14 = p_Var3->_IO_write_ptr;
    if (pcVar14 < p_Var3->_IO_write_end) {
      p_Var3->_IO_write_ptr = pcVar14 + 1;
      cVar2 = print_hyperlink;
      *pcVar14 = ' ';
    }
    else {
      __overflow(p_Var3,0x20);
      cVar2 = print_hyperlink;
    }
  }
joined_r0x00108fb6:
  __ptr = (void *)0x0;
  if ((cVar2 != '\0') &&
     (__ptr = (void *)canonicalize_filename_mode(param_1,2), __ptr == (void *)0x0)) {
    uVar11 = dcgettext(0,"error canonicalizing %s",5);
    file_failure(param_3,uVar11,param_1);
  }
  if (param_2 == (char *)0x0) {
    param_2 = param_1;
  }
  quote_name(param_2,dirname_quoting_options,0xffffffff,0,1,subdired_obstack);
  free(__ptr);
  p_Var3 = _stdout;
  dired_pos = dired_pos + 2;
  pcVar14 = _stdout->_IO_write_ptr;
  if (pcVar14 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar14 + 1;
    *pcVar14 = ':';
  }
  else {
    iVar6 = __overflow(_stdout,0x3a);
    if (iVar6 == -1) goto LAB_001089ff;
  }
  pcVar14 = p_Var3->_IO_write_ptr;
  if (pcVar14 < p_Var3->_IO_write_end) {
    p_Var3->_IO_write_ptr = pcVar14 + 1;
    *pcVar14 = '\n';
  }
  else {
    __overflow(p_Var3,10);
  }
LAB_001089ff:
  local_388 = 0;
  do {
    *piVar8 = 0;
    pdVar13 = readdir(__dirp);
    if (pdVar13 == (dirent *)0x0) {
      iVar6 = *piVar8;
      if (iVar6 == 0) break;
      uVar11 = dcgettext(0,"reading directory %s",5);
      uVar12 = quotearg_style(4,param_1);
      error(0,*piVar8,uVar11,uVar12);
      if (param_3 == '\0') {
        if (exit_status == 0) {
          exit_status = 1;
        }
      }
      else {
        exit_status = 2;
      }
      if (iVar6 != 0x4b) break;
    }
    else {
      pcVar14 = pdVar13->d_name;
      puVar9 = ignore_patterns;
      if (ignore_mode != 2) {
        if (pdVar13->d_name[0] == '.') {
          if ((ignore_mode == 0) ||
             (pdVar13->d_name[(ulong)(pdVar13->d_name[1] == '.') + 1] == '\0')) goto LAB_00108a88;
        }
        else {
          puVar10 = hide_patterns;
          if (ignore_mode == 0) {
            for (; puVar9 = ignore_patterns, puVar10 != (undefined8 *)0x0;
                puVar10 = (undefined8 *)puVar10[1]) {
              iVar6 = fnmatch((char *)*puVar10,pcVar14,4);
              if (iVar6 == 0) goto LAB_00108a88;
            }
          }
        }
      }
      for (; puVar9 != (undefined8 *)0x0; puVar9 = (undefined8 *)puVar9[1]) {
        iVar6 = fnmatch((char *)*puVar9,pcVar14,4);
        if (iVar6 == 0) goto LAB_00108a88;
      }
      lVar18 = gobble_file_constprop_0
                         (pcVar14,(int)(char)d_type_filetype[pdVar13->d_type],0,param_1);
      if ((((format == 1) && (sort_type == 6)) && (print_block_size == '\0')) && (recursive == '\0')
         ) {
        sort_files();
        print_current_files();
        if (0 < cwd_n_used) {
          plVar1 = sorted_file + cwd_n_used;
          plVar21 = sorted_file;
          do {
            puVar9 = (undefined8 *)*plVar21;
            plVar21 = plVar21 + 1;
            free((void *)*puVar9);
            free((void *)puVar9[1]);
            free((void *)puVar9[2]);
          } while (plVar21 != plVar1);
        }
        cwd_n_used = 0;
        cwd_some_quoted = 0;
        any_has_acl = 0;
        inode_number_width = 0;
        block_size_width = 0;
        nlink_width = 0;
        owner_width = 0;
        group_width = 0;
        author_width = 0;
        scontext_width = 0;
        major_device_number_width = 0;
        minor_device_number_width = 0;
        file_size_width = 0;
      }
      local_388 = local_388 + lVar18;
    }
LAB_00108a88:
    process_signals();
  } while( true );
  iVar6 = closedir(__dirp);
  if (iVar6 != 0) {
    uVar11 = dcgettext(0,"closing directory %s",5);
    uVar12 = quotearg_style(4,param_1);
    error(0,*piVar8,uVar11,uVar12);
    if (param_3 == '\0') {
      if (exit_status == 0) {
        exit_status = 1;
      }
    }
    else {
      exit_status = 2;
    }
  }
  sort_files();
  if (recursive != '\0') {
    extract_dirs_from_files(param_1,0);
  }
  if ((format == 0) || (print_block_size != '\0')) {
    pcVar14 = (char *)human_readable(local_388,local_2d7,human_output_opts,0x200,output_block_size);
    sVar15 = strlen(pcVar14);
    cVar4 = eolbyte;
    pcVar14[-1] = ' ';
    bVar22 = dired != '\0';
    pcVar14[sVar15] = cVar4;
    p_Var3 = _stdout;
    if (bVar22) {
      dired_pos = dired_pos + 2;
      pcVar16 = _stdout->_IO_write_ptr;
      if (pcVar16 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar16 + 1;
        *pcVar16 = ' ';
      }
      else {
        iVar6 = __overflow(_stdout,0x20);
        if (iVar6 == -1) goto LAB_00108bab;
      }
      pcVar16 = p_Var3->_IO_write_ptr;
      if (pcVar16 < p_Var3->_IO_write_end) {
        p_Var3->_IO_write_ptr = pcVar16 + 1;
        *pcVar16 = ' ';
      }
      else {
        __overflow(p_Var3,0x20);
      }
    }
LAB_00108bab:
    pcVar16 = (char *)dcgettext(0,"total",5);
    sVar17 = strlen(pcVar16);
    dired_outbuf(pcVar16,sVar17);
    dired_outbuf(pcVar14 + -1,pcVar14 + sVar15 + (1 - (long)(pcVar14 + -1)));
  }
  if (cwd_n_used != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      print_current_files();
      return;
    }
    goto LAB_00109138;
  }
LAB_00108b2b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109138:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  char *__s1;
  long in_FS_OFFSET;
  undefined *local_b8;
  char *pcStack_b0;
  char *local_a8 [4];
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  undefined1 local_58 [16];
  undefined8 local_40;
  
  uVar5 = _program_name;
  ppuVar7 = &local_b8;
  local_40 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    __s1 = "ls";
    uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
    __printf_chk(2,uVar3,uVar5);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nMandatory arguments to long options are mandatory for short options too.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --block-size=SIZE      with -l, scale sizes by SIZE when printing them;\n                             e.g., \'--block-size=M\'; see SIZE format below\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -B, --ignore-backups       do not list implied entries ending with ~\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -c                         with -lt: sort by, and show, ctime (time of last\n                             change of file status information);\n                             with -l: show ctime and sort by name;\n                             otherwise: sort by ctime, newest first\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -C                         list entries by columns\n      --color[=WHEN]         color the output WHEN; more info below\n  -d, --directory            list directories themselves, not their contents\n  -D, --dired                generate output designed for Emacs\' dired mode\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -f                         same as -a -U\n  -F, --classify[=WHEN]      append indicator (one of */=>@|) to entries WHEN\n      --file-type            likewise, except do not append \'*\'\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --format=WORD          across,horizontal (-x), commas (-m), long (-l),\n                             single-column (-1), verbose (-l), vertical (-C)\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"      --full-time            like -l --time-style=full-iso\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"  -g                         like -l, but do not list owner\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --group-directories-first\n                             group directories before files\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -G, --no-group             in a long listing, don\'t print group names\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -h, --human-readable       with -l and -s, print sizes like 1K 234M 2G etc.\n      --si                   likewise, but use powers of 1000 not 1024\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                             (overridden by -a or -A)\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"      --hyperlink[=WHEN]     hyperlink file names WHEN\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --indicator-style=WORD\n                             append indicator with style WORD to entry names:\n                             none (default), slash (-p),\n                             file-type (--file-type), classify (-F)\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -k, --kibibytes            default to 1024-byte blocks for file system usage;\n                             used only with -s and per directory totals\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"  -l                         use a long listing format\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -L, --dereference          when showing file information for a symbolic\n                             link, show information for the file the link\n                             references rather than for the link itself\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -m                         fill width with a comma separated list of entries\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print entry names without quoting\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -q, --hide-control-chars   print ? instead of nongraphic characters\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --show-control-chars   show nongraphic characters as-is (the default,\n                             unless program is \'ls\' and output is a terminal)\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -Q, --quote-name           enclose entry names in double quotes\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --quoting-style=WORD   use quoting style WORD for entry names:\n                             literal, locale, shell, shell-always,\n                             shell-escape, shell-escape-always, c, escape\n                             (overrides QUOTING_STYLE environment variable)\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"  -S                         sort by file size, largest first\n",5
                              );
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --sort=WORD            change default \'name\' sort to WORD:\n                               none (-U), size (-S), time (-t),\n                               version (-v), extension (-X), name, width\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --time=WORD            select which timestamp used to display or sort;\n                               access time (-u): atime, access, use;\n                               metadata change time (-c): ctime, status;\n                               modified time (default): mtime, modification;\n                               birth time: birth, creation;\n                             with -l, WORD determines which time to show;\n                             with --sort=time, sort by WORD (newest first)\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "      --time-style=TIME_STYLE\n                             time/date format with -l; see TIME_STYLE below\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -t                         sort by time, newest first; see --time\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -u                         with -lt: sort by, and show, access time;\n                             with -l: show access time and sort by name;\n                             otherwise: sort by access time, newest first\n\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"  -U                         do not sort directory entries\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -v                         natural sort of (version) numbers within text\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n      --zero                 end each output line with NUL, not newline\n  -1                         list one file per line\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nThe TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\nFORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\nthen FORMAT1 applies to non-recent files and FORMAT2 to recent files.\nTIME_STYLE prefixed with \'posix-\' takes effect only outside the POSIX locale.\nAlso the TIME_STYLE environment variable sets the default style to use.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nThe WHEN argument defaults to \'always\' and can also be \'auto\' or \'never\'.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors(1) command to set it.\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    pFVar1 = _stdout;
    pcVar4 = (char *)dcgettext(0,
                               "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n"
                               ,5);
    fputs_unlocked(pcVar4,pFVar1);
    if ((_ls_mode != 1) && (__s1 = "vdir", _ls_mode == 2)) {
      __s1 = "dir";
    }
    pcVar4 = "[";
    local_b8 = &_LC33;
    pcStack_b0 = "test invocation";
    local_a8[0] = "coreutils";
    local_a8[1] = "Multi-call invocation";
    local_a8[2] = "sha224sum";
    local_a8[3] = "sha2 utilities";
    local_88 = "sha256sum";
    pcStack_80 = "sha2 utilities";
    local_78 = "sha384sum";
    pcStack_70 = "sha2 utilities";
    local_68 = "sha512sum";
    pcStack_60 = "sha2 utilities";
    local_58 = (undefined1  [16])0x0;
    do {
      iVar2 = strcmp(__s1,pcVar4);
      if (iVar2 == 0) break;
      pcVar4 = *(char **)((long)ppuVar7 + 0x10);
      ppuVar7 = (undefined **)((long)ppuVar7 + 0x10);
    } while (pcVar4 != (char *)0x0);
    pcVar4 = *(char **)((long)ppuVar7 + 8);
    if (*(char **)((long)ppuVar7 + 8) == (char *)0x0) {
      pcVar4 = __s1;
    }
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar6 = setlocale(5,(char *)0x0);
    if (pcVar6 != (char *)0x0) {
      iVar2 = strncmp(pcVar6,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar6 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar6,pFVar1);
      }
    }
    iVar2 = strcmp(__s1,"[");
    pcVar6 = "test";
    if (iVar2 != 0) {
      pcVar6 = __s1;
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",pcVar6);
    pcVar6 = "";
    if (__s1 == pcVar4) {
      pcVar6 = " invocation";
    }
    uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
    __printf_chk(2,uVar5,pcVar4,pcVar6);
  }
  else {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 main(uint param_1,FILE *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  void *__s1;
  FILE *__stream;
  long *plVar4;
  char cVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long *__ptr;
  ulong uVar15;
  char *pcVar16;
  size_t sVar17;
  size_t *psVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 *puVar21;
  char *pcVar22;
  undefined *puVar23;
  ulong in_R9;
  size_t *in_R10;
  undefined8 in_R11;
  char *pcVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined1 *puVar27;
  size_t *psVar28;
  long in_FS_OFFSET;
  byte *local_a0;
  size_t *local_90;
  ulong local_88;
  undefined *local_80;
  int local_78;
  byte *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  byte local_43;
  byte local_42;
  undefined1 local_41;
  long local_40;
  
  puVar27 = long_options;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*(undefined8 *)param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  _exit_failure = 2;
  atexit((__func *)&close_stdout);
  exit_status = 0;
  print_dir_name = 1;
  pending_dirs = (long *)0x0;
  local_88 = 0xffffffffffffffff;
  local_80 = (undefined *)0xffffffffffffffff;
  local_a0 = (byte *)0xffffffff;
  local_78 = -1;
  iVar10 = -1;
  uVar9 = 0xffffffff;
  bVar6 = false;
  local_90 = (size_t *)0x0;
  current_time = __LC102;
  DAT_0010ab78 = _UNK_00111c58;
LAB_0010f510:
  puVar21 = long_options;
  uVar15 = (ulong)param_1;
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0xffffffff);
  psVar18 = &local_58;
  iVar8 = getopt_long(uVar15,param_2,"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1");
  psVar28 = _optarg;
  if (iVar8 != -1) {
    if (0x114 < iVar8 + 0x83U) goto switchD_0010f547_caseD_ffffff7f;
    switch(iVar8) {
    case 0x31:
      uVar9 = (uint)(uVar9 != 0);
      break;
    case 0x41:
      ignore_mode = 1;
      break;
    case 0x42:
      puVar13 = (undefined8 *)xmalloc(0x10);
      *puVar13 = &_LC106;
      puVar13[1] = ignore_patterns;
      ignore_patterns = puVar13;
      puVar13 = (undefined8 *)xmalloc(0x10);
      *puVar13 = &_LC107;
      puVar13[1] = ignore_patterns;
      ignore_patterns = puVar13;
      break;
    case 0x43:
      uVar9 = 2;
      break;
    case 0x44:
      in_R11 = 0;
      print_hyperlink = 0;
      dired = 1;
      uVar9 = 0;
      break;
    case 0x46:
      if (_optarg != (size_t *)0x0) {
        in_R9 = 1;
        in_R10 = psVar18;
        lVar25 = __xargmatch_internal
                           ("--classify",_optarg,when_args,when_types,4,_argmatch_die,1,psVar18);
        if ((*(int *)(when_types + lVar25 * 4) != 1) &&
           ((*(int *)(when_types + lVar25 * 4) != 2 || (cVar5 = stdout_isatty(), cVar5 == '\0'))))
        break;
      }
      indicator_style = 3;
      break;
    case 0x47:
      print_group = 0;
      break;
    case 0x48:
      dereference = 2;
      break;
    case 0x49:
      puVar12 = (undefined8 *)xmalloc(0x10);
      puVar13 = ignore_patterns;
      ignore_patterns = puVar12;
      *puVar12 = psVar28;
      puVar12[1] = puVar13;
      break;
    case 0x4c:
      dereference = 4;
      break;
    case 0x4e:
      local_78 = 0;
      break;
    case 0x51:
      local_78 = 5;
      break;
    case 0x52:
      recursive = 1;
      break;
    case 0x53:
      local_a0 = (byte *)0x3;
      break;
    case 0x54:
      in_R9 = dcgettext(0,"invalid tab size",5);
      local_80 = (undefined *)xnumtoumax(_optarg,0,0,0x7fffffffffffffff,&_LC1,in_R9,2,0);
      break;
    case 0x55:
      local_a0 = (byte *)0x6;
      break;
    case 0x58:
      local_a0 = (byte *)0x1;
      break;
    case 0x5a:
      print_scontext = 1;
      break;
    case 0x61:
      ignore_mode = 2;
      break;
    case 0x62:
      local_78 = 7;
      break;
    case 99:
      time_type = 1;
      explicit_time = '\x01';
      break;
    case 100:
      immediate_dirs = '\x01';
      break;
    case 0x66:
      ignore_mode = 2;
      local_a0 = (byte *)0x6;
      break;
    case 0x67:
      print_owner = 0;
    case 0x6c:
      uVar9 = 0;
      break;
    case 0x68:
      human_output_opts = 0xb0;
      file_human_output_opts = 0xb0;
      output_block_size = 1;
      file_output_block_size = 1;
      break;
    case 0x69:
      print_inode = 1;
      break;
    case 0x6b:
      bVar6 = true;
      break;
    case 0x6d:
      uVar9 = 4;
      break;
    case 0x6e:
      numeric_ids = 1;
      uVar9 = 0;
      break;
    case 0x6f:
      print_group = 0;
      uVar9 = 0;
      break;
    case 0x70:
      indicator_style = 1;
      break;
    case 0x71:
      iVar10 = 1;
      break;
    case 0x72:
      sort_reverse = 1;
      break;
    case 0x73:
      print_block_size = 1;
      break;
    case 0x74:
      local_a0 = (byte *)0x5;
      break;
    case 0x75:
      time_type = 2;
      explicit_time = '\x01';
      break;
    case 0x76:
      goto switchD_0010f547_caseD_76;
    case 0x77:
      local_88 = decode_line_length(_optarg);
      if ((long)local_88 < 0) {
        param_2 = (FILE *)quote(_optarg);
        uVar19 = dcgettext(0,"invalid line width",5);
        error(2,0,"%s: %s",uVar19,param_2);
switchD_0010f547_caseD_76:
        local_a0 = (byte *)0x4;
      }
      break;
    case 0x78:
      uVar9 = 3;
      break;
    case 0x80:
      print_author = 1;
      break;
    case 0x81:
      iVar8 = human_options(_optarg,&human_output_opts,&output_block_size);
      if (iVar8 != 0) {
        xstrtol_fatal(iVar8,(ulong)local_58 & 0xffffffff,0,long_options,_optarg);
        goto LAB_0011105a;
      }
      file_human_output_opts = human_output_opts;
      file_output_block_size = output_block_size;
      break;
    case 0x82:
      if (_optarg == (size_t *)0x0) {
LAB_001102ac:
        bVar7 = 1;
      }
      else {
        in_R9 = _argmatch_die;
        lVar25 = __xargmatch_internal("--color",_optarg,when_args,when_types,4,_argmatch_die,1);
        if (*(int *)(when_types + lVar25 * 4) == 1) goto LAB_001102ac;
        bVar7 = 0;
        if (*(int *)(when_types + lVar25 * 4) == 2) {
          bVar7 = stdout_isatty();
        }
      }
      print_with_color = bVar7 & 1;
      break;
    case 0x83:
      dereference = 3;
      break;
    case 0x84:
      indicator_style = 2;
      break;
    case 0x85:
      in_R9 = uVar15;
      lVar25 = __xargmatch_internal
                         ("--format",_optarg,format_args,format_types,4,_argmatch_die,1,uVar15);
      uVar9 = *(uint *)(format_types + lVar25 * 4);
      break;
    case 0x86:
      uVar9 = 0;
      local_90 = (size_t *)0x10cdb9;
      break;
    case 0x87:
      directories_first = 1;
      break;
    case 0x88:
      puVar12 = (undefined8 *)xmalloc(0x10);
      puVar13 = hide_patterns;
      hide_patterns = puVar12;
      *puVar12 = _optarg;
      puVar12[1] = puVar13;
      break;
    case 0x89:
      if (_optarg == (size_t *)0x0) {
LAB_00110295:
        bVar7 = 1;
      }
      else {
        in_R9 = 1;
        in_R10 = psVar18;
        lVar25 = __xargmatch_internal
                           ("--hyperlink",_optarg,when_args,when_types,4,_argmatch_die,1,psVar18);
        if (*(int *)(when_types + lVar25 * 4) == 1) goto LAB_00110295;
        bVar7 = 0;
        if (*(int *)(when_types + lVar25 * 4) == 2) {
          bVar7 = stdout_isatty();
        }
      }
      print_hyperlink = bVar7 & 1;
      break;
    case 0x8a:
      in_R9 = _argmatch_die;
      lVar25 = __xargmatch_internal
                         ("--indicator-style",_optarg,indicator_style_args,"",4,_argmatch_die,1,
                          puVar21);
      indicator_style =
           *(uint *)("lcrcecrsnofidilnpisobdcdmiorexdosusgstowtwcamhcl" + lVar25 * 4 + 0x30);
      break;
    case 0x8b:
      in_R9 = _argmatch_die;
      lVar25 = __xargmatch_internal
                         ("--quoting-style",_optarg,&quoting_style_args,&quoting_style_vals,4,
                          _argmatch_die,1,in_R11);
      local_78 = *(int *)(&quoting_style_vals + lVar25 * 4);
      break;
    case 0x8c:
      goto switchD_0010f547_caseD_8c;
    case 0x8d:
      human_output_opts = 0x90;
      file_human_output_opts = 0x90;
      output_block_size = 1;
      file_output_block_size = 1;
      break;
    case 0x8e:
      in_R9 = _argmatch_die;
      lVar25 = __xargmatch_internal
                         ("--sort",_optarg,sort_args,sort_types,4,_argmatch_die,1,
                          (long)&switchD_0010f547::switchdataD_0010ae58 +
                          (long)(int)(&switchD_0010f547::switchdataD_0010ae58)[iVar8 + 0x83U]);
      local_a0 = (byte *)(ulong)*(uint *)(sort_types + lVar25 * 4);
      break;
    case 0x8f:
      in_R11 = 1;
      in_R9 = _argmatch_die;
      lVar25 = __xargmatch_internal("--time",_optarg,time_args,time_types,4,_argmatch_die,1,in_R10);
      explicit_time = '\x01';
      time_type = *(undefined4 *)(time_types + lVar25 * 4);
      break;
    case 0x90:
      goto switchD_0010f547_caseD_90;
    case 0x91:
      eolbyte = '\0';
      in_R10 = (size_t *)0x0;
      print_with_color = 0;
      uVar9 = (uint)(uVar9 != 0);
      local_78 = 0;
switchD_0010f547_caseD_8c:
      iVar10 = 0;
      break;
    case -0x83:
      uVar19 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar20 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
      puVar23 = &_LC31;
      if ((_ls_mode != 1) && (puVar23 = &_LC30, _ls_mode == 2)) {
        puVar23 = &_LC32;
      }
      version_etc(_stdout,puVar23,"GNU coreutils",_Version,uVar20,uVar19,0,in_R9);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case -0x82:
      goto switchD_0010f547_caseD_ffffff7e;
    default:
      goto switchD_0010f547_caseD_ffffff7f;
    }
    goto LAB_0010f510;
  }
  if (output_block_size == 0) {
    pcVar24 = getenv("LS_BLOCK_SIZE");
    human_options(pcVar24,&human_output_opts,&output_block_size);
    if ((pcVar24 != (char *)0x0) || (pcVar24 = getenv("BLOCK_SIZE"), pcVar24 != (char *)0x0)) {
      file_human_output_opts = human_output_opts;
      file_output_block_size = output_block_size;
    }
    if (bVar6) {
      output_block_size = 0x400;
      human_output_opts = 0;
    }
  }
  if ((int)uVar9 < 0) {
    if (_ls_mode == 1) {
      bVar7 = stdout_isatty();
      uVar9 = bVar7 + 1;
    }
    else {
      uVar9 = (uint)(_ls_mode == 2) * 2;
    }
  }
  format = uVar9;
  if ((uVar9 - 2 < 3) || (print_with_color != 0)) {
    if (-1 < (long)local_88) goto LAB_0010f5c0;
    cVar5 = stdout_isatty();
    if ((cVar5 != '\0') && (iVar8 = ioctl(1,0x5413,&local_58), -1 < iVar8)) {
      local_88 = (ulong)local_58._2_2_;
      if (local_58._2_2_ != 0) goto LAB_0010f5c0;
    }
    pcVar24 = getenv("COLUMNS");
    if ((pcVar24 != (char *)0x0) && (*pcVar24 != '\0')) {
      local_88 = decode_line_length(pcVar24);
      if (-1 < (long)local_88) goto LAB_0010f5c0;
      uVar19 = quote(pcVar24);
      uVar20 = dcgettext(0,"ignoring invalid width in environment variable COLUMNS: %s",5);
      error(0,0,uVar20,uVar19);
    }
  }
  else if (-1 < (long)local_88) goto LAB_0010f5c0;
  local_88 = 0x50;
LAB_0010f5c0:
  max_idx = (local_88 / 3 + 1) - (ulong)(local_88 % 3 == 0);
  line_length = local_88;
  puVar23 = tabsize;
  if ((format - 2 < 3) && (puVar23 = local_80, (long)local_80 < 0)) {
    tabsize = (undefined *)0x8;
    pcVar24 = getenv("TABSIZE");
    puVar23 = tabsize;
    if ((pcVar24 != (char *)0x0) &&
       (iVar8 = xstrtoumax(pcVar24,0,0,&local_58,&_LC1), puVar23 = local_58, iVar8 != 0)) {
      uVar19 = quote(pcVar24);
      uVar20 = dcgettext(0,"ignoring invalid tab size in environment variable TABSIZE: %s",5);
      error(0,0,uVar20,uVar19);
      puVar23 = tabsize;
    }
  }
  tabsize = puVar23;
  bVar6 = iVar10 != 0;
  pcVar24 = puVar27;
  if (-1 < iVar10) goto LAB_0010f611;
  bVar7 = 0;
  if (_ls_mode == 1) goto LAB_00110d92;
LAB_00110462:
  bVar6 = (bool)(bVar7 & 1);
  pcVar24 = puVar27;
LAB_0010f611:
  qmark_funny_chars = bVar6;
  if (local_78 < 0) {
    pcVar16 = getenv("QUOTING_STYLE");
    if (pcVar16 == (char *)0x0) goto LAB_00110424;
    pcVar24 = &quoting_style_vals;
    iVar10 = argmatch(pcVar16,&quoting_style_args,&quoting_style_vals,4);
    if (iVar10 < 0) goto LAB_0011109d;
    local_78 = *(int *)(&quoting_style_vals + (long)iVar10 * 4);
    if (local_78 < 0) goto LAB_00110424;
  }
LAB_0010f622:
  set_quoting_style(0,local_78);
  psVar28 = (size_t *)pcVar24;
LAB_0010f62d:
  uVar9 = get_quoting_style(0);
  if (((format == 0) || ((format - 2 < 2 && (line_length != 0)))) && (uVar9 < 7)) {
    if ((0x4aUL >> ((ulong)uVar9 & 0x3f) & 1) == 0) {
      align_variable_outer_quotes = 0;
      filename_quoting_options = clone_quoting_options(0);
    }
    else {
      align_variable_outer_quotes = 1;
      filename_quoting_options = clone_quoting_options(0);
    }
  }
  else {
    align_variable_outer_quotes = 0;
    filename_quoting_options = clone_quoting_options(0);
    if (uVar9 == 7) {
      set_char_quoting(filename_quoting_options,0x20,1);
    }
  }
  if (1 < indicator_style) {
    pcVar24 = "*=>@|" + (indicator_style - 2);
    cVar5 = "*=>@|"[indicator_style - 2];
    while (cVar5 != '\0') {
      pcVar24 = pcVar24 + 1;
      set_char_quoting(filename_quoting_options,(int)cVar5,1);
      cVar5 = *pcVar24;
    }
  }
  dirname_quoting_options = clone_quoting_options(0);
  set_char_quoting(dirname_quoting_options,0x3a,1);
  dired = (print_hyperlink ^ 1) & format == 0 & dired;
  if ((int)eolbyte < (int)(uint)dired) {
    uVar19 = dcgettext(0,"--dired and --zero are incompatible",5);
    error(2,0,uVar19);
LAB_00110fed:
    uVar19 = quote(psVar28);
    uVar20 = dcgettext(0,"invalid time style format %s",5);
    error(2,0,uVar20,uVar19);
    goto LAB_0011101f;
  }
  sort_type = (uint)local_a0;
  if (((int)(uint)local_a0 < 0) && (sort_type = 0, format != 0)) {
    sort_type = -(uint)(explicit_time != '\0') & 5;
  }
  pcVar24 = (char *)psVar28;
  if (format == 0) {
    pcVar24 = (char *)local_90;
    if ((local_90 == (size_t *)0x0) &&
       (pcVar24 = getenv("TIME_STYLE"), local_90 = (size_t *)pcVar24,
       (size_t *)pcVar24 == (size_t *)0x0)) {
      local_90 = (size_t *)0x10cdc2;
      pcVar24 = (char *)psVar28;
      psVar28 = local_90;
    }
    else {
      while (iVar10 = strncmp(pcVar24,"posix-",6), psVar28 = (size_t *)pcVar24, iVar10 == 0) {
        cVar5 = hard_locale(2);
        if (cVar5 == '\0') goto LAB_0010f76a;
        pcVar24 = (char *)((long)pcVar24 + 6);
      }
    }
    local_90 = psVar28;
    if ((char)*local_90 == '+') {
      psVar28 = (size_t *)((long)local_90 + 1);
      pcVar16 = strchr((char *)psVar28,10);
      pcVar24 = (char *)psVar28;
      psVar18 = psVar28;
      if (pcVar16 != (char *)0x0) {
        pcVar22 = strchr(pcVar16 + 1,10);
        if (pcVar22 != (char *)0x0) goto LAB_00110fed;
        *pcVar16 = '\0';
        psVar18 = (size_t *)(pcVar16 + 1);
      }
    }
    else {
      ppuVar26 = &time_style_args;
      lVar25 = argmatch(local_90,&time_style_args,time_style_types,4);
      if (lVar25 < 0) goto LAB_00110cfb;
      if (lVar25 == 2) {
        long_time_format = _LC137;
        PTR_s__b__e__H__M_00111a88 = _LC138;
        psVar28 = (size_t *)long_time_format;
        psVar18 = (size_t *)PTR_s__b__e__H__M_00111a88;
      }
      else if (lVar25 < 3) {
        if (lVar25 == 0) {
          long_time_format = _LC135;
          PTR_s__b__e__H__M_00111a88 = _LC135;
          psVar28 = (size_t *)long_time_format;
          psVar18 = (size_t *)PTR_s__b__e__H__M_00111a88;
        }
        else {
          long_time_format = _LC136;
          PTR_s__b__e__H__M_00111a88 = _LC136;
          psVar28 = (size_t *)long_time_format;
          psVar18 = (size_t *)PTR_s__b__e__H__M_00111a88;
        }
      }
      else {
        psVar28 = (size_t *)long_time_format;
        psVar18 = (size_t *)PTR_s__b__e__H__M_00111a88;
        if ((lVar25 == 3) &&
           (cVar5 = hard_locale(2), psVar28 = (size_t *)long_time_format,
           psVar18 = (size_t *)PTR_s__b__e__H__M_00111a88, cVar5 != '\0')) {
          long_time_format = (undefined *)dcgettext(0,long_time_format,2);
          psVar18 = (size_t *)dcgettext(0,PTR_s__b__e__H__M_00111a88,2);
          psVar28 = (size_t *)long_time_format;
        }
      }
    }
    PTR_s__b__e__H__M_00111a88 = (undefined *)psVar18;
    long_time_format = (undefined *)psVar28;
    abformat_init();
  }
LAB_0010f76a:
  iVar10 = _optind;
  bVar7 = print_with_color;
  if (print_with_color != 0) {
    local_60 = (byte *)getenv("LS_COLORS");
    if ((local_60 != (byte *)0x0) && (*local_60 != 0)) {
      color_buf = (undefined *)xstrdup(local_60);
      local_58 = color_buf;
      while( true ) {
        while( true ) {
          while( true ) {
            pbVar1 = local_60;
            bVar2 = *local_60;
            pcVar24 = (char *)(ulong)bVar2;
            if (bVar2 != 0x2a) break;
            local_a0 = local_60;
            pcVar24 = (char *)xmalloc(0x30);
            *(undefined1 *)((long)pcVar24 + 0x20) = 0;
            local_60 = pbVar1 + 1;
            *(size_t **)((long)pcVar24 + 0x28) = color_ext_list;
            *(undefined **)((long)pcVar24 + 8) = local_58;
            color_ext_list = (size_t *)pcVar24;
            cVar5 = get_funky_string(&local_58,&local_60,1,pcVar24);
            pbVar1 = local_60;
            if ((cVar5 == '\0') || (pbVar1 = local_60 + 1, *local_60 != 0x3d)) goto LAB_001107f8;
            *(undefined **)((long)pcVar24 + 0x18) = local_58;
            local_60 = local_60 + 1;
            cVar5 = get_funky_string(&local_58,&local_60,0,(size_t *)((long)pcVar24 + 0x10));
            pbVar1 = local_60;
            if (cVar5 == '\0') goto LAB_001107f8;
          }
          if (bVar2 != 0x3a) break;
          local_60 = local_60 + 1;
        }
        if (bVar2 == 0) break;
        bVar3 = local_60[1];
        pbVar1 = local_60 + 1;
        if ((bVar3 == 0) || (pbVar1 = local_60 + 3, local_60[2] != 0x3d)) goto LAB_001107f8;
        lVar25 = 0;
        while ((local_60 = pbVar1,
               bVar2 != "lcrcecrsnofidilnpisobdcdmiorexdosusgstowtwcamhcl"[lVar25 * 2] ||
               (bVar3 != "lcrcecrsnofidilnpisobdcdmiorexdosusgstowtwcamhcl"[lVar25 * 2 + 1]))) {
          lVar25 = lVar25 + 1;
          if (lVar25 == 0x18) goto LAB_00110896;
        }
        (&PTR___compound_literal_0_00111aa8)[(long)(int)lVar25 * 2] = local_58;
        cVar5 = get_funky_string(&local_58,&local_60,0);
        if (cVar5 == '\0') goto LAB_00110896;
      }
      psVar28 = color_ext_list;
      pcVar24 = (char *)color_ext_list;
      if (color_ext_list != (size_t *)0x0) {
        while (pcVar24 = (char *)psVar28, psVar28 = *(size_t **)((long)pcVar24 + 0x28),
              local_90 = &local_58, psVar28 != (size_t *)0x0) {
          local_a0 = (byte *)((ulong)local_a0 & 0xffffffffffffff00);
          psVar18 = psVar28;
          do {
            sVar17 = *psVar18;
            if ((sVar17 != 0xffffffffffffffff) && (sVar17 == *(size_t *)pcVar24)) {
              pvVar11 = (void *)psVar18[1];
              __s1 = *(void **)((long)pcVar24 + 8);
              iVar8 = memcmp(__s1,pvVar11,sVar17);
              if (iVar8 == 0) {
                *psVar18 = 0xffffffffffffffff;
              }
              else {
                iVar8 = c_strncasecmp(__s1,pvVar11,sVar17);
                if (iVar8 == 0) {
                  if (((char)local_a0 == '\0') &&
                     ((*(size_t *)((long)pcVar24 + 0x10) != psVar18[2] ||
                      (iVar8 = memcmp(*(void **)((long)pcVar24 + 0x18),(void *)psVar18[3],
                                      *(size_t *)((long)pcVar24 + 0x10)), iVar8 != 0)))) {
                    *(undefined1 *)((long)pcVar24 + 0x20) = 1;
                    *(undefined1 *)(psVar18 + 4) = 1;
                  }
                  else {
                    *psVar18 = 0xffffffffffffffff;
                    local_a0 = (byte *)CONCAT71(local_a0._1_7_,bVar7);
                  }
                }
              }
            }
            psVar18 = (size_t *)psVar18[5];
          } while (psVar18 != (size_t *)0x0);
        }
      }
      goto LAB_0010faca;
    }
    pcVar16 = getenv("COLORTERM");
    if ((pcVar16 == (char *)0x0) || (*pcVar16 == '\0')) {
      pcVar16 = getenv("TERM");
      if ((pcVar16 != (char *)0x0) && (*pcVar16 != '\0')) {
        pcVar24 = "# Configuration file for dircolors, a utility to help you set the";
        for (pcVar22 = "# Configuration file for dircolors, a utility to help you set the";
            pcVar22 + -0x10b5e0 < (char *)0x15f0; pcVar22 = pcVar22 + sVar17 + 1) {
          iVar8 = strncmp(pcVar22,"TERM ",5);
          if ((iVar8 == 0) && (iVar8 = fnmatch(pcVar22 + 5,pcVar16,0), iVar8 == 0))
          goto LAB_0010fad8;
          sVar17 = strlen(pcVar22);
        }
      }
      print_with_color = 0;
    }
    goto LAB_0010fad8;
  }
  goto LAB_0010f780;
switchD_0010f547_caseD_90:
  local_90 = _optarg;
  goto LAB_0010f510;
LAB_00110cfb:
  param_1 = 0x10cf15;
  argmatch_invalid("time style",local_90,lVar25);
  __stream = _stderr;
  pcVar16 = (char *)dcgettext(0,"Valid arguments are:\n",5);
  fputs_unlocked(pcVar16,__stream);
  for (; param_2 = _stderr, *ppuVar26 != (undefined *)0x0; ppuVar26 = ppuVar26 + 1) {
    __fprintf_chk(_stderr,2,"  - [posix-]%s\n");
  }
  pcVar16 = (char *)dcgettext(0,"  - +FORMAT (e.g., +%H:%M) for a \'date\'-style format\n",5);
  fputs_unlocked(pcVar16,param_2);
  puVar27 = pcVar24;
switchD_0010f547_caseD_ffffff7f:
  usage();
switchD_0010f547_caseD_ffffff7e:
  usage(0);
LAB_00110d92:
  bVar7 = stdout_isatty();
  goto LAB_00110462;
code_r0x00110446:
  local_78 = 3;
  goto LAB_0010f622;
LAB_00110896:
  local_41 = 0;
  local_43 = bVar2;
  local_42 = bVar3;
  pcVar24 = (char *)quote(&local_43);
  uVar19 = dcgettext(0,"unrecognized prefix: %s",5);
  error(0,0,uVar19,pcVar24);
  pbVar1 = local_60;
LAB_001107f8:
  local_60 = pbVar1;
  uVar19 = dcgettext(0,"unparsable value for LS_COLORS environment variable",5);
  error(0,0,uVar19);
  free(color_buf);
  psVar28 = color_ext_list;
  while (psVar28 != (size_t *)0x0) {
    pcVar24 = (char *)psVar28[5];
    free(psVar28);
    psVar28 = (size_t *)pcVar24;
  }
  print_with_color = 0;
LAB_0010faca:
  if ((DAT_00111b10 == 6) &&
     (iVar8 = strncmp(PTR___compound_literal_4_00111b18,"target",6), iVar8 == 0)) {
    color_symlink_as_referent = '\x01';
  }
LAB_0010fad8:
  if (print_with_color == 0) {
LAB_0010f780:
    if (directories_first != 0) {
LAB_0010fb58:
      check_symlink_mode = 1;
    }
  }
  else {
    tabsize = (undefined *)0x0;
    if ((((directories_first != 0) ||
         ((DAT_00111b70 != 0 &&
          (((2 < DAT_00111b70 || (DAT_00111b78[DAT_00111b70 - 1] != '0')) || (*DAT_00111b78 != '0'))
          )))) || ((DAT_00111b80 != 0 &&
                   ((((2 < DAT_00111b80 ||
                      (PTR___compound_literal_9_00111b88[DAT_00111b80 - 1] != '0')) ||
                     (*PTR___compound_literal_9_00111b88 != '0')) &&
                    (color_symlink_as_referent != '\0')))))) ||
       ((DAT_00111b60 != 0 &&
        ((((2 < DAT_00111b60 || (DAT_00111b68[DAT_00111b60 - 1] != '0')) || (*DAT_00111b68 != '0'))
         && (format == 0)))))) goto LAB_0010fb58;
  }
  lVar25 = (long)iVar10;
  if (((dereference == 0) && (dereference = 1, immediate_dirs == '\0')) && (indicator_style != 3)) {
    dereference = (-(uint)(format == 0) & 0xfffffffe) + 3;
  }
  if (recursive != 0) {
    active_dir_set = hash_initialize(0x1e,0,0x100000,dev_ino_compare,dev_ino_free);
    if (active_dir_set == 0) {
      xalloc_die();
LAB_0011109d:
      uVar19 = quote();
      uVar20 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
      error(0,0,uVar20,uVar19);
LAB_00110424:
      local_78 = 7;
      if (_ls_mode != 1) goto LAB_0010f622;
      cVar5 = stdout_isatty();
      psVar28 = (size_t *)pcVar24;
      if (cVar5 != '\0') goto code_r0x00110446;
      goto LAB_0010f62d;
    }
    rpl_obstack_begin(dev_ino_obstack,0,0,&malloc,free);
  }
  pcVar24 = getenv("TZ");
  localtz = tzalloc(pcVar24);
  format_needs_stat =
       print_block_size | print_hyperlink | print_scontext | format == 0 |
       (sort_type - 3 & 0xfffffffd) == 0;
  format_needs_type =
       (print_scontext | recursive | print_with_color | directories_first | indicator_style != 0) &
       (format_needs_stat ^ 1);
  format_needs_capability = false;
  if ((print_with_color != 0) && (format_needs_capability = false, _DAT_00111bf0 != 0)) {
    if (_DAT_00111bf0 < 3) {
      format_needs_capability = _DAT_00111bf8[_DAT_00111bf0 - 1] != '0' || *_DAT_00111bf8 != '0';
    }
    else {
      format_needs_capability = true;
    }
  }
  if (dired != 0) {
    rpl_obstack_begin(dired_obstack,0,0,&malloc,free);
    rpl_obstack_begin(subdired_obstack,0,0,&malloc,free);
  }
  if (print_hyperlink != 0) {
    uVar15 = 0;
    do {
      while (iVar8 = (int)uVar15, uVar15 < 0x5b) {
        if (((uVar15 < 0x41) && (9 < iVar8 - 0x30U)) && (1 < iVar8 - 0x2dU)) {
          uVar15 = uVar15 + 1;
        }
        else {
          (&RFC3986)[uVar15] = (&RFC3986)[uVar15] | 1;
          uVar15 = uVar15 + 1;
        }
      }
      bVar6 = true;
      if ((0x19 < iVar8 - 0x61U) && (iVar8 != 0x7e)) {
        bVar6 = iVar8 == 0x5f;
      }
      (&RFC3986)[uVar15] = (&RFC3986)[uVar15] | bVar6;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x100);
    hostname = (undefined *)xgethostname();
    if (hostname == (undefined *)0x0) {
      hostname = &_LC1;
    }
  }
  cwd_n_alloc = 100;
  cwd_file = xmalloc(0x5140);
  iVar10 = param_1 - iVar10;
  cwd_n_used = 0;
  cwd_some_quoted = 0;
  any_has_acl = 0;
  inode_number_width = 0;
  block_size_width = 0;
  nlink_width = 0;
  owner_width = 0;
  group_width = 0;
  author_width = 0;
  scontext_width = 0;
  major_device_number_width = 0;
  minor_device_number_width = 0;
  file_size_width = 0;
  if (iVar10 < 1) {
    if (immediate_dirs == '\0') {
      __ptr = (long *)xmalloc(0x20);
      __ptr[1] = 0;
      lVar25 = xstrdup(&_LC147);
      bVar6 = cwd_n_used != 0;
      *(undefined1 *)(__ptr + 2) = 1;
      *__ptr = lVar25;
      plVar4 = __ptr;
      __ptr[3] = (long)pending_dirs;
      pending_dirs = plVar4;
      if (bVar6) goto LAB_001108db;
      goto LAB_001105c1;
    }
    gobble_file_constprop_0(&_LC147,3,1,0);
    if (cwd_n_used == 0) goto LAB_00110300;
LAB_001108db:
    sort_files();
    if (immediate_dirs == '\0') {
      extract_dirs_from_files(0,1);
    }
    if (cwd_n_used == 0) goto LAB_0010f991;
    print_current_files();
    if (pending_dirs == (long *)0x0) goto LAB_00110309;
    dired_pos = dired_pos + 1;
    pcVar24 = _stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pcVar24) {
      __overflow(_stdout,10);
      goto LAB_0010f9e4;
    }
    _stdout->_IO_write_ptr = pcVar24 + 1;
    *pcVar24 = '\n';
    __ptr = pending_dirs;
  }
  else {
    do {
      lVar14 = lVar25 * 2;
      lVar25 = lVar25 + 1;
      gobble_file_constprop_0(*(undefined8 *)(&param_2->_flags + lVar14),0,1,0);
    } while ((int)lVar25 < (int)param_1);
    if (cwd_n_used != 0) goto LAB_001108db;
LAB_0010f991:
    if (1 < iVar10) goto LAB_0010f9e4;
LAB_00110300:
    __ptr = pending_dirs;
    if (pending_dirs == (long *)0x0) goto LAB_00110309;
LAB_001105c1:
    if (__ptr[3] == 0) {
      print_dir_name = 0;
    }
  }
  do {
    pending_dirs = (long *)__ptr[3];
    if ((active_dir_set == 0) || (*__ptr != 0)) {
      print_dir(*__ptr,__ptr[1],(char)__ptr[2]);
      free((void *)*__ptr);
      free((void *)__ptr[1]);
      free(__ptr);
      print_dir_name = 1;
    }
    else {
      if ((ulong)(dev_ino_obstack._24_8_ - dev_ino_obstack._16_8_) < 0x10) {
LAB_0011105a:
                    /* WARNING: Subroutine does not return */
        __assert_fail("dev_ino_size <= __extension__ ({ struct obstack const *__o = (&dev_ino_obstack); (size_t) (__o->next_free - __o->object_base); })"
                      ,"src/ls.c",0x442,"dev_ino_pop");
      }
      local_58 = *(undefined **)(dev_ino_obstack._24_8_ + -0x10);
      uStack_50 = *(undefined8 *)(dev_ino_obstack._24_8_ + -8);
      dev_ino_obstack._24_8_ = dev_ino_obstack._24_8_ + -0x10;
      pvVar11 = (void *)hash_remove(active_dir_set,&local_58);
      if (pvVar11 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("found","src/ls.c",0x73d,"main");
      }
      free(pvVar11);
      free((void *)*__ptr);
      free((void *)__ptr[1]);
      free(__ptr);
    }
LAB_0010f9e4:
    __ptr = pending_dirs;
  } while (pending_dirs != (long *)0x0);
LAB_00110309:
  if ((print_with_color != 0) && (used_color != '\0')) {
    if ((color_indicator != 2) ||
       (((*(short *)PTR___compound_literal_0_00111aa8 != 0x5b1b || (DAT_00111ab0 != 1)) ||
        (*PTR___compound_literal_1_00111ab8 != 'm')))) {
      put_indicator(&color_indicator);
      put_indicator(&DAT_00111ab0);
    }
    fflush_unlocked(_stdout);
    signal_setup(0);
    for (iVar10 = stop_signal_count; iVar10 != 0; iVar10 = iVar10 + -1) {
      raise(0x13);
    }
    if (interrupt_signal != 0) {
      raise(interrupt_signal);
    }
  }
  if (dired != 0) {
    dired_dump_obstack("//DIRED//",dired_obstack);
    dired_dump_obstack("//SUBDIRED//",subdired_obstack);
    uVar9 = get_quoting_style(filename_quoting_options);
    __printf_chk(2,"//DIRED-OPTIONS// --quoting-style=%s\n",
                 *(undefined8 *)(&quoting_style_args + (ulong)uVar9 * 8));
  }
  lVar25 = active_dir_set;
  if (active_dir_set != 0) {
    lVar14 = hash_get_n_entries(active_dir_set);
    if (lVar14 != 0) {
LAB_0011101f:
                    /* WARNING: Subroutine does not return */
      __assert_fail("hash_get_n_entries (active_dir_set) == 0","src/ls.c",0x771,"main");
    }
    hash_free(lVar25);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return exit_status;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


// This is taking way too long.