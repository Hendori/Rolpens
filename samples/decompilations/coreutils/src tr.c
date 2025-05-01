
/* WARNING: Unknown calling convention */

_Bool star_digits_closebracket(E_string *es,size_t idx)

{
  char cVar1;
  _Bool *p_Var2;
  ulong uVar3;
  
  if (es->s[idx] != '*') {
    return false;
  }
  p_Var2 = es->escaped;
  if (p_Var2[idx] == false) {
    uVar3 = idx + 1;
    if (es->len <= uVar3) {
      return false;
    }
    do {
      cVar1 = es->s[uVar3];
      if (9 < (int)cVar1 - 0x30U) {
        if (cVar1 != ']') {
          return false;
        }
        return (_Bool)(p_Var2[uVar3] ^ 1);
      }
      if (p_Var2[uVar3] != false) {
        return false;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < es->len);
  }
  return false;
}



/* WARNING: Unknown calling convention */

_Bool is_char_class_member(Char_class char_class,uchar c)

{
  undefined1 uVar1;
  undefined3 in_register_00000031;
  
                    /* WARNING: Could not recover jumptable at 0x00100083. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(&DAT_00103cb0 + *(int *)(&DAT_00103cb0 + (ulong)char_class * 4)))
                    ((ulong)char_class,CONCAT31(in_register_00000031,c));
  return (_Bool)uVar1;
}



/* WARNING: Unknown calling convention */

int get_next(Spec_list *s,Upper_Lower_class *class)

{
  count cVar1;
  int iVar2;
  List_element *pLVar3;
  
  cVar1 = s->state;
  if (class != (Upper_Lower_class *)0x0) {
    *class = UL_NONE;
  }
  if (cVar1 == 0xfffffffffffffffe) {
    pLVar3 = s->head->next;
    s->state = 0xffffffffffffffff;
    s->tail = pLVar3;
  }
  else {
    pLVar3 = s->tail;
  }
  if (pLVar3 != (List_element *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100213. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*(code *)(&DAT_00103ce0 + *(int *)(&DAT_00103ce0 + (ulong)pLVar3->type * 4)))();
    return iVar2;
  }
  return -1;
}



/* WARNING: Unknown calling convention */

char * make_printable_char(uchar c)

{
  uchar *puVar1;
  ushort **ppuVar2;
  
  puVar1 = (uchar *)xmalloc(5);
  ppuVar2 = __ctype_b_loc();
  if ((*(byte *)((long)*ppuVar2 + (ulong)c * 2 + 1) & 0x40) != 0) {
    *puVar1 = c;
    puVar1[1] = '\0';
    return (char *)puVar1;
  }
  __sprintf_chk(puVar1,2,5,"\\%03o",c);
  return (char *)puVar1;
}



/* WARNING: Unknown calling convention */

char * make_printable_str(char *s,size_t len)

{
  byte bVar1;
  long lVar2;
  char *pcVar3;
  char *__dest;
  ushort **ppuVar4;
  byte *pbVar5;
  char *__src;
  long in_FS_OFFSET;
  char buf [5];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar3 = (char *)xnmalloc(len + 1,4);
  if (len != 0) {
    pbVar5 = (byte *)(s + len);
    __dest = pcVar3;
    do {
      bVar1 = *s;
      if ((char)bVar1 < '\x0e') {
        if ((char)bVar1 < '\a') {
LAB_001005f1:
          ppuVar4 = __ctype_b_loc();
          if ((*(byte *)((long)*ppuVar4 + (ulong)bVar1 * 2 + 1) & 0x40) == 0) {
            __sprintf_chk(buf,2,5,"\\%03o",(ulong)bVar1);
          }
          else {
            buf[1] = '\0';
            buf[0] = bVar1;
          }
          __src = buf;
        }
        else {
          __src = "\\a";
          switch(bVar1) {
          case 8:
            __src = "\\b";
            break;
          case 9:
            __src = "\\t";
            break;
          case 10:
            __src = "\\n";
            break;
          case 0xb:
            __src = "\\v";
            break;
          case 0xc:
            __src = "\\f";
            break;
          case 0xd:
            __src = "\\r";
          }
        }
      }
      else {
        __src = "\\";
        if (bVar1 != 0x5c) goto LAB_001005f1;
      }
      s = (char *)((byte *)s + 1);
      __dest = stpcpy(__dest,__src);
    } while ((byte *)s != pbVar5);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar3;
}



/* WARNING: Unknown calling convention */

void get_spec_stats(Spec_list *s)

{
  List_element *pLVar1;
  
  s->has_equiv_class = false;
  s->has_char_class = false;
  s->n_indefinite_repeats = 0;
  pLVar1 = s->head->next;
  s->has_restricted_char_class = false;
  if (pLVar1 != (List_element *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001006ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00103d0c + *(int *)(&DAT_00103d0c + (ulong)pLVar1->type * 4)))();
    return;
  }
  s->length = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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



/* WARNING: Unknown calling convention */

void set_initialize(Spec_list *s,_Bool complement_this_set,_Bool *in_set)

{
  _Bool *p_Var1;
  int iVar2;
  
  s->state = 0xfffffffffffffffe;
  while( true ) {
    iVar2 = get_next(s,(Upper_Lower_class *)0x0);
    if (iVar2 == -1) break;
    in_set[iVar2] = true;
  }
  if (complement_this_set) {
    p_Var1 = in_set + 0x100;
    do {
      *in_set = (_Bool)(*in_set ^ 1);
      in_set[1] = (_Bool)(in_set[1] ^ 1);
      in_set = in_set + 2;
    } while (in_set != p_Var1);
  }
  return;
}



size_t plain_read(char *buf,size_t size)

{
  undefined8 uVar1;
  int *piVar2;
  
  uVar1 = dcgettext(0,"read error",5);
  piVar2 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar2,uVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

size_t plain_read(char *buf,size_t size)

{
  size_t sVar1;
  ulong uVar2;
  ulong uVar3;
  size_t sVar4;
  ulong extraout_RAX;
  ulong uVar5;
  size_t __n;
  code *buf_00;
  char *__ptr;
  byte bVar6;
  ulong uVar7;
  
  buf_00 = (code *)0x0;
  sVar1 = safe_read(0,buf,size);
  if (-1 < (long)sVar1) {
    return sVar1;
  }
  plain_read((char *)buf_00,(size_t)buf);
  __n = 0x7fffffff;
  do {
    uVar2 = (*buf_00)(io_buf,0x2000);
    if (uVar2 == 0) {
      return 0;
    }
    if ((int)__n == 0x7fffffff) {
      __ptr = io_buf;
      uVar5 = 0;
      uVar3 = uVar5;
      goto LAB_00100ac6;
    }
    uVar5 = 0;
    do {
      if ((int)__n != (int)io_buf[uVar5]) {
        if (uVar2 <= uVar5) break;
LAB_00100abf:
        __ptr = io_buf + uVar5;
        uVar3 = uVar5;
LAB_00100ac6:
        do {
          if (in_squeeze_set[(byte)io_buf[uVar5]] != false) {
            uVar7 = uVar5;
            if (uVar2 == uVar5) goto LAB_00100b80;
            if (uVar5 < uVar2) {
              bVar6 = io_buf[uVar5];
              uVar7 = uVar5 + 1;
              goto LAB_00100af5;
            }
            __n = uVar2 - uVar3;
            if (__n == 0) goto LAB_00100bd0;
            goto LAB_00100c00;
          }
          uVar5 = uVar5 + 2;
        } while (uVar5 < uVar2);
        uVar7 = uVar5;
        if (uVar2 != uVar5) {
LAB_00100b99:
          __n = uVar2 - uVar3;
          uVar5 = uVar7;
          if (__n != 0) {
LAB_00100c00:
            sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout);
            uVar5 = uVar7;
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
        bVar6 = in_squeeze_set[uVar7 + 0xff];
        uVar5 = uVar7 - 1;
        if (in_squeeze_set[bVar6] == false) goto LAB_00100b99;
LAB_00100af5:
        __n = uVar5 - uVar3;
        if ((uVar5 == 0) || (in_squeeze_set[uVar5 + 0xff] != (_Bool)bVar6)) {
          __n = __n + 1;
        }
        if ((__n == 0) || (sVar4 = fwrite_unlocked(__ptr,1,__n,_stdout), __n == sVar4)) {
          __n = (size_t)(uint)(int)(char)bVar6;
          uVar5 = uVar7;
          goto joined_r0x00100bb7;
        }
LAB_00100b35:
        write_error();
        uVar5 = extraout_RAX;
      }
      uVar5 = uVar5 + 1;
joined_r0x00100bb7:
    } while (uVar5 < uVar2);
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void squeeze_filter(char *buf,size_t size,_func_size_t_char_ptr_size_t *reader)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  ulong extraout_RAX;
  ulong uVar4;
  size_t __n;
  char *__ptr;
  byte bVar5;
  ulong uVar6;
  
  __n = 0x7fffffff;
  do {
    uVar1 = (*(code *)buf)(io_buf,0x2000);
    if (uVar1 == 0) {
      return;
    }
    if ((int)__n == 0x7fffffff) {
      __ptr = io_buf;
      uVar4 = 0;
      uVar2 = uVar4;
      goto LAB_00100ac6;
    }
    uVar4 = 0;
    do {
      if ((int)__n != (int)io_buf[uVar4]) {
        if (uVar1 <= uVar4) break;
LAB_00100abf:
        __ptr = io_buf + uVar4;
        uVar2 = uVar4;
LAB_00100ac6:
        do {
          if (in_squeeze_set[(byte)io_buf[uVar4]] != false) {
            uVar6 = uVar4;
            if (uVar1 == uVar4) goto LAB_00100b80;
            if (uVar4 < uVar1) {
              bVar5 = io_buf[uVar4];
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
        if (in_squeeze_set[bVar5] == false) goto LAB_00100b99;
LAB_00100af5:
        __n = uVar4 - uVar2;
        if ((uVar4 == 0) || (in_squeeze_set[uVar4 + 0xff] != (_Bool)bVar5)) {
          __n = __n + 1;
        }
        if ((__n == 0) || (sVar3 = fwrite_unlocked(__ptr,1,__n,_stdout), __n == sVar3)) {
          __n = (size_t)(uint)(int)(char)bVar5;
          uVar4 = uVar6;
          goto joined_r0x00100bb7;
        }
LAB_00100b35:
        write_error();
        uVar4 = extraout_RAX;
      }
      uVar4 = uVar4 + 1;
joined_r0x00100bb7:
    } while (uVar4 < uVar1);
  } while( true );
}



/* WARNING: Unknown calling convention */

size_t read_and_xlate(char *buf,size_t size)

{
  size_t sVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  char *size_00;
  ulong uVar6;
  char *buf_00;
  byte *pbVar7;
  byte *pbVar8;
  
  buf_00 = (char *)0x0;
  size_00 = buf;
  sVar1 = safe_read(0,buf,size);
  if (-1 < (long)sVar1) {
    if (sVar1 != 0) {
      pbVar7 = (byte *)buf;
      do {
        pbVar8 = pbVar7 + 1;
        *pbVar7 = xlate[*pbVar7];
        pbVar7 = pbVar8;
      } while (pbVar8 != (byte *)(buf + sVar1));
    }
    return sVar1;
  }
  plain_read(buf_00,(size_t)size_00);
  do {
    uVar2 = safe_read(0,buf_00,size_00);
    if ((long)uVar2 < 0) {
      uVar3 = dcgettext(0,"read error",5);
      piVar4 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar4,uVar3);
    }
    if (uVar2 == 0) {
      return 0;
    }
    uVar5 = 0;
    do {
      uVar6 = uVar5;
      uVar5 = uVar6 + 1;
      if (in_delete_set[(byte)buf_00[uVar6]] != false) goto LAB_00100cf1;
    } while (uVar2 != uVar5);
    uVar5 = uVar6 + 2;
    uVar6 = uVar2;
    if (uVar2 <= uVar5) {
      return uVar2;
    }
    do {
      if (in_delete_set[(byte)buf_00[uVar5]] == false) {
        buf_00[uVar6] = buf_00[uVar5];
        uVar6 = uVar6 + 1;
      }
      uVar5 = uVar5 + 1;
LAB_00100cf1:
    } while (uVar5 < uVar2);
  } while (uVar6 == 0);
  return uVar6;
}



/* WARNING: Unknown calling convention */

size_t read_and_delete(char *buf,size_t size)

{
  ulong uVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  ulong uVar5;
  
  do {
    uVar1 = safe_read(0,buf,size);
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
      if (in_delete_set[(byte)buf[uVar5]] != false) goto LAB_00100cf1;
    } while (uVar1 != uVar4);
    uVar4 = uVar5 + 2;
    uVar5 = uVar1;
    if (uVar1 <= uVar4) {
      return uVar1;
    }
    do {
      if (in_delete_set[(byte)buf[uVar4]] == false) {
        buf[uVar5] = buf[uVar4];
        uVar5 = uVar5 + 1;
      }
      uVar4 = uVar4 + 1;
LAB_00100cf1:
    } while (uVar4 < uVar1);
  } while (uVar5 == 0);
  return uVar5;
}



/* WARNING: Unknown calling convention */

_Bool parse_str(char *s,Spec_list *spec_list)

{
  uchar uVar1;
  byte c;
  long lVar2;
  List_element *pLVar3;
  ulong uVar4;
  count cVar5;
  _Bool _Var6;
  anon_struct_2_2_09f957be_for_range aVar7;
  int iVar8;
  size_t sVar9;
  char *pcVar10;
  _Bool *__ptr;
  List_element *pLVar11;
  size_t sVar12;
  char *pcVar13;
  undefined8 uVar14;
  uint uVar15;
  size_t len;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte bVar21;
  ulong uVar22;
  uchar *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  count repeat_count;
  char *d_end;
  E_string es;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  sVar9 = strlen(s);
  pcVar10 = (char *)xmalloc(sVar9);
  es.s = pcVar10;
  __ptr = (_Bool *)xcalloc(sVar9);
  bVar21 = *s;
  es.escaped = __ptr;
  if (bVar21 != 0) {
    uVar20 = 0;
    uVar18 = 0;
    do {
      uVar15 = (uint)uVar20;
      uVar17 = (int)uVar18 + 1;
      if (bVar21 == 0x5c) {
        uVar16 = uVar15 + 1;
        bVar21 = s[uVar16];
        __ptr[uVar18] = true;
        if (bVar21 == 0) {
          uVar14 = dcgettext(0,"warning: an unescaped backslash at end of string is not portable",5)
          ;
                    /* WARNING: Subroutine does not return */
          error(0,0,uVar14);
        }
        uVar19 = bVar21 - 0x30;
        switch(uVar19 & 0xff) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
          bVar21 = (byte)uVar19;
          if ((int)s[uVar15 + 2] - 0x30U < 8) {
            uVar16 = ((int)s[uVar15 + 2] - 0x30U) + uVar19 * 8;
            bVar21 = (byte)uVar16;
            uVar19 = (int)s[uVar15 + 3] - 0x30;
            if (uVar19 < 8) {
              if (0xff < (int)(uVar19 + (uVar16 & 0xff) * 8)) {
                uVar14 = dcgettext(0,
                                   "warning: the ambiguous octal escape \\%c%c%c is being\n\tinterpreted as the 2-byte sequence \\0%c%c, %c"
                                   ,5);
                    /* WARNING: Subroutine does not return */
                error(0,0,uVar14);
              }
              bVar21 = (char)uVar19 + bVar21 * '\b';
              uVar16 = uVar15 + 3;
            }
            else {
              uVar16 = uVar15 + 2;
            }
          }
          break;
        case 0x2c:
          bVar21 = 0x5c;
          break;
        case 0x31:
          bVar21 = 7;
          break;
        case 0x32:
          bVar21 = 8;
          break;
        case 0x36:
          bVar21 = 0xc;
          break;
        case 0x3e:
          bVar21 = 10;
          break;
        case 0x42:
          bVar21 = 0xd;
          break;
        case 0x44:
          bVar21 = 9;
          break;
        case 0x46:
          bVar21 = 0xb;
        }
        uVar15 = uVar16;
      }
      uVar20 = (ulong)(uVar15 + 1);
      pcVar10[uVar18] = bVar21;
      bVar21 = s[uVar20];
      uVar18 = (ulong)uVar17;
    } while (bVar21 != 0);
    uVar18 = (ulong)uVar17;
    es.len = uVar18;
    if (uVar18 < 3) {
      uVar25 = 0;
    }
    else {
      uVar20 = 2;
      uVar25 = 0;
      do {
        bVar21 = pcVar10[uVar25];
        uVar1 = pcVar10[uVar25 + 1];
        uVar26 = uVar25 + 1;
        if ((bVar21 == 0x5b) && (__ptr[uVar25] == false)) {
          if (((uVar1 != ':') && (uVar1 != '=')) || (__ptr[uVar26] != false)) {
LAB_00100efe:
            if ((pcVar10[uVar20] == '*') && (__ptr[uVar20] == false)) {
              for (uVar22 = uVar25 + 3; (uVar22 < uVar18 && (__ptr[uVar22] == false));
                  uVar22 = uVar22 + 1) {
                if (pcVar10[uVar22] == ']') {
                  len = (uVar22 - uVar26) - 2;
                  if (len == 0) {
                    repeat_count = 0;
                  }
                  else {
                    pcVar13 = pcVar10 + uVar25 + 3;
                    iVar8 = xstrtoumax(pcVar13,&d_end,(*pcVar13 != '0') * '\x02' + '\b',
                                       &repeat_count,0);
                    if (((iVar8 != 0) || (repeat_count == 0xffffffffffffffff)) ||
                       (d_end != pcVar13 + len)) {
                      pcVar10 = make_printable_str(pcVar13,len);
                      pcVar10 = (char *)quote(pcVar10);
                      pcVar13 = "invalid repeat count %s in [c*n] construct";
                      goto LAB_0010138b;
                    }
                  }
                  cVar5 = repeat_count;
                  uVar26 = uVar22 + 1;
                  pLVar11 = (List_element *)xmalloc(0x20);
                  pLVar11->next = (List_element *)0x0;
                  pLVar3 = spec_list->tail;
                  pLVar11->type = RE_REPEATED_CHAR;
                  (pLVar11->u).normal_char = uVar1;
                  (pLVar11->u).repeated_char.repeat_count = cVar5;
                  pLVar3->next = pLVar11;
                  goto LAB_00100fea;
                }
              }
            }
            goto LAB_00100e78;
          }
          uVar22 = uVar20;
          do {
            uVar4 = uVar22;
            if (uVar18 - 1 <= uVar4) goto LAB_00100efe;
            uVar22 = uVar4 + 1;
          } while ((((pcVar10[uVar4] != uVar1) || (pcVar10[uVar4 + 1] != ']')) ||
                   (__ptr[uVar4] != false)) || (__ptr[uVar4 + 1] != false));
          sVar9 = (uVar4 - uVar25) - 2;
          if (sVar9 == 0) {
            pcVar10 = "missing character class name \'[::]\'";
            if (uVar1 != ':') {
              pcVar10 = "missing equivalence class character \'[==]\'";
            }
            uVar14 = dcgettext(0,pcVar10,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar14);
          }
          puVar23 = (uchar *)(pcVar10 + uVar20);
          if (uVar1 == ':') {
            lVar24 = 0;
            do {
              pcVar13 = char_class_name[lVar24];
              iVar8 = strncmp((char *)puVar23,pcVar13,sVar9);
              if ((iVar8 == 0) && (sVar12 = strlen(pcVar13), sVar9 == sVar12)) {
                pLVar11 = (List_element *)xmalloc(0x20);
                pLVar11->next = (List_element *)0x0;
                pLVar3 = spec_list->tail;
                pLVar11->type = RE_CHAR_CLASS;
                (pLVar11->u).char_class = (Char_class)lVar24;
                pLVar3->next = pLVar11;
                goto LAB_001012a2;
              }
              lVar24 = lVar24 + 1;
            } while (lVar24 != 0xc);
            _Var6 = star_digits_closebracket(&es,uVar20);
            if (!_Var6) {
              pcVar10 = make_printable_str((char *)puVar23,sVar9);
              pcVar10 = (char *)quote(pcVar10);
              pcVar13 = "invalid character class %s";
LAB_0010138b:
              uVar14 = dcgettext(0,pcVar13,5);
LAB_001011d0:
                    /* WARNING: Subroutine does not return */
              error(0,0,uVar14,pcVar10);
            }
            goto LAB_00100efe;
          }
          if (sVar9 != 1) {
            _Var6 = star_digits_closebracket(&es,uVar20);
            if (!_Var6) {
              pcVar10 = make_printable_str((char *)puVar23,sVar9);
              uVar14 = dcgettext(0,"%s: equivalence class operand must be a single character",5);
              goto LAB_001011d0;
            }
            goto LAB_00100efe;
          }
          pLVar11 = (List_element *)xmalloc();
          pLVar11->next = (List_element *)0x0;
          pLVar11->type = RE_EQUIV_CLASS;
          (pLVar11->u).normal_char = *puVar23;
          spec_list->tail->next = pLVar11;
LAB_001012a2:
          uVar26 = uVar4 + 2;
LAB_00100fea:
          spec_list->tail = pLVar11;
LAB_00100ebc:
          uVar20 = uVar26 + 2;
          uVar25 = uVar26;
        }
        else {
LAB_00100e78:
          if ((uVar1 != '-') || (__ptr[uVar26] != false)) {
            pLVar11 = (List_element *)xmalloc(0x20);
            pLVar11->next = (List_element *)0x0;
            pLVar3 = spec_list->tail;
            pLVar11->type = RE_NORMAL_CHAR;
            (pLVar11->u).normal_char = bVar21;
            pLVar3->next = pLVar11;
            spec_list->tail = pLVar11;
            goto LAB_00100ebc;
          }
          c = pcVar10[uVar20];
          aVar7.last_char = c;
          aVar7.first_char = bVar21;
          if (c < bVar21) {
            pcVar10 = make_printable_char(bVar21);
            pcVar13 = make_printable_char(c);
            uVar14 = dcgettext(0,
                               "range-endpoints of \'%s-%s\' are in reverse collating sequence order"
                               ,5);
                    /* WARNING: Subroutine does not return */
            error(0,0,uVar14,pcVar10,pcVar13);
          }
          pLVar11 = (List_element *)xmalloc(0x20);
          uVar20 = uVar25 + 5;
          pLVar11->next = (List_element *)0x0;
          pLVar3 = spec_list->tail;
          pLVar11->type = RE_RANGE;
          (pLVar11->u).range = aVar7;
          pLVar3->next = pLVar11;
          spec_list->tail = pLVar11;
          uVar25 = uVar25 + 3;
        }
      } while (uVar20 < uVar18);
    }
    puVar23 = (uchar *)(pcVar10 + uVar25);
    if (uVar25 < uVar18) {
      do {
        uVar1 = *puVar23;
        puVar23 = puVar23 + 1;
        pLVar11 = (List_element *)xmalloc(0x20);
        pLVar3 = spec_list->tail;
        pLVar11->next = (List_element *)0x0;
        pLVar11->type = RE_NORMAL_CHAR;
        (pLVar11->u).normal_char = uVar1;
        pLVar3->next = pLVar11;
        spec_list->tail = pLVar11;
      } while ((uchar *)(pcVar10 + uVar18) != puVar23);
    }
  }
  free(pcVar10);
  free(__ptr);
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return true;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void usage(int status)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  infomap *piVar6;
  undefined1 *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
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
  infomap[0].program = "[";
  infomap[0].node = "test invocation";
  infomap[1].program = "coreutils";
  infomap[1].node = "Multi-call invocation";
  infomap[2].program = "sha224sum";
  infomap[2].node = "sha2 utilities";
  infomap[3].program = "sha256sum";
  infomap[3].node = "sha2 utilities";
  infomap[4].program = "sha384sum";
  infomap[4].node = "sha2 utilities";
  infomap[5].program = "sha512sum";
  infomap[5].node = "sha2 utilities";
  infomap[6].program = (char *)0x0;
  infomap[6].node = (char *)0x0;
  do {
    if (((*pcVar4 == 't') && (pcVar4[1] == 'r')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
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
  exit(status);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

int main(int argc,char **argv)

{
  _Bool _Var1;
  long lVar2;
  ushort *puVar3;
  List_element *pLVar4;
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
  short sVar18;
  short sVar19;
  ushort uVar20;
  ushort uVar21;
  bool bVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  unkbyte10 Var41;
  undefined4 uVar42;
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
  int iVar54;
  int iVar55;
  List_element *pLVar56;
  _Bool _Var57;
  int iVar58;
  int iVar59;
  int iVar60;
  undefined8 uVar61;
  size_t sVar62;
  size_t sVar63;
  _Bool *p_Var64;
  count cVar65;
  ushort **ppuVar66;
  __int32_t **pp_Var67;
  undefined8 uVar68;
  _Bool *p_Var69;
  int *piVar70;
  _func_size_t_char_ptr_size_t *reader;
  _func_size_t_char_ptr_size_t *reader_00;
  _func_size_t_char_ptr_size_t *reader_01;
  char *pcVar71;
  ulong uVar72;
  Spec_list *spec_list;
  long lVar73;
  long in_FS_OFFSET;
  bool bVar74;
  char cVar75;
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
  Upper_Lower_class class_s1;
  Upper_Lower_class class_s2;
  Spec_list buf1;
  Spec_list buf2;
  _Bool in_set [256];
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
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
LAB_00105190:
  do {
    iVar58 = getopt_long(argc,argv,"+AcCdst",long_options,0);
    if (iVar58 == -1) break;
    if (iVar58 != 99) {
      if (99 < iVar58) {
        if (iVar58 == 0x73) {
          squeeze_repeats = true;
        }
        else if (iVar58 == 0x74) {
          truncate_set1 = true;
        }
        else {
          if (iVar58 != 100) {
LAB_00105866:
                    /* WARNING: Subroutine does not return */
            usage(1);
          }
          delete = true;
        }
        goto LAB_00105190;
      }
      if (iVar58 == 0x41) {
        setlocale(3,"C");
        setlocale(0,"C");
        goto LAB_00105190;
      }
      if (iVar58 < 0x42) {
        if (iVar58 == -0x83) {
          uVar61 = proper_name_lite("Jim Meyering","Jim Meyering");
          version_etc(_stdout,&_LC32,"GNU coreutils",_Version,uVar61,0);
                    /* WARNING: Subroutine does not return */
          exit(0);
        }
        if (iVar58 == -0x82) {
                    /* WARNING: Subroutine does not return */
          usage(0);
        }
        goto LAB_00105866;
      }
      if (iVar58 != 0x43) goto LAB_00105866;
    }
    complement = true;
  } while( true );
  iVar58 = argc - _optind;
  if (iVar58 == 2) {
    translating = (_Bool)(delete ^ 1);
    if (delete != squeeze_repeats) {
      if (squeeze_repeats < delete) goto LAB_001052cf;
      goto LAB_001052e6;
    }
    buf1.head = (List_element *)xmalloc(0x20);
    (buf1.head)->next = (List_element *)0x0;
    buf1.tail = buf1.head;
    _Var57 = parse_str(argv[_optind],&buf1);
    if (_Var57) goto LAB_001057ac;
  }
  else {
    translating = false;
    if (delete == squeeze_repeats) {
      iVar59 = 2;
      if (iVar58 < 2) goto LAB_001058d8;
      goto LAB_001057fb;
    }
    if (squeeze_repeats < delete) {
LAB_001052cf:
      iVar59 = 1;
    }
    else {
      iVar59 = 2;
    }
    if (iVar58 < 1) {
LAB_001058d8:
      if (argc != _optind) {
        uVar61 = quote(argv[(long)argc + -1]);
        uVar68 = dcgettext(0,"missing operand after %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar68,uVar61);
      }
      uVar61 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar61);
    }
    if (iVar59 < iVar58) {
LAB_001057fb:
      uVar61 = quote(argv[iVar59 + _optind]);
      uVar68 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar68,uVar61);
    }
LAB_001052e6:
    buf1.head = (List_element *)xmalloc();
    (buf1.head)->next = (List_element *)0x0;
    buf1.tail = buf1.head;
    _Var57 = parse_str(argv[_optind],&buf1);
    if (_Var57) {
      spec_list = (Spec_list *)0x0;
      if (iVar58 == 2) {
LAB_001057ac:
        spec_list = &buf2;
        buf2.head = (List_element *)xmalloc(0x20);
        (buf2.head)->next = (List_element *)0x0;
        buf2.tail = buf2.head;
        _Var57 = parse_str(argv[(long)_optind + 1],spec_list);
        if (!_Var57) goto LAB_001057f1;
      }
      get_spec_stats(&buf1);
      _Var57 = complement;
      if (complement != false) {
        buf1.state = 0xfffffffffffffffe;
        p_Var69 = in_set;
        for (lVar73 = 0x20; lVar73 != 0; lVar73 = lVar73 + -1) {
          p_Var69[0] = false;
          p_Var69[1] = false;
          p_Var69[2] = false;
          p_Var69[3] = false;
          p_Var69[4] = false;
          p_Var69[5] = false;
          p_Var69[6] = false;
          p_Var69[7] = false;
          p_Var69 = p_Var69 + (ulong)bVar77 * -0x10 + 8;
        }
        iVar59 = 0x100;
        while (iVar60 = get_next(&buf1,(Upper_Lower_class *)0x0), iVar60 != -1) {
          _Var1 = in_set[iVar60];
          in_set[iVar60] = true;
          iVar59 = iVar59 - (uint)(_Var1 ^ 1);
        }
        buf1.length = (count)iVar59;
      }
      cVar65 = buf1.length;
      pcVar71 = "the [c*] repeat construct may not appear in string1";
      if (buf1.n_indefinite_repeats != 0) goto LAB_001053c8;
      if (spec_list == (Spec_list *)0x0) goto LAB_0010547d;
      get_spec_stats(spec_list);
      pLVar56 = buf1.tail;
      uVar72 = spec_list->length;
      if ((cVar65 < uVar72) || (spec_list->n_indefinite_repeats != 1)) {
        if (1 < spec_list->n_indefinite_repeats) {
          pcVar71 = "only one [c*] repeat construct may appear in string2";
          buf1.tail = pLVar56;
          goto LAB_001053c8;
        }
        if (translating == false) {
          buf1.tail = pLVar56;
          if (spec_list->n_indefinite_repeats != 0) goto LAB_001053bc;
          goto LAB_0010547d;
        }
      }
      else {
        spec_list->length = cVar65;
        bVar74 = translating == false;
        (spec_list->indefinite_repeat_element->u).repeated_char.repeat_count = cVar65 - uVar72;
        if (bVar74) {
LAB_001053bc:
          pcVar71 = "the [c*] construct may appear in string2 only when translating";
          buf1.tail = pLVar56;
          goto LAB_001053c8;
        }
      }
      pcVar71 = "[=c=] expressions may not appear in string2 when translating";
      buf1.tail = pLVar56;
      if ((spec_list->has_equiv_class != false) ||
         (pcVar71 = 
          "when translating, the only character classes that may appear in\nstring2 are \'upper\' and \'lower\'"
         , spec_list->has_restricted_char_class != false)) goto LAB_001053c8;
      pLVar4 = spec_list->tail;
      uVar72 = spec_list->length;
      if (_Var57 == false) {
        cVar76 = spec_list->has_char_class;
        if ((_Bool)cVar76 != false) {
          ppuVar66 = __ctype_b_loc();
          lVar145 = 0;
          lVar146 = 0;
          lVar147 = 0;
          lVar148 = 0;
          lVar73 = 0;
          do {
            puVar3 = (ushort *)((long)*ppuVar66 + lVar73);
            bVar74 = (puVar3[2] & _UNK_00106214) != 0;
            bVar22 = (puVar3[3] & _UNK_00106216) != 0;
            uVar20 = (ushort)((*puVar3 & __LC74) != 0);
            uVar21 = (ushort)((puVar3[1] & _UNK_00106212) != 0);
            sVar111 = -(ushort)bVar22;
            uVar23 = (ushort)((puVar3[4] & _UNK_00106218) != 0);
            uVar24 = (ushort)((puVar3[5] & _UNK_0010621a) != 0);
            uVar25 = (ushort)((puVar3[6] & _UNK_0010621c) != 0);
            uVar26 = (ushort)((puVar3[7] & _UNK_0010621e) != 0);
            uVar27 = (ushort)(uVar20 != 0);
            uVar28 = (ushort)bVar22;
            uVar29 = (ushort)(uVar23 != 0);
            uVar30 = (ushort)(uVar24 != 0);
            uVar42 = CONCAT22(-uVar28,sVar111);
            Var41 = CONCAT64(CONCAT42(uVar42,-(ushort)bVar74),CONCAT22(-(ushort)bVar74,sVar111));
            auVar35._4_8_ = (long)((unkuint10)Var41 >> 0x10);
            auVar35._2_2_ = -(ushort)(uVar21 != 0);
            auVar35._0_2_ = -uVar21;
            uVar159 = CONCAT22(-uVar27,-uVar20);
            auVar124._4_12_ = auVar35;
            uVar78 = CONCAT22(-uVar29,-uVar23);
            auVar81._0_8_ = CONCAT26(-uVar30,CONCAT24(-uVar24,uVar78));
            auVar81._8_2_ = -uVar25;
            auVar81._10_2_ = -(ushort)(uVar25 != 0);
            auVar96._12_2_ = -uVar26;
            auVar96._0_12_ = auVar81;
            auVar96._14_2_ = -(ushort)(uVar26 != 0);
            iVar59 = (int)((unkuint10)Var41 >> 0x10);
            auVar155._4_4_ = -(uint)(iVar59 < 0);
            auVar155._0_4_ = iVar59;
            auVar155._8_4_ = uVar42;
            auVar155._12_4_ = -(uint)(uVar28 != 0);
            auVar125._0_8_ = auVar124._0_8_;
            auVar125._8_4_ = auVar35._0_4_;
            auVar125._12_4_ = -(uint)(auVar35._0_4_ < 0);
            auVar157._8_4_ = (int)((ulong)auVar81._0_8_ >> 0x20);
            auVar157._0_8_ = auVar81._0_8_;
            auVar157._12_4_ = -(uint)(uVar30 != 0);
            auVar126._4_4_ = -(uint)(auVar81._8_4_ < 0);
            auVar126._0_4_ = auVar81._8_4_;
            auVar126._8_4_ = auVar96._12_4_;
            auVar126._12_4_ = -(uint)(auVar96._12_4_ < 0);
            lVar147 = lVar147 + (SUB168(auVar126 & __LC19,0) - CONCAT44(-(uint)(uVar29 != 0),uVar78)
                                ) + (SUB168(auVar155 & __LC19,0) -
                                    CONCAT44(-(uint)(uVar27 != 0),uVar159));
            lVar148 = lVar148 + (SUB168(auVar126 & __LC19,8) - auVar157._8_8_) +
                                (SUB168(auVar155 & __LC19,8) - auVar125._8_8_);
            puVar3 = (ushort *)((long)*ppuVar66 + lVar73);
            lVar73 = lVar73 + 0x10;
            bVar74 = (puVar3[2] & _UNK_00106224) != 0;
            bVar22 = (puVar3[3] & _UNK_00106226) != 0;
            uVar20 = (ushort)((*puVar3 & __LC75) != 0);
            uVar21 = (ushort)((puVar3[1] & _UNK_00106222) != 0);
            sVar111 = -(ushort)bVar22;
            uVar23 = (ushort)((puVar3[4] & _UNK_00106228) != 0);
            uVar24 = (ushort)((puVar3[5] & _UNK_0010622a) != 0);
            uVar25 = (ushort)((puVar3[6] & _UNK_0010622c) != 0);
            uVar26 = (ushort)((puVar3[7] & _UNK_0010622e) != 0);
            uVar27 = (ushort)(uVar20 != 0);
            uVar28 = (ushort)bVar22;
            uVar29 = (ushort)(uVar23 != 0);
            uVar30 = (ushort)(uVar24 != 0);
            uVar42 = CONCAT22(-uVar28,sVar111);
            Var41 = CONCAT64(CONCAT42(uVar42,-(ushort)bVar74),CONCAT22(-(ushort)bVar74,sVar111));
            auVar36._4_8_ = (long)((unkuint10)Var41 >> 0x10);
            auVar36._2_2_ = -(ushort)(uVar21 != 0);
            auVar36._0_2_ = -uVar21;
            uVar160 = CONCAT22(-uVar27,-uVar20);
            auVar127._4_12_ = auVar36;
            uVar78 = CONCAT22(-uVar29,-uVar23);
            auVar82._0_8_ = CONCAT26(-uVar30,CONCAT24(-uVar24,uVar78));
            auVar82._8_2_ = -uVar25;
            auVar82._10_2_ = -(ushort)(uVar25 != 0);
            auVar97._12_2_ = -uVar26;
            auVar97._0_12_ = auVar82;
            auVar97._14_2_ = -(ushort)(uVar26 != 0);
            iVar59 = (int)((unkuint10)Var41 >> 0x10);
            auVar156._4_4_ = -(uint)(iVar59 < 0);
            auVar156._0_4_ = iVar59;
            auVar156._8_4_ = uVar42;
            auVar156._12_4_ = -(uint)(uVar28 != 0);
            auVar128._0_8_ = auVar127._0_8_;
            auVar128._8_4_ = auVar36._0_4_;
            auVar128._12_4_ = -(uint)(auVar36._0_4_ < 0);
            auVar158._8_4_ = (int)((ulong)auVar82._0_8_ >> 0x20);
            auVar158._0_8_ = auVar82._0_8_;
            auVar158._12_4_ = -(uint)(uVar30 != 0);
            auVar129._4_4_ = -(uint)(auVar82._8_4_ < 0);
            auVar129._0_4_ = auVar82._8_4_;
            auVar129._8_4_ = auVar97._12_4_;
            auVar129._12_4_ = -(uint)(auVar97._12_4_ < 0);
            lVar145 = lVar145 + (SUB168(auVar129 & __LC19,0) - CONCAT44(-(uint)(uVar29 != 0),uVar78)
                                ) + (SUB168(auVar156 & __LC19,0) -
                                    CONCAT44(-(uint)(uVar27 != 0),uVar160));
            lVar146 = lVar146 + (SUB168(auVar129 & __LC19,8) - auVar158._8_8_) +
                                (SUB168(auVar156 & __LC19,8) - auVar128._8_8_);
          } while (lVar73 != 0x200);
          spec_list->state = 0xfffffffffffffffe;
          buf1.state = 0xfffffffffffffffe;
          lVar73 = lVar145 + lVar146 + -1;
          cVar75 = cVar76;
          do {
            iVar59 = get_next(&buf1,&class_s1);
            iVar60 = get_next(spec_list,&class_s2);
            if (cVar76 == '\0') {
              if (class_s2 != UL_NONE) {
LAB_00105bd2:
                buf1.state = 0xffffffffffffffff;
                spec_list->state = 0xffffffffffffffff;
                buf1.tail = (buf1.tail)->next;
                spec_list->tail = spec_list->tail->next;
                lVar145 = lVar73;
                if (class_s1 == UL_UPPER) {
                  lVar145 = lVar147 + lVar148 + -1;
                }
                buf1.length = buf1.length - lVar145;
                lVar145 = lVar73;
                if (class_s2 == UL_UPPER) {
                  lVar145 = lVar147 + lVar148 + -1;
                }
                spec_list->length = spec_list->length - lVar145;
              }
            }
            else if (class_s2 != UL_NONE) {
              if ((cVar75 != '\0') && (class_s1 != UL_NONE)) goto LAB_00105bd2;
              pcVar71 = "misaligned [:upper:] and/or [:lower:] construct";
              goto LAB_001053c8;
            }
            cVar75 = buf1.state == 0xffffffffffffffff;
            cVar76 = spec_list->state == 0xffffffffffffffff;
          } while ((iVar59 != -1) && (iVar60 != -1));
          if ((cVar65 < buf1.length) || (uVar72 < spec_list->length)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("old_s1_len >= s1->length && old_s2_len >= s2->length","src/tr.c",0x4c0,
                          "validate_case_classes");
          }
          uVar72 = spec_list->length;
          spec_list->tail = pLVar4;
        }
        buf1.tail = pLVar56;
        if ((uVar72 < buf1.length) && (truncate_set1 == false)) goto LAB_00105ced;
      }
      else {
        if ((uVar72 < cVar65) && (truncate_set1 == false)) {
LAB_00105ced:
          if (uVar72 != 0) {
            buf1.tail = pLVar56;
                    /* WARNING: Could not recover jumptable at 0x00105d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            iVar58 = (*(code *)(&DAT_00103e3c +
                               *(int *)(&DAT_00103e3c + (ulong)spec_list->tail->type * 4)))();
            return iVar58;
          }
          pcVar71 = "when not truncating set1, string2 must be non-empty";
          buf1.tail = pLVar56;
LAB_001053c8:
          uVar61 = dcgettext(0,pcVar71,5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar61);
        }
        if (buf1.has_char_class != false) {
          if (spec_list->length == cVar65) {
            spec_list->state = 0xfffffffffffffffe;
            iVar59 = get_next(spec_list,(Upper_Lower_class *)0x0);
            if (iVar59 != -1) {
              do {
                iVar60 = get_next(spec_list,(Upper_Lower_class *)0x0);
                if (iVar60 == -1) goto LAB_0010547d;
              } while (iVar59 == iVar60);
            }
          }
          pcVar71 = 
          "when translating with complemented character classes,\nstring2 must map all characters in the domain to one"
          ;
          goto LAB_001053c8;
        }
      }
LAB_0010547d:
      fadvise();
      auVar96 = __LC18;
      iVar79 = _UNK_001061ec;
      iVar55 = _UNK_001061e8;
      iVar54 = _UNK_001061e4;
      iVar53 = __LC17;
      iVar52 = _UNK_001061dc;
      iVar51 = _UNK_001061d8;
      iVar50 = _UNK_001061d4;
      iVar49 = __LC16;
      iVar48 = _UNK_001061cc;
      iVar47 = _UNK_001061c8;
      iVar46 = _UNK_001061c4;
      iVar45 = __LC15;
      iVar44 = _UNK_001061bc;
      iVar43 = _UNK_001061b8;
      iVar60 = _UNK_001061b4;
      iVar59 = __LC14;
      _Var57 = squeeze_repeats;
      if ((squeeze_repeats == false) || (iVar58 != 1)) {
        if ((delete != false) && (iVar58 == 1)) {
          set_initialize(&buf1,complement,in_delete_set);
          do {
            sVar63 = read_and_delete(io_buf,0x2000);
            if (sVar63 == 0) goto LAB_001054c8;
            sVar62 = fwrite_unlocked(io_buf,1,sVar63,_stdout);
          } while (sVar63 == sVar62);
LAB_0010601e:
          write_error();
          goto LAB_00106023;
        }
        if ((iVar58 == 2) && ((squeeze_repeats & delete) != 0)) {
          set_initialize(&buf1,complement,in_delete_set);
          sVar63 = 0;
          set_initialize(spec_list,false,in_squeeze_set);
          squeeze_filter((char *)read_and_delete,sVar63,reader_00);
        }
        else if (translating != false) {
          if (complement == false) {
            p_Var69 = (_Bool *)xlate;
            auVar97 = __LC12;
            do {
              p_Var64 = p_Var69 + 0x10;
              iVar149 = auVar97._0_4_;
              auVar150._0_4_ = iVar149 + iVar59;
              iVar152 = auVar97._4_4_;
              auVar150._4_4_ = iVar152 + iVar60;
              iVar153 = auVar97._8_4_;
              iVar154 = auVar97._12_4_;
              auVar150._8_4_ = iVar153 + iVar43;
              auVar150._12_4_ = iVar154 + iVar44;
              auVar115._0_12_ = auVar97._0_12_;
              auVar115._12_2_ = auVar97._6_2_;
              auVar115._14_2_ = (short)((uint)(iVar152 + iVar46) >> 0x10);
              auVar114._12_4_ = auVar115._12_4_;
              auVar114._0_10_ = auVar97._0_10_;
              uVar143 = (undefined2)(iVar152 + iVar46);
              auVar114._10_2_ = uVar143;
              auVar113._10_6_ = auVar114._10_6_;
              auVar113._0_8_ = auVar97._0_8_;
              auVar113._8_2_ = auVar97._4_2_;
              uVar142 = (undefined2)((uint)(iVar149 + iVar45) >> 0x10);
              auVar31._2_8_ = auVar113._8_8_;
              auVar31._0_2_ = uVar142;
              auVar31._10_6_ = 0;
              auVar123._0_2_ = auVar97._0_2_;
              auVar112._12_4_ = 0;
              auVar112._0_12_ = SUB1612(auVar31 << 0x30,4);
              auVar112 = auVar112 << 0x20;
              uVar144 = (undefined2)(iVar153 + iVar47);
              auVar119._0_12_ = auVar112._0_12_;
              auVar119._12_2_ = uVar142;
              auVar119._14_2_ = (short)((uint)(iVar153 + iVar47) >> 0x10);
              auVar118._12_4_ = auVar119._12_4_;
              auVar118._0_10_ = auVar112._0_10_;
              auVar118._10_2_ = auVar97._10_2_;
              auVar117._10_6_ = auVar118._10_6_;
              auVar117._0_8_ = auVar112._0_8_;
              auVar117._8_2_ = auVar97._2_2_;
              auVar32._2_8_ = auVar117._8_8_;
              auVar32._0_2_ = uVar144;
              auVar32._10_6_ = 0;
              auVar116._12_4_ = 0;
              auVar116._0_12_ = SUB1612(auVar32 << 0x30,4);
              auVar116 = auVar116 << 0x20;
              iVar58 = iVar149 + iVar49;
              iVar110 = iVar152 + iVar50;
              auVar80._0_8_ = CONCAT44(iVar110,iVar58);
              auVar80._8_4_ = iVar153 + iVar51;
              auVar122._0_12_ = auVar116._0_12_;
              auVar122._12_2_ = uVar144;
              auVar122._14_2_ = (short)(iVar154 + iVar48);
              auVar121._12_4_ = auVar122._12_4_;
              auVar121._0_10_ = auVar116._0_10_;
              auVar121._10_2_ = uVar143;
              auVar120._10_6_ = auVar121._10_6_;
              auVar120._0_8_ = auVar116._0_8_;
              auVar120._8_2_ = (short)(iVar149 + iVar45);
              auVar123._8_8_ = auVar120._8_8_;
              auVar123._6_2_ = auVar97._12_2_;
              auVar123._4_2_ = auVar97._8_2_;
              auVar123._2_2_ = auVar97._4_2_;
              auVar87._12_2_ = (short)((uint)iVar110 >> 0x10);
              auVar87._0_12_ = auVar80;
              auVar87._14_2_ = (short)((uint)(iVar152 + iVar54) >> 0x10);
              auVar86._12_4_ = auVar87._12_4_;
              auVar86._0_10_ = auVar80._0_10_;
              uVar143 = (undefined2)(iVar152 + iVar54);
              auVar86._10_2_ = uVar143;
              auVar85._10_6_ = auVar86._10_6_;
              auVar85._8_2_ = (short)iVar110;
              auVar85._0_8_ = auVar80._0_8_;
              uVar142 = (undefined2)((uint)(iVar149 + iVar53) >> 0x10);
              auVar33._2_8_ = auVar85._8_8_;
              auVar33._0_2_ = uVar142;
              auVar33._10_6_ = 0;
              auVar95._0_2_ = (undefined2)iVar58;
              auVar84._12_4_ = 0;
              auVar84._0_12_ = SUB1612(auVar33 << 0x30,4);
              auVar84 = auVar84 << 0x20;
              auVar123 = auVar123 & auVar96;
              uVar144 = (undefined2)(iVar153 + iVar55);
              auVar91._0_12_ = auVar84._0_12_;
              auVar91._12_2_ = uVar142;
              auVar91._14_2_ = (short)((uint)(iVar153 + iVar55) >> 0x10);
              auVar90._12_4_ = auVar91._12_4_;
              auVar90._0_10_ = auVar84._0_10_;
              auVar90._10_2_ = (short)((uint)auVar80._8_4_ >> 0x10);
              auVar89._10_6_ = auVar90._10_6_;
              auVar89._0_8_ = auVar84._0_8_;
              auVar89._8_2_ = (short)((uint)iVar58 >> 0x10);
              auVar34._2_8_ = auVar89._8_8_;
              auVar34._0_2_ = uVar144;
              auVar34._10_6_ = 0;
              auVar88._12_4_ = 0;
              auVar88._0_12_ = SUB1612(auVar34 << 0x30,4);
              auVar88 = auVar88 << 0x20;
              auVar94._0_12_ = auVar88._0_12_;
              auVar94._12_2_ = uVar144;
              auVar94._14_2_ = (short)(iVar154 + iVar79);
              auVar93._12_4_ = auVar94._12_4_;
              auVar93._0_10_ = auVar88._0_10_;
              auVar93._10_2_ = uVar143;
              auVar92._10_6_ = auVar93._10_6_;
              auVar92._0_8_ = auVar88._0_8_;
              auVar92._8_2_ = (short)(iVar149 + iVar53);
              auVar95._8_8_ = auVar92._8_8_;
              auVar95._6_2_ = (short)(iVar154 + iVar52);
              auVar95._4_2_ = (short)auVar80._8_4_;
              auVar95._2_2_ = (short)iVar110;
              auVar95 = auVar95 & auVar96;
              sVar111 = auVar123._0_2_;
              sVar5 = auVar123._2_2_;
              sVar6 = auVar123._4_2_;
              sVar7 = auVar123._6_2_;
              sVar8 = auVar123._8_2_;
              sVar9 = auVar123._10_2_;
              sVar10 = auVar123._12_2_;
              sVar11 = auVar123._14_2_;
              sVar12 = auVar95._0_2_;
              sVar13 = auVar95._2_2_;
              sVar14 = auVar95._4_2_;
              sVar15 = auVar95._6_2_;
              sVar16 = auVar95._8_2_;
              sVar17 = auVar95._10_2_;
              sVar18 = auVar95._12_2_;
              sVar19 = auVar95._14_2_;
              *p_Var69 = (_Bool)((0 < sVar111) * (sVar111 < 0x100) * auVar123[0] - (0xff < sVar111))
              ;
              p_Var69[1] = (_Bool)((0 < sVar5) * (sVar5 < 0x100) * auVar123[2] - (0xff < sVar5));
              p_Var69[2] = (_Bool)((0 < sVar6) * (sVar6 < 0x100) * auVar123[4] - (0xff < sVar6));
              p_Var69[3] = (_Bool)((0 < sVar7) * (sVar7 < 0x100) * auVar123[6] - (0xff < sVar7));
              p_Var69[4] = (_Bool)((0 < sVar8) * (sVar8 < 0x100) * auVar123[8] - (0xff < sVar8));
              p_Var69[5] = (_Bool)((0 < sVar9) * (sVar9 < 0x100) * auVar123[10] - (0xff < sVar9));
              p_Var69[6] = (_Bool)((0 < sVar10) * (sVar10 < 0x100) * auVar123[0xc] - (0xff < sVar10)
                                  );
              p_Var69[7] = (_Bool)((0 < sVar11) * (sVar11 < 0x100) * auVar123[0xe] - (0xff < sVar11)
                                  );
              p_Var69[8] = (_Bool)((0 < sVar12) * (sVar12 < 0x100) * auVar95[0] - (0xff < sVar12));
              p_Var69[9] = (_Bool)((0 < sVar13) * (sVar13 < 0x100) * auVar95[2] - (0xff < sVar13));
              p_Var69[10] = (_Bool)((0 < sVar14) * (sVar14 < 0x100) * auVar95[4] - (0xff < sVar14));
              p_Var69[0xb] = (_Bool)((0 < sVar15) * (sVar15 < 0x100) * auVar95[6] - (0xff < sVar15))
              ;
              p_Var69[0xc] = (_Bool)((0 < sVar16) * (sVar16 < 0x100) * auVar95[8] - (0xff < sVar16))
              ;
              p_Var69[0xd] = (_Bool)((0 < sVar17) * (sVar17 < 0x100) * auVar95[10] - (0xff < sVar17)
                                    );
              p_Var69[0xe] = (_Bool)((0 < sVar18) * (sVar18 < 0x100) * auVar95[0xc] -
                                    (0xff < sVar18));
              p_Var69[0xf] = (_Bool)((0 < sVar19) * (sVar19 < 0x100) * auVar95[0xe] -
                                    (0xff < sVar19));
              p_Var69 = p_Var64;
              auVar97 = auVar150;
            } while (p_Var64 != in_delete_set);
            cVar65 = 0xfffffffffffffffe;
            buf1.state = 0xfffffffffffffffe;
            do {
              spec_list->state = cVar65;
              while( true ) {
                iVar58 = get_next(&buf1,&class_s1);
                iVar59 = get_next(spec_list,&class_s2);
                if (class_s1 == UL_LOWER) break;
                if ((class_s1 == UL_UPPER) && (class_s2 == UL_LOWER)) {
                  ppuVar66 = __ctype_b_loc();
                  lVar73 = 0;
                  puVar3 = *ppuVar66;
                  do {
                    if ((*(byte *)((long)puVar3 + lVar73 * 2 + 1) & 1) != 0) {
                      pp_Var67 = __ctype_tolower_loc();
                      xlate[lVar73] = (char)(*pp_Var67)[lVar73];
                    }
                    lVar73 = lVar73 + 1;
                  } while (lVar73 != 0x100);
                  goto LAB_00105745;
                }
LAB_001056bb:
                if (iVar58 == -1) goto LAB_00105d59;
                if (iVar59 == -1) {
                  if ((iVar58 != -1) && (truncate_set1 == false)) {
                    /* WARNING: Subroutine does not return */
                    __assert_fail("c1 == -1 || truncate_set1","src/tr.c",0x755,"main");
                  }
                  goto LAB_00105d59;
                }
                xlate[iVar58] = (char)iVar59;
                if (class_s2 != UL_NONE) goto LAB_00105745;
              }
              if (class_s2 != UL_UPPER) goto LAB_001056bb;
              ppuVar66 = __ctype_b_loc();
              lVar73 = 0;
              puVar3 = *ppuVar66;
              do {
                if ((*(byte *)((long)puVar3 + lVar73 * 2 + 1) & 2) != 0) {
                  pp_Var67 = __ctype_toupper_loc();
                  xlate[lVar73] = (char)(*pp_Var67)[lVar73];
                }
                lVar73 = lVar73 + 1;
              } while (lVar73 != 0x100);
LAB_00105745:
              buf1.state = 0xffffffffffffffff;
              buf1.tail = (buf1.tail)->next;
              spec_list->tail = spec_list->tail->next;
              cVar65 = 0xffffffffffffffff;
            } while( true );
          }
          set_initialize(&buf1,false,in_delete_set);
          auVar96 = __LC18;
          iVar55 = _UNK_001061ec;
          iVar54 = _UNK_001061e8;
          iVar53 = _UNK_001061e4;
          iVar52 = __LC17;
          iVar51 = _UNK_001061dc;
          iVar50 = _UNK_001061d8;
          iVar49 = _UNK_001061d4;
          iVar48 = __LC16;
          iVar47 = _UNK_001061cc;
          iVar46 = _UNK_001061c8;
          iVar45 = _UNK_001061c4;
          iVar44 = __LC15;
          iVar43 = _UNK_001061bc;
          iVar60 = _UNK_001061b8;
          iVar59 = _UNK_001061b4;
          iVar58 = __LC14;
          spec_list->state = 0xfffffffffffffffe;
          p_Var69 = (_Bool *)xlate;
          auVar97 = __LC12;
          do {
            p_Var64 = p_Var69 + 0x10;
            iVar149 = auVar97._0_4_;
            auVar151._0_4_ = iVar149 + iVar58;
            iVar152 = auVar97._4_4_;
            auVar151._4_4_ = iVar152 + iVar59;
            iVar153 = auVar97._8_4_;
            iVar154 = auVar97._12_4_;
            auVar151._8_4_ = iVar153 + iVar60;
            auVar151._12_4_ = iVar154 + iVar43;
            auVar133._0_12_ = auVar97._0_12_;
            auVar133._12_2_ = auVar97._6_2_;
            auVar133._14_2_ = (short)((uint)(iVar152 + iVar45) >> 0x10);
            auVar132._12_4_ = auVar133._12_4_;
            auVar132._0_10_ = auVar97._0_10_;
            uVar143 = (undefined2)(iVar152 + iVar45);
            auVar132._10_2_ = uVar143;
            auVar131._10_6_ = auVar132._10_6_;
            auVar131._0_8_ = auVar97._0_8_;
            auVar131._8_2_ = auVar97._4_2_;
            uVar142 = (undefined2)((uint)(iVar149 + iVar44) >> 0x10);
            auVar37._2_8_ = auVar131._8_8_;
            auVar37._0_2_ = uVar142;
            auVar37._10_6_ = 0;
            auVar141._0_2_ = auVar97._0_2_;
            auVar130._12_4_ = 0;
            auVar130._0_12_ = SUB1612(auVar37 << 0x30,4);
            auVar130 = auVar130 << 0x20;
            uVar144 = (undefined2)(iVar153 + iVar46);
            auVar137._0_12_ = auVar130._0_12_;
            auVar137._12_2_ = uVar142;
            auVar137._14_2_ = (short)((uint)(iVar153 + iVar46) >> 0x10);
            auVar136._12_4_ = auVar137._12_4_;
            auVar136._0_10_ = auVar130._0_10_;
            auVar136._10_2_ = auVar97._10_2_;
            auVar135._10_6_ = auVar136._10_6_;
            auVar135._0_8_ = auVar130._0_8_;
            auVar135._8_2_ = auVar97._2_2_;
            auVar38._2_8_ = auVar135._8_8_;
            auVar38._0_2_ = uVar144;
            auVar38._10_6_ = 0;
            auVar134._12_4_ = 0;
            auVar134._0_12_ = SUB1612(auVar38 << 0x30,4);
            auVar134 = auVar134 << 0x20;
            iVar79 = iVar149 + iVar48;
            iVar110 = iVar152 + iVar49;
            auVar83._0_8_ = CONCAT44(iVar110,iVar79);
            auVar83._8_4_ = iVar153 + iVar50;
            auVar140._0_12_ = auVar134._0_12_;
            auVar140._12_2_ = uVar144;
            auVar140._14_2_ = (short)(iVar154 + iVar47);
            auVar139._12_4_ = auVar140._12_4_;
            auVar139._0_10_ = auVar134._0_10_;
            auVar139._10_2_ = uVar143;
            auVar138._10_6_ = auVar139._10_6_;
            auVar138._0_8_ = auVar134._0_8_;
            auVar138._8_2_ = (short)(iVar149 + iVar44);
            auVar141._8_8_ = auVar138._8_8_;
            auVar141._6_2_ = auVar97._12_2_;
            auVar141._4_2_ = auVar97._8_2_;
            auVar141._2_2_ = auVar97._4_2_;
            auVar101._12_2_ = (short)((uint)iVar110 >> 0x10);
            auVar101._0_12_ = auVar83;
            auVar101._14_2_ = (short)((uint)(iVar152 + iVar53) >> 0x10);
            auVar100._12_4_ = auVar101._12_4_;
            auVar100._0_10_ = auVar83._0_10_;
            uVar143 = (undefined2)(iVar152 + iVar53);
            auVar100._10_2_ = uVar143;
            auVar99._10_6_ = auVar100._10_6_;
            auVar99._8_2_ = (short)iVar110;
            auVar99._0_8_ = auVar83._0_8_;
            uVar142 = (undefined2)((uint)(iVar149 + iVar52) >> 0x10);
            auVar39._2_8_ = auVar99._8_8_;
            auVar39._0_2_ = uVar142;
            auVar39._10_6_ = 0;
            auVar109._0_2_ = (undefined2)iVar79;
            auVar98._12_4_ = 0;
            auVar98._0_12_ = SUB1612(auVar39 << 0x30,4);
            auVar98 = auVar98 << 0x20;
            auVar141 = auVar141 & auVar96;
            uVar144 = (undefined2)(iVar153 + iVar54);
            auVar105._0_12_ = auVar98._0_12_;
            auVar105._12_2_ = uVar142;
            auVar105._14_2_ = (short)((uint)(iVar153 + iVar54) >> 0x10);
            auVar104._12_4_ = auVar105._12_4_;
            auVar104._0_10_ = auVar98._0_10_;
            auVar104._10_2_ = (short)((uint)auVar83._8_4_ >> 0x10);
            auVar103._10_6_ = auVar104._10_6_;
            auVar103._0_8_ = auVar98._0_8_;
            auVar103._8_2_ = (short)((uint)iVar79 >> 0x10);
            auVar40._2_8_ = auVar103._8_8_;
            auVar40._0_2_ = uVar144;
            auVar40._10_6_ = 0;
            auVar102._12_4_ = 0;
            auVar102._0_12_ = SUB1612(auVar40 << 0x30,4);
            auVar102 = auVar102 << 0x20;
            auVar108._0_12_ = auVar102._0_12_;
            auVar108._12_2_ = uVar144;
            auVar108._14_2_ = (short)(iVar154 + iVar55);
            auVar107._12_4_ = auVar108._12_4_;
            auVar107._0_10_ = auVar102._0_10_;
            auVar107._10_2_ = uVar143;
            auVar106._10_6_ = auVar107._10_6_;
            auVar106._0_8_ = auVar102._0_8_;
            auVar106._8_2_ = (short)(iVar149 + iVar52);
            auVar109._8_8_ = auVar106._8_8_;
            auVar109._6_2_ = (short)(iVar154 + iVar51);
            auVar109._4_2_ = (short)auVar83._8_4_;
            auVar109._2_2_ = (short)iVar110;
            auVar109 = auVar109 & auVar96;
            sVar111 = auVar141._0_2_;
            sVar5 = auVar141._2_2_;
            sVar6 = auVar141._4_2_;
            sVar7 = auVar141._6_2_;
            sVar8 = auVar141._8_2_;
            sVar9 = auVar141._10_2_;
            sVar10 = auVar141._12_2_;
            sVar11 = auVar141._14_2_;
            sVar12 = auVar109._0_2_;
            sVar13 = auVar109._2_2_;
            sVar14 = auVar109._4_2_;
            sVar15 = auVar109._6_2_;
            sVar16 = auVar109._8_2_;
            sVar17 = auVar109._10_2_;
            sVar18 = auVar109._12_2_;
            sVar19 = auVar109._14_2_;
            *p_Var69 = (_Bool)((0 < sVar111) * (sVar111 < 0x100) * auVar141[0] - (0xff < sVar111));
            p_Var69[1] = (_Bool)((0 < sVar5) * (sVar5 < 0x100) * auVar141[2] - (0xff < sVar5));
            p_Var69[2] = (_Bool)((0 < sVar6) * (sVar6 < 0x100) * auVar141[4] - (0xff < sVar6));
            p_Var69[3] = (_Bool)((0 < sVar7) * (sVar7 < 0x100) * auVar141[6] - (0xff < sVar7));
            p_Var69[4] = (_Bool)((0 < sVar8) * (sVar8 < 0x100) * auVar141[8] - (0xff < sVar8));
            p_Var69[5] = (_Bool)((0 < sVar9) * (sVar9 < 0x100) * auVar141[10] - (0xff < sVar9));
            p_Var69[6] = (_Bool)((0 < sVar10) * (sVar10 < 0x100) * auVar141[0xc] - (0xff < sVar10));
            p_Var69[7] = (_Bool)((0 < sVar11) * (sVar11 < 0x100) * auVar141[0xe] - (0xff < sVar11));
            p_Var69[8] = (_Bool)((0 < sVar12) * (sVar12 < 0x100) * auVar109[0] - (0xff < sVar12));
            p_Var69[9] = (_Bool)((0 < sVar13) * (sVar13 < 0x100) * auVar109[2] - (0xff < sVar13));
            p_Var69[10] = (_Bool)((0 < sVar14) * (sVar14 < 0x100) * auVar109[4] - (0xff < sVar14));
            p_Var69[0xb] = (_Bool)((0 < sVar15) * (sVar15 < 0x100) * auVar109[6] - (0xff < sVar15));
            p_Var69[0xc] = (_Bool)((0 < sVar16) * (sVar16 < 0x100) * auVar109[8] - (0xff < sVar16));
            p_Var69[0xd] = (_Bool)((0 < sVar17) * (sVar17 < 0x100) * auVar109[10] - (0xff < sVar17))
            ;
            p_Var69[0xe] = (_Bool)((0 < sVar18) * (sVar18 < 0x100) * auVar109[0xc] - (0xff < sVar18)
                                  );
            p_Var69[0xf] = (_Bool)((0 < sVar19) * (sVar19 < 0x100) * auVar109[0xe] - (0xff < sVar19)
                                  );
            p_Var69 = p_Var64;
            auVar97 = auVar151;
          } while (p_Var64 != in_delete_set);
          lVar73 = 0;
          do {
            if (in_delete_set[lVar73] == false) {
              iVar58 = get_next(spec_list,(Upper_Lower_class *)0x0);
              if (iVar58 == -1) {
                if (truncate_set1 == false) {
                    /* WARNING: Subroutine does not return */
                  __assert_fail("ch != -1 || truncate_set1","src/tr.c",0x720,"main");
                }
                break;
              }
              xlate[lVar73] = (char)iVar58;
            }
            lVar73 = lVar73 + 1;
          } while (lVar73 != 0x100);
LAB_00105d59:
          if (_Var57 == false) {
            do {
              sVar63 = read_and_xlate(io_buf,0x2000);
              if (sVar63 == 0) goto LAB_001054c8;
              sVar62 = fwrite_unlocked(io_buf,1,sVar63,_stdout);
            } while (sVar63 == sVar62);
            goto LAB_0010601e;
          }
          sVar63 = 0;
          set_initialize(spec_list,false,in_squeeze_set);
          squeeze_filter((char *)read_and_xlate,sVar63,reader_01);
        }
      }
      else {
        sVar63 = (size_t)complement;
        set_initialize(&buf1,complement,in_squeeze_set);
        squeeze_filter((char *)plain_read,sVar63,reader);
      }
LAB_001054c8:
      iVar58 = close(0);
      if (iVar58 != 0) {
LAB_00106023:
        uVar61 = dcgettext(0,"standard input",5);
        piVar70 = __errno_location();
                    /* WARNING: Subroutine does not return */
        error(1,*piVar70,uVar61);
      }
      goto LAB_001054d7;
    }
  }
LAB_001057f1:
  iVar58 = 1;
LAB_001054d7:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar58;
}


