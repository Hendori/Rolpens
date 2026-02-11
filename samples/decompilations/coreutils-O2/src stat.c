
undefined8 default_format(char param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  void *__ptr;
  char *pcVar3;
  
  if (param_1 == '\0') {
    if (param_2 == '\0') {
      uVar1 = dcgettext(0,"  File: %N\n  Size: %-10s\tBlocks: %-10b IO Block: %-6o %F\n",5);
      pvVar2 = (void *)xstrdup(uVar1);
      pcVar3 = "Device: %Hd,%Ld\tInode: %-10i  Links: %-5h Device type: %Hr,%Lr\n";
      if (param_3 == '\0') {
        pcVar3 = "Device: %Hd,%Ld\tInode: %-10i  Links: %h\n";
      }
      uVar1 = dcgettext(0,pcVar3,5);
      __ptr = (void *)xasprintf(&_LC3,pvVar2,uVar1);
      free(pvVar2);
      uVar1 = dcgettext(0,"Access: (%04a/%10.10A)  Uid: (%5u/%8U)   Gid: (%5g/%8G)\n",5);
      pvVar2 = (void *)xasprintf(&_LC3,__ptr,uVar1);
      free(__ptr);
      uVar1 = dcgettext(0,"Access: %x\nModify: %y\nChange: %z\n Birth: %w\n",5);
      uVar1 = xasprintf(&_LC3,pvVar2,uVar1);
      free(pvVar2);
      return uVar1;
    }
    pcVar3 = "%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n";
  }
  else {
    pcVar3 = "%n %i %l %t %s %S %b %f %a %c %d\n";
    if (param_2 == '\0') {
      pcVar3 = (char *)dcgettext(0,
                                 "  File: \"%n\"\n    ID: %-8i Namelen: %-7l Type: %T\nBlock size: %-10s Fundamental block size: %S\nBlocks: Total: %-10b Free: %-10f Available: %a\nInodes: Total: %-10c Free: %d\n"
                                 ,5);
    }
  }
  uVar1 = xstrdup(pcVar3);
  return uVar1;
}



void make_format(long param_1,long param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  char *__dest;
  char *pcVar5;
  
  pcVar1 = (char *)(param_1 + param_2);
  __dest = (char *)(param_1 + 1);
  pcVar5 = __dest;
  if (__dest < pcVar1) {
    do {
      cVar2 = *pcVar5;
      pcVar3 = strchr("\'-+ #0I",(int)cVar2);
      if (pcVar3 == (char *)0x0) {
        if (pcVar5 < pcVar1) {
          lVar4 = 0;
          do {
            __dest[lVar4] = pcVar5[lVar4];
            lVar4 = lVar4 + 1;
          } while (lVar4 != (long)pcVar1 - (long)pcVar5);
          __dest = __dest + lVar4;
        }
        break;
      }
      pcVar3 = strchr(param_3,(int)cVar2);
      if (pcVar3 != (char *)0x0) {
        *__dest = cVar2;
        __dest = __dest + 1;
      }
      pcVar5 = pcVar5 + 1;
    } while (pcVar1 != pcVar5);
  }
  strcpy(__dest,param_4);
  return;
}



undefined8 find_bind_mount(char *param_1)

