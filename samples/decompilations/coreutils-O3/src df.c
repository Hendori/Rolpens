
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



void alloc_field_part_0(void)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("!field_data[f].used","src/df.c",0x1a4,"alloc_field");
}



void alloc_field_constprop_0(int param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  
  if (ncolumns == ncolumns_alloc) {
    columns = xpalloc(columns,&ncolumns_alloc,1,0xffffffffffffffff,8);
  }
  lVar1 = (long)param_1 * 0x28;
  cVar3 = field_data[lVar1 + 0x25];
  lVar2 = ncolumns * 8;
  ncolumns = ncolumns + 1;
  *(undefined1 **)(columns + lVar2) = field_data + lVar1;
  if (cVar3 == '\0') {
    field_data[lVar1 + 0x25] = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  alloc_field_part_0();
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
LAB_001001b4:
        __src = __src + __n;
        *param_1 = '?';
        param_1 = param_1 + 1;
        local_48 = 0;
        if (pcVar1 == __src) goto LAB_001001cc;
      }
      iVar2 = iswcntrl(local_4c);
      if (iVar2 != 0) goto LAB_001001b4;
      pcVar4 = __src + __n;
      memmove(param_1,__src,__n);
      param_1 = param_1 + __n;
      __src = pcVar4;
    } while (pcVar1 != pcVar4);
  }
LAB_001001cc:
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
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  bool bVar18;
  undefined1 auStack_2d8 [664];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (nrows == nrows_alloc) {
    table = xpalloc(table,&nrows_alloc,1,0xffffffffffffffff,8);
  }
  puVar14 = (undefined8 *)(nrows * 8 + table);
  nrows = nrows + 1;
  uVar7 = xinmalloc(ncolumns,8);
  *puVar14 = uVar7;
  lVar15 = 0;
  lVar11 = columns;
  if (0 < ncolumns) {
    do {
      lVar1 = lVar15 * 8;
      uVar7 = dcgettext(0,*(undefined8 *)(*(long *)(lVar11 + lVar1) + 0x18),5);
      if (**(int **)(lVar11 + lVar1) != 2) goto LAB_00100298;
      if (header_mode == 0) {
LAB_00100410:
        uVar12 = output_block_size;
        uVar16 = output_block_size;
        do {
          lVar11 = uVar12 + ((uVar12 >> 3) / 0x7d) * -1000;
          uVar3 = uVar16 & 0x3ff;
          uVar4 = uVar16 & 0x3ff;
          uVar12 = (uVar12 >> 3) / 0x7d;
          uVar16 = uVar16 >> 10;
        } while (lVar11 == 0 && uVar3 == 0);
        bVar18 = uVar4 == 0;
        if ((lVar11 == 0) < bVar18) {
          uVar13 = human_output_opts & 0x124 | 0xb8;
LAB_001004f1:
          uVar17 = human_output_opts;
          if ((uVar13 & 0x20) == 0) goto LAB_00100491;
        }
        else {
          if ((lVar11 == 0) <= bVar18) {
            uVar13 = human_output_opts & 0x124 | 0x98;
            goto LAB_001004f1;
          }
          uVar13 = human_output_opts & 0x104 | 0x98;
          uVar17 = human_output_opts & 0x104;
LAB_00100491:
          uVar13 = (uint)CONCAT11(1,(char)uVar13);
        }
        uVar7 = human_readable(output_block_size,auStack_2d8,uVar13,1,1,uVar17);
        uVar9 = dcgettext(0,"blocks",5);
        uVar10 = dcgettext(0,"%s-%s",5);
        uVar7 = xasprintf(uVar10,uVar7,uVar9);
      }
      else {
        if (header_mode == 4) {
          if ((human_output_opts & 0x10) == 0) goto LAB_00100410;
        }
        else if (header_mode == 3) {
          uVar9 = umaxtostr(output_block_size,auStack_2d8);
          uVar10 = dcgettext(0,"%s-%s",5);
          uVar7 = xasprintf(uVar10,uVar9,uVar7);
          goto joined_r0x001002ab;
        }
LAB_00100298:
        uVar7 = xstrdup(uVar7);
      }
joined_r0x001002ab:
      if (tty_out_1 < 0) {
        tty_out_1 = isatty(1);
      }
      pcVar8 = replace_invalid_chars;
      if (tty_out_1 == 0) {
        pcVar8 = replace_control_chars;
      }
      (*pcVar8)(uVar7);
      *(undefined8 *)(*(long *)(table + -8 + nrows * 8) + lVar1) = uVar7;
      iVar6 = gnu_mbswidth(uVar7,3);
      lVar11 = columns;
      lVar5 = ncolumns;
      iVar2 = *(int *)(*(long *)(columns + lVar1) + 0x20);
      if (iVar2 < iVar6) {
        iVar2 = iVar6;
      }
      lVar15 = lVar15 + 1;
      *(int *)(*(long *)(columns + lVar1) + 0x20) = iVar2;
    } while (lVar15 < lVar5);
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
  undefined8 uVar11;
  undefined *puVar12;
  size_t sVar13;
  code *pcVar14;
  char *pcVar15;
  ulong uVar16;
  long lVar17;
  __dev_t _Var18;
  undefined *puVar19;
  __dev_t *p_Var20;
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
     ((param_6 != '\0' && ((show_all_fs == '\0' && (show_listed_fs == '\0')))))) goto LAB_00100628;
  if (fs_select_list == (undefined8 *)0x0) {
LAB_001005ef:
    if ((fs_exclude_list != (undefined8 *)0x0) &&
       (puVar21 = fs_exclude_list, param_5 != (char *)0x0)) {
      do {
        iVar8 = strcmp(param_5,(char *)*puVar21);
        if (iVar8 == 0) goto LAB_00100628;
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
        if (iVar8 == 0) goto LAB_001005ef;
        plVar1 = puVar21 + 1;
        puVar21 = (undefined8 *)*plVar1;
      } while ((undefined8 *)*plVar1 != (undefined8 *)0x0);
      goto LAB_00100628;
    }
  }
  if ((param_2 != (char *)0x0) && (param_8 == (__dev_t *)0x0)) {
    if (*param_2 == '/') {
      if (param_4 == (char *)0x0) {
        param_4 = param_2;
      }
LAB_001006a5:
      iVar8 = get_fs_usage(param_4,param_1,&local_428);
      if (iVar8 == 0) {
        if (param_9 == '\0') {
LAB_00100f87:
          if ((uStack_420 == 0) && (show_all_fs == '\0')) {
LAB_00100d59:
            if (show_listed_fs == '\0') goto LAB_00100628;
          }
        }
        else {
          if (show_all_fs != '\0') {
            iVar8 = stat(param_4,&local_368);
            if ((iVar8 == 0) && (devlist_table != 0)) {
              local_3a8 = local_368.st_dev;
              lVar17 = hash_lookup(devlist_table,&local_3a8);
              if (((lVar17 != 0) &&
                  (((*(long *)(lVar17 + 0x18) != 0 &&
                    (puVar21 = *(undefined8 **)(*(long *)(lVar17 + 0x18) + 8),
                    puVar21 != (undefined8 *)0x0)) &&
                   (iVar8 = strcmp((char *)*puVar21,param_1), iVar8 != 0)))) &&
                 (((*(byte *)(puVar21 + 5) & 2) == 0 || (param_7 == '\0')))) {
                local_408 = local_408 & 0xffffffffffffff00;
                param_5 = "-";
                uStack_400 = 0xffffffffffffffff;
                uStack_3f8 = 0xffffffffffffffff;
                local_428 = 0xffffffffffffffff;
                uStack_420 = 0xffffffffffffffff;
                local_418 = 0xffffffffffffffff;
                uStack_410 = 0xffffffffffffffff;
              }
            }
            goto LAB_00100f87;
          }
          if (uStack_420 == 0) goto LAB_00100d59;
        }
LAB_00100d66:
        file_systems_processed = 1;
        goto LAB_00100768;
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
            goto LAB_00100d66;
          }
          goto LAB_00100628;
        }
      }
      uVar11 = quotearg_n_style_colon(0,3,param_4);
      piVar10 = __errno_location();
      error(0,*piVar10,&_LC5,uVar11);
      exit_status = 1;
    }
