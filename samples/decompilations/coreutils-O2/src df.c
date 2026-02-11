
void replace_control_chars(void)

{
  FUN_0010001b();
  return;
}



void FUN_0010001b(char *param_1)

{
  char cVar1;
  
  do {
    cVar1 = *param_1;
    if (cVar1 == '\0') {
      return;
    }
    if (cVar1 < ' ') {
      if ('\0' < cVar1) goto LAB_00100014;
    }
    else if (cVar1 == '\x7f') {
LAB_00100014:
      *param_1 = '?';
    }
    param_1 = param_1 + 1;
  } while( true );
}



ulong devlist_hash(ulong *param_1,ulong param_2)

{
  return *param_1 % param_2;
}



undefined8 devlist_compare(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}



void alloc_field(int param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (ncolumns == ncolumns_alloc) {
    columns = xpalloc(columns,&ncolumns_alloc,1,0xffffffffffffffff,8);
  }
  lVar1 = (long)param_1 * 0x28;
  lVar2 = ncolumns * 8;
  ncolumns = ncolumns + 1;
  *(undefined1 **)(columns + lVar2) = field_data + lVar1;
  if (param_2 != 0) {
    *(long *)(field_data + lVar1 + 0x18) = param_2;
  }
  lVar1 = (long)param_1 * 0x28;
  if (field_data[lVar1 + 0x25] == '\0') {
    field_data[lVar1 + 0x25] = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("!field_data[f].used","src/df.c",0x1a4,"alloc_field");
}



void alloc_table_row(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (nrows == nrows_alloc) {
    table = xpalloc(table,&nrows_alloc,1,0xffffffffffffffff,8);
  }
  puVar1 = (undefined8 *)(table + nrows * 8);
  nrows = nrows + 1;
  uVar2 = xinmalloc(ncolumns,8);
  *puVar1 = uVar2;
  return;
}



void replace_invalid_chars(char *param_1)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  ulong __n;
  char *pcVar4;
  char *__src;
  long in_FS_OFFSET;
  wint_t local_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  sVar3 = strlen(param_1);
  local_48 = 0;
  pcVar1 = param_1 + sVar3;
  if (param_1 != pcVar1) {
    __src = param_1;
    do {
      while( true ) {
        __n = rpl_mbrtoc32(&local_4c,__src,(long)pcVar1 - (long)__src,&local_48);
        if (__n <= (ulong)((long)pcVar1 - (long)__src)) break;
        __n = 1;
LAB_00100244:
        __src = __src + __n;
        *param_1 = '?';
        param_1 = param_1 + 1;
        local_48 = 0;
        if (pcVar1 == __src) goto LAB_0010025c;
      }
      iVar2 = iswcntrl(local_4c);
      if (iVar2 != 0) goto LAB_00100244;
      pcVar4 = __src + __n;
      memmove(param_1,__src,__n);
      param_1 = param_1 + __n;
      __src = pcVar4;
    } while (pcVar1 != pcVar4);
  }
LAB_0010025c:
  *param_1 = '\0';
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void get_header(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long in_FS_OFFSET;
  bool bVar17;
  undefined1 auStack_2d8 [664];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  alloc_table_row();
  if (0 < ncolumns) {
    lVar14 = 0;
    lVar11 = columns;
    do {
      lVar1 = lVar14 * 8;
      uVar8 = dcgettext(0,*(undefined8 *)(*(long *)(lVar11 + lVar1) + 0x18),5);
      if (**(int **)(lVar11 + lVar1) != 2) goto LAB_001002e8;
      if (header_mode == 0) {
LAB_00100460:
        uVar12 = output_block_size;
        uVar15 = output_block_size;
        do {
          lVar11 = uVar12 + ((uVar12 >> 3) / 0x7d) * -1000;
          uVar3 = uVar15 & 0x3ff;
          uVar4 = uVar15 & 0x3ff;
          uVar12 = (uVar12 >> 3) / 0x7d;
          uVar15 = uVar15 >> 10;
        } while (lVar11 == 0 && uVar3 == 0);
        bVar17 = uVar4 == 0;
        if ((lVar11 == 0) < bVar17) {
          uVar13 = human_output_opts & 0x124 | 0xb8;
LAB_0010053d:
          uVar16 = human_output_opts;
          if ((uVar13 & 0x20) == 0) goto LAB_001004dd;
        }
        else {
          if ((lVar11 == 0) <= bVar17) {
            uVar13 = human_output_opts & 0x124 | 0x98;
            goto LAB_0010053d;
          }
          uVar13 = human_output_opts & 0x104 | 0x98;
          uVar16 = human_output_opts & 0x104;
LAB_001004dd:
          uVar13 = (uint)CONCAT11(1,(char)uVar13);
        }
        uVar8 = human_readable(output_block_size,auStack_2d8,uVar13,1,1,uVar16);
        uVar9 = dcgettext(0,"blocks",5);
        uVar10 = dcgettext(0,"%s-%s",5);
        uVar8 = xasprintf(uVar10,uVar8,uVar9);
      }
      else {
        if (header_mode == 4) {
          if ((human_output_opts & 0x10) == 0) goto LAB_00100460;
        }
        else if (header_mode == 3) {
          uVar9 = umaxtostr(output_block_size,auStack_2d8);
          uVar10 = dcgettext(0,"%s-%s",5);
          uVar8 = xasprintf(uVar10,uVar9,uVar8);
          goto joined_r0x001002fb;
        }
LAB_001002e8:
        uVar8 = xstrdup(uVar8);
      }
joined_r0x001002fb:
      if (tty_out_1 < 0) {
        tty_out_1 = isatty(1);
      }
      pcVar7 = replace_invalid_chars;
      if (tty_out_1 == 0) {
        pcVar7 = replace_control_chars;
      }
      (*pcVar7)(uVar8);
      *(undefined8 *)(*(long *)(table + -8 + nrows * 8) + lVar1) = uVar8;
      iVar6 = gnu_mbswidth(uVar8,3);
      lVar11 = columns;
      lVar5 = ncolumns;
      iVar2 = *(int *)(*(long *)(columns + lVar1) + 0x20);
      if (iVar2 < iVar6) {
        iVar2 = iVar6;
      }
      lVar14 = lVar14 + 1;
      *(int *)(*(long *)(columns + lVar1) + 0x20) = iVar2;
    } while (lVar14 < lVar5);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void get_dev(char *param_1,char *param_2,undefined *param_3,char *param_4,char *param_5,char param_6
            ,char param_7,__dev_t *param_8,char param_9)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined *puVar11;
  size_t sVar12;
  code *pcVar13;
  char *pcVar14;
  long lVar15;
  undefined8 uVar16;
  __dev_t _Var17;
  undefined *puVar18;
  __dev_t *p_Var19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  __dev_t _Var24;
  long lVar25;
  long in_FS_OFFSET;
  double dVar26;
  double dVar27;
  double dVar28;
  char *local_430;
  __dev_t local_428;
  ulong uStack_420;
  ulong local_418;
  ulong uStack_410;
  ulong local_408;
  ulong uStack_400;
  ulong uStack_3f8;
  __dev_t local_3e8;
  undefined8 uStack_3e0;
  ulong local_3d8;
  ulong uStack_3d0;
  byte local_3c8 [8];
  ulong local_3c0;
  long local_3b8;
  bool local_3b0 [8];
  __dev_t local_3a8;
  undefined8 uStack_3a0;
  ulong local_398;
  ulong uStack_390;
  undefined1 local_388;
  ulong local_380;
  long local_378;
  bool local_370;
  stat local_368;
  undefined1 local_2d8 [664];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_7 != '\0') && (show_local_fs != '\0')) ||
     ((param_6 != '\0' && ((show_all_fs == '\0' && (show_listed_fs == '\0')))))) goto LAB_00100648;
  if (fs_select_list == (undefined8 *)0x0) {
LAB_0010060f:
    if ((fs_exclude_list != (undefined8 *)0x0) &&
       (puVar21 = fs_exclude_list, param_5 != (char *)0x0)) {
      do {
        iVar8 = strcmp(param_5,(char *)*puVar21);
        if (iVar8 == 0) goto LAB_00100648;
        plVar1 = puVar21 + 1;
        puVar21 = (undefined8 *)*plVar1;
      } while ((undefined8 *)*plVar1 != (undefined8 *)0x0);
    }
  }
  else {
    puVar21 = fs_select_list;
    if (param_5 != (char *)0x0) {
      do {
        iVar8 = strcmp(param_5,(char *)*puVar21);
        if (iVar8 == 0) goto LAB_0010060f;
        plVar1 = puVar21 + 1;
        puVar21 = (undefined8 *)*plVar1;
      } while ((undefined8 *)*plVar1 != (undefined8 *)0x0);
      goto LAB_00100648;
    }
  }
  if ((param_2 != (char *)0x0) && (param_8 == (__dev_t *)0x0)) {
    if (*param_2 == '/') {
      if (param_4 == (char *)0x0) {
        param_4 = param_2;
      }
LAB_001006c5:
      iVar8 = get_fs_usage(param_4,param_1,&local_428);
      if (iVar8 == 0) {
        if (param_9 == '\0') goto LAB_00100ebb;
        if (show_all_fs == '\0') {
          if (uStack_420 == 0) {
LAB_00100d49:
            if (show_listed_fs == '\0') goto LAB_00100648;
          }
LAB_00100d56:
          file_systems_processed = 1;
          goto LAB_00100788;
        }
        iVar8 = stat(param_4,&local_368);
        if ((iVar8 != 0) || (devlist_table == 0)) {
LAB_00100ebb:
          if ((uStack_420 == 0) && (show_all_fs == '\0')) goto LAB_00100d49;
          goto LAB_00100d56;
        }
        local_3a8 = local_368.st_dev;
        lVar15 = hash_lookup(devlist_table,&local_3a8);
        if (((lVar15 == 0) ||
            (((*(long *)(lVar15 + 0x18) == 0 ||
              (puVar21 = *(undefined8 **)(*(long *)(lVar15 + 0x18) + 8),
              puVar21 == (undefined8 *)0x0)) ||
             (iVar8 = strcmp((char *)*puVar21,param_1), iVar8 == 0)))) ||
           (((*(byte *)(puVar21 + 5) & 2) != 0 && (param_7 != '\0')))) goto LAB_00100ebb;
        local_408 = local_408 & 0xffffffffffffff00;
        param_5 = "-";
        file_systems_processed = 1;
        uStack_400 = 0xffffffffffffffff;
        uStack_3f8 = 0xffffffffffffffff;
        local_428 = 0xffffffffffffffff;
        uStack_420 = 0xffffffffffffffff;
        local_418 = 0xffffffffffffffff;
        uStack_410 = 0xffffffffffffffff;
        alloc_table_row();
        goto LAB_0010079b;
      }
      if (param_9 != '\0') {
        piVar10 = __errno_location();
        if ((*piVar10 == 0xd) || (*piVar10 == 2)) {
          if (show_all_fs != '\0') {
            local_408 = local_408 & 0xffffffffffffff00;
            param_5 = "-";
            uStack_400 = 0xffffffffffffffff;
            uStack_3f8 = 0xffffffffffffffff;
            local_428 = 0xffffffffffffffff;
            uStack_420 = 0xffffffffffffffff;
            local_418 = 0xffffffffffffffff;
            uStack_410 = 0xffffffffffffffff;
            goto LAB_00100d56;
          }
          goto LAB_00100648;
        }
      }
      uVar16 = quotearg_n_style_colon(0,3,param_4);
      piVar10 = __errno_location();
      error(0,*piVar10,&_LC5,uVar16);
      exit_status = 1;
    }
LAB_00100648:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00101057;
  }
  if ((param_4 == (char *)0x0) && (param_4 = param_2, param_2 == (char *)0x0)) {
    param_4 = param_1;
  }
  if (param_8 == (__dev_t *)0x0) goto LAB_001006c5;
  local_428 = *param_8;
  uStack_420 = param_8[1];
  local_418 = param_8[2];
  uStack_410 = param_8[3];
  local_408 = param_8[4];
  uStack_400 = param_8[5];
  uStack_3f8 = param_8[6];
  if (((uStack_420 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0')) goto LAB_00100648;
LAB_00100788:
  alloc_table_row();
  if (param_1 == (char *)0x0) {
    param_1 = "-";
  }
LAB_0010079b:
  puVar11 = &_LC4;
  if (param_3 != (undefined *)0x0) {
    puVar11 = param_3;
  }
  local_430 = (char *)xstrdup(param_1);
  if (((param_9 != '\0') && (sVar12 = strlen(local_430), 0x24 < sVar12)) &&
     ((sVar12 = strspn(local_430 + (sVar12 - 0x24),"-0123456789abcdefABCDEF"), sVar12 == 0x24 &&
      (pcVar14 = (char *)canonicalize_filename_mode(local_430,0), pcVar14 != (char *)0x0)))) {
    free(local_430);
    local_430 = pcVar14;
  }
  if (param_5 == (char *)0x0) {
    param_5 = "-";
  }
  local_388 = 0;
  local_380 = uStack_3f8;
  local_370 = false;
  local_378 = -1;
  local_3a8 = __LC7;
  uStack_3a0 = _UNK_00104128;
  local_398 = uStack_400;
  uStack_390 = uStack_3f8;
  if ((uStack_400 < 0xfffffffffffffffe) && (uStack_3f8 < 0xfffffffffffffffe)) {
    local_378 = uStack_400 - uStack_3f8;
    local_370 = uStack_400 < uStack_3f8;
  }
  local_3b8 = -1;
  local_3b0[0] = false;
  local_3c8[0] = uStack_410 < 0xfffffffffffffffe & (byte)local_408;
  local_3c0 = local_418;
  local_3e8 = local_428;
  uStack_3e0 = output_block_size;
  local_3d8 = uStack_420;
  uStack_3d0 = uStack_410;
  if ((uStack_420 < 0xfffffffffffffffe) && (local_418 < 0xfffffffffffffffe)) {
    local_3b8 = uStack_420 - local_418;
    local_3b0[0] = uStack_420 < local_418;
  }
  if ((print_grand_total != '\0') && (param_8 == (__dev_t *)0x0)) {
    if (uStack_400 < 0xfffffffffffffffe) {
      grand_fsu._40_8_ = grand_fsu._40_8_ + uStack_400;
    }
    if (uStack_3f8 < 0xfffffffffffffffe) {
      grand_fsu._48_8_ = grand_fsu._48_8_ + uStack_3f8;
    }
    if (uStack_420 < 0xfffffffffffffffe) {
      grand_fsu._8_8_ = grand_fsu._8_8_ + uStack_420 * local_428;
    }
    if (local_418 < 0xfffffffffffffffe) {
      grand_fsu._16_8_ = grand_fsu._16_8_ + local_418 * local_428;
    }
    if (uStack_410 < 0xfffffffffffffffe) {
      uVar20 = local_428 * uStack_410;
      if (local_3c8[0] == grand_fsu[0x20]) {
        grand_fsu._24_8_ = uVar20 + grand_fsu._24_8_;
      }
      else if (grand_fsu[0x20] == 0) {
        if (local_3c8[0] != 0) goto LAB_00100ff6;
        if ((ulong)grand_fsu._24_8_ <= uVar20) goto LAB_00101024;
        grand_fsu._24_8_ = grand_fsu._24_8_ - uVar20;
      }
      else {
        grand_fsu._24_8_ = -grand_fsu._24_8_;
        if (local_3c8[0] == 0) {
          if ((ulong)grand_fsu._24_8_ <= uVar20) {
LAB_00101024:
            grand_fsu[0x20] = 0;
            grand_fsu._24_8_ = uVar20 - grand_fsu._24_8_;
            goto LAB_00100913;
          }
          grand_fsu._24_8_ = grand_fsu._24_8_ - uVar20;
        }
        else {
LAB_00100ff6:
          if (-uVar20 < (ulong)grand_fsu._24_8_) {
            grand_fsu._24_8_ = uVar20 + grand_fsu._24_8_;
            if (grand_fsu[0x20] == 0) goto LAB_00100913;
          }
          else {
            grand_fsu[0x20] = 1;
            grand_fsu._24_8_ = -uVar20 - grand_fsu._24_8_;
          }
        }
        grand_fsu._24_8_ = -grand_fsu._24_8_;
      }
    }
  }
LAB_00100913:
  lVar25 = 0;
  lVar15 = columns;
  if (0 < ncolumns) {
    do {
      puVar3 = *(undefined4 **)(lVar15 + lVar25 * 8);
      lVar2 = lVar25 * 8;
      iVar8 = puVar3[4];
      if (iVar8 == 1) {
        p_Var19 = &local_3a8;
      }
      else if (iVar8 == 2) {
        p_Var19 = (__dev_t *)0x0;
      }
      else {
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!\"bad field_type\"","src/df.c",0x473,"get_dev");
        }
        p_Var19 = &local_3e8;
      }
      switch(*puVar3) {
      case 0:
        uVar16 = xstrdup(local_430);
        break;
      case 1:
        uVar16 = xstrdup(param_5);
        break;
      case 2:
      case 6:
        puVar18 = &_LC4;
        if (p_Var19[2] < 0xfffffffffffffffe) {
          puVar18 = (undefined *)
                    human_readable(p_Var19[2],local_2d8,human_output_opts,*p_Var19,p_Var19[1]);
        }
        goto LAB_00100bd8;
      case 3:
      case 7:
        uVar20 = p_Var19[6];
        _Var24 = p_Var19[1];
        _Var17 = *p_Var19;
        bVar7 = (byte)p_Var19[7];
        if (0xfffffffffffffffd < uVar20) goto LAB_00100ad1;
LAB_00100c01:
        puVar22 = local_2d8 + bVar7;
        if (bVar7 != 0) goto LAB_00100aea;
        puVar18 = (undefined *)human_readable(uVar20,puVar22,human_output_opts,_Var17,_Var24);
        goto LAB_00100afa;
      case 4:
      case 8:
        uVar20 = p_Var19[3];
        _Var24 = p_Var19[1];
        _Var17 = *p_Var19;
        bVar7 = (byte)p_Var19[4];
        if (uVar20 < 0xfffffffffffffffe) goto LAB_00100c01;
LAB_00100ad1:
        puVar18 = &_LC4;
        if (bVar7 != 0) {
          puVar22 = local_2d8 + 1;
LAB_00100aea:
          lVar15 = human_readable(-uVar20,puVar22,human_output_opts,_Var17,_Var24);
          *(undefined1 *)(lVar15 + -1) = 0x2d;
          puVar18 = (undefined *)(lVar15 + -1);
        }
LAB_00100afa:
        uVar16 = xstrdup(puVar18);
        break;
      case 5:
      case 9:
        uVar20 = p_Var19[6];
        if ((uVar20 < 0xfffffffffffffffe) && (uVar4 = p_Var19[3], uVar4 < 0xfffffffffffffffe)) {
          if ((char)p_Var19[7] == '\0') {
            if (0x28f5c28f5c28f5c < uVar20) {
LAB_001009d5:
              if ((long)uVar20 < 0) {
                dVar26 = (double)uVar20;
              }
              else {
                dVar26 = (double)(long)uVar20;
              }
              goto LAB_001009e7;
            }
            uVar23 = uVar20 + uVar4;
            if ((uVar23 == 0) || ((bool)(char)p_Var19[4] != CARRY8(uVar20,uVar4)))
            goto LAB_001009d5;
            uVar20 = ((uVar20 * 100) / uVar23 + 1) - (ulong)((uVar20 * 100) % uVar23 == 0);
            if ((long)uVar20 < 0) {
              dVar26 = (double)uVar20;
            }
            else {
              dVar26 = (double)(long)uVar20;
            }
LAB_00100d13:
            uVar16 = xasprintf(dVar26,"%.0f%%");
            break;
          }
          if ((long)uVar20 < 1) {
            dVar26 = (double)(long)-uVar20;
          }
          else {
            dVar26 = (double)-uVar20;
          }
          dVar26 = (double)((ulong)dVar26 ^ __LC9);
LAB_001009e7:
          if ((char)p_Var19[4] == '\0') {
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
        uVar16 = xstrdup(&_LC4);
        break;
      case 10:
        uVar16 = xstrdup(param_2);
        break;
      case 0xb:
        puVar18 = puVar11;
LAB_00100bd8:
        uVar16 = xstrdup(puVar18);
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
      (*pcVar13)(uVar16);
      iVar9 = gnu_mbswidth(uVar16,3);
      lVar15 = columns;
      lVar6 = ncolumns;
      lVar5 = *(long *)(columns + lVar2);
      iVar8 = *(int *)(lVar5 + 0x20);
      if (iVar8 < iVar9) {
        iVar8 = iVar9;
      }
      lVar25 = lVar25 + 1;
      *(int *)(lVar5 + 0x20) = iVar8;
      *(undefined8 *)(*(long *)(table + -8 + nrows * 8) + lVar2) = uVar16;
    } while (lVar25 < lVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(local_430);
    return;
  }
LAB_00101057:
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
  local_a8 = &_LC15;
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
    if (((*pcVar4 == 'd') && (pcVar4[1] == 'f')) && (pcVar4[2] == '\0')) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined1 **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined1 **)((long)ppuVar6 + 8);
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
  exit(param_1);
}



void decode_output_arg(void)

{
  int iVar1;
  char *__ptr;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  __ptr = (char *)xstrdup();
  pcVar6 = __ptr;
  do {
    pcVar5 = (char *)0x0;
    pcVar2 = strchr(pcVar6,0x2c);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      pcVar5 = pcVar2 + 1;
    }
    puVar7 = (undefined8 *)(field_data + 8);
    uVar8 = 0;
    do {
      iVar1 = strcmp((char *)*puVar7,pcVar6);
      if (iVar1 == 0) goto LAB_00101660;
      uVar8 = uVar8 + 1;
      puVar7 = puVar7 + 5;
    } while (uVar8 != 0xc);
    uVar3 = quote(pcVar6);
    pcVar6 = "option --output: field %s unknown";
    while( true ) {
      uVar4 = dcgettext(0,pcVar6,5);
      error(0,0,uVar4,uVar3);
      usage(1);
LAB_00101660:
      if (field_data[(uVar8 & 0xffffffff) * 0x28 + 0x25] == '\0') break;
      uVar3 = quote();
      pcVar6 = "option --output: field %s used more than once";
    }
    if (uVar8 == 2) {
      alloc_field(2,&_LC53);
    }
    else if (uVar8 == 4) {
      alloc_field(4,"Avail");
    }
    else {
      alloc_field(uVar8 & 0xffffffff,0);
    }
    pcVar6 = pcVar5;
  } while (pcVar5 != (char *)0x0);
  free(__ptr);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(uint param_1,undefined8 *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  __dev_t _Var13;
  void *__ptr;
  stat *psVar14;
  size_t sVar15;
  size_t sVar16;
  char *pcVar17;
  undefined8 uVar18;
  int *piVar19;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  stat *psVar20;
  char *pcVar21;
  uint *puVar22;
  long lVar23;
  char *pcVar24;
  long *plVar25;
  undefined *puVar26;
  char cVar27;
  undefined8 in_R10;
  undefined8 in_R11;
  char *__s2;
  undefined1 *puVar28;
  undefined8 uVar29;
  char *pcVar30;
  stat *__ptr_00;
  long in_FS_OFFSET;
  bool bVar31;
  undefined1 auVar32 [16];
  char local_158;
  char *local_148;
  char *local_140;
  char *local_138;
  char *local_130;
  stat *local_128;
  char *local_120;
  char *local_118;
  ulong local_f8 [4];
  stat local_d8;
  long local_40;
  
  __ptr_00 = (stat *)0x0;
  puVar28 = long_options;
  psVar20 = (stat *)(ulong)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar22 = &switchD_001028dd::switchdataD_00101b10;
  textdomain("coreutils");
  atexit((__func *)&close_stdout);
  fs_select_list = (long *)0x0;
  fs_exclude_list = (long *)0x0;
  show_all_fs = '\0';
  show_listed_fs = '\0';
  human_output_opts = 0xffffffff;
  print_type = '\0';
  file_systems_processed = '\0';
  exit_status = 0;
  print_grand_total = '\0';
  grand_fsu._0_8_ = 1;
  local_148 = (char *)dcgettext(0,"options %s and %s are mutually exclusive",5);
switchD_001028dd_caseD_76:
  local_f8[0] = CONCAT44(local_f8[0]._4_4_,0xffffffff);
  iVar3 = getopt_long(param_1,param_2,"aB:iF:hHklmPTt:vx:",long_options,local_f8);
  lVar9 = _optarg;
  if (iVar3 == -1) {
    if (human_output_opts != 0xffffffff) goto LAB_00102b4a;
    if ((char)__ptr_00 == '\0') goto LAB_00102e4b;
    human_output_opts = 0;
    pcVar10 = getenv("POSIXLY_CORRECT");
    output_block_size = (ulong)(-(uint)(pcVar10 == (char *)0x0) & 0x200) + 0x200;
    goto LAB_00102b4a;
  }
  if (0x83 < iVar3) goto switchD_001028dd_caseD_43;
  if (iVar3 < 0x42) {
    if (iVar3 == -0x83) {
      uVar29 = proper_name_lite("Paul Eggert","Paul Eggert");
      uVar18 = proper_name_lite("David MacKenzie","David MacKenzie");
      uVar7 = proper_name_lite("Torbjorn Granlund",&_LC65);
      version_etc(_stdout,&_LC16,"GNU coreutils",_Version,uVar7,uVar18,uVar29,0);
                    /* WARNING: Subroutine does not return */
      exit(0);
    }
    if (iVar3 == -0x82) {
      usage(0);
LAB_00103b48:
      bVar31 = false;
LAB_001039b8:
      pcVar10 = (char *)psVar20->st_dev;
      local_158 = (char)param_2;
      if ((((print_grand_total == '\0') && ((psVar20->st_rdev & 2) != 0)) &&
          ((((stat *)puVar22)->st_rdev & 2) != 0)) &&
         (iVar3 = strcmp((char *)((stat *)puVar22)->st_dev,pcVar10), iVar3 != 0)) goto LAB_001038bd;
      pcVar17 = strchr(pcVar10,0x2f);
      uVar29 = extraout_RDX;
      if (((pcVar17 == (char *)0x0) ||
          (pcVar17 = strchr((char *)((stat *)puVar22)->st_dev,0x2f), uVar29 = extraout_RDX_00,
          pcVar17 != (char *)0x0)) && ((local_138 <= local_130 || (bVar31)))) {
        uVar5 = strcmp((char *)((stat *)puVar22)->st_dev,pcVar10);
        pcVar17 = (char *)(ulong)uVar5;
        uVar29 = extraout_RDX_01;
        psVar14 = psVar20;
        if (uVar5 != 0) {
          uVar5 = strcmp(local_140,local_148);
          pcVar17 = (char *)(ulong)uVar5;
          uVar29 = extraout_RDX_02;
          if (uVar5 == 0) goto LAB_00103a29;
        }
      }
      else {
LAB_00103a29:
        *(stat **)(puVar28 + 8) = psVar20;
        psVar14 = (stat *)puVar22;
      }
      auVar32._8_8_ = uVar29;
      auVar32._0_8_ = pcVar17;
      psVar20 = (stat *)psVar20->st_size;
      if (local_158 == '\0') {
        auVar32 = free_mount_entry(psVar14);
      }
      for (; psVar20 != (stat *)0x0; psVar20 = (stat *)psVar20->st_size) {
        if ((((psVar20->st_rdev & 2) == 0) || (show_local_fs == '\0')) &&
           (((psVar20->st_rdev & 1) == 0 || ((show_all_fs != '\0' || (show_listed_fs != '\0')))))) {
          pcVar10 = *(char **)&psVar20->st_mode;
          bVar31 = pcVar10 != (char *)0x0;
          if ((fs_select_list != (long *)0x0) && (plVar25 = fs_select_list, bVar31)) {
            do {
              iVar3 = strcmp(pcVar10,(char *)*plVar25);
              if (iVar3 == 0) goto LAB_00103881;
              plVar25 = (long *)plVar25[1];
            } while (plVar25 != (long *)0x0);
            goto LAB_001038b1;
          }
LAB_00103881:
          plVar25 = fs_exclude_list;
          if (fs_exclude_list != (long *)0x0) {
            while (bVar31) {
              iVar3 = strcmp(pcVar10,(char *)*plVar25);
              if (iVar3 == 0) goto LAB_001038b1;
              bVar31 = (long *)plVar25[1] != (long *)0x0;
              plVar25 = (long *)plVar25[1];
            }
          }
          iVar3 = stat((char *)psVar20->st_ino,local_128);
          if (iVar3 == -1) goto LAB_001038b1;
          if (devlist_table != 0) {
            local_f8[0] = local_d8.st_dev;
            lVar9 = hash_lookup(devlist_table,local_f8);
            if ((lVar9 != 0) &&
               (puVar28 = *(undefined1 **)(lVar9 + 0x18), puVar28 != (undefined1 *)0x0))
            goto code_r0x00103950;
          }
        }
        else {
LAB_001038b1:
          local_d8.st_dev._0_4_ = psVar20->st_gid;
          local_d8.st_dev._4_4_ = psVar20->__pad0;
        }
LAB_001038bd:
        psVar14 = (stat *)xmalloc(0x20);
        psVar14->st_ino = (__ino_t)psVar20;
        psVar14->st_nlink = (__nlink_t)__ptr_00;
        psVar14->st_dev = local_d8.st_dev;
        auVar32 = hash_insert();
        if (auVar32._0_8_ == 0) {
          xalloc_die();
          goto LAB_00103bb9;
        }
        *(stat **)(auVar32._0_8_ + 0x18) = psVar14;
        __ptr_00 = psVar14;
      }
      pcVar10 = mount_list;
      if (local_158 == '\0') {
        mount_list = (char *)0x0;
        while (__ptr_00 != (stat *)0x0) {
          pcVar10 = (char *)__ptr_00->st_ino;
          psVar20 = (stat *)__ptr_00->st_nlink;
          *(char **)(pcVar10 + 0x30) = mount_list;
          mount_list = pcVar10;
          free(__ptr_00);
          __ptr_00 = psVar20;
        }
        auVar32 = hash_free(devlist_table);
        devlist_table = 0;
        pcVar10 = mount_list;
      }
      while( true ) {
        pcVar17 = auVar32._0_8_;
        if (pcVar10 == (char *)0x0) break;
        auVar32 = get_dev(*(undefined8 *)pcVar10,*(undefined8 *)(pcVar10 + 8),0,0,
                          *(undefined8 *)(pcVar10 + 0x18),pcVar10[0x28] & 1,
                          (byte)pcVar10[0x28] >> 1 & 1,0,1,auVar32._8_8_);
        pcVar10 = *(char **)(pcVar10 + 0x30);
      }
LAB_001032c4:
      if (file_systems_processed == '\0') {
        if (exit_status == 0) {
          uVar29 = dcgettext(0,"no file systems processed",5);
          error(1,0,uVar29);
LAB_0010375b:
          pcVar10 = local_138;
          __ptr = (void *)find_mount_point(local_138,psVar14);
          if (__ptr != (void *)0x0) {
            get_dev(0,__ptr,local_138,0,0,0,0,0,0,pcVar10);
            free(__ptr);
          }
LAB_001032ab:
          do {
            pcVar17 = local_148 + 1;
            local_148 = pcVar17;
            if (pcVar17 == local_120) goto LAB_001032c4;
            local_138 = (char *)param_2[(long)pcVar17];
          } while (local_138 == (char *)0x0);
          psVar14 = local_128 + ((int)pcVar17 - _optind);
          if ((psVar14->st_mode & 0xb000) == 0x2000) {
            pcVar17 = canonicalize_file_name(local_138);
            pcVar10 = local_138;
            if ((pcVar17 != (char *)0x0) && (*pcVar17 == '/')) {
              pcVar10 = pcVar17;
            }
            if (mount_list == (char *)0x0) {
              free(pcVar17);
            }
            else {
              bVar31 = false;
              bVar2 = false;
              local_118 = (char *)0x0;
              local_130 = (char *)0xffffffffffffffff;
              pcVar21 = mount_list;
              do {
                pcVar24 = *(char **)pcVar21;
                pcVar11 = canonicalize_file_name(pcVar24);
                if ((pcVar11 != (char *)0x0) && (*pcVar11 == '/')) {
                  pcVar24 = pcVar11;
                }
                iVar3 = strcmp(pcVar10,pcVar24);
                if (iVar3 == 0) {
                  __s2 = *(char **)(pcVar21 + 8);
                  pcVar12 = mount_list;
                  if (mount_list == (char *)0x0) {
LAB_00103057:
                    sVar15 = strlen(__s2);
                    bVar2 = (bool)(bVar31 ^ 1U | sVar15 < local_130);
                    if (bVar2) {
                      iVar3 = stat(__s2,&local_d8);
                      if (iVar3 == 0) {
LAB_0010353a:
                        local_130 = (char *)sVar15;
                        local_118 = pcVar21;
                        bVar31 = bVar2;
                        if (sVar15 == 1) {
                          free(pcVar12);
                          free(pcVar11);
                          free(pcVar17);
                          psVar14 = (stat *)0x1;
                          goto LAB_001036b4;
                        }
                      }
                      else if (((bool)(bVar31 ^ 1U)) && (sVar15 < local_130)) {
                        bVar2 = false;
                        goto LAB_0010353a;
                      }
                      bVar2 = false;
                    }
                    else {
                      bVar31 = true;
                      bVar2 = false;
                    }
                  }
                  else {
                    pcVar30 = (char *)0x0;
                    do {
                      iVar3 = strcmp(*(char **)(pcVar12 + 8),__s2);
                      if (iVar3 == 0) {
                        pcVar30 = pcVar12;
                      }
                      pcVar12 = *(char **)(pcVar12 + 0x30);
                    } while (pcVar12 != (char *)0x0);
                    pcVar12 = (char *)0x0;
                    if (pcVar30 == (char *)0x0) goto LAB_00103057;
                    pcVar12 = canonicalize_file_name(*(char **)pcVar30);
                    if ((pcVar12 == (char *)0x0) || (*pcVar12 != '/')) {
                      free(pcVar12);
                      pcVar12 = (char *)xstrdup(*(undefined8 *)pcVar30);
                    }
                    iVar3 = strcmp(pcVar12,pcVar24);
                    if (iVar3 == 0) {
                      __s2 = *(char **)(pcVar21 + 8);
                      goto LAB_00103057;
                    }
                    bVar2 = true;
                  }
                  free(pcVar12);
                }
                free(pcVar11);
                pcVar21 = *(char **)(pcVar21 + 0x30);
              } while (pcVar21 != (char *)0x0);
              free(pcVar17);
              if (local_118 != (char *)0x0) {
LAB_001036b4:
                get_dev(*(undefined8 *)local_118,*(undefined8 *)(local_118 + 8),local_138,0,
                        *(undefined8 *)(local_118 + 0x18),local_118[0x28] & 1,
                        (byte)local_118[0x28] >> 1 & 1,0,0,in_R11);
                goto LAB_001032ab;
              }
              if (bVar2) {
                uVar29 = quotearg_style(4,local_138);
                uVar18 = dcgettext(0,"cannot access %s: over-mounted by another device",5);
                error(0,0,uVar18,uVar29);
                exit_status = 1;
                goto LAB_001032ab;
              }
            }
          }
          pcVar17 = canonicalize_file_name(local_138);
          pcVar10 = mount_list;
          if (((pcVar17 == (char *)0x0) || (*pcVar17 != '/')) ||
             (sVar15 = strlen(pcVar17), pcVar10 == (char *)0x0)) {
            free(pcVar17);
            if (pcVar10 == (char *)0x0) goto LAB_0010375b;
LAB_001030fb:
            pcVar17 = (char *)0x0;
            do {
              _Var13 = *(__dev_t *)(pcVar10 + 0x20);
              if (*(__dev_t *)(pcVar10 + 0x20) == 0xffffffffffffffff) {
                iVar3 = stat(*(char **)(pcVar10 + 8),&local_d8);
                if (iVar3 == 0) {
                  *(__dev_t *)(pcVar10 + 0x20) = local_d8.st_dev;
                  _Var13 = local_d8.st_dev;
                }
                else {
                  piVar19 = __errno_location();
                  if (*piVar19 == 5) {
                    quotearg_n_style_colon(0,3,*(undefined8 *)(pcVar10 + 8));
                    error(0,*piVar19,&_LC5);
                    exit_status = 1;
                  }
                  pcVar10[0x20] = -2;
                  pcVar10[0x21] = -1;
                  pcVar10[0x22] = -1;
                  pcVar10[0x23] = -1;
                  pcVar10[0x24] = -1;
                  pcVar10[0x25] = -1;
                  pcVar10[0x26] = -1;
                  pcVar10[0x27] = -1;
                  _Var13 = 0xfffffffffffffffe;
                }
              }
              pcVar24 = pcVar17;
              if ((((psVar14->st_dev == _Var13) &&
                   (iVar3 = strcmp(*(char **)(pcVar10 + 0x18),"lofs"), iVar3 != 0)) &&
                  ((pcVar17 == (char *)0x0 ||
                   (((pcVar17[0x28] & 1U) != 0 || ((pcVar10[0x28] & 1U) == 0)))))) &&
                 ((iVar3 = stat(*(char **)(pcVar10 + 8),&local_d8), iVar3 != 0 ||
                  (pcVar24 = pcVar10, local_d8.st_dev != *(__dev_t *)(pcVar10 + 0x20))))) {
                pcVar10[0x20] = -2;
                pcVar10[0x21] = -1;
                pcVar10[0x22] = -1;
                pcVar10[0x23] = -1;
                pcVar10[0x24] = -1;
                pcVar10[0x25] = -1;
                pcVar10[0x26] = -1;
                pcVar10[0x27] = -1;
                pcVar24 = pcVar17;
              }
              pcVar10 = *(char **)(pcVar10 + 0x30);
              pcVar17 = pcVar24;
            } while (pcVar10 != (char *)0x0);
            if (pcVar24 == (char *)0x0) goto LAB_0010375b;
          }
          else {
            uVar8 = 0;
            pcVar24 = (char *)0x0;
            pcVar21 = pcVar10;
            do {
              iVar3 = strcmp(*(char **)(pcVar21 + 0x18),"lofs");
              if ((iVar3 != 0) &&
                 (((pcVar24 == (char *)0x0 || ((pcVar24[0x28] & 1U) != 0)) ||
                  ((pcVar21[0x28] & 1U) == 0)))) {
                pcVar11 = *(char **)(pcVar21 + 8);
                sVar16 = strlen(pcVar11);
                if ((uVar8 <= sVar16) && (sVar16 <= sVar15)) {
                  if (sVar16 == 1) {
                    uVar8 = 1;
                    pcVar24 = pcVar21;
                  }
                  else if (((sVar15 == sVar16) || (pcVar17[sVar16] == '/')) &&
                          (iVar3 = strncmp(pcVar11,pcVar17,sVar16), iVar3 == 0)) {
                    uVar8 = sVar16;
                    pcVar24 = pcVar21;
                  }
                }
              }
              pcVar21 = *(char **)(pcVar21 + 0x30);
            } while (pcVar21 != (char *)0x0);
            free(pcVar17);
            if (((pcVar24 == (char *)0x0) ||
                (iVar3 = stat(*(char **)(pcVar24 + 8),&local_d8), iVar3 != 0)) ||
               (local_d8.st_dev != psVar14->st_dev)) goto LAB_001030fb;
          }
          get_dev(*(undefined8 *)pcVar24,*(undefined8 *)(pcVar24 + 8),local_138,local_138,
                  *(undefined8 *)(pcVar24 + 0x18),pcVar24[0x28] & 1,(byte)pcVar24[0x28] >> 1 & 1,0,0
                  ,in_R10);
          goto LAB_001032ab;
        }
      }
      else {
        if (print_grand_total != '\0') {
          pcVar10 = "-";
          if (field_data[0x25] == '\0') {
            pcVar10 = "total";
          }
          get_dev("total",pcVar10,0,0,0,0,0,grand_fsu,0,pcVar17);
        }
        if (0 < nrows) {
          lVar9 = 0;
          do {
            lVar23 = 1;
            if (0 < ncolumns) {
              do {
                while( true ) {
                  pcVar10 = *(char **)(*(long *)(table + lVar9 * 8) + -8 + lVar23 * 8);
                  if (lVar23 != 1) {
                    pcVar17 = _stdout->_IO_write_ptr;
                    if (pcVar17 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar17 + 1;
                      *pcVar17 = ' ';
                    }
                    else {
                      __overflow(_stdout,0x20);
                    }
                  }
                  iVar3 = gnu_mbswidth(pcVar10,3);
                  if (-1 < iVar3) break;
LAB_0010340b:
                  fputs_unlocked(pcVar10,_stdout);
                  if (ncolumns <= lVar23) goto LAB_0010336a;
LAB_00103427:
                  lVar23 = lVar23 + 1;
                }
                lVar1 = *(long *)(columns + -8 + lVar23 * 8);
                iVar3 = *(int *)(lVar1 + 0x20) - iVar3;
                if (*(char *)(lVar1 + 0x24) != '\0') {
                  if (iVar3 < 1) goto LAB_0010340b;
                  do {
                    pcVar17 = _stdout->_IO_write_ptr;
                    if (pcVar17 < _stdout->_IO_write_end) {
                      _stdout->_IO_write_ptr = pcVar17 + 1;
                      *pcVar17 = ' ';
                    }
                    else {
                      __overflow(_stdout,0x20);
                    }
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                fputs_unlocked(pcVar10,_stdout);
                if (ncolumns <= lVar23) break;
                if (iVar3 < 1) goto LAB_00103427;
                do {
                  pcVar10 = _stdout->_IO_write_ptr;
                  if (pcVar10 < _stdout->_IO_write_end) {
                    _stdout->_IO_write_ptr = pcVar10 + 1;
                    *pcVar10 = ' ';
                  }
                  else {
                    __overflow(_stdout,0x20);
                  }
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                bVar31 = lVar23 < ncolumns;
                lVar23 = lVar23 + 1;
              } while (bVar31);
            }
LAB_0010336a:
            pcVar10 = _stdout->_IO_write_ptr;
            if (pcVar10 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar10 + 1;
              *pcVar10 = '\n';
            }
            else {
              __overflow(_stdout,10);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < nrows);
        }
      }
      uVar8 = (ulong)exit_status;
      goto LAB_00102c2f;
    }
    goto switchD_001028dd_caseD_43;
  }
  switch(iVar3) {
  case 0x42:
    iVar3 = human_options(_optarg,&human_output_opts,&output_block_size);
    if (iVar3 == 0) goto switchD_001028dd_caseD_76;
    xstrtol_fatal(iVar3,local_f8[0] & 0xffffffff,0x42,long_options,_optarg);
  case 0x83:
    if (header_mode == 1) goto LAB_00103bb9;
    if ((header_mode == 0) && ((char)__ptr_00 != '\0')) {
      error(0,0,local_148,&_LC62,"--output");
      usage(1);
LAB_00103c41:
      puVar26 = &_LC62;
      goto LAB_00102e31;
    }
    if (print_type != '\0') {
LAB_00102e23:
      puVar26 = &_LC61;
      goto LAB_00102e31;
    }
    header_mode = 4;
    if (_optarg != 0) {
      decode_output_arg();
    }
    goto switchD_001028dd_caseD_76;
  default:
    goto switchD_001028dd_caseD_43;
  case 0x46:
  case 0x74:
    plVar6 = (long *)xmalloc(0x10);
    plVar25 = fs_select_list;
    fs_select_list = plVar6;
    *plVar6 = lVar9;
    plVar6[1] = (long)plVar25;
    goto switchD_001028dd_caseD_76;
  case 0x48:
    human_output_opts = 0x90;
    output_block_size = 1;
    goto switchD_001028dd_caseD_76;
  case 0x50:
    if (header_mode == 4) goto LAB_00103c41;
    __ptr_00 = (stat *)0x1;
    goto switchD_001028dd_caseD_76;
  case 0x54:
    if (header_mode == 4) goto LAB_00102e23;
    print_type = '\x01';
    goto switchD_001028dd_caseD_76;
  case 0x61:
    show_all_fs = '\x01';
    goto switchD_001028dd_caseD_76;
  case 0x68:
    human_output_opts = 0xb0;
    output_block_size = 1;
    goto switchD_001028dd_caseD_76;
  case 0x69:
    if (header_mode == 4) goto LAB_00103bb9;
    header_mode = 1;
    goto switchD_001028dd_caseD_76;
  case 0x6b:
    human_output_opts = 0;
    output_block_size = 0x400;
    goto switchD_001028dd_caseD_76;
  case 0x6c:
    show_local_fs = '\x01';
    goto switchD_001028dd_caseD_76;
  case 0x6d:
    human_output_opts = 0;
    output_block_size = 0x100000;
  case 0x76:
    goto switchD_001028dd_caseD_76;
  case 0x78:
    plVar6 = (long *)xmalloc(0x10);
    plVar25 = fs_exclude_list;
    fs_exclude_list = plVar6;
    *plVar6 = lVar9;
    plVar6[1] = (long)plVar25;
    goto switchD_001028dd_caseD_76;
  case 0x80:
    require_sync = '\0';
    goto switchD_001028dd_caseD_76;
  case 0x81:
    require_sync = '\x01';
    goto switchD_001028dd_caseD_76;
  case 0x82:
    print_grand_total = '\x01';
    goto switchD_001028dd_caseD_76;
  }
code_r0x00103950:
  puVar22 = *(uint **)(puVar28 + 8);
  local_148 = (char *)((stat *)puVar22)->st_ino;
  local_138 = (char *)strlen(local_148);
  local_140 = (char *)psVar20->st_ino;
  local_130 = (char *)strlen(local_140);
  if (((char *)((stat *)puVar22)->st_nlink == (char *)0x0) ||
     (pcVar10 = (char *)psVar20->st_nlink, pcVar10 == (char *)0x0)) goto LAB_00103b48;
  sVar15 = strlen((char *)((stat *)puVar22)->st_nlink);
  sVar16 = strlen(pcVar10);
  bVar31 = sVar15 < sVar16;
  goto LAB_001039b8;
LAB_00103bb9:
  param_1 = (uint)psVar20;
  puVar26 = &_LC60;
LAB_00102e31:
  error(0,0,local_148,puVar26,"--output");
switchD_001028dd_caseD_43:
  usage(1);
LAB_00102e4b:
  pcVar10 = getenv("DF_BLOCK_SIZE");
  human_options(pcVar10,&human_output_opts,&output_block_size);
LAB_00102b4a:
  if ((header_mode != 1) && (header_mode != 4)) {
    if ((human_output_opts & 0x10) == 0) {
      if ((char)__ptr_00 != '\0') {
        header_mode = 3;
      }
    }
    else {
      header_mode = 2;
    }
  }
  if (fs_select_list == (long *)0x0) {
    if (_optind < (int)param_1) goto LAB_00102cc5;
  }
  else {
    bVar31 = false;
    plVar25 = fs_select_list;
    do {
      if (fs_exclude_list != (long *)0x0) {
        pcVar10 = (char *)*plVar25;
        plVar6 = fs_exclude_list;
        do {
          iVar3 = strcmp(pcVar10,(char *)*plVar6);
          if (iVar3 == 0) {
            bVar31 = true;
            uVar29 = quote(pcVar10);
            uVar18 = dcgettext(0,"file system type %s both selected and excluded",5);
            error(0,0,uVar18,uVar29);
            break;
          }
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != (long *)0x0);
      }
      plVar25 = (long *)plVar25[1];
    } while (plVar25 != (long *)0x0);
    if (bVar31) {
      uVar8 = 1;
LAB_00102c2f:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar8;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (_optind < (int)param_1) {
LAB_00102cc5:
      lVar9 = xnmalloc((long)(int)(param_1 - _optind),0x90);
      for (lVar23 = (long)_optind; (int)lVar23 < (int)param_1; lVar23 = lVar23 + 1) {
        pcVar10 = (char *)param_2[lVar23];
        psVar20 = (stat *)(lVar9 + (long)((int)lVar23 - _optind) * 0x90);
        iVar3 = open(pcVar10,0x900);
        if (iVar3 < 0) {
          piVar19 = __errno_location();
          iVar4 = *piVar19;
          if ((iVar4 == 2) || (iVar4 == 0x14)) goto LAB_00102d47;
          iVar3 = stat(pcVar10,psVar20);
          if (iVar3 != 0) {
            iVar4 = *piVar19;
            goto LAB_00102dc0;
          }
        }
        else {
          iVar4 = fstat(iVar3,psVar20);
          if (iVar4 != 0) {
            piVar19 = __errno_location();
            iVar4 = *piVar19;
          }
          close(iVar3);
LAB_00102dc0:
          if (iVar4 != 0) {
LAB_00102d47:
            uVar29 = quotearg_n_style_colon(0,3,param_2[lVar23]);
            error(0,iVar4,&_LC5,uVar29);
            param_2[lVar23] = 0;
            exit_status = 1;
          }
        }
      }
    }
    cVar27 = '\x01';
    if (fs_select_list != (long *)0x0) goto LAB_00102bf1;
  }
  cVar27 = '\x01';
  if (((fs_exclude_list == (long *)0x0) && (print_type == '\0')) && (field_data[0x4d] == '\0')) {
    cVar27 = show_local_fs;
  }
LAB_00102bf1:
  mount_list = (char *)read_file_system_list(cVar27);
  if (mount_list == (char *)0x0) {
    uVar29 = 1;
    puVar26 = &_LC18;
    if (((_optind < (int)param_1) && (show_all_fs == '\0')) &&
       ((show_local_fs == '\0' &&
        ((fs_select_list == (long *)0x0 && (fs_exclude_list == (long *)0x0)))))) {
      uVar29 = 0;
      puVar26 = (undefined *)dcgettext(0,"Warning: ",5);
    }
    uVar18 = dcgettext(0,"cannot read table of mounted file systems",5);
    piVar19 = __errno_location();
    error(uVar29,*piVar19,&_LC72,puVar26,uVar18);
  }
  if (require_sync != '\0') {
    sync();
  }
                    /* WARNING: Could not recover jumptable at 0x00102c27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*(code *)(&DAT_00101c18 + *(int *)(&DAT_00101c18 + (ulong)header_mode * 4)))();
  return uVar8;
}


