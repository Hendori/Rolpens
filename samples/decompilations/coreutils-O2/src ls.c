
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



uint is_colored(uint param_1)

{
  ulong uVar1;
  char *pcVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = (&color_indicator)[(ulong)param_1 * 2];
  if (uVar1 != 0) {
    if (uVar1 < 3) {
      pcVar2 = (&PTR___compound_literal_0_00110048)[(ulong)param_1 * 2];
      return (uint)(pcVar2[uVar1 - 1] != '0') |
             (uint)CONCAT71((int7)((ulong)pcVar2 >> 8),*pcVar2 != '0');
    }
    uVar3 = 1;
  }
  return uVar3;
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
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  byte *pbVar6;
  
  bVar1 = false;
  lVar5 = 0;
  bVar3 = 0;
  pbVar2 = (byte *)*param_2;
  pbVar6 = (byte *)*param_1;
  bVar4 = *pbVar2;
LAB_001000b5:
  if (bVar1) {
    while ((byte)(bVar4 - 0x30) < 8) {
      bVar3 = (bVar4 - 0x30) + bVar3 * '\b';
      pbVar2 = pbVar2 + 1;
      bVar4 = *pbVar2;
    }
    *pbVar6 = bVar3;
    bVar4 = *pbVar2;
    lVar5 = lVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
LAB_001000e3:
  while (bVar4 != 0x5c) {
    if ((char)bVar4 < ']') {
      if (bVar4 == 0x3d) {
        if ((char)param_3 != '\0') goto LAB_00100116;
      }
      else if (((char)bVar4 < '>') && ((bVar4 == 0 || (bVar4 == 0x3a)))) {
        param_3 = 1;
LAB_00100116:
        *param_1 = pbVar6;
        *param_2 = (long)pbVar2;
        *param_4 = lVar5;
        return param_3;
      }
LAB_001001a0:
      *pbVar6 = bVar4;
      lVar5 = lVar5 + 1;
      bVar4 = pbVar2[1];
      pbVar2 = pbVar2 + 1;
      pbVar6 = pbVar6 + 1;
    }
    else {
      if (bVar4 != 0x5e) goto LAB_001001a0;
      bVar3 = pbVar2[1];
      if ((byte)(bVar3 - 0x40) < 0x3f) {
        lVar5 = lVar5 + 1;
        *pbVar6 = bVar3 & 0x1f;
        bVar4 = pbVar2[2];
        pbVar2 = pbVar2 + 2;
        pbVar6 = pbVar6 + 1;
      }
      else {
        if (bVar3 != 0x3f) {
          param_3 = 0;
          pbVar2 = pbVar2 + 1;
          goto LAB_00100116;
        }
        *pbVar6 = 0x7f;
        pbVar6 = pbVar6 + 1;
        bVar4 = pbVar2[1];
        lVar5 = lVar5 + 1;
        pbVar2 = pbVar2 + 1;
      }
    }
  }
  bVar4 = pbVar2[1];
  if (bVar4 == 0) {
    pbVar2 = pbVar2 + 2;
    param_3 = 0;
    goto LAB_00100116;
  }
  bVar3 = bVar4 - 0x30;
  switch(bVar3) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    goto switchD_00100151_caseD_0;
  case 0xf:
    bVar4 = 0x7f;
    break;
  case 0x28:
  case 0x48:
    bVar4 = pbVar2[2];
    pbVar2 = pbVar2 + 2;
    bVar3 = 0;
    while( true ) {
      while ((char)bVar4 < 'G') {
        if ((char)bVar4 < 'A') {
          if (9 < (byte)(bVar4 - 0x30)) goto LAB_001002e0;
          pbVar2 = pbVar2 + 1;
          bVar3 = (bVar4 - 0x30) + bVar3 * '\x10';
          bVar4 = *pbVar2;
        }
        else {
          pbVar2 = pbVar2 + 1;
          bVar3 = (bVar4 - 0x37) + bVar3 * '\x10';
          bVar4 = *pbVar2;
        }
      }
      if (5 < (byte)(bVar4 + 0x9f)) break;
      pbVar2 = pbVar2 + 1;
      bVar3 = bVar4 + 0xa9 + bVar3 * '\x10';
      bVar4 = *pbVar2;
    }
LAB_001002e0:
    *pbVar6 = bVar3;
    bVar4 = *pbVar2;
    lVar5 = lVar5 + 1;
    pbVar6 = pbVar6 + 1;
    goto LAB_001000e3;
  case 0x2f:
    bVar4 = 0x20;
    break;
  case 0x31:
    bVar4 = 7;
    break;
  case 0x32:
    bVar4 = 8;
    break;
  case 0x35:
    bVar4 = 0x1b;
    break;
  case 0x36:
    bVar4 = 0xc;
    break;
  case 0x3e:
    bVar4 = 10;
    break;
  case 0x42:
    bVar4 = 0xd;
    break;
  case 0x44:
    bVar4 = 9;
    break;
  case 0x46:
    bVar4 = 0xb;
  }
  bVar3 = bVar4;
  *pbVar6 = bVar3;
  pbVar6 = pbVar6 + 1;
  lVar5 = lVar5 + 1;
  bVar1 = false;
  goto LAB_0010016e;
switchD_00100151_caseD_0:
  bVar1 = true;
LAB_0010016e:
  bVar4 = pbVar2[2];
  pbVar2 = pbVar2 + 2;
  goto LAB_001000b5;
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



void add_ignore_pattern(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)xmalloc(0x10);
  uVar1 = ignore_patterns;
  ignore_patterns = puVar2;
  *puVar2 = param_1;
  puVar2[1] = uVar1;
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
  undefined *puVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  size_t sVar7;
  char *pcVar8;
  undefined8 uVar9;
  char cVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long in_FS_OFFSET;
  long local_6b8 [2];
  int local_6a8 [12];
  int local_678 [12];
  char local_648 [1536];
  undefined1 local_48 [8];
  long local_40;
  
  lVar14 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    pcVar6 = *(char **)((long)&long_time_format + lVar14);
    cVar3 = *pcVar6;
    while (cVar3 != '\0') {
      cVar10 = pcVar6[1];
      if (cVar3 == '%') {
        if (cVar10 == '%') {
          cVar10 = pcVar6[2];
          pcVar6 = pcVar6 + 1;
        }
        else if (cVar10 == 'b') {
          *(char **)((long)local_6b8 + lVar14) = pcVar6;
          goto joined_r0x001007e8;
        }
      }
      pcVar6 = pcVar6 + 1;
      cVar3 = cVar10;
    }
    *(undefined8 *)((long)local_6b8 + lVar14) = 0;
joined_r0x001007e8:
    if (lVar14 == 8) break;
    lVar14 = 8;
  } while( true );
  if ((local_6b8[0] != 0) || (local_6b8[1] != 0)) {
    lVar14 = 0;
    iVar17 = 0;
    do {
      pcVar6 = (char *)rpl_nl_langinfo((int)lVar14 + 0x2000e);
      sVar7 = strnlen(pcVar6,0x80);
      local_678[lVar14] = (int)sVar7;
      if ((sVar7 == 0x80) || (pcVar8 = strchr(pcVar6,0x25), pcVar8 != (char *)0x0))
      goto LAB_00100814;
      uVar9 = __strcpy_chk(local_648 + lVar14 * 0x80,pcVar6,lVar14 * -0x80 + 0x600);
      iVar4 = gnu_mbswidth(uVar9,3);
      local_6a8[lVar14] = iVar4;
      if (iVar4 < 0) goto LAB_00100814;
      if (iVar17 < iVar4) {
        iVar17 = iVar4;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0xc);
    lVar14 = 0;
    pcVar6 = local_648;
    do {
      iVar4 = *(int *)((long)local_678 + lVar14);
      iVar13 = iVar17 - *(int *)((long)local_6a8 + lVar14);
      if (0x80 - iVar4 <= iVar13) goto LAB_00100814;
      uVar16 = lVar14 * 0x20;
      if ((int)*pcVar6 - 0x30U < 10) {
        uVar11 = uVar16 + (long)iVar13;
        uVar12 = 0x600;
        if (0x5ff < uVar11) {
          uVar12 = uVar11;
        }
        __memmove_chk(local_648 + uVar11,pcVar6,(long)iVar4,uVar12 - uVar11);
        pcVar8 = pcVar6;
      }
      else {
        uVar16 = uVar16 + (long)iVar4;
        pcVar8 = local_648 + uVar16;
      }
      uVar11 = 0x600;
      if (0x5ff < uVar16) {
        uVar11 = uVar16;
      }
      lVar14 = lVar14 + 4;
      __memset_chk(pcVar8,0x20,(long)iVar13,uVar11 - uVar16);
      pcVar6[iVar13 + iVar4] = '\0';
      pcVar6 = pcVar6 + 0x80;
    } while (lVar14 != 0x30);
    lVar14 = 0;
    while( true ) {
      lVar15 = 0x600;
      puVar1 = (&long_time_format)[lVar14];
      lVar2 = local_6b8[lVar14];
      do {
        pcVar6 = (char *)(((ulong)(-(int)lVar14 & 0x600) + 0x1089c0) - lVar15);
        if (lVar2 == 0) {
          uVar5 = snprintf(pcVar6,0x80,"%s",puVar1);
        }
        else {
          if (0x80 < lVar2 - (long)puVar1) goto LAB_00100814;
          uVar5 = __snprintf_chk(pcVar6,0x80,2,lVar15,"%.*s%s%s",lVar2 - (long)puVar1,puVar1,
                                 local_48 + -lVar15,lVar2 + 2);
        }
        if (0x7f < uVar5) goto LAB_00100814;
        lVar15 = lVar15 + -0x80;
      } while (lVar15 != 0);
      if (lVar14 != 0) break;
      lVar14 = 1;
    }
    use_abformat = 1;
  }
LAB_00100814:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void queue_directory(long param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  
  plVar1 = (long *)xmalloc(0x20);
  if (param_2 != 0) {
    param_2 = xstrdup(param_2);
  }
  plVar1[1] = param_2;
  if (param_1 != 0) {
    param_1 = xstrdup(param_1);
  }
  *plVar1 = param_1;
  *(undefined1 *)(plVar1 + 2) = param_3;
  plVar1[3] = (long)pending_dirs;
  pending_dirs = plVar1;
  return;
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



void cmp_extension(undefined8 *param_1,undefined8 *param_2,code *UNRECOVERED_JUMPTABLE)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = strrchr((char *)*param_1,0x2e);
  pcVar3 = strrchr((char *)*param_2,0x2e);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "";
  }
  iVar1 = (*UNRECOVERED_JUMPTABLE)(pcVar2,pcVar3);
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(*param_1,*param_2);
    return;
  }
  return;
}



void rev_strcmp_extension(undefined8 param_1,undefined8 param_2)

{
  cmp_extension(param_2,param_1,strcmp);
  return;
}



void strcmp_extension(undefined8 param_1,undefined8 param_2)

{
  cmp_extension(param_1,param_2,strcmp);
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
LAB_00100ca2:
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
      goto LAB_00100ca2;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dired_outbuf(void *param_1,size_t param_2)

{
  dired_pos = dired_pos + param_2;
  fwrite_unlocked(param_1,1,param_2,_stdout);
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
      __printf_chk(2,&_LC5,*(undefined8 *)(lVar2 + lVar4));
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



void push_current_dired_pos_part_0(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if ((ulong)(*(long *)(param_1 + 0x20) - (long)puVar1) < 8) {
    rpl_obstack_newchunk(param_1,8);
    puVar1 = *(undefined8 **)(param_1 + 0x18);
  }
  *puVar1 = dired_pos;
  *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
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
        if (piVar3 == (int *)&DAT_001099d0) goto LAB_0010107b;
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != (int *)&DAT_001099d0);
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
    } while (piVar4 != (int *)&DAT_001099d0);
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
    } while (piVar3 != (int *)&DAT_001099d0);
  }
LAB_0010107b:
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
    if (_DAT_00110068 == 0) {
      put_indicator(&color_indicator);
      put_indicator(&DAT_00110070);
      put_indicator(&DAT_00110050);
    }
    else {
      put_indicator(&DAT_00110060);
    }
  }
  fwrite_unlocked((void *)param_1[1],*param_1,1,_stdout);
  return;
}



size_t quote_name_buf_constprop_0
                 (undefined8 *param_1,byte *param_2,undefined8 param_3,int param_4,size_t *param_5,
                 byte *param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  ushort **ppuVar7;
  byte *pbVar8;
  long lVar9;
  byte *__dest;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  size_t unaff_R14;
  byte *pbVar13;
  long in_FS_OFFSET;
  bool local_71;
  wchar_t local_4c;
  mbstate_t local_48;
  long local_40;
  
  __dest = (byte *)*param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = get_quoting_style(param_3);
  if ((uVar3 < 3 & qmark_funny_chars) == 0) {
    if (param_4 == 0) {
      sVar5 = strlen((char *)param_2);
      local_71 = false;
      __dest = param_2;
    }
    else {
      bVar1 = false;
LAB_00101510:
      sVar5 = quotearg_buffer(__dest,0x2000,param_2,0xffffffffffffffff,param_3);
      if (0x1fff < sVar5) {
        __dest = (byte *)xmalloc(sVar5 + 1);
        quotearg_buffer(__dest,sVar5 + 1,param_2,0xffffffffffffffff,param_3);
      }
      local_71 = true;
      if (*param_2 == *__dest) {
        sVar6 = strlen((char *)param_2);
        local_71 = sVar5 != sVar6;
      }
      if (bVar1) goto LAB_001013d7;
    }
    if (param_5 == (size_t *)0x0) {
      if (align_variable_outer_quotes == 0) {
        *param_6 = 0;
        goto LAB_00101372;
      }
LAB_0010134d:
      bVar2 = (local_71 ^ 1U) & cwd_some_quoted;
      goto LAB_0010135b;
    }
    sVar6 = __ctype_get_mb_cur_max();
    if (sVar6 < 2) {
      if (__dest < __dest + sVar5) {
        ppuVar7 = __ctype_b_loc();
        unaff_R14 = 0;
        pbVar8 = __dest;
        do {
          unaff_R14 = (unaff_R14 + 1) - (ulong)(((*ppuVar7)[*pbVar8] & 0x4000) == 0);
          pbVar8 = pbVar8 + 1;
        } while (__dest + sVar5 != pbVar8);
      }
      else {
        unaff_R14 = 0;
      }
    }
    else {
      iVar4 = mbsnwidth(__dest,sVar5,3);
      unaff_R14 = (size_t)iVar4;
    }
    if (align_variable_outer_quotes != 0) goto LAB_0010134d;
    *param_6 = 0;
  }
  else {
    if (param_4 != 0) {
      bVar1 = true;
      goto LAB_00101510;
    }
    sVar5 = strlen((char *)param_2);
    if (0x1fff < sVar5) {
      __dest = (byte *)xmalloc(sVar5 + 1);
    }
    memcpy(__dest,param_2,sVar5 + 1);
    local_71 = false;
LAB_001013d7:
    unaff_R14 = sVar5;
    sVar5 = __ctype_get_mb_cur_max();
    pbVar8 = __dest + unaff_R14;
    if (sVar5 < 2) {
      sVar5 = unaff_R14;
      if (__dest < pbVar8) {
        ppuVar7 = __ctype_b_loc();
        pbVar11 = __dest;
        do {
          if ((*(byte *)((long)*ppuVar7 + (ulong)*pbVar11 * 2 + 1) & 0x40) == 0) {
            *pbVar11 = 0x3f;
          }
          pbVar11 = pbVar11 + 1;
        } while (pbVar11 != pbVar8);
      }
    }
    else if (__dest < pbVar8) {
      unaff_R14 = 0;
      pbVar11 = __dest;
      pbVar13 = __dest;
      do {
        bVar2 = *pbVar11;
        pbVar12 = pbVar13 + 1;
        if ((char)bVar2 < '`') {
          if ('@' < (char)bVar2) goto LAB_00101420;
          if ('#' < (char)bVar2) {
            if (0x1a < (byte)(bVar2 - 0x25)) goto LAB_0010144d;
            goto LAB_00101420;
          }
          if ('\x1f' < (char)bVar2) goto LAB_00101420;
LAB_0010144d:
          local_48.__count = 0;
          local_48.__value = (_union_27)0x0;
          while (lVar9 = rpl_mbrtoc32(&local_4c,pbVar11,(long)pbVar8 - (long)pbVar11,&local_48),
                lVar9 != -1) {
            if (lVar9 == -2) {
              *pbVar13 = 0x3f;
              unaff_R14 = unaff_R14 + 1;
              pbVar13 = pbVar12;
              goto LAB_00101665;
            }
            lVar10 = 1;
            if (lVar9 != 0) {
              lVar10 = lVar9;
            }
            iVar4 = wcwidth(local_4c);
            if (iVar4 < 0) {
              *pbVar13 = 0x3f;
              unaff_R14 = unaff_R14 + 1;
              pbVar13 = pbVar12;
            }
            else {
              lVar9 = 0;
              do {
                pbVar13[lVar9] = pbVar11[lVar9];
                lVar9 = lVar9 + 1;
              } while (lVar10 != lVar9);
              unaff_R14 = unaff_R14 + (long)iVar4;
              pbVar13 = pbVar13 + lVar10;
            }
            pbVar11 = pbVar11 + lVar10;
            iVar4 = mbsinit(&local_48);
            if (iVar4 != 0) goto LAB_0010142e;
            pbVar12 = pbVar13 + 1;
          }
          *pbVar13 = 0x3f;
          pbVar11 = pbVar11 + 1;
          unaff_R14 = unaff_R14 + 1;
          pbVar13 = pbVar12;
        }
        else {
          if (0x1d < (byte)(bVar2 + 0x9f)) goto LAB_0010144d;
LAB_00101420:
          *pbVar13 = bVar2;
          pbVar11 = pbVar11 + 1;
          unaff_R14 = unaff_R14 + 1;
          pbVar13 = pbVar12;
        }
LAB_0010142e:
      } while (pbVar11 < pbVar8);
LAB_00101665:
      sVar5 = (long)pbVar13 - (long)__dest;
    }
    else {
      unaff_R14 = 0;
      sVar5 = 0;
    }
    bVar2 = align_variable_outer_quotes;
    if (align_variable_outer_quotes != 0) goto LAB_0010134d;
LAB_0010135b:
    *param_6 = bVar2;
    if (param_5 == (size_t *)0x0) goto LAB_00101372;
  }
  *param_5 = unaff_R14;
LAB_00101372:
  *param_1 = __dest;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sVar5;
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
LAB_00101842:
    if (print_block_size != '\0') {
      if (format != 4) goto LAB_001017c1;
      lVar2 = 2;
      if (*(char *)(param_1 + 0x17) != '\0') {
        pcVar4 = (char *)human_readable(param_1[0xb],auStack_2b8,human_output_opts,0x200,
                                        output_block_size);
        sVar3 = strlen(pcVar4);
        lVar2 = sVar3 + 1;
      }
LAB_001017cc:
      lVar5 = lVar5 + lVar2;
    }
    if (print_scontext != '\0') {
      if (format == 4) {
        sVar3 = strlen((char *)param_1[0x16]);
      }
      else {
LAB_001018a9:
        sVar3 = (size_t)scontext_width;
      }
      lVar5 = lVar5 + sVar3 + 1;
      lVar2 = param_1[0x19];
      goto joined_r0x001018c1;
    }
  }
  else {
    if (format == 4) {
      pcVar4 = (char *)umaxtostr(param_1[4],auStack_2b8);
      sVar3 = strlen(pcVar4);
      lVar5 = sVar3 + 1;
      goto LAB_00101842;
    }
    lVar5 = (long)inode_number_width + 1;
    if (print_block_size != '\0') {
LAB_001017c1:
      lVar2 = (long)block_size_width + 1;
      goto LAB_001017cc;
    }
    if (print_scontext != '\0') goto LAB_001018a9;
  }
  lVar2 = param_1[0x19];