LAB_00100628:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010106a;
  }
  if ((param_4 == (char *)0x0) && (param_4 = param_2, param_2 == (char *)0x0)) {
    param_4 = param_1;
  }
  if (param_8 == (__dev_t *)0x0) goto LAB_001006a5;
  local_428 = *param_8;
  uStack_420 = param_8[1];
  local_418 = param_8[2];
  uStack_410 = param_8[3];
  local_408 = param_8[4];
  uStack_400 = param_8[5];
  uStack_3f8 = param_8[6];
  if (((uStack_420 == 0) && (show_all_fs == '\0')) && (show_listed_fs == '\0')) goto LAB_00100628;
LAB_00100768:
  if (nrows == nrows_alloc) {
    table = xpalloc(table,&nrows_alloc,1,0xffffffffffffffff,8);
  }
  puVar21 = (undefined8 *)(table + nrows * 8);
  nrows = nrows + 1;
  uVar11 = xinmalloc(ncolumns,8);
  *puVar21 = uVar11;
  if (param_1 == (char *)0x0) {
    param_1 = "-";
  }
  puVar12 = &_LC4;
  if (param_3 != (undefined *)0x0) {
    puVar12 = param_3;
  }
  local_430 = (char *)xstrdup(param_1);
  if ((((param_9 != '\0') && (sVar13 = strlen(local_430), 0x24 < sVar13)) &&
      (sVar13 = strspn(local_430 + (sVar13 - 0x24),"-0123456789abcdefABCDEF"), sVar13 == 0x24)) &&
     (pcVar15 = (char *)canonicalize_filename_mode(local_430,0), pcVar15 != (char *)0x0)) {
    free(local_430);
    local_430 = pcVar15;
  }
  if (param_5 == (char *)0x0) {
    param_5 = "-";
  }
  local_388 = 0;
  local_380 = uStack_3f8;
  local_370 = false;
  local_378 = -1;
  local_3a8 = __LC7;
  uStack_3a0 = _UNK_00104708;
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
      uVar16 = local_428 * uStack_410;
      if (local_3c8[0] == grand_fsu[0x20]) {
        grand_fsu._24_8_ = uVar16 + grand_fsu._24_8_;
      }
      else {
        if (grand_fsu[0x20] == 0) {
          if (local_3c8[0] == 0) {
            if (uVar16 < (ulong)grand_fsu._24_8_) {
              grand_fsu._24_8_ = grand_fsu._24_8_ - uVar16;
            }
            else {
LAB_0010103b:
              grand_fsu._24_8_ = uVar16 - grand_fsu._24_8_;
              grand_fsu[0x20] = 0;
            }
            goto LAB_0010092b;
          }
LAB_0010100a:
          if (-uVar16 < (ulong)grand_fsu._24_8_) {
            grand_fsu._24_8_ = uVar16 + grand_fsu._24_8_;
            if (grand_fsu[0x20] == 0) goto LAB_0010092b;
          }
          else {
            grand_fsu[0x20] = 1;
            grand_fsu._24_8_ = -uVar16 - grand_fsu._24_8_;
          }
        }
        else {
          grand_fsu._24_8_ = -grand_fsu._24_8_;
          if (local_3c8[0] != 0) goto LAB_0010100a;
          if ((ulong)grand_fsu._24_8_ <= uVar16) goto LAB_0010103b;
          grand_fsu._24_8_ = grand_fsu._24_8_ - uVar16;
        }
        grand_fsu._24_8_ = -grand_fsu._24_8_;
      }
    }
  }
