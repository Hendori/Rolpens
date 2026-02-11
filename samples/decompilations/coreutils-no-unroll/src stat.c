
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
        goto LAB_001001d2;
      }
    }
  }
  uVar3 = 0;
LAB_001001d2:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte print_it(byte *param_1,undefined4 param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  size_t sVar4;
  void *__ptr;
  size_t sVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  uint uVar16;
  ulong uVar17;
  byte local_55;
  
  sVar4 = strlen((char *)param_1);
  lVar1 = sVar4 + 3;
  __ptr = (void *)xmalloc(lVar1);
  bVar3 = *param_1;
  if (bVar3 == 0) {
    local_55 = 0;
  }
  else {
    local_55 = 0;
    if (param_4 == print_stat) {
      do {
        pbVar12 = param_1 + 1;
        if (bVar3 == 0x25) {
          sVar4 = strspn((char *)pbVar12,"\'-+ #0I");
          sVar5 = strspn((char *)(param_1 + sVar4 + 1),digits);
          pbVar13 = param_1 + sVar4 + 1 + sVar5;
          bVar3 = *pbVar13;
          if (bVar3 == 0x2e) {
            sVar4 = strspn((char *)(pbVar13 + 1),digits);
            pbVar13 = pbVar13 + sVar4 + 1;
            bVar3 = *pbVar13;
          }
          uVar14 = (ulong)bVar3;
          uVar17 = (long)pbVar13 - (long)param_1;
          __memcpy_chk(__ptr,param_1,uVar17,lVar1);
          if (bVar3 == 0x25) {
LAB_00100593:
            if (1 < uVar17) {
              do {
                bVar3 = (byte)uVar14;
LAB_00100cc1:
                *(byte *)((long)__ptr + uVar17) = bVar3;
                *(undefined1 *)((long)__ptr + uVar17 + 1) = 0;
                uVar7 = quote(__ptr);
                uVar8 = dcgettext(0,"%s: invalid directive",5);
                error(1,0,uVar8,uVar7);
              } while( true );
            }
            pcVar6 = _stdout->_IO_write_ptr;
            pbVar12 = pbVar13 + 1;
            if (pcVar6 < _stdout->_IO_write_end) {
              _stdout->_IO_write_ptr = pcVar6 + 1;
              *pcVar6 = '%';
              param_1 = pbVar13;
            }
            else {
              __overflow(_stdout,0x25);
              param_1 = pbVar13;
            }
            goto LAB_00100510;
          }
          if ((char)bVar3 < '&') {
            if (bVar3 == 0) {
              pbVar13 = pbVar13 + -1;
              goto LAB_00100593;
            }
LAB_001005de:
            iVar11 = 0;
          }
          else {
            if ((bVar3 & 0xfb) != 0x48) goto LAB_001005de;
            bVar2 = pbVar13[1];
            if ((bVar2 == 100) || (iVar11 = 0, bVar2 == 0x72)) {
              iVar11 = (int)(char)bVar3;
              pbVar13 = pbVar13 + 1;
              bVar3 = bVar2;
            }
          }
          bVar3 = print_stat(__ptr,uVar17,iVar11,(int)(char)bVar3,param_2,param_3,param_5);
          local_55 = local_55 | bVar3;
          param_1 = pbVar13;
          pbVar12 = pbVar13 + 1;
        }
        else if (bVar3 == 0x5c) {
          if (interpret_backslash_escapes == '\0') {
            pcVar6 = _stdout->_IO_write_ptr;
            if (pcVar6 < _stdout->_IO_write_end) {
LAB_001006f6:
              _stdout->_IO_write_ptr = pcVar6 + 1;
              *pcVar6 = '\\';
            }
            else {
              __overflow(_stdout,0x5c);
            }
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
                bVar2 = param_1[2];
                if ((0x36 < (byte)(bVar2 - 0x30)) ||
                   ((0x7e0000007e03ffU >> ((ulong)(bVar2 - 0x30) & 0x3f) & 1) == 0)) {
switchD_0010075d_caseD_5d:
                  uVar16 = (uint)(char)bVar3;
                  uVar7 = dcgettext(0,"warning: unrecognized escape \'\\%c\'",5);
                  error(0,0,uVar7,uVar16);
                  goto LAB_00100ac0;
                }
                iVar11 = (int)(char)bVar2;
                if ((byte)(bVar2 + 0x9f) < 6) {
                  uVar16 = iVar11 - 0x57;
                }
                else {
                  uVar16 = iVar11 - 0x30;
                  if ((byte)(bVar2 + 0xbf) < 6) {
                    uVar16 = iVar11 - 0x37;
                  }
                }
                bVar3 = param_1[3];
                if (((byte)(bVar3 - 0x30) < 0x37) &&
                   ((0x7e0000007e03ffU >> ((ulong)(bVar3 - 0x30) & 0x3f) & 1) != 0)) {
                  pbVar12 = param_1 + 3;
                  iVar11 = (int)(char)bVar3;
                  if ((byte)(bVar3 + 0x9f) < 6) {
                    uVar16 = uVar16 * 0x10 + iVar11 + -0x57;
                  }
                  else {
                    iVar9 = iVar11 + -0x30;
                    if ((byte)(bVar3 + 0xbf) < 6) {
                      iVar9 = iVar11 + -0x37;
                    }
                    uVar16 = uVar16 * 0x10 + iVar9;
                  }
                }
                else {
                  pbVar12 = param_1 + 2;
                }
                pbVar13 = pbVar12 + 1;
                pcVar6 = _stdout->_IO_write_ptr;
                if (pcVar6 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = pcVar6 + 1;
                  *pcVar6 = (char)uVar16;
                  param_1 = pbVar12;
                  pbVar12 = pbVar13;
                  goto LAB_00100510;
                }
              }
              else {
                if (bVar3 == 0) {
                  uVar7 = dcgettext(0,"warning: backslash at end of format",5);
                  error(0,0,uVar7);
                  pcVar6 = _stdout->_IO_write_ptr;
                  if (pcVar6 < _stdout->_IO_write_end) goto LAB_001006f6;
                  __overflow(_stdout,0x5c);
                  goto LAB_00100510;
                }
                if (bVar3 == 0x22) {
switchD_0010075d_caseD_5c:
                  uVar16 = (uint)(char)bVar3;
                }
                else {
                  switch(bVar3) {
                  case 0x5c:
                    goto switchD_0010075d_caseD_5c;
                  default:
                    goto switchD_0010075d_caseD_5d;
                  case 0x61:
                    uVar16 = 7;
                    bVar3 = 7;
                    break;
                  case 0x62:
                    uVar16 = 8;
                    bVar3 = 8;
                    break;
                  case 0x65:
                    uVar16 = 0x1b;
                    bVar3 = 0x1b;
                    break;
                  case 0x66:
                    uVar16 = 0xc;
                    bVar3 = 0xc;
                    break;
                  case 0x6e:
                    uVar16 = 10;
                    bVar3 = 10;
                    break;
                  case 0x72:
                    uVar16 = 0xd;
                    bVar3 = 0xd;
                    break;
                  case 0x74:
                    uVar16 = 9;
                    bVar3 = 9;
                    break;
                  case 0x76:
                    uVar16 = 0xb;
                    bVar3 = 0xb;
                  }
                }
LAB_00100ac0:
                pbVar13 = param_1 + 2;
                pbVar15 = (byte *)_stdout->_IO_write_ptr;
                if (pbVar15 < _stdout->_IO_write_end) {
                  _stdout->_IO_write_ptr = (char *)(pbVar15 + 1);
                  *pbVar15 = bVar3;
                  param_1 = pbVar12;
                  pbVar12 = pbVar13;
                  goto LAB_00100510;
                }
                uVar16 = uVar16 & 0xff;
              }
              __overflow(_stdout,uVar16);
              param_1 = pbVar12;
              pbVar12 = pbVar13;
            }
          }
        }
        else {
          pbVar13 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar13 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar13 + 1);
            *pbVar13 = bVar3;
          }
          else {
            __overflow(_stdout,(uint)bVar3);
          }
        }
