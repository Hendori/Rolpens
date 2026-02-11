
byte star_digits_closebracket(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(char *)(*param_1 + param_2) != '*') {
    return 0;
  }
  lVar2 = param_1[1];
  if (*(byte *)(lVar2 + param_2) == 0) {
    uVar3 = param_2 + 1;
    if ((ulong)param_1[2] <= uVar3) {
      return 0;
    }
    do {
      cVar1 = *(char *)(*param_1 + uVar3);
      if (9 < (int)cVar1 - 0x30U) {
        if (cVar1 != ']') {
          return 0;
        }
        return *(byte *)(lVar2 + uVar3) ^ 1;
      }
      if (*(char *)(lVar2 + uVar3) != '\0') {
        return *(byte *)(lVar2 + param_2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[2]);
  }
  return 0;
}



void is_char_class_member(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00104690 + *(int *)(&DAT_00104690 + (ulong)param_1 * 4)))();
  return;
}



char * make_printable_str(byte *param_1,long param_2)

{
  byte bVar1;
  char *pcVar2;
  char *__dest;
  ushort **ppuVar3;
  byte *pbVar4;
  byte *__src;
  long in_FS_OFFSET;
  byte local_45 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = (char *)xnmalloc(param_2 + 1,4);
  if (param_2 != 0) {
    pbVar4 = param_1 + param_2;
    __dest = pcVar2;
    do {
      bVar1 = *param_1;
      if ((char)bVar1 < '\x0e') {
        if ((char)bVar1 < '\a') {
LAB_00100301:
          ppuVar3 = __ctype_b_loc();
          if ((*(byte *)((long)*ppuVar3 + (ulong)bVar1 * 2 + 1) & 0x40) == 0) {
            __sprintf_chk(local_45,2,5,"\\%03o",(ulong)bVar1);
          }
          else {
            local_45[1] = 0;
            local_45[0] = bVar1;
          }
          __src = local_45;
        }
        else {
          __src = &_LC7;
          switch(bVar1) {
          case 8:
            __src = &_LC1;
            break;
          case 9:
            __src = &_LC5;
            break;
          case 10:
            __src = &_LC3;
            break;
          case 0xb:
            __src = &_LC6;
            break;
          case 0xc:
            __src = &_LC2;
            break;
          case 0xd:
            __src = &_LC4;
          }
        }
      }
      else {
        __src = &_LC0;
        if (bVar1 != 0x5c) goto LAB_00100301;
      }
      param_1 = param_1 + 1;
      __dest = stpcpy(__dest,(char *)__src);
    } while (pbVar4 != param_1);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_error(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  fflush_unlocked(_stdout);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar3 = dcgettext(0,"write error",5);
                    /* WARNING: Subroutine does not return */
  error(1,iVar1,uVar3);
}



void plain_read_part_0(void)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = dcgettext(0,"read error",5);
  piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar2,uVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void plain_read(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  size_t __n;
  byte *pbVar6;
  code *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined1 *__ptr;
  byte bVar10;
  ulong uVar11;
  
  pbVar6 = (byte *)0x0;
  lVar1 = safe_read(0,param_1,param_2);
  if (-1 < lVar1) {
    return;
  }
  plain_read_part_0();
  pcVar7 = (code *)0x0;
  lVar1 = safe_read(0,pbVar6,param_1);
  if (-1 < lVar1) {
    if (lVar1 != 0) {
      pbVar8 = pbVar6;
      do {
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (&xlate)[*pbVar8];
        pbVar8 = pbVar9;
      } while (pbVar6 + lVar1 != pbVar9);
    }
    return;
  }
  plain_read_part_0();
  __n = 0x7fffffff;
  do {
    uVar2 = (*pcVar7)(&io_buf,0x2000);
    if (uVar2 == 0) {
      return;
    }
    if ((int)__n == 0x7fffffff) {
      __ptr = &io_buf;
      uVar5 = 0;
      uVar3 = uVar5;
      goto LAB_001004d6;
    }
    uVar5 = 0;
    do {
      if ((int)(char)(&io_buf)[uVar5] != (int)__n) {
        if (uVar2 <= uVar5) break;
LAB_001004cf:
        __ptr = &io_buf + uVar5;
        uVar3 = uVar5;
LAB_001004d6:
        do {
          if (in_squeeze_set[(byte)(&io_buf)[uVar5]] != '\0') {
            uVar11 = uVar5;
            if (uVar2 == uVar5) goto LAB_00100590;
            if (uVar5 < uVar2) {
              bVar10 = (&io_buf)[uVar5];
              uVar11 = uVar5 + 1;
              goto LAB_00100505;
            }
            __n = uVar2 - uVar3;
            if (__n == 0) goto LAB_001005e0;
            goto LAB_00100610;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 < uVar2);
        uVar11 = uVar5;
        if (uVar2 != uVar5) {
LAB_001005a9:
          __n = uVar2 - uVar3;
          uVar5 = uVar11;
          if (__n != 0) {
LAB_00100610:
            sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout);
            uVar5 = uVar11;
            if (sVar4 != __n) goto LAB_00100545;
          }
          if (uVar2 <= uVar5) {
LAB_001005e0:
            __n = 0x7fffffff;
            break;
          }
          goto LAB_001004cf;
        }
LAB_00100590:
        bVar10 = in_squeeze_set[uVar11 + 0xff];
        uVar5 = uVar11 - 1;
        if (in_squeeze_set[bVar10] == '\0') goto LAB_001005a9;
LAB_00100505:
        __n = uVar5 - uVar3;
        if ((uVar5 == 0) || (in_squeeze_set[uVar5 + 0xff] != bVar10)) {
          __n = __n + 1;
        }
        if ((__n == 0) || (sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout), __n == sVar4)) {
          __n = (size_t)(uint)(int)(char)bVar10;
          uVar5 = uVar11;
          goto joined_r0x001005c7;
        }
LAB_00100545:
        uVar5 = write_error();
      }
      uVar5 = uVar5 + 1;
joined_r0x001005c7:
    } while (uVar5 < uVar2);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void read_and_xlate(byte *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  size_t __n;
  code *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 *__ptr;
  byte bVar9;
  ulong uVar10;
  
  pcVar6 = (code *)0x0;
  lVar1 = safe_read(0,param_1,param_2);
  if (-1 < lVar1) {
    if (lVar1 != 0) {
      pbVar7 = param_1;
      do {
        pbVar8 = pbVar7 + 1;
        *pbVar7 = (&xlate)[*pbVar7];
        pbVar7 = pbVar8;
      } while (param_1 + lVar1 != pbVar8);
    }
    return;
  }
  plain_read_part_0();
  __n = 0x7fffffff;
  do {
    uVar2 = (*pcVar6)(&io_buf,0x2000);
    if (uVar2 == 0) {
      return;
    }
    if ((int)__n == 0x7fffffff) {
      __ptr = &io_buf;
      uVar5 = 0;
      uVar3 = uVar5;
      goto LAB_001004d6;
    }
    uVar5 = 0;
    do {
      if ((int)(char)(&io_buf)[uVar5] != (int)__n) {
        if (uVar2 <= uVar5) break;
LAB_001004cf:
        __ptr = &io_buf + uVar5;
        uVar3 = uVar5;
LAB_001004d6:
        do {
          if (in_squeeze_set[(byte)(&io_buf)[uVar5]] != '\0') {
            uVar10 = uVar5;
            if (uVar2 == uVar5) goto LAB_00100590;
            if (uVar5 < uVar2) {
              bVar9 = (&io_buf)[uVar5];
              uVar10 = uVar5 + 1;
              goto LAB_00100505;
            }
            __n = uVar2 - uVar3;
            if (__n == 0) goto LAB_001005e0;
            goto LAB_00100610;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 < uVar2);
        uVar10 = uVar5;
        if (uVar2 != uVar5) {
LAB_001005a9:
          __n = uVar2 - uVar3;
          uVar5 = uVar10;
          if (__n != 0) {
LAB_00100610:
            sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout);
            uVar5 = uVar10;
            if (sVar4 != __n) goto LAB_00100545;
          }
          if (uVar2 <= uVar5) {
LAB_001005e0:
            __n = 0x7fffffff;
            break;
          }
          goto LAB_001004cf;
        }
LAB_00100590:
        bVar9 = in_squeeze_set[uVar10 + 0xff];
        uVar5 = uVar10 - 1;
        if (in_squeeze_set[bVar9] == '\0') goto LAB_001005a9;
LAB_00100505:
        __n = uVar5 - uVar3;
        if ((uVar5 == 0) || (in_squeeze_set[uVar5 + 0xff] != bVar9)) {
          __n = __n + 1;
        }
        if ((__n == 0) || (sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout), __n == sVar4)) {
          __n = (size_t)(uint)(int)(char)bVar9;
          uVar5 = uVar10;
          goto joined_r0x001005c7;
        }
LAB_00100545:
        uVar5 = write_error();
      }
      uVar5 = uVar5 + 1;
joined_r0x001005c7:
    } while (uVar5 < uVar2);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void squeeze_filter_constprop_0(code *param_1)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  ulong uVar4;
  size_t __n;
  undefined1 *__ptr;
  byte bVar5;
  ulong uVar6;
  
  __n = 0x7fffffff;
  do {
    uVar1 = (*param_1)(&io_buf,0x2000);
    if (uVar1 == 0) {
      return;
    }
    if ((int)__n == 0x7fffffff) {
      __ptr = &io_buf;
      uVar4 = 0;
      uVar2 = uVar4;
      goto LAB_001004d6;
    }
    uVar4 = 0;
    do {
      if ((int)(char)(&io_buf)[uVar4] != (int)__n) {
        if (uVar1 <= uVar4) break;
LAB_001004cf:
        __ptr = &io_buf + uVar4;
        uVar2 = uVar4;
LAB_001004d6:
        do {
          if (in_squeeze_set[(byte)(&io_buf)[uVar4]] != '\0') {
            uVar6 = uVar4;
            if (uVar1 == uVar4) goto LAB_00100590;
            if (uVar4 < uVar1) {
              bVar5 = (&io_buf)[uVar4];
              uVar6 = uVar4 + 1;
              goto LAB_00100505;
            }
            __n = uVar1 - uVar2;
            if (__n == 0) goto LAB_001005e0;
            goto LAB_00100610;
          }
          uVar4 = uVar4 + 2;
        } while (uVar4 < uVar1);
        uVar6 = uVar4;
        if (uVar1 != uVar4) {
LAB_001005a9:
          __n = uVar1 - uVar2;
          uVar4 = uVar6;
          if (__n != 0) {
LAB_00100610:
            sVar3 = fwrite_unlocked(__ptr,1,__n,_stdout);
            uVar4 = uVar6;
            if (sVar3 != __n) goto LAB_00100545;
          }
          if (uVar1 <= uVar4) {
LAB_001005e0:
            __n = 0x7fffffff;
            break;
          }
          goto LAB_001004cf;
        }
LAB_00100590:
        bVar5 = in_squeeze_set[uVar6 + 0xff];
        uVar4 = uVar6 - 1;
        if (in_squeeze_set[bVar5] == '\0') goto LAB_001005a9;
LAB_00100505:
        __n = uVar4 - uVar2;
        if ((uVar4 == 0) || (in_squeeze_set[uVar4 + 0xff] != bVar5)) {
          __n = __n + 1;
        }
        if ((__n == 0) || (sVar3 = fwrite_unlocked(__ptr,1,__n,_stdout), __n == sVar3)) {
          __n = (size_t)(uint)(int)(char)bVar5;
          uVar4 = uVar6;
          goto joined_r0x001005c7;
        }
LAB_00100545:
        uVar4 = write_error();
      }
      uVar4 = uVar4 + 1;
joined_r0x001005c7:
    } while (uVar4 < uVar1);
  } while( true );
}



void get_spec_stats(long *param_1)

{
  uint *puVar1;
  
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  puVar1 = *(uint **)(*param_1 + 8);
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  if (puVar1 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001006a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_001046d8 + *(int *)(&DAT_001046d8 + (ulong)*puVar1 * 4)))();
    return;
  }
  param_1[3] = 0;
  return;
}



ulong read_and_delete(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  
  do {
    uVar1 = safe_read(0,param_1,param_2);
    if ((long)uVar1 < 0) {
      uVar2 = dcgettext(0,"read error",5);
      piVar3 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar3,uVar2);
    }
    if (uVar1 == 0) {
      return 0;
    }
    uVar4 = 0;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
      if (in_delete_set[*(byte *)(param_1 + uVar5)] != '\0') goto LAB_00100c01;
    } while (uVar1 != uVar4);
    uVar4 = uVar5 + 2;
    uVar5 = uVar1;
    if (uVar1 <= uVar4) {
      return uVar1;
    }
    do {
      if (in_delete_set[*(byte *)(param_1 + uVar4)] == '\0') {
        *(byte *)(param_1 + uVar5) = *(byte *)(param_1 + uVar4);
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
LAB_00100c01:
    } while (uVar4 < uVar1);
  } while (uVar5 == 0);
  return uVar5;
}