LAB_0010092b:
  lVar25 = 0;
  lVar17 = columns;
  if (0 < ncolumns) {
    do {
      puVar3 = *(undefined4 **)(lVar17 + lVar25 * 8);
      lVar2 = lVar25 * 8;
      iVar8 = puVar3[4];
      if (iVar8 == 1) {
        p_Var20 = &local_3a8;
      }
      else if (iVar8 == 2) {
        p_Var20 = (__dev_t *)0x0;
      }
      else {
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("!\"bad field_type\"","src/df.c",0x473,"get_dev");
        }
        p_Var20 = &local_3e8;
      }
      switch(*puVar3) {
      case 0:
        uVar11 = xstrdup(local_430);
        break;
      case 1:
        uVar11 = xstrdup(param_5);
        break;
      case 2:
      case 6:
        puVar19 = &_LC4;
        if (p_Var20[2] < 0xfffffffffffffffe) {
          puVar19 = (undefined *)
                    human_readable(p_Var20[2],local_2d8,human_output_opts,*p_Var20,p_Var20[1]);
        }
        goto LAB_00100be8;
      case 3:
      case 7:
        uVar16 = p_Var20[6];
        _Var24 = p_Var20[1];
        _Var18 = *p_Var20;
        bVar7 = (byte)p_Var20[7];
        if (0xfffffffffffffffd < uVar16) goto LAB_00100ae1;
LAB_00100c11:
        puVar22 = local_2d8 + bVar7;
        if (bVar7 != 0) goto LAB_00100afa;
        puVar19 = (undefined *)human_readable(uVar16,puVar22,human_output_opts,_Var18,_Var24);
        goto LAB_00100b0a;
      case 4:
      case 8:
        uVar16 = p_Var20[3];
        _Var24 = p_Var20[1];
        _Var18 = *p_Var20;
        bVar7 = (byte)p_Var20[4];
        if (uVar16 < 0xfffffffffffffffe) goto LAB_00100c11;
LAB_00100ae1:
        puVar19 = &_LC4;
        if (bVar7 != 0) {
          puVar22 = local_2d8 + 1;
LAB_00100afa:
          lVar17 = human_readable(-uVar16,puVar22,human_output_opts,_Var18,_Var24);
          *(undefined1 *)(lVar17 + -1) = 0x2d;
          puVar19 = (undefined *)(lVar17 + -1);
        }
LAB_00100b0a:
        uVar11 = xstrdup(puVar19);
        break;
      case 5:
      case 9:
        uVar16 = p_Var20[6];
        if ((uVar16 < 0xfffffffffffffffe) && (uVar4 = p_Var20[3], uVar4 < 0xfffffffffffffffe)) {
          if ((char)p_Var20[7] == '\0') {
            if (0x28f5c28f5c28f5c < uVar16) {
LAB_001009ed:
              if ((long)uVar16 < 0) {
                dVar26 = (double)uVar16;
              }
              else {
                dVar26 = (double)(long)uVar16;
              }
              goto LAB_001009ff;
            }
            uVar23 = uVar16 + uVar4;
            if ((uVar23 == 0) || ((bool)(char)p_Var20[4] != CARRY8(uVar16,uVar4)))
            goto LAB_001009ed;
            uVar16 = ((uVar16 * 100) / uVar23 + 1) - (ulong)((uVar16 * 100) % uVar23 == 0);
            if ((long)uVar16 < 0) {
              dVar26 = (double)uVar16;
            }
            else {
              dVar26 = (double)(long)uVar16;
            }
LAB_00100d23:
            uVar11 = xasprintf(dVar26,"%.0f%%");
            break;
          }
          if ((long)uVar16 < 1) {
            dVar26 = (double)(long)-uVar16;
          }
          else {
            dVar26 = (double)-uVar16;
          }
          dVar26 = (double)((ulong)dVar26 ^ __LC9);
LAB_001009ff:
          if ((char)p_Var20[4] == '\0') {
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
            if (0.0 <= dVar26) goto LAB_00100d23;
          }
        }
        uVar11 = xstrdup(&_LC4);
        break;
      case 10:
        uVar11 = xstrdup(param_2);
        break;
      case 0xb:
        puVar19 = puVar12;
LAB_00100be8:
        uVar11 = xstrdup(puVar19);
        break;
      default:
                    /* WARNING: Subroutine does not return */
        __assert_fail("!\"unhandled field\"","src/df.c",0x4d0,"get_dev");
      }
      if (tty_out_1 < 0) {
        tty_out_1 = isatty(1);
      }
      pcVar14 = replace_invalid_chars;
      if (tty_out_1 == 0) {
        pcVar14 = replace_control_chars;
      }
      (*pcVar14)(uVar11);
      iVar9 = gnu_mbswidth(uVar11,3);
      lVar17 = columns;
      lVar6 = ncolumns;
      lVar5 = *(long *)(columns + lVar2);
      iVar8 = *(int *)(lVar5 + 0x20);
      if (iVar8 < iVar9) {
        iVar8 = iVar9;
      }
      lVar25 = lVar25 + 1;
      *(int *)(lVar5 + 0x20) = iVar8;
      *(undefined8 *)(*(long *)(table + -8 + nrows * 8) + lVar2) = uVar11;
    } while (lVar25 < lVar6);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    free(local_430);
    return;
  }
LAB_0010106a:
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
    goto LAB_00101109;
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
    if (pcVar4 != (char *)0x0) goto LAB_00101474;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC16);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00101474:
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
LAB_00101109:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



