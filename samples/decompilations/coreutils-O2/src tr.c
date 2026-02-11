
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
  (*(code *)(&DAT_00103cb0 + *(int *)(&DAT_00103cb0 + (ulong)param_1 * 4)))();
  return;
}



undefined8 get_next(long *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint *puVar3;
  
  lVar1 = param_1[2];
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 2;
  }
  if (lVar1 == -2) {
    puVar3 = *(uint **)(*param_1 + 8);
    param_1[2] = -1;
    param_1[1] = (long)puVar3;
  }
  else {
    puVar3 = (uint *)param_1[1];
  }
  if (puVar3 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(&DAT_00103ce0 + *(int *)(&DAT_00103ce0 + (ulong)*puVar3 * 4)))();
    return uVar2;
  }
  return 0xffffffff;
}



byte * make_printable_char(byte param_1)

{
  byte *pbVar1;
  ushort **ppuVar2;
  
  pbVar1 = (byte *)xmalloc(5);
  ppuVar2 = __ctype_b_loc();
  if ((*(byte *)((long)*ppuVar2 + (ulong)param_1 * 2 + 1) & 0x40) != 0) {
    *pbVar1 = param_1;
    pbVar1[1] = 0;
    return pbVar1;
  }
  __sprintf_chk(pbVar1,2,5,"\\%03o",param_1);
  return pbVar1;
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
LAB_001005f1:
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
          __src = &_LC11;
          switch(bVar1) {
          case 8:
            __src = &_LC5;
            break;
          case 9:
            __src = &_LC9;
            break;
          case 10:
            __src = &_LC7;
            break;
          case 0xb:
            __src = &_LC10;
            break;
          case 0xc:
            __src = &_LC6;
            break;
          case 0xd:
            __src = &_LC8;
          }
        }
      }
      else {
        __src = &_LC4;
        if (bVar1 != 0x5c) goto LAB_001005f1;
      }
      param_1 = param_1 + 1;
      __dest = stpcpy(__dest,(char *)__src);
    } while (param_1 != pbVar4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar2;
}



void get_spec_stats(long *param_1)

{
  uint *puVar1;
  
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  puVar1 = *(uint **)(*param_1 + 8);
  *(undefined1 *)((long)param_1 + 0x32) = 0;
  if (puVar1 != (uint *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001006ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00103d0c + *(int *)(&DAT_00103d0c + (ulong)*puVar1 * 4)))();
    return;
  }
  param_1[3] = 0;
  return;
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



