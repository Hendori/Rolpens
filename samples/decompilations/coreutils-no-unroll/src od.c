
void format_address_none(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void format_address_std(ulong param_1,undefined1 param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  char *__s;
  char *__s_00;
  long in_FS_OFFSET;
  char local_22 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = local_22 + 1;
  local_22[2] = 0;
  __s_00 = __s + -(long)address_pad_len;
  if (address_base == 10) {
    do {
      __s = __s + -1;
      *__s = (char)param_1 + (char)(param_1 / 10) * -10 + '0';
      bVar1 = 9 < param_1;
      param_1 = param_1 / 10;
    } while (bVar1);
  }
  else if (address_base == 0x10) {
    do {
      __s = __s + -1;
      uVar3 = (uint)param_1;
      param_1 = param_1 >> 4;
      *__s = "0123456789abcdef"[uVar3 & 0xf];
    } while (param_1 != 0);
  }
  else if (address_base == 8) {
    do {
      __s = __s + -1;
      bVar2 = (byte)param_1;
      param_1 = param_1 >> 3;
      *__s = (bVar2 & 7) + 0x30;
    } while (param_1 != 0);
  }
  local_22[1] = param_2;
  if (__s_00 < __s) {
    __s = (char *)memset(__s_00,0x30,(long)__s - (long)__s_00);
  }
  fputs_unlocked(__s,_stdout);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1  [16]
parse_old_offset(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  
  if (*param_1 != '\0') {
    if (*param_1 == '+') {
      param_1 = param_1 + 1;
    }
    pcVar1 = strchr(param_1,0x2e);
    cVar3 = '\n';
    if ((pcVar1 == (char *)0x0) && (cVar3 = '\b', *param_1 == '0')) {
      cVar3 = ((param_1[1] & 0xdfU) == 0x58) * '\b' + '\b';
    }
    uVar2 = xstrtoumax(param_1,0,cVar3,param_2,&_LC1);
    auVar4._1_7_ = (undefined7)((ulong)uVar2 >> 8);
    auVar4[0] = (int)uVar2 == 0;
    auVar4._8_8_ = param_4;
    return auVar4;
  }
  return ZEXT116(0) << 0x40;
}



void print_named_ascii(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4,int param_5,
                      int param_6)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  long in_FS_OFFSET;
  byte local_42 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar3 = (long)(param_1 + -1) * (long)param_6;
    pbVar4 = param_3;
    iVar6 = param_6;
    do {
      pbVar5 = pbVar4 + 1;
      iVar1 = (int)(uVar3 / (ulong)param_1);
      bVar2 = (byte)(*pbVar4 & 0x7f);
      pbVar7 = &_LC2;
      if (bVar2 != 0x7f) {
        if (bVar2 < 0x21) {
          pbVar7 = charname + (ulong)(*pbVar4 & 0x7f) * 4;
        }
        else {
          local_42[1] = 0;
          pbVar7 = local_42;
          local_42[0] = bVar2;
        }
      }
      xprintf(&_LC3,(iVar6 - iVar1) + param_5,pbVar7);
      uVar3 = uVar3 - (long)param_6;
      pbVar4 = pbVar5;
      iVar6 = iVar1;
    } while (param_2 < param_3 + ((long)param_1 - (long)pbVar5));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_long_long(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                    int param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar5 = param_1;
    iVar4 = param_6;
    do {
      uVar5 = uVar5 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        uVar3 = *param_3;
      }
      else {
        uVar3 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                                param_3,*(undefined1
                                                                                          *)((long)
                                                  param_3 + 1)),*(undefined1 *)((long)param_3 + 2)),
                                                  *(undefined1 *)((long)param_3 + 3)),
                                                  *(undefined1 *)((long)param_3 + 4)),
                                           *(undefined1 *)((long)param_3 + 5)),
                                  *(undefined1 *)((long)param_3 + 6)),
                         *(undefined1 *)((long)param_3 + 7));
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - (long)param_6;
      xprintf(param_4,(iVar4 - iVar1) + param_5,uVar3);
      iVar4 = iVar1;
    } while (param_2 < uVar5);
  }
  return;
}



void print_long(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,int param_5,
               int param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar5 = param_1;
    iVar4 = param_6;
    do {
      uVar5 = uVar5 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        uVar3 = *param_3;
      }
      else {
        uVar3 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                                param_3,*(undefined1
                                                                                          *)((long)
                                                  param_3 + 1)),*(undefined1 *)((long)param_3 + 2)),
                                                  *(undefined1 *)((long)param_3 + 3)),
                                                  *(undefined1 *)((long)param_3 + 4)),
                                           *(undefined1 *)((long)param_3 + 5)),
                                  *(undefined1 *)((long)param_3 + 6)),
                         *(undefined1 *)((long)param_3 + 7));
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - (long)param_6;
      xprintf(param_4,(iVar4 - iVar1) + param_5,uVar3);
      iVar4 = iVar1;
    } while (param_2 < uVar5);
  }
  return;
}



void print_int(ulong param_1,ulong param_2,undefined4 *param_3,undefined8 param_4,int param_5,
              int param_6)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar5 = param_1;
    iVar4 = param_6;
    do {
      uVar5 = uVar5 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        uVar3 = *param_3;
      }
      else {
        uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)param_3,*(undefined1 *)((long)param_3 + 1)
                                          ),*(undefined1 *)((long)param_3 + 2)),
                         *(undefined1 *)((long)param_3 + 3));
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - (long)param_6;
      xprintf(param_4,(iVar4 - iVar1) + param_5,uVar3);
      iVar4 = iVar1;
    } while (param_2 < uVar5);
  }
  return;
}



void print_short(ulong param_1,ulong param_2,undefined2 *param_3,undefined8 param_4,int param_5,
                int param_6)

{
  int iVar1;
  ulong uVar2;
  undefined2 uVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar5 = param_1;
    iVar4 = param_6;
    do {
      uVar5 = uVar5 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        uVar3 = *param_3;
      }
      else {
        uVar3 = CONCAT11(*(undefined1 *)param_3,*(undefined1 *)((long)param_3 + 1));
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - (long)param_6;
      xprintf(param_4,(iVar4 - iVar1) + param_5,uVar3);
      iVar4 = iVar1;
    } while (param_2 < uVar5);
  }
  return;
}



void print_s_short(ulong param_1,ulong param_2,short *param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  ulong uVar2;
  short sVar3;
  int iVar4;
  ulong uVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar5 = param_1;
    iVar4 = param_6;
    do {
      uVar5 = uVar5 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        sVar3 = *param_3;
      }
      else {
        sVar3 = CONCAT11((char)*param_3,*(undefined1 *)((long)param_3 + 1));
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - (long)param_6;
      xprintf(param_4,(iVar4 - iVar1) + param_5,(int)sVar3);
      iVar4 = iVar1;
    } while (param_2 < uVar5);
  }
  return;
}



void print_char(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
               int param_5,int param_6)

{
  undefined1 uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined1 *puVar6;
  
  if (param_2 < param_1) {
    uVar5 = (long)(param_1 + -1) * (long)param_6;
    puVar6 = param_3;
    iVar4 = param_6;
    do {
      uVar2 = uVar5 / (ulong)param_1;
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 - (long)param_6;
      iVar3 = (int)uVar2;
      xprintf(param_4,(iVar4 - iVar3) + param_5,uVar1);
      iVar4 = iVar3;
    } while (param_2 < param_3 + ((long)param_1 - (long)puVar6));
  }
  return;
}



void print_s_char(char *param_1,char *param_2,char *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  char cVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  
  if (param_2 < param_1) {
    uVar5 = (long)(param_1 + -1) * (long)param_6;
    pcVar6 = param_3;
    iVar4 = param_6;
    do {
      uVar2 = uVar5 / (ulong)param_1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      uVar5 = uVar5 - (long)param_6;
      iVar3 = (int)uVar2;
      xprintf(param_4,(iVar4 - iVar3) + param_5,(int)cVar1);
      iVar4 = iVar3;
    } while (param_2 < param_3 + ((long)param_1 - (long)pcVar6));
  }
  return;
}