joined_r0x001018c1:
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



ulong calculate_columns(char param_1)

{
  ulong *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  
  lVar8 = column_info_alloc_3;
  uVar12 = cwd_n_used;
  if (max_idx <= cwd_n_used) {
    uVar12 = max_idx;
  }
  if (max_idx == 0) {
    uVar12 = cwd_n_used;
  }
  if (column_info_alloc_3 < (long)uVar12) {
    puVar15 = &column_info_alloc_3;
    lVar5 = column_info_alloc_3 + 1;
    pcVar14 = (char *)xpalloc(column_info,&column_info_alloc_3,uVar12 - column_info_alloc_3,
                              0xffffffffffffffff,0x18);
    lVar10 = column_info_alloc_3 - lVar8;
    if ((SCARRY8(column_info_alloc_3,lVar5)) ||
       (lVar11 = lVar10 * (column_info_alloc_3 + lVar5),
       SEXT816(lVar11) != SEXT816(lVar10) * SEXT816(column_info_alloc_3 + lVar5))) {
      pcVar16 = column_info;
      column_info = pcVar14;
      xalloc_die();
      pcVar14 = (char *)*puVar15;
      pcVar16 = *(char **)pcVar16;
      uVar12 = filevercmp(pcVar14,pcVar16);
      if ((int)uVar12 != 0) {
        return uVar12;
      }
      uVar3 = strcmp(pcVar14,pcVar16);
      return (ulong)uVar3;
    }
    column_info = pcVar14;
    lVar10 = xinmalloc(lVar11 >> 1);
    pcVar14 = column_info;
    if (lVar8 < column_info_alloc_3) {
      lVar5 = lVar5 * 8;
      lVar8 = column_info_alloc_3 * 8;
      do {
        *(long *)(pcVar14 + lVar5 * 3 + -8) = lVar10;
        lVar10 = lVar10 + lVar5;
        lVar5 = lVar5 + 8;
      } while (lVar5 != lVar8 + 8);
    }
    if (0 < (long)uVar12) goto LAB_00101985;
LAB_00101b9d:
    if ((long)cwd_n_used < 1) {
      return uVar12;
    }
  }
  else {
    if ((long)uVar12 < 1) goto LAB_00101b9d;
LAB_00101985:
    uVar2 = cwd_n_used;
    pcVar14 = column_info;
    uVar13 = 0;
    lVar8 = 3;
    do {
      puVar4 = *(undefined8 **)(pcVar14 + lVar8 * 8 + -8);
      uVar13 = uVar13 + 8;
      pcVar14[lVar8 * 8 + -0x18] = '\x01';
      *(long *)(pcVar14 + lVar8 * 8 + -0x10) = lVar8;
      puVar15 = (undefined8 *)((long)puVar4 + uVar13);
      if ((uVar13 & 8) == 0) goto LAB_001019d0;
      *puVar4 = 3;
      for (puVar4 = puVar4 + 1; puVar15 != puVar4; puVar4 = puVar4 + 2) {
LAB_001019d0:
        *puVar4 = 3;
        puVar4[1] = 3;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != uVar12 * 3 + 3);
    if ((long)uVar2 < 1) goto LAB_00101abd;
  }
  lVar8 = 0;
  do {
    lVar5 = length_of_file_name_and_frills(*(undefined8 *)(sorted_file + lVar8 * 8));
    uVar13 = cwd_n_used;
    uVar2 = line_length;
    if (0 < (long)uVar12) {
      uVar6 = 0;
      pcVar14 = column_info;
      do {
        uVar7 = uVar6 + 1;
        if (*pcVar14 != '\0') {
          if (param_1 == '\0') {
            uVar9 = lVar8 % (long)uVar7;
          }
          else {
            uVar9 = lVar8 / ((long)((uVar13 - 1) + uVar7) / (long)uVar7);
          }
          puVar1 = (ulong *)(*(long *)(pcVar14 + 0x10) + uVar9 * 8);
          uVar6 = lVar5 + (ulong)(uVar9 != uVar6) * 2;
          uVar9 = *puVar1;
          if (uVar9 < uVar6) {
            *(ulong *)(pcVar14 + 8) = *(long *)(pcVar14 + 8) + (uVar6 - uVar9);
            *puVar1 = uVar6;
            *pcVar14 = *(ulong *)(pcVar14 + 8) < uVar2;
          }
        }
        pcVar14 = pcVar14 + 0x18;
        uVar6 = uVar7;
      } while (uVar12 != uVar7);
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 < (long)uVar13);
LAB_00101abd:
  if (1 < (long)uVar12) {
    pcVar14 = column_info + uVar12 * 0x18 + -0x18;
    do {
      if (*pcVar14 != '\0') {
        return uVar12;
      }
      uVar12 = uVar12 - 1;
      pcVar14 = pcVar14 + -0x18;
    } while (uVar12 != 1);
  }
  return uVar12;
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



void clear_files(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  if (0 < cwd_n_used) {
    plVar1 = sorted_file + cwd_n_used;
    plVar3 = sorted_file;
    do {
      puVar2 = (undefined8 *)*plVar3;
      plVar3 = plVar3 + 1;
      free((void *)*puVar2);
      free((void *)puVar2[1]);
      free((void *)puVar2[2]);
    } while (plVar1 != plVar3);
  }
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



void strcmp_size(undefined8 *param_1,undefined8 *param_2)

{
  if ((long)param_1[9] < (long)param_2[9] == (long)param_2[9] < (long)param_1[9]) {
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
      put_indicator(&DAT_00110050);
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



void format_user_width(undefined4 param_1)

{
  long lVar1;
  
  if (numeric_ids == '\0') {
    lVar1 = getuser();
    if (lVar1 != 0) {
      gnu_mbswidth(lVar1,3);
      return;
    }
  }
  __snprintf_chk(0,0,2,0xffffffffffffffff,&_LC6,param_1);
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



void rev_strcmp_size(undefined8 *param_1,undefined8 *param_2)

{
  if ((long)param_2[9] < (long)param_1[9] == (long)param_1[9] < (long)param_2[9]) {
    strcmp((char *)*param_2,(char *)*param_1);
    return;
  }
  return;
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



void rev_strcmp_df_width(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00102209;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00102209;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00102209:
  rev_strcmp_width();
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



void sort_files(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = cwd_n_used;
  if (sorted_file_alloc < (ulong)((cwd_n_used >> 1) + cwd_n_used)) {
    free(sorted_file);
    sorted_file = (long *)xinmalloc(lVar9,0x18);
    sorted_file_alloc = cwd_n_used * 3;
  }
  lVar9 = cwd_n_used;
  if (cwd_n_used < 1) {
    if (sort_type == 2) goto LAB_00102679;
LAB_00102662:
    if (((line_length != 0) && (format - 2U < 2)) && (0 < lVar9)) goto LAB_0010275b;
  }
  else {
    plVar2 = sorted_file + cwd_n_used;
    plVar6 = sorted_file;
    lVar8 = cwd_file;
    do {
      *plVar6 = lVar8;
      plVar6 = plVar6 + 1;
      lVar8 = lVar8 + 0xd0;
    } while (plVar6 != plVar2);
    if (sort_type != 2) goto LAB_00102662;
LAB_0010275b:
    lVar9 = 0;
    do {
      puVar3 = (undefined8 *)sorted_file[lVar9];
      lVar8 = puVar3[0x19];
      if (lVar8 == 0) {
        lVar8 = quote_name_width(*puVar3,filename_quoting_options,
                                 *(undefined4 *)((long)puVar3 + 0xc4));
      }
      lVar4 = cwd_n_used;
      lVar9 = lVar9 + 1;
      puVar3[0x19] = lVar8;
    } while (lVar9 < lVar4);
  }
  if (sort_type == 6) {
    return;
  }
LAB_00102679:
  iVar5 = _setjmp((__jmp_buf_tag *)failed_strcoll);
  lVar9 = cwd_n_used;
  plVar2 = sorted_file;
  uVar1 = sort_type;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    if (sort_type == 4) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("sort_type != sort_version","src/ls.c",0x1017,"sort_files");
    }
    if (0 < cwd_n_used) {
      plVar6 = sorted_file + cwd_n_used;
      plVar7 = sorted_file;
      lVar8 = cwd_file;
      do {
        *plVar7 = lVar8;
        plVar7 = plVar7 + 1;
        lVar8 = lVar8 + 0xd0;
      } while (plVar6 != plVar7);
    }
    iVar5 = 1;
  }
  if (uVar1 == 5) {
    uVar1 = time_type + 5;
  }
  mpsort(plVar2,lVar9,
         *(undefined8 *)
          (sort_functions +
          ((ulong)directories_first +
          ((ulong)sort_reverse + ((long)iVar5 + (ulong)uVar1 * 2) * 2) * 2) * 8));
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



void extract_dirs_from_files(long param_1,undefined1 param_2)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  void *__ptr;
  long *plVar8;
  long lVar9;
  
  if ((param_1 != 0) && (active_dir_set != 0)) {
    puVar5 = (undefined8 *)xmalloc(0x20);
    uVar6 = xstrdup(param_1);
    *puVar5 = 0;
    puVar5[1] = uVar6;
    *(undefined1 *)(puVar5 + 2) = 0;
    puVar5[3] = pending_dirs;
    pending_dirs = puVar5;
  }
  lVar9 = cwd_n_used;
  if (0 < cwd_n_used) {
    do {
      while( true ) {
        lVar9 = lVar9 + -1;
        puVar5 = (undefined8 *)sorted_file[lVar9];
        if ((*(int *)(puVar5 + 0x15) == 3) || (*(int *)(puVar5 + 0x15) == 9)) break;
LAB_00102d50:
        if (lVar9 == 0) goto LAB_00102e00;
      }
      pcVar3 = (char *)*puVar5;
      if (param_1 == 0) {
LAB_00102e60:
        queue_directory(pcVar3,puVar5[1],param_2);
      }
      else {
        pcVar7 = (char *)last_component(pcVar3);
        if ((*pcVar7 == '.') &&
           ((pcVar7[(ulong)(pcVar7[1] == '.') + 1] == '\0' ||
            (pcVar7[(ulong)(pcVar7[1] == '.') + 1] == '/')))) goto LAB_00102d50;
        if (*pcVar3 == '/') goto LAB_00102e60;
        __ptr = (void *)file_name_concat(param_1,pcVar3,0);
        queue_directory(__ptr,puVar5[1],param_2);
        free(__ptr);
      }
      if (*(int *)(puVar5 + 0x15) != 9) goto LAB_00102d50;
      free((void *)*puVar5);
      free((void *)puVar5[1]);
      free((void *)puVar5[2]);
    } while (lVar9 != 0);
LAB_00102e00:
    plVar4 = sorted_file;
    if (0 < cwd_n_used) {
      plVar1 = sorted_file + cwd_n_used;
      plVar8 = sorted_file;
      do {
        iVar2 = *(int *)(*plVar8 + 0xa8);
        plVar4[lVar9] = *plVar8;
        plVar8 = plVar8 + 1;
        lVar9 = lVar9 + (ulong)(iVar2 != 9);
      } while (plVar1 != plVar8);
      cwd_n_used = lVar9;
      return;
    }
  }
  cwd_n_used = 0;
  return;
}



void rev_xstrcoll_df_ctime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00102f09;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00102f09;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00102f09:
  rev_xstrcoll_ctime();
  return;
}



void rev_strcmp_df_ctime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00102f92;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00102f92;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00102f92:
  if (((uint)((long)param_2[0x11] < (long)param_1[0x11]) -
      (uint)((long)param_1[0x11] < (long)param_2[0x11])) +
      ((uint)((long)param_2[0x10] < (long)param_1[0x10]) -
      (uint)((long)param_1[0x10] < (long)param_2[0x10])) * 2 != 0) {
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
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00103059;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_00103059;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103059:
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
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103119;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103119;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103119:
  if ((long)param_1[9] < (long)param_2[9] != (long)param_2[9] < (long)param_1[9]) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void xstrcoll_df_ctime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_001031b9;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_001031b9;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001031b9:
  xstrcoll_ctime();
  return;
}



void strcmp_df_ctime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103242;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103242;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103242:
  if (((uint)((long)param_1[0x11] < (long)param_2[0x11]) -
      (uint)((long)param_2[0x11] < (long)param_1[0x11])) +
      ((uint)((long)param_1[0x10] < (long)param_2[0x10]) -
      (uint)((long)param_2[0x10] < (long)param_1[0x10])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void xstrcoll_df_mtime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103309;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103309;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103309:
  xstrcoll_mtime();
  return;
}



void strcmp_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103392;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103392;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103392:
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
  return;
}



void xstrcoll_df_btime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103459;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103459;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103459:
  xstrcoll_btime();
  return;
}



void strcmp_df_btime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_001034e2;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_001034e2;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001034e2:
  if (((uint)((long)param_1[0xf] < (long)param_2[0xf]) -
      (uint)((long)param_2[0xf] < (long)param_1[0xf])) +
      ((uint)((long)param_1[0xe] < (long)param_2[0xe]) -
      (uint)((long)param_2[0xe] < (long)param_1[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_1,(char *)*param_2);
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
    if (bVar2) goto LAB_001035a9;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar2) {
      if (!bVar3) {
        return;
      }
      goto LAB_001035a9;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001035a9:
  __s1 = (char *)*param_1;
  __s2 = (char *)*param_2;
  iVar1 = filevercmp(__s1,__s2);
  if (iVar1 == 0) {
    strcmp(__s1,__s2);
    return;
  }
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
    if (bVar2) goto LAB_00103659;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar2) {
      if (!bVar3) {
        return;
      }
      goto LAB_00103659;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103659:
  __s1 = (char *)*param_2;
  __s2 = (char *)*param_1;
  iVar1 = filevercmp(__s1,__s2);
  if (iVar1 == 0) {
    strcmp(__s1,__s2);
    return;
  }
  return;
}



void xstrcoll_df_width(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103709;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103709;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103709:
  xstrcoll_width();
  return;
}



void strcmp_df_width(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103789;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103789;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103789:
  strcmp_width();
  return;
}



void rev_xstrcoll_df_btime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103809;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103809;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103809:
  rev_xstrcoll_btime();
  return;
}



void rev_strcmp_df_btime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103892;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103892;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103892:
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void rev_xstrcoll_df_atime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103959;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103959;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103959:
  rev_xstrcoll_atime();
  return;
}



void rev_strcmp_df_atime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_001039e2;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_001039e2;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001039e2:
  if (((uint)((long)param_2[0xd] < (long)param_1[0xd]) -
      (uint)((long)param_1[0xd] < (long)param_2[0xd])) +
      ((uint)((long)param_2[0xc] < (long)param_1[0xc]) -
      (uint)((long)param_1[0xc] < (long)param_2[0xc])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void rev_xstrcoll_df_extension(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103aa9;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103aa9;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103aa9:
  rev_xstrcoll_extension();
  return;
}



void rev_strcmp_df_extension(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00103b31;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103b31;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103b31:
  cmp_extension(param_2,param_1,strcmp);
  return;
}



void xstrcoll_df_extension(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103bb9;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103bb9;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103bb9:
  xstrcoll_extension();
  return;
}



void strcmp_df_extension(long param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00103c39;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103c39;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103c39:
  cmp_extension(param_1,param_2,strcmp);
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
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103cc9;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar3) {
        return;
      }
      goto LAB_00103cc9;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103cc9:
  __s2 = (char *)*param_2;
  __s1 = (char *)*param_1;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void strcmp_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00103d79;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103d79;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103d79:
  strcmp((char *)*param_1,(char *)*param_2);
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
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103e09;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar3) {
        return;
      }
      goto LAB_00103e09;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103e09:
  __s2 = (char *)*param_1;
  __s1 = (char *)*param_2;
  piVar2 = __errno_location();
  *piVar2 = 0;
  strcoll(__s1,__s2);
  return;
}



void rev_strcmp_df_name(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 9 || iVar1 == 3) goto LAB_00103eb9;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103eb9;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103eb9:
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void rev_xstrcoll_df_mtime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00103f49;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103f49;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103f49:
  rev_xstrcoll_mtime();
  return;
}



void rev_strcmp_df_mtime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00103fd2;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00103fd2;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00103fd2:
  if (((uint)((long)param_2[0xf] < (long)param_1[0xf]) -
      (uint)((long)param_1[0xf] < (long)param_2[0xf])) +
      ((uint)((long)param_2[0xe] < (long)param_1[0xe]) -
      (uint)((long)param_1[0xe] < (long)param_2[0xe])) * 2 != 0) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void xstrcoll_df_atime(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00104099;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00104099;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104099:
  xstrcoll_atime();
  return;
}



void strcmp_df_atime(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_00104122;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_00104122;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104122:
  if (((uint)((long)param_1[0xd] < (long)param_2[0xd]) -
      (uint)((long)param_2[0xd] < (long)param_1[0xd])) +
      ((uint)((long)param_1[0xc] < (long)param_2[0xc]) -
      (uint)((long)param_2[0xc] < (long)param_1[0xc])) * 2 != 0) {
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
    if (iVar1 == 9 || iVar1 == 3) goto LAB_001041e9;
  }
  else {
    bVar3 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 9 || iVar1 == 3) {
      if (!bVar3) {
        return;
      }
      goto LAB_001041e9;
    }
  }
  if (bVar3 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001041e9:
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



void rev_strcmp_df_size(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x15);
  if ((*(int *)(param_2 + 0x15) == 3) || (*(int *)(param_2 + 0x15) == 9)) {
    bVar2 = true;
    if (iVar1 == 3 || iVar1 == 9) goto LAB_001042a9;
  }
  else {
    bVar2 = (*(uint *)((long)param_2 + 0xac) & 0xf000) == 0x4000;
    if (iVar1 == 3 || iVar1 == 9) {
      if (!bVar2) {
        return;
      }
      goto LAB_001042a9;
    }
  }
  if (bVar2 != ((*(uint *)((long)param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_001042a9:
  if ((long)param_2[9] < (long)param_1[9] != (long)param_1[9] < (long)param_2[9]) {
    return;
  }
  strcmp((char *)*param_2,(char *)*param_1);
  return;
}



void rev_xstrcoll_df_width(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xa8) == 9 || *(int *)(param_1 + 0xa8) == 3;
  if ((*(int *)(param_2 + 0xa8) == 3) || (*(int *)(param_2 + 0xa8) == 9)) {
    bVar2 = true;
    if (bVar1) goto LAB_00104349;
  }
  else {
    bVar2 = (*(uint *)(param_2 + 0xac) & 0xf000) == 0x4000;
    if (bVar1) {
      if (!bVar2) {
        return;
      }
      goto LAB_00104349;
    }
  }
  if (bVar2 != ((*(uint *)(param_1 + 0xac) & 0xf000) == 0x4000)) {
    return;
  }
LAB_00104349:
  rev_xstrcoll_width();
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
  char cVar6;
  long in_FS_OFFSET;
  size_t local_2078;
  byte *local_2070;
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
    if ((_DAT_00110080 != 0) &&
       (((2 < _DAT_00110080 || (_DAT_00110088[_DAT_00110080 - 1] != '0')) || (*_DAT_00110088 != '0')
        ))) {
      put_indicator(&color_indicator);
      put_indicator(&DAT_00110050);
    }
    put_indicator(&color_indicator);
    put_indicator(param_4);
    put_indicator(&DAT_00110050);
  }
  __ptr = local_2050;
  cVar6 = align_variable_outer_quotes;
  local_2070 = local_2050;
  local_2078 = sVar3;
  if (param_7 == 0) {
    cVar6 = '\0';
  }
  else {
    if (align_variable_outer_quotes == '\0') {
    }
    else if ((cwd_some_quoted == '\x01') && (local_2051 == 0)) {
      local_2078 = sVar3 - 2;
      local_2070 = local_2050 + 1;
      bVar1 = *local_2050;
      pbVar2 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar1;
      }
      else {
        __overflow(_stdout,(uint)bVar1);
      }
    }
    else {
      cVar6 = '\0';
    }
    __ptr_00 = (void *)file_escape(hostname,0);
    pcVar4 = (char *)file_escape(param_7,1);
    puVar5 = &_LC10;
    if (*pcVar4 == '/') {
      puVar5 = &_LC1;
    }
    __printf_chk(2,&_LC11,__ptr_00,puVar5);
    free(__ptr_00);
    free(pcVar4);
  }
  if (param_6 == 0) {
    fwrite_unlocked(local_2070,1,local_2078,_stdout);
    dired_pos = dired_pos + sVar3;
  }
  else {
    if (dired != '\0') {
      push_current_dired_pos_part_0(param_6);
    }
    fwrite_unlocked(local_2070,1,local_2078,_stdout);
    dired_pos = dired_pos + sVar3;
    if (dired != '\0') {
      push_current_dired_pos_part_0(param_6);
    }
  }
  if (param_7 != 0) {
    fwrite_unlocked(&_LC12,1,6,_stdout);
    if (cVar6 != '\0') {
      bVar1 = __ptr[sVar3 - 1];
      pbVar2 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar2 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
        *pbVar2 = bVar1;
      }
      else {
        __overflow(_stdout,(uint)bVar1);
      }
    }
  }
  if ((param_1 != __ptr) && (__ptr != local_2048)) {
    free(__ptr);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_2051 + sVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long print_name_with_quoting(undefined8 *param_1,byte param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  char cVar3;
  size_t __n;
  uint uVar4;
  int iVar5;
  long lVar6;
  size_t sVar7;
  size_t *psVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  char *__s;
  
  if (param_2 == 0) {
    __s = (char *)*param_1;
    if (print_with_color != '\0') {
      uVar4 = (uint)*(byte *)((long)param_1 + 0xb9);
      if ((color_symlink_as_referent == '\0') || (*(byte *)((long)param_1 + 0xb9) == 0)) {
        uVar10 = *(uint *)(param_1 + 6);
      }
      else {
        uVar10 = *(uint *)((long)param_1 + 0xac);
      }
LAB_001047a0:
      if (*(char *)(param_1 + 0x17) == '\0') goto LAB_001047af;
LAB_001048b9:
      uVar11 = uVar10 & 0xf000;
      if (uVar11 == 0x8000) {
        if ((((uVar10 & 0x800) == 0) || (DAT_00110140 == 0)) ||
           ((DAT_00110140 < 3 &&
            ((PTR___compound_literal_11_00110148[DAT_00110140 - 1] == '0' &&
             (*PTR___compound_literal_11_00110148 == '0')))))) {
          if (((uVar10 & 0x400) == 0) ||
             ((DAT_00110150 == 0 ||
              (((DAT_00110150 < 3 && (PTR___compound_literal_12_00110158[DAT_00110150 - 1] == '0'))
               && (*PTR___compound_literal_12_00110158 == '0')))))) {
            if (*(char *)(param_1 + 0x18) == '\0') {
              if ((((uVar10 & 0x49) == 0) || (DAT_00110120 == 0)) ||
                 ((DAT_00110120 < 3 &&
                  ((PTR___compound_literal_9_00110128[DAT_00110120 - 1] == '0' &&
                   (*PTR___compound_literal_9_00110128 == '0')))))) {
                if (((ulong)param_1[5] < 2) ||
                   ((_DAT_001101a0 == 0 ||
                    (((_DAT_001101a0 < 3 && (_DAT_001101a8[_DAT_001101a0 - 1] == '0')) &&
                     (*_DAT_001101a8 == '0')))))) goto LAB_00104a70;
                lVar6 = 0x160;
              }
              else {
                lVar6 = 0xe0;
              }
            }
            else {
              lVar6 = 0x150;
            }
          }
          else {
            lVar6 = 0x110;
          }
        }
        else {
          lVar6 = 0x100;
        }
      }
      else if (uVar11 == 0x4000) {
        if (((~uVar10 & 0x202) == 0) && (DAT_00110180 != 0)) {
          lVar6 = 0x140;
          if (DAT_00110180 < 3) {
            if ((PTR___compound_literal_15_00110188[DAT_00110180 - 1] == '0') &&
               (*PTR___compound_literal_15_00110188 == '0')) goto LAB_00104c1f;
            lVar6 = 0x140;
          }
        }
        else {
LAB_00104c1f:
          if (((uVar10 & 2) == 0) || (DAT_00110170 == 0)) {
LAB_00104c60:
            lVar6 = 0x60;
            if ((((uVar10 & 0x200) != 0) &&
                ((DAT_00110160 != 0 && (lVar6 = 0x120, DAT_00110160 < 3)))) &&
               ((PTR___compound_literal_13_00110168[DAT_00110160 - 1] != '0' ||
                (lVar6 = 0x60, *PTR___compound_literal_13_00110168 != '0')))) {
              lVar6 = 0x120;
            }
          }
          else {
            lVar6 = 0x130;
            if (DAT_00110170 < 3) {
              if ((PTR___compound_literal_14_00110178[DAT_00110170 - 1] == '0') &&
                 (*PTR___compound_literal_14_00110178 == '0')) goto LAB_00104c60;
              lVar6 = 0x130;
            }
          }
        }
      }
      else {
        if (uVar11 != 0xa000) {
          lVar6 = 0x80;
          if ((((uVar11 != 0x1000) && (lVar6 = 0x90, uVar11 != 0xc000)) &&
              (lVar6 = 0xa0, uVar11 != 0x6000)) && (lVar6 = 0xd0, uVar11 == 0x2000)) {
            lVar6 = 0xb0;
          }
          goto LAB_00104930;
        }
        if (uVar4 == 0) goto LAB_001047db;
LAB_0010482c:
        lVar6 = 0x70;
      }
LAB_00104930:
      psVar8 = (size_t *)((long)&color_indicator + lVar6);
LAB_0010493a:
      uVar9 = *(undefined4 *)((long)param_1 + 0xc4);
      if (psVar8[1] == 0) {
        if (_DAT_00110080 == 0) goto LAB_00104743;
        if (_DAT_00110080 < 3) {
          cVar2 = _DAT_00110088[_DAT_00110080 - 1];
          cVar3 = *_DAT_00110088;
          lVar6 = quote_name(__s,filename_quoting_options,uVar9,0,param_2 ^ 1,param_3,param_1[2]);
          process_signals();
          if (cVar2 == '0' && cVar3 == '0') {
            return lVar6;
          }
          goto LAB_0010497e;
        }
        psVar8 = (size_t *)0x0;
      }
      lVar6 = quote_name(__s,filename_quoting_options,uVar9,psVar8,param_2 ^ 1,param_3,param_1[2]);
      process_signals();
LAB_0010497e:
      if (_DAT_00110068 == 0) {
        put_indicator(&color_indicator);
        put_indicator(&DAT_00110070);
        put_indicator(&DAT_00110050);
      }
      else {
        put_indicator(&DAT_00110060);
      }
      if (line_length == 0) {
        return lVar6;
      }
      uVar1 = lVar6 + -1 + param_4;
      if (param_4 / line_length == uVar1 / line_length) {
        return lVar6;
      }
      put_indicator(&DAT_001101b0,param_4 / line_length,uVar1 % line_length);
      return lVar6;
    }
  }
  else {
    __s = (char *)param_1[1];
    if (print_with_color != '\0') {
      uVar10 = *(uint *)((long)param_1 + 0xac);
      if (*(char *)((long)param_1 + 0xb9) == '\0') {
        if ((_DAT_00110100 == 0) ||
           (((_DAT_00110100 < 3 && (_DAT_00110108[_DAT_00110100 - 1] == '0')) &&
            (*_DAT_00110108 == '0')))) {
          uVar4 = 0xffffffff;
          goto LAB_001047a0;
        }
        lVar6 = 0xc0;
        goto LAB_00104930;
      }
      uVar4 = 0;
      if (*(char *)(param_1 + 0x17) != '\0') goto LAB_001048b9;
LAB_001047af:
      uVar10 = *(uint *)(filetype_indicator_5 + (ulong)*(uint *)(param_1 + 0x15) * 4);
      if (uVar10 == 5) {
LAB_00104a70:
        sVar7 = strlen(__s);
        for (psVar8 = color_ext_list; psVar8 != (size_t *)0x0; psVar8 = (size_t *)psVar8[5]) {
          __n = *psVar8;
          if (__n <= sVar7) {
            if ((char)psVar8[4] == '\0') {
              iVar5 = c_strncasecmp();
            }
            else {
              iVar5 = strncmp(__s + (sVar7 - __n),(char *)psVar8[1],__n);
            }
            if (iVar5 == 0) {
              psVar8 = psVar8 + 2;
              goto LAB_0010493a;
            }
          }
        }
        lVar6 = 0x50;
      }
      else if ((uVar10 == 7) && (uVar4 == 0)) {
LAB_001047db:
        lVar6 = 0xd0;
        if (((color_symlink_as_referent == '\0') && (lVar6 = 0x70, _DAT_00110110 != 0)) &&
           (lVar6 = 0xd0, _DAT_00110110 < 3)) {
          if ((_DAT_00110118[_DAT_00110110 - 1] == '0') && (*_DAT_00110118 == '0'))
          goto LAB_0010482c;
          lVar6 = 0xd0;
        }
      }
      else {
        lVar6 = (ulong)uVar10 << 4;
      }
      goto LAB_00104930;
    }
  }
  uVar9 = *(undefined4 *)((long)param_1 + 0xc4);
LAB_00104743:
  lVar6 = quote_name(__s,filename_quoting_options,uVar9,0,param_2 ^ 1,param_3,param_1[2]);
  process_signals();
  return lVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_long_format(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  undefined1 *puVar19;
  ulong uVar20;
  char *pcVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  bool bVar23;
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
    if (any_has_acl == '\0') goto LAB_00104da1;
LAB_001051ee:
    iVar6 = *(int *)(param_1 + 0xbc);
    if (iVar6 == 2) {
      local_129b = CONCAT11(0x2e,(undefined1)local_129b);
    }
    else if (iVar6 == 3) {
      local_129b = CONCAT11(0x2b,(undefined1)local_129b);
    }
    else if (iVar6 == 1) {
      local_129b = CONCAT11(0x3f,(undefined1)local_129b);
    }
  }
  else {
    filemodestring(param_1 + 0x18,&local_12a4);
    if (any_has_acl != '\0') goto LAB_001051ee;
LAB_00104da1:
    local_129b = local_129b & 0xff;
  }
  if (time_type == 2) {
    local_1338 = *(ulong *)(param_1 + 0x60);
    uStack_1330 = *(ulong *)(param_1 + 0x68);
LAB_00104dcd:
    bVar23 = true;
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
      goto LAB_00104dcd;
    }
    local_1338 = *(ulong *)(param_1 + 0x70);
    uStack_1330 = *(ulong *)(param_1 + 0x78);
    bVar23 = (uStack_1330 & local_1338) != 0xffffffffffffffff;
  }
  if (print_inode == '\0') {
    pcVar16 = local_e88;
    uVar20 = 0xe3b;
    uVar13 = 0xe3b;
  }
  else {
    puVar19 = &_LC13;
    if ((*(char *)(param_1 + 0xb8) != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar19 = (undefined1 *)umaxtostr(*(long *)(param_1 + 0x20),local_1278);
    }
    iVar6 = __sprintf_chk(local_e88,2,0xe3b,&_LC14,inode_number_width,puVar19);
    uVar20 = (ulong)iVar6;
    pcVar16 = local_e88 + uVar20;
    uVar13 = 0xe3b;
    if (0xe3a < uVar20) {
      uVar13 = uVar20;
    }
    uVar13 = uVar13 - uVar20;
    uVar20 = 0xe3b;
    if (0xe3a < uVar13) {
      uVar20 = uVar13;
    }
  }
  if (print_block_size != '\0') {
    pcVar21 = "?";
    if (*(char *)(param_1 + 0xb8) != '\0') {
      pcVar21 = (char *)human_readable(*(undefined8 *)(param_1 + 0x58),local_1278,human_output_opts,
                                       0x200,output_block_size);
    }
    iVar6 = gnu_mbswidth(pcVar21,3);
    pcVar22 = pcVar16;
    if ((-1 < iVar6) && (0 < block_size_width - iVar6)) {
      pcVar17 = pcVar16;
      do {
        uVar20 = 0xe3b;
        if (0xe3a < uVar13) {
          uVar20 = uVar13;
        }
        uVar11 = (uVar20 - uVar13) + 1;
        if (uVar11 < uVar20) {
          uVar11 = uVar20;
        }
        pcVar15 = pcVar17 + 1;
        uVar13 = ((uVar13 - 1) - uVar20) + uVar11;
        *pcVar17 = ' ';
        pcVar22 = pcVar16 + (uint)(block_size_width - iVar6);
        pcVar17 = pcVar15;
      } while (pcVar15 != pcVar16 + (uint)(block_size_width - iVar6));
    }
    do {
      pcVar17 = pcVar22;
      pcVar16 = pcVar17 + 1;
      uVar20 = 0xe3b;
      if (0xe3a < uVar13) {
        uVar20 = uVar13;
      }
      uVar11 = (uVar20 - uVar13) + 1;
      if (uVar11 < uVar20) {
        uVar11 = uVar20;
      }
      cVar1 = *pcVar21;
      uVar13 = ((uVar13 - 1) - uVar20) + uVar11;
      *pcVar17 = cVar1;
      pcVar22 = pcVar16;
      pcVar21 = pcVar21 + 1;
    } while (cVar1 != '\0');
    *pcVar17 = ' ';
    uVar20 = 0xe3b;
    if (0xe3a < uVar13) {
      uVar20 = uVar13;
    }
  }
  puVar19 = &_LC13;
  if (*(char *)(param_1 + 0xb8) != '\0') {
    puVar19 = (undefined1 *)umaxtostr(*(undefined8 *)(param_1 + 0x28),local_1278);
  }
  iVar6 = __sprintf_chk(pcVar16,2,uVar13,"%s %*s ",&local_12a4,nlink_width,puVar19);
  pcVar16 = pcVar16 + iVar6;
  if (dired != '\0') {
    dired_outbuf(&_LC16,2);
  }
  if ((((print_owner == '\0') && (print_group == '\0')) && (print_author == '\0')) &&
     (print_scontext == '\0')) {
    lVar8 = (long)iVar6 + uVar20;
    uVar11 = lVar8 - uVar13;
    if (uVar11 < uVar20) {
      uVar11 = uVar20;
    }
    uVar11 = (uVar13 - lVar8) + uVar11;
    uVar13 = 0xe3b;
    if (0xe3a < uVar11) {
      uVar13 = uVar11;
    }
  }
  else {
    dired_outbuf(local_e88,(long)pcVar16 - (long)local_e88);
    uVar2 = owner_width;
    uVar3 = group_width;
    if (print_owner != '\0') {
      puVar19 = &_LC13;
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar19 = (undefined1 *)0x0, numeric_ids == '\0'))
      {
        puVar19 = (undefined1 *)getuser(uVar3);
      }
      format_user_or_group(puVar19,uVar3,uVar2);
      uVar3 = group_width;
    }
    uVar2 = author_width;
    group_width = uVar3;
    if (print_group != '\0') {
      puVar19 = &_LC13;
      uVar2 = *(undefined4 *)(param_1 + 0x38);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar19 = (undefined1 *)0x0, numeric_ids == '\0'))
      {
        puVar19 = (undefined1 *)getgroup(uVar2);
      }
      format_user_or_group(puVar19,uVar2,uVar3);
      uVar2 = author_width;
    }
    author_width = uVar2;
    if (print_author != '\0') {
      puVar19 = &_LC13;
      uVar3 = *(undefined4 *)(param_1 + 0x34);
      if ((*(char *)(param_1 + 0xb8) != '\0') && (puVar19 = (undefined1 *)0x0, numeric_ids == '\0'))
      {
        puVar19 = (undefined1 *)getuser(uVar3);
      }
      format_user_or_group(puVar19,uVar3,uVar2);
    }
    if (print_scontext != '\0') {
      format_user_or_group(*(undefined8 *)(param_1 + 0xb0),0,scontext_width);
    }
    uVar11 = 0xe3b;
    pcVar16 = local_e88;
    uVar13 = 0xe3b;
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    pcVar21 = "?";
LAB_0010503b:
    iVar6 = gnu_mbswidth(pcVar21,3);
    pcVar22 = pcVar16;
    if ((-1 < iVar6) && (0 < file_size_width - iVar6)) {
      pcVar17 = pcVar16;
      do {
        uVar13 = 0xe3b;
        if (0xe3a < uVar11) {
          uVar13 = uVar11;
        }
        uVar20 = (uVar13 - uVar11) + 1;
        if (uVar20 < uVar13) {
          uVar20 = uVar13;
        }
        pcVar15 = pcVar17 + 1;
        uVar11 = ((uVar11 - 1) - uVar13) + uVar20;
        *pcVar17 = ' ';
        pcVar17 = pcVar15;
        pcVar22 = pcVar16 + (uint)(file_size_width - iVar6);
      } while (pcVar15 != pcVar16 + (uint)(file_size_width - iVar6));
    }
    do {
      pcVar16 = pcVar22;
      uVar13 = 0xe3b;
      if (0xe3a < uVar11) {
        uVar13 = uVar11;
      }
      uVar20 = (uVar13 - uVar11) + 1;
      if (uVar20 < uVar13) {
        uVar20 = uVar13;
      }
      pcVar22 = pcVar16 + 1;
      cVar1 = *pcVar21;
      uVar11 = ((uVar11 - 1) - uVar13) + uVar20;
      *pcVar16 = cVar1;
      pcVar21 = pcVar21 + 1;
    } while (cVar1 != '\0');
    *pcVar16 = ' ';
  }
  else {
    if ((*(uint *)(param_1 + 0x30) & 0xb000) != 0x2000) {
      pcVar21 = (char *)human_readable(*(undefined8 *)(param_1 + 0x48),local_1278,
                                       file_human_output_opts,1,file_output_block_size);
      goto LAB_0010503b;
    }
    iVar18 = file_size_width - (major_device_number_width + 2 + minor_device_number_width);
    uVar9 = umaxtostr((uint)((*(ulong *)(param_1 + 0x40) >> 0x14) << 8) |
                      (uint)*(ulong *)(param_1 + 0x40) & 0xff,local_1278);
    iVar6 = minor_device_number_width;
    uVar10 = umaxtostr((uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 0x20) & 0xfffff000 |
                       (uint)((ulong)*(undefined8 *)(param_1 + 0x40) >> 8) & 0xfff,local_1298);
    if (iVar18 < 0) {
      iVar18 = 0;
    }
    iVar6 = __sprintf_chk(pcVar16,2,uVar11,"%*s, %*s ",iVar18 + major_device_number_width,uVar10,
                          iVar6,uVar9);
    lVar8 = (long)iVar6 + uVar13;
    uVar20 = lVar8 - uVar11;
    if (uVar20 < uVar13) {
      uVar20 = uVar13;
    }
    pcVar22 = pcVar16 + iVar6;
    uVar11 = (uVar11 - lVar8) + uVar20;
  }
  *pcVar22 = '\x01';
  if ((*(char *)(param_1 + 0xb8) == '\0') || (!bVar23)) {
LAB_001050ef:
    puVar19 = &_LC13;
LAB_001050f6:
    if (width_2 < 0) {
      local_1340 = 0;
      lVar8 = localtime_rz(localtz,&local_1340,local_12e8);
      if (lVar8 != 0) {
        puVar12 = long_time_format;
        if (use_abformat != '\0') {
          puVar12 = abformat + (long)local_12d8 * 0x80;
        }
        lVar8 = nstrftime(local_1278,0x3e9,puVar12,local_12e8,localtz,0);
        if (lVar8 != 0) {
          width_2 = mbsnwidth(local_1278,lVar8,3);
        }
      }
      if (width_2 < 0) {
        width_2 = 0;
      }
    }
    iVar6 = __sprintf_chk(pcVar22,2,uVar11,&_LC14,width_2,puVar19);
    pcVar22 = pcVar22 + iVar6;
  }
  else {
    lVar8 = localtime_rz(localtz,&local_1338,local_1328);
    if (lVar8 == 0) {
LAB_00105820:
      if (*pcVar22 != '\0') {
        if (*(char *)(param_1 + 0xb8) == '\0') goto LAB_001050ef;
        puVar19 = (undefined1 *)imaxtostr(local_1338,local_1298);
        goto LAB_001050f6;
      }
    }
    else {
      bVar23 = (long)uStack_1330 < DAT_00109358;
      uVar7 = (uint)(DAT_00109358 < (long)uStack_1330);
      iVar6 = (uint)bVar23 - (uint)(DAT_00109358 < (long)uStack_1330);
      if ((int)(iVar6 + ((uint)((long)local_1338 < current_time) -
                        (uint)(current_time < (long)local_1338)) * 2) < 0) {
        gettime(&current_time);
        bVar23 = (long)uStack_1330 < DAT_00109358;
        uVar7 = (uint)(DAT_00109358 < (long)uStack_1330);
        iVar6 = bVar23 - uVar7;
      }
      uVar7 = ((uVar7 - bVar23) +
               ((uint)(current_time < (long)local_1338) - (uint)((long)local_1338 < current_time)) *
               2 & iVar6 + ((uint)((long)local_1338 < current_time + -0xf0c2ac) -
                           (uint)(current_time + -0xf0c2ac < (long)local_1338)) * 2) >> 0x1f;
      if (use_abformat == '\0') {
        puVar19 = (&long_time_format)[uVar7];
      }
      else {
        puVar19 = abformat +
                  ((ulong)((uint)((long)((ulong)uVar7 << 0x3f) >> 0x3f) & 0xc) + (long)local_1318) *
                  0x80;
      }
      lVar8 = nstrftime(pcVar22,0x3e9,puVar19,local_1328,localtz);
      if (lVar8 == 0) goto LAB_00105820;
      pcVar22 = pcVar22 + lVar8;
    }
    *pcVar22 = ' ';
    pcVar22 = pcVar22 + 1;
  }
  lVar14 = (long)pcVar22 - (long)local_e88;
  dired_outbuf(local_e88,lVar14);
  lVar8 = print_name_with_quoting(param_1,0,dired_obstack,lVar14);
  if (*(int *)(param_1 + 0xa8) == 6) {
    if (*(long *)(param_1 + 8) == 0) goto LAB_0010516c;
    dired_outbuf(&_LC18,4);
    print_name_with_quoting(param_1,1,0,lVar14 + 4 + lVar8);
    if (indicator_style == 0) goto LAB_0010516c;
    bVar5 = get_type_indicator(1,*(undefined4 *)(param_1 + 0xac),0);
  }
  else {
    if (indicator_style == 0) goto LAB_0010516c;
    bVar5 = get_type_indicator(*(undefined1 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x30));
  }
  if (bVar5 != 0) {
    dired_pos = dired_pos + 1;
    pbVar4 = (byte *)_stdout->_IO_write_ptr;
    if (pbVar4 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = (char *)(pbVar4 + 1);
      *pbVar4 = bVar5;
    }
    else {
      __overflow(_stdout,(uint)bVar5);
    }
  }
LAB_0010516c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  if (((print_with_color != '\0') && (_DAT_00110080 != 0)) &&
     ((2 < _DAT_00110080 ||
      ((_DAT_00110088[_DAT_00110080 - 1] != '0' || (param_3 = _DAT_00110088, *_DAT_00110088 != '0'))
      )))) {
    put_indicator(&color_indicator);
    put_indicator(&DAT_00110080);
    put_indicator(&DAT_00110050);
    param_3 = extraout_RDX;
  }
  if (print_inode != '\0') {
    puVar3 = &_LC13;
    if ((*(char *)(param_1 + 0xb8) != '\0') && (*(long *)(param_1 + 0x20) != 0)) {
      puVar3 = (undefined1 *)umaxtostr(*(long *)(param_1 + 0x20),auStack_2b8,param_3,&_LC13);
    }
    uVar4 = 0;
    if (format != 4) {
      uVar4 = inode_number_width;
    }
    __printf_chk(2,&_LC14,uVar4,puVar3);
  }
  if (print_block_size != '\0') {
    puVar3 = &_LC13;
    if (*(char *)(param_1 + 0xb8) != '\0') {
      puVar3 = (undefined1 *)
               human_readable(*(undefined8 *)(param_1 + 0x58),auStack_2b8,human_output_opts,0x200,
                              output_block_size);
    }
    uVar4 = 0;
    if (format != 4) {
      uVar4 = block_size_width;
    }
    __printf_chk(2,&_LC14,uVar4,puVar3);
  }
  if (print_scontext != '\0') {
    uVar4 = 0;
    if (format != 4) {
      uVar4 = scontext_width;
    }
    __printf_chk(2,&_LC14,uVar4,*(undefined8 *)(param_1 + 0xb0));
  }
  print_name_with_quoting(param_1,0,0,param_2);
  if ((indicator_style != 0) &&
     (bVar2 = get_type_indicator(*(undefined1 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0x30),
                                 *(undefined4 *)(param_1 + 0xa8)), bVar2 != 0)) {
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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_00105bc8:
          uVar8 = uVar8 + 2;
          uVar5 = 0x20;
          uVar4 = uVar7;
          bVar9 = 0x20;
          goto LAB_00105bd3;
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
          goto LAB_00105bc8;
          uVar5 = (uint)(char)eolbyte;
          uVar8 = 0;
          bVar9 = eolbyte;
LAB_00105bd3:
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

void print_current_files(void)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long local_40;
  
  switch(format) {
  case 0:
    lVar8 = 0;
    if (cwd_n_used < 1) {
      return;
    }
    do {
      if (((print_with_color != '\0') && (_DAT_00110080 != 0)) &&
         ((2 < _DAT_00110080 ||
          ((_DAT_00110088[_DAT_00110080 - 1] != '0' || (*_DAT_00110088 != '0')))))) {
        put_indicator(&color_indicator);
        put_indicator(&DAT_00110080);
        put_indicator(&DAT_00110050);
      }
      print_long_format(sorted_file[lVar8]);
      bVar2 = eolbyte;
      dired_pos = dired_pos + 1;
      pbVar1 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar1 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
        *pbVar1 = bVar2;
      }
      else {
        __overflow(_stdout,(uint)eolbyte);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < cwd_n_used);
    return;
  case 1:
    lVar8 = 0;
    if (0 < cwd_n_used) {
      do {
        print_file_name_and_frills_isra_0(sorted_file[lVar8],0);
        bVar2 = eolbyte;
        pbVar1 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
          *pbVar1 = bVar2;
        }
        else {
          __overflow(_stdout,(uint)eolbyte);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < cwd_n_used);
    }
    return;
  case 2:
    if (line_length != 0) {
      lVar5 = calculate_columns(1);
      local_40 = 0;
      lVar8 = column_info + lVar5 * 0x18;
      lVar5 = (cwd_n_used / lVar5 + 1) - (ulong)(cwd_n_used % lVar5 == 0);
      if (lVar5 < 1) {
        return;
      }
      do {
        lVar11 = 0;
        lVar3 = local_40;
        lVar4 = 0;
        while( true ) {
          uVar9 = sorted_file[lVar3];
          lVar6 = length_of_file_name_and_frills();
          lVar7 = *(long *)(*(long *)(lVar8 + -8) + lVar11);
          lVar11 = lVar11 + 8;
          print_file_name_and_frills_isra_0(uVar9,lVar4);
          bVar2 = eolbyte;
          if (cwd_n_used - lVar5 <= lVar3) break;
          lVar7 = lVar7 + lVar4;
          lVar3 = lVar3 + lVar5;
          indent(lVar6 + lVar4,lVar7);
          lVar4 = lVar7;
        }
        pbVar1 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar1 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
          *pbVar1 = bVar2;
        }
        else {
          __overflow(_stdout,(uint)eolbyte);
        }
        local_40 = local_40 + 1;
      } while (lVar5 != local_40);
      return;
    }
    break;
  case 3:
    if (line_length != 0) {
      lVar3 = calculate_columns(0);
      lVar8 = column_info + -0x18 + lVar3 * 0x18;
      uVar9 = *sorted_file;
      lVar4 = length_of_file_name_and_frills(uVar9);
      lVar5 = **(long **)(lVar8 + 0x10);
      print_file_name_and_frills_isra_0(uVar9,0);
      if (1 < cwd_n_used) {
        lVar7 = 1;
        lVar11 = 0;
        do {
          bVar2 = eolbyte;
          lVar6 = lVar7 % lVar3;
          if (lVar6 == 0) {
            pbVar1 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar1 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
              *pbVar1 = bVar2;
            }
            else {
              __overflow(_stdout,(uint)eolbyte);
            }
            lVar10 = 0;
          }
          else {
            lVar10 = lVar5 + lVar11;
            indent(lVar4 + lVar11,lVar10);
          }
          uVar9 = sorted_file[lVar7];
          lVar7 = lVar7 + 1;
          print_file_name_and_frills_isra_0(uVar9,lVar10);
          lVar4 = length_of_file_name_and_frills(uVar9);
          lVar5 = *(long *)(*(long *)(lVar8 + 0x10) + lVar6 * 8);
          lVar11 = lVar10;
        } while (lVar7 < cwd_n_used);
      }
      bVar2 = eolbyte;
      pbVar1 = (byte *)_stdout->_IO_write_ptr;
      if (pbVar1 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar1 + 1);
        *pbVar1 = bVar2;
        return;
      }
      __overflow(_stdout,(uint)eolbyte);
      return;
    }
    break;
  case 4:
    uVar9 = 0x2c;
    goto LAB_00105e05;
  default:
    return;
  }
  uVar9 = 0x20;
LAB_00105e05:
  print_with_separator(uVar9);
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
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  size_t sVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  int **ppiVar22;
  int **ppiVar24;
  int iVar25;
  undefined8 *puVar26;
  byte bVar27;
  uint uVar28;
  ulong uVar29;
  long in_FS_OFFSET;
  bool bVar30;
  byte bVar31;
  int *local_3f8;
  int *local_3f0;
  int local_3e8;
  int local_3e4;
  int *local_3e0;
  undefined1 **local_3d8;
  uint local_3d0;
  bool local_3c9;
  int *local_3c8;
  char *local_3c0;
  undefined1 *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  int local_3a0;
  undefined1 local_39c [164];
  undefined1 local_2f8 [32];
  char local_2d8 [664];
  long local_40;
  int **ppiVar23;
  
  bVar27 = 0;
  uVar29 = (ulong)param_2;
  ppiVar23 = &local_3f8;
  ppiVar22 = &local_3f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (cwd_n_used == cwd_n_alloc) {
    cwd_file = xpalloc(cwd_file,&cwd_n_alloc,1,0xffffffffffffffff,0xd0);
  }
  puVar1 = (undefined8 *)(cwd_file + cwd_n_used * 0xd0);
  *puVar1 = 0;
  puVar1[0x19] = 0;
  puVar26 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar17 = (ulong)(((int)puVar1 - (int)(undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8)
                        ) + 0xd0U >> 3); uVar17 != 0; uVar17 = uVar17 - 1) {
    *puVar26 = 0;
    puVar26 = puVar26 + (ulong)bVar27 * -2 + 1;
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
      goto LAB_001061ae;
    }
    *(undefined4 *)((long)puVar1 + 0xc4) = 1;
    cwd_some_quoted = '\x01';
    if (param_3 == 0) goto LAB_00106310;