void decode_output_arg(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *__ptr;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  
  __ptr = (char *)xstrdup();
  pcVar10 = __ptr;
  do {
    pcVar9 = (char *)0x0;
    pcVar5 = strchr(pcVar10,0x2c);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
      pcVar9 = pcVar5 + 1;
    }
    iVar3 = strcmp((char *)field_data._8_8_,pcVar10);
    if (iVar3 == 0) goto LAB_0010175b;
    iVar4 = strcmp((char *)field_data._48_8_,pcVar10);
    if (iVar4 == 0) {
      if (field_data[0x4d] == '\0') {
        puVar8 = (undefined1 *)0x104548;
        iVar3 = 1;
        goto LAB_00101770;
      }
      goto LAB_00101a9f;
    }
    iVar4 = strcmp((char *)field_data._88_8_,pcVar10);
    if (iVar4 == 0) {
      if (field_data[0x75] != '\0') goto LAB_00101a9f;
      if (ncolumns == ncolumns_alloc) {
        columns = xpalloc(columns,&ncolumns_alloc,1,0xffffffffffffffff,8);
        cVar2 = field_data[0x75];
        *(undefined8 *)(columns + ncolumns * 8) = 0x104570;
        ncolumns = ncolumns + 1;
        field_data._104_8_ = &_LC53;
        if (cVar2 != '\0') goto LAB_001017fc;
      }
      else {
        *(undefined8 *)(columns + ncolumns * 8) = 0x104570;
        ncolumns = ncolumns + 1;
      }
      field_data._104_8_ = &_LC53;
      field_data[0x75] = '\x01';
    }
    else {
      iVar4 = strcmp((char *)field_data._128_8_,pcVar10);
      if (iVar4 == 0) {
        if (field_data[0x9d] == '\0') {
          puVar8 = (undefined1 *)0x104598;
          iVar3 = 3;
          goto LAB_00101770;
        }
LAB_00101a9f:
        do {
          uVar6 = quote();
          pcVar10 = "option --output: field %s used more than once";
LAB_00101739:
          uVar7 = dcgettext(0,pcVar10,5);
          error(0,0,uVar7,uVar6);
          usage(1);
LAB_0010175b:
        } while (field_data[0x25] != '\0');
        puVar8 = field_data;
      }
      else {
        iVar4 = strcmp((char *)field_data._168_8_,pcVar10);
        if (iVar4 == 0) {
          if (field_data[0xc5] == '\0') {
            if (ncolumns == ncolumns_alloc) {
              columns = xpalloc(columns,&ncolumns_alloc,1,0xffffffffffffffff,8);
              cVar2 = field_data[0xc5];
              lVar1 = ncolumns * 8;
              ncolumns = ncolumns + 1;
              *(undefined8 *)(columns + lVar1) = 0x1045c0;
              field_data._184_8_ = _LC54;
              if (cVar2 != '\0') goto LAB_001017fc;
            }
            else {
              *(undefined8 *)(columns + ncolumns * 8) = 0x1045c0;
              ncolumns = ncolumns + 1;
            }
            field_data._184_8_ = _LC54;
            field_data[0xc5] = '\x01';
            goto joined_r0x0010188a;
          }
          goto LAB_00101a9f;
        }
        iVar4 = strcmp((char *)field_data._208_8_,pcVar10);
        if (iVar4 == 0) {
          if (field_data[0xed] != '\0') goto LAB_00101a9f;
          puVar8 = (undefined1 *)0x1045e8;
          iVar3 = 5;
        }
        else {
          iVar4 = strcmp((char *)field_data._248_8_,pcVar10);
          if (iVar4 == 0) {
            if (field_data[0x115] != '\0') goto LAB_00101a9f;
            puVar8 = (undefined1 *)0x104610;
            iVar3 = 6;
          }
          else {
            iVar4 = strcmp((char *)field_data._288_8_,pcVar10);
            if (iVar4 == 0) {
              if (field_data[0x13d] != '\0') goto LAB_00101a9f;
              puVar8 = (undefined1 *)0x104638;
              iVar3 = 7;
            }
            else {
              iVar4 = strcmp((char *)field_data._328_8_,pcVar10);
              if (iVar4 == 0) {
                if (field_data[0x165] != '\0') goto LAB_00101a9f;
                puVar8 = (undefined1 *)0x104660;
                iVar3 = 8;
              }
              else {
                iVar4 = strcmp((char *)field_data._368_8_,pcVar10);
                if (iVar4 == 0) {
                  if (field_data[0x18d] != '\0') goto LAB_00101a9f;
                  puVar8 = (undefined1 *)0x104688;
                  iVar3 = 9;
                }
                else {
                  iVar4 = strcmp((char *)field_data._408_8_,pcVar10);
                  if (iVar4 == 0) {
                    if (field_data[0x1b5] != '\0') goto LAB_00101a9f;
                    puVar8 = (undefined1 *)0x1046b0;
                    iVar3 = 10;
                  }
                  else {
                    iVar4 = strcmp((char *)field_data._448_8_,pcVar10);
                    if (iVar4 != 0) {
                      uVar6 = quote(pcVar10);
                      pcVar10 = "option --output: field %s unknown";
                      goto LAB_00101739;
                    }
                    if (field_data[0x1dd] != '\0') goto LAB_00101a9f;
                    puVar8 = (undefined1 *)0x1046d8;
                    iVar3 = 0xb;
                  }
                }
              }
            }
          }
        }
      }
LAB_00101770:
      if (ncolumns == ncolumns_alloc) {
        columns = xpalloc(columns,&ncolumns_alloc,1,0xffffffffffffffff,8);
        cVar2 = field_data[(long)iVar3 * 0x28 + 0x25];
        lVar1 = ncolumns + 1;
        *(undefined1 **)(columns + ncolumns * 8) = puVar8;
        ncolumns = lVar1;
        if (cVar2 != '\0') {
LAB_001017fc:
                    /* WARNING: Subroutine does not return */
          __assert_fail("!field_data[f].used","src/df.c",0x1a4,"alloc_field");
        }
      }
      else {
        *(undefined1 **)(columns + ncolumns * 8) = puVar8;
        ncolumns = ncolumns + 1;
      }
      field_data[(long)iVar3 * 0x28 + 0x25] = 1;
    }
joined_r0x0010188a:
    pcVar10 = pcVar9;
    if (pcVar9 == (char *)0x0) {
      free(__ptr);
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong main(int param_1,undefined8 *param_2)

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
  stat *psVar11;
  ulong *puVar12;
  char *pcVar13;
  ulong *puVar14;
  size_t sVar15;
  size_t sVar16;
  void *__ptr;
  ulong *puVar17;
  char *pcVar18;
  undefined8 uVar19;
  int *piVar20;
  ulong *puVar21;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint *puVar22;
  long *plVar23;
  undefined *puVar24;
  char cVar25;
  ulong *puVar26;
  undefined8 in_R10;
  undefined8 in_R11;
  long lVar27;
  undefined8 uVar28;
  long in_FS_OFFSET;
  bool bVar29;
  undefined1 auVar30 [16];
  undefined8 *local_158;
  stat *local_148;
  ulong *local_138;
  ulong local_130;
  stat *local_128;
  long local_120;
  ulong *local_118;
  ulong local_f8 [4];
  stat local_d8;
  long local_40;
  
  bVar29 = false;
  puVar12 = local_f8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  puVar22 = &switchD_00102cfd::switchdataD_00101f30;
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
  local_148 = (stat *)dcgettext(0,"options %s and %s are mutually exclusive",5);
switchD_00102cfd_caseD_76:
  local_f8[0] = CONCAT44(local_f8[0]._4_4_,0xffffffff);
  iVar3 = getopt_long(param_1,param_2,"aB:iF:hHklmPTt:vx:",long_options,puVar12);
  lVar9 = _optarg;
  if (iVar3 == -1) {
    if (human_output_opts != 0xffffffff) goto LAB_00102f6a;
    if (!bVar29) goto LAB_00103299;
    human_output_opts = 0;
    pcVar10 = getenv("POSIXLY_CORRECT");
    output_block_size = (ulong)(-(uint)(pcVar10 == (char *)0x0) & 0x200) + 0x200;
    goto LAB_00102f6a;
  }
  if (0x83 < iVar3) goto switchD_00102cfd_caseD_43;
  if (0x41 < iVar3) {
    switch(iVar3) {
    case 0x42:
      iVar3 = human_options(_optarg,&human_output_opts,&output_block_size);
      if (iVar3 == 0) goto switchD_00102cfd_caseD_76;
      xstrtol_fatal(iVar3,local_f8[0] & 0xffffffff,0x42,long_options,_optarg);
    case 0x83:
      if (header_mode == 1) {
LAB_00103271:
        puVar24 = &_LC60;
      }
      else {
        if ((header_mode == 0) && (bVar29)) {
          error(0,0,local_148,&_LC62,"--output");
          usage(1);
          goto LAB_001041a1;
        }
        if (print_type == '\0') {
          header_mode = 4;
          if (_optarg != 0) {
            decode_output_arg();
          }
          goto switchD_00102cfd_caseD_76;
        }
LAB_00104235:
        puVar24 = &_LC61;
      }
LAB_0010327f:
      error(0,0,local_148,puVar24,"--output");
      goto switchD_00102cfd_caseD_43;
    default:
      goto switchD_00102cfd_caseD_43;
    case 0x46:
    case 0x74:
      plVar6 = (long *)xmalloc(0x10);
      plVar23 = fs_select_list;
      fs_select_list = plVar6;
      *plVar6 = lVar9;
      plVar6[1] = (long)plVar23;
      goto switchD_00102cfd_caseD_76;
    case 0x48:
      human_output_opts = 0x90;
      output_block_size = 1;
      goto switchD_00102cfd_caseD_76;
    case 0x50:
      if (header_mode == 4) {
        puVar24 = &_LC62;
        goto LAB_0010327f;
      }
      bVar29 = true;
      goto switchD_00102cfd_caseD_76;
    case 0x54:
      if (header_mode == 4) goto LAB_00104235;
      print_type = '\x01';
      goto switchD_00102cfd_caseD_76;
    case 0x61:
      show_all_fs = '\x01';
      goto switchD_00102cfd_caseD_76;
    case 0x68:
      human_output_opts = 0xb0;
      output_block_size = 1;
      goto switchD_00102cfd_caseD_76;
    case 0x69:
      if (header_mode == 4) goto LAB_00103271;
      header_mode = 1;
      goto switchD_00102cfd_caseD_76;
    case 0x6b:
      human_output_opts = 0;
      output_block_size = 0x400;
      goto switchD_00102cfd_caseD_76;
    case 0x6c:
      show_local_fs = '\x01';
      goto switchD_00102cfd_caseD_76;
    case 0x6d:
      human_output_opts = 0;
      output_block_size = 0x100000;
    case 0x76:
      goto switchD_00102cfd_caseD_76;
    case 0x78:
      plVar6 = (long *)xmalloc(0x10);
      plVar23 = fs_exclude_list;
      fs_exclude_list = plVar6;
      *plVar6 = lVar9;
      plVar6[1] = (long)plVar23;
      goto switchD_00102cfd_caseD_76;
    case 0x80:
      require_sync = '\0';
      goto switchD_00102cfd_caseD_76;
    case 0x81:
      require_sync = '\x01';
      goto switchD_00102cfd_caseD_76;
    case 0x82:
      print_grand_total = '\x01';
      goto switchD_00102cfd_caseD_76;
    }
  }
  if (iVar3 == -0x83) {
    uVar28 = proper_name_lite("Paul Eggert","Paul Eggert");
    uVar19 = proper_name_lite("David MacKenzie","David MacKenzie");
    uVar7 = proper_name_lite("Torbjorn Granlund",&_LC65);
    version_etc(_stdout,&_LC16,"GNU coreutils",_Version,uVar7,uVar19,uVar28,0);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (iVar3 != -0x82) goto switchD_00102cfd_caseD_43;
  usage(0);
  alloc_field_constprop_0(1);
  alloc_field_constprop_0(6);
  alloc_field_constprop_0(7);
  alloc_field_constprop_0(8);
  alloc_field_constprop_0(9);
  alloc_field_constprop_0(10);
  get_header();
  cVar25 = show_all_fs;
  if (local_120 != 0) {
    psVar11 = (stat *)(ulong)_optind;
    show_listed_fs = '\x01';
    local_158 = param_2;
    if (param_1 <= (int)_optind) goto LAB_001037dd;
    local_128 = (stat *)((long)((stat *)(long)(int)_optind)->__unused +
                        ((ulong)(param_1 - _optind) - 0x78));
    local_148 = (stat *)(long)(int)_optind;
    goto LAB_00103390;
  }
  local_158 = (undefined8 *)CONCAT71((int7)((ulong)param_2 >> 8),show_all_fs);
  iVar3 = 0;
  for (puVar21 = mount_list; puVar21 != (ulong *)0x0; puVar21 = (ulong *)puVar21[6]) {
    iVar3 = iVar3 + 1;
  }
  auVar30 = hash_initialize((long)iVar3,0,devlist_hash,devlist_compare,0);
  devlist_table = auVar30._0_8_;
  local_128 = &local_d8;
  puVar21 = mount_list;
  puVar26 = (ulong *)0x0;
  if (devlist_table != 0) {
    do {
      while( true ) {
        if (puVar21 == (ulong *)0x0) {
          puVar12 = mount_list;
          if (cVar25 == '\0') {
            mount_list = (ulong *)0x0;
            while (puVar26 != (ulong *)0x0) {
              puVar12 = (ulong *)puVar26[1];
              puVar21 = (ulong *)puVar26[2];
              puVar12[6] = (ulong)mount_list;
              mount_list = puVar12;
              free(puVar26);
              puVar26 = puVar21;
            }
            auVar30 = hash_free(devlist_table);
            devlist_table = 0;
            puVar12 = mount_list;
          }
          do {
            psVar11 = auVar30._0_8_;
            if (puVar12 == (ulong *)0x0) goto LAB_001037dd;
            auVar30 = get_dev(*puVar12,puVar12[1],0,0,puVar12[3],(byte)puVar12[5] & 1,
                              (byte)puVar12[5] >> 1 & 1,0,1,auVar30._8_8_);
            puVar12 = (ulong *)puVar12[6];
          } while( true );
        }
        if ((((puVar21[5] & 2) != 0) && (show_local_fs != '\0')) ||
           (((puVar21[5] & 1) != 0 && ((show_all_fs == '\0' && (show_listed_fs == '\0')))))) break;
        pcVar10 = (char *)puVar21[3];
        bVar29 = pcVar10 != (char *)0x0;
        if ((fs_select_list != (long *)0x0) && (plVar23 = fs_select_list, bVar29)) {
          do {
            iVar3 = strcmp(pcVar10,(char *)*plVar23);
            if (iVar3 == 0) goto LAB_00103db1;
            plVar23 = (long *)plVar23[1];
          } while (plVar23 != (long *)0x0);
          break;
        }
LAB_00103db1:
        plVar23 = fs_exclude_list;
        if (fs_exclude_list != (long *)0x0) {
          while (bVar29) {
            iVar3 = strcmp(pcVar10,(char *)*plVar23);
            if (iVar3 == 0) goto LAB_00103de1;
            bVar29 = (long *)plVar23[1] != (long *)0x0;
            plVar23 = (long *)plVar23[1];
          }
        }
        iVar3 = stat((char *)puVar21[1],local_128);
        if (iVar3 == -1) break;
        if (devlist_table == 0) goto LAB_00103ded;
        local_f8[0] = local_d8.st_dev;
        lVar9 = hash_lookup(devlist_table,puVar12);
        if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x18), lVar9 == 0)) goto LAB_00103ded;
        puVar14 = *(ulong **)(lVar9 + 8);
        local_148 = (stat *)puVar14[1];
        local_138 = (ulong *)strlen((char *)local_148);
        pcVar10 = (char *)puVar21[1];
        puVar17 = (ulong *)strlen(pcVar10);
        if (((char *)puVar14[2] == (char *)0x0) ||
           (pcVar13 = (char *)puVar21[2], pcVar13 == (char *)0x0)) {
          bVar29 = false;
        }
        else {
          sVar15 = strlen((char *)puVar14[2]);
          sVar16 = strlen(pcVar13);
          bVar29 = sVar15 < sVar16;
        }
        pcVar13 = (char *)*puVar21;
        if ((((print_grand_total == '\0') && ((puVar21[5] & 2) != 0)) && ((puVar14[5] & 2) != 0)) &&
           (iVar3 = strcmp((char *)*puVar14,pcVar13), iVar3 != 0)) goto LAB_00103ded;
        pcVar18 = strchr(pcVar13,0x2f);
        uVar28 = extraout_RDX;
        if (((pcVar18 == (char *)0x0) ||
            (pcVar18 = strchr((char *)*puVar14,0x2f), uVar28 = extraout_RDX_00,
            pcVar18 != (char *)0x0)) && ((local_138 <= puVar17 || (bVar29)))) {
          uVar5 = strcmp((char *)*puVar14,pcVar13);
          pcVar18 = (char *)(ulong)uVar5;
          uVar28 = extraout_RDX_01;
          puVar22 = (uint *)puVar21;
          if (uVar5 != 0) {
            uVar5 = strcmp(pcVar10,(char *)local_148);
            pcVar18 = (char *)(ulong)uVar5;
            uVar28 = extraout_RDX_02;
            if (uVar5 == 0) goto LAB_00103f59;
          }
        }
        else {
LAB_00103f59:
          *(ulong **)(lVar9 + 8) = puVar21;
          puVar22 = (uint *)puVar14;
        }
        auVar30._8_8_ = uVar28;
        auVar30._0_8_ = pcVar18;
        puVar21 = (ulong *)puVar21[6];
        if (cVar25 == '\0') {
          auVar30 = free_mount_entry(puVar22);
        }
      }
LAB_00103de1:
      local_d8.st_dev = puVar21[4];
LAB_00103ded:
      puVar22 = (uint *)xmalloc(0x20);
      lVar9 = devlist_table;
      *(ulong **)((long)puVar22 + 8) = puVar21;
      *(ulong **)((long)puVar22 + 0x10) = puVar26;
      *(__dev_t *)puVar22 = local_d8.st_dev;
      auVar30 = hash_insert(lVar9);
      if (auVar30._0_8_ == 0) break;
      *(uint **)(auVar30._0_8_ + 0x18) = puVar22;
      puVar21 = (ulong *)puVar21[6];
      puVar26 = (ulong *)puVar22;
    } while( true );
  }
  xalloc_die();
  puVar21 = local_138;