void set_initialize(long param_1,char param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0xfffffffffffffffe;
  while( true ) {
    iVar2 = get_next(param_1,0);
    if (iVar2 == -1) break;
    param_3[iVar2] = 1;
  }
  if (param_2 != '\0') {
    pbVar1 = param_3 + 0x100;
    do {
      *param_3 = *param_3 ^ 1;
      param_3[1] = param_3[1] ^ 1;
      param_3 = param_3 + 2;
    } while (param_3 != pbVar1);
  }
  return;
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
  code *pcVar6;
  undefined1 *__ptr;
  byte bVar7;
  ulong uVar8;
  
  pcVar6 = (code *)0x0;
  lVar1 = safe_read(0,param_1,param_2);
  if (-1 < lVar1) {
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
      goto LAB_00100ac6;
    }
    uVar5 = 0;
    do {
      if ((int)__n != (int)(char)(&io_buf)[uVar5]) {
        if (uVar2 <= uVar5) break;
LAB_00100abf:
        __ptr = &io_buf + uVar5;
        uVar3 = uVar5;
LAB_00100ac6:
        do {
          if (in_squeeze_set[(byte)(&io_buf)[uVar5]] != '\0') {
            uVar8 = uVar5;
            if (uVar2 == uVar5) goto LAB_00100b80;
            if (uVar5 < uVar2) {
              bVar7 = (&io_buf)[uVar5];
              uVar8 = uVar5 + 1;
              goto LAB_00100af5;
            }
            __n = uVar2 - uVar3;
            if (__n == 0) goto LAB_00100bd0;
            goto LAB_00100c00;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 < uVar2);
        uVar8 = uVar5;
        if (uVar2 != uVar5) {
LAB_00100b99:
          __n = uVar2 - uVar3;
          uVar5 = uVar8;
          if (__n != 0) {
LAB_00100c00:
            sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout);
            uVar5 = uVar8;
            if (sVar4 != __n) goto LAB_00100b35;
          }
          if (uVar2 <= uVar5) {
LAB_00100bd0:
            __n = 0x7fffffff;
            break;
          }
          goto LAB_00100abf;
        }
LAB_00100b80:
        bVar7 = in_squeeze_set[uVar8 + 0xff];
        uVar5 = uVar8 - 1;
        if (in_squeeze_set[bVar7] == '\0') goto LAB_00100b99;
LAB_00100af5:
        __n = uVar5 - uVar3;
        if ((uVar5 == 0) || (in_squeeze_set[uVar5 + 0xff] != bVar7)) {
          __n = __n + 1;
        }
        if ((__n == 0) || (sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout), __n == sVar4)) {
          __n = (size_t)(uint)(int)(char)bVar7;
          uVar5 = uVar8;
          goto joined_r0x00100bb7;
        }
LAB_00100b35:
        uVar5 = write_error();
      }
      uVar5 = uVar5 + 1;
joined_r0x00100bb7:
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
      goto LAB_00100ac6;
    }
    uVar4 = 0;
    do {
      if ((int)__n != (int)(char)(&io_buf)[uVar4]) {
        if (uVar1 <= uVar4) break;
LAB_00100abf:
        __ptr = &io_buf + uVar4;
        uVar2 = uVar4;
LAB_00100ac6:
        do {
          if (in_squeeze_set[(byte)(&io_buf)[uVar4]] != '\0') {
            uVar6 = uVar4;
            if (uVar1 == uVar4) goto LAB_00100b80;
            if (uVar4 < uVar1) {
              bVar5 = (&io_buf)[uVar4];
              uVar6 = uVar4 + 1;
              goto LAB_00100af5;
            }
            __n = uVar1 - uVar2;
            if (__n == 0) goto LAB_00100bd0;
            goto LAB_00100c00;
          }
          uVar4 = uVar4 + 2;
        } while (uVar4 < uVar1);
        uVar6 = uVar4;
        if (uVar1 != uVar4) {
LAB_00100b99:
          __n = uVar1 - uVar2;
          uVar4 = uVar6;
          if (__n != 0) {
LAB_00100c00:
            sVar3 = fwrite_unlocked(__ptr,1,__n,_stdout);
            uVar4 = uVar6;
            if (sVar3 != __n) goto LAB_00100b35;
          }
          if (uVar1 <= uVar4) {
LAB_00100bd0:
            __n = 0x7fffffff;
            break;
          }
          goto LAB_00100abf;
        }
LAB_00100b80:
        bVar5 = in_squeeze_set[uVar6 + 0xff];
        uVar4 = uVar6 - 1;
        if (in_squeeze_set[bVar5] == '\0') goto LAB_00100b99;
LAB_00100af5:
        __n = uVar4 - uVar2;
        if ((uVar4 == 0) || (in_squeeze_set[uVar4 + 0xff] != bVar5)) {
          __n = __n + 1;
        }
        if ((__n == 0) || (sVar3 = fwrite_unlocked(__ptr,1,__n,_stdout), __n == sVar3)) {
          __n = (size_t)(uint)(int)(char)bVar5;
          uVar4 = uVar6;
          goto joined_r0x00100bb7;
        }
LAB_00100b35:
        uVar4 = write_error();
      }
      uVar4 = uVar4 + 1;
joined_r0x00100bb7:
    } while (uVar4 < uVar1);
  } while( true );
}