LAB_001061b7:
    ppiVar24 = &local_3f8;
    pcVar19 = param_1;
    if ((*param_1 == '/') || (ppiVar24 = &local_3f8, pcVar19 = param_1, param_4 == (char *)0x0)) {
LAB_00106b58:
      local_3c0 = pcVar19;
      pcVar19 = local_3c0;
      uVar7 = dereference;
      if (print_hyperlink != '\0') {
LAB_0010648c:
        local_3c0 = pcVar19;
        pcVar19 = local_3c0;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x10649d;
        lVar16 = canonicalize_filename_mode(pcVar19,2);
        puVar1[2] = lVar16;
        pcVar19 = local_3c0;
        uVar7 = dereference;
        if (lVar16 == 0) {
          *(undefined8 *)((long)ppiVar24 + -8) = 0x1071f3;
          uVar14 = dcgettext(0,"error canonicalizing %s",5);
          pcVar19 = local_3c0;
          *(undefined8 *)((long)ppiVar24 + -8) = 0x107208;
          file_failure(param_3,uVar14,pcVar19);
          pcVar19 = local_3c0;
          uVar7 = dereference;
        }
      }
joined_r0x001063ff:
      local_3c0 = pcVar19;
      dereference = uVar7;
      pcVar19 = local_3c0;
      if (3 < uVar7) goto LAB_00106405;
      if (uVar7 < 2) {
LAB_001064c9:
        local_3c0 = pcVar19;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x1064ce;
        uVar6 = calc_req_mask();
        pcVar19 = local_3c0;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x1064ea;
        iVar8 = do_statx(0xffffff9c,pcVar19,puVar1 + 3,0x100,uVar6);
        bVar31 = 0;
        goto joined_r0x0010642b;
      }
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106b75;
      uVar6 = calc_req_mask();
      pcVar19 = local_3c0;
      if (param_3 == 0) goto LAB_001064c9;
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106b9b;
      iVar8 = do_statx(0xffffff9c,pcVar19,puVar1 + 3,0,uVar6);
      if (uVar7 != 2) {
        if (-1 < iVar8) {
          pcVar19 = local_3c0;
          if ((*(uint *)(puVar1 + 6) & 0xf000) != 0x4000) goto LAB_001064c9;
          goto LAB_00106bbf;
        }
        *(undefined8 *)((long)ppiVar24 + -8) = 0x107076;
        piVar12 = __errno_location();
        pcVar19 = local_3c0;
        if ((*piVar12 == 2) || (*piVar12 == 0x28)) goto LAB_001064c9;
LAB_00106bca:
        uVar14 = 0;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106bdf;
        uVar13 = dcgettext(0,"cannot access %s",5);
        pcVar19 = local_3c0;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106bf3;
        file_failure(1,uVar13,pcVar19);
        goto LAB_0010680d;
      }
LAB_00106bbf:
      bVar31 = param_3;
      if (iVar8 != 0) goto LAB_00106bca;
      goto LAB_001064f4;
    }
    uVar6 = 1;
