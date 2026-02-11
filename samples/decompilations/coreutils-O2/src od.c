
void format_address_none(void)

{
  return;
}



int get_lcm(void)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  uint *puVar7;
  
  if (n_specs < 1) {
    iVar6 = 1;
  }
  else {
    iVar6 = 1;
    puVar7 = (uint *)(spec + 4);
    puVar1 = puVar7 + n_specs * 10;
    do {
      uVar2 = *puVar7;
      uVar3 = (long)iVar6;
      uVar5 = (long)*(int *)(width_bytes + (ulong)uVar2 * 4);
      do {
        uVar4 = uVar5;
        uVar5 = uVar3 % uVar4;
        uVar3 = uVar4;
      } while (uVar5 != 0);
      puVar7 = puVar7 + 10;
      iVar6 = iVar6 * (int)((ulong)(long)*(int *)(width_bytes + (ulong)uVar2 * 4) / uVar4);
    } while (puVar1 != puVar7);
  }
  return iVar6;
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



void print_long_long(ulong param_1,ulong param_2,long *param_3,undefined8 param_4,int param_5,
                    int param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long in_FS_OFFSET;
  long local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar7 = (long)param_6 * (param_1 - 1);
    uVar8 = param_1;
    iVar9 = param_6;
    do {
      uVar8 = uVar8 - 1;
      iVar2 = (int)(uVar7 / param_1);
      if (input_swap == '\0') {
        lVar4 = *param_3;
      }
      else {
        puVar3 = (undefined1 *)((long)param_3 + 7);
        plVar5 = &local_48;
        do {
          uVar1 = *puVar3;
          plVar6 = (long *)((long)plVar5 + 1);
          puVar3 = puVar3 + -1;
          *(undefined1 *)plVar5 = uVar1;
          lVar4 = local_48;
          plVar5 = plVar6;
        } while (local_40 != plVar6);
      }
      param_3 = param_3 + 1;
      xprintf(param_4,(iVar9 - iVar2) + param_5,lVar4);
      uVar7 = uVar7 - (long)param_6;
      iVar9 = iVar2;
    } while (param_2 < uVar8);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void print_long(ulong param_1,ulong param_2,long *param_3,undefined8 param_4,int param_5,int param_6
               )

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  long in_FS_OFFSET;
  long local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar7 = (long)param_6 * (param_1 - 1);
    uVar8 = param_1;
    iVar9 = param_6;
    do {
      uVar8 = uVar8 - 1;
      iVar2 = (int)(uVar7 / param_1);
      if (input_swap == '\0') {
        lVar4 = *param_3;
      }
      else {
        puVar3 = (undefined1 *)((long)param_3 + 7);
        plVar5 = &local_48;
        do {
          uVar1 = *puVar3;
          plVar6 = (long *)((long)plVar5 + 1);
          puVar3 = puVar3 + -1;
          *(undefined1 *)plVar5 = uVar1;
          lVar4 = local_48;
          plVar5 = plVar6;
        } while (local_40 != plVar6);
      }
      param_3 = param_3 + 1;
      xprintf(param_4,(iVar9 - iVar2) + param_5,lVar4);
      uVar7 = uVar7 - (long)param_6;
      iVar9 = iVar2;
    } while (param_2 < uVar8);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void print_int(ulong param_1,ulong param_2,undefined4 *param_3,undefined8 param_4,int param_5,
              int param_6)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar4 = param_1;
    iVar5 = param_6;
    do {
      uVar4 = uVar4 - 1;
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
      xprintf(param_4,(iVar5 - iVar1) + param_5,uVar3);
      iVar5 = iVar1;
    } while (param_2 < uVar4);
  }
  return;
}



void print_short(ulong param_1,ulong param_2,undefined2 *param_3,undefined8 param_4,int param_5,
                int param_6)

{
  int iVar1;
  ulong uVar2;
  undefined2 uVar3;
  ulong uVar4;
  int iVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar4 = param_1;
    iVar5 = param_6;
    do {
      uVar4 = uVar4 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        uVar3 = *param_3;
      }
      else {
        uVar3 = CONCAT11(*(undefined1 *)param_3,*(undefined1 *)((long)param_3 + 1));
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - (long)param_6;
      xprintf(param_4,(iVar5 - iVar1) + param_5,uVar3);
      iVar5 = iVar1;
    } while (param_2 < uVar4);
  }
  return;
}