LAB_00100510:
        bVar3 = param_1[1];
        param_1 = pbVar12;
      } while (bVar3 != 0);
    }
    else {
LAB_001003f4:
      do {
        pbVar12 = param_1 + 1;
        if (bVar3 == 0x25) {
          sVar4 = strspn((char *)pbVar12,"\'-+ #0I");
          sVar5 = strspn((char *)(param_1 + sVar4 + 1),digits);
          pbVar12 = param_1 + sVar4 + 1 + sVar5;
          bVar3 = *pbVar12;
          if (bVar3 == 0x2e) {
            sVar4 = strspn((char *)(pbVar12 + 1),digits);
            pbVar12 = pbVar12 + sVar4 + 1;
            bVar3 = *pbVar12;
          }
          uVar14 = (long)pbVar12 - (long)param_1;
          __memcpy_chk(__ptr,param_1,uVar14,lVar1);
          if (bVar3 == 0) {
            param_1 = pbVar12 + -1;
          }
          else {
            param_1 = pbVar12;
            if (bVar3 != 0x25) {
              bVar3 = (*param_4)(__ptr,uVar14,0,(int)(char)bVar3,param_2,param_3,param_5);
              local_55 = local_55 | bVar3;
              bVar3 = pbVar12[1];
              param_1 = pbVar12 + 1;
              if (bVar3 == 0) break;
              goto LAB_001003f4;
            }
          }
          uVar17 = uVar14;
          if (1 < uVar14) goto LAB_00100cc1;
          pbVar12 = param_1 + 1;
          pcVar6 = _stdout->_IO_write_ptr;
          if (pcVar6 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = pcVar6 + 1;
            *pcVar6 = '%';
            goto LAB_001003e8;
          }
          iVar11 = 0x25;
LAB_001009b5:
          __overflow(_stdout,iVar11);
        }
        else if (bVar3 == 0x5c) {
          if (interpret_backslash_escapes == '\0') {
            pcVar6 = _stdout->_IO_write_ptr;
            if (pcVar6 < _stdout->_IO_write_end) {
LAB_001006c5:
              _stdout->_IO_write_ptr = pcVar6 + 1;
              *pcVar6 = '\\';
            }
            else {
LAB_001009a0:
              __overflow(_stdout,0x5c);
            }
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
            else if (bVar3 == 0x78) {
              bVar2 = param_1[2];
              if ((0x36 < (byte)(bVar2 - 0x30)) ||
                 ((0x7e0000007e03ffU >> ((ulong)(bVar2 - 0x30) & 0x3f) & 1) == 0)) {
switchD_0010066a_caseD_5d:
                uVar16 = (uint)(char)bVar3;
                uVar7 = dcgettext(0,"warning: unrecognized escape \'\\%c\'",5);
                error(0,0,uVar7,uVar16);
                goto LAB_00100a18;
              }
              iVar9 = (int)(char)bVar2;
              iVar11 = iVar9 + -0x57;
              if ((byte)(bVar2 + 0x9f) < 6) {
                bVar3 = param_1[3];
                uVar16 = bVar3 - 0x30;
                if (0x36 < (byte)uVar16) goto LAB_00100a9e;
LAB_00100890:
                if ((0x7e0000007e03ffU >> ((ulong)uVar16 & 0x3f) & 1) == 0) goto LAB_00100a9e;
                iVar10 = (int)(char)bVar3;
                param_1 = param_1 + 3;
                iVar9 = iVar10 + -0x57;
                if (5 < (byte)(bVar3 + 0x9f)) {
                  iVar9 = iVar10 + -0x30;
                  if ((byte)(bVar3 + 0xbf) < 6) {
                    iVar9 = iVar10 + -0x37;
                  }
                }
                iVar11 = iVar11 * 0x10 + iVar9;
              }
              else {
                bVar3 = param_1[3];
                iVar11 = iVar9 + -0x30;
                if ((byte)(bVar2 + 0xbf) < 6) {
                  iVar11 = iVar9 + -0x37;
                }
                uVar16 = bVar3 - 0x30;
                if ((byte)uVar16 < 0x37) goto LAB_00100890;
LAB_00100a9e:
                param_1 = param_1 + 2;
              }
              pbVar12 = param_1 + 1;
              pcVar6 = _stdout->_IO_write_ptr;
              if (_stdout->_IO_write_end <= pcVar6) goto LAB_001009b5;
              _stdout->_IO_write_ptr = pcVar6 + 1;
              *pcVar6 = (char)iVar11;
            }
            else {
              if (bVar3 == 0) {
                uVar7 = dcgettext(0,"warning: backslash at end of format",5);
                error(0,0,uVar7);
                pcVar6 = _stdout->_IO_write_ptr;
                if (_stdout->_IO_write_end <= pcVar6) goto LAB_001009a0;
                goto LAB_001006c5;
              }
              if (bVar3 == 0x22) {
switchD_0010066a_caseD_5c:
                uVar16 = (uint)(char)bVar3;
              }
              else {
                switch(bVar3) {
                case 0x5c:
                  goto switchD_0010066a_caseD_5c;
                default:
                  goto switchD_0010066a_caseD_5d;
                case 0x61:
                  uVar16 = 7;
                  bVar3 = 7;
                  break;
                case 0x62:
                  uVar16 = 8;
                  bVar3 = 8;
                  break;
                case 0x65:
                  uVar16 = 0x1b;
                  bVar3 = 0x1b;
                  break;
                case 0x66:
                  uVar16 = 0xc;
                  bVar3 = 0xc;
                  break;
                case 0x6e:
                  uVar16 = 10;
                  bVar3 = 10;
                  break;
                case 0x72:
                  uVar16 = 0xd;
                  bVar3 = 0xd;
                  break;
                case 0x74:
                  uVar16 = 9;
                  bVar3 = 9;
                  break;
                case 0x76:
                  uVar16 = 0xb;
                  bVar3 = 0xb;
                }
              }
LAB_00100a18:
              pbVar15 = param_1 + 2;
              pbVar13 = (byte *)_stdout->_IO_write_ptr;
              if (pbVar13 < _stdout->_IO_write_end) {
                _stdout->_IO_write_ptr = (char *)(pbVar13 + 1);
                *pbVar13 = bVar3;
                param_1 = pbVar12;
                pbVar12 = pbVar15;
              }
              else {
                __overflow(_stdout,uVar16 & 0xff);
                param_1 = pbVar12;
                pbVar12 = pbVar15;
              }
            }
          }
        }
        else {
          pbVar13 = (byte *)_stdout->_IO_write_ptr;
          if (pbVar13 < _stdout->_IO_write_end) {
            _stdout->_IO_write_ptr = (char *)(pbVar13 + 1);
            *pbVar13 = bVar3;
          }
          else {
            __overflow(_stdout,(uint)bVar3);
          }
        }
LAB_001003e8:
        bVar3 = param_1[1];
        param_1 = pbVar12;
      } while (bVar3 != 0);
    }
  }
  free(__ptr);
  fputs_unlocked(trailing_delim,_stdout);
  return local_55;
}