LAB_001061d0:
    local_3c8 = (int *)CONCAT44(local_3c8._4_4_,uVar6);
    local_3c0 = (char *)strlen(param_1);
    sVar9 = strlen(param_4);
    uVar17 = (long)local_3c0 + 0x19U + sVar9;
    ppiVar24 = &local_3f8;
    while (ppiVar23 != (int **)((long)&local_3f8 - (uVar17 & 0xfffffffffffff000))) {
      ppiVar22 = (int **)((long)ppiVar24 + -0x1000);
      *(undefined8 *)((long)ppiVar24 + -8) = *(undefined8 *)((long)ppiVar24 + -8);
      ppiVar23 = (int **)((long)ppiVar24 + -0x1000);
      ppiVar24 = (int **)((long)ppiVar24 + -0x1000);
    }
    uVar17 = (ulong)((uint)uVar17 & 0xff0);
    lVar16 = -uVar17;
    if (uVar17 != 0) {
      *(undefined8 *)((long)ppiVar22 + -8) = *(undefined8 *)((long)ppiVar22 + -8);
    }
    cVar4 = *param_4;
    pcVar19 = (char *)((ulong)((long)ppiVar22 + lVar16 + 0xf) & 0xfffffffffffffff0);
    cVar5 = cVar4;
    if (cVar4 == '.') {
      cVar5 = param_4[1];
    }
    pcVar11 = pcVar19;
    pcVar21 = param_4;
    if (cVar5 != '\0') {
      do {
        pcVar20 = pcVar21;
        pcVar10 = pcVar11;
        pcVar21 = pcVar20 + 1;
        pcVar11 = pcVar10 + 1;
        *pcVar10 = cVar4;
        cVar4 = *pcVar21;
      } while (cVar4 != '\0');
      if ((param_4 < pcVar21) && (*pcVar20 != '/')) {
        *pcVar11 = '/';
        pcVar11 = pcVar10 + 2;
      }
    }
    cVar4 = *param_1;
    pcVar21 = param_1;
    while (cVar4 != '\0') {
      pcVar21 = pcVar21 + 1;
      *pcVar11 = cVar4;
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar21;
    }
    *pcVar11 = '\0';
    ppiVar24 = (int **)((long)ppiVar22 + lVar16);
    if ((int)local_3c8 != 0) goto LAB_00106b58;
    ppiVar24 = (int **)((long)ppiVar22 + lVar16);
    uVar7 = (uint)print_scontext;
    bVar27 = format_needs_capability;
