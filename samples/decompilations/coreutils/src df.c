
/* WARNING: Unknown calling convention */

void replace_control_chars(char *cell)

{
  char cVar1;
  
  do {
    cVar1 = *cell;
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 < ' ') {
      if ('\0' < cVar1) goto LAB_00100014;
    }
    else if (cVar1 == '\x7f') {
LAB_00100014:
      *cell = '?';
    }
    cell = cell + 1;
  } while( true );
}



/* WARNING: Unknown calling convention */

size_t devlist_hash(void *x,size_t table_size)

{
                    /* WARNING: Load size is inaccurate */
  return *x % table_size;
}



/* WARNING: Unknown calling convention */

_Bool devlist_compare(void *x,void *y)

{
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  return *x == *y;
}



/* WARNING: Unknown calling convention */

void alloc_field(int f,char *c)

{
  field_data_t **ppfVar1;
  
  if (ncolumns == ncolumns_alloc) {
    columns = (field_data_t **)xpalloc(columns,&ncolumns_alloc,1,0xffffffffffffffff,8);
  }
  ppfVar1 = columns + ncolumns;
  ncolumns = ncolumns + 1;
  *ppfVar1 = field_data + f;
  if (c != (char *)0x0) {
    field_data[f].caption = c;
  }
  if (field_data[f].used == false) {
    field_data[f].used = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!field_data[f].used","src/df.c",0x1a4,"alloc_field");
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void alloc_table_row(void)

{
  char ***pppcVar1;
  char **ppcVar2;
  
  if (nrows == nrows_alloc) {
    table = (char ***)xpalloc(table,&nrows_alloc,1,0xffffffffffffffff,8);
  }
  pppcVar1 = table + nrows;
  nrows = nrows + 1;
  ppcVar2 = (char **)xinmalloc(ncolumns,8);
  *pppcVar1 = ppcVar2;
  return;
}



/* WARNING: Unknown calling convention */

void replace_invalid_chars(char *cell)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  ulong __n;
  char *pcVar5;
  char *__src;
  long in_FS_OFFSET;
  char32_t wc;
  mbstate_t mbstate;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  sVar4 = strlen(cell);
  mbstate.__count = 0;
  mbstate.__value = (anon_union_4_2_91654ee9_for___value)0x0;
  pcVar1 = cell + sVar4;
  if (cell != pcVar1) {
    __src = cell;
    do {
      while( true ) {
        __n = rpl_mbrtoc32(&wc,__src,(long)pcVar1 - (long)__src,&mbstate);
        if (__n <= (ulong)((long)pcVar1 - (long)__src)) break;
        __n = 1;
LAB_00100244:
        __src = __src + __n;
        *cell = '?';
        cell = cell + 1;
        mbstate.__count = 0;
        mbstate.__value = (anon_union_4_2_91654ee9_for___value)0x0;
        if (pcVar1 == __src) goto LAB_0010025c;
      }
      iVar3 = iswcntrl(wc);
      if (iVar3 != 0) goto LAB_00100244;
      pcVar5 = __src + __n;
      memmove(cell,__src,__n);
      cell = cell + __n;
      __src = pcVar5;
    } while (pcVar1 != pcVar5);
  }
LAB_0010025c:
  *cell = '\0';
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

void get_header(void)

{
  field_data_t **ppfVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  idx_t iVar5;
  int iVar6;
  code *pcVar7;
  field_data_t **ppfVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *pcVar12;
  long lVar13;
  uintmax_t uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  uintmax_t uVar18;
  uint uVar19;
  long in_FS_OFFSET;
  bool bVar20;
  char buf [652];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  alloc_table_row();
  if (0 < ncolumns) {
    lVar17 = 0;
    ppfVar8 = columns;
    do {
      uVar9 = dcgettext(0,ppfVar8[lVar17]->caption,5);
      if (ppfVar8[lVar17]->field != SIZE_FIELD) goto LAB_001002e8;
      if (header_mode == DEFAULT_MODE) {
LAB_00100460:
        uVar14 = output_block_size;
        uVar18 = output_block_size;
        do {
          lVar13 = uVar14 + ((uVar14 >> 3) / 0x7d) * -1000;
          uVar3 = uVar18 & 0x3ff;
          uVar4 = uVar18 & 0x3ff;
          uVar14 = (uVar14 >> 3) / 0x7d;
          uVar18 = uVar18 >> 10;
        } while (lVar13 == 0 && uVar3 == 0);
        bVar20 = uVar4 == 0;
        if ((lVar13 == 0) < bVar20) {
          uVar16 = human_output_opts & 0x124U | 0xb8;
LAB_0010053d:
          uVar19 = human_output_opts;
          if ((uVar16 & 0x20) == 0) goto LAB_001004dd;
        }
        else {
          if ((lVar13 == 0) <= bVar20) {
            uVar16 = human_output_opts & 0x124U | 0x98;
            goto LAB_0010053d;
          }
          uVar16 = human_output_opts & 0x104U | 0x98;
          uVar19 = human_output_opts & 0x104U;
LAB_001004dd:
          uVar16 = (uint)CONCAT11(1,(char)uVar16);
        }
        uVar9 = human_readable(output_block_size,buf,uVar16,1,1,uVar19);
        uVar10 = dcgettext(0,"blocks",5);
        uVar11 = dcgettext(0,"%s-%s",5);
        pcVar12 = (char *)xasprintf(uVar11,uVar9,uVar10);
      }
      else {
        if (header_mode == DT_DIR) {
          if ((human_output_opts & 0x10U) == 0) goto LAB_00100460;
        }
        else if (header_mode == MBSWIDTH_FLAGS) {
          uVar10 = umaxtostr(output_block_size,buf);
          uVar11 = dcgettext(0,"%s-%s",5);
          pcVar12 = (char *)xasprintf(uVar11,uVar10,uVar9);
          goto joined_r0x001002fb;
        }
LAB_001002e8:
        pcVar12 = (char *)xstrdup(uVar9);
      }
joined_r0x001002fb:
      if (tty_out_1 < 0) {
        tty_out_1 = isatty(1);
      }
      pcVar7 = replace_invalid_chars;
      if (tty_out_1 == 0) {
        pcVar7 = replace_control_chars;
      }
      (*pcVar7)(pcVar12);
      table[nrows + -1][lVar17] = pcVar12;
      iVar6 = gnu_mbswidth(pcVar12,3);
      ppfVar8 = columns;
      iVar5 = ncolumns;
      ppfVar1 = columns + lVar17;
      iVar15 = (*ppfVar1)->width;
      if (iVar15 < iVar6) {
        iVar15 = iVar6;
      }
      lVar17 = lVar17 + 1;
      (*ppfVar1)->width = iVar15;
    } while (lVar17 < iVar5);
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

void get_dev(char *device,char *mount_point,char *file,char *stat_file,char *fstype,_Bool me_dummy,
            _Bool me_remote,fs_usage *force_fsu,_Bool process_all)

{
  fs_type_list **ppfVar1;
  field_type_t fVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  idx_t iVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  size_t sVar12;
  code *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  uintmax_t uVar17;
  field_data_t **ppfVar18;
  undefined *puVar19;
  field_values_t *pfVar20;
  ulong uVar21;
  fs_type_list *pfVar22;
  ulong uVar23;
  uintmax_t uVar24;
  long lVar25;
  long in_FS_OFFSET;
  double dVar26;
  double dVar27;
  double dVar28;
  char *local_430;
  fs_usage fsu;
  field_values_t block_values;
  field_values_t inode_values;
  stat sb;
  char buf [653];
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (((me_remote) && (show_local_fs)) || ((me_dummy && ((!show_all_fs && (!show_listed_fs))))))
  goto LAB_00100648;
  if (fs_select_list == (fs_type_list *)0x0) {
LAB_0010060f:
    if ((fs_exclude_list != (fs_type_list *)0x0) &&
       (pfVar22 = fs_exclude_list, fstype != (char *)0x0)) {
      do {
        iVar8 = strcmp(fstype,pfVar22->fs_name);
        if (iVar8 == 0) goto LAB_00100648;
        ppfVar1 = &pfVar22->fs_next;
        pfVar22 = *ppfVar1;
      } while (*ppfVar1 != (fs_type_list *)0x0);
    }
  }
  else {
    pfVar22 = fs_select_list;
    if (fstype != (char *)0x0) {
      do {
        iVar8 = strcmp(fstype,pfVar22->fs_name);
        if (iVar8 == 0) goto LAB_0010060f;
        ppfVar1 = &pfVar22->fs_next;
        pfVar22 = *ppfVar1;
      } while (*ppfVar1 != (fs_type_list *)0x0);
      goto LAB_00100648;
    }
  }
  if ((mount_point != (char *)0x0) && (force_fsu == (fs_usage *)0x0)) {
    if (*mount_point == '/') {
      if (stat_file == (char *)0x0) {
        stat_file = mount_point;
      }
LAB_001006c5:
      iVar8 = get_fs_usage(stat_file,device,&fsu);
      if (iVar8 == 0) {
        if (!process_all) goto LAB_00100ebb;
        if (show_all_fs == false) {
          if (fsu.fsu_blocks == 0) {
LAB_00100d49:
            if (show_listed_fs == false) goto LAB_00100648;
          }
LAB_00100d56:
          file_systems_processed = true;
          goto LAB_00100788;
        }
        iVar8 = stat(stat_file,(stat *)&sb);
        if ((iVar8 != 0) || (devlist_table == (Hash_table *)0x0)) {
LAB_00100ebb:
          if ((fsu.fsu_blocks == 0) && (show_all_fs == false)) goto LAB_00100d49;
          goto LAB_00100d56;
        }
        inode_values.input_units = sb.st_dev;
        lVar15 = hash_lookup(devlist_table,&inode_values);
        if (((lVar15 == 0) ||
            (((*(long *)(lVar15 + 0x18) == 0 ||
              (puVar5 = *(undefined8 **)(*(long *)(lVar15 + 0x18) + 8), puVar5 == (undefined8 *)0x0)
              ) || (iVar8 = strcmp((char *)*puVar5,device), iVar8 == 0)))) ||
           (((*(byte *)(puVar5 + 5) & 2) != 0 && (me_remote)))) goto LAB_00100ebb;
        fsu._32_8_ = fsu._32_8_ & 0xffffffffffffff00;
        fstype = "-";
        file_systems_processed = true;
        fsu.fsu_files = 0xffffffffffffffff;
        fsu.fsu_ffree = 0xffffffffffffffff;
        fsu.fsu_blocksize = 0xffffffffffffffff;
        fsu.fsu_blocks = 0xffffffffffffffff;
        fsu.fsu_bfree = 0xffffffffffffffff;
        fsu.fsu_bavail = 0xffffffffffffffff;
        alloc_table_row();
        goto LAB_0010079b;
      }
      if (process_all) {
        piVar10 = __errno_location();
        if ((*piVar10 == 0xd) || (*piVar10 == 2)) {
          if (show_all_fs != false) {
            fsu._32_8_ = fsu._32_8_ & 0xffffffffffffff00;
            fstype = "-";
            fsu.fsu_files = 0xffffffffffffffff;
            fsu.fsu_ffree = 0xffffffffffffffff;
            fsu.fsu_blocksize = 0xffffffffffffffff;
            fsu.fsu_blocks = 0xffffffffffffffff;
            fsu.fsu_bfree = 0xffffffffffffffff;
            fsu.fsu_bavail = 0xffffffffffffffff;
            goto LAB_00100d56;
          }
          goto LAB_00100648;
        }
      }
      uVar16 = quotearg_n_style_colon(0,3,stat_file);
      piVar10 = __errno_location();
      error(0,*piVar10,&_LC5,uVar16);
      exit_status = 1;
    }
LAB_00100648:
    if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00101057;
  }
  if ((stat_file == (char *)0x0) && (stat_file = mount_point, mount_point == (char *)0x0)) {
    stat_file = device;
  }
  if (force_fsu == (fs_usage *)0x0) goto LAB_001006c5;
  fsu.fsu_blocksize = force_fsu->fsu_blocksize;
  fsu.fsu_blocks = force_fsu->fsu_blocks;
  fsu.fsu_bfree = force_fsu->fsu_bfree;
  fsu.fsu_bavail = force_fsu->fsu_bavail;
  fsu.fsu_bavail_top_bit_set = force_fsu->fsu_bavail_top_bit_set;
  fsu._33_7_ = *(undefined7 *)&force_fsu->field_0x21;
  fsu.fsu_files = force_fsu->fsu_files;
  fsu.fsu_ffree = force_fsu->fsu_ffree;
  if (((fsu.fsu_blocks == 0) && (show_all_fs == false)) && (show_listed_fs == false))
  goto LAB_00100648;
LAB_00100788:
  alloc_table_row();
  if (device == (char *)0x0) {
    device = "-";
  }
LAB_0010079b:
  pcVar11 = "-";
  if (file != (char *)0x0) {
    pcVar11 = file;
  }
  local_430 = (char *)xstrdup(device);
  if (((process_all) && (sVar12 = strlen(local_430), 0x24 < sVar12)) &&
     ((sVar12 = strspn(local_430 + (sVar12 - 0x24),"-0123456789abcdefABCDEF"), sVar12 == 0x24 &&
      (pcVar14 = (char *)canonicalize_filename_mode(local_430,0), pcVar14 != (char *)0x0)))) {
    free(local_430);
    local_430 = pcVar14;
  }
  if (fstype == (char *)0x0) {
    fstype = "-";
  }
  inode_values.negate_available = false;
  inode_values.available_to_root = fsu.fsu_ffree;
  inode_values.negate_used = false;
  inode_values.used = 0xffffffffffffffff;
  inode_values.input_units = __LC7;
  inode_values.output_units = _UNK_00104128;
  inode_values.total = fsu.fsu_files;
  inode_values.available = fsu.fsu_ffree;
  if ((fsu.fsu_files < 0xfffffffffffffffe) && (fsu.fsu_ffree < 0xfffffffffffffffe)) {
    inode_values.used = fsu.fsu_files - fsu.fsu_ffree;
    inode_values.negate_used = fsu.fsu_files < fsu.fsu_ffree;
  }
  block_values.used = 0xffffffffffffffff;
  block_values.negate_used = false;
  block_values.negate_available =
       (_Bool)(fsu.fsu_bavail < 0xfffffffffffffffe & fsu.fsu_bavail_top_bit_set);
  block_values.available_to_root = fsu.fsu_bfree;
  block_values.input_units = fsu.fsu_blocksize;
  block_values.output_units = output_block_size;
  block_values.total = fsu.fsu_blocks;
  block_values.available = fsu.fsu_bavail;
  if ((fsu.fsu_blocks < 0xfffffffffffffffe) && (fsu.fsu_bfree < 0xfffffffffffffffe)) {
    block_values.used = fsu.fsu_blocks - fsu.fsu_bfree;
    block_values.negate_used = fsu.fsu_blocks < fsu.fsu_bfree;
  }
  if ((print_grand_total != false) && (force_fsu == (fs_usage *)0x0)) {
    if (fsu.fsu_files < 0xfffffffffffffffe) {
      grand_fsu.fsu_files = grand_fsu.fsu_files + fsu.fsu_files;
    }
    if (fsu.fsu_ffree < 0xfffffffffffffffe) {
      grand_fsu.fsu_ffree = grand_fsu.fsu_ffree + fsu.fsu_ffree;
    }
    if (fsu.fsu_blocks < 0xfffffffffffffffe) {
      grand_fsu.fsu_blocks = grand_fsu.fsu_blocks + fsu.fsu_blocks * fsu.fsu_blocksize;
    }
    if (fsu.fsu_bfree < 0xfffffffffffffffe) {
      grand_fsu.fsu_bfree = grand_fsu.fsu_bfree + fsu.fsu_bfree * fsu.fsu_blocksize;
    }
    if (fsu.fsu_bavail < 0xfffffffffffffffe) {
      uVar21 = fsu.fsu_blocksize * fsu.fsu_bavail;
      if (block_values.negate_available == grand_fsu.fsu_bavail_top_bit_set) {
        grand_fsu.fsu_bavail = uVar21 + grand_fsu.fsu_bavail;
      }
      else if (grand_fsu.fsu_bavail_top_bit_set == false) {
        if (block_values.negate_available != false) goto LAB_00100ff6;
        if (grand_fsu.fsu_bavail <= uVar21) goto LAB_00101024;
        grand_fsu.fsu_bavail = grand_fsu.fsu_bavail - uVar21;
      }
      else {
        grand_fsu.fsu_bavail = -grand_fsu.fsu_bavail;
        if (block_values.negate_available == false) {
          if (grand_fsu.fsu_bavail <= uVar21) {
LAB_00101024:
            grand_fsu.fsu_bavail_top_bit_set = false;
            grand_fsu.fsu_bavail = uVar21 - grand_fsu.fsu_bavail;
            goto LAB_00100913;
          }
          grand_fsu.fsu_bavail = grand_fsu.fsu_bavail - uVar21;
        }
        else {
LAB_00100ff6:
          if (-uVar21 < grand_fsu.fsu_bavail) {
            grand_fsu.fsu_bavail = uVar21 + grand_fsu.fsu_bavail;
            if (grand_fsu.fsu_bavail_top_bit_set == false) goto LAB_00100913;
          }
          else {
            grand_fsu.fsu_bavail_top_bit_set = true;
            grand_fsu.fsu_bavail = -uVar21 - grand_fsu.fsu_bavail;
          }
        }
        grand_fsu.fsu_bavail = -grand_fsu.fsu_bavail;
      }
    }
  }
LAB_00100913:
  ppfVar18 = columns;
  lVar15 = 0;
  if (0 < ncolumns) {
    do {
      fVar2 = ppfVar18[lVar15]->field_type;
      if (fVar2 == INODE_FLD) {
        pfVar20 = &inode_values;
      }
      else if (fVar2 == OTHER_FLD) {
        pfVar20 = (field_values_t *)0x0;
      }
      else {
        if (fVar2 != BLOCK_FLD) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!\"bad field_type\"","src/df.c",0x473,"get_dev");
        }
        pfVar20 = &block_values;
      }
      switch(ppfVar18[lVar15]->field) {
      case SOURCE_FIELD:
        pcVar14 = (char *)xstrdup(local_430);
        break;
      case FSTYPE_FIELD:
        pcVar14 = (char *)xstrdup(fstype);
        break;
      case SIZE_FIELD:
      case ITOTAL_FIELD:
        pcVar14 = "-";
        if (pfVar20->total < 0xfffffffffffffffe) {
          pcVar14 = (char *)human_readable(pfVar20->total,buf,human_output_opts,pfVar20->input_units
                                           ,pfVar20->output_units);
        }
        goto LAB_00100bd8;
      case USED_FIELD:
      case IUSED_FIELD:
        uVar21 = pfVar20->used;
        uVar24 = pfVar20->output_units;
        uVar17 = pfVar20->input_units;
        bVar7 = pfVar20->negate_used;
        if (0xfffffffffffffffd < uVar21) goto LAB_00100ad1;
LAB_00100c01:
        pcVar14 = buf + bVar7;
        if (bVar7 != 0) goto LAB_00100aea;
        puVar19 = (undefined *)human_readable(uVar21,pcVar14,human_output_opts,uVar17,uVar24);
        goto LAB_00100afa;
      case AVAIL_FIELD:
      case IAVAIL_FIELD:
        uVar21 = pfVar20->available;
        uVar24 = pfVar20->output_units;
        uVar17 = pfVar20->input_units;
        bVar7 = pfVar20->negate_available;
        if (uVar21 < 0xfffffffffffffffe) goto LAB_00100c01;
LAB_00100ad1:
        puVar19 = &_LC4;
        if (bVar7 != 0) {
          pcVar14 = buf + 1;
LAB_00100aea:
          lVar25 = human_readable(-uVar21,pcVar14,human_output_opts,uVar17,uVar24);
          *(undefined1 *)(lVar25 + -1) = 0x2d;
          puVar19 = (undefined *)(lVar25 + -1);
        }
LAB_00100afa:
        pcVar14 = (char *)xstrdup(puVar19);
        break;
      case PCENT_FIELD:
      case IPCENT_FIELD:
        uVar21 = pfVar20->used;
        if ((uVar21 < 0xfffffffffffffffe) &&
           (uVar4 = pfVar20->available, uVar4 < 0xfffffffffffffffe)) {
          if (pfVar20->negate_used == false) {
            if (0x28f5c28f5c28f5c < uVar21) {
LAB_001009d5:
              if ((long)uVar21 < 0) {
                dVar26 = (double)uVar21;
              }
              else {
                dVar26 = (double)(long)uVar21;
              }
              goto LAB_001009e7;
            }
            uVar23 = uVar21 + uVar4;
            if ((uVar23 == 0) || (pfVar20->negate_available != CARRY8(uVar21,uVar4)))
            goto LAB_001009d5;
            uVar21 = ((uVar21 * 100) / uVar23 + 1) - (ulong)((uVar21 * 100) % uVar23 == 0);
            if ((long)uVar21 < 0) {
              dVar26 = (double)uVar21;
            }
            else {
              dVar26 = (double)(long)uVar21;
            }
LAB_00100d13:
            pcVar14 = (char *)xasprintf(dVar26,"%.0f%%");
            break;
          }
          if ((long)uVar21 < 1) {
            dVar26 = (double)(long)-uVar21;
          }
          else {
            dVar26 = (double)-uVar21;
          }
          dVar26 = (double)((ulong)dVar26 ^ __LC9);
LAB_001009e7:
          if (pfVar20->negate_available == false) {
            if ((long)uVar4 < 0) {
              dVar27 = (double)uVar4;
            }
            else {
              dVar27 = (double)(long)uVar4;
            }
          }
          else {
            if ((long)uVar4 < 1) {
              dVar27 = (double)(long)-uVar4;
            }
            else {
              dVar27 = (double)-uVar4;
            }
            dVar27 = (double)((ulong)dVar27 ^ __LC9);
          }
          if (dVar27 + dVar26 != 0.0) {
            dVar27 = (dVar26 * __LC11) / (dVar27 + dVar26);
            dVar28 = (double)(long)dVar27;
            dVar26 = dVar27;
            if (((dVar28 - _LC12 < dVar27) && (dVar27 <= _LC12 + dVar28)) &&
               (dVar26 = _LC12 + dVar28, dVar27 <= dVar28)) {
              dVar26 = dVar28 + 0.0;
            }
            if (0.0 <= dVar26) goto LAB_00100d13;
          }
        }
        pcVar14 = (char *)xstrdup(&_LC4);
        break;
      case TARGET_FIELD:
        pcVar14 = (char *)xstrdup(mount_point);
        break;
      case FILE_FIELD:
        pcVar14 = pcVar11;
LAB_00100bd8:
        pcVar14 = (char *)xstrdup(pcVar14);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unhandled field\"","src/df.c",0x4d0,"get_dev");
      }
      if (tty_out_1 < 0) {
        tty_out_1 = isatty(1);
      }
      pcVar13 = replace_invalid_chars;
      if (tty_out_1 == 0) {
        pcVar13 = replace_control_chars;
      }
      (*pcVar13)(pcVar14);
      iVar9 = gnu_mbswidth(pcVar14,3);
      ppfVar18 = columns;
      iVar6 = ncolumns;
      iVar8 = columns[lVar15]->width;
      if (iVar8 < iVar9) {
        iVar8 = iVar9;
      }
      lVar25 = lVar15 + 1;
      columns[lVar15]->width = iVar8;
      table[nrows + -1][lVar15] = pcVar14;
      lVar15 = lVar25;
    } while (lVar25 < iVar6);
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(local_430);
    return;
  }
LAB_00101057:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    goto LAB_001010f9;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... [FILE]...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Show information about the file system on which each FILE resides,\nor all file systems by default.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -a, --all             include pseudo, duplicate, inaccessible file systems\n  -B, --block-size=SIZE  scale sizes by SIZE before printing them; e.g.,\n                           \'-BM\' prints sizes in units of 1,048,576 bytes;\n                           see SIZE format below\n  -h, --human-readable  print sizes in powers of 1024 (e.g., 1023M)\n  -H, --si              print sizes in powers of 1000 (e.g., 1.1G)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -i, --inodes          list inode information instead of block usage\n  -k                    like --block-size=1K\n  -l, --local           limit listing to local file systems\n      --no-sync         do not invoke sync before getting usage info (default)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --output[=FIELD_LIST]  use the output format defined by FIELD_LIST,\n                               or print all fields if FIELD_LIST is omitted\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"  -P, --portability     use the POSIX output format\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --sync            invoke sync before getting usage info\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --total           elide all entries insignificant to available space,\n                          and produce a grand total\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -t, --type=TYPE       limit listing to file systems of type TYPE\n  -T, --print-type      print file system type\n  -x, --exclude-type=TYPE   limit listing to file systems not of type TYPE\n  -v                    (ignored)\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --help        display this help and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"      --version     output version information and exit\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,
                    "\nDisplay values are in units of the first available SIZE from --block-size,\nand the %s_BLOCK_SIZE, BLOCK_SIZE and BLOCKSIZE environment variables.\nOtherwise, units default to 1024 bytes (or 512 if POSIXLY_CORRECT is set).\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC34);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe SIZE argument is an integer and optional unit (example: 10K is 10*1024).\nUnits are K,M,G,T,P,E,Z,Y,R,Q (powers of 1024) or KB,MB,... (powers of 1000).\nBinary prefixes can be used, too: KiB=K, MiB=M, and so on.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nFIELD_LIST is a comma-separated list of columns to be included.  Valid\nfield names are: \'source\', \'fstype\', \'itotal\', \'iused\', \'iavail\', \'ipcent\',\n\'size\', \'used\', \'avail\', \'pcent\', \'file\' and \'target\' (see info page).\n"
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
    if (((*pcVar4 == 'd') && (pcVar4[1] == 'f')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)piVar6 + 0x10);
    piVar6 = (infomap *)((long)piVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)piVar6 + 8);
  if (puVar7 == (undefined1 *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC16;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00101464;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC16);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00101464:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC16);
    if (puVar7 == &_LC16) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001010f9:
                    /* WARNING: Subroutine does not return */
  exit(status);
}