LAB_001033f9:
  if (mount_list == (ulong *)0x0) {
    free(puVar12);
    goto LAB_00103548;
  }
  bVar29 = false;
  bVar2 = false;
  local_118 = (ulong *)0x0;
  local_130 = 0xffffffffffffffff;
  puVar26 = mount_list;
  do {
    pcVar10 = (char *)*puVar26;
    pcVar13 = canonicalize_file_name(pcVar10);
    if ((pcVar13 != (char *)0x0) && (*pcVar13 == '/')) {
      pcVar10 = pcVar13;
    }
    iVar3 = strcmp((char *)puVar21,pcVar10);
    if (iVar3 == 0) {
      pcVar18 = (char *)puVar26[1];
      puVar14 = mount_list;
      if (mount_list == (ulong *)0x0) {
LAB_001034d7:
        sVar15 = strlen(pcVar18);
        bVar2 = (bool)(bVar29 ^ 1U | sVar15 < local_130);
        if (bVar2) {
          iVar3 = stat(pcVar18,&local_d8);
          if (iVar3 == 0) {
LAB_00103a5a:
            local_130 = sVar15;
            local_118 = puVar26;
            bVar29 = bVar2;
            if (sVar15 == 1) {
              free(puVar14);
              free(pcVar13);
              free(puVar12);
              puVar22 = (uint *)0x1;
              goto LAB_00103bef;
            }
          }
          else if (((bool)(bVar29 ^ 1U)) && (sVar15 < local_130)) {
            bVar2 = false;
            goto LAB_00103a5a;
          }
          bVar2 = false;
        }
        else {
          bVar29 = true;
          bVar2 = false;
        }
      }
      else {
        puVar17 = (ulong *)0x0;
        do {
          iVar3 = strcmp((char *)puVar14[1],pcVar18);
          if (iVar3 == 0) {
            puVar17 = puVar14;
          }
          puVar14 = (ulong *)puVar14[6];
        } while (puVar14 != (ulong *)0x0);
        puVar14 = (ulong *)0x0;
        if (puVar17 == (ulong *)0x0) goto LAB_001034d7;
        puVar14 = (ulong *)canonicalize_file_name((char *)*puVar17);
        if ((puVar14 == (ulong *)0x0) || ((char)*puVar14 != '/')) {
          free(puVar14);
          puVar14 = (ulong *)xstrdup(*puVar17);
        }
        iVar3 = strcmp((char *)puVar14,pcVar10);
        if (iVar3 == 0) {
          pcVar18 = (char *)puVar26[1];
          goto LAB_001034d7;
        }
        bVar2 = true;
      }
      free(puVar14);
    }
    free(pcVar13);
    puVar26 = (ulong *)puVar26[6];
  } while (puVar26 != (ulong *)0x0);
  free(puVar12);
  if (local_118 == (ulong *)0x0) {
    if (!bVar2) goto LAB_00103548;
    uVar28 = quotearg_style(4,local_138);
    uVar19 = dcgettext(0,"cannot access %s: over-mounted by another device",5);
    error(0,0,uVar19,uVar28);
    exit_status = 1;
  }
  else {
LAB_00103bef:
    get_dev(*local_118,local_118[1],local_138,0,local_118[3],(byte)local_118[5] & 1,
            (byte)local_118[5] >> 1 & 1,0,0,in_R11);
  }