LAB_001062d9:
    local_3c0 = pcVar19;
    bVar30 = param_2 == 3;
    bVar31 = dereference == 4;
    if (param_3 != 0) goto LAB_00106537;
LAB_001062ec:
    bVar27 = (int)uVar29 == 5 & bVar27;
    local_3c9 = (int)uVar29 == 6;
  }
  else {
LAB_001061ae:
    if (param_3 != 0) goto LAB_001061b7;
LAB_00106310:
    if (print_hyperlink != '\0') {
      ppiVar24 = &local_3f8;
      pcVar19 = param_1;
      if ((*param_1 != '/') &&
         (uVar6 = 1, ppiVar24 = &local_3f8, pcVar19 = param_1, param_4 != (char *)0x0))
      goto LAB_001061d0;
      goto LAB_0010648c;
    }
    if (((format_needs_stat != '\0') ||
        ((bVar30 = param_2 == 0, format_needs_type != '\0' && (bVar30)))) ||
       ((((param_2 == 3 || (bVar30)) && (print_with_color != '\0')) &&
        ((((DAT_00110170 != 0 &&
           (((2 < DAT_00110170 || (PTR___compound_literal_14_00110178[DAT_00110170 - 1] != '0')) ||
            (*PTR___compound_literal_14_00110178 != '0')))) ||
          ((DAT_00110160 != 0 &&
           (((2 < DAT_00110160 || (PTR___compound_literal_13_00110168[DAT_00110160 - 1] != '0')) ||
            (*PTR___compound_literal_13_00110168 != '0')))))) ||
         ((DAT_00110180 != 0 &&
          (((2 < DAT_00110180 || (PTR___compound_literal_15_00110188[DAT_00110180 - 1] != '0')) ||
           (*PTR___compound_literal_15_00110188 != '0')))))))))) {
LAB_001063d8:
      pcVar19 = param_1;
      uVar7 = dereference;
      ppiVar24 = &local_3f8;
      if ((*param_1 != '/') &&
         (uVar6 = 1, pcVar19 = param_1, ppiVar24 = &local_3f8, param_4 != (char *)0x0))
      goto LAB_001061d0;
      goto joined_r0x001063ff;
    }
    if (print_inode != '\0') {
      if ((param_2 == 6) || (bVar30)) goto LAB_00106376;
      goto LAB_001063d8;
    }
    if ((format_needs_type == '\0') || (param_2 != 6)) {
LAB_00107040:
      if (((param_2 == 5) || (bVar30)) &&
         ((indicator_style == 3 ||
          ((print_with_color != '\0' &&
           (((DAT_00110120 != 0 &&
             (((2 < DAT_00110120 || (PTR___compound_literal_9_00110128[DAT_00110120 - 1] != '0')) ||
              (*PTR___compound_literal_9_00110128 != '0')))) ||
            (((DAT_00110140 != 0 &&
              (((2 < DAT_00110140 || (PTR___compound_literal_11_00110148[DAT_00110140 - 1] != '0'))
               || (*PTR___compound_literal_11_00110148 != '0')))) ||
             ((DAT_00110150 != 0 &&
              (((2 < DAT_00110150 || (PTR___compound_literal_12_00110158[DAT_00110150 - 1] != '0'))
               || (*PTR___compound_literal_12_00110158 != '0')))))))))))))) goto LAB_001063d8;
      uVar7 = (uint)print_scontext;
      if ((print_scontext | format_needs_capability) == 0) {
        ppiVar24 = &local_3f8;
        uVar7 = (uint)(print_scontext | format_needs_capability);
        pcVar19 = param_1;
        bVar27 = 0;
      }
      else {
        ppiVar24 = &local_3f8;
        pcVar19 = param_1;
        bVar27 = format_needs_capability;
        if ((*param_1 != '/') &&
           (uVar6 = 0, ppiVar24 = &local_3f8, pcVar19 = param_1, param_4 != (char *)0x0))
        goto LAB_001061d0;
      }
      goto LAB_001062d9;
    }
LAB_00106376:
    if (dereference != 4) {
      if (((color_symlink_as_referent == '\0') && (check_symlink_mode == '\0')) &&
         (print_inode == '\0')) goto LAB_00107040;
      ppiVar24 = &local_3f8;
      pcVar19 = param_1;
      if ((*param_1 != '/') &&
         (uVar6 = 1, ppiVar24 = &local_3f8, pcVar19 = param_1, param_4 != (char *)0x0))
      goto LAB_001061d0;
      goto LAB_001064c9;
    }
    ppiVar24 = &local_3f8;
    pcVar19 = param_1;
    if ((*param_1 != '/') &&
       (uVar6 = 1, ppiVar24 = &local_3f8, pcVar19 = param_1, param_4 != (char *)0x0))
    goto LAB_001061d0;
LAB_00106405:
    local_3c0 = pcVar19;
    *(undefined8 *)((long)ppiVar24 + -8) = 0x10640a;
    uVar6 = calc_req_mask();
    pcVar19 = local_3c0;
    *(undefined8 *)((long)ppiVar24 + -8) = 0x106424;
    iVar8 = do_statx(0xffffff9c,pcVar19,puVar1 + 3,0,uVar6);
    bVar31 = 1;
joined_r0x0010642b:
    if (iVar8 != 0) {
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106444;
      uVar14 = dcgettext(0,"cannot access %s",5);
      pcVar19 = local_3c0;
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106457;
      file_failure(param_3,uVar14,pcVar19);
      if (param_3 == 0) {
        uVar14 = 0;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106c0a;
        uVar13 = xstrdup(param_1);
        cwd_n_used = cwd_n_used + 1;
        *puVar1 = uVar13;
      }
      else {
        uVar14 = 0;
      }
      goto LAB_0010680d;
    }
LAB_001064f4:
    *(undefined1 *)(puVar1 + 0x17) = 1;
    bVar27 = format_needs_capability;
    uVar7 = (uint)print_scontext;
    uVar28 = (uint)(char)d_type_filetype[*(uint *)(puVar1 + 6) >> 0xc & 0xf];
    uVar29 = (ulong)uVar28;
    bVar30 = uVar28 == 3;
    *(uint *)(puVar1 + 0x15) = uVar28;
    if (param_3 == 0) goto LAB_001062ec;
LAB_00106537:
    if (!bVar30) goto LAB_001062ec;
    if (immediate_dirs == '\0') {
      local_3c9 = false;
      uVar29 = 9;
      *(undefined4 *)(puVar1 + 0x15) = 9;
      bVar27 = 0;
    }
    else {
      local_3c9 = false;
      bVar27 = 0;
      uVar29 = 3;
    }
  }
  local_3d8 = (undefined1 **)CONCAT71(local_3d8._1_7_,bVar27);
  local_3e0 = (int *)CONCAT44(local_3e0._4_4_,format);
  uVar7 = format == 0 | uVar7;
  bVar27 = (byte)uVar7 | bVar27;
  local_3c8 = (int *)CONCAT71(local_3c8._1_7_,bVar27);
  if (bVar27 == 0) {
    if ((check_symlink_mode != '\0') && (local_3c9 != false)) goto LAB_00106723;
    uVar14 = puVar1[0xb];
LAB_001067af:
    if (print_block_size != '\0') goto LAB_001068d0;
LAB_001067bc:
    if (print_scontext != 0) {
LAB_001067c5:
      pcVar19 = (char *)puVar1[0x16];
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1067d1;
      sVar9 = strlen(pcVar19);
      if (scontext_width < (int)sVar9) {
        scontext_width = (int)sVar9;
      }
      if (format == 0) goto LAB_0010695c;
    }
  }
  else {
    local_3d0 = uVar7 << 0x10 | (uint)bVar31 << 0x11 | (uint)(byte)filetype_d_type[uVar29];
    cVar4 = *(char *)(puVar1 + 0x17);
    *(undefined8 *)((long)ppiVar24 + -8) = 0x1065c4;
    piVar12 = __errno_location();
    pcVar19 = local_3c0;
    uVar7 = local_3d0;
    iVar25 = unsupported_scontext_err_10;
    iVar8 = unsupported_return_9;
    if (((cVar4 == '\0') || (unsupported_cached_13 == '\0')) ||
       (iVar18 = (int)local_3e0, puVar1[3] != unsupported_device_12)) {
      *piVar12 = 0;
      local_3e4 = CONCAT31(local_3e4._1_3_,(char)local_3d8);
      local_3e0 = piVar12;
      local_3d8 = &local_3b8;
      *(undefined8 *)((long)ppiVar24 + -8) = 0x10662b;
      iVar8 = file_has_aclinfo(pcVar19,&local_3b8,uVar7);
      cVar4 = (char)local_3e4;
      piVar12 = local_3e0;
      iVar25 = local_3a0;
      ppuVar3 = local_3d8;
      iVar18 = format;
      if (*(char *)(puVar1 + 0x17) == '\0') goto LAB_00106ad0;
      if (iVar8 < 1) {
        local_3f8 = local_3e0;
        local_3f0 = (int *)CONCAT44(local_3f0._4_4_,format);
        local_3e4 = local_3a0;
        local_3e0 = (int *)CONCAT71(local_3e0._1_7_,cVar4);
        local_3e8 = iVar8;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106aa5;
        cVar5 = acl_errno_valid();
        iVar25 = local_3e4;
        iVar8 = local_3e8;
        iVar18 = (int)local_3f0;
        piVar12 = local_3f8;
        ppuVar3 = local_3d8;
        cVar4 = (char)local_3e0;
        if (cVar5 == '\0') {
          if ((local_3d0 & 0x10000) != 0) {
            local_3f0 = local_3f8;
            local_3e8 = iVar18;
            local_3e4 = iVar8;
            local_3d0 = CONCAT31(local_3d0._1_3_,(char)local_3e0);
            local_3e0 = (int *)CONCAT44(local_3e0._4_4_,iVar25);
            *(undefined8 *)((long)ppiVar24 + -8) = 0x106e73;
            cVar5 = acl_errno_valid();
            piVar12 = local_3f0;
            iVar25 = (int)local_3e0;
            ppuVar3 = local_3d8;
            iVar8 = local_3e4;
            iVar18 = local_3e8;
            cVar4 = (char)local_3d0;
            if (cVar5 != '\0') goto LAB_00106ad0;
          }
          unsupported_return_9 = iVar8;
          unsupported_scontext_11 = local_3a8;
          unsupported_cached_13 = '\x01';
          unsupported_device_12 = puVar1[3];
          unsupported_scontext_err_10 = iVar25;
          ppuVar3 = local_3d8;
          iVar8 = unsupported_return_9;
        }
        goto LAB_00106ad0;
      }
      uVar7 = 3;
      cVar5 = '\0';
      bVar30 = local_3a0 != 0;
    }
    else {
      local_3b8 = local_39c;
      local_3a0 = unsupported_scontext_err_10;
      local_3b0 = 0;
      local_3a8 = unsupported_scontext_11;
      *piVar12 = 0x5f;
      ppuVar3 = &local_3b8;
      cVar4 = (char)local_3d8;
LAB_00106ad0:
      local_3d8 = ppuVar3;
      if (iVar8 < 0) {
        uVar7 = (uint)(*piVar12 == 0xd || *piVar12 == 2);
      }
      else {
        uVar7 = 0;
      }
      cVar5 = (char)uVar7;
      bVar30 = iVar25 != 0;
      bVar2 = iVar8 < 1;
      if (bVar30 && bVar2) {
        local_3c8 = (int *)CONCAT71(local_3c8._1_7_,cVar5);
        bVar30 = bVar30 && bVar2;
      }
      else {
        uVar7 = 3 - (iVar25 == 0 && bVar2);
      }
    }
    pcVar19 = local_3c0;
    *(uint *)((long)puVar1 + 0xbc) = uVar7;
    any_has_acl = any_has_acl | (byte)local_3c8;
    if (((iVar18 == 0) && (iVar8 < 0)) && (cVar5 == '\0')) {
      local_3e0 = (int *)CONCAT71(local_3e0._1_7_,cVar4);
      local_3c8 = piVar12;
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1071af;
      uVar14 = quotearg_n_style_colon(0,3,pcVar19);
      iVar8 = *local_3c8;
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1071cc;
      error(0,iVar8,&_LC2,uVar14);
      cVar4 = (char)local_3e0;
      piVar12 = local_3c8;
    }
    else if (((bVar30 & print_scontext & iVar25 != 0x5f) != 0) && (iVar25 != 0x3d)) {
      local_3c8 = (int *)CONCAT71(local_3c8._1_7_,cVar4);
      local_3e0 = piVar12;
      *(undefined8 *)((long)ppiVar24 + -8) = 0x10722e;
      uVar14 = quotearg_n_style_colon(0,3,pcVar19);
      iVar8 = local_3a0;
      *(undefined8 *)((long)ppiVar24 + -8) = 0x107247;
      error(0,iVar8,&_LC2,uVar14);
      cVar4 = (char)local_3c8;
      piVar12 = local_3e0;
    }
    ppuVar3 = local_3d8;
    local_3c8 = piVar12;
    if (cVar4 != '\0') {
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1066cb;
      cVar4 = aclinfo_has_xattr(ppuVar3,"security.capability");
      if (cVar4 != '\0') {
        lVar16 = puVar1[3];
        if ((*(char *)(puVar1 + 0x17) == '\0') ||
           ((unsupported_cached_8 != '\0' && (lVar16 == unsupported_device_7)))) {
          *local_3c8 = 0x5f;
        }
        else {
          *local_3c8 = 0x5f;
          *(undefined8 *)((long)ppiVar24 + -8) = 0x106d99;
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
    *(undefined8 *)((long)ppiVar24 + -8) = 0x1066ff;
    aclinfo_free(ppuVar3);
    if ((format == 0 || check_symlink_mode != '\0') && (local_3c9 != false)) {
LAB_00106723:
      pcVar19 = local_3c0;
      uVar14 = puVar1[9];
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106733;
      pcVar19 = (char *)areadlink_with_size(pcVar19,uVar14);
      puVar1[1] = pcVar19;
      if (pcVar19 == (char *)0x0) {
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106d33;
        uVar14 = dcgettext(0,"cannot read symbolic link %s",5);
        pcVar19 = local_3c0;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106d46;
        file_failure(param_3,uVar14,pcVar19);
        pcVar19 = (char *)puVar1[1];
        if (pcVar19 == (char *)0x0) goto LAB_001067a3;
      }
      if (*(int *)((long)puVar1 + 0xc4) == 0) {
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106dda;
        sVar9 = quotearg_buffer(local_2d8,2,pcVar19,0xffffffffffffffff,filename_quoting_options);
        if (*pcVar19 == local_2d8[0]) {
          *(undefined8 *)((long)ppiVar24 + -8) = 0x106fb0;
          sVar15 = strlen(pcVar19);
          if (sVar9 != sVar15) goto LAB_00106dec;
        }
        else {
LAB_00106dec:
          *(undefined4 *)((long)puVar1 + 0xc4) = 0xffffffff;
        }
        if (puVar1[1] == 0) goto LAB_001067a3;
      }
      pcVar19 = local_3c0;
      if ((1 < indicator_style) || (check_symlink_mode != '\0')) {
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106784;
        iVar8 = do_statx(0xffffff9c,pcVar19,&local_3b8,0,2);
        if (iVar8 == 0) {
          *(undefined1 *)((long)puVar1 + 0xb9) = 1;
          *(int *)((long)puVar1 + 0xac) = local_3a0;
        }
      }
    }
LAB_001067a3:
    uVar14 = puVar1[0xb];
    if (format != 0) goto LAB_001067af;
LAB_001068d0:
    *(undefined8 *)((long)ppiVar24 + -8) = 0x1068f1;
    uVar13 = human_readable(uVar14,local_2d8,human_output_opts,0x200,output_block_size);
    *(undefined8 *)((long)ppiVar24 + -8) = 0x1068fe;
    iVar8 = gnu_mbswidth(uVar13,3);
    if (block_size_width < iVar8) {
      block_size_width = iVar8;
    }
    if (format != 0) goto LAB_001067bc;
    if (print_owner != '\0') {
      uVar6 = *(undefined4 *)((long)puVar1 + 0x34);
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106c99;
      iVar8 = format_user_width(uVar6);
      if (owner_width < iVar8) {
        owner_width = iVar8;
      }
    }
    if (print_group != '\0') {
      uVar6 = *(undefined4 *)(puVar1 + 7);
      if (numeric_ids == '\0') {
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106fc8;
        lVar16 = getgroup(uVar6);
        if (lVar16 == 0) goto LAB_00106c51;
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106fde;
        iVar8 = gnu_mbswidth(lVar16,3);
      }
      else {
LAB_00106c51:
        *(undefined8 *)((long)ppiVar24 + -8) = 0x106c72;
        iVar8 = __snprintf_chk(0,0,2,0xffffffffffffffff,&_LC6,uVar6);
      }
      if (group_width < iVar8) {
        group_width = iVar8;
      }
    }
    if (print_author != '\0') {
      uVar6 = *(undefined4 *)((long)puVar1 + 0x34);
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106c29;
      iVar8 = format_user_width(uVar6);
      if (author_width < iVar8) {
        author_width = iVar8;
      }
    }
    if (print_scontext != 0) goto LAB_001067c5;
    if (format != 0) goto joined_r0x001067f4;
LAB_0010695c:
    uVar13 = puVar1[5];
    *(undefined8 *)((long)ppiVar24 + -8) = 0x10696c;
    pcVar19 = (char *)umaxtostr(uVar13,local_2f8);
    *(undefined8 *)((long)ppiVar24 + -8) = 0x106974;
    sVar9 = strlen(pcVar19);
    if (nlink_width < (int)sVar9) {
      nlink_width = (int)sVar9;
    }
    if (((int)uVar29 - 2U & 0xfffffffd) == 0) {
      uVar13 = puVar1[8];
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1069bb;
      pcVar19 = (char *)umaxtostr((uint)((ulong)uVar13 >> 0x20) & 0xfffff000 |
                                  (uint)((ulong)uVar13 >> 8) & 0xfff,local_2d8);
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1069c3;
      sVar9 = strlen(pcVar19);
      if (major_device_number_width < (int)sVar9) {
        major_device_number_width = (int)sVar9;
      }
      uVar29 = puVar1[8];
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1069ea;
      pcVar19 = (char *)umaxtostr((uint)((uVar29 >> 0x14) << 8) | (uint)uVar29 & 0xff,local_2d8);
      *(undefined8 *)((long)ppiVar24 + -8) = 0x1069f2;
      sVar9 = strlen(pcVar19);
      if (minor_device_number_width < (int)sVar9) {
        minor_device_number_width = (int)sVar9;
      }
      iVar8 = minor_device_number_width + 2 + major_device_number_width;
      if (file_size_width < iVar8) {
LAB_00106a1a:
        file_size_width = iVar8;
      }
    }
    else {
      uVar13 = puVar1[9];
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106cd2;
      uVar13 = human_readable(uVar13,local_2d8,file_human_output_opts,1,file_output_block_size);
      *(undefined8 *)((long)ppiVar24 + -8) = 0x106cdf;
      iVar8 = gnu_mbswidth(uVar13,3);
      if (file_size_width < iVar8) goto LAB_00106a1a;
    }
  }
joined_r0x001067f4:
  if (print_inode != '\0') {
    uVar13 = puVar1[4];
    *(undefined8 *)((long)ppiVar24 + -8) = 0x106a40;
    pcVar19 = (char *)umaxtostr(uVar13,local_2d8);
    *(undefined8 *)((long)ppiVar24 + -8) = 0x106a48;
    sVar9 = strlen(pcVar19);
    if (inode_number_width < (int)sVar9) {
      inode_number_width = (int)sVar9;
    }
  }
  *(undefined8 *)((long)ppiVar24 + -8) = 0x106802;
  uVar13 = xstrdup(param_1);
  cwd_n_used = cwd_n_used + 1;
  *puVar1 = uVar13;
LAB_0010680d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppiVar24 + -8) = 0x10718e;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void print_dir(char *param_1,char *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  FILE *pFVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  DIR *__dirp;
  ulong *puVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  dirent *pdVar12;
  char *pcVar13;
  size_t sVar14;
  char *pcVar15;
  size_t sVar16;
  long lVar17;
  void *__ptr;
  char *pcVar18;
  undefined **ppuVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined *puStack_450;
  char *pcStack_448;
  char *apcStack_440 [4];
  char *pcStack_420;
  char *pcStack_418;
  char *pcStack_410;
  char *pcStack_408;
  char *pcStack_400;
  char *pcStack_3f8;
  undefined1 auStack_3f0 [16];
  undefined8 uStack_3d8;
  ulong uStack_3c8;
  char *pcStack_3c0;
  int *piStack_3b8;
  DIR *pDStack_3b0;
  char *pcStack_3a8;
  ulong *puStack_3a0;
  undefined8 local_398;
  ulong uStack_390;
  uint local_37c;
  long local_378;
  long local_370;
  ulong local_368;
  ulong uStack_360;
  undefined1 local_2d7 [663];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puStack_3a0 = (ulong *)0x107295;
  local_37c = param_3;
  piVar7 = __errno_location();
  *piVar7 = 0;
  puStack_3a0 = (ulong *)0x1072a6;
  __dirp = opendir(param_1);
  if (__dirp == (DIR *)0x0) {
    puStack_3a0 = (ulong *)0x1078e3;
    uVar10 = dcgettext(0,"cannot open directory %s",5);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      file_failure((undefined1)local_37c,uVar10,param_1);
      return;
    }
    goto LAB_00107917;
  }
  if (active_dir_set != 0) {
    puStack_3a0 = (ulong *)0x1072c8;
    iVar5 = dirfd(__dirp);
    if (iVar5 < 0) {
      puStack_3a0 = (ulong *)0x107744;
      iVar5 = do_statx(0xffffff9c,param_1,&local_368,0,0x100);
      uStack_390 = local_368;
    }
    else {
      puStack_3a0 = (ulong *)0x1072ee;
      iVar5 = do_statx(iVar5,&_LC1,&local_368,0x1000,0x100);
      uStack_390 = local_368;
    }
    if (iVar5 < 0) {
      puStack_3a0 = (ulong *)0x10775f;
      uVar10 = dcgettext(0,"cannot determine device and inode of %s",5);
      puStack_3a0 = (ulong *)0x10776f;
      file_failure((undefined1)local_37c,uVar10,param_1);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        closedir(__dirp);
        return;
      }
      goto LAB_00107917;
    }
    puStack_3a0 = (ulong *)0x10730f;
    local_398 = uStack_360;
    puVar8 = (ulong *)xmalloc(0x10);
    lVar17 = active_dir_set;
    *puVar8 = local_398;
    puVar8[1] = uStack_390;
    puStack_3a0 = (ulong *)0x107329;
    puVar9 = (ulong *)hash_insert(lVar17,puVar8);
    iVar5 = (int)lVar17;
    if (puVar9 == (ulong *)0x0) {
      puStack_3a0 = (ulong *)0x107921;
      xalloc_die();
      uVar10 = _program_name;
      ppuVar19 = &puStack_450;
      uStack_3d8 = *(undefined8 *)(in_FS_OFFSET + 0x28);
      uStack_3c8 = (ulong)param_3;
      pcStack_3c0 = param_2;
      piStack_3b8 = piVar7;
      pDStack_3b0 = __dirp;
      pcStack_3a8 = param_1;
      puStack_3a0 = puVar8;
      if (iVar5 == 0) {
        pcVar15 = "ls";
        uVar11 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
        __printf_chk(2,uVar11,uVar10);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "List information about the FILEs (the current directory by default).\nSort entries alphabetically if none of -cftuvSUX nor --sort is specified.\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "\nMandatory arguments to long options are mandatory for short options too.\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -a, --all                  do not ignore entries starting with .\n  -A, --almost-all           do not list implied . and ..\n      --author               with -l, print the author of each file\n  -b, --escape               print C-style escapes for nongraphic characters\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --block-size=SIZE      with -l, scale sizes by SIZE when printing them;\n                             e.g., \'--block-size=M\'; see SIZE format below\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -B, --ignore-backups       do not list implied entries ending with ~\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -c                         with -lt: sort by, and show, ctime (time of last\n                             change of file status information);\n                             with -l: show ctime and sort by name;\n                             otherwise: sort by ctime, newest first\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -C                         list entries by columns\n      --color[=WHEN]         color the output WHEN; more info below\n  -d, --directory            list directories themselves, not their contents\n  -D, --dired                generate output designed for Emacs\' dired mode\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -f                         same as -a -U\n  -F, --classify[=WHEN]      append indicator (one of */=>@|) to entries WHEN\n      --file-type            likewise, except do not append \'*\'\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --format=WORD          across,horizontal (-x), commas (-m), long (-l),\n                             single-column (-1), verbose (-l), vertical (-C)\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,"      --full-time            like -l --time-style=full-iso\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -g                         like -l, but do not list owner\n",
                                    5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --group-directories-first\n                             group directories before files\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -G, --no-group             in a long listing, don\'t print group names\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -h, --human-readable       with -l and -s, print sizes like 1K 234M 2G etc.\n      --si                   likewise, but use powers of 1000 not 1024\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -H, --dereference-command-line\n                             follow symbolic links listed on the command line\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --dereference-command-line-symlink-to-dir\n                             follow each command line symbolic link\n                             that points to a directory\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --hide=PATTERN         do not list implied entries matching shell PATTERN\n                             (overridden by -a or -A)\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,"      --hyperlink[=WHEN]     hyperlink file names WHEN\n",5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --indicator-style=WORD\n                             append indicator with style WORD to entry names:\n                             none (default), slash (-p),\n                             file-type (--file-type), classify (-F)\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -i, --inode                print the index number of each file\n  -I, --ignore=PATTERN       do not list implied entries matching shell PATTERN\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -k, --kibibytes            default to 1024-byte blocks for file system usage;\n                             used only with -s and per directory totals\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,"  -l                         use a long listing format\n",5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -L, --dereference          when showing file information for a symbolic\n                             link, show information for the file the link\n                             references rather than for the link itself\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -m                         fill width with a comma separated list of entries\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -n, --numeric-uid-gid      like -l, but list numeric user and group IDs\n  -N, --literal              print entry names without quoting\n  -o                         like -l, but do not list group information\n  -p, --indicator-style=slash\n                             append / indicator to directories\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -q, --hide-control-chars   print ? instead of nongraphic characters\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --show-control-chars   show nongraphic characters as-is (the default,\n                             unless program is \'ls\' and output is a terminal)\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -Q, --quote-name           enclose entry names in double quotes\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --quoting-style=WORD   use quoting style WORD for entry names:\n                             literal, locale, shell, shell-always,\n                             shell-escape, shell-escape-always, c, escape\n                             (overrides QUOTING_STYLE environment variable)\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -r, --reverse              reverse order while sorting\n  -R, --recursive            list subdirectories recursively\n  -s, --size                 print the allocated size of each file, in blocks\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -S                         sort by file size, largest first\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --sort=WORD            change default \'name\' sort to WORD:\n                               none (-U), size (-S), time (-t),\n                               version (-v), extension (-X), name, width\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --time=WORD            select which timestamp used to display or sort;\n                               access time (-u): atime, access, use;\n                               metadata change time (-c): ctime, status;\n                               modified time (default): mtime, modification;\n                               birth time: birth, creation;\n                             with -l, WORD determines which time to show;\n                             with --sort=time, sort by WORD (newest first)\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "      --time-style=TIME_STYLE\n                             time/date format with -l; see TIME_STYLE below\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -t                         sort by time, newest first; see --time\n  -T, --tabsize=COLS         assume tab stops at each COLS instead of 8\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -u                         with -lt: sort by, and show, access time;\n                             with -l: show access time and sort by name;\n                             otherwise: sort by access time, newest first\n\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,"  -U                         do not sort directory entries\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -v                         natural sort of (version) numbers within text\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "  -w, --width=COLS           set output width to COLS.  0 means no limit\n  -x                         list entries by lines instead of by columns\n  -X                         sort alphabetically by entry extension\n  -Z, --context              print any security context of each file\n      --zero                 end each output line with NUL, not newline\n  -1                         list one file per line\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,"      --version     output version information and exit\n",5)
        ;
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "\nThe TIME_STYLE argument can be full-iso, long-iso, iso, locale, or +FORMAT.\nFORMAT is interpreted like in date(1).  If FORMAT is FORMAT1<newline>FORMAT2,\nthen FORMAT1 applies to non-recent files and FORMAT2 to recent files.\nTIME_STYLE prefixed with \'posix-\' takes effect only outside the POSIX locale.\nAlso the TIME_STYLE environment variable sets the default style to use.\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "\nThe WHEN argument defaults to \'always\' and can also be \'auto\' or \'never\'.\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "\nUsing color to distinguish file types is disabled both by default and\nwith --color=never.  With --color=auto, ls emits color codes only when\nstandard output is connected to a terminal.  The LS_COLORS environment\nvariable can change the settings.  Use the dircolors(1) command to set it.\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        pFVar4 = _stdout;
        pcVar13 = (char *)dcgettext(0,
                                    "\nExit status:\n 0  if OK,\n 1  if minor problems (e.g., cannot access subdirectory),\n 2  if serious trouble (e.g., cannot access command-line argument).\n"
                                    ,5);
        fputs_unlocked(pcVar13,pFVar4);
        if ((_ls_mode != 1) && (pcVar15 = "vdir", _ls_mode == 2)) {
          pcVar15 = "dir";
        }
        pcVar13 = "[";
        puStack_450 = &_LC33;
        pcStack_448 = "test invocation";
        apcStack_440[0] = "coreutils";
        apcStack_440[1] = "Multi-call invocation";
        apcStack_440[2] = "sha224sum";
        apcStack_440[3] = "sha2 utilities";
        pcStack_420 = "sha256sum";
        pcStack_418 = "sha2 utilities";
        pcStack_410 = "sha384sum";
        pcStack_408 = "sha2 utilities";
        pcStack_400 = "sha512sum";
        pcStack_3f8 = "sha2 utilities";
        auStack_3f0 = (undefined1  [16])0x0;
        do {
          iVar6 = strcmp(pcVar15,pcVar13);
          if (iVar6 == 0) break;
          pcVar13 = *(char **)((long)ppuVar19 + 0x10);
          ppuVar19 = (undefined **)((long)ppuVar19 + 0x10);
        } while (pcVar13 != (char *)0x0);
        pcVar13 = *(char **)((long)ppuVar19 + 8);
        if (*(char **)((long)ppuVar19 + 8) == (char *)0x0) {
          pcVar13 = pcVar15;
        }
        uVar10 = dcgettext(0,"\n%s online help: <%s>\n",5);
        __printf_chk(2,uVar10,"GNU coreutils","https://www.gnu.org/software/coreutils/");
        pcVar18 = setlocale(5,(char *)0x0);
        if ((pcVar18 != (char *)0x0) &&
           (iVar6 = strncmp(pcVar18,"en_",3), pFVar4 = _stdout, iVar6 != 0)) {
          pcVar18 = (char *)dcgettext(0,
                                      "Report any translation bugs to <https://translationproject.org/team/>\n"
                                      ,5);
          fputs_unlocked(pcVar18,pFVar4);
        }
        iVar6 = strcmp(pcVar15,"[");
        pcVar18 = "test";
        if (iVar6 != 0) {
          pcVar18 = pcVar15;
        }
        uVar10 = dcgettext(0,"Full documentation <%s%s>\n",5);
        __printf_chk(2,uVar10,"https://www.gnu.org/software/coreutils/",pcVar18);
        pcVar18 = "";
        if (pcVar15 == pcVar13) {
          pcVar18 = " invocation";
        }
        uVar10 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
        __printf_chk(2,uVar10,pcVar13,pcVar18);
      }
      else {
        uVar11 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
        __fprintf_chk(_stderr,2,uVar11,uVar10);
      }
                    /* WARNING: Subroutine does not return */
      exit(iVar5);
    }
    if (puVar8 != puVar9) {
      puStack_3a0 = (ulong *)0x10733f;
      free(puVar8);
      puStack_3a0 = (ulong *)0x10734e;
      uVar10 = quotearg_n_style_colon(0,3,param_1);
      puStack_3a0 = (ulong *)0x107364;
      uVar11 = dcgettext(0,"%s: not listing already-listed directory",5);
      puStack_3a0 = (ulong *)0x107375;
      error(0,0,uVar11,uVar10);
      puStack_3a0 = (ulong *)0x10737d;
      closedir(__dirp);
      exit_status = 2;
      goto LAB_00107551;
    }
    puVar8 = (ulong *)dev_ino_obstack._24_8_;
    if ((ulong)(dev_ino_obstack._32_8_ - dev_ino_obstack._24_8_) < 0x10) {
      puStack_3a0 = (ulong *)0x1078b5;
      rpl_obstack_newchunk(dev_ino_obstack,0x10);
      puVar8 = (ulong *)dev_ino_obstack._24_8_;
    }
    dev_ino_obstack._24_8_ = puVar8 + 2;
    *puVar8 = local_398;
    puVar8[1] = uStack_390;
  }
  puStack_3a0 = (ulong *)0x1073bf;
  clear_files();
  cVar3 = dired;
  if (recursive == '\0') {
    if (print_dir_name == '\0') goto LAB_00107448;
    if (first_0 == '\0') goto LAB_00107830;
LAB_001073d9:
    first_0 = '\0';
    cVar3 = dired;
  }
  else {
    if (first_0 != '\0') goto LAB_001073d9;
LAB_00107830:
    dired_pos = dired_pos + 1;
    pcVar13 = _stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pcVar13) {
      puStack_3a0 = (ulong *)0x1078cb;
      __overflow(_stdout,10);
      goto LAB_001073d9;
    }
    first_0 = '\0';
    _stdout->_IO_write_ptr = pcVar13 + 1;
    *pcVar13 = '\n';
  }
  if (cVar3 != '\0') {
    puStack_3a0 = (ulong *)0x10787c;
    dired_outbuf(&_LC16,2);
  }
  __ptr = (void *)0x0;
  if (print_hyperlink != '\0') {
    puStack_3a0 = (ulong *)0x1077f0;
    __ptr = (void *)canonicalize_filename_mode(param_1,2);
    if (__ptr == (void *)0x0) {
      puStack_3a0 = (ulong *)0x10780f;
      uVar10 = dcgettext(0,"error canonicalizing %s",5);
      puStack_3a0 = (ulong *)0x107821;
      file_failure((undefined1)local_37c,uVar10,param_1);
    }
  }
  if (param_2 == (char *)0x0) {
    param_2 = param_1;
  }
  pDStack_3b0 = (DIR *)0x10742d;
  pcStack_3a8 = (char *)__ptr;
  quote_name(param_2,dirname_quoting_options,0xffffffff,0,1,subdired_obstack);
  pDStack_3b0 = (DIR *)0x107435;
  free(__ptr);
  pDStack_3b0 = (DIR *)0x107446;
  dired_outbuf(&_LC26,2);