/* WARNING: Unknown calling convention */

void decode_output_arg(char *arg)

{
  int iVar1;
  char *__ptr;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  char **ppcVar7;
  ulong uVar8;
  
  __ptr = (char *)xstrdup();
  pcVar6 = __ptr;
  while( true ) {
    pcVar5 = (char *)0x0;
    pcVar2 = strchr(pcVar6,0x2c);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      pcVar5 = pcVar2 + 1;
    }
    ppcVar7 = &field_data[0].arg;
    uVar8 = 0;
    while (iVar1 = strcmp(*ppcVar7,pcVar6), iVar1 != 0) {
      uVar8 = uVar8 + 1;
      ppcVar7 = ppcVar7 + 5;
      if (uVar8 == 0xc) {
        uVar3 = quote(pcVar6);
        pcVar6 = "option --output: field %s unknown";
        goto LAB_0010163d;
      }
    }
    if (field_data[uVar8 & 0xffffffff].used != false) break;
    if (uVar8 == 2) {
      alloc_field(2,"Size");
    }
    else if (uVar8 == 4) {
      alloc_field(4,"Avail");
    }
    else {
      alloc_field((int)uVar8,(char *)0x0);
    }
    pcVar6 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      free(__ptr);
      return;
    }
  }
  uVar3 = quote(field_data[uVar8 & 0xffffffff].arg);
  pcVar6 = "option --output: field %s used more than once";
