
/* WARNING: Unknown calling convention */

int keycmp(line *line1,line *line2,idx_t jf_1,idx_t jf_2)

{
  char *__s1;
  size_t sVar1;
  char *__s2;
  size_t sVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  
  if (line1->nfields <= jf_1) {
    if (jf_2 < line2->nfields) {
      return -(uint)(line2->fields[jf_2].len != 0);
    }
    return 0;
  }
  __s1 = line1->fields[jf_1].beg;
  sVar1 = line1->fields[jf_1].len;
  if (jf_2 < line2->nfields) {
    __s2 = line2->fields[jf_2].beg;
    sVar2 = line2->fields[jf_2].len;
    if (sVar1 == 0) {
      uVar3 = -(uint)(sVar2 != 0);
    }
    else if (sVar2 == 0) {
      uVar3 = 1;
    }
    else {
      if (ignore_case) {
        sVar5 = sVar2;
        if ((long)sVar1 <= (long)sVar2) {
          sVar5 = sVar1;
        }
        uVar3 = memcasecmp(__s1,__s2,sVar5);
      }
      else {
        if (hard_LC_COLLATE) {
          iVar4 = xmemcoll(__s1,sVar1,__s2,sVar2);
          return iVar4;
        }
        sVar5 = sVar2;
        if ((long)sVar1 <= (long)sVar2) {
          sVar5 = sVar1;
        }
        uVar3 = memcmp(__s1,__s2,sVar5);
      }
      if (uVar3 == 0) {
        return (uint)((long)sVar2 < (long)sVar1) - (uint)((long)sVar1 < (long)sVar2);
      }
    }
  }
  else {
    uVar3 = (uint)(sVar1 != 0);
  }
  return uVar3;
}



/* WARNING: Unknown calling convention */

void set_join_field(ptrdiff_t *var,idx_t val)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *var;
  if ((lVar1 != val) && (-1 < lVar1)) {
    uVar2 = dcgettext(0,"incompatible join fields %td, %td",5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar2,lVar1,val);
  }
  *var = val;
  return;
}



/* WARNING: Unknown calling convention */

idx_t string_to_join_field(char *str)