LAB_00107448:
  local_378 = 0;
  local_398 = CONCAT44(local_398._4_4_,param_3) & 0xffffffff000000ff;
  do {
    *piVar7 = 0;
    puStack_3a0 = (ulong *)0x107470;
    pdVar12 = readdir(__dirp);
    if (pdVar12 == (dirent *)0x0) {
      iVar5 = *piVar7;
      if (iVar5 == 0) break;
      puStack_3a0 = (ulong *)0x1074fb;
      uVar10 = dcgettext(0,"reading directory %s",5);
      puStack_3a0 = (ulong *)0x107509;
      file_failure(local_398 & 0xffffffff,uVar10,param_1);
      if (iVar5 != 0x4b) break;
    }
    else {
      pcVar13 = pdVar12->d_name;
      puVar2 = ignore_patterns;
      if (ignore_mode != 2) {
        if (pdVar12->d_name[0] == '.') {
          if ((ignore_mode == 0) ||
             (pdVar12->d_name[(ulong)(pdVar12->d_name[1] == '.') + 1] == '\0')) goto LAB_001074d8;
        }
        else {
          puVar1 = hide_patterns;
          if (ignore_mode == 0) {
            for (; puVar2 = ignore_patterns, puVar1 != (undefined8 *)0x0;
                puVar1 = (undefined8 *)puVar1[1]) {
              puStack_3a0 = (ulong *)0x1074cd;
              iVar5 = fnmatch((char *)*puVar1,pcVar13,4);
              if (iVar5 == 0) goto LAB_001074d8;
            }
          }
        }
      }
      for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)puVar2[1]) {
        puStack_3a0 = (ulong *)0x107699;
        iVar5 = fnmatch((char *)*puVar2,pcVar13,4);
        if (iVar5 == 0) goto LAB_001074d8;
      }
      puStack_3a0 = (ulong *)0x1076c4;
      lVar17 = gobble_file_constprop_0
                         (pcVar13,(int)(char)d_type_filetype[pdVar12->d_type],0,param_1);
      if ((((format == 1) && (sort_type == 6)) && (print_block_size == '\0')) && (recursive == '\0')
         ) {
        puStack_3a0 = (ulong *)0x107705;
        local_370 = lVar17;
        sort_files();
        puStack_3a0 = (ulong *)0x10770a;
        print_current_files();
        puStack_3a0 = (ulong *)0x10770f;
        clear_files();
        lVar17 = local_370;
      }
      local_378 = local_378 + lVar17;
    }