LAB_001037c7:
  psVar11 = (stat *)((long)&local_148->st_dev + 1);
  local_148 = psVar11;
  if (local_128 != psVar11) goto LAB_00103390;
LAB_001037dd:
  if (file_systems_processed == '\0') {
    if (exit_status == 0) {
      uVar28 = dcgettext(0,"no file systems processed",5);
      error(1,0,uVar28);
      goto LAB_00103c96;
    }
    goto LAB_00103bb7;
  }
  if (print_grand_total != '\0') {
    pcVar10 = "-";
    if (field_data[0x25] == '\0') {
      pcVar10 = "total";
    }
    get_dev("total",pcVar10,0,0,0,0,0,grand_fsu,0,psVar11);
  }
  if (nrows < 1) goto LAB_00103bb7;
  lVar9 = 0;
  goto LAB_001038bb;
code_r0x00102fc0:
  pcVar10 = (char *)*plVar23;
  plVar6 = fs_exclude_list;
  do {
    iVar3 = strcmp(pcVar10,(char *)*plVar6);
    if (iVar3 == 0) {
      bVar29 = true;
      uVar28 = quote(pcVar10);
      uVar19 = dcgettext(0,"file system type %s both selected and excluded",5);
      error(0,0,uVar19,uVar28);
      break;
    }
    plVar6 = (long *)plVar6[1];
  } while (plVar6 != (long *)0x0);
  plVar23 = (long *)plVar23[1];
  if (plVar23 == (long *)0x0) goto LAB_00102fee;
  goto LAB_00102fb0;