void print_s_short(ulong param_1,ulong param_2,short *param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  ulong uVar2;
  short sVar3;
  ulong uVar4;
  int iVar5;
  
  if (param_2 < param_1) {
    uVar2 = (param_1 - 1) * (long)param_6;
    uVar4 = param_1;
    iVar5 = param_6;
    do {
      uVar4 = uVar4 - 1;
      iVar1 = (int)(uVar2 / param_1);
      if (input_swap == '\0') {
        sVar3 = *param_3;
      }
      else {
        sVar3 = CONCAT11((char)*param_3,*(undefined1 *)((long)param_3 + 1));
      }
      param_3 = param_3 + 1;
      uVar2 = uVar2 - (long)param_6;
      xprintf(param_4,(iVar5 - iVar1) + param_5,(int)sVar3);
      iVar5 = iVar1;
    } while (param_2 < uVar4);
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



void print_long_double(ulong param_1,ulong param_2,long param_3,undefined8 param_4,int param_5,
                      int param_6)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined1 local_88 [16];
  undefined1 local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar3 = (long)param_6 * (param_1 - 1);
    uVar7 = param_1;
    iVar8 = param_6;
    do {
      uVar7 = uVar7 - 1;
      iVar2 = (int)(uVar3 / param_1);
      if (input_swap != '\0') {
        puVar6 = (undefined1 *)(param_3 + 0xf);
        puVar4 = local_88;
        do {
          uVar1 = *puVar6;
          puVar5 = puVar4 + 1;
          puVar6 = puVar6 + -1;
          *puVar4 = uVar1;
          puVar4 = puVar5;
        } while (local_78 != puVar5);
      }
      param_3 = param_3 + 0x10;
      ldtoastr(local_78,0x2d,0,0);
      xprintf(&_LC3,(iVar8 - iVar2) + param_5,local_78);
      uVar3 = uVar3 - (long)param_6;
      iVar8 = iVar2;
    } while (param_2 < uVar7);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void print_double(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,int param_5,
                 int param_6)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  undefined8 local_70;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar3 = (long)param_6 * (param_1 - 1);
    uVar7 = param_1;
    iVar8 = param_6;
    do {
      uVar7 = uVar7 - 1;
      iVar2 = (int)(uVar3 / param_1);
      if (input_swap == '\0') {
        uVar9 = *param_3;
      }
      else {
        puVar6 = (undefined1 *)((long)param_3 + 7);
        puVar4 = &local_70;
        do {
          uVar1 = *puVar6;
          puVar5 = (undefined8 *)((long)puVar4 + 1);
          puVar6 = puVar6 + -1;
          *(undefined1 *)puVar4 = uVar1;
          puVar4 = puVar5;
          uVar9 = local_70;
        } while (local_68 != puVar5);
      }
      dtoastr(uVar9,local_68,0x28,0,0);
      param_3 = param_3 + 1;
      xprintf(&_LC3,(iVar8 - iVar2) + param_5,local_68);
      uVar3 = uVar3 - (long)param_6;
      iVar8 = iVar2;
    } while (param_2 < uVar7);
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
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < param_1) {
    uVar2 = (long)param_6 * (param_1 - 1);
    uVar3 = param_1;
    iVar4 = param_6;
    do {
      uVar3 = uVar3 - 1;
      iVar1 = (int)(uVar2 / param_1);
      ftoastr(local_68,0x1f,0,0);
      xprintf(&_LC3,(iVar4 - iVar1) + param_5,local_68);
      uVar2 = uVar2 - (long)param_6;
      iVar4 = iVar1;
    } while (param_2 < uVar3);
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
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  ulong uVar5;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < param_2) {
    uVar2 = (long)param_7 * (param_2 - 1);
    uVar3 = param_2;
    iVar4 = param_7;
    do {
      uVar3 = uVar3 - 1;
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
      param_1 = xprintf(&_LC3,(iVar4 - iVar1) + param_6,local_68);
      uVar2 = uVar2 - (long)param_7;
      iVar4 = iVar1;
    } while (param_3 < uVar3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void print_bfloat(ulong param_1,ulong param_2,ulong param_3,ushort *param_4,undefined8 param_5,
                 int param_6,int param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  ulong uVar5;
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 < param_2) {
    uVar2 = (long)param_7 * (param_2 - 1);
    uVar3 = param_2;
    iVar4 = param_7;
    do {
      uVar3 = uVar3 - 1;
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
      param_1 = xprintf(&_LC3,(iVar4 - iVar1) + param_6,local_68);
      uVar2 = uVar2 - (long)param_7;
      iVar4 = iVar1;
    } while (param_3 < uVar3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  ushort **ppuVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  
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
    lVar10 = 0;
    do {
      uVar6 = (ulong)*(int *)(width_bytes + (ulong)*(uint *)(spec + 4 + lVar10 * 0x28) * 4);
      uVar8 = bytes_per_block - param_2;
      iVar4 = (int)(bytes_per_block / uVar6);
      if (lVar10 == 0) {
        (*format_address)(param_1,0,uVar8 % uVar6);
      }
      else {
        __printf_chk(2,&_LC3,address_pad_len,&_LC16);
      }
      iVar7 = (int)(uVar8 / uVar6);
      lVar12 = spec + lVar10 * 0x28;
      (**(code **)(lVar12 + 8))
                ((long)iVar4,(long)iVar7,param_4,lVar12 + 0x10,*(undefined4 *)(lVar12 + 0x1c),
                 *(undefined4 *)(lVar12 + 0x20));
      lVar12 = lVar10 * 0x28 + spec;
      if (*(char *)(lVar12 + 0x1a) != '\0') {
        __printf_chk(2,&_LC3,(*(int *)(lVar12 + 0x20) * iVar7) / iVar4 +
                             iVar7 * *(int *)(lVar12 + 0x1c),&_LC16);
        fwrite_unlocked(&_LC17,1,3,_stdout);
        if (param_2 != 0) {
          ppuVar5 = __ctype_b_loc();
          pbVar9 = param_4;
          do {
            bVar3 = *pbVar9;
            pbVar9 = pbVar9 + 1;
            uVar11 = (uint)bVar3;
            if ((*(byte *)((long)*ppuVar5 + (ulong)bVar3 * 2 + 1) & 0x40) == 0) {
              uVar11 = 0x2e;
              bVar3 = 0x2e;
            }
            pbVar2 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar2 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
              *pbVar2 = bVar3;
            }
            else {
              __overflow(_stdout,uVar11);
            }
          } while (pbVar9 != param_4 + param_2);
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
      pcVar1 = _stdout->_IO_write_ptr;
      if (pcVar1 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = pcVar1 + 1;
        *pcVar1 = '\n';
      }
      else {
        __overflow(_stdout,10);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < n_specs);
  }
  first_1 = 0;
  return;
}



undefined8 decode_format_string(char *param_1)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  lconv *plVar9;
  size_t sVar10;
  long lVar11;
  byte bVar12;
  code *pcVar13;
  char *pcVar14;
  char *pcVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  undefined *puVar19;
  uint uVar20;
  uint local_3c;
  
  if (*param_1 == '\0') {
    return 1;
  }
  pcVar17 = param_1;
  if (n_specs_allocated <= n_specs) goto LAB_0010146b;
  do {
    cVar3 = *pcVar17;
    piVar2 = (int *)(spec + n_specs * 0x28);
    if (cVar3 == 'a') {
      pcVar15 = pcVar17 + 1;
      iVar18 = 3;
      iVar16 = 7;
      uVar20 = 1;
      pcVar13 = print_named_ascii;
    }
    else {
      bVar12 = cVar3 + 0x9d;
      if (0x15 < bVar12) {
LAB_001019b5:
        uVar7 = quote(param_1);
        cVar3 = *pcVar17;
        uVar8 = dcgettext(0,"invalid character \'%c\' in type string %s",5);
        error(0,0,uVar8,(int)cVar3,uVar7);
        return 0;
      }
      uVar6 = 1L << (bVar12 & 0x3f);
      if ((uVar6 & 0x241002) == 0) {
        if ((uVar6 & 1) == 0) {
          if (bVar12 != 3) goto LAB_001019b5;
          uVar20 = fp_type_size._32_4_;
          switch(pcVar17[1]) {
          case 'B':
            pcVar15 = pcVar17 + 2;
            iVar16 = 6;
            uVar20 = fp_type_size._8_4_;
            break;
          default:
            pcVar15 = pcVar17 + 1;
            local_3c = (int)pcVar17[1] - 0x30;
            pcVar14 = pcVar15;
            if (local_3c < 10) {
              while( true ) {
                pcVar1 = pcVar14 + 1;
                pcVar14 = pcVar14 + 1;
                uVar5 = (int)*pcVar1 - 0x30;
                if (9 < uVar5) break;
                iVar18 = (int)((long)(int)local_3c * 10);
                if (((long)iVar18 != (long)(int)local_3c * 10) ||
                   (local_3c = uVar5 + iVar18, SCARRY4(uVar5,iVar18))) {
LAB_0010136c:
                  uVar7 = quote(param_1);
                  uVar8 = dcgettext(0,"invalid type string %s",5);
                  error(0,0,uVar8,uVar7);
                  return 0;
                }
              }
              if (pcVar15 == pcVar14) {
                iVar16 = 4;
                pcVar15 = pcVar14;
              }
              else {
                if ((0x10 < local_3c) || (*(uint *)(fp_type_size + (long)(int)local_3c * 4) == 0)) {
                  uVar7 = quote(param_1);
                  pcVar17 = 
                  "invalid type string %s;\nthis system doesn\'t provide a %d-byte floating point type"
                  ;
                  goto LAB_0010196b;
                }
                iVar16 = 4;
                pcVar15 = pcVar14;
                uVar20 = *(uint *)(fp_type_size + (long)(int)local_3c * 4);
              }
            }
            else {
              iVar16 = 4;
            }
            break;
          case 'D':
            pcVar15 = pcVar17 + 2;
            iVar16 = 4;
            break;
          case 'F':
            pcVar15 = pcVar17 + 2;
            iVar16 = 4;
            uVar20 = fp_type_size._16_4_;
            break;
          case 'H':
            pcVar15 = pcVar17 + 2;
            iVar16 = 5;
            uVar20 = fp_type_size._8_4_;
            break;
          case 'L':
            pcVar15 = pcVar17 + 2;
            iVar16 = 4;
            uVar20 = fp_type_size._64_4_;
          }
          plVar9 = localeconv();
          iVar18 = 1;
          if (*plVar9->decimal_point != '\0') {
            sVar10 = strlen(plVar9->decimal_point);
            iVar18 = (int)sVar10;
          }
          if (uVar20 == 8) {
            iVar18 = iVar18 + 0x17;
            pcVar13 = print_double;
          }
          else if (uVar20 < 9) {
            if (uVar20 == 6) {
              pcVar13 = print_halffloat;
              if (iVar16 == 6) {
                pcVar13 = print_bfloat;
              }
              iVar18 = iVar18 + 0xe;
            }
            else {
              if (uVar20 != 7) goto LAB_001019f3;
              iVar18 = iVar18 + 0xe;
              pcVar13 = print_float;
            }
          }
          else {
            if (uVar20 != 9) {
LAB_001019f3:
                    /* WARNING: Subroutine does not return */
              __assert_fail("0","src/od.c",0x38a,"decode_one_format");
            }
            iVar18 = iVar18 + 0x1c;
            pcVar13 = print_long_double;
          }
        }
        else {
          pcVar15 = pcVar17 + 1;
          iVar18 = 3;
          iVar16 = 8;
          uVar20 = 1;
          pcVar13 = print_ascii;
        }
        goto LAB_00101410;
      }
      cVar4 = pcVar17[1];
      if (cVar4 == 'L') {
        pcVar15 = pcVar17 + 2;
        lVar11 = 8;
        uVar20 = integral_type_size._32_4_;
LAB_0010157d:
        if (cVar3 == 'u') goto LAB_001016bf;
LAB_00101586:
        if (cVar3 < 'v') {
          if (cVar3 == 'd') {
            puVar19 = &_LC18;
            iVar18 = (int)(char)bytes_to_signed_dec_digits[lVar11];
            if ((uVar20 != 5) && (puVar19 = &_LC20, uVar20 == 4)) {
              puVar19 = &_LC19;
            }
            iVar16 = 0;
            __sprintf_chk(piVar2 + 4,2,10,"%%*%s",puVar19);
          }
          else {
            puVar19 = &_LC21;
            if ((uVar20 != 5) && (puVar19 = &_LC23, uVar20 == 4)) {
              puVar19 = &_LC22;
            }
            iVar18 = (int)(char)bytes_to_oct_digits[lVar11];
            iVar16 = 2;
            __sprintf_chk(piVar2 + 4,2,10,"%%*.%d%s",iVar18,puVar19);
          }
        }
        else {
          puVar19 = &_LC27;
          if ((uVar20 != 5) && (puVar19 = &_LC29, uVar20 == 4)) {
            puVar19 = &_LC28;
          }
          iVar18 = (int)(char)bytes_to_hex_digits[lVar11];
          iVar16 = 3;
          __sprintf_chk(piVar2 + 4,2,10,"%%*.%d%s",iVar18,puVar19);
        }
      }
      else {
        uVar20 = integral_type_size._16_4_;
        if (cVar4 < 'M') {
          if (cVar4 == 'C') {
            pcVar15 = pcVar17 + 2;
            lVar11 = 1;
            uVar20 = integral_type_size._4_4_;
          }
          else {
            if (cVar4 != 'I') {
              local_3c = (int)cVar4 - 0x30;
              pcVar15 = pcVar17 + 1;
              if (local_3c < 10) {
                pcVar15 = pcVar17 + 2;
                cVar4 = pcVar17[2];
                while (uVar5 = (int)cVar4 - 0x30, uVar5 < 10) {
                  iVar18 = (int)((long)(int)local_3c * 10);
                  if (((long)iVar18 != (long)(int)local_3c * 10) ||
                     (local_3c = uVar5 + iVar18, SCARRY4(uVar5,iVar18))) goto LAB_0010136c;
                  pcVar14 = pcVar15 + 1;
                  pcVar15 = pcVar15 + 1;
                  cVar4 = *pcVar14;
                }
                if (pcVar17 + 1 != pcVar15) {
                  if (local_3c < 9) {
                    lVar11 = (long)(int)local_3c;
                    uVar20 = *(uint *)(integral_type_size + lVar11 * 4);
                    if (*(uint *)(integral_type_size + lVar11 * 4) != 0) goto LAB_0010157d;
                  }
                  uVar7 = quote(param_1);
                  pcVar17 = 
                  "invalid type string %s;\nthis system doesn\'t provide a %d-byte integral type";
LAB_0010196b:
                  uVar8 = dcgettext(0,pcVar17,5);
                  error(0,0,uVar8,uVar7,local_3c);
                  return 0;
                }
              }
              goto LAB_001018c8;
            }
            pcVar15 = pcVar17 + 2;
            lVar11 = 4;
          }
          goto LAB_0010157d;
        }
        pcVar15 = pcVar17 + 1;
        if (cVar4 != 'S') {
LAB_001018c8:
          lVar11 = 4;
          goto LAB_0010157d;
        }
        pcVar15 = pcVar17 + 2;
        lVar11 = 2;
        uVar20 = integral_type_size._8_4_;
        if (cVar3 != 'u') goto LAB_00101586;
LAB_001016bf:
        puVar19 = &_LC24;
        iVar18 = (int)(char)bytes_to_unsigned_dec_digits[lVar11];
        if ((uVar20 != 5) && (puVar19 = &_LC26, uVar20 == 4)) {
          puVar19 = &_LC25;
        }
        iVar16 = 1;
        __sprintf_chk(piVar2 + 4,2,10,"%%*%s",puVar19);
      }
      switch(uVar20) {
      default:
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","src/od.c",800,"decode_one_format");
      case 1:
        pcVar13 = print_char;
        if (iVar16 == 0) {
          pcVar13 = print_s_char;
        }
        break;
      case 2:
        pcVar13 = print_short;
        if (iVar16 == 0) {
          pcVar13 = print_s_short;
        }
        break;
      case 3:
        pcVar13 = print_int;
        break;
      case 4:
        pcVar13 = print_long;
        break;
      case 5:
        pcVar13 = print_long_long;
      }
    }
LAB_00101410:
    piVar2[1] = uVar20;
    *piVar2 = iVar16;
    *(code **)(piVar2 + 2) = pcVar13;
    piVar2[7] = iVar18;
    cVar3 = *pcVar15;
    *(bool *)((long)piVar2 + 0x1a) = cVar3 == 'z';
    pcVar15 = pcVar15 + (cVar3 == 'z');
    if (pcVar15 == pcVar17) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("s != next","src/od.c",0x418,"decode_format_string");
    }
    n_specs = n_specs + 1;
    if (*pcVar15 == '\0') {
      return 1;
    }
    pcVar17 = pcVar15;
    if (n_specs_allocated <= n_specs) {
LAB_0010146b:
      spec = xpalloc(spec,&n_specs_allocated,1,0xffffffffffffffff,0x28);
    }
  } while( true );
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
      error(0,*piVar1,&_LC41);
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
  if (in_stream == (FILE *)0x0) goto LAB_00101bbc;
  uVar4 = in_stream->_flags & 0x20;
  if (uVar4 != 0) {
    uVar4 = param_1;
  }
  if ((**(char **)(file_list + -8) == '-') && ((*(char **)(file_list + -8))[1] == '\0')) {
    clearerr_unlocked(in_stream);
LAB_00101ba8:
    if (uVar4 != 0) goto LAB_00101c0b;
    uVar3 = 1;
  }
  else {
    iVar1 = rpl_fclose();
    if (iVar1 == 0) goto LAB_00101ba8;
    if (uVar4 == 0) {
      puVar2 = (uint *)__errno_location();
      uVar4 = *puVar2;
      goto LAB_00101ba8;
    }
LAB_00101c0b:
    uVar3 = quotearg_n_style_colon(0,3,input_filename);
    error(0,uVar4,&_LC41,uVar3);
    uVar3 = 0;
  }
  in_stream = (FILE *)0x0;
LAB_00101bbc:
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



uint read_char(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = 1;
  *param_1 = -1;
  while( true ) {
    if (in_stream == (FILE *)0x0) {
      return uVar5;
    }
    iVar3 = fgetc(in_stream);
    *param_1 = iVar3;
    if (iVar3 != -1) break;
    piVar4 = __errno_location();
    uVar1 = check_and_close(*piVar4);
    uVar2 = open_next_file();
    uVar5 = uVar5 & uVar1 & uVar2;
  }
  return uVar5;
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
LAB_00101eb1:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar10;
  }
  uVar10 = 1;
  if (in_stream != (FILE *)0x0) goto LAB_00101e1d;
LAB_00101f16:
  uVar7 = dcgettext(0,"cannot skip past end of combined input",5);
  error(1,0,uVar7);
LAB_00101f3a:
  uVar10 = 0;
  uVar7 = quotearg_n_style_colon(0,3,input_filename);
  piVar8 = __errno_location();
  error(0,*piVar8,&_LC41,uVar7);
LAB_00101dfb:
  uVar2 = check_and_close();
  uVar3 = open_next_file();
  uVar10 = uVar10 & uVar2 & uVar3;
  if (in_stream == (FILE *)0x0) {
    if (param_1 == 0) goto LAB_00101eb1;
    goto LAB_00101f16;
  }
LAB_00101e1d:
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
LAB_00101f04:
            uVar10 = 0;
          }
          goto LAB_00101eb1;
        }
        param_1 = param_1 - sStack_20d8.st_size;
        goto LAB_00101dfb;
      }
    }
    else {
      iVar4 = rpl_fseeko(pFVar1,param_1,1);
      if (iVar4 == 0) goto LAB_00101eb1;
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
          if ((in_stream->_flags & 0x20U) != 0) goto LAB_00101f04;
          if ((in_stream->_flags & 0x10U) != 0) goto LAB_00101ee0;
        }
        if (param_1 == 0) break;
      } while( true );
    }
    goto LAB_00101eb1;
  }
  goto LAB_00101f3a;