LAB_001074d8:
    puStack_3a0 = (ulong *)0x1074dd;
    process_signals();
  } while( true );
  puStack_3a0 = (ulong *)0x107516;
  iVar5 = closedir(__dirp);
  if (iVar5 == 0) {
    puStack_3a0 = (ulong *)0x107523;
    sort_files();
  }
  else {
    puStack_3a0 = (ulong *)0x1077b2;
    uVar10 = dcgettext(0,"closing directory %s",5);
    puStack_3a0 = (ulong *)0x1077c2;
    file_failure((undefined1)local_37c,uVar10,param_1);
    puStack_3a0 = (ulong *)0x1077c7;
    sort_files();
  }
  if (recursive != '\0') {
    puStack_3a0 = (ulong *)0x1077de;
    extract_dirs_from_files(param_1,0);
  }
  if ((format == 0) || (print_block_size != '\0')) {
    puStack_3a0 = (ulong *)0x1075a4;
    pcVar13 = (char *)human_readable(local_378,local_2d7,human_output_opts,0x200,output_block_size);
    puStack_3a0 = (ulong *)0x1075af;
    sVar14 = strlen(pcVar13);
    cVar3 = eolbyte;
    pcVar13[-1] = ' ';
    bVar20 = dired != '\0';
    pcVar13[sVar14] = cVar3;
    if (bVar20) {
      puStack_3a0 = (ulong *)0x10789f;
      dired_outbuf(&_LC16,2);
    }
    puStack_3a0 = (ulong *)0x1075e7;
    pcVar15 = (char *)dcgettext(0,"total",5);
    puStack_3a0 = (ulong *)0x1075f2;
    sVar16 = strlen(pcVar15);
    puStack_3a0 = (ulong *)0x1075fd;
    dired_outbuf(pcVar15,sVar16);
    puStack_3a0 = (ulong *)0x10760b;
    dired_outbuf(pcVar13 + -1,pcVar13 + sVar14 + (1 - (long)(pcVar13 + -1)));
  }
  if (cwd_n_used != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      print_current_files();
      return;
    }
    goto LAB_00107917;
  }
LAB_00107551:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107917:
                    /* WARNING: Subroutine does not return */
  puStack_3a0 = (ulong *)0x10791c;
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