LAB_0010163d:
  uVar4 = dcgettext(0,pcVar6,5);
  error(0,0,uVar4,uVar3);
                    /* WARNING: Subroutine does not return */
  usage(1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */
/* WARNING: Enum "anon_enum_32": Some values do not have unique names */

int main(int argc,char **argv)

{
  stat *__buf;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  fs_type_list *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  undefined *puVar12;
  undefined1 uVar13;
  fs_type_list *pfVar14;
  long in_FS_OFFSET;
  int oi;
  stat device_stats;
  
  bVar1 = false;
  lVar9 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*argv);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  fs_select_list = (fs_type_list *)0x0;
  fs_exclude_list = (fs_type_list *)0x0;
  show_all_fs = false;
  show_listed_fs = false;
  human_output_opts = -1;
  print_type = false;
  file_systems_processed = false;
  exit_status = 0;
  print_grand_total = false;
  grand_fsu.fsu_blocksize = 1;
  uVar4 = dcgettext(0,"options %s and %s are mutually exclusive",5);
  do {
    oi = -1;
    iVar2 = getopt_long(argc,argv,"aB:iF:hHklmPTt:vx:",long_options,&oi);
    pcVar8 = _optarg;
    if (iVar2 == -1) {
      if (human_output_opts == -1) {
        if (bVar1) {
          human_output_opts = 0;
          pcVar8 = getenv("POSIXLY_CORRECT");
          output_block_size = (ulong)(-(uint)(pcVar8 == (char *)0x0) & 0x200) + 0x200;
        }
        else {
          pcVar8 = getenv("DF_BLOCK_SIZE");
          human_options(pcVar8,&human_output_opts,&output_block_size);
        }
      }
      if ((header_mode != DT_FIFO) && (header_mode != DT_DIR)) {
        if ((human_output_opts & 0x10U) == 0) {
          if (bVar1) {
            header_mode = MBSWIDTH_FLAGS;
          }
        }
        else {
          header_mode = DT_CHR;
        }
      }
      if (fs_select_list != (fs_type_list *)0x0) {
        bVar1 = false;
        pfVar14 = fs_select_list;
        do {
          if (fs_exclude_list != (fs_type_list *)0x0) {
            pcVar8 = pfVar14->fs_name;
            pfVar5 = fs_exclude_list;
            do {
              iVar2 = strcmp(pcVar8,pfVar5->fs_name);
              if (iVar2 == 0) {
                bVar1 = true;
                uVar4 = quote(pcVar8);
                uVar6 = dcgettext(0,"file system type %s both selected and excluded",5);
                error(0,0,uVar6,uVar4);
                break;
              }
              pfVar5 = pfVar5->fs_next;
            } while (pfVar5 != (fs_type_list *)0x0);
          }
          pfVar14 = pfVar14->fs_next;
        } while (pfVar14 != (fs_type_list *)0x0);
        if (bVar1) {
          if (lVar9 == *(long *)(in_FS_OFFSET + 0x28)) {
            return 1;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        if (_optind < argc) {
LAB_00102cc5:
          lVar9 = xnmalloc((long)(argc - _optind),0x90);
          for (lVar11 = (long)_optind; (int)lVar11 < argc; lVar11 = lVar11 + 1) {
            pcVar8 = argv[lVar11];
            __buf = (stat *)(lVar9 + (long)((int)lVar11 - _optind) * 0x90);
            iVar2 = open(pcVar8,0x900);
            if (iVar2 < 0) {
              piVar10 = __errno_location();
              iVar3 = *piVar10;
              if ((iVar3 == 2) || (iVar3 == 0x14)) goto LAB_00102d47;
              iVar2 = stat(pcVar8,__buf);
              if (iVar2 != 0) {
                iVar3 = *piVar10;
                goto LAB_00102dc0;
              }
            }
            else {
              iVar3 = fstat(iVar2,__buf);
              if (iVar3 != 0) {
                piVar10 = __errno_location();
                iVar3 = *piVar10;
              }
              close(iVar2);
LAB_00102dc0:
              if (iVar3 != 0) {
LAB_00102d47:
                uVar4 = quotearg_n_style_colon(0,3,argv[lVar11]);
                error(0,iVar3,&_LC5,uVar4);
                argv[lVar11] = (char *)0x0;
                exit_status = 1;
              }
            }
          }
        }
        uVar13 = 1;
        if (fs_select_list == (fs_type_list *)0x0) {
LAB_00102dea:
          uVar13 = 1;
          if (((fs_exclude_list == (fs_type_list *)0x0) && (print_type == false)) &&
             (field_data[1].used == false)) {
            uVar13 = show_local_fs;
          }
        }
        mount_list = (mount_entry *)read_file_system_list(uVar13);
        if (mount_list == (mount_entry *)0x0) {
          uVar4 = 1;
          puVar12 = &_LC18;
          if (((_optind < argc) && (show_all_fs == false)) &&
             ((show_local_fs == false &&
              ((fs_select_list == (fs_type_list *)0x0 && (fs_exclude_list == (fs_type_list *)0x0))))
             )) {
            uVar4 = 0;
            puVar12 = (undefined *)dcgettext(0,"Warning: ",5);
          }
          uVar6 = dcgettext(0,"cannot read table of mounted file systems",5);
          piVar10 = __errno_location();
          error(uVar4,*piVar10,&_LC72,puVar12,uVar6);
        }
        if (require_sync != false) {
          sync();
        }
                    /* WARNING: Could not recover jumptable at 0x00102c27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*(code *)(&DAT_00101c18 + *(int *)(&DAT_00101c18 + (ulong)(uint)header_mode * 4)))
                          ();
        return iVar2;
      }
      if (_optind < argc) goto LAB_00102cc5;
      goto LAB_00102dea;
    }
    if (0x83 < iVar2) goto switchD_001028dd_caseD_43;
    if (iVar2 < 0x42) {
      if (iVar2 == -0x83) {
        uVar4 = proper_name_lite("Paul Eggert","Paul Eggert");
        uVar6 = proper_name_lite("David MacKenzie","David MacKenzie");
        uVar7 = proper_name_lite("Torbjorn Granlund",&_LC65);
        version_etc(_stdout,&_LC16,"GNU coreutils",_Version,uVar7,uVar6,uVar4,0);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (iVar2 == -0x82) {
                    /* WARNING: Subroutine does not return */
        usage(0);
      }
      goto switchD_001028dd_caseD_43;
    }
    switch(iVar2) {
    case 0x42:
      iVar2 = human_options(_optarg,&human_output_opts,&output_block_size);
      if (iVar2 == 0) break;
      xstrtol_fatal(iVar2,oi,0x42,long_options,_optarg);
    case 0x83:
      if (header_mode == DT_FIFO) {
LAB_00103bb9:
        puVar12 = &_LC60;
      }
      else {
        if ((header_mode == DEFAULT_MODE) && (bVar1)) {
          error(0,0,uVar4,&_LC62,"--output");
                    /* WARNING: Subroutine does not return */
          usage(1);
        }
        if (print_type == false) {
          header_mode = DT_DIR;
          if (_optarg != (char *)0x0) {
            decode_output_arg(_optarg);
          }
          break;
        }
LAB_00102e23:
        puVar12 = &_LC61;
      }
LAB_00102e31:
      error(0,0,uVar4,puVar12,"--output");
      goto switchD_001028dd_caseD_43;
    default:
switchD_001028dd_caseD_43:
                    /* WARNING: Subroutine does not return */
      usage(1);
    case 0x46:
    case 0x74:
      pfVar5 = (fs_type_list *)xmalloc(0x10);
      pfVar14 = fs_select_list;
      fs_select_list = pfVar5;
      pfVar5->fs_name = pcVar8;
      pfVar5->fs_next = pfVar14;
      break;
    case 0x48:
      human_output_opts = 0x90;
      output_block_size = 1;
      break;
    case 0x50:
      if (header_mode == DT_DIR) {
        puVar12 = &_LC62;
        goto LAB_00102e31;
      }
      bVar1 = true;
      break;
    case 0x54:
      if (header_mode == DT_DIR) goto LAB_00102e23;
      print_type = true;
      break;
    case 0x61:
      show_all_fs = true;
      break;
    case 0x68:
      human_output_opts = 0xb0;
      output_block_size = 1;
      break;
    case 0x69:
      if (header_mode == DT_DIR) goto LAB_00103bb9;
      header_mode = DT_FIFO;
      break;
    case 0x6b:
      human_output_opts = 0;
      output_block_size = 0x400;
      break;
    case 0x6c:
      show_local_fs = true;
      break;
    case 0x6d:
      human_output_opts = 0;
      output_block_size = 0x100000;
      break;
    case 0x76:
      break;
    case 0x78:
      pfVar5 = (fs_type_list *)xmalloc(0x10);
      pfVar14 = fs_exclude_list;
      fs_exclude_list = pfVar5;
      pfVar5->fs_name = pcVar8;
      pfVar5->fs_next = pfVar14;
      break;
    case 0x80:
      require_sync = false;
      break;
    case 0x81:
      require_sync = true;
      break;
    case 0x82:
      print_grand_total = true;
    }
  } while( true );
}