ulong read_and_xlate(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  
  lVar7 = 0;
  pbVar5 = param_1;
  uVar1 = safe_read(0,param_1,param_2);
  if (-1 < (long)uVar1) {
    if (uVar1 != 0) {
      pbVar5 = param_1;
      do {
        pbVar8 = pbVar5 + 1;
        *pbVar5 = (&xlate)[*pbVar5];
        pbVar5 = pbVar8;
      } while (pbVar8 != param_1 + uVar1);
    }
    return uVar1;
  }
  plain_read_part_0();
  do {
    uVar1 = safe_read(0,lVar7,pbVar5);
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
      uVar6 = uVar4;
      uVar4 = uVar6 + 1;
      if (in_delete_set[*(byte *)(lVar7 + uVar6)] != '\0') goto LAB_00100cf1;
    } while (uVar1 != uVar4);
    uVar4 = uVar6 + 2;
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      return uVar1;
    }
    do {
      if (in_delete_set[*(byte *)(lVar7 + uVar4)] == '\0') {
        *(byte *)(lVar7 + uVar6) = *(byte *)(lVar7 + uVar4);
        uVar6 = uVar6 + 1;
      }
      uVar4 = uVar4 + 1;
LAB_00100cf1:
    } while (uVar4 < uVar1);
  } while (uVar6 == 0);
  return uVar6;
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
      if (in_delete_set[*(byte *)(param_1 + uVar5)] != '\0') goto LAB_00100cf1;
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
LAB_00100cf1:
    } while (uVar4 < uVar1);
  } while (uVar5 == 0);
  return uVar5;
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
  undefined4 *puVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  char *pcVar20;
  ulong uVar21;
  byte bVar22;
  ulong uVar23;
  undefined1 *puVar24;
  ulong uVar25;
  ulong uVar26;
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
  bVar22 = *param_1;
  local_50 = __ptr_00;
  if (bVar22 != 0) {
    uVar21 = 0;
    uVar18 = 0;
    do {
      uVar14 = (uint)uVar21;
      uVar17 = (int)uVar18 + 1;
      if (bVar22 == 0x5c) {
        uVar16 = uVar14 + 1;
        bVar22 = param_1[uVar16];
        *(undefined1 *)((long)__ptr_00 + uVar18) = 1;
        if (bVar22 == 0) {
          uVar11 = dcgettext(0,"warning: an unescaped backslash at end of string is not portable",5)
          ;
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar11);
        }
        uVar19 = bVar22 - 0x30;
        switch(uVar19 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          bVar22 = (byte)uVar19;
          if ((int)(char)param_1[uVar14 + 2] - 0x30U < 8) {
            uVar16 = ((int)(char)param_1[uVar14 + 2] - 0x30U) + uVar19 * 8;
            bVar22 = (byte)uVar16;
            uVar19 = (int)(char)param_1[uVar14 + 3] - 0x30;
            if (uVar19 < 8) {
              if (0xff < (int)(uVar19 + (uVar16 & 0xff) * 8)) {
                uVar11 = dcgettext(0,
                                   "warning: the ambiguous octal escape \\%c%c%c is being\n\tinterpreted as the 2-byte sequence \\0%c%c, %c"
                                   ,5);
                    /* WARNING: Subroutine does not return */
                error(0,0,uVar11);
              }
              bVar22 = (char)uVar19 + bVar22 * '\b';
              uVar16 = uVar14 + 3;
            }
            else {
              uVar16 = uVar14 + 2;
            }
          }
          break;
        case 0x2c:
          bVar22 = 0x5c;
          break;
        case 0x31:
          bVar22 = 7;
          break;
        case 0x32:
          bVar22 = 8;
          break;
        case 0x36:
          bVar22 = 0xc;
          break;
        case 0x3e:
          bVar22 = 10;
          break;
        case 0x42:
          bVar22 = 0xd;
          break;
        case 0x44:
          bVar22 = 9;
          break;
        case 0x46:
          bVar22 = 0xb;
        }
        uVar14 = uVar16;
      }
      uVar21 = (ulong)(uVar14 + 1);
      *(byte *)((long)__ptr + uVar18) = bVar22;
      bVar22 = param_1[uVar21];
      uVar18 = (ulong)uVar17;
    } while (bVar22 != 0);
    uVar18 = (ulong)uVar17;
    local_48 = uVar18;
    if (uVar18 < 3) {
      uVar25 = 0;
    }
    else {
      uVar21 = 2;
      uVar25 = 0;
      do {
        bVar22 = *(byte *)((long)__ptr + uVar25);
        cVar1 = *(char *)((long)__ptr + uVar25 + 1);
        uVar26 = uVar25 + 1;
        if ((bVar22 == 0x5b) && (*(char *)((long)__ptr_00 + uVar25) == '\0')) {
          if (((cVar1 != ':') && (cVar1 != '=')) || (*(char *)((long)__ptr_00 + uVar26) != '\0')) {
LAB_00100efe:
            if ((*(char *)((long)__ptr + uVar21) == '*') &&
               (*(char *)((long)__ptr_00 + uVar21) == '\0')) {
              for (uVar23 = uVar25 + 3;
                  (uVar23 < uVar18 && (*(char *)((long)__ptr_00 + uVar23) == '\0'));
                  uVar23 = uVar23 + 1) {
                if (*(char *)((long)__ptr + uVar23) == ']') {
                  lVar15 = (uVar23 - uVar26) + -2;
                  if (lVar15 == 0) {
                    local_68 = 0;
                  }
                  else {
                    pcVar20 = (char *)((long)__ptr + uVar25 + 3);
                    iVar7 = xstrtoumax(pcVar20,&local_60,(*pcVar20 != '0') * '\x02' + '\b',&local_68
                                       ,0);
                    if (((iVar7 != 0) || (local_68 == -1)) || (local_60 != pcVar20 + lVar15)) {
                      uVar11 = make_printable_str(pcVar20,lVar15);
                      uVar11 = quote(uVar11);
                      pcVar20 = "invalid repeat count %s in [c*n] construct";
                      goto LAB_0010138b;
                    }
                  }
                  lVar4 = local_68;
                  uVar26 = uVar23 + 1;
                  puVar9 = (undefined4 *)xmalloc(0x20);
                  *(undefined8 *)(puVar9 + 2) = 0;
                  lVar15 = *(long *)(param_2 + 8);
                  *puVar9 = 4;
                  *(char *)(puVar9 + 4) = cVar1;
                  *(long *)(puVar9 + 6) = lVar4;
                  *(undefined4 **)(lVar15 + 8) = puVar9;
                  goto LAB_00100fea;
                }
              }
            }
            goto LAB_00100e78;
          }
          uVar23 = uVar21;
          do {
            uVar5 = uVar23;
            if (uVar18 - 1 <= uVar5) goto LAB_00100efe;
            uVar23 = uVar5 + 1;
          } while ((((*(char *)((long)__ptr + uVar5) != cVar1) ||
                    (*(char *)((long)__ptr + uVar5 + 1) != ']')) ||
                   (*(char *)((long)__ptr_00 + uVar5) != '\0')) ||
                  (*(char *)((long)__ptr_00 + uVar5 + 1) != '\0'));
          sVar8 = (uVar5 - uVar25) - 2;
          if (sVar8 == 0) {
            pcVar20 = "missing character class name \'[::]\'";
            if (cVar1 != ':') {
              pcVar20 = "missing equivalence class character \'[==]\'";
            }
            uVar11 = dcgettext(0,pcVar20,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar11);
          }
          pcVar20 = (char *)((long)__ptr + uVar21);
          if (cVar1 == ':') {
            lVar15 = 0;
            do {
              __s2 = (&char_class_name)[lVar15];
              iVar7 = strncmp(pcVar20,__s2,sVar8);
              if ((iVar7 == 0) && (sVar10 = strlen(__s2), sVar8 == sVar10)) {
                puVar9 = (undefined4 *)xmalloc(0x20);
                *(undefined8 *)(puVar9 + 2) = 0;
                lVar4 = *(long *)(param_2 + 8);
                *puVar9 = 2;
                puVar9[4] = (int)lVar15;
                *(undefined4 **)(lVar4 + 8) = puVar9;
                goto LAB_001012a2;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 != 0xc);
            cVar6 = star_digits_closebracket(&local_58);
            if (cVar6 == '\0') {
              uVar11 = make_printable_str(pcVar20,sVar8);
              uVar11 = quote(uVar11);
              pcVar20 = "invalid character class %s";
LAB_0010138b:
              uVar12 = dcgettext(0,pcVar20,5);
LAB_001011d0:
                    /* WARNING: Subroutine does not return */
              error(0,0,uVar12,uVar11);
            }
            goto LAB_00100efe;
          }
          if (sVar8 != 1) {
            cVar6 = star_digits_closebracket(&local_58);
            if (cVar6 == '\0') {
              uVar11 = make_printable_str(pcVar20,sVar8);
              uVar12 = dcgettext(0,"%s: equivalence class operand must be a single character",5);
              goto LAB_001011d0;
            }
            goto LAB_00100efe;
          }
          puVar9 = (undefined4 *)xmalloc();
          *(undefined8 *)(puVar9 + 2) = 0;
          *puVar9 = 3;
          *(char *)(puVar9 + 4) = *pcVar20;
          *(undefined4 **)(*(long *)(param_2 + 8) + 8) = puVar9;
LAB_001012a2:
          uVar26 = uVar5 + 2;
LAB_00100fea:
          *(undefined4 **)(param_2 + 8) = puVar9;
LAB_00100ebc:
          uVar21 = uVar26 + 2;
          uVar25 = uVar26;
        }
        else {
LAB_00100e78:
          if ((cVar1 != '-') || (*(char *)((long)__ptr_00 + uVar26) != '\0')) {
            puVar9 = (undefined4 *)xmalloc(0x20);
            *(undefined8 *)(puVar9 + 2) = 0;
            lVar15 = *(long *)(param_2 + 8);
            *puVar9 = 0;
            *(byte *)(puVar9 + 4) = bVar22;
            *(undefined4 **)(lVar15 + 8) = puVar9;
            *(undefined4 **)(param_2 + 8) = puVar9;
            goto LAB_00100ebc;
          }
          bVar2 = *(byte *)((long)__ptr + uVar21);
          if (bVar2 < bVar22) {
            uVar11 = make_printable_char(bVar22);
            uVar12 = make_printable_char(bVar2);
            uVar13 = dcgettext(0,
                               "range-endpoints of \'%s-%s\' are in reverse collating sequence order"
                               ,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar13,uVar11,uVar12);
          }
          puVar9 = (undefined4 *)xmalloc(0x20);
          uVar21 = uVar25 + 5;
          *(undefined8 *)(puVar9 + 2) = 0;
          lVar15 = *(long *)(param_2 + 8);
          *puVar9 = 1;
          *(ushort *)(puVar9 + 4) = CONCAT11(bVar2,bVar22);
          *(undefined4 **)(lVar15 + 8) = puVar9;
          *(undefined4 **)(param_2 + 8) = puVar9;
          uVar25 = uVar25 + 3;
        }
      } while (uVar21 < uVar18);
    }
    puVar24 = (undefined1 *)((long)__ptr + uVar25);
    if (uVar25 < uVar18) {
      do {
        uVar3 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar9 = (undefined4 *)xmalloc(0x20);
        lVar15 = *(long *)(param_2 + 8);
        *(undefined8 *)(puVar9 + 2) = 0;
        *puVar9 = 0;
        *(undefined1 *)(puVar9 + 4) = uVar3;
        *(undefined4 **)(lVar15 + 8) = puVar9;
        *(undefined4 **)(param_2 + 8) = puVar9;
      } while ((undefined1 *)((long)__ptr + uVar18) != puVar24);
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
    goto LAB_001015e9;
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
    if (pcVar4 != (char *)0x0) goto LAB_0010184c;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC32);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010184c:
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
LAB_001015e9:
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
  iVar58 = 0x103fff;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00105190:
  iVar59 = 0x106060;
  iVar57 = getopt_long(param_1,param_2,"+AcCdst",long_options,0);
  if (iVar57 == -1) goto LAB_00105294;
  if (iVar57 == 99) {
LAB_0010523a:
    complement = '\x01';
    goto LAB_00105190;
  }
  if (iVar57 < 100) {
    if (iVar57 == 0x41) {
      setlocale(3,"C");
      setlocale(0,"C");
      goto LAB_00105190;
    }
    if (0x41 < iVar57) {
      if (iVar57 == 0x43) goto LAB_0010523a;
      goto LAB_00105866;
    }
    if (iVar57 == -0x83) {
      uVar60 = proper_name_lite("Jim Meyering","Jim Meyering");
      version_etc(_stdout,&_LC32,"GNU coreutils",_Version,uVar60,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar57 == -0x82) {
      usage(0);
      goto LAB_00105f62;
    }
  }
  else {
    if (iVar57 == 0x73) {
      squeeze_repeats = 1;
      goto LAB_00105190;
    }
    if (iVar57 == 0x74) {
      truncate_set1 = '\x01';
      goto LAB_00105190;
    }
    if (iVar57 == 100) {
      delete = 1;
      goto LAB_00105190;
    }
  }
LAB_00105866:
  bVar56 = usage(1);
  bVar70 = extraout_DL;
  goto LAB_00105870;
LAB_00105294:
  iVar58 = param_1 - _optind;
  iVar59 = _optind;
  bVar56 = delete;
  bVar70 = squeeze_repeats;
  if (iVar58 == 2) {
LAB_00105870:
    translating = bVar56 ^ 1;
    if (bVar56 != bVar70) {
      if (bVar70 < bVar56) {
LAB_001052cf:
        iVar57 = 1;
        goto LAB_001052d4;
      }
      goto LAB_001052e6;
    }
    local_1c8 = xmalloc(0x20);
    *(undefined8 *)(local_1c8 + 8) = 0;
    lStack_1c0 = local_1c8;
    cVar55 = parse_str(param_2[_optind]);
    if (cVar55 != '\0') {
LAB_001057ac:
      plVar74 = &local_188;
      local_188 = xmalloc(0x20);
      *(undefined8 *)(local_188 + 8) = 0;
      lStack_180 = local_188;
      cVar55 = parse_str(param_2[(long)_optind + 1],plVar74);
      if (cVar55 != '\0') goto LAB_00105332;
    }
  }
  else {
    translating = 0;
    if (delete == squeeze_repeats) {
      iVar57 = 2;
      if (iVar58 < 2) goto LAB_001058d8;
      goto LAB_001057fb;
    }
    if (squeeze_repeats < delete) goto LAB_001052cf;
    iVar57 = 2;
LAB_001052d4:
    if (iVar58 < 1) {
LAB_001058d8:
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
LAB_001057fb:
      uVar60 = quote(param_2[iVar57 + iVar59]);
      uVar67 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar67,uVar60);
    }
LAB_001052e6:
    local_1c8 = xmalloc();
    *(undefined8 *)(local_1c8 + 8) = 0;
    lStack_1c0 = local_1c8;
    cVar55 = parse_str(param_2[_optind]);
    if (cVar55 != '\0') {
      plVar74 = (long *)0x0;
      if (iVar58 == 2) goto LAB_001057ac;
LAB_00105332:
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
        while (iVar57 = get_next(&local_1c8,0), iVar57 != -1) {
          bVar77 = local_148[iVar57];
          local_148[iVar57] = 1;
          iVar59 = iVar59 - (uint)(bVar77 ^ 1);
        }
        local_1b0 = (ulong)iVar59;
      }
      uVar54 = local_1b0;
      pcVar71 = "the [c*] repeat construct may not appear in string1";
      if (local_1a8 != 0) goto LAB_001053c8;
      if (plVar74 == (long *)0x0) goto LAB_0010547d;
      get_spec_stats(plVar74,"the [c*] repeat construct may not appear in string1",5);
      lVar64 = lStack_1c0;
      uVar72 = plVar74[3];
      if ((uVar54 < uVar72) || (plVar74[4] != 1)) {
        if (1 < (ulong)plVar74[4]) {
          pcVar71 = "only one [c*] repeat construct may appear in string2";
          lStack_1c0 = lVar64;
          goto LAB_001053c8;
        }
        if (translating == 0) {
          lStack_1c0 = lVar64;
          if (plVar74[4] != 0) goto LAB_001053bc;
          goto LAB_0010547d;
        }
      }
      else {
        plVar74[3] = uVar54;
        bVar75 = translating == 0;
        *(ulong *)(plVar74[5] + 0x18) = uVar54 - uVar72;
        if (bVar75) {
LAB_001053bc:
          pcVar71 = "the [c*] construct may appear in string2 only when translating";
          lStack_1c0 = lVar64;
          goto LAB_001053c8;
        }
      }
      pcVar71 = "[=c=] expressions may not appear in string2 when translating";
      lStack_1c0 = lVar64;
      if (((char)plVar74[6] != '\0') ||
         (pcVar71 = 
          "when translating, the only character classes that may appear in\nstring2 are \'upper\' and \'lower\'"
         , *(char *)((long)plVar74 + 0x32) != '\0')) goto LAB_001053c8;
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
            bVar75 = (puVar1[2] & _UNK_00106214) != 0;
            bVar20 = (puVar1[3] & _UNK_00106216) != 0;
            uVar18 = (ushort)((*puVar1 & __LC74) != 0);
            uVar19 = (ushort)((puVar1[1] & _UNK_00106212) != 0);
            sVar111 = -(ushort)bVar20;
            uVar21 = (ushort)((puVar1[4] & _UNK_00106218) != 0);
            uVar22 = (ushort)((puVar1[5] & _UNK_0010621a) != 0);
            uVar23 = (ushort)((puVar1[6] & _UNK_0010621c) != 0);
            uVar24 = (ushort)((puVar1[7] & _UNK_0010621e) != 0);
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
            bVar75 = (puVar1[2] & _UNK_00106224) != 0;
            bVar20 = (puVar1[3] & _UNK_00106226) != 0;
            uVar18 = (ushort)((*puVar1 & __LC75) != 0);
            uVar19 = (ushort)((puVar1[1] & _UNK_00106222) != 0);
            sVar111 = -(ushort)bVar20;
            uVar21 = (ushort)((puVar1[4] & _UNK_00106228) != 0);
            uVar22 = (ushort)((puVar1[5] & _UNK_0010622a) != 0);
            uVar23 = (ushort)((puVar1[6] & _UNK_0010622c) != 0);
            uVar24 = (ushort)((puVar1[7] & _UNK_0010622e) != 0);
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
LAB_00105bd2:
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
              if ((cVar76 != '\0') && (local_1d0 != 2)) goto LAB_00105bd2;
              pcVar71 = "misaligned [:upper:] and/or [:lower:] construct";
              goto LAB_001053c8;
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
        if ((uVar72 < local_1b0) && (truncate_set1 == '\0')) goto LAB_00105ced;
      }
      else {
        if ((uVar72 < uVar54) && (truncate_set1 == '\0')) {
LAB_00105ced:
          if (uVar72 != 0) {
            lStack_1c0 = lVar64;
                    /* WARNING: Could not recover jumptable at 0x00105d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar58 = (*(code *)(&DAT_00103e3c +
                               *(int *)(&DAT_00103e3c + (ulong)*(uint *)plVar74[1] * 4)))();
            return iVar58;
          }
          pcVar71 = "when not truncating set1, string2 must be non-empty";
          lStack_1c0 = lVar64;
LAB_001053c8:
          uVar60 = dcgettext(0,pcVar71,5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar60);
        }
        if (local_197 != '\0') {
          if (plVar74[3] == uVar54) {
            plVar74[2] = -2;
            iVar59 = get_next(plVar74,0,5);
            if (iVar59 != -1) {
              do {
                iVar57 = get_next(plVar74,0);
                if (iVar57 == -1) goto LAB_0010547d;
              } while (iVar59 == iVar57);
            }
          }
LAB_00105f62:
          pcVar71 = 
          "when translating with complemented character classes,\nstring2 must map all characters in the domain to one"
          ;
          goto LAB_001053c8;
        }
      }
LAB_0010547d:
      fadvise(_stdin,2);
      auVar96 = __LC18;
      iVar79 = _UNK_001061ec;
      iVar53 = _UNK_001061e8;
      iVar52 = _UNK_001061e4;
      iVar51 = __LC17;
      iVar50 = _UNK_001061dc;
      iVar49 = _UNK_001061d8;
      iVar48 = _UNK_001061d4;
      iVar47 = __LC16;
      iVar46 = _UNK_001061cc;
      iVar45 = _UNK_001061c8;
      iVar44 = _UNK_001061c4;
      iVar43 = __LC15;
      iVar42 = _UNK_001061bc;
      iVar41 = _UNK_001061b8;
      iVar57 = _UNK_001061b4;
      iVar59 = __LC14;
      bVar77 = squeeze_repeats;
      if ((squeeze_repeats == 0) || (iVar58 != 1)) {
        if ((delete != 0) && (iVar58 == 1)) {
          set_initialize(&local_1c8,complement,in_delete_set);
          do {
            sVar62 = read_and_delete(&io_buf,0x2000);
            if (sVar62 == 0) goto LAB_001054c8;
            sVar61 = fwrite_unlocked(&io_buf,1,sVar62,_stdout);
          } while (sVar62 == sVar61);
LAB_0010601e:
          write_error();
          goto LAB_00106023;
        }
        if ((iVar58 == 2) && ((squeeze_repeats & delete) != 0)) {
          set_initialize(&local_1c8,complement,in_delete_set);
          set_initialize(plVar74,0,in_squeeze_set);
          squeeze_filter_constprop_0();
        }
        else if (translating != 0) {
          if (complement == '\0') {
            pcVar71 = &xlate;
            auVar97 = __LC12;
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
                  goto LAB_00105745;
                }
LAB_001056bb:
                if (iVar58 == -1) goto LAB_00105d59;
                if (iVar59 == -1) {
                  if ((iVar58 != -1) && (truncate_set1 == '\0')) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("c1 == -1 || truncate_set1","src/tr.c",0x755,"main");
                  }
                  goto LAB_00105d59;
                }
                (&xlate)[iVar58] = (char)iVar59;
                if (local_1cc != 2) goto LAB_00105745;
              }
              if (local_1cc != 1) goto LAB_001056bb;
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
LAB_00105745:
              local_1b8 = -1;
              lStack_1c0 = *(long *)(lStack_1c0 + 8);
              plVar74[1] = *(long *)(plVar74[1] + 8);
              lVar64 = -1;
            } while( true );
          }
          set_initialize(&local_1c8,0,in_delete_set);
          auVar96 = __LC18;
          iVar53 = _UNK_001061ec;
          iVar52 = _UNK_001061e8;
          iVar51 = _UNK_001061e4;
          iVar50 = __LC17;
          iVar49 = _UNK_001061dc;
          iVar48 = _UNK_001061d8;
          iVar47 = _UNK_001061d4;
          iVar46 = __LC16;
          iVar45 = _UNK_001061cc;
          iVar44 = _UNK_001061c8;
          iVar43 = _UNK_001061c4;
          iVar42 = __LC15;
          iVar41 = _UNK_001061bc;
          iVar57 = _UNK_001061b8;
          iVar59 = _UNK_001061b4;
          iVar58 = __LC14;
          plVar74[2] = -2;
          pcVar71 = &xlate;
          auVar97 = __LC12;
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
              iVar58 = get_next(plVar74,0);
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
LAB_00105d59:
          if (bVar77 == 0) {
            do {
              sVar62 = read_and_xlate(&io_buf,0x2000);
              if (sVar62 == 0) goto LAB_001054c8;
              sVar61 = fwrite_unlocked(&io_buf,1,sVar62,_stdout);
            } while (sVar62 == sVar61);
            goto LAB_0010601e;
          }
          set_initialize(plVar74,0,in_squeeze_set);
          squeeze_filter_constprop_0();
        }
      }
      else {
        set_initialize(&local_1c8,complement,in_squeeze_set);
        squeeze_filter_constprop_0();
      }
LAB_001054c8:
      iVar58 = close(0);
      if (iVar58 != 0) {
LAB_00106023:
        uVar60 = dcgettext(0,"standard input",5);
        piVar69 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar69,uVar60);
      }
      goto LAB_001054d7;
    }
  }
  iVar58 = 1;
LAB_001054d7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar58;
}