LAB_00103390:
  local_138 = (ulong *)local_158[(long)local_148];
  if (local_138 == (ulong *)0x0) goto LAB_001037c7;
  puVar22 = (uint *)((long)(int)((int)local_148 - _optind) * 0x90 + local_120);
  if ((*(ulong *)((long)puVar22 + 0x18) & 0xb000) == 0x2000) goto code_r0x001033db;
LAB_00103548:
  pcVar10 = canonicalize_file_name((char *)local_138);
  puVar12 = mount_list;
  if (((pcVar10 == (char *)0x0) || (*pcVar10 != '/')) ||
     (sVar15 = strlen(pcVar10), puVar12 == (ulong *)0x0)) {
    free(pcVar10);
    if (puVar12 == (ulong *)0x0) goto LAB_00103c96;
  }
  else {
    uVar8 = 0;
    puVar26 = (ulong *)0x0;
    puVar21 = puVar12;
    do {
      iVar3 = strcmp((char *)puVar21[3],"lofs");
      if ((iVar3 != 0) &&
         (((puVar26 == (ulong *)0x0 || ((puVar26[5] & 1) != 0)) || ((puVar21[5] & 1) == 0)))) {
        pcVar13 = (char *)puVar21[1];
        sVar16 = strlen(pcVar13);
        if ((uVar8 <= sVar16) && (sVar16 <= sVar15)) {
          if (sVar16 == 1) {
            uVar8 = 1;
            puVar26 = puVar21;
          }
          else if (((sVar15 == sVar16) || (pcVar10[sVar16] == '/')) &&
                  (iVar3 = strncmp(pcVar13,pcVar10,sVar16), iVar3 == 0)) {
            uVar8 = sVar16;
            puVar26 = puVar21;
          }
        }
      }
      puVar21 = (ulong *)puVar21[6];
    } while (puVar21 != (ulong *)0x0);
    free(pcVar10);
    if (((puVar26 != (ulong *)0x0) && (iVar3 = stat((char *)puVar26[1],&local_d8), iVar3 == 0)) &&
       (local_d8.st_dev == *(ulong *)puVar22)) goto LAB_00103793;
  }
  puVar21 = (ulong *)0x0;
  do {
    uVar8 = puVar12[4];
    if (puVar12[4] == 0xffffffffffffffff) {
      iVar3 = stat((char *)puVar12[1],&local_d8);
      if (iVar3 == 0) {
        puVar12[4] = local_d8.st_dev;
        uVar8 = local_d8.st_dev;
      }
      else {
        piVar20 = __errno_location();
        if (*piVar20 == 5) {
          uVar28 = quotearg_n_style_colon(0,3,puVar12[1]);
          error(0,*piVar20,&_LC5,uVar28);
          exit_status = 1;
        }
        puVar12[4] = 0xfffffffffffffffe;
        uVar8 = 0xfffffffffffffffe;
      }
    }
    puVar26 = puVar21;
    if ((((*(ulong *)puVar22 == uVar8) && (iVar3 = strcmp((char *)puVar12[3],"lofs"), iVar3 != 0))
        && ((puVar21 == (ulong *)0x0 || (((puVar21[5] & 1) != 0 || ((puVar12[5] & 1) == 0)))))) &&
       ((iVar3 = stat((char *)puVar12[1],&local_d8), iVar3 != 0 ||
        (puVar26 = puVar12, local_d8.st_dev != puVar12[4])))) {
      puVar12[4] = 0xfffffffffffffffe;
      puVar26 = puVar21;
    }
    puVar12 = (ulong *)puVar12[6];
    puVar21 = puVar26;
  } while (puVar12 != (ulong *)0x0);
  if (puVar26 != (ulong *)0x0) {
LAB_00103793:
    get_dev(*puVar26,puVar26[1],local_138,local_138,puVar26[3],(byte)puVar26[5] & 1,
            (byte)puVar26[5] >> 1 & 1,0,0,in_R10);
    goto LAB_001037c7;
  }