void print_long_double(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5
                      ,int param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar2 = (long)param_6 * (param_1 - 1);
    uVar4 = param_1;
    iVar3 = param_6;
    do {
      uVar4 = uVar4 - 1;
      iVar1 = (int)(uVar2 / param_1);
      ldtoastr(local_78,0x2d,0,0);
      xprintf(&_LC3,(iVar3 - iVar1) + param_5,local_78);
      uVar2 = uVar2 - (long)param_6;
      iVar3 = iVar1;
    } while (param_2 < uVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_double(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar2 = (long)param_6 * (param_1 - 1);
    uVar5 = param_1;
    iVar4 = param_6;
    do {
      uVar5 = uVar5 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        uVar3 = *param_3;
      }
      else {
        uVar3 = CONCAT71(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)
                                                                                param_3,*(undefined1
                                                                                          *)((long)
                                                  param_3 + 1)),*(undefined1 *)((long)param_3 + 2)),
                                                  *(undefined1 *)((long)param_3 + 3)),
                                                  *(undefined1 *)((long)param_3 + 4)),
                                           *(undefined1 *)((long)param_3 + 5)),
                                  *(undefined1 *)((long)param_3 + 6)),
                         *(undefined1 *)((long)param_3 + 7));
      }
      param_3 = param_3 + 1;
      dtoastr(uVar3,local_68,0x28,0,0);
      xprintf(&_LC3,(iVar4 - iVar1) + param_5,local_68);
      uVar2 = uVar2 - (long)param_6;
      iVar4 = iVar1;
    } while (param_2 < uVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void print_float(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5,
                int param_6)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar2 = (long)param_6 * (param_1 - 1);
    uVar4 = param_1;
    iVar3 = param_6;
    do {
      uVar4 = uVar4 - 1;
      iVar1 = (int)(uVar2 / param_1);
      ftoastr(local_68,0x1f,0,0);
      xprintf(&_LC3,(iVar3 - iVar1) + param_5,local_68);
      uVar2 = uVar2 - (long)param_6;
      iVar3 = iVar1;
    } while (param_2 < uVar4);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_halffloat(ulong param_1,ulong param_2,ulong param_3,ushort *param_4,undefined8 param_5,
                    int param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong uVar5;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < param_2) {
    uVar2 = (long)param_7 * (param_2 - 1);
    uVar4 = param_2;
    iVar3 = param_7;
    do {
      uVar4 = uVar4 - 1;
      iVar1 = (int)(uVar2 / param_2);
      if (input_swap == '\0') {
        uVar5 = param_1 & 0xffffffffffff0000 | (ulong)*param_4;
      }
      else {
        uVar5 = (ulong)CONCAT11((char)*param_4,*(undefined1 *)((long)param_4 + 1));
      }
      __extendhfsf2(uVar5);
      param_4 = param_4 + 1;
      ftoastr(local_68,0x1f,0,0);
      param_1 = xprintf(&_LC3,(iVar3 - iVar1) + param_6,local_68);
      uVar2 = uVar2 - (long)param_7;
      iVar3 = iVar1;
    } while (param_3 < uVar4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void print_bfloat(ulong param_1,ulong param_2,ulong param_3,ushort *param_4,undefined8 param_5,
                 int param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  ulong uVar5;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < param_2) {
    uVar2 = (long)param_7 * (param_2 - 1);
    uVar4 = param_2;
    iVar3 = param_7;
    do {
      uVar4 = uVar4 - 1;
      iVar1 = (int)(uVar2 / param_2);
      if (input_swap == '\0') {
        uVar5 = param_1 & 0xffffffffffff0000 | (ulong)*param_4;
      }
      else {
        uVar5 = (ulong)CONCAT11((char)*param_4,*(undefined1 *)((long)param_4 + 1));
      }
      __extendbfsf2(uVar5);
      param_4 = param_4 + 1;
      ftoastr(local_68,0x1f,0,0);
      param_1 = xprintf(&_LC3,(iVar3 - iVar1) + param_6,local_68);
      uVar2 = uVar2 - (long)param_7;
      iVar3 = iVar1;
    } while (param_3 < uVar4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void print_ascii(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4,int param_5,
                int param_6)

{
  byte bVar1;
  int iVar2;
  ushort **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined local_44 [4];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar6 = (long)(param_1 + -1) * (long)param_6;
    pbVar7 = param_3;
    iVar8 = param_6;
    do {
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
      iVar2 = (int)(uVar6 / (ulong)param_1);
      switch((ulong)bVar1) {
      case 0:
        puVar5 = &_LC7;
        break;
      default:
        ppuVar3 = __ctype_b_loc();
        puVar4 = &_LC5;
        puVar5 = local_44;
        if ((*(byte *)((long)*ppuVar3 + (ulong)bVar1 * 2 + 1) & 0x40) == 0) {
          puVar4 = &_LC6;
        }
        __sprintf_chk(puVar5,2,4,puVar4,bVar1);
        break;
      case 7:
        puVar5 = &_LC8;
        break;
      case 8:
        puVar5 = &_LC9;
        break;
      case 9:
        puVar5 = &_LC13;
        break;
      case 10:
        puVar5 = &_LC11;
        break;
      case 0xb:
        puVar5 = &_LC14;
        break;
      case 0xc:
        puVar5 = &_LC10;
        break;
      case 0xd:
        puVar5 = &_LC12;
      }
      xprintf(&_LC3,(iVar8 - iVar2) + param_5,puVar5);
      uVar6 = uVar6 - (long)param_6;
      iVar8 = iVar2;
    } while (param_2 < param_3 + ((long)param_1 - (long)pbVar7));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_block(undefined8 param_1,size_t param_2,void *param_3,byte *param_4)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  ushort **ppuVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  
  if ((((abbreviate_duplicate_blocks != '\0') && (first_1 == '\0')) && (bytes_per_block == param_2))
     && (iVar4 = memcmp(param_3,param_4,param_2), iVar4 == 0)) {
    if (prev_pair_equal_0 != '\0') {
      first_1 = 0;
      return;
    }
    puts("*");
    first_1 = 0;
    prev_pair_equal_0 = 1;
    return;
  }
  prev_pair_equal_0 = 0;
  if (0 < n_specs) {
    lVar8 = 0;
    do {
      while( true ) {
        uVar10 = (ulong)*(int *)(width_bytes + (ulong)*(uint *)(spec + 4 + lVar8 * 0x28) * 4);
        iVar4 = (int)(bytes_per_block / uVar10);
        uVar5 = bytes_per_block - param_2;
        if (lVar8 == 0) {
          (*format_address)(param_1,0,uVar5 % uVar10);
        }
        else {
          __printf_chk(2,&_LC3,address_pad_len,&_LC16);
        }
        iVar12 = (int)(uVar5 / uVar10);
        lVar11 = spec + lVar8 * 0x28;
        (**(code **)(lVar11 + 8))
                  ((long)iVar4,(long)iVar12,param_4,lVar11 + 0x10,*(undefined4 *)(lVar11 + 0x1c),
                   *(undefined4 *)(lVar11 + 0x20));
        lVar11 = lVar8 * 0x28 + spec;
        if (*(char *)(lVar11 + 0x1a) != '\0') {
          __printf_chk(2,&_LC3,(*(int *)(lVar11 + 0x20) * iVar12) / iVar4 +
                               iVar12 * *(int *)(lVar11 + 0x1c),&_LC16);
          fwrite_unlocked(&_LC17,1,3,_stdout);
          if (param_2 != 0) {
            ppuVar6 = __ctype_b_loc();
            pbVar7 = param_4;
            do {
              bVar3 = *pbVar7;
              pbVar7 = pbVar7 + 1;
              uVar9 = (uint)bVar3;
              if ((*(byte *)((long)*ppuVar6 + (ulong)bVar3 * 2 + 1) & 0x40) == 0) {
                bVar3 = 0x2e;
                uVar9 = 0x2e;
              }
              pbVar2 = (byte *)_stdout->_IO_write_ptr;
              if (pbVar2 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
                *pbVar2 = bVar3;
              }
              else {
                __overflow(_stdout,uVar9);
              }
            } while (pbVar7 != param_4 + param_2);
          }
          pcVar1 = _stdout->_IO_write_ptr;
          if (pcVar1 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar1 + 1;
            *pcVar1 = '<';
          }
          else {
            __overflow(_stdout,0x3c);
          }
        }
        lVar11 = n_specs;
        pcVar1 = _stdout->_IO_write_ptr;
        if (_stdout->_IO_write_end <= pcVar1) break;
        lVar8 = lVar8 + 1;
        _stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = '\n';
        if (lVar11 <= lVar8) {
          first_1 = 0;
          return;
        }
      }
      lVar8 = lVar8 + 1;
      __overflow(_stdout,10);
    } while (lVar8 < n_specs);
  }
  first_1 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 open_next_file(void)

{
  int *piVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  do {
    input_filename = (char *)*file_list;
    if (input_filename == (char *)0x0) {
      return uVar2;
    }
    file_list = file_list + 1;
    if ((*input_filename == '-') && (input_filename[1] == '\0')) {
      input_filename = (char *)dcgettext(0,"standard input",5);
      have_read_stdin = 1;
      in_stream = _stdin;
    }
    else {
      in_stream = (FILE *)rpl_fopen();
      if (in_stream != (FILE *)0x0) break;
      quotearg_n_style_colon(0,3,input_filename);
      piVar1 = __errno_location();
      uVar2 = 0;
      error(0,*piVar1,&_LC20);
    }
  } while (in_stream == (FILE *)0x0);
  if ((limit_bytes_to_format != '\0') && (flag_dump_strings == '\0')) {
    setvbuf(in_stream,(char *)0x0,2,0);
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 check_and_close(uint param_1)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 1;
  if (in_stream == (FILE *)0x0) goto LAB_0010147c;
  uVar4 = in_stream->_flags & 0x20;
  if (uVar4 != 0) {
    uVar4 = param_1;
  }
  if ((**(char **)(file_list + -8) == '-') && ((*(char **)(file_list + -8))[1] == '\0')) {
    clearerr_unlocked(in_stream);
LAB_00101468:
    if (uVar4 != 0) goto LAB_001014cb;
    uVar3 = 1;
  }
  else {
    iVar1 = rpl_fclose();
    if (iVar1 == 0) goto LAB_00101468;
    if (uVar4 == 0) {
      puVar2 = (uint *)__errno_location();
      uVar4 = *puVar2;
      goto LAB_00101468;
    }
LAB_001014cb:
    uVar3 = quotearg_n_style_colon(0,3,input_filename);
    error(0,uVar4,&_LC20,uVar3);
    uVar3 = 0;
  }
  in_stream = (FILE *)0x0;
LAB_0010147c:
  if ((*_stdout & 0x20) != 0) {
    uVar3 = dcgettext(0,"write error",5);
    error(0,0,uVar3);
    uVar3 = 0;
  }
  return uVar3;
}



uint read_block(ulong param_1,long param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  size_t sVar4;
  FILE *__stream;
  long lVar5;
  uint uVar6;
  
  __stream = in_stream;
  if ((param_1 != 0) && (param_1 <= bytes_per_block)) {
    *param_3 = 0;
    if (__stream == (FILE *)0x0) {
      uVar6 = 1;
    }
    else {
      lVar5 = 0;
      uVar6 = 1;
      while( true ) {
        sVar4 = fread_unlocked((void *)(lVar5 + param_2),1,param_1 - lVar5,__stream);
        *param_3 = *param_3 + sVar4;
        if (param_1 - lVar5 == sVar4) break;
        piVar3 = __errno_location();
        uVar1 = check_and_close(*piVar3);
        uVar2 = open_next_file();
        uVar6 = uVar6 & uVar1 & uVar2;
        if (in_stream == (FILE *)0x0) {
          return uVar6;
        }
        lVar5 = *param_3;
        __stream = in_stream;
      }
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("0 < n && n <= bytes_per_block","src/od.c",0x540,"read_block");
}



uint skip(ulong param_1)

{
  FILE *pFVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  __blksize_t _Var5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  stat sStack_20d8;
  undefined1 local_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    uVar10 = 1;
LAB_00101711:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar10;
  }
  uVar10 = 1;
  if (in_stream != (FILE *)0x0) goto LAB_0010167d;
LAB_00101776:
  uVar7 = dcgettext(0,"cannot skip past end of combined input",5);
  error(1,0,uVar7);
LAB_0010179a:
  uVar10 = 0;
  uVar7 = quotearg_n_style_colon(0,3,input_filename);
  piVar8 = __errno_location();
  error(0,*piVar8,&_LC20,uVar7);
LAB_0010165b:
  uVar2 = check_and_close();
  uVar3 = open_next_file();
  uVar10 = uVar10 & uVar2 & uVar3;
  if (in_stream == (FILE *)0x0) {
    if (param_1 == 0) goto LAB_00101711;
    goto LAB_00101776;
  }
LAB_0010167d:
  pFVar1 = in_stream;
  iVar4 = fileno(in_stream);
  iVar4 = fstat(iVar4,&sStack_20d8);
  if (iVar4 == 0) {
    if ((sStack_20d8.st_mode & 0xd000) == 0x8000) {
      _Var5 = sStack_20d8.st_blksize;
      if (0x1fffffffffffffff < sStack_20d8.st_blksize - 1U) {
        _Var5 = 0x200;
      }
      if (_Var5 < sStack_20d8.st_size) {
        if (param_1 <= (ulong)sStack_20d8.st_size) {
          iVar4 = rpl_fseeko(pFVar1,param_1,1);
          if (iVar4 != 0) {
LAB_00101764:
            uVar10 = 0;
          }
          goto LAB_00101711;
        }
        param_1 = param_1 - sStack_20d8.st_size;
        goto LAB_0010165b;
      }
    }
    else {
      iVar4 = rpl_fseeko(pFVar1,param_1,1);
      if (iVar4 == 0) goto LAB_00101711;
    }
    if (param_1 != 0) {
      uVar9 = 0x2000;
      do {
        if (param_1 < uVar9) {
          uVar9 = param_1;
        }
        uVar6 = __fread_unlocked_chk(local_2048,0x2000,1,uVar9,in_stream);
        param_1 = param_1 - uVar6;
        if (uVar9 != uVar6) {
          if ((in_stream->_flags & 0x20U) != 0) goto LAB_00101764;
          if ((in_stream->_flags & 0x10U) != 0) goto LAB_00101740;
        }
        if (param_1 == 0) break;
      } while( true );
    }
    goto LAB_00101711;
  }
  goto LAB_0010179a;
LAB_00101740:
  if (param_1 == 0) goto LAB_00101711;
  goto LAB_0010165b;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void format_address_paren(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  byte *pbVar2;
  
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '(';
  }
  else {
    __overflow(_stdout,0x28);
  }
  format_address_std(param_1,0x29);
  if (param_2 != 0) {
    pbVar2 = (byte *)_stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pbVar2) {
      __overflow(_stdout,(uint)param_2);
      return;
    }
    _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
    *pbVar2 = param_2;
  }
  return;
}



undefined8 decode_format_string(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  lconv *plVar8;
  size_t sVar9;
  long lVar10;
  byte bVar11;
  code *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  undefined *puVar17;
  char *pcVar18;
  int *piVar19;
  uint uVar20;
  uint local_3c;
  
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    return 1;
  }
  pcVar13 = param_1;
  if (n_specs_allocated <= n_specs) goto LAB_00101a45;
LAB_001018a0:
  piVar19 = (int *)(spec + n_specs * 0x28);
  if (cVar2 == 'a') goto LAB_00101a8a;
  do {
    bVar11 = cVar2 + 0x9d;
    if (0x15 < bVar11) {
LAB_00101fa5:
      uVar6 = quote(param_1);
      cVar2 = *pcVar13;
      uVar7 = dcgettext(0,"invalid character \'%c\' in type string %s",5);
      error(0,0,uVar7,(int)cVar2,uVar6);
      return 0;
    }
    uVar5 = 1L << (bVar11 & 0x3f);
    pcVar18 = pcVar13;
    if ((uVar5 & 0x241002) == 0) {
      if ((uVar5 & 1) == 0) {
        if (bVar11 != 3) goto LAB_00101fa5;
        uVar20 = fp_type_size._32_4_;
        switch(pcVar13[1]) {
        case 'B':
          pcVar14 = pcVar13 + 2;
          iVar15 = 6;
          uVar20 = fp_type_size._8_4_;
          break;
        default:
          pcVar14 = pcVar13 + 1;
          local_3c = (int)pcVar13[1] - 0x30;
          pcVar13 = pcVar14;
          if (local_3c < 10) {
            while( true ) {
              pcVar1 = pcVar13 + 1;
              pcVar13 = pcVar13 + 1;
              uVar4 = (int)*pcVar1 - 0x30;
              if (9 < uVar4) break;
              iVar16 = (int)((long)(int)local_3c * 10);
              if (((long)iVar16 != (long)(int)local_3c * 10) ||
                 (local_3c = uVar4 + iVar16, SCARRY4(uVar4,iVar16))) {
LAB_00101944:
                uVar6 = quote(param_1);
                uVar7 = dcgettext(0,"invalid type string %s",5);
                error(0,0,uVar7,uVar6);
                return 0;
              }
            }
            if (pcVar14 == pcVar13) {
              iVar15 = 4;
              pcVar14 = pcVar13;
            }
            else {
              if ((0x10 < local_3c) || (*(uint *)(fp_type_size + (long)(int)local_3c * 4) == 0)) {
                uVar6 = quote(param_1);
                pcVar13 = 
                "invalid type string %s;\nthis system doesn\'t provide a %d-byte floating point type"
                ;
                goto LAB_00101f5b;
              }
              iVar15 = 4;
              pcVar14 = pcVar13;
              uVar20 = *(uint *)(fp_type_size + (long)(int)local_3c * 4);
            }
          }
          else {
            iVar15 = 4;
          }
          break;
        case 'D':
          pcVar14 = pcVar13 + 2;
          iVar15 = 4;
          break;
        case 'F':
          pcVar14 = pcVar13 + 2;
          iVar15 = 4;
          uVar20 = fp_type_size._16_4_;
          break;
        case 'H':
          pcVar14 = pcVar13 + 2;
          iVar15 = 5;
          uVar20 = fp_type_size._8_4_;
          break;
        case 'L':
          pcVar14 = pcVar13 + 2;
          iVar15 = 4;
          uVar20 = fp_type_size._64_4_;
        }
        plVar8 = localeconv();
        iVar16 = 1;
        if (*plVar8->decimal_point != '\0') {
          sVar9 = strlen(plVar8->decimal_point);
          iVar16 = (int)sVar9;
        }
        if (uVar20 == 8) {
          iVar16 = iVar16 + 0x17;
          pcVar12 = print_double;
        }
        else if (uVar20 < 9) {
          if (uVar20 == 6) {
            pcVar12 = print_halffloat;
            if (iVar15 == 6) {
              pcVar12 = print_bfloat;
            }
            iVar16 = iVar16 + 0xe;
          }
          else {
            if (uVar20 != 7) goto LAB_00101fe3;
            iVar16 = iVar16 + 0xe;
            pcVar12 = print_float;
          }
        }
        else {
          if (uVar20 != 9) {
LAB_00101fe3:
                    /* WARNING: Subroutine does not return */
            __assert_fail("0","src/od.c",0x38a,"decode_one_format");
          }
          iVar16 = iVar16 + 0x1c;
          pcVar12 = print_long_double;
        }
      }
      else {
        pcVar14 = pcVar13 + 1;
        iVar16 = 3;
        iVar15 = 8;
        uVar20 = 1;
        pcVar12 = print_ascii;
      }
    }
    else {
      cVar3 = pcVar13[1];
      if (cVar3 == 'L') {
        pcVar14 = pcVar13 + 2;
        lVar10 = 8;
        uVar20 = integral_type_size._32_4_;
LAB_00101b8d:
        if (cVar2 == 'u') goto LAB_00101ca7;
LAB_00101b96:
        if (cVar2 < 'v') {
          if (cVar2 == 'd') {
            puVar17 = &_LC25;
            iVar16 = (int)(char)bytes_to_signed_dec_digits[lVar10];
            if ((uVar20 != 5) && (puVar17 = &_LC27, uVar20 == 4)) {
              puVar17 = &_LC26;
            }
            iVar15 = 0;
            __sprintf_chk(piVar19 + 4,2,10,"%%*%s",puVar17);
          }
          else {
            puVar17 = &_LC28;
            if ((uVar20 != 5) && (puVar17 = &_LC30, uVar20 == 4)) {
              puVar17 = &_LC29;
            }
            iVar16 = (int)(char)bytes_to_oct_digits[lVar10];
            iVar15 = 2;
            __sprintf_chk(piVar19 + 4,2,10,"%%*.%d%s",iVar16,puVar17);
          }
        }
        else {
          puVar17 = &_LC34;
          if ((uVar20 != 5) && (puVar17 = &_LC36, uVar20 == 4)) {
            puVar17 = &_LC35;
          }
          iVar16 = (int)(char)bytes_to_hex_digits[lVar10];
          iVar15 = 3;
          __sprintf_chk(piVar19 + 4,2,10,"%%*.%d%s",iVar16,puVar17);
        }
      }
      else {
        uVar20 = integral_type_size._16_4_;
        if (cVar3 < 'M') {
          if (cVar3 == 'C') {
            pcVar14 = pcVar13 + 2;
            lVar10 = 1;
            uVar20 = integral_type_size._4_4_;
          }
          else {
            if (cVar3 != 'I') {
              local_3c = (int)cVar3 - 0x30;
              pcVar14 = pcVar13 + 1;
              if (local_3c < 10) {
                pcVar14 = pcVar13 + 2;
                cVar3 = pcVar13[2];
                while (uVar4 = (int)cVar3 - 0x30, uVar4 < 10) {
                  iVar16 = (int)((long)(int)local_3c * 10);
                  if (((long)iVar16 != (long)(int)local_3c * 10) ||
                     (local_3c = uVar4 + iVar16, SCARRY4(uVar4,iVar16))) goto LAB_00101944;
                  pcVar1 = pcVar14 + 1;
                  pcVar14 = pcVar14 + 1;
                  cVar3 = *pcVar1;
                }
                if (pcVar13 + 1 != pcVar14) {
                  if (local_3c < 9) {
                    lVar10 = (long)(int)local_3c;
                    uVar20 = *(uint *)(integral_type_size + lVar10 * 4);
                    if (*(uint *)(integral_type_size + lVar10 * 4) != 0) goto LAB_00101b8d;
                  }
                  uVar6 = quote(param_1);
                  pcVar13 = 
                  "invalid type string %s;\nthis system doesn\'t provide a %d-byte integral type";
LAB_00101f5b:
                  uVar7 = dcgettext(0,pcVar13,5);
                  error(0,0,uVar7,uVar6,local_3c);
                  return 0;
                }
              }
              goto LAB_00101eb8;
            }
            pcVar14 = pcVar13 + 2;
            lVar10 = 4;
          }
          goto LAB_00101b8d;
        }
        pcVar14 = pcVar13 + 1;
        if (cVar3 != 'S') {
LAB_00101eb8:
          lVar10 = 4;
          goto LAB_00101b8d;
        }
        pcVar14 = pcVar13 + 2;
        lVar10 = 2;
        uVar20 = integral_type_size._8_4_;
        if (cVar2 != 'u') goto LAB_00101b96;
LAB_00101ca7:
        puVar17 = &_LC31;
        iVar16 = (int)(char)bytes_to_unsigned_dec_digits[lVar10];
        if ((uVar20 != 5) && (puVar17 = &_LC33, uVar20 == 4)) {
          puVar17 = &_LC32;
        }
        iVar15 = 1;
        __sprintf_chk(piVar19 + 4,2,10,"%%*%s",puVar17);
      }
      switch(uVar20) {
      default:
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","src/od.c",800,"decode_one_format");
      case 1:
        pcVar12 = print_char;
        if (iVar15 == 0) {
          pcVar12 = print_s_char;
        }
        break;
      case 2:
        pcVar12 = print_short;
        if (iVar15 == 0) {
          pcVar12 = print_s_short;
        }
        break;
      case 3:
        pcVar12 = print_int;
        break;
      case 4:
        pcVar12 = print_long;
        break;
      case 5:
        pcVar12 = print_long_long;
      }
    }
    while( true ) {
      piVar19[1] = uVar20;
      *piVar19 = iVar15;
      *(code **)(piVar19 + 2) = pcVar12;
      piVar19[7] = iVar16;
      cVar2 = *pcVar14;
      *(bool *)((long)piVar19 + 0x1a) = cVar2 == 'z';
      pcVar13 = pcVar14 + (cVar2 == 'z');
      if (pcVar13 == pcVar18) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("s != next","src/od.c",0x418,"decode_format_string");
      }
      cVar2 = *pcVar13;
      n_specs = n_specs + 1;
      if (cVar2 == '\0') {
        return 1;
      }
      if (n_specs < n_specs_allocated) goto LAB_001018a0;
LAB_00101a45:
      spec = xpalloc(spec,&n_specs_allocated,1,0xffffffffffffffff,0x28);
      cVar2 = *pcVar13;
      piVar19 = (int *)(spec + n_specs * 0x28);
      if (cVar2 != 'a') break;
LAB_00101a8a:
      pcVar14 = pcVar13 + 1;
      iVar16 = 3;
      iVar15 = 7;
      uVar20 = 1;
      pcVar12 = print_named_ascii;
      pcVar18 = pcVar13;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void format_address_label(long param_1,byte param_2)

{
  char *pcVar1;
  byte *pbVar2;
  
  format_address_std(param_1,0x20);
  param_1 = param_1 + pseudo_offset;
  pcVar1 = _stdout->_IO_write_ptr;
  if (pcVar1 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar1 + 1;
    *pcVar1 = '(';
  }
  else {
    __overflow(_stdout,0x28);
  }
  format_address_std(param_1,0x29);
  if (param_2 != 0) {
    pbVar2 = (byte *)_stdout->_IO_write_ptr;
    if (_stdout->_IO_write_end <= pbVar2) {
      __overflow(_stdout,(uint)param_2);
      return;
    }
    _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
    *pbVar2 = param_2;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 *local_a8;
  char *pcStack_a0;
  char *local_98 [4];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  char *pcStack_60;
  char *local_58;
  char *pcStack_50;
  undefined1 local_48 [16];
  undefined8 local_30;
  
  uVar5 = _program_name;
  ppuVar6 = &local_a8;
  local_30 = *(undefined8 *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00102159;
  }
  uVar3 = dcgettext(0,
                    "Usage: %s [OPTION]... [FILE]...\n  or:  %s [-abcdfilosx]... [FILE] [[+]OFFSET[.][b]]\n  or:  %s --traditional [OPTION]... [FILE] [[+]OFFSET[.][b] [+][LABEL][.][b]]\n"
                    ,5);
  __printf_chk(2,uVar3,uVar5,uVar5,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nWrite an unambiguous representation, octal bytes by default,\nof FILE to standard output.  With more than one FILE argument,\nconcatenate them in the listed order to form the input.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWith no FILE, or when FILE is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nIf first and second call formats both apply, the second format is assumed\nif the last operand begins with + or (if there are 2 operands) a digit.\nAn OFFSET operand means -j OFFSET.  LABEL is the pseudo-address\nat first byte printed, incremented when dump is progressing.\nFor OFFSET and LABEL, a 0x or 0X prefix indicates hexadecimal;\nsuffixes may be . for octal and b for multiply by 512.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -A, --address-radix=RADIX   output format for file offsets; RADIX is one\n                                of [doxn], for Decimal, Octal, Hex or None\n      --endian={big|little}   swap input bytes according the specified order\n  -j, --skip-bytes=BYTES      skip BYTES input bytes first\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -N, --read-bytes=BYTES      limit dump to BYTES input bytes\n  -S BYTES, --strings[=BYTES]  show only NUL terminated strings\n                                of at least BYTES (3) printable characters\n  -t, --format=TYPE           select output format or formats\n  -v, --output-duplicates     do not use * to mark line suppression\n  -w[BYTES], --width[=BYTES]  output BYTES bytes per output line;\n                                32 is implied when BYTES is not specified\n      --traditional           accept arguments in third form above\n"
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
                             "\n\nTraditional format specifications may be intermixed; they accumulate:\n  -a   same as -t a,  select named characters, ignoring high-order bit\n  -b   same as -t o1, select octal bytes\n  -c   same as -t c,  select printable characters or backslash escapes\n  -d   same as -t u2, select unsigned decimal 2-byte units\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -f   same as -t fF, select floats\n  -i   same as -t dI, select decimal ints\n  -l   same as -t dL, select decimal longs\n  -o   same as -t o2, select octal 2-byte units\n  -s   same as -t d2, select decimal 2-byte units\n  -x   same as -t x2, select hexadecimal 2-byte units\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n\nTYPE is made up of one or more of these specifications:\n  a          named character, ignoring high-order bit\n  c          printable character or backslash escape\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  d[SIZE]    signed decimal, SIZE bytes per integer\n  f[SIZE]    floating point, SIZE bytes per float\n  o[SIZE]    octal, SIZE bytes per integer\n  u[SIZE]    unsigned decimal, SIZE bytes per integer\n  x[SIZE]    hexadecimal, SIZE bytes per integer\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nSIZE is a number.  For TYPE in [doux], SIZE may also be C for\nsizeof(char), S for sizeof(short), I for sizeof(int) or L for\nsizeof(long).  If TYPE is f, SIZE may also be B for Brain 16 bit,\nH for Half precision float, F for sizeof(float), D for sizeof(double),\nor L for sizeof(long double).\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nAdding a z suffix to any type displays printable characters at the end of\neach output line.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n\nBYTES is hex with 0x or 0X prefix, and may have a multiplier suffix:\n  b    512\n  KB   1000\n  K    1024\n  MB   1000*1000\n  M    1024*1024\nand so on for G, T, P, E, Z, Y, R, Q.\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC45;
  pcStack_a0 = "test invocation";
  local_98[0] = "coreutils";
  local_98[1] = "Multi-call invocation";
  local_98[2] = "sha224sum";
  local_98[3] = "sha2 utilities";
  local_78 = "sha256sum";
  pcStack_70 = "sha2 utilities";
  local_68 = "sha384sum";
  pcStack_60 = "sha2 utilities";
  local_58 = "sha512sum";
  pcStack_50 = "sha2 utilities";
  local_48 = (undefined1  [16])0x0;
  do {
    if (((*pcVar4 == 'o') && (pcVar4[1] == 'd')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC46;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_001024ec;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC46);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_001024ec:
      iVar2 = strncmp(pcVar4,"en_",3);
      pFVar1 = _stdout;
      if (iVar2 != 0) {
        pcVar4 = (char *)dcgettext(0,
                                   "Report any translation bugs to <https://translationproject.org/team/>\n"
                                   ,5);
        fputs_unlocked(pcVar4,pFVar1);
      }
    }
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = "";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC46);
    if (puVar7 == &_LC46) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00102159:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint main(uint param_1,undefined8 *param_2)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 ******ppppppuVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int *piVar16;
  ulong uVar17;
  uint *puVar18;
  ulong uVar19;
  undefined8 ******ppppppuVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 ******ppppppuVar23;
  char *pcVar24;
  uint *puVar25;
  long lVar26;
  long in_R10;
  uint *puVar27;
  byte bVar28;
  undefined1 *__ptr;
  byte *pbVar29;
  long in_FS_OFFSET;
  undefined8 *****local_88;
  byte local_79;
  undefined8 *****local_78;
  undefined8 *****local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 *****local_60;
  undefined8 *****local_58;
  long local_50;
  long local_40;
  
  __ptr = long_options;
  uVar12 = 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  integral_type_size._32_4_ = 5;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = _LC81;
  integral_type_size._0_16_ = auVar4 << 0x20;
  integral_type_size._20_12_ = SUB1612((undefined1  [16])0x0,4);
  integral_type_size._16_4_ = 3;
  fp_type_size._0_12_ = ZEXT412(6) << 0x40;
  fp_type_size._12_4_ = 0;
  fp_type_size._20_12_ = SUB1612((undefined1  [16])0x0,4);
  fp_type_size._16_4_ = 7;
  fp_type_size._64_4_ = 9;
  fp_type_size._36_12_ = SUB1612((undefined1  [16])0x0,4);
  fp_type_size._32_4_ = 8;
  n_specs = 0;
  n_specs_allocated = 0;
  spec = 0;
  format_address = format_address_std;
  address_base = 8;
  address_pad_len = 7;
  flag_dump_strings = 0;
  local_79 = 0;
  bVar5 = false;
  fp_type_size._48_16_ = (undefined1  [16])0x0;
LAB_00103f60:
  local_68 = 0xffffffff;
  iVar9 = getopt_long(param_1,param_2,"A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx",long_options);
  if (iVar9 != -1) {
    if (0x81 < iVar9) goto switchD_00103fb0_caseD_43;
    if (iVar9 < 0x41) {
LAB_001042a8:
      if (iVar9 == -0x83) {
        uVar15 = proper_name_lite("Jim Meyering","Jim Meyering");
        version_etc(_stdout,&_LC46,"GNU coreutils",_Version,uVar15,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar9 == -0x82) {
        usage(0);
        goto LAB_00104e5f;
      }
      goto switchD_00103fb0_caseD_43;
    }
    if (0x40 < iVar9 - 0x41U) goto switchD_00103fb0_caseD_43;
    switch(iVar9) {
    case 0x41:
      cVar7 = *_optarg;
      if (cVar7 != 'o') {
        if (cVar7 < 'p') {
          if (cVar7 == 'd') {
            address_base = 10;
            address_pad_len = 7;
LAB_00104798:
            format_address = format_address_std;
            bVar5 = true;
            goto LAB_00103f60;
          }
          if (cVar7 == 'n') {
            bVar5 = true;
            format_address = format_address_none;
            address_pad_len = 0;
            goto LAB_00103f60;
          }
        }
        else if (cVar7 == 'x') {
          address_base = 0x10;
          address_pad_len = 6;
          goto LAB_00104798;
        }
        uVar15 = dcgettext(0,
                           "invalid output address radix \'%c\'; it must be one character from [doxn]"
                           ,5);
        error(1,0,uVar15,(int)cVar7);
        goto LAB_00105029;
      }
      address_base = 8;
      format_address = format_address_std;
      address_pad_len = 7;
      break;
    case 0x42:
    case 0x6f:
      uVar10 = decode_format_string(&_LC96);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    default:
      goto switchD_00103fb0_caseD_43;
    case 0x44:
      uVar10 = decode_format_string(&_LC88);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x46:
    case 0x65:
      uVar10 = decode_format_string(&_LC90);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x48:
    case 0x58:
      uVar10 = decode_format_string(&_LC92);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x49:
    case 0x4c:
    case 0x6c:
      uVar10 = decode_format_string(&_LC94);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x4e:
      limit_bytes_to_format = 1;
      iVar9 = xstrtoumax(_optarg,0,0,&max_bytes_to_format,multipliers_6);
      if (iVar9 != 0) {
        iVar9 = xstrtol_fatal(iVar9,local_68,0x4e,long_options);
        goto LAB_001042a8;
      }
      break;
    case 0x4f:
      uVar10 = decode_format_string(&_LC95);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x53:
      if (_optarg == (char *)0x0) {
        ppppppuVar23 = (undefined8 ******)0x3;
      }
      else {
        iVar9 = xstrtoumax(_optarg,0,0,&local_60,multipliers_6);
        if (iVar9 != 0) goto LAB_00104fc5;
        ppppppuVar23 = (undefined8 ******)local_60;
        if ((long)local_60 < 0) {
          uVar15 = quote(_optarg);
          uVar14 = dcgettext(0,"%s is too large",5);
          error(1,0,uVar14,uVar15);
          goto LAB_001050a2;
        }
      }
      flag_dump_strings = 1;
      string_min = ppppppuVar23;
      break;
    case 0x61:
      uVar10 = decode_format_string(&_LC85);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x62:
      uVar10 = decode_format_string(&_LC86);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 99:
      uVar10 = decode_format_string(&_LC87);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 100:
      uVar10 = decode_format_string(&_LC89);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x66:
      uVar10 = decode_format_string(&_LC91);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x68:
    case 0x78:
      uVar10 = decode_format_string(&_LC98);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x69:
      uVar10 = decode_format_string(&_LC93);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x6a:
      iVar9 = xstrtoumax(_optarg,0,0,&n_bytes_to_skip,multipliers_6);
      if (iVar9 != 0) goto LAB_00104fab;
      break;
    case 0x73:
      uVar10 = decode_format_string(&_LC97);
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x74:
      uVar10 = decode_format_string(_optarg);
      bVar5 = true;
      uVar12 = uVar12 & uVar10;
      goto LAB_00103f60;
    case 0x76:
      abbreviate_duplicate_blocks = 0;
      bVar5 = true;
      goto LAB_00103f60;
    case 0x77:
      if (_optarg == (char *)0x0) {
        local_79 = 1;
        bVar5 = true;
        local_78 = (undefined8 ******)0x20;
      }
      else {
        iVar9 = xstrtoimax(_optarg,0,10,&local_60,&_LC16);
        if ((iVar9 != 0) || (local_78 = local_60, (long)local_60 < 1)) {
          iVar9 = xstrtol_fatal(iVar9,local_68,0x77,long_options,_optarg);
LAB_00104fab:
          iVar9 = xstrtol_fatal(iVar9,local_68,0x6a,long_options,_optarg);
LAB_00104fc5:
          xstrtol_fatal(iVar9,local_68,0x53,long_options,_optarg);
LAB_00104fdf:
                    /* WARNING: Subroutine does not return */
          __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x5af,"dump");
        }
        local_79 = 1;
        bVar5 = true;
      }
      goto LAB_00103f60;
    case 0x80:
      traditional = '\x01';
      goto LAB_00103f60;
    case 0x81:
      goto switchD_00103fb0_caseD_81;
    }
    bVar5 = true;
    goto LAB_00103f60;
  }
  if ((char)uVar12 == '\0') {
    uVar12 = 1;
    goto LAB_001048d1;
  }
  if ((flag_dump_strings != 0) &&
     (pcVar24 = "no type may be specified when dumping strings", 0 < n_specs)) goto LAB_00105035;
  lVar26 = (long)_optind;
  param_1 = param_1 - _optind;
  if (bVar5) {
    if (traditional == '\0') goto LAB_001043b0;
    if (param_1 == 2) {
      pcVar24 = (char *)param_2[lVar26 + 1];
      goto LAB_001047d2;
    }
LAB_00104370:
    if (param_1 == 3) {
      if (traditional != '\0') {
        cVar7 = parse_old_offset(param_2[lVar26 + 1],&local_68);
        if ((cVar7 == '\0') ||
           (cVar7 = parse_old_offset(param_2[(long)_optind + 2],&local_60), cVar7 == '\0'))
        goto LAB_0010481f;
        n_bytes_to_skip = (undefined8 ******)CONCAT44(uStack_64,local_68);
        flag_pseudo_start = '\x01';
        param_1 = 1;
        local_70 = local_60;
        param_2[(long)_optind + 2] = param_2[_optind];
        param_2 = param_2 + 2;
      }
    }
    else if (param_1 == 1) {
      if (((traditional != '\0') || (*(char *)param_2[lVar26] == '+')) &&
         (cVar7 = parse_old_offset((char *)param_2[lVar26],&local_68), cVar7 != '\0')) {
        n_bytes_to_skip = (undefined8 ******)CONCAT44(uStack_64,local_68);
        param_2 = param_2 + 1;
        param_1 = 0;
      }
    }
    else {
LAB_0010481f:
      if ((1 < (int)param_1) && (traditional != '\0')) {
        uVar15 = quote(param_2[(long)_optind + 1]);
        uVar14 = dcgettext(0,"extra operand %s",5);
        error(0,0,uVar14,uVar15);
        uVar15 = dcgettext(0,"compatibility mode supports at most one file",5);
        error(0,0,&_LC20,uVar15);
switchD_00103fb0_caseD_43:
        usage(1);
        goto LAB_001048a0;
      }
    }
  }
  else {
    if (param_1 != 2) goto LAB_00104370;
    pcVar24 = (char *)param_2[lVar26 + 1];
    if (((traditional != '\0') || (*pcVar24 == '+')) || ((int)*pcVar24 - 0x30U < 10)) {
LAB_001047d2:
      cVar7 = parse_old_offset(pcVar24,&local_60);
      if (cVar7 != '\0') {
        lVar26 = (long)_optind;
        if (traditional != '\0') {
          cVar7 = parse_old_offset(param_2[lVar26],&local_68);
          if (cVar7 != '\0') {
            n_bytes_to_skip = (undefined8 ******)CONCAT44(uStack_64,local_68);
            flag_pseudo_start = '\x01';
            param_2 = param_2 + 2;
            param_1 = 0;
            local_70 = local_60;
            goto LAB_001043b0;
          }
          lVar26 = (long)_optind;
        }
        param_1 = 1;
        n_bytes_to_skip = (undefined8 ******)local_60;
        param_2[lVar26 + 1] = param_2[lVar26];
        param_2 = param_2 + 1;
        goto LAB_001043b0;
      }
      goto LAB_0010481f;
    }
  }
LAB_001043b0:
  if (flag_pseudo_start != '\0') {
    if (format_address == format_address_none) {
      address_base = 8;
      address_pad_len = 7;
      format_address = format_address_paren;
    }
    else {
      format_address = format_address_label;
    }
  }
  if ((limit_bytes_to_format == 0) ||
     (end_offset = (undefined8 ******)(max_bytes_to_format + (long)n_bytes_to_skip),
     !CARRY8(max_bytes_to_format,(ulong)n_bytes_to_skip))) {
    if (n_specs == 0) goto LAB_00104950;
LAB_0010440d:
    file_list = default_file_list;
    if (0 < (int)param_1) {
      file_list = (undefined1 *)(param_2 + _optind);
    }
    uVar12 = open_next_file();
    param_2 = (undefined8 *)(ulong)uVar12;
    if (in_stream != (FILE *)0x0) {
      uVar10 = skip(n_bytes_to_skip);
      param_2 = (undefined8 *)(ulong)(uVar12 & uVar10);
      if (in_stream == (FILE *)0x0) goto LAB_001048bf;
      pseudo_offset = 0;
      if (flag_pseudo_start != '\0') {
        pseudo_offset = (long)local_70 - (long)n_bytes_to_skip;
      }
      in_R10 = n_specs;
      if (n_specs < 1) {
LAB_00104e5f:
        iVar9 = 1;
        if (local_79 == 0) {
LAB_00104b65:
          ppppppuVar23 = (undefined8 ******)(long)((int)(0x10 / (long)iVar9) * iVar9);
        }
        else {
          iVar9 = 1;
          ppppppuVar23 = (undefined8 ******)local_78;
          ppppppuVar20 = (undefined8 ******)local_78;
joined_r0x00104e7a:
          local_78 = ppppppuVar23;
          if (ppppppuVar20 == (undefined8 ******)0x0) goto LAB_00104e80;
        }
      }
      else {
        iVar9 = 1;
        puVar18 = (uint *)(spec + 4);
        puVar25 = puVar18 + n_specs * 10;
        do {
          uVar12 = *puVar18;
          uVar17 = (long)iVar9;
          uVar19 = (long)*(int *)(width_bytes + (ulong)uVar12 * 4);
          do {
            uVar22 = uVar19;
            uVar19 = uVar17 % uVar22;
            uVar17 = uVar22;
          } while (uVar19 != 0);
          puVar18 = puVar18 + 10;
          iVar9 = (int)((ulong)(long)*(int *)(width_bytes + (ulong)uVar12 * 4) / uVar22) * iVar9;
        } while (puVar25 != puVar18);
        if (local_79 == 0) {
          if (iVar9 < 0x10) goto LAB_00104b65;
          ppppppuVar23 = (undefined8 ******)(long)iVar9;
        }
        else {
          if ((undefined8 ******)local_78 != (undefined8 ******)0x0) {
            ppppppuVar20 = (undefined8 ******)((long)local_78 % (long)iVar9);
            ppppppuVar23 = (undefined8 ******)local_78;
            goto joined_r0x00104e7a;
          }
LAB_00104e80:
          uVar15 = dcgettext(0,"warning: invalid width %td; using %d instead",5);
          error(0,0,uVar15,local_78);
          ppppppuVar23 = (undefined8 ******)(long)iVar9;
          in_R10 = n_specs;
        }
      }
      bytes_per_block = ppppppuVar23;
      if (0 < in_R10) {
        uVar12 = 0;
        puVar18 = (uint *)(spec + 4);
        puVar27 = puVar18 + in_R10 * 10;
        puVar25 = puVar18;
        do {
          uVar10 = (puVar25[6] + 1) *
                   (int)((ulong)ppppppuVar23 /
                        (ulong)(long)*(int *)(width_bytes + (ulong)*puVar25 * 4));
          if (uVar12 < uVar10) {
            uVar12 = uVar10;
          }
          puVar25 = puVar25 + 10;
        } while (puVar27 != puVar25);
        do {
          puVar25 = puVar18 + 10;
          puVar18[7] = uVar12 - (int)((ulong)ppppppuVar23 /
                                     (ulong)(long)*(int *)(width_bytes + (ulong)*puVar18 * 4)) *
                                puVar18[6];
          puVar18 = puVar25;
        } while (puVar25 != puVar27);
      }
      bVar28 = flag_dump_strings;
      local_79 = (byte)param_2;
      if (flag_dump_strings != 0) {
        local_60 = string_min;
        if ((long)string_min < 100) {
          local_60 = (undefined8 ******)0x64;
        }
        __ptr = (undefined1 *)xmalloc();
        param_1 = (uint)bVar28;
        ppppppuVar23 = n_bytes_to_skip;
LAB_001045e5:
        do {
          if ((limit_bytes_to_format != 0) &&
             ((end_offset < string_min ||
              ((undefined8 ******)((long)end_offset - (long)string_min) <= ppppppuVar23)))) {
            uVar10 = (uint)local_79;
            free(__ptr);
            uVar12 = check_and_close(0);
            param_1 = param_1 & uVar12;
            goto LAB_001048b5;
          }
          ppppppuVar20 = (undefined8 ******)0x0;
          lVar26 = (long)ppppppuVar23 + 1;
          if (0 < (long)string_min) {
            do {
              if (in_stream == (FILE *)0x0) goto LAB_00104961;
              uVar12 = (uint)bVar28;
              while (iVar9 = fgetc(in_stream), iVar9 == -1) {
                piVar16 = __errno_location();
                uVar10 = check_and_close(*piVar16);
                uVar11 = open_next_file();
                uVar12 = uVar12 & uVar10 & uVar11;
                if (in_stream == (FILE *)0x0) goto LAB_001048a0;
              }
              param_1 = param_1 & uVar12;
              ppppppuVar23 = (undefined8 ******)(lVar26 + (long)ppppppuVar20);
              if (iVar9 < 0) goto LAB_00104961;
              ppuVar13 = __ctype_b_loc();
              ppppppuVar6 = string_min;
              if ((*(byte *)((long)*ppuVar13 + (long)iVar9 * 2 + 1) & 0x40) == 0) goto LAB_001045e5;
              __ptr[(long)ppppppuVar20] = (byte)iVar9;
              ppppppuVar20 = (undefined8 ******)((long)ppppppuVar20 + 1);
            } while ((long)ppppppuVar20 < (long)ppppppuVar6);
          }
          local_78 = &local_60;
          while ((limit_bytes_to_format == 0 || (ppppppuVar23 < end_offset))) {
            if ((undefined8 ******)local_60 == ppppppuVar20) {
              __ptr = (undefined1 *)xpalloc(__ptr,local_78,1,0xffffffffffffffff);
            }
            if (in_stream == (FILE *)0x0) {
              uVar12 = (uint)bVar28;
LAB_00104b7f:
              uVar10 = (uint)local_79;
              param_1 = param_1 & uVar12;
              goto LAB_001048a9;
            }
            uVar12 = (uint)bVar28;
            while (iVar9 = fgetc(in_stream), iVar9 == -1) {
              piVar16 = __errno_location();
              uVar10 = check_and_close(*piVar16);
              uVar11 = open_next_file();
              uVar12 = uVar12 & uVar10 & uVar11;
              if (in_stream == (FILE *)0x0) goto LAB_00104b7f;
            }
            param_1 = param_1 & uVar12;
            ppppppuVar23 = (undefined8 ******)((long)ppppppuVar23 + 1);
            if (iVar9 < 0) goto LAB_00104961;
            if (iVar9 == 0) break;
            ppuVar13 = __ctype_b_loc();
            if ((*(byte *)((long)*ppuVar13 + (long)iVar9 * 2 + 1) & 0x40) == 0) goto LAB_001045e5;
            __ptr[(long)ppppppuVar20] = (byte)iVar9;
            ppppppuVar20 = (undefined8 ******)((long)ppppppuVar20 + 1);
          }
          __ptr[(long)ppppppuVar20] = 0;
          (*format_address)((long)ppppppuVar23 + (-1 - (long)ppppppuVar20),0x20);
          for (pbVar29 = __ptr; bVar8 = *pbVar29, bVar8 != 0; pbVar29 = pbVar29 + 1) {
            switch(bVar8) {
            case 7:
              fwrite_unlocked(&_LC8,1,2,_stdout);
              break;
            case 8:
              fwrite_unlocked(&_LC9,1,2,_stdout);
              break;
            case 9:
              fwrite_unlocked(&_LC13,1,2,_stdout);
              break;
            case 10:
              fwrite_unlocked(&_LC11,1,2,_stdout);
              break;
            case 0xb:
              fwrite_unlocked(&_LC14,1,2,_stdout);
              break;
            case 0xc:
              fwrite_unlocked(&_LC10,1,2,_stdout);
              break;
            case 0xd:
              fwrite_unlocked(&_LC12,1,2,_stdout);
              break;
            default:
              pbVar3 = (byte *)_stdout->_IO_write_ptr;
              if (pbVar3 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = (char *)(pbVar3 + 1);
                *pbVar3 = bVar8;
              }
              else {
                __overflow(_stdout,(uint)bVar8);
              }
            }
          }
          pcVar24 = _stdout->_IO_write_ptr;
          if (pcVar24 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar24 + 1;
            *pcVar24 = '\n';
          }
          else {
            __overflow(_stdout,10);
          }
        } while( true );
      }
      uVar12 = 0;
      local_78 = (undefined8 *****)xnmalloc(2);
      bVar28 = limit_bytes_to_format;
      local_58 = local_78;
      local_50 = (long)local_78 + (long)bytes_per_block;
      if (limit_bytes_to_format == 0) {
        uVar17 = 0;
        local_88 = n_bytes_to_skip;
        do {
          pppppuVar1 = (&local_58)[(int)uVar17];
          bVar8 = read_block(bytes_per_block,pppppuVar1,&local_60);
          if (local_60 < bytes_per_block) break;
          if ((undefined8 ******)local_60 != bytes_per_block) goto LAB_0010504d;
          uVar12 = uVar12 ^ 1;
          uVar17 = (ulong)uVar12;
          ppppppuVar23 = (undefined8 ******)((long)local_88 + (long)local_60);
          write_block(local_88,local_60,(&local_58)[uVar12],pppppuVar1);
          local_88 = ppppppuVar23;
          if ((_stdout->_flags & 0x20) != 0) {
            bVar8 = 0;
            break;
          }
        } while (bVar8 != 0);
      }
      else {
        uVar12 = 0;
        local_70 = (undefined8 *****)CONCAT71(local_70._1_7_,limit_bytes_to_format);
        ppppppuVar23 = n_bytes_to_skip;
        do {
          local_88 = ppppppuVar23;
          if (end_offset <= ppppppuVar23) goto LAB_00104c2d;
          uVar17 = (ulong)uVar12;
          pppppuVar1 = (&local_58)[uVar12];
          ppppppuVar20 = (undefined8 ******)((long)end_offset - (long)ppppppuVar23);
          if (bytes_per_block < (undefined8 ******)((long)end_offset - (long)ppppppuVar23)) {
            ppppppuVar20 = bytes_per_block;
          }
          bVar8 = read_block(ppppppuVar20,pppppuVar1,&local_60);
          if (local_60 < bytes_per_block) break;
          if ((undefined8 ******)local_60 != bytes_per_block) goto LAB_00104fdf;
          uVar12 = uVar12 ^ 1;
          uVar17 = (ulong)uVar12;
          local_88 = (undefined8 *****)((long)ppppppuVar23 + (long)local_60);
          write_block(ppppppuVar23,local_60,(&local_58)[uVar12],pppppuVar1);
          if ((_stdout->_flags & 0x20) != 0) {
            bVar8 = 0;
            break;
          }
          ppppppuVar23 = (undefined8 ******)local_88;
        } while (bVar8 != 0);
      }
      pppppuVar1 = local_60;
      bVar28 = bVar8;
      if ((undefined8 ******)local_60 != (undefined8 ******)0x0) {
        iVar9 = 1;
        for (lVar26 = 0; uVar19 = (ulong)iVar9, lVar26 < n_specs; lVar26 = lVar26 + 1) {
          uVar22 = (long)*(int *)(width_bytes + (ulong)*(uint *)(spec + 4 + lVar26 * 0x28) * 4);
          do {
            uVar21 = uVar22;
            uVar22 = uVar19 % uVar21;
            uVar19 = uVar21;
          } while (uVar22 != 0);
          iVar9 = iVar9 * (int)((ulong)(long)*(int *)(width_bytes +
                                                     (ulong)*(uint *)(spec + 4 + lVar26 * 0x28) * 4)
                               / uVar21);
        }
        uVar22 = (uVar19 - 1) + (long)local_60;
        pppppuVar2 = (&local_58)[uVar17];
        memset((void *)((long)pppppuVar2 + (long)local_60),0,
               (uVar22 - uVar22 % uVar19) - (long)local_60);
        write_block(local_88,pppppuVar1,(&local_58)[uVar12 ^ 1],pppppuVar2);
        local_88 = (undefined8 ******)((long)local_88 + (long)pppppuVar1);
      }
LAB_00104c2d:
      uVar10 = (uint)local_79;
      (*format_address)(local_88,10);
      if ((limit_bytes_to_format != 0) && (end_offset <= local_88)) {
        bVar8 = check_and_close(0);
        bVar28 = bVar28 & bVar8;
      }
      param_1 = (uint)bVar28;
      free(local_78);
      goto LAB_001048b5;
    }
    goto LAB_001048bf;
  }
LAB_00105029:
  pcVar24 = "skip-bytes + read-bytes is too large";
LAB_00105035:
  uVar15 = dcgettext(0,pcVar24,5);
  error(1,0,uVar15);
LAB_0010504d:
                    /* WARNING: Subroutine does not return */
  __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x5bf,"dump");
switchD_00103fb0_caseD_81:
  lVar26 = __xargmatch_internal
                     ("--endian",_optarg,endian_args,&endian_types,4,_argmatch_die,1,
                      (long)&switchD_00103fb0::switchdataD_00102a7c +
                      (long)(int)(&switchD_00103fb0::switchdataD_00102a7c)[iVar9 - 0x41U]);
  iVar9 = *(int *)((long)&endian_types + lVar26 * 4);
  if (iVar9 == 0) {
    input_swap = 0;
  }
  else if (iVar9 == 1) {
    input_swap = 1;
  }
  goto LAB_00103f60;
LAB_001048a0:
  uVar10 = (uint)local_79;
  param_1 = param_1 & uVar12;
  goto LAB_001048a9;
LAB_00104961:
  uVar10 = (uint)local_79;
LAB_001048a9:
  free(__ptr);
LAB_001048b5:
  param_1 = param_1 & uVar10;
  param_2 = (undefined8 *)(ulong)(param_1 & 1);
LAB_001048bf:
  if ((have_read_stdin == '\0') || (iVar9 = rpl_fclose(_stdin), iVar9 != -1)) goto LAB_001048c8;
  uVar15 = dcgettext(0,"standard input",5);
  piVar16 = __errno_location();
  error(1,*piVar16,uVar15);
LAB_00104950:
  decode_format_string(&_LC104);
  goto LAB_0010440d;
LAB_001048c8:
  uVar12 = ((uint)param_2 ^ 1) & 0xff;
LAB_001048d1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar12;
  }
LAB_001050a2:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