{
  int iVar1;
  idx_t iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  intmax_t val;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = xstrtoimax(str,0,10,&val,&_LC1);
  if (iVar1 == 1) {
    iVar2 = 0x7ffffffffffffffe;
  }
  else {
    if ((iVar1 != 0) || (val < 1)) {
      uVar3 = quote(str);
      uVar4 = dcgettext(0,"invalid field number: %s",5);
                    /* WARNING: Subroutine does not return */
      error(1,0,uVar4,uVar3);
    }
    iVar2 = val + -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void prfield(idx_t n,line *line)

{
  size_t __n;
  
  if (n < line->nfields) {
    __n = line->fields[n].len;
    if (__n != 0) {
      fwrite_unlocked(line->fields[n].beg,1,__n,_stdout);
      return;
    }
  }
  if (empty_filler != (char *)0x0) {
    fputs_unlocked(empty_filler,_stdout);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void prfields(line *line,idx_t join_field,idx_t autocount)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (!autoformat) {
    autocount = line->nfields;
  }
  lVar1 = join_field;
  if (autocount <= join_field) {
    lVar1 = autocount;
  }
  if (0 < lVar1) {
    lVar2 = 0;
    do {
      fwrite_unlocked(output_separator,1,output_seplen,_stdout);
      lVar3 = lVar2 + 1;
      prfield(lVar2,line);
      lVar2 = lVar3;
    } while (lVar1 != lVar3);
  }
  lVar1 = join_field + 1;
  if (join_field + 1 < autocount) {
    do {
      fwrite_unlocked(output_separator,1,output_seplen,_stdout);
      lVar2 = lVar1 + 1;
      prfield(lVar1,line);
      lVar1 = lVar2;
    } while (autocount != lVar2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void prjoin(line *line1,line *line2)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  FILE *__stream;
  int *piVar4;
  undefined8 uVar5;
  outlist *poVar6;
  line *plVar7;
  ptrdiff_t pVar8;
  
  poVar6 = outlist_head.next;
  if (outlist_head.next == (outlist *)0x0) {
    plVar7 = line2;
    pVar8 = join_field_2;
    if (line1 != &uni_blank) {
      plVar7 = line1;
      pVar8 = join_field_1;
    }
    prfield(pVar8,plVar7);
    prfields(line1,join_field_1,autocount_1);
    prfields(line2,join_field_2,autocount_2);
  }
  else {
    while( true ) {
      if (poVar6->file == 0) {
        plVar7 = line2;
        pVar8 = join_field_2;
        if (line1 != &uni_blank) {
          plVar7 = line1;
          pVar8 = join_field_1;
        }
        prfield(pVar8,plVar7);
        poVar6 = poVar6->next;
      }
      else {
        plVar7 = line1;
        if (poVar6->file != 1) {
          plVar7 = line2;
        }
        prfield(poVar6->field,plVar7);
        poVar6 = poVar6->next;
      }
      if (poVar6 == (outlist *)0x0) break;
      fwrite_unlocked(output_separator,1,output_seplen,_stdout);
    }
  }
  cVar3 = eolchar;
  pcVar2 = _stdout->_IO_write_ptr;
  if (pcVar2 < _stdout->_IO_write_end) {
    _stdout->_IO_write_ptr = pcVar2 + 1;
    *pcVar2 = cVar3;
  }
  else {
    __overflow(_stdout,(uint)(byte)eolchar);
  }
  __stream = _stdout;
  if ((_stdout->_flags & 0x20) == 0) {
    return;
  }
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  fflush_unlocked(__stream);
  fpurge(_stdout);
  clearerr_unlocked(_stdout);
  uVar5 = dcgettext(0,"write error",5);
                    /* WARNING: Subroutine does not return */
  error(1,iVar1,uVar5);
}



/* WARNING: Unknown calling convention */

void delseq(seq *seq)

{
  line **pplVar1;
  line *__ptr;
  long lVar2;
  
  lVar2 = 0;
  if (0 < seq->alloc) {
    do {
      __ptr = seq->lines[lVar2];
      if (__ptr != (line *)0x0) {
        free(__ptr->fields);
        __ptr->fields = (field *)0x0;
        free((__ptr->buf).buffer);
        pplVar1 = seq->lines;
        (__ptr->buf).buffer = (char *)0x0;
        __ptr = pplVar1[lVar2];
      }
      lVar2 = lVar2 + 1;
      free(__ptr);
    } while (lVar2 < seq->alloc);
  }
  free(seq->lines);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void free_spareline(void)

{
  line *plVar1;
  
  plVar1 = spareline[0];
  if (spareline[0] != (line *)0x0) {
    free(spareline[0]->fields);
    free((plVar1->buf).buffer);
    free(plVar1);
  }
  plVar1 = spareline[1];
  if (spareline[1] != (line *)0x0) {
    free(spareline[1]->fields);
    free((plVar1->buf).buffer);
    free(plVar1);
    return;
  }
  return;
}



/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

_Bool get_line(FILE *fp,line **linep,int which)

{
  byte *pbVar1;
  char *pcVar2;
  uintmax_t uVar3;
  char *pcVar4;
  line *plVar5;
  _Bool _Var6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  line *line2;
  field *pfVar12;
  int *piVar13;
  char32_t cVar14;
  ptrdiff_t jf_1;
  byte *pbVar15;
  wint_t wVar16;
  byte bVar17;
  uint uVar18;
  byte *pbVar19;
  idx_t iVar20;
  int iVar21;
  long lVar22;
  long in_FS_OFFSET;
  bool bVar23;
  char32_t ch;
  mbstate_t mbs;
  
  iVar21 = which + -1;
  line2 = *linep;
  lVar22 = *(long *)(in_FS_OFFSET + 0x28);
  if (prevline[iVar21] == line2) {
    plVar5 = spareline[iVar21];
    spareline[iVar21] = line2;
    *linep = plVar5;
    line2 = plVar5;
  }
  if (line2 == (line *)0x0) {
    line2 = (line *)xzalloc(0x30);
    *linep = line2;
  }
  else {
    line2->nfields = 0;
  }
  lVar8 = readlinebuffer_delim(line2,fp,(int)eolchar);
  if (lVar8 == 0) {
    if ((fp->_flags & 0x20) != 0) {
      uVar9 = dcgettext(0,"read error",5);
      piVar13 = __errno_location();
                    /* WARNING: Subroutine does not return */
      error(1,*piVar13,uVar9);
    }
    free(line2->fields);
    line2->fields = (field *)0x0;
    free((line2->buf).buffer);
    (line2->buf).buffer = (char *)0x0;
    _Var6 = false;
  }
  else {
    pbVar15 = (byte *)(line2->buf).buffer;
    line_no[iVar21] = line_no[iVar21] + 1;
    pbVar1 = pbVar15 + (line2->buf).length + -1;
    if (pbVar15 != pbVar1) {
      if (tab.len == '\0') {
LAB_001007ac:
        if (pbVar15 < pbVar1) {
          bVar17 = *pbVar15;
          if ((char)bVar17 < '\0') goto LAB_0010094c;
LAB_001007c1:
          uVar10 = 1;
          wVar16 = (int)(char)bVar17;
          do {
            pbVar19 = pbVar15;
            if (wVar16 == 10) goto LAB_00100930;
            do {
              iVar7 = iswblank(wVar16);
              if (iVar7 == 0) {
                iVar20 = 0;
                pbVar15 = pbVar19;
                if (pbVar1 <= pbVar19) goto LAB_0010077e;
                bVar17 = *pbVar19;
                if ((char)bVar17 < '\0') goto LAB_0010082c;
                goto LAB_001007f2;
              }
LAB_00100930:
              pbVar15 = pbVar19 + (uVar10 & 0xff);
              if (pbVar1 <= pbVar15) goto LAB_00100648;
              bVar17 = *pbVar15;
              if (-1 < (char)bVar17) goto LAB_001007c1;
LAB_0010094c:
              mbs.__count = 0;
              uVar10 = 1;
              uVar11 = mbrtoc32(&ch,pbVar15,(long)pbVar1 - (long)pbVar15,&mbs);
              wVar16 = 0;
              pbVar19 = pbVar15;
            } while ((long)uVar11 < 0);
            uVar10 = uVar11 & 0xffffffff;
            wVar16 = ch;
          } while( true );
        }
        goto LAB_00100648;
      }
      if (tab.ch != 10) {
LAB_001008cd:
        if (pbVar15 < pbVar1) {
          bVar17 = *pbVar15;
          pbVar19 = pbVar15;
          if ((char)bVar17 < '\0') goto LAB_00100a20;
          do {
            uVar10 = 1;
            uVar18 = 0;
            cVar14 = (int)(char)bVar17;
LAB_001008f9:
            if ((uVar18 - tab.err) * 0x4000 + (cVar14 - tab.ch) == 0) {
              lVar8 = line2->nfields;
              pfVar12 = line2->fields;
              if (line2->nfields_allocated <= lVar8) {
                pfVar12 = (field *)xpalloc(pfVar12,&line2->nfields_allocated,1,0xffffffffffffffff,
                                           0x10);
                line2->fields = pfVar12;
                lVar8 = line2->nfields;
              }
              pfVar12[lVar8].beg = (char *)pbVar15;
              pfVar12[lVar8].len = (long)pbVar19 - (long)pbVar15;
              line2->nfields = lVar8 + 1;
              if ((char)*pbVar19 < '\0') {
                mbs.__count = 0;
                lVar8 = mbrtoc32(&ch,pbVar19,(long)pbVar1 - (long)pbVar19,&mbs);
                if (lVar8 < 0) goto LAB_001008c5;
              }
              else {
LAB_001008c5:
                lVar8 = 1;
              }
              pbVar15 = pbVar19 + lVar8;
              goto LAB_001008cd;
            }
            pbVar19 = pbVar19 + (uVar10 & 0xff);
            if (pbVar1 <= pbVar19) goto LAB_00100617;
            bVar17 = *pbVar19;
          } while (-1 < (char)bVar17);
LAB_00100a20:
          mbs.__count = 0;
          uVar10 = mbrtoc32(&ch,pbVar19,(long)pbVar1 - (long)pbVar19,&mbs);
          uVar18 = (uint)bVar17;
          if ((long)uVar10 < 0) {
            cVar14 = 0;
            uVar10 = 1;
          }
          else {
            uVar18 = 0;
            cVar14 = ch;
          }
          goto LAB_001008f9;
        }
      }
LAB_00100617:
      lVar8 = line2->nfields;
      pfVar12 = line2->fields;
      if (line2->nfields_allocated <= lVar8) {
        pfVar12 = (field *)xpalloc(pfVar12,&line2->nfields_allocated,1,0xffffffffffffffff,0x10);
        line2->fields = pfVar12;
        lVar8 = line2->nfields;
      }
      pfVar12[lVar8].beg = (char *)pbVar15;
      pfVar12[lVar8].len = (long)pbVar1 - (long)pbVar15;
      line2->nfields = lVar8 + 1;
    }
LAB_00100648:
    if ((((prevline[iVar21] != (line *)0x0) && (check_input_order != CHECK_ORDER_DISABLED)) &&
        ((check_input_order == CHECK_ORDER_ENABLED || (seen_unpairable != false)))) &&
       (issued_disorder_warning[iVar21] == false)) {
      jf_1 = join_field_1;
      if (which != 1) {
        jf_1 = join_field_2;
      }
      iVar7 = keycmp(prevline[iVar21],line2,jf_1,jf_1);
      if (0 < iVar7) {
        lVar22 = (line2->buf).length;
        pcVar2 = (line2->buf).buffer;
        if ((0 < lVar22) && (pcVar2[lVar22 + -1] == '\n')) {
          lVar22 = lVar22 + -1;
        }
        bVar23 = check_input_order == CHECK_ORDER_ENABLED;
        uVar3 = line_no[iVar21];
        pcVar4 = g_names[iVar21];
        uVar9 = dcgettext(0,"%s:%ju: is not sorted: %.*s",5);
        lVar8 = 0x7fffffff;
        if (lVar22 < 0x80000000) {
          lVar8 = lVar22;
        }
                    /* WARNING: Subroutine does not return */
        error(bVar23,0,uVar9,pcVar4,uVar3,lVar8,pcVar2);
      }
    }
    prevline[iVar21] = line2;
    _Var6 = true;
  }
  if (lVar22 == *(long *)(in_FS_OFFSET + 0x28)) {
    return _Var6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001007f2:
  uVar10 = 1;
  wVar16 = (int)(char)bVar17;
  while (wVar16 != 10) {
    while( true ) {
      iVar7 = iswblank(wVar16);
      if ((iVar7 != 0) || (pbVar15 = pbVar15 + (uVar10 & 0xff), pbVar1 <= pbVar15))
      goto LAB_00100778;
      bVar17 = *pbVar15;
      if (-1 < (char)bVar17) goto LAB_001007f2;
LAB_0010082c:
      mbs.__count = 0;
      uVar10 = mbrtoc32(&ch,pbVar15,(long)pbVar1 - (long)pbVar15,&mbs);
      wVar16 = ch;
      if (-1 < (long)uVar10) break;
      uVar10 = 1;
      wVar16 = 0;
    }
  }
LAB_00100778:
  iVar20 = (long)pbVar15 - (long)pbVar19;
LAB_0010077e:
  lVar8 = line2->nfields;
  pfVar12 = line2->fields;
  if (line2->nfields_allocated <= lVar8) {
    pfVar12 = (field *)xpalloc(pfVar12,&line2->nfields_allocated,1,0xffffffffffffffff,0x10);
    line2->fields = pfVar12;
    lVar8 = line2->nfields;
  }
  pfVar12[lVar8].beg = (char *)pbVar19;
  pfVar12[lVar8].len = iVar20;
  line2->nfields = lVar8 + 1;
  goto LAB_001007ac;
}



/* WARNING: Unknown calling convention */

_Bool getseq(FILE *fp,seq *seq,int whichfile)

{
  long lVar1;
  _Bool _Var2;
  line **pplVar3;
  long lVar4;
  
  pplVar3 = seq->lines;
  lVar4 = seq->count * 8;
  if (seq->count == seq->alloc) {
    pplVar3 = (line **)xpalloc(pplVar3,&seq->alloc,1,0xffffffffffffffff,8);
    seq->lines = pplVar3;
    lVar1 = seq->count;
    lVar4 = lVar1 * 8;
    if (lVar1 < seq->alloc) {
      lVar4 = lVar1 * 8;
      memset(pplVar3 + lVar1,0,(seq->alloc - lVar1) * 8);
    }
  }
  _Var2 = get_line(fp,(line **)((long)pplVar3 + lVar4),whichfile);
  if (_Var2) {
    seq->count = seq->count + 1;
  }
  return _Var2;
}



/* WARNING: Unknown calling convention */

void add_field_list(char *str)

{
  char cVar1;
  long lVar2;
  int iVar3;
  idx_t iVar4;
  outlist *poVar5;
  char *pcVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  wint_t __wc;
  ulong uVar11;
  long in_FS_OFFSET;
  char32_t ch;
  mbstate_t mbs;
  
  cVar1 = *str;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar10 = str;
  if (cVar1 == '\0') {
LAB_00100e00:
    uVar9 = quote(pcVar10);
    pcVar10 = "invalid file number in field spec: %s";
LAB_00100e17:
    uVar8 = dcgettext(0,pcVar10,5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar8,uVar9);
  }
LAB_00100c43:
  do {
    if (cVar1 < '\0') {
      pcVar6 = str + (2 - (ulong)(str[1] == '\0'));
      mbs.__count = 0;
      uVar11 = mbrtoc32(&ch,str,pcVar6 + (*pcVar6 != '\0') +
                                ((ulong)(pcVar6[*pcVar6 != '\0'] != '\0') - (long)str),&mbs);
      __wc = ch;
      if (-1 < (long)uVar11) goto LAB_00100c52;
      __wc = 0;
      uVar11 = 1;
LAB_00100c5b:
      iVar3 = iswblank(__wc);
      if (iVar3 != 0) goto LAB_00100cf8;
      str = str + (uVar11 & 0xff);
      cVar1 = *str;
      if (cVar1 != '\0') goto LAB_00100c43;
LAB_00100c80:
      cVar1 = *pcVar10;
    }
    else {
      uVar11 = 1;
      __wc = (int)cVar1;
LAB_00100c52:
      if (__wc != 0x2c) goto LAB_00100c5b;
LAB_00100cf8:
      if (*str == '\0') goto LAB_00100c80;
      uVar11 = 1;
      if (*str < '\0') {
        pcVar6 = str + (2 - (ulong)(str[1] == '\0'));
        mbs.__count = 0;
        uVar7 = mbrtoc32(&ch,str,pcVar6 + (*pcVar6 != '\0') +
                                 ((ulong)(pcVar6[*pcVar6 != '\0'] != '\0') - (long)str),&mbs);
        if (-1 < (long)uVar7) {
          uVar11 = uVar7 & 0xff;
        }
      }
      *str = '\0';
      cVar1 = *pcVar10;
      str = str + uVar11;
    }
    if (cVar1 == '0') {
      if (pcVar10[1] != '\0') goto LAB_00100e32;
      iVar4 = 0;
      iVar3 = 0;
    }
    else {
      if (1 < (byte)(cVar1 - 0x31U)) goto LAB_00100e00;
      if (pcVar10[1] != '.') {
LAB_00100e32:
        uVar9 = quote(pcVar10);
        pcVar10 = "invalid field specifier: %s";
        goto LAB_00100e17;
      }
      iVar3 = cVar1 + -0x30;
      iVar4 = string_to_join_field(pcVar10 + 2);
    }
    poVar5 = (outlist *)xmalloc(0x18);
    poVar5->file = iVar3;
    poVar5->field = iVar4;
    poVar5->next = (outlist *)0x0;
    outlist_end->next = poVar5;
    cVar1 = *str;
    outlist_end = poVar5;
    pcVar10 = str;
    if (cVar1 == '\0') {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
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
  undefined *puVar7;
  infomap infomap [7];
  
  uVar5 = _program_name;
  piVar6 = infomap;
  if (status != 0) {
    uVar3 = dcgettext(0,"Try \'%s --help\' for more information.\n",5);
    __fprintf_chk(_stderr,2,uVar3,uVar5);
    goto LAB_00100eaa;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE1 FILE2\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "For each pair of input lines with identical join fields, write a line to\nstandard output.  The default join field is the first, delimited by blanks.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\n  -a FILENUM             also print unpairable lines from file FILENUM, where\n                           FILENUM is 1 or 2, corresponding to FILE1 or FILE2\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -e STRING              replace missing (empty) input fields with STRING;\n                           I.e., missing fields specified with \'-12jo\' options\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --ignore-case      ignore differences in case when comparing fields\n  -j FIELD               equivalent to \'-1 FIELD -2 FIELD\'\n  -o FORMAT              obey FORMAT while constructing output line\n  -t CHAR                use CHAR as input and output field separator\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -v FILENUM             like -a FILENUM, but suppress joined output lines\n  -1 FIELD               join on this FIELD of file 1\n  -2 FIELD               join on this FIELD of file 2\n      --check-order      check that the input is correctly sorted, even\n                           if all input lines are pairable\n      --nocheck-order    do not check that the input is correctly sorted\n      --header           treat the first line in each file as field headers,\n                           print them without trying to pair them\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -z, --zero-terminated  line delimiter is NUL, not newline\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nUnless -t CHAR is given, leading blanks separate fields and are ignored,\nelse fields are separated by CHAR.  Any FIELD is a field number counted\nfrom 1.  FORMAT is one or more comma or blank separated specifications,\neach being \'FILENUM.FIELD\' or \'0\'.  Default FORMAT outputs the join field,\nthe remaining fields from FILE1, the remaining fields from FILE2, all\nseparated by CHAR.  If FORMAT is the keyword \'auto\', then the first\nline of each file determines the number of fields output for each line.\n\nImportant: FILE1 and FILE2 must be sorted on the join fields.\nE.g., use \"sort -k 1b,1\" if \'join\' has no options,\nor use \"join -t \'\'\" if \'sort\' has no options.\nComparisons honor the rules specified by \'LC_COLLATE\'.\nIf the input is not sorted and some lines cannot be joined, a\nwarning message will be given.\n"
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
    iVar2 = strcmp("join",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)piVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC9;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_0010116d;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_0010116d:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC9);
    if (puVar7 == &_LC9) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00100eaa:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



void add_file_name(char *name,char **names,int *operand_status,int *joption_count,int *nfiles,
                  int *prev_optc_status,int *optc_status)

{
  int iVar1;
  char *str;
  ptrdiff_t pVar2;
  ptrdiff_t pVar3;
  long lVar4;
  ulong uVar5;
  idx_t iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  
  iVar1 = *joption_count;
  if (iVar1 != 2) {
    iVar10 = iVar1 + 1;
    lVar9 = (long)iVar1 * 4;
    lVar4 = (long)iVar1 << 3;
    goto LAB_001012dd;
  }
  iVar1 = *(int *)names;
  uVar5 = (ulong)(iVar1 == 0);
  str = g_names[uVar5];
  iVar10 = *(int *)((long)names + uVar5 * 4);
  if (iVar10 == 2) {
    operand_status[1] = operand_status[1] + -1;
    iVar6 = string_to_join_field(str);
    pVar2 = iVar6;
    pVar3 = join_field_1;
    lVar9 = join_field_2;
    if (iVar6 != join_field_2) {
joined_r0x001013eb:
      if (-1 < lVar9) {
        uVar7 = dcgettext(0,"incompatible join fields %td, %td",5);
                    /* WARNING: Subroutine does not return */
        error(1,0,uVar7,lVar9,iVar6);
      }
    }
  }
  else {
    pVar2 = join_field_2;
    pVar3 = join_field_1;
    if (iVar10 < 3) {
      if (iVar10 == 0) {
        uVar7 = quotearg_style(4,name);
        uVar8 = dcgettext(0,"extra operand %s",5);
                    /* WARNING: Subroutine does not return */
        error(0,0,uVar8,uVar7);
      }
      if (iVar10 == 1) {
        *operand_status = *operand_status + -1;
        iVar6 = string_to_join_field(str);
        pVar2 = join_field_2;
        pVar3 = iVar6;
        lVar9 = join_field_1;
        if (iVar6 != join_field_1) goto joined_r0x001013eb;
      }
    }
    else if (iVar10 == 3) {
      add_field_list(str);
      pVar2 = join_field_2;
      pVar3 = join_field_1;
    }
  }
  join_field_1 = pVar3;
  join_field_2 = pVar2;
  if (iVar1 != 0) {
    *(undefined4 *)names = *(undefined4 *)((long)names + 4);
    g_names[0] = g_names[1];
  }
  lVar4 = 8;
  lVar9 = 4;
  iVar10 = 2;
LAB_001012dd:
  *(int *)((long)names + lVar9) = *nfiles;
  *(char **)((long)g_names + lVar4) = name;
  *joption_count = iVar10;
  if (*nfiles == 3) {
    *prev_optc_status = 3;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int main(int argc,char **argv)

{
  line **pplVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  byte bVar11;
  _Bool _Var12;
  int iVar13;
  idx_t iVar14;
  undefined8 uVar15;
  long lVar16;
  FILE *fp;
  FILE *fp_00;
  undefined8 uVar17;
  int *piVar18;
  uint uVar19;
  ulong uVar20;
  char32_t cVar21;
  line *plVar22;
  char *pcVar23;
  line *line1;
  char *pcVar24;
  long lVar25;
  long in_FS_OFFSET;
  int *in_stack_ffffffffffffff48;
  char **names;
  long lVar26;
  int optc_status;
  int prev_optc_status;
  int nfiles;
  line *line;
  seq seq1;
  long val;
  ulong uStack_60;
  line **local_58;
  int joption_count [2];
  int operand_status [2];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  prev_optc_status = 0;
  joption_count[0] = 0;
  joption_count[1] = 0;
  nfiles = 0;
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  hard_LC_COLLATE = (_Bool)hard_locale(3);
  atexit((__func *)&close_stdout);
  atexit(free_spareline);
  print_pairables = true;
  seen_unpairable = false;
  check_input_order = CHECK_ORDER_DEFAULT;
  issued_disorder_warning[0] = false;
  issued_disorder_warning[1] = false;
LAB_00102370:
  do {
    iVar13 = getopt_long(argc,argv,"-a:e:i1:2:j:o:t:v:z");
    pcVar23 = _optarg;
    if (iVar13 == -1) break;
    optc_status = 0;
    if (0x82 < iVar13) {
switchD_001023bb_caseD_33:
                    /* WARNING: Subroutine does not return */
      usage(1);
    }
    if (0x30 < iVar13) {
      pcVar24 = empty_filler;
      switch(iVar13) {
      case 0x31:
        iVar14 = string_to_join_field(_optarg);
        set_join_field(&join_field_1,iVar14);
        pcVar24 = empty_filler;
        break;
      case 0x32:
        iVar14 = string_to_join_field(_optarg);
        set_join_field(&join_field_2,iVar14);
        pcVar24 = empty_filler;
        break;
      default:
        goto switchD_001023bb_caseD_33;
      case 0x61:
        goto switchD_001023bb_caseD_61;
      case 0x65:
        pcVar24 = _optarg;
        if ((empty_filler != (char *)0x0) && (iVar13 = strcmp(empty_filler,_optarg), iVar13 != 0)) {
          pcVar23 = "conflicting empty-field replacement strings";
          goto LAB_00102fcf;
        }
        break;
      case 0x69:
        ignore_case = true;
        break;
      case 0x6a:
        cVar2 = *_optarg;
        if ((((byte)(cVar2 - 0x31U) < 2) && (_optarg[1] == '\0')) &&
           (_optarg == argv[(long)_optind + -1] + 2)) {
          optc_status = (cVar2 == '2') + 1;
          joption_count[cVar2 == '2'] = joption_count[cVar2 == '2'] + 1;
          prev_optc_status = optc_status;
          goto LAB_00102370;
        }
        iVar14 = string_to_join_field(_optarg);
        set_join_field(&join_field_1,iVar14);
        set_join_field(&join_field_2,join_field_1);
        pcVar24 = empty_filler;
        break;
      case 0x6f:
        iVar13 = strcmp(_optarg,"auto");
        if (iVar13 != 0) {
          add_field_list(pcVar23);
          optc_status = 3;
          prev_optc_status = 3;
          goto LAB_00102370;
        }
        autoformat = true;
        pcVar24 = empty_filler;
        break;
      case 0x74:
        if (*_optarg == '\0') {
          uVar20 = 1;
          uVar19 = 0;
          cVar21 = 10;
          pcVar23 = output_separator;
        }
        else {
          iVar13 = strcmp(_optarg,"\\0");
          if (iVar13 == 0) {
            uVar20 = 1;
            uVar19 = 0;
            cVar21 = 0;
            output_separator = "";
            pcVar23 = output_separator;
          }
          else {
            uVar15 = mcel_scant(pcVar23,0);
            cVar21 = (char32_t)uVar15;
            bVar11 = (byte)((ulong)uVar15 >> 0x28);
            uVar20 = (ulong)bVar11;
            uVar19 = (uint)((ulong)uVar15 >> 0x20);
            pcVar23 = _optarg;
            if (_optarg[bVar11] != '\0') {
              uVar15 = quote();
              pcVar23 = "multi-character tab %s";
              goto LAB_00102f57;
            }
          }
        }
        output_separator = pcVar23;
        if ((tab.len != '\0') && (cVar21 - tab.ch != ((uint)tab.err - (uVar19 & 0xff)) * 0x4000)) {
          pcVar23 = "incompatible tabs";
          goto LAB_00102fcf;
        }
        tab.len = (uchar)uVar20;
        output_seplen = uVar20;
        tab.ch = cVar21;
        tab.err = (uchar)uVar19;
        pcVar24 = empty_filler;
        break;
      case 0x76:
        print_pairables = false;
switchD_001023bb_caseD_61:
        iVar13 = xstrtol(_optarg,0,10,&val);
        if ((iVar13 != 0) || (1 < val - 1U)) {
          uVar15 = quote(_optarg);
          pcVar23 = "invalid file number: %s";
LAB_00102f57:
          uVar17 = dcgettext(0,pcVar23,5);
                    /* WARNING: Subroutine does not return */
          error(1,0,uVar17,uVar15);
        }
        pcVar24 = empty_filler;
        if (val == 1) {
          print_unpairables_1 = true;
        }
        else {
          print_unpairables_2 = true;
        }
        break;
      case 0x7a:
        eolchar = '\0';
        break;
      case 0x80:
        check_input_order = CHECK_ORDER_ENABLED;
        break;
      case 0x81:
        check_input_order = CHECK_ORDER_DISABLED;
        break;
      case 0x82:
        join_header_lines = true;
      }
      empty_filler = pcVar24;
      prev_optc_status = 0;
      goto LAB_00102370;
    }
    if (iVar13 == -0x82) {
                    /* WARNING: Subroutine does not return */
      usage(0);
    }
    if (iVar13 != 1) {
      if (iVar13 == -0x83) {
        uVar15 = proper_name_lite("Mike Haertel","Mike Haertel");
        version_etc(_stdout,&_LC9,"GNU coreutils",_Version,uVar15,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      goto switchD_001023bb_caseD_33;
    }
    add_file_name(_optarg,(char **)operand_status,joption_count,&nfiles,&prev_optc_status,
                  &optc_status,in_stack_ffffffffffffff48);
    prev_optc_status = optc_status;
  } while( true );
  prev_optc_status = 0;
  if (_optind < argc) {
    names = (char **)operand_status;
    do {
      lVar16 = (long)_optind;
      _optind = _optind + 1;
      add_file_name(argv[lVar16],names,joption_count,&nfiles,&prev_optc_status,&optc_status,
                    (int *)names);
    } while (_optind < argc);
  }
  if (nfiles != 2) {
    if (nfiles != 0) {
      uVar15 = quote(argv[(long)argc + -1]);
      uVar17 = dcgettext(0,"missing operand after %s",5);
                    /* WARNING: Subroutine does not return */
      error(0,0,uVar17,uVar15);
    }
    uVar15 = dcgettext(0,"missing operand",5);
                    /* WARNING: Subroutine does not return */
    error(0,0,uVar15);
  }
  if (joption_count[0] != 0) {
    set_join_field(&join_field_1,0);
    set_join_field(&join_field_2,0);
  }
  if (joption_count[1] != 0) {
    set_join_field(&join_field_1,1);
    set_join_field(&join_field_2,1);
  }
  pcVar23 = g_names[0];
  if (join_field_1 < 0) {
    join_field_1 = 0;
  }
  if (join_field_2 < 0) {
    join_field_2 = 0;
  }
  iVar13 = strcmp(g_names[0],"-");
  fp_00 = _stdin;
  if (iVar13 != 0) {
    fp_00 = (FILE *)fopen_safer(pcVar23,&_LC51);
  }
  pcVar23 = g_names[1];
  pcVar24 = g_names[0];
  if (fp_00 == (FILE *)0x0) goto LAB_00103024;
  iVar13 = strcmp(g_names[1],"-");
  fp = _stdin;
  if (iVar13 != 0) {
    fp = (FILE *)fopen_safer(pcVar23,&_LC51);
  }
  pcVar24 = g_names[1];
  if (fp == (FILE *)0x0) goto LAB_00103024;
  if (fp_00 == fp) {
    uVar15 = dcgettext(0,"both files cannot be standard input",5);
    piVar18 = __errno_location();
                    /* WARNING: Subroutine does not return */
    error(1,*piVar18,uVar15);
  }
  fadvise(fp_00,2);
  fadvise(fp,2);
  seq1.lines = (line **)0x0;
  seq1.count = 0;
  seq1.alloc = 0;
  getseq(fp_00,&seq1,1);
  local_58 = (line **)0x0;
  _val = (undefined1  [16])0x0;
  getseq(fp,(seq *)&val,2);
  if (autoformat != false) {
    autocount_1 = seq1.count;
    if (seq1.count != 0) {
      autocount_1 = (*seq1.lines)->nfields;
    }
    autocount_2 = val;
    if (val != 0) {
      autocount_2 = (*local_58)->nfields;
    }
  }
  if (join_header_lines == false) {
LAB_00102860:
    if (seq1.count != 0) {
      while( true ) {
        if (val == 0) {
          if (check_input_order == CHECK_ORDER_DISABLED) {
            bVar11 = 0;
            if (print_unpairables_1 == false) goto LAB_00102f2d;
            goto LAB_00102ef7;
          }
          bVar4 = true;
          goto LAB_001028f8;
        }
        iVar13 = keycmp(*seq1.lines,*local_58,join_field_1,join_field_2);
        if (iVar13 < 0) {
          if (print_unpairables_1 != false) {
            prjoin(*seq1.lines,&uni_blank);
          }
          auVar9._8_8_ = 0;
          auVar9._0_8_ = seq1.alloc;
          seq1._0_16_ = auVar9 << 0x40;
          getseq(fp_00,&seq1,1);
          seen_unpairable = true;
          goto LAB_00102860;
        }
        if (iVar13 == 0) break;
        if (print_unpairables_2 != false) {
          prjoin(&uni_blank,*local_58);
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uStack_60;
        _val = auVar8 << 0x40;
        getseq(fp,(seq *)&val,2);
        seen_unpairable = true;
        if (seq1.count == 0) goto LAB_001028da;
      }
      do {
        _Var12 = getseq(fp_00,&seq1,1);
        if (!_Var12) {
          seq1.count = seq1.count + 1;
          bVar4 = true;
          goto LAB_00102a4a;
        }
        iVar13 = keycmp(seq1.lines[seq1.count + -1],*local_58,join_field_1,join_field_2);
      } while (iVar13 == 0);
      bVar4 = false;
LAB_00102a4a:
      do {
        _Var12 = getseq(fp,(seq *)&val,2);
        if (!_Var12) {
          val = val + 1;
          bVar10 = true;
          goto LAB_00102a69;
        }
        iVar13 = keycmp(*seq1.lines,local_58[val + -1],join_field_1,join_field_2);
      } while (iVar13 == 0);
      bVar10 = false;
LAB_00102a69:
      if (print_pairables != false) {
        lVar16 = 0;
        if (1 < seq1.count) {
          do {
            lVar25 = 0;
            lVar26 = lVar16;
            if (1 < val) {
              do {
                pplVar1 = local_58 + lVar25;
                lVar25 = lVar25 + 1;
                prjoin(seq1.lines[lVar16],*pplVar1);
              } while (lVar25 < val + -1);
            }
            lVar16 = lVar26 + 1;
          } while (lVar16 < seq1.count + -1);
        }
      }
      if (!bVar4) {
        plVar22 = *seq1.lines;
        *seq1.lines = seq1.lines[seq1.count + -1];
        seq1.lines[seq1.count + -1] = plVar22;
      }
      seq1.count = (ulong)!bVar4;
      if (bVar10) {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uStack_60;
        _val = auVar5 << 0x40;
      }
      else {
        plVar22 = *local_58;
        *local_58 = local_58[val + -1];
        local_58[val + -1] = plVar22;
        val = 1;
      }
      goto LAB_00102860;
    }
  }
  else {
    if (seq1.count != 0) {
      plVar22 = &uni_blank;
      line1 = *seq1.lines;
      if (val != 0) goto LAB_00102b5b;
LAB_00102b63:
      prjoin(line1,plVar22);
      prevline[0] = (line *)0x0;
      prevline[1] = (line *)0x0;
      if (seq1.count != 0) {
        auVar7._8_8_ = 0;
        auVar7._0_8_ = seq1.alloc;
        seq1._0_16_ = auVar7 << 0x40;
        getseq(fp_00,&seq1,1);
      }
      if (val != 0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uStack_60;
        _val = auVar6 << 0x40;
        getseq(fp,(seq *)&val,2);
      }
      goto LAB_00102860;
    }
    if (val != 0) {
      line1 = &uni_blank;
LAB_00102b5b:
      plVar22 = *local_58;
      goto LAB_00102b63;
    }
  }
LAB_001028da:
  bVar4 = false;
  if (check_input_order == CHECK_ORDER_DISABLED) {
LAB_00102f2d:
    bVar11 = 0;
LAB_00102922:
    line = (line *)0x0;
    if ((print_unpairables_2 != false) || (plVar22 = (line *)0x0, bVar11 != 0)) {
      if (val != 0) goto LAB_00102d39;
      plVar22 = (line *)0x0;
    }
  }
  else {
LAB_001028f8:
    line = (line *)0x0;
    bVar11 = 1;
    if (issued_disorder_warning[0] != false) {
      bVar11 = issued_disorder_warning[1] ^ 1;
    }
    if ((print_unpairables_1 == false && bVar11 == 0) || (!bVar4)) goto LAB_00102922;
    if (print_unpairables_1 != false) {
LAB_00102ef7:
      line = (line *)0x0;
      prjoin(*seq1.lines,&uni_blank);
    }
    if (val != 0) {
      seen_unpairable = true;
    }
LAB_00102e80:
    do {
      _Var12 = get_line(fp_00,&line,1);
      if (!_Var12) break;
      if (print_unpairables_1 == false) {
        cVar2 = issued_disorder_warning[0];
      }
      else {
        prjoin(line,&uni_blank);
        cVar2 = print_unpairables_1;
        if (issued_disorder_warning[0] == false) goto LAB_00102e80;
      }
    } while (cVar2 != '\0');
    if (((print_unpairables_2 != false) || (bVar11 != 0)) && (val != 0)) {
LAB_00102d39:
      if (print_unpairables_2 != false) {
        prjoin(&uni_blank,*local_58);
      }
      if (seq1.count != 0) {
        seen_unpairable = true;
      }
LAB_00102d58:
      do {
        _Var12 = get_line(fp,&line,2);
        if (!_Var12) break;
        if (print_unpairables_2 == false) {
          cVar2 = issued_disorder_warning[1];
        }
        else {
          prjoin(&uni_blank,line);
          cVar2 = print_unpairables_2;
          if (issued_disorder_warning[1] == false) goto LAB_00102d58;
        }
      } while (cVar2 != '\0');
    }
    plVar22 = line;
    if (line != (line *)0x0) {
      free(line->fields);
      free((plVar22->buf).buffer);
    }
  }
  free(plVar22);
  delseq(&seq1);
  delseq((seq *)&val);
  iVar13 = rpl_fclose(fp_00);
  pcVar24 = g_names[0];
  if ((iVar13 == 0) && (iVar13 = rpl_fclose(fp), pcVar24 = g_names[1], iVar13 == 0)) {
    if ((issued_disorder_warning[0] == false) && (issued_disorder_warning[1] == false)) {
      if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return 0;
    }
    pcVar23 = "input is not in sorted order";
LAB_00102fcf:
    uVar15 = dcgettext(0,pcVar23,5);
                    /* WARNING: Subroutine does not return */
    error(1,0,uVar15);
  }
LAB_00103024:
  uVar15 = quotearg_n_style_colon(0,3,pcVar24);
  piVar18 = __errno_location();
                    /* WARNING: Subroutine does not return */
  error(1,*piVar18,&_LC52,uVar15);
}