LAB_00103c96:
  puVar12 = local_138;
  __ptr = (void *)find_mount_point(local_138,puVar22);
  if (__ptr != (void *)0x0) {
    get_dev(0,__ptr,local_138,0,0,0,0,0,0,puVar12);
    free(__ptr);
  }
  goto LAB_001037c7;
code_r0x001033db:
  puVar12 = (ulong *)canonicalize_file_name((char *)local_138);
  puVar21 = local_138;
  if ((puVar12 != (ulong *)0x0) && ((char)*puVar12 == '/')) {
    puVar21 = puVar12;
  }
  goto LAB_001033f9;
LAB_001038bb:
  lVar27 = 1;
  if (0 < ncolumns) {
    do {
      while( true ) {
        pcVar10 = *(char **)(*(long *)(table + lVar9 * 8) + -8 + lVar27 * 8);
        if (lVar27 != 1) {
          pcVar13 = _stdout->_IO_write_ptr;
          if (pcVar13 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar13 + 1;
            *pcVar13 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
        }
        iVar3 = gnu_mbswidth(pcVar10,3);
        if (-1 < iVar3) break;
LAB_0010392b:
        fputs_unlocked(pcVar10,_stdout);
        if (ncolumns <= lVar27) goto LAB_0010388a;
LAB_00103947:
        lVar27 = lVar27 + 1;
      }
      lVar1 = *(long *)(columns + -8 + lVar27 * 8);
      iVar3 = *(int *)(lVar1 + 0x20) - iVar3;
      if (*(char *)(lVar1 + 0x24) != '\0') {
        if (iVar3 < 1) goto LAB_0010392b;
        do {
          pcVar13 = _stdout->_IO_write_ptr;
          if (pcVar13 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar13 + 1;
            *pcVar13 = ' ';
          }
          else {
            __overflow(_stdout,0x20);
          }
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      fputs_unlocked(pcVar10,_stdout);
      if (ncolumns <= lVar27) break;
      if (iVar3 < 1) goto LAB_00103947;
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
      bVar29 = lVar27 < ncolumns;
      lVar27 = lVar27 + 1;
    } while (bVar29);
  }
LAB_0010388a:
  lVar27 = nrows;
  pcVar10 = _stdout->_IO_write_ptr;
  if (pcVar10 < _stdout->_IO_write_end) {
    lVar9 = lVar9 + 1;
    _stdout->_IO_write_ptr = pcVar10 + 1;
    *pcVar10 = '\n';
    if (lVar27 <= lVar9) goto LAB_00103bb7;
    goto LAB_001038bb;
  }
  lVar9 = lVar9 + 1;
  __overflow(_stdout,10);
  if (nrows <= lVar9) {
LAB_00103bb7:
    uVar8 = (ulong)exit_status;
LAB_0010305a:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return uVar8;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  goto LAB_001038bb;
switchD_00102cfd_caseD_43:
  usage(1);
LAB_00103299:
  pcVar10 = getenv("DF_BLOCK_SIZE");
  human_options(pcVar10,&human_output_opts,&output_block_size);
LAB_00102f6a:
  if ((header_mode != 1) && (header_mode != 4)) {
    if ((human_output_opts & 0x10) == 0) {
      if (bVar29) {
        header_mode = 3;
      }
    }
    else {
      header_mode = 2;
    }
  }
  if (fs_select_list != (long *)0x0) {
    bVar29 = false;
    plVar23 = fs_select_list;
LAB_00102fb0:
    if (fs_exclude_list != (long *)0x0) goto code_r0x00102fc0;
    for (lVar9 = plVar23[1]; lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
    }
LAB_00102fee:
    if (bVar29) {
      uVar8 = 1;
      goto LAB_0010305a;
    }
    if ((int)_optind < param_1) goto LAB_0010310e;
    goto LAB_00103009;
  }
  if ((int)_optind < param_1) {
LAB_0010310e:
    lVar9 = xnmalloc((long)(int)(param_1 - _optind),0x90);
    for (lVar27 = (long)(int)_optind; (int)lVar27 < param_1; lVar27 = lVar27 + 1) {
      pcVar10 = (char *)param_2[lVar27];
      psVar11 = (stat *)(lVar9 + (long)(int)((int)lVar27 - _optind) * 0x90);
      iVar3 = open(pcVar10,0x900);
      if (iVar3 < 0) {
        piVar20 = __errno_location();
        iVar4 = *piVar20;
        if ((iVar4 == 2) || (iVar4 == 0x14)) goto LAB_00103191;
        iVar3 = stat(pcVar10,psVar11);
        if (iVar3 != 0) {
          iVar4 = *piVar20;
          goto LAB_0010320b;
        }
      }
      else {
        iVar4 = fstat(iVar3,psVar11);
        if (iVar4 != 0) {
          piVar20 = __errno_location();
          iVar4 = *piVar20;
        }
        close(iVar3);
LAB_0010320b:
        if (iVar4 != 0) {
LAB_00103191:
          uVar28 = quotearg_n_style_colon(0,3,param_2[lVar27]);
          error(0,iVar4,&_LC5,uVar28);
          param_2[lVar27] = 0;
          exit_status = 1;
        }
      }
    }
LAB_00103009:
    cVar25 = '\x01';
    if (fs_select_list != (long *)0x0) goto LAB_0010301c;
  }
  cVar25 = '\x01';
  if (((fs_exclude_list == (long *)0x0) && (print_type == '\0')) && (field_data[0x4d] == '\0')) {
    cVar25 = show_local_fs;
  }
LAB_0010301c:
  mount_list = (ulong *)read_file_system_list(cVar25);
  if (mount_list == (ulong *)0x0) {
LAB_001041a1:
    uVar28 = 1;
    puVar24 = &_LC18;
    if ((((int)_optind < param_1) && (show_all_fs == '\0')) &&
       ((show_local_fs == '\0' &&
        ((fs_select_list == (long *)0x0 && (fs_exclude_list == (long *)0x0)))))) {
      uVar28 = 0;
      puVar24 = (undefined *)dcgettext(0,"Warning: ",5);
    }
    uVar19 = dcgettext(0,"cannot read table of mounted file systems",5);
    piVar20 = __errno_location();
    error(uVar28,*piVar20,&_LC72,puVar24,uVar19);
  }
  if (require_sync != '\0') {
    sync();
  }
                    /* WARNING: Could not recover jumptable at 0x00103052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (*(code *)(&DAT_00102038 + *(int *)(&DAT_00102038 + (ulong)header_mode * 4)))();
  return uVar8;
}