{
  char *__file;
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long in_FS_OFFSET;
  stat local_148;
  stat local_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (tried_mount_list_3 == '\0') {
    mount_list_2 = (undefined8 *)read_file_system_list(0);
    if (mount_list_2 == (undefined8 *)0x0) {
      uVar3 = dcgettext(0,"cannot read table of mounted file systems",5);
      piVar4 = __errno_location();
      error(0,*piVar4,&_LC8,uVar3);
    }
    tried_mount_list_3 = '\x01';
  }
  iVar2 = stat(param_1,&local_148);
  puVar1 = mount_list_2;
  if (iVar2 == 0) {
    for (; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[6]) {
      if (((((*(byte *)(puVar1 + 5) & 1) != 0) && (__file = (char *)*puVar1, *__file == '/')) &&
          (iVar2 = strcmp((char *)puVar1[1],param_1), iVar2 == 0)) &&
         ((iVar2 = stat(__file,&local_b8), iVar2 == 0 &&
          (local_148.st_dev == local_b8.st_dev && local_148.st_ino == local_b8.st_ino)))) {
        uVar3 = *puVar1;
        goto LAB_00100272;
      }
    }
  }
  uVar3 = 0;
LAB_00100272:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



undefined1 * human_time(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  ulong local_80;
  undefined1 local_78 [64];
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_1;
  local_80 = param_2;
  if (tz_1 == 0) {
    pcVar4 = getenv("TZ");
    tz_1 = tzalloc(pcVar4);
  }
  uVar1 = local_80;
  lVar2 = localtime_rz(tz_1,&local_88,local_78);
  if (lVar2 == 0) {
    uVar3 = imaxtostr(local_88,local_38);
    __sprintf_chk(str_0,2,0x3d,"%s.%09d",uVar3,uVar1 & 0xffffffff);
  }
  else {
    nstrftime(str_0,0x3d,"%Y-%m-%d %H:%M:%S.%N %z",local_78,tz_1,uVar1 & 0xffffffff);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return str_0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long format_code_offset(long param_1)

{
  size_t sVar1;
  char *pcVar2;
  
  sVar1 = strspn((char *)(param_1 + 1),"\'-+ #0I");
  pcVar2 = (char *)(param_1 + 1 + sVar1);
  sVar1 = strspn(pcVar2,digits);
  pcVar2 = pcVar2 + sVar1;
  if (*pcVar2 == '.') {
    sVar1 = strspn(pcVar2 + 1,digits);
    pcVar2 = pcVar2 + sVar1 + 1;
  }
  return (long)pcVar2 - param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte print_it(byte *param_1,undefined4 param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  size_t sVar4;
  void *__ptr;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte local_4d;
  
  sVar4 = strlen((char *)param_1);
  lVar7 = sVar4 + 3;
  __ptr = (void *)xmalloc(lVar7);
  local_4d = 0;
  bVar3 = *param_1;
joined_r0x00100493:
  do {
    if (bVar3 == 0) {
      free(__ptr);
      fputs_unlocked(trailing_delim,_stdout);
      return local_4d;
    }
    if (bVar3 == 0x25) {
      uVar5 = format_code_offset(param_1);
      pbVar12 = param_1 + uVar5;
      bVar3 = *pbVar12;
      __memcpy_chk(__ptr,param_1,uVar5,lVar7);
      if (bVar3 == 0x25) {
LAB_0010051d:
        if (uVar5 < 2) {
          pcVar6 = _stdout->_IO_write_ptr;
          if (pcVar6 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '%';
            bVar3 = pbVar12[1];
            param_1 = pbVar12 + 1;
            goto joined_r0x00100493;
          }
          __overflow(_stdout,0x25);
          param_1 = pbVar12;
          pbVar12 = pbVar12 + 1;
        }
        else {
          *(byte *)((long)__ptr + uVar5) = bVar3;
          *(undefined1 *)((long)__ptr + uVar5 + 1) = 0;
          lVar7 = quote(__ptr);
          uVar8 = dcgettext(0,"%s: invalid directive",5);
          error(1,0,uVar8,lVar7);
LAB_00100950:
          uVar8 = dcgettext(0,"warning: backslash at end of format",5);
          error(0,0,uVar8);
          pcVar6 = _stdout->_IO_write_ptr;
          if (pcVar6 < _stdout->_IO_write_end) {
LAB_001005aa:
            _stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '\\';
          }
          else {
            __overflow(_stdout,0x5c);
          }
        }
      }
      else {
        if ((char)bVar3 < '&') {
          iVar9 = 0;
          if (bVar3 == 0) {
            pbVar12 = pbVar12 + -1;
            goto LAB_0010051d;
          }
        }
        else {
          iVar9 = 0;
          if ((((bVar3 & 0xfb) == 0x48) && (param_4 == print_stat)) &&
             ((bVar1 = pbVar12[1], bVar1 == 100 || (iVar9 = 0, bVar1 == 0x72)))) {
            iVar9 = (int)(char)bVar3;
            pbVar12 = pbVar12 + 1;
            bVar3 = bVar1;
          }
        }
        bVar3 = (*param_4)(__ptr,uVar5,iVar9,(int)(char)bVar3,param_2,param_3,param_5);
        local_4d = local_4d | bVar3;
        param_1 = pbVar12;
        pbVar12 = pbVar12 + 1;
      }
    }
    else if (bVar3 == 0x5c) {
      pbVar12 = param_1 + 1;
      if (interpret_backslash_escapes == '\0') {
        pcVar6 = _stdout->_IO_write_ptr;
        if (pcVar6 < _stdout->_IO_write_end) goto LAB_001005aa;
        __overflow(_stdout,0x5c);
      }
      else {
        bVar3 = param_1[1];
        if ((byte)(bVar3 - 0x30) < 8) {
          bVar3 = bVar3 - 0x30;
          pbVar13 = pbVar12;
          pbVar12 = param_1 + 2;
          if ((byte)(param_1[2] - 0x30) < 8) {
            bVar3 = (param_1[2] - 0x30) + bVar3 * '\b';
            pbVar12 = param_1 + 3;
            pbVar13 = param_1 + 2;
            if ((byte)(param_1[3] - 0x30) < 8) {
              bVar3 = (param_1[3] - 0x30) + bVar3 * '\b';
              pbVar13 = pbVar12;
              pbVar12 = param_1 + 4;
            }
          }
          param_1 = pbVar13;
          pbVar13 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar13 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar13 + 1);
            *pbVar13 = bVar3;
          }
          else {
            __overflow(_stdout,(uint)bVar3);
          }
        }
        else {
          if (bVar3 == 0x78) {
            bVar1 = param_1[2];
            if ((0x36 < (byte)(bVar1 - 0x30)) ||
               ((0x7e0000007e03ffU >> ((ulong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) {
switchD_00100655_caseD_5d:
              uVar11 = (uint)(char)bVar3;
              uVar8 = dcgettext(0,"warning: unrecognized escape \'\\%c\'",5);
              error(0,0,uVar8,uVar11);
              goto LAB_00100808;
            }
            iVar9 = (int)(char)bVar1;
            if ((byte)(bVar1 + 0x9f) < 6) {
              uVar11 = iVar9 - 0x57;
            }
            else {
              uVar11 = iVar9 - 0x30;
              if ((byte)(bVar1 + 0xbf) < 6) {
                uVar11 = iVar9 - 0x37;
              }
            }
            bVar3 = param_1[3];
            if (((byte)(bVar3 - 0x30) < 0x37) &&
               ((0x7e0000007e03ffU >> ((ulong)(bVar3 - 0x30) & 0x3f) & 1) != 0)) {
              pbVar12 = param_1 + 3;
              iVar9 = (int)(char)bVar3;
              if ((byte)(bVar3 + 0x9f) < 6) {
                iVar10 = iVar9 + -0x57;
              }
              else {
                iVar10 = iVar9 + -0x30;
                if ((byte)(bVar3 + 0xbf) < 6) {
                  iVar10 = iVar9 + -0x37;
                }
              }
              uVar11 = uVar11 * 0x10 + iVar10;
            }
            else {
              pbVar12 = param_1 + 2;
            }
            pbVar13 = pbVar12 + 1;
            pcVar6 = _stdout->_IO_write_ptr;
            if (pcVar6 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar6 + 1;
              *pcVar6 = (char)uVar11;
              param_1 = pbVar12;
              pbVar12 = pbVar13;
              goto LAB_001004d1;
            }
          }
          else {
            if (bVar3 == 0) goto LAB_00100950;
            if (bVar3 == 0x22) {
switchD_00100655_caseD_5c:
              uVar11 = (uint)(char)bVar3;
            }
            else {
              switch(bVar3) {
              case 0x5c:
                goto switchD_00100655_caseD_5c;
              default:
                goto switchD_00100655_caseD_5d;
              case 0x61:
                uVar11 = 7;
                bVar3 = 7;
                break;
              case 0x62:
                uVar11 = 8;
                bVar3 = 8;
                break;
              case 0x65:
                uVar11 = 0x1b;
                bVar3 = 0x1b;
                break;
              case 0x66:
                uVar11 = 0xc;
                bVar3 = 0xc;
                break;
              case 0x6e:
                uVar11 = 10;
                bVar3 = 10;
                break;
              case 0x72:
                uVar11 = 0xd;
                bVar3 = 0xd;
                break;
              case 0x74:
                uVar11 = 9;
                bVar3 = 9;
                break;
              case 0x76:
                uVar11 = 0xb;
                bVar3 = 0xb;
              }
            }
LAB_00100808:
            pbVar13 = param_1 + 2;
            pbVar2 = (byte *)_stdout->_IO_write_ptr;
            if (pbVar2 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = (char *)(pbVar2 + 1);
              *pbVar2 = bVar3;
              param_1 = pbVar12;
              pbVar12 = pbVar13;
              goto LAB_001004d1;
            }
            uVar11 = uVar11 & 0xff;
          }
          __overflow(_stdout,uVar11);
          param_1 = pbVar12;
          pbVar12 = pbVar13;
        }
      }
    }
    else {
      pbVar13 = (byte *)_stdout->_IO_write_ptr;
      pbVar12 = param_1 + 1;
      if (pbVar13 < _stdout->_IO_write_end) {
        _stdout->_IO_write_ptr = (char *)(pbVar13 + 1);
        *pbVar13 = bVar3;
      }
      else {
        __overflow(_stdout,(uint)bVar3);
      }
    }
LAB_001004d1:
    bVar3 = param_1[1];
    param_1 = pbVar12;
  } while( true );
}



uint do_stat(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  ushort uVar10;
  undefined8 *puVar11;
  char *pcVar12;
  long in_FS_OFFSET;
  undefined4 local_20c;
  char *local_208;
  ulong *local_1f8;
  undefined1 local_1f0 [16];
  ulong local_1d8;
  undefined8 uStack_1d0;
  ulong local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  ulong local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  ulong local_188;
  undefined8 local_180;
  ulong local_178;
  undefined8 local_170;
  ulong local_168;
  undefined8 local_148;
  uint local_138;
  undefined4 local_134;
  undefined4 local_130;
  ushort local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_108;
  uint local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  uint local_e0;
  undefined8 local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*param_1 == '-') && (param_1[1] == '\0')) {
    puVar11 = &local_148;
    for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    uVar3 = 0x1000;
    local_208 = "";
    local_20c = 0;
  }
  else {
    puVar11 = &local_148;
    for (lVar8 = 0x20; lVar8 != 0; lVar8 = lVar8 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + 1;
    }
    local_20c = 0xffffff9c;
    uVar3 = (follow_links ^ 1) << 8;
    local_208 = param_1;
  }
  local_1f0._8_4_ = 0xffffffff;
  local_1f0._0_8_ = 0xffffffffffffffff;
  local_1f0._12_4_ = 0xffffffff;
  if (dont_sync == '\0') {
    uVar3 = uVar3 | (uint)force_sync << 0xd;
  }
  else {
    uVar3 = uVar3 | 0x4000;
  }
  local_1f8 = &local_1d8;
  cVar1 = *param_2;
  if (force_sync == 0) {
    uVar3 = uVar3 | 0x800;
  }
  if (cVar1 == '\0') {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    pcVar12 = param_2;
    do {
      while (cVar1 == '%') {
        lVar8 = format_code_offset(pcVar12);
        pcVar4 = pcVar12 + lVar8;
        if (*pcVar4 == '\0') goto LAB_00100aa3;
        bVar9 = *pcVar4 + 0xbf;
        if (bVar9 < 0x3a) {
          uVar10 = uVar10 | *(ushort *)(CSWTCH_127 + (ulong)bVar9 * 2);
        }
        pcVar12 = pcVar4 + 1;
        cVar1 = pcVar4[1];
        if (cVar1 == '\0') goto LAB_00100aa3;
      }
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
  }
LAB_00100aa3:
  iVar2 = statx(local_20c,local_208,uVar3,uVar10,&local_148);
  if (iVar2 < 0) {
    if ((uVar3 & 0x1000) == 0) {
      uVar5 = quotearg_style(4,param_1);
      uVar7 = dcgettext(0,"cannot statx %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar7,uVar5);
      uVar3 = 0;
    }
    else {
      uVar5 = dcgettext(0,"cannot stat standard input",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar5);
      uVar3 = 0;
    }
  }
  else {
    if ((local_12c & 0xb000) == 0x2000) {
      param_2 = param_3;
    }
    local_1d8 = ((ulong)local_bc & 0xffffff00) << 0xc |
                ((ulong)local_c0 & 0xfffff000) << 0x20 | (ulong)((local_c0 & 0xfff) << 8) |
                (ulong)(byte)local_bc;
    local_1c8 = (ulong)local_138;
    uStack_1d0 = local_128;
    local_1c0 = CONCAT44(local_134,(uint)local_12c);
    local_1b8 = local_130;
    local_1a8._8_4_ = local_148._4_4_;
    local_1a8._0_8_ = local_120;
    local_1a8._12_4_ = 0;
    local_1b0 = ((ulong)local_c4 & 0xffffff00) << 0xc |
                ((ulong)local_c8 & 0xfffff000) << 0x20 | (ulong)((local_c8 & 0xfff) << 8) |
                (ulong)(byte)local_c4;
    local_198 = local_118;
    local_190 = local_108;
    local_188 = (ulong)local_100;
    local_180 = local_d8;
    local_178 = (ulong)local_d0;
    local_170 = local_e8;
    local_168 = (ulong)local_e0;
    if ((local_148._1_1_ & 8) != 0) {
      local_1f0._8_4_ = local_f0;
      local_1f0._0_8_ = local_f8;
      local_1f0._12_4_ = 0;
    }
    uVar3 = print_it(param_2,iVar2,param_1,print_stat,&local_1f8);
    uVar3 = uVar3 ^ 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}



ulong out_epoch_sec(char *param_1,size_t param_2,long param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  ulong uVar12;
  char *pcVar13;
  int iVar14;
  size_t local_40;
  
  pcVar6 = (char *)memchr(param_1,0x2e,param_2);
  if (pcVar6 == (char *)0x0) {
    uVar12 = 0;
    iVar2 = 0;
    local_40 = param_2;
LAB_00100f35:
    iVar11 = (int)uVar12;
    uVar12 = uVar12 & 0xffffffff;
    iVar3 = 1;
    do {
      uVar4 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar4;
      iVar3 = iVar3 * 10;
    } while (uVar4 != 9);
    lVar7 = (long)iVar3;
    iVar9 = (int)(param_4 / lVar7);
  }
  else {
    param_1[param_2] = '\0';
    local_40 = (long)pcVar6 - (long)param_1;
    iVar9 = (int)param_4;
    if ((int)pcVar6[1] - 0x30U < 10) {
      uVar8 = __isoc23_strtol(pcVar6 + 1,0,10);
      uVar12 = 0x7fffffff;
      if ((long)uVar8 < 0x80000000) {
        uVar12 = uVar8;
      }
      if ((int)uVar12 != 0) {
        iVar2 = 0;
        if ((int)pcVar6[-1] - 0x30U < 10) goto LAB_00100e14;
        goto LAB_00100f20;
      }
      uVar12 = 0;
      iVar2 = 0;
      goto LAB_00100f35;
    }
    if ((int)pcVar6[-1] - 0x30U < 10) {
      uVar12 = 9;
LAB_00100e14:
      *pcVar6 = '\0';
      do {
        pcVar13 = pcVar6 + -2;
        pcVar6 = pcVar6 + -1;
      } while ((int)*pcVar13 - 0x30U < 10);
      lVar7 = __isoc23_strtol(pcVar6,0,10);
      if (0x7fffffff < lVar7) {
        lVar7 = 0x7fffffff;
      }
      iVar2 = (int)lVar7;
      if (1 < iVar2) {
        pcVar6 = pcVar6 + (*pcVar6 == '0');
        local_40 = (long)pcVar6 - (long)param_1;
        if (((decimal_point_len < (ulong)(long)iVar2) &&
            (iVar3 = iVar2 - (int)decimal_point_len, 1 < iVar3)) &&
           (iVar3 = iVar3 - (int)uVar12, 1 < iVar3)) {
          pcVar13 = param_1;
          if (param_1 < pcVar6) {
            bVar1 = false;
            pcVar10 = param_1;
            do {
              if (*pcVar10 == '-') {
                bVar1 = true;
              }
              else {
                *pcVar13 = *pcVar10;
                pcVar13 = pcVar13 + 1;
              }
              pcVar10 = pcVar10 + 1;
            } while (pcVar6 != pcVar10);
            local_40 = (long)pcVar13 - (long)param_1;
            if (bVar1) goto LAB_00100f20;
          }
          else {
            local_40 = 0;
          }
          iVar3 = __sprintf_chk(pcVar13,2,0xffffffffffffffff,&_LC18,iVar3);
          local_40 = local_40 + (long)iVar3;
        }
      }
LAB_00100f20:
      iVar11 = (int)uVar12;
      if (iVar11 < 9) goto LAB_00100f35;
      lVar7 = 1;
      iVar3 = 1;
    }
    else {
      lVar7 = 1;
      iVar11 = 9;
      iVar2 = 0;
      iVar3 = 1;
    }
  }
  if (param_3 < 0) {
    if (param_4 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = ((int)(1000000000 / (long)iVar3) - iVar9) + -1 + (uint)(param_4 % lVar7 == 0);
      param_3 = (param_3 + 1) - (ulong)(iVar9 == 0);
      if (param_3 == 0) {
        make_format(param_1,local_40,"\'-+ 0",&_LC19);
        uVar12 = __printf_chk(_LC21,2,param_1);
        goto LAB_00100fd1;
      }
    }
  }
  make_format(param_1,local_40,"\'-+ 0",&_LC22);
  uVar12 = __printf_chk(2,param_1,param_3);
LAB_00100fd1:
  if (iVar11 != 0) {
    iVar3 = 9;
    if (iVar11 < 10) {
      iVar3 = iVar11;
    }
    iVar5 = (int)uVar12;
    if ((int)uVar12 < 0) {
      iVar5 = 0;
    }
    iVar14 = 0;
    if ((iVar5 < iVar2) && (decimal_point_len < (ulong)(long)(iVar2 - iVar5))) {
      iVar14 = (iVar2 - iVar5) - (iVar3 + (int)decimal_point_len);
    }
    uVar12 = (ulong)(uint)(iVar11 - iVar3);
    __printf_chk(2,"%s%.*d%-*.*d",decimal_point,iVar3,iVar9,iVar14,(ulong)(uint)(iVar11 - iVar3),0);
  }
  return uVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
print_statfs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  
  switch(param_4) {
  case 0x53:
    pcVar4 = (char *)param_7[1];
    if (pcVar4 == (char *)0x0) {
      pcVar4 = (char *)*param_7;
    }
    goto LAB_001011a2;
  case 0x54:
    uVar1 = *(uint *)(param_7 + 0xb);
    if (uVar1 == 0x43415d53) {
      pcVar4 = "smackfs";
    }
    else if (uVar1 < 0x43415d54) {
      if (uVar1 == 0xf15f) {
        pcVar4 = "ecryptfs";
      }
      else if (uVar1 < 0xf160) {
        pcVar4 = "hfsx";
        if (uVar1 != 0x4858) {
          if (uVar1 < 0x4859) {
            pcVar4 = "minix (30 char.)";
            if (uVar1 != 0x138f) {
              if (uVar1 < 0x1390) {
                pcVar4 = "jffs";
                if (uVar1 != 0x7c0) {
                  if (uVar1 < 0x7c1) {
                    pcVar4 = "z3fold";
                    if (((uVar1 != 0x33) && (pcVar4 = "autofs", uVar1 != 0x187)) &&
                       (pcVar4 = "qnx4", uVar1 != 0x2f)) goto LAB_00101467;
                  }
                  else {
                    pcVar4 = "ext";
                    if (((uVar1 != 0x137d) && (pcVar4 = "minix", uVar1 != 0x137f)) &&
                       (pcVar4 = "devfs", uVar1 != 0x1373)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar4 = "nilfs";
                if (uVar1 != 0x3434) {
                  if (uVar1 < 0x3435) {
                    pcVar4 = "minix v2";
                    if (((uVar1 != 0x2468) && (pcVar4 = "minix v2 (30 char.)", uVar1 != 0x2478)) &&
                       (pcVar4 = "devpts", uVar1 != 0x1cd1)) goto LAB_00101467;
                  }
                  else {
                    pcVar4 = "hfs";
                    if (uVar1 != 0x4244) {
                      if (uVar1 < 0x4245) {
                        pcVar4 = "fat";
                        if ((uVar1 != 0x4006) &&
                           ((0x4006 < uVar1 || (pcVar4 = "isofs", (uVar1 & 0xfffffffb) != 0x4000))))
                        goto LAB_00101467;
                      }
                      else {
                        pcVar4 = "hfs+";
                        if (uVar1 != 0x482b) goto LAB_00101467;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pcVar4 = "jffs2";
            if (uVar1 != 0x72b6) {
              if (uVar1 < 0x72b7) {
                pcVar4 = "novell";
                if (uVar1 != 0x564c) {
                  if (uVar1 < 0x564d) {
                    pcVar4 = "minix3";
                    if (((uVar1 != 0x4d5a) && (pcVar4 = "smb", uVar1 != 0x517b)) &&
                       (pcVar4 = "msdos", uVar1 != 0x4d44)) goto LAB_00101467;
                  }
                  else {
                    pcVar4 = "nfs";
                    if (((uVar1 != 0x6969) && (pcVar4 = "romfs", uVar1 != 0x7275)) &&
                       (pcVar4 = "exofs", uVar1 != 0x5df5)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar4 = "adfs";
                if (uVar1 != 0xadf5) {
                  if (uVar1 < 0xadf6) {
                    pcVar4 = "openprom";
                    if (uVar1 != 0x9fa1) {
                      if (uVar1 < 0x9fa2) {
                        pcVar4 = "isofs";
                        if ((uVar1 != 0x9660) && (pcVar4 = "proc", uVar1 != 0x9fa0))
                        goto LAB_00101467;
                      }
                      else {
                        pcVar4 = "usbdevfs";
                        if (uVar1 != 0x9fa2) goto LAB_00101467;
                      }
                    }
                  }
                  else {
                    pcVar4 = "ext2";
                    if (((uVar1 != 0xef51) && (pcVar4 = "ext2/ext3", uVar1 != 0xef53)) &&
                       (pcVar4 = "affs", uVar1 != 0xadff)) goto LAB_00101467;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pcVar4 = "futexfs";
        if (uVar1 != 0xbad1dea) {
          if (uVar1 < 0xbad1deb) {
            pcVar4 = "xia";
            if (uVar1 != 0x12fd16d) {
              if (uVar1 < 0x12fd16e) {
                pcVar4 = "ceph";
                if (uVar1 != 0xc36400) {
                  if (uVar1 < 0xc36401) {
                    pcVar4 = "efs";
                    if (uVar1 != 0x414a53) {
                      if (uVar1 < 0x414a54) {
                        pcVar4 = "ufs";
                        if ((uVar1 != 0x11954) && (pcVar4 = "cgroupfs", uVar1 != 0x27e0eb))
                        goto LAB_00101467;
                      }
                      else {
                        pcVar4 = "hostfs";
                        if (uVar1 != 0xc0ffee) goto LAB_00101467;
                      }
                    }
                  }
                  else {
                    pcVar4 = "v9fs";
                    if (((uVar1 != 0x1021997) && (pcVar4 = "gfs/gfs2", uVar1 != 0x1161970)) &&
                       (pcVar4 = "tmpfs", uVar1 != 0x1021994)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar4 = "coh";
                if (uVar1 != 0x12ff7b7) {
                  if (uVar1 < 0x12ff7b8) {
                    pcVar4 = "sysv4";
                    if (((uVar1 != 0x12ff7b5) && (pcVar4 = "sysv2", uVar1 != 0x12ff7b6)) &&
                       (pcVar4 = "xenix", uVar1 != 0x12ff7b4)) goto LAB_00101467;
                  }
                  else {
                    pcVar4 = "rdt";
                    if (((uVar1 != 0x7655821) && (pcVar4 = "anon-inode FS", uVar1 != 0x9041934)) &&
                       (pcVar4 = "ibrix", uVar1 != 0x13111a8)) goto LAB_00101467;
                  }
                }
              }
            }
          }
          else {
            pcVar4 = "exfat";
            if (uVar1 != 0x2011bab0) {
              if (uVar1 < 0x2011bab1) {
                pcVar4 = "udf";
                if (uVar1 != 0x15013346) {
                  if (uVar1 < 0x15013347) {
                    pcVar4 = "inodefs";
                    if (((uVar1 != 0x11307854) && (pcVar4 = "balloon-kvm-fs", uVar1 != 0x13661366))
                       && (pcVar4 = "lustre", uVar1 != 0xbd00bd0)) goto LAB_00101467;
                  }
                  else {
                    pcVar4 = "fhgfs";
                    if (((uVar1 != 0x19830326) && (pcVar4 = "bfs", uVar1 != 0x1badface)) &&
                       (pcVar4 = "mqueue", uVar1 != 0x19800202)) goto LAB_00101467;
                  }
                }
              }
              else {
                pcVar4 = "zfs";
                if (uVar1 != 0x2fc12fc1) {
                  if (uVar1 < 0x2fc12fc2) {
                    pcVar4 = "cramfs";
                    if (((uVar1 != 0x28cd3d45) && (pcVar4 = "inotifyfs", uVar1 != 0x2bad1dea)) &&
                       (pcVar4 = "ubifs", uVar1 != 0x24051905)) goto LAB_00101467;
                  }
                  else {
                    pcVar4 = "befs";
                    if (((uVar1 != 0x42465331) && (pcVar4 = "binfmt_misc", uVar1 != 0x42494e4d)) &&
                       (pcVar4 = "jfs", uVar1 != 0x3153464a)) goto LAB_00101467;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (uVar1 == 0x68191122) {
      pcVar4 = "qnx6";
    }
    else if (uVar1 < 0x68191123) {
      pcVar4 = "zsmallocfs";
      if (uVar1 != 0x58295829) {
        if (uVar1 < 0x5829582a) {
          pcVar4 = "reiserfs";
          if (uVar1 != 0x52654973) {
            if (uVar1 < 0x52654974) {
              pcVar4 = "exfs";
              if (uVar1 != 0x45584653) {
                if (uVar1 < 0x45584654) {
                  pcVar4 = "cramfs-wend";
                  if (((uVar1 != 0x453dcd28) && (pcVar4 = "devmem", uVar1 != 0x454d444d)) &&
                     (pcVar4 = "dma-buf-fs", uVar1 != 0x444d4142)) {
LAB_00101467:
                    __sprintf_chk(buf_5,2,0x1d,"UNKNOWN (0x%lx)");
                    pcVar4 = buf_5;
                  }
                }
                else {
                  pcVar4 = "pidfs";
                  if (((uVar1 != 0x50494446) && (pcVar4 = "pipefs", uVar1 != 0x50495045)) &&
                     (pcVar4 = "gpfs", uVar1 != 0x47504653)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar4 = "wslfs";
              if (uVar1 != 0x53464846) {
                if (uVar1 < 0x53464847) {
                  pcVar4 = "m1fs";
                  if (((uVar1 != 0x5346314d) && (pcVar4 = "afs", uVar1 != 0x5346414f)) &&
                     (pcVar4 = "secretmem", uVar1 != 0x5345434d)) goto LAB_00101467;
                }
                else {
                  pcVar4 = "sockfs";
                  if (uVar1 != 0x534f434b) {
                    if (uVar1 < 0x534f434c) {
                      pcVar4 = "ntfs";
                      if (uVar1 != 0x5346544e) goto LAB_00101467;
                    }
                    else {
                      pcVar4 = "ufs";
                      if ((uVar1 != 0x54190100) && (pcVar4 = "vzfs", uVar1 != 0x565a4653))
                      goto LAB_00101467;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pcVar4 = "configfs";
          if (uVar1 != 0x62656570) {
            if (uVar1 < 0x62656571) {
              pcVar4 = "acfs";
              if (uVar1 != 0x61636673) {
                if (uVar1 < 0x61636674) {
                  pcVar4 = "zonefs";
                  if (uVar1 != 0x5a4f4653) {
                    if (uVar1 < 0x5a4f4654) {
                      pcVar4 = "xfs";
                      if ((uVar1 != 0x58465342) && (pcVar4 = "aafs", uVar1 != 0x5a3c69f0))
                      goto LAB_00101467;
                    }
                    else {
                      pcVar4 = "sdcardfs";
                      if (uVar1 != 0x5dca2df5) goto LAB_00101467;
                    }
                  }
                }
                else {
                  pcVar4 = "aufs";
                  if (((uVar1 != 0x61756673) && (pcVar4 = "bdevfs", uVar1 != 0x62646576)) &&
                     (pcVar4 = "pstorefs", uVar1 != 0x6165676c)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar4 = "daxfs";
              if (uVar1 != 0x64646178) {
                if (uVar1 < 0x64646179) {
                  pcVar4 = "cgroup2fs";
                  if (((uVar1 != 0x63677270) && (pcVar4 = "debugfs", uVar1 != 0x64626720)) &&
                     (pcVar4 = "sysfs", uVar1 != 0x62656572)) goto LAB_00101467;
                }
                else {
                  pcVar4 = "fuse";
                  if (((uVar1 != 0x65735546) && (pcVar4 = "rpc_pipefs", uVar1 != 0x67596969)) &&
                     (pcVar4 = "fusectl", uVar1 != 0x65735543)) goto LAB_00101467;
                }
              }
            }
          }
        }
      }
    }
    else {
      pcVar4 = "vxfs";
      if (uVar1 != 0xa501fcf5) {
        if (uVar1 < 0xa501fcf6) {
          pcVar4 = "ocfs2";
          if (uVar1 != 0x7461636f) {
            if (uVar1 < 0x74616370) {
              pcVar4 = "securityfs";
              if (uVar1 != 0x73636673) {
                if (uVar1 < 0x73636674) {
                  pcVar4 = "nfsd";
                  if (uVar1 != 0x6e667364) {
                    if (uVar1 < 0x6e667365) {
                      pcVar4 = "k-afs";
                      if ((uVar1 != 0x6b414653) && (pcVar4 = "binderfs", uVar1 != 0x6c6f6f70))
                      goto LAB_00101467;
                    }
                    else {
                      pcVar4 = "nsfs";
                      if (uVar1 != 0x6e736673) goto LAB_00101467;
                    }
                  }
                }
                else {
                  pcVar4 = "btrfs_test";
                  if (((uVar1 != 0x73727279) && (pcVar4 = "coda", uVar1 != 0x73757245)) &&
                     (pcVar4 = "squashfs", uVar1 != 0x73717368)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar4 = "prl_fs";
              if (uVar1 != 0x7c7c6673) {
                if (uVar1 < 0x7c7c6674) {
                  pcVar4 = "vboxsf";
                  if (((uVar1 != 0x786f4256) && (pcVar4 = "overlayfs", uVar1 != 0x794c7630)) &&
                     (pcVar4 = "tracefs", uVar1 != 0x74726163)) goto LAB_00101467;
                }
                else {
                  pcVar4 = "btrfs";
                  if (((uVar1 != 0x9123683e) && (pcVar4 = "hugetlbfs", uVar1 != 0x958458f6)) &&
                     (pcVar4 = "ramfs", uVar1 != 0x858458f6)) goto LAB_00101467;
                }
              }
            }
          }
        }
        else {
          pcVar4 = "bpf_fs";
          if (uVar1 != 0xcafe4a11) {
            if (uVar1 < 0xcafe4a12) {
              pcVar4 = "snfs";
              if (uVar1 != 0xbeefdead) {
                if (uVar1 < 0xbeefdeae) {
                  pcVar4 = "xenfs";
                  if (((uVar1 != 0xabba1974) && (pcVar4 = "vmhgfs", uVar1 != 0xbacbacbc)) &&
                     (pcVar4 = "panfs", uVar1 != 0xaad7aaea)) goto LAB_00101467;
                }
                else {
                  pcVar4 = "logfs";
                  if (((uVar1 != 0xc97e8168) && (pcVar4 = "bcachefs", uVar1 != 0xca451a4e)) &&
                     (pcVar4 = "ppc-cmm-fs", uVar1 != 0xc7571590)) goto LAB_00101467;
                }
              }
            }
            else {
              pcVar4 = "selinux";
              if (uVar1 != 0xf97cff8c) {
                if (uVar1 < 0xf97cff8d) {
                  pcVar4 = "erofs";
                  if (((uVar1 != 0xe0f5e1e2) && (pcVar4 = "f2fs", uVar1 != 0xf2f52010)) &&
                     (pcVar4 = "efivarfs", uVar1 != 0xde5e81e4)) goto LAB_00101467;
                }
                else {
                  pcVar4 = "smb2";
                  if (((uVar1 != 0xfe534d42) && (pcVar4 = "cifs", uVar1 != 0xff534d42)) &&
                     (pcVar4 = "hpfs", uVar1 != 0xf995e849)) goto LAB_00101467;
                }
              }
            }
          }
        }
      }
    }
    puVar2 = &_LC155;
    pcVar3 = "-";
    break;
  default:
    pcVar4 = _stdout->_IO_write_ptr;
    if (pcVar4 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar4 + 1;
      *pcVar4 = '?';
      return 0;
    }
    __overflow(_stdout,0x3f);
    return 0;
  case 0x61:
    pcVar4 = (char *)param_7[4];
    goto LAB_001012a9;
  case 0x62:
    pcVar4 = (char *)param_7[2];
    goto LAB_001012a9;
  case 99:
    pcVar4 = (char *)param_7[5];
LAB_001011a2:
    puVar2 = &_LC159;
    pcVar3 = "\'-0";
    break;
  case 100:
    pcVar4 = (char *)param_7[6];
    goto LAB_001012a9;
  case 0x66:
    pcVar4 = (char *)param_7[3];
LAB_001012a9:
    puVar2 = &_LC22;
    pcVar3 = "\'-+ 0";
    break;
  case 0x69:
    puVar2 = &_LC157;
    pcVar3 = "-#0";
    pcVar4 = (char *)CONCAT44(*(undefined4 *)(param_7 + 8),*(undefined4 *)((long)param_7 + 0x44));
    break;
  case 0x6c:
    puVar2 = &_LC159;
    pcVar3 = "\'-0";
    pcVar4 = (char *)param_7[10];
    break;
  case 0x6e:
    make_format(param_1,param_2,&_LC156,&_LC155);
    __printf_chk(2,param_1,param_6);
    return 0;
  case 0x73:
    puVar2 = &_LC159;
    pcVar3 = "\'-0";
    pcVar4 = (char *)*param_7;
    break;
  case 0x74:
    puVar2 = &_LC157;
    pcVar3 = "-#0";
    pcVar4 = (char *)(ulong)*(uint *)(param_7 + 0xb);
  }
  make_format(param_1,param_2,pcVar3,puVar2);
  __printf_chk(2,param_1,pcVar4);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
print_stat(long param_1,long param_2,char param_3,char param_4,undefined8 param_5,
          undefined1 *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  passwd *ppVar4;
  void *__ptr;
  undefined8 uVar5;
  int *piVar6;
  undefined *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined *local_48;
  long lStack_40;
  
  local_48 = (undefined *)param_7[1];
  lStack_40 = param_7[2];
  puVar1 = (undefined8 *)*param_7;
  uVar12 = param_7[1];
  uVar5 = param_7[2];
  if (0x39 < (byte)(param_4 + 0xbfU)) {
switchD_00102068_caseD_4:
    pcVar3 = _stdout->_IO_write_ptr;
    if (pcVar3 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar3 + 1;
      *pcVar3 = '?';
      return 0;
    }
    __overflow(_stdout,0x3f);
    return 0;
  }
  puVar7 = (undefined *)(ulong)(byte)(param_4 + 0xbfU);
  puVar9 = &switchD_00102068::switchdataD_001046b4;
  switch(puVar7) {
  case (undefined *)0x0:
    param_6 = modebuf_4;
    filemodestring(puVar1,modebuf_4);
    modebuf_4[10] = 0;
    goto switchD_00102068_caseD_2d;
  case (undefined *)0x1:
    make_format(param_1,param_2,&_LC160,&_LC159);
    __printf_chk(2,param_1,0x200);
    return 0;
  case (undefined *)0x2:
    piVar6 = __errno_location();
    *piVar6 = 0x5f;
    uVar12 = quotearg_style(4,param_6);
    uVar5 = dcgettext(0,"failed to get security context of %s",5);
    error(0,*piVar6,uVar5,uVar12);
    *(undefined2 *)(param_1 + param_2) = 0x73;
    __printf_chk(2,param_1,&_LC163);
    return 1;
  case (undefined *)0x3:
    puVar7 = &_LC157;
    puVar9 = (uint *)&_LC158;
    param_6 = (undefined1 *)*puVar1;
    break;
  default:
    goto switchD_00102068_caseD_4;
  case (undefined *)0x5:
    param_6 = (undefined1 *)file_type(puVar1);
    goto switchD_00102068_caseD_2d;
  case (undefined *)0x6:
    ppVar4 = (passwd *)getgrgid(*(__gid_t *)(puVar1 + 4));
    goto joined_r0x00102463;
  case (undefined *)0xd:
    uVar2 = get_quoting_style(0);
    uVar12 = quotearg_style(uVar2,param_6);
    make_format(param_1,param_2,&_LC156,&_LC155);
    __printf_chk(2,param_1,uVar12);
    if ((*(uint *)(puVar1 + 3) & 0xf000) != 0xa000) {
      return 0;
    }
    __ptr = (void *)areadlink_with_size(param_6,puVar1[6]);
    if (__ptr != (void *)0x0) {
      __printf_chk(2,&_LC165);
      uVar2 = get_quoting_style(0);
      uVar12 = quotearg_style(uVar2,__ptr);
      make_format(param_1,param_2,&_LC156,&_LC155);
      __printf_chk(2,param_1,uVar12);
      free(__ptr);
      return 0;
    }
    uVar12 = quotearg_style(4,param_6);
    uVar5 = dcgettext(0,"cannot read symbolic link %s",5);
    piVar6 = __errno_location();
    error(0,*piVar6,uVar5,uVar12);
    return 1;
  case (undefined *)0x11:
    puVar7 = &_LC157;
    puVar9 = (uint *)&_LC158;
    param_6 = (undefined1 *)puVar1[5];
    break;
  case (undefined *)0x13:
    param_6 = (undefined1 *)puVar1[5];
    puVar7 = &_LC157;
    puVar10 = &_LC158;
    uVar11 = (uint)param_6;
    goto LAB_00102269;
  case (undefined *)0x14:
    ppVar4 = getpwuid(*(__uid_t *)((long)puVar1 + 0x1c));
joined_r0x00102463:
    param_6 = _LC162;
    if (ppVar4 != (passwd *)0x0) {
      param_6 = ppVar4->pw_name;
    }
    goto switchD_00102068_caseD_2d;
  case (undefined *)0x16:
    if (lStack_40 < 0) {
      local_48 = (undefined *)0x0;
      lStack_40 = 0;
    }
    goto LAB_001023fa;
  case (undefined *)0x17:
    local_48 = (undefined *)puVar1[9];
    lStack_40 = puVar1[10];
    goto LAB_001023fa;
  case (undefined *)0x18:
    local_48 = (undefined *)puVar1[0xb];
    lStack_40 = puVar1[0xc];
    goto LAB_001023fa;
  case (undefined *)0x19:
    local_48 = (undefined *)puVar1[0xd];
    lStack_40 = puVar1[0xe];
LAB_001023fa:
    out_epoch_sec(param_1,param_2,local_48,lStack_40);
    return 0;
  case (undefined *)0x20:
    puVar7 = &_LC166;
    puVar9 = (uint *)&_LC158;
    param_6 = (undefined1 *)(ulong)(*(uint *)(puVar1 + 3) & 0xfff);
    break;
  case (undefined *)0x21:
    puVar7 = &_LC159;
    puVar9 = (uint *)&_LC160;
    param_6 = (undefined1 *)puVar1[8];
    break;
  case (undefined *)0x23:
    param_6 = (undefined1 *)*puVar1;
    goto joined_r0x00102318;
  case (undefined *)0x25:
    puVar7 = &_LC157;
    puVar9 = (uint *)&_LC158;
    param_6 = (undefined1 *)(ulong)*(uint *)(puVar1 + 3);
    break;
  case (undefined *)0x26:
    puVar7 = &_LC159;
    puVar9 = (uint *)&_LC160;
    param_6 = (undefined1 *)(ulong)*(uint *)(puVar1 + 4);
    break;
  case (undefined *)0x27:
    puVar7 = &_LC159;
    puVar9 = (uint *)&_LC160;
    param_6 = (undefined1 *)puVar1[2];
    break;
  case (undefined *)0x28:
    puVar7 = &_LC159;
    puVar9 = (uint *)&_LC160;
    param_6 = (undefined1 *)puVar1[1];
    break;
  case (undefined *)0x2c:
    if ((follow_links == '\0') && ((*(uint *)(puVar1 + 3) & 0xf000) == 0xa000)) {
LAB_001026a0:
      local_48 = (undefined *)find_mount_point(param_6,puVar1);
      if (local_48 != (undefined *)0x0) {
        puVar7 = (undefined *)find_bind_mount(local_48);
        if (puVar7 == (undefined *)0x0) {
          puVar7 = local_48;
        }
        uVar12 = 0;
        goto LAB_00102188;
      }
    }
    else {
      pcVar3 = canonicalize_file_name(param_6);
      if (pcVar3 != (char *)0x0) {
        puVar7 = (undefined *)find_bind_mount(pcVar3);
        uVar12 = 0;
        free(pcVar3);
        local_48 = (undefined *)0x0;
        if (puVar7 != (undefined *)0x0) goto LAB_00102188;
        goto LAB_001026a0;
      }
      uVar12 = quotearg_style(4,param_6);
      uVar5 = dcgettext(0,"failed to canonicalize %s",5);
      piVar6 = __errno_location();
      error(0,*piVar6,uVar5,uVar12);
    }
    uVar12 = 1;
    puVar7 = &_LC163;
    local_48 = (undefined *)0x0;
LAB_00102188:
    make_format(param_1,param_2,&_LC156,&_LC155);
    __printf_chk(2,param_1,puVar7);
    free(local_48);
    return uVar12;
  case (undefined *)0x2d:
    goto switchD_00102068_caseD_2d;
  case (undefined *)0x2e:
    param_6 = (undefined1 *)puVar1[7];
    if ((char *)0x1fffffffffffffff < (char *)((long)param_6 + -1)) {
      param_6 = (undefined1 *)0x200;
    }
    goto LAB_00102117;
  case (undefined *)0x31:
    param_6 = (undefined1 *)puVar1[5];
joined_r0x00102318:
    if (param_3 == 'H') {
      puVar7 = &_LC159;
      puVar10 = &_LC160;
      uVar11 = (uint)((ulong)param_6 >> 8);
LAB_001022d0:
      uVar11 = uVar11 & 0xfff;
      make_format(param_1,param_2,puVar10,puVar7);
      uVar8 = (uint)((ulong)param_6 >> 0x20) & 0xfffff000;
    }
    else {
      uVar11 = (uint)param_6;
      puVar7 = &_LC159;
      puVar10 = &_LC160;
      if (param_3 != 'L') {
LAB_00102117:
        puVar7 = &_LC159;
        puVar9 = (uint *)&_LC160;
        break;
      }
LAB_00102269:
      uVar11 = uVar11 & 0xff;
      make_format(param_1,param_2,puVar10,puVar7);
      uVar8 = (uint)(((ulong)param_6 >> 0x14) << 8);
    }
    __printf_chk(2,param_1,uVar8 | uVar11);
    return 0;
  case (undefined *)0x32:
    puVar7 = &_LC159;
    puVar9 = (uint *)&_LC160;
    param_6 = (undefined1 *)puVar1[6];
    break;
  case (undefined *)0x33:
    param_6 = (undefined1 *)puVar1[5];
    puVar7 = &_LC157;
    puVar10 = &_LC158;
    uVar11 = (uint)((ulong)param_6 >> 8);
    goto LAB_001022d0;
  case (undefined *)0x34:
    puVar7 = &_LC159;
    puVar9 = (uint *)&_LC160;
    param_6 = (undefined1 *)(ulong)*(uint *)((long)puVar1 + 0x1c);
    break;
  case (undefined *)0x36:
    puVar9 = (uint *)&_LC156;
    puVar7 = &_LC155;
    param_6 = (undefined1 *)puVar9;
    if (lStack_40 < 0) break;
    goto LAB_00102084;
  case (undefined *)0x37:
    param_6 = (undefined1 *)human_time(puVar1[9],puVar1[10]);
    goto switchD_00102068_caseD_2d;
  case (undefined *)0x38:
    param_6 = (undefined1 *)human_time(puVar1[0xb],puVar1[0xc]);
    goto switchD_00102068_caseD_2d;
  case (undefined *)0x39:
    uVar12 = puVar1[0xd];
    uVar5 = puVar1[0xe];
LAB_00102084:
    param_6 = (undefined1 *)human_time(uVar12,uVar5,puVar9,puVar7);
switchD_00102068_caseD_2d:
    puVar7 = &_LC155;
    puVar9 = (uint *)&_LC156;
  }
  make_format(param_1,param_2,puVar9,puVar7);
  __printf_chk(2,param_1,param_6);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void usage(int param_1)

{
  FILE *pFVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long in_FS_OFFSET;
  undefined *local_a8;
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
    goto LAB_001027da;
  }
  uVar3 = dcgettext(0,"Usage: %s [OPTION]... FILE...\n",5);
  __printf_chk(2,uVar3,uVar5);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,"Display file or file system status.\n",5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nMandatory arguments to long options are mandatory for short options too.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -L, --dereference     follow links\n  -f, --file-system     display file system status instead of file status\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "      --cached=MODE     specify how to use cached attributes;\n                          useful on remote file systems. See MODE below\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  -c  --format=FORMAT   use the specified FORMAT instead of the default;\n                          output a newline after each use of FORMAT\n      --printf=FORMAT   like --format, but interpret backslash escapes,\n                          and do not output a mandatory trailing newline;\n                          if you want a newline, include \\n in FORMAT\n  -t, --terse           print the information in terse form\n"
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
                             "\nThe MODE argument of --cached can be: always, never, or default.\n\'always\' will use cached attributes if available, while\n\'never\' will try to synchronize with the latest attributes, and\n\'default\' will leave it up to the underlying file system.\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "\nThe valid format sequences for files (without --file-system):\n\n  %a   permission bits in octal (see \'#\' and \'0\' printf flags)\n  %A   permission bits and file type in human readable form\n  %b   number of blocks allocated (see %B)\n  %B   the size in bytes of each block reported by %b\n  %C   SELinux security context string\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %d   device number in decimal (st_dev)\n  %D   device number in hex (st_dev)\n  %Hd  major device number in decimal\n  %Ld  minor device number in decimal\n  %f   raw mode in hex\n  %F   file type\n  %g   group ID of owner\n  %G   group name of owner\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %h   number of hard links\n  %i   inode number\n  %m   mount point\n  %n   file name\n  %N   quoted file name with dereference if symbolic link\n  %o   optimal I/O transfer size hint\n  %s   total size, in bytes\n  %r   device type in decimal (st_rdev)\n  %R   device type in hex (st_rdev)\n  %Hr  major device type in decimal, for character/block device special files\n  %Lr  minor device type in decimal, for character/block device special files\n  %t   major device type in hex, for character/block device special files\n  %T   minor device type in hex, for character/block device special files\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %u   user ID of owner\n  %U   user name of owner\n  %w   time of file birth, human-readable; - if unknown\n  %W   time of file birth, seconds since Epoch; 0 if unknown\n  %x   time of last access, human-readable\n  %X   time of last access, seconds since Epoch\n  %y   time of last data modification, human-readable\n  %Y   time of last data modification, seconds since Epoch\n  %z   time of last status change, human-readable\n  %Z   time of last status change, seconds since Epoch\n\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "Valid format sequences for file systems:\n\n  %a   free blocks available to non-superuser\n  %b   total data blocks in file system\n  %c   total file nodes in file system\n  %d   free file nodes in file system\n  %f   free blocks in file system\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  pFVar1 = _stdout;
  pcVar4 = (char *)dcgettext(0,
                             "  %i   file system ID in hex\n  %l   maximum length of filenames\n  %n   file name\n  %s   block size (for faster transfers)\n  %S   fundamental block size (for block counts)\n  %t   file system type in hex\n  %T   file system type in human readable form\n"
                             ,5);
  fputs_unlocked(pcVar4,pFVar1);
  uVar5 = dcgettext(0,"\n--terse is equivalent to the following FORMAT:\n    %s",5);
  __printf_chk(2,uVar5,"%n %s %b %f %u %g %D %i %h %t %T %X %Y %Z %W %o\n");
  uVar5 = dcgettext(0,"--terse --file-system is equivalent to the following FORMAT:\n    %s",5);
  __printf_chk(2,uVar5,"%n %i %l %t %s %S %b %f %a %c %d\n");
  uVar5 = dcgettext(0,
                    "\nYour shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell\'s documentation\nfor details about the options it supports.\n"
                    ,5);
  __printf_chk(2,uVar5,&_LC170);
  pcVar4 = "[";
  local_a8 = &_LC169;
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
    iVar2 = strcmp("stat",pcVar4);
    if (iVar2 == 0) break;
    pcVar4 = *(char **)((long)ppuVar6 + 0x10);
    ppuVar6 = (undefined **)((long)ppuVar6 + 0x10);
  } while (pcVar4 != (char *)0x0);
  puVar7 = *(undefined **)((long)ppuVar6 + 8);
  if (puVar7 == (undefined *)0x0) {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    puVar7 = &_LC170;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00102ba5;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC170);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00102ba5:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC170);
    if (puVar7 == &_LC170) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_001027da:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  lconv *plVar4;
  undefined8 uVar5;
  char *__haystack;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  byte bVar9;
  uint uVar10;
  char *pcVar11;
  undefined8 *puVar12;
  char cVar13;
  long in_FS_OFFSET;
  char *local_c8;
  statvfs local_b8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  pcVar11 = "c:fLt";
  textdomain("coreutils");
  plVar4 = localeconv();
  decimal_point = plVar4->decimal_point;
  if (*decimal_point == '\0') {
    decimal_point = ".";
  }
  cVar13 = '\0';
  decimal_point_len = strlen(decimal_point);
  atexit((__func *)&close_stdout);
  uVar1 = 0;
  __haystack = (char *)0x0;
  while (iVar3 = getopt_long(param_1,param_2,"c:fLt",long_options,0), local_c8 = __haystack,
        iVar3 != -1) {
    if (iVar3 == 99) {
      interpret_backslash_escapes = 0;
      trailing_delim = &_LC208;
      __haystack = _optarg;
    }
    else if (iVar3 < 100) {
      if (iVar3 == 0) {
        lVar8 = __xargmatch_internal("--cached",_optarg,cached_args,cached_modes,4,_argmatch_die,1);
        iVar3 = *(int *)(cached_modes + lVar8 * 4);
        if (iVar3 == 1) {
          force_sync = 1;
          dont_sync = 0;
        }
        else if (iVar3 == 2) {
          force_sync = 0;
          dont_sync = 1;
        }
        else if (iVar3 == 0) {
          force_sync = 0;
          dont_sync = 0;
        }
      }
      else {
        if (iVar3 < 1) {
          if (iVar3 == -0x83) {
            uVar5 = proper_name_lite("Michael Meskes","Michael Meskes");
            version_etc(_stdout,&_LC170,"GNU coreutils",_Version,uVar5,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar3 != -0x82) goto LAB_00104ce3;
          usage(0);
          goto LAB_00104cc2;
        }
        if (iVar3 != 0x4c) goto LAB_00104ce3;
        follow_links = 1;
      }
    }
    else if (iVar3 == 0x74) {
      uVar1 = 1;
    }
    else if (iVar3 == 0x80) {
      interpret_backslash_escapes = 1;
      trailing_delim = &_LC15;
      __haystack = _optarg;
    }
    else {
      if (iVar3 != 0x66) goto LAB_00104ce3;
      cVar13 = '\x01';
    }
  }
  if (_optind == param_1) {
LAB_00104cc2:
    uVar5 = dcgettext(0,"missing operand",5);
    error(0,0,uVar5);
LAB_00104ce3:
    usage(1);
  }
  else {
    if (__haystack == (char *)0x0) {
      __haystack = (char *)default_format(cVar13,uVar1,0);
      local_c8 = (char *)default_format(cVar13,uVar1,1);
      goto LAB_00104b9a;
    }
    pcVar11 = strstr(__haystack,"%N");
    if (pcVar11 == (char *)0x0) goto LAB_00104b9a;
    pcVar11 = getenv("QUOTING_STYLE");
    if (pcVar11 == (char *)0x0) {
      set_quoting_style(0,4);
      goto LAB_00104b9a;
    }
    iVar3 = argmatch(pcVar11,&quoting_style_args,&quoting_style_vals,4);
    if (-1 < iVar3) {
      set_quoting_style(0,*(undefined4 *)(&quoting_style_vals + (long)iVar3 * 4));
      goto LAB_00104b9a;
    }
  }
  set_quoting_style(0,4);
  uVar5 = quote(pcVar11);
  uVar6 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
  error(0,0,uVar6,uVar5);
LAB_00104b9a:
  if (_optind < param_1) {
    lVar8 = (long)_optind;
    uVar10 = param_1 - _optind;
    puVar12 = param_2 + lVar8;
    bVar9 = 1;
    do {
      pcVar11 = (char *)*puVar12;
      if (cVar13 == '\0') {
        bVar2 = do_stat(pcVar11,__haystack,local_c8);
      }
      else {
        iVar3 = strcmp(pcVar11,"-");
        if (iVar3 == 0) {
          uVar5 = quotearg_style(4,pcVar11);
          uVar6 = dcgettext(0,"using %s to denote standard input does not work in file system mode",
                            5);
          error(0,0,uVar6,uVar5);
          bVar2 = 0;
        }
        else {
          iVar3 = statvfs(pcVar11,&local_b8);
          if (iVar3 == 0) {
            bVar2 = print_it(__haystack,0xffffffff,pcVar11,print_statfs,&local_b8);
            bVar2 = bVar2 ^ 1;
          }
          else {
            uVar5 = quotearg_style(4,pcVar11);
            uVar6 = dcgettext(0,"cannot read file system information for %s",5);
            piVar7 = __errno_location();
            error(0,*piVar7,uVar6,uVar5);
            bVar2 = 0;
          }
        }
      }
      puVar12 = puVar12 + 1;
      bVar9 = bVar9 & bVar2;
    } while (puVar12 != param_2 + (ulong)uVar10 + lVar8);
  }
  else {
    bVar9 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar9 ^ 1;
}