undefined8 get_next_constprop_0(long *param_1)

{
  undefined8 uVar1;
  uint *puVar2;
  
  if (param_1[2] == -2) {
    puVar2 = *(uint **)(*param_1 + 8);
    param_1[2] = -1;
    param_1[1] = (long)puVar2;
  }
  else {
    puVar2 = (uint *)param_1[1];
  }
  if (puVar2 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100cab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_0010471c + *(int *)(&DAT_0010471c + (ulong)*puVar2 * 4)))();
    return uVar1;
  }
  return 0xffffffff;
}



void set_initialize(long param_1,char param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0xfffffffffffffffe;
  while( true ) {
    iVar2 = get_next_constprop_0(param_1);
    if (iVar2 == -1) break;
    param_3[iVar2] = 1;
  }
  if (param_2 != '\0') {
    pbVar1 = param_3 + 0x100;
    do {
      *param_3 = *param_3 ^ 1;
      param_3 = param_3 + 1;
    } while (param_3 != pbVar1);
  }
  return;
}



undefined8 get_next(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  lVar1 = param_1[2];
  if (param_2 == (undefined4 *)0x0) {
    if (lVar1 == -2) {
      puVar3 = *(uint **)(*param_1 + 8);
      param_1[2] = -1;
      param_1[1] = (long)puVar3;
    }
    else {
      puVar3 = (uint *)param_1[1];
    }
    if (puVar3 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101231. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_00104774 + *(int *)(&DAT_00104774 + (ulong)*puVar3 * 4)))();
      return uVar2;
    }
  }
  else {
    *param_2 = 2;
    if (lVar1 == -2) {
      puVar3 = *(uint **)(*param_1 + 8);
      param_1[2] = -1;
      param_1[1] = (long)puVar3;
    }
    else {
      puVar3 = (uint *)param_1[1];
    }
    if (puVar3 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101189. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(&DAT_00104760 + *(int *)(&DAT_00104760 + (ulong)*puVar3 * 4)))();
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined8 parse_str(byte *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  char *__s2;
  long lVar4;
  ulong uVar5;
  char cVar6;
  int iVar7;
  size_t sVar8;
  void *__ptr;
  void *__ptr_00;
  ulong uVar9;
  undefined4 *puVar10;
  size_t sVar11;
  undefined8 uVar12;
  byte *pbVar13;
  ushort **ppuVar14;
  byte *pbVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  char *pcVar22;
  ulong uVar23;
  byte bVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  long in_FS_OFFSET;
  long local_68;
  char *local_60;
  void *local_58;
  void *local_50;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar8 = strlen((char *)param_1);
  __ptr = (void *)xmalloc(sVar8);
  local_58 = __ptr;
  __ptr_00 = (void *)xcalloc(sVar8);
  bVar24 = *param_1;
  local_50 = __ptr_00;
  if (bVar24 != 0) {
    uVar9 = 0;
    uVar23 = 0;
    do {
      uVar17 = (uint)uVar9;
      uVar20 = (ulong)((int)uVar23 + 1);
      if (bVar24 == 0x5c) {
        uVar19 = uVar17 + 1;
        bVar24 = param_1[uVar19];
        *(undefined1 *)((long)__ptr_00 + uVar23) = 1;
        if (bVar24 == 0) {
          uVar16 = dcgettext(0,"warning: an unescaped backslash at end of string is not portable",5)
          ;
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar16);
        }
        uVar21 = bVar24 - 0x30;
        switch(uVar21 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          bVar24 = (byte)uVar21;
          if ((int)(char)param_1[uVar17 + 2] - 0x30U < 8) {
            uVar19 = ((int)(char)param_1[uVar17 + 2] - 0x30U) + uVar21 * 8;
            bVar24 = (byte)uVar19;
            uVar21 = (int)(char)param_1[uVar17 + 3] - 0x30;
            if (uVar21 < 8) {
              if (0xff < (int)(uVar21 + (uVar19 & 0xff) * 8)) {
                uVar16 = dcgettext(0,
                                   "warning: the ambiguous octal escape \\%c%c%c is being\n\tinterpreted as the 2-byte sequence \\0%c%c, %c"
                                   ,5);
                    /* WARNING: Subroutine does not return */
                error(0,0,uVar16);
              }
              bVar24 = (char)uVar21 + bVar24 * '\b';
              uVar19 = uVar17 + 3;
            }
            else {
              uVar19 = uVar17 + 2;
            }
          }
          break;
        case 0x2c:
          bVar24 = 0x5c;
          break;
        case 0x31:
          bVar24 = 7;
          break;
        case 0x32:
          bVar24 = 8;
          break;
        case 0x36:
          bVar24 = 0xc;
          break;
        case 0x3e:
          bVar24 = 10;
          break;
        case 0x42:
          bVar24 = 0xd;
          break;
        case 0x44:
          bVar24 = 9;
          break;
        case 0x46:
          bVar24 = 0xb;
        }
        uVar17 = uVar19;
      }
      uVar9 = (ulong)(uVar17 + 1);
      *(byte *)((long)__ptr + uVar23) = bVar24;
      bVar24 = param_1[uVar9];
      uVar23 = uVar20;
    } while (bVar24 != 0);
    local_48 = uVar20;
    if (uVar20 < 3) {
      uVar9 = 0;
    }
    else {
      uVar23 = 2;
      uVar9 = 0;
      do {
        bVar24 = *(byte *)((long)__ptr + uVar9);
        cVar1 = *(char *)((long)__ptr + uVar9 + 1);
        uVar26 = uVar9 + 1;
        if ((bVar24 == 0x5b) && (*(char *)((long)__ptr_00 + uVar9) == '\0')) {
          if (((cVar1 != ':') && (cVar1 != '=')) || (*(char *)((long)__ptr_00 + uVar26) != '\0')) {
LAB_00101800:
            if ((*(char *)((long)__ptr + uVar23) == '*') &&
               (*(char *)((long)__ptr_00 + uVar23) == '\0')) {
              for (uVar25 = uVar9 + 3;
                  (uVar25 < uVar20 && (*(char *)((long)__ptr_00 + uVar25) == '\0'));
                  uVar25 = uVar25 + 1) {
                if (*(char *)((long)__ptr + uVar25) == ']') {
                  lVar18 = (uVar25 - uVar26) + -2;
                  if (lVar18 == 0) {
                    local_68 = 0;
                  }
                  else {
                    pcVar22 = (char *)((long)__ptr + uVar9 + 3);
                    iVar7 = xstrtoumax(pcVar22,&local_60,(*pcVar22 != '0') * '\x02' + '\b',&local_68
                                       ,0);
                    if (((iVar7 != 0) || (local_68 == -1)) || (local_60 != pcVar22 + lVar18)) {
                      uVar16 = make_printable_str(pcVar22,lVar18);
                      uVar16 = quote(uVar16);
                      pcVar22 = "invalid repeat count %s in [c*n] construct";
                      goto LAB_00101cb1;
                    }
                  }
                  lVar4 = local_68;
                  uVar26 = uVar25 + 1;
                  puVar10 = (undefined4 *)xmalloc();
                  *(undefined8 *)(puVar10 + 2) = 0;
                  lVar18 = *(long *)(param_2 + 8);
                  *puVar10 = 4;
                  *(char *)(puVar10 + 4) = cVar1;
                  *(long *)(puVar10 + 6) = lVar4;
                  *(undefined4 **)(lVar18 + 8) = puVar10;
                  goto LAB_001018f7;
                }
              }
            }
            goto LAB_00101778;
          }
          uVar25 = uVar23;
          do {
            uVar5 = uVar25;
            if (uVar20 - 1 <= uVar5) goto LAB_00101800;
            uVar25 = uVar5 + 1;
          } while ((((*(char *)((long)__ptr + uVar5) != cVar1) ||
                    (*(char *)((long)__ptr + uVar5 + 1) != ']')) ||
                   (*(char *)((long)__ptr_00 + uVar5) != '\0')) ||
                  (*(char *)((long)__ptr_00 + uVar5 + 1) != '\0'));
          sVar8 = (uVar5 - uVar9) - 2;
          if (sVar8 == 0) {
            pcVar22 = "missing character class name \'[::]\'";
            if (cVar1 != ':') {
              pcVar22 = "missing equivalence class character \'[==]\'";
            }
            uVar16 = dcgettext(0,pcVar22,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar16);
          }
          pcVar22 = (char *)((long)__ptr + uVar23);
          if (cVar1 == ':') {
            lVar18 = 0;
            do {
              __s2 = (&char_class_name)[lVar18];
              iVar7 = strncmp(pcVar22,__s2,sVar8);
              if ((iVar7 == 0) && (sVar11 = strlen(__s2), sVar8 == sVar11)) {
                puVar10 = (undefined4 *)xmalloc();
                *(undefined8 *)(puVar10 + 2) = 0;
                lVar4 = *(long *)(param_2 + 8);
                *puVar10 = 2;
                puVar10[4] = (int)lVar18;
                *(undefined4 **)(lVar4 + 8) = puVar10;
                goto LAB_00101b9a;
              }
              lVar18 = lVar18 + 1;
            } while (lVar18 != 0xc);
            cVar6 = star_digits_closebracket(&local_58);
            if (cVar6 == '\0') {
              uVar16 = make_printable_str(pcVar22,sVar8);
              uVar16 = quote(uVar16);
              pcVar22 = "invalid character class %s";
LAB_00101cb1:
              uVar12 = dcgettext(0,pcVar22,5);
LAB_00101cbe:
                    /* WARNING: Subroutine does not return */
              error(0,0,uVar12,uVar16);
            }
            goto LAB_00101800;
          }
          if (sVar8 != 1) {
            cVar6 = star_digits_closebracket(&local_58);
            if (cVar6 == '\0') {
              uVar16 = make_printable_str(pcVar22,sVar8);
              uVar12 = dcgettext(0,"%s: equivalence class operand must be a single character",5);
              goto LAB_00101cbe;
            }
            goto LAB_00101800;
          }
          puVar10 = (undefined4 *)xmalloc();
          *(undefined8 *)(puVar10 + 2) = 0;
          *puVar10 = 3;
          *(char *)(puVar10 + 4) = *pcVar22;
          *(undefined4 **)(*(long *)(param_2 + 8) + 8) = puVar10;
LAB_00101b9a:
          uVar26 = uVar5 + 2;
LAB_001018f7:
          *(undefined4 **)(param_2 + 8) = puVar10;
LAB_001017be:
          uVar23 = uVar26 + 2;
          uVar9 = uVar26;
        }
        else {
LAB_00101778:
          if ((cVar1 != '-') || (*(char *)((long)__ptr_00 + uVar26) != '\0')) {
            puVar10 = (undefined4 *)xmalloc();
            *(undefined8 *)(puVar10 + 2) = 0;
            lVar18 = *(long *)(param_2 + 8);
            *puVar10 = 0;
            *(byte *)(puVar10 + 4) = bVar24;
            *(undefined4 **)(lVar18 + 8) = puVar10;
            *(undefined4 **)(param_2 + 8) = puVar10;
            goto LAB_001017be;
          }
          bVar2 = *(byte *)((long)__ptr + uVar23);
          if (bVar2 < bVar24) {
            pbVar13 = (byte *)xmalloc(5);
            ppuVar14 = __ctype_b_loc();
            if ((*(byte *)((long)*ppuVar14 + (ulong)bVar24 * 2 + 1) & 0x40) == 0) {
              __sprintf_chk(pbVar13,2,5,"\\%03o",(ulong)bVar24);
            }
            else {
              *pbVar13 = bVar24;
              pbVar13[1] = 0;
            }
            pbVar15 = (byte *)xmalloc(5);
            if ((*(byte *)((long)*ppuVar14 + (ulong)bVar2 * 2 + 1) & 0x40) == 0) {
              __sprintf_chk(pbVar15,2,5,"\\%03o",(ulong)bVar2);
            }
            else {
              *pbVar15 = bVar2;
              pbVar15[1] = 0;
            }
            uVar16 = dcgettext(0,
                               "range-endpoints of \'%s-%s\' are in reverse collating sequence order"
                               ,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar16,pbVar13,pbVar15);
          }
          puVar10 = (undefined4 *)xmalloc();
          uVar23 = uVar9 + 5;
          *(undefined8 *)(puVar10 + 2) = 0;
          lVar18 = *(long *)(param_2 + 8);
          *puVar10 = 1;
          *(ushort *)(puVar10 + 4) = CONCAT11(bVar2,bVar24);
          *(undefined4 **)(lVar18 + 8) = puVar10;
          *(undefined4 **)(param_2 + 8) = puVar10;
          uVar9 = uVar9 + 3;
        }
      } while (uVar23 < uVar20);
    }
    if (uVar9 < uVar20) {
      puVar27 = (undefined1 *)(uVar9 + (long)__ptr);
      do {
        uVar3 = *puVar27;
        puVar27 = puVar27 + 1;
        puVar10 = (undefined4 *)xmalloc(0x20);
        lVar18 = *(long *)(param_2 + 8);
        *(undefined8 *)(puVar10 + 2) = 0;
        *puVar10 = 0;
        *(undefined1 *)(puVar10 + 4) = uVar3;
        *(undefined4 **)(lVar18 + 8) = puVar10;
        *(undefined4 **)(param_2 + 8) = puVar10;
      } while (puVar27 != (undefined1 *)(uVar20 + (long)__ptr));
    }
  }
  free(__ptr);
  free(__ptr_00);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
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
    goto LAB_00101fd9;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... STRING1 [STRING2]\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Translate, squeeze, and/or delete characters from standard input,\nwriting to standard output.  STRING1 and STRING2 specify arrays of\ncharacters ARRAY1 and ARRAY2 that control the action.\n\n  -c, -C, --complement    use the complement of ARRAY1\n  -d, --delete            delete characters in ARRAY1, do not translate\n  -s, --squeeze-repeats   replace each sequence of a repeated character\n                            that is listed in the last specified ARRAY,\n                            with a single occurrence of that character\n  -t, --truncate-set1     first truncate ARRAY1 to length of ARRAY2\n"
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
                             "\nARRAYs are specified as strings of characters.  Most represent themselves.\nInterpreted sequences are:\n\n  \\NNN            character with octal value NNN (1 to 3 octal digits)\n  \\\\              backslash\n  \\a              audible BEL\n  \\b              backspace\n  \\f              form feed\n  \\n              new line\n  \\r              return\n  \\t              horizontal tab\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  \\v              vertical tab\n  CHAR1-CHAR2     all characters from CHAR1 to CHAR2 in ascending order\n  [CHAR*]         in ARRAY2, copies of CHAR until length of ARRAY1\n  [CHAR*REPEAT]   REPEAT copies of CHAR, REPEAT octal if starting with 0\n  [:alnum:]       all letters and digits\n  [:alpha:]       all letters\n  [:blank:]       all horizontal whitespace\n  [:cntrl:]       all control characters\n  [:digit:]       all digits\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  [:graph:]       all printable characters, not including space\n  [:lower:]       all lower case letters\n  [:print:]       all printable characters, including space\n  [:punct:]       all punctuation characters\n  [:space:]       all horizontal or vertical whitespace\n  [:upper:]       all upper case letters\n  [:xdigit:]      all hexadecimal digits\n  [=CHAR=]        all characters which are equivalent to CHAR\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nTranslation occurs if -d is not given and both STRING1 and STRING2 appear.\n-t is only significant when translating.  ARRAY2 is extended to length of\nARRAY1 by repeating its last character as necessary.  Excess characters\nof ARRAY2 are ignored.  Character classes expand in unspecified order;\nwhile translating, [:lower:] and [:upper:] may be used in pairs to\nspecify case conversion.  Squeezing occurs after translation or deletion.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pcVar4 = "[";
  local_a8 = &_LC31;
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
    if (((*pcVar4 == 't') && (pcVar4[1] == 'r')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC32;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010223c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC32);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010223c:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC32);
    if (puVar7 == &_LC32) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00101fd9:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int main(int param_1,undefined8 *param_2)

{
  ushort *puVar1;
  long lVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  ushort uVar18;
  ushort uVar19;
  bool bVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  unkbyte10 Var39;
  undefined4 uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  ulong uVar54;
  char cVar55;
  byte bVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  undefined8 uVar60;
  size_t sVar61;
  size_t sVar62;
  char *pcVar63;
  long lVar64;
  ushort **ppuVar65;
  __int32_t **pp_Var66;
  undefined8 uVar67;
  long lVar68;
  int *piVar69;
  byte extraout_DL;
  byte bVar70;
  char *pcVar71;
  ulong uVar72;
  byte *pbVar73;
  long *plVar74;
  long in_FS_OFFSET;
  bool bVar75;
  char cVar76;
  byte bVar77;
  undefined4 uVar78;
  short sVar111;
  undefined1 auVar80 [12];
  undefined1 auVar84 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar95 [16];
  int iVar79;
  undefined1 auVar82 [12];
  undefined1 auVar98 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar109 [16];
  undefined4 uVar159;
  undefined1 auVar112 [16];
  undefined1 auVar116 [16];
  undefined1 auVar120 [16];
  undefined1 auVar123 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined4 uVar160;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar134 [16];
  undefined1 auVar138 [16];
  undefined1 auVar141 [16];
  undefined2 uVar142;
  undefined2 uVar143;
  undefined2 uVar144;
  long lVar145;
  long lVar146;
  long lVar147;
  long lVar148;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  int local_1d0;
  int local_1cc;
  long local_1c8;
  long lStack_1c0;
  long local_1b8;
  ulong local_1b0;
  long local_1a8;
  char local_197;
  long local_188;
  long lStack_180;
  char acStack_158 [16];
  byte local_148 [264];
  long local_40;
  undefined1 auVar85 [16];
  undefined1 auVar89 [16];
  undefined1 auVar81 [12];
  undefined1 auVar83 [12];
  undefined1 auVar99 [16];
  undefined1 auVar103 [16];
  undefined1 auVar86 [16];
  undefined1 auVar90 [16];
  undefined1 auVar93 [16];
  undefined1 auVar100 [16];
  undefined1 auVar104 [16];
  undefined1 auVar107 [16];
  undefined1 auVar87 [16];
  undefined1 auVar91 [16];
  undefined1 auVar94 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar101 [16];
  undefined1 auVar105 [16];
  undefined1 auVar108 [16];
  int iVar110;
  undefined1 auVar113 [16];
  undefined1 auVar117 [16];
  undefined1 auVar131 [16];
  undefined1 auVar135 [16];
  undefined1 auVar114 [16];
  undefined1 auVar118 [16];
  undefined1 auVar121 [16];
  undefined1 auVar132 [16];
  undefined1 auVar136 [16];
  undefined1 auVar139 [16];
  undefined1 auVar115 [16];
  undefined1 auVar119 [16];
  undefined1 auVar122 [16];
  undefined1 auVar133 [16];
  undefined1 auVar137 [16];
  undefined1 auVar140 [16];
  undefined1 auVar124 [16];
  undefined1 auVar127 [16];
  int iVar149;
  int iVar152;
  int iVar153;
  int iVar154;
  
  bVar77 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  iVar58 = 0x104a9f;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00105c30:
  iVar59 = 0x106b00;
  iVar57 = getopt_long(param_1,param_2,"+AcCdst",long_options,0);
  if (iVar57 == -1) goto LAB_00105d34;
  if (iVar57 == 99) {
LAB_00105cda:
    complement = '\x01';
    goto LAB_00105c30;
  }
  if (iVar57 < 100) {
    if (iVar57 == 0x41) {
      setlocale(3,"C");
      setlocale(0,"C");
      goto LAB_00105c30;
    }
    if (0x41 < iVar57) {
      if (iVar57 == 0x43) goto LAB_00105cda;
      goto LAB_001062fe;
    }
    if (iVar57 == -0x83) {
      uVar60 = proper_name_lite("Jim Meyering","Jim Meyering");
      version_etc(_stdout,&_LC32,"GNU coreutils",_Version,uVar60,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar57 == -0x82) {
      usage(0);
      goto LAB_001069f6;
    }
  }
  else {
    if (iVar57 == 0x73) {
      squeeze_repeats = 1;
      goto LAB_00105c30;
    }
    if (iVar57 == 0x74) {
      truncate_set1 = '\x01';
      goto LAB_00105c30;
    }
    if (iVar57 == 100) {
      delete = 1;
      goto LAB_00105c30;
    }
  }
LAB_001062fe:
  bVar56 = usage(1);
  bVar70 = extraout_DL;
  goto LAB_00106308;
LAB_00105d34:
  iVar58 = param_1 - _optind;
  iVar59 = _optind;
  bVar56 = delete;
  bVar70 = squeeze_repeats;
  if (iVar58 == 2) {
LAB_00106308:
    translating = bVar56 ^ 1;
    if (bVar56 != bVar70) {
      if (bVar70 < bVar56) {
LAB_00105d6f:
        iVar57 = 1;
        goto LAB_00105d74;
      }
      goto LAB_00105d86;
    }
    local_1c8 = xmalloc(0x20);
    *(undefined8 *)(local_1c8 + 8) = 0;
    lStack_1c0 = local_1c8;
    cVar55 = parse_str(param_2[_optind]);
    if (cVar55 != '\0') {
LAB_00106244:
      plVar74 = &local_188;
      local_188 = xmalloc(0x20);
      *(undefined8 *)(local_188 + 8) = 0;
      lStack_180 = local_188;
      cVar55 = parse_str(param_2[(long)_optind + 1],plVar74);
      if (cVar55 != '\0') goto LAB_00105dd2;
    }
  }
  else {
    translating = 0;
    if (delete == squeeze_repeats) {
      iVar57 = 2;
      if (iVar58 < 2) goto LAB_00106370;
      goto LAB_00106293;
    }
    if (squeeze_repeats < delete) goto LAB_00105d6f;
    iVar57 = 2;
LAB_00105d74:
    if (iVar58 < 1) {
LAB_00106370:
      if (iVar58 != 0) {
        uVar60 = quote(param_2[(long)param_1 + -1]);
        uVar67 = dcgettext(0,"missing operand after %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar67,uVar60);
      }
      uVar60 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar60);
    }
    if (iVar57 < iVar58) {
LAB_00106293:
      uVar60 = quote(param_2[iVar57 + iVar59]);
      uVar67 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar67,uVar60);
    }
LAB_00105d86:
    local_1c8 = xmalloc();
    *(undefined8 *)(local_1c8 + 8) = 0;
    lStack_1c0 = local_1c8;
    cVar55 = parse_str(param_2[_optind]);
    if (cVar55 != '\0') {
      plVar74 = (long *)0x0;
      if (iVar58 == 2) goto LAB_00106244;
LAB_00105dd2:
      get_spec_stats(&local_1c8);
      cVar55 = complement;
      if (complement != '\0') {
        local_1b8 = -2;
        pbVar73 = local_148;
        for (lVar64 = 0x20; lVar64 != 0; lVar64 = lVar64 + -1) {
          pbVar73[0] = 0;
          pbVar73[1] = 0;
          pbVar73[2] = 0;
          pbVar73[3] = 0;
          pbVar73[4] = 0;
          pbVar73[5] = 0;
          pbVar73[6] = 0;
          pbVar73[7] = 0;
          pbVar73 = pbVar73 + ((ulong)bVar77 * -2 + 1) * 8;
        }
        iVar59 = 0x100;
        while (iVar57 = get_next_constprop_0(&local_1c8), iVar57 != -1) {
          bVar77 = local_148[iVar57];
          local_148[iVar57] = 1;
          iVar59 = iVar59 - (uint)(bVar77 ^ 1);
        }
        local_1b0 = (ulong)iVar59;
      }
      uVar54 = local_1b0;
      pcVar71 = "the [c*] repeat construct may not appear in string1";
      if (local_1a8 != 0) goto LAB_00105e68;
      if (plVar74 == (long *)0x0) goto LAB_00105f19;
      get_spec_stats(plVar74,"the [c*] repeat construct may not appear in string1",5);
      lVar64 = lStack_1c0;
      uVar72 = plVar74[3];
      if ((uVar54 < uVar72) || (plVar74[4] != 1)) {
        if (1 < (ulong)plVar74[4]) {
          pcVar71 = "only one [c*] repeat construct may appear in string2";
          lStack_1c0 = lVar64;
          goto LAB_00105e68;
        }
        if (translating == 0) {
          lStack_1c0 = lVar64;
          if (plVar74[4] != 0) goto LAB_00105e5c;
          goto LAB_00105f19;
        }
      }
      else {
        plVar74[3] = uVar54;
        bVar75 = translating == 0;
        *(ulong *)(plVar74[5] + 0x18) = uVar54 - uVar72;
        if (bVar75) {
LAB_00105e5c:
          pcVar71 = "the [c*] construct may appear in string2 only when translating";
          lStack_1c0 = lVar64;
          goto LAB_00105e68;
        }
      }
      pcVar71 = "[=c=] expressions may not appear in string2 when translating";
      lStack_1c0 = lVar64;
      if (((char)plVar74[6] != '\0') ||
         (pcVar71 = 
          "when translating, the only character classes that may appear in\nstring2 are \'upper\' and \'lower\'"
         , *(char *)((long)plVar74 + 0x32) != '\0')) goto LAB_00105e68;
      lVar2 = plVar74[1];
      uVar72 = plVar74[3];
      if (cVar55 == '\0') {
        cVar55 = *(char *)((long)plVar74 + 0x31);
        if (cVar55 != '\0') {
          ppuVar65 = __ctype_b_loc();
          lVar145 = 0;
          lVar146 = 0;
          lVar147 = 0;
          lVar148 = 0;
          lVar68 = 0;
          do {
            puVar1 = (ushort *)((long)*ppuVar65 + lVar68);
            bVar75 = (puVar1[2] & _UNK_00106cb4) != 0;
            bVar20 = (puVar1[3] & _UNK_00106cb6) != 0;
            uVar18 = (ushort)((*puVar1 & __LC74) != 0);
            uVar19 = (ushort)((puVar1[1] & _UNK_00106cb2) != 0);
            sVar111 = -(ushort)bVar20;
            uVar21 = (ushort)((puVar1[4] & _UNK_00106cb8) != 0);
            uVar22 = (ushort)((puVar1[5] & _UNK_00106cba) != 0);
            uVar23 = (ushort)((puVar1[6] & _UNK_00106cbc) != 0);
            uVar24 = (ushort)((puVar1[7] & _UNK_00106cbe) != 0);
            uVar25 = (ushort)(uVar18 != 0);
            uVar26 = (ushort)bVar20;
            uVar27 = (ushort)(uVar21 != 0);
            uVar28 = (ushort)(uVar22 != 0);
            uVar40 = CONCAT22(-uVar26,sVar111);
            Var39 = CONCAT64(CONCAT42(uVar40,-(ushort)bVar75),CONCAT22(-(ushort)bVar75,sVar111));
            auVar33._4_8_ = (long)((unkuint10)Var39 >> 0x10);
            auVar33._2_2_ = -(ushort)(uVar19 != 0);
            auVar33._0_2_ = -uVar19;
            uVar159 = CONCAT22(-uVar25,-uVar18);
            auVar124._4_12_ = auVar33;
            uVar78 = CONCAT22(-uVar27,-uVar21);
            auVar81._0_8_ = CONCAT26(-uVar28,CONCAT24(-uVar22,uVar78));
            auVar81._8_2_ = -uVar23;
            auVar81._10_2_ = -(ushort)(uVar23 != 0);
            auVar96._12_2_ = -uVar24;
            auVar96._0_12_ = auVar81;
            auVar96._14_2_ = -(ushort)(uVar24 != 0);
            iVar59 = (int)((unkuint10)Var39 >> 0x10);
            auVar155._4_4_ = -(uint)(iVar59 < 0);
            auVar155._0_4_ = iVar59;
            auVar155._8_4_ = uVar40;
            auVar155._12_4_ = -(uint)(uVar26 != 0);
            auVar125._0_8_ = auVar124._0_8_;
            auVar125._8_4_ = auVar33._0_4_;
            auVar125._12_4_ = -(uint)(auVar33._0_4_ < 0);
            auVar157._8_4_ = (int)((ulong)auVar81._0_8_ >> 0x20);
            auVar157._0_8_ = auVar81._0_8_;
            auVar157._12_4_ = -(uint)(uVar28 != 0);
            auVar126._4_4_ = -(uint)(auVar81._8_4_ < 0);
            auVar126._0_4_ = auVar81._8_4_;
            auVar126._8_4_ = auVar96._12_4_;
            auVar126._12_4_ = -(uint)(auVar96._12_4_ < 0);
            lVar147 = lVar147 + (SUB168(auVar126 & __LC19,0) - CONCAT44(-(uint)(uVar27 != 0),uVar78)
                                ) + (SUB168(auVar155 & __LC19,0) -
                                    CONCAT44(-(uint)(uVar25 != 0),uVar159));
            lVar148 = lVar148 + (SUB168(auVar126 & __LC19,8) - auVar157._8_8_) +
                                (SUB168(auVar155 & __LC19,8) - auVar125._8_8_);
            puVar1 = (ushort *)((long)*ppuVar65 + lVar68);
            lVar68 = lVar68 + 0x10;
            bVar75 = (puVar1[2] & _UNK_00106cc4) != 0;
            bVar20 = (puVar1[3] & _UNK_00106cc6) != 0;
            uVar18 = (ushort)((*puVar1 & __LC75) != 0);
            uVar19 = (ushort)((puVar1[1] & _UNK_00106cc2) != 0);
            sVar111 = -(ushort)bVar20;
            uVar21 = (ushort)((puVar1[4] & _UNK_00106cc8) != 0);
            uVar22 = (ushort)((puVar1[5] & _UNK_00106cca) != 0);
            uVar23 = (ushort)((puVar1[6] & _UNK_00106ccc) != 0);
            uVar24 = (ushort)((puVar1[7] & _UNK_00106cce) != 0);
            uVar25 = (ushort)(uVar18 != 0);
            uVar26 = (ushort)bVar20;
            uVar27 = (ushort)(uVar21 != 0);
            uVar28 = (ushort)(uVar22 != 0);
            uVar40 = CONCAT22(-uVar26,sVar111);
            Var39 = CONCAT64(CONCAT42(uVar40,-(ushort)bVar75),CONCAT22(-(ushort)bVar75,sVar111));
            auVar34._4_8_ = (long)((unkuint10)Var39 >> 0x10);
            auVar34._2_2_ = -(ushort)(uVar19 != 0);
            auVar34._0_2_ = -uVar19;
            uVar160 = CONCAT22(-uVar25,-uVar18);
            auVar127._4_12_ = auVar34;
            uVar78 = CONCAT22(-uVar27,-uVar21);
            auVar82._0_8_ = CONCAT26(-uVar28,CONCAT24(-uVar22,uVar78));
            auVar82._8_2_ = -uVar23;
            auVar82._10_2_ = -(ushort)(uVar23 != 0);
            auVar97._12_2_ = -uVar24;
            auVar97._0_12_ = auVar82;
            auVar97._14_2_ = -(ushort)(uVar24 != 0);
            iVar59 = (int)((unkuint10)Var39 >> 0x10);
            auVar156._4_4_ = -(uint)(iVar59 < 0);
            auVar156._0_4_ = iVar59;
            auVar156._8_4_ = uVar40;
            auVar156._12_4_ = -(uint)(uVar26 != 0);
            auVar128._0_8_ = auVar127._0_8_;
            auVar128._8_4_ = auVar34._0_4_;
            auVar128._12_4_ = -(uint)(auVar34._0_4_ < 0);
            auVar158._8_4_ = (int)((ulong)auVar82._0_8_ >> 0x20);
            auVar158._0_8_ = auVar82._0_8_;
            auVar158._12_4_ = -(uint)(uVar28 != 0);
            auVar129._4_4_ = -(uint)(auVar82._8_4_ < 0);
            auVar129._0_4_ = auVar82._8_4_;
            auVar129._8_4_ = auVar97._12_4_;
            auVar129._12_4_ = -(uint)(auVar97._12_4_ < 0);
            lVar145 = lVar145 + (SUB168(auVar129 & __LC19,0) - CONCAT44(-(uint)(uVar27 != 0),uVar78)
                                ) + (SUB168(auVar156 & __LC19,0) -
                                    CONCAT44(-(uint)(uVar25 != 0),uVar160));
            lVar146 = lVar146 + (SUB168(auVar129 & __LC19,8) - auVar158._8_8_) +
                                (SUB168(auVar156 & __LC19,8) - auVar128._8_8_);
          } while (lVar68 != 0x200);
          plVar74[2] = -2;
          local_1b8 = -2;
          lVar68 = lVar145 + lVar146 + -1;
          cVar76 = cVar55;
          do {
            iVar59 = get_next(&local_1c8,&local_1d0);
            iVar57 = get_next(plVar74,&local_1cc);
            if (cVar55 == '\0') {
              if (local_1cc != 2) {
LAB_00106668:
                local_1b8 = -1;
                plVar74[2] = -1;
                lStack_1c0 = *(long *)(lStack_1c0 + 8);
                plVar74[1] = *(long *)(plVar74[1] + 8);
                lVar145 = lVar68;
                if (local_1d0 == 1) {
                  lVar145 = lVar147 + lVar148 + -1;
                }
                local_1b0 = local_1b0 - lVar145;
                lVar145 = lVar68;
                if (local_1cc == 1) {
                  lVar145 = lVar147 + lVar148 + -1;
                }
                plVar74[3] = plVar74[3] - lVar145;
              }
            }
            else if (local_1cc != 2) {
              if ((cVar76 != '\0') && (local_1d0 != 2)) goto LAB_00106668;
              pcVar71 = "misaligned [:upper:] and/or [:lower:] construct";
              goto LAB_00105e68;
            }
            cVar76 = local_1b8 == -1;
            cVar55 = plVar74[2] == -1;
          } while ((iVar59 != -1) && (iVar57 != -1));
          if ((uVar54 < local_1b0) || (uVar72 < (ulong)plVar74[3])) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("old_s1_len >= s1->length && old_s2_len >= s2->length","src/tr.c",0x4c0,
                          "validate_case_classes");
          }
          uVar72 = plVar74[3];
          plVar74[1] = lVar2;
        }
        lStack_1c0 = lVar64;
        if ((uVar72 < local_1b0) && (truncate_set1 == '\0')) goto LAB_00106783;
      }
      else {
        if ((uVar72 < uVar54) && (truncate_set1 == '\0')) {
LAB_00106783:
          if (uVar72 != 0) {
            lStack_1c0 = lVar64;
                    /* WARNING: Could not recover jumptable at 0x001067a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar58 = (*(code *)(&DAT_001048d4 +
                               *(int *)(&DAT_001048d4 + (ulong)*(uint *)plVar74[1] * 4)))();
            return iVar58;
          }
          pcVar71 = "when not truncating set1, string2 must be non-empty";
          lStack_1c0 = lVar64;
LAB_00105e68:
          uVar60 = dcgettext(0,pcVar71,5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar60);
        }
        if (local_197 != '\0') {
          if (plVar74[3] == uVar54) {
            plVar74[2] = -2;
            iVar59 = get_next_constprop_0(plVar74,uVar72,5);
            if (iVar59 != -1) {
              do {
                iVar57 = get_next_constprop_0(plVar74);
                if (iVar57 == -1) goto LAB_00105f19;
              } while (iVar59 == iVar57);
            }
          }
LAB_001069f6:
          pcVar71 = 
          "when translating with complemented character classes,\nstring2 must map all characters in the domain to one"
          ;
          goto LAB_00105e68;
        }
      }
LAB_00105f19:
      fadvise(_stdin,2);
      auVar96 = __LC18;
      iVar79 = _UNK_00106c8c;
      iVar53 = _UNK_00106c88;
      iVar52 = _UNK_00106c84;
      iVar51 = __LC17;
      iVar50 = _UNK_00106c7c;
      iVar49 = _UNK_00106c78;
      iVar48 = _UNK_00106c74;
      iVar47 = __LC16;
      iVar46 = _UNK_00106c6c;
      iVar45 = _UNK_00106c68;
      iVar44 = _UNK_00106c64;
      iVar43 = __LC15;
      iVar42 = _UNK_00106c5c;
      iVar41 = _UNK_00106c58;
      iVar57 = _UNK_00106c54;
      iVar59 = __LC14;
      bVar77 = squeeze_repeats;
      if ((squeeze_repeats == 0) || (iVar58 != 1)) {
        if ((delete != 0) && (iVar58 == 1)) {
          set_initialize(&local_1c8,complement,in_delete_set);
          do {
            sVar62 = read_and_delete(&io_buf,0x2000);
            if (sVar62 == 0) goto LAB_00105f64;
            sVar61 = fwrite_unlocked(&io_buf,1,sVar62,_stdout);
          } while (sVar62 == sVar61);
LAB_00106ab2:
          write_error();
          goto LAB_00106ab7;
        }
        if ((iVar58 == 2) && ((squeeze_repeats & delete) != 0)) {
          set_initialize(&local_1c8,complement,in_delete_set);
          set_initialize(plVar74,0,in_squeeze_set);
          squeeze_filter_constprop_0();
        }
        else if (translating != 0) {
          if (complement == '\0') {
            pcVar71 = &xlate;
            auVar97 = __LC11;
            do {
              pcVar63 = pcVar71 + 0x10;
              iVar149 = auVar97._0_4_;
              auVar150._0_4_ = iVar149 + iVar59;
              iVar152 = auVar97._4_4_;
              auVar150._4_4_ = iVar152 + iVar57;
              iVar153 = auVar97._8_4_;
              iVar154 = auVar97._12_4_;
              auVar150._8_4_ = iVar153 + iVar41;
              auVar150._12_4_ = iVar154 + iVar42;
              auVar115._0_12_ = auVar97._0_12_;
              auVar115._12_2_ = auVar97._6_2_;
              auVar115._14_2_ = (short)((uint)(iVar152 + iVar44) >> 0x10);
              auVar114._12_4_ = auVar115._12_4_;
              auVar114._0_10_ = auVar97._0_10_;
              uVar143 = (undefined2)(iVar152 + iVar44);
              auVar114._10_2_ = uVar143;
              auVar113._10_6_ = auVar114._10_6_;
              auVar113._0_8_ = auVar97._0_8_;
              auVar113._8_2_ = auVar97._4_2_;
              uVar142 = (undefined2)((uint)(iVar149 + iVar43) >> 0x10);
              auVar29._2_8_ = auVar113._8_8_;
              auVar29._0_2_ = uVar142;
              auVar29._10_6_ = 0;
              auVar123._0_2_ = auVar97._0_2_;
              auVar112._12_4_ = 0;
              auVar112._0_12_ = SUB1612(auVar29 << 0x30,4);
              auVar112 = auVar112 << 0x20;
              uVar144 = (undefined2)(iVar153 + iVar45);
              auVar119._0_12_ = auVar112._0_12_;
              auVar119._12_2_ = uVar142;
              auVar119._14_2_ = (short)((uint)(iVar153 + iVar45) >> 0x10);
              auVar118._12_4_ = auVar119._12_4_;
              auVar118._0_10_ = auVar112._0_10_;
              auVar118._10_2_ = auVar97._10_2_;
              auVar117._10_6_ = auVar118._10_6_;
              auVar117._0_8_ = auVar112._0_8_;
              auVar117._8_2_ = auVar97._2_2_;
              auVar30._2_8_ = auVar117._8_8_;
              auVar30._0_2_ = uVar144;
              auVar30._10_6_ = 0;
              auVar116._12_4_ = 0;
              auVar116._0_12_ = SUB1612(auVar30 << 0x30,4);
              auVar116 = auVar116 << 0x20;
              iVar58 = iVar149 + iVar47;
              iVar110 = iVar152 + iVar48;
              auVar80._0_8_ = CONCAT44(iVar110,iVar58);
              auVar80._8_4_ = iVar153 + iVar49;
              auVar122._0_12_ = auVar116._0_12_;
              auVar122._12_2_ = uVar144;
              auVar122._14_2_ = (short)(iVar154 + iVar46);
              auVar121._12_4_ = auVar122._12_4_;
              auVar121._0_10_ = auVar116._0_10_;
              auVar121._10_2_ = uVar143;
              auVar120._10_6_ = auVar121._10_6_;
              auVar120._0_8_ = auVar116._0_8_;
              auVar120._8_2_ = (short)(iVar149 + iVar43);
              auVar123._8_8_ = auVar120._8_8_;
              auVar123._6_2_ = auVar97._12_2_;
              auVar123._4_2_ = auVar97._8_2_;
              auVar123._2_2_ = auVar97._4_2_;
              auVar87._12_2_ = (short)((uint)iVar110 >> 0x10);
              auVar87._0_12_ = auVar80;
              auVar87._14_2_ = (short)((uint)(iVar152 + iVar52) >> 0x10);
              auVar86._12_4_ = auVar87._12_4_;
              auVar86._0_10_ = auVar80._0_10_;
              uVar143 = (undefined2)(iVar152 + iVar52);
              auVar86._10_2_ = uVar143;
              auVar85._10_6_ = auVar86._10_6_;
              auVar85._8_2_ = (short)iVar110;
              auVar85._0_8_ = auVar80._0_8_;
              uVar142 = (undefined2)((uint)(iVar149 + iVar51) >> 0x10);
              auVar31._2_8_ = auVar85._8_8_;
              auVar31._0_2_ = uVar142;
              auVar31._10_6_ = 0;
              auVar95._0_2_ = (undefined2)iVar58;
              auVar84._12_4_ = 0;
              auVar84._0_12_ = SUB1612(auVar31 << 0x30,4);
              auVar84 = auVar84 << 0x20;
              auVar123 = auVar123 & auVar96;
              uVar144 = (undefined2)(iVar153 + iVar53);
              auVar91._0_12_ = auVar84._0_12_;
              auVar91._12_2_ = uVar142;
              auVar91._14_2_ = (short)((uint)(iVar153 + iVar53) >> 0x10);
              auVar90._12_4_ = auVar91._12_4_;
              auVar90._0_10_ = auVar84._0_10_;
              auVar90._10_2_ = (short)((uint)auVar80._8_4_ >> 0x10);
              auVar89._10_6_ = auVar90._10_6_;
              auVar89._0_8_ = auVar84._0_8_;
              auVar89._8_2_ = (short)((uint)iVar58 >> 0x10);
              auVar32._2_8_ = auVar89._8_8_;
              auVar32._0_2_ = uVar144;
              auVar32._10_6_ = 0;
              auVar88._12_4_ = 0;
              auVar88._0_12_ = SUB1612(auVar32 << 0x30,4);
              auVar88 = auVar88 << 0x20;
              auVar94._0_12_ = auVar88._0_12_;
              auVar94._12_2_ = uVar144;
              auVar94._14_2_ = (short)(iVar154 + iVar79);
              auVar93._12_4_ = auVar94._12_4_;
              auVar93._0_10_ = auVar88._0_10_;
              auVar93._10_2_ = uVar143;
              auVar92._10_6_ = auVar93._10_6_;
              auVar92._0_8_ = auVar88._0_8_;
              auVar92._8_2_ = (short)(iVar149 + iVar51);
              auVar95._8_8_ = auVar92._8_8_;
              auVar95._6_2_ = (short)(iVar154 + iVar50);
              auVar95._4_2_ = (short)auVar80._8_4_;
              auVar95._2_2_ = (short)iVar110;
              auVar95 = auVar95 & auVar96;
              sVar111 = auVar123._0_2_;
              sVar3 = auVar123._2_2_;
              sVar4 = auVar123._4_2_;
              sVar5 = auVar123._6_2_;
              sVar6 = auVar123._8_2_;
              sVar7 = auVar123._10_2_;
              sVar8 = auVar123._12_2_;
              sVar9 = auVar123._14_2_;
              sVar10 = auVar95._0_2_;
              sVar11 = auVar95._2_2_;
              sVar12 = auVar95._4_2_;
              sVar13 = auVar95._6_2_;
              sVar14 = auVar95._8_2_;
              sVar15 = auVar95._10_2_;
              sVar16 = auVar95._12_2_;
              sVar17 = auVar95._14_2_;
              *pcVar71 = (0 < sVar111) * (sVar111 < 0x100) * auVar123[0] - (0xff < sVar111);
              pcVar71[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar123[2] - (0xff < sVar3);
              pcVar71[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar123[4] - (0xff < sVar4);
              pcVar71[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar123[6] - (0xff < sVar5);
              pcVar71[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar123[8] - (0xff < sVar6);
              pcVar71[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar123[10] - (0xff < sVar7);
              pcVar71[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar123[0xc] - (0xff < sVar8);
              pcVar71[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar123[0xe] - (0xff < sVar9);
              pcVar71[8] = (0 < sVar10) * (sVar10 < 0x100) * auVar95[0] - (0xff < sVar10);
              pcVar71[9] = (0 < sVar11) * (sVar11 < 0x100) * auVar95[2] - (0xff < sVar11);
              pcVar71[10] = (0 < sVar12) * (sVar12 < 0x100) * auVar95[4] - (0xff < sVar12);
              pcVar71[0xb] = (0 < sVar13) * (sVar13 < 0x100) * auVar95[6] - (0xff < sVar13);
              pcVar71[0xc] = (0 < sVar14) * (sVar14 < 0x100) * auVar95[8] - (0xff < sVar14);
              pcVar71[0xd] = (0 < sVar15) * (sVar15 < 0x100) * auVar95[10] - (0xff < sVar15);
              pcVar71[0xe] = (0 < sVar16) * (sVar16 < 0x100) * auVar95[0xc] - (0xff < sVar16);
              pcVar71[0xf] = (0 < sVar17) * (sVar17 < 0x100) * auVar95[0xe] - (0xff < sVar17);
              pcVar71 = pcVar63;
              auVar97 = auVar150;
            } while (pcVar63 != in_delete_set);
            lVar64 = -2;
            local_1b8 = -2;
            do {
              plVar74[2] = lVar64;
              while( true ) {
                iVar58 = get_next(&local_1c8,&local_1d0);
                iVar59 = get_next(plVar74,&local_1cc);
                if (local_1d0 == 0) break;
                if ((local_1d0 == 1) && (local_1cc == 0)) {
                  ppuVar65 = __ctype_b_loc();
                  lVar64 = 0;
                  puVar1 = *ppuVar65;
                  do {
                    if ((*(byte *)((long)puVar1 + lVar64 * 2 + 1) & 1) != 0) {
                      pp_Var66 = __ctype_tolower_loc();
                      (&xlate)[lVar64] = (char)(*pp_Var66)[lVar64];
                    }
                    lVar64 = lVar64 + 1;
                  } while (lVar64 != 0x100);
                  goto LAB_001061dd;
                }
LAB_00106157:
                if (iVar58 == -1) goto LAB_001067ef;
                if (iVar59 == -1) {
                  if ((iVar58 != -1) && (truncate_set1 == '\0')) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("c1 == -1 || truncate_set1","src/tr.c",0x755,"main");
                  }
                  goto LAB_001067ef;
                }
                (&xlate)[iVar58] = (char)iVar59;
                if (local_1cc != 2) goto LAB_001061dd;
              }
              if (local_1cc != 1) goto LAB_00106157;
              ppuVar65 = __ctype_b_loc();
              lVar64 = 0;
              puVar1 = *ppuVar65;
              do {
                if ((*(byte *)((long)puVar1 + lVar64 * 2 + 1) & 2) != 0) {
                  pp_Var66 = __ctype_toupper_loc();
                  (&xlate)[lVar64] = (char)(*pp_Var66)[lVar64];
                }
                lVar64 = lVar64 + 1;
              } while (lVar64 != 0x100);
LAB_001061dd:
              local_1b8 = -1;
              lStack_1c0 = *(long *)(lStack_1c0 + 8);
              plVar74[1] = *(long *)(plVar74[1] + 8);
              lVar64 = -1;
            } while( true );
          }
          set_initialize(&local_1c8,0,in_delete_set);
          auVar96 = __LC18;
          iVar53 = _UNK_00106c8c;
          iVar52 = _UNK_00106c88;
          iVar51 = _UNK_00106c84;
          iVar50 = __LC17;
          iVar49 = _UNK_00106c7c;
          iVar48 = _UNK_00106c78;
          iVar47 = _UNK_00106c74;
          iVar46 = __LC16;
          iVar45 = _UNK_00106c6c;
          iVar44 = _UNK_00106c68;
          iVar43 = _UNK_00106c64;
          iVar42 = __LC15;
          iVar41 = _UNK_00106c5c;
          iVar57 = _UNK_00106c58;
          iVar59 = _UNK_00106c54;
          iVar58 = __LC14;
          plVar74[2] = -2;
          pcVar71 = &xlate;
          auVar97 = __LC11;
          do {
            pcVar63 = pcVar71 + 0x10;
            iVar149 = auVar97._0_4_;
            auVar151._0_4_ = iVar149 + iVar58;
            iVar152 = auVar97._4_4_;
            auVar151._4_4_ = iVar152 + iVar59;
            iVar153 = auVar97._8_4_;
            iVar154 = auVar97._12_4_;
            auVar151._8_4_ = iVar153 + iVar57;
            auVar151._12_4_ = iVar154 + iVar41;
            auVar133._0_12_ = auVar97._0_12_;
            auVar133._12_2_ = auVar97._6_2_;
            auVar133._14_2_ = (short)((uint)(iVar152 + iVar43) >> 0x10);
            auVar132._12_4_ = auVar133._12_4_;
            auVar132._0_10_ = auVar97._0_10_;
            uVar143 = (undefined2)(iVar152 + iVar43);
            auVar132._10_2_ = uVar143;
            auVar131._10_6_ = auVar132._10_6_;
            auVar131._0_8_ = auVar97._0_8_;
            auVar131._8_2_ = auVar97._4_2_;
            uVar142 = (undefined2)((uint)(iVar149 + iVar42) >> 0x10);
            auVar35._2_8_ = auVar131._8_8_;
            auVar35._0_2_ = uVar142;
            auVar35._10_6_ = 0;
            auVar141._0_2_ = auVar97._0_2_;
            auVar130._12_4_ = 0;
            auVar130._0_12_ = SUB1612(auVar35 << 0x30,4);
            auVar130 = auVar130 << 0x20;
            uVar144 = (undefined2)(iVar153 + iVar44);
            auVar137._0_12_ = auVar130._0_12_;
            auVar137._12_2_ = uVar142;
            auVar137._14_2_ = (short)((uint)(iVar153 + iVar44) >> 0x10);
            auVar136._12_4_ = auVar137._12_4_;
            auVar136._0_10_ = auVar130._0_10_;
            auVar136._10_2_ = auVar97._10_2_;
            auVar135._10_6_ = auVar136._10_6_;
            auVar135._0_8_ = auVar130._0_8_;
            auVar135._8_2_ = auVar97._2_2_;
            auVar36._2_8_ = auVar135._8_8_;
            auVar36._0_2_ = uVar144;
            auVar36._10_6_ = 0;
            auVar134._12_4_ = 0;
            auVar134._0_12_ = SUB1612(auVar36 << 0x30,4);
            auVar134 = auVar134 << 0x20;
            iVar79 = iVar149 + iVar46;
            iVar110 = iVar152 + iVar47;
            auVar83._0_8_ = CONCAT44(iVar110,iVar79);
            auVar83._8_4_ = iVar153 + iVar48;
            auVar140._0_12_ = auVar134._0_12_;
            auVar140._12_2_ = uVar144;
            auVar140._14_2_ = (short)(iVar154 + iVar45);
            auVar139._12_4_ = auVar140._12_4_;
            auVar139._0_10_ = auVar134._0_10_;
            auVar139._10_2_ = uVar143;
            auVar138._10_6_ = auVar139._10_6_;
            auVar138._0_8_ = auVar134._0_8_;
            auVar138._8_2_ = (short)(iVar149 + iVar42);
            auVar141._8_8_ = auVar138._8_8_;
            auVar141._6_2_ = auVar97._12_2_;
            auVar141._4_2_ = auVar97._8_2_;
            auVar141._2_2_ = auVar97._4_2_;
            auVar101._12_2_ = (short)((uint)iVar110 >> 0x10);
            auVar101._0_12_ = auVar83;
            auVar101._14_2_ = (short)((uint)(iVar152 + iVar51) >> 0x10);
            auVar100._12_4_ = auVar101._12_4_;
            auVar100._0_10_ = auVar83._0_10_;
            uVar143 = (undefined2)(iVar152 + iVar51);
            auVar100._10_2_ = uVar143;
            auVar99._10_6_ = auVar100._10_6_;
            auVar99._8_2_ = (short)iVar110;
            auVar99._0_8_ = auVar83._0_8_;
            uVar142 = (undefined2)((uint)(iVar149 + iVar50) >> 0x10);
            auVar37._2_8_ = auVar99._8_8_;
            auVar37._0_2_ = uVar142;
            auVar37._10_6_ = 0;
            auVar109._0_2_ = (undefined2)iVar79;
            auVar98._12_4_ = 0;
            auVar98._0_12_ = SUB1612(auVar37 << 0x30,4);
            auVar98 = auVar98 << 0x20;
            auVar141 = auVar141 & auVar96;
            uVar144 = (undefined2)(iVar153 + iVar52);
            auVar105._0_12_ = auVar98._0_12_;
            auVar105._12_2_ = uVar142;
            auVar105._14_2_ = (short)((uint)(iVar153 + iVar52) >> 0x10);
            auVar104._12_4_ = auVar105._12_4_;
            auVar104._0_10_ = auVar98._0_10_;
            auVar104._10_2_ = (short)((uint)auVar83._8_4_ >> 0x10);
            auVar103._10_6_ = auVar104._10_6_;
            auVar103._0_8_ = auVar98._0_8_;
            auVar103._8_2_ = (short)((uint)iVar79 >> 0x10);
            auVar38._2_8_ = auVar103._8_8_;
            auVar38._0_2_ = uVar144;
            auVar38._10_6_ = 0;
            auVar102._12_4_ = 0;
            auVar102._0_12_ = SUB1612(auVar38 << 0x30,4);
            auVar102 = auVar102 << 0x20;
            auVar108._0_12_ = auVar102._0_12_;
            auVar108._12_2_ = uVar144;
            auVar108._14_2_ = (short)(iVar154 + iVar53);
            auVar107._12_4_ = auVar108._12_4_;
            auVar107._0_10_ = auVar102._0_10_;
            auVar107._10_2_ = uVar143;
            auVar106._10_6_ = auVar107._10_6_;
            auVar106._0_8_ = auVar102._0_8_;
            auVar106._8_2_ = (short)(iVar149 + iVar50);
            auVar109._8_8_ = auVar106._8_8_;
            auVar109._6_2_ = (short)(iVar154 + iVar49);
            auVar109._4_2_ = (short)auVar83._8_4_;
            auVar109._2_2_ = (short)iVar110;
            auVar109 = auVar109 & auVar96;
            sVar111 = auVar141._0_2_;
            sVar3 = auVar141._2_2_;
            sVar4 = auVar141._4_2_;
            sVar5 = auVar141._6_2_;
            sVar6 = auVar141._8_2_;
            sVar7 = auVar141._10_2_;
            sVar8 = auVar141._12_2_;
            sVar9 = auVar141._14_2_;
            sVar10 = auVar109._0_2_;
            sVar11 = auVar109._2_2_;
            sVar12 = auVar109._4_2_;
            sVar13 = auVar109._6_2_;
            sVar14 = auVar109._8_2_;
            sVar15 = auVar109._10_2_;
            sVar16 = auVar109._12_2_;
            sVar17 = auVar109._14_2_;
            *pcVar71 = (0 < sVar111) * (sVar111 < 0x100) * auVar141[0] - (0xff < sVar111);
            pcVar71[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar141[2] - (0xff < sVar3);
            pcVar71[2] = (0 < sVar4) * (sVar4 < 0x100) * auVar141[4] - (0xff < sVar4);
            pcVar71[3] = (0 < sVar5) * (sVar5 < 0x100) * auVar141[6] - (0xff < sVar5);
            pcVar71[4] = (0 < sVar6) * (sVar6 < 0x100) * auVar141[8] - (0xff < sVar6);
            pcVar71[5] = (0 < sVar7) * (sVar7 < 0x100) * auVar141[10] - (0xff < sVar7);
            pcVar71[6] = (0 < sVar8) * (sVar8 < 0x100) * auVar141[0xc] - (0xff < sVar8);
            pcVar71[7] = (0 < sVar9) * (sVar9 < 0x100) * auVar141[0xe] - (0xff < sVar9);
            pcVar71[8] = (0 < sVar10) * (sVar10 < 0x100) * auVar109[0] - (0xff < sVar10);
            pcVar71[9] = (0 < sVar11) * (sVar11 < 0x100) * auVar109[2] - (0xff < sVar11);
            pcVar71[10] = (0 < sVar12) * (sVar12 < 0x100) * auVar109[4] - (0xff < sVar12);
            pcVar71[0xb] = (0 < sVar13) * (sVar13 < 0x100) * auVar109[6] - (0xff < sVar13);
            pcVar71[0xc] = (0 < sVar14) * (sVar14 < 0x100) * auVar109[8] - (0xff < sVar14);
            pcVar71[0xd] = (0 < sVar15) * (sVar15 < 0x100) * auVar109[10] - (0xff < sVar15);
            pcVar71[0xe] = (0 < sVar16) * (sVar16 < 0x100) * auVar109[0xc] - (0xff < sVar16);
            pcVar71[0xf] = (0 < sVar17) * (sVar17 < 0x100) * auVar109[0xe] - (0xff < sVar17);
            pcVar71 = pcVar63;
            auVar97 = auVar151;
          } while (pcVar63 != in_delete_set);
          lVar64 = 0;
          do {
            if (in_delete_set[lVar64] == '\0') {
              iVar58 = get_next_constprop_0(plVar74);
              if (iVar58 == -1) {
                if (truncate_set1 == '\0') {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("ch != -1 || truncate_set1","src/tr.c",0x720,"main");
                }
                break;
              }
              (&xlate)[lVar64] = (char)iVar58;
            }
            lVar64 = lVar64 + 1;
          } while (lVar64 != 0x100);
LAB_001067ef:
          if (bVar77 == 0) {
            do {
              sVar62 = read_and_xlate(&io_buf,0x2000);
              if (sVar62 == 0) goto LAB_00105f64;
              sVar61 = fwrite_unlocked(&io_buf,1,sVar62,_stdout);
            } while (sVar62 == sVar61);
            goto LAB_00106ab2;
          }
          set_initialize(plVar74,0,in_squeeze_set);
          squeeze_filter_constprop_0();
        }
      }
      else {
        set_initialize(&local_1c8,complement,in_squeeze_set);
        squeeze_filter_constprop_0();
      }
LAB_00105f64:
      iVar58 = close(0);
      if (iVar58 != 0) {
LAB_00106ab7:
        uVar60 = dcgettext(0,"standard input",5);
        piVar69 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar69,uVar60);
      }
      goto LAB_00105f73;
    }
  }
  iVar58 = 1;
LAB_00105f73:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar58;
}