uint do_stat(char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  ushort uVar11;
  char *pcVar12;
  char *pcVar13;
  long in_FS_OFFSET;
  undefined4 local_20c;
  char *local_208;
  undefined8 *local_200;
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
    uVar3 = 0x1000;
    puVar10 = &local_148;
    for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    local_208 = "";
    local_20c = 0;
  }
  else {
    local_20c = 0xffffff9c;
    puVar10 = &local_148;
    for (lVar9 = 0x20; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
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
  local_200 = &local_148;
  cVar1 = *param_2;
  if (force_sync == 0) {
    uVar3 = uVar3 | 0x800;
  }
  uVar11 = 0;
  pcVar12 = param_2;
  while (cVar1 != '\0') {
    while (cVar1 != '%') {
      cVar1 = pcVar12[1];
      pcVar12 = pcVar12 + 1;
      if (cVar1 == '\0') goto LAB_00100e99;
    }
    sVar4 = strspn(pcVar12 + 1,"\'-+ #0I");
    sVar5 = strspn(pcVar12 + sVar4 + 1,digits);
    pcVar13 = pcVar12 + sVar4 + 1 + sVar5;
    cVar1 = *pcVar13;
    if (cVar1 == '.') {
      sVar4 = strspn(pcVar13 + 1,digits);
      pcVar13 = pcVar13 + sVar4 + 1;
      cVar1 = *pcVar13;
    }
    if (cVar1 == '\0') break;
    if ((byte)(cVar1 + 0xbfU) < 0x3a) {
      uVar11 = uVar11 | *(ushort *)(CSWTCH_127 + (ulong)(byte)(cVar1 + 0xbfU) * 2);
    }
    pcVar12 = pcVar13 + 1;
    cVar1 = pcVar13[1];
  }
LAB_00100e99:
  iVar2 = statx(local_20c,local_208,uVar3,uVar11,local_200);
  if (iVar2 < 0) {
    if ((uVar3 & 0x1000) == 0) {
      uVar6 = quotearg_style(4,param_1);
      uVar8 = dcgettext(0,"cannot statx %s",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar8,uVar6);
      uVar3 = 0;
    }
    else {
      uVar6 = dcgettext(0,"cannot stat standard input",5);
      piVar7 = __errno_location();
      error(0,*piVar7,uVar6);
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



void out_string(long param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  
  pcVar7 = (char *)(param_1 + 1);
  pcVar1 = (char *)(param_1 + param_2);
  pcVar10 = pcVar7;
  if (pcVar1 <= pcVar7) {
LAB_00101264:
    pcVar7[0] = 's';
    pcVar7[1] = '\0';
    __printf_chk(2,param_1,param_3);
    return;
  }
LAB_0010120c:
  cVar2 = *pcVar10;
  pcVar4 = strchr("\'-+ #0I",(int)cVar2);
  if (pcVar4 != (char *)0x0) goto LAB_001011e8;
  if (pcVar10 < pcVar1) {
    uVar8 = (long)pcVar1 - (long)pcVar10;
    if (uVar8 - 1 < 7) {
      uVar5 = 0;
LAB_00101250:
      do {
        pcVar7[uVar5] = pcVar10[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
    else {
      uVar5 = 0;
      if ((ulong)((long)pcVar7 - (long)(pcVar10 + 1)) < 0xf) goto LAB_00101250;
      if (uVar8 - 1 < 0xf) {
        uVar6 = 0;
        pcVar4 = pcVar10;
        pcVar9 = pcVar7;
        uVar5 = uVar8;
        goto LAB_001012d8;
      }
      uVar6 = uVar8 & 0xfffffffffffffff0;
      do {
        uVar3 = *(undefined8 *)(pcVar10 + uVar5 + 8);
        *(undefined8 *)(pcVar7 + uVar5) = *(undefined8 *)(pcVar10 + uVar5);
        *(undefined8 *)(pcVar7 + uVar5 + 8) = uVar3;
        uVar5 = uVar5 + 0x10;
      } while (uVar5 != uVar6);
      pcVar4 = pcVar10 + uVar6;
      pcVar9 = pcVar7 + uVar6;
      if (uVar8 == uVar6) goto LAB_00101261;
      uVar5 = uVar8 - uVar6;
      if (6 < (uVar8 - uVar6) - 1) {
LAB_001012d8:
        *(undefined8 *)(pcVar7 + uVar6) = *(undefined8 *)(pcVar10 + uVar6);
        pcVar4 = pcVar4 + (uVar5 & 0xfffffffffffffff8);
        pcVar9 = pcVar9 + (uVar5 & 0xfffffffffffffff8);
        if ((uVar5 & 7) == 0) goto LAB_00101261;
      }
      *pcVar9 = *pcVar4;
      if ((((pcVar4 + 1 < pcVar1) && (pcVar9[1] = pcVar4[1], pcVar4 + 2 < pcVar1)) &&
          (pcVar9[2] = pcVar4[2], pcVar4 + 3 < pcVar1)) &&
         (((pcVar9[3] = pcVar4[3], pcVar4 + 4 < pcVar1 &&
           (pcVar9[4] = pcVar4[4], pcVar4 + 5 < pcVar1)) &&
          (pcVar9[5] = pcVar4[5], pcVar4 + 6 < pcVar1)))) {
        pcVar9[6] = pcVar4[6];
      }
    }
LAB_00101261:
    pcVar7 = pcVar7 + uVar8;
  }
  goto LAB_00101264;
LAB_001011e8:
  pcVar4 = strchr("-",(int)cVar2);
  if (pcVar4 != (char *)0x0) {
    *pcVar7 = cVar2;
    pcVar7 = pcVar7 + 1;
  }
  pcVar10 = pcVar10 + 1;
  if (pcVar1 == pcVar10) goto LAB_00101264;
  goto LAB_0010120c;
}



void out_uint_x(long param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  
  pcVar7 = (char *)(param_1 + 1);
  pcVar1 = (char *)(param_1 + param_2);
  pcVar10 = pcVar7;
  if (pcVar1 <= pcVar7) {
LAB_00101454:
    pcVar7[2] = '\0';
    pcVar7[0] = 'j';
    pcVar7[1] = 'x';
    __printf_chk(2,param_1,param_3);
    return;
  }
LAB_001013fc:
  cVar2 = *pcVar10;
  pcVar4 = strchr("\'-+ #0I",(int)cVar2);
  if (pcVar4 != (char *)0x0) goto LAB_001013d8;
  if (pcVar10 < pcVar1) {
    uVar8 = (long)pcVar1 - (long)pcVar10;
    if (uVar8 - 1 < 7) {
      uVar5 = 0;
LAB_00101440:
      do {
        pcVar7[uVar5] = pcVar10[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
    else {
      uVar5 = 0;
      if ((ulong)((long)pcVar7 - (long)(pcVar10 + 1)) < 0xf) goto LAB_00101440;
      if (uVar8 - 1 < 0xf) {
        uVar6 = 0;
        pcVar4 = pcVar10;
        pcVar9 = pcVar7;
        uVar5 = uVar8;
        goto LAB_001014d0;
      }
      uVar6 = uVar8 & 0xfffffffffffffff0;
      do {
        uVar3 = *(undefined8 *)(pcVar10 + uVar5 + 8);
        *(undefined8 *)(pcVar7 + uVar5) = *(undefined8 *)(pcVar10 + uVar5);
        *(undefined8 *)(pcVar7 + uVar5 + 8) = uVar3;
        uVar5 = uVar5 + 0x10;
      } while (uVar5 != uVar6);
      pcVar4 = pcVar10 + uVar6;
      pcVar9 = pcVar7 + uVar6;
      if (uVar8 == uVar6) goto LAB_00101451;
      uVar5 = uVar8 - uVar6;
      if (6 < (uVar8 - uVar6) - 1) {
LAB_001014d0:
        *(undefined8 *)(pcVar7 + uVar6) = *(undefined8 *)(pcVar10 + uVar6);
        pcVar4 = pcVar4 + (uVar5 & 0xfffffffffffffff8);
        pcVar9 = pcVar9 + (uVar5 & 0xfffffffffffffff8);
        if ((uVar5 & 7) == 0) goto LAB_00101451;
      }
      *pcVar9 = *pcVar4;
      if ((((pcVar4 + 1 < pcVar1) && (pcVar9[1] = pcVar4[1], pcVar4 + 2 < pcVar1)) &&
          (pcVar9[2] = pcVar4[2], pcVar4 + 3 < pcVar1)) &&
         (((pcVar9[3] = pcVar4[3], pcVar4 + 4 < pcVar1 &&
           (pcVar9[4] = pcVar4[4], pcVar4 + 5 < pcVar1)) &&
          (pcVar9[5] = pcVar4[5], pcVar4 + 6 < pcVar1)))) {
        pcVar9[6] = pcVar4[6];
      }
    }
LAB_00101451:
    pcVar7 = pcVar7 + uVar8;
  }
  goto LAB_00101454;
LAB_001013d8:
  pcVar4 = strchr("-#0",(int)cVar2);
  if (pcVar4 != (char *)0x0) {
    *pcVar7 = cVar2;
    pcVar7 = pcVar7 + 1;
  }
  pcVar10 = pcVar10 + 1;
  if (pcVar1 == pcVar10) goto LAB_00101454;
  goto LAB_001013fc;
}



void out_uint_isra_0(long param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  
  pcVar7 = (char *)(param_1 + 1);
  pcVar1 = (char *)(param_1 + param_2);
  pcVar10 = pcVar7;
  if (pcVar1 <= pcVar7) {
LAB_00101644:
    pcVar7[2] = '\0';
    pcVar7[0] = 'j';
    pcVar7[1] = 'u';
    __printf_chk(2,param_1,param_3);
    return;
  }
LAB_001015ec:
  cVar2 = *pcVar10;
  pcVar4 = strchr("\'-+ #0I",(int)cVar2);
  if (pcVar4 != (char *)0x0) goto LAB_001015c8;
  if (pcVar10 < pcVar1) {
    uVar8 = (long)pcVar1 - (long)pcVar10;
    if (uVar8 - 1 < 7) {
      uVar5 = 0;
LAB_00101630:
      do {
        pcVar7[uVar5] = pcVar10[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
    }
    else {
      uVar5 = 0;
      if ((ulong)((long)pcVar7 - (long)(pcVar10 + 1)) < 0xf) goto LAB_00101630;
      if (uVar8 - 1 < 0xf) {
        uVar6 = 0;
        pcVar4 = pcVar10;
        pcVar9 = pcVar7;
        uVar5 = uVar8;
        goto LAB_001016c0;
      }
      uVar6 = uVar8 & 0xfffffffffffffff0;
      do {
        uVar3 = *(undefined8 *)(pcVar10 + uVar5 + 8);
        *(undefined8 *)(pcVar7 + uVar5) = *(undefined8 *)(pcVar10 + uVar5);
        *(undefined8 *)(pcVar7 + uVar5 + 8) = uVar3;
        uVar5 = uVar5 + 0x10;
      } while (uVar5 != uVar6);
      pcVar4 = pcVar10 + uVar6;
      pcVar9 = pcVar7 + uVar6;
      if (uVar8 == uVar6) goto LAB_00101641;
      uVar5 = uVar8 - uVar6;
      if (6 < (uVar8 - uVar6) - 1) {
LAB_001016c0:
        *(undefined8 *)(pcVar7 + uVar6) = *(undefined8 *)(pcVar10 + uVar6);
        pcVar4 = pcVar4 + (uVar5 & 0xfffffffffffffff8);
        pcVar9 = pcVar9 + (uVar5 & 0xfffffffffffffff8);
        if ((uVar5 & 7) == 0) goto LAB_00101641;
      }
      *pcVar9 = *pcVar4;
      if ((((pcVar4 + 1 < pcVar1) && (pcVar9[1] = pcVar4[1], pcVar4 + 2 < pcVar1)) &&
          (pcVar9[2] = pcVar4[2], pcVar4 + 3 < pcVar1)) &&
         (((pcVar9[3] = pcVar4[3], pcVar4 + 4 < pcVar1 &&
           (pcVar9[4] = pcVar4[4], pcVar4 + 5 < pcVar1)) &&
          (pcVar9[5] = pcVar4[5], pcVar4 + 6 < pcVar1)))) {
        pcVar9[6] = pcVar4[6];
      }
    }
LAB_00101641:
    pcVar7 = pcVar7 + uVar8;
  }
  goto LAB_00101644;
LAB_001015c8:
  pcVar4 = strchr("\'-0",(int)cVar2);
  if (pcVar4 != (char *)0x0) {
    *pcVar7 = cVar2;
    pcVar7 = pcVar7 + 1;
  }
  pcVar10 = pcVar10 + 1;
  if (pcVar1 == pcVar10) goto LAB_00101644;
  goto LAB_001015ec;
}



ulong out_epoch_sec(char *param_1,size_t param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  int local_54;
  long local_48;
  int local_40;
  int local_3c;
  
  pcVar15 = param_1 + param_2;
  pcVar6 = (char *)memchr(param_1,0x2e,param_2);
  if (pcVar6 == (char *)0x0) {
    local_54 = 0;
    local_40 = 0;
LAB_00101930:
    iVar4 = 1;
    iVar5 = local_54;
    do {
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 * 10;
    } while (iVar5 != 9);
    lVar7 = (long)iVar4;
    local_3c = (int)(param_4 / lVar7);
    pcVar6 = pcVar15;
  }
  else {
    *pcVar15 = '\0';
    local_3c = (int)param_4;
    if ((int)pcVar6[1] - 0x30U < 10) {
      lVar7 = __isoc23_strtol(pcVar6 + 1,0,10);
      if (0x7fffffff < lVar7) {
        lVar7 = 0x7fffffff;
      }
      local_54 = (int)lVar7;
      if (local_54 == 0) {
        local_54 = 0;
        local_40 = 0;
        pcVar15 = pcVar6;
        goto LAB_00101930;
      }
      if ((int)pcVar6[-1] - 0x30U < 10) goto LAB_001017ee;
      local_40 = 0;
LAB_00101900:
      pcVar15 = pcVar6;
      if (local_54 < 9) goto LAB_00101930;
      lVar7 = 1;
      iVar4 = 1;
    }
    else {
      if ((int)pcVar6[-1] - 0x30U < 10) {
        local_54 = 9;
LAB_001017ee:
        *pcVar6 = '\0';
        pcVar15 = pcVar6;
        do {
          pcVar11 = pcVar15 + -2;
          pcVar15 = pcVar15 + -1;
        } while ((int)*pcVar11 - 0x30U < 10);
        lVar7 = __isoc23_strtol(pcVar15,0,10);
        if (0x7fffffff < lVar7) {
          lVar7 = 0x7fffffff;
        }
        local_40 = (int)lVar7;
        if ((((local_40 < 2) ||
             (pcVar6 = pcVar15 + (*pcVar15 == '0'), (ulong)(long)local_40 <= decimal_point_len)) ||
            (iVar4 = local_40 - (int)decimal_point_len, iVar4 < 2)) ||
           (iVar4 = iVar4 - local_54, iVar4 < 2)) goto LAB_00101900;
        pcVar15 = param_1;
        if (param_1 < pcVar6) {
          bVar3 = false;
          pcVar11 = param_1;
          do {
            if (*pcVar11 == '-') {
              bVar3 = true;
            }
            else {
              *pcVar15 = *pcVar11;
              pcVar15 = pcVar15 + 1;
            }
            pcVar11 = pcVar11 + 1;
          } while (pcVar6 != pcVar11);
          lVar7 = (long)pcVar15 - (long)param_1;
          if (!bVar3) goto LAB_00101e0b;
        }
        else {
          lVar7 = 0;
LAB_00101e0b:
          iVar4 = __sprintf_chk(pcVar15,2,0xffffffffffffffff,&_LC21,iVar4);
          lVar7 = lVar7 + iVar4;
        }
        pcVar6 = param_1 + lVar7;
        goto LAB_00101900;
      }
      lVar7 = 1;
      iVar4 = 1;
      local_54 = 9;
      local_40 = 0;
    }
  }
  pcVar15 = param_1 + 1;
  local_48 = param_3;
  if (param_3 < 0) {
    if (param_4 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = ((int)(1000000000 / (long)iVar4) - local_3c) + -1 + (uint)(param_4 % lVar7 == 0);
      local_48 = (param_3 + 1) - (ulong)(local_3c == 0);
      if (local_48 == 0) {
        pcVar11 = pcVar15;
        if (pcVar15 < pcVar6) {
LAB_00101c6c:
          cVar1 = *pcVar11;
          pcVar8 = strchr("\'-+ #0I",(int)cVar1);
          if (pcVar8 != (char *)0x0) goto LAB_00101c48;
          if (pcVar11 < pcVar6) {
            uVar10 = (long)pcVar6 - (long)pcVar11;
            if (uVar10 - 1 < 7) {
              uVar9 = 0;
LAB_00101cb0:
              do {
                pcVar15[uVar9] = pcVar11[uVar9];
                uVar9 = uVar9 + 1;
              } while (uVar10 != uVar9);
            }
            else {
              uVar9 = 0;
              if ((ulong)((long)pcVar15 - (long)(pcVar11 + 1)) < 0xf) goto LAB_00101cb0;
              if (uVar10 - 1 < 0xf) {
                uVar12 = 0;
                pcVar8 = pcVar11;
                pcVar13 = pcVar15;
                uVar9 = uVar10;
                goto LAB_00101d30;
              }
              uVar12 = uVar10 & 0xfffffffffffffff0;
              do {
                uVar2 = *(undefined8 *)(pcVar11 + uVar9 + 8);
                *(undefined8 *)(pcVar15 + uVar9) = *(undefined8 *)(pcVar11 + uVar9);
                *(undefined8 *)(pcVar15 + uVar9 + 8) = uVar2;
                uVar9 = uVar9 + 0x10;
              } while (uVar9 != uVar12);
              pcVar8 = pcVar11 + uVar12;
              pcVar13 = pcVar15 + uVar12;
              if (uVar10 == uVar12) goto LAB_00101cc1;
              uVar9 = uVar10 - uVar12;
              if (6 < (uVar10 - uVar12) - 1) {
LAB_00101d30:
                *(undefined8 *)(pcVar15 + uVar12) = *(undefined8 *)(pcVar11 + uVar12);
                pcVar8 = pcVar8 + (uVar9 & 0xfffffffffffffff8);
                pcVar13 = pcVar13 + (uVar9 & 0xfffffffffffffff8);
                if ((uVar9 & 7) == 0) goto LAB_00101cc1;
              }
              *pcVar13 = *pcVar8;
              if ((((pcVar8 + 1 < pcVar6) && (pcVar13[1] = pcVar8[1], pcVar8 + 2 < pcVar6)) &&
                  ((pcVar13[2] = pcVar8[2], pcVar8 + 3 < pcVar6 &&
                   ((pcVar13[3] = pcVar8[3], pcVar8 + 4 < pcVar6 &&
                    (pcVar13[4] = pcVar8[4], pcVar8 + 5 < pcVar6)))))) &&
                 (pcVar13[5] = pcVar8[5], pcVar8 + 6 < pcVar6)) {
                pcVar13[6] = pcVar8[6];
              }
            }
LAB_00101cc1:
            pcVar15 = pcVar15 + uVar10;
          }
        }
LAB_00101cc4:
        builtin_strncpy(pcVar15,".0f",4);
        uVar10 = __printf_chk(_LC23,2,param_1);
        goto LAB_00101a66;
      }
    }
  }
  pcVar11 = pcVar15;
  if (pcVar15 < pcVar6) {
LAB_001019e4:
    cVar1 = *pcVar11;
    pcVar8 = strchr("\'-+ #0I",(int)cVar1);
    if (pcVar8 != (char *)0x0) goto LAB_001019c0;
    if (pcVar11 < pcVar6) {
      uVar10 = (long)pcVar6 - (long)pcVar11;
      if (uVar10 - 1 < 7) {
        uVar9 = 0;
LAB_00101a30:
        do {
          pcVar15[uVar9] = pcVar11[uVar9];
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      else {
        uVar9 = 0;
        if ((ulong)((long)pcVar15 - (long)(pcVar11 + 1)) < 0xf) goto LAB_00101a30;
        if (uVar10 - 1 < 0xf) {
          uVar12 = 0;
          pcVar8 = pcVar11;
          uVar9 = uVar10;
          pcVar13 = pcVar15;
          goto LAB_00101b2c;
        }
        uVar12 = uVar10 & 0xfffffffffffffff0;
        do {
          uVar2 = *(undefined8 *)(pcVar11 + uVar9 + 8);
          *(undefined8 *)(pcVar15 + uVar9) = *(undefined8 *)(pcVar11 + uVar9);
          *(undefined8 *)(pcVar15 + uVar9 + 8) = uVar2;
          uVar9 = uVar9 + 0x10;
        } while (uVar9 != uVar12);
        pcVar8 = pcVar11 + uVar12;
        pcVar13 = pcVar15 + uVar12;
        if (uVar10 == uVar12) goto LAB_00101a41;
        uVar9 = uVar10 - uVar12;
        if (6 < (uVar10 - uVar12) - 1) {
LAB_00101b2c:
          *(undefined8 *)(pcVar15 + uVar12) = *(undefined8 *)(pcVar11 + uVar12);
          pcVar8 = pcVar8 + (uVar9 & 0xfffffffffffffff8);
          pcVar13 = pcVar13 + (uVar9 & 0xfffffffffffffff8);
          if ((uVar9 & 7) == 0) goto LAB_00101a41;
        }
        *pcVar13 = *pcVar8;
        if (((((pcVar8 + 1 < pcVar6) && (pcVar13[1] = pcVar8[1], pcVar8 + 2 < pcVar6)) &&
             (pcVar13[2] = pcVar8[2], pcVar8 + 3 < pcVar6)) &&
            ((pcVar13[3] = pcVar8[3], pcVar8 + 4 < pcVar6 &&
             (pcVar13[4] = pcVar8[4], pcVar8 + 5 < pcVar6)))) &&
           (pcVar13[5] = pcVar8[5], pcVar8 + 6 < pcVar6)) {
          pcVar13[6] = pcVar8[6];
        }
      }
LAB_00101a41:
      pcVar15 = pcVar15 + uVar10;
    }
  }
LAB_00101a44:
  pcVar15[2] = '\0';
  pcVar15[0] = 'j';
  pcVar15[1] = 'd';
  uVar10 = __printf_chk(2,param_1,local_48);
LAB_00101a66:
  if (local_54 != 0) {
    iVar4 = 9;
    if (local_54 < 10) {
      iVar4 = local_54;
    }
    iVar5 = (int)uVar10;
    if ((int)uVar10 < 0) {
      iVar5 = 0;
    }
    iVar14 = 0;
    if ((iVar5 < local_40) && (decimal_point_len < (ulong)(long)(local_40 - iVar5))) {
      iVar14 = (local_40 - iVar5) - (iVar4 + (int)decimal_point_len);
    }
    uVar10 = (ulong)(uint)(local_54 - iVar4);
    __printf_chk(2,"%s%.*d%-*.*d",decimal_point,iVar4,local_3c,iVar14,
                 (ulong)(uint)(local_54 - iVar4),0);
  }
  return uVar10;
LAB_00101c48:
  pcVar8 = strchr("\'-+ 0",(int)cVar1);
  if (pcVar8 != (char *)0x0) {
    *pcVar15 = cVar1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar11 = pcVar11 + 1;
  if (pcVar11 == pcVar6) goto LAB_00101cc4;
  goto LAB_00101c6c;
LAB_001019c0:
  pcVar8 = strchr("\'-+ 0",(int)cVar1);
  if (pcVar8 != (char *)0x0) {
    *pcVar15 = cVar1;
    pcVar15 = pcVar15 + 1;
  }
  pcVar11 = pcVar11 + 1;
  if (pcVar11 == pcVar6) goto LAB_00101a44;
  goto LAB_001019e4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
print_stat(long param_1,long param_2,char param_3,undefined1 param_4,undefined8 param_5,
          char *param_6,long *param_7)

{
  char cVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  ulong uVar9;
  passwd *ppVar10;
  void *__ptr;
  undefined *__ptr_00;
  undefined8 uVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  char *pcVar15;
  ulong uVar16;
  char *pcVar17;
  char *pcVar18;
  ulong local_48;
  ulong uStack_40;
  
  local_48 = param_7[1];
  uStack_40 = param_7[2];
  puVar2 = (ulong *)*param_7;
  uVar14 = param_7[1];
  uVar16 = param_7[2];
  switch(param_4) {
  case 0x41:
    filemodestring(puVar2,modebuf_4);
    modebuf_4[10] = 0;
    out_string(param_1,param_2,modebuf_4);
    break;
  case 0x42:
    out_uint_isra_0(param_1,param_2,0x200);
    break;
  case 0x43:
    piVar12 = __errno_location();
    *piVar12 = 0x5f;
    uVar5 = quotearg_style(4,param_6);
    uVar11 = dcgettext(0,"failed to get security context of %s",5);
    error(0,*piVar12,uVar11,uVar5);
    *(undefined2 *)(param_1 + param_2) = 0x73;
    __printf_chk(2,param_1,&_LC26);
    return 1;
  case 0x44:
    out_uint_x(param_1,param_2,*puVar2);
    break;
  default:
    pcVar6 = _stdout->_IO_write_ptr;
    if (pcVar6 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar6 + 1;
      *pcVar6 = '?';
    }
    else {
      __overflow(_stdout,0x3f);
    }
    break;
  case 0x46:
    uVar5 = file_type(puVar2);
    out_string(param_1,param_2,uVar5);
    break;
  case 0x47:
    ppVar10 = (passwd *)getgrgid((__gid_t)puVar2[4]);
    goto joined_r0x001022b4;
  case 0x4e:
    uVar4 = get_quoting_style(0);
    uVar5 = quotearg_style(uVar4,param_6);
    out_string(param_1,param_2,uVar5);
    if ((puVar2[3] & 0xf000) == 0xa000) {
      __ptr = (void *)areadlink_with_size(param_6,puVar2[6]);
      if (__ptr == (void *)0x0) {
        uVar5 = quotearg_style(4,param_6);
        uVar11 = dcgettext(0,"cannot read symbolic link %s",5);
        piVar12 = __errno_location();
        error(0,*piVar12,uVar11,uVar5);
        return 1;
      }
      __printf_chk(2,&_LC28);
      uVar4 = get_quoting_style(0);
      uVar5 = quotearg_style(uVar4,__ptr);
      out_string(param_1,param_2,uVar5);
      free(__ptr);
    }
    break;
  case 0x52:
    out_uint_x(param_1,param_2,puVar2[5]);
    break;
  case 0x54:
    out_uint_x(param_1,param_2,(uint)((puVar2[5] >> 0x14) << 8) | (uint)puVar2[5] & 0xff);
    break;
  case 0x55:
    ppVar10 = getpwuid(*(__uid_t *)((long)puVar2 + 0x1c));
joined_r0x001022b4:
    param_6 = "UNKNOWN";
    if (ppVar10 != (passwd *)0x0) {
      param_6 = ppVar10->pw_name;
    }
LAB_0010201b:
    out_string(param_1,param_2,param_6);
    break;
  case 0x57:
    if ((long)uStack_40 < 0) {
      local_48 = 0;
      uStack_40 = 0;
    }
    goto LAB_0010224b;
  case 0x58:
    local_48 = puVar2[9];
    uStack_40 = puVar2[10];
    goto LAB_0010224b;
  case 0x59:
    local_48 = puVar2[0xb];
    uStack_40 = puVar2[0xc];
    goto LAB_0010224b;
  case 0x5a:
    local_48 = puVar2[0xd];
    uStack_40 = puVar2[0xe];
LAB_0010224b:
    out_epoch_sec(param_1,param_2,local_48,uStack_40);
    break;
  case 0x61:
    uVar14 = puVar2[3];
    pcVar6 = (char *)(param_1 + 1);
    pcVar15 = (char *)(param_2 + param_1);
    pcVar18 = pcVar6;
    if (pcVar6 < pcVar15) {
LAB_001021b5:
      cVar1 = *pcVar18;
      pcVar8 = strchr("\'-+ #0I",(int)cVar1);
      if (pcVar8 != (char *)0x0) goto LAB_00102190;
      if (pcVar18 < pcVar15) {
        uVar16 = (long)pcVar15 - (long)pcVar18;
        if (uVar16 - 1 < 7) {
          uVar9 = 0;
LAB_00102200:
          do {
            pcVar6[uVar9] = pcVar18[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar16 != uVar9);
        }
        else {
          uVar9 = 0;
          if ((ulong)((long)pcVar6 - (long)(pcVar18 + 1)) < 0xf) goto LAB_00102200;
          if (uVar16 - 1 < 0xf) {
            uVar13 = 0;
            pcVar8 = pcVar18;
            pcVar17 = pcVar6;
            uVar9 = uVar16;
            goto LAB_0010256d;
          }
          uVar13 = uVar16 & 0xfffffffffffffff0;
          do {
            uVar5 = *(undefined8 *)(pcVar18 + uVar9 + 8);
            *(undefined8 *)(pcVar6 + uVar9) = *(undefined8 *)(pcVar18 + uVar9);
            *(undefined8 *)(pcVar6 + uVar9 + 8) = uVar5;
            uVar9 = uVar9 + 0x10;
          } while (uVar13 != uVar9);
          pcVar8 = pcVar18 + uVar13;
          pcVar17 = pcVar6 + uVar13;
          if (uVar16 == uVar13) goto LAB_00102212;
          uVar9 = uVar16 - uVar13;
          if (6 < (uVar16 - uVar13) - 1) {
LAB_0010256d:
            *(undefined8 *)(pcVar6 + uVar13) = *(undefined8 *)(pcVar18 + uVar13);
            pcVar8 = pcVar8 + (uVar9 & 0xfffffffffffffff8);
            pcVar17 = pcVar17 + (uVar9 & 0xfffffffffffffff8);
            if ((uVar9 & 7) == 0) goto LAB_00102212;
          }
          *pcVar17 = *pcVar8;
          if ((((pcVar8 + 1 < pcVar15) && (pcVar17[1] = pcVar8[1], pcVar8 + 2 < pcVar15)) &&
              (pcVar17[2] = pcVar8[2], pcVar8 + 3 < pcVar15)) &&
             (((pcVar17[3] = pcVar8[3], pcVar8 + 4 < pcVar15 &&
               (pcVar17[4] = pcVar8[4], pcVar8 + 5 < pcVar15)) &&
              (pcVar17[5] = pcVar8[5], pcVar8 + 6 < pcVar15)))) {
            pcVar17[6] = pcVar8[6];
          }
        }
LAB_00102212:
        pcVar6 = pcVar6 + uVar16;
      }
    }
LAB_00102215:
    pcVar6[2] = '\0';
    pcVar6[0] = 'j';
    pcVar6[1] = 'o';
    __printf_chk(2,param_1,(uint)uVar14 & 0xfff);
    break;
  case 0x62:
    out_uint_isra_0(param_1,param_2,puVar2[8]);
    break;
  case 100:
    uVar14 = *puVar2;
    goto joined_r0x00101fc9;
  case 0x66:
    out_uint_x(param_1,param_2,(int)puVar2[3]);
    break;
  case 0x67:
    out_uint_isra_0(param_1,param_2,(int)puVar2[4]);
    break;
  case 0x68:
    out_uint_isra_0(param_1,param_2,puVar2[2]);
    break;
  case 0x69:
    out_uint_isra_0(param_1,param_2,puVar2[1]);
    break;
  case 0x6d:
    if ((follow_links == '\0') && ((puVar2[3] & 0xf000) == 0xa000)) {
LAB_001024c8:
      __ptr_00 = (undefined *)find_mount_point(param_6,puVar2);
      if (__ptr_00 != (undefined *)0x0) {
        puVar7 = (undefined *)find_bind_mount(__ptr_00);
        if (puVar7 == (undefined *)0x0) {
          uVar3 = 0;
          puVar7 = __ptr_00;
        }
        else {
          uVar3 = 0;
        }
        goto LAB_00102113;
      }
    }
    else {
      pcVar6 = canonicalize_file_name(param_6);
      if (pcVar6 != (char *)0x0) {
        puVar7 = (undefined *)find_bind_mount(pcVar6);
        __ptr_00 = (undefined *)0x0;
        free(pcVar6);
        uVar3 = 0;
        if (puVar7 != (undefined *)0x0) goto LAB_00102113;
        goto LAB_001024c8;
      }
      uVar5 = quotearg_style(4,param_6);
      uVar11 = dcgettext(0,"failed to canonicalize %s",5);
      piVar12 = __errno_location();
      error(0,*piVar12,uVar11,uVar5);
    }
    uVar3 = 1;
    __ptr_00 = (undefined *)0x0;
    puVar7 = &_LC26;
LAB_00102113:
    out_string(param_1,param_2,puVar7);
    free(__ptr_00);
    return uVar3;
  case 0x6e:
    goto LAB_0010201b;
  case 0x6f:
    uVar14 = puVar2[7];
    if (0x1fffffffffffffff < uVar14 - 1) {
      uVar14 = 0x200;
    }
    goto LAB_00101fd9;
  case 0x72:
    uVar14 = puVar2[5];
joined_r0x00101fc9:
    if (param_3 == 'H') {
      out_uint_isra_0(param_1,param_2,
                      (uint)(uVar14 >> 0x20) & 0xfffff000 | (uint)(uVar14 >> 8) & 0xfff);
    }
    else if (param_3 == 'L') {
      out_uint_isra_0(param_1,param_2,(uint)((uVar14 >> 0x14) << 8) | (uint)uVar14 & 0xff);
    }
    else {
LAB_00101fd9:
      out_uint_isra_0(param_1,param_2,uVar14);
    }
    break;
  case 0x73:
    out_uint_isra_0(param_1,param_2,puVar2[6]);
    break;
  case 0x74:
    out_uint_x(param_1,param_2,
               (uint)(puVar2[5] >> 0x20) & 0xfffff000 | (uint)(puVar2[5] >> 8) & 0xfff);
    break;
  case 0x75:
    out_uint_isra_0(param_1,param_2,*(undefined4 *)((long)puVar2 + 0x1c));
    break;
  case 0x77:
    if ((long)uStack_40 < 0) {
      out_string(param_1,param_2,&_LC18);
      return 0;
    }
    goto LAB_00101eed;
  case 0x78:
    uVar14 = puVar2[9];
    uVar16 = puVar2[10];
    goto LAB_00101eed;
  case 0x79:
    uVar14 = puVar2[0xb];
    uVar16 = puVar2[0xc];
    goto LAB_00101eed;
  case 0x7a:
    uVar14 = puVar2[0xd];
    uVar16 = puVar2[0xe];
LAB_00101eed:
    uVar5 = human_time(uVar14,uVar16);
    out_string(param_1,param_2,uVar5);
  }
  return 0;
LAB_00102190:
  pcVar8 = strchr("-#0",(int)cVar1);
  if (pcVar8 != (char *)0x0) {
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  }
  pcVar18 = pcVar18 + 1;
  if (pcVar15 == pcVar18) goto LAB_00102215;
  goto LAB_001021b5;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
print_statfs(long param_1,long param_2,undefined8 param_3,undefined1 param_4,undefined8 param_5,
            undefined8 param_6,long *param_7)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *local_48;
  ulong local_40;
  
  switch(param_4) {
  case 0x53:
    lVar7 = param_7[1];
    if (lVar7 == 0) {
      lVar7 = *param_7;
    }
    goto LAB_00102751;
  case 0x54:
    uVar2 = *(uint *)(param_7 + 0xb);
    if (uVar2 == 0x43415d53) {
      pcVar10 = "smackfs";
    }
    else if (uVar2 < 0x43415d54) {
      if (uVar2 == 0xf15f) {
        pcVar10 = "ecryptfs";
      }
      else if (uVar2 < 0xf160) {
        pcVar10 = "hfsx";
        if (uVar2 != 0x4858) {
          if (uVar2 < 0x4859) {
            pcVar10 = "minix (30 char.)";
            if (uVar2 != 0x138f) {
              if (uVar2 < 0x1390) {
                pcVar10 = "jffs";
                if (uVar2 != 0x7c0) {
                  if (uVar2 < 0x7c1) {
                    pcVar10 = "z3fold";
                    if (((uVar2 != 0x33) && (pcVar10 = "autofs", uVar2 != 0x187)) &&
                       (pcVar10 = "qnx4", uVar2 != 0x2f)) goto LAB_00102df7;
                  }
                  else {
                    pcVar10 = "ext";
                    if (((uVar2 != 0x137d) && (pcVar10 = "minix", uVar2 != 0x137f)) &&
                       (pcVar10 = "devfs", uVar2 != 0x1373)) goto LAB_00102df7;
                  }
                }
              }
              else {
                pcVar10 = "nilfs";
                if (uVar2 != 0x3434) {
                  if (uVar2 < 0x3435) {
                    pcVar10 = "minix v2";
                    if (((uVar2 != 0x2468) && (pcVar10 = "minix v2 (30 char.)", uVar2 != 0x2478)) &&
                       (pcVar10 = "devpts", uVar2 != 0x1cd1)) goto LAB_00102df7;
                  }
                  else {
                    pcVar10 = "hfs";
                    if (uVar2 != 0x4244) {
                      if (uVar2 < 0x4245) {
                        pcVar10 = "fat";
                        if ((uVar2 != 0x4006) &&
                           ((0x4006 < uVar2 || (pcVar10 = "isofs", (uVar2 & 0xfffffffb) != 0x4000)))
                           ) goto LAB_00102df7;
                      }
                      else {
                        pcVar10 = "hfs+";
                        if (uVar2 != 0x482b) goto LAB_00102df7;
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            pcVar10 = "jffs2";
            if (uVar2 != 0x72b6) {
              if (uVar2 < 0x72b7) {
                pcVar10 = "novell";
                if (uVar2 != 0x564c) {
                  if (uVar2 < 0x564d) {
                    pcVar10 = "minix3";
                    if (((uVar2 != 0x4d5a) && (pcVar10 = "smb", uVar2 != 0x517b)) &&
                       (pcVar10 = "msdos", uVar2 != 0x4d44)) goto LAB_00102df7;
                  }
                  else {
                    pcVar10 = "nfs";
                    if (((uVar2 != 0x6969) && (pcVar10 = "romfs", uVar2 != 0x7275)) &&
                       (pcVar10 = "exofs", uVar2 != 0x5df5)) goto LAB_00102df7;
                  }
                }
              }
              else {
                pcVar10 = "adfs";
                if (uVar2 != 0xadf5) {
                  if (uVar2 < 0xadf6) {
                    pcVar10 = "openprom";
                    if (uVar2 != 0x9fa1) {
                      if (uVar2 < 0x9fa2) {
                        pcVar10 = "isofs";
                        if ((uVar2 != 0x9660) && (pcVar10 = "proc", uVar2 != 0x9fa0))
                        goto LAB_00102df7;
                      }
                      else {
                        pcVar10 = "usbdevfs";
                        if (uVar2 != 0x9fa2) goto LAB_00102df7;
                      }
                    }
                  }
                  else {
                    pcVar10 = "ext2";
                    if (((uVar2 != 0xef51) && (pcVar10 = "ext2/ext3", uVar2 != 0xef53)) &&
                       (pcVar10 = "affs", uVar2 != 0xadff)) goto LAB_00102df7;
                  }
                }
              }
            }
          }
        }
      }
      else {
        pcVar10 = "futexfs";
        if (uVar2 != 0xbad1dea) {
          if (uVar2 < 0xbad1deb) {
            pcVar10 = "xia";
            if (uVar2 != 0x12fd16d) {
              if (uVar2 < 0x12fd16e) {
                pcVar10 = "ceph";
                if (uVar2 != 0xc36400) {
                  if (uVar2 < 0xc36401) {
                    pcVar10 = "efs";
                    if (uVar2 != 0x414a53) {
                      if (uVar2 < 0x414a54) {
                        pcVar10 = "ufs";
                        if ((uVar2 != 0x11954) && (pcVar10 = "cgroupfs", uVar2 != 0x27e0eb))
                        goto LAB_00102df7;
                      }
                      else {
                        pcVar10 = "hostfs";
                        if (uVar2 != 0xc0ffee) goto LAB_00102df7;
                      }
                    }
                  }
                  else {
                    pcVar10 = "v9fs";
                    if (((uVar2 != 0x1021997) && (pcVar10 = "gfs/gfs2", uVar2 != 0x1161970)) &&
                       (pcVar10 = "tmpfs", uVar2 != 0x1021994)) goto LAB_00102df7;
                  }
                }
              }
              else {
                pcVar10 = "coh";
                if (uVar2 != 0x12ff7b7) {
                  if (uVar2 < 0x12ff7b8) {
                    pcVar10 = "sysv4";
                    if (((uVar2 != 0x12ff7b5) && (pcVar10 = "sysv2", uVar2 != 0x12ff7b6)) &&
                       (pcVar10 = "xenix", uVar2 != 0x12ff7b4)) goto LAB_00102df7;
                  }
                  else {
                    pcVar10 = "rdt";
                    if (((uVar2 != 0x7655821) && (pcVar10 = "anon-inode FS", uVar2 != 0x9041934)) &&
                       (pcVar10 = "ibrix", uVar2 != 0x13111a8)) goto LAB_00102df7;
                  }
                }
              }
            }
          }
          else {
            pcVar10 = "exfat";
            if (uVar2 != 0x2011bab0) {
              if (uVar2 < 0x2011bab1) {
                pcVar10 = "udf";
                if (uVar2 != 0x15013346) {
                  if (uVar2 < 0x15013347) {
                    pcVar10 = "inodefs";
                    if (((uVar2 != 0x11307854) && (pcVar10 = "balloon-kvm-fs", uVar2 != 0x13661366))
                       && (pcVar10 = "lustre", uVar2 != 0xbd00bd0)) goto LAB_00102df7;
                  }
                  else {
                    pcVar10 = "fhgfs";
                    if (((uVar2 != 0x19830326) && (pcVar10 = "bfs", uVar2 != 0x1badface)) &&
                       (pcVar10 = "mqueue", uVar2 != 0x19800202)) goto LAB_00102df7;
                  }
                }
              }
              else {
                pcVar10 = "zfs";
                if (uVar2 != 0x2fc12fc1) {
                  if (uVar2 < 0x2fc12fc2) {
                    pcVar10 = "cramfs";
                    if (((uVar2 != 0x28cd3d45) && (pcVar10 = "inotifyfs", uVar2 != 0x2bad1dea)) &&
                       (pcVar10 = "ubifs", uVar2 != 0x24051905)) goto LAB_00102df7;
                  }
                  else {
                    pcVar10 = "befs";
                    if (((uVar2 != 0x42465331) && (pcVar10 = "binfmt_misc", uVar2 != 0x42494e4d)) &&
                       (pcVar10 = "jfs", uVar2 != 0x3153464a)) goto LAB_00102df7;
                  }
                }
              }
            }
          }
        }
      }
    }
    else if (uVar2 == 0x68191122) {
      pcVar10 = "qnx6";
    }
    else if (uVar2 < 0x68191123) {
      pcVar10 = "zsmallocfs";
      if (uVar2 != 0x58295829) {
        if (uVar2 < 0x5829582a) {
          pcVar10 = "reiserfs";
          if (uVar2 != 0x52654973) {
            if (uVar2 < 0x52654974) {
              pcVar10 = "exfs";
              if (uVar2 != 0x45584653) {
                if (uVar2 < 0x45584654) {
                  pcVar10 = "cramfs-wend";
                  if (((uVar2 != 0x453dcd28) && (pcVar10 = "devmem", uVar2 != 0x454d444d)) &&
                     (pcVar10 = "dma-buf-fs", uVar2 != 0x444d4142)) {
LAB_00102df7:
                    __sprintf_chk(buf_5,2,0x1d,"UNKNOWN (0x%lx)");
                    pcVar10 = buf_5;
                  }
                }
                else {
                  pcVar10 = "pidfs";
                  if (((uVar2 != 0x50494446) && (pcVar10 = "pipefs", uVar2 != 0x50495045)) &&
                     (pcVar10 = "gpfs", uVar2 != 0x47504653)) goto LAB_00102df7;
                }
              }
            }
            else {
              pcVar10 = "wslfs";
              if (uVar2 != 0x53464846) {
                if (uVar2 < 0x53464847) {
                  pcVar10 = "m1fs";
                  if (((uVar2 != 0x5346314d) && (pcVar10 = "afs", uVar2 != 0x5346414f)) &&
                     (pcVar10 = "secretmem", uVar2 != 0x5345434d)) goto LAB_00102df7;
                }
                else {
                  pcVar10 = "sockfs";
                  if (uVar2 != 0x534f434b) {
                    if (uVar2 < 0x534f434c) {
                      pcVar10 = "ntfs";
                      if (uVar2 != 0x5346544e) goto LAB_00102df7;
                    }
                    else {
                      pcVar10 = "ufs";
                      if ((uVar2 != 0x54190100) && (pcVar10 = "vzfs", uVar2 != 0x565a4653))
                      goto LAB_00102df7;
                    }
                  }
                }
              }
            }
          }
        }
        else {
          pcVar10 = "configfs";
          if (uVar2 != 0x62656570) {
            if (uVar2 < 0x62656571) {
              pcVar10 = "acfs";
              if (uVar2 != 0x61636673) {
                if (uVar2 < 0x61636674) {
                  pcVar10 = "zonefs";
                  if (uVar2 != 0x5a4f4653) {
                    if (uVar2 < 0x5a4f4654) {
                      pcVar10 = "xfs";
                      if ((uVar2 != 0x58465342) && (pcVar10 = "aafs", uVar2 != 0x5a3c69f0))
                      goto LAB_00102df7;
                    }
                    else {
                      pcVar10 = "sdcardfs";
                      if (uVar2 != 0x5dca2df5) goto LAB_00102df7;
                    }
                  }
                }
                else {
                  pcVar10 = "aufs";
                  if (((uVar2 != 0x61756673) && (pcVar10 = "bdevfs", uVar2 != 0x62646576)) &&
                     (pcVar10 = "pstorefs", uVar2 != 0x6165676c)) goto LAB_00102df7;
                }
              }
            }
            else {
              pcVar10 = "daxfs";
              if (uVar2 != 0x64646178) {
                if (uVar2 < 0x64646179) {
                  pcVar10 = "cgroup2fs";
                  if (((uVar2 != 0x63677270) && (pcVar10 = "debugfs", uVar2 != 0x64626720)) &&
                     (pcVar10 = "sysfs", uVar2 != 0x62656572)) goto LAB_00102df7;
                }
                else {
                  pcVar10 = "fuse";
                  if (((uVar2 != 0x65735546) && (pcVar10 = "rpc_pipefs", uVar2 != 0x67596969)) &&
                     (pcVar10 = "fusectl", uVar2 != 0x65735543)) goto LAB_00102df7;
                }
              }
            }
          }
        }
      }
    }
    else {
      pcVar10 = "vxfs";
      if (uVar2 != 0xa501fcf5) {
        if (uVar2 < 0xa501fcf6) {
          pcVar10 = "ocfs2";
          if (uVar2 != 0x7461636f) {
            if (uVar2 < 0x74616370) {
              pcVar10 = "securityfs";
              if (uVar2 != 0x73636673) {
                if (uVar2 < 0x73636674) {
                  pcVar10 = "nfsd";
                  if (uVar2 != 0x6e667364) {
                    if (uVar2 < 0x6e667365) {
                      pcVar10 = "k-afs";
                      if ((uVar2 != 0x6b414653) && (pcVar10 = "binderfs", uVar2 != 0x6c6f6f70))
                      goto LAB_00102df7;
                    }
                    else {
                      pcVar10 = "nsfs";
                      if (uVar2 != 0x6e736673) goto LAB_00102df7;
                    }
                  }
                }
                else {
                  pcVar10 = "btrfs_test";
                  if (((uVar2 != 0x73727279) && (pcVar10 = "coda", uVar2 != 0x73757245)) &&
                     (pcVar10 = "squashfs", uVar2 != 0x73717368)) goto LAB_00102df7;
                }
              }
            }
            else {
              pcVar10 = "prl_fs";
              if (uVar2 != 0x7c7c6673) {
                if (uVar2 < 0x7c7c6674) {
                  pcVar10 = "vboxsf";
                  if (((uVar2 != 0x786f4256) && (pcVar10 = "overlayfs", uVar2 != 0x794c7630)) &&
                     (pcVar10 = "tracefs", uVar2 != 0x74726163)) goto LAB_00102df7;
                }
                else {
                  pcVar10 = "btrfs";
                  if (((uVar2 != 0x9123683e) && (pcVar10 = "hugetlbfs", uVar2 != 0x958458f6)) &&
                     (pcVar10 = "ramfs", uVar2 != 0x858458f6)) goto LAB_00102df7;
                }
              }
            }
          }
        }
        else {
          pcVar10 = "bpf_fs";
          if (uVar2 != 0xcafe4a11) {
            if (uVar2 < 0xcafe4a12) {
              pcVar10 = "snfs";
              if (uVar2 != 0xbeefdead) {
                if (uVar2 < 0xbeefdeae) {
                  pcVar10 = "xenfs";
                  if (((uVar2 != 0xabba1974) && (pcVar10 = "vmhgfs", uVar2 != 0xbacbacbc)) &&
                     (pcVar10 = "panfs", uVar2 != 0xaad7aaea)) goto LAB_00102df7;
                }
                else {
                  pcVar10 = "logfs";
                  if (((uVar2 != 0xc97e8168) && (pcVar10 = "bcachefs", uVar2 != 0xca451a4e)) &&
                     (pcVar10 = "ppc-cmm-fs", uVar2 != 0xc7571590)) goto LAB_00102df7;
                }
              }
            }
            else {
              pcVar10 = "selinux";
              if (uVar2 != 0xf97cff8c) {
                if (uVar2 < 0xf97cff8d) {
                  pcVar10 = "erofs";
                  if (((uVar2 != 0xe0f5e1e2) && (pcVar10 = "f2fs", uVar2 != 0xf2f52010)) &&
                     (pcVar10 = "efivarfs", uVar2 != 0xde5e81e4)) goto LAB_00102df7;
                }
                else {
                  pcVar10 = "smb2";
                  if (((uVar2 != 0xfe534d42) && (pcVar10 = "cifs", uVar2 != 0xff534d42)) &&
                     (pcVar10 = "hpfs", uVar2 != 0xf995e849)) goto LAB_00102df7;
                }
              }
            }
          }
        }
      }
    }
    out_string(param_1,param_2,pcVar10);
    break;
  default:
    pcVar10 = _stdout->_IO_write_ptr;
    if (pcVar10 < _stdout->_IO_write_end) {
      _stdout->_IO_write_ptr = pcVar10 + 1;
      *pcVar10 = '?';
    }
    else {
      __overflow(_stdout,0x3f);
    }
    break;
  case 0x61:
    pcVar10 = (char *)(param_1 + 1);
    local_40 = param_7[4];
    pcVar11 = (char *)(param_1 + param_2);
    pcVar4 = pcVar10;
    if (pcVar10 < pcVar11) {
LAB_00102875:
      cVar1 = *pcVar4;
      pcVar9 = strchr("\'-+ #0I",(int)cVar1);
      if (pcVar9 != (char *)0x0) goto LAB_00102850;
      if (pcVar11 <= pcVar4) goto LAB_001028db;
      uVar8 = (long)pcVar11 - (long)pcVar4;
      if (uVar8 - 1 < 7) {
        uVar5 = 0;
LAB_001028c0:
        do {
          pcVar10[uVar5] = pcVar4[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
      }
      else {
        uVar5 = 0;
        if ((ulong)((long)pcVar10 - (long)(pcVar4 + 1)) < 0xf) goto LAB_001028c0;
        pcVar9 = pcVar10;
        if (0xe < uVar8 - 1) {
          uVar6 = uVar8 & 0xfffffffffffffff0;
          do {
            uVar3 = *(undefined8 *)(pcVar4 + uVar5 + 8);
            *(undefined8 *)(pcVar10 + uVar5) = *(undefined8 *)(pcVar4 + uVar5);
            *(undefined8 *)(pcVar10 + uVar5 + 8) = uVar3;
            uVar5 = uVar5 + 0x10;
            pcVar11 = pcVar4;
          } while (uVar5 != uVar6);
LAB_0010308d:
          pcVar4 = pcVar11 + uVar6;
          pcVar9 = pcVar10 + uVar6;
          if (uVar8 != uVar6) {
            uVar5 = uVar8 - uVar6;
            if (6 < (uVar8 - uVar6) - 1) goto LAB_001030af;
            goto LAB_001030cf;
          }
          goto LAB_001028d8;
        }
LAB_00103577:
        uVar6 = 0;
        uVar5 = uVar8;
        pcVar10 = pcVar9;
        pcVar11 = pcVar4;
LAB_001030af:
        *(undefined8 *)(pcVar10 + uVar6) = *(undefined8 *)(pcVar11 + uVar6);
        pcVar4 = pcVar4 + (uVar5 & 0xfffffffffffffff8);
        pcVar9 = pcVar9 + (uVar5 & 0xfffffffffffffff8);
        if ((uVar5 & 7) != 0) {
LAB_001030cf:
          local_48 = (char *)(param_1 + param_2);
          *pcVar9 = *pcVar4;
          if (((pcVar4 + 1 < local_48) && (pcVar9[1] = pcVar4[1], pcVar4 + 2 < local_48)) &&
             (((pcVar9[2] = pcVar4[2], pcVar4 + 3 < local_48 &&
               ((pcVar9[3] = pcVar4[3], pcVar4 + 4 < local_48 &&
                (pcVar9[4] = pcVar4[4], pcVar4 + 5 < local_48)))) &&
              (pcVar9[5] = pcVar4[5], pcVar4 + 6 < local_48)))) {
LAB_00103149:
            pcVar9[6] = pcVar4[6];
          }
        }
      }
      goto LAB_001028d8;
    }
    goto LAB_001028db;
  case 0x62:
    pcVar10 = (char *)(param_1 + 1);
    local_40 = param_7[2];
    pcVar4 = pcVar10;
    if (pcVar10 < (char *)(param_1 + param_2)) {
LAB_00102961:
      local_48 = (char *)(param_1 + param_2);
      cVar1 = *pcVar4;
      pcVar11 = strchr("\'-+ #0I",(int)cVar1);
      if (pcVar11 != (char *)0x0) goto LAB_00102938;
      if (local_48 <= pcVar4) goto LAB_001028db;
      uVar8 = (long)local_48 - (long)pcVar4;
      if (6 < uVar8 - 1) {
        uVar5 = 0;
        if ((ulong)((long)pcVar10 - (long)(pcVar4 + 1)) < 0xf) goto LAB_001029b0;
        pcVar9 = pcVar10;
        if (0xe < uVar8 - 1) {
          uVar6 = uVar8 & 0xfffffffffffffff0;
          do {
            uVar3 = *(undefined8 *)(pcVar4 + uVar5 + 8);
            *(undefined8 *)(pcVar10 + uVar5) = *(undefined8 *)(pcVar4 + uVar5);
            *(undefined8 *)(pcVar10 + uVar5 + 8) = uVar3;
            uVar5 = uVar5 + 0x10;
            pcVar11 = pcVar4;
          } while (uVar6 != uVar5);
          goto LAB_0010308d;
        }
        goto LAB_00103577;
      }
      uVar5 = 0;
LAB_001029b0:
      do {
        pcVar10[uVar5] = pcVar4[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
      goto LAB_001028d8;
    }
    goto LAB_001028db;
  case 99:
    lVar7 = param_7[5];
LAB_00102751:
    out_uint_isra_0(param_1,param_2,lVar7);
    break;
  case 100:
    pcVar10 = (char *)(param_1 + 1);
    local_40 = param_7[6];
    pcVar11 = pcVar10;
    if (pcVar10 < (char *)(param_1 + param_2)) {
LAB_00102a39:
      local_48 = (char *)(param_1 + param_2);
      cVar1 = *pcVar11;
      pcVar4 = strchr("\'-+ #0I",(int)cVar1);
      if (pcVar4 != (char *)0x0) goto LAB_00102a10;
      if (local_48 <= pcVar11) goto LAB_001028db;
      uVar8 = (long)local_48 - (long)pcVar11;
      if (uVar8 - 1 < 7) {
        uVar5 = 0;
LAB_00102a90:
        do {
          pcVar10[uVar5] = pcVar11[uVar5];
          uVar5 = uVar5 + 1;
        } while (uVar8 != uVar5);
      }
      else {
        uVar5 = 0;
        if ((ulong)((long)pcVar10 - (long)(pcVar11 + 1)) < 0xf) goto LAB_00102a90;
        pcVar9 = pcVar10;
        pcVar4 = pcVar11;
        if (0xe < uVar8 - 1) {
          uVar6 = uVar8 & 0xfffffffffffffff0;
          do {
            uVar3 = *(undefined8 *)(pcVar11 + uVar5 + 8);
            *(undefined8 *)(pcVar10 + uVar5) = *(undefined8 *)(pcVar11 + uVar5);
            *(undefined8 *)(pcVar10 + uVar5 + 8) = uVar3;
            uVar5 = uVar5 + 0x10;
          } while (uVar6 != uVar5);
          pcVar4 = pcVar11 + uVar6;
          pcVar9 = pcVar10 + uVar6;
          if (uVar6 != uVar8) {
LAB_00102fa7:
            uVar5 = uVar8 - uVar6;
            if (6 < (uVar8 - uVar6) - 1) goto LAB_00102fb7;
            goto LAB_00102fd7;
          }
          goto LAB_001028d8;
        }
LAB_00103567:
        uVar6 = 0;
        uVar5 = uVar8;
        pcVar10 = pcVar9;
        pcVar11 = pcVar4;
LAB_00102fb7:
        *(undefined8 *)(pcVar10 + uVar6) = *(undefined8 *)(pcVar11 + uVar6);
        pcVar4 = pcVar4 + (uVar5 & 0xfffffffffffffff8);
        pcVar9 = pcVar9 + (uVar5 & 0xfffffffffffffff8);
        if ((uVar5 & 7) != 0) {
LAB_00102fd7:
          local_48 = (char *)(param_1 + param_2);
          *pcVar9 = *pcVar4;
          if (((pcVar4 + 1 < local_48) && (pcVar9[1] = pcVar4[1], pcVar4 + 2 < local_48)) &&
             ((pcVar9[2] = pcVar4[2], pcVar4 + 3 < local_48 &&
              (((pcVar9[3] = pcVar4[3], pcVar4 + 4 < local_48 &&
                (pcVar9[4] = pcVar4[4], pcVar4 + 5 < local_48)) &&
               (pcVar9[5] = pcVar4[5], pcVar4 + 6 < local_48)))))) goto LAB_00103149;
        }
      }
      goto LAB_001028d8;
    }
    goto LAB_001028db;
  case 0x66:
    pcVar10 = (char *)(param_1 + 1);
    local_40 = param_7[3];
    pcVar11 = pcVar10;
    if (pcVar10 < (char *)(param_1 + param_2)) {
LAB_00102b09:
      local_48 = (char *)(param_1 + param_2);
      cVar1 = *pcVar11;
      pcVar4 = strchr("\'-+ #0I",(int)cVar1);
      if (pcVar4 != (char *)0x0) goto LAB_00102ae0;
      if (pcVar11 < local_48) {
        uVar8 = (long)local_48 - (long)pcVar11;
        if (uVar8 - 1 < 7) {
          uVar5 = 0;
          goto LAB_00102b60;
        }
        uVar5 = 0;
        if ((ulong)((long)pcVar10 - (long)(pcVar11 + 1)) < 0xf) goto LAB_00102b60;
        pcVar9 = pcVar10;
        pcVar4 = pcVar11;
        if (0xe < uVar8 - 1) {
          uVar6 = uVar8 & 0xfffffffffffffff0;
          do {
            uVar3 = *(undefined8 *)(pcVar11 + uVar5 + 8);
            *(undefined8 *)(pcVar10 + uVar5) = *(undefined8 *)(pcVar11 + uVar5);
            *(undefined8 *)(pcVar10 + uVar5 + 8) = uVar3;
            uVar5 = uVar5 + 0x10;
          } while (uVar6 != uVar5);
          pcVar4 = pcVar11 + uVar6;
          pcVar9 = pcVar10 + uVar6;
          if (uVar8 != uVar6) goto LAB_00102fa7;
          goto LAB_001028d8;
        }
        goto LAB_00103567;
      }
    }
LAB_001028db:
    pcVar10[0] = 'j';
    pcVar10[1] = 'd';
LAB_001028e5:
    pcVar10[2] = '\0';
    __printf_chk(2,param_1,local_40);
    break;
  case 0x69:
    pcVar10 = (char *)(param_1 + 1);
    local_40 = CONCAT44((int)param_7[8],*(undefined4 *)((long)param_7 + 0x44));
    pcVar4 = (char *)(param_1 + param_2);
    pcVar11 = pcVar10;
    if (pcVar10 < pcVar4) {
LAB_00102be5:
      cVar1 = *pcVar11;
      pcVar9 = strchr("\'-+ #0I",(int)cVar1);
      if (pcVar9 != (char *)0x0) goto LAB_00102bc0;
      if (pcVar4 <= pcVar11) goto LAB_00102c46;
      uVar8 = (long)pcVar4 - (long)pcVar11;
      if (uVar8 - 1 < 7) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0;
        if (0xe < (ulong)((long)pcVar10 - (long)(pcVar11 + 1))) {
          pcVar9 = pcVar10;
          pcVar4 = pcVar11;
          if (uVar8 - 1 < 0xf) {
LAB_00103557:
            uVar6 = 0;
            uVar5 = uVar8;
            pcVar10 = pcVar9;
            pcVar11 = pcVar4;
LAB_00102ebf:
            *(undefined8 *)(pcVar10 + uVar6) = *(undefined8 *)(pcVar11 + uVar6);
            pcVar4 = pcVar4 + (uVar5 & 0xfffffffffffffff8);
            pcVar9 = pcVar9 + (uVar5 & 0xfffffffffffffff8);
            if ((uVar5 & 7) != 0) {
LAB_00102edf:
              local_48 = (char *)(param_1 + param_2);
              *pcVar9 = *pcVar4;
              if ((((pcVar4 + 1 < local_48) && (pcVar9[1] = pcVar4[1], pcVar4 + 2 < local_48)) &&
                  (pcVar9[2] = pcVar4[2], pcVar4 + 3 < local_48)) &&
                 (((pcVar9[3] = pcVar4[3], pcVar4 + 4 < local_48 &&
                   (pcVar9[4] = pcVar4[4], pcVar4 + 5 < local_48)) &&
                  (pcVar9[5] = pcVar4[5], pcVar4 + 6 < local_48)))) {
                pcVar9[6] = pcVar4[6];
              }
            }
          }
          else {
            uVar6 = uVar8 & 0xfffffffffffffff0;
            do {
              uVar3 = *(undefined8 *)(pcVar11 + uVar5 + 8);
              *(undefined8 *)(pcVar10 + uVar5) = *(undefined8 *)(pcVar11 + uVar5);
              *(undefined8 *)(pcVar10 + uVar5 + 8) = uVar3;
              uVar5 = uVar5 + 0x10;
            } while (uVar6 != uVar5);
            pcVar4 = pcVar11 + uVar6;
            pcVar9 = pcVar10 + uVar6;
            if (uVar6 != uVar8) {
LAB_00102eaf:
              uVar5 = uVar8 - uVar6;
              if (6 < (uVar8 - uVar6) - 1) goto LAB_00102ebf;
              goto LAB_00102edf;
            }
          }
          goto LAB_00102c43;
        }
      }
      do {
        pcVar10[uVar5] = pcVar11[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar8 != uVar5);
LAB_00102c43:
      pcVar10 = pcVar10 + uVar8;
    }
    goto LAB_00102c46;
  case 0x6c:
    out_uint_isra_0(param_1,param_2,param_7[10]);
    break;
  case 0x6e:
    out_string(param_1,param_2,param_6);
    break;
  case 0x73:
    out_uint_isra_0(param_1,param_2,*param_7);
    break;
  case 0x74:
    pcVar10 = (char *)(param_1 + 1);
    local_40 = (ulong)*(uint *)(param_7 + 0xb);
    pcVar11 = pcVar10;
    if (pcVar10 < (char *)(param_1 + param_2)) {
LAB_00102cf1:
      local_48 = (char *)(param_1 + param_2);
      cVar1 = *pcVar11;
      pcVar4 = strchr("\'-+ #0I",(int)cVar1);
      if (pcVar4 != (char *)0x0) goto LAB_00102cc8;
      if (local_48 <= pcVar11) goto LAB_00102c46;
      uVar8 = (long)local_48 - (long)pcVar11;
      if (6 < uVar8 - 1) {
        uVar5 = 0;
        if ((ulong)((long)pcVar10 - (long)(pcVar11 + 1)) < 0xf) goto LAB_00102d40;
        pcVar9 = pcVar10;
        pcVar4 = pcVar11;
        if (0xe < uVar8 - 1) {
          uVar6 = uVar8 & 0xfffffffffffffff0;
          do {
            uVar3 = *(undefined8 *)(pcVar11 + uVar5 + 8);
            *(undefined8 *)(pcVar10 + uVar5) = *(undefined8 *)(pcVar11 + uVar5);
            *(undefined8 *)(pcVar10 + uVar5 + 8) = uVar3;
            uVar5 = uVar5 + 0x10;
          } while (uVar5 != uVar6);
          pcVar4 = pcVar11 + uVar6;
          pcVar9 = pcVar10 + uVar6;
          if (uVar8 != uVar6) goto LAB_00102eaf;
          goto LAB_00102c43;
        }
        goto LAB_00103557;
      }
      uVar5 = 0;
LAB_00102d40:
      do {
        pcVar10[uVar5] = pcVar11[uVar5];
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar8);
      goto LAB_00102c43;
    }
LAB_00102c46:
    pcVar10[0] = 'j';
    pcVar10[1] = 'x';
    goto LAB_001028e5;
  }
  return 0;
LAB_00102cc8:
  pcVar4 = strchr("-#0",(int)cVar1);
  if (pcVar4 != (char *)0x0) {
    *pcVar10 = cVar1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar11 = pcVar11 + 1;
  if (local_48 == pcVar11) goto LAB_00102c46;
  goto LAB_00102cf1;
LAB_00102bc0:
  pcVar9 = strchr("-#0",(int)cVar1);
  if (pcVar9 != (char *)0x0) {
    *pcVar10 = cVar1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar11 = pcVar11 + 1;
  if (pcVar4 == pcVar11) goto LAB_00102c46;
  goto LAB_00102be5;
LAB_00102ae0:
  pcVar4 = strchr("\'-+ 0",(int)cVar1);
  if (pcVar4 != (char *)0x0) {
    *pcVar10 = cVar1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar11 = pcVar11 + 1;
  if (local_48 == pcVar11) goto LAB_001028db;
  goto LAB_00102b09;
LAB_00102b60:
  do {
    pcVar10[uVar5] = pcVar11[uVar5];
    uVar5 = uVar5 + 1;
  } while (uVar5 != uVar8);
LAB_001028d8:
  pcVar10 = pcVar10 + uVar8;
  goto LAB_001028db;
LAB_00102a10:
  pcVar4 = strchr("\'-+ 0",(int)cVar1);
  if (pcVar4 != (char *)0x0) {
    *pcVar10 = cVar1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar11 = pcVar11 + 1;
  if (local_48 == pcVar11) goto LAB_001028db;
  goto LAB_00102a39;
LAB_00102938:
  pcVar11 = strchr("\'-+ 0",(int)cVar1);
  if (pcVar11 != (char *)0x0) {
    *pcVar10 = cVar1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar4 = pcVar4 + 1;
  if (local_48 == pcVar4) goto LAB_001028db;
  goto LAB_00102961;
LAB_00102850:
  pcVar9 = strchr("\'-+ 0",(int)cVar1);
  if (pcVar9 != (char *)0x0) {
    *pcVar10 = cVar1;
    pcVar10 = pcVar10 + 1;
  }
  pcVar4 = pcVar4 + 1;
  if (pcVar11 == pcVar4) goto LAB_001028db;
  goto LAB_00102875;
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
    goto LAB_00103e3a;
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
  __printf_chk(2,uVar5,&_LC164);
  pcVar4 = "[";
  local_a8 = &_LC163;
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
    puVar7 = &_LC164;
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) goto LAB_00104205;
    uVar5 = dcgettext(0,"Full documentation <%s%s>\n",5);
    pcVar4 = " invocation";
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC164);
  }
  else {
    uVar5 = dcgettext(0,"\n%s online help: <%s>\n",5);
    __printf_chk(2,uVar5,"GNU coreutils","https://www.gnu.org/software/coreutils/");
    pcVar4 = setlocale(5,(char *)0x0);
    if (pcVar4 != (char *)0x0) {
LAB_00104205:
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
    __printf_chk(2,uVar5,"https://www.gnu.org/software/coreutils/",&_LC164);
    if (puVar7 == &_LC164) {
      pcVar4 = " invocation";
    }
  }
  uVar5 = dcgettext(0,"or available locally via: info \'(coreutils) %s%s\'\n",5);
  __printf_chk(2,uVar5,puVar7,pcVar4);
LAB_00103e3a:
                    /* WARNING: Subroutine does not return */
  exit(param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte main(int param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  lconv *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *__haystack;
  undefined8 uVar8;
  int *piVar9;
  char *pcVar10;
  long lVar11;
  byte bVar12;
  long in_FS_OFFSET;
  statvfs local_b8;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  set_program_name(*param_2);
  setlocale(6,"");
  bindtextdomain("coreutils","/usr/local/share/locale");
  pcVar10 = "c:fLt";
  textdomain("coreutils");
  plVar5 = localeconv();
  decimal_point = plVar5->decimal_point;
  if (*decimal_point == '\0') {
    decimal_point = ".";
  }
  bVar12 = 0;
  decimal_point_len = strlen(decimal_point);
  atexit((__func *)&close_stdout);
  uVar2 = 0;
  __haystack = (char *)0x0;
  while (iVar4 = getopt_long(param_1,param_2,"c:fLt",long_options,0), pcVar7 = __haystack,
        iVar4 != -1) {
    if (iVar4 == 99) {
      interpret_backslash_escapes = 0;
      trailing_delim = &_LC202;
      __haystack = _optarg;
    }
    else if (iVar4 < 100) {
      if (iVar4 == 0) {
        lVar11 = __xargmatch_internal("--cached",_optarg,cached_args,cached_modes,4,_argmatch_die,1)
        ;
        iVar4 = *(int *)(cached_modes + lVar11 * 4);
        if (iVar4 == 1) {
          force_sync = 1;
          dont_sync = 0;
        }
        else if (iVar4 == 2) {
          force_sync = 0;
          dont_sync = 1;
        }
        else if (iVar4 == 0) {
          force_sync = 0;
          dont_sync = 0;
        }
      }
      else {
        if (iVar4 < 1) {
          if (iVar4 == -0x83) {
            uVar6 = proper_name_lite("Michael Meskes","Michael Meskes");
            version_etc(_stdout,&_LC164,"GNU coreutils",_Version,uVar6,0);
                    /* WARNING: Subroutine does not return */
            exit(0);
          }
          if (iVar4 != -0x82) goto LAB_001063c2;
          usage(0);
          goto LAB_001063a1;
        }
        if (iVar4 != 0x4c) goto LAB_001063c2;
        follow_links = 1;
      }
    }
    else if (iVar4 == 0x74) {
      uVar2 = 1;
    }
    else if (iVar4 == 0x80) {
      interpret_backslash_escapes = 1;
      trailing_delim = &_LC15;
      __haystack = _optarg;
    }
    else {
      if (iVar4 != 0x66) goto LAB_001063c2;
      bVar12 = 1;
    }
  }
  if (_optind == param_1) {
LAB_001063a1:
    uVar6 = dcgettext(0,"missing operand",5);
    error(0,0,uVar6);
LAB_001063c2:
    usage(1);
  }
  else {
    if (__haystack == (char *)0x0) {
      pcVar7 = (char *)default_format(bVar12,uVar2,0);
      __haystack = (char *)default_format(bVar12,uVar2,1);
      goto LAB_00106278;
    }
    pcVar10 = strstr(__haystack,"%N");
    if (pcVar10 == (char *)0x0) goto LAB_00106278;
    pcVar10 = getenv("QUOTING_STYLE");
    if (pcVar10 == (char *)0x0) {
      set_quoting_style(0,4);
      goto LAB_00106278;
    }
    iVar4 = argmatch(pcVar10,&quoting_style_args,&quoting_style_vals,4);
    if (-1 < iVar4) {
      set_quoting_style(0,*(undefined4 *)(&quoting_style_vals + (long)iVar4 * 4));
      goto LAB_00106278;
    }
  }
  set_quoting_style(0,4);
  uVar6 = quote(pcVar10);
  uVar8 = dcgettext(0,"ignoring invalid value of environment variable QUOTING_STYLE: %s",5);
  error(0,0,uVar8,uVar6);
LAB_00106278:
  lVar11 = (long)_optind;
  if (_optind < param_1) {
    if (bVar12 == 0) {
      bVar12 = 1;
      do {
        puVar1 = param_2 + lVar11;
        lVar11 = lVar11 + 1;
        bVar3 = do_stat(*puVar1,pcVar7,__haystack);
        bVar12 = bVar12 & bVar3;
      } while ((int)lVar11 < param_1);
    }
    else {
      do {
        pcVar10 = (char *)param_2[lVar11];
        iVar4 = strcmp(pcVar10,"-");
        if (iVar4 == 0) {
          uVar6 = quotearg_style(4,pcVar10);
          uVar8 = dcgettext(0,"using %s to denote standard input does not work in file system mode",
                            5);
          error(0,0,uVar8,uVar6);
          bVar3 = 0;
        }
        else {
          iVar4 = statvfs(pcVar10,&local_b8);
          if (iVar4 == 0) {
            bVar3 = print_it(pcVar7,0xffffffff,pcVar10,print_statfs);
            bVar3 = bVar3 ^ 1;
          }
          else {
            uVar6 = quotearg_style(4,pcVar10);
            uVar8 = dcgettext(0,"cannot read file system information for %s",5);
            piVar9 = __errno_location();
            error(0,*piVar9,uVar8,uVar6);
            bVar3 = 0;
          }
        }
        lVar11 = lVar11 + 1;
        bVar12 = bVar12 & bVar3;
      } while ((int)lVar11 < param_1);
    }
  }
  else {
    bVar12 = 1;
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar12 ^ 1;
}