LAB_00101ee0:
  if (param_1 == 0) goto LAB_00101eb1;
  goto LAB_00101dfb;
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



void format_address_label(long param_1,char param_2)

{
  format_address_std(param_1,0x20);
  format_address_paren(param_1 + pseudo_offset,(int)param_2);
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
    goto LAB_00102099;
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
    if (pcVar4 != (char *)0x0) goto LAB_0010242c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC46);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010242c:
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
LAB_00102099:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Removing unreachable block (ram,0x001046f3) */
/* WARNING: Removing unreachable block (ram,0x001043ce) */
/* WARNING: Removing unreachable block (ram,0x001043dd) */
/* WARNING: Removing unreachable block (ram,0x001043f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(int param_1,undefined8 *param_2)

{
  void *pvVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  byte *__ptr;
  ushort **ppuVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined *puVar16;
  uint *puVar17;
  char *pcVar18;
  uint *puVar19;
  byte bVar20;
  uint *puVar21;
  byte *pbVar22;
  ulong uVar23;
  uint *puVar24;
  long in_FS_OFFSET;
  uint **local_88;
  void *local_78;
  uint *local_70;
  int local_68;
  undefined4 uStack_64;
  uint *local_60;
  void *local_58;
  long local_50;
  long local_40;
  
  puVar17 = (uint *)0x1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar16 = &DAT_001029bc;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  integral_type_size._32_4_ = 5;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = _LC81;
  integral_type_size._0_16_ = auVar3 << 0x20;
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
  address_base = 8;
  address_pad_len = 7;
  flag_dump_strings = 0;
  bVar4 = false;
  fp_type_size._48_16_ = (undefined1  [16])0x0;
  do {
    format_address = format_address_std;
    cVar6 = ' ';
    local_68 = -1;
    iVar7 = getopt_long(param_1,param_2,"A:aBbcDdeFfHhIij:LlN:OoS:st:vw::Xx");
    if (iVar7 == -1) {
      if ((flag_dump_strings != 0) &&
         (pcVar18 = "no type may be specified when dumping strings", 0 < n_specs))
      goto LAB_00104dd9;
      lVar11 = (long)_optind;
      param_1 = param_1 - _optind;
      if (bVar4) {
        if (traditional == '\0') goto LAB_001042f0;
        if (param_1 == 2) {
          pcVar18 = (char *)param_2[lVar11 + 1];
          goto LAB_0010460d;
        }
LAB_001042b0:
        if (param_1 == 3) {
          if (traditional != '\0') {
            cVar6 = parse_old_offset(param_2[lVar11 + 1],&local_68);
            if ((cVar6 == '\0') ||
               (cVar6 = parse_old_offset(param_2[(long)_optind + 2],&local_60), cVar6 == '\0'))
            goto LAB_0010465a;
            n_bytes_to_skip = (uint *)CONCAT44(uStack_64,local_68);
            flag_pseudo_start = '\x01';
            param_1 = 1;
            local_70 = local_60;
            param_2[(long)_optind + 2] = param_2[_optind];
            param_2 = param_2 + 2;
          }
        }
        else if (param_1 == 1) {
          if (((traditional != '\0') || (*(char *)param_2[lVar11] == '+')) &&
             (cVar6 = parse_old_offset((char *)param_2[lVar11],&local_68), cVar6 != '\0')) {
            n_bytes_to_skip = (uint *)CONCAT44(uStack_64,local_68);
            param_2 = param_2 + 1;
            param_1 = 0;
          }
        }
        else {
LAB_0010465a:
          if ((traditional != '\0') && (1 < param_1)) {
            puVar16 = (undefined *)quote(param_2[(long)_optind + 1]);
            uVar14 = dcgettext(0,"extra operand %s",5);
            error(0,0,uVar14,puVar16);
            cVar6 = dcgettext(0,"compatibility mode supports at most one file",5);
            error(0,0,&_LC41);
            goto LAB_001046d1;
          }
        }
      }
      else {
        if (param_1 != 2) goto LAB_001042b0;
        pcVar18 = (char *)param_2[lVar11 + 1];
        if (((traditional != '\0') || (*pcVar18 == '+')) || ((int)*pcVar18 - 0x30U < 10)) {
LAB_0010460d:
          cVar6 = parse_old_offset(pcVar18,&local_60);
          if (cVar6 != '\0') {
            lVar11 = (long)_optind;
            if (traditional != '\0') {
              cVar6 = parse_old_offset(param_2[lVar11],&local_68);
              if (cVar6 != '\0') {
                n_bytes_to_skip = (uint *)CONCAT44(uStack_64,local_68);
                flag_pseudo_start = '\x01';
                param_2 = param_2 + 2;
                param_1 = 0;
                local_70 = local_60;
                goto LAB_001042f0;
              }
              lVar11 = (long)_optind;
            }
            param_1 = 1;
            n_bytes_to_skip = local_60;
            param_2[lVar11 + 1] = param_2[lVar11];
            param_2 = param_2 + 1;
            goto LAB_001042f0;
          }
          goto LAB_0010465a;
        }
      }
LAB_001042f0:
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
      if ((limit_bytes_to_format != 0) &&
         (end_offset = (uint *)(max_bytes_to_format + (long)n_bytes_to_skip),
         CARRY8(max_bytes_to_format,(ulong)n_bytes_to_skip))) {
        pcVar18 = "skip-bytes + read-bytes is too large";
LAB_00104dd9:
        uVar14 = dcgettext(0,pcVar18,5);
        error(1,0,uVar14);
LAB_00104df1:
                    /* WARNING: Subroutine does not return */
        __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x5bf,"dump");
      }
      if (n_specs == 0) {
        decode_format_string(&_LC104);
      }
      file_list = default_file_list;
      if (0 < param_1) {
        file_list = (undefined1 *)(param_2 + _optind);
      }
      uVar8 = open_next_file();
      if (in_stream == 0) goto LAB_0010456a;
      uVar15 = skip(n_bytes_to_skip);
      uVar8 = uVar8 & uVar15;
      param_2 = (undefined8 *)(ulong)uVar8;
      if (in_stream == 0) goto LAB_0010456a;
      pseudo_offset = 0;
      if (flag_pseudo_start != '\0') {
        pseudo_offset = (long)local_70 - (long)n_bytes_to_skip;
      }
      iVar7 = get_lcm();
      if (iVar7 < 0x10) {
        puVar17 = (uint *)(long)((int)(0x10 / (long)iVar7) * iVar7);
      }
      else {
        puVar17 = (uint *)(long)iVar7;
      }
      goto LAB_001043f5;
    }
    if (iVar7 < 0x82) {
      if (iVar7 < 0x41) {
        if (iVar7 == -0x83) {
          uVar14 = proper_name_lite("Jim Meyering","Jim Meyering");
          version_etc(_stdout,&_LC46,"GNU coreutils",_Version,uVar14,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar7 == -0x82) {
          usage(0);
          goto LAB_00104c02;
        }
      }
      else if (iVar7 - 0x41U < 0x41) {
                    /* WARNING: Could not recover jumptable at 0x00103ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (*(code *)(puVar16 + *(int *)(puVar16 + (ulong)(iVar7 - 0x41U) * 4)))();
        return uVar10;
      }
    }
LAB_001046d1:
    usage(1);
    if (cVar6 != 'x') break;
    address_base = 0x10;
    address_pad_len = 6;
    bVar4 = true;
  } while( true );
  uVar14 = dcgettext(0,"invalid output address radix \'%c\'; it must be one character from [doxn]",5
                    );
  uVar9 = error(1,0,uVar14,(int)cVar6);
  xstrtol_fatal(uVar9,local_68,0x53,long_options,_optarg);
  uVar14 = dcgettext(0,"warning: invalid width %td; using %d instead",5);
  error(0,0,uVar14,local_78);
LAB_001043f5:
  bVar20 = (byte)param_2;
  bytes_per_block = puVar17;
  if (0 < n_specs) {
    uVar8 = 0;
    puVar24 = (uint *)(spec + 4);
    puVar21 = puVar24 + n_specs * 10;
    puVar19 = puVar24;
    do {
      uVar15 = (puVar19[6] + 1) *
               (int)((ulong)puVar17 / (ulong)(long)*(int *)(width_bytes + (ulong)*puVar19 * 4));
      if (uVar8 < uVar15) {
        uVar8 = uVar15;
      }
      puVar19 = puVar19 + 10;
    } while (puVar21 != puVar19);
    do {
      puVar19 = puVar24 + 10;
      puVar24[7] = uVar8 - (int)((ulong)puVar17 /
                                (ulong)(long)*(int *)(width_bytes + (ulong)*puVar24 * 4)) *
                           puVar24[6];
      puVar24 = puVar19;
    } while (puVar19 != puVar21);
  }
  puVar16 = (undefined *)(ulong)flag_dump_strings;
  if (flag_dump_strings == 0) goto LAB_0010474f;
  local_60 = string_min;
  if ((long)string_min < 100) {
    local_60 = (uint *)0x64;
  }
  __ptr = (byte *)xmalloc();
  puVar17 = n_bytes_to_skip;
  puVar24 = n_bytes_to_skip;
LAB_001044cc:
  do {
    if ((limit_bytes_to_format != 0) &&
       ((end_offset < string_min || ((uint *)((long)end_offset - (long)string_min) <= puVar24)))) {
      param_2 = (undefined8 *)((ulong)param_2 & 0xff);
      free(__ptr);
      uVar8 = check_and_close(0);
      puVar16 = (undefined *)(ulong)((uint)puVar16 & uVar8);
      goto LAB_0010455d;
    }
    puVar21 = (uint *)0x0;
    if (0 < (long)string_min) {
      puVar17 = (uint *)((long)puVar24 + 1);
      do {
        puVar24 = (uint *)((long)puVar17 + (long)puVar21);
        uVar8 = read_char(&local_68);
        iVar7 = local_68;
        puVar16 = (undefined *)(ulong)((uint)puVar16 & uVar8);
        if (local_68 < 0) goto LAB_0010454f;
        ppuVar12 = __ctype_b_loc();
        puVar19 = string_min;
        if ((*(byte *)((long)*ppuVar12 + (long)iVar7 * 2 + 1) & 0x40) == 0) goto LAB_001044cc;
        __ptr[(long)puVar21] = (byte)iVar7;
        puVar21 = (uint *)((long)puVar21 + 1);
      } while ((long)puVar21 < (long)puVar19);
    }
    puVar17 = puVar21;
    while ((limit_bytes_to_format == 0 || (puVar24 < end_offset))) {
      if (local_60 == puVar17) {
        __ptr = (byte *)xpalloc(__ptr,&local_60,1,0xffffffffffffffff,1);
      }
      puVar24 = (uint *)((long)puVar24 + 1);
      uVar8 = read_char(&local_68);
      iVar7 = local_68;
      puVar16 = (undefined *)(ulong)((uint)puVar16 & uVar8);
      if (local_68 < 0) goto LAB_0010454f;
      if (local_68 == 0) break;
      ppuVar12 = __ctype_b_loc();
      if ((*(byte *)((long)*ppuVar12 + (long)iVar7 * 2 + 1) & 0x40) == 0) goto LAB_001044cc;
      __ptr[(long)puVar17] = (byte)iVar7;
      puVar17 = (uint *)((long)puVar17 + 1);
    }
    __ptr[(long)puVar17] = 0;
    lVar11 = -1 - (long)puVar17;
    puVar17 = &switchD_00104b63::switchdataD_00102ac0;
    (*format_address)((long)puVar24 + lVar11,0x20);
    pbVar22 = __ptr;
    while( true ) {
      bVar20 = *pbVar22;
      local_68 = (int)(char)bVar20;
      if (bVar20 == 0) break;
      switch(bVar20) {
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
        pbVar2 = (byte *)_stdout->_IO_write_ptr;
        if (pbVar2 < _stdout->_IO_write_end) {
          _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
          *pbVar2 = bVar20;
        }
        else {
          __overflow(_stdout,(uint)bVar20);
        }
      }
      pbVar22 = pbVar22 + 1;
    }
    pcVar18 = _stdout->_IO_write_ptr;
    if (pcVar18 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar18 + 1;
      *pcVar18 = '\n';
    }
    else {
      __overflow(_stdout,10);
    }
  } while( true );
LAB_0010454f:
  param_2 = (undefined8 *)((ulong)param_2 & 0xff);
  free(__ptr);
LAB_0010455d:
  do {
    uVar8 = (uint)puVar16 & 0xff & (uint)param_2 & 1;
LAB_0010456a:
    bVar20 = (byte)uVar8;
    if ((have_read_stdin == '\0') || (iVar7 = rpl_fclose(_stdin), iVar7 != -1)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return (ulong)((uVar8 ^ 1) & 0xff);
    }
    uVar14 = dcgettext(0,"standard input",5);
    piVar13 = __errno_location();
    error(1,*piVar13,uVar14);
LAB_0010474f:
    uVar10 = 0;
    local_78 = (void *)xnmalloc(2,puVar17);
    bVar5 = limit_bytes_to_format;
    local_58 = local_78;
    local_50 = (long)local_78 + (long)bytes_per_block;
    if (limit_bytes_to_format == 0) {
      uVar23 = 0;
      puVar24 = n_bytes_to_skip;
      do {
        local_88 = &local_60;
        uVar15 = (uint)uVar10;
        pvVar1 = (&local_58)[(int)uVar23];
        uVar8 = read_block(bytes_per_block,pvVar1,local_88);
        puVar16 = (undefined *)(ulong)uVar8;
        if (local_60 < bytes_per_block) break;
        if (local_60 != bytes_per_block) goto LAB_00104df1;
        uVar15 = uVar15 ^ 1;
        uVar10 = (ulong)uVar15;
        uVar23 = (ulong)uVar15;
        puVar17 = (uint *)((long)puVar24 + (long)local_60);
        write_block(puVar24,local_60,(&local_58)[uVar10],pvVar1);
        puVar24 = puVar17;
        if ((_stdout->_flags & 0x20) != 0) {
          puVar16 = (undefined *)0x0;
          break;
        }
      } while ((char)uVar8 != '\0');
    }
    else {
      puVar17 = n_bytes_to_skip;
      do {
        uVar23 = uVar10;
        uVar15 = (uint)uVar23;
        if (end_offset <= puVar17) {
          puVar16 = (undefined *)(ulong)bVar5;
          goto LAB_00104895;
        }
        pvVar1 = (&local_58)[uVar23];
        puVar24 = (uint *)((long)end_offset - (long)puVar17);
        if (bytes_per_block < (uint *)((long)end_offset - (long)puVar17)) {
          puVar24 = bytes_per_block;
        }
        uVar8 = read_block(puVar24,pvVar1,&local_60);
        puVar16 = (undefined *)(ulong)uVar8;
        puVar24 = puVar17;
        if (local_60 < bytes_per_block) break;
        if (local_60 != bytes_per_block) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("n_bytes_read == bytes_per_block","src/od.c",0x5af,"dump");
        }
        uVar15 = uVar15 ^ 1;
        uVar23 = (ulong)uVar15;
        puVar24 = (uint *)((long)puVar17 + (long)local_60);
        write_block(puVar17,local_60,(&local_58)[uVar15],pvVar1);
        if ((_stdout->_flags & 0x20) != 0) {
          puVar16 = (undefined *)0x0;
          break;
        }
        uVar10 = (ulong)uVar15;
        puVar17 = puVar24;
      } while ((char)uVar8 != '\0');
    }
    puVar21 = local_60;
    puVar17 = puVar24;
    if (local_60 != (uint *)0x0) {
      iVar7 = get_lcm();
      pvVar1 = (&local_58)[uVar23];
      uVar10 = ((long)iVar7 - 1U) + (long)puVar21;
      memset((void *)((long)pvVar1 + (long)puVar21),0,
             (uVar10 - uVar10 % (ulong)(long)iVar7) - (long)puVar21);
      puVar17 = (uint *)((long)puVar24 + (long)puVar21);
      write_block(puVar24,puVar21,(&local_58)[uVar15 ^ 1],pvVar1);
    }
LAB_00104895:
    param_2 = (undefined8 *)(ulong)bVar20;
    (*format_address)(puVar17,10);
    if ((limit_bytes_to_format != 0) && (end_offset <= puVar17)) {
LAB_00104c02:
      uVar8 = check_and_close(0);
      puVar16 = (undefined *)(ulong)((uint)puVar16 & uVar8);
    }
    free(local_78);
  } while( true );
}