undefined4 main(int param_1,FILE *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  void *__s1;
  undefined8 *puVar4;
  FILE *__stream;
  char cVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  size_t sVar16;
  size_t *psVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  long *__ptr;
  char *pcVar21;
  undefined *puVar22;
  size_t *psVar23;
  undefined8 in_R9;
  char *pcVar24;
  long lVar25;
  undefined **ppuVar26;
  undefined1 *puVar27;
  long in_FS_OFFSET;
  byte *local_98;
  size_t *local_88;
  ulong local_80;
  undefined *local_78;
  int local_70;
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
  local_80 = 0xffffffffffffffff;
  local_78 = (undefined *)0xffffffffffffffff;
  local_98 = (byte *)0xffffffff;
  local_70 = -1;
  iVar10 = -1;
  uVar9 = 0xffffffff;
  bVar6 = false;
  local_88 = (size_t *)0x0;
  current_time = __LC102;
  DAT_00109358 = _UNK_001101c8;
LAB_0010dbe0:
  puVar20 = long_options;
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0xffffffff);
  psVar23 = &local_58;
  iVar8 = getopt_long(param_1,param_2,"abcdfghiklmnopqrstuvw:xABCDFGHI:LNQRST:UXZ1");
  pcVar24 = puVar27;
  if (iVar8 != -1) {
    if (0x114 < iVar8 + 0x83U) goto switchD_0010dc17_caseD_ffffff7f;
    switch(iVar8) {
    case 0x31:
      uVar9 = (uint)(uVar9 != 0);
      break;
    case 0x41:
      ignore_mode = 1;
      break;
    case 0x42:
      add_ignore_pattern(&_LC106);
      add_ignore_pattern(&_LC107);
      break;
    case 0x43:
      uVar9 = 2;
      break;
    case 0x44:
      print_hyperlink = 0;
      dired = 1;
      uVar9 = 0;
      break;
    case 0x46:
      if (_optarg != (size_t *)0x0) {
        in_R9 = _argmatch_die;
        lVar25 = __xargmatch_internal("--classify",_optarg,when_args,when_types,4);
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
      add_ignore_pattern(_optarg);
      break;
    case 0x4c:
      dereference = 4;
      break;
    case 0x4e:
      local_70 = 0;
      break;
    case 0x51:
      local_70 = 5;
      break;
    case 0x52:
      recursive = 1;
      break;
    case 0x53:
      local_98 = (byte *)0x3;
      break;
    case 0x54:
      in_R9 = dcgettext(0,"invalid tab size",5);
      local_78 = (undefined *)xnumtoumax(_optarg,0,0,0x7fffffffffffffff,&_LC1,in_R9,2,0);
      break;
    case 0x55:
      local_98 = (byte *)0x6;
      break;
    case 0x58:
      local_98 = (byte *)0x1;
      break;
    case 0x5a:
      print_scontext = 1;
      break;
    case 0x61:
      ignore_mode = 2;
      break;
    case 0x62:
      local_70 = 7;
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
      local_98 = (byte *)0x6;
      break;
    case 0x67:
      print_owner = 0;
    case 0x6c:
      in_R9 = 0;
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
      local_98 = (byte *)0x5;
      break;
    case 0x75:
      time_type = 2;
      explicit_time = '\x01';
      break;
    case 0x76:
      goto switchD_0010dc17_caseD_76;
    case 0x77:
      local_80 = decode_line_length(_optarg);
      if ((long)local_80 < 0) {
        param_2 = (FILE *)quote(_optarg);
        uVar18 = dcgettext(0,"invalid line width",5);
        error(2,0,"%s: %s",uVar18,param_2);
switchD_0010dc17_caseD_76:
        local_98 = (byte *)0x4;
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
      if (iVar8 != 0) goto LAB_0010f56c;
      file_human_output_opts = human_output_opts;
      file_output_block_size = output_block_size;
      break;
    case 0x82:
      if (_optarg == (size_t *)0x0) {
LAB_0010e884:
        bVar7 = 1;
      }
      else {
        in_R9 = 1;
        lVar25 = __xargmatch_internal
                           ("--color",_optarg,when_args,when_types,4,_argmatch_die,1,psVar23);
        if (*(int *)(when_types + lVar25 * 4) == 1) goto LAB_0010e884;
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
      in_R9 = _argmatch_die;
      lVar25 = __xargmatch_internal
                         ("--format",_optarg,format_args,format_types,4,_argmatch_die,1,
                          (long)&switchD_0010dc17::switchdataD_00109514 +
                          (long)(int)(&switchD_0010dc17::switchdataD_00109514)[iVar8 + 0x83U]);
      uVar9 = *(uint *)(format_types + lVar25 * 4);
      break;
    case 0x86:
      uVar9 = 0;
      local_88 = (size_t *)0x10b484;
      break;
    case 0x87:
      directories_first = 1;
      break;
    case 0x88:
      puVar12 = (undefined8 *)xmalloc(0x10);
      puVar4 = hide_patterns;
      hide_patterns = puVar12;
      *puVar12 = _optarg;
      puVar12[1] = puVar4;
      break;
    case 0x89:
      if (_optarg == (size_t *)0x0) {
LAB_0010e89b:
        bVar7 = 1;
      }
      else {
        uVar18 = 1;
        in_R9 = _argmatch_die;
        lVar25 = __xargmatch_internal("--hyperlink",_optarg,when_args,when_types,4);
        if (*(int *)(when_types + lVar25 * 4) == 1) goto LAB_0010e89b;
        bVar7 = 0;
        if (*(int *)(when_types + lVar25 * 4) == 2) {
          bVar7 = stdout_isatty(puVar20,uVar18);
        }
      }
      print_hyperlink = bVar7 & 1;
      break;
    case 0x8a:
      in_R9 = _argmatch_die;
      lVar25 = __xargmatch_internal
                         ("--indicator-style",_optarg,indicator_style_args,"",4,_argmatch_die,1,
                          (long)&switchD_0010dc17::switchdataD_00109514 +
                          (long)(int)(&switchD_0010dc17::switchdataD_00109514)[iVar8 + 0x83U]);
      indicator_style =
           *(uint *)("lcrcecrsnofidilnpisobdcdmiorexdosusgstowtwcamhcl" + lVar25 * 4 + 0x30);
      break;
    case 0x8b:
      uVar18 = _argmatch_die;
      lVar25 = __xargmatch_internal
                         ("--quoting-style",_optarg,&quoting_style_args,&quoting_style_vals,4,
                          _argmatch_die,1,in_R9);
      local_70 = *(int *)(&quoting_style_vals + lVar25 * 4);
      in_R9 = uVar18;
      break;
    case 0x8c:
      goto switchD_0010dc17_caseD_8c;
    case 0x8d:
      human_output_opts = 0x90;
      file_human_output_opts = 0x90;
      output_block_size = 1;
      file_output_block_size = 1;
      break;
    case 0x8e:
      in_R9 = 1;
      lVar25 = __xargmatch_internal("--sort",_optarg,sort_args,sort_types,4,_argmatch_die,1,psVar23)
      ;
      local_98 = (byte *)(ulong)*(uint *)(sort_types + lVar25 * 4);
      break;
    case 0x8f:
      in_R9 = _argmatch_die;
      lVar25 = __xargmatch_internal("--time",_optarg,time_args,time_types,4,_argmatch_die,1,puVar20)
      ;
      time_type = *(undefined4 *)(time_types + lVar25 * 4);
      explicit_time = '\x01';
      break;
    case 0x90:
      goto switchD_0010dc17_caseD_90;
    case 0x91:
      eolbyte = '\0';
      print_with_color = 0;
      uVar9 = (uint)(uVar9 != 0);
      local_70 = 0;
switchD_0010dc17_caseD_8c:
      iVar10 = 0;
      break;
    case -0x83:
      uVar18 = proper_name_lite("David MacKenzie","David MacKenzie");
      pcVar24 = "Richard M. Stallman";
      uVar19 = proper_name_lite("Richard M. Stallman","Richard M. Stallman");
      puVar22 = &_LC31;
      if ((_ls_mode != 1) && (puVar22 = &_LC30, _ls_mode == 2)) {
        puVar22 = &_LC32;
      }
      version_etc(_stdout,puVar22,"GNU coreutils",_Version,uVar19,uVar18,0,pcVar24);
                    /* WARNING: Subroutine does not return */
      exit(0);
    case -0x82:
      goto switchD_0010dc17_caseD_ffffff7e;
    default:
      goto switchD_0010dc17_caseD_ffffff7f;
    }
    goto LAB_0010dbe0;
  }
  if (output_block_size == 0) {
    pcVar15 = getenv("LS_BLOCK_SIZE");
    human_options(pcVar15,&human_output_opts,&output_block_size);
    if ((pcVar15 != (char *)0x0) || (pcVar15 = getenv("BLOCK_SIZE"), pcVar15 != (char *)0x0)) {
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
    if (-1 < (long)local_80) goto LAB_0010dc96;
    cVar5 = stdout_isatty();
    if ((cVar5 != '\0') && (iVar8 = ioctl(1,0x5413,&local_58), -1 < iVar8)) {
      local_80 = (ulong)local_58._2_2_;
      if (local_58._2_2_ != 0) goto LAB_0010dc96;
    }
    pcVar15 = getenv("COLUMNS");
    if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
      local_80 = decode_line_length(pcVar15);
      if (-1 < (long)local_80) goto LAB_0010dc96;
      uVar18 = quote(pcVar15);
      uVar19 = dcgettext(0,"ignoring invalid width in environment variable COLUMNS: %s",5);
      error(0,0,uVar19,uVar18);
    }
  }
  else if (-1 < (long)local_80) goto LAB_0010dc96;
  local_80 = 0x50;
LAB_0010dc96:
  max_idx = (local_80 / 3 + 1) - (ulong)(local_80 % 3 == 0);
  line_length = local_80;
  puVar22 = tabsize;
  if ((format - 2 < 3) && (puVar22 = local_78, (long)local_78 < 0)) {
    tabsize = (undefined *)0x8;
    pcVar15 = getenv("TABSIZE");
    puVar22 = tabsize;
    if ((pcVar15 != (char *)0x0) &&
       (iVar8 = xstrtoumax(pcVar15,0,0,&local_58,&_LC1), puVar22 = local_58, iVar8 != 0)) {
      uVar18 = quote(pcVar15);
      uVar19 = dcgettext(0,"ignoring invalid tab size in environment variable TABSIZE: %s",5);
      error(0,0,uVar19,uVar18);
      puVar22 = tabsize;
    }
  }
  tabsize = puVar22;
  bVar6 = iVar10 != 0;
  if (-1 < iVar10) goto LAB_0010dce7;
  bVar7 = 0;
  if (_ls_mode == 1) goto LAB_0010f30b;
  do {
    bVar6 = (bool)(bVar7 & 1);
    pcVar24 = puVar27;
LAB_0010dce7:
    qmark_funny_chars = bVar6;
    if (local_70 < 0) {
      pcVar15 = getenv("QUOTING_STYLE");
      if (pcVar15 == (char *)0x0) goto LAB_0010ea27;
      pcVar24 = &quoting_style_vals;
      iVar10 = argmatch(pcVar15,&quoting_style_args,&quoting_style_vals,4);
      if (iVar10 < 0) goto LAB_0010f5b5;
      local_70 = *(int *)(&quoting_style_vals + (long)iVar10 * 4);
      if (local_70 < 0) goto LAB_0010ea27;
    }
LAB_0010dcf8:
    set_quoting_style(0,local_70);
    psVar23 = (size_t *)pcVar24;
LAB_0010dd03:
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
      uVar18 = dcgettext(0,"--dired and --zero are incompatible",5);
      error(2,0,uVar18);
      goto LAB_0010f60d;
    }
    sort_type = (uint)local_98;
    if (((int)(uint)local_98 < 0) && (sort_type = 0, format != 0)) {
      sort_type = -(uint)(explicit_time != '\0') & 5;
    }
    pcVar24 = (char *)psVar23;
    if (format != 0) {
LAB_0010de4a:
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
                local_98 = local_60;
                pcVar24 = (char *)xmalloc(0x30);
                *(undefined1 *)((long)pcVar24 + 0x20) = 0;
                local_60 = pbVar1 + 1;
                *(size_t **)((long)pcVar24 + 0x28) = color_ext_list;
                *(undefined **)((long)pcVar24 + 8) = local_58;
                color_ext_list = (size_t *)pcVar24;
                cVar5 = get_funky_string(&local_58,&local_60,1,pcVar24);
                pbVar1 = local_60;
                if ((cVar5 == '\0') || (pbVar1 = local_60 + 1, *local_60 != 0x3d))
                goto LAB_0010edb9;
                *(undefined **)((long)pcVar24 + 0x18) = local_58;
                local_60 = local_60 + 1;
                cVar5 = get_funky_string(&local_58,&local_60,0,(size_t *)((long)pcVar24 + 0x10));
                pbVar1 = local_60;
                if (cVar5 == '\0') goto LAB_0010edb9;
              }
              if (bVar2 != 0x3a) break;
              local_60 = local_60 + 1;
            }
            if (bVar2 == 0) break;
            bVar3 = local_60[1];
            pbVar1 = local_60 + 1;
            if ((bVar3 == 0) || (pbVar1 = local_60 + 3, local_60[2] != 0x3d)) goto LAB_0010edb9;
            lVar25 = 0;
            while ((local_60 = pbVar1,
                   bVar2 != "lcrcecrsnofidilnpisobdcdmiorexdosusgstowtwcamhcl"[lVar25 * 2] ||
                   (bVar3 != "lcrcecrsnofidilnpisobdcdmiorexdosusgstowtwcamhcl"[lVar25 * 2 + 1]))) {
              lVar25 = lVar25 + 1;
              if (lVar25 == 0x18) goto LAB_0010ee56;
            }
            (&PTR___compound_literal_0_00110048)[(long)(int)lVar25 * 2] = local_58;
            cVar5 = get_funky_string(&local_58,&local_60,0);
            if (cVar5 == '\0') goto LAB_0010ee56;
          }
          psVar23 = color_ext_list;
          pcVar24 = (char *)color_ext_list;
          if (color_ext_list != (size_t *)0x0) {
            while (pcVar24 = (char *)psVar23, psVar23 = *(size_t **)((long)pcVar24 + 0x28),
                  local_88 = &local_58, psVar23 != (size_t *)0x0) {
              local_98 = (byte *)((ulong)local_98 & 0xffffffffffffff00);
              psVar17 = psVar23;
              do {
                sVar16 = *psVar17;
                if ((sVar16 != 0xffffffffffffffff) && (sVar16 == *(size_t *)pcVar24)) {
                  pvVar11 = (void *)psVar17[1];
                  __s1 = *(void **)((long)pcVar24 + 8);
                  iVar8 = memcmp(__s1,pvVar11,sVar16);
                  if (iVar8 == 0) {
                    *psVar17 = 0xffffffffffffffff;
                  }
                  else {
                    iVar8 = c_strncasecmp(__s1,pvVar11,sVar16);
                    if (iVar8 == 0) {
                      if (((char)local_98 == '\0') &&
                         ((*(size_t *)((long)pcVar24 + 0x10) != psVar17[2] ||
                          (iVar8 = memcmp(*(void **)((long)pcVar24 + 0x18),(void *)psVar17[3],
                                          *(size_t *)((long)pcVar24 + 0x10)), iVar8 != 0)))) {
                        *(undefined1 *)((long)pcVar24 + 0x20) = 1;
                        *(undefined1 *)(psVar17 + 4) = 1;
                      }
                      else {
                        *psVar17 = 0xffffffffffffffff;
                        local_98 = (byte *)CONCAT71(local_98._1_7_,bVar7);
                      }
                    }
                  }
                }
                psVar17 = (size_t *)psVar17[5];
              } while (psVar17 != (size_t *)0x0);
            }
          }
          goto LAB_0010e13a;
        }
        pcVar15 = getenv("COLORTERM");
        if ((pcVar15 == (char *)0x0) || (*pcVar15 == '\0')) {
          pcVar15 = getenv("TERM");
          if ((pcVar15 != (char *)0x0) && (*pcVar15 != '\0')) {
            pcVar24 = "# Configuration file for dircolors, a utility to help you set the";
            for (pcVar21 = "# Configuration file for dircolors, a utility to help you set the";
                pcVar21 + -0x109ca0 < (char *)0x15f0; pcVar21 = pcVar21 + sVar16 + 1) {
              iVar8 = strncmp(pcVar21,"TERM ",5);
              if ((iVar8 == 0) && (iVar8 = fnmatch(pcVar21 + 5,pcVar15,0), iVar8 == 0))
              goto LAB_0010e148;
              sVar16 = strlen(pcVar21);
            }
          }
          print_with_color = 0;
        }
        goto LAB_0010e148;
      }
      goto LAB_0010de60;
    }
    pcVar24 = (char *)local_88;
    if ((local_88 == (size_t *)0x0) &&
       (pcVar24 = getenv("TIME_STYLE"), local_88 = (size_t *)pcVar24,
       (size_t *)pcVar24 == (size_t *)0x0)) {
      local_88 = (size_t *)0x10b48d;
      pcVar24 = (char *)psVar23;
      psVar23 = local_88;
    }
    else {
      while (iVar10 = strncmp(pcVar24,"posix-",6), psVar23 = (size_t *)pcVar24, iVar10 == 0) {
        cVar5 = hard_locale(2);
        if (cVar5 == '\0') goto LAB_0010de4a;
        pcVar24 = (char *)((long)pcVar24 + 6);
      }
    }
    local_88 = psVar23;
    if ((char)*local_88 == '+') {
      pcVar24 = (char *)((long)local_88 + 1);
      pcVar15 = strchr(pcVar24,10);
      psVar23 = (size_t *)pcVar24;
      psVar17 = (size_t *)pcVar24;
      if (pcVar15 == (char *)0x0) goto LAB_0010f064;
      pcVar21 = strchr(pcVar15 + 1,10);
      if (pcVar21 == (char *)0x0) {
        *pcVar15 = '\0';
        psVar23 = (size_t *)pcVar24;
        psVar17 = (size_t *)(pcVar15 + 1);
        goto LAB_0010f064;
      }
      goto LAB_0010f583;
    }
    ppuVar26 = &time_style_args;
    lVar25 = argmatch(local_88,&time_style_args,time_style_types,4);
    if (-1 < lVar25) {
      if (lVar25 == 2) {
        long_time_format = _LC137;
        PTR_s__b__e__H__M_00110028 = _LC138;
        psVar23 = (size_t *)long_time_format;
        psVar17 = (size_t *)PTR_s__b__e__H__M_00110028;
      }
      else if (lVar25 < 3) {
        if (lVar25 == 0) {
          long_time_format = _LC135;
          PTR_s__b__e__H__M_00110028 = _LC135;
          psVar23 = (size_t *)long_time_format;
          psVar17 = (size_t *)PTR_s__b__e__H__M_00110028;
        }
        else {
          long_time_format = _LC136;
          PTR_s__b__e__H__M_00110028 = _LC136;
          psVar23 = (size_t *)long_time_format;
          psVar17 = (size_t *)PTR_s__b__e__H__M_00110028;
        }
      }
      else {
        psVar23 = (size_t *)long_time_format;
        psVar17 = (size_t *)PTR_s__b__e__H__M_00110028;
        if ((lVar25 == 3) &&
           (cVar5 = hard_locale(2), psVar23 = (size_t *)long_time_format,
           psVar17 = (size_t *)PTR_s__b__e__H__M_00110028, cVar5 != '\0')) {
          long_time_format = (undefined *)dcgettext(0,long_time_format,2);
          psVar17 = (size_t *)dcgettext(0,PTR_s__b__e__H__M_00110028,2);
          psVar23 = (size_t *)long_time_format;
        }
      }
LAB_0010f064:
      PTR_s__b__e__H__M_00110028 = (undefined *)psVar17;
      long_time_format = (undefined *)psVar23;
      abformat_init();
      goto LAB_0010de4a;
    }
    param_1 = 0x10b5e0;
    argmatch_invalid("time style",local_88,lVar25);
    __stream = _stderr;
    pcVar15 = (char *)dcgettext(0,"Valid arguments are:\n",5);
    fputs_unlocked(pcVar15,__stream);
    for (; param_2 = _stderr, *ppuVar26 != (undefined *)0x0; ppuVar26 = ppuVar26 + 1) {
      __fprintf_chk(_stderr,2,"  - [posix-]%s\n");
    }
    pcVar15 = (char *)dcgettext(0,"  - +FORMAT (e.g., +%H:%M) for a \'date\'-style format\n",5);
    fputs_unlocked(pcVar15,param_2);
    puVar27 = pcVar24;
switchD_0010dc17_caseD_ffffff7f:
    usage();
switchD_0010dc17_caseD_ffffff7e:
    usage(0);
LAB_0010f30b:
    bVar7 = stdout_isatty();
  } while( true );
switchD_0010dc17_caseD_90:
  local_88 = _optarg;
  goto LAB_0010dbe0;
code_r0x0010ea49:
  local_70 = 3;
  goto LAB_0010dcf8;
LAB_0010ee56:
  local_41 = 0;
  local_43 = bVar2;
  local_42 = bVar3;
  pcVar24 = (char *)quote(&local_43);
  uVar18 = dcgettext(0,"unrecognized prefix: %s",5);
  error(0,0,uVar18,pcVar24);
  pbVar1 = local_60;
LAB_0010edb9:
  local_60 = pbVar1;
  uVar18 = dcgettext(0,"unparsable value for LS_COLORS environment variable",5);
  error(0,0,uVar18);
  free(color_buf);
  psVar23 = color_ext_list;
  while (psVar23 != (size_t *)0x0) {
    pcVar24 = (char *)psVar23[5];
    free(psVar23);
    psVar23 = (size_t *)pcVar24;
  }
  print_with_color = 0;
LAB_0010e13a:
  if ((DAT_001100b0 == 6) &&
     (iVar8 = strncmp(PTR___compound_literal_4_001100b8,"target",6), iVar8 == 0)) {
    color_symlink_as_referent = '\x01';
  }
LAB_0010e148:
  if (print_with_color == 0) {
LAB_0010de60:
    if (directories_first != 0) {
LAB_0010e196:
      check_symlink_mode = 1;
    }
  }
  else {
    tabsize = (undefined *)0x0;
    if ((((directories_first != 0) || (cVar5 = is_colored(0xd), cVar5 != '\0')) ||
        ((cVar5 = is_colored(0xe), cVar5 != '\0' && (color_symlink_as_referent != '\0')))) ||
       ((cVar5 = is_colored(0xc), cVar5 != '\0' && (format == 0)))) goto LAB_0010e196;
  }
  lVar25 = (long)iVar10;
  if (((dereference == 0) && (dereference = 1, immediate_dirs == '\0')) && (indicator_style != 3)) {
    dereference = (-(uint)(format == 0) & 0xfffffffe) + 3;
  }
  if (recursive != 0) {
    active_dir_set = hash_initialize(0x1e,0,0x100000,dev_ino_compare,dev_ino_free);
    if (active_dir_set == 0) {
      iVar8 = xalloc_die();
LAB_0010f56c:
      xstrtol_fatal(iVar8,(ulong)local_58 & 0xffffffff,0,pcVar24,_optarg);
LAB_0010f583:
      param_2 = (FILE *)quote(pcVar24);
      uVar18 = dcgettext(0,"invalid time style format %s",5);
      error(2,0,uVar18,param_2);
LAB_0010f5b5:
      uVar18 = quote();
      uVar19 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
      error(0,0,uVar19,uVar18);
LAB_0010ea27:
      local_70 = 7;
      if (_ls_mode != 1) goto LAB_0010dcf8;
      cVar5 = stdout_isatty();
      psVar23 = (size_t *)pcVar24;
      if (cVar5 != '\0') goto code_r0x0010ea49;
      goto LAB_0010dd03;
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
  bVar7 = 0;
  if (print_with_color != 0) {
    bVar7 = is_colored(0x15);
  }
  format_needs_capability = bVar7 & 1;
  if (dired != 0) {
    rpl_obstack_begin(dired_obstack,0,0,&malloc,free);
    rpl_obstack_begin(subdired_obstack,0,0,&malloc,free);
  }
  if (print_hyperlink != 0) {
    uVar14 = 0;
    do {
      while (iVar8 = (int)uVar14, uVar14 < 0x5b) {
        if (((uVar14 < 0x41) && (9 < iVar8 - 0x30U)) && (1 < iVar8 - 0x2dU)) {
          uVar14 = uVar14 + 1;
        }
        else {
          (&RFC3986)[uVar14] = (&RFC3986)[uVar14] | 1;
          uVar14 = uVar14 + 1;
        }
      }
      bVar6 = true;
      if ((0x19 < iVar8 - 0x61U) && (iVar8 != 0x7e)) {
        bVar6 = iVar8 == 0x5f;
      }
      (&RFC3986)[uVar14] = (&RFC3986)[uVar14] | bVar6;
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x100);
    hostname = (undefined *)xgethostname();
    if (hostname == (undefined *)0x0) {
      hostname = &_LC1;
    }
  }
  cwd_n_alloc = 100;
  cwd_file = xmalloc(0x5140);
  iVar10 = param_1 - iVar10;
  cwd_n_used = 0;
  clear_files();
  if (iVar10 < 1) {
    if (immediate_dirs == '\0') {
      queue_directory(&_LC147,0,1);
    }
    else {
      gobble_file_constprop_0(&_LC147,3,1,0);
    }
    if (cwd_n_used != 0) goto LAB_0010ee9b;
LAB_0010e99e:
    if (pending_dirs == (long *)0x0) goto LAB_0010e8b2;
    __ptr = pending_dirs;
    if (pending_dirs[3] == 0) {
      print_dir_name = 0;
    }
  }
  else {
    do {
      lVar13 = lVar25 * 2;
      lVar25 = lVar25 + 1;
      gobble_file_constprop_0(*(undefined8 *)(&param_2->_flags + lVar13),0,1,0);
    } while ((int)lVar25 < param_1);
    if (cwd_n_used == 0) {
LAB_0010e009:
      if (1 < iVar10) goto LAB_0010e054;
      goto LAB_0010e99e;
    }
LAB_0010ee9b:
    sort_files();
    if (immediate_dirs == '\0') {
      extract_dirs_from_files(0,1);
    }
    if (cwd_n_used == 0) goto LAB_0010e009;
    print_current_files();
    if (pending_dirs == (long *)0x0) goto LAB_0010e8b2;
    dired_pos = dired_pos + 1;
    pcVar24 = _stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pcVar24) {
      __overflow(_stdout,10);
      goto LAB_0010e054;
    }
    _stdout->_IO_write_ptr = pcVar24 + 1;
    *pcVar24 = '\n';
    __ptr = pending_dirs;
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
LAB_0010e054:
    __ptr = pending_dirs;
  } while (pending_dirs != (long *)0x0);
LAB_0010e8b2:
  if ((print_with_color != 0) && (used_color != '\0')) {
    if ((color_indicator != 2) ||
       (((*(short *)PTR___compound_literal_0_00110048 != 0x5b1b || (DAT_00110050 != 1)) ||
        (*PTR___compound_literal_1_00110058 != 'm')))) {
      put_indicator(&color_indicator);
      put_indicator(&DAT_00110050);
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
    lVar13 = hash_get_n_entries(active_dir_set);
    if (lVar13 != 0) {
LAB_0010f60d:
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


